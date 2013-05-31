/*===--- MultiCompilerOptions.cpp - Multicompiler Options -----
*
*
*  This file implements the Multi Compiler Options interface.
*
*  Author: kmanivan
*  Date: Dec 17, 2010
*
*===----------------------------------------------------------------------===*/

#include <string>
#include "llvm/MultiCompiler/MultiCompilerOptions.h"
#include "llvm/Support/CommandLine.h"

namespace multicompiler {

unsigned int RandomStackLayout;
std::string MultiCompilerSeed;
int PreRARandomizerRange;
unsigned int MaxStackFramePadding;
std::string RNGStateFile;
unsigned int NOPInsertionPercentage;
unsigned int MaxNOPsPerInstruction;
unsigned int MOVToLEAPercentage;
unsigned int EquivSubstPercentage;
unsigned int RandomizeFunctionList;
unsigned int FunctionAlignment;
bool RandomizeRegisters;

static llvm::cl::opt<unsigned int, true>
RandomStackLayoutOpt("random-stack-layout",
                     llvm::cl::desc("Enable random stack layout for functions"),
                     llvm::cl::location(RandomStackLayout),
                     llvm::cl::init(0));

static llvm::cl::opt<std::string, true>
MultiCompilerOptionsOpt("multicompiler-seed",
                        llvm::cl::desc("RNG seed for multicompiler"),
                        llvm::cl::location(MultiCompilerSeed),
                        llvm::cl::init(""));

static llvm::cl::opt<int, true>
PreRARandomizerRangeOpt("pre-RA-randomizer-range",
                        llvm::cl::desc("Pre-RA instruction randomizer probability range; -1 for shuffle"),
                        llvm::cl::location(PreRARandomizerRange),
                        llvm::cl::init(0));

static llvm::cl::opt<unsigned int, true>
MaxStackFramePadOpt("max-stack-pad-size",
                        llvm::cl::desc("Maximum amount of stack frame padding"),
                        llvm::cl::location(MaxStackFramePadding),
                        llvm::cl::init(8192));

static llvm::cl::opt<unsigned int, true>
NOPInsertionPercentageOpt("nop-insertion-percentage",
                          llvm::cl::desc("Percentage of instructions that have NOPs prepended"),
                          llvm::cl::location(NOPInsertionPercentage),
                          llvm::cl::init(0));

static llvm::cl::opt<unsigned int, true>
MaxNOPsPerInstructionOpt("max-nops-per-instruction",
                          llvm::cl::desc("Maximum number of NOPs per instruction"),
                          llvm::cl::location(MaxNOPsPerInstruction),
                          llvm::cl::init(1));

static llvm::cl::opt<unsigned int, true>
MOVToLeaPercentageOpt("mov-to-lea-percentage",
                      llvm::cl::desc("Percentage of MOVs that get changed to LEA"),
                      llvm::cl::location(MOVToLEAPercentage),
                      llvm::cl::init(0));

static llvm::cl::opt<unsigned int, true>
EquivSubstPercentageOpt("equiv-subst-percentage",
                      llvm::cl::desc("Percentage of instructions which get equivalent-substituted"),
                      llvm::cl::location(EquivSubstPercentage),
                      llvm::cl::init(0));

static llvm::cl::opt<std::string, true>
RNGStateFileOpt("rng-state-file",
                llvm::cl::desc("Location of the rng state file"),
                llvm::cl::location(RNGStateFile),
                llvm::cl::init(std::string("")));

static llvm::cl::opt<unsigned int, true>
RandomizeFunctionListOpt("randomize-function-list",
                       llvm::cl::desc("Permute the function list"),
                       llvm::cl::location(RandomizeFunctionList),
                       llvm::cl::init(0));

static llvm::cl::opt<unsigned int, true>
FunctionAlignmentOpt("align-functions",
                     llvm::cl::desc("Specify alignment of functions as log2(align)"),
                     llvm::cl::location(FunctionAlignment),
                     llvm::cl::init(4));
 
static llvm::cl::opt<bool, true>
RandomizeRegistersOpt("randomize-registers",
                      llvm::cl::desc("randomize the order of registers in allocation"),
                      llvm::cl::location(RandomizeRegisters),
                      llvm::cl::init(false));
}
