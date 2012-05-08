//===-- LLVMTargetMachine.cpp - Implement the LLVMTargetMachine class -----===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file implements the LLVMTargetMachine class.
//
//===----------------------------------------------------------------------===//

#include "llvm/ADT/OwningPtr.h"
#include "llvm/Analysis/Passes.h"
#include "llvm/Analysis/ProfileInfo.h"
#include "llvm/Analysis/Verifier.h"
#include "llvm/Assembly/PrintModulePass.h"
#include "llvm/CodeGen/AsmPrinter.h"
#include "llvm/CodeGen/MachineFunctionAnalysis.h"
#include "llvm/CodeGen/MachineModuleInfo.h"
#include "llvm/CodeGen/Passes.h"
#include "llvm/MC/MCAsmInfo.h"
#include "llvm/MC/MCContext.h"
#include "llvm/MC/MCInstrInfo.h"
#include "llvm/MC/MCStreamer.h"
#include "llvm/MC/MCSubtargetInfo.h"
#include "llvm/PassManager.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/ErrorHandling.h"
#include "llvm/Support/FormattedStream.h"
#include "llvm/Support/TargetRegistry.h"
#include "llvm/Target/TargetInstrInfo.h"
#include "llvm/Target/TargetLowering.h"
#include "llvm/Target/TargetLoweringObjectFile.h"
#include "llvm/Target/TargetMachine.h"
#include "llvm/Target/TargetOptions.h"
#include "llvm/Target/TargetRegisterInfo.h"
#include "llvm/Target/TargetSubtargetInfo.h"
#include "llvm/Transforms/Instrumentation.h"
#include "llvm/Transforms/Scalar.h"
using namespace llvm;

// Enable or disable FastISel. Both options are needed, because
// FastISel is enabled by default with -fast, and we wish to be
// able to enable or disable fast-isel independently from -O0.
static cl::opt<cl::boolOrDefault>
EnableFastISelOption("fast-isel", cl::Hidden,
  cl::desc("Enable the \"fast\" instruction selector"));

static cl::opt<bool> ShowMCEncoding("show-mc-encoding", cl::Hidden,
    cl::desc("Show encoding in .s output"));
static cl::opt<bool> ShowMCInst("show-mc-inst", cl::Hidden,
    cl::desc("Show instruction structure in .s output"));

static cl::opt<cl::boolOrDefault>
AsmVerbose("asm-verbose", cl::desc("Add comments to directives."),
           cl::init(cl::BOU_UNSET));

static bool getVerboseAsm() {
  switch (AsmVerbose) {
  case cl::BOU_UNSET: return TargetMachine::getAsmVerbosityDefault();
  case cl::BOU_TRUE:  return true;
  case cl::BOU_FALSE: return false;
  }
  llvm_unreachable("Invalid verbose asm state");
}

void LLVMTargetMachine::initAsmInfo() {
  AsmInfo = TheTarget.createMCAsmInfo(*getRegisterInfo(), TargetTriple);
  // TargetSelect.h moved to a different directory between LLVM 2.9 and 3.0,
  // and if the old one gets included then MCAsmInfo will be NULL and
  // we'll crash later.
  // Provide the user with a useful error message about what's wrong.
  assert(AsmInfo && "MCAsmInfo not initialized."
         "Make sure you include the correct TargetSelect.h"
         "and that InitializeAllTargetMCs() is being invoked!");
}

LLVMTargetMachine::LLVMTargetMachine(const Target &T, StringRef Triple,
                                     StringRef CPU, StringRef FS,
                                     TargetOptions Options,
                                     Reloc::Model RM, CodeModel::Model CM,
                                     CodeGenOpt::Level OL)
  : TargetMachine(T, Triple, CPU, FS, Options) {
  CodeGenInfo = T.createMCCodeGenInfo(Triple, RM, CM, OL);
}

void LLVMTargetMachine::addAnalysisPasses(PassManagerBase &PM) {
  PM.add(createBasicTargetTransformInfoPass(getTargetLowering()));
}

