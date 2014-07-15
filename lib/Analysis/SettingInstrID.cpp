/*
 * Current directory: /home/karzler/llvm/lib/Analysis/
 * Setting Instructions' ID uniquely
 * Author: karzler
 * Last updated: June 25, 2014
 */

#include "llvm/Pass.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Function.h"
#include "llvm/Support/raw_ostream.h"


#include "llvm/IR/Instructions.h"
#include "llvm/IR/Metadata.h"
#include "llvm/Support/CFG.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/Debug.h"

using namespace llvm;

namespace {

struct SetInstrID : public ModulePass {

static char ID;
SetInstrID() : ModulePass(ID) {}

  virtual bool runOnModule(Module &M) {
    errs() << "Set Instruction ID: ";
    M.dump();
    //errs().write_escaped(M.getName()) << "\n";
    return false;
  }
};//end of SetInstrID

}//end of anonymous namespace



char SetInstrID::ID = 0;

static RegisterPass<SetInstrID> X("SetInstrID", "Setting Instruction ID Pass",
                             true /* Only looks at CFG */,
                             true /* Analysis Pass */);

