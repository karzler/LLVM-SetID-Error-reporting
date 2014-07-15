/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Assembly Matcher Source Fragment                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_ASSEMBLER_HEADER
#undef GET_ASSEMBLER_HEADER
  // This should be included into the middle of the declaration of
  // your subclasses implementation of MCTargetAsmParser.
  unsigned ComputeAvailableFeatures(uint64_t FeatureBits) const;
  void convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                       const SmallVectorImpl<MCParsedAsmOperand*> &Operands);
  void convertToMapAndConstraints(unsigned Kind,
                           const SmallVectorImpl<MCParsedAsmOperand*> &Operands);
  bool mnemonicIsValid(StringRef Mnemonic);
  unsigned MatchInstructionImpl(
                           const SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                                MCInst &Inst,
                                unsigned &ErrorInfo, bool matchingInlineAsm,
                                unsigned VariantID = 0);

  enum OperandMatchResultTy {
    MatchOperand_Success,    // operand matched successfully
    MatchOperand_NoMatch,    // operand did not match
    MatchOperand_ParseFail   // operand matched but had errors
  };
  OperandMatchResultTy MatchOperandParserImpl(
    SmallVectorImpl<MCParsedAsmOperand*> &Operands,
    StringRef Mnemonic);
  OperandMatchResultTy tryCustomParseOperand(
    SmallVectorImpl<MCParsedAsmOperand*> &Operands,
    unsigned MCK);

#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Flags for subtarget features that participate in instruction matching.
enum SubtargetFeatureFlag {
  Feature_None = 0
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(unsigned Val) {
  switch(Val) {
  default: return "(unknown)";
  }
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_addRegOperands,
  CVT_95_addBDXAddrOperands,
  CVT_95_addImmOperands,
  CVT_95_addBDAddrOperands,
  CVT_95_addAccessRegOperands,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__GR321_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP641_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP641_0__Tie0__FP641_1,
  Convert__FP321_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP321_0__Tie0__FP321_1,
  Convert__GR321_0__Tie0__S32Imm1_1,
  Convert__GR641_0__Tie0__BDXAddr64Disp203_1,
  Convert__GR641_0__Tie0__S32Imm1_1,
  Convert__GR641_0__Tie0__GR321_1,
  Convert__GR641_0__Tie0__S16Imm1_1,
  Convert__GR641_0__Tie0__GR641_1,
  Convert__BDAddr64Disp202_0__S8Imm1_1,
  Convert__GR321_0__Tie0__S16Imm1_1,
  Convert__GR321_0__Tie0__BDXAddr64Disp203_1,
  Convert__GR321_0__Tie0__GR321_1,
  Convert__GR321_0__Tie0__U32Imm1_1,
  Convert__GR641_0__Tie0__U32Imm1_1,
  Convert__FP1281_0__Tie0__FP1281_1,
  Convert__GR641_0__ADDR641_1,
  Convert__ADDR641_0,
  Convert__GR641_0__PCRel161_1,
  Convert__GR641_0__PCRel321_1,
  Convert__U4Imm1_0__PCRel161_1,
  Convert__U4Imm1_0__PCRel321_1,
  Convert__GR321_0__BDXAddr64Disp123_1,
  Convert__FP641_0__BDXAddr64Disp123_1,
  Convert__FP641_0__FP641_1,
  Convert__FP641_0__GR321_1,
  Convert__FP641_0__GR641_1,
  Convert__FP321_0__BDXAddr64Disp123_1,
  Convert__FP321_0__FP321_1,
  Convert__FP321_0__GR321_1,
  Convert__FP321_0__GR641_1,
  Convert__GR321_0__U4Imm1_1__FP641_2,
  Convert__GR321_0__U4Imm1_1__FP321_2,
  Convert__GR321_0__S32Imm1_1,
  Convert__GR321_0__U4Imm1_1__FP1281_2,
  Convert__GR641_0__BDXAddr64Disp203_1,
  Convert__GR641_0__U4Imm1_1__FP641_2,
  Convert__GR641_0__U4Imm1_1__FP321_2,
  Convert__GR641_0__S32Imm1_1,
  Convert__GR641_0__GR321_1,
  Convert__GR641_0__S16Imm1_1,
  Convert__BDAddr64Disp122_0__S16Imm1_1,
  Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR641_0__S8Imm1_1__PCRel161_2,
  Convert__GR641_0__GR641_1,
  Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3,
  Convert__GR641_0__GR641_1__PCRel161_2,
  Convert__GR641_0__U4Imm1_1__FP1281_2,
  Convert__GR321_0__S16Imm1_1,
  Convert__GR321_0__PCRel321_1,
  Convert__GR321_0__BDXAddr64Disp203_1,
  Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR321_0__S8Imm1_1__PCRel161_2,
  Convert__BDAddr64Disp122_0__U16Imm1_1,
  Convert__GR321_0__U32Imm1_1,
  Convert__GR641_0__U32Imm1_1,
  Convert__BDAddr64Disp122_0__U8Imm1_1,
  Convert__BDAddr64Disp202_0__U8Imm1_1,
  Convert__GR321_0__GR321_1,
  Convert__FP641_0__FP641_1__FP641_2,
  Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3,
  Convert__GR321_0__GR321_1__PCRel161_2,
  Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2,
  Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2,
  Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2,
  Convert__FP1281_0__FP1281_1,
  Convert__FP1281_0__GR321_1,
  Convert__FP1281_0__GR641_1,
  Convert__GR1281_0__Tie0__BDXAddr64Disp203_1,
  Convert__GR1281_0__Tie0__GR641_1,
  Convert__GR1281_0__Tie0__GR321_1,
  Convert__GR321_0__AccessReg1_1,
  Convert__FP641_0__U4Imm1_1__FP641_2,
  Convert__FP321_0__U4Imm1_1__FP321_2,
  Convert__FP1281_0__U4Imm1_1__FP1281_2,
  Convert__GR1281_0__GR641_1,
  Convert__GR641_0__Tie0__BDXAddr64Disp123_1,
  Convert__GR641_0__Tie0__U16Imm1_1,
  Convert__PCRel161_0,
  Convert__PCRel321_0,
  Convert__GR641_0__BDXAddr64Disp123_1,
  Convert__FP641_0__FP321_1,
  Convert__FP641_0__BDXAddr64Disp203_1,
  Convert__FP321_0__FP641_1,
  Convert__FP321_0__BDXAddr64Disp203_1,
  Convert__GR641_0__FP641_1,
  Convert__GR641_0__U16Imm1_1,
  Convert__GR641_0__GR641_1__BDAddr64Disp202_2,
  Convert__FP1281_0__BDXAddr64Disp123_1,
  Convert__FP1281_0__FP641_1,
  Convert__FP1281_0__FP321_1,
  Convert__FP641_0,
  Convert__FP321_0,
  Convert__FP1281_0,
  Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2,
  Convert__FP641_0__Tie0__FP641_1__FP641_2,
  Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2,
  Convert__FP321_0__Tie0__FP321_1__FP321_2,
  Convert__FP641_0__Tie0__FP321_1,
  Convert__FP1281_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP1281_0__Tie0__FP641_1,
  Convert__GR641_0__Tie0__GR641_1__U6Imm1_2__U6Imm1_3__U6Imm1_4,
  Convert__GR321_0__GR321_1__BDAddr32Disp202_2,
  Convert__GR641_0__GR641_1__BDAddr32Disp202_2,
  Convert__GR321_0__Tie0__BDAddr32Disp122_1,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][13] = {
  // Convert__GR321_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__Tie0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__Tie0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp202_0__S8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__FP1281_0__Tie0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__ADDR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__ADDR641_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__GR641_0__PCRel161_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__PCRel321_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__PCRel161_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__PCRel321_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0__S16Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__GR641_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__PCRel321_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__BDAddr64Disp122_0__U16Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0__U8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp202_0__U8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__FP641_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__GR321_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__FP1281_0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__AccessReg1_1
  { CVT_95_addRegOperands, 1, CVT_95_addAccessRegOperands, 2, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR1281_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__PCRel161_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__PCRel321_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__GR641_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__FP1281_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP321_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP1281_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP641_0__Tie0__FP641_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP321_0__Tie0__FP321_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP641_0__Tie0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__Tie0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1__U6Imm1_2__U6Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GR321_0__GR321_1__BDAddr32Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr32Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__BDAddr32Disp122_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_Done },
};

void SystemZAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const SmallVectorImpl<MCParsedAsmOperand*> &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<SystemZOperand*>(Operands[*(p + 1)])->addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(*(p + 1)));
      break;
    case CVT_95_addRegOperands:
      static_cast<SystemZOperand*>(Operands[*(p + 1)])->addRegOperands(Inst, 1);
      break;
    case CVT_95_addBDXAddrOperands:
      static_cast<SystemZOperand*>(Operands[*(p + 1)])->addBDXAddrOperands(Inst, 3);
      break;
    case CVT_95_addImmOperands:
      static_cast<SystemZOperand*>(Operands[*(p + 1)])->addImmOperands(Inst, 1);
      break;
    case CVT_95_addBDAddrOperands:
      static_cast<SystemZOperand*>(Operands[*(p + 1)])->addBDAddrOperands(Inst, 2);
      break;
    case CVT_95_addAccessRegOperands:
      static_cast<SystemZOperand*>(Operands[*(p + 1)])->addAccessRegOperands(Inst, 1);
      break;
    }
  }
}

void SystemZAsmParser::
convertToMapAndConstraints(unsigned Kind,
                           const SmallVectorImpl<MCParsedAsmOperand*> &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  unsigned NumMCOperands = 0;
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      ++NumMCOperands;
      break;
    case CVT_Tied:
      ++NumMCOperands;
      break;
    case CVT_95_addRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBDXAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBDAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addAccessRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    }
  }
}

namespace {

/// MatchClassKind - The kinds of classes which participate in
/// instruction matching.
enum MatchClassKind {
  InvalidMatchClass = 0,
  MCK_ADDR128Bit, // register class 'ADDR128Bit'
  MCK_GR128Bit, // register class 'GR128Bit'
  MCK_ADDR64Bit, // register class 'ADDR64Bit'
  MCK_GR64Bit, // register class 'GR64Bit'
  MCK_ADDR32Bit, // register class 'ADDR32Bit'
  MCK_GR32Bit, // register class 'GR32Bit'
  MCK_FP64Bit, // register class 'FP64Bit'
  MCK_FP32Bit, // register class 'FP32Bit'
  MCK_FP128Bit, // register class 'FP128Bit'
  MCK_ADDR128, // user defined class 'ADDR128AsmOperand'
  MCK_ADDR32, // user defined class 'ADDR32AsmOperand'
  MCK_ADDR64, // user defined class 'ADDR64AsmOperand'
  MCK_AccessReg, // user defined class 'AccessReg'
  MCK_BDAddr32Disp12, // user defined class 'BDAddr32Disp12'
  MCK_BDAddr32Disp20, // user defined class 'BDAddr32Disp20'
  MCK_BDAddr64Disp12, // user defined class 'BDAddr64Disp12'
  MCK_BDAddr64Disp20, // user defined class 'BDAddr64Disp20'
  MCK_BDXAddr64Disp12, // user defined class 'BDXAddr64Disp12'
  MCK_BDXAddr64Disp20, // user defined class 'BDXAddr64Disp20'
  MCK_FP128, // user defined class 'FP128AsmOperand'
  MCK_FP32, // user defined class 'FP32AsmOperand'
  MCK_FP64, // user defined class 'FP64AsmOperand'
  MCK_GR128, // user defined class 'GR128AsmOperand'
  MCK_GR32, // user defined class 'GR32AsmOperand'
  MCK_GR64, // user defined class 'GR64AsmOperand'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_PCRel16, // user defined class 'PCRel16'
  MCK_PCRel32, // user defined class 'PCRel32'
  MCK_S16Imm, // user defined class 'S16Imm'
  MCK_S32Imm, // user defined class 'S32Imm'
  MCK_S8Imm, // user defined class 'S8Imm'
  MCK_U16Imm, // user defined class 'U16Imm'
  MCK_U32Imm, // user defined class 'U32Imm'
  MCK_U4Imm, // user defined class 'U4Imm'
  MCK_U6Imm, // user defined class 'U6Imm'
  MCK_U8Imm, // user defined class 'U8Imm'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;

