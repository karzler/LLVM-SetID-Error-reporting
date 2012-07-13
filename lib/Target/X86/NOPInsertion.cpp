//===- NOPInsertion.cpp - Insert NOPs between instructions    ---*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file contains the NOPInsertion pass.
//
//===----------------------------------------------------------------------===//

#define DEBUG_TYPE "nop-insertion"
#include "X86InstrBuilder.h"
#include "X86InstrInfo.h"
#include "llvm/Analysis/ProfileInfo.h"
#include "llvm/Analysis/ProfileInfoLoader.h"
#include "llvm/CodeGen/MachineFunctionPass.h"
#include "llvm/CodeGen/MachineInstrBuilder.h"
#include "llvm/CodeGen/MachineModuleInfo.h"
#include "llvm/CodeGen/MachineRegisterInfo.h"
#include "llvm/MultiCompiler/MultiCompilerOptions.h"
#include "llvm/Support/Allocator.h"
#include "llvm/MultiCompiler/AESRandomNumberGenerator.h"
#include "llvm/Target/TargetInstrInfo.h"
#include "llvm/ADT/Statistic.h"

#include <cstdio>

using namespace llvm;
using namespace multicompiler::Random;

/* If you rename this, be sure to update the text in projects/test-suite/TEST.multicompilerstats.report */
STATISTIC(PreNOPInstructionCount,  "multicompiler: Pre-NOP insertion instruction count");
STATISTIC(InsertedInstructions,    "multicompiler: Total number of inserted instructions");
STATISTIC(NumNOPInstructions,      "multicompiler: Number of inserted NOP instructions");
STATISTIC(NumMovEBPInstructions,   "multicompiler: Number of inserted MOV EBP, EBP instructions");
STATISTIC(NumMovESPInstructions,   "multicompiler: Number of inserted MOV ESP, ESP instructions");
STATISTIC(NumLeaESIInstructions,   "multicompiler: Number of inserted LEA ESI, ESI instructions");
STATISTIC(NumLeaEDIInstructions,   "multicompiler: Number of inserted LEA EDI, EDI instructions");

namespace {
class NOPInsertionPass : public MachineFunctionPass {

  static char ID;

  bool is64Bit;

  void IncrementCounters(int const code);
public:
  NOPInsertionPass(bool is64Bit_) :
      MachineFunctionPass(ID), is64Bit(is64Bit_) {
  }

  virtual bool runOnMachineFunction(MachineFunction &MF);

  virtual const char *getPassName() const {
    return "NOP insertion pass";
  }

  virtual void getAnalysisUsage(AnalysisUsage &AU) const {
    AU.setPreservesCFG();
    if (multicompiler::ProfiledNOPInsertion == 2) {
      AU.addRequired<ProfileInfo>();
    }
    MachineFunctionPass::getAnalysisUsage(AU);
  }
};
}

char NOPInsertionPass::ID = 0;

enum { NOP, MOV_EBP, MOV_ESP,
       LEA_ESI, LEA_EDI, MAX_NOPS };

static const unsigned nopRegs[MAX_NOPS][2] = {
    { 0, 0 },
    { X86::EBP, X86::RBP },
    { X86::ESP, X86::RSP },
    { X86::ESI, X86::RSI },
    { X86::EDI, X86::RDI },
};

void NOPInsertionPass::IncrementCounters(int const code) {
  ++InsertedInstructions;
  switch(code) {
  case NOP:      ++NumNOPInstructions; break;
  case MOV_EBP:  ++NumMovEBPInstructions; break;
  case MOV_ESP:  ++NumMovESPInstructions; break;
  case LEA_ESI:  ++NumLeaESIInstructions; break;
  case LEA_EDI:  ++NumLeaEDIInstructions; break;
  }
}

bool NOPInsertionPass::runOnMachineFunction(MachineFunction &Fn) {
  const TargetInstrInfo *TII = Fn.getTarget().getInstrInfo();
  ProfileInfo *PI = getAnalysisIfAvailable<ProfileInfo>();
  double MaxCount = 0.0;
  if (PI) {
    PI->repair(Fn.getFunction());
    for (MachineFunction::iterator BB = Fn.begin(), E = Fn.end();
         BB != E; ++BB) {
      MaxCount = std::max(MaxCount, PI->getExecutionCount(BB->getBasicBlock()));
    }
  }
  for (MachineFunction::iterator BB = Fn.begin(), E = Fn.end(); BB != E; ++BB) {
    PreNOPInstructionCount += BB->size();
    unsigned int BBProb = multicompiler::NOPInsertionPercentage;
    if (multicompiler::ProfiledNOPInsertion == 2 && PI && MaxCount > 0.0) {
      // TODO: add the log function
      double w = PI->getExecutionCount(BB->getBasicBlock());
      if (w != ProfileInfo::MissingValue) {
        double alpha;
        if (multicompiler::NOPInsertionUseLog) {
          alpha = log(1.0 + w) / log(1.0 + MaxCount);
        } else {
          alpha = w / MaxCount;
        }
        BBProb -= (int)(alpha * multicompiler::NOPInsertionRange);
        printf("BB:%p w:%lf alpha:%lf Prob:%d\n", &*BB, w, alpha, BBProb);
      }
    }
    for (MachineBasicBlock::iterator I = BB->begin(); I != BB->end(); ++I) {
      for (unsigned int i = 0; i < multicompiler::MaxNOPsPerInstruction; i++) {
        unsigned int Roll = AESRandomNumberGenerator::Generator().randnext(100);
        if (Roll >= BBProb)
          continue;

        int NOPCode = AESRandomNumberGenerator::Generator().randnext(MAX_NOPS);

        // TODO(ahomescu): figure out if we need to preserve kill information
        MachineInstr *NewMI = NULL;
        unsigned reg = nopRegs[NOPCode][!!is64Bit];
        switch (NOPCode) {
        case NOP:
          NewMI = BuildMI(Fn, I->getDebugLoc(), TII->get(X86::NOOP));
          break;

        case MOV_EBP:
        case MOV_ESP: {
          unsigned opc = is64Bit ? X86::MOV64rr : X86::MOV32rr;
          NewMI = BuildMI(Fn, I->getDebugLoc(), TII->get(opc), reg)
            .addReg(reg);
          break;
        }

        case LEA_ESI:
        case LEA_EDI: {
          unsigned opc = is64Bit ? X86::LEA64r : X86::LEA32r;
          NewMI = addRegOffset(BuildMI(Fn, I->getDebugLoc(),
                                       TII->get(opc), reg),
                               reg, false, 0);
          break;
        }
        }

        if (NewMI != NULL) {
          BB->insert(I, NewMI);
          IncrementCounters(NOPCode);
        }
      }
    }
  }

  return true;
}

FunctionPass *llvm::createNOPInsertionPass(bool is64Bit) {
  return new NOPInsertionPass(is64Bit);
}


