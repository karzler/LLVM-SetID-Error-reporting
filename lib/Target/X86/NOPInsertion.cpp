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
#include "llvm/CodeGen/MachineFunctionPass.h"
#include "llvm/CodeGen/MachineInstrBuilder.h"
#include "llvm/CodeGen/MachineRegisterInfo.h"
#include "llvm/MultiCompiler/MultiCompilerOptions.h"
#include "llvm/Support/Allocator.h"
#include "llvm/MultiCompiler/AESRandomNumberGenerator.h"
#include "llvm/Target/TargetInstrInfo.h"
#include "llvm/ADT/Statistic.h"

using namespace llvm;
using namespace multicompiler::Random;

STATISTIC(InsertionOpportunities, "multicompiler: # of NOP insertion opportunities");
STATISTIC(InsertedInstructions, "multicompiler: # of inserted instructions");

namespace {
class NOPInsertionPass : public MachineFunctionPass {

  static char ID;

  bool is64Bit;

public:
  NOPInsertionPass(bool is64Bit_) :
      MachineFunctionPass(ID), is64Bit(is64Bit_) {}

  virtual bool runOnMachineFunction(MachineFunction &MF);

  virtual const char *getPassName() const {
    return "NOP insertion pass";
  }

};
}

char NOPInsertionPass::ID = 0;

enum { NOP, MOV_EBP, XCHG_EBP, MOV_ESP, XCHG_ESP,
       LEA_ESI, LEA_EDI, MAX_NOPS };

bool NOPInsertionPass::runOnMachineFunction(MachineFunction &Fn) {
  const TargetInstrInfo *TII = Fn.getTarget().getInstrInfo();
  for (MachineFunction::iterator BB = Fn.begin(), E = Fn.end(); BB != E; ++BB)
    for (MachineBasicBlock::iterator I = BB->begin(); I != BB->end(); ++I) {
      ++InsertionOpportunities;
      int NOPCode = AESRandomNumberGenerator::Generator().random() % MAX_NOPS;
      unsigned int Roll = AESRandomNumberGenerator::Generator().random() % 100;
      if (Roll >= multicompiler::NOPInsertionPercentage)
        continue;

      ++InsertedInstructions;
      // TODO(ahomescu): figure out if we need to preserve kill information
      MachineInstr *NewMI = NULL;
      switch (NOPCode) {
      case NOP:
        NewMI = BuildMI(Fn, I->getDebugLoc(), TII->get(X86::NOOP));
        break;

      case MOV_EBP:
      case MOV_ESP: {
        unsigned reg = (NOPCode == MOV_EBP) ? X86::EBP : X86::ESP;
        unsigned opc = is64Bit ? X86::MOV64rr : X86::MOV32rr;
        NewMI = BuildMI(Fn, I->getDebugLoc(), TII->get(opc), reg)
          .addReg(reg);
        break;
      }

      case XCHG_EBP:
      case XCHG_ESP: {
        unsigned reg = (NOPCode == XCHG_EBP) ? X86::EBP : X86::ESP;
        unsigned opc = is64Bit ? X86::XCHG64rr : X86::XCHG32rr;
        NewMI = BuildMI(Fn, I->getDebugLoc(), TII->get(opc), reg)
          .addReg(reg).addReg(reg);
        break;
      }

      case LEA_ESI:
      case LEA_EDI: {
        unsigned reg = (NOPCode == LEA_ESI) ? X86::ESI : X86::EDI;
        unsigned opc = is64Bit ? X86::LEA64r : X86::LEA32r;
        NewMI = addRegOffset(BuildMI(Fn, I->getDebugLoc(),
                                     TII->get(opc), reg),
                             reg, false, 0);
        break;
      }
      }

      if (NewMI != NULL) {
        BB->insert(I, NewMI);
      }
    }
  //printf("Opportunities: %d Inserted: %d\n", multicompiler::NOPInsertionOpportunities, multicompiler::InsertedNOPCounter);
  return true;
}

FunctionPass *llvm::createNOPInsertionPass(bool is64Bit) {
  return new NOPInsertionPass(is64Bit);
}