/// addPassesToX helper drives creation and initialization of TargetPassConfig.
static MCContext *addPassesToGenerateCode(LLVMTargetMachine *TM,
                                          PassManagerBase &PM,
                                          bool DisableVerify,
                                          AnalysisID StartAfter,
                                          AnalysisID StopAfter) {
  // Targets may override createPassConfig to provide a target-specific sublass.
  TargetPassConfig *PassConfig = TM->createPassConfig(PM);
  PassConfig->setStartStopPasses(StartAfter, StopAfter);

  // Set PassConfig options provided by TargetMachine.
  PassConfig->setDisableVerify(DisableVerify);

  PM.add(PassConfig);

  PassConfig->addIRPasses();

  PassConfig->addCodeGenPrepare();

  PassConfig->addPassesToHandleExceptions();

  PassConfig->addISelPrepare();

  // Install a MachineModuleInfo class, which is an immutable pass that holds
  // all the per-module stuff we're generating, including MCContext.
  MachineModuleInfo *MMI =
    new MachineModuleInfo(*TM->getMCAsmInfo(), *TM->getRegisterInfo(),
                          &TM->getTargetLowering()->getObjFileLowering());
  PM.add(MMI);
  MCContext *Context = &MMI->getContext(); // Return the MCContext by-ref.

  // Set up a MachineFunction for the rest of CodeGen to work on.
  PM.add(new MachineFunctionAnalysis(*TM));

  // Enable FastISel with -fast, but allow that to be overridden.
  if (EnableFastISelOption == cl::BOU_TRUE ||
      (TM->getOptLevel() == CodeGenOpt::None &&
       EnableFastISelOption != cl::BOU_FALSE))
    TM->setFastISel(true);

  // Ask the target for an isel.
  if (PassConfig->addInstSelector())
    return NULL;

  PassConfig->addMachinePasses();

  PassConfig->setInitialized();

  return Context;
}

bool LLVMTargetMachine::addPassesToEmitFile(PassManagerBase &PM,
                                            formatted_raw_ostream &Out,
                                            CodeGenFileType FileType,
                                            bool DisableVerify,
                                            AnalysisID StartAfter,
                                            AnalysisID StopAfter) {
  // Add common CodeGen passes.
  MCContext *Context = addPassesToGenerateCode(this, PM, DisableVerify,
                                               StartAfter, StopAfter);
  if (!Context)
    return true;

  if (StopAfter) {
    // FIXME: The intent is that this should eventually write out a YAML file,
    // containing the LLVM IR, the machine-level IR (when stopping after a
    // machine-level pass), and whatever other information is needed to
    // deserialize the code and resume compilation.  For now, just write the
    // LLVM IR.
    PM.add(createPrintModulePass(&Out));
    return false;
  }

  if (hasMCSaveTempLabels())
    Context->setAllowTemporaryLabels(false);

  const MCAsmInfo &MAI = *getMCAsmInfo();
  const MCRegisterInfo &MRI = *getRegisterInfo();
  const MCSubtargetInfo &STI = getSubtarget<MCSubtargetInfo>();
  OwningPtr<MCStreamer> AsmStreamer;

  switch (FileType) {
  case CGFT_AssemblyFile: {
    MCInstPrinter *InstPrinter =
      getTarget().createMCInstPrinter(MAI.getAssemblerDialect(), MAI,
                                      *getInstrInfo(),
                                      Context->getRegisterInfo(), STI);

    // Create a code emitter if asked to show the encoding.
    MCCodeEmitter *MCE = 0;
    MCAsmBackend *MAB = 0;
    if (ShowMCEncoding) {
      const MCSubtargetInfo &STI = getSubtarget<MCSubtargetInfo>();
      MCE = getTarget().createMCCodeEmitter(*getInstrInfo(), MRI, STI,
                                            *Context);
      MAB = getTarget().createMCAsmBackend(getTargetTriple(), TargetCPU);
    }

    MCStreamer *S = getTarget().createAsmStreamer(*Context, Out,
                                                  getVerboseAsm(),
                                                  hasMCUseLoc(),
                                                  hasMCUseCFI(),
                                                  hasMCUseDwarfDirectory(),
                                                  InstPrinter,
                                                  MCE, MAB,
                                                  ShowMCInst);
    AsmStreamer.reset(S);
    break;
  }
  case CGFT_ObjectFile: {
    // Create the code emitter for the target if it exists.  If not, .o file
    // emission fails.
    MCCodeEmitter *MCE = getTarget().createMCCodeEmitter(*getInstrInfo(), MRI,
                                                         STI, *Context);
    MCAsmBackend *MAB = getTarget().createMCAsmBackend(getTargetTriple(),
                                                       TargetCPU);
    if (MCE == 0 || MAB == 0)
      return true;

    AsmStreamer.reset(getTarget().createMCObjectStreamer(getTargetTriple(),
                                                         *Context, *MAB, Out,
                                                         MCE, hasMCRelaxAll(),
                                                         hasMCNoExecStack()));
    AsmStreamer.get()->setAutoInitSections(true);
    break;
  }
  case CGFT_Null:
    // The Null output is intended for use for performance analysis and testing,
    // not real users.
    AsmStreamer.reset(createNullStreamer(*Context));
    break;
  }

  // Create the AsmPrinter, which takes ownership of AsmStreamer if successful.
  FunctionPass *Printer = getTarget().createAsmPrinter(*this, *AsmStreamer);
  if (Printer == 0)
    return true;

  // If successful, createAsmPrinter took ownership of AsmStreamer.
  AsmStreamer.take();

  PM.add(Printer);

  return false;
}

