/*===--- MultiCompilerOptions.h - Multicompiler Options -----
*
*
*  This file defines the Multi Compiler Options interface.
*
*===----------------------------------------------------------------------===*/

#ifndef MULTI_COMPILER_OPTIONS_H
#define MULTI_COMPILER_OPTIONS_H
#include <string>

namespace multicompiler {
 extern unsigned int RandomStackLayout;
 extern unsigned int MultiCompilerSeed;
 extern unsigned int PreRARandomizerRange;
 extern unsigned int MaxStackFramePadding;
 extern std::string RNGStateFile;
 extern unsigned int NOPInsertionPercentage;
 extern unsigned int MOVToLEAPercentage;
 extern unsigned int RandomizeFunctionList;
}
#endif