  case MCK_ADDR128Bit:
    return B == MCK_GR128Bit;

  case MCK_ADDR64Bit:
    return B == MCK_GR64Bit;

  case MCK_ADDR32Bit:
    return B == MCK_GR32Bit;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand *GOp, MatchClassKind Kind) {
  SystemZOperand &Operand = *(SystemZOperand*)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken())
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  // 'ADDR128' class
  if (Kind == MCK_ADDR128) {
    if (Operand.isADDR128())
      return MCTargetAsmParser::Match_Success;
  }

  // 'ADDR32' class
  if (Kind == MCK_ADDR32) {
    if (Operand.isADDR32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'ADDR64' class
  if (Kind == MCK_ADDR64) {
    if (Operand.isADDR64())
      return MCTargetAsmParser::Match_Success;
  }

  // 'AccessReg' class
  if (Kind == MCK_AccessReg) {
    if (Operand.isAccessReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDAddr32Disp12' class
  if (Kind == MCK_BDAddr32Disp12) {
    if (Operand.isBDAddr32Disp12())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDAddr32Disp20' class
  if (Kind == MCK_BDAddr32Disp20) {
    if (Operand.isBDAddr32Disp20())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDAddr64Disp12' class
  if (Kind == MCK_BDAddr64Disp12) {
    if (Operand.isBDAddr64Disp12())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDAddr64Disp20' class
  if (Kind == MCK_BDAddr64Disp20) {
    if (Operand.isBDAddr64Disp20())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDXAddr64Disp12' class
  if (Kind == MCK_BDXAddr64Disp12) {
    if (Operand.isBDXAddr64Disp12())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDXAddr64Disp20' class
  if (Kind == MCK_BDXAddr64Disp20) {
    if (Operand.isBDXAddr64Disp20())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FP128' class
  if (Kind == MCK_FP128) {
    if (Operand.isFP128())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FP32' class
  if (Kind == MCK_FP32) {
    if (Operand.isFP32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FP64' class
  if (Kind == MCK_FP64) {
    if (Operand.isFP64())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GR128' class
  if (Kind == MCK_GR128) {
    if (Operand.isGR128())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GR32' class
  if (Kind == MCK_GR32) {
    if (Operand.isGR32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GR64' class
  if (Kind == MCK_GR64) {
    if (Operand.isGR64())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm' class
  if (Kind == MCK_Imm) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'PCRel16' class
  if (Kind == MCK_PCRel16) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'PCRel32' class
  if (Kind == MCK_PCRel32) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S16Imm' class
  if (Kind == MCK_S16Imm) {
    if (Operand.isS16Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S32Imm' class
  if (Kind == MCK_S32Imm) {
    if (Operand.isS32Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S8Imm' class
  if (Kind == MCK_S8Imm) {
    if (Operand.isS8Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U16Imm' class
  if (Kind == MCK_U16Imm) {
    if (Operand.isU16Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U32Imm' class
  if (Kind == MCK_U32Imm) {
    if (Operand.isU32Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U4Imm' class
  if (Kind == MCK_U4Imm) {
    if (Operand.isU4Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U6Imm' class
  if (Kind == MCK_U6Imm) {
    if (Operand.isU6Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U8Imm' class
  if (Kind == MCK_U8Imm) {
    if (Operand.isU8Imm())
      return MCTargetAsmParser::Match_Success;
  }

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case SystemZ::R0W: OpKind = MCK_GR32Bit; break;
    case SystemZ::R1W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R2W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R3W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R4W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R5W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R6W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R7W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R8W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R9W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R10W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R11W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R12W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R13W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R14W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R15W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R0D: OpKind = MCK_GR64Bit; break;
    case SystemZ::R1D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R2D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R3D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R4D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R5D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R6D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R7D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R8D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R9D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R10D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R11D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R12D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R13D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R14D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R15D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R0Q: OpKind = MCK_GR128Bit; break;
    case SystemZ::R2Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R4Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R6Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R8Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R10Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R12Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R14Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::F0S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F1S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F2S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F3S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F4S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F5S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F6S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F7S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F8S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F9S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F10S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F11S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F12S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F13S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F14S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F15S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F0D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F1D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F2D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F3D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F4D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F5D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F6D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F7D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F8D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F9D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F10D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F11D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F12D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F13D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F14D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F15D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F0Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F1Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F4Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F5Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F8Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F9Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F12Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F13Q: OpKind = MCK_FP128Bit; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

unsigned SystemZAsmParser::
ComputeAvailableFeatures(uint64_t FB) const {
  unsigned Features = 0;
  return Features;
}

static const char *const MnemonicTable =
    "\001a\003adb\004adbr\003aeb\004aebr\003afi\002ag\003agf\004agfi\004agfr"
    "\004aghi\003agr\004agsi\002ah\003ahi\003ahy\002al\003alc\004alcg\005alc"
    "gr\004alcr\004alfi\003alg\004algf\005algfi\005algfr\004algr\003alr\003a"
    "ly\002ar\003asi\004axbr\002ay\004basr\002br\004bras\005brasl\003brc\004"
    "brcl\001c\003cdb\004cdbr\005cdfbr\005cdgbr\003ceb\004cebr\005cefbr\005c"
    "egbr\005cfdbr\005cfebr\003cfi\005cfxbr\002cg\005cgdbr\005cgebr\003cgf\004"
    "cgfi\004cgfr\005cgfrl\003cgh\004cghi\005cghrl\005cghsi\004cgij\005cgije"
    "\005cgijh\006cgijhe\005cgijl\006cgijle\006cgijlh\006cgijne\006cgijnh\007"
    "cgijnhe\006cgijnl\007cgijnle\007cgijnlh\003cgr\004cgrj\005cgrje\005cgrj"
    "h\006cgrjhe\005cgrjl\006cgrjle\006cgrjlh\006cgrjne\006cgrjnh\007cgrjnhe"
    "\006cgrjnl\007cgrjnle\007cgrjnlh\004cgrl\005cgxbr\002ch\005chhsi\003chi"
    "\004chrl\004chsi\003chy\003cij\004cije\004cijh\005cijhe\004cijl\005cijl"
    "e\005cijlh\005cijne\005cijnh\006cijnhe\005cijnl\006cijnle\006cijnlh\002"
    "cl\006clfhsi\004clfi\003clg\004clgf\005clgfi\005clgfr\006clgfrl\006clgh"
    "rl\006clghsi\004clgr\005clgrl\006clhhsi\005clhrl\003cli\004cliy\003clr\004"
    "clrl\003cly\005cpsdr\002cr\003crj\004crje\004crjh\005crjhe\004crjl\005c"
    "rjle\005crjlh\005crjne\005crjnh\006crjnhe\005crjnl\006crjnle\006crjnlh\003"
    "crl\002cs\003csg\003csy\004cxbr\005cxfbr\005cxgbr\002cy\003ddb\004ddbr\003"
    "deb\004debr\002dl\003dlg\004dlgr\003dlr\003dsg\004dsgf\005dsgfr\004dsgr"
    "\004dxbr\003ear\005fidbr\005fiebr\005fixbr\005flogr\002ic\003icy\004iih"
    "f\004iihh\004iihl\004iilf\004iilh\004iill\001j\002je\002jg\003jge\003jg"
    "h\004jghe\003jgl\004jgle\004jglh\004jgne\004jgnh\005jgnhe\004jgnl\005jg"
    "nle\005jgnlh\004jgno\003jgo\002jh\003jhe\002jl\003jle\003jlh\003jne\003"
    "jnh\004jnhe\003jnl\004jnle\004jnlh\003jno\002jo\001l\002la\004larl\003l"
    "ay\002lb\003lbr\005lcdbr\005lcebr\005lcgfr\004lcgr\003lcr\005lcxbr\002l"
    "d\004ldeb\005ldebr\004ldgr\003ldr\005ldxbr\003ldy\002le\005ledbr\003ler"
    "\005lexbr\003ley\002lg\003lgb\004lgbr\004lgdr\003lgf\004lgfi\004lgfr\005"
    "lgfrl\003lgh\004lghi\004lghr\005lghrl\003lgr\004lgrl\002lh\003lhi\003lh"
    "r\004lhrl\003lhy\003llc\004llcr\004llgc\005llgcr\004llgf\005llgfr\006ll"
    "gfrl\004llgh\005llghr\006llghrl\003llh\004llhr\005llhrl\005llihf\005lli"
    "hh\005llihl\005llilf\005llilh\005llill\003lmg\005lndbr\005lnebr\005lnxb"
    "r\005lpdbr\005lpebr\005lpxbr\002lr\003lrl\003lrv\004lrvg\005lrvgr\004lr"
    "vr\004lxdb\005lxdbr\004lxeb\005lxebr\003lxr\002ly\004lzdr\004lzer\004lz"
    "xr\004madb\005madbr\004maeb\005maebr\003mdb\004mdbr\004mdeb\005mdebr\004"
    "meeb\005meebr\004mghi\002mh\003mhi\003mhy\003mlg\004mlgr\002ms\004msdb\005"
    "msdbr\004mseb\005msebr\004msfi\003msg\004msgf\005msgfi\005msgfr\004msgr"
    "\003msr\003msy\005mvghi\005mvhhi\004mvhi\003mvi\004mviy\004mxbr\004mxdb"
    "\005mxdbr\001n\002ng\003ngr\002ni\004nihf\004nihh\004nihl\004nilf\004ni"
    "lh\004nill\003niy\002nr\002ny\001o\002og\003ogr\002oi\004oihf\004oihh\004"
    "oihl\004oilf\004oilh\004oill\003oiy\002or\002oy\005risbg\003rll\004rllg"
    "\001s\003sdb\004sdbr\003seb\004sebr\002sg\003sgf\004sgfr\003sgr\002sh\003"
    "shy\002sl\003slb\004slbg\005slbgr\004slbr\004slfi\003slg\004slgf\005slg"
    "fi\005slgfr\004slgr\003sll\004sllg\003slr\003sly\004sqdb\005sqdbr\004sq"
    "eb\005sqebr\005sqxbr\002sr\003sra\004srag\003srl\004srlg\002st\003stc\004"
    "stcy\003std\004stdy\003ste\004stey\003stg\005stgrl\003sth\005sthrl\004s"
    "thy\004stmg\004strl\004strv\005strvg\003sty\004sxbr\002sy\001x\002xg\003"
    "xgr\002xi\004xihf\004xilf\003xiy\002xr\002xy";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint8_t RequiredFeatures;
    uint8_t Classes[5];
    uint8_t AsmVariantID;

    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcode {
    bool operator()(const MatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic() < RHS;
    }
    bool operator()(StringRef LHS, const MatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const MatchEntry &LHS, const MatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const MatchEntry MatchTable[423] = {
  { 0 /* a */, SystemZ::A, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 2 /* adb */, SystemZ::ADB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, 0},
  { 6 /* adbr */, SystemZ::ADBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, 0},
  { 11 /* aeb */, SystemZ::AEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, 0},
  { 15 /* aebr */, SystemZ::AEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, 0},
  { 20 /* afi */, SystemZ::AFI, Convert__GR321_0__Tie0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, 0},
  { 24 /* ag */, SystemZ::AG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 27 /* agf */, SystemZ::AGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 31 /* agfi */, SystemZ::AGFI, Convert__GR641_0__Tie0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, 0},
  { 36 /* agfr */, SystemZ::AGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, 0},
  { 41 /* aghi */, SystemZ::AGHI, Convert__GR641_0__Tie0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, 0},
  { 46 /* agr */, SystemZ::AGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 50 /* agsi */, SystemZ::AGSI, Convert__BDAddr64Disp202_0__S8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_S8Imm }, 0},
  { 55 /* ah */, SystemZ::AH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 58 /* ahi */, SystemZ::AHI, Convert__GR321_0__Tie0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, 0},
  { 62 /* ahy */, SystemZ::AHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 66 /* al */, SystemZ::AL, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 69 /* alc */, SystemZ::ALC, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 73 /* alcg */, SystemZ::ALCG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 78 /* alcgr */, SystemZ::ALCGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 84 /* alcr */, SystemZ::ALCR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 89 /* alfi */, SystemZ::ALFI, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, 0},
  { 94 /* alg */, SystemZ::ALG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 98 /* algf */, SystemZ::ALGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 103 /* algfi */, SystemZ::ALGFI, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, 0},
  { 109 /* algfr */, SystemZ::ALGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, 0},
  { 115 /* algr */, SystemZ::ALGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 120 /* alr */, SystemZ::ALR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 124 /* aly */, SystemZ::ALY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 128 /* ar */, SystemZ::AR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 131 /* asi */, SystemZ::ASI, Convert__BDAddr64Disp202_0__S8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_S8Imm }, 0},
  { 135 /* axbr */, SystemZ::AXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, 0},
  { 140 /* ay */, SystemZ::AY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 143 /* basr */, SystemZ::AsmBASR, Convert__GR641_0__ADDR641_1, 0, { MCK_GR64, MCK_ADDR64 }, 0},
  { 148 /* br */, SystemZ::BR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, 0},
  { 151 /* bras */, SystemZ::AsmBRAS, Convert__GR641_0__PCRel161_1, 0, { MCK_GR64, MCK_PCRel16 }, 0},
  { 156 /* brasl */, SystemZ::AsmBRASL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, 0},
  { 162 /* brc */, SystemZ::AsmBRC, Convert__U4Imm1_0__PCRel161_1, 0, { MCK_U4Imm, MCK_PCRel16 }, 0},
  { 166 /* brcl */, SystemZ::AsmBRCL, Convert__U4Imm1_0__PCRel321_1, 0, { MCK_U4Imm, MCK_PCRel32 }, 0},
  { 171 /* c */, SystemZ::C, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 173 /* cdb */, SystemZ::CDB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, 0},
  { 177 /* cdbr */, SystemZ::CDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, 0},
  { 182 /* cdfbr */, SystemZ::CDFBR, Convert__FP641_0__GR321_1, 0, { MCK_FP64, MCK_GR32 }, 0},
  { 188 /* cdgbr */, SystemZ::CDGBR, Convert__FP641_0__GR641_1, 0, { MCK_FP64, MCK_GR64 }, 0},
  { 194 /* ceb */, SystemZ::CEB, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, 0},
  { 198 /* cebr */, SystemZ::CEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, 0},
  { 203 /* cefbr */, SystemZ::CEFBR, Convert__FP321_0__GR321_1, 0, { MCK_FP32, MCK_GR32 }, 0},
  { 209 /* cegbr */, SystemZ::CEGBR, Convert__FP321_0__GR641_1, 0, { MCK_FP32, MCK_GR64 }, 0},
  { 215 /* cfdbr */, SystemZ::CFDBR, Convert__GR321_0__U4Imm1_1__FP641_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP64 }, 0},
  { 221 /* cfebr */, SystemZ::CFEBR, Convert__GR321_0__U4Imm1_1__FP321_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP32 }, 0},
  { 227 /* cfi */, SystemZ::CFI, Convert__GR321_0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, 0},
  { 231 /* cfxbr */, SystemZ::CFXBR, Convert__GR321_0__U4Imm1_1__FP1281_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP128 }, 0},
  { 237 /* cg */, SystemZ::CG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 240 /* cgdbr */, SystemZ::CGDBR, Convert__GR641_0__U4Imm1_1__FP641_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP64 }, 0},
  { 246 /* cgebr */, SystemZ::CGEBR, Convert__GR641_0__U4Imm1_1__FP321_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP32 }, 0},
  { 252 /* cgf */, SystemZ::CGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 256 /* cgfi */, SystemZ::CGFI, Convert__GR641_0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, 0},
  { 261 /* cgfr */, SystemZ::CGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, 0},
  { 266 /* cgfrl */, SystemZ::CGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, 0},
  { 272 /* cgh */, SystemZ::CGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 276 /* cghi */, SystemZ::CGHI, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, 0},
  { 281 /* cghrl */, SystemZ::CGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, 0},
  { 287 /* cghsi */, SystemZ::CGHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, 0},
  { 293 /* cgij */, SystemZ::AsmCGIJ, Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_S8Imm, MCK_U4Imm, MCK_PCRel16 }, 0},
  { 298 /* cgije */, SystemZ::AsmJECGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, 0},
  { 304 /* cgijh */, SystemZ::AsmJHCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, 0},
  { 310 /* cgijhe */, SystemZ::AsmJHECGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, 0},
  { 317 /* cgijl */, SystemZ::AsmJLCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, 0},
  { 323 /* cgijle */, SystemZ::AsmJLECGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, 0},
  { 330 /* cgijlh */, SystemZ::AsmJLHCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, 0},
  { 337 /* cgijne */, SystemZ::AsmJLHAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, 0},
  { 344 /* cgijnh */, SystemZ::AsmJLEAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, 0},
  { 351 /* cgijnhe */, SystemZ::AsmJLAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, 0},
  { 359 /* cgijnl */, SystemZ::AsmJHEAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, 0},
  { 366 /* cgijnle */, SystemZ::AsmJHAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, 0},
  { 374 /* cgijnlh */, SystemZ::AsmJEAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, 0},
  { 382 /* cgr */, SystemZ::CGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 386 /* cgrj */, SystemZ::AsmCGRJ, Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_PCRel16 }, 0},
  { 391 /* cgrje */, SystemZ::AsmJECGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, 0},
  { 397 /* cgrjh */, SystemZ::AsmJHCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, 0},
  { 403 /* cgrjhe */, SystemZ::AsmJHECGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, 0},
  { 410 /* cgrjl */, SystemZ::AsmJLCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, 0},
  { 416 /* cgrjle */, SystemZ::AsmJLECGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, 0},
  { 423 /* cgrjlh */, SystemZ::AsmJLHCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, 0},
  { 430 /* cgrjne */, SystemZ::AsmJLHAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, 0},
  { 437 /* cgrjnh */, SystemZ::AsmJLEAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, 0},
  { 444 /* cgrjnhe */, SystemZ::AsmJLAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, 0},
  { 452 /* cgrjnl */, SystemZ::AsmJHEAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, 0},
  { 459 /* cgrjnle */, SystemZ::AsmJHAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, 0},
  { 467 /* cgrjnlh */, SystemZ::AsmJEAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, 0},
  { 475 /* cgrl */, SystemZ::CGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, 0},
  { 480 /* cgxbr */, SystemZ::CGXBR, Convert__GR641_0__U4Imm1_1__FP1281_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP128 }, 0},
  { 486 /* ch */, SystemZ::CH, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 489 /* chhsi */, SystemZ::CHHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, 0},
  { 495 /* chi */, SystemZ::CHI, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, 0},
  { 499 /* chrl */, SystemZ::CHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, 0},
  { 504 /* chsi */, SystemZ::CHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, 0},
  { 509 /* chy */, SystemZ::CHY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 513 /* cij */, SystemZ::AsmCIJ, Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_S8Imm, MCK_U4Imm, MCK_PCRel16 }, 0},
  { 517 /* cije */, SystemZ::AsmJECI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, 0},
  { 522 /* cijh */, SystemZ::AsmJHCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, 0},
  { 527 /* cijhe */, SystemZ::AsmJHECI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, 0},
  { 533 /* cijl */, SystemZ::AsmJLCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, 0},
  { 538 /* cijle */, SystemZ::AsmJLECI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, 0},
  { 544 /* cijlh */, SystemZ::AsmJLHCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, 0},
  { 550 /* cijne */, SystemZ::AsmJLHAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, 0},
  { 556 /* cijnh */, SystemZ::AsmJLEAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, 0},
  { 562 /* cijnhe */, SystemZ::AsmJLAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, 0},
  { 569 /* cijnl */, SystemZ::AsmJHEAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, 0},
  { 575 /* cijnle */, SystemZ::AsmJHAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, 0},
  { 582 /* cijnlh */, SystemZ::AsmJEAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, 0},
  { 589 /* cl */, SystemZ::CL, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 592 /* clfhsi */, SystemZ::CLFHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, 0},
  { 599 /* clfi */, SystemZ::CLFI, Convert__GR321_0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, 0},
  { 604 /* clg */, SystemZ::CLG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 608 /* clgf */, SystemZ::CLGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 613 /* clgfi */, SystemZ::CLGFI, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, 0},
  { 619 /* clgfr */, SystemZ::CLGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, 0},
  { 625 /* clgfrl */, SystemZ::CLGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, 0},
  { 632 /* clghrl */, SystemZ::CLGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, 0},
  { 639 /* clghsi */, SystemZ::CLGHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, 0},
  { 646 /* clgr */, SystemZ::CLGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 651 /* clgrl */, SystemZ::CLGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, 0},
  { 657 /* clhhsi */, SystemZ::CLHHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, 0},
  { 664 /* clhrl */, SystemZ::CLHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, 0},
  { 670 /* cli */, SystemZ::CLI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, 0},
  { 674 /* cliy */, SystemZ::CLIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, 0},
  { 679 /* clr */, SystemZ::CLR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 683 /* clrl */, SystemZ::CLRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, 0},
  { 688 /* cly */, SystemZ::CLY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 692 /* cpsdr */, SystemZ::CPSDRdd, Convert__FP641_0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, 0},
  { 698 /* cr */, SystemZ::CR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 701 /* crj */, SystemZ::AsmCRJ, Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_PCRel16 }, 0},
  { 705 /* crje */, SystemZ::AsmJECR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, 0},
  { 710 /* crjh */, SystemZ::AsmJHCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, 0},
  { 715 /* crjhe */, SystemZ::AsmJHECR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, 0},
  { 721 /* crjl */, SystemZ::AsmJLCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, 0},
  { 726 /* crjle */, SystemZ::AsmJLECR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, 0},
  { 732 /* crjlh */, SystemZ::AsmJLHCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, 0},
  { 738 /* crjne */, SystemZ::AsmJLHAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, 0},
  { 744 /* crjnh */, SystemZ::AsmJLEAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, 0},
  { 750 /* crjnhe */, SystemZ::AsmJLAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, 0},
  { 757 /* crjnl */, SystemZ::AsmJHEAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, 0},
  { 763 /* crjnle */, SystemZ::AsmJHAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, 0},
  { 770 /* crjnlh */, SystemZ::AsmJEAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, 0},
  { 777 /* crl */, SystemZ::CRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, 0},
  { 781 /* cs */, SystemZ::CS, Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, 0},
  { 784 /* csg */, SystemZ::CSG, Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, 0},
  { 788 /* csy */, SystemZ::CSY, Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, 0},
  { 792 /* cxbr */, SystemZ::CXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, 0},
  { 797 /* cxfbr */, SystemZ::CXFBR, Convert__FP1281_0__GR321_1, 0, { MCK_FP128, MCK_GR32 }, 0},
  { 803 /* cxgbr */, SystemZ::CXGBR, Convert__FP1281_0__GR641_1, 0, { MCK_FP128, MCK_GR64 }, 0},
  { 809 /* cy */, SystemZ::CY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 812 /* ddb */, SystemZ::DDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, 0},
  { 816 /* ddbr */, SystemZ::DDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, 0},
  { 821 /* deb */, SystemZ::DEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, 0},
  { 825 /* debr */, SystemZ::DEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, 0},
  { 830 /* dl */, SystemZ::DL, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, 0},
  { 833 /* dlg */, SystemZ::DLG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, 0},
  { 837 /* dlgr */, SystemZ::DLGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, 0},
  { 842 /* dlr */, SystemZ::DLR, Convert__GR1281_0__Tie0__GR321_1, 0, { MCK_GR128, MCK_GR32 }, 0},
  { 846 /* dsg */, SystemZ::DSG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, 0},
  { 850 /* dsgf */, SystemZ::DSGF, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, 0},
  { 855 /* dsgfr */, SystemZ::DSGFR, Convert__GR1281_0__Tie0__GR321_1, 0, { MCK_GR128, MCK_GR32 }, 0},
  { 861 /* dsgr */, SystemZ::DSGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, 0},
  { 866 /* dxbr */, SystemZ::DXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, 0},
  { 871 /* ear */, SystemZ::EAR, Convert__GR321_0__AccessReg1_1, 0, { MCK_GR32, MCK_AccessReg }, 0},
  { 875 /* fidbr */, SystemZ::FIDBR, Convert__FP641_0__U4Imm1_1__FP641_2, 0, { MCK_FP64, MCK_U4Imm, MCK_FP64 }, 0},
  { 881 /* fiebr */, SystemZ::FIEBR, Convert__FP321_0__U4Imm1_1__FP321_2, 0, { MCK_FP32, MCK_U4Imm, MCK_FP32 }, 0},
  { 887 /* fixbr */, SystemZ::FIXBR, Convert__FP1281_0__U4Imm1_1__FP1281_2, 0, { MCK_FP128, MCK_U4Imm, MCK_FP128 }, 0},
  { 893 /* flogr */, SystemZ::FLOGR, Convert__GR1281_0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, 0},
  { 899 /* ic */, SystemZ::IC, Convert__GR641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, 0},
  { 902 /* icy */, SystemZ::ICY, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 906 /* iihf */, SystemZ::IIHF, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, 0},
  { 911 /* iihh */, SystemZ::IIHH, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 916 /* iihl */, SystemZ::IIHL, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 921 /* iilf */, SystemZ::IILF, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, 0},
  { 926 /* iilh */, SystemZ::IILH, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 931 /* iill */, SystemZ::IILL, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 936 /* j */, SystemZ::J, Convert__PCRel161_0, 0, { MCK_PCRel16 }, 0},
  { 938 /* je */, SystemZ::AsmJE, Convert__PCRel161_0, 0, { MCK_PCRel16 }, 0},
  { 941 /* jg */, SystemZ::JG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, 0},
  { 944 /* jge */, SystemZ::AsmJEL, Convert__PCRel321_0, 0, { MCK_PCRel32 }, 0},
  { 948 /* jgh */, SystemZ::AsmJHL, Convert__PCRel321_0, 0, { MCK_PCRel32 }, 0},
  { 952 /* jghe */, SystemZ::AsmJHEL, Convert__PCRel321_0, 0, { MCK_PCRel32 }, 0},
  { 957 /* jgl */, SystemZ::AsmJLL, Convert__PCRel321_0, 0, { MCK_PCRel32 }, 0},
  { 961 /* jgle */, SystemZ::AsmJLEL, Convert__PCRel321_0, 0, { MCK_PCRel32 }, 0},
  { 966 /* jglh */, SystemZ::AsmJLHL, Convert__PCRel321_0, 0, { MCK_PCRel32 }, 0},
  { 971 /* jgne */, SystemZ::AsmJNEL, Convert__PCRel321_0, 0, { MCK_PCRel32 }, 0},
  { 976 /* jgnh */, SystemZ::AsmJNHL, Convert__PCRel321_0, 0, { MCK_PCRel32 }, 0},
  { 981 /* jgnhe */, SystemZ::AsmJNHEL, Convert__PCRel321_0, 0, { MCK_PCRel32 }, 0},
  { 987 /* jgnl */, SystemZ::AsmJNLL, Convert__PCRel321_0, 0, { MCK_PCRel32 }, 0},
  { 992 /* jgnle */, SystemZ::AsmJNLEL, Convert__PCRel321_0, 0, { MCK_PCRel32 }, 0},
  { 998 /* jgnlh */, SystemZ::AsmJNLHL, Convert__PCRel321_0, 0, { MCK_PCRel32 }, 0},
  { 1004 /* jgno */, SystemZ::AsmJNOL, Convert__PCRel321_0, 0, { MCK_PCRel32 }, 0},
  { 1009 /* jgo */, SystemZ::AsmJOL, Convert__PCRel321_0, 0, { MCK_PCRel32 }, 0},
  { 1013 /* jh */, SystemZ::AsmJH, Convert__PCRel161_0, 0, { MCK_PCRel16 }, 0},
  { 1016 /* jhe */, SystemZ::AsmJHE, Convert__PCRel161_0, 0, { MCK_PCRel16 }, 0},
  { 1020 /* jl */, SystemZ::AsmJL, Convert__PCRel161_0, 0, { MCK_PCRel16 }, 0},
  { 1023 /* jle */, SystemZ::AsmJLE, Convert__PCRel161_0, 0, { MCK_PCRel16 }, 0},
  { 1027 /* jlh */, SystemZ::AsmJLH, Convert__PCRel161_0, 0, { MCK_PCRel16 }, 0},
  { 1031 /* jne */, SystemZ::AsmJNE, Convert__PCRel161_0, 0, { MCK_PCRel16 }, 0},
  { 1035 /* jnh */, SystemZ::AsmJNH, Convert__PCRel161_0, 0, { MCK_PCRel16 }, 0},
  { 1039 /* jnhe */, SystemZ::AsmJNHE, Convert__PCRel161_0, 0, { MCK_PCRel16 }, 0},
  { 1044 /* jnl */, SystemZ::AsmJNL, Convert__PCRel161_0, 0, { MCK_PCRel16 }, 0},
  { 1048 /* jnle */, SystemZ::AsmJNLE, Convert__PCRel161_0, 0, { MCK_PCRel16 }, 0},
  { 1053 /* jnlh */, SystemZ::AsmJNLH, Convert__PCRel161_0, 0, { MCK_PCRel16 }, 0},
  { 1058 /* jno */, SystemZ::AsmJNO, Convert__PCRel161_0, 0, { MCK_PCRel16 }, 0},
  { 1062 /* jo */, SystemZ::AsmJO, Convert__PCRel161_0, 0, { MCK_PCRel16 }, 0},
  { 1065 /* l */, SystemZ::L, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 1067 /* la */, SystemZ::LA, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, 0},
  { 1070 /* larl */, SystemZ::LARL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, 0},
  { 1075 /* lay */, SystemZ::LAY, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1079 /* lb */, SystemZ::LB, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 1082 /* lbr */, SystemZ::LBR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 1086 /* lcdbr */, SystemZ::LCDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, 0},
  { 1092 /* lcebr */, SystemZ::LCEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, 0},
  { 1098 /* lcgfr */, SystemZ::LCGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, 0},
  { 1104 /* lcgr */, SystemZ::LCGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 1109 /* lcr */, SystemZ::LCR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 1113 /* lcxbr */, SystemZ::LCXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, 0},
  { 1119 /* ld */, SystemZ::LD, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, 0},
  { 1122 /* ldeb */, SystemZ::LDEB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, 0},
  { 1127 /* ldebr */, SystemZ::LDEBR, Convert__FP641_0__FP321_1, 0, { MCK_FP64, MCK_FP32 }, 0},
  { 1133 /* ldgr */, SystemZ::LDGR, Convert__FP641_0__GR641_1, 0, { MCK_FP64, MCK_GR64 }, 0},
  { 1138 /* ldr */, SystemZ::LDR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, 0},
  { 1142 /* ldxbr */, SystemZ::LDXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, 0},
  { 1148 /* ldy */, SystemZ::LDY, Convert__FP641_0__BDXAddr64Disp203_1, 0, { MCK_FP64, MCK_BDXAddr64Disp20 }, 0},
  { 1152 /* le */, SystemZ::LE, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, 0},
  { 1155 /* ledbr */, SystemZ::LEDBR, Convert__FP321_0__FP641_1, 0, { MCK_FP32, MCK_FP64 }, 0},
  { 1161 /* ler */, SystemZ::LER, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, 0},
  { 1165 /* lexbr */, SystemZ::LEXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, 0},
  { 1171 /* ley */, SystemZ::LEY, Convert__FP321_0__BDXAddr64Disp203_1, 0, { MCK_FP32, MCK_BDXAddr64Disp20 }, 0},
  { 1175 /* lg */, SystemZ::LG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1178 /* lgb */, SystemZ::LGB, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1182 /* lgbr */, SystemZ::LGBR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 1187 /* lgdr */, SystemZ::LGDR, Convert__GR641_0__FP641_1, 0, { MCK_GR64, MCK_FP64 }, 0},
  { 1192 /* lgf */, SystemZ::LGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1196 /* lgfi */, SystemZ::LGFI, Convert__GR641_0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, 0},
  { 1201 /* lgfr */, SystemZ::LGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, 0},
  { 1206 /* lgfrl */, SystemZ::LGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, 0},
  { 1212 /* lgh */, SystemZ::LGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1216 /* lghi */, SystemZ::LGHI, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, 0},
  { 1221 /* lghr */, SystemZ::LGHR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 1226 /* lghrl */, SystemZ::LGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, 0},
  { 1232 /* lgr */, SystemZ::LGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 1236 /* lgrl */, SystemZ::LGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, 0},
  { 1241 /* lh */, SystemZ::LH, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 1244 /* lhi */, SystemZ::LHI, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, 0},
  { 1248 /* lhr */, SystemZ::LHR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 1252 /* lhrl */, SystemZ::LHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, 0},
  { 1257 /* lhy */, SystemZ::LHY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 1261 /* llc */, SystemZ::LLC, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 1265 /* llcr */, SystemZ::LLCR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 1270 /* llgc */, SystemZ::LLGC, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1275 /* llgcr */, SystemZ::LLGCR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 1281 /* llgf */, SystemZ::LLGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1286 /* llgfr */, SystemZ::LLGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, 0},
  { 1292 /* llgfrl */, SystemZ::LLGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, 0},
  { 1299 /* llgh */, SystemZ::LLGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1304 /* llghr */, SystemZ::LLGHR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 1310 /* llghrl */, SystemZ::LLGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, 0},
  { 1317 /* llh */, SystemZ::LLH, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 1321 /* llhr */, SystemZ::LLHR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 1326 /* llhrl */, SystemZ::LLHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, 0},
  { 1332 /* llihf */, SystemZ::LLIHF, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, 0},
  { 1338 /* llihh */, SystemZ::LLIHH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 1344 /* llihl */, SystemZ::LLIHL, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 1350 /* llilf */, SystemZ::LLILF, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, 0},
  { 1356 /* llilh */, SystemZ::LLILH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 1362 /* llill */, SystemZ::LLILL, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 1368 /* lmg */, SystemZ::LMG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, 0},
  { 1372 /* lndbr */, SystemZ::LNDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, 0},
  { 1378 /* lnebr */, SystemZ::LNEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, 0},
  { 1384 /* lnxbr */, SystemZ::LNXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, 0},
  { 1390 /* lpdbr */, SystemZ::LPDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, 0},
  { 1396 /* lpebr */, SystemZ::LPEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, 0},
  { 1402 /* lpxbr */, SystemZ::LPXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, 0},
  { 1408 /* lr */, SystemZ::LR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 1411 /* lrl */, SystemZ::LRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, 0},
  { 1415 /* lrv */, SystemZ::LRV, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 1419 /* lrvg */, SystemZ::LRVG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1424 /* lrvgr */, SystemZ::LRVGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 1430 /* lrvr */, SystemZ::LRVR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 1435 /* lxdb */, SystemZ::LXDB, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, 0},
  { 1440 /* lxdbr */, SystemZ::LXDBR, Convert__FP1281_0__FP641_1, 0, { MCK_FP128, MCK_FP64 }, 0},
  { 1446 /* lxeb */, SystemZ::LXEB, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, 0},
  { 1451 /* lxebr */, SystemZ::LXEBR, Convert__FP1281_0__FP321_1, 0, { MCK_FP128, MCK_FP32 }, 0},
  { 1457 /* lxr */, SystemZ::LXR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, 0},
  { 1461 /* ly */, SystemZ::LY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 1464 /* lzdr */, SystemZ::LZDR, Convert__FP641_0, 0, { MCK_FP64 }, 0},
  { 1469 /* lzer */, SystemZ::LZER, Convert__FP321_0, 0, { MCK_FP32 }, 0},
  { 1474 /* lzxr */, SystemZ::LZXR, Convert__FP1281_0, 0, { MCK_FP128 }, 0},
  { 1479 /* madb */, SystemZ::MADB, Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, 0},
  { 1484 /* madbr */, SystemZ::MADBR, Convert__FP641_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, 0},
  { 1490 /* maeb */, SystemZ::MAEB, Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2, 0, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, 0},
  { 1495 /* maebr */, SystemZ::MAEBR, Convert__FP321_0__Tie0__FP321_1__FP321_2, 0, { MCK_FP32, MCK_FP32, MCK_FP32 }, 0},
  { 1501 /* mdb */, SystemZ::MDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, 0},
  { 1505 /* mdbr */, SystemZ::MDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, 0},
  { 1510 /* mdeb */, SystemZ::MDEB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, 0},
  { 1515 /* mdebr */, SystemZ::MDEBR, Convert__FP641_0__Tie0__FP321_1, 0, { MCK_FP64, MCK_FP32 }, 0},
  { 1521 /* meeb */, SystemZ::MEEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, 0},
  { 1526 /* meebr */, SystemZ::MEEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, 0},
  { 1532 /* mghi */, SystemZ::MGHI, Convert__GR641_0__Tie0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, 0},
  { 1537 /* mh */, SystemZ::MH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 1540 /* mhi */, SystemZ::MHI, Convert__GR321_0__Tie0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, 0},
  { 1544 /* mhy */, SystemZ::MHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 1548 /* mlg */, SystemZ::MLG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, 0},
  { 1552 /* mlgr */, SystemZ::MLGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, 0},
  { 1557 /* ms */, SystemZ::MS, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 1560 /* msdb */, SystemZ::MSDB, Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, 0},
  { 1565 /* msdbr */, SystemZ::MSDBR, Convert__FP641_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, 0},
  { 1571 /* mseb */, SystemZ::MSEB, Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2, 0, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, 0},
  { 1576 /* msebr */, SystemZ::MSEBR, Convert__FP321_0__Tie0__FP321_1__FP321_2, 0, { MCK_FP32, MCK_FP32, MCK_FP32 }, 0},
  { 1582 /* msfi */, SystemZ::MSFI, Convert__GR321_0__Tie0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, 0},
  { 1587 /* msg */, SystemZ::MSG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1591 /* msgf */, SystemZ::MSGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1596 /* msgfi */, SystemZ::MSGFI, Convert__GR641_0__Tie0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, 0},
  { 1602 /* msgfr */, SystemZ::MSGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, 0},
  { 1608 /* msgr */, SystemZ::MSGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 1613 /* msr */, SystemZ::MSR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 1617 /* msy */, SystemZ::MSY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 1621 /* mvghi */, SystemZ::MVGHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, 0},
  { 1627 /* mvhhi */, SystemZ::MVHHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, 0},
  { 1633 /* mvhi */, SystemZ::MVHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, 0},
  { 1638 /* mvi */, SystemZ::MVI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, 0},
  { 1642 /* mviy */, SystemZ::MVIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, 0},
  { 1647 /* mxbr */, SystemZ::MXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, 0},
  { 1652 /* mxdb */, SystemZ::MXDB, Convert__FP1281_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, 0},
  { 1657 /* mxdbr */, SystemZ::MXDBR, Convert__FP1281_0__Tie0__FP641_1, 0, { MCK_FP128, MCK_FP64 }, 0},
  { 1663 /* n */, SystemZ::N, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 1665 /* ng */, SystemZ::NG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1668 /* ngr */, SystemZ::NGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 1672 /* ni */, SystemZ::NI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, 0},
  { 1675 /* nihf */, SystemZ::NIHF, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, 0},
  { 1680 /* nihh */, SystemZ::NIHH, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 1685 /* nihl */, SystemZ::NIHL, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 1690 /* nilf */, SystemZ::NILF, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, 0},
  { 1695 /* nilh */, SystemZ::NILH, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 1700 /* nill */, SystemZ::NILL, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 1705 /* niy */, SystemZ::NIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, 0},
  { 1709 /* nr */, SystemZ::NR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 1712 /* ny */, SystemZ::NY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 1715 /* o */, SystemZ::O, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 1717 /* og */, SystemZ::OG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1720 /* ogr */, SystemZ::OGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 1724 /* oi */, SystemZ::OI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, 0},
  { 1727 /* oihf */, SystemZ::OIHF, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, 0},
  { 1732 /* oihh */, SystemZ::OIHH, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 1737 /* oihl */, SystemZ::OIHL, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 1742 /* oilf */, SystemZ::OILF, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, 0},
  { 1747 /* oilh */, SystemZ::OILH, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 1752 /* oill */, SystemZ::OILL, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 1757 /* oiy */, SystemZ::OIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, 0},
  { 1761 /* or */, SystemZ::OR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 1764 /* oy */, SystemZ::OY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 1767 /* risbg */, SystemZ::RISBG, Convert__GR641_0__Tie0__GR641_1__U6Imm1_2__U6Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U6Imm, MCK_U6Imm, MCK_U6Imm }, 0},
  { 1773 /* rll */, SystemZ::RLL, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, 0},
  { 1777 /* rllg */, SystemZ::RLLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, 0},
  { 1782 /* s */, SystemZ::S, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 1784 /* sdb */, SystemZ::SDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, 0},
  { 1788 /* sdbr */, SystemZ::SDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, 0},
  { 1793 /* seb */, SystemZ::SEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, 0},
  { 1797 /* sebr */, SystemZ::SEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, 0},
  { 1802 /* sg */, SystemZ::SG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1805 /* sgf */, SystemZ::SGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1809 /* sgfr */, SystemZ::SGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, 0},
  { 1814 /* sgr */, SystemZ::SGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 1818 /* sh */, SystemZ::SH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 1821 /* shy */, SystemZ::SHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 1825 /* sl */, SystemZ::SL, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 1828 /* slb */, SystemZ::SLB, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 1832 /* slbg */, SystemZ::SLBG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1837 /* slbgr */, SystemZ::SLGBR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 1843 /* slbr */, SystemZ::SLBR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 1848 /* slfi */, SystemZ::SLFI, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, 0},
  { 1853 /* slg */, SystemZ::SLG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1857 /* slgf */, SystemZ::SLGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1862 /* slgfi */, SystemZ::SLGFI, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, 0},
  { 1868 /* slgfr */, SystemZ::SLGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, 0},
  { 1874 /* slgr */, SystemZ::SLGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 1879 /* sll */, SystemZ::SLL, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, 0},
  { 1883 /* sllg */, SystemZ::SLLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, 0},
  { 1888 /* slr */, SystemZ::SLR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 1892 /* sly */, SystemZ::SLY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 1896 /* sqdb */, SystemZ::SQDB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, 0},
  { 1901 /* sqdbr */, SystemZ::SQDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, 0},
  { 1907 /* sqeb */, SystemZ::SQEB, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, 0},
  { 1912 /* sqebr */, SystemZ::SQEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, 0},
  { 1918 /* sqxbr */, SystemZ::SQXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, 0},
  { 1924 /* sr */, SystemZ::SR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 1927 /* sra */, SystemZ::SRA, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, 0},
  { 1931 /* srag */, SystemZ::SRAG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, 0},
  { 1936 /* srl */, SystemZ::SRL, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, 0},
  { 1940 /* srlg */, SystemZ::SRLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, 0},
  { 1945 /* st */, SystemZ::ST, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, 0},
  { 1948 /* stc */, SystemZ::STC, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, 0},
  { 1952 /* stcy */, SystemZ::STCY, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1957 /* std */, SystemZ::STD, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, 0},
  { 1961 /* stdy */, SystemZ::STDY, Convert__FP641_0__BDXAddr64Disp203_1, 0, { MCK_FP64, MCK_BDXAddr64Disp20 }, 0},
  { 1966 /* ste */, SystemZ::STE, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, 0},
  { 1970 /* stey */, SystemZ::STEY, Convert__FP321_0__BDXAddr64Disp203_1, 0, { MCK_FP32, MCK_BDXAddr64Disp20 }, 0},
  { 1975 /* stg */, SystemZ::STG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1979 /* stgrl */, SystemZ::STGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, 0},
  { 1985 /* sth */, SystemZ::STH, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, 0},
  { 1989 /* sthrl */, SystemZ::STHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, 0},
  { 1995 /* sthy */, SystemZ::STHY, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 2000 /* stmg */, SystemZ::STMG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, 0},
  { 2005 /* strl */, SystemZ::STRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, 0},
  { 2010 /* strv */, SystemZ::STRV, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 2015 /* strvg */, SystemZ::STRVG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 2021 /* sty */, SystemZ::STY, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 2025 /* sxbr */, SystemZ::SXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, 0},
  { 2030 /* sy */, SystemZ::SY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 2033 /* x */, SystemZ::X, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 2035 /* xg */, SystemZ::XG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 2038 /* xgr */, SystemZ::XGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 2042 /* xi */, SystemZ::XI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, 0},
  { 2045 /* xihf */, SystemZ::XIHF, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, 0},
  { 2050 /* xilf */, SystemZ::XILF, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, 0},
  { 2055 /* xiy */, SystemZ::XIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, 0},
  { 2059 /* xr */, SystemZ::XR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 2062 /* xy */, SystemZ::XY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
};

bool SystemZAsmParser::
mnemonicIsValid(StringRef Mnemonic) {
  // Search the table.
  std::pair<const MatchEntry*, const MatchEntry*> MnemonicRange =
    std::equal_range(MatchTable, MatchTable+423, Mnemonic, LessOpcode());
  return MnemonicRange.first != MnemonicRange.second;
}

unsigned SystemZAsmParser::
MatchInstructionImpl(const SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                     MCInst &Inst,
unsigned &ErrorInfo, bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 6) {
    ErrorInfo = 6;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  unsigned AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((SystemZOperand*)Operands[0])->getToken();

  // Some state to try to produce better error messages.
  bool HadMatchOtherThanFeatures = false;
  bool HadMatchOtherThanPredicate = false;
  unsigned RetCode = Match_InvalidOperand;
  unsigned MissingFeatures = ~0U;
  // Set ErrorInfo to the operand that mismatches if it is
  // wrong for all instances of the instruction.
  ErrorInfo = ~0U;
  // Search the table.
  std::pair<const MatchEntry*, const MatchEntry*> MnemonicRange =
    std::equal_range(MatchTable, MatchTable+423, Mnemonic, LessOpcode());

  // Return a more specific error code if no mnemonics match.
  if (MnemonicRange.first == MnemonicRange.second)
    return Match_MnemonicFail;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());
    if (VariantID != it->AsmVariantID) continue;
    bool OperandsValid = true;
    for (unsigned i = 0; i != 5; ++i) {
      if (i + 1 >= Operands.size()) {
        OperandsValid = (it->Classes[i] == InvalidMatchClass);
        if (!OperandsValid) ErrorInfo = i + 1;
        break;
      }
      unsigned Diag = validateOperandClass(Operands[i+1],
                                           (MatchClassKind)it->Classes[i]);
      if (Diag == Match_Success)
        continue;
      // If the generic handler indicates an invalid operand
      // failure, check for a special case.
      if (Diag == Match_InvalidOperand) {
        Diag = validateTargetOperandClass(Operands[i+1],
                                           (MatchClassKind)it->Classes[i]);
        if (Diag == Match_Success)
          continue;
      }
      // If this operand is broken for all of the instances of this
      // mnemonic, keep track of it so we can report loc info.
      // If we already had a match that only failed due to a
      // target predicate, that diagnostic is preferred.
      if (!HadMatchOtherThanPredicate &&
          (it == MnemonicRange.first || ErrorInfo <= i+1)) {
        ErrorInfo = i+1;
        // InvalidOperand is the default. Prefer specificity.
        if (Diag != Match_InvalidOperand)
          RetCode = Diag;
      }
      // Otherwise, just reject this instance of the mnemonic.
      OperandsValid = false;
      break;
    }

    if (!OperandsValid) continue;
    if ((AvailableFeatures & it->RequiredFeatures) != it->RequiredFeatures) {
      HadMatchOtherThanFeatures = true;
      unsigned NewMissingFeatures = it->RequiredFeatures & ~AvailableFeatures;
      if (CountPopulation_32(NewMissingFeatures) <=
          CountPopulation_32(MissingFeatures))
        MissingFeatures = NewMissingFeatures;
      continue;
    }

    if (matchingInlineAsm) {
      Inst.setOpcode(it->Opcode);
      convertToMapAndConstraints(it->ConvertFn, Operands);
      return Match_Success;
    }

    // We have selected a definite instruction, convert the parsed
    // operands into the appropriate MCInst.
    convertToMCInst(it->ConvertFn, Inst, it->Opcode, Operands);

    // We have a potential match. Check the target predicate to
    // handle any context sensitive constraints.
    unsigned MatchResult;
    if ((MatchResult = checkTargetMatchPredicate(Inst)) != Match_Success) {
      Inst.clear();
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    return Match_Success;
  }

  // Okay, we had no match.  Try to return a useful error code.
  if (HadMatchOtherThanPredicate || !HadMatchOtherThanFeatures)
    return RetCode;

  // Missing feature matches return which features were missing
  ErrorInfo = MissingFeatures;
  return Match_MissingFeature;
}

namespace {
  struct OperandMatchEntry {
    uint8_t RequiredFeatures;
    uint16_t Mnemonic;
    uint8_t Class;
    uint8_t OperandMask;

    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcodeOperand {
    bool operator()(const OperandMatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic()  < RHS;
    }
    bool operator()(StringRef LHS, const OperandMatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const OperandMatchEntry &LHS, const OperandMatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const OperandMatchEntry OperandMatchTable[663] = {
  /* Operand List Mask, Mnemonic, Operand Class, Features */
  { 0, 0 /* a */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 0 /* a */, MCK_GR32, 1 /* 0 */ },
  { 0, 2 /* adb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2 /* adb */, MCK_FP64, 1 /* 0 */ },
  { 0, 6 /* adbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 11 /* aeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 11 /* aeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 15 /* aebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 20 /* afi */, MCK_GR32, 1 /* 0 */ },
  { 0, 24 /* ag */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 24 /* ag */, MCK_GR64, 1 /* 0 */ },
  { 0, 27 /* agf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 27 /* agf */, MCK_GR64, 1 /* 0 */ },
  { 0, 31 /* agfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 36 /* agfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 36 /* agfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 41 /* aghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 46 /* agr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 50 /* agsi */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 55 /* ah */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 55 /* ah */, MCK_GR32, 1 /* 0 */ },
  { 0, 58 /* ahi */, MCK_GR32, 1 /* 0 */ },
  { 0, 62 /* ahy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 62 /* ahy */, MCK_GR32, 1 /* 0 */ },
  { 0, 66 /* al */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 66 /* al */, MCK_GR32, 1 /* 0 */ },
  { 0, 69 /* alc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 69 /* alc */, MCK_GR32, 1 /* 0 */ },
  { 0, 73 /* alcg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 73 /* alcg */, MCK_GR64, 1 /* 0 */ },
  { 0, 78 /* alcgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 84 /* alcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 89 /* alfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 94 /* alg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 94 /* alg */, MCK_GR64, 1 /* 0 */ },
  { 0, 98 /* algf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 98 /* algf */, MCK_GR64, 1 /* 0 */ },
  { 0, 103 /* algfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 109 /* algfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 109 /* algfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 115 /* algr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 120 /* alr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 124 /* aly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 124 /* aly */, MCK_GR32, 1 /* 0 */ },
  { 0, 128 /* ar */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 131 /* asi */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 135 /* axbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 140 /* ay */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 140 /* ay */, MCK_GR32, 1 /* 0 */ },
  { 0, 143 /* basr */, MCK_ADDR64, 2 /* 1 */ },
  { 0, 143 /* basr */, MCK_GR64, 1 /* 0 */ },
  { 0, 148 /* br */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 151 /* bras */, MCK_GR64, 1 /* 0 */ },
  { 0, 151 /* bras */, MCK_PCRel16, 2 /* 1 */ },
  { 0, 156 /* brasl */, MCK_GR64, 1 /* 0 */ },
  { 0, 156 /* brasl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 162 /* brc */, MCK_PCRel16, 2 /* 1 */ },
  { 0, 166 /* brcl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 171 /* c */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 171 /* c */, MCK_GR32, 1 /* 0 */ },
  { 0, 173 /* cdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 173 /* cdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 177 /* cdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 182 /* cdfbr */, MCK_FP64, 1 /* 0 */ },
  { 0, 182 /* cdfbr */, MCK_GR32, 2 /* 1 */ },
  { 0, 188 /* cdgbr */, MCK_FP64, 1 /* 0 */ },
  { 0, 188 /* cdgbr */, MCK_GR64, 2 /* 1 */ },
  { 0, 194 /* ceb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 194 /* ceb */, MCK_FP32, 1 /* 0 */ },
  { 0, 198 /* cebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 203 /* cefbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 203 /* cefbr */, MCK_GR32, 2 /* 1 */ },
  { 0, 209 /* cegbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 209 /* cegbr */, MCK_GR64, 2 /* 1 */ },
  { 0, 215 /* cfdbr */, MCK_FP64, 4 /* 2 */ },
  { 0, 215 /* cfdbr */, MCK_GR32, 1 /* 0 */ },
  { 0, 221 /* cfebr */, MCK_FP32, 4 /* 2 */ },
  { 0, 221 /* cfebr */, MCK_GR32, 1 /* 0 */ },
  { 0, 227 /* cfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 231 /* cfxbr */, MCK_FP128, 4 /* 2 */ },
  { 0, 231 /* cfxbr */, MCK_GR32, 1 /* 0 */ },
  { 0, 237 /* cg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 237 /* cg */, MCK_GR64, 1 /* 0 */ },
  { 0, 240 /* cgdbr */, MCK_FP64, 4 /* 2 */ },
  { 0, 240 /* cgdbr */, MCK_GR64, 1 /* 0 */ },
  { 0, 246 /* cgebr */, MCK_FP32, 4 /* 2 */ },
  { 0, 246 /* cgebr */, MCK_GR64, 1 /* 0 */ },
  { 0, 252 /* cgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 252 /* cgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 256 /* cgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 261 /* cgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 261 /* cgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 266 /* cgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 266 /* cgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 272 /* cgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 272 /* cgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 276 /* cghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 281 /* cghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 281 /* cghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 287 /* cghsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 293 /* cgij */, MCK_GR64, 1 /* 0 */ },
  { 0, 293 /* cgij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 298 /* cgije */, MCK_GR64, 1 /* 0 */ },
  { 0, 298 /* cgije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 304 /* cgijh */, MCK_GR64, 1 /* 0 */ },
  { 0, 304 /* cgijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 310 /* cgijhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 310 /* cgijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 317 /* cgijl */, MCK_GR64, 1 /* 0 */ },
  { 0, 317 /* cgijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 323 /* cgijle */, MCK_GR64, 1 /* 0 */ },
  { 0, 323 /* cgijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 330 /* cgijlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 330 /* cgijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 337 /* cgijne */, MCK_GR64, 1 /* 0 */ },
  { 0, 337 /* cgijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 344 /* cgijnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 344 /* cgijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 351 /* cgijnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 351 /* cgijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 359 /* cgijnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 359 /* cgijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 366 /* cgijnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 366 /* cgijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 374 /* cgijnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 374 /* cgijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 382 /* cgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 386 /* cgrj */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 386 /* cgrj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 391 /* cgrje */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 391 /* cgrje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 397 /* cgrjh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 397 /* cgrjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 403 /* cgrjhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 403 /* cgrjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 410 /* cgrjl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 410 /* cgrjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 416 /* cgrjle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 416 /* cgrjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 423 /* cgrjlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 423 /* cgrjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 430 /* cgrjne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 430 /* cgrjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 437 /* cgrjnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 437 /* cgrjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 444 /* cgrjnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 444 /* cgrjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 452 /* cgrjnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 452 /* cgrjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 459 /* cgrjnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 459 /* cgrjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 467 /* cgrjnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 467 /* cgrjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 475 /* cgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 475 /* cgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 480 /* cgxbr */, MCK_FP128, 4 /* 2 */ },
  { 0, 480 /* cgxbr */, MCK_GR64, 1 /* 0 */ },
  { 0, 486 /* ch */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 486 /* ch */, MCK_GR32, 1 /* 0 */ },
  { 0, 489 /* chhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 495 /* chi */, MCK_GR32, 1 /* 0 */ },
  { 0, 499 /* chrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 499 /* chrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 504 /* chsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 509 /* chy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 509 /* chy */, MCK_GR32, 1 /* 0 */ },
  { 0, 513 /* cij */, MCK_GR32, 1 /* 0 */ },
  { 0, 513 /* cij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 517 /* cije */, MCK_GR32, 1 /* 0 */ },
  { 0, 517 /* cije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 522 /* cijh */, MCK_GR32, 1 /* 0 */ },
  { 0, 522 /* cijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 527 /* cijhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 527 /* cijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 533 /* cijl */, MCK_GR32, 1 /* 0 */ },
  { 0, 533 /* cijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 538 /* cijle */, MCK_GR32, 1 /* 0 */ },
  { 0, 538 /* cijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 544 /* cijlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 544 /* cijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 550 /* cijne */, MCK_GR32, 1 /* 0 */ },
  { 0, 550 /* cijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 556 /* cijnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 556 /* cijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 562 /* cijnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 562 /* cijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 569 /* cijnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 569 /* cijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 575 /* cijnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 575 /* cijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 582 /* cijnlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 582 /* cijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 589 /* cl */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 589 /* cl */, MCK_GR32, 1 /* 0 */ },
  { 0, 592 /* clfhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 599 /* clfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 604 /* clg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 604 /* clg */, MCK_GR64, 1 /* 0 */ },
  { 0, 608 /* clgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 608 /* clgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 613 /* clgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 619 /* clgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 619 /* clgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 625 /* clgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 625 /* clgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 632 /* clghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 632 /* clghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 639 /* clghsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 646 /* clgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 651 /* clgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 651 /* clgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 657 /* clhhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 664 /* clhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 664 /* clhrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 670 /* cli */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 674 /* cliy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 679 /* clr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 683 /* clrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 683 /* clrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 688 /* cly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 688 /* cly */, MCK_GR32, 1 /* 0 */ },
  { 0, 692 /* cpsdr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 698 /* cr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 701 /* crj */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 701 /* crj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 705 /* crje */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 705 /* crje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 710 /* crjh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 710 /* crjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 715 /* crjhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 715 /* crjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 721 /* crjl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 721 /* crjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 726 /* crjle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 726 /* crjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 732 /* crjlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 732 /* crjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 738 /* crjne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 738 /* crjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 744 /* crjnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 744 /* crjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 750 /* crjnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 750 /* crjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 757 /* crjnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 757 /* crjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 763 /* crjnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 763 /* crjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 770 /* crjnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 770 /* crjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 777 /* crl */, MCK_GR32, 1 /* 0 */ },
  { 0, 777 /* crl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 781 /* cs */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 781 /* cs */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 784 /* csg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 784 /* csg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 788 /* csy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 788 /* csy */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 792 /* cxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 797 /* cxfbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 797 /* cxfbr */, MCK_GR32, 2 /* 1 */ },
  { 0, 803 /* cxgbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 803 /* cxgbr */, MCK_GR64, 2 /* 1 */ },
  { 0, 809 /* cy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 809 /* cy */, MCK_GR32, 1 /* 0 */ },
  { 0, 812 /* ddb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 812 /* ddb */, MCK_FP64, 1 /* 0 */ },
  { 0, 816 /* ddbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 821 /* deb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 821 /* deb */, MCK_FP32, 1 /* 0 */ },
  { 0, 825 /* debr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 830 /* dl */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 830 /* dl */, MCK_GR128, 1 /* 0 */ },
  { 0, 833 /* dlg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 833 /* dlg */, MCK_GR128, 1 /* 0 */ },
  { 0, 837 /* dlgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 837 /* dlgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 842 /* dlr */, MCK_GR128, 1 /* 0 */ },
  { 0, 842 /* dlr */, MCK_GR32, 2 /* 1 */ },
  { 0, 846 /* dsg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 846 /* dsg */, MCK_GR128, 1 /* 0 */ },
  { 0, 850 /* dsgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 850 /* dsgf */, MCK_GR128, 1 /* 0 */ },
  { 0, 855 /* dsgfr */, MCK_GR128, 1 /* 0 */ },
  { 0, 855 /* dsgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 861 /* dsgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 861 /* dsgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 866 /* dxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 871 /* ear */, MCK_AccessReg, 2 /* 1 */ },
  { 0, 871 /* ear */, MCK_GR32, 1 /* 0 */ },
  { 0, 875 /* fidbr */, MCK_FP64, 5 /* 0, 2 */ },
  { 0, 881 /* fiebr */, MCK_FP32, 5 /* 0, 2 */ },
  { 0, 887 /* fixbr */, MCK_FP128, 5 /* 0, 2 */ },
  { 0, 893 /* flogr */, MCK_GR128, 1 /* 0 */ },
  { 0, 893 /* flogr */, MCK_GR64, 2 /* 1 */ },
  { 0, 899 /* ic */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 899 /* ic */, MCK_GR64, 1 /* 0 */ },
  { 0, 902 /* icy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 902 /* icy */, MCK_GR64, 1 /* 0 */ },
  { 0, 906 /* iihf */, MCK_GR64, 1 /* 0 */ },
  { 0, 911 /* iihh */, MCK_GR64, 1 /* 0 */ },
  { 0, 916 /* iihl */, MCK_GR64, 1 /* 0 */ },
  { 0, 921 /* iilf */, MCK_GR64, 1 /* 0 */ },
  { 0, 926 /* iilh */, MCK_GR64, 1 /* 0 */ },
  { 0, 931 /* iill */, MCK_GR64, 1 /* 0 */ },
  { 0, 936 /* j */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 938 /* je */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 941 /* jg */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 944 /* jge */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 948 /* jgh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 952 /* jghe */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 957 /* jgl */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 961 /* jgle */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 966 /* jglh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 971 /* jgne */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 976 /* jgnh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 981 /* jgnhe */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 987 /* jgnl */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 992 /* jgnle */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 998 /* jgnlh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1004 /* jgno */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1009 /* jgo */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1013 /* jh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1016 /* jhe */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1020 /* jl */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1023 /* jle */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1027 /* jlh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1031 /* jne */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1035 /* jnh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1039 /* jnhe */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1044 /* jnl */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1048 /* jnle */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1053 /* jnlh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1058 /* jno */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1062 /* jo */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1065 /* l */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1065 /* l */, MCK_GR32, 1 /* 0 */ },
  { 0, 1067 /* la */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1067 /* la */, MCK_GR64, 1 /* 0 */ },
  { 0, 1070 /* larl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1070 /* larl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1075 /* lay */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1075 /* lay */, MCK_GR64, 1 /* 0 */ },
  { 0, 1079 /* lb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1079 /* lb */, MCK_GR32, 1 /* 0 */ },
  { 0, 1082 /* lbr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1086 /* lcdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1092 /* lcebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1098 /* lcgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1098 /* lcgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1104 /* lcgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1109 /* lcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1113 /* lcxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1119 /* ld */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1119 /* ld */, MCK_FP64, 1 /* 0 */ },
  { 0, 1122 /* ldeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1122 /* ldeb */, MCK_FP64, 1 /* 0 */ },
  { 0, 1127 /* ldebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 1127 /* ldebr */, MCK_FP64, 1 /* 0 */ },
  { 0, 1133 /* ldgr */, MCK_FP64, 1 /* 0 */ },
  { 0, 1133 /* ldgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 1138 /* ldr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1142 /* ldxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1148 /* ldy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1148 /* ldy */, MCK_FP64, 1 /* 0 */ },
  { 0, 1152 /* le */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1152 /* le */, MCK_FP32, 1 /* 0 */ },
  { 0, 1155 /* ledbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 1155 /* ledbr */, MCK_FP64, 2 /* 1 */ },
  { 0, 1161 /* ler */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1165 /* lexbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1171 /* ley */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1171 /* ley */, MCK_FP32, 1 /* 0 */ },
  { 0, 1175 /* lg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1175 /* lg */, MCK_GR64, 1 /* 0 */ },
  { 0, 1178 /* lgb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1178 /* lgb */, MCK_GR64, 1 /* 0 */ },
  { 0, 1182 /* lgbr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1187 /* lgdr */, MCK_FP64, 2 /* 1 */ },
  { 0, 1187 /* lgdr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1192 /* lgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1192 /* lgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1196 /* lgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 1201 /* lgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1201 /* lgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1206 /* lgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1206 /* lgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1212 /* lgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1212 /* lgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1216 /* lghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 1221 /* lghr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1226 /* lghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1226 /* lghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1232 /* lgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1236 /* lgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1236 /* lgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1241 /* lh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1241 /* lh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1244 /* lhi */, MCK_GR32, 1 /* 0 */ },
  { 0, 1248 /* lhr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1252 /* lhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1252 /* lhrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1257 /* lhy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1257 /* lhy */, MCK_GR32, 1 /* 0 */ },
  { 0, 1261 /* llc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1261 /* llc */, MCK_GR32, 1 /* 0 */ },
  { 0, 1265 /* llcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1270 /* llgc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1270 /* llgc */, MCK_GR64, 1 /* 0 */ },
  { 0, 1275 /* llgcr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1281 /* llgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1281 /* llgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1286 /* llgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1286 /* llgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1292 /* llgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1292 /* llgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1299 /* llgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1299 /* llgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1304 /* llghr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1310 /* llghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1310 /* llghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1317 /* llh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1317 /* llh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1321 /* llhr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1326 /* llhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1326 /* llhrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1332 /* llihf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1338 /* llihh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1344 /* llihl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1350 /* llilf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1356 /* llilh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1362 /* llill */, MCK_GR64, 1 /* 0 */ },
  { 0, 1368 /* lmg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 1368 /* lmg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1372 /* lndbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1378 /* lnebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1384 /* lnxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1390 /* lpdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1396 /* lpebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1402 /* lpxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1408 /* lr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1411 /* lrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1411 /* lrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1415 /* lrv */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1415 /* lrv */, MCK_GR32, 1 /* 0 */ },
  { 0, 1419 /* lrvg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1419 /* lrvg */, MCK_GR64, 1 /* 0 */ },
  { 0, 1424 /* lrvgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1430 /* lrvr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1435 /* lxdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1435 /* lxdb */, MCK_FP128, 1 /* 0 */ },
  { 0, 1440 /* lxdbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 1440 /* lxdbr */, MCK_FP64, 2 /* 1 */ },
  { 0, 1446 /* lxeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1446 /* lxeb */, MCK_FP128, 1 /* 0 */ },
  { 0, 1451 /* lxebr */, MCK_FP128, 1 /* 0 */ },
  { 0, 1451 /* lxebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 1457 /* lxr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1461 /* ly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1461 /* ly */, MCK_GR32, 1 /* 0 */ },
  { 0, 1464 /* lzdr */, MCK_FP64, 1 /* 0 */ },
  { 0, 1469 /* lzer */, MCK_FP32, 1 /* 0 */ },
  { 0, 1474 /* lzxr */, MCK_FP128, 1 /* 0 */ },
  { 0, 1479 /* madb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 1479 /* madb */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1484 /* madbr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 1490 /* maeb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 1490 /* maeb */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1495 /* maebr */, MCK_FP32, 7 /* 0, 1, 2 */ },
  { 0, 1501 /* mdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1501 /* mdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 1505 /* mdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1510 /* mdeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1510 /* mdeb */, MCK_FP64, 1 /* 0 */ },
  { 0, 1515 /* mdebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 1515 /* mdebr */, MCK_FP64, 1 /* 0 */ },
  { 0, 1521 /* meeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1521 /* meeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 1526 /* meebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1532 /* mghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 1537 /* mh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1537 /* mh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1540 /* mhi */, MCK_GR32, 1 /* 0 */ },
  { 0, 1544 /* mhy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1544 /* mhy */, MCK_GR32, 1 /* 0 */ },
  { 0, 1548 /* mlg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1548 /* mlg */, MCK_GR128, 1 /* 0 */ },
  { 0, 1552 /* mlgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 1552 /* mlgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 1557 /* ms */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1557 /* ms */, MCK_GR32, 1 /* 0 */ },
  { 0, 1560 /* msdb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 1560 /* msdb */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1565 /* msdbr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 1571 /* mseb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 1571 /* mseb */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1576 /* msebr */, MCK_FP32, 7 /* 0, 1, 2 */ },
  { 0, 1582 /* msfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 1587 /* msg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1587 /* msg */, MCK_GR64, 1 /* 0 */ },
  { 0, 1591 /* msgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1591 /* msgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1596 /* msgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 1602 /* msgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1602 /* msgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1608 /* msgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1613 /* msr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1617 /* msy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1617 /* msy */, MCK_GR32, 1 /* 0 */ },
  { 0, 1621 /* mvghi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1627 /* mvhhi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1633 /* mvhi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1638 /* mvi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1642 /* mviy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 1647 /* mxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1652 /* mxdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1652 /* mxdb */, MCK_FP128, 1 /* 0 */ },
  { 0, 1657 /* mxdbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 1657 /* mxdbr */, MCK_FP64, 2 /* 1 */ },
  { 0, 1663 /* n */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1663 /* n */, MCK_GR32, 1 /* 0 */ },
  { 0, 1665 /* ng */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1665 /* ng */, MCK_GR64, 1 /* 0 */ },
  { 0, 1668 /* ngr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1672 /* ni */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1675 /* nihf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1680 /* nihh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1685 /* nihl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1690 /* nilf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1695 /* nilh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1700 /* nill */, MCK_GR64, 1 /* 0 */ },
  { 0, 1705 /* niy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 1709 /* nr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1712 /* ny */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1712 /* ny */, MCK_GR32, 1 /* 0 */ },
  { 0, 1715 /* o */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1715 /* o */, MCK_GR32, 1 /* 0 */ },
  { 0, 1717 /* og */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1717 /* og */, MCK_GR64, 1 /* 0 */ },
  { 0, 1720 /* ogr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1724 /* oi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1727 /* oihf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1732 /* oihh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1737 /* oihl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1742 /* oilf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1747 /* oilh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1752 /* oill */, MCK_GR64, 1 /* 0 */ },
  { 0, 1757 /* oiy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 1761 /* or */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1764 /* oy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1764 /* oy */, MCK_GR32, 1 /* 0 */ },
  { 0, 1767 /* risbg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1773 /* rll */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 1773 /* rll */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1777 /* rllg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 1777 /* rllg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1782 /* s */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1782 /* s */, MCK_GR32, 1 /* 0 */ },
  { 0, 1784 /* sdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1784 /* sdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 1788 /* sdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1793 /* seb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1793 /* seb */, MCK_FP32, 1 /* 0 */ },
  { 0, 1797 /* sebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1802 /* sg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1802 /* sg */, MCK_GR64, 1 /* 0 */ },
  { 0, 1805 /* sgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1805 /* sgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1809 /* sgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1809 /* sgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1814 /* sgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1818 /* sh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1818 /* sh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1821 /* shy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1821 /* shy */, MCK_GR32, 1 /* 0 */ },
  { 0, 1825 /* sl */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1825 /* sl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1828 /* slb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1828 /* slb */, MCK_GR32, 1 /* 0 */ },
  { 0, 1832 /* slbg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1832 /* slbg */, MCK_GR64, 1 /* 0 */ },
  { 0, 1837 /* slbgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1843 /* slbr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1848 /* slfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 1853 /* slg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1853 /* slg */, MCK_GR64, 1 /* 0 */ },
  { 0, 1857 /* slgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1857 /* slgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1862 /* slgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 1868 /* slgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1868 /* slgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1874 /* slgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1879 /* sll */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 1879 /* sll */, MCK_GR32, 1 /* 0 */ },
  { 0, 1883 /* sllg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 1883 /* sllg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1888 /* slr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1892 /* sly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1892 /* sly */, MCK_GR32, 1 /* 0 */ },
  { 0, 1896 /* sqdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1896 /* sqdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 1901 /* sqdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1907 /* sqeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1907 /* sqeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 1912 /* sqebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1918 /* sqxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1924 /* sr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1927 /* sra */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 1927 /* sra */, MCK_GR32, 1 /* 0 */ },
  { 0, 1931 /* srag */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 1931 /* srag */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1936 /* srl */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 1936 /* srl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1940 /* srlg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 1940 /* srlg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1945 /* st */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1945 /* st */, MCK_GR64, 1 /* 0 */ },
  { 0, 1948 /* stc */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1948 /* stc */, MCK_GR64, 1 /* 0 */ },
  { 0, 1952 /* stcy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1952 /* stcy */, MCK_GR64, 1 /* 0 */ },
  { 0, 1957 /* std */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1957 /* std */, MCK_FP64, 1 /* 0 */ },
  { 0, 1961 /* stdy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1961 /* stdy */, MCK_FP64, 1 /* 0 */ },
  { 0, 1966 /* ste */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1966 /* ste */, MCK_FP32, 1 /* 0 */ },
  { 0, 1970 /* stey */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1970 /* stey */, MCK_FP32, 1 /* 0 */ },
  { 0, 1975 /* stg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1975 /* stg */, MCK_GR64, 1 /* 0 */ },
  { 0, 1979 /* stgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1979 /* stgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1985 /* sth */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1985 /* sth */, MCK_GR64, 1 /* 0 */ },
  { 0, 1989 /* sthrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1989 /* sthrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1995 /* sthy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1995 /* sthy */, MCK_GR64, 1 /* 0 */ },
  { 0, 2000 /* stmg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 2000 /* stmg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2005 /* strl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2005 /* strl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2010 /* strv */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2010 /* strv */, MCK_GR32, 1 /* 0 */ },
  { 0, 2015 /* strvg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2015 /* strvg */, MCK_GR64, 1 /* 0 */ },
  { 0, 2021 /* sty */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2021 /* sty */, MCK_GR64, 1 /* 0 */ },
  { 0, 2025 /* sxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 2030 /* sy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2030 /* sy */, MCK_GR32, 1 /* 0 */ },
  { 0, 2033 /* x */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2033 /* x */, MCK_GR32, 1 /* 0 */ },
  { 0, 2035 /* xg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2035 /* xg */, MCK_GR64, 1 /* 0 */ },
  { 0, 2038 /* xgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2042 /* xi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2045 /* xihf */, MCK_GR64, 1 /* 0 */ },
  { 0, 2050 /* xilf */, MCK_GR64, 1 /* 0 */ },
  { 0, 2055 /* xiy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 2059 /* xr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2062 /* xy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2062 /* xy */, MCK_GR32, 1 /* 0 */ },
};

SystemZAsmParser::OperandMatchResultTy SystemZAsmParser::
tryCustomParseOperand(SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_ADDR128:
    return parseADDR128(Operands);
  case MCK_ADDR32:
    return parseADDR32(Operands);
  case MCK_ADDR64:
    return parseADDR64(Operands);
  case MCK_AccessReg:
    return parseAccessReg(Operands);
  case MCK_BDAddr32Disp12:
    return parseBDAddr32(Operands);
  case MCK_BDAddr32Disp20:
    return parseBDAddr32(Operands);
  case MCK_BDAddr64Disp12:
    return parseBDAddr64(Operands);
  case MCK_BDAddr64Disp20:
    return parseBDAddr64(Operands);
  case MCK_BDXAddr64Disp12:
    return parseBDXAddr64(Operands);
  case MCK_BDXAddr64Disp20:
    return parseBDXAddr64(Operands);
  case MCK_FP128:
    return parseFP128(Operands);
  case MCK_FP32:
    return parseFP32(Operands);
  case MCK_FP64:
    return parseFP64(Operands);
  case MCK_GR128:
    return parseGR128(Operands);
  case MCK_GR32:
    return parseGR32(Operands);
  case MCK_GR64:
    return parseGR64(Operands);
  case MCK_PCRel16:
    return parsePCRel16(Operands);
  case MCK_PCRel32:
    return parsePCRel32(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

SystemZAsmParser::OperandMatchResultTy SystemZAsmParser::
MatchOperandParserImpl(SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                       StringRef Mnemonic) {
  // Get the current feature set.
  unsigned AvailableFeatures = getAvailableFeatures();

  // Get the next operand index.
  unsigned NextOpNum = Operands.size()-1;
  // Search the table.
  std::pair<const OperandMatchEntry*, const OperandMatchEntry*> MnemonicRange =
    std::equal_range(OperandMatchTable, OperandMatchTable+663, Mnemonic,
                     LessOpcodeOperand());

  if (MnemonicRange.first == MnemonicRange.second)
    return MatchOperand_NoMatch;

  for (const OperandMatchEntry *it = MnemonicRange.first,
       *ie = MnemonicRange.second; it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());

    // check if the available features match
    if ((AvailableFeatures & it->RequiredFeatures) != it->RequiredFeatures) {
      continue;
    }

    // check if the operand in question has a custom parser.
    if (!(it->OperandMask & (1 << NextOpNum)))
      continue;

    // call custom parse method to handle the operand
    OperandMatchResultTy Result = tryCustomParseOperand(Operands, it->Class);
    if (Result != MatchOperand_NoMatch)
      return Result;
  }

  // Okay, we had no match.
  return MatchOperand_NoMatch;
}

#endif // GET_MATCHER_IMPLEMENTATION