/// addPassesToEmitMachineCode - Add passes to the specified pass manager to
/// get machine code emitted.  This uses a JITCodeEmitter object to handle
/// actually outputting the machine code and resolving things like the address
/// of functions.  This method should returns true if machine code emission is
/// not supported.
///
bool LLVMTargetMachine::addPassesToEmitMachineCode(PassManagerBase &PM,
                                                   JITCodeEmitter &JCE,
                                                   bool DisableVerify) {
  // Add common CodeGen passes.
  MCContext *Context = addPassesToGenerateCode(this, PM, DisableVerify, 0, 0);
  if (!Context)
    return true;

  addCodeEmitter(PM, JCE);

  return false; // success!
}

/// addPassesToEmitMC - Add passes to the specified pass manager to get
/// machine code emitted with the MCJIT. This method returns true if machine
/// code is not supported. It fills the MCContext Ctx pointer which can be
/// used to build custom MCStreamer.
///
bool LLVMTargetMachine::addPassesToEmitMC(PassManagerBase &PM,
                                          MCContext *&Ctx,
                                          raw_ostream &Out,
                                          bool DisableVerify) {
  // Add common CodeGen passes.
  Ctx = addPassesToGenerateCode(this, PM, DisableVerify, 0, 0);
  if (!Ctx)
    return true;

  if (hasMCSaveTempLabels())
    Ctx->setAllowTemporaryLabels(false);

  // Create the code emitter for the target if it exists.  If not, .o file
  // emission fails.
  const MCRegisterInfo &MRI = *getRegisterInfo();
  const MCSubtargetInfo &STI = getSubtarget<MCSubtargetInfo>();
  MCCodeEmitter *MCE = getTarget().createMCCodeEmitter(*getInstrInfo(), MRI,
                                                       STI, *Ctx);
  MCAsmBackend *MAB = getTarget().createMCAsmBackend(getTargetTriple(), TargetCPU);
  if (MCE == 0 || MAB == 0)
    return true;

  OwningPtr<MCStreamer> AsmStreamer;
  AsmStreamer.reset(getTarget().createMCObjectStreamer(getTargetTriple(), *Ctx,
                                                       *MAB, Out, MCE,
                                                       hasMCRelaxAll(),
                                                       hasMCNoExecStack()));
  AsmStreamer.get()->InitSections();

  // Create the AsmPrinter, which takes ownership of AsmStreamer if successful.
  FunctionPass *Printer = getTarget().createAsmPrinter(*this, *AsmStreamer);
  if (Printer == 0)
    return true;

  // If successful, createAsmPrinter took ownership of AsmStreamer.
  AsmStreamer.take();

  PM.add(Printer);

  return false; // success!
}

static void printNoVerify(PassManagerBase &PM, const char *Banner) {
  if (PrintMachineCode)
    PM.add(createMachineFunctionPrinterPass(dbgs(), Banner));
}

static void printAndVerify(PassManagerBase &PM,
                           const char *Banner) {
  if (PrintMachineCode)
    PM.add(createMachineFunctionPrinterPass(dbgs(), Banner));

  if (VerifyMachineCode)
    PM.add(createMachineVerifierPass(Banner));
}

