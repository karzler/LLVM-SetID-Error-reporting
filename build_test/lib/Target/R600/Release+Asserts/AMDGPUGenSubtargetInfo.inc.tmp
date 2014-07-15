/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Subtarget Enumeration Source Fragment                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_SUBTARGETINFO_ENUM
#undef GET_SUBTARGETINFO_ENUM
namespace llvm {
namespace AMDGPU {
enum {
  Feature32on64BitPtr =  1ULL << 0,
  Feature64BitPtr =  1ULL << 1,
  FeatureBarrierDetect =  1ULL << 2,
  FeatureByteAddress =  1ULL << 3,
  FeatureDebug =  1ULL << 4,
  FeatureDumpCode =  1ULL << 5,
  FeatureFP64 =  1ULL << 6,
  FeatureImages =  1ULL << 7,
  FeatureMacroDB =  1ULL << 8,
  FeatureMultiUAV =  1ULL << 9,
  FeatureNoAlias =  1ULL << 10,
  FeatureNoInline =  1ULL << 11,
  FeatureR600ALUInst =  1ULL << 12,
  FeatureVertexCache =  1ULL << 13
};
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV AMDGPUFeatureKV[] = {
  { "64BitPtr", "Specify if 64bit addressing should be used.", AMDGPU::Feature64BitPtr, 0ULL },
  { "64on32BitPtr", "Specify if 64bit sized pointers with 32bit addressing should be used.", AMDGPU::Feature32on64BitPtr, 0ULL },
  { "DumpCode", "Dump MachineInstrs in the CodeEmitter", AMDGPU::FeatureDumpCode, 0ULL },
  { "HasVertexCache", "Specify use of dedicated vertex cache.", AMDGPU::FeatureVertexCache, 0ULL },
  { "R600ALUInst", "Older version of ALU instructions encoding.", AMDGPU::FeatureR600ALUInst, 0ULL },
  { "barrier_detect", "Enable duplicate barrier detection(HD5XXX or later).", AMDGPU::FeatureBarrierDetect, 0ULL },
  { "byte_addressable_store", "Enable byte addressable stores", AMDGPU::FeatureByteAddress, 0ULL },
  { "debug", "Debug mode is enabled, so disable hardware accelerated address spaces.", AMDGPU::FeatureDebug, 0ULL },
  { "fp64", "Enable 64bit double precision operations", AMDGPU::FeatureFP64, 0ULL },
  { "images", "Enable image functions", AMDGPU::FeatureImages, 0ULL },
  { "macrodb", "Use internal macrodb, instead of macrodb in driver", AMDGPU::FeatureMacroDB, 0ULL },
  { "multi_uav", "Generate multiple UAV code(HD5XXX family or later)", AMDGPU::FeatureMultiUAV, 0ULL },
  { "no-inline", "specify whether to not inline functions", AMDGPU::FeatureNoInline, 0ULL },
  { "noalias", "assert that all kernel argument pointers are not aliased", AMDGPU::FeatureNoAlias, 0ULL }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV AMDGPUSubTypeKV[] = {
  { "", "Select the  processor", AMDGPU::FeatureR600ALUInst | AMDGPU::FeatureVertexCache, 0ULL },
  { "SI", "Select the SI processor", AMDGPU::Feature64BitPtr | AMDGPU::FeatureFP64, 0ULL },
  { "barts", "Select the barts processor", AMDGPU::FeatureByteAddress | AMDGPU::FeatureImages | AMDGPU::FeatureVertexCache, 0ULL },
  { "caicos", "Select the caicos processor", AMDGPU::FeatureByteAddress | AMDGPU::FeatureImages, 0ULL },
  { "cayman", "Select the cayman processor", AMDGPU::FeatureByteAddress | AMDGPU::FeatureImages | AMDGPU::FeatureFP64, 0ULL },
  { "cedar", "Select the cedar processor", AMDGPU::FeatureByteAddress | AMDGPU::FeatureImages | AMDGPU::FeatureVertexCache, 0ULL },
  { "cypress", "Select the cypress processor", AMDGPU::FeatureByteAddress | AMDGPU::FeatureImages | AMDGPU::FeatureFP64 | AMDGPU::FeatureVertexCache, 0ULL },
  { "hainan", "Select the hainan processor", AMDGPU::Feature64BitPtr | AMDGPU::FeatureFP64, 0ULL },
  { "juniper", "Select the juniper processor", AMDGPU::FeatureByteAddress | AMDGPU::FeatureImages | AMDGPU::FeatureVertexCache, 0ULL },
  { "oland", "Select the oland processor", AMDGPU::Feature64BitPtr | AMDGPU::FeatureFP64, 0ULL },
  { "pitcairn", "Select the pitcairn processor", AMDGPU::Feature64BitPtr | AMDGPU::FeatureFP64, 0ULL },
  { "r600", "Select the r600 processor", AMDGPU::FeatureR600ALUInst | AMDGPU::FeatureVertexCache, 0ULL },
  { "redwood", "Select the redwood processor", AMDGPU::FeatureByteAddress | AMDGPU::FeatureImages | AMDGPU::FeatureVertexCache, 0ULL },
  { "rs880", "Select the rs880 processor", AMDGPU::FeatureR600ALUInst, 0ULL },
  { "rv670", "Select the rv670 processor", AMDGPU::FeatureR600ALUInst | AMDGPU::FeatureFP64 | AMDGPU::FeatureVertexCache, 0ULL },
  { "rv710", "Select the rv710 processor", AMDGPU::FeatureVertexCache, 0ULL },
  { "rv730", "Select the rv730 processor", AMDGPU::FeatureVertexCache, 0ULL },
  { "rv770", "Select the rv770 processor", AMDGPU::FeatureFP64 | AMDGPU::FeatureVertexCache, 0ULL },
  { "sumo", "Select the sumo processor", AMDGPU::FeatureByteAddress | AMDGPU::FeatureImages, 0ULL },
  { "tahiti", "Select the tahiti processor", AMDGPU::Feature64BitPtr | AMDGPU::FeatureFP64, 0ULL },
  { "turks", "Select the turks processor", AMDGPU::FeatureByteAddress | AMDGPU::FeatureImages | AMDGPU::FeatureVertexCache, 0ULL },
  { "verde", "Select the verde processor", AMDGPU::Feature64BitPtr | AMDGPU::FeatureFP64, 0ULL }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "R600_VLIW5_Itin"
namespace R600_VLIW5_ItinFU {
  const unsigned ALU_X = 1 << 0;
  const unsigned ALU_Y = 1 << 1;
  const unsigned ALU_Z = 1 << 2;
  const unsigned ALU_W = 1 << 3;
  const unsigned TRANS = 1 << 4;
  const unsigned ALU_NULL = 1 << 5;
}

// Functional units for "R600_VLIW4_Itin"
namespace R600_VLIW4_ItinFU {
  const unsigned ALU_X = 1 << 0;
  const unsigned ALU_Y = 1 << 1;
  const unsigned ALU_Z = 1 << 2;
  const unsigned ALU_W = 1 << 3;
  const unsigned ALU_NULL = 1 << 4;
}

extern const llvm::InstrStage AMDGPUStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, R600_VLIW5_ItinFU::ALU_X | R600_VLIW5_ItinFU::ALU_Y | R600_VLIW5_ItinFU::ALU_Z | R600_VLIW5_ItinFU::ALU_W | R600_VLIW5_ItinFU::TRANS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 1, R600_VLIW5_ItinFU::ALU_NULL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 1, R600_VLIW5_ItinFU::ALU_X | R600_VLIW5_ItinFU::ALU_Y | R600_VLIW5_ItinFU::ALU_X | R600_VLIW5_ItinFU::ALU_W, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 1, R600_VLIW5_ItinFU::TRANS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4
  { 1, R600_VLIW4_ItinFU::ALU_X | R600_VLIW4_ItinFU::ALU_Y | R600_VLIW4_ItinFU::ALU_Z | R600_VLIW4_ItinFU::ALU_W, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5
  { 1, R600_VLIW4_ItinFU::ALU_NULL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6
  { 1, R600_VLIW4_ItinFU::ALU_X | R600_VLIW4_ItinFU::ALU_Y | R600_VLIW4_ItinFU::ALU_X | R600_VLIW4_ItinFU::ALU_W, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned AMDGPUOperandCycles[] = {
  0, // No itinerary
  0 // End operand cycles
};
extern const unsigned AMDGPUForwardingPaths[] = {
 0, // No itinerary
 0 // End bypass tables
};

static const llvm::InstrItinerary *NoItineraries = 0;

static const llvm::InstrItinerary R600_VLIW5_Itin[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 2, 0, 0 }, // 1 AnyALU
  { 1, 2, 3, 0, 0 }, // 2 NullALU
  { 1, 3, 4, 0, 0 }, // 3 VecALU
  { 1, 4, 5, 0, 0 }, // 4 TransALU
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary R600_VLIW4_Itin[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 5, 6, 0, 0 }, // 1 AnyALU
  { 1, 6, 7, 0, 0 }, // 2 NullALU
  { 1, 7, 8, 0, 0 }, // 3 VecALU
  { 1, 6, 7, 0, 0 }, // 4 TransALU
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry AMDGPUWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // AMDGPUWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry AMDGPUWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // AMDGPUWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry AMDGPUReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // AMDGPUReadAdvanceTable

static const llvm::MCSchedModel NoSchedModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMinLatency,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultILPWindow,
  MCSchedModel::DefaultMispredictPenalty,
  0, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  NoItineraries);

static const llvm::MCSchedModel R600_VLIW5_ItinModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMinLatency,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultILPWindow,
  MCSchedModel::DefaultMispredictPenalty,
  1, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  R600_VLIW5_Itin);

static const llvm::MCSchedModel R600_VLIW4_ItinModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMinLatency,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultILPWindow,
  MCSchedModel::DefaultMispredictPenalty,
  2, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  R600_VLIW4_Itin);

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV AMDGPUProcSchedKV[] = {
  { "", (const void *)&R600_VLIW5_ItinModel },
  { "SI", (const void *)&NoSchedModel },
  { "barts", (const void *)&R600_VLIW5_ItinModel },
  { "caicos", (const void *)&R600_VLIW5_ItinModel },
  { "cayman", (const void *)&R600_VLIW4_ItinModel },
  { "cedar", (const void *)&R600_VLIW5_ItinModel },
  { "cypress", (const void *)&R600_VLIW5_ItinModel },
  { "hainan", (const void *)&NoSchedModel },
  { "juniper", (const void *)&R600_VLIW5_ItinModel },
  { "oland", (const void *)&NoSchedModel },
  { "pitcairn", (const void *)&NoSchedModel },
  { "r600", (const void *)&R600_VLIW5_ItinModel },
  { "redwood", (const void *)&R600_VLIW5_ItinModel },
  { "rs880", (const void *)&R600_VLIW5_ItinModel },
  { "rv670", (const void *)&R600_VLIW5_ItinModel },
  { "rv710", (const void *)&R600_VLIW5_ItinModel },
  { "rv730", (const void *)&R600_VLIW5_ItinModel },
  { "rv770", (const void *)&R600_VLIW5_ItinModel },
  { "sumo", (const void *)&R600_VLIW5_ItinModel },
  { "tahiti", (const void *)&NoSchedModel },
  { "turks", (const void *)&R600_VLIW5_ItinModel },
  { "verde", (const void *)&NoSchedModel }
};
#undef DBGFIELD
static inline void InitAMDGPUMCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, AMDGPUFeatureKV, AMDGPUSubTypeKV, 
                      AMDGPUProcSchedKV, AMDGPUWriteProcResTable, AMDGPUWriteLatencyTable, AMDGPUReadAdvanceTable, 
                      AMDGPUStages, AMDGPUOperandCycles, AMDGPUForwardingPaths, 14, 22);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::AMDGPUSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  uint64_t Bits = getFeatureBits();
  if ((Bits & AMDGPU::Feature32on64BitPtr) != 0) Is32on64bit = false;
  if ((Bits & AMDGPU::Feature64BitPtr) != 0) Is64bit = false;
  if ((Bits & AMDGPU::FeatureBarrierDetect) != 0) CapsOverride[AMDGPUDeviceInfo::BarrierDetect] = true;
  if ((Bits & AMDGPU::FeatureByteAddress) != 0) CapsOverride[AMDGPUDeviceInfo::ByteStores] = true;
  if ((Bits & AMDGPU::FeatureDebug) != 0) CapsOverride[AMDGPUDeviceInfo::Debug] = true;
  if ((Bits & AMDGPU::FeatureDumpCode) != 0) DumpCode = true;
  if ((Bits & AMDGPU::FeatureFP64) != 0) CapsOverride[AMDGPUDeviceInfo::DoubleOps] = true;
  if ((Bits & AMDGPU::FeatureImages) != 0) CapsOverride[AMDGPUDeviceInfo::Images] = true;
  if ((Bits & AMDGPU::FeatureMacroDB) != 0) CapsOverride[AMDGPUDeviceInfo::MacroDB] = true;
  if ((Bits & AMDGPU::FeatureMultiUAV) != 0) CapsOverride[AMDGPUDeviceInfo::MultiUAV] = true;
  if ((Bits & AMDGPU::FeatureNoAlias) != 0) CapsOverride[AMDGPUDeviceInfo::NoAlias] = true;
  if ((Bits & AMDGPU::FeatureNoInline) != 0) CapsOverride[AMDGPUDeviceInfo::NoInline] = true;
  if ((Bits & AMDGPU::FeatureR600ALUInst) != 0) R600ALUInst = false;
  if ((Bits & AMDGPU::FeatureVertexCache) != 0) HasVertexCache = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct AMDGPUGenSubtargetInfo : public TargetSubtargetInfo {
  explicit AMDGPUGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
public:
  unsigned resolveSchedClass(unsigned SchedClass, const MachineInstr *DefMI, const TargetSchedModel *SchedModel) const;
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
};
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR
#include "llvm/CodeGen/TargetSchedule.h"
namespace llvm {
extern const llvm::SubtargetFeatureKV AMDGPUFeatureKV[];
extern const llvm::SubtargetFeatureKV AMDGPUSubTypeKV[];
extern const llvm::SubtargetInfoKV AMDGPUProcSchedKV[];
extern const llvm::MCWriteProcResEntry AMDGPUWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry AMDGPUWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry AMDGPUReadAdvanceTable[];
extern const llvm::InstrStage AMDGPUStages[];
extern const unsigned AMDGPUOperandCycles[];
extern const unsigned AMDGPUForwardingPaths[];
AMDGPUGenSubtargetInfo::AMDGPUGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, AMDGPUFeatureKV, AMDGPUSubTypeKV, 
                      AMDGPUProcSchedKV, AMDGPUWriteProcResTable, AMDGPUWriteLatencyTable, AMDGPUReadAdvanceTable, 
                      AMDGPUStages, AMDGPUOperandCycles, AMDGPUForwardingPaths, 14, 22);
}

unsigned AMDGPUGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // AMDGPUGenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

