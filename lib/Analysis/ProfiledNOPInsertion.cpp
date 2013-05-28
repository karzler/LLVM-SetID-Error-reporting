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
      if(multicompiler::ProfiledNOPInsertion == 3)
      {
        AU.addRequiredID(ProfileEstimatorPassID);
        AU.addRequired<ProfileInfo>();
      }
    }
    
  };
}

char ProfiledNOPInsertion::ID = 0;
INITIALIZE_PASS_BEGIN(ProfiledNOPInsertion, "profiled-nop-insertion",
                "Profiled NOP Insertion", false, false)
INITIALIZE_PASS_DEPENDENCY(ProfileEstimatorPass)
INITIALIZE_AG_DEPENDENCY(ProfileInfo)
INITIALIZE_PASS_END(ProfiledNOPInsertion, "profiled-nop-insertion",
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
    ProfileInfo &PI2 = getAnalysis<ProfileInfo>(*F);
    for (Function::iterator BB = F->begin(), EE = F->end(); BB != EE; ++BB) {
      MaxCount = std::max(MaxCount, PI2.getExecutionCount(&*BB));
      double z = PI2.getExecutionCount(&*BB);
      BB->setExeCount(z);
    }
  }

  // If there's no profile information, quit
  if (MaxCount <= 0.0)
    return false;

  for (Module::iterator F = M.begin(), E = M.end(); F != E; ++F) {
    if (F->isDeclaration())
      continue;

    int minThresholdOpt = multicompiler::getFunctionOption(
      multicompiler::ProfiledNOPMinThreshold, *F);
    bool useMinThreshold = (minThresholdOpt > 0 && minThresholdOpt <= 100);
    double minThreshold = MaxCount * minThresholdOpt / 100;

    ProfileInfo &PI2 = getAnalysis<ProfileInfo>(*F);    
    for (Function::iterator BB = F->begin(), EE = F->end(); BB != EE; ++BB) {
      double w = PI2.getExecutionCount(&*BB);
      if (w != ProfileInfo::MissingValue) {
        double alpha = 0.0;
        if (useMinThreshold) {
            if (w >= minThreshold) {
                alpha = 1.0;
            }
        } else if (multicompiler::getFunctionOption(multicompiler::NOPInsertionUseLog, *F)) {
          alpha = log(1.0 + w) / log(1.0 + MaxCount);
        } else {
          alpha = w / MaxCount;
        }
        int BBProb = multicompiler::getFunctionOption(multicompiler::NOPInsertionPercentage, *F);
        BBProb -= (int)(alpha * multicompiler::getFunctionOption(multicompiler::NOPInsertionRange, *F));
        if (BBProb <= 0) {
          BB->setNOPInsertionPercentage(0);
        } else {
          BB->setNOPInsertionPercentage(BBProb);
        }
        //printf("BB:%p w:%lf alpha:%lf Prob:%d\n", &*BB, w, alpha, BBProb);
      }
    }
  }
  return false;
}


