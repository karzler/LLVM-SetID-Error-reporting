//===-- llc.cpp - Implement the LLVM Native Code Generator ----------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This is the llc code generator driver. It provides a convenient
// command-line interface for generating native assembly-language code
// or C code, given LLVM bitcode.
//
//===----------------------------------------------------------------------===//

#include "llvm/ADT/OwningPtr.h"
#include "llvm/ADT/Triple.h"
#include "llvm/Config/config.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/Format.h"
#include "llvm/Support/FormattedStream.h"
#include "llvm/Support/Host.h"
#include "llvm/Support/ManagedStatic.h"
#include "llvm/Support/MathExtras.h"
#include "llvm/Support/MemoryBuffer.h"
#include "llvm/Support/PluginLoader.h"
#include "llvm/Support/PrettyStackTrace.h"
#include "llvm/Support/Program.h"
#include "llvm/Support/RandomNumberGenerator.h"
#include "llvm/Support/Regex.h"
#include "llvm/Support/Signals.h"
#include "llvm/Support/system_error.h"
#include <iostream>
#include <memory>
using namespace llvm;

static const int PAGE_SIZE = 4096;

static cl::opt<uint32_t>
MinBaseAddress("min-base-address", cl::desc("minimum address of program base (inclusive)"),
               cl::init(0x00010000));
static cl::opt<uint32_t>
MaxBaseAddress("max-base-address", cl::desc("maximum address of program base (inclusive)"),
               cl::init(0x09000000));
static cl::opt<uint32_t>
OldBaseAddress("old-base-address", cl::desc("old address of program base"),
               cl::init(0x08048000));


int main(int argc, char **argv) {
  llvm::sys::PrintStackTraceOnErrorSignal();
  llvm::PrettyStackTraceProgram X(argc, argv);
  llvm_shutdown_obj Y;
  cl::ParseCommandLineOptions(argc, argv, "linker script randomizer\n");

  sys::Path ldPath = sys::Program::FindProgramByName("ld");
  if (ldPath.isEmpty()) {
    errs() << "Couldn't find system linker";
    llvm_shutdown();
    return 1;
  }

  sys::Path scriptPath = sys::Path::GetTemporaryDirectory();
  if (scriptPath.isEmpty()) {
    errs() << "Error accessing temporary directory";
    llvm_shutdown();
    return 1;
  }
  scriptPath.appendComponent("ld_script");
  scriptPath.makeUnique(false, NULL);

  sys::Path devNull;
  std::string errMsg;
  const char *ldArgs[] = { ldPath.c_str(), "--verbose", NULL };
  const sys::Path *redirects[] = { &devNull, &scriptPath, &scriptPath, NULL };
  if (sys::Program::ExecuteAndWait(ldPath, ldArgs, 0, redirects, 0, 0, &errMsg)) {
    errs() << "Error executing linker";
    llvm_shutdown();
    return 1;
  }

  OwningPtr< MemoryBuffer > scriptFile;
  error_code ec = MemoryBuffer::getFile(scriptPath.c_str(), scriptFile);
  if (ec) {
    errs() << "Error reading script file: " << ec.message();
    llvm_shutdown();
    return 1;
  }
 
  uint32_t minPage = (MinBaseAddress + PAGE_SIZE - 1) / PAGE_SIZE,
           maxPage = MaxBaseAddress / PAGE_SIZE;
  if (minPage > maxPage) {
    errs() << "Base address interval is empty";
    llvm_shutdown();
    return 1;
  }
  uint32_t newAddr = PAGE_SIZE * (minPage + 
    RandomNumberGenerator::Generator().Random(maxPage - minPage + 1));

  char oldAddrStr[12];
  sprintf(oldAddrStr, "0x%08x", OldBaseAddress.getValue());

  llvm::Regex oldAddrRegex(oldAddrStr);
  StringRef scriptText = scriptFile->getBuffer();
  StringRef oldScriptText = scriptText;
  char newAddrStr[12];
  sprintf(newAddrStr, "0x%08x", newAddr);
  do {
    // Replace one occurrence of old address with new one
    oldScriptText = scriptText;
    scriptText = oldAddrRegex.sub(newAddrStr, scriptText);
  } while (!scriptText.equals(oldScriptText));
  std::cout << scriptText.str();
  return 0;
}

