/*===--- MultiCompilerOptions.h - Multicompiler Options -----
*
*
*  This file defines the Multi Compiler Options interface.
*
*===----------------------------------------------------------------------===*/

#ifndef MULTI_COMPILER_OPTIONS_H
#define MULTI_COMPILER_OPTIONS_H
#include <stdint.h>
#include <string>

namespace multicompiler {
 extern unsigned int RandomStackLayout;
 extern uint64_t MultiCompilerSeed;
 extern int PreRARandomizerRange;
 extern unsigned int MaxStackFramePadding;
 extern std::string RNGStateFile;
 extern unsigned int NOPInsertionPercentage;
 extern unsigned int MaxNOPsPerInstruction;
 extern unsigned int MOVToLEAPercentage;
 extern unsigned int RandomizeFunctionList;
 extern bool RandomizeRegisters;
}
#endif
