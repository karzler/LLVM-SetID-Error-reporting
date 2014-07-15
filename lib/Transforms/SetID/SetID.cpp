/* 
 * Setting Unique IDs to each instruction along with the Function ID associated with that instruction
 * Author: karzler
 * First commit: June 24, 2014
 * Last updated: June 30, 2014
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
#include "llvm/Support/InstIterator.h"
#include "llvm/Support/DebugLoc.h"

#include <string>
#include <sstream>

using namespace llvm;

namespace {

struct SetID : public ModulePass 
{
	public :
	/**
	* Each ModulePass has its own unique ID assigned at runtime, used internally
	* by LLVM.
	*/
		static char ID;
		SetID() : ModulePass(ID) {}

		virtual bool runOnModule(Module &M) 
		{
			/**
			 * Assigning each function and associated instructions with unique IDs.
			 * */
			unsigned int SID = 0;
			unsigned int FID = 0;
			errs() << "SetID: \n";

			//Looping over all function in a given Module
		
			for (Module::iterator F = M.begin(), ef = M.end(); F != ef; ++F){
				errs() << "Function: ";
				errs().write_escaped(F->getName().str()) << "\n"; 
				unsigned int RID = 0;

				// For all Instructions in Function
			
				for (inst_iterator I = inst_begin(F), e = inst_end(F); I != e; ++I){
					//Print Instruction Info
					errs() << "Instruction: " << *I << "\n";
					

					/**
					 * Using a custom metadata node by
					 * Using char* variant of setMetadata
					 * */
					 
					LLVMContext& C = I->getContext();
					
					//str_stream: a null-terminated pathname string into directory and filename components, FID, SID
					std::ostringstream str_stream;
					str_stream << basename(M.getModuleIdentifier().c_str() ) << "FID: " << FID << "RID: " << RID++ << " SID: " << SID++;

					//Create metadata node
					
					MDNode* md_node = MDNode::get(C, MDString::get(C, str_stream.str() ) );
					
					//MDNode * MDNode::get 	( 	LLVMContext &  	Context, ArrayRef< Value * > 
					//Definition at line 269 of file Metadata.cpp.
					
					
					I->setMetadata("set.ID", md_node);
					SmallVector<std::pair<unsigned, MDNode*>, 4> md_SV;
					I->getAllMetadata(md_SV);

		  }
		  ++FID;
		  
		}
		return false;
	  }
	  
  
};	//end of SetID struct

}	//end of anonymous namespace



char SetID::ID = 0;

/**
 * Register the custom pass made, SetID.cpp
 * */

static RegisterPass<SetID> X("SetID", "Setting Instruction ID Pass",
                             true /* Only looks at CFG */,
                             true /* Analysis Pass */);