/// addCommonCodeGenPasses - Add standard LLVM codegen passes used for both
/// emitting to assembly files or machine code output.
///
bool LLVMTargetMachine::addCommonCodeGenPasses(PassManagerBase &PM,
                                               CodeGenOpt::Level OptLevel,
                                               bool DisableVerify,
                                               MCContext *&OutContext) {
  // Standard LLVM-Level Passes.

  // Basic AliasAnalysis support.
  // Add TypeBasedAliasAnalysis before BasicAliasAnalysis so that
  // BasicAliasAnalysis wins if they disagree. This is intended to help
  // support "obvious" type-punning idioms.
  PM.add(createTypeBasedAliasAnalysisPass());
  PM.add(createBasicAliasAnalysisPass());

  // Before running any passes, run the verifier to determine if the input
  // coming from the front-end and/or optimizer is valid.
  if (!DisableVerify)
    PM.add(createVerifierPass());

  // Run loop strength reduction before anything else.
  if (OptLevel != CodeGenOpt::None && !DisableLSR) {
    PM.add(createLoopStrengthReducePass(getTargetLowering()));
    if (PrintLSR)
      PM.add(createPrintFunctionPass("\n\n*** Code after LSR ***\n", &dbgs()));
  }

  PM.add(createGCLoweringPass());

  // If we have profiled NOP insertion, add the passes here.
  if (multicompiler::ProfiledNOPInsertion == 1) {
    PM.add(createOptimalEdgeProfilerPass());
  } else if (multicompiler::ProfiledNOPInsertion == 2) {
    PM.add(createProfileLoaderPass(""));
  }

  // Make sure that no unreachable blocks are instruction selected.
  PM.add(createUnreachableBlockEliminationPass());

  // Turn exception handling constructs into something the code generators can
  // handle.
  switch (getMCAsmInfo()->getExceptionHandlingType()) {
  case ExceptionHandling::SjLj:
    // SjLj piggy-backs on dwarf for this bit. The cleanups done apply to both
    // Dwarf EH prepare needs to be run after SjLj prepare. Otherwise,
    // catch info can get misplaced when a selector ends up more than one block
    // removed from the parent invoke(s). This could happen when a landing
    // pad is shared by multiple invokes and is also a target of a normal
    // edge from elsewhere.
    PM.add(createSjLjEHPass(getTargetLowering()));
    // FALLTHROUGH
  case ExceptionHandling::DwarfCFI:
  case ExceptionHandling::ARM:
  case ExceptionHandling::Win64:
    PM.add(createDwarfEHPass(this));
    break;
  case ExceptionHandling::None:
    PM.add(createLowerInvokePass(getTargetLowering()));

    // The lower invoke pass may create unreachable code. Remove it.
    PM.add(createUnreachableBlockEliminationPass());
    break;
  }

  if (OptLevel != CodeGenOpt::None && !DisableCGP)
    PM.add(createCodeGenPreparePass(getTargetLowering()));

  PM.add(createStackProtectorPass(getTargetLowering()));

  addPreISel(PM, OptLevel);

  if (PrintISelInput)
    PM.add(createPrintFunctionPass("\n\n"
                                   "*** Final LLVM Code input to ISel ***\n",
                                   &dbgs()));

  // All passes which modify the LLVM IR are now complete; run the verifier
  // to ensure that the IR is valid.
  if (!DisableVerify)
    PM.add(createVerifierPass());

  // Standard Lower-Level Passes.

  // Install a MachineModuleInfo class, which is an immutable pass that holds
  // all the per-module stuff we're generating, including MCContext.
  MachineModuleInfo *MMI = new MachineModuleInfo(*getMCAsmInfo(),
                                                 *getRegisterInfo(),
                                     &getTargetLowering()->getObjFileLowering());
  PM.add(MMI);
  OutContext = &MMI->getContext(); // Return the MCContext specifically by-ref.

  // Set up a MachineFunction for the rest of CodeGen to work on.
  PM.add(new MachineFunctionAnalysis(*this, OptLevel));

  // Enable FastISel with -fast, but allow that to be overridden.
  if (EnableFastISelOption == cl::BOU_TRUE ||
      (OptLevel == CodeGenOpt::None && EnableFastISelOption != cl::BOU_FALSE))
    EnableFastISel = true;

  // Ask the target for an isel.
  if (addInstSelector(PM, OptLevel))
    return true;

  // Print the instruction selected machine code...
  printAndVerify(PM, "After Instruction Selection");

  // Expand pseudo-instructions emitted by ISel.
  PM.add(createExpandISelPseudosPass());

  // Pre-ra tail duplication.
  if (OptLevel != CodeGenOpt::None && !DisableEarlyTailDup) {
    PM.add(createTailDuplicatePass(true));
    printAndVerify(PM, "After Pre-RegAlloc TailDuplicate");
  }

  // Optimize PHIs before DCE: removing dead PHI cycles may make more
  // instructions dead.
  if (OptLevel != CodeGenOpt::None)
    PM.add(createOptimizePHIsPass());

  // If the target requests it, assign local variables to stack slots relative
  // to one another and simplify frame index references where possible.
  PM.add(createLocalStackSlotAllocationPass());

  if (OptLevel != CodeGenOpt::None) {
    // With optimization, dead code should already be eliminated. However
    // there is one known exception: lowered code for arguments that are only
    // used by tail calls, where the tail calls reuse the incoming stack
    // arguments directly (see t11 in test/CodeGen/X86/sibcall.ll).
    if (!DisableMachineDCE)
      PM.add(createDeadMachineInstructionElimPass());
    printAndVerify(PM, "After codegen DCE pass");

    if (!DisableMachineLICM)
      PM.add(createMachineLICMPass());
    if (!DisableMachineCSE)
      PM.add(createMachineCSEPass());
    if (!DisableMachineSink)
      PM.add(createMachineSinkingPass());
    printAndVerify(PM, "After Machine LICM, CSE and Sinking passes");

    PM.add(createPeepholeOptimizerPass());
    printAndVerify(PM, "After codegen peephole optimization pass");
  }

  // Run pre-ra passes.
  if (addPreRegAlloc(PM, OptLevel))
    printAndVerify(PM, "After PreRegAlloc passes");

  // Perform register allocation.
  PM.add(createRegisterAllocator(OptLevel));
  printAndVerify(PM, "After Register Allocation");

  // Perform stack slot coloring and post-ra machine LICM.
  if (OptLevel != CodeGenOpt::None) {
    // FIXME: Re-enable coloring with register when it's capable of adding
    // kill markers.
    if (!DisableSSC)
      PM.add(createStackSlotColoringPass(false));

    // Run post-ra machine LICM to hoist reloads / remats.
    if (!DisablePostRAMachineLICM)
      PM.add(createMachineLICMPass(false));

    printAndVerify(PM, "After StackSlotColoring and postra Machine LICM");
  }

  // Run post-ra passes.
  if (addPostRegAlloc(PM, OptLevel))
    printAndVerify(PM, "After PostRegAlloc passes");

  PM.add(createExpandPostRAPseudosPass());
  printAndVerify(PM, "After ExpandPostRAPseudos");

  // Insert prolog/epilog code.  Eliminate abstract frame index references...
  PM.add(createPrologEpilogCodeInserter());
  printAndVerify(PM, "After PrologEpilogCodeInserter");

  // Run pre-sched2 passes.
  if (addPreSched2(PM, OptLevel))
    printAndVerify(PM, "After PreSched2 passes");

  // Second pass scheduler.
  if (OptLevel != CodeGenOpt::None && !DisablePostRA) {
    PM.add(createPostRAScheduler(OptLevel));
    printAndVerify(PM, "After PostRAScheduler");
  }

  // Branch folding must be run after regalloc and prolog/epilog insertion.
  if (OptLevel != CodeGenOpt::None && !DisableBranchFold) {
    PM.add(createBranchFoldingPass(getEnableTailMergeDefault()));
    printNoVerify(PM, "After BranchFolding");
  }

  // Tail duplication.
  if (OptLevel != CodeGenOpt::None && !DisableTailDuplicate) {
    PM.add(createTailDuplicatePass(false));
    printNoVerify(PM, "After TailDuplicate");
  }

  PM.add(createGCMachineCodeAnalysisPass());

  if (PrintGCInfo)
    PM.add(createGCInfoPrinter(dbgs()));

  if (OptLevel != CodeGenOpt::None && !DisableCodePlace) {
    PM.add(createCodePlacementOptPass());
    printNoVerify(PM, "After CodePlacementOpt");
  }

  if (addPreEmitPass(PM, OptLevel))
    printNoVerify(PM, "After PreEmit passes");

  return false;
}

