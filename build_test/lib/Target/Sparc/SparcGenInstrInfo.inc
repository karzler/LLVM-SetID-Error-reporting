/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Instruction Enum Values                                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace SP {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    PROLOG_LABEL	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    KILL	= 5,
    EXTRACT_SUBREG	= 6,
    INSERT_SUBREG	= 7,
    IMPLICIT_DEF	= 8,
    SUBREG_TO_REG	= 9,
    COPY_TO_REGCLASS	= 10,
    DBG_VALUE	= 11,
    REG_SEQUENCE	= 12,
    COPY	= 13,
    BUNDLE	= 14,
    LIFETIME_START	= 15,
    LIFETIME_END	= 16,
    ADDCCri	= 17,
    ADDCCrr	= 18,
    ADDXri	= 19,
    ADDXrr	= 20,
    ADDri	= 21,
    ADDrr	= 22,
    ADJCALLSTACKDOWN	= 23,
    ADJCALLSTACKUP	= 24,
    ANDNri	= 25,
    ANDNrr	= 26,
    ANDri	= 27,
    ANDrr	= 28,
    BA	= 29,
    BCOND	= 30,
    BPXCC	= 31,
    CALL	= 32,
    FABSD	= 33,
    FABSS	= 34,
    FADDD	= 35,
    FADDS	= 36,
    FBCOND	= 37,
    FCMPD	= 38,
    FCMPS	= 39,
    FDIVD	= 40,
    FDIVS	= 41,
    FDTOI	= 42,
    FDTOS	= 43,
    FITOD	= 44,
    FITOS	= 45,
    FLUSHW	= 46,
    FMOVD	= 47,
    FMOVD_FCC	= 48,
    FMOVD_ICC	= 49,
    FMOVD_XCC	= 50,
    FMOVS	= 51,
    FMOVS_FCC	= 52,
    FMOVS_ICC	= 53,
    FMOVS_XCC	= 54,
    FMULD	= 55,
    FMULS	= 56,
    FNEGD	= 57,
    FNEGS	= 58,
    FSMULD	= 59,
    FSQRTD	= 60,
    FSQRTS	= 61,
    FSTOD	= 62,
    FSTOI	= 63,
    FSUBD	= 64,
    FSUBS	= 65,
    FpABSD	= 66,
    FpMOVD	= 67,
    FpNEGD	= 68,
    GETPCX	= 69,
    JMPLri	= 70,
    JMPLrr	= 71,
    LDDFri	= 72,
    LDDFrr	= 73,
    LDFri	= 74,
    LDFrr	= 75,
    LDSBri	= 76,
    LDSBrr	= 77,
    LDSHri	= 78,
    LDSHrr	= 79,
    LDSWri	= 80,
    LDSWrr	= 81,
    LDUBri	= 82,
    LDUBrr	= 83,
    LDUHri	= 84,
    LDUHrr	= 85,
    LDXri	= 86,
    LDXrr	= 87,
    LDri	= 88,
    LDrr	= 89,
    LEA_ADDri	= 90,
    MOVFCCri	= 91,
    MOVFCCrr	= 92,
    MOVICCri	= 93,
    MOVICCrr	= 94,
    MOVXCCri	= 95,
    MOVXCCrr	= 96,
    MULXri	= 97,
    MULXrr	= 98,
    NOP	= 99,
    ORNri	= 100,
    ORNrr	= 101,
    ORri	= 102,
    ORrr	= 103,
    POPCrr	= 104,
    RDY	= 105,
    RESTOREri	= 106,
    RESTORErr	= 107,
    RET	= 108,
    RETL	= 109,
    SAVEri	= 110,
    SAVErr	= 111,
    SDIVXri	= 112,
    SDIVXrr	= 113,
    SDIVri	= 114,
    SDIVrr	= 115,
    SELECT_CC_DFP_FCC	= 116,
    SELECT_CC_DFP_ICC	= 117,
    SELECT_CC_FP_FCC	= 118,
    SELECT_CC_FP_ICC	= 119,
    SELECT_CC_Int_FCC	= 120,
    SELECT_CC_Int_ICC	= 121,
    SETHIi	= 122,
    SLLXri	= 123,
    SLLXrr	= 124,
    SLLri	= 125,
    SLLrr	= 126,
    SMULri	= 127,
    SMULrr	= 128,
    SRAXri	= 129,
    SRAXrr	= 130,
    SRAri	= 131,
    SRArr	= 132,
    SRLXri	= 133,
    SRLXrr	= 134,
    SRLri	= 135,
    SRLrr	= 136,
    STBri	= 137,
    STBrr	= 138,
    STDFri	= 139,
    STDFrr	= 140,
    STFri	= 141,
    STFrr	= 142,
    STHri	= 143,
    STHrr	= 144,
    STXri	= 145,
    STXrr	= 146,
    STri	= 147,
    STrr	= 148,
    SUBCCri	= 149,
    SUBCCrr	= 150,
    SUBXCCrr	= 151,
    SUBXri	= 152,
    SUBXrr	= 153,
    SUBri	= 154,
    SUBrr	= 155,
    TA3	= 156,
    UDIVXri	= 157,
    UDIVXrr	= 158,
    UDIVri	= 159,
    UDIVrr	= 160,
    UMULri	= 161,
    UMULrr	= 162,
    UNIMP	= 163,
    WRYri	= 164,
    WRYrr	= 165,
    XNORri	= 166,
    XNORrr	= 167,
    XORri	= 168,
    XORrr	= 169,
    INSTRUCTION_LIST_END = 170
  };
}
} // End llvm namespace 
#endif // GET_INSTRINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Instruction Descriptors                                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const uint16_t ImplicitList1[] = { SP::ICC, 0 };
static const uint16_t ImplicitList2[] = { SP::O6, 0 };
static const uint16_t ImplicitList3[] = { SP::O0, SP::O1, SP::O2, SP::O3, SP::O4, SP::O5, SP::O7, SP::G1, SP::G2, SP::G3, SP::G4, SP::G5, SP::G6, SP::G7, SP::D0, SP::D1, SP::D2, SP::D3, SP::D4, SP::D5, SP::D6, SP::D7, SP::D8, SP::D9, SP::D10, SP::D11, SP::D12, SP::D13, SP::D14, SP::D15, SP::ICC, SP::FCC, SP::Y, 0 };
static const uint16_t ImplicitList4[] = { SP::FCC, 0 };
static const uint16_t ImplicitList5[] = { SP::O7, 0 };
static const uint16_t ImplicitList6[] = { SP::Y, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc SparcInsts[] = {
  { 0,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #1 = INLINEASM
  { 2,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #2 = PROLOG_LABEL
  { 3,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #4 = GC_LABEL
  { 5,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #5 = KILL
  { 6,	3,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo3 },  // Inst #6 = EXTRACT_SUBREG
  { 7,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo4 },  // Inst #7 = INSERT_SUBREG
  { 8,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #8 = IMPLICIT_DEF
  { 9,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo6 },  // Inst #9 = SUBREG_TO_REG
  { 10,	3,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo3 },  // Inst #10 = COPY_TO_REGCLASS
  { 11,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #11 = DBG_VALUE
  { 12,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #12 = REG_SEQUENCE
  { 13,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo7 },  // Inst #13 = COPY
  { 14,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #14 = BUNDLE
  { 15,	1,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #15 = LIFETIME_START
  { 16,	1,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #16 = LIFETIME_END
  { 17,	3,	1,	0,	0,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #17 = ADDCCri
  { 18,	3,	1,	0,	0,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #18 = ADDCCrr
  { 19,	3,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo8 },  // Inst #19 = ADDXri
  { 20,	3,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo9 },  // Inst #20 = ADDXrr
  { 21,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #21 = ADDri
  { 22,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #22 = ADDrr
  { 23,	1,	0,	0,	0,	0, 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo2 },  // Inst #23 = ADJCALLSTACKDOWN
  { 24,	2,	0,	0,	0,	0, 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo10 },  // Inst #24 = ADJCALLSTACKUP
  { 25,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #25 = ANDNri
  { 26,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #26 = ANDNrr
  { 27,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #27 = ANDri
  { 28,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #28 = ANDrr
  { 29,	1,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #29 = BA
  { 30,	2,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, ImplicitList1, NULL, OperandInfo7 },  // Inst #30 = BCOND
  { 31,	2,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, ImplicitList1, NULL, OperandInfo7 },  // Inst #31 = BPXCC
  { 32,	1,	0,	0,	0,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Variadic), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo5 },  // Inst #32 = CALL
  { 33,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #33 = FABSD
  { 34,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #34 = FABSS
  { 35,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #35 = FADDD
  { 36,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #36 = FADDS
  { 37,	2,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, ImplicitList4, NULL, OperandInfo7 },  // Inst #37 = FBCOND
  { 38,	2,	0,	0,	0,	0, 0x0ULL, NULL, ImplicitList4, OperandInfo11 },  // Inst #38 = FCMPD
  { 39,	2,	0,	0,	0,	0, 0x0ULL, NULL, ImplicitList4, OperandInfo12 },  // Inst #39 = FCMPS
  { 40,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #40 = FDIVD
  { 41,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #41 = FDIVS
  { 42,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #42 = FDTOI
  { 43,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #43 = FDTOS
  { 44,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #44 = FITOD
  { 45,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #45 = FITOS
  { 46,	0,	0,	0,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #46 = FLUSHW
  { 47,	2,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #47 = FMOVD
  { 48,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList4, NULL, OperandInfo17 },  // Inst #48 = FMOVD_FCC
  { 49,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo17 },  // Inst #49 = FMOVD_ICC
  { 50,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo17 },  // Inst #50 = FMOVD_XCC
  { 51,	2,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #51 = FMOVS
  { 52,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList4, NULL, OperandInfo18 },  // Inst #52 = FMOVS_FCC
  { 53,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo18 },  // Inst #53 = FMOVS_ICC
  { 54,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo18 },  // Inst #54 = FMOVS_XCC
  { 55,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #55 = FMULD
  { 56,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #56 = FMULS
  { 57,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #57 = FNEGD
  { 58,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #58 = FNEGS
  { 59,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #59 = FSMULD
  { 60,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #60 = FSQRTD
  { 61,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #61 = FSQRTS
  { 62,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #62 = FSTOD
  { 63,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #63 = FSTOI
  { 64,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #64 = FSUBD
  { 65,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #65 = FSUBS
  { 66,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #66 = FpABSD
  { 67,	2,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #67 = FpMOVD
  { 68,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #68 = FpNEGD
  { 69,	1,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList5, OperandInfo5 },  // Inst #69 = GETPCX
  { 70,	2,	0,	0,	0,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Variadic), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo20 },  // Inst #70 = JMPLri
  { 71,	2,	0,	0,	0,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Variadic), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo21 },  // Inst #71 = JMPLrr
  { 72,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #72 = LDDFri
  { 73,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #73 = LDDFrr
  { 74,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #74 = LDFri
  { 75,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #75 = LDFrr
  { 76,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #76 = LDSBri
  { 77,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #77 = LDSBrr
  { 78,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #78 = LDSHri
  { 79,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #79 = LDSHrr
  { 80,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #80 = LDSWri
  { 81,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #81 = LDSWrr
  { 82,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #82 = LDUBri
  { 83,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #83 = LDUBrr
  { 84,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #84 = LDUHri
  { 85,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #85 = LDUHrr
  { 86,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #86 = LDXri
  { 87,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #87 = LDXrr
  { 88,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #88 = LDri
  { 89,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #89 = LDrr
  { 90,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #90 = LEA_ADDri
  { 91,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList4, NULL, OperandInfo30 },  // Inst #91 = MOVFCCri
  { 92,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList4, NULL, OperandInfo31 },  // Inst #92 = MOVFCCrr
  { 93,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo30 },  // Inst #93 = MOVICCri
  { 94,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo31 },  // Inst #94 = MOVICCrr
  { 95,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo30 },  // Inst #95 = MOVXCCri
  { 96,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo31 },  // Inst #96 = MOVXCCrr
  { 97,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #97 = MULXri
  { 98,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #98 = MULXrr
  { 99,	0,	0,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #99 = NOP
  { 100,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #100 = ORNri
  { 101,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #101 = ORNrr
  { 102,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #102 = ORri
  { 103,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #103 = ORrr
  { 104,	2,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #104 = POPCrr
  { 105,	1,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList6, NULL, OperandInfo34 },  // Inst #105 = RDY
  { 106,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #106 = RESTOREri
  { 107,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #107 = RESTORErr
  { 108,	1,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #108 = RET
  { 109,	1,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #109 = RETL
  { 110,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #110 = SAVEri
  { 111,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #111 = SAVErr
  { 112,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #112 = SDIVXri
  { 113,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #113 = SDIVXrr
  { 114,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList6, OperandInfo8 },  // Inst #114 = SDIVri
  { 115,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList6, OperandInfo9 },  // Inst #115 = SDIVrr
  { 116,	4,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, NULL, OperandInfo35 },  // Inst #116 = SELECT_CC_DFP_FCC
  { 117,	4,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, NULL, OperandInfo35 },  // Inst #117 = SELECT_CC_DFP_ICC
  { 118,	4,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, NULL, OperandInfo36 },  // Inst #118 = SELECT_CC_FP_FCC
  { 119,	4,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, NULL, OperandInfo36 },  // Inst #119 = SELECT_CC_FP_ICC
  { 120,	4,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, NULL, OperandInfo37 },  // Inst #120 = SELECT_CC_Int_FCC
  { 121,	4,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, NULL, OperandInfo37 },  // Inst #121 = SELECT_CC_Int_ICC
  { 122,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo38 },  // Inst #122 = SETHIi
  { 123,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo39 },  // Inst #123 = SLLXri
  { 124,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo40 },  // Inst #124 = SLLXrr
  { 125,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #125 = SLLri
  { 126,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #126 = SLLrr
  { 127,	3,	1,	0,	0,	0, 0x0ULL, NULL, ImplicitList6, OperandInfo8 },  // Inst #127 = SMULri
  { 128,	3,	1,	0,	0,	0, 0x0ULL, NULL, ImplicitList6, OperandInfo9 },  // Inst #128 = SMULrr
  { 129,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo39 },  // Inst #129 = SRAXri
  { 130,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo40 },  // Inst #130 = SRAXrr
  { 131,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #131 = SRAri
  { 132,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #132 = SRArr
  { 133,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo39 },  // Inst #133 = SRLXri
  { 134,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo40 },  // Inst #134 = SRLXrr
  { 135,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #135 = SRLri
  { 136,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #136 = SRLrr
  { 137,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #137 = STBri
  { 138,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo42 },  // Inst #138 = STBrr
  { 139,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo43 },  // Inst #139 = STDFri
  { 140,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo44 },  // Inst #140 = STDFrr
  { 141,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #141 = STFri
  { 142,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #142 = STFrr
  { 143,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #143 = STHri
  { 144,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo42 },  // Inst #144 = STHrr
  { 145,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo47 },  // Inst #145 = STXri
  { 146,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo48 },  // Inst #146 = STXrr
  { 147,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #147 = STri
  { 148,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo42 },  // Inst #148 = STrr
  { 149,	3,	1,	0,	0,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #149 = SUBCCri
  { 150,	3,	1,	0,	0,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #150 = SUBCCrr
  { 151,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo9 },  // Inst #151 = SUBXCCrr
  { 152,	3,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo8 },  // Inst #152 = SUBXri
  { 153,	3,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo9 },  // Inst #153 = SUBXrr
  { 154,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #154 = SUBri
  { 155,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #155 = SUBrr
  { 156,	0,	0,	0,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #156 = TA3
  { 157,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #157 = UDIVXri
  { 158,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #158 = UDIVXrr
  { 159,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList6, OperandInfo8 },  // Inst #159 = UDIVri
  { 160,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList6, OperandInfo9 },  // Inst #160 = UDIVrr
  { 161,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList6, OperandInfo8 },  // Inst #161 = UMULri
  { 162,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList6, OperandInfo9 },  // Inst #162 = UMULrr
  { 163,	1,	0,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #163 = UNIMP
  { 164,	2,	0,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList6, OperandInfo38 },  // Inst #164 = WRYri
  { 165,	2,	0,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList6, OperandInfo33 },  // Inst #165 = WRYrr
  { 166,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #166 = XNORri
  { 167,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #167 = XNORrr
  { 168,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #168 = XORri
  { 169,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #169 = XORrr
};

extern const char SparcInstrNameData[] = {
  /* 0 */ 'T', 'A', '3', 0,
  /* 4 */ 'B', 'A', 0,
  /* 7 */ 'F', 'M', 'O', 'V', 'D', '_', 'F', 'C', 'C', 0,
  /* 17 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'D', 'F', 'P', '_', 'F', 'C', 'C', 0,
  /* 35 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', 'P', '_', 'F', 'C', 'C', 0,
  /* 52 */ 'F', 'M', 'O', 'V', 'S', '_', 'F', 'C', 'C', 0,
  /* 62 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', 'n', 't', '_', 'F', 'C', 'C', 0,
  /* 80 */ 'F', 'M', 'O', 'V', 'D', '_', 'I', 'C', 'C', 0,
  /* 90 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'D', 'F', 'P', '_', 'I', 'C', 'C', 0,
  /* 108 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', 'P', '_', 'I', 'C', 'C', 0,
  /* 125 */ 'F', 'M', 'O', 'V', 'S', '_', 'I', 'C', 'C', 0,
  /* 135 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', 'n', 't', '_', 'I', 'C', 'C', 0,
  /* 153 */ 'B', 'P', 'X', 'C', 'C', 0,
  /* 159 */ 'F', 'M', 'O', 'V', 'D', '_', 'X', 'C', 'C', 0,
  /* 169 */ 'F', 'M', 'O', 'V', 'S', '_', 'X', 'C', 'C', 0,
  /* 179 */ 'F', 'S', 'U', 'B', 'D', 0,
  /* 185 */ 'F', 'A', 'D', 'D', 'D', 0,
  /* 191 */ 'F', 'N', 'E', 'G', 'D', 0,
  /* 197 */ 'F', 'p', 'N', 'E', 'G', 'D', 0,
  /* 204 */ 'F', 'M', 'U', 'L', 'D', 0,
  /* 210 */ 'F', 'S', 'M', 'U', 'L', 'D', 0,
  /* 217 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 230 */ 'F', 'B', 'C', 'O', 'N', 'D', 0,
  /* 237 */ 'F', 'I', 'T', 'O', 'D', 0,
  /* 243 */ 'F', 'S', 'T', 'O', 'D', 0,
  /* 249 */ 'F', 'C', 'M', 'P', 'D', 0,
  /* 255 */ 'F', 'A', 'B', 'S', 'D', 0,
  /* 261 */ 'F', 'p', 'A', 'B', 'S', 'D', 0,
  /* 268 */ 'F', 'S', 'Q', 'R', 'T', 'D', 0,
  /* 275 */ 'F', 'D', 'I', 'V', 'D', 0,
  /* 281 */ 'F', 'M', 'O', 'V', 'D', 0,
  /* 287 */ 'F', 'p', 'M', 'O', 'V', 'D', 0,
  /* 294 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 307 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 314 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 324 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 337 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 352 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 366 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 380 */ 'P', 'H', 'I', 0,
  /* 384 */ 'F', 'D', 'T', 'O', 'I', 0,
  /* 390 */ 'F', 'S', 'T', 'O', 'I', 0,
  /* 396 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 405 */ 'P', 'R', 'O', 'L', 'O', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 418 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 427 */ 'C', 'A', 'L', 'L', 0,
  /* 432 */ 'K', 'I', 'L', 'L', 0,
  /* 437 */ 'R', 'E', 'T', 'L', 0,
  /* 442 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 452 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 469 */ 'U', 'N', 'I', 'M', 'P', 0,
  /* 475 */ 'N', 'O', 'P', 0,
  /* 479 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 494 */ 'F', 'S', 'U', 'B', 'S', 0,
  /* 500 */ 'F', 'A', 'D', 'D', 'S', 0,
  /* 506 */ 'F', 'N', 'E', 'G', 'S', 0,
  /* 512 */ 'F', 'M', 'U', 'L', 'S', 0,
  /* 518 */ 'F', 'D', 'T', 'O', 'S', 0,
  /* 524 */ 'F', 'I', 'T', 'O', 'S', 0,
  /* 530 */ 'F', 'C', 'M', 'P', 'S', 0,
  /* 536 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 553 */ 'F', 'A', 'B', 'S', 'S', 0,
  /* 559 */ 'F', 'S', 'Q', 'R', 'T', 'S', 0,
  /* 566 */ 'F', 'D', 'I', 'V', 'S', 0,
  /* 572 */ 'F', 'M', 'O', 'V', 'S', 0,
  /* 578 */ 'R', 'E', 'T', 0,
  /* 582 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 597 */ 'F', 'L', 'U', 'S', 'H', 'W', 0,
  /* 604 */ 'G', 'E', 'T', 'P', 'C', 'X', 0,
  /* 611 */ 'R', 'D', 'Y', 0,
  /* 615 */ 'C', 'O', 'P', 'Y', 0,
  /* 620 */ 'S', 'E', 'T', 'H', 'I', 'i', 0,
  /* 627 */ 'S', 'R', 'A', 'r', 'i', 0,
  /* 633 */ 'L', 'D', 'S', 'B', 'r', 'i', 0,
  /* 640 */ 'S', 'T', 'B', 'r', 'i', 0,
  /* 646 */ 'L', 'D', 'U', 'B', 'r', 'i', 0,
  /* 653 */ 'S', 'U', 'B', 'r', 'i', 0,
  /* 659 */ 'S', 'U', 'B', 'C', 'C', 'r', 'i', 0,
  /* 667 */ 'A', 'D', 'D', 'C', 'C', 'r', 'i', 0,
  /* 675 */ 'M', 'O', 'V', 'F', 'C', 'C', 'r', 'i', 0,
  /* 684 */ 'M', 'O', 'V', 'I', 'C', 'C', 'r', 'i', 0,
  /* 693 */ 'M', 'O', 'V', 'X', 'C', 'C', 'r', 'i', 0,
  /* 702 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'r', 'i', 0,
  /* 712 */ 'L', 'D', 'r', 'i', 0,
  /* 717 */ 'A', 'N', 'D', 'r', 'i', 0,
  /* 723 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', 'r', 'i', 0,
  /* 733 */ 'S', 'A', 'V', 'E', 'r', 'i', 0,
  /* 740 */ 'L', 'D', 'D', 'F', 'r', 'i', 0,
  /* 747 */ 'L', 'D', 'F', 'r', 'i', 0,
  /* 753 */ 'S', 'T', 'D', 'F', 'r', 'i', 0,
  /* 760 */ 'S', 'T', 'F', 'r', 'i', 0,
  /* 766 */ 'L', 'D', 'S', 'H', 'r', 'i', 0,
  /* 773 */ 'S', 'T', 'H', 'r', 'i', 0,
  /* 779 */ 'L', 'D', 'U', 'H', 'r', 'i', 0,
  /* 786 */ 'S', 'L', 'L', 'r', 'i', 0,
  /* 792 */ 'J', 'M', 'P', 'L', 'r', 'i', 0,
  /* 799 */ 'S', 'R', 'L', 'r', 'i', 0,
  /* 805 */ 'S', 'M', 'U', 'L', 'r', 'i', 0,
  /* 812 */ 'U', 'M', 'U', 'L', 'r', 'i', 0,
  /* 819 */ 'A', 'N', 'D', 'N', 'r', 'i', 0,
  /* 826 */ 'O', 'R', 'N', 'r', 'i', 0,
  /* 832 */ 'X', 'N', 'O', 'R', 'r', 'i', 0,
  /* 839 */ 'X', 'O', 'R', 'r', 'i', 0,
  /* 845 */ 'S', 'T', 'r', 'i', 0,
  /* 850 */ 'S', 'D', 'I', 'V', 'r', 'i', 0,
  /* 857 */ 'U', 'D', 'I', 'V', 'r', 'i', 0,
  /* 864 */ 'L', 'D', 'S', 'W', 'r', 'i', 0,
  /* 871 */ 'S', 'R', 'A', 'X', 'r', 'i', 0,
  /* 878 */ 'S', 'U', 'B', 'X', 'r', 'i', 0,
  /* 885 */ 'A', 'D', 'D', 'X', 'r', 'i', 0,
  /* 892 */ 'L', 'D', 'X', 'r', 'i', 0,
  /* 898 */ 'S', 'L', 'L', 'X', 'r', 'i', 0,
  /* 905 */ 'S', 'R', 'L', 'X', 'r', 'i', 0,
  /* 912 */ 'M', 'U', 'L', 'X', 'r', 'i', 0,
  /* 919 */ 'S', 'T', 'X', 'r', 'i', 0,
  /* 925 */ 'S', 'D', 'I', 'V', 'X', 'r', 'i', 0,
  /* 933 */ 'U', 'D', 'I', 'V', 'X', 'r', 'i', 0,
  /* 941 */ 'W', 'R', 'Y', 'r', 'i', 0,
  /* 947 */ 'S', 'R', 'A', 'r', 'r', 0,
  /* 953 */ 'L', 'D', 'S', 'B', 'r', 'r', 0,
  /* 960 */ 'S', 'T', 'B', 'r', 'r', 0,
  /* 966 */ 'L', 'D', 'U', 'B', 'r', 'r', 0,
  /* 973 */ 'S', 'U', 'B', 'r', 'r', 0,
  /* 979 */ 'S', 'U', 'B', 'C', 'C', 'r', 'r', 0,
  /* 987 */ 'A', 'D', 'D', 'C', 'C', 'r', 'r', 0,
  /* 995 */ 'M', 'O', 'V', 'F', 'C', 'C', 'r', 'r', 0,
  /* 1004 */ 'M', 'O', 'V', 'I', 'C', 'C', 'r', 'r', 0,
  /* 1013 */ 'S', 'U', 'B', 'X', 'C', 'C', 'r', 'r', 0,
  /* 1022 */ 'M', 'O', 'V', 'X', 'C', 'C', 'r', 'r', 0,
  /* 1031 */ 'P', 'O', 'P', 'C', 'r', 'r', 0,
  /* 1038 */ 'A', 'D', 'D', 'r', 'r', 0,
  /* 1044 */ 'L', 'D', 'r', 'r', 0,
  /* 1049 */ 'A', 'N', 'D', 'r', 'r', 0,
  /* 1055 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', 'r', 'r', 0,
  /* 1065 */ 'S', 'A', 'V', 'E', 'r', 'r', 0,
  /* 1072 */ 'L', 'D', 'D', 'F', 'r', 'r', 0,
  /* 1079 */ 'L', 'D', 'F', 'r', 'r', 0,
  /* 1085 */ 'S', 'T', 'D', 'F', 'r', 'r', 0,
  /* 1092 */ 'S', 'T', 'F', 'r', 'r', 0,
  /* 1098 */ 'L', 'D', 'S', 'H', 'r', 'r', 0,
  /* 1105 */ 'S', 'T', 'H', 'r', 'r', 0,
  /* 1111 */ 'L', 'D', 'U', 'H', 'r', 'r', 0,
  /* 1118 */ 'S', 'L', 'L', 'r', 'r', 0,
  /* 1124 */ 'J', 'M', 'P', 'L', 'r', 'r', 0,
  /* 1131 */ 'S', 'R', 'L', 'r', 'r', 0,
  /* 1137 */ 'S', 'M', 'U', 'L', 'r', 'r', 0,
  /* 1144 */ 'U', 'M', 'U', 'L', 'r', 'r', 0,
  /* 1151 */ 'A', 'N', 'D', 'N', 'r', 'r', 0,
  /* 1158 */ 'O', 'R', 'N', 'r', 'r', 0,
  /* 1164 */ 'X', 'N', 'O', 'R', 'r', 'r', 0,
  /* 1171 */ 'X', 'O', 'R', 'r', 'r', 0,
  /* 1177 */ 'S', 'T', 'r', 'r', 0,
  /* 1182 */ 'S', 'D', 'I', 'V', 'r', 'r', 0,
  /* 1189 */ 'U', 'D', 'I', 'V', 'r', 'r', 0,
  /* 1196 */ 'L', 'D', 'S', 'W', 'r', 'r', 0,
  /* 1203 */ 'S', 'R', 'A', 'X', 'r', 'r', 0,
  /* 1210 */ 'S', 'U', 'B', 'X', 'r', 'r', 0,
  /* 1217 */ 'A', 'D', 'D', 'X', 'r', 'r', 0,
  /* 1224 */ 'L', 'D', 'X', 'r', 'r', 0,
  /* 1230 */ 'S', 'L', 'L', 'X', 'r', 'r', 0,
  /* 1237 */ 'S', 'R', 'L', 'X', 'r', 'r', 0,
  /* 1244 */ 'M', 'U', 'L', 'X', 'r', 'r', 0,
  /* 1251 */ 'S', 'T', 'X', 'r', 'r', 0,
  /* 1257 */ 'S', 'D', 'I', 'V', 'X', 'r', 'r', 0,
  /* 1265 */ 'U', 'D', 'I', 'V', 'X', 'r', 'r', 0,
  /* 1273 */ 'W', 'R', 'Y', 'r', 'r', 0,
};

extern const unsigned SparcInstrNameIndices[] = {
    380U, 442U, 405U, 418U, 396U, 432U, 337U, 352U, 
    324U, 366U, 536U, 314U, 294U, 615U, 307U, 582U, 
    217U, 667U, 987U, 885U, 1217U, 706U, 1038U, 452U, 
    479U, 819U, 1151U, 717U, 1049U, 4U, 231U, 153U, 
    427U, 255U, 553U, 185U, 500U, 230U, 249U, 530U, 
    275U, 566U, 384U, 518U, 237U, 524U, 597U, 281U, 
    7U, 80U, 159U, 572U, 52U, 125U, 169U, 204U, 
    512U, 191U, 506U, 210U, 268U, 559U, 243U, 390U, 
    179U, 494U, 261U, 287U, 197U, 604U, 792U, 1124U, 
    740U, 1072U, 747U, 1079U, 633U, 953U, 766U, 1098U, 
    864U, 1196U, 646U, 966U, 779U, 1111U, 892U, 1224U, 
    712U, 1044U, 702U, 675U, 995U, 684U, 1004U, 693U, 
    1022U, 912U, 1244U, 475U, 826U, 1158U, 834U, 1166U, 
    1031U, 611U, 723U, 1055U, 578U, 437U, 733U, 1065U, 
    925U, 1257U, 850U, 1182U, 17U, 90U, 35U, 108U, 
    62U, 135U, 620U, 898U, 1230U, 786U, 1118U, 805U, 
    1137U, 871U, 1203U, 627U, 947U, 905U, 1237U, 799U, 
    1131U, 640U, 960U, 753U, 1085U, 760U, 1092U, 773U, 
    1105U, 919U, 1251U, 845U, 1177U, 659U, 979U, 1013U, 
    878U, 1210U, 653U, 973U, 0U, 933U, 1265U, 857U, 
    1189U, 812U, 1144U, 469U, 941U, 1273U, 832U, 1164U, 
    839U, 1171U, 
};

static inline void InitSparcMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(SparcInsts, SparcInstrNameIndices, SparcInstrNameData, 170);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct SparcGenInstrInfo : public TargetInstrInfo {
  explicit SparcGenInstrInfo(int SO = -1, int DO = -1);
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR
#undef GET_INSTRINFO_CTOR
namespace llvm {
extern const MCInstrDesc SparcInsts[];
extern const unsigned SparcInstrNameIndices[];
extern const char SparcInstrNameData[];
SparcGenInstrInfo::SparcGenInstrInfo(int SO, int DO)
  : TargetInstrInfo(SO, DO) {
  InitMCInstrInfo(SparcInsts, SparcInstrNameIndices, SparcInstrNameData, 170);
}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR

