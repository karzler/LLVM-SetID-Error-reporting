//===- MOVToLEA.cpp - Insert NOPs between instructions    ---*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file contains the MOVToLEA pass.
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
using namespace llvm;
using namespace multicompiler::Random;

namespace {
class MOVToLEAPass : public MachineFunctionPass {
  static char ID;

public:
  MOVToLEAPass() : MachineFunctionPass(ID) {}

  virtual bool runOnMachineFunction(MachineFunction &MF);

  virtual const char *getPassName() const {
    return "MOV to LEA transformation pass";
  }

};
}

char MOVToLEAPass::ID = 0;

bool MOVToLEAPass::runOnMachineFunction(MachineFunction &Fn) {
  const TargetInstrInfo *TII = Fn.getTarget().getInstrInfo();
  bool Changed = false;
  for (MachineFunction::iterator BB = Fn.begin(), E = Fn.end(); BB != E; ++BB)
    for (MachineBasicBlock::iterator I = BB->begin(); I != BB->end(); ) {
      if (I->getOpcode() != X86::MOV32rr || I->getNumOperands() != 2 ||
          !I->getOperand(0).isReg() || !I->getOperand(1).isReg()) {
        ++I;
        continue;
      }

      unsigned int Roll = AESRandomNumberGenerator::Generator().randnext(100);
      if (Roll >= multicompiler::MOVToLEAPercentage) {
        ++I;
        continue;
      }

      MachineBasicBlock::iterator J = I;
      ++I;
      addRegOffset(BuildMI(*BB, J, J->getDebugLoc(),
                           TII->get(X86::LEA32r), J->getOperand(0).getReg()),
                   J->getOperand(1).getReg(), false, 0);
      J->eraseFromParent();
      Changed = true;
    }
  return Changed;
}

FunctionPass *llvm::createMOVToLEAPass() {
  return new MOVToLEAPass();
}


