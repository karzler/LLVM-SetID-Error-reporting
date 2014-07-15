/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the Sparc target                               *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// The main instruction selector code.
SDNode *SelectCode(SDNode *N) {
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*0*/     OPC_SwitchOpcode /*52 cases */, 20|128,6/*788*/,  TARGET_VAL(ISD::LOAD),// ->793
/*5*/       OPC_RecordMemRef,
/*6*/       OPC_RecordNode,   // #0 = 'ld' chained node
/*7*/       OPC_RecordChild1, // #1 = $addr
/*8*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*10*/      OPC_Scope, 72, /*->84*/ // 16 children in Scope
/*12*/        OPC_CheckPredicate, 1, // Predicate_sextload
/*14*/        OPC_CheckType, MVT::i32,
/*16*/        OPC_Scope, 32, /*->50*/ // 2 children in Scope
/*18*/          OPC_CheckPredicate, 2, // Predicate_sextloadi8
/*20*/          OPC_Scope, 13, /*->35*/ // 2 children in Scope
/*22*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*25*/            OPC_EmitMergeInputChains1_0,
/*26*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDSBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LDSBrr:i32 ADDRrr:iPTR:$addr)
/*35*/          /*Scope*/ 13, /*->49*/
/*36*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*39*/            OPC_EmitMergeInputChains1_0,
/*40*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDSBri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LDSBri:i32 ADDRri:iPTR:$addr)
/*49*/          0, /*End of Scope*/
/*50*/        /*Scope*/ 32, /*->83*/
/*51*/          OPC_CheckPredicate, 3, // Predicate_sextloadi16
/*53*/          OPC_Scope, 13, /*->68*/ // 2 children in Scope
/*55*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*58*/            OPC_EmitMergeInputChains1_0,
/*59*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDSHrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LDSHrr:i32 ADDRrr:iPTR:$addr)
/*68*/          /*Scope*/ 13, /*->82*/
/*69*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*72*/            OPC_EmitMergeInputChains1_0,
/*73*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDSHri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LDSHri:i32 ADDRri:iPTR:$addr)
/*82*/          0, /*End of Scope*/
/*83*/        0, /*End of Scope*/
/*84*/      /*Scope*/ 72, /*->157*/
/*85*/        OPC_CheckPredicate, 4, // Predicate_zextload
/*87*/        OPC_CheckType, MVT::i32,
/*89*/        OPC_Scope, 32, /*->123*/ // 2 children in Scope
/*91*/          OPC_CheckPredicate, 5, // Predicate_zextloadi8
/*93*/          OPC_Scope, 13, /*->108*/ // 2 children in Scope
/*95*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*98*/            OPC_EmitMergeInputChains1_0,
/*99*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LDUBrr:i32 ADDRrr:iPTR:$addr)
/*108*/         /*Scope*/ 13, /*->122*/
/*109*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*112*/           OPC_EmitMergeInputChains1_0,
/*113*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LDUBri:i32 ADDRri:iPTR:$addr)
/*122*/         0, /*End of Scope*/
/*123*/       /*Scope*/ 32, /*->156*/
/*124*/         OPC_CheckPredicate, 6, // Predicate_zextloadi16
/*126*/         OPC_Scope, 13, /*->141*/ // 2 children in Scope
/*128*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*131*/           OPC_EmitMergeInputChains1_0,
/*132*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LDUHrr:i32 ADDRrr:iPTR:$addr)
/*141*/         /*Scope*/ 13, /*->155*/
/*142*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*145*/           OPC_EmitMergeInputChains1_0,
/*146*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LDUHri:i32 ADDRri:iPTR:$addr)
/*155*/         0, /*End of Scope*/
/*156*/       0, /*End of Scope*/
/*157*/     /*Scope*/ 34, /*->192*/
/*158*/       OPC_CheckPredicate, 7, // Predicate_load
/*160*/       OPC_CheckType, MVT::i32,
/*162*/       OPC_Scope, 13, /*->177*/ // 2 children in Scope
/*164*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*167*/         OPC_EmitMergeInputChains1_0,
/*168*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDrr:i32 ADDRrr:iPTR:$addr)
/*177*/       /*Scope*/ 13, /*->191*/
/*178*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*181*/         OPC_EmitMergeInputChains1_0,
/*182*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDri:i32 ADDRri:iPTR:$addr)
/*191*/       0, /*End of Scope*/
/*192*/     /*Scope*/ 105, /*->298*/
/*193*/       OPC_CheckPredicate, 8, // Predicate_extload
/*195*/       OPC_CheckType, MVT::i32,
/*197*/       OPC_Scope, 32, /*->231*/ // 3 children in Scope
/*199*/         OPC_CheckPredicate, 9, // Predicate_extloadi1
/*201*/         OPC_Scope, 13, /*->216*/ // 2 children in Scope
/*203*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*206*/           OPC_EmitMergeInputChains1_0,
/*207*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LDUBrr:i32 ADDRrr:iPTR:$src)
/*216*/         /*Scope*/ 13, /*->230*/
/*217*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*220*/           OPC_EmitMergeInputChains1_0,
/*221*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LDUBri:i32 ADDRri:iPTR:$src)
/*230*/         0, /*End of Scope*/
/*231*/       /*Scope*/ 32, /*->264*/
/*232*/         OPC_CheckPredicate, 10, // Predicate_extloadi8
/*234*/         OPC_Scope, 13, /*->249*/ // 2 children in Scope
/*236*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*239*/           OPC_EmitMergeInputChains1_0,
/*240*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LDUBrr:i32 ADDRrr:iPTR:$src)
/*249*/         /*Scope*/ 13, /*->263*/
/*250*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*253*/           OPC_EmitMergeInputChains1_0,
/*254*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LDUBri:i32 ADDRri:iPTR:$src)
/*263*/         0, /*End of Scope*/
/*264*/       /*Scope*/ 32, /*->297*/
/*265*/         OPC_CheckPredicate, 11, // Predicate_extloadi16
/*267*/         OPC_Scope, 13, /*->282*/ // 2 children in Scope
/*269*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*272*/           OPC_EmitMergeInputChains1_0,
/*273*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LDUHrr:i32 ADDRrr:iPTR:$src)
/*282*/         /*Scope*/ 13, /*->296*/
/*283*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*286*/           OPC_EmitMergeInputChains1_0,
/*287*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LDUHri:i32 ADDRri:iPTR:$src)
/*296*/         0, /*End of Scope*/
/*297*/       0, /*End of Scope*/
/*298*/     /*Scope*/ 36, /*->335*/
/*299*/       OPC_CheckPredicate, 4, // Predicate_zextload
/*301*/       OPC_CheckPredicate, 12, // Predicate_zextloadi1
/*303*/       OPC_CheckType, MVT::i32,
/*305*/       OPC_Scope, 13, /*->320*/ // 2 children in Scope
/*307*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*310*/         OPC_EmitMergeInputChains1_0,
/*311*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRrr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LDUBrr:i32 ADDRrr:iPTR:$src)
/*320*/       /*Scope*/ 13, /*->334*/
/*321*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*324*/         OPC_EmitMergeInputChains1_0,
/*325*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRri:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LDUBri:i32 ADDRri:iPTR:$src)
/*334*/       0, /*End of Scope*/
/*335*/     /*Scope*/ 36, /*->372*/
/*336*/       OPC_CheckPredicate, 7, // Predicate_load
/*338*/       OPC_CheckType, MVT::i64,
/*340*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*342*/       OPC_Scope, 13, /*->357*/ // 2 children in Scope
/*344*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*347*/         OPC_EmitMergeInputChains1_0,
/*348*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDXrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDXrr:i64 ADDRrr:iPTR:$addr)
/*357*/       /*Scope*/ 13, /*->371*/
/*358*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*361*/         OPC_EmitMergeInputChains1_0,
/*362*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDXri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDXri:i64 ADDRri:iPTR:$addr)
/*371*/       0, /*End of Scope*/
/*372*/     /*Scope*/ 38, /*->411*/
/*373*/       OPC_CheckPredicate, 4, // Predicate_zextload
/*375*/       OPC_CheckPredicate, 5, // Predicate_zextloadi8
/*377*/       OPC_CheckType, MVT::i64,
/*379*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*381*/       OPC_Scope, 13, /*->396*/ // 2 children in Scope
/*383*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*386*/         OPC_EmitMergeInputChains1_0,
/*387*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LDUBrr:i64 ADDRrr:iPTR:$addr)
/*396*/       /*Scope*/ 13, /*->410*/
/*397*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*400*/         OPC_EmitMergeInputChains1_0,
/*401*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LDUBri:i64 ADDRri:iPTR:$addr)
/*410*/       0, /*End of Scope*/
/*411*/     /*Scope*/ 38, /*->450*/
/*412*/       OPC_CheckPredicate, 8, // Predicate_extload
/*414*/       OPC_CheckPredicate, 10, // Predicate_extloadi8
/*416*/       OPC_CheckType, MVT::i64,
/*418*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*420*/       OPC_Scope, 13, /*->435*/ // 2 children in Scope
/*422*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*425*/         OPC_EmitMergeInputChains1_0,
/*426*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                // Dst: (LDUBrr:i64 ADDRrr:iPTR:$addr)
/*435*/       /*Scope*/ 13, /*->449*/
/*436*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*439*/         OPC_EmitMergeInputChains1_0,
/*440*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                // Dst: (LDUBri:i64 ADDRri:iPTR:$addr)
/*449*/       0, /*End of Scope*/
/*450*/     /*Scope*/ 38, /*->489*/
/*451*/       OPC_CheckPredicate, 1, // Predicate_sextload
/*453*/       OPC_CheckPredicate, 2, // Predicate_sextloadi8
/*455*/       OPC_CheckType, MVT::i64,
/*457*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*459*/       OPC_Scope, 13, /*->474*/ // 2 children in Scope
/*461*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*464*/         OPC_EmitMergeInputChains1_0,
/*465*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDSBrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                // Dst: (LDSBrr:i64 ADDRrr:iPTR:$addr)
/*474*/       /*Scope*/ 13, /*->488*/
/*475*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*478*/         OPC_EmitMergeInputChains1_0,
/*479*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDSBri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                // Dst: (LDSBri:i64 ADDRri:iPTR:$addr)
/*488*/       0, /*End of Scope*/
/*489*/     /*Scope*/ 38, /*->528*/
/*490*/       OPC_CheckPredicate, 4, // Predicate_zextload
/*492*/       OPC_CheckPredicate, 6, // Predicate_zextloadi16
/*494*/       OPC_CheckType, MVT::i64,
/*496*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*498*/       OPC_Scope, 13, /*->513*/ // 2 children in Scope
/*500*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*503*/         OPC_EmitMergeInputChains1_0,
/*504*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LDUHrr:i64 ADDRrr:iPTR:$addr)
/*513*/       /*Scope*/ 13, /*->527*/
/*514*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*517*/         OPC_EmitMergeInputChains1_0,
/*518*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LDUHri:i64 ADDRri:iPTR:$addr)
/*527*/       0, /*End of Scope*/
/*528*/     /*Scope*/ 38, /*->567*/
/*529*/       OPC_CheckPredicate, 8, // Predicate_extload
/*531*/       OPC_CheckPredicate, 11, // Predicate_extloadi16
/*533*/       OPC_CheckType, MVT::i64,
/*535*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*537*/       OPC_Scope, 13, /*->552*/ // 2 children in Scope
/*539*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*542*/         OPC_EmitMergeInputChains1_0,
/*543*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                // Dst: (LDUHrr:i64 ADDRrr:iPTR:$addr)
/*552*/       /*Scope*/ 13, /*->566*/
/*553*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*556*/         OPC_EmitMergeInputChains1_0,
/*557*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                // Dst: (LDUHri:i64 ADDRri:iPTR:$addr)
/*566*/       0, /*End of Scope*/
/*567*/     /*Scope*/ 38, /*->606*/
/*568*/       OPC_CheckPredicate, 1, // Predicate_sextload
/*570*/       OPC_CheckPredicate, 3, // Predicate_sextloadi16
/*572*/       OPC_CheckType, MVT::i64,
/*574*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*576*/       OPC_Scope, 13, /*->591*/ // 2 children in Scope
/*578*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*581*/         OPC_EmitMergeInputChains1_0,
/*582*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDSHrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LDSHrr:i64 ADDRrr:iPTR:$addr)
/*591*/       /*Scope*/ 13, /*->605*/
/*592*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*595*/         OPC_EmitMergeInputChains1_0,
/*596*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDSHri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LDSHri:i64 ADDRri:iPTR:$addr)
/*605*/       0, /*End of Scope*/
/*606*/     /*Scope*/ 38, /*->645*/
/*607*/       OPC_CheckPredicate, 4, // Predicate_zextload
/*609*/       OPC_CheckPredicate, 13, // Predicate_zextloadi32
/*611*/       OPC_CheckType, MVT::i64,
/*613*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*615*/       OPC_Scope, 13, /*->630*/ // 2 children in Scope
/*617*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*620*/         OPC_EmitMergeInputChains1_0,
/*621*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LDrr:i64 ADDRrr:iPTR:$addr)
/*630*/       /*Scope*/ 13, /*->644*/
/*631*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*634*/         OPC_EmitMergeInputChains1_0,
/*635*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LDri:i64 ADDRri:iPTR:$addr)
/*644*/       0, /*End of Scope*/
/*645*/     /*Scope*/ 38, /*->684*/
/*646*/       OPC_CheckPredicate, 8, // Predicate_extload
/*648*/       OPC_CheckPredicate, 14, // Predicate_extloadi32
/*650*/       OPC_CheckType, MVT::i64,
/*652*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*654*/       OPC_Scope, 13, /*->669*/ // 2 children in Scope
/*656*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*659*/         OPC_EmitMergeInputChains1_0,
/*660*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                // Dst: (LDrr:i64 ADDRrr:iPTR:$addr)
/*669*/       /*Scope*/ 13, /*->683*/
/*670*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*673*/         OPC_EmitMergeInputChains1_0,
/*674*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                // Dst: (LDri:i64 ADDRri:iPTR:$addr)
/*683*/       0, /*End of Scope*/
/*684*/     /*Scope*/ 38, /*->723*/
/*685*/       OPC_CheckPredicate, 1, // Predicate_sextload
/*687*/       OPC_CheckPredicate, 15, // Predicate_sextloadi32
/*689*/       OPC_CheckType, MVT::i64,
/*691*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*693*/       OPC_Scope, 13, /*->708*/ // 2 children in Scope
/*695*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*698*/         OPC_EmitMergeInputChains1_0,
/*699*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDSWrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                // Dst: (LDSWrr:i64 ADDRrr:iPTR:$addr)
/*708*/       /*Scope*/ 13, /*->722*/
/*709*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*712*/         OPC_EmitMergeInputChains1_0,
/*713*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDSWri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                // Dst: (LDSWri:i64 ADDRri:iPTR:$addr)
/*722*/       0, /*End of Scope*/
/*723*/     /*Scope*/ 68, /*->792*/
/*724*/       OPC_CheckPredicate, 7, // Predicate_load
/*726*/       OPC_SwitchType /*2 cases */, 30,  MVT::f32,// ->759
/*729*/         OPC_Scope, 13, /*->744*/ // 2 children in Scope
/*731*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*734*/           OPC_EmitMergeInputChains1_0,
/*735*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDFrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDFrr:f32 ADDRrr:iPTR:$addr)
/*744*/         /*Scope*/ 13, /*->758*/
/*745*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*748*/           OPC_EmitMergeInputChains1_0,
/*749*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDFri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDFri:f32 ADDRri:iPTR:$addr)
/*758*/         0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f64,// ->791
/*761*/         OPC_Scope, 13, /*->776*/ // 2 children in Scope
/*763*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*766*/           OPC_EmitMergeInputChains1_0,
/*767*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDDFrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDDFrr:f64 ADDRrr:iPTR:$addr)
/*776*/         /*Scope*/ 13, /*->790*/
/*777*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*780*/           OPC_EmitMergeInputChains1_0,
/*781*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDDFri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDDFri:f64 ADDRri:iPTR:$addr)
/*790*/         0, /*End of Scope*/
              0, // EndSwitchType
/*792*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 91|128,2/*347*/,  TARGET_VAL(ISD::STORE),// ->1144
/*797*/     OPC_RecordMemRef,
/*798*/     OPC_RecordNode,   // #0 = 'st' chained node
/*799*/     OPC_RecordChild1, // #1 = $src
/*800*/     OPC_Scope, 111, /*->913*/ // 4 children in Scope
/*802*/       OPC_CheckChild1Type, MVT::i32,
/*804*/       OPC_RecordChild2, // #2 = $addr
/*805*/       OPC_CheckPredicate, 16, // Predicate_unindexedstore
/*807*/       OPC_Scope, 70, /*->879*/ // 2 children in Scope
/*809*/         OPC_CheckPredicate, 17, // Predicate_truncstore
/*811*/         OPC_Scope, 32, /*->845*/ // 2 children in Scope
/*813*/           OPC_CheckPredicate, 18, // Predicate_truncstorei8
/*815*/           OPC_Scope, 13, /*->830*/ // 2 children in Scope
/*817*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*820*/             OPC_EmitMergeInputChains1_0,
/*821*/             OPC_MorphNodeTo, TARGET_VAL(SP::STBrr), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st i32:i32:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBrr ADDRrr:iPTR:$addr, i32:i32:$src)
/*830*/           /*Scope*/ 13, /*->844*/
/*831*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*834*/             OPC_EmitMergeInputChains1_0,
/*835*/             OPC_MorphNodeTo, TARGET_VAL(SP::STBri), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st i32:i32:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBri ADDRri:iPTR:$addr, i32:i32:$src)
/*844*/           0, /*End of Scope*/
/*845*/         /*Scope*/ 32, /*->878*/
/*846*/           OPC_CheckPredicate, 19, // Predicate_truncstorei16
/*848*/           OPC_Scope, 13, /*->863*/ // 2 children in Scope
/*850*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*853*/             OPC_EmitMergeInputChains1_0,
/*854*/             OPC_MorphNodeTo, TARGET_VAL(SP::STHrr), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st i32:i32:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHrr ADDRrr:iPTR:$addr, i32:i32:$src)
/*863*/           /*Scope*/ 13, /*->877*/
/*864*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*867*/             OPC_EmitMergeInputChains1_0,
/*868*/             OPC_MorphNodeTo, TARGET_VAL(SP::STHri), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st i32:i32:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHri ADDRri:iPTR:$addr, i32:i32:$src)
/*877*/           0, /*End of Scope*/
/*878*/         0, /*End of Scope*/
/*879*/       /*Scope*/ 32, /*->912*/
/*880*/         OPC_CheckPredicate, 20, // Predicate_store
/*882*/         OPC_Scope, 13, /*->897*/ // 2 children in Scope
/*884*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*887*/           OPC_EmitMergeInputChains1_0,
/*888*/           OPC_MorphNodeTo, TARGET_VAL(SP::STrr), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                  // Src: (st i32:i32:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STrr ADDRrr:iPTR:$addr, i32:i32:$src)
/*897*/         /*Scope*/ 13, /*->911*/
/*898*/           OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*901*/           OPC_EmitMergeInputChains1_0,
/*902*/           OPC_MorphNodeTo, TARGET_VAL(SP::STri), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                  // Src: (st i32:i32:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STri ADDRri:iPTR:$addr, i32:i32:$src)
/*911*/         0, /*End of Scope*/
/*912*/       0, /*End of Scope*/
/*913*/     /*Scope*/ 37, /*->951*/
/*914*/       OPC_CheckChild1Type, MVT::f32,
/*916*/       OPC_RecordChild2, // #2 = $addr
/*917*/       OPC_CheckPredicate, 16, // Predicate_unindexedstore
/*919*/       OPC_CheckPredicate, 20, // Predicate_store
/*921*/       OPC_Scope, 13, /*->936*/ // 2 children in Scope
/*923*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*926*/         OPC_EmitMergeInputChains1_0,
/*927*/         OPC_MorphNodeTo, TARGET_VAL(SP::STFrr), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                // Src: (st f32:f32:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (STFrr ADDRrr:iPTR:$addr, f32:f32:$src)
/*936*/       /*Scope*/ 13, /*->950*/
/*937*/         OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*940*/         OPC_EmitMergeInputChains1_0,
/*941*/         OPC_MorphNodeTo, TARGET_VAL(SP::STFri), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                // Src: (st f32:f32:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (STFri ADDRri:iPTR:$addr, f32:f32:$src)
/*950*/       0, /*End of Scope*/
/*951*/     /*Scope*/ 37, /*->989*/
/*952*/       OPC_CheckChild1Type, MVT::f64,
/*954*/       OPC_RecordChild2, // #2 = $addr
/*955*/       OPC_CheckPredicate, 16, // Predicate_unindexedstore
/*957*/       OPC_CheckPredicate, 20, // Predicate_store
/*959*/       OPC_Scope, 13, /*->974*/ // 2 children in Scope
/*961*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*964*/         OPC_EmitMergeInputChains1_0,
/*965*/         OPC_MorphNodeTo, TARGET_VAL(SP::STDFrr), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                // Src: (st f64:f64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (STDFrr ADDRrr:iPTR:$addr, f64:f64:$src)
/*974*/       /*Scope*/ 13, /*->988*/
/*975*/         OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*978*/         OPC_EmitMergeInputChains1_0,
/*979*/         OPC_MorphNodeTo, TARGET_VAL(SP::STDFri), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                // Src: (st f64:f64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (STDFri ADDRri:iPTR:$addr, f64:f64:$src)
/*988*/       0, /*End of Scope*/
/*989*/     /*Scope*/ 24|128,1/*152*/, /*->1143*/
/*991*/       OPC_CheckChild1Type, MVT::i64,
/*993*/       OPC_RecordChild2, // #2 = $addr
/*994*/       OPC_CheckPredicate, 16, // Predicate_unindexedstore
/*996*/       OPC_Scope, 34, /*->1032*/ // 2 children in Scope
/*998*/         OPC_CheckPredicate, 20, // Predicate_store
/*1000*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1002*/        OPC_Scope, 13, /*->1017*/ // 2 children in Scope
/*1004*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*1007*/          OPC_EmitMergeInputChains1_0,
/*1008*/          OPC_MorphNodeTo, TARGET_VAL(SP::STXrr), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                  // Src: (st i64:i64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STXrr ADDRrr:iPTR:$addr, i64:i64:$src)
/*1017*/        /*Scope*/ 13, /*->1031*/
/*1018*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*1021*/          OPC_EmitMergeInputChains1_0,
/*1022*/          OPC_MorphNodeTo, TARGET_VAL(SP::STXri), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                  // Src: (st i64:i64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STXri ADDRri:iPTR:$addr, i64:i64:$src)
/*1031*/        0, /*End of Scope*/
/*1032*/      /*Scope*/ 109, /*->1142*/
/*1033*/        OPC_CheckPredicate, 17, // Predicate_truncstore
/*1035*/        OPC_Scope, 34, /*->1071*/ // 3 children in Scope
/*1037*/          OPC_CheckPredicate, 18, // Predicate_truncstorei8
/*1039*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1041*/          OPC_Scope, 13, /*->1056*/ // 2 children in Scope
/*1043*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*1046*/            OPC_EmitMergeInputChains1_0,
/*1047*/            OPC_MorphNodeTo, TARGET_VAL(SP::STBrr), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st i64:i64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBrr ADDRrr:iPTR:$addr, ?:i64:$src)
/*1056*/          /*Scope*/ 13, /*->1070*/
/*1057*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*1060*/            OPC_EmitMergeInputChains1_0,
/*1061*/            OPC_MorphNodeTo, TARGET_VAL(SP::STBri), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st i64:i64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBri ADDRri:iPTR:$addr, ?:i64:$src)
/*1070*/          0, /*End of Scope*/
/*1071*/        /*Scope*/ 34, /*->1106*/
/*1072*/          OPC_CheckPredicate, 19, // Predicate_truncstorei16
/*1074*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1076*/          OPC_Scope, 13, /*->1091*/ // 2 children in Scope
/*1078*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*1081*/            OPC_EmitMergeInputChains1_0,
/*1082*/            OPC_MorphNodeTo, TARGET_VAL(SP::STHrr), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st i64:i64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHrr ADDRrr:iPTR:$addr, ?:i64:$src)
/*1091*/          /*Scope*/ 13, /*->1105*/
/*1092*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*1095*/            OPC_EmitMergeInputChains1_0,
/*1096*/            OPC_MorphNodeTo, TARGET_VAL(SP::STHri), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st i64:i64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHri ADDRri:iPTR:$addr, ?:i64:$src)
/*1105*/          0, /*End of Scope*/
/*1106*/        /*Scope*/ 34, /*->1141*/
/*1107*/          OPC_CheckPredicate, 21, // Predicate_truncstorei32
/*1109*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1111*/          OPC_Scope, 13, /*->1126*/ // 2 children in Scope
/*1113*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*1116*/            OPC_EmitMergeInputChains1_0,
/*1117*/            OPC_MorphNodeTo, TARGET_VAL(SP::STrr), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st i64:i64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STrr ADDRrr:iPTR:$addr, ?:i64:$src)
/*1126*/          /*Scope*/ 13, /*->1140*/
/*1127*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*1130*/            OPC_EmitMergeInputChains1_0,
/*1131*/            OPC_MorphNodeTo, TARGET_VAL(SP::STri), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st i64:i64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STri ADDRri:iPTR:$addr, ?:i64:$src)
/*1140*/          0, /*End of Scope*/
/*1141*/        0, /*End of Scope*/
/*1142*/      0, /*End of Scope*/
/*1143*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 60,  TARGET_VAL(SPISD::CALL),// ->1207
/*1147*/    OPC_RecordNode,   // #0 = 'call' chained node
/*1148*/    OPC_CaptureGlueInput,
/*1149*/    OPC_RecordChild1, // #1 = $ptr
/*1150*/    OPC_Scope, 12, /*->1164*/ // 3 children in Scope
/*1152*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$ptr #2 #3
/*1155*/      OPC_EmitMergeInputChains1_0,
/*1156*/      OPC_MorphNodeTo, TARGET_VAL(SP::JMPLrr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (call ADDRrr:i32:$ptr) - Complexity = 12
              // Dst: (JMPLrr ADDRrr:i32:$ptr)
/*1164*/    /*Scope*/ 12, /*->1177*/
/*1165*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$ptr #2 #3
/*1168*/      OPC_EmitMergeInputChains1_0,
/*1169*/      OPC_MorphNodeTo, TARGET_VAL(SP::JMPLri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (call ADDRri:i32:$ptr) - Complexity = 12
              // Dst: (JMPLri ADDRri:i32:$ptr)
/*1177*/    /*Scope*/ 28, /*->1206*/
/*1178*/      OPC_MoveChild, 1,
/*1180*/      OPC_SwitchOpcode /*2 cases */, 9,  TARGET_VAL(ISD::TargetGlobalAddress),// ->1193
/*1184*/        OPC_MoveParent,
/*1185*/        OPC_EmitMergeInputChains1_0,
/*1186*/        OPC_MorphNodeTo, TARGET_VAL(SP::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (call (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (CALL (tglobaladdr:i32):$dst)
              /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::TargetExternalSymbol),// ->1205
/*1196*/        OPC_MoveParent,
/*1197*/        OPC_EmitMergeInputChains1_0,
/*1198*/        OPC_MorphNodeTo, TARGET_VAL(SP::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (call (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (CALL (texternalsym:i32):$dst)
              0, // EndSwitchOpcode
/*1206*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 67|128,1/*195*/,  TARGET_VAL(ISD::AND),// ->1406
/*1211*/    OPC_Scope, 48, /*->1261*/ // 4 children in Scope
/*1213*/      OPC_RecordChild0, // #0 = $b
/*1214*/      OPC_MoveChild, 1,
/*1216*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1219*/      OPC_RecordChild0, // #1 = $c
/*1220*/      OPC_MoveChild, 1,
/*1222*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1233*/      OPC_MoveParent,
/*1234*/      OPC_MoveParent,
/*1235*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->1247
/*1238*/        OPC_MorphNodeTo, TARGET_VAL(SP::ANDNrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 i32:i32:$b, (xor:i32 i32:i32:$c, -1:i32)) - Complexity = 11
                // Dst: (ANDNrr:i32 i32:i32:$b, i32:i32:$c)
              /*SwitchType*/ 11,  MVT::i64,// ->1260
/*1249*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1251*/        OPC_MorphNodeTo, TARGET_VAL(SP::ANDNrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 i64:i64:$a, (xor:i64 i64:i64:$b, -1:i64)) - Complexity = 11
                // Dst: (ANDNrr:i64 ?:i64:$a, ?:i64:$b)
              0, // EndSwitchType
/*1261*/    /*Scope*/ 48, /*->1310*/
/*1262*/      OPC_MoveChild, 0,
/*1264*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1267*/      OPC_RecordChild0, // #0 = $c
/*1268*/      OPC_MoveChild, 1,
/*1270*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1281*/      OPC_MoveParent,
/*1282*/      OPC_MoveParent,
/*1283*/      OPC_RecordChild1, // #1 = $b
/*1284*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->1296
/*1287*/        OPC_MorphNodeTo, TARGET_VAL(SP::ANDNrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:i32 (xor:i32 i32:i32:$c, -1:i32), i32:i32:$b) - Complexity = 11
                // Dst: (ANDNrr:i32 i32:i32:$b, i32:i32:$c)
              /*SwitchType*/ 11,  MVT::i64,// ->1309
/*1298*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1300*/        OPC_MorphNodeTo, TARGET_VAL(SP::ANDNrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (and:i64 (xor:i64 i64:i64:$b, -1:i64), i64:i64:$a) - Complexity = 11
                // Dst: (ANDNrr:i64 ?:i64:$a, ?:i64:$b)
              0, // EndSwitchType
/*1310*/    /*Scope*/ 23, /*->1334*/
/*1311*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*1317*/      OPC_RecordChild0, // #0 = $val
/*1318*/      OPC_CheckType, MVT::i64,
/*1320*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1322*/      OPC_EmitInteger, MVT::i32, 0, 
/*1325*/      OPC_MorphNodeTo, TARGET_VAL(SP::SRLri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (and:i64 i64:i64:$val, 4294967295:i64) - Complexity = 8
              // Dst: (SRLri:i64 ?:i64:$val, 0:i32)
/*1334*/    /*Scope*/ 70, /*->1405*/
/*1335*/      OPC_RecordChild0, // #0 = $b
/*1336*/      OPC_RecordChild1, // #1 = $c
/*1337*/      OPC_Scope, 39, /*->1378*/ // 3 children in Scope
/*1339*/        OPC_MoveChild, 1,
/*1341*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1344*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*1346*/        OPC_MoveParent,
/*1347*/        OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->1361
/*1350*/          OPC_EmitConvertToTarget, 1,
/*1352*/          OPC_MorphNodeTo, TARGET_VAL(SP::ANDri), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (and:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                  // Dst: (ANDri:i32 i32:i32:$b, (imm:i32):$c)
                /*SwitchType*/ 14,  MVT::i64,// ->1377
/*1363*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1365*/          OPC_EmitNodeXForm, 0, 1, // as_i32imm
/*1368*/          OPC_MorphNodeTo, TARGET_VAL(SP::ANDri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (and:i64 i64:i64:$a, (imm:i64)<<P:Predicate_simm13>>:$b) - Complexity = 7
                  // Dst: (ANDri:i64 ?:i64:$a, (as_i32imm:i32 ?:i64:$b))
                0, // EndSwitchType
/*1378*/      /*Scope*/ 11, /*->1390*/
/*1379*/        OPC_CheckType, MVT::i32,
/*1381*/        OPC_MorphNodeTo, TARGET_VAL(SP::ANDrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (ANDrr:i32 i32:i32:$b, i32:i32:$c)
/*1390*/      /*Scope*/ 13, /*->1404*/
/*1391*/        OPC_CheckType, MVT::i64,
/*1393*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1395*/        OPC_MorphNodeTo, TARGET_VAL(SP::ANDrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
                // Dst: (ANDrr:i64 ?:i64:$a, ?:i64:$b)
/*1404*/      0, /*End of Scope*/
/*1405*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 43|128,1/*171*/,  TARGET_VAL(ISD::OR),// ->1581
/*1410*/    OPC_Scope, 48, /*->1460*/ // 3 children in Scope
/*1412*/      OPC_RecordChild0, // #0 = $b
/*1413*/      OPC_MoveChild, 1,
/*1415*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1418*/      OPC_RecordChild0, // #1 = $c
/*1419*/      OPC_MoveChild, 1,
/*1421*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1432*/      OPC_MoveParent,
/*1433*/      OPC_MoveParent,
/*1434*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->1446
/*1437*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORNrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 i32:i32:$b, (xor:i32 i32:i32:$c, -1:i32)) - Complexity = 11
                // Dst: (ORNrr:i32 i32:i32:$b, i32:i32:$c)
              /*SwitchType*/ 11,  MVT::i64,// ->1459
/*1448*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1450*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORNrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 i64:i64:$a, (xor:i64 i64:i64:$b, -1:i64)) - Complexity = 11
                // Dst: (ORNrr:i64 ?:i64:$a, ?:i64:$b)
              0, // EndSwitchType
/*1460*/    /*Scope*/ 48, /*->1509*/
/*1461*/      OPC_MoveChild, 0,
/*1463*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1466*/      OPC_RecordChild0, // #0 = $c
/*1467*/      OPC_MoveChild, 1,
/*1469*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1480*/      OPC_MoveParent,
/*1481*/      OPC_MoveParent,
/*1482*/      OPC_RecordChild1, // #1 = $b
/*1483*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->1495
/*1486*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORNrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (or:i32 (xor:i32 i32:i32:$c, -1:i32), i32:i32:$b) - Complexity = 11
                // Dst: (ORNrr:i32 i32:i32:$b, i32:i32:$c)
              /*SwitchType*/ 11,  MVT::i64,// ->1508
/*1497*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1499*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORNrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (or:i64 (xor:i64 i64:i64:$b, -1:i64), i64:i64:$a) - Complexity = 11
                // Dst: (ORNrr:i64 ?:i64:$a, ?:i64:$b)
              0, // EndSwitchType
/*1509*/    /*Scope*/ 70, /*->1580*/
/*1510*/      OPC_RecordChild0, // #0 = $b
/*1511*/      OPC_RecordChild1, // #1 = $c
/*1512*/      OPC_Scope, 39, /*->1553*/ // 3 children in Scope
/*1514*/        OPC_MoveChild, 1,
/*1516*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1519*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*1521*/        OPC_MoveParent,
/*1522*/        OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->1536
/*1525*/          OPC_EmitConvertToTarget, 1,
/*1527*/          OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (or:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                  // Dst: (ORri:i32 i32:i32:$b, (imm:i32):$c)
                /*SwitchType*/ 14,  MVT::i64,// ->1552
/*1538*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1540*/          OPC_EmitNodeXForm, 0, 1, // as_i32imm
/*1543*/          OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (or:i64 i64:i64:$a, (imm:i64)<<P:Predicate_simm13>>:$b) - Complexity = 7
                  // Dst: (ORri:i64 ?:i64:$a, (as_i32imm:i32 ?:i64:$b))
                0, // EndSwitchType
/*1553*/      /*Scope*/ 11, /*->1565*/
/*1554*/        OPC_CheckType, MVT::i32,
/*1556*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (ORrr:i32 i32:i32:$b, i32:i32:$c)
/*1565*/      /*Scope*/ 13, /*->1579*/
/*1566*/        OPC_CheckType, MVT::i64,
/*1568*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1570*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
                // Dst: (ORrr:i64 ?:i64:$a, ?:i64:$b)
/*1579*/      0, /*End of Scope*/
/*1580*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 119|128,1/*247*/,  TARGET_VAL(ISD::XOR),// ->1832
/*1585*/    OPC_Scope, 33, /*->1620*/ // 6 children in Scope
/*1587*/      OPC_MoveChild, 0,
/*1589*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1592*/      OPC_RecordChild0, // #0 = $b
/*1593*/      OPC_RecordChild1, // #1 = $c
/*1594*/      OPC_MoveParent,
/*1595*/      OPC_MoveChild, 1,
/*1597*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1608*/      OPC_MoveParent,
/*1609*/      OPC_CheckType, MVT::i32,
/*1611*/      OPC_MorphNodeTo, TARGET_VAL(SP::XNORrr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i32 (xor:i32 i32:i32:$b, i32:i32:$c), -1:i32) - Complexity = 11
              // Dst: (XNORrr:i32 i32:i32:$b, i32:i32:$c)
/*1620*/    /*Scope*/ 35, /*->1656*/
/*1621*/      OPC_RecordChild0, // #0 = $a
/*1622*/      OPC_MoveChild, 1,
/*1624*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1627*/      OPC_RecordChild0, // #1 = $b
/*1628*/      OPC_MoveChild, 1,
/*1630*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1641*/      OPC_MoveParent,
/*1642*/      OPC_MoveParent,
/*1643*/      OPC_CheckType, MVT::i64,
/*1645*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1647*/      OPC_MorphNodeTo, TARGET_VAL(SP::XNORrr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i64 i64:i64:$a, (xor:i64 i64:i64:$b, -1:i64)) - Complexity = 11
              // Dst: (XNORrr:i64 ?:i64:$a, ?:i64:$b)
/*1656*/    /*Scope*/ 33, /*->1690*/
/*1657*/      OPC_MoveChild, 0,
/*1659*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1662*/      OPC_RecordChild0, // #0 = $b
/*1663*/      OPC_MoveChild, 1,
/*1665*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1676*/      OPC_MoveParent,
/*1677*/      OPC_MoveParent,
/*1678*/      OPC_RecordChild1, // #1 = $c
/*1679*/      OPC_CheckType, MVT::i32,
/*1681*/      OPC_MorphNodeTo, TARGET_VAL(SP::XNORrr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i32 (xor:i32 i32:i32:$b, -1:i32), i32:i32:$c) - Complexity = 11
              // Dst: (XNORrr:i32 i32:i32:$b, i32:i32:$c)
/*1690*/    /*Scope*/ 33, /*->1724*/
/*1691*/      OPC_RecordChild0, // #0 = $c
/*1692*/      OPC_MoveChild, 1,
/*1694*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1697*/      OPC_RecordChild0, // #1 = $b
/*1698*/      OPC_MoveChild, 1,
/*1700*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1711*/      OPC_MoveParent,
/*1712*/      OPC_MoveParent,
/*1713*/      OPC_CheckType, MVT::i32,
/*1715*/      OPC_MorphNodeTo, TARGET_VAL(SP::XNORrr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (xor:i32 i32:i32:$c, (xor:i32 i32:i32:$b, -1:i32)) - Complexity = 11
              // Dst: (XNORrr:i32 i32:i32:$b, i32:i32:$c)
/*1724*/    /*Scope*/ 35, /*->1760*/
/*1725*/      OPC_MoveChild, 0,
/*1727*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1730*/      OPC_RecordChild0, // #0 = $a
/*1731*/      OPC_MoveChild, 1,
/*1733*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1744*/      OPC_MoveParent,
/*1745*/      OPC_MoveParent,
/*1746*/      OPC_RecordChild1, // #1 = $b
/*1747*/      OPC_CheckType, MVT::i64,
/*1749*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1751*/      OPC_MorphNodeTo, TARGET_VAL(SP::XNORrr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i64 (xor:i64 i64:i64:$a, -1:i64), i64:i64:$b) - Complexity = 11
              // Dst: (XNORrr:i64 ?:i64:$a, ?:i64:$b)
/*1760*/    /*Scope*/ 70, /*->1831*/
/*1761*/      OPC_RecordChild0, // #0 = $b
/*1762*/      OPC_RecordChild1, // #1 = $c
/*1763*/      OPC_Scope, 39, /*->1804*/ // 3 children in Scope
/*1765*/        OPC_MoveChild, 1,
/*1767*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1770*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*1772*/        OPC_MoveParent,
/*1773*/        OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->1787
/*1776*/          OPC_EmitConvertToTarget, 1,
/*1778*/          OPC_MorphNodeTo, TARGET_VAL(SP::XORri), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (xor:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                  // Dst: (XORri:i32 i32:i32:$b, (imm:i32):$c)
                /*SwitchType*/ 14,  MVT::i64,// ->1803
/*1789*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1791*/          OPC_EmitNodeXForm, 0, 1, // as_i32imm
/*1794*/          OPC_MorphNodeTo, TARGET_VAL(SP::XORri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (xor:i64 i64:i64:$a, (imm:i64)<<P:Predicate_simm13>>:$b) - Complexity = 7
                  // Dst: (XORri:i64 ?:i64:$a, (as_i32imm:i32 ?:i64:$b))
                0, // EndSwitchType
/*1804*/      /*Scope*/ 11, /*->1816*/
/*1805*/        OPC_CheckType, MVT::i32,
/*1807*/        OPC_MorphNodeTo, TARGET_VAL(SP::XORrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (XORrr:i32 i32:i32:$b, i32:i32:$c)
/*1816*/      /*Scope*/ 13, /*->1830*/
/*1817*/        OPC_CheckType, MVT::i64,
/*1819*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1821*/        OPC_MorphNodeTo, TARGET_VAL(SP::XORrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
                // Dst: (XORrr:i64 ?:i64:$a, ?:i64:$b)
/*1830*/      0, /*End of Scope*/
/*1831*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 55|128,1/*183*/,  TARGET_VAL(SPISD::SELECT_ICC),// ->2019
/*1836*/    OPC_CaptureGlueInput,
/*1837*/    OPC_RecordChild0, // #0 = $i
/*1838*/    OPC_Scope, 55, /*->1895*/ // 2 children in Scope
/*1840*/      OPC_MoveChild, 0,
/*1842*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1845*/      OPC_CheckPredicate, 23, // Predicate_simm11
/*1847*/      OPC_MoveParent,
/*1848*/      OPC_RecordChild1, // #1 = $f
/*1849*/      OPC_RecordChild2, // #2 = $cc
/*1850*/      OPC_MoveChild, 2,
/*1852*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1855*/      OPC_MoveParent,
/*1856*/      OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->1875
/*1859*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*1861*/        OPC_EmitConvertToTarget, 0,
/*1863*/        OPC_EmitConvertToTarget, 2,
/*1865*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVICCri), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                // Src: (SPselecticc:i32 (imm:i32)<<P:Predicate_simm11>>:$i, i32:i32:$f, (imm:i32):$cc) - Complexity = 10
                // Dst: (MOVICCri:i32 (imm:i32):$i, i32:i32:$f, (imm:i32):$cc)
              /*SwitchType*/ 17,  MVT::i64,// ->1894
/*1877*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1879*/        OPC_EmitNodeXForm, 0, 0, // as_i32imm
/*1882*/        OPC_EmitConvertToTarget, 2,
/*1884*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVICCri), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 1, 4, 
                // Src: (SPselecticc:i64 (imm:i64)<<P:Predicate_simm11>>:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 10
                // Dst: (MOVICCri:i64 (as_i32imm:i32 ?:i64:$t), ?:i64:$f, (imm:i32):$cond)
              0, // EndSwitchType
/*1895*/    /*Scope*/ 122, /*->2018*/
/*1896*/      OPC_RecordChild1, // #1 = $f
/*1897*/      OPC_RecordChild2, // #2 = $cc
/*1898*/      OPC_MoveChild, 2,
/*1900*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1903*/      OPC_MoveParent,
/*1904*/      OPC_SwitchType /*4 cases */, 30,  MVT::i32,// ->1937
/*1907*/        OPC_Scope, 14, /*->1923*/ // 2 children in Scope
/*1909*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*1911*/          OPC_EmitConvertToTarget, 2,
/*1913*/          OPC_MorphNodeTo, TARGET_VAL(SP::MOVICCrr), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselecticc:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cc) - Complexity = 6
                  // Dst: (MOVICCrr:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cc)
/*1923*/        /*Scope*/ 12, /*->1936*/
/*1924*/          OPC_EmitConvertToTarget, 2,
/*1926*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_Int_ICC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselecticc:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_Int_ICC:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$Cond)
/*1936*/        0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->1953
/*1939*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1941*/        OPC_EmitConvertToTarget, 2,
/*1943*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVICCrr), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
                // Src: (SPselecticc:i64 i64:i64:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 6
                // Dst: (MOVICCrr:i64 ?:i64:$t, ?:i64:$f, (imm:i32):$cond)
              /*SwitchType*/ 30,  MVT::f32,// ->1985
/*1955*/        OPC_Scope, 14, /*->1971*/ // 2 children in Scope
/*1957*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*1959*/          OPC_EmitConvertToTarget, 2,
/*1961*/          OPC_MorphNodeTo, TARGET_VAL(SP::FMOVS_ICC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselecticc:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cc) - Complexity = 6
                  // Dst: (FMOVS_ICC:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cc)
/*1971*/        /*Scope*/ 12, /*->1984*/
/*1972*/          OPC_EmitConvertToTarget, 2,
/*1974*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_FP_ICC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselecticc:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_FP_ICC:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$Cond)
/*1984*/        0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f64,// ->2017
/*1987*/        OPC_Scope, 14, /*->2003*/ // 2 children in Scope
/*1989*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*1991*/          OPC_EmitConvertToTarget, 2,
/*1993*/          OPC_MorphNodeTo, TARGET_VAL(SP::FMOVD_ICC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselecticc:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cc) - Complexity = 6
                  // Dst: (FMOVD_ICC:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cc)
/*2003*/        /*Scope*/ 12, /*->2016*/
/*2004*/          OPC_EmitConvertToTarget, 2,
/*2006*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_DFP_ICC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselecticc:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_DFP_ICC:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$Cond)
/*2016*/        0, /*End of Scope*/
              0, // EndSwitchType
/*2018*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 55|128,1/*183*/,  TARGET_VAL(SPISD::SELECT_FCC),// ->2206
/*2023*/    OPC_CaptureGlueInput,
/*2024*/    OPC_RecordChild0, // #0 = $i
/*2025*/    OPC_Scope, 55, /*->2082*/ // 2 children in Scope
/*2027*/      OPC_MoveChild, 0,
/*2029*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2032*/      OPC_CheckPredicate, 23, // Predicate_simm11
/*2034*/      OPC_MoveParent,
/*2035*/      OPC_RecordChild1, // #1 = $f
/*2036*/      OPC_RecordChild2, // #2 = $cc
/*2037*/      OPC_MoveChild, 2,
/*2039*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2042*/      OPC_MoveParent,
/*2043*/      OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->2062
/*2046*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*2048*/        OPC_EmitConvertToTarget, 0,
/*2050*/        OPC_EmitConvertToTarget, 2,
/*2052*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVFCCri), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                // Src: (SPselectfcc:i32 (imm:i32)<<P:Predicate_simm11>>:$i, i32:i32:$f, (imm:i32):$cc) - Complexity = 10
                // Dst: (MOVFCCri:i32 (imm:i32):$i, i32:i32:$f, (imm:i32):$cc)
              /*SwitchType*/ 17,  MVT::i64,// ->2081
/*2064*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2066*/        OPC_EmitNodeXForm, 0, 0, // as_i32imm
/*2069*/        OPC_EmitConvertToTarget, 2,
/*2071*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVFCCri), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 1, 4, 
                // Src: (SPselectfcc:i64 (imm:i64)<<P:Predicate_simm11>>:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 10
                // Dst: (MOVFCCri:i64 (as_i32imm:i32 ?:i64:$t), ?:i64:$f, (imm:i32):$cond)
              0, // EndSwitchType
/*2082*/    /*Scope*/ 122, /*->2205*/
/*2083*/      OPC_RecordChild1, // #1 = $f
/*2084*/      OPC_RecordChild2, // #2 = $cc
/*2085*/      OPC_MoveChild, 2,
/*2087*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2090*/      OPC_MoveParent,
/*2091*/      OPC_SwitchType /*4 cases */, 30,  MVT::i32,// ->2124
/*2094*/        OPC_Scope, 14, /*->2110*/ // 2 children in Scope
/*2096*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*2098*/          OPC_EmitConvertToTarget, 2,
/*2100*/          OPC_MorphNodeTo, TARGET_VAL(SP::MOVFCCrr), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectfcc:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cc) - Complexity = 6
                  // Dst: (MOVFCCrr:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cc)
/*2110*/        /*Scope*/ 12, /*->2123*/
/*2111*/          OPC_EmitConvertToTarget, 2,
/*2113*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_Int_FCC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectfcc:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_Int_FCC:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$Cond)
/*2123*/        0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->2140
/*2126*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2128*/        OPC_EmitConvertToTarget, 2,
/*2130*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVFCCrr), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
                // Src: (SPselectfcc:i64 i64:i64:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 6
                // Dst: (MOVFCCrr:i64 ?:i64:$t, ?:i64:$f, (imm:i32):$cond)
              /*SwitchType*/ 30,  MVT::f32,// ->2172
/*2142*/        OPC_Scope, 14, /*->2158*/ // 2 children in Scope
/*2144*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*2146*/          OPC_EmitConvertToTarget, 2,
/*2148*/          OPC_MorphNodeTo, TARGET_VAL(SP::FMOVS_FCC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectfcc:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cc) - Complexity = 6
                  // Dst: (FMOVS_FCC:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cc)
/*2158*/        /*Scope*/ 12, /*->2171*/
/*2159*/          OPC_EmitConvertToTarget, 2,
/*2161*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_FP_FCC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectfcc:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_FP_FCC:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$Cond)
/*2171*/        0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f64,// ->2204
/*2174*/        OPC_Scope, 14, /*->2190*/ // 2 children in Scope
/*2176*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*2178*/          OPC_EmitConvertToTarget, 2,
/*2180*/          OPC_MorphNodeTo, TARGET_VAL(SP::FMOVD_FCC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectfcc:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cc) - Complexity = 6
                  // Dst: (FMOVD_FCC:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cc)
/*2190*/        /*Scope*/ 12, /*->2203*/
/*2191*/          OPC_EmitConvertToTarget, 2,
/*2193*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_DFP_FCC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectfcc:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_DFP_FCC:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$Cond)
/*2203*/        0, /*End of Scope*/
              0, // EndSwitchType
/*2205*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 7|128,1/*135*/,  TARGET_VAL(SPISD::SELECT_XCC),// ->2345
/*2210*/    OPC_CaptureGlueInput,
/*2211*/    OPC_RecordChild0, // #0 = $i
/*2212*/    OPC_Scope, 55, /*->2269*/ // 2 children in Scope
/*2214*/      OPC_MoveChild, 0,
/*2216*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2219*/      OPC_CheckPredicate, 23, // Predicate_simm11
/*2221*/      OPC_MoveParent,
/*2222*/      OPC_RecordChild1, // #1 = $f
/*2223*/      OPC_RecordChild2, // #2 = $cond
/*2224*/      OPC_MoveChild, 2,
/*2226*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2229*/      OPC_MoveParent,
/*2230*/      OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->2249
/*2233*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2235*/        OPC_EmitConvertToTarget, 0,
/*2237*/        OPC_EmitConvertToTarget, 2,
/*2239*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVXCCri), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                // Src: (SPselectxcc:i32 (imm:i32)<<P:Predicate_simm11>>:$i, i32:i32:$f, (imm:i32):$cond) - Complexity = 10
                // Dst: (MOVXCCri:i32 (imm:i32):$i, i32:i32:$f, (imm:i32):$cond)
              /*SwitchType*/ 17,  MVT::i64,// ->2268
/*2251*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2253*/        OPC_EmitNodeXForm, 0, 0, // as_i32imm
/*2256*/        OPC_EmitConvertToTarget, 2,
/*2258*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVXCCri), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 1, 4, 
                // Src: (SPselectxcc:i64 (imm:i64)<<P:Predicate_simm11>>:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 10
                // Dst: (MOVXCCri:i64 (as_i32imm:i32 ?:i64:$t), ?:i64:$f, (imm:i32):$cond)
              0, // EndSwitchType
/*2269*/    /*Scope*/ 74, /*->2344*/
/*2270*/      OPC_RecordChild1, // #1 = $f
/*2271*/      OPC_RecordChild2, // #2 = $cond
/*2272*/      OPC_MoveChild, 2,
/*2274*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2277*/      OPC_MoveParent,
/*2278*/      OPC_SwitchType /*4 cases */, 14,  MVT::i32,// ->2295
/*2281*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2283*/        OPC_EmitConvertToTarget, 2,
/*2285*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVXCCrr), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (SPselectxcc:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cond) - Complexity = 6
                // Dst: (MOVXCCrr:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cond)
              /*SwitchType*/ 14,  MVT::i64,// ->2311
/*2297*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2299*/        OPC_EmitConvertToTarget, 2,
/*2301*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVXCCrr), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
                // Src: (SPselectxcc:i64 i64:i64:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 6
                // Dst: (MOVXCCrr:i64 ?:i64:$t, ?:i64:$f, (imm:i32):$cond)
              /*SwitchType*/ 14,  MVT::f32,// ->2327
/*2313*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2315*/        OPC_EmitConvertToTarget, 2,
/*2317*/        OPC_MorphNodeTo, TARGET_VAL(SP::FMOVS_XCC), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (SPselectxcc:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cond) - Complexity = 6
                // Dst: (FMOVS_XCC:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cond)
              /*SwitchType*/ 14,  MVT::f64,// ->2343
/*2329*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2331*/        OPC_EmitConvertToTarget, 2,
/*2333*/        OPC_MorphNodeTo, TARGET_VAL(SP::FMOVD_XCC), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                // Src: (SPselectxcc:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cond) - Complexity = 6
                // Dst: (FMOVD_XCC:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cond)
              0, // EndSwitchType
/*2344*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::CALLSEQ_END),// ->2373
/*2348*/    OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*2349*/    OPC_CaptureGlueInput,
/*2350*/    OPC_RecordChild1, // #1 = $amt1
/*2351*/    OPC_MoveChild, 1,
/*2353*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*2356*/    OPC_MoveParent,
/*2357*/    OPC_RecordChild2, // #2 = $amt2
/*2358*/    OPC_MoveChild, 2,
/*2360*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*2363*/    OPC_MoveParent,
/*2364*/    OPC_EmitMergeInputChains1_0,
/*2365*/    OPC_MorphNodeTo, TARGET_VAL(SP::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::FrameIndex),// ->2391
/*2376*/    OPC_RecordNode,   // #0 = $addr
/*2377*/    OPC_CheckType, MVT::iPTR,
/*2379*/    OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectADDRri:$addr #1 #2
/*2382*/    OPC_MorphNodeTo, TARGET_VAL(SP::LEA_ADDri), 0,
                1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 2, 
            // Src: ADDRri:iPTR:$addr - Complexity = 9
            // Dst: (LEA_ADDri:iPTR ADDRri:iPTR:$addr)
          /*SwitchOpcode*/ 26|128,1/*154*/,  TARGET_VAL(ISD::ADD),// ->2549
/*2395*/    OPC_Scope, 39, /*->2436*/ // 3 children in Scope
/*2397*/      OPC_RecordChild0, // #0 = $r
/*2398*/      OPC_MoveChild, 1,
/*2400*/      OPC_CheckOpcode, TARGET_VAL(SPISD::Lo),
/*2403*/      OPC_RecordChild0, // #1 = $in
/*2404*/      OPC_MoveChild, 0,
/*2406*/      OPC_SwitchOpcode /*2 cases */, 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->2421
/*2410*/        OPC_MoveParent,
/*2411*/        OPC_MoveParent,
/*2412*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                    1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 0, 1, 
                // Src: (add:iPTR iPTR:iPTR:$r, (SPlo:iPTR (tglobaladdr:iPTR):$in)) - Complexity = 9
                // Dst: (ADDri:iPTR ?:iPTR:$r, (tglobaladdr:i32):$in)
              /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetConstantPool),// ->2435
/*2424*/        OPC_MoveParent,
/*2425*/        OPC_MoveParent,
/*2426*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                    1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 0, 1, 
                // Src: (add:iPTR iPTR:iPTR:$r, (SPlo:iPTR (tconstpool:iPTR):$in)) - Complexity = 9
                // Dst: (ADDri:iPTR ?:iPTR:$r, (tconstpool:i32):$in)
              0, // EndSwitchOpcode
/*2436*/    /*Scope*/ 40, /*->2477*/
/*2437*/      OPC_MoveChild, 0,
/*2439*/      OPC_CheckOpcode, TARGET_VAL(SPISD::Lo),
/*2442*/      OPC_RecordChild0, // #0 = $in
/*2443*/      OPC_MoveChild, 0,
/*2445*/      OPC_SwitchOpcode /*2 cases */, 12,  TARGET_VAL(ISD::TargetConstantPool),// ->2461
/*2449*/        OPC_MoveParent,
/*2450*/        OPC_MoveParent,
/*2451*/        OPC_RecordChild1, // #1 = $r
/*2452*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                    1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 0, 
                // Src: (add:iPTR (SPlo:iPTR (tconstpool:iPTR):$in), iPTR:iPTR:$r) - Complexity = 9
                // Dst: (ADDri:iPTR ?:iPTR:$r, (tconstpool:i32):$in)
              /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetGlobalAddress),// ->2476
/*2464*/        OPC_MoveParent,
/*2465*/        OPC_MoveParent,
/*2466*/        OPC_RecordChild1, // #1 = $r
/*2467*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                    1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 0, 
                // Src: (add:iPTR (SPlo:iPTR (tglobaladdr:iPTR):$in), iPTR:iPTR:$r) - Complexity = 9
                // Dst: (ADDri:iPTR ?:iPTR:$r, (tglobaladdr:i32):$in)
              0, // EndSwitchOpcode
/*2477*/    /*Scope*/ 70, /*->2548*/
/*2478*/      OPC_RecordChild0, // #0 = $b
/*2479*/      OPC_RecordChild1, // #1 = $c
/*2480*/      OPC_Scope, 39, /*->2521*/ // 3 children in Scope
/*2482*/        OPC_MoveChild, 1,
/*2484*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2487*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*2489*/        OPC_MoveParent,
/*2490*/        OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->2504
/*2493*/          OPC_EmitConvertToTarget, 1,
/*2495*/          OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                  // Dst: (ADDri:i32 i32:i32:$b, (imm:i32):$c)
                /*SwitchType*/ 14,  MVT::i64,// ->2520
/*2506*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2508*/          OPC_EmitNodeXForm, 0, 1, // as_i32imm
/*2511*/          OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i64 i64:i64:$a, (imm:i64)<<P:Predicate_simm13>>:$b) - Complexity = 7
                  // Dst: (ADDri:i64 ?:i64:$a, (as_i32imm:i32 ?:i64:$b))
                0, // EndSwitchType
/*2521*/      /*Scope*/ 11, /*->2533*/
/*2522*/        OPC_CheckType, MVT::i32,
/*2524*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (ADDrr:i32 i32:i32:$b, i32:i32:$c)
/*2533*/      /*Scope*/ 13, /*->2547*/
/*2534*/        OPC_CheckType, MVT::i64,
/*2536*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2538*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (add:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
                // Dst: (ADDrr:i64 ?:i64:$a, ?:i64:$b)
/*2547*/      0, /*End of Scope*/
/*2548*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 21,  TARGET_VAL(SPISD::RET_FLAG),// ->2573
/*2552*/    OPC_RecordNode,   // #0 = 'retflag' chained node
/*2553*/    OPC_CaptureGlueInput,
/*2554*/    OPC_RecordChild1, // #1 = $val
/*2555*/    OPC_MoveChild, 1,
/*2557*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2560*/    OPC_CheckPredicate, 22, // Predicate_simm13
/*2562*/    OPC_MoveParent,
/*2563*/    OPC_EmitMergeInputChains1_0,
/*2564*/    OPC_EmitConvertToTarget, 1,
/*2566*/    OPC_MorphNodeTo, TARGET_VAL(SP::RETL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                0/*#VTs*/, 1/*#Ops*/, 2, 
            // Src: (retflag (imm:i32)<<P:Predicate_simm13>>:$val) - Complexity = 7
            // Dst: (RETL (imm:i32):$val)
          /*SwitchOpcode*/ 77,  TARGET_VAL(ISD::SHL),// ->2653
/*2576*/    OPC_RecordChild0, // #0 = $b
/*2577*/    OPC_RecordChild1, // #1 = $c
/*2578*/    OPC_Scope, 43, /*->2623*/ // 2 children in Scope
/*2580*/      OPC_MoveChild, 1,
/*2582*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2585*/      OPC_CheckType, MVT::i32,
/*2587*/      OPC_Scope, 16, /*->2605*/ // 2 children in Scope
/*2589*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*2591*/        OPC_MoveParent,
/*2592*/        OPC_CheckType, MVT::i32,
/*2594*/        OPC_EmitConvertToTarget, 1,
/*2596*/        OPC_MorphNodeTo, TARGET_VAL(SP::SLLri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                // Dst: (SLLri:i32 i32:i32:$b, (imm:i32):$c)
/*2605*/      /*Scope*/ 16, /*->2622*/
/*2606*/        OPC_MoveParent,
/*2607*/        OPC_CheckType, MVT::i64,
/*2609*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2611*/        OPC_EmitConvertToTarget, 1,
/*2613*/        OPC_MorphNodeTo, TARGET_VAL(SP::SLLXri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i64 i64:i64:$rs, (imm:i32):$shcnt) - Complexity = 6
                // Dst: (SLLXri:i64 i64:i64:$rs, (imm:i32):$shcnt)
/*2622*/      0, /*End of Scope*/
/*2623*/    /*Scope*/ 28, /*->2652*/
/*2624*/      OPC_CheckChild1Type, MVT::i32,
/*2626*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->2638
/*2629*/        OPC_MorphNodeTo, TARGET_VAL(SP::SLLrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (SLLrr:i32 i32:i32:$b, i32:i32:$c)
              /*SwitchType*/ 11,  MVT::i64,// ->2651
/*2640*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2642*/        OPC_MorphNodeTo, TARGET_VAL(SP::SLLXrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i64 i64:i64:$rs, i32:i32:$rs2) - Complexity = 3
                // Dst: (SLLXrr:i64 i64:i64:$rs, i32:i32:$rs2)
              0, // EndSwitchType
/*2652*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 77,  TARGET_VAL(ISD::SRL),// ->2733
/*2656*/    OPC_RecordChild0, // #0 = $b
/*2657*/    OPC_RecordChild1, // #1 = $c
/*2658*/    OPC_Scope, 43, /*->2703*/ // 2 children in Scope
/*2660*/      OPC_MoveChild, 1,
/*2662*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2665*/      OPC_CheckType, MVT::i32,
/*2667*/      OPC_Scope, 16, /*->2685*/ // 2 children in Scope
/*2669*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*2671*/        OPC_MoveParent,
/*2672*/        OPC_CheckType, MVT::i32,
/*2674*/        OPC_EmitConvertToTarget, 1,
/*2676*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRLri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                // Dst: (SRLri:i32 i32:i32:$b, (imm:i32):$c)
/*2685*/      /*Scope*/ 16, /*->2702*/
/*2686*/        OPC_MoveParent,
/*2687*/        OPC_CheckType, MVT::i64,
/*2689*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2691*/        OPC_EmitConvertToTarget, 1,
/*2693*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRLXri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i64 i64:i64:$rs, (imm:i32):$shcnt) - Complexity = 6
                // Dst: (SRLXri:i64 i64:i64:$rs, (imm:i32):$shcnt)
/*2702*/      0, /*End of Scope*/
/*2703*/    /*Scope*/ 28, /*->2732*/
/*2704*/      OPC_CheckChild1Type, MVT::i32,
/*2706*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->2718
/*2709*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRLrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (SRLrr:i32 i32:i32:$b, i32:i32:$c)
              /*SwitchType*/ 11,  MVT::i64,// ->2731
/*2720*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2722*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRLXrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i64 i64:i64:$rs, i32:i32:$rs2) - Complexity = 3
                // Dst: (SRLXrr:i64 i64:i64:$rs, i32:i32:$rs2)
              0, // EndSwitchType
/*2732*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 77,  TARGET_VAL(ISD::SRA),// ->2813
/*2736*/    OPC_RecordChild0, // #0 = $b
/*2737*/    OPC_RecordChild1, // #1 = $c
/*2738*/    OPC_Scope, 43, /*->2783*/ // 2 children in Scope
/*2740*/      OPC_MoveChild, 1,
/*2742*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2745*/      OPC_CheckType, MVT::i32,
/*2747*/      OPC_Scope, 16, /*->2765*/ // 2 children in Scope
/*2749*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*2751*/        OPC_MoveParent,
/*2752*/        OPC_CheckType, MVT::i32,
/*2754*/        OPC_EmitConvertToTarget, 1,
/*2756*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRAri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                // Dst: (SRAri:i32 i32:i32:$b, (imm:i32):$c)
/*2765*/      /*Scope*/ 16, /*->2782*/
/*2766*/        OPC_MoveParent,
/*2767*/        OPC_CheckType, MVT::i64,
/*2769*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2771*/        OPC_EmitConvertToTarget, 1,
/*2773*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRAXri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i64 i64:i64:$rs, (imm:i32):$shcnt) - Complexity = 6
                // Dst: (SRAXri:i64 i64:i64:$rs, (imm:i32):$shcnt)
/*2782*/      0, /*End of Scope*/
/*2783*/    /*Scope*/ 28, /*->2812*/
/*2784*/      OPC_CheckChild1Type, MVT::i32,
/*2786*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->2798
/*2789*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRArr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (SRArr:i32 i32:i32:$b, i32:i32:$c)
              /*SwitchType*/ 11,  MVT::i64,// ->2811
/*2800*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2802*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRAXrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i64 i64:i64:$rs, i32:i32:$rs2) - Complexity = 3
                // Dst: (SRAXrr:i64 i64:i64:$rs, i32:i32:$rs2)
              0, // EndSwitchType
/*2812*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 52,  TARGET_VAL(ISD::ADDC),// ->2868
/*2816*/    OPC_RecordChild0, // #0 = $b
/*2817*/    OPC_RecordChild1, // #1 = $c
/*2818*/    OPC_Scope, 21, /*->2841*/ // 3 children in Scope
/*2820*/      OPC_MoveChild, 1,
/*2822*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2825*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*2827*/      OPC_MoveParent,
/*2828*/      OPC_CheckType, MVT::i32,
/*2830*/      OPC_EmitConvertToTarget, 1,
/*2832*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADDCCri), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (addc:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
              // Dst: (ADDCCri:i32 i32:i32:$b, (imm:i32):$c)
/*2841*/    /*Scope*/ 11, /*->2853*/
/*2842*/      OPC_CheckType, MVT::i32,
/*2844*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADDCCrr), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
              // Dst: (ADDCCrr:i32 i32:i32:$b, i32:i32:$c)
/*2853*/    /*Scope*/ 13, /*->2867*/
/*2854*/      OPC_CheckType, MVT::i64,
/*2856*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2858*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADDCCrr), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
              // Dst: (ADDCCrr:i64 ?:i64:$a, ?:i64:$b)
/*2867*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::ADDE),// ->2924
/*2871*/    OPC_CaptureGlueInput,
/*2872*/    OPC_RecordChild0, // #0 = $b
/*2873*/    OPC_RecordChild1, // #1 = $c
/*2874*/    OPC_Scope, 21, /*->2897*/ // 3 children in Scope
/*2876*/      OPC_MoveChild, 1,
/*2878*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2881*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*2883*/      OPC_MoveParent,
/*2884*/      OPC_CheckType, MVT::i32,
/*2886*/      OPC_EmitConvertToTarget, 1,
/*2888*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADDXri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (adde:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
              // Dst: (ADDXri:i32 i32:i32:$b, (imm:i32):$c)
/*2897*/    /*Scope*/ 11, /*->2909*/
/*2898*/      OPC_CheckType, MVT::i32,
/*2900*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADDXrr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (adde:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
              // Dst: (ADDXrr:i32 i32:i32:$b, i32:i32:$c)
/*2909*/    /*Scope*/ 13, /*->2923*/
/*2910*/      OPC_CheckType, MVT::i64,
/*2912*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2914*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADDXrr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (adde:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
              // Dst: (ADDXrr:i64 ?:i64:$a, ?:i64:$b)
/*2923*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 70,  TARGET_VAL(ISD::SUB),// ->2997
/*2927*/    OPC_RecordChild0, // #0 = $b
/*2928*/    OPC_RecordChild1, // #1 = $c
/*2929*/    OPC_Scope, 39, /*->2970*/ // 3 children in Scope
/*2931*/      OPC_MoveChild, 1,
/*2933*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2936*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*2938*/      OPC_MoveParent,
/*2939*/      OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->2953
/*2942*/        OPC_EmitConvertToTarget, 1,
/*2944*/        OPC_MorphNodeTo, TARGET_VAL(SP::SUBri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sub:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                // Dst: (SUBri:i32 i32:i32:$b, (imm:i32):$c)
              /*SwitchType*/ 14,  MVT::i64,// ->2969
/*2955*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2957*/        OPC_EmitNodeXForm, 0, 1, // as_i32imm
/*2960*/        OPC_MorphNodeTo, TARGET_VAL(SP::SUBri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (sub:i64 i64:i64:$a, (imm:i64)<<P:Predicate_simm13>>:$b) - Complexity = 7
                // Dst: (SUBri:i64 ?:i64:$a, (as_i32imm:i32 ?:i64:$b))
              0, // EndSwitchType
/*2970*/    /*Scope*/ 11, /*->2982*/
/*2971*/      OPC_CheckType, MVT::i32,
/*2973*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBrr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sub:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
              // Dst: (SUBrr:i32 i32:i32:$b, i32:i32:$c)
/*2982*/    /*Scope*/ 13, /*->2996*/
/*2983*/      OPC_CheckType, MVT::i64,
/*2985*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2987*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBrr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sub:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
              // Dst: (SUBrr:i64 ?:i64:$a, ?:i64:$b)
/*2996*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::SUBE),// ->3053
/*3000*/    OPC_CaptureGlueInput,
/*3001*/    OPC_RecordChild0, // #0 = $b
/*3002*/    OPC_RecordChild1, // #1 = $c
/*3003*/    OPC_Scope, 21, /*->3026*/ // 3 children in Scope
/*3005*/      OPC_MoveChild, 1,
/*3007*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3010*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*3012*/      OPC_MoveParent,
/*3013*/      OPC_CheckType, MVT::i32,
/*3015*/      OPC_EmitConvertToTarget, 1,
/*3017*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBXri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (sube:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
              // Dst: (SUBXri:i32 i32:i32:$b, (imm:i32):$c)
/*3026*/    /*Scope*/ 11, /*->3038*/
/*3027*/      OPC_CheckType, MVT::i32,
/*3029*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBXrr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sube:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
              // Dst: (SUBXrr:i32 i32:i32:$b, i32:i32:$c)
/*3038*/    /*Scope*/ 13, /*->3052*/
/*3039*/      OPC_CheckType, MVT::i64,
/*3041*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3043*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBXrr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sube:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
              // Dst: (SUBXrr:i64 ?:i64:$a, ?:i64:$b)
/*3052*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 70,  TARGET_VAL(SPISD::CMPICC),// ->3126
/*3056*/    OPC_RecordChild0, // #0 = $b
/*3057*/    OPC_RecordChild1, // #1 = $c
/*3058*/    OPC_Scope, 39, /*->3099*/ // 3 children in Scope
/*3060*/      OPC_MoveChild, 1,
/*3062*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3065*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*3067*/      OPC_MoveParent,
/*3068*/      OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->3082
/*3071*/        OPC_EmitConvertToTarget, 1,
/*3073*/        OPC_MorphNodeTo, TARGET_VAL(SP::SUBCCri), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (SPcmpicc:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                // Dst: (SUBCCri:i32 i32:i32:$b, (imm:i32):$c)
              /*SwitchType*/ 14,  MVT::i64,// ->3098
/*3084*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3086*/        OPC_EmitNodeXForm, 0, 1, // as_i32imm
/*3089*/        OPC_MorphNodeTo, TARGET_VAL(SP::SUBCCri), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (SPcmpicc:i64 i64:i64:$a, (imm:i64)<<P:Predicate_simm13>>:$b) - Complexity = 7
                // Dst: (SUBCCri:i64 ?:i64:$a, (as_i32imm:i32 ?:i64:$b))
              0, // EndSwitchType
/*3099*/    /*Scope*/ 11, /*->3111*/
/*3100*/      OPC_CheckType, MVT::i32,
/*3102*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBCCrr), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (SPcmpicc:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
              // Dst: (SUBCCrr:i32 i32:i32:$b, i32:i32:$c)
/*3111*/    /*Scope*/ 13, /*->3125*/
/*3112*/      OPC_CheckType, MVT::i64,
/*3114*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3116*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBCCrr), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (SPcmpicc:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
              // Dst: (SUBCCrr:i64 ?:i64:$a, ?:i64:$b)
/*3125*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 69,  TARGET_VAL(ISD::MUL),// ->3198
/*3129*/    OPC_RecordChild0, // #0 = $b
/*3130*/    OPC_RecordChild1, // #1 = $c
/*3131*/    OPC_Scope, 38, /*->3171*/ // 3 children in Scope
/*3133*/      OPC_MoveChild, 1,
/*3135*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3138*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*3140*/      OPC_MoveParent,
/*3141*/      OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->3155
/*3144*/        OPC_EmitConvertToTarget, 1,
/*3146*/        OPC_MorphNodeTo, TARGET_VAL(SP::SMULri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (mul:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                // Dst: (SMULri:i32 i32:i32:$b, (imm:i32):$c)
              /*SwitchType*/ 13,  MVT::i64,// ->3170
/*3157*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3159*/        OPC_EmitConvertToTarget, 1,
/*3161*/        OPC_MorphNodeTo, TARGET_VAL(SP::MULXri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (mul:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$i) - Complexity = 7
                // Dst: (MULXri:i64 i64:i64:$rs1, (imm:i64):$i)
              0, // EndSwitchType
/*3171*/    /*Scope*/ 11, /*->3183*/
/*3172*/      OPC_CheckType, MVT::i32,
/*3174*/      OPC_MorphNodeTo, TARGET_VAL(SP::SMULrr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
              // Dst: (SMULrr:i32 i32:i32:$b, i32:i32:$c)
/*3183*/    /*Scope*/ 13, /*->3197*/
/*3184*/      OPC_CheckType, MVT::i64,
/*3186*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3188*/      OPC_MorphNodeTo, TARGET_VAL(SP::MULXrr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
              // Dst: (MULXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*3197*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 52,  TARGET_VAL(ISD::SUBC),// ->3253
/*3201*/    OPC_RecordChild0, // #0 = $b
/*3202*/    OPC_RecordChild1, // #1 = $val
/*3203*/    OPC_Scope, 21, /*->3226*/ // 3 children in Scope
/*3205*/      OPC_MoveChild, 1,
/*3207*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3210*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*3212*/      OPC_MoveParent,
/*3213*/      OPC_CheckType, MVT::i32,
/*3215*/      OPC_EmitConvertToTarget, 1,
/*3217*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBCCri), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (subc:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$val) - Complexity = 7
              // Dst: (SUBCCri:i32 ?:i32:$b, (imm:i32):$val)
/*3226*/    /*Scope*/ 11, /*->3238*/
/*3227*/      OPC_CheckType, MVT::i32,
/*3229*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBCCrr), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
              // Dst: (SUBCCrr:i32 ?:i32:$b, ?:i32:$c)
/*3238*/    /*Scope*/ 13, /*->3252*/
/*3239*/      OPC_CheckType, MVT::i64,
/*3241*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3243*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBCCrr), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
              // Dst: (SUBCCrr:i64 ?:i64:$a, ?:i64:$b)
/*3252*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(ISD::SDIV),// ->3298
/*3256*/    OPC_RecordChild0, // #0 = $rs1
/*3257*/    OPC_RecordChild1, // #1 = $i
/*3258*/    OPC_Scope, 23, /*->3283*/ // 2 children in Scope
/*3260*/      OPC_MoveChild, 1,
/*3262*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3265*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*3267*/      OPC_MoveParent,
/*3268*/      OPC_CheckType, MVT::i64,
/*3270*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3272*/      OPC_EmitConvertToTarget, 1,
/*3274*/      OPC_MorphNodeTo, TARGET_VAL(SP::SDIVXri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
              // Src: (sdiv:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$i) - Complexity = 7
              // Dst: (SDIVXri:i64 i64:i64:$rs1, (imm:i64):$i)
/*3283*/    /*Scope*/ 13, /*->3297*/
/*3284*/      OPC_CheckType, MVT::i64,
/*3286*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3288*/      OPC_MorphNodeTo, TARGET_VAL(SP::SDIVXrr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
              // Dst: (SDIVXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*3297*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(ISD::UDIV),// ->3343
/*3301*/    OPC_RecordChild0, // #0 = $rs1
/*3302*/    OPC_RecordChild1, // #1 = $i
/*3303*/    OPC_Scope, 23, /*->3328*/ // 2 children in Scope
/*3305*/      OPC_MoveChild, 1,
/*3307*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3310*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*3312*/      OPC_MoveParent,
/*3313*/      OPC_CheckType, MVT::i64,
/*3315*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3317*/      OPC_EmitConvertToTarget, 1,
/*3319*/      OPC_MorphNodeTo, TARGET_VAL(SP::UDIVXri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
              // Src: (udiv:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$i) - Complexity = 7
              // Dst: (UDIVXri:i64 i64:i64:$rs1, (imm:i64):$i)
/*3328*/    /*Scope*/ 13, /*->3342*/
/*3329*/      OPC_CheckType, MVT::i64,
/*3331*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3333*/      OPC_MorphNodeTo, TARGET_VAL(SP::UDIVXrr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
              // Dst: (UDIVXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*3342*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::CALLSEQ_START),// ->3362
/*3346*/    OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*3347*/    OPC_RecordChild1, // #1 = $amt
/*3348*/    OPC_MoveChild, 1,
/*3350*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3353*/    OPC_MoveParent,
/*3354*/    OPC_EmitMergeInputChains1_0,
/*3355*/    OPC_MorphNodeTo, TARGET_VAL(SP::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN (timm:i32):$amt)
          /*SwitchOpcode*/ 27,  TARGET_VAL(SPISD::BRICC),// ->3392
/*3365*/    OPC_RecordNode,   // #0 = 'SPbricc' chained node
/*3366*/    OPC_CaptureGlueInput,
/*3367*/    OPC_RecordChild1, // #1 = $dst
/*3368*/    OPC_MoveChild, 1,
/*3370*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3373*/    OPC_MoveParent,
/*3374*/    OPC_RecordChild2, // #2 = $cc
/*3375*/    OPC_MoveChild, 2,
/*3377*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3380*/    OPC_MoveParent,
/*3381*/    OPC_EmitMergeInputChains1_0,
/*3382*/    OPC_EmitConvertToTarget, 2,
/*3384*/    OPC_MorphNodeTo, TARGET_VAL(SP::BCOND), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 2/*#Ops*/, 1, 3, 
            // Src: (SPbricc (bb:Other):$dst, (imm:i32):$cc) - Complexity = 6
            // Dst: (BCOND (bb:Other):$dst, (imm:i32):$cc)
          /*SwitchOpcode*/ 27,  TARGET_VAL(SPISD::BRFCC),// ->3422
/*3395*/    OPC_RecordNode,   // #0 = 'SPbrfcc' chained node
/*3396*/    OPC_CaptureGlueInput,
/*3397*/    OPC_RecordChild1, // #1 = $dst
/*3398*/    OPC_MoveChild, 1,
/*3400*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3403*/    OPC_MoveParent,
/*3404*/    OPC_RecordChild2, // #2 = $cc
/*3405*/    OPC_MoveChild, 2,
/*3407*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3410*/    OPC_MoveParent,
/*3411*/    OPC_EmitMergeInputChains1_0,
/*3412*/    OPC_EmitConvertToTarget, 2,
/*3414*/    OPC_MorphNodeTo, TARGET_VAL(SP::FBCOND), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 2/*#Ops*/, 1, 3, 
            // Src: (SPbrfcc (bb:Other):$dst, (imm:i32):$cc) - Complexity = 6
            // Dst: (FBCOND (bb:Other):$dst, (imm:i32):$cc)
          /*SwitchOpcode*/ 29,  TARGET_VAL(SPISD::Hi),// ->3454
/*3425*/    OPC_RecordChild0, // #0 = $in
/*3426*/    OPC_MoveChild, 0,
/*3428*/    OPC_SwitchOpcode /*2 cases */, 9,  TARGET_VAL(ISD::TargetGlobalAddress),// ->3441
/*3432*/      OPC_MoveParent,
/*3433*/      OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::iPTR, 1/*#Ops*/, 0, 
              // Src: (SPhi:iPTR (tglobaladdr:iPTR):$in) - Complexity = 6
              // Dst: (SETHIi:iPTR (tglobaladdr:i32):$in)
            /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::TargetConstantPool),// ->3453
/*3444*/      OPC_MoveParent,
/*3445*/      OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::iPTR, 1/*#Ops*/, 0, 
              // Src: (SPhi:iPTR (tconstpool:iPTR):$in) - Complexity = 6
              // Dst: (SETHIi:iPTR (tconstpool:i32):$in)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 37,  TARGET_VAL(SPISD::Lo),// ->3494
/*3457*/    OPC_RecordChild0, // #0 = $in
/*3458*/    OPC_MoveChild, 0,
/*3460*/    OPC_SwitchOpcode /*2 cases */, 13,  TARGET_VAL(ISD::TargetGlobalAddress),// ->3477
/*3464*/      OPC_MoveParent,
/*3465*/      OPC_EmitRegister, MVT::i32, SP::G0,
/*3468*/      OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                  1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 0, 
              // Src: (SPlo:iPTR (tglobaladdr:iPTR):$in) - Complexity = 6
              // Dst: (ORri:iPTR G0:i32, (tglobaladdr:i32):$in)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetConstantPool),// ->3493
/*3480*/      OPC_MoveParent,
/*3481*/      OPC_EmitRegister, MVT::i32, SP::G0,
/*3484*/      OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                  1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 0, 
              // Src: (SPlo:iPTR (tconstpool:iPTR):$in) - Complexity = 6
              // Dst: (ORri:iPTR G0:i32, (tconstpool:i32):$in)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 29,  TARGET_VAL(SPISD::BRXCC),// ->3526
/*3497*/    OPC_RecordNode,   // #0 = 'SPbrxcc' chained node
/*3498*/    OPC_CaptureGlueInput,
/*3499*/    OPC_RecordChild1, // #1 = $dst
/*3500*/    OPC_MoveChild, 1,
/*3502*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3505*/    OPC_MoveParent,
/*3506*/    OPC_RecordChild2, // #2 = $cc
/*3507*/    OPC_MoveChild, 2,
/*3509*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3512*/    OPC_MoveParent,
/*3513*/    OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3515*/    OPC_EmitMergeInputChains1_0,
/*3516*/    OPC_EmitConvertToTarget, 2,
/*3518*/    OPC_MorphNodeTo, TARGET_VAL(SP::BPXCC), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 2/*#Ops*/, 1, 3, 
            // Src: (SPbrxcc (bb:Other):$dst, (imm:i32):$cc) - Complexity = 6
            // Dst: (BPXCC (bb:Other):$dst, (imm:i32):$cc)
          /*SwitchOpcode*/ 109|128,1/*237*/,  TARGET_VAL(ISD::Constant),// ->3767
/*3530*/    OPC_RecordNode,   // #0 = $src
/*3531*/    OPC_Scope, 17, /*->3550*/ // 7 children in Scope
/*3533*/      OPC_CheckPredicate, 24, // Predicate_SETHIimm
/*3535*/      OPC_CheckType, MVT::i32,
/*3537*/      OPC_EmitConvertToTarget, 0,
/*3539*/      OPC_EmitNodeXForm, 1, 1, // HI22
/*3542*/      OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (imm:i32)<<P:Predicate_SETHIimm>><<X:HI22>>:$src - Complexity = 4
              // Dst: (SETHIi:i32 (HI22:i32 (imm:i32):$src))
/*3550*/    /*Scope*/ 37, /*->3588*/
/*3551*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*3553*/      OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->3570
/*3556*/        OPC_EmitRegister, MVT::i32, SP::G0,
/*3559*/        OPC_EmitConvertToTarget, 0,
/*3561*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (imm:i32)<<P:Predicate_simm13>>:$val - Complexity = 4
                // Dst: (ORri:i32 G0:i32, (imm:i32):$val)
              /*SwitchType*/ 15,  MVT::i64,// ->3587
/*3572*/        OPC_EmitRegister, MVT::i64, SP::G0,
/*3575*/        OPC_EmitNodeXForm, 0, 0, // as_i32imm
/*3578*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (imm:i64)<<P:Predicate_simm13>>:$val - Complexity = 4
                // Dst: (ORri:i64 G0:i64, (as_i32imm:i32 ?:i64:$val))
              0, // EndSwitchType
/*3588*/    /*Scope*/ 15, /*->3604*/
/*3589*/      OPC_CheckPredicate, 24, // Predicate_SETHIimm
/*3591*/      OPC_CheckType, MVT::i64,
/*3593*/      OPC_EmitNodeXForm, 1, 0, // HI22
/*3596*/      OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (imm:i64)<<P:Predicate_SETHIimm>><<X:HI22>>:$val - Complexity = 4
              // Dst: (SETHIi:i64 (HI22:i32 ?:i64:$val))
/*3604*/    /*Scope*/ 29, /*->3634*/
/*3605*/      OPC_CheckPredicate, 25, // Predicate_uimm32
/*3607*/      OPC_CheckType, MVT::i64,
/*3609*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3611*/      OPC_EmitNodeXForm, 1, 0, // HI22
/*3614*/      OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*3622*/      OPC_EmitNodeXForm, 2, 0, // LO10
/*3625*/      OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (imm:i64)<<P:Predicate_uimm32>>:$val - Complexity = 4
              // Dst: (ORri:i64 (SETHIi:i32 (HI22:i32 ?:i64:$val)), (LO10:i32 ?:i64:$val))
/*3634*/    /*Scope*/ 29, /*->3664*/
/*3635*/      OPC_CheckPredicate, 26, // Predicate_nimm33
/*3637*/      OPC_CheckType, MVT::i64,
/*3639*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3641*/      OPC_EmitNodeXForm, 3, 0, // HIX22
/*3644*/      OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*3652*/      OPC_EmitNodeXForm, 4, 0, // LOX10
/*3655*/      OPC_MorphNodeTo, TARGET_VAL(SP::XORri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (imm:i64)<<P:Predicate_nimm33>>:$val - Complexity = 4
              // Dst: (XORri:i64 (SETHIi:i32 (HIX22:i32 ?:i64:$val)), (LOX10:i32 ?:i64:$val))
/*3664*/    /*Scope*/ 29, /*->3694*/
/*3665*/      OPC_CheckType, MVT::i32,
/*3667*/      OPC_EmitConvertToTarget, 0,
/*3669*/      OPC_EmitNodeXForm, 1, 1, // HI22
/*3672*/      OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*3680*/      OPC_EmitConvertToTarget, 0,
/*3682*/      OPC_EmitNodeXForm, 2, 4, // LO10
/*3685*/      OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 5, 
              // Src: (imm:i32):$val - Complexity = 3
              // Dst: (ORri:i32 (SETHIi:i32 (HI22:i32 (imm:i32):$val)), (LO10:i32 (imm:i32):$val))
/*3694*/    /*Scope*/ 71, /*->3766*/
/*3695*/      OPC_CheckType, MVT::i64,
/*3697*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3699*/      OPC_EmitNodeXForm, 5, 0, // HH22
/*3702*/      OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*3710*/      OPC_EmitNodeXForm, 6, 0, // HM10
/*3713*/      OPC_EmitNode, TARGET_VAL(SP::ORri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3,  // Results = #4
/*3722*/      OPC_EmitInteger, MVT::i32, 32, 
/*3725*/      OPC_EmitNode, TARGET_VAL(SP::SLLXri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 4, 5,  // Results = #6
/*3734*/      OPC_EmitNodeXForm, 1, 0, // HI22
/*3737*/      OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*3745*/      OPC_EmitNodeXForm, 2, 0, // LO10
/*3748*/      OPC_EmitNode, TARGET_VAL(SP::ORri), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10
/*3757*/      OPC_MorphNodeTo, TARGET_VAL(SP::ORrr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 6, 10, 
              // Src: (imm:i64):$val - Complexity = 3
              // Dst: (ORrr:i64 (SLLXri:i64 (ORri:i64 (SETHIi:i32 (HH22:i32 ?:i64:$val)), (HM10:i32 ?:i64:$val)), 32:i32), (ORri:i32 (SETHIi:i32 (HI22:i32 ?:i64:$val)), (LO10:i32 ?:i64:$val)))
/*3766*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 21,  TARGET_VAL(SPISD::FLUSHW),// ->3791
/*3770*/    OPC_RecordNode,   // #0 = 'flushw' chained node
/*3771*/    OPC_Scope, 9, /*->3782*/ // 2 children in Scope
/*3773*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*3775*/      OPC_EmitMergeInputChains1_0,
/*3776*/      OPC_MorphNodeTo, TARGET_VAL(SP::FLUSHW), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (flushw) - Complexity = 3
              // Dst: (FLUSHW)
/*3782*/    /*Scope*/ 7, /*->3790*/
/*3783*/      OPC_EmitMergeInputChains1_0,
/*3784*/      OPC_MorphNodeTo, TARGET_VAL(SP::TA3), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (flushw) - Complexity = 3
              // Dst: (TA3)
/*3790*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->3810
/*3794*/    OPC_RecordNode,   // #0 = 'br' chained node
/*3795*/    OPC_RecordChild1, // #1 = $dst
/*3796*/    OPC_MoveChild, 1,
/*3798*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3801*/    OPC_MoveParent,
/*3802*/    OPC_EmitMergeInputChains1_0,
/*3803*/    OPC_MorphNodeTo, TARGET_VAL(SP::BA), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$dst) - Complexity = 3
            // Dst: (BA (bb:Other):$dst)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::ANY_EXTEND),// ->3828
/*3813*/    OPC_RecordChild0, // #0 = $val
/*3814*/    OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3816*/    OPC_EmitInteger, MVT::i32, SP::I64RegsRegClassID,
/*3819*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (anyext:i64 i32:i32:$val) - Complexity = 3
            // Dst: (COPY_TO_REGCLASS:i64 ?:i32:$val, I64Regs:i32)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::TRUNCATE),// ->3846
/*3831*/    OPC_RecordChild0, // #0 = $val
/*3832*/    OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3834*/    OPC_EmitInteger, MVT::i32, SP::IntRegsRegClassID,
/*3837*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (trunc:i32 i64:i64:$val) - Complexity = 3
            // Dst: (COPY_TO_REGCLASS:i32 ?:i64:$val, IntRegs:i32)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::ZERO_EXTEND),// ->3864
/*3849*/    OPC_RecordChild0, // #0 = $val
/*3850*/    OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3852*/    OPC_EmitInteger, MVT::i32, 0, 
/*3855*/    OPC_MorphNodeTo, TARGET_VAL(SP::SRLri), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (zext:i64 i32:i32:$val) - Complexity = 3
            // Dst: (SRLri:i64 ?:i32:$val, 0:i32)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::SIGN_EXTEND),// ->3882
/*3867*/    OPC_RecordChild0, // #0 = $val
/*3868*/    OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3870*/    OPC_EmitInteger, MVT::i32, 0, 
/*3873*/    OPC_MorphNodeTo, TARGET_VAL(SP::SRAri), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (sext:i64 i32:i32:$val) - Complexity = 3
            // Dst: (SRAri:i64 ?:i32:$val, 0:i32)
          /*SwitchOpcode*/ 20,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->3905
/*3885*/    OPC_RecordChild0, // #0 = $val
/*3886*/    OPC_MoveChild, 1,
/*3888*/    OPC_CheckValueType, MVT::i32,
/*3890*/    OPC_MoveParent,
/*3891*/    OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3893*/    OPC_EmitInteger, MVT::i32, 0, 
/*3896*/    OPC_MorphNodeTo, TARGET_VAL(SP::SRAri), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (sext_inreg:i64 i64:i64:$val, i32:Other) - Complexity = 3
            // Dst: (SRAri:i64 ?:i64:$val, 0:i32)
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::CTPOP),// ->3931
/*3908*/    OPC_RecordChild0, // #0 = $src
/*3909*/    OPC_CheckType, MVT::i32,
/*3911*/    OPC_EmitInteger, MVT::i32, 0, 
/*3914*/    OPC_EmitNode, TARGET_VAL(SP::SLLri), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*3923*/    OPC_MorphNodeTo, TARGET_VAL(SP::POPCrr), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
            // Src: (ctpop:i32 i32:i32:$src) - Complexity = 3
            // Dst: (POPCrr:i32 (SLLri:i32 ?:i32:$src, 0:i32))
          /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::FMUL),// ->3987
/*3934*/    OPC_Scope, 23, /*->3959*/ // 2 children in Scope
/*3936*/      OPC_MoveChild, 0,
/*3938*/      OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*3941*/      OPC_RecordChild0, // #0 = $src1
/*3942*/      OPC_MoveParent,
/*3943*/      OPC_MoveChild, 1,
/*3945*/      OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*3948*/      OPC_RecordChild0, // #1 = $src2
/*3949*/      OPC_MoveParent,
/*3950*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSMULD), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f64 (fextend:f64 f32:f32:$src1), (fextend:f64 f32:f32:$src2)) - Complexity = 9
              // Dst: (FSMULD:f64 f32:f32:$src1, f32:f32:$src2)
/*3959*/    /*Scope*/ 26, /*->3986*/
/*3960*/      OPC_RecordChild0, // #0 = $src1
/*3961*/      OPC_RecordChild1, // #1 = $src2
/*3962*/      OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->3974
/*3965*/        OPC_MorphNodeTo, TARGET_VAL(SP::FMULS), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f32 f32:f32:$src1, f32:f32:$src2) - Complexity = 3
                // Dst: (FMULS:f32 f32:f32:$src1, f32:f32:$src2)
              /*SwitchType*/ 9,  MVT::f64,// ->3985
/*3976*/        OPC_MorphNodeTo, TARGET_VAL(SP::FMULD), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 f64:f64:$src1, f64:f64:$src2) - Complexity = 3
                // Dst: (FMULD:f64 f64:f64:$src1, f64:f64:$src2)
              0, // EndSwitchType
/*3986*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FNEG),// ->4029
/*3990*/    OPC_RecordChild0, // #0 = $src
/*3991*/    OPC_SwitchType /*2 cases */, 24,  MVT::f64,// ->4018
/*3994*/      OPC_Scope, 10, /*->4006*/ // 2 children in Scope
/*3996*/        OPC_CheckPatternPredicate, 2, // (!Subtarget.isV9())
/*3998*/        OPC_MorphNodeTo, TARGET_VAL(SP::FpNEGD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 f64:f64:$src) - Complexity = 3
                // Dst: (FpNEGD:f64 f64:f64:$src)
/*4006*/      /*Scope*/ 10, /*->4017*/
/*4007*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*4009*/        OPC_MorphNodeTo, TARGET_VAL(SP::FNEGD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 f64:f64:$src) - Complexity = 3
                // Dst: (FNEGD:f64 f64:f64:$src)
/*4017*/      0, /*End of Scope*/
            /*SwitchType*/ 8,  MVT::f32,// ->4028
/*4020*/      OPC_MorphNodeTo, TARGET_VAL(SP::FNEGS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fneg:f32 f32:f32:$src) - Complexity = 3
              // Dst: (FNEGS:f32 f32:f32:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FABS),// ->4071
/*4032*/    OPC_RecordChild0, // #0 = $src
/*4033*/    OPC_SwitchType /*2 cases */, 24,  MVT::f64,// ->4060
/*4036*/      OPC_Scope, 10, /*->4048*/ // 2 children in Scope
/*4038*/        OPC_CheckPatternPredicate, 2, // (!Subtarget.isV9())
/*4040*/        OPC_MorphNodeTo, TARGET_VAL(SP::FpABSD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fabs:f64 f64:f64:$src) - Complexity = 3
                // Dst: (FpABSD:f64 f64:f64:$src)
/*4048*/      /*Scope*/ 10, /*->4059*/
/*4049*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*4051*/        OPC_MorphNodeTo, TARGET_VAL(SP::FABSD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fabs:f64 f64:f64:$src) - Complexity = 3
                // Dst: (FABSD:f64 f64:f64:$src)
/*4059*/      0, /*End of Scope*/
            /*SwitchType*/ 8,  MVT::f32,// ->4070
/*4062*/      OPC_MorphNodeTo, TARGET_VAL(SP::FABSS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 f32:f32:$src) - Complexity = 3
              // Dst: (FABSS:f32 f32:f32:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(SPISD::ITOF),// ->4097
/*4074*/    OPC_RecordChild0, // #0 = $src
/*4075*/    OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->4086
/*4078*/      OPC_MorphNodeTo, TARGET_VAL(SP::FITOS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (SPitof:f32 FPRegs:f32:$src) - Complexity = 3
              // Dst: (FITOS:f32 FPRegs:f32:$src)
            /*SwitchType*/ 8,  MVT::f64,// ->4096
/*4088*/      OPC_MorphNodeTo, TARGET_VAL(SP::FITOD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (SPitof:f64 FPRegs:f32:$src) - Complexity = 3
              // Dst: (FITOD:f64 FPRegs:f32:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 25,  TARGET_VAL(SPISD::FTOI),// ->4125
/*4100*/    OPC_RecordChild0, // #0 = $src
/*4101*/    OPC_Scope, 10, /*->4113*/ // 2 children in Scope
/*4103*/      OPC_CheckChild0Type, MVT::f32,
/*4105*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSTOI), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (SPftoi:f32 FPRegs:f32:$src) - Complexity = 3
              // Dst: (FSTOI:f32 FPRegs:f32:$src)
/*4113*/    /*Scope*/ 10, /*->4124*/
/*4114*/      OPC_CheckChild0Type, MVT::f64,
/*4116*/      OPC_MorphNodeTo, TARGET_VAL(SP::FDTOI), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (SPftoi:f32 DFPRegs:f64:$src) - Complexity = 3
              // Dst: (FDTOI:f32 DFPRegs:f64:$src)
/*4124*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::FP_EXTEND),// ->4137
/*4128*/    OPC_RecordChild0, // #0 = $src
/*4129*/    OPC_MorphNodeTo, TARGET_VAL(SP::FSTOD), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (fextend:f64 f32:f32:$src) - Complexity = 3
            // Dst: (FSTOD:f64 f32:f32:$src)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::FP_ROUND),// ->4149
/*4140*/    OPC_RecordChild0, // #0 = $src
/*4141*/    OPC_MorphNodeTo, TARGET_VAL(SP::FDTOS), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (fround:f32 f64:f64:$src) - Complexity = 3
            // Dst: (FDTOS:f32 f64:f64:$src)
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FSQRT),// ->4175
/*4152*/    OPC_RecordChild0, // #0 = $src
/*4153*/    OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->4164
/*4156*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSQRTS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f32 f32:f32:$src) - Complexity = 3
              // Dst: (FSQRTS:f32 f32:f32:$src)
            /*SwitchType*/ 8,  MVT::f64,// ->4174
/*4166*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSQRTD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f64 f64:f64:$src) - Complexity = 3
              // Dst: (FSQRTD:f64 f64:f64:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::FADD),// ->4204
/*4178*/    OPC_RecordChild0, // #0 = $src1
/*4179*/    OPC_RecordChild1, // #1 = $src2
/*4180*/    OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->4192
/*4183*/      OPC_MorphNodeTo, TARGET_VAL(SP::FADDS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f32 f32:f32:$src1, f32:f32:$src2) - Complexity = 3
              // Dst: (FADDS:f32 f32:f32:$src1, f32:f32:$src2)
            /*SwitchType*/ 9,  MVT::f64,// ->4203
/*4194*/      OPC_MorphNodeTo, TARGET_VAL(SP::FADDD), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f64 f64:f64:$src1, f64:f64:$src2) - Complexity = 3
              // Dst: (FADDD:f64 f64:f64:$src1, f64:f64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::FSUB),// ->4233
/*4207*/    OPC_RecordChild0, // #0 = $src1
/*4208*/    OPC_RecordChild1, // #1 = $src2
/*4209*/    OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->4221
/*4212*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSUBS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f32 f32:f32:$src1, f32:f32:$src2) - Complexity = 3
              // Dst: (FSUBS:f32 f32:f32:$src1, f32:f32:$src2)
            /*SwitchType*/ 9,  MVT::f64,// ->4232
/*4223*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSUBD), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f64 f64:f64:$src1, f64:f64:$src2) - Complexity = 3
              // Dst: (FSUBD:f64 f64:f64:$src1, f64:f64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::FDIV),// ->4262
/*4236*/    OPC_RecordChild0, // #0 = $src1
/*4237*/    OPC_RecordChild1, // #1 = $src2
/*4238*/    OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->4250
/*4241*/      OPC_MorphNodeTo, TARGET_VAL(SP::FDIVS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f32 f32:f32:$src1, f32:f32:$src2) - Complexity = 3
              // Dst: (FDIVS:f32 f32:f32:$src1, f32:f32:$src2)
            /*SwitchType*/ 9,  MVT::f64,// ->4261
/*4252*/      OPC_MorphNodeTo, TARGET_VAL(SP::FDIVD), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f64 f64:f64:$src1, f64:f64:$src2) - Complexity = 3
              // Dst: (FDIVD:f64 f64:f64:$src1, f64:f64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 27,  TARGET_VAL(SPISD::CMPFCC),// ->4292
/*4265*/    OPC_RecordChild0, // #0 = $src1
/*4266*/    OPC_Scope, 11, /*->4279*/ // 2 children in Scope
/*4268*/      OPC_CheckChild0Type, MVT::f32,
/*4270*/      OPC_RecordChild1, // #1 = $src2
/*4271*/      OPC_MorphNodeTo, TARGET_VAL(SP::FCMPS), 0|OPFL_GlueOutput,
                  0/*#VTs*/, 2/*#Ops*/, 0, 1, 
              // Src: (SPcmpfcc f32:f32:$src1, f32:f32:$src2) - Complexity = 3
              // Dst: (FCMPS f32:f32:$src1, f32:f32:$src2)
/*4279*/    /*Scope*/ 11, /*->4291*/
/*4280*/      OPC_CheckChild0Type, MVT::f64,
/*4282*/      OPC_RecordChild1, // #1 = $src2
/*4283*/      OPC_MorphNodeTo, TARGET_VAL(SP::FCMPD), 0|OPFL_GlueOutput,
                  0/*#VTs*/, 2/*#Ops*/, 0, 1, 
              // Src: (SPcmpfcc f64:f64:$src1, f64:f64:$src2) - Complexity = 3
              // Dst: (FCMPD f64:f64:$src1, f64:f64:$src2)
/*4291*/    0, /*End of Scope*/
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 4294 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 79
  // #OPC_RecordNode                     = 13
  // #OPC_RecordChild                    = 117
  // #OPC_RecordMemRef                   = 2
  // #OPC_CaptureGlueInput               = 11
  // #OPC_MoveChild                      = 64
  // #OPC_MoveParent                     = 74
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 81
  // #OPC_CheckPredicate                 = 74
  // #OPC_CheckOpcode                    = 49
  // #OPC_SwitchOpcode                   = 6
  // #OPC_CheckType                      = 68
  // #OPC_SwitchType                     = 30
  // #OPC_CheckChildType                 = 11
  // #OPC_CheckInteger                   = 9
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 1
  // #OPC_CheckComplexPat                = 63
  // #OPC_CheckAndImm                    = 1
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 6
  // #OPC_EmitStringInteger              = 2
  // #OPC_EmitRegister                   = 4
  // #OPC_EmitConvertToTarget            = 55
  // #OPC_EmitMergeInputChains           = 73
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 9
  // #OPC_EmitNodeXForm                  = 22
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 215

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (Subtarget.is64Bit());
  case 1: return (Subtarget.isV9());
  case 2: return (!Subtarget.isV9());
  }
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 1: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 2: { // Predicate_sextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 3: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 4: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 5: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 6: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 7: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 8: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 9: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 10: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 11: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 12: { // Predicate_zextloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 13: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 14: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 15: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 16: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 17: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 18: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 19: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 20: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 21: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 22: { // Predicate_simm13
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<13>(N->getSExtValue()); 
  }
  case 23: { // Predicate_simm11
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<11>(N->getSExtValue()); 
  }
  case 24: { // Predicate_SETHIimm
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isShiftedUInt<22, 10>(N->getZExtValue());

  }
  case 25: { // Predicate_uimm32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isUInt<32>(N->getZExtValue()); 
  }
  case 26: { // Predicate_nimm33
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  int64_t Imm = N->getSExtValue();
  return Imm < 0 && isInt<33>(Imm);

  }
  }
}

virtual bool CheckComplexPattern(SDNode *Root, SDNode *Parent,
                                 SDValue N, unsigned PatternNo,
         SmallVectorImpl<std::pair<SDValue, SDNode*> > &Result) {
  unsigned NextRes = Result.size();
  switch (PatternNo) {
  default: llvm_unreachable("Invalid pattern # in table?");
  case 0:
    Result.resize(NextRes+2);
    return SelectADDRrr(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectADDRri(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // as_i32imm
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(N->getSExtValue(), MVT::i32);

  }
  case 1: {  // HI22
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  return CurDAG->getTargetConstant((unsigned)N->getZExtValue() >> 10, MVT::i32);

  }
  case 2: {  // LO10
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant((unsigned)N->getZExtValue() & 1023,
                                   MVT::i32);

  }
  case 3: {  // HIX22
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Val = (~N->getZExtValue() >> 10) & ((1u << 22) - 1);
  return CurDAG->getTargetConstant(Val, MVT::i32);

  }
  case 4: {  // LOX10
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(~(~N->getZExtValue() & 0x3ff), MVT::i32);

  }
  case 5: {  // HH22
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Val = (N->getZExtValue() >> 42) & ((1u << 22) - 1);
  return CurDAG->getTargetConstant(Val, MVT::i32);

  }
  case 6: {  // HM10
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Val = (N->getZExtValue() >> 32) & ((1u << 10) - 1);
  return CurDAG->getTargetConstant(Val, MVT::i32);

  }
  }
}

