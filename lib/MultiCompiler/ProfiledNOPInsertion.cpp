//===- ProfiledNOPInsertion.cpp ---------------------- --------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
//===----------------------------------------------------------------------===//

#include "llvm/Analysis/ProfileInfo.h"
#include "llvm/IR/BasicBlock.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/IntrinsicInst.h"
#include "llvm/IR/Module.h"
#include "llvm/MultiCompiler/MultiCompilerOptions.h"
#include "llvm/MultiCompiler/ProfiledNOPInsertion.h"
#include "llvm/Pass.h"
#include "llvm/Support/CFG.h"
#include "llvm/Support/InstIterator.h"
#include "llvm/Transforms/Scalar.h"
using namespace llvm;

namespace {
  class ProfiledNOPInsertion : public ModulePass {
  public:
    static char ID; // Pass identification, replacement for typeid
    ProfiledNOPInsertion() : ModulePass(ID) {
      llvm::initializeProfiledNOPInsertionPass(*PassRegistry::getPassRegistry());
    }
    
    virtual bool runOnModule(Module& M);
    
    virtual void getAnalysisUsage(AnalysisUsage& AU) const {
      AU.setPreservesAll();
      AU.addRequired<ProfileInfo>();
    }
    
  };
}

char ProfiledNOPInsertion::ID = 0;
INITIALIZE_PASS(ProfiledNOPInsertion, "profiled-nop-insertion",
                "Profiled NOP Insertion", false, false)

ModulePass *multicompiler::createProfiledNOPInsertionPass() {
  return new class ProfiledNOPInsertion();
}

bool ProfiledNOPInsertion::runOnModule(Module& M) {
  ProfileInfo &PI = getAnalysis<ProfileInfo>();
  double MaxCount = 0.0;
  for (Module::iterator F = M.begin(), E = M.end(); F != E; ++F) {
    if (F->isDeclaration())
      continue;
    for (Function::iterator BB = F->begin(), EE = F->end(); BB != EE; ++BB) {
      MaxCount = std::max(MaxCount, PI.getExecutionCount(&*BB));
    }
  }

  // If there's no profile information, quit
  if (MaxCount <= 0.0)
    return false;

  for (Module::iterator F = M.begin(), E = M.end(); F != E; ++F) {
    if (F->isDeclaration())
      continue;
    for (Function::iterator BB = F->begin(), EE = F->end(); BB != EE; ++BB) {
      double w = PI.getExecutionCount(&*BB);
      if (w != ProfileInfo::MissingValue) {
        double alpha;
        if (multicompiler::NOPInsertionUseLog) {
          alpha = log(1.0 + w) / log(1.0 + MaxCount);
        } else {
          alpha = w / MaxCount;
        }
        unsigned int BBProb = multicompiler::NOPInsertionPercentage;
        BBProb -= (int)(alpha * multicompiler::NOPInsertionRange);
        BB->setNOPInsertionPercentage(BBProb);
        //printf("BB:%p w:%lf alpha:%lf Prob:%d\n", &*BB, w, alpha, BBProb);
      }
    }
  }
  return false;
}


