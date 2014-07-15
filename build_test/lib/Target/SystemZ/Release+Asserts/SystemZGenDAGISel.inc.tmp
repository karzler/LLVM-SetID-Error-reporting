/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the SystemZ target                             *|
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
/*0*/     OPC_SwitchOpcode /*82 cases */, 116|128,18/*2420*/,  TARGET_VAL(ISD::STORE),// ->2425
/*5*/       OPC_RecordMemRef,
/*6*/       OPC_RecordNode,   // #0 = 'st' chained node
/*7*/       OPC_Scope, 86|128,13/*1750*/, /*->1760*/ // 2 children in Scope
/*10*/        OPC_MoveChild, 1,
/*12*/        OPC_SwitchOpcode /*5 cases */, 98,  TARGET_VAL(ISD::ADD),// ->114
/*16*/          OPC_MoveChild, 0,
/*18*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*21*/          OPC_RecordMemRef,
/*22*/          OPC_RecordNode, // #1 = 'ld' chained node
/*23*/          OPC_CheckFoldableChainNode,
/*24*/          OPC_RecordChild1, // #2 = $BD1
/*25*/          OPC_CheckChild1Type, MVT::i64,
/*27*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*29*/          OPC_CheckPredicate, 1, // Predicate_load
/*31*/          OPC_MoveParent,
/*32*/          OPC_RecordChild1, // #3 = $I2
/*33*/          OPC_MoveChild, 1,
/*35*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38*/          OPC_Scope, 36, /*->76*/ // 2 children in Scope
/*40*/            OPC_CheckPredicate, 2, // Predicate_imm32sx8
/*42*/            OPC_MoveParent,
/*43*/            OPC_CheckType, MVT::i32,
/*45*/            OPC_MoveParent,
/*46*/            OPC_MoveChild, 2,
/*48*/            OPC_CheckSame, 2,
/*50*/            OPC_MoveParent,
/*51*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*53*/            OPC_CheckPredicate, 4, // Predicate_store
/*55*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDAddr20Only:$BD1 #4 #5
/*58*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*62*/            OPC_EmitConvertToTarget, 3,
/*64*/            OPC_EmitNodeXForm, 0, 6, // SIMM8
/*67*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::ASI), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                  // Src: (st (add:i32 (ld:i32 bdaddr20only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32)<<P:Predicate_imm32sx8>><<X:SIMM8>>:$I2), bdaddr20only:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 33
                  // Dst: (ASI bdaddr20only:i64:$BD1, (SIMM8:i32 (imm:i32):$I2))
/*76*/          /*Scope*/ 36, /*->113*/
/*77*/            OPC_CheckPredicate, 5, // Predicate_imm64sx8
/*79*/            OPC_MoveParent,
/*80*/            OPC_CheckType, MVT::i64,
/*82*/            OPC_MoveParent,
/*83*/            OPC_MoveChild, 2,
/*85*/            OPC_CheckSame, 2,
/*87*/            OPC_MoveParent,
/*88*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*90*/            OPC_CheckPredicate, 4, // Predicate_store
/*92*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDAddr20Only:$BD1 #4 #5
/*95*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*99*/            OPC_EmitConvertToTarget, 3,
/*101*/           OPC_EmitNodeXForm, 0, 6, // SIMM8
/*104*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGSI), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                  // Src: (st (add:i64 (ld:i64 bdaddr20only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i64)<<P:Predicate_imm64sx8>><<X:SIMM8>>:$I2), bdaddr20only:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 33
                  // Dst: (AGSI bdaddr20only:i64:$BD1, (SIMM8:i64 (imm:i64):$I2))
/*113*/         0, /*End of Scope*/
              /*SwitchOpcode*/ 13|128,4/*525*/,  TARGET_VAL(ISD::AND),// ->643
/*118*/         OPC_MoveChild, 0,
/*120*/         OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*123*/         OPC_RecordMemRef,
/*124*/         OPC_RecordNode, // #1 = 'ld' chained node
/*125*/         OPC_CheckFoldableChainNode,
/*126*/         OPC_RecordChild1, // #2 = $addr
/*127*/         OPC_CheckChild1Type, MVT::i64,
/*129*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*131*/         OPC_Scope, 84, /*->217*/ // 6 children in Scope
/*133*/           OPC_CheckPredicate, 6, // Predicate_zextload
/*135*/           OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*137*/           OPC_MoveParent,
/*138*/           OPC_RecordChild1, // #3 = $src
/*139*/           OPC_MoveChild, 1,
/*141*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*144*/           OPC_MoveParent,
/*145*/           OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->181
/*148*/             OPC_MoveParent,
/*149*/             OPC_MoveChild, 2,
/*151*/             OPC_CheckSame, 2,
/*153*/             OPC_MoveParent,
/*154*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*156*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*158*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*160*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*163*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*167*/             OPC_EmitConvertToTarget, 3,
/*169*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*172*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::NI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->216
/*183*/             OPC_MoveParent,
/*184*/             OPC_MoveChild, 2,
/*186*/             OPC_CheckSame, 2,
/*188*/             OPC_MoveParent,
/*189*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*191*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*193*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*195*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*198*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*202*/             OPC_EmitConvertToTarget, 3,
/*204*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*207*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::NI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*217*/         /*Scope*/ 84, /*->302*/
/*218*/           OPC_CheckPredicate, 10, // Predicate_sextload
/*220*/           OPC_CheckPredicate, 11, // Predicate_sextloadi8
/*222*/           OPC_MoveParent,
/*223*/           OPC_RecordChild1, // #3 = $src
/*224*/           OPC_MoveChild, 1,
/*226*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*229*/           OPC_MoveParent,
/*230*/           OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->266
/*233*/             OPC_MoveParent,
/*234*/             OPC_MoveChild, 2,
/*236*/             OPC_CheckSame, 2,
/*238*/             OPC_MoveParent,
/*239*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*241*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*243*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*245*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*248*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*252*/             OPC_EmitConvertToTarget, 3,
/*254*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*257*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::NI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->301
/*268*/             OPC_MoveParent,
/*269*/             OPC_MoveChild, 2,
/*271*/             OPC_CheckSame, 2,
/*273*/             OPC_MoveParent,
/*274*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*276*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*278*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*280*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*283*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*287*/             OPC_EmitConvertToTarget, 3,
/*289*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*292*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::NI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*302*/         /*Scope*/ 84, /*->387*/
/*303*/           OPC_CheckPredicate, 12, // Predicate_extload
/*305*/           OPC_CheckPredicate, 13, // Predicate_extloadi8
/*307*/           OPC_MoveParent,
/*308*/           OPC_RecordChild1, // #3 = $src
/*309*/           OPC_MoveChild, 1,
/*311*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*314*/           OPC_MoveParent,
/*315*/           OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->351
/*318*/             OPC_MoveParent,
/*319*/             OPC_MoveChild, 2,
/*321*/             OPC_CheckSame, 2,
/*323*/             OPC_MoveParent,
/*324*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*326*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*328*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*330*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*333*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*337*/             OPC_EmitConvertToTarget, 3,
/*339*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*342*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::NI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->386
/*353*/             OPC_MoveParent,
/*354*/             OPC_MoveChild, 2,
/*356*/             OPC_CheckSame, 2,
/*358*/             OPC_MoveParent,
/*359*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*361*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*363*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*365*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*368*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*372*/             OPC_EmitConvertToTarget, 3,
/*374*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*377*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::NI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*387*/         /*Scope*/ 84, /*->472*/
/*388*/           OPC_CheckPredicate, 6, // Predicate_zextload
/*390*/           OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*392*/           OPC_MoveParent,
/*393*/           OPC_RecordChild1, // #3 = $src
/*394*/           OPC_MoveChild, 1,
/*396*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*399*/           OPC_MoveParent,
/*400*/           OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->436
/*403*/             OPC_MoveParent,
/*404*/             OPC_MoveChild, 2,
/*406*/             OPC_CheckSame, 2,
/*408*/             OPC_MoveParent,
/*409*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*411*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*413*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*415*/             OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*418*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*422*/             OPC_EmitConvertToTarget, 3,
/*424*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*427*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->471
/*438*/             OPC_MoveParent,
/*439*/             OPC_MoveChild, 2,
/*441*/             OPC_CheckSame, 2,
/*443*/             OPC_MoveParent,
/*444*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*446*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*448*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*450*/             OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*453*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*457*/             OPC_EmitConvertToTarget, 3,
/*459*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*462*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*472*/         /*Scope*/ 84, /*->557*/
/*473*/           OPC_CheckPredicate, 10, // Predicate_sextload
/*475*/           OPC_CheckPredicate, 11, // Predicate_sextloadi8
/*477*/           OPC_MoveParent,
/*478*/           OPC_RecordChild1, // #3 = $src
/*479*/           OPC_MoveChild, 1,
/*481*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*484*/           OPC_MoveParent,
/*485*/           OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->521
/*488*/             OPC_MoveParent,
/*489*/             OPC_MoveChild, 2,
/*491*/             OPC_CheckSame, 2,
/*493*/             OPC_MoveParent,
/*494*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*496*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*498*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*500*/             OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*503*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*507*/             OPC_EmitConvertToTarget, 3,
/*509*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*512*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->556
/*523*/             OPC_MoveParent,
/*524*/             OPC_MoveChild, 2,
/*526*/             OPC_CheckSame, 2,
/*528*/             OPC_MoveParent,
/*529*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*531*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*533*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*535*/             OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*538*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*542*/             OPC_EmitConvertToTarget, 3,
/*544*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*547*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*557*/         /*Scope*/ 84, /*->642*/
/*558*/           OPC_CheckPredicate, 12, // Predicate_extload
/*560*/           OPC_CheckPredicate, 13, // Predicate_extloadi8
/*562*/           OPC_MoveParent,
/*563*/           OPC_RecordChild1, // #3 = $src
/*564*/           OPC_MoveChild, 1,
/*566*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*569*/           OPC_MoveParent,
/*570*/           OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->606
/*573*/             OPC_MoveParent,
/*574*/             OPC_MoveChild, 2,
/*576*/             OPC_CheckSame, 2,
/*578*/             OPC_MoveParent,
/*579*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*581*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*583*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*585*/             OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*588*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*592*/             OPC_EmitConvertToTarget, 3,
/*594*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*597*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->641
/*608*/             OPC_MoveParent,
/*609*/             OPC_MoveChild, 2,
/*611*/             OPC_CheckSame, 2,
/*613*/             OPC_MoveParent,
/*614*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*616*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*618*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*620*/             OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*623*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*627*/             OPC_EmitConvertToTarget, 3,
/*629*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*632*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*642*/         0, /*End of Scope*/
              /*SwitchOpcode*/ 13|128,4/*525*/,  TARGET_VAL(ISD::OR),// ->1172
/*647*/         OPC_MoveChild, 0,
/*649*/         OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*652*/         OPC_RecordMemRef,
/*653*/         OPC_RecordNode, // #1 = 'ld' chained node
/*654*/         OPC_CheckFoldableChainNode,
/*655*/         OPC_RecordChild1, // #2 = $addr
/*656*/         OPC_CheckChild1Type, MVT::i64,
/*658*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*660*/         OPC_Scope, 84, /*->746*/ // 6 children in Scope
/*662*/           OPC_CheckPredicate, 6, // Predicate_zextload
/*664*/           OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*666*/           OPC_MoveParent,
/*667*/           OPC_RecordChild1, // #3 = $src
/*668*/           OPC_MoveChild, 1,
/*670*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*673*/           OPC_MoveParent,
/*674*/           OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->710
/*677*/             OPC_MoveParent,
/*678*/             OPC_MoveChild, 2,
/*680*/             OPC_CheckSame, 2,
/*682*/             OPC_MoveParent,
/*683*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*685*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*687*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*689*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*692*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*696*/             OPC_EmitConvertToTarget, 3,
/*698*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*701*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::OI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->745
/*712*/             OPC_MoveParent,
/*713*/             OPC_MoveChild, 2,
/*715*/             OPC_CheckSame, 2,
/*717*/             OPC_MoveParent,
/*718*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*720*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*722*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*724*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*727*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*731*/             OPC_EmitConvertToTarget, 3,
/*733*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*736*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::OI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*746*/         /*Scope*/ 84, /*->831*/
/*747*/           OPC_CheckPredicate, 10, // Predicate_sextload
/*749*/           OPC_CheckPredicate, 11, // Predicate_sextloadi8
/*751*/           OPC_MoveParent,
/*752*/           OPC_RecordChild1, // #3 = $src
/*753*/           OPC_MoveChild, 1,
/*755*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*758*/           OPC_MoveParent,
/*759*/           OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->795
/*762*/             OPC_MoveParent,
/*763*/             OPC_MoveChild, 2,
/*765*/             OPC_CheckSame, 2,
/*767*/             OPC_MoveParent,
/*768*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*770*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*772*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*774*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*777*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*781*/             OPC_EmitConvertToTarget, 3,
/*783*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*786*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::OI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->830
/*797*/             OPC_MoveParent,
/*798*/             OPC_MoveChild, 2,
/*800*/             OPC_CheckSame, 2,
/*802*/             OPC_MoveParent,
/*803*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*805*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*807*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*809*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*812*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*816*/             OPC_EmitConvertToTarget, 3,
/*818*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*821*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::OI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*831*/         /*Scope*/ 84, /*->916*/
/*832*/           OPC_CheckPredicate, 12, // Predicate_extload
/*834*/           OPC_CheckPredicate, 13, // Predicate_extloadi8
/*836*/           OPC_MoveParent,
/*837*/           OPC_RecordChild1, // #3 = $src
/*838*/           OPC_MoveChild, 1,
/*840*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*843*/           OPC_MoveParent,
/*844*/           OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->880
/*847*/             OPC_MoveParent,
/*848*/             OPC_MoveChild, 2,
/*850*/             OPC_CheckSame, 2,
/*852*/             OPC_MoveParent,
/*853*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*855*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*857*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*859*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*862*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*866*/             OPC_EmitConvertToTarget, 3,
/*868*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*871*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::OI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->915
/*882*/             OPC_MoveParent,
/*883*/             OPC_MoveChild, 2,
/*885*/             OPC_CheckSame, 2,
/*887*/             OPC_MoveParent,
/*888*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*890*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*892*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*894*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*897*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*901*/             OPC_EmitConvertToTarget, 3,
/*903*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*906*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::OI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*916*/         /*Scope*/ 84, /*->1001*/
/*917*/           OPC_CheckPredicate, 6, // Predicate_zextload
/*919*/           OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*921*/           OPC_MoveParent,
/*922*/           OPC_RecordChild1, // #3 = $src
/*923*/           OPC_MoveChild, 1,
/*925*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*928*/           OPC_MoveParent,
/*929*/           OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->965
/*932*/             OPC_MoveParent,
/*933*/             OPC_MoveChild, 2,
/*935*/             OPC_CheckSame, 2,
/*937*/             OPC_MoveParent,
/*938*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*940*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*942*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*944*/             OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*947*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*951*/             OPC_EmitConvertToTarget, 3,
/*953*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*956*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->1000
/*967*/             OPC_MoveParent,
/*968*/             OPC_MoveChild, 2,
/*970*/             OPC_CheckSame, 2,
/*972*/             OPC_MoveParent,
/*973*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*975*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*977*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*979*/             OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*982*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*986*/             OPC_EmitConvertToTarget, 3,
/*988*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*991*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*1001*/        /*Scope*/ 84, /*->1086*/
/*1002*/          OPC_CheckPredicate, 10, // Predicate_sextload
/*1004*/          OPC_CheckPredicate, 11, // Predicate_sextloadi8
/*1006*/          OPC_MoveParent,
/*1007*/          OPC_RecordChild1, // #3 = $src
/*1008*/          OPC_MoveChild, 1,
/*1010*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1013*/          OPC_MoveParent,
/*1014*/          OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->1050
/*1017*/            OPC_MoveParent,
/*1018*/            OPC_MoveChild, 2,
/*1020*/            OPC_CheckSame, 2,
/*1022*/            OPC_MoveParent,
/*1023*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1025*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1027*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1029*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1032*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1036*/            OPC_EmitConvertToTarget, 3,
/*1038*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1041*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->1085
/*1052*/            OPC_MoveParent,
/*1053*/            OPC_MoveChild, 2,
/*1055*/            OPC_CheckSame, 2,
/*1057*/            OPC_MoveParent,
/*1058*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1060*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1062*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1064*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1067*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1071*/            OPC_EmitConvertToTarget, 3,
/*1073*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1076*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*1086*/        /*Scope*/ 84, /*->1171*/
/*1087*/          OPC_CheckPredicate, 12, // Predicate_extload
/*1089*/          OPC_CheckPredicate, 13, // Predicate_extloadi8
/*1091*/          OPC_MoveParent,
/*1092*/          OPC_RecordChild1, // #3 = $src
/*1093*/          OPC_MoveChild, 1,
/*1095*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1098*/          OPC_MoveParent,
/*1099*/          OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->1135
/*1102*/            OPC_MoveParent,
/*1103*/            OPC_MoveChild, 2,
/*1105*/            OPC_CheckSame, 2,
/*1107*/            OPC_MoveParent,
/*1108*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1110*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1112*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1114*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1117*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1121*/            OPC_EmitConvertToTarget, 3,
/*1123*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1126*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->1170
/*1137*/            OPC_MoveParent,
/*1138*/            OPC_MoveChild, 2,
/*1140*/            OPC_CheckSame, 2,
/*1142*/            OPC_MoveParent,
/*1143*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1145*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1147*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1149*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1152*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1156*/            OPC_EmitConvertToTarget, 3,
/*1158*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1161*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*1171*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 13|128,4/*525*/,  TARGET_VAL(ISD::XOR),// ->1701
/*1176*/        OPC_MoveChild, 0,
/*1178*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1181*/        OPC_RecordMemRef,
/*1182*/        OPC_RecordNode, // #1 = 'ld' chained node
/*1183*/        OPC_CheckFoldableChainNode,
/*1184*/        OPC_RecordChild1, // #2 = $addr
/*1185*/        OPC_CheckChild1Type, MVT::i64,
/*1187*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1189*/        OPC_Scope, 84, /*->1275*/ // 6 children in Scope
/*1191*/          OPC_CheckPredicate, 6, // Predicate_zextload
/*1193*/          OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*1195*/          OPC_MoveParent,
/*1196*/          OPC_RecordChild1, // #3 = $src
/*1197*/          OPC_MoveChild, 1,
/*1199*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1202*/          OPC_MoveParent,
/*1203*/          OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->1239
/*1206*/            OPC_MoveParent,
/*1207*/            OPC_MoveChild, 2,
/*1209*/            OPC_CheckSame, 2,
/*1211*/            OPC_MoveParent,
/*1212*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1214*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1216*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1218*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1221*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1225*/            OPC_EmitConvertToTarget, 3,
/*1227*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1230*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->1274
/*1241*/            OPC_MoveParent,
/*1242*/            OPC_MoveChild, 2,
/*1244*/            OPC_CheckSame, 2,
/*1246*/            OPC_MoveParent,
/*1247*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1249*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1251*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1253*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1256*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1260*/            OPC_EmitConvertToTarget, 3,
/*1262*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1265*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*1275*/        /*Scope*/ 84, /*->1360*/
/*1276*/          OPC_CheckPredicate, 10, // Predicate_sextload
/*1278*/          OPC_CheckPredicate, 11, // Predicate_sextloadi8
/*1280*/          OPC_MoveParent,
/*1281*/          OPC_RecordChild1, // #3 = $src
/*1282*/          OPC_MoveChild, 1,
/*1284*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1287*/          OPC_MoveParent,
/*1288*/          OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->1324
/*1291*/            OPC_MoveParent,
/*1292*/            OPC_MoveChild, 2,
/*1294*/            OPC_CheckSame, 2,
/*1296*/            OPC_MoveParent,
/*1297*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1299*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1301*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1303*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1306*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1310*/            OPC_EmitConvertToTarget, 3,
/*1312*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1315*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->1359
/*1326*/            OPC_MoveParent,
/*1327*/            OPC_MoveChild, 2,
/*1329*/            OPC_CheckSame, 2,
/*1331*/            OPC_MoveParent,
/*1332*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1334*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1336*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1338*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1341*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1345*/            OPC_EmitConvertToTarget, 3,
/*1347*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1350*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*1360*/        /*Scope*/ 84, /*->1445*/
/*1361*/          OPC_CheckPredicate, 12, // Predicate_extload
/*1363*/          OPC_CheckPredicate, 13, // Predicate_extloadi8
/*1365*/          OPC_MoveParent,
/*1366*/          OPC_RecordChild1, // #3 = $src
/*1367*/          OPC_MoveChild, 1,
/*1369*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1372*/          OPC_MoveParent,
/*1373*/          OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->1409
/*1376*/            OPC_MoveParent,
/*1377*/            OPC_MoveChild, 2,
/*1379*/            OPC_CheckSame, 2,
/*1381*/            OPC_MoveParent,
/*1382*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1384*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1386*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1388*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1391*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1395*/            OPC_EmitConvertToTarget, 3,
/*1397*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1400*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->1444
/*1411*/            OPC_MoveParent,
/*1412*/            OPC_MoveChild, 2,
/*1414*/            OPC_CheckSame, 2,
/*1416*/            OPC_MoveParent,
/*1417*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1419*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1421*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1423*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1426*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1430*/            OPC_EmitConvertToTarget, 3,
/*1432*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1435*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*1445*/        /*Scope*/ 84, /*->1530*/
/*1446*/          OPC_CheckPredicate, 6, // Predicate_zextload
/*1448*/          OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*1450*/          OPC_MoveParent,
/*1451*/          OPC_RecordChild1, // #3 = $src
/*1452*/          OPC_MoveChild, 1,
/*1454*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1457*/          OPC_MoveParent,
/*1458*/          OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->1494
/*1461*/            OPC_MoveParent,
/*1462*/            OPC_MoveChild, 2,
/*1464*/            OPC_CheckSame, 2,
/*1466*/            OPC_MoveParent,
/*1467*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1469*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1471*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1473*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1476*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1480*/            OPC_EmitConvertToTarget, 3,
/*1482*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1485*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->1529
/*1496*/            OPC_MoveParent,
/*1497*/            OPC_MoveChild, 2,
/*1499*/            OPC_CheckSame, 2,
/*1501*/            OPC_MoveParent,
/*1502*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1504*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1506*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1508*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1511*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1515*/            OPC_EmitConvertToTarget, 3,
/*1517*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1520*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*1530*/        /*Scope*/ 84, /*->1615*/
/*1531*/          OPC_CheckPredicate, 10, // Predicate_sextload
/*1533*/          OPC_CheckPredicate, 11, // Predicate_sextloadi8
/*1535*/          OPC_MoveParent,
/*1536*/          OPC_RecordChild1, // #3 = $src
/*1537*/          OPC_MoveChild, 1,
/*1539*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1542*/          OPC_MoveParent,
/*1543*/          OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->1579
/*1546*/            OPC_MoveParent,
/*1547*/            OPC_MoveChild, 2,
/*1549*/            OPC_CheckSame, 2,
/*1551*/            OPC_MoveParent,
/*1552*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1554*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1556*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1558*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1561*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1565*/            OPC_EmitConvertToTarget, 3,
/*1567*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1570*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->1614
/*1581*/            OPC_MoveParent,
/*1582*/            OPC_MoveChild, 2,
/*1584*/            OPC_CheckSame, 2,
/*1586*/            OPC_MoveParent,
/*1587*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1589*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1591*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1593*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1596*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1600*/            OPC_EmitConvertToTarget, 3,
/*1602*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1605*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*1615*/        /*Scope*/ 84, /*->1700*/
/*1616*/          OPC_CheckPredicate, 12, // Predicate_extload
/*1618*/          OPC_CheckPredicate, 13, // Predicate_extloadi8
/*1620*/          OPC_MoveParent,
/*1621*/          OPC_RecordChild1, // #3 = $src
/*1622*/          OPC_MoveChild, 1,
/*1624*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1627*/          OPC_MoveParent,
/*1628*/          OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->1664
/*1631*/            OPC_MoveParent,
/*1632*/            OPC_MoveChild, 2,
/*1634*/            OPC_CheckSame, 2,
/*1636*/            OPC_MoveParent,
/*1637*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1639*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1641*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1643*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1646*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1650*/            OPC_EmitConvertToTarget, 3,
/*1652*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1655*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->1699
/*1666*/            OPC_MoveParent,
/*1667*/            OPC_MoveChild, 2,
/*1669*/            OPC_CheckSame, 2,
/*1671*/            OPC_MoveParent,
/*1672*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1674*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1676*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1678*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1681*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1685*/            OPC_EmitConvertToTarget, 3,
/*1687*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1690*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*1700*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 55,  TARGET_VAL(ISD::BSWAP),// ->1759
/*1704*/        OPC_RecordChild0, // #1 = $R1
/*1705*/        OPC_SwitchType /*2 cases */, 24,  MVT::i32,// ->1732
/*1708*/          OPC_MoveParent,
/*1709*/          OPC_RecordChild2, // #2 = $XBD2
/*1710*/          OPC_CheckChild2Type, MVT::i64,
/*1712*/          OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1714*/          OPC_CheckPredicate, 4, // Predicate_store
/*1716*/          OPC_CheckPredicate, 14, // Predicate_nonvolatile_store
/*1718*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*1721*/          OPC_EmitMergeInputChains1_0,
/*1722*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STRV), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st (bswap:i32 GR32:i32:$R1), bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 19
                  // Dst: (STRV GR32:i32:$R1, bdxaddr20only:i64:$XBD2)
                /*SwitchType*/ 24,  MVT::i64,// ->1758
/*1734*/          OPC_MoveParent,
/*1735*/          OPC_RecordChild2, // #2 = $XBD2
/*1736*/          OPC_CheckChild2Type, MVT::i64,
/*1738*/          OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1740*/          OPC_CheckPredicate, 4, // Predicate_store
/*1742*/          OPC_CheckPredicate, 14, // Predicate_nonvolatile_store
/*1744*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*1747*/          OPC_EmitMergeInputChains1_0,
/*1748*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STRVG), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st (bswap:i64 GR64:i64:$R1), bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 19
                  // Dst: (STRVG GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*1760*/    /*Scope*/ 22|128,5/*662*/, /*->2424*/
/*1762*/      OPC_RecordChild1, // #1 = $R1
/*1763*/      OPC_Scope, 23, /*->1788*/ // 12 children in Scope
/*1765*/        OPC_CheckChild1Type, MVT::i32,
/*1767*/        OPC_RecordChild2, // #2 = $I2
/*1768*/        OPC_CheckChild2Type, MVT::i64,
/*1770*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1772*/        OPC_CheckPredicate, 4, // Predicate_store
/*1774*/        OPC_CheckPredicate, 15, // Predicate_aligned_store
/*1776*/        OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$I2 #3
/*1779*/        OPC_EmitMergeInputChains1_0,
/*1780*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::STRL32), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (st GR32:i32:$R1, pcrel32:i64:$I2)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_aligned_store>> - Complexity = 17
                // Dst: (STRL32 GR32:i32:$R1, pcrel32:i64:$I2)
/*1788*/      /*Scope*/ 23, /*->1812*/
/*1789*/        OPC_CheckChild1Type, MVT::i64,
/*1791*/        OPC_RecordChild2, // #2 = $I2
/*1792*/        OPC_CheckChild2Type, MVT::i64,
/*1794*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1796*/        OPC_CheckPredicate, 4, // Predicate_store
/*1798*/        OPC_CheckPredicate, 15, // Predicate_aligned_store
/*1800*/        OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$I2 #3
/*1803*/        OPC_EmitMergeInputChains1_0,
/*1804*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::STGRL), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (st GR64:i64:$R1, pcrel32:i64:$I2)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_aligned_store>> - Complexity = 17
                // Dst: (STGRL GR64:i64:$R1, pcrel32:i64:$I2)
/*1812*/      /*Scope*/ 67, /*->1880*/
/*1813*/        OPC_MoveChild, 1,
/*1815*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1818*/        OPC_SwitchType /*2 cases */, 28,  MVT::i32,// ->1849
/*1821*/          OPC_CheckPredicate, 16, // Predicate_imm32sx16
/*1823*/          OPC_MoveParent,
/*1824*/          OPC_RecordChild2, // #2 = $BD1
/*1825*/          OPC_CheckChild2Type, MVT::i64,
/*1827*/          OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1829*/          OPC_CheckPredicate, 4, // Predicate_store
/*1831*/          OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectBDAddr12Only:$BD1 #3 #4
/*1834*/          OPC_EmitMergeInputChains1_0,
/*1835*/          OPC_EmitConvertToTarget, 1,
/*1837*/          OPC_EmitNodeXForm, 2, 5, // SIMM16
/*1840*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVHI), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (st (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2, bdaddr12only:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 17
                  // Dst: (MVHI bdaddr12only:i64:$BD1, (SIMM16:i32 (imm:i32):$I2))
                /*SwitchType*/ 28,  MVT::i64,// ->1879
/*1851*/          OPC_CheckPredicate, 17, // Predicate_imm64sx16
/*1853*/          OPC_MoveParent,
/*1854*/          OPC_RecordChild2, // #2 = $BD1
/*1855*/          OPC_CheckChild2Type, MVT::i64,
/*1857*/          OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1859*/          OPC_CheckPredicate, 4, // Predicate_store
/*1861*/          OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectBDAddr12Only:$BD1 #3 #4
/*1864*/          OPC_EmitMergeInputChains1_0,
/*1865*/          OPC_EmitConvertToTarget, 1,
/*1867*/          OPC_EmitNodeXForm, 2, 5, // SIMM16
/*1870*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVGHI), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (st (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2, bdaddr12only:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 17
                  // Dst: (MVGHI bdaddr12only:i64:$BD1, (SIMM16:i64 (imm:i64):$I2))
                0, // EndSwitchType
/*1880*/      /*Scope*/ 63, /*->1944*/
/*1881*/        OPC_CheckChild1Type, MVT::i32,
/*1883*/        OPC_RecordChild2, // #2 = $I2
/*1884*/        OPC_CheckChild2Type, MVT::i64,
/*1886*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1888*/        OPC_Scope, 18, /*->1908*/ // 2 children in Scope
/*1890*/          OPC_CheckPredicate, 8, // Predicate_truncstore
/*1892*/          OPC_CheckPredicate, 18, // Predicate_truncstorei16
/*1894*/          OPC_CheckPredicate, 19, // Predicate_aligned_truncstorei16
/*1896*/          OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$I2 #3
/*1899*/          OPC_EmitMergeInputChains1_0,
/*1900*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STHRL32), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (st GR32:i32:$R1, pcrel32:i64:$I2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_aligned_truncstorei16>> - Complexity = 17
                  // Dst: (STHRL32 GR32:i32:$R1, pcrel32:i64:$I2)
/*1908*/        /*Scope*/ 34, /*->1943*/
/*1909*/          OPC_CheckPredicate, 4, // Predicate_store
/*1911*/          OPC_Scope, 14, /*->1927*/ // 2 children in Scope
/*1913*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*1916*/            OPC_EmitMergeInputChains1_0,
/*1917*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::ST32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                    // Dst: (ST32 GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*1927*/          /*Scope*/ 14, /*->1942*/
/*1928*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*1931*/            OPC_EmitMergeInputChains1_0,
/*1932*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::ST32Y), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                    // Dst: (ST32Y GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*1942*/          0, /*End of Scope*/
/*1943*/        0, /*End of Scope*/
/*1944*/      /*Scope*/ 65, /*->2010*/
/*1945*/        OPC_CheckChild1Type, MVT::i64,
/*1947*/        OPC_RecordChild2, // #2 = $I2
/*1948*/        OPC_CheckChild2Type, MVT::i64,
/*1950*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1952*/        OPC_Scope, 38, /*->1992*/ // 2 children in Scope
/*1954*/          OPC_CheckPredicate, 8, // Predicate_truncstore
/*1956*/          OPC_Scope, 16, /*->1974*/ // 2 children in Scope
/*1958*/            OPC_CheckPredicate, 18, // Predicate_truncstorei16
/*1960*/            OPC_CheckPredicate, 19, // Predicate_aligned_truncstorei16
/*1962*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$I2 #3
/*1965*/            OPC_EmitMergeInputChains1_0,
/*1966*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STHRL), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                    // Src: (st GR64:i64:$R1, pcrel32:i64:$I2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_aligned_truncstorei16>> - Complexity = 17
                    // Dst: (STHRL GR64:i64:$R1, pcrel32:i64:$I2)
/*1974*/          /*Scope*/ 16, /*->1991*/
/*1975*/            OPC_CheckPredicate, 20, // Predicate_truncstorei32
/*1977*/            OPC_CheckPredicate, 21, // Predicate_aligned_truncstorei32
/*1979*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$I2 #3
/*1982*/            OPC_EmitMergeInputChains1_0,
/*1983*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STRL), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                    // Src: (st GR64:i64:$R1, pcrel32:i64:$I2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>><<P:Predicate_aligned_truncstorei32>> - Complexity = 17
                    // Dst: (STRL GR64:i64:$R1, pcrel32:i64:$I2)
/*1991*/          0, /*End of Scope*/
/*1992*/        /*Scope*/ 16, /*->2009*/
/*1993*/          OPC_CheckPredicate, 4, // Predicate_store
/*1995*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*1998*/          OPC_EmitMergeInputChains1_0,
/*1999*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STG), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GR64:i64:$R1, bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (STG GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*2009*/        0, /*End of Scope*/
/*2010*/      /*Scope*/ 23, /*->2034*/
/*2011*/        OPC_CheckChild1Type, MVT::Untyped,
/*2013*/        OPC_RecordChild2, // #2 = $dst
/*2014*/        OPC_CheckChild2Type, MVT::i64,
/*2016*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2018*/        OPC_CheckPredicate, 4, // Predicate_store
/*2020*/        OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Only128:$dst #3 #4 #5
/*2023*/        OPC_EmitMergeInputChains1_0,
/*2024*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ST128), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                // Src: (st GR128:Untyped:$src, bdxaddr20only128:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                // Dst: (ST128 GR128:Untyped:$src, bdxaddr20only128:i64:$dst)
/*2034*/      /*Scope*/ 81, /*->2116*/
/*2035*/        OPC_MoveChild, 1,
/*2037*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2040*/        OPC_CheckType, MVT::i32,
/*2042*/        OPC_MoveParent,
/*2043*/        OPC_RecordChild2, // #2 = $BD1
/*2044*/        OPC_CheckChild2Type, MVT::i64,
/*2046*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2048*/        OPC_CheckPredicate, 8, // Predicate_truncstore
/*2050*/        OPC_Scope, 42, /*->2094*/ // 2 children in Scope
/*2052*/          OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*2054*/          OPC_Scope, 18, /*->2074*/ // 2 children in Scope
/*2056*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$BD1 #3 #4
/*2059*/            OPC_EmitMergeInputChains1_0,
/*2060*/            OPC_EmitConvertToTarget, 1,
/*2062*/            OPC_EmitNodeXForm, 1, 5, // UIMM8
/*2065*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                    // Src: (st (imm:i32)<<X:UIMM8>>:$I2, bdaddr12pair:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (MVI bdaddr12pair:i64:$BD1, (UIMM8:i32 (imm:i32):$I2))
/*2074*/          /*Scope*/ 18, /*->2093*/
/*2075*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$BD1 #3 #4
/*2078*/            OPC_EmitMergeInputChains1_0,
/*2079*/            OPC_EmitConvertToTarget, 1,
/*2081*/            OPC_EmitNodeXForm, 1, 5, // UIMM8
/*2084*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                    // Src: (st (imm:i32)<<X:UIMM8>>:$I2, bdaddr20pair:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (MVIY bdaddr20pair:i64:$BD1, (UIMM8:i32 (imm:i32):$I2))
/*2093*/          0, /*End of Scope*/
/*2094*/        /*Scope*/ 20, /*->2115*/
/*2095*/          OPC_CheckPredicate, 18, // Predicate_truncstorei16
/*2097*/          OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectBDAddr12Only:$BD1 #3 #4
/*2100*/          OPC_EmitMergeInputChains1_0,
/*2101*/          OPC_EmitConvertToTarget, 1,
/*2103*/          OPC_EmitNodeXForm, 2, 5, // SIMM16
/*2106*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVHHI), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (st (imm:i32)<<X:SIMM16>>:$I2, bdaddr12only:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                  // Dst: (MVHHI bdaddr12only:i64:$BD1, (SIMM16:i32 (imm:i32):$I2))
/*2115*/        0, /*End of Scope*/
/*2116*/      /*Scope*/ 81, /*->2198*/
/*2117*/        OPC_CheckChild1Type, MVT::i32,
/*2119*/        OPC_RecordChild2, // #2 = $XBD2
/*2120*/        OPC_CheckChild2Type, MVT::i64,
/*2122*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2124*/        OPC_CheckPredicate, 8, // Predicate_truncstore
/*2126*/        OPC_Scope, 34, /*->2162*/ // 2 children in Scope
/*2128*/          OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*2130*/          OPC_Scope, 14, /*->2146*/ // 2 children in Scope
/*2132*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2135*/            OPC_EmitMergeInputChains1_0,
/*2136*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STC32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (STC32 GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*2146*/          /*Scope*/ 14, /*->2161*/
/*2147*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*2150*/            OPC_EmitMergeInputChains1_0,
/*2151*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (STC32Y GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*2161*/          0, /*End of Scope*/
/*2162*/        /*Scope*/ 34, /*->2197*/
/*2163*/          OPC_CheckPredicate, 18, // Predicate_truncstorei16
/*2165*/          OPC_Scope, 14, /*->2181*/ // 2 children in Scope
/*2167*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2170*/            OPC_EmitMergeInputChains1_0,
/*2171*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STH32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (STH32 GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*2181*/          /*Scope*/ 14, /*->2196*/
/*2182*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*2185*/            OPC_EmitMergeInputChains1_0,
/*2186*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STH32Y), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (STH32Y GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*2196*/          0, /*End of Scope*/
/*2197*/        0, /*End of Scope*/
/*2198*/      /*Scope*/ 116, /*->2315*/
/*2199*/        OPC_CheckChild1Type, MVT::i64,
/*2201*/        OPC_RecordChild2, // #2 = $XBD2
/*2202*/        OPC_CheckChild2Type, MVT::i64,
/*2204*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2206*/        OPC_CheckPredicate, 8, // Predicate_truncstore
/*2208*/        OPC_Scope, 34, /*->2244*/ // 3 children in Scope
/*2210*/          OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*2212*/          OPC_Scope, 14, /*->2228*/ // 2 children in Scope
/*2214*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2217*/            OPC_EmitMergeInputChains1_0,
/*2218*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STC), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (STC GR64:i64:$R1, bdxaddr12pair:i64:$XBD2)
/*2228*/          /*Scope*/ 14, /*->2243*/
/*2229*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*2232*/            OPC_EmitMergeInputChains1_0,
/*2233*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STCY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (STCY GR64:i64:$R1, bdxaddr20pair:i64:$XBD2)
/*2243*/          0, /*End of Scope*/
/*2244*/        /*Scope*/ 34, /*->2279*/
/*2245*/          OPC_CheckPredicate, 18, // Predicate_truncstorei16
/*2247*/          OPC_Scope, 14, /*->2263*/ // 2 children in Scope
/*2249*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2252*/            OPC_EmitMergeInputChains1_0,
/*2253*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STH), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (STH GR64:i64:$R1, bdxaddr12pair:i64:$XBD2)
/*2263*/          /*Scope*/ 14, /*->2278*/
/*2264*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*2267*/            OPC_EmitMergeInputChains1_0,
/*2268*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STHY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (STHY GR64:i64:$R1, bdxaddr20pair:i64:$XBD2)
/*2278*/          0, /*End of Scope*/
/*2279*/        /*Scope*/ 34, /*->2314*/
/*2280*/          OPC_CheckPredicate, 20, // Predicate_truncstorei32
/*2282*/          OPC_Scope, 14, /*->2298*/ // 2 children in Scope
/*2284*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2287*/            OPC_EmitMergeInputChains1_0,
/*2288*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::ST), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 16
                    // Dst: (ST GR64:i64:$R1, bdxaddr12pair:i64:$XBD2)
/*2298*/          /*Scope*/ 14, /*->2313*/
/*2299*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*2302*/            OPC_EmitMergeInputChains1_0,
/*2303*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 16
                    // Dst: (STY GR64:i64:$R1, bdxaddr20pair:i64:$XBD2)
/*2313*/          0, /*End of Scope*/
/*2314*/        0, /*End of Scope*/
/*2315*/      /*Scope*/ 41, /*->2357*/
/*2316*/        OPC_CheckChild1Type, MVT::f32,
/*2318*/        OPC_RecordChild2, // #2 = $XBD2
/*2319*/        OPC_CheckChild2Type, MVT::i64,
/*2321*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2323*/        OPC_CheckPredicate, 4, // Predicate_store
/*2325*/        OPC_Scope, 14, /*->2341*/ // 2 children in Scope
/*2327*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2330*/          OPC_EmitMergeInputChains1_0,
/*2331*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STE), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st FP32:f32:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (STE FP32:f32:$R1, bdxaddr12pair:i64:$XBD2)
/*2341*/        /*Scope*/ 14, /*->2356*/
/*2342*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*2345*/          OPC_EmitMergeInputChains1_0,
/*2346*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STEY), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st FP32:f32:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (STEY FP32:f32:$R1, bdxaddr20pair:i64:$XBD2)
/*2356*/        0, /*End of Scope*/
/*2357*/      /*Scope*/ 41, /*->2399*/
/*2358*/        OPC_CheckChild1Type, MVT::f64,
/*2360*/        OPC_RecordChild2, // #2 = $XBD2
/*2361*/        OPC_CheckChild2Type, MVT::i64,
/*2363*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2365*/        OPC_CheckPredicate, 4, // Predicate_store
/*2367*/        OPC_Scope, 14, /*->2383*/ // 2 children in Scope
/*2369*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2372*/          OPC_EmitMergeInputChains1_0,
/*2373*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STD), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st FP64:f64:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (STD FP64:f64:$R1, bdxaddr12pair:i64:$XBD2)
/*2383*/        /*Scope*/ 14, /*->2398*/
/*2384*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*2387*/          OPC_EmitMergeInputChains1_0,
/*2388*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STDY), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st FP64:f64:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (STDY FP64:f64:$R1, bdxaddr20pair:i64:$XBD2)
/*2398*/        0, /*End of Scope*/
/*2399*/      /*Scope*/ 23, /*->2423*/
/*2400*/        OPC_CheckChild1Type, MVT::f128,
/*2402*/        OPC_RecordChild2, // #2 = $dst
/*2403*/        OPC_CheckChild2Type, MVT::i64,
/*2405*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2407*/        OPC_CheckPredicate, 4, // Predicate_store
/*2409*/        OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Only128:$dst #3 #4 #5
/*2412*/        OPC_EmitMergeInputChains1_0,
/*2413*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::STX), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                // Src: (st FP128:f128:$src, bdxaddr20only128:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                // Dst: (STX FP128:f128:$src, bdxaddr20only128:i64:$dst)
/*2423*/      0, /*End of Scope*/
/*2424*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 49|128,12/*1585*/,  TARGET_VAL(ISD::OR),// ->4014
/*2429*/    OPC_Scope, 88|128,1/*216*/, /*->2648*/ // 20 children in Scope
/*2432*/      OPC_MoveChild, 0,
/*2434*/      OPC_Scope, 105, /*->2541*/ // 2 children in Scope
/*2436*/        OPC_CheckAndImm, 0|128,126|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551360*/, 
/*2447*/        OPC_RecordChild0, // #0 = $R1src
/*2448*/        OPC_MoveParent,
/*2449*/        OPC_MoveChild, 1,
/*2451*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2454*/        OPC_RecordMemRef,
/*2455*/        OPC_RecordNode, // #1 = 'ld' chained node
/*2456*/        OPC_CheckFoldableChainNode,
/*2457*/        OPC_RecordChild1, // #2 = $XBD2
/*2458*/        OPC_CheckChild1Type, MVT::i64,
/*2460*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2462*/        OPC_CheckPredicate, 6, // Predicate_zextload
/*2464*/        OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*2466*/        OPC_MoveParent,
/*2467*/        OPC_SwitchType /*2 cases */, 34,  MVT::i32,// ->2504
/*2470*/          OPC_Scope, 15, /*->2487*/ // 2 children in Scope
/*2472*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2475*/            OPC_EmitMergeInputChains1_1,
/*2476*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i32 (and:i32 GR32:i32:$R1src, -256:i32), (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>) - Complexity = 27
                    // Dst: (IC32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*2487*/          /*Scope*/ 15, /*->2503*/
/*2488*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*2491*/            OPC_EmitMergeInputChains1_1,
/*2492*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i32 (and:i32 GR32:i32:$R1src, -256:i32), (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>) - Complexity = 27
                    // Dst: (IC32Y:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*2503*/          0, /*End of Scope*/
                /*SwitchType*/ 34,  MVT::i64,// ->2540
/*2506*/          OPC_Scope, 15, /*->2523*/ // 2 children in Scope
/*2508*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2511*/            OPC_EmitMergeInputChains1_1,
/*2512*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i64 (and:i64 GR64:i64:$R1src, -256:i64), (ld:i64 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>) - Complexity = 27
                    // Dst: (IC:i64 GR64:i64:$R1src, bdxaddr12pair:i64:$XBD2)
/*2523*/          /*Scope*/ 15, /*->2539*/
/*2524*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*2527*/            OPC_EmitMergeInputChains1_1,
/*2528*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i64 (and:i64 GR64:i64:$R1src, -256:i64), (ld:i64 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>) - Complexity = 27
                    // Dst: (ICY:i64 GR64:i64:$R1src, bdxaddr20pair:i64:$XBD2)
/*2539*/          0, /*End of Scope*/
                0, // EndSwitchType
/*2541*/      /*Scope*/ 105, /*->2647*/
/*2542*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2545*/        OPC_RecordMemRef,
/*2546*/        OPC_RecordNode, // #0 = 'ld' chained node
/*2547*/        OPC_CheckFoldableChainNode,
/*2548*/        OPC_RecordChild1, // #1 = $XBD2
/*2549*/        OPC_CheckChild1Type, MVT::i64,
/*2551*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2553*/        OPC_CheckPredicate, 6, // Predicate_zextload
/*2555*/        OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*2557*/        OPC_MoveParent,
/*2558*/        OPC_MoveChild, 1,
/*2560*/        OPC_CheckAndImm, 0|128,126|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551360*/, 
/*2571*/        OPC_RecordChild0, // #2 = $R1src
/*2572*/        OPC_MoveParent,
/*2573*/        OPC_SwitchType /*2 cases */, 34,  MVT::i32,// ->2610
/*2576*/          OPC_Scope, 15, /*->2593*/ // 2 children in Scope
/*2578*/            OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2581*/            OPC_EmitMergeInputChains1_0,
/*2582*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (and:i32 GR32:i32:$R1src, -256:i32)) - Complexity = 27
                    // Dst: (IC32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*2593*/          /*Scope*/ 15, /*->2609*/
/*2594*/            OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*2597*/            OPC_EmitMergeInputChains1_0,
/*2598*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (and:i32 GR32:i32:$R1src, -256:i32)) - Complexity = 27
                    // Dst: (IC32Y:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*2609*/          0, /*End of Scope*/
                /*SwitchType*/ 34,  MVT::i64,// ->2646
/*2612*/          OPC_Scope, 15, /*->2629*/ // 2 children in Scope
/*2614*/            OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2617*/            OPC_EmitMergeInputChains1_0,
/*2618*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i64 (ld:i64 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (and:i64 GR64:i64:$R1src, -256:i64)) - Complexity = 27
                    // Dst: (IC:i64 GR64:i64:$R1src, bdxaddr12pair:i64:$XBD2)
/*2629*/          /*Scope*/ 15, /*->2645*/
/*2630*/            OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*2633*/            OPC_EmitMergeInputChains1_0,
/*2634*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i64 (ld:i64 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (and:i64 GR64:i64:$R1src, -256:i64)) - Complexity = 27
                    // Dst: (ICY:i64 GR64:i64:$R1src, bdxaddr20pair:i64:$XBD2)
/*2645*/          0, /*End of Scope*/
                0, // EndSwitchType
/*2647*/      0, /*End of Scope*/
/*2648*/    /*Scope*/ 38, /*->2687*/
/*2649*/      OPC_RecordChild0, // #0 = $src1
/*2650*/      OPC_MoveChild, 1,
/*2652*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2655*/      OPC_RecordMemRef,
/*2656*/      OPC_RecordNode, // #1 = 'ld' chained node
/*2657*/      OPC_CheckFoldableChainNode,
/*2658*/      OPC_RecordChild1, // #2 = $src2
/*2659*/      OPC_CheckChild1Type, MVT::i64,
/*2661*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2663*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*2665*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*2667*/      OPC_MoveParent,
/*2668*/      OPC_CheckPredicate, 22, // Predicate_or_as_inserti8
/*2670*/      OPC_CheckType, MVT::i32,
/*2672*/      OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*2675*/      OPC_EmitMergeInputChains1_1,
/*2676*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i32 GR32:i32:$src1, (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (IC32:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*2687*/    /*Scope*/ 38, /*->2726*/
/*2688*/      OPC_MoveChild, 0,
/*2690*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2693*/      OPC_RecordMemRef,
/*2694*/      OPC_RecordNode, // #0 = 'ld' chained node
/*2695*/      OPC_CheckFoldableChainNode,
/*2696*/      OPC_RecordChild1, // #1 = $src2
/*2697*/      OPC_CheckChild1Type, MVT::i64,
/*2699*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2701*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*2703*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*2705*/      OPC_MoveParent,
/*2706*/      OPC_RecordChild1, // #2 = $src1
/*2707*/      OPC_CheckPredicate, 23, // Predicate_or_as_revinserti8
/*2709*/      OPC_CheckType, MVT::i32,
/*2711*/      OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*2714*/      OPC_EmitMergeInputChains1_0,
/*2715*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i32 (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR32:i32:$src1)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC32:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*2726*/    /*Scope*/ 38, /*->2765*/
/*2727*/      OPC_RecordChild0, // #0 = $src1
/*2728*/      OPC_MoveChild, 1,
/*2730*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2733*/      OPC_RecordMemRef,
/*2734*/      OPC_RecordNode, // #1 = 'ld' chained node
/*2735*/      OPC_CheckFoldableChainNode,
/*2736*/      OPC_RecordChild1, // #2 = $src2
/*2737*/      OPC_CheckChild1Type, MVT::i64,
/*2739*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2741*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*2743*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*2745*/      OPC_MoveParent,
/*2746*/      OPC_CheckPredicate, 22, // Predicate_or_as_inserti8
/*2748*/      OPC_CheckType, MVT::i32,
/*2750*/      OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*2753*/      OPC_EmitMergeInputChains1_1,
/*2754*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i32 GR32:i32:$src1, (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (IC32Y:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*2765*/    /*Scope*/ 38, /*->2804*/
/*2766*/      OPC_MoveChild, 0,
/*2768*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2771*/      OPC_RecordMemRef,
/*2772*/      OPC_RecordNode, // #0 = 'ld' chained node
/*2773*/      OPC_CheckFoldableChainNode,
/*2774*/      OPC_RecordChild1, // #1 = $src2
/*2775*/      OPC_CheckChild1Type, MVT::i64,
/*2777*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2779*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*2781*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*2783*/      OPC_MoveParent,
/*2784*/      OPC_RecordChild1, // #2 = $src1
/*2785*/      OPC_CheckPredicate, 23, // Predicate_or_as_revinserti8
/*2787*/      OPC_CheckType, MVT::i32,
/*2789*/      OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*2792*/      OPC_EmitMergeInputChains1_0,
/*2793*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i32 (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR32:i32:$src1)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC32Y:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*2804*/    /*Scope*/ 38, /*->2843*/
/*2805*/      OPC_RecordChild0, // #0 = $src1
/*2806*/      OPC_MoveChild, 1,
/*2808*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2811*/      OPC_RecordMemRef,
/*2812*/      OPC_RecordNode, // #1 = 'ld' chained node
/*2813*/      OPC_CheckFoldableChainNode,
/*2814*/      OPC_RecordChild1, // #2 = $src2
/*2815*/      OPC_CheckChild1Type, MVT::i64,
/*2817*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2819*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*2821*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*2823*/      OPC_MoveParent,
/*2824*/      OPC_CheckPredicate, 22, // Predicate_or_as_inserti8
/*2826*/      OPC_CheckType, MVT::i64,
/*2828*/      OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*2831*/      OPC_EmitMergeInputChains1_1,
/*2832*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i64 GR64:i64:$src1, (ld:i64 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (IC:i64 GR64:i64:$src1, bdxaddr12pair:i64:$src2)
/*2843*/    /*Scope*/ 38, /*->2882*/
/*2844*/      OPC_MoveChild, 0,
/*2846*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2849*/      OPC_RecordMemRef,
/*2850*/      OPC_RecordNode, // #0 = 'ld' chained node
/*2851*/      OPC_CheckFoldableChainNode,
/*2852*/      OPC_RecordChild1, // #1 = $src2
/*2853*/      OPC_CheckChild1Type, MVT::i64,
/*2855*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2857*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*2859*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*2861*/      OPC_MoveParent,
/*2862*/      OPC_RecordChild1, // #2 = $src1
/*2863*/      OPC_CheckPredicate, 23, // Predicate_or_as_revinserti8
/*2865*/      OPC_CheckType, MVT::i64,
/*2867*/      OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*2870*/      OPC_EmitMergeInputChains1_0,
/*2871*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i64 (ld:i64 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR64:i64:$src1)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC:i64 GR64:i64:$src1, bdxaddr12pair:i64:$src2)
/*2882*/    /*Scope*/ 38, /*->2921*/
/*2883*/      OPC_RecordChild0, // #0 = $src1
/*2884*/      OPC_MoveChild, 1,
/*2886*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2889*/      OPC_RecordMemRef,
/*2890*/      OPC_RecordNode, // #1 = 'ld' chained node
/*2891*/      OPC_CheckFoldableChainNode,
/*2892*/      OPC_RecordChild1, // #2 = $src2
/*2893*/      OPC_CheckChild1Type, MVT::i64,
/*2895*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2897*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*2899*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*2901*/      OPC_MoveParent,
/*2902*/      OPC_CheckPredicate, 22, // Predicate_or_as_inserti8
/*2904*/      OPC_CheckType, MVT::i64,
/*2906*/      OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*2909*/      OPC_EmitMergeInputChains1_1,
/*2910*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i64 GR64:i64:$src1, (ld:i64 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (ICY:i64 GR64:i64:$src1, bdxaddr20pair:i64:$src2)
/*2921*/    /*Scope*/ 59, /*->2981*/
/*2922*/      OPC_MoveChild, 0,
/*2924*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2927*/      OPC_RecordMemRef,
/*2928*/      OPC_RecordNode, // #0 = 'ld' chained node
/*2929*/      OPC_CheckFoldableChainNode,
/*2930*/      OPC_RecordChild1, // #1 = $src2
/*2931*/      OPC_CheckChild1Type, MVT::i64,
/*2933*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2935*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*2937*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*2939*/      OPC_MoveParent,
/*2940*/      OPC_RecordChild1, // #2 = $src1
/*2941*/      OPC_SwitchType /*2 cases */, 17,  MVT::i64,// ->2961
/*2944*/        OPC_CheckPredicate, 23, // Predicate_or_as_revinserti8
/*2946*/        OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*2949*/        OPC_EmitMergeInputChains1_0,
/*2950*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (or:i64 (ld:i64 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR64:i64:$src1)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
                // Dst: (ICY:i64 GR64:i64:$src1, bdxaddr20pair:i64:$src2)
              /*SwitchType*/ 17,  MVT::i32,// ->2980
/*2963*/        OPC_CheckPredicate, 22, // Predicate_or_as_inserti8
/*2965*/        OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*2968*/        OPC_EmitMergeInputChains1_0,
/*2969*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (or:i32 (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR32:i32:$src1)<<P:Predicate_or_as_inserti8>> - Complexity = 20
                // Dst: (IC32:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
              0, // EndSwitchType
/*2981*/    /*Scope*/ 38, /*->3020*/
/*2982*/      OPC_RecordChild0, // #0 = $src1
/*2983*/      OPC_MoveChild, 1,
/*2985*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2988*/      OPC_RecordMemRef,
/*2989*/      OPC_RecordNode, // #1 = 'ld' chained node
/*2990*/      OPC_CheckFoldableChainNode,
/*2991*/      OPC_RecordChild1, // #2 = $src2
/*2992*/      OPC_CheckChild1Type, MVT::i64,
/*2994*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2996*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*2998*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*3000*/      OPC_MoveParent,
/*3001*/      OPC_CheckPredicate, 23, // Predicate_or_as_revinserti8
/*3003*/      OPC_CheckType, MVT::i32,
/*3005*/      OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*3008*/      OPC_EmitMergeInputChains1_1,
/*3009*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i32 GR32:i32:$src1, (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC32:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*3020*/    /*Scope*/ 38, /*->3059*/
/*3021*/      OPC_MoveChild, 0,
/*3023*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3026*/      OPC_RecordMemRef,
/*3027*/      OPC_RecordNode, // #0 = 'ld' chained node
/*3028*/      OPC_CheckFoldableChainNode,
/*3029*/      OPC_RecordChild1, // #1 = $src2
/*3030*/      OPC_CheckChild1Type, MVT::i64,
/*3032*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3034*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*3036*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*3038*/      OPC_MoveParent,
/*3039*/      OPC_RecordChild1, // #2 = $src1
/*3040*/      OPC_CheckPredicate, 22, // Predicate_or_as_inserti8
/*3042*/      OPC_CheckType, MVT::i32,
/*3044*/      OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*3047*/      OPC_EmitMergeInputChains1_0,
/*3048*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i32 (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR32:i32:$src1)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (IC32Y:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*3059*/    /*Scope*/ 38, /*->3098*/
/*3060*/      OPC_RecordChild0, // #0 = $src1
/*3061*/      OPC_MoveChild, 1,
/*3063*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3066*/      OPC_RecordMemRef,
/*3067*/      OPC_RecordNode, // #1 = 'ld' chained node
/*3068*/      OPC_CheckFoldableChainNode,
/*3069*/      OPC_RecordChild1, // #2 = $src2
/*3070*/      OPC_CheckChild1Type, MVT::i64,
/*3072*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3074*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*3076*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*3078*/      OPC_MoveParent,
/*3079*/      OPC_CheckPredicate, 23, // Predicate_or_as_revinserti8
/*3081*/      OPC_CheckType, MVT::i32,
/*3083*/      OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*3086*/      OPC_EmitMergeInputChains1_1,
/*3087*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i32 GR32:i32:$src1, (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC32Y:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*3098*/    /*Scope*/ 38, /*->3137*/
/*3099*/      OPC_MoveChild, 0,
/*3101*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3104*/      OPC_RecordMemRef,
/*3105*/      OPC_RecordNode, // #0 = 'ld' chained node
/*3106*/      OPC_CheckFoldableChainNode,
/*3107*/      OPC_RecordChild1, // #1 = $src2
/*3108*/      OPC_CheckChild1Type, MVT::i64,
/*3110*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3112*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*3114*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*3116*/      OPC_MoveParent,
/*3117*/      OPC_RecordChild1, // #2 = $src1
/*3118*/      OPC_CheckPredicate, 22, // Predicate_or_as_inserti8
/*3120*/      OPC_CheckType, MVT::i64,
/*3122*/      OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*3125*/      OPC_EmitMergeInputChains1_0,
/*3126*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i64 (ld:i64 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR64:i64:$src1)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (IC:i64 GR64:i64:$src1, bdxaddr12pair:i64:$src2)
/*3137*/    /*Scope*/ 38, /*->3176*/
/*3138*/      OPC_RecordChild0, // #0 = $src1
/*3139*/      OPC_MoveChild, 1,
/*3141*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3144*/      OPC_RecordMemRef,
/*3145*/      OPC_RecordNode, // #1 = 'ld' chained node
/*3146*/      OPC_CheckFoldableChainNode,
/*3147*/      OPC_RecordChild1, // #2 = $src2
/*3148*/      OPC_CheckChild1Type, MVT::i64,
/*3150*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3152*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*3154*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*3156*/      OPC_MoveParent,
/*3157*/      OPC_CheckPredicate, 23, // Predicate_or_as_revinserti8
/*3159*/      OPC_CheckType, MVT::i64,
/*3161*/      OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*3164*/      OPC_EmitMergeInputChains1_1,
/*3165*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i64 GR64:i64:$src1, (ld:i64 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC:i64 GR64:i64:$src1, bdxaddr12pair:i64:$src2)
/*3176*/    /*Scope*/ 38, /*->3215*/
/*3177*/      OPC_MoveChild, 0,
/*3179*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3182*/      OPC_RecordMemRef,
/*3183*/      OPC_RecordNode, // #0 = 'ld' chained node
/*3184*/      OPC_CheckFoldableChainNode,
/*3185*/      OPC_RecordChild1, // #1 = $src2
/*3186*/      OPC_CheckChild1Type, MVT::i64,
/*3188*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3190*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*3192*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*3194*/      OPC_MoveParent,
/*3195*/      OPC_RecordChild1, // #2 = $src1
/*3196*/      OPC_CheckPredicate, 22, // Predicate_or_as_inserti8
/*3198*/      OPC_CheckType, MVT::i64,
/*3200*/      OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*3203*/      OPC_EmitMergeInputChains1_0,
/*3204*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i64 (ld:i64 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR64:i64:$src1)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (ICY:i64 GR64:i64:$src1, bdxaddr20pair:i64:$src2)
/*3215*/    /*Scope*/ 100, /*->3316*/
/*3216*/      OPC_RecordChild0, // #0 = $src1
/*3217*/      OPC_MoveChild, 1,
/*3219*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3222*/      OPC_RecordMemRef,
/*3223*/      OPC_RecordNode, // #1 = 'ld' chained node
/*3224*/      OPC_CheckFoldableChainNode,
/*3225*/      OPC_RecordChild1, // #2 = $src2
/*3226*/      OPC_CheckChild1Type, MVT::i64,
/*3228*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3230*/      OPC_Scope, 24, /*->3256*/ // 2 children in Scope
/*3232*/        OPC_CheckPredicate, 6, // Predicate_zextload
/*3234*/        OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*3236*/        OPC_MoveParent,
/*3237*/        OPC_CheckPredicate, 23, // Predicate_or_as_revinserti8
/*3239*/        OPC_CheckType, MVT::i64,
/*3241*/        OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*3244*/        OPC_EmitMergeInputChains1_1,
/*3245*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (or:i64 GR64:i64:$src1, (ld:i64 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
                // Dst: (ICY:i64 GR64:i64:$src1, bdxaddr20pair:i64:$src2)
/*3256*/      /*Scope*/ 58, /*->3315*/
/*3257*/        OPC_CheckPredicate, 1, // Predicate_load
/*3259*/        OPC_MoveParent,
/*3260*/        OPC_SwitchType /*2 cases */, 34,  MVT::i32,// ->3297
/*3263*/          OPC_Scope, 15, /*->3280*/ // 2 children in Scope
/*3265*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*3268*/            OPC_EmitMergeInputChains1_1,
/*3269*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::O), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (O:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*3280*/          /*Scope*/ 15, /*->3296*/
/*3281*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*3284*/            OPC_EmitMergeInputChains1_1,
/*3285*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (OY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*3296*/          0, /*End of Scope*/
                /*SwitchType*/ 15,  MVT::i64,// ->3314
/*3299*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*3302*/          OPC_EmitMergeInputChains1_1,
/*3303*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OG), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (or:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (OG:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
                0, // EndSwitchType
/*3315*/      0, /*End of Scope*/
/*3316*/    /*Scope*/ 123|128,2/*379*/, /*->3697*/
/*3318*/      OPC_MoveChild, 0,
/*3320*/      OPC_Scope, 70, /*->3392*/ // 9 children in Scope
/*3322*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3325*/        OPC_RecordMemRef,
/*3326*/        OPC_RecordNode, // #0 = 'ld' chained node
/*3327*/        OPC_CheckFoldableChainNode,
/*3328*/        OPC_RecordChild1, // #1 = $XBD2
/*3329*/        OPC_CheckChild1Type, MVT::i64,
/*3331*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3333*/        OPC_CheckPredicate, 1, // Predicate_load
/*3335*/        OPC_MoveParent,
/*3336*/        OPC_RecordChild1, // #2 = $R1src
/*3337*/        OPC_SwitchType /*2 cases */, 34,  MVT::i32,// ->3374
/*3340*/          OPC_Scope, 15, /*->3357*/ // 2 children in Scope
/*3342*/            OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*3345*/            OPC_EmitMergeInputChains1_0,
/*3346*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::O), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                    // Dst: (O:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*3357*/          /*Scope*/ 15, /*->3373*/
/*3358*/            OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*3361*/            OPC_EmitMergeInputChains1_0,
/*3362*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                    // Dst: (OY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*3373*/          0, /*End of Scope*/
                /*SwitchType*/ 15,  MVT::i64,// ->3391
/*3376*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*3379*/          OPC_EmitMergeInputChains1_0,
/*3380*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OG), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (or:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                  // Dst: (OG:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
                0, // EndSwitchType
/*3392*/      /*Scope*/ 38, /*->3431*/
/*3393*/        OPC_CheckAndImm, 0|128,0|128,124|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709486080*/, 
/*3404*/        OPC_RecordChild0, // #0 = $R1src
/*3405*/        OPC_MoveParent,
/*3406*/        OPC_RecordChild1, // #1 = $I2
/*3407*/        OPC_MoveChild, 1,
/*3409*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3412*/        OPC_CheckPredicate, 24, // Predicate_imm32ll16
/*3414*/        OPC_MoveParent,
/*3415*/        OPC_CheckType, MVT::i32,
/*3417*/        OPC_EmitConvertToTarget, 1,
/*3419*/        OPC_EmitNodeXForm, 3, 2, // LL16
/*3422*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILL32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (or:i32 (and:i32 GR32:i32:$R1src, -65536:i32), (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$I2) - Complexity = 15
                // Dst: (IILL32:i32 GR32:i32:$R1src, (LL16:i32 (imm:i32):$I2))
/*3431*/      /*Scope*/ 38, /*->3470*/
/*3432*/        OPC_CheckAndImm, 127|128,127|128,3|128,0|128,112|128,127|128,127|128,127|128,127|128,1/*18446744069414649855*/, 
/*3443*/        OPC_RecordChild0, // #0 = $R1src
/*3444*/        OPC_MoveParent,
/*3445*/        OPC_RecordChild1, // #1 = $I2
/*3446*/        OPC_MoveChild, 1,
/*3448*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3451*/        OPC_CheckPredicate, 25, // Predicate_imm32lh16
/*3453*/        OPC_MoveParent,
/*3454*/        OPC_CheckType, MVT::i32,
/*3456*/        OPC_EmitConvertToTarget, 1,
/*3458*/        OPC_EmitNodeXForm, 4, 2, // LH16
/*3461*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILH32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (or:i32 (and:i32 GR32:i32:$R1src, -4294901761:i32), (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$I2) - Complexity = 15
                // Dst: (IILH32:i32 GR32:i32:$R1src, (LH16:i32 (imm:i32):$I2))
/*3470*/      /*Scope*/ 38, /*->3509*/
/*3471*/        OPC_CheckAndImm, 0|128,0|128,124|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709486080*/, 
/*3482*/        OPC_RecordChild0, // #0 = $R1src
/*3483*/        OPC_MoveParent,
/*3484*/        OPC_RecordChild1, // #1 = $I2
/*3485*/        OPC_MoveChild, 1,
/*3487*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3490*/        OPC_CheckPredicate, 26, // Predicate_imm64ll16
/*3492*/        OPC_MoveParent,
/*3493*/        OPC_CheckType, MVT::i64,
/*3495*/        OPC_EmitConvertToTarget, 1,
/*3497*/        OPC_EmitNodeXForm, 3, 2, // LL16
/*3500*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILL), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$R1src, -65536:i64), (imm:i64)<<P:Predicate_imm64ll16>><<X:LL16>>:$I2) - Complexity = 15
                // Dst: (IILL:i64 GR64:i64:$R1src, (LL16:i64 (imm:i64):$I2))
/*3509*/      /*Scope*/ 38, /*->3548*/
/*3510*/        OPC_CheckAndImm, 127|128,127|128,3|128,0|128,112|128,127|128,127|128,127|128,127|128,1/*18446744069414649855*/, 
/*3521*/        OPC_RecordChild0, // #0 = $R1src
/*3522*/        OPC_MoveParent,
/*3523*/        OPC_RecordChild1, // #1 = $I2
/*3524*/        OPC_MoveChild, 1,
/*3526*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3529*/        OPC_CheckPredicate, 27, // Predicate_imm64lh16
/*3531*/        OPC_MoveParent,
/*3532*/        OPC_CheckType, MVT::i64,
/*3534*/        OPC_EmitConvertToTarget, 1,
/*3536*/        OPC_EmitNodeXForm, 4, 2, // LH16
/*3539*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILH), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$R1src, -4294901761:i64), (imm:i64)<<P:Predicate_imm64lh16>><<X:LH16>>:$I2) - Complexity = 15
                // Dst: (IILH:i64 GR64:i64:$R1src, (LH16:i64 (imm:i64):$I2))
/*3548*/      /*Scope*/ 38, /*->3587*/
/*3549*/        OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15|128,0|128,64|128,127|128,127|128,1/*18446462603027808255*/, 
/*3560*/        OPC_RecordChild0, // #0 = $R1src
/*3561*/        OPC_MoveParent,
/*3562*/        OPC_RecordChild1, // #1 = $I2
/*3563*/        OPC_MoveChild, 1,
/*3565*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3568*/        OPC_CheckPredicate, 28, // Predicate_imm64hl16
/*3570*/        OPC_MoveParent,
/*3571*/        OPC_CheckType, MVT::i64,
/*3573*/        OPC_EmitConvertToTarget, 1,
/*3575*/        OPC_EmitNodeXForm, 5, 2, // HL16
/*3578*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIHL), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$R1src, -281470681743361:i64), (imm:i64)<<P:Predicate_imm64hl16>><<X:HL16>>:$I2) - Complexity = 15
                // Dst: (IIHL:i64 GR64:i64:$R1src, (HL16:i64 (imm:i64):$I2))
/*3587*/      /*Scope*/ 35, /*->3623*/
/*3588*/        OPC_CheckAndImm, 127|128,127|128,127|128,127|128,127|128,127|128,63/*281474976710655*/, 
/*3596*/        OPC_RecordChild0, // #0 = $R1src
/*3597*/        OPC_MoveParent,
/*3598*/        OPC_RecordChild1, // #1 = $I2
/*3599*/        OPC_MoveChild, 1,
/*3601*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3604*/        OPC_CheckPredicate, 29, // Predicate_imm64hh16
/*3606*/        OPC_MoveParent,
/*3607*/        OPC_CheckType, MVT::i64,
/*3609*/        OPC_EmitConvertToTarget, 1,
/*3611*/        OPC_EmitNodeXForm, 6, 2, // HH16
/*3614*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIHH), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$R1src, 281474976710655:i64), (imm:i64)<<P:Predicate_imm64hh16>><<X:HH16>>:$I2) - Complexity = 15
                // Dst: (IIHH:i64 GR64:i64:$R1src, (HH16:i64 (imm:i64):$I2))
/*3623*/      /*Scope*/ 38, /*->3662*/
/*3624*/        OPC_CheckAndImm, 0|128,0|128,0|128,0|128,112|128,127|128,127|128,127|128,127|128,1/*18446744069414584320*/, 
/*3635*/        OPC_RecordChild0, // #0 = $R1src
/*3636*/        OPC_MoveParent,
/*3637*/        OPC_RecordChild1, // #1 = $I2
/*3638*/        OPC_MoveChild, 1,
/*3640*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3643*/        OPC_CheckPredicate, 30, // Predicate_imm64lf32
/*3645*/        OPC_MoveParent,
/*3646*/        OPC_CheckType, MVT::i64,
/*3648*/        OPC_EmitConvertToTarget, 1,
/*3650*/        OPC_EmitNodeXForm, 7, 2, // LF32
/*3653*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILF), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$R1src, -4294967296:i64), (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$I2) - Complexity = 15
                // Dst: (IILF:i64 GR64:i64:$R1src, (LF32:i64 (imm:i64):$I2))
/*3662*/      /*Scope*/ 33, /*->3696*/
/*3663*/        OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*3669*/        OPC_RecordChild0, // #0 = $R1src
/*3670*/        OPC_MoveParent,
/*3671*/        OPC_RecordChild1, // #1 = $I2
/*3672*/        OPC_MoveChild, 1,
/*3674*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3677*/        OPC_CheckPredicate, 31, // Predicate_imm64hf32
/*3679*/        OPC_MoveParent,
/*3680*/        OPC_CheckType, MVT::i64,
/*3682*/        OPC_EmitConvertToTarget, 1,
/*3684*/        OPC_EmitNodeXForm, 8, 2, // HF32
/*3687*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIHF), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$R1src, 4294967295:i64), (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$I2) - Complexity = 15
                // Dst: (IIHF:i64 GR64:i64:$R1src, (HF32:i64 (imm:i64):$I2))
/*3696*/      0, /*End of Scope*/
/*3697*/    /*Scope*/ 47, /*->3745*/
/*3698*/      OPC_RecordNode, // #0 = $src
/*3699*/      OPC_CheckType, MVT::i64,
/*3701*/      OPC_Scope, 13, /*->3716*/ // 3 children in Scope
/*3703*/        OPC_CheckComplexPat, /*CP*/9, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*3706*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: dynalloc12only:i64:$src - Complexity = 12
                // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*3716*/      /*Scope*/ 13, /*->3730*/
/*3717*/        OPC_CheckComplexPat, /*CP*/10, /*#*/0, // selectLAAddr12Pair:$XBD2 #1 #2 #3
/*3720*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr12pair:i64:$XBD2 - Complexity = 12
                // Dst: (LA:i64 laaddr12pair:i64:$XBD2)
/*3730*/      /*Scope*/ 13, /*->3744*/
/*3731*/        OPC_CheckComplexPat, /*CP*/11, /*#*/0, // selectLAAddr20Pair:$XBD2 #1 #2 #3
/*3734*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr20pair:i64:$XBD2 - Complexity = 12
                // Dst: (LAY:i64 laaddr20pair:i64:$XBD2)
/*3744*/      0, /*End of Scope*/
/*3745*/    /*Scope*/ 50, /*->3796*/
/*3746*/      OPC_MoveChild, 0,
/*3748*/      OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*3751*/      OPC_RecordChild0, // #0 = $src
/*3752*/      OPC_MoveParent,
/*3753*/      OPC_RecordChild1, // #1 = $imm
/*3754*/      OPC_MoveChild, 1,
/*3756*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3759*/      OPC_CheckPredicate, 31, // Predicate_imm64hf32
/*3761*/      OPC_MoveParent,
/*3762*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                  1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #2
/*3769*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*3772*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 0, 3,  // Results = #4
/*3782*/      OPC_EmitConvertToTarget, 1,
/*3784*/      OPC_EmitNodeXForm, 8, 5, // HF32
/*3787*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIHF), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 4, 6, 
              // Src: (or:i64 (zext:i64 GR32:i32:$src), (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$imm) - Complexity = 10
              // Dst: (IIHF:i64 (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), GR32:i32:$src, subreg_32bit:i32), (HF32:i64 (imm:i64)<<P:Predicate_imm64hf32>>:$imm))
/*3796*/    /*Scope*/ 87|128,1/*215*/, /*->4013*/
/*3798*/      OPC_RecordChild0, // #0 = $R1src
/*3799*/      OPC_RecordChild1, // #1 = $I2
/*3800*/      OPC_Scope, 57|128,1/*185*/, /*->3988*/ // 3 children in Scope
/*3803*/        OPC_MoveChild, 1,
/*3805*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3808*/        OPC_Scope, 19, /*->3829*/ // 9 children in Scope
/*3810*/          OPC_CheckPredicate, 24, // Predicate_imm32ll16
/*3812*/          OPC_MoveParent,
/*3813*/          OPC_CheckType, MVT::i32,
/*3815*/          OPC_EmitConvertToTarget, 1,
/*3817*/          OPC_EmitNodeXForm, 3, 2, // LL16
/*3820*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILL32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$I2) - Complexity = 7
                  // Dst: (OILL32:i32 GR32:i32:$R1src, (LL16:i32 (imm:i32):$I2))
/*3829*/        /*Scope*/ 19, /*->3849*/
/*3830*/          OPC_CheckPredicate, 25, // Predicate_imm32lh16
/*3832*/          OPC_MoveParent,
/*3833*/          OPC_CheckType, MVT::i32,
/*3835*/          OPC_EmitConvertToTarget, 1,
/*3837*/          OPC_EmitNodeXForm, 4, 2, // LH16
/*3840*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILH32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$I2) - Complexity = 7
                  // Dst: (OILH32:i32 GR32:i32:$R1src, (LH16:i32 (imm:i32):$I2))
/*3849*/        /*Scope*/ 19, /*->3869*/
/*3850*/          OPC_CheckPredicate, 26, // Predicate_imm64ll16
/*3852*/          OPC_MoveParent,
/*3853*/          OPC_CheckType, MVT::i64,
/*3855*/          OPC_EmitConvertToTarget, 1,
/*3857*/          OPC_EmitNodeXForm, 3, 2, // LL16
/*3860*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILL), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64ll16>><<X:LL16>>:$I2) - Complexity = 7
                  // Dst: (OILL:i64 GR64:i64:$R1src, (LL16:i64 (imm:i64):$I2))
/*3869*/        /*Scope*/ 19, /*->3889*/
/*3870*/          OPC_CheckPredicate, 27, // Predicate_imm64lh16
/*3872*/          OPC_MoveParent,
/*3873*/          OPC_CheckType, MVT::i64,
/*3875*/          OPC_EmitConvertToTarget, 1,
/*3877*/          OPC_EmitNodeXForm, 4, 2, // LH16
/*3880*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILH), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64lh16>><<X:LH16>>:$I2) - Complexity = 7
                  // Dst: (OILH:i64 GR64:i64:$R1src, (LH16:i64 (imm:i64):$I2))
/*3889*/        /*Scope*/ 19, /*->3909*/
/*3890*/          OPC_CheckPredicate, 28, // Predicate_imm64hl16
/*3892*/          OPC_MoveParent,
/*3893*/          OPC_CheckType, MVT::i64,
/*3895*/          OPC_EmitConvertToTarget, 1,
/*3897*/          OPC_EmitNodeXForm, 5, 2, // HL16
/*3900*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIHL), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hl16>><<X:HL16>>:$I2) - Complexity = 7
                  // Dst: (OIHL:i64 GR64:i64:$R1src, (HL16:i64 (imm:i64):$I2))
/*3909*/        /*Scope*/ 19, /*->3929*/
/*3910*/          OPC_CheckPredicate, 29, // Predicate_imm64hh16
/*3912*/          OPC_MoveParent,
/*3913*/          OPC_CheckType, MVT::i64,
/*3915*/          OPC_EmitConvertToTarget, 1,
/*3917*/          OPC_EmitNodeXForm, 6, 2, // HH16
/*3920*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIHH), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hh16>><<X:HH16>>:$I2) - Complexity = 7
                  // Dst: (OIHH:i64 GR64:i64:$R1src, (HH16:i64 (imm:i64):$I2))
/*3929*/        /*Scope*/ 19, /*->3949*/
/*3930*/          OPC_CheckPredicate, 30, // Predicate_imm64lf32
/*3932*/          OPC_MoveParent,
/*3933*/          OPC_CheckType, MVT::i64,
/*3935*/          OPC_EmitConvertToTarget, 1,
/*3937*/          OPC_EmitNodeXForm, 7, 2, // LF32
/*3940*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILF), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$I2) - Complexity = 7
                  // Dst: (OILF:i64 GR64:i64:$R1src, (LF32:i64 (imm:i64):$I2))
/*3949*/        /*Scope*/ 19, /*->3969*/
/*3950*/          OPC_CheckPredicate, 31, // Predicate_imm64hf32
/*3952*/          OPC_MoveParent,
/*3953*/          OPC_CheckType, MVT::i64,
/*3955*/          OPC_EmitConvertToTarget, 1,
/*3957*/          OPC_EmitNodeXForm, 8, 2, // HF32
/*3960*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIHF), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$I2) - Complexity = 7
                  // Dst: (OIHF:i64 GR64:i64:$R1src, (HF32:i64 (imm:i64):$I2))
/*3969*/        /*Scope*/ 17, /*->3987*/
/*3970*/          OPC_MoveParent,
/*3971*/          OPC_CheckType, MVT::i32,
/*3973*/          OPC_EmitConvertToTarget, 1,
/*3975*/          OPC_EmitNodeXForm, 9, 2, // UIMM32
/*3978*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILF32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GR32:i32:$R1src, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                  // Dst: (OILF32:i32 GR32:i32:$R1src, (UIMM32:i32 (imm:i32):$I2))
/*3987*/        0, /*End of Scope*/
/*3988*/      /*Scope*/ 11, /*->4000*/
/*3989*/        OPC_CheckType, MVT::i32,
/*3991*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (OR:i32 GR32:i32:$R1src, GR32:i32:$R2)
/*4000*/      /*Scope*/ 11, /*->4012*/
/*4001*/        OPC_CheckType, MVT::i64,
/*4003*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::OGR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (OGR:i64 GR64:i64:$R1src, GR64:i64:$R2)
/*4012*/      0, /*End of Scope*/
/*4013*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 55|128,5/*695*/,  TARGET_VAL(SystemZISD::CMP),// ->4713
/*4018*/    OPC_Scope, 8|128,1/*136*/, /*->4157*/ // 3 children in Scope
/*4021*/      OPC_RecordChild0, // #0 = $R1
/*4022*/      OPC_Scope, 55, /*->4079*/ // 2 children in Scope
/*4024*/        OPC_CheckChild0Type, MVT::i32,
/*4026*/        OPC_MoveChild, 1,
/*4028*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4031*/        OPC_RecordMemRef,
/*4032*/        OPC_RecordNode, // #1 = 'ld' chained node
/*4033*/        OPC_CheckFoldableChainNode,
/*4034*/        OPC_RecordChild1, // #2 = $I2
/*4035*/        OPC_CheckChild1Type, MVT::i64,
/*4037*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4039*/        OPC_Scope, 19, /*->4060*/ // 2 children in Scope
/*4041*/          OPC_CheckPredicate, 10, // Predicate_sextload
/*4043*/          OPC_CheckPredicate, 32, // Predicate_sextloadi16
/*4045*/          OPC_CheckPredicate, 33, // Predicate_aligned_sextloadi16
/*4047*/          OPC_MoveParent,
/*4048*/          OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$I2 #3
/*4051*/          OPC_EmitMergeInputChains1_1,
/*4052*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                  // Src: (z_cmp GR32:i32:$R1, (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_aligned_sextloadi16>>) - Complexity = 20
                  // Dst: (CHRL GR32:i32:$R1, pcrel32:i64:$I2)
/*4060*/        /*Scope*/ 17, /*->4078*/
/*4061*/          OPC_CheckPredicate, 1, // Predicate_load
/*4063*/          OPC_CheckPredicate, 34, // Predicate_aligned_load
/*4065*/          OPC_MoveParent,
/*4066*/          OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$I2 #3
/*4069*/          OPC_EmitMergeInputChains1_1,
/*4070*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                  // Src: (z_cmp GR32:i32:$R1, (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>>) - Complexity = 20
                  // Dst: (CRL GR32:i32:$R1, pcrel32:i64:$I2)
/*4078*/        0, /*End of Scope*/
/*4079*/      /*Scope*/ 76, /*->4156*/
/*4080*/        OPC_CheckChild0Type, MVT::i64,
/*4082*/        OPC_MoveChild, 1,
/*4084*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4087*/        OPC_RecordMemRef,
/*4088*/        OPC_RecordNode, // #1 = 'ld' chained node
/*4089*/        OPC_CheckFoldableChainNode,
/*4090*/        OPC_RecordChild1, // #2 = $I2
/*4091*/        OPC_CheckChild1Type, MVT::i64,
/*4093*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4095*/        OPC_Scope, 40, /*->4137*/ // 2 children in Scope
/*4097*/          OPC_CheckPredicate, 10, // Predicate_sextload
/*4099*/          OPC_Scope, 17, /*->4118*/ // 2 children in Scope
/*4101*/            OPC_CheckPredicate, 32, // Predicate_sextloadi16
/*4103*/            OPC_CheckPredicate, 33, // Predicate_aligned_sextloadi16
/*4105*/            OPC_MoveParent,
/*4106*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$I2 #3
/*4109*/            OPC_EmitMergeInputChains1_1,
/*4110*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGHRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_aligned_sextloadi16>>) - Complexity = 20
                    // Dst: (CGHRL GR64:i64:$R1, pcrel32:i64:$I2)
/*4118*/          /*Scope*/ 17, /*->4136*/
/*4119*/            OPC_CheckPredicate, 35, // Predicate_sextloadi32
/*4121*/            OPC_CheckPredicate, 36, // Predicate_aligned_sextloadi32
/*4123*/            OPC_MoveParent,
/*4124*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$I2 #3
/*4127*/            OPC_EmitMergeInputChains1_1,
/*4128*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGFRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>><<P:Predicate_aligned_sextloadi32>>) - Complexity = 20
                    // Dst: (CGFRL GR64:i64:$R1, pcrel32:i64:$I2)
/*4136*/          0, /*End of Scope*/
/*4137*/        /*Scope*/ 17, /*->4155*/
/*4138*/          OPC_CheckPredicate, 1, // Predicate_load
/*4140*/          OPC_CheckPredicate, 34, // Predicate_aligned_load
/*4142*/          OPC_MoveParent,
/*4143*/          OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$I2 #3
/*4146*/          OPC_EmitMergeInputChains1_1,
/*4147*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                  // Src: (z_cmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>>) - Complexity = 20
                  // Dst: (CGRL GR64:i64:$R1, pcrel32:i64:$I2)
/*4155*/        0, /*End of Scope*/
/*4156*/      0, /*End of Scope*/
/*4157*/    /*Scope*/ 115, /*->4273*/
/*4158*/      OPC_MoveChild, 0,
/*4160*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4163*/      OPC_RecordMemRef,
/*4164*/      OPC_RecordNode, // #0 = 'ld' chained node
/*4165*/      OPC_CheckFoldableChainNode,
/*4166*/      OPC_RecordChild1, // #1 = $BD1
/*4167*/      OPC_CheckChild1Type, MVT::i64,
/*4169*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4171*/      OPC_Scope, 34, /*->4207*/ // 2 children in Scope
/*4173*/        OPC_CheckPredicate, 10, // Predicate_sextload
/*4175*/        OPC_CheckPredicate, 32, // Predicate_sextloadi16
/*4177*/        OPC_CheckType, MVT::i32,
/*4179*/        OPC_MoveParent,
/*4180*/        OPC_RecordChild1, // #2 = $I2
/*4181*/        OPC_MoveChild, 1,
/*4183*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4186*/        OPC_CheckPredicate, 16, // Predicate_imm32sx16
/*4188*/        OPC_MoveParent,
/*4189*/        OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*4192*/        OPC_EmitMergeInputChains1_0,
/*4193*/        OPC_EmitConvertToTarget, 2,
/*4195*/        OPC_EmitNodeXForm, 2, 5, // SIMM16
/*4198*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                // Src: (z_cmp (ld:i32 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2) - Complexity = 20
                // Dst: (CHHSI bdaddr12only:i64:$BD1, (SIMM16:i32 (imm:i32):$I2))
/*4207*/      /*Scope*/ 64, /*->4272*/
/*4208*/        OPC_CheckPredicate, 1, // Predicate_load
/*4210*/        OPC_SwitchType /*2 cases */, 28,  MVT::i32,// ->4241
/*4213*/          OPC_MoveParent,
/*4214*/          OPC_RecordChild1, // #2 = $I2
/*4215*/          OPC_MoveChild, 1,
/*4217*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4220*/          OPC_CheckPredicate, 16, // Predicate_imm32sx16
/*4222*/          OPC_MoveParent,
/*4223*/          OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*4226*/          OPC_EmitMergeInputChains1_0,
/*4227*/          OPC_EmitConvertToTarget, 2,
/*4229*/          OPC_EmitNodeXForm, 2, 5, // SIMM16
/*4232*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (z_cmp (ld:i32 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2) - Complexity = 20
                  // Dst: (CHSI bdaddr12only:i64:$BD1, (SIMM16:i32 (imm:i32):$I2))
                /*SwitchType*/ 28,  MVT::i64,// ->4271
/*4243*/          OPC_MoveParent,
/*4244*/          OPC_RecordChild1, // #2 = $I2
/*4245*/          OPC_MoveChild, 1,
/*4247*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4250*/          OPC_CheckPredicate, 17, // Predicate_imm64sx16
/*4252*/          OPC_MoveParent,
/*4253*/          OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*4256*/          OPC_EmitMergeInputChains1_0,
/*4257*/          OPC_EmitConvertToTarget, 2,
/*4259*/          OPC_EmitNodeXForm, 2, 5, // SIMM16
/*4262*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (z_cmp (ld:i64 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2) - Complexity = 20
                  // Dst: (CGHSI bdaddr12only:i64:$BD1, (SIMM16:i64 (imm:i64):$I2))
                0, // EndSwitchType
/*4272*/      0, /*End of Scope*/
/*4273*/    /*Scope*/ 53|128,3/*437*/, /*->4712*/
/*4275*/      OPC_RecordChild0, // #0 = $R1
/*4276*/      OPC_Scope, 7|128,1/*135*/, /*->4414*/ // 10 children in Scope
/*4279*/        OPC_CheckChild0Type, MVT::i32,
/*4281*/        OPC_Scope, 89, /*->4372*/ // 2 children in Scope
/*4283*/          OPC_MoveChild, 1,
/*4285*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4288*/          OPC_RecordMemRef,
/*4289*/          OPC_RecordNode, // #1 = 'ld' chained node
/*4290*/          OPC_CheckFoldableChainNode,
/*4291*/          OPC_RecordChild1, // #2 = $XBD2
/*4292*/          OPC_CheckChild1Type, MVT::i64,
/*4294*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4296*/          OPC_Scope, 37, /*->4335*/ // 2 children in Scope
/*4298*/            OPC_CheckPredicate, 10, // Predicate_sextload
/*4300*/            OPC_CheckPredicate, 32, // Predicate_sextloadi16
/*4302*/            OPC_MoveParent,
/*4303*/            OPC_Scope, 14, /*->4319*/ // 2 children in Scope
/*4305*/              OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*4308*/              OPC_EmitMergeInputChains1_1,
/*4309*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::CH), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR32:i32:$R1, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                      // Dst: (CH GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*4319*/            /*Scope*/ 14, /*->4334*/
/*4320*/              OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*4323*/              OPC_EmitMergeInputChains1_1,
/*4324*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR32:i32:$R1, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                      // Dst: (CHY GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*4334*/            0, /*End of Scope*/
/*4335*/          /*Scope*/ 35, /*->4371*/
/*4336*/            OPC_CheckPredicate, 1, // Predicate_load
/*4338*/            OPC_MoveParent,
/*4339*/            OPC_Scope, 14, /*->4355*/ // 2 children in Scope
/*4341*/              OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*4344*/              OPC_EmitMergeInputChains1_1,
/*4345*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::C), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR32:i32:$R1, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                      // Dst: (C GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*4355*/            /*Scope*/ 14, /*->4370*/
/*4356*/              OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*4359*/              OPC_EmitMergeInputChains1_1,
/*4360*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::CY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR32:i32:$R1, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                      // Dst: (CY GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*4370*/            0, /*End of Scope*/
/*4371*/          0, /*End of Scope*/
/*4372*/        /*Scope*/ 40, /*->4413*/
/*4373*/          OPC_RecordChild1, // #1 = $I2
/*4374*/          OPC_MoveChild, 1,
/*4376*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4379*/          OPC_Scope, 16, /*->4397*/ // 2 children in Scope
/*4381*/            OPC_CheckPredicate, 16, // Predicate_imm32sx16
/*4383*/            OPC_MoveParent,
/*4384*/            OPC_EmitConvertToTarget, 1,
/*4386*/            OPC_EmitNodeXForm, 2, 2, // SIMM16
/*4389*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHI), 0|OPFL_GlueOutput,
                        0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR32:i32:$R1, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                    // Dst: (CHI GR32:i32:$R1, (SIMM16:i32 (imm:i32):$I2))
/*4397*/          /*Scope*/ 14, /*->4412*/
/*4398*/            OPC_MoveParent,
/*4399*/            OPC_EmitConvertToTarget, 1,
/*4401*/            OPC_EmitNodeXForm, 10, 2, // SIMM32
/*4404*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CFI), 0|OPFL_GlueOutput,
                        0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR32:i32:$R1, (imm:i32)<<X:SIMM32>>:$I2) - Complexity = 6
                    // Dst: (CFI GR32:i32:$R1, (SIMM32:i32 (imm:i32):$I2))
/*4412*/          0, /*End of Scope*/
/*4413*/        0, /*End of Scope*/
/*4414*/      /*Scope*/ 122, /*->4537*/
/*4415*/        OPC_CheckChild0Type, MVT::i64,
/*4417*/        OPC_Scope, 74, /*->4493*/ // 2 children in Scope
/*4419*/          OPC_MoveChild, 1,
/*4421*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4424*/          OPC_RecordMemRef,
/*4425*/          OPC_RecordNode, // #1 = 'ld' chained node
/*4426*/          OPC_CheckFoldableChainNode,
/*4427*/          OPC_RecordChild1, // #2 = $XBD2
/*4428*/          OPC_CheckChild1Type, MVT::i64,
/*4430*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4432*/          OPC_Scope, 40, /*->4474*/ // 2 children in Scope
/*4434*/            OPC_CheckPredicate, 10, // Predicate_sextload
/*4436*/            OPC_Scope, 17, /*->4455*/ // 2 children in Scope
/*4438*/              OPC_CheckPredicate, 32, // Predicate_sextloadi16
/*4440*/              OPC_MoveParent,
/*4441*/              OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*4444*/              OPC_EmitMergeInputChains1_1,
/*4445*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGH), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR64:i64:$R1, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                      // Dst: (CGH GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*4455*/            /*Scope*/ 17, /*->4473*/
/*4456*/              OPC_CheckPredicate, 35, // Predicate_sextloadi32
/*4458*/              OPC_MoveParent,
/*4459*/              OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*4462*/              OPC_EmitMergeInputChains1_1,
/*4463*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR64:i64:$R1, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>) - Complexity = 19
                      // Dst: (CGF GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*4473*/            0, /*End of Scope*/
/*4474*/          /*Scope*/ 17, /*->4492*/
/*4475*/            OPC_CheckPredicate, 1, // Predicate_load
/*4477*/            OPC_MoveParent,
/*4478*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*4481*/            OPC_EmitMergeInputChains1_1,
/*4482*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (z_cmp GR64:i64:$R1, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (CG GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*4492*/          0, /*End of Scope*/
/*4493*/        /*Scope*/ 42, /*->4536*/
/*4494*/          OPC_RecordChild1, // #1 = $I2
/*4495*/          OPC_MoveChild, 1,
/*4497*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4500*/          OPC_Scope, 16, /*->4518*/ // 2 children in Scope
/*4502*/            OPC_CheckPredicate, 17, // Predicate_imm64sx16
/*4504*/            OPC_MoveParent,
/*4505*/            OPC_EmitConvertToTarget, 1,
/*4507*/            OPC_EmitNodeXForm, 2, 2, // SIMM16
/*4510*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGHI), 0|OPFL_GlueOutput,
                        0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR64:i64:$R1, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                    // Dst: (CGHI GR64:i64:$R1, (SIMM16:i64 (imm:i64):$I2))
/*4518*/          /*Scope*/ 16, /*->4535*/
/*4519*/            OPC_CheckPredicate, 37, // Predicate_imm64sx32
/*4521*/            OPC_MoveParent,
/*4522*/            OPC_EmitConvertToTarget, 1,
/*4524*/            OPC_EmitNodeXForm, 10, 2, // SIMM32
/*4527*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGFI), 0|OPFL_GlueOutput,
                        0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR64:i64:$R1, (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$I2) - Complexity = 7
                    // Dst: (CGFI GR64:i64:$R1, (SIMM32:i64 (imm:i64):$I2))
/*4535*/          0, /*End of Scope*/
/*4536*/        0, /*End of Scope*/
/*4537*/      /*Scope*/ 32, /*->4570*/
/*4538*/        OPC_CheckChild0Type, MVT::f32,
/*4540*/        OPC_MoveChild, 1,
/*4542*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4545*/        OPC_RecordMemRef,
/*4546*/        OPC_RecordNode, // #1 = 'ld' chained node
/*4547*/        OPC_CheckFoldableChainNode,
/*4548*/        OPC_RecordChild1, // #2 = $XBD2
/*4549*/        OPC_CheckChild1Type, MVT::i64,
/*4551*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4553*/        OPC_CheckPredicate, 1, // Predicate_load
/*4555*/        OPC_MoveParent,
/*4556*/        OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*4559*/        OPC_EmitMergeInputChains1_1,
/*4560*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CEB), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (z_cmp FP32:f32:$R1, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (CEB FP32:f32:$R1, bdxaddr12only:i64:$XBD2)
/*4570*/      /*Scope*/ 32, /*->4603*/
/*4571*/        OPC_CheckChild0Type, MVT::f64,
/*4573*/        OPC_MoveChild, 1,
/*4575*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4578*/        OPC_RecordMemRef,
/*4579*/        OPC_RecordNode, // #1 = 'ld' chained node
/*4580*/        OPC_CheckFoldableChainNode,
/*4581*/        OPC_RecordChild1, // #2 = $XBD2
/*4582*/        OPC_CheckChild1Type, MVT::i64,
/*4584*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4586*/        OPC_CheckPredicate, 1, // Predicate_load
/*4588*/        OPC_MoveParent,
/*4589*/        OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*4592*/        OPC_EmitMergeInputChains1_1,
/*4593*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CDB), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (z_cmp FP64:f64:$R1, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (CDB FP64:f64:$R1, bdxaddr12only:i64:$XBD2)
/*4603*/      /*Scope*/ 47, /*->4651*/
/*4604*/        OPC_MoveChild, 1,
/*4606*/        OPC_SwitchOpcode /*2 cases */, 10,  TARGET_VAL(ISD::SIGN_EXTEND),// ->4620
/*4610*/          OPC_RecordChild0, // #1 = $src2
/*4611*/          OPC_MoveParent,
/*4612*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGFR), 0|OPFL_GlueOutput,
                      0/*#VTs*/, 2/*#Ops*/, 0, 1, 
                  // Src: (z_cmp GR64:i64:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (CGFR GR64:i64:$src1, GR32:i32:$src2)
                /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->4650
/*4623*/          OPC_RecordChild0, // #1 = $src2
/*4624*/          OPC_MoveChild, 1,
/*4626*/          OPC_CheckValueType, MVT::i32,
/*4628*/          OPC_MoveParent,
/*4629*/          OPC_MoveParent,
/*4630*/          OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*4633*/          OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4642*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGFR), 0|OPFL_GlueOutput,
                      0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                  // Src: (z_cmp GR64:i64:$src1, (sext_inreg:i64 GR64:i64:$src2, i32:Other)) - Complexity = 6
                  // Dst: (CGFR GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
                0, // EndSwitchOpcode
/*4651*/      /*Scope*/ 11, /*->4663*/
/*4652*/        OPC_CheckChild0Type, MVT::i32,
/*4654*/        OPC_RecordChild1, // #1 = $R2
/*4655*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CR), 0|OPFL_GlueOutput,
                    0/*#VTs*/, 2/*#Ops*/, 0, 1, 
                // Src: (z_cmp GR32:i32:$R1, GR32:i32:$R2) - Complexity = 3
                // Dst: (CR GR32:i32:$R1, GR32:i32:$R2)
/*4663*/      /*Scope*/ 11, /*->4675*/
/*4664*/        OPC_CheckChild0Type, MVT::i64,
/*4666*/        OPC_RecordChild1, // #1 = $R2
/*4667*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGR), 0|OPFL_GlueOutput,
                    0/*#VTs*/, 2/*#Ops*/, 0, 1, 
                // Src: (z_cmp GR64:i64:$R1, GR64:i64:$R2) - Complexity = 3
                // Dst: (CGR GR64:i64:$R1, GR64:i64:$R2)
/*4675*/      /*Scope*/ 11, /*->4687*/
/*4676*/        OPC_CheckChild0Type, MVT::f32,
/*4678*/        OPC_RecordChild1, // #1 = $R2
/*4679*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CEBR), 0|OPFL_GlueOutput,
                    0/*#VTs*/, 2/*#Ops*/, 0, 1, 
                // Src: (z_cmp FP32:f32:$R1, FP32:f32:$R2) - Complexity = 3
                // Dst: (CEBR FP32:f32:$R1, FP32:f32:$R2)
/*4687*/      /*Scope*/ 11, /*->4699*/
/*4688*/        OPC_CheckChild0Type, MVT::f64,
/*4690*/        OPC_RecordChild1, // #1 = $R2
/*4691*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CDBR), 0|OPFL_GlueOutput,
                    0/*#VTs*/, 2/*#Ops*/, 0, 1, 
                // Src: (z_cmp FP64:f64:$R1, FP64:f64:$R2) - Complexity = 3
                // Dst: (CDBR FP64:f64:$R1, FP64:f64:$R2)
/*4699*/      /*Scope*/ 11, /*->4711*/
/*4700*/        OPC_CheckChild0Type, MVT::f128,
/*4702*/        OPC_RecordChild1, // #1 = $R2
/*4703*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CXBR), 0|OPFL_GlueOutput,
                    0/*#VTs*/, 2/*#Ops*/, 0, 1, 
                // Src: (z_cmp FP128:f128:$R1, FP128:f128:$R2) - Complexity = 3
                // Dst: (CXBR FP128:f128:$R1, FP128:f128:$R2)
/*4711*/      0, /*End of Scope*/
/*4712*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 35|128,4/*547*/,  TARGET_VAL(SystemZISD::UCMP),// ->5264
/*4717*/    OPC_Scope, 8|128,1/*136*/, /*->4856*/ // 3 children in Scope
/*4720*/      OPC_RecordChild0, // #0 = $R1
/*4721*/      OPC_Scope, 55, /*->4778*/ // 2 children in Scope
/*4723*/        OPC_CheckChild0Type, MVT::i32,
/*4725*/        OPC_MoveChild, 1,
/*4727*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4730*/        OPC_RecordMemRef,
/*4731*/        OPC_RecordNode, // #1 = 'ld' chained node
/*4732*/        OPC_CheckFoldableChainNode,
/*4733*/        OPC_RecordChild1, // #2 = $I2
/*4734*/        OPC_CheckChild1Type, MVT::i64,
/*4736*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4738*/        OPC_Scope, 19, /*->4759*/ // 2 children in Scope
/*4740*/          OPC_CheckPredicate, 6, // Predicate_zextload
/*4742*/          OPC_CheckPredicate, 38, // Predicate_zextloadi16
/*4744*/          OPC_CheckPredicate, 39, // Predicate_aligned_zextloadi16
/*4746*/          OPC_MoveParent,
/*4747*/          OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$I2 #3
/*4750*/          OPC_EmitMergeInputChains1_1,
/*4751*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLHRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                  // Src: (z_ucmp GR32:i32:$R1, (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_aligned_zextloadi16>>) - Complexity = 20
                  // Dst: (CLHRL GR32:i32:$R1, pcrel32:i64:$I2)
/*4759*/        /*Scope*/ 17, /*->4777*/
/*4760*/          OPC_CheckPredicate, 1, // Predicate_load
/*4762*/          OPC_CheckPredicate, 34, // Predicate_aligned_load
/*4764*/          OPC_MoveParent,
/*4765*/          OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$I2 #3
/*4768*/          OPC_EmitMergeInputChains1_1,
/*4769*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                  // Src: (z_ucmp GR32:i32:$R1, (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>>) - Complexity = 20
                  // Dst: (CLRL GR32:i32:$R1, pcrel32:i64:$I2)
/*4777*/        0, /*End of Scope*/
/*4778*/      /*Scope*/ 76, /*->4855*/
/*4779*/        OPC_CheckChild0Type, MVT::i64,
/*4781*/        OPC_MoveChild, 1,
/*4783*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4786*/        OPC_RecordMemRef,
/*4787*/        OPC_RecordNode, // #1 = 'ld' chained node
/*4788*/        OPC_CheckFoldableChainNode,
/*4789*/        OPC_RecordChild1, // #2 = $I2
/*4790*/        OPC_CheckChild1Type, MVT::i64,
/*4792*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4794*/        OPC_Scope, 40, /*->4836*/ // 2 children in Scope
/*4796*/          OPC_CheckPredicate, 6, // Predicate_zextload
/*4798*/          OPC_Scope, 17, /*->4817*/ // 2 children in Scope
/*4800*/            OPC_CheckPredicate, 38, // Predicate_zextloadi16
/*4802*/            OPC_CheckPredicate, 39, // Predicate_aligned_zextloadi16
/*4804*/            OPC_MoveParent,
/*4805*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$I2 #3
/*4808*/            OPC_EmitMergeInputChains1_1,
/*4809*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGHRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                    // Src: (z_ucmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_aligned_zextloadi16>>) - Complexity = 20
                    // Dst: (CLGHRL GR64:i64:$R1, pcrel32:i64:$I2)
/*4817*/          /*Scope*/ 17, /*->4835*/
/*4818*/            OPC_CheckPredicate, 40, // Predicate_zextloadi32
/*4820*/            OPC_CheckPredicate, 41, // Predicate_aligned_zextloadi32
/*4822*/            OPC_MoveParent,
/*4823*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$I2 #3
/*4826*/            OPC_EmitMergeInputChains1_1,
/*4827*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGFRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                    // Src: (z_ucmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>><<P:Predicate_aligned_zextloadi32>>) - Complexity = 20
                    // Dst: (CLGFRL GR64:i64:$R1, pcrel32:i64:$I2)
/*4835*/          0, /*End of Scope*/
/*4836*/        /*Scope*/ 17, /*->4854*/
/*4837*/          OPC_CheckPredicate, 1, // Predicate_load
/*4839*/          OPC_CheckPredicate, 34, // Predicate_aligned_load
/*4841*/          OPC_MoveParent,
/*4842*/          OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$I2 #3
/*4845*/          OPC_EmitMergeInputChains1_1,
/*4846*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                  // Src: (z_ucmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>>) - Complexity = 20
                  // Dst: (CLGRL GR64:i64:$R1, pcrel32:i64:$I2)
/*4854*/        0, /*End of Scope*/
/*4855*/      0, /*End of Scope*/
/*4856*/    /*Scope*/ 43|128,1/*171*/, /*->5029*/
/*4858*/      OPC_MoveChild, 0,
/*4860*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4863*/      OPC_RecordMemRef,
/*4864*/      OPC_RecordNode, // #0 = 'ld' chained node
/*4865*/      OPC_CheckFoldableChainNode,
/*4866*/      OPC_RecordChild1, // #1 = $BD1
/*4867*/      OPC_CheckChild1Type, MVT::i64,
/*4869*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4871*/      OPC_Scope, 90, /*->4963*/ // 2 children in Scope
/*4873*/        OPC_CheckPredicate, 6, // Predicate_zextload
/*4875*/        OPC_CheckType, MVT::i32,
/*4877*/        OPC_Scope, 52, /*->4931*/ // 2 children in Scope
/*4879*/          OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*4881*/          OPC_MoveParent,
/*4882*/          OPC_RecordChild1, // #2 = $I2
/*4883*/          OPC_MoveChild, 1,
/*4885*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4888*/          OPC_CheckPredicate, 42, // Predicate_imm32zx8
/*4890*/          OPC_MoveParent,
/*4891*/          OPC_Scope, 18, /*->4911*/ // 2 children in Scope
/*4893*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr12Pair:$BD1 #3 #4
/*4896*/            OPC_EmitMergeInputChains1_0,
/*4897*/            OPC_EmitConvertToTarget, 2,
/*4899*/            OPC_EmitNodeXForm, 1, 5, // UIMM8
/*4902*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                    // Src: (z_ucmp (ld:i32 bdaddr12pair:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i32)<<P:Predicate_imm32zx8>><<X:UIMM8>>:$I2) - Complexity = 20
                    // Dst: (CLI bdaddr12pair:i64:$BD1, (UIMM8:i32 (imm:i32):$I2))
/*4911*/          /*Scope*/ 18, /*->4930*/
/*4912*/            OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectBDAddr20Pair:$BD1 #3 #4
/*4915*/            OPC_EmitMergeInputChains1_0,
/*4916*/            OPC_EmitConvertToTarget, 2,
/*4918*/            OPC_EmitNodeXForm, 1, 5, // UIMM8
/*4921*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLIY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                    // Src: (z_ucmp (ld:i32 bdaddr20pair:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i32)<<P:Predicate_imm32zx8>><<X:UIMM8>>:$I2) - Complexity = 20
                    // Dst: (CLIY bdaddr20pair:i64:$BD1, (UIMM8:i32 (imm:i32):$I2))
/*4930*/          0, /*End of Scope*/
/*4931*/        /*Scope*/ 30, /*->4962*/
/*4932*/          OPC_CheckPredicate, 38, // Predicate_zextloadi16
/*4934*/          OPC_MoveParent,
/*4935*/          OPC_RecordChild1, // #2 = $I2
/*4936*/          OPC_MoveChild, 1,
/*4938*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4941*/          OPC_CheckPredicate, 43, // Predicate_imm32zx16
/*4943*/          OPC_MoveParent,
/*4944*/          OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*4947*/          OPC_EmitMergeInputChains1_0,
/*4948*/          OPC_EmitConvertToTarget, 2,
/*4950*/          OPC_EmitNodeXForm, 11, 5, // UIMM16
/*4953*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLHHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (z_ucmp (ld:i32 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>>, (imm:i32)<<P:Predicate_imm32zx16>><<X:UIMM16>>:$I2) - Complexity = 20
                  // Dst: (CLHHSI bdaddr12only:i64:$BD1, (UIMM16:i32 (imm:i32):$I2))
/*4962*/        0, /*End of Scope*/
/*4963*/      /*Scope*/ 64, /*->5028*/
/*4964*/        OPC_CheckPredicate, 1, // Predicate_load
/*4966*/        OPC_SwitchType /*2 cases */, 28,  MVT::i32,// ->4997
/*4969*/          OPC_MoveParent,
/*4970*/          OPC_RecordChild1, // #2 = $I2
/*4971*/          OPC_MoveChild, 1,
/*4973*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4976*/          OPC_CheckPredicate, 43, // Predicate_imm32zx16
/*4978*/          OPC_MoveParent,
/*4979*/          OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*4982*/          OPC_EmitMergeInputChains1_0,
/*4983*/          OPC_EmitConvertToTarget, 2,
/*4985*/          OPC_EmitNodeXForm, 11, 5, // UIMM16
/*4988*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLFHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (z_ucmp (ld:i32 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32)<<P:Predicate_imm32zx16>><<X:UIMM16>>:$I2) - Complexity = 20
                  // Dst: (CLFHSI bdaddr12only:i64:$BD1, (UIMM16:i32 (imm:i32):$I2))
                /*SwitchType*/ 28,  MVT::i64,// ->5027
/*4999*/          OPC_MoveParent,
/*5000*/          OPC_RecordChild1, // #2 = $I2
/*5001*/          OPC_MoveChild, 1,
/*5003*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5006*/          OPC_CheckPredicate, 44, // Predicate_imm64zx16
/*5008*/          OPC_MoveParent,
/*5009*/          OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*5012*/          OPC_EmitMergeInputChains1_0,
/*5013*/          OPC_EmitConvertToTarget, 2,
/*5015*/          OPC_EmitNodeXForm, 11, 5, // UIMM16
/*5018*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (z_ucmp (ld:i64 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i64)<<P:Predicate_imm64zx16>><<X:UIMM16>>:$I2) - Complexity = 20
                  // Dst: (CLGHSI bdaddr12only:i64:$BD1, (UIMM16:i64 (imm:i64):$I2))
                0, // EndSwitchType
/*5028*/      0, /*End of Scope*/
/*5029*/    /*Scope*/ 104|128,1/*232*/, /*->5263*/
/*5031*/      OPC_RecordChild0, // #0 = $R1
/*5032*/      OPC_Scope, 74, /*->5108*/ // 5 children in Scope
/*5034*/        OPC_CheckChild0Type, MVT::i32,
/*5036*/        OPC_Scope, 48, /*->5086*/ // 2 children in Scope
/*5038*/          OPC_MoveChild, 1,
/*5040*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5043*/          OPC_RecordMemRef,
/*5044*/          OPC_RecordNode, // #1 = 'ld' chained node
/*5045*/          OPC_CheckFoldableChainNode,
/*5046*/          OPC_RecordChild1, // #2 = $XBD2
/*5047*/          OPC_CheckChild1Type, MVT::i64,
/*5049*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5051*/          OPC_CheckPredicate, 1, // Predicate_load
/*5053*/          OPC_MoveParent,
/*5054*/          OPC_Scope, 14, /*->5070*/ // 2 children in Scope
/*5056*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*5059*/            OPC_EmitMergeInputChains1_1,
/*5060*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (z_ucmp GR32:i32:$R1, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (CL GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*5070*/          /*Scope*/ 14, /*->5085*/
/*5071*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*5074*/            OPC_EmitMergeInputChains1_1,
/*5075*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (z_ucmp GR32:i32:$R1, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (CLY GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*5085*/          0, /*End of Scope*/
/*5086*/        /*Scope*/ 20, /*->5107*/
/*5087*/          OPC_RecordChild1, // #1 = $I2
/*5088*/          OPC_MoveChild, 1,
/*5090*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5093*/          OPC_MoveParent,
/*5094*/          OPC_EmitConvertToTarget, 1,
/*5096*/          OPC_EmitNodeXForm, 9, 2, // UIMM32
/*5099*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLFI), 0|OPFL_GlueOutput,
                      0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                  // Src: (z_ucmp GR32:i32:$R1, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                  // Dst: (CLFI GR32:i32:$R1, (UIMM32:i32 (imm:i32):$I2))
/*5107*/        0, /*End of Scope*/
/*5108*/      /*Scope*/ 113, /*->5222*/
/*5109*/        OPC_CheckChild0Type, MVT::i64,
/*5111*/        OPC_Scope, 85, /*->5198*/ // 2 children in Scope
/*5113*/          OPC_MoveChild, 1,
/*5115*/          OPC_Scope, 51, /*->5168*/ // 2 children in Scope
/*5117*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5120*/            OPC_RecordMemRef,
/*5121*/            OPC_RecordNode, // #1 = 'ld' chained node
/*5122*/            OPC_CheckFoldableChainNode,
/*5123*/            OPC_RecordChild1, // #2 = $XBD2
/*5124*/            OPC_CheckChild1Type, MVT::i64,
/*5126*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5128*/            OPC_Scope, 19, /*->5149*/ // 2 children in Scope
/*5130*/              OPC_CheckPredicate, 6, // Predicate_zextload
/*5132*/              OPC_CheckPredicate, 40, // Predicate_zextloadi32
/*5134*/              OPC_MoveParent,
/*5135*/              OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*5138*/              OPC_EmitMergeInputChains1_1,
/*5139*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_ucmp GR64:i64:$R1, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>) - Complexity = 19
                      // Dst: (CLGF GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*5149*/            /*Scope*/ 17, /*->5167*/
/*5150*/              OPC_CheckPredicate, 1, // Predicate_load
/*5152*/              OPC_MoveParent,
/*5153*/              OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*5156*/              OPC_EmitMergeInputChains1_1,
/*5157*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_ucmp GR64:i64:$R1, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                      // Dst: (CLG GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*5167*/            0, /*End of Scope*/
/*5168*/          /*Scope*/ 28, /*->5197*/
/*5169*/            OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*5175*/            OPC_RecordChild0, // #1 = $src2
/*5176*/            OPC_MoveParent,
/*5177*/            OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*5180*/            OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*5189*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGFR), 0|OPFL_GlueOutput,
                        0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                    // Src: (z_ucmp GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
                    // Dst: (CLGFR GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*5197*/          0, /*End of Scope*/
/*5198*/        /*Scope*/ 22, /*->5221*/
/*5199*/          OPC_RecordChild1, // #1 = $I2
/*5200*/          OPC_MoveChild, 1,
/*5202*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5205*/          OPC_CheckPredicate, 45, // Predicate_imm64zx32
/*5207*/          OPC_MoveParent,
/*5208*/          OPC_EmitConvertToTarget, 1,
/*5210*/          OPC_EmitNodeXForm, 9, 2, // UIMM32
/*5213*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGFI), 0|OPFL_GlueOutput,
                      0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                  // Src: (z_ucmp GR64:i64:$R1, (imm:i64)<<P:Predicate_imm64zx32>><<X:UIMM32>>:$I2) - Complexity = 7
                  // Dst: (CLGFI GR64:i64:$R1, (UIMM32:i64 (imm:i64):$I2))
/*5221*/        0, /*End of Scope*/
/*5222*/      /*Scope*/ 15, /*->5238*/
/*5223*/        OPC_MoveChild, 1,
/*5225*/        OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*5228*/        OPC_RecordChild0, // #1 = $src2
/*5229*/        OPC_MoveParent,
/*5230*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGFR), 0|OPFL_GlueOutput,
                    0/*#VTs*/, 2/*#Ops*/, 0, 1, 
                // Src: (z_ucmp GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                // Dst: (CLGFR GR64:i64:$src1, GR32:i32:$src2)
/*5238*/      /*Scope*/ 11, /*->5250*/
/*5239*/        OPC_CheckChild0Type, MVT::i32,
/*5241*/        OPC_RecordChild1, // #1 = $R2
/*5242*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLR), 0|OPFL_GlueOutput,
                    0/*#VTs*/, 2/*#Ops*/, 0, 1, 
                // Src: (z_ucmp GR32:i32:$R1, GR32:i32:$R2) - Complexity = 3
                // Dst: (CLR GR32:i32:$R1, GR32:i32:$R2)
/*5250*/      /*Scope*/ 11, /*->5262*/
/*5251*/        OPC_CheckChild0Type, MVT::i64,
/*5253*/        OPC_RecordChild1, // #1 = $R2
/*5254*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGR), 0|OPFL_GlueOutput,
                    0/*#VTs*/, 2/*#Ops*/, 0, 1, 
                // Src: (z_ucmp GR64:i64:$R1, GR64:i64:$R2) - Complexity = 3
                // Dst: (CLGR GR64:i64:$R1, GR64:i64:$R2)
/*5262*/      0, /*End of Scope*/
/*5263*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 78,  TARGET_VAL(ISD::BSWAP),// ->5345
/*5267*/    OPC_Scope, 51, /*->5320*/ // 2 children in Scope
/*5269*/      OPC_MoveChild, 0,
/*5271*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5274*/      OPC_RecordMemRef,
/*5275*/      OPC_RecordNode, // #0 = 'ld' chained node
/*5276*/      OPC_RecordChild1, // #1 = $XBD2
/*5277*/      OPC_CheckChild1Type, MVT::i64,
/*5279*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5281*/      OPC_CheckPredicate, 1, // Predicate_load
/*5283*/      OPC_CheckPredicate, 46, // Predicate_nonvolatile_load
/*5285*/      OPC_MoveParent,
/*5286*/      OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->5303
/*5289*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*5292*/        OPC_EmitMergeInputChains1_0,
/*5293*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRV), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (bswap:i32 (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>) - Complexity = 19
                // Dst: (LRV:i32 bdxaddr20only:i64:$XBD2)
              /*SwitchType*/ 14,  MVT::i64,// ->5319
/*5305*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*5308*/        OPC_EmitMergeInputChains1_0,
/*5309*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRVG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                // Src: (bswap:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>) - Complexity = 19
                // Dst: (LRVG:i64 bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*5320*/    /*Scope*/ 23, /*->5344*/
/*5321*/      OPC_RecordChild0, // #0 = $R2
/*5322*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5333
/*5325*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRVR), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (bswap:i32 GR32:i32:$R2) - Complexity = 3
                // Dst: (LRVR:i32 GR32:i32:$R2)
              /*SwitchType*/ 8,  MVT::i64,// ->5343
/*5335*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRVGR), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (bswap:i64 GR64:i64:$R2) - Complexity = 3
                // Dst: (LRVGR:i64 GR64:i64:$R2)
              0, // EndSwitchType
/*5344*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 115|128,5/*755*/,  TARGET_VAL(ISD::ADD),// ->6104
/*5349*/    OPC_Scope, 37|128,1/*165*/, /*->5517*/ // 10 children in Scope
/*5352*/      OPC_RecordChild0, // #0 = $R1src
/*5353*/      OPC_MoveChild, 1,
/*5355*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5358*/      OPC_RecordMemRef,
/*5359*/      OPC_RecordNode, // #1 = 'ld' chained node
/*5360*/      OPC_CheckFoldableChainNode,
/*5361*/      OPC_RecordChild1, // #2 = $XBD2
/*5362*/      OPC_CheckChild1Type, MVT::i64,
/*5364*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5366*/      OPC_Scope, 41, /*->5409*/ // 5 children in Scope
/*5368*/        OPC_CheckPredicate, 10, // Predicate_sextload
/*5370*/        OPC_CheckPredicate, 32, // Predicate_sextloadi16
/*5372*/        OPC_MoveParent,
/*5373*/        OPC_CheckType, MVT::i32,
/*5375*/        OPC_Scope, 15, /*->5392*/ // 2 children in Scope
/*5377*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*5380*/          OPC_EmitMergeInputChains1_1,
/*5381*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (add:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                  // Dst: (AH:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*5392*/        /*Scope*/ 15, /*->5408*/
/*5393*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*5396*/          OPC_EmitMergeInputChains1_1,
/*5397*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AHY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (add:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                  // Dst: (AHY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*5408*/        0, /*End of Scope*/
/*5409*/      /*Scope*/ 39, /*->5449*/
/*5410*/        OPC_CheckPredicate, 1, // Predicate_load
/*5412*/        OPC_MoveParent,
/*5413*/        OPC_CheckType, MVT::i32,
/*5415*/        OPC_Scope, 15, /*->5432*/ // 2 children in Scope
/*5417*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*5420*/          OPC_EmitMergeInputChains1_1,
/*5421*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::A), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (add:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (A:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*5432*/        /*Scope*/ 15, /*->5448*/
/*5433*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*5436*/          OPC_EmitMergeInputChains1_1,
/*5437*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (add:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (AY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*5448*/        0, /*End of Scope*/
/*5449*/      /*Scope*/ 22, /*->5472*/
/*5450*/        OPC_CheckPredicate, 10, // Predicate_sextload
/*5452*/        OPC_CheckPredicate, 35, // Predicate_sextloadi32
/*5454*/        OPC_MoveParent,
/*5455*/        OPC_CheckType, MVT::i64,
/*5457*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*5460*/        OPC_EmitMergeInputChains1_1,
/*5461*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (add:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>) - Complexity = 19
                // Dst: (AGF:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*5472*/      /*Scope*/ 20, /*->5493*/
/*5473*/        OPC_CheckPredicate, 1, // Predicate_load
/*5475*/        OPC_MoveParent,
/*5476*/        OPC_CheckType, MVT::i64,
/*5478*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*5481*/        OPC_EmitMergeInputChains1_1,
/*5482*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (add:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (AG:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*5493*/      /*Scope*/ 22, /*->5516*/
/*5494*/        OPC_CheckPredicate, 6, // Predicate_zextload
/*5496*/        OPC_CheckPredicate, 40, // Predicate_zextloadi32
/*5498*/        OPC_MoveParent,
/*5499*/        OPC_CheckType, MVT::i64,
/*5501*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$addr #3 #4 #5
/*5504*/        OPC_EmitMergeInputChains1_1,
/*5505*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (add:i64 GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>) - Complexity = 19
                // Dst: (ALGF:i64 GR64:i64:$src1, bdxaddr20only:i64:$addr)
/*5516*/      0, /*End of Scope*/
/*5517*/    /*Scope*/ 41|128,1/*169*/, /*->5688*/
/*5519*/      OPC_MoveChild, 0,
/*5521*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5524*/      OPC_RecordMemRef,
/*5525*/      OPC_RecordNode, // #0 = 'ld' chained node
/*5526*/      OPC_CheckFoldableChainNode,
/*5527*/      OPC_RecordChild1, // #1 = $XBD2
/*5528*/      OPC_CheckChild1Type, MVT::i64,
/*5530*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5532*/      OPC_Scope, 42, /*->5576*/ // 5 children in Scope
/*5534*/        OPC_CheckPredicate, 10, // Predicate_sextload
/*5536*/        OPC_CheckPredicate, 32, // Predicate_sextloadi16
/*5538*/        OPC_MoveParent,
/*5539*/        OPC_RecordChild1, // #2 = $R1src
/*5540*/        OPC_CheckType, MVT::i32,
/*5542*/        OPC_Scope, 15, /*->5559*/ // 2 children in Scope
/*5544*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*5547*/          OPC_EmitMergeInputChains1_0,
/*5548*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (add:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (AH:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*5559*/        /*Scope*/ 15, /*->5575*/
/*5560*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*5563*/          OPC_EmitMergeInputChains1_0,
/*5564*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AHY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (add:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (AHY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*5575*/        0, /*End of Scope*/
/*5576*/      /*Scope*/ 40, /*->5617*/
/*5577*/        OPC_CheckPredicate, 1, // Predicate_load
/*5579*/        OPC_MoveParent,
/*5580*/        OPC_RecordChild1, // #2 = $R1src
/*5581*/        OPC_CheckType, MVT::i32,
/*5583*/        OPC_Scope, 15, /*->5600*/ // 2 children in Scope
/*5585*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*5588*/          OPC_EmitMergeInputChains1_0,
/*5589*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::A), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (add:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (A:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*5600*/        /*Scope*/ 15, /*->5616*/
/*5601*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*5604*/          OPC_EmitMergeInputChains1_0,
/*5605*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (add:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (AY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*5616*/        0, /*End of Scope*/
/*5617*/      /*Scope*/ 23, /*->5641*/
/*5618*/        OPC_CheckPredicate, 10, // Predicate_sextload
/*5620*/        OPC_CheckPredicate, 35, // Predicate_sextloadi32
/*5622*/        OPC_MoveParent,
/*5623*/        OPC_RecordChild1, // #2 = $R1src
/*5624*/        OPC_CheckType, MVT::i64,
/*5626*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*5629*/        OPC_EmitMergeInputChains1_0,
/*5630*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (add:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (AGF:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*5641*/      /*Scope*/ 21, /*->5663*/
/*5642*/        OPC_CheckPredicate, 1, // Predicate_load
/*5644*/        OPC_MoveParent,
/*5645*/        OPC_RecordChild1, // #2 = $R1src
/*5646*/        OPC_CheckType, MVT::i64,
/*5648*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*5651*/        OPC_EmitMergeInputChains1_0,
/*5652*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (add:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (AG:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*5663*/      /*Scope*/ 23, /*->5687*/
/*5664*/        OPC_CheckPredicate, 6, // Predicate_zextload
/*5666*/        OPC_CheckPredicate, 40, // Predicate_zextloadi32
/*5668*/        OPC_MoveParent,
/*5669*/        OPC_RecordChild1, // #2 = $src1
/*5670*/        OPC_CheckType, MVT::i64,
/*5672*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$addr #3 #4 #5
/*5675*/        OPC_EmitMergeInputChains1_0,
/*5676*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (add:i64 (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>, GR64:i64:$src1) - Complexity = 19
                // Dst: (ALGF:i64 GR64:i64:$src1, bdxaddr20only:i64:$addr)
/*5687*/      0, /*End of Scope*/
/*5688*/    /*Scope*/ 47, /*->5736*/
/*5689*/      OPC_RecordNode, // #0 = $src
/*5690*/      OPC_CheckType, MVT::i64,
/*5692*/      OPC_Scope, 13, /*->5707*/ // 3 children in Scope
/*5694*/        OPC_CheckComplexPat, /*CP*/9, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*5697*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: dynalloc12only:i64:$src - Complexity = 12
                // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*5707*/      /*Scope*/ 13, /*->5721*/
/*5708*/        OPC_CheckComplexPat, /*CP*/10, /*#*/0, // selectLAAddr12Pair:$XBD2 #1 #2 #3
/*5711*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr12pair:i64:$XBD2 - Complexity = 12
                // Dst: (LA:i64 laaddr12pair:i64:$XBD2)
/*5721*/      /*Scope*/ 13, /*->5735*/
/*5722*/        OPC_CheckComplexPat, /*CP*/11, /*#*/0, // selectLAAddr20Pair:$XBD2 #1 #2 #3
/*5725*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr20pair:i64:$XBD2 - Complexity = 12
                // Dst: (LAY:i64 laaddr20pair:i64:$XBD2)
/*5735*/      0, /*End of Scope*/
/*5736*/    /*Scope*/ 34, /*->5771*/
/*5737*/      OPC_RecordChild0, // #0 = $src1
/*5738*/      OPC_MoveChild, 1,
/*5740*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*5746*/      OPC_RecordChild0, // #1 = $src2
/*5747*/      OPC_MoveParent,
/*5748*/      OPC_CheckType, MVT::i64,
/*5750*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*5753*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*5762*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
              // Src: (add:i64 GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
              // Dst: (ALGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*5771*/    /*Scope*/ 34, /*->5806*/
/*5772*/      OPC_MoveChild, 0,
/*5774*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*5780*/      OPC_RecordChild0, // #0 = $src2
/*5781*/      OPC_MoveParent,
/*5782*/      OPC_RecordChild1, // #1 = $src1
/*5783*/      OPC_CheckType, MVT::i64,
/*5785*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*5788*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*5797*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 3, 
              // Src: (add:i64 (and:i64 GR64:i64:$src2, 4294967295:i64), GR64:i64:$src1) - Complexity = 11
              // Dst: (ALGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*5806*/    /*Scope*/ 35|128,1/*163*/, /*->5971*/
/*5808*/      OPC_RecordChild0, // #0 = $R1src
/*5809*/      OPC_Scope, 126, /*->5937*/ // 2 children in Scope
/*5811*/        OPC_RecordChild1, // #1 = $I2
/*5812*/        OPC_MoveChild, 1,
/*5814*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5817*/        OPC_Scope, 19, /*->5838*/ // 6 children in Scope
/*5819*/          OPC_CheckPredicate, 16, // Predicate_imm32sx16
/*5821*/          OPC_MoveParent,
/*5822*/          OPC_CheckType, MVT::i32,
/*5824*/          OPC_EmitConvertToTarget, 1,
/*5826*/          OPC_EmitNodeXForm, 2, 2, // SIMM16
/*5829*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AHI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                  // Dst: (AHI:i32 GR32:i32:$R1src, (SIMM16:i32 (imm:i32):$I2))
/*5838*/        /*Scope*/ 19, /*->5858*/
/*5839*/          OPC_CheckPredicate, 17, // Predicate_imm64sx16
/*5841*/          OPC_MoveParent,
/*5842*/          OPC_CheckType, MVT::i64,
/*5844*/          OPC_EmitConvertToTarget, 1,
/*5846*/          OPC_EmitNodeXForm, 2, 2, // SIMM16
/*5849*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGHI), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                  // Dst: (AGHI:i64 GR64:i64:$R1src, (SIMM16:i64 (imm:i64):$I2))
/*5858*/        /*Scope*/ 19, /*->5878*/
/*5859*/          OPC_CheckPredicate, 37, // Predicate_imm64sx32
/*5861*/          OPC_MoveParent,
/*5862*/          OPC_CheckType, MVT::i64,
/*5864*/          OPC_EmitConvertToTarget, 1,
/*5866*/          OPC_EmitNodeXForm, 10, 2, // SIMM32
/*5869*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFI), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$I2) - Complexity = 7
                  // Dst: (AGFI:i64 GR64:i64:$R1src, (SIMM32:i64 (imm:i64):$I2))
/*5878*/        /*Scope*/ 19, /*->5898*/
/*5879*/          OPC_CheckPredicate, 45, // Predicate_imm64zx32
/*5881*/          OPC_MoveParent,
/*5882*/          OPC_CheckType, MVT::i64,
/*5884*/          OPC_EmitConvertToTarget, 1,
/*5886*/          OPC_EmitNodeXForm, 9, 2, // UIMM32
/*5889*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFI), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64zx32>><<X:UIMM32>>:$src2) - Complexity = 7
                  // Dst: (ALGFI:i64 GR64:i64:$src1, (UIMM32:i64 (imm:i64)<<P:Predicate_imm64zx32>>:$src2))
/*5898*/        /*Scope*/ 19, /*->5918*/
/*5899*/          OPC_CheckPredicate, 47, // Predicate_imm64zx32n
/*5901*/          OPC_MoveParent,
/*5902*/          OPC_CheckType, MVT::i64,
/*5904*/          OPC_EmitConvertToTarget, 1,
/*5906*/          OPC_EmitNodeXForm, 12, 2, // NEGIMM32
/*5909*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFI), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64zx32n>><<X:NEGIMM32>>:$src2) - Complexity = 7
                  // Dst: (SLGFI:i64 GR64:i64:$src1, (NEGIMM32:i64 (imm:i64)<<P:Predicate_imm64zx32n>>:$src2))
/*5918*/        /*Scope*/ 17, /*->5936*/
/*5919*/          OPC_MoveParent,
/*5920*/          OPC_CheckType, MVT::i32,
/*5922*/          OPC_EmitConvertToTarget, 1,
/*5924*/          OPC_EmitNodeXForm, 10, 2, // SIMM32
/*5927*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AFI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GR32:i32:$R1src, (imm:i32)<<X:SIMM32>>:$I2) - Complexity = 6
                  // Dst: (AFI:i32 GR32:i32:$R1src, (SIMM32:i32 (imm:i32):$I2))
/*5936*/        0, /*End of Scope*/
/*5937*/      /*Scope*/ 32, /*->5970*/
/*5938*/        OPC_MoveChild, 1,
/*5940*/        OPC_SwitchOpcode /*2 cases */, 11,  TARGET_VAL(ISD::SIGN_EXTEND),// ->5955
/*5944*/          OPC_RecordChild0, // #1 = $src2
/*5945*/          OPC_MoveParent,
/*5946*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFR), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 GR64:i64:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (AGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
                /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::ZERO_EXTEND),// ->5969
/*5958*/          OPC_RecordChild0, // #1 = $src2
/*5959*/          OPC_MoveParent,
/*5960*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (ALGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
                0, // EndSwitchOpcode
/*5970*/      0, /*End of Scope*/
/*5971*/    /*Scope*/ 34, /*->6006*/
/*5972*/      OPC_MoveChild, 0,
/*5974*/      OPC_SwitchOpcode /*2 cases */, 12,  TARGET_VAL(ISD::SIGN_EXTEND),// ->5990
/*5978*/        OPC_RecordChild0, // #0 = $src2
/*5979*/        OPC_MoveParent,
/*5980*/        OPC_RecordChild1, // #1 = $src1
/*5981*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (add:i64 (sext:i64 GR32:i32:$src2), GR64:i64:$src1) - Complexity = 6
                // Dst: (AGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
              /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::ZERO_EXTEND),// ->6005
/*5993*/        OPC_RecordChild0, // #0 = $src2
/*5994*/        OPC_MoveParent,
/*5995*/        OPC_RecordChild1, // #1 = $src1
/*5996*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (add:i64 (zext:i64 GR32:i32:$src2), GR64:i64:$src1) - Complexity = 6
                // Dst: (ALGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
              0, // EndSwitchOpcode
/*6006*/    /*Scope*/ 34, /*->6041*/
/*6007*/      OPC_RecordChild0, // #0 = $src1
/*6008*/      OPC_MoveChild, 1,
/*6010*/      OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*6013*/      OPC_RecordChild0, // #1 = $src2
/*6014*/      OPC_MoveChild, 1,
/*6016*/      OPC_CheckValueType, MVT::i32,
/*6018*/      OPC_MoveParent,
/*6019*/      OPC_MoveParent,
/*6020*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*6023*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*6032*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFR), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
              // Src: (add:i64 GR64:i64:$src1, (sext_inreg:i64 GR64:i64:$src2, i32:Other)) - Complexity = 6
              // Dst: (AGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*6041*/    /*Scope*/ 34, /*->6076*/
/*6042*/      OPC_MoveChild, 0,
/*6044*/      OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*6047*/      OPC_RecordChild0, // #0 = $src2
/*6048*/      OPC_MoveChild, 1,
/*6050*/      OPC_CheckValueType, MVT::i32,
/*6052*/      OPC_MoveParent,
/*6053*/      OPC_MoveParent,
/*6054*/      OPC_RecordChild1, // #1 = $src1
/*6055*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*6058*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*6067*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFR), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 3, 
              // Src: (add:i64 (sext_inreg:i64 GR64:i64:$src2, i32:Other), GR64:i64:$src1) - Complexity = 6
              // Dst: (AGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*6076*/    /*Scope*/ 26, /*->6103*/
/*6077*/      OPC_RecordChild0, // #0 = $R1src
/*6078*/      OPC_RecordChild1, // #1 = $R2
/*6079*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6091
/*6082*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (AR:i32 GR32:i32:$R1src, GR32:i32:$R2)
              /*SwitchType*/ 9,  MVT::i64,// ->6102
/*6093*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (add:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (AGR:i64 GR64:i64:$R1src, GR64:i64:$R2)
              0, // EndSwitchType
/*6103*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 5|128,3/*389*/,  TARGET_VAL(ISD::ADDC),// ->6497
/*6108*/    OPC_Scope, 100, /*->6210*/ // 7 children in Scope
/*6110*/      OPC_RecordChild0, // #0 = $R1src
/*6111*/      OPC_MoveChild, 1,
/*6113*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6116*/      OPC_RecordMemRef,
/*6117*/      OPC_RecordNode, // #1 = 'ld' chained node
/*6118*/      OPC_CheckFoldableChainNode,
/*6119*/      OPC_RecordChild1, // #2 = $XBD2
/*6120*/      OPC_CheckChild1Type, MVT::i64,
/*6122*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6124*/      OPC_Scope, 39, /*->6165*/ // 3 children in Scope
/*6126*/        OPC_CheckPredicate, 1, // Predicate_load
/*6128*/        OPC_MoveParent,
/*6129*/        OPC_CheckType, MVT::i32,
/*6131*/        OPC_Scope, 15, /*->6148*/ // 2 children in Scope
/*6133*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*6136*/          OPC_EmitMergeInputChains1_1,
/*6137*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (addc:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (AL:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*6148*/        /*Scope*/ 15, /*->6164*/
/*6149*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*6152*/          OPC_EmitMergeInputChains1_1,
/*6153*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (addc:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (ALY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*6164*/        0, /*End of Scope*/
/*6165*/      /*Scope*/ 22, /*->6188*/
/*6166*/        OPC_CheckPredicate, 6, // Predicate_zextload
/*6168*/        OPC_CheckPredicate, 40, // Predicate_zextloadi32
/*6170*/        OPC_MoveParent,
/*6171*/        OPC_CheckType, MVT::i64,
/*6173*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6176*/        OPC_EmitMergeInputChains1_1,
/*6177*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (addc:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>) - Complexity = 19
                // Dst: (ALGF:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*6188*/      /*Scope*/ 20, /*->6209*/
/*6189*/        OPC_CheckPredicate, 1, // Predicate_load
/*6191*/        OPC_MoveParent,
/*6192*/        OPC_CheckType, MVT::i64,
/*6194*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6197*/        OPC_EmitMergeInputChains1_1,
/*6198*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (addc:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (ALG:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*6209*/      0, /*End of Scope*/
/*6210*/    /*Scope*/ 102, /*->6313*/
/*6211*/      OPC_MoveChild, 0,
/*6213*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6216*/      OPC_RecordMemRef,
/*6217*/      OPC_RecordNode, // #0 = 'ld' chained node
/*6218*/      OPC_CheckFoldableChainNode,
/*6219*/      OPC_RecordChild1, // #1 = $XBD2
/*6220*/      OPC_CheckChild1Type, MVT::i64,
/*6222*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6224*/      OPC_Scope, 40, /*->6266*/ // 3 children in Scope
/*6226*/        OPC_CheckPredicate, 1, // Predicate_load
/*6228*/        OPC_MoveParent,
/*6229*/        OPC_RecordChild1, // #2 = $R1src
/*6230*/        OPC_CheckType, MVT::i32,
/*6232*/        OPC_Scope, 15, /*->6249*/ // 2 children in Scope
/*6234*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*6237*/          OPC_EmitMergeInputChains1_0,
/*6238*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (addc:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (AL:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*6249*/        /*Scope*/ 15, /*->6265*/
/*6250*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*6253*/          OPC_EmitMergeInputChains1_0,
/*6254*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (addc:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (ALY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*6265*/        0, /*End of Scope*/
/*6266*/      /*Scope*/ 23, /*->6290*/
/*6267*/        OPC_CheckPredicate, 6, // Predicate_zextload
/*6269*/        OPC_CheckPredicate, 40, // Predicate_zextloadi32
/*6271*/        OPC_MoveParent,
/*6272*/        OPC_RecordChild1, // #2 = $R1src
/*6273*/        OPC_CheckType, MVT::i64,
/*6275*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6278*/        OPC_EmitMergeInputChains1_0,
/*6279*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (addc:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (ALGF:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*6290*/      /*Scope*/ 21, /*->6312*/
/*6291*/        OPC_CheckPredicate, 1, // Predicate_load
/*6293*/        OPC_MoveParent,
/*6294*/        OPC_RecordChild1, // #2 = $R1src
/*6295*/        OPC_CheckType, MVT::i64,
/*6297*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6300*/        OPC_EmitMergeInputChains1_0,
/*6301*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (addc:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (ALG:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*6312*/      0, /*End of Scope*/
/*6313*/    /*Scope*/ 34, /*->6348*/
/*6314*/      OPC_RecordChild0, // #0 = $src1
/*6315*/      OPC_MoveChild, 1,
/*6317*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*6323*/      OPC_RecordChild0, // #1 = $src2
/*6324*/      OPC_MoveParent,
/*6325*/      OPC_CheckType, MVT::i64,
/*6327*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*6330*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*6339*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
              // Src: (addc:i64 GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
              // Dst: (ALGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*6348*/    /*Scope*/ 34, /*->6383*/
/*6349*/      OPC_MoveChild, 0,
/*6351*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*6357*/      OPC_RecordChild0, // #0 = $src2
/*6358*/      OPC_MoveParent,
/*6359*/      OPC_RecordChild1, // #1 = $src1
/*6360*/      OPC_CheckType, MVT::i64,
/*6362*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*6365*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*6374*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 3, 
              // Src: (addc:i64 (and:i64 GR64:i64:$src2, 4294967295:i64), GR64:i64:$src1) - Complexity = 11
              // Dst: (ALGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*6383*/    /*Scope*/ 67, /*->6451*/
/*6384*/      OPC_RecordChild0, // #0 = $R1src
/*6385*/      OPC_Scope, 46, /*->6433*/ // 2 children in Scope
/*6387*/        OPC_RecordChild1, // #1 = $I2
/*6388*/        OPC_MoveChild, 1,
/*6390*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6393*/        OPC_Scope, 19, /*->6414*/ // 2 children in Scope
/*6395*/          OPC_CheckPredicate, 45, // Predicate_imm64zx32
/*6397*/          OPC_MoveParent,
/*6398*/          OPC_CheckType, MVT::i64,
/*6400*/          OPC_EmitConvertToTarget, 1,
/*6402*/          OPC_EmitNodeXForm, 9, 2, // UIMM32
/*6405*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFI), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (addc:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64zx32>><<X:UIMM32>>:$I2) - Complexity = 7
                  // Dst: (ALGFI:i64 GR64:i64:$R1src, (UIMM32:i64 (imm:i64):$I2))
/*6414*/        /*Scope*/ 17, /*->6432*/
/*6415*/          OPC_MoveParent,
/*6416*/          OPC_CheckType, MVT::i32,
/*6418*/          OPC_EmitConvertToTarget, 1,
/*6420*/          OPC_EmitNodeXForm, 9, 2, // UIMM32
/*6423*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALFI), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (addc:i32 GR32:i32:$R1src, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                  // Dst: (ALFI:i32 GR32:i32:$R1src, (UIMM32:i32 (imm:i32):$I2))
/*6432*/        0, /*End of Scope*/
/*6433*/      /*Scope*/ 16, /*->6450*/
/*6434*/        OPC_MoveChild, 1,
/*6436*/        OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*6439*/        OPC_RecordChild0, // #1 = $src2
/*6440*/        OPC_MoveParent,
/*6441*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i64 GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                // Dst: (ALGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
/*6450*/      0, /*End of Scope*/
/*6451*/    /*Scope*/ 17, /*->6469*/
/*6452*/      OPC_MoveChild, 0,
/*6454*/      OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*6457*/      OPC_RecordChild0, // #0 = $src2
/*6458*/      OPC_MoveParent,
/*6459*/      OPC_RecordChild1, // #1 = $src1
/*6460*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
              // Src: (addc:i64 (zext:i64 GR32:i32:$src2), GR64:i64:$src1) - Complexity = 6
              // Dst: (ALGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
/*6469*/    /*Scope*/ 26, /*->6496*/
/*6470*/      OPC_RecordChild0, // #0 = $R1src
/*6471*/      OPC_RecordChild1, // #1 = $R2
/*6472*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6484
/*6475*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (ALR:i32 GR32:i32:$R1src, GR32:i32:$R2)
              /*SwitchType*/ 9,  MVT::i64,// ->6495
/*6486*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (ALGR:i64 GR64:i64:$R1src, GR64:i64:$R2)
              0, // EndSwitchType
/*6496*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 10|128,1/*138*/,  TARGET_VAL(ISD::ADDE),// ->6639
/*6501*/    OPC_CaptureGlueInput,
/*6502*/    OPC_Scope, 53, /*->6557*/ // 3 children in Scope
/*6504*/      OPC_RecordChild0, // #0 = $R1src
/*6505*/      OPC_MoveChild, 1,
/*6507*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6510*/      OPC_RecordMemRef,
/*6511*/      OPC_RecordNode, // #1 = 'ld' chained node
/*6512*/      OPC_CheckFoldableChainNode,
/*6513*/      OPC_RecordChild1, // #2 = $XBD2
/*6514*/      OPC_CheckChild1Type, MVT::i64,
/*6516*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6518*/      OPC_CheckPredicate, 1, // Predicate_load
/*6520*/      OPC_MoveParent,
/*6521*/      OPC_SwitchType /*2 cases */, 15,  MVT::i32,// ->6539
/*6524*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6527*/        OPC_EmitMergeInputChains1_1,
/*6528*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (adde:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (ALC:i32 GR32:i32:$R1src, bdxaddr20only:i64:$XBD2)
              /*SwitchType*/ 15,  MVT::i64,// ->6556
/*6541*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6544*/        OPC_EmitMergeInputChains1_1,
/*6545*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALCG), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (adde:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (ALCG:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*6557*/    /*Scope*/ 53, /*->6611*/
/*6558*/      OPC_MoveChild, 0,
/*6560*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6563*/      OPC_RecordMemRef,
/*6564*/      OPC_RecordNode, // #0 = 'ld' chained node
/*6565*/      OPC_CheckFoldableChainNode,
/*6566*/      OPC_RecordChild1, // #1 = $XBD2
/*6567*/      OPC_CheckChild1Type, MVT::i64,
/*6569*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6571*/      OPC_CheckPredicate, 1, // Predicate_load
/*6573*/      OPC_MoveParent,
/*6574*/      OPC_RecordChild1, // #2 = $R1src
/*6575*/      OPC_SwitchType /*2 cases */, 15,  MVT::i32,// ->6593
/*6578*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6581*/        OPC_EmitMergeInputChains1_0,
/*6582*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (adde:i32 (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                // Dst: (ALC:i32 GR32:i32:$R1src, bdxaddr20only:i64:$XBD2)
              /*SwitchType*/ 15,  MVT::i64,// ->6610
/*6595*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6598*/        OPC_EmitMergeInputChains1_0,
/*6599*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALCG), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (adde:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (ALCG:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*6611*/    /*Scope*/ 26, /*->6638*/
/*6612*/      OPC_RecordChild0, // #0 = $R1src
/*6613*/      OPC_RecordChild1, // #1 = $R2
/*6614*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6626
/*6617*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALCR), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (ALCR:i32 GR32:i32:$R1src, GR32:i32:$R2)
              /*SwitchType*/ 9,  MVT::i64,// ->6637
/*6628*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALCGR), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (ALCGR:i64 GR64:i64:$R1src, GR64:i64:$R2)
              0, // EndSwitchType
/*6638*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 44|128,3/*428*/,  TARGET_VAL(ISD::SUB),// ->7071
/*6643*/    OPC_Scope, 37|128,1/*165*/, /*->6811*/ // 6 children in Scope
/*6646*/      OPC_RecordChild0, // #0 = $R1src
/*6647*/      OPC_MoveChild, 1,
/*6649*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6652*/      OPC_RecordMemRef,
/*6653*/      OPC_RecordNode, // #1 = 'ld' chained node
/*6654*/      OPC_CheckFoldableChainNode,
/*6655*/      OPC_RecordChild1, // #2 = $XBD2
/*6656*/      OPC_CheckChild1Type, MVT::i64,
/*6658*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6660*/      OPC_Scope, 41, /*->6703*/ // 5 children in Scope
/*6662*/        OPC_CheckPredicate, 10, // Predicate_sextload
/*6664*/        OPC_CheckPredicate, 32, // Predicate_sextloadi16
/*6666*/        OPC_MoveParent,
/*6667*/        OPC_CheckType, MVT::i32,
/*6669*/        OPC_Scope, 15, /*->6686*/ // 2 children in Scope
/*6671*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*6674*/          OPC_EmitMergeInputChains1_1,
/*6675*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (sub:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                  // Dst: (SH:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*6686*/        /*Scope*/ 15, /*->6702*/
/*6687*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*6690*/          OPC_EmitMergeInputChains1_1,
/*6691*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SHY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (sub:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                  // Dst: (SHY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*6702*/        0, /*End of Scope*/
/*6703*/      /*Scope*/ 39, /*->6743*/
/*6704*/        OPC_CheckPredicate, 1, // Predicate_load
/*6706*/        OPC_MoveParent,
/*6707*/        OPC_CheckType, MVT::i32,
/*6709*/        OPC_Scope, 15, /*->6726*/ // 2 children in Scope
/*6711*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*6714*/          OPC_EmitMergeInputChains1_1,
/*6715*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::S), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (sub:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (S:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*6726*/        /*Scope*/ 15, /*->6742*/
/*6727*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*6730*/          OPC_EmitMergeInputChains1_1,
/*6731*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (sub:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (SY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*6742*/        0, /*End of Scope*/
/*6743*/      /*Scope*/ 22, /*->6766*/
/*6744*/        OPC_CheckPredicate, 10, // Predicate_sextload
/*6746*/        OPC_CheckPredicate, 35, // Predicate_sextloadi32
/*6748*/        OPC_MoveParent,
/*6749*/        OPC_CheckType, MVT::i64,
/*6751*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6754*/        OPC_EmitMergeInputChains1_1,
/*6755*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SGF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (sub:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>) - Complexity = 19
                // Dst: (SGF:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*6766*/      /*Scope*/ 20, /*->6787*/
/*6767*/        OPC_CheckPredicate, 1, // Predicate_load
/*6769*/        OPC_MoveParent,
/*6770*/        OPC_CheckType, MVT::i64,
/*6772*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6775*/        OPC_EmitMergeInputChains1_1,
/*6776*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (sub:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SG:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*6787*/      /*Scope*/ 22, /*->6810*/
/*6788*/        OPC_CheckPredicate, 6, // Predicate_zextload
/*6790*/        OPC_CheckPredicate, 40, // Predicate_zextloadi32
/*6792*/        OPC_MoveParent,
/*6793*/        OPC_CheckType, MVT::i64,
/*6795*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$addr #3 #4 #5
/*6798*/        OPC_EmitMergeInputChains1_1,
/*6799*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (sub:i64 GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>) - Complexity = 19
                // Dst: (SLGF:i64 GR64:i64:$src1, bdxaddr20only:i64:$addr)
/*6810*/      0, /*End of Scope*/
/*6811*/    /*Scope*/ 47, /*->6859*/
/*6812*/      OPC_RecordNode, // #0 = $src
/*6813*/      OPC_CheckType, MVT::i64,
/*6815*/      OPC_Scope, 13, /*->6830*/ // 3 children in Scope
/*6817*/        OPC_CheckComplexPat, /*CP*/9, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*6820*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: dynalloc12only:i64:$src - Complexity = 12
                // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*6830*/      /*Scope*/ 13, /*->6844*/
/*6831*/        OPC_CheckComplexPat, /*CP*/10, /*#*/0, // selectLAAddr12Pair:$XBD2 #1 #2 #3
/*6834*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr12pair:i64:$XBD2 - Complexity = 12
                // Dst: (LA:i64 laaddr12pair:i64:$XBD2)
/*6844*/      /*Scope*/ 13, /*->6858*/
/*6845*/        OPC_CheckComplexPat, /*CP*/11, /*#*/0, // selectLAAddr20Pair:$XBD2 #1 #2 #3
/*6848*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr20pair:i64:$XBD2 - Complexity = 12
                // Dst: (LAY:i64 laaddr20pair:i64:$XBD2)
/*6858*/      0, /*End of Scope*/
/*6859*/    /*Scope*/ 52, /*->6912*/
/*6860*/      OPC_MoveChild, 0,
/*6862*/      OPC_CheckInteger, 0, 
/*6864*/      OPC_MoveParent,
/*6865*/      OPC_MoveChild, 1,
/*6867*/      OPC_SwitchOpcode /*2 cases */, 10,  TARGET_VAL(ISD::SIGN_EXTEND),// ->6881
/*6871*/        OPC_RecordChild0, // #0 = $src
/*6872*/        OPC_MoveParent,
/*6873*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCGFR), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sub:i64 0:i64, (sext:i64 GR32:i32:$src)) - Complexity = 11
                // Dst: (LCGFR:i64 GR32:i32:$src)
              /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->6911
/*6884*/        OPC_RecordChild0, // #0 = $src
/*6885*/        OPC_MoveChild, 1,
/*6887*/        OPC_CheckValueType, MVT::i32,
/*6889*/        OPC_MoveParent,
/*6890*/        OPC_MoveParent,
/*6891*/        OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*6894*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*6903*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCGFR), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (sub:i64 0:i64, (sext_inreg:i64 GR64:i64:$src, i32:Other)) - Complexity = 11
                // Dst: (LCGFR:i64 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32))
              0, // EndSwitchOpcode
/*6912*/    /*Scope*/ 34, /*->6947*/
/*6913*/      OPC_RecordChild0, // #0 = $src1
/*6914*/      OPC_MoveChild, 1,
/*6916*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*6922*/      OPC_RecordChild0, // #1 = $src2
/*6923*/      OPC_MoveParent,
/*6924*/      OPC_CheckType, MVT::i64,
/*6926*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*6929*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*6938*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFR), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
              // Src: (sub:i64 GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
              // Dst: (SLGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*6947*/    /*Scope*/ 28, /*->6976*/
/*6948*/      OPC_MoveChild, 0,
/*6950*/      OPC_CheckInteger, 0, 
/*6952*/      OPC_MoveParent,
/*6953*/      OPC_RecordChild1, // #0 = $R2
/*6954*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->6965
/*6957*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCR), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sub:i32 0:i32, GR32:i32:$R2) - Complexity = 8
                // Dst: (LCR:i32 GR32:i32:$R2)
              /*SwitchType*/ 8,  MVT::i64,// ->6975
/*6967*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCGR), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sub:i64 0:i64, GR64:i64:$R2) - Complexity = 8
                // Dst: (LCGR:i64 GR64:i64:$R2)
              0, // EndSwitchType
/*6976*/    /*Scope*/ 93, /*->7070*/
/*6977*/      OPC_RecordChild0, // #0 = $src1
/*6978*/      OPC_Scope, 63, /*->7043*/ // 2 children in Scope
/*6980*/        OPC_MoveChild, 1,
/*6982*/        OPC_SwitchOpcode /*3 cases */, 11,  TARGET_VAL(ISD::SIGN_EXTEND),// ->6997
/*6986*/          OPC_RecordChild0, // #1 = $src2
/*6987*/          OPC_MoveParent,
/*6988*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SGFR), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i64 GR64:i64:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (SGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
                /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::ZERO_EXTEND),// ->7011
/*7000*/          OPC_RecordChild0, // #1 = $src2
/*7001*/          OPC_MoveParent,
/*7002*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFR), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i64 GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (SLGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
                /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->7042
/*7014*/          OPC_RecordChild0, // #1 = $src2
/*7015*/          OPC_MoveChild, 1,
/*7017*/          OPC_CheckValueType, MVT::i32,
/*7019*/          OPC_MoveParent,
/*7020*/          OPC_MoveParent,
/*7021*/          OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*7024*/          OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*7033*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SGFR), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (sub:i64 GR64:i64:$src1, (sext_inreg:i64 GR64:i64:$src2, i32:Other)) - Complexity = 6
                  // Dst: (SGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
                0, // EndSwitchOpcode
/*7043*/      /*Scope*/ 25, /*->7069*/
/*7044*/        OPC_RecordChild1, // #1 = $R2
/*7045*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7057
/*7048*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                  // Dst: (SR:i32 GR32:i32:$R1src, GR32:i32:$R2)
                /*SwitchType*/ 9,  MVT::i64,// ->7068
/*7059*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SGR), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                  // Dst: (SGR:i64 GR64:i64:$R1src, GR64:i64:$R2)
                0, // EndSwitchType
/*7069*/      0, /*End of Scope*/
/*7070*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 52|128,1/*180*/,  TARGET_VAL(ISD::SUBC),// ->7255
/*7075*/    OPC_RecordChild0, // #0 = $R1src
/*7076*/    OPC_Scope, 21|128,1/*149*/, /*->7228*/ // 2 children in Scope
/*7079*/      OPC_MoveChild, 1,
/*7081*/      OPC_Scope, 97, /*->7180*/ // 3 children in Scope
/*7083*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*7086*/        OPC_RecordMemRef,
/*7087*/        OPC_RecordNode, // #1 = 'ld' chained node
/*7088*/        OPC_CheckFoldableChainNode,
/*7089*/        OPC_RecordChild1, // #2 = $XBD2
/*7090*/        OPC_CheckChild1Type, MVT::i64,
/*7092*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*7094*/        OPC_Scope, 39, /*->7135*/ // 3 children in Scope
/*7096*/          OPC_CheckPredicate, 1, // Predicate_load
/*7098*/          OPC_MoveParent,
/*7099*/          OPC_CheckType, MVT::i32,
/*7101*/          OPC_Scope, 15, /*->7118*/ // 2 children in Scope
/*7103*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*7106*/            OPC_EmitMergeInputChains1_1,
/*7107*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::SL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (subc:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (SL:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*7118*/          /*Scope*/ 15, /*->7134*/
/*7119*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*7122*/            OPC_EmitMergeInputChains1_1,
/*7123*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (subc:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (SLY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*7134*/          0, /*End of Scope*/
/*7135*/        /*Scope*/ 22, /*->7158*/
/*7136*/          OPC_CheckPredicate, 6, // Predicate_zextload
/*7138*/          OPC_CheckPredicate, 40, // Predicate_zextloadi32
/*7140*/          OPC_MoveParent,
/*7141*/          OPC_CheckType, MVT::i64,
/*7143*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7146*/          OPC_EmitMergeInputChains1_1,
/*7147*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (subc:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>) - Complexity = 19
                  // Dst: (SLGF:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*7158*/        /*Scope*/ 20, /*->7179*/
/*7159*/          OPC_CheckPredicate, 1, // Predicate_load
/*7161*/          OPC_MoveParent,
/*7162*/          OPC_CheckType, MVT::i64,
/*7164*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7167*/          OPC_EmitMergeInputChains1_1,
/*7168*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (subc:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (SLG:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*7179*/        0, /*End of Scope*/
/*7180*/      /*Scope*/ 31, /*->7212*/
/*7181*/        OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*7187*/        OPC_RecordChild0, // #1 = $src2
/*7188*/        OPC_MoveParent,
/*7189*/        OPC_CheckType, MVT::i64,
/*7191*/        OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*7194*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*7203*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (subc:i64 GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
                // Dst: (SLGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*7212*/      /*Scope*/ 14, /*->7227*/
/*7213*/        OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*7216*/        OPC_RecordChild0, // #1 = $src2
/*7217*/        OPC_MoveParent,
/*7218*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (subc:i64 GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                // Dst: (SLGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
/*7227*/      0, /*End of Scope*/
/*7228*/    /*Scope*/ 25, /*->7254*/
/*7229*/      OPC_RecordChild1, // #1 = $R2
/*7230*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7242
/*7233*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (subc:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (SLR:i32 GR32:i32:$R1src, GR32:i32:$R2)
              /*SwitchType*/ 9,  MVT::i64,// ->7253
/*7244*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (subc:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (SLGR:i64 GR64:i64:$R1src, GR64:i64:$R2)
              0, // EndSwitchType
/*7254*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::SUBE),// ->7341
/*7258*/    OPC_CaptureGlueInput,
/*7259*/    OPC_RecordChild0, // #0 = $R1src
/*7260*/    OPC_Scope, 52, /*->7314*/ // 2 children in Scope
/*7262*/      OPC_MoveChild, 1,
/*7264*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*7267*/      OPC_RecordMemRef,
/*7268*/      OPC_RecordNode, // #1 = 'ld' chained node
/*7269*/      OPC_CheckFoldableChainNode,
/*7270*/      OPC_RecordChild1, // #2 = $XBD2
/*7271*/      OPC_CheckChild1Type, MVT::i64,
/*7273*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*7275*/      OPC_CheckPredicate, 1, // Predicate_load
/*7277*/      OPC_MoveParent,
/*7278*/      OPC_SwitchType /*2 cases */, 15,  MVT::i32,// ->7296
/*7281*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7284*/        OPC_EmitMergeInputChains1_1,
/*7285*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLB), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (sube:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SLB:i32 GR32:i32:$R1src, bdxaddr20only:i64:$XBD2)
              /*SwitchType*/ 15,  MVT::i64,// ->7313
/*7298*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7301*/        OPC_EmitMergeInputChains1_1,
/*7302*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLBG), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (sube:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SLBG:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*7314*/    /*Scope*/ 25, /*->7340*/
/*7315*/      OPC_RecordChild1, // #1 = $R2
/*7316*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7328
/*7319*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLBR), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sube:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (SLBR:i32 GR32:i32:$R1src, GR32:i32:$R2)
              /*SwitchType*/ 9,  MVT::i64,// ->7339
/*7330*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGBR), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sube:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (SLGBR:i64 GR64:i64:$R1src, GR64:i64:$R2)
              0, // EndSwitchType
/*7340*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 73|128,3/*457*/,  TARGET_VAL(ISD::AND),// ->7802
/*7345*/    OPC_Scope, 72, /*->7419*/ // 8 children in Scope
/*7347*/      OPC_RecordChild0, // #0 = $R1src
/*7348*/      OPC_MoveChild, 1,
/*7350*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*7353*/      OPC_RecordMemRef,
/*7354*/      OPC_RecordNode, // #1 = 'ld' chained node
/*7355*/      OPC_CheckFoldableChainNode,
/*7356*/      OPC_RecordChild1, // #2 = $XBD2
/*7357*/      OPC_CheckChild1Type, MVT::i64,
/*7359*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*7361*/      OPC_CheckPredicate, 1, // Predicate_load
/*7363*/      OPC_MoveParent,
/*7364*/      OPC_SwitchType /*2 cases */, 34,  MVT::i32,// ->7401
/*7367*/        OPC_Scope, 15, /*->7384*/ // 2 children in Scope
/*7369*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*7372*/          OPC_EmitMergeInputChains1_1,
/*7373*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::N), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (and:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (N:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*7384*/        /*Scope*/ 15, /*->7400*/
/*7385*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*7388*/          OPC_EmitMergeInputChains1_1,
/*7389*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (and:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (NY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*7400*/        0, /*End of Scope*/
              /*SwitchType*/ 15,  MVT::i64,// ->7418
/*7403*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7406*/        OPC_EmitMergeInputChains1_1,
/*7407*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::NG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (and:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (NG:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*7419*/    /*Scope*/ 72, /*->7492*/
/*7420*/      OPC_MoveChild, 0,
/*7422*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*7425*/      OPC_RecordMemRef,
/*7426*/      OPC_RecordNode, // #0 = 'ld' chained node
/*7427*/      OPC_CheckFoldableChainNode,
/*7428*/      OPC_RecordChild1, // #1 = $XBD2
/*7429*/      OPC_CheckChild1Type, MVT::i64,
/*7431*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*7433*/      OPC_CheckPredicate, 1, // Predicate_load
/*7435*/      OPC_MoveParent,
/*7436*/      OPC_RecordChild1, // #2 = $R1src
/*7437*/      OPC_SwitchType /*2 cases */, 34,  MVT::i32,// ->7474
/*7440*/        OPC_Scope, 15, /*->7457*/ // 2 children in Scope
/*7442*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*7445*/          OPC_EmitMergeInputChains1_0,
/*7446*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::N), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (and:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (N:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*7457*/        /*Scope*/ 15, /*->7473*/
/*7458*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*7461*/          OPC_EmitMergeInputChains1_0,
/*7462*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (and:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (NY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*7473*/        0, /*End of Scope*/
              /*SwitchType*/ 15,  MVT::i64,// ->7491
/*7476*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7479*/        OPC_EmitMergeInputChains1_0,
/*7480*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::NG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (and:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (NG:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*7492*/    /*Scope*/ 14, /*->7507*/
/*7493*/      OPC_CheckAndImm, 127|128,1/*255*/, 
/*7496*/      OPC_RecordChild0, // #0 = $R2
/*7497*/      OPC_CheckType, MVT::i32,
/*7499*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLCR), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (and:i32 GR32:i32:$R2, 255:i32) - Complexity = 8
              // Dst: (LLCR:i32 GR32:i32:$R2)
/*7507*/    /*Scope*/ 15, /*->7523*/
/*7508*/      OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*7512*/      OPC_RecordChild0, // #0 = $R2
/*7513*/      OPC_CheckType, MVT::i32,
/*7515*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLHR), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (and:i32 GR32:i32:$R2, 65535:i32) - Complexity = 8
              // Dst: (LLHR:i32 GR32:i32:$R2)
/*7523*/    /*Scope*/ 14, /*->7538*/
/*7524*/      OPC_CheckAndImm, 127|128,1/*255*/, 
/*7527*/      OPC_RecordChild0, // #0 = $R2
/*7528*/      OPC_CheckType, MVT::i64,
/*7530*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGCR), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (and:i64 GR64:i64:$R2, 255:i64) - Complexity = 8
              // Dst: (LLGCR:i64 GR64:i64:$R2)
/*7538*/    /*Scope*/ 15, /*->7554*/
/*7539*/      OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*7543*/      OPC_RecordChild0, // #0 = $R2
/*7544*/      OPC_CheckType, MVT::i64,
/*7546*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGHR), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (and:i64 GR64:i64:$R2, 65535:i64) - Complexity = 8
              // Dst: (LLGHR:i64 GR64:i64:$R2)
/*7554*/    /*Scope*/ 29, /*->7584*/
/*7555*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*7561*/      OPC_RecordChild0, // #0 = $src
/*7562*/      OPC_CheckType, MVT::i64,
/*7564*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*7567*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*7576*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGFR), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (and:i64 GR64:i64:$src, 4294967295:i64) - Complexity = 8
              // Dst: (LLGFR:i64 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32))
/*7584*/    /*Scope*/ 87|128,1/*215*/, /*->7801*/
/*7586*/      OPC_RecordChild0, // #0 = $R1src
/*7587*/      OPC_RecordChild1, // #1 = $I2
/*7588*/      OPC_Scope, 57|128,1/*185*/, /*->7776*/ // 3 children in Scope
/*7591*/        OPC_MoveChild, 1,
/*7593*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7596*/        OPC_Scope, 19, /*->7617*/ // 9 children in Scope
/*7598*/          OPC_CheckPredicate, 48, // Predicate_imm32ll16c
/*7600*/          OPC_MoveParent,
/*7601*/          OPC_CheckType, MVT::i32,
/*7603*/          OPC_EmitConvertToTarget, 1,
/*7605*/          OPC_EmitNodeXForm, 3, 2, // LL16
/*7608*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILL32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32ll16c>><<X:LL16>>:$I2) - Complexity = 7
                  // Dst: (NILL32:i32 GR32:i32:$R1src, (LL16:i32 (imm:i32):$I2))
/*7617*/        /*Scope*/ 19, /*->7637*/
/*7618*/          OPC_CheckPredicate, 49, // Predicate_imm32lh16c
/*7620*/          OPC_MoveParent,
/*7621*/          OPC_CheckType, MVT::i32,
/*7623*/          OPC_EmitConvertToTarget, 1,
/*7625*/          OPC_EmitNodeXForm, 4, 2, // LH16
/*7628*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILH32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$I2) - Complexity = 7
                  // Dst: (NILH32:i32 GR32:i32:$R1src, (LH16:i32 (imm:i32):$I2))
/*7637*/        /*Scope*/ 19, /*->7657*/
/*7638*/          OPC_CheckPredicate, 50, // Predicate_imm64ll16c
/*7640*/          OPC_MoveParent,
/*7641*/          OPC_CheckType, MVT::i64,
/*7643*/          OPC_EmitConvertToTarget, 1,
/*7645*/          OPC_EmitNodeXForm, 3, 2, // LL16
/*7648*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILL), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64ll16c>><<X:LL16>>:$I2) - Complexity = 7
                  // Dst: (NILL:i64 GR64:i64:$R1src, (LL16:i64 (imm:i64):$I2))
/*7657*/        /*Scope*/ 19, /*->7677*/
/*7658*/          OPC_CheckPredicate, 51, // Predicate_imm64lh16c
/*7660*/          OPC_MoveParent,
/*7661*/          OPC_CheckType, MVT::i64,
/*7663*/          OPC_EmitConvertToTarget, 1,
/*7665*/          OPC_EmitNodeXForm, 4, 2, // LH16
/*7668*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILH), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64lh16c>><<X:LH16>>:$I2) - Complexity = 7
                  // Dst: (NILH:i64 GR64:i64:$R1src, (LH16:i64 (imm:i64):$I2))
/*7677*/        /*Scope*/ 19, /*->7697*/
/*7678*/          OPC_CheckPredicate, 52, // Predicate_imm64hl16c
/*7680*/          OPC_MoveParent,
/*7681*/          OPC_CheckType, MVT::i64,
/*7683*/          OPC_EmitConvertToTarget, 1,
/*7685*/          OPC_EmitNodeXForm, 5, 2, // HL16
/*7688*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIHL), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hl16c>><<X:HL16>>:$I2) - Complexity = 7
                  // Dst: (NIHL:i64 GR64:i64:$R1src, (HL16:i64 (imm:i64):$I2))
/*7697*/        /*Scope*/ 19, /*->7717*/
/*7698*/          OPC_CheckPredicate, 53, // Predicate_imm64hh16c
/*7700*/          OPC_MoveParent,
/*7701*/          OPC_CheckType, MVT::i64,
/*7703*/          OPC_EmitConvertToTarget, 1,
/*7705*/          OPC_EmitNodeXForm, 6, 2, // HH16
/*7708*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIHH), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hh16c>><<X:HH16>>:$I2) - Complexity = 7
                  // Dst: (NIHH:i64 GR64:i64:$R1src, (HH16:i64 (imm:i64):$I2))
/*7717*/        /*Scope*/ 19, /*->7737*/
/*7718*/          OPC_CheckPredicate, 54, // Predicate_imm64lf32c
/*7720*/          OPC_MoveParent,
/*7721*/          OPC_CheckType, MVT::i64,
/*7723*/          OPC_EmitConvertToTarget, 1,
/*7725*/          OPC_EmitNodeXForm, 7, 2, // LF32
/*7728*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILF), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64lf32c>><<X:LF32>>:$I2) - Complexity = 7
                  // Dst: (NILF:i64 GR64:i64:$R1src, (LF32:i64 (imm:i64):$I2))
/*7737*/        /*Scope*/ 19, /*->7757*/
/*7738*/          OPC_CheckPredicate, 55, // Predicate_imm64hf32c
/*7740*/          OPC_MoveParent,
/*7741*/          OPC_CheckType, MVT::i64,
/*7743*/          OPC_EmitConvertToTarget, 1,
/*7745*/          OPC_EmitNodeXForm, 8, 2, // HF32
/*7748*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIHF), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hf32c>><<X:HF32>>:$I2) - Complexity = 7
                  // Dst: (NIHF:i64 GR64:i64:$R1src, (HF32:i64 (imm:i64):$I2))
/*7757*/        /*Scope*/ 17, /*->7775*/
/*7758*/          OPC_MoveParent,
/*7759*/          OPC_CheckType, MVT::i32,
/*7761*/          OPC_EmitConvertToTarget, 1,
/*7763*/          OPC_EmitNodeXForm, 9, 2, // UIMM32
/*7766*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILF32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 GR32:i32:$R1src, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                  // Dst: (NILF32:i32 GR32:i32:$R1src, (UIMM32:i32 (imm:i32):$I2))
/*7775*/        0, /*End of Scope*/
/*7776*/      /*Scope*/ 11, /*->7788*/
/*7777*/        OPC_CheckType, MVT::i32,
/*7779*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::NR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (NR:i32 GR32:i32:$R1src, GR32:i32:$R2)
/*7788*/      /*Scope*/ 11, /*->7800*/
/*7789*/        OPC_CheckType, MVT::i64,
/*7791*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::NGR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (NGR:i64 GR64:i64:$R1src, GR64:i64:$R2)
/*7800*/      0, /*End of Scope*/
/*7801*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 115|128,1/*243*/,  TARGET_VAL(ISD::XOR),// ->8049
/*7806*/    OPC_Scope, 72, /*->7880*/ // 3 children in Scope
/*7808*/      OPC_RecordChild0, // #0 = $R1src
/*7809*/      OPC_MoveChild, 1,
/*7811*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*7814*/      OPC_RecordMemRef,
/*7815*/      OPC_RecordNode, // #1 = 'ld' chained node
/*7816*/      OPC_CheckFoldableChainNode,
/*7817*/      OPC_RecordChild1, // #2 = $XBD2
/*7818*/      OPC_CheckChild1Type, MVT::i64,
/*7820*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*7822*/      OPC_CheckPredicate, 1, // Predicate_load
/*7824*/      OPC_MoveParent,
/*7825*/      OPC_SwitchType /*2 cases */, 34,  MVT::i32,// ->7862
/*7828*/        OPC_Scope, 15, /*->7845*/ // 2 children in Scope
/*7830*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*7833*/          OPC_EmitMergeInputChains1_1,
/*7834*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::X), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (xor:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (X:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*7845*/        /*Scope*/ 15, /*->7861*/
/*7846*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*7849*/          OPC_EmitMergeInputChains1_1,
/*7850*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::XY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (xor:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (XY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*7861*/        0, /*End of Scope*/
              /*SwitchType*/ 15,  MVT::i64,// ->7879
/*7864*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7867*/        OPC_EmitMergeInputChains1_1,
/*7868*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (xor:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (XG:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*7880*/    /*Scope*/ 72, /*->7953*/
/*7881*/      OPC_MoveChild, 0,
/*7883*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*7886*/      OPC_RecordMemRef,
/*7887*/      OPC_RecordNode, // #0 = 'ld' chained node
/*7888*/      OPC_CheckFoldableChainNode,
/*7889*/      OPC_RecordChild1, // #1 = $XBD2
/*7890*/      OPC_CheckChild1Type, MVT::i64,
/*7892*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*7894*/      OPC_CheckPredicate, 1, // Predicate_load
/*7896*/      OPC_MoveParent,
/*7897*/      OPC_RecordChild1, // #2 = $R1src
/*7898*/      OPC_SwitchType /*2 cases */, 34,  MVT::i32,// ->7935
/*7901*/        OPC_Scope, 15, /*->7918*/ // 2 children in Scope
/*7903*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*7906*/          OPC_EmitMergeInputChains1_0,
/*7907*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::X), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (xor:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (X:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*7918*/        /*Scope*/ 15, /*->7934*/
/*7919*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*7922*/          OPC_EmitMergeInputChains1_0,
/*7923*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::XY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (xor:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (XY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*7934*/        0, /*End of Scope*/
              /*SwitchType*/ 15,  MVT::i64,// ->7952
/*7937*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7940*/        OPC_EmitMergeInputChains1_0,
/*7941*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (xor:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (XG:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*7953*/    /*Scope*/ 94, /*->8048*/
/*7954*/      OPC_RecordChild0, // #0 = $R1src
/*7955*/      OPC_RecordChild1, // #1 = $I2
/*7956*/      OPC_Scope, 65, /*->8023*/ // 3 children in Scope
/*7958*/        OPC_MoveChild, 1,
/*7960*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7963*/        OPC_Scope, 19, /*->7984*/ // 3 children in Scope
/*7965*/          OPC_CheckPredicate, 30, // Predicate_imm64lf32
/*7967*/          OPC_MoveParent,
/*7968*/          OPC_CheckType, MVT::i64,
/*7970*/          OPC_EmitConvertToTarget, 1,
/*7972*/          OPC_EmitNodeXForm, 7, 2, // LF32
/*7975*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::XILF), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$I2) - Complexity = 7
                  // Dst: (XILF:i64 GR64:i64:$R1src, (LF32:i64 (imm:i64):$I2))
/*7984*/        /*Scope*/ 19, /*->8004*/
/*7985*/          OPC_CheckPredicate, 31, // Predicate_imm64hf32
/*7987*/          OPC_MoveParent,
/*7988*/          OPC_CheckType, MVT::i64,
/*7990*/          OPC_EmitConvertToTarget, 1,
/*7992*/          OPC_EmitNodeXForm, 8, 2, // HF32
/*7995*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::XIHF), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$I2) - Complexity = 7
                  // Dst: (XIHF:i64 GR64:i64:$R1src, (HF32:i64 (imm:i64):$I2))
/*8004*/        /*Scope*/ 17, /*->8022*/
/*8005*/          OPC_MoveParent,
/*8006*/          OPC_CheckType, MVT::i32,
/*8008*/          OPC_EmitConvertToTarget, 1,
/*8010*/          OPC_EmitNodeXForm, 9, 2, // UIMM32
/*8013*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::XILF32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:i32 GR32:i32:$R1src, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                  // Dst: (XILF32:i32 GR32:i32:$R1src, (UIMM32:i32 (imm:i32):$I2))
/*8022*/        0, /*End of Scope*/
/*8023*/      /*Scope*/ 11, /*->8035*/
/*8024*/        OPC_CheckType, MVT::i32,
/*8026*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (XR:i32 GR32:i32:$R1src, GR32:i32:$R2)
/*8035*/      /*Scope*/ 11, /*->8047*/
/*8036*/        OPC_CheckType, MVT::i64,
/*8038*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XGR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (XGR:i64 GR64:i64:$R1src, GR64:i64:$R2)
/*8047*/      0, /*End of Scope*/
/*8048*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 10|128,4/*522*/,  TARGET_VAL(ISD::MUL),// ->8575
/*8053*/    OPC_Scope, 14|128,1/*142*/, /*->8198*/ // 7 children in Scope
/*8056*/      OPC_RecordChild0, // #0 = $R1src
/*8057*/      OPC_MoveChild, 1,
/*8059*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8062*/      OPC_RecordMemRef,
/*8063*/      OPC_RecordNode, // #1 = 'ld' chained node
/*8064*/      OPC_CheckFoldableChainNode,
/*8065*/      OPC_RecordChild1, // #2 = $XBD2
/*8066*/      OPC_CheckChild1Type, MVT::i64,
/*8068*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8070*/      OPC_Scope, 41, /*->8113*/ // 4 children in Scope
/*8072*/        OPC_CheckPredicate, 10, // Predicate_sextload
/*8074*/        OPC_CheckPredicate, 32, // Predicate_sextloadi16
/*8076*/        OPC_MoveParent,
/*8077*/        OPC_CheckType, MVT::i32,
/*8079*/        OPC_Scope, 15, /*->8096*/ // 2 children in Scope
/*8081*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*8084*/          OPC_EmitMergeInputChains1_1,
/*8085*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (mul:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                  // Dst: (MH:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*8096*/        /*Scope*/ 15, /*->8112*/
/*8097*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*8100*/          OPC_EmitMergeInputChains1_1,
/*8101*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MHY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (mul:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                  // Dst: (MHY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*8112*/        0, /*End of Scope*/
/*8113*/      /*Scope*/ 39, /*->8153*/
/*8114*/        OPC_CheckPredicate, 1, // Predicate_load
/*8116*/        OPC_MoveParent,
/*8117*/        OPC_CheckType, MVT::i32,
/*8119*/        OPC_Scope, 15, /*->8136*/ // 2 children in Scope
/*8121*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*8124*/          OPC_EmitMergeInputChains1_1,
/*8125*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MS), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (mul:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (MS:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*8136*/        /*Scope*/ 15, /*->8152*/
/*8137*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*8140*/          OPC_EmitMergeInputChains1_1,
/*8141*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (mul:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (MSY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*8152*/        0, /*End of Scope*/
/*8153*/      /*Scope*/ 22, /*->8176*/
/*8154*/        OPC_CheckPredicate, 10, // Predicate_sextload
/*8156*/        OPC_CheckPredicate, 35, // Predicate_sextloadi32
/*8158*/        OPC_MoveParent,
/*8159*/        OPC_CheckType, MVT::i64,
/*8161*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8164*/        OPC_EmitMergeInputChains1_1,
/*8165*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (mul:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>) - Complexity = 19
                // Dst: (MSGF:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*8176*/      /*Scope*/ 20, /*->8197*/
/*8177*/        OPC_CheckPredicate, 1, // Predicate_load
/*8179*/        OPC_MoveParent,
/*8180*/        OPC_CheckType, MVT::i64,
/*8182*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8185*/        OPC_EmitMergeInputChains1_1,
/*8186*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (mul:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (MSG:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*8197*/      0, /*End of Scope*/
/*8198*/    /*Scope*/ 17|128,1/*145*/, /*->8345*/
/*8200*/      OPC_MoveChild, 0,
/*8202*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8205*/      OPC_RecordMemRef,
/*8206*/      OPC_RecordNode, // #0 = 'ld' chained node
/*8207*/      OPC_CheckFoldableChainNode,
/*8208*/      OPC_RecordChild1, // #1 = $XBD2
/*8209*/      OPC_CheckChild1Type, MVT::i64,
/*8211*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8213*/      OPC_Scope, 42, /*->8257*/ // 4 children in Scope
/*8215*/        OPC_CheckPredicate, 10, // Predicate_sextload
/*8217*/        OPC_CheckPredicate, 32, // Predicate_sextloadi16
/*8219*/        OPC_MoveParent,
/*8220*/        OPC_RecordChild1, // #2 = $R1src
/*8221*/        OPC_CheckType, MVT::i32,
/*8223*/        OPC_Scope, 15, /*->8240*/ // 2 children in Scope
/*8225*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*8228*/          OPC_EmitMergeInputChains1_0,
/*8229*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (mul:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (MH:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*8240*/        /*Scope*/ 15, /*->8256*/
/*8241*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*8244*/          OPC_EmitMergeInputChains1_0,
/*8245*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MHY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (mul:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (MHY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*8256*/        0, /*End of Scope*/
/*8257*/      /*Scope*/ 40, /*->8298*/
/*8258*/        OPC_CheckPredicate, 1, // Predicate_load
/*8260*/        OPC_MoveParent,
/*8261*/        OPC_RecordChild1, // #2 = $R1src
/*8262*/        OPC_CheckType, MVT::i32,
/*8264*/        OPC_Scope, 15, /*->8281*/ // 2 children in Scope
/*8266*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*8269*/          OPC_EmitMergeInputChains1_0,
/*8270*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MS), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (mul:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (MS:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*8281*/        /*Scope*/ 15, /*->8297*/
/*8282*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*8285*/          OPC_EmitMergeInputChains1_0,
/*8286*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (mul:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (MSY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*8297*/        0, /*End of Scope*/
/*8298*/      /*Scope*/ 23, /*->8322*/
/*8299*/        OPC_CheckPredicate, 10, // Predicate_sextload
/*8301*/        OPC_CheckPredicate, 35, // Predicate_sextloadi32
/*8303*/        OPC_MoveParent,
/*8304*/        OPC_RecordChild1, // #2 = $R1src
/*8305*/        OPC_CheckType, MVT::i64,
/*8307*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8310*/        OPC_EmitMergeInputChains1_0,
/*8311*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (mul:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (MSGF:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*8322*/      /*Scope*/ 21, /*->8344*/
/*8323*/        OPC_CheckPredicate, 1, // Predicate_load
/*8325*/        OPC_MoveParent,
/*8326*/        OPC_RecordChild1, // #2 = $R1src
/*8327*/        OPC_CheckType, MVT::i64,
/*8329*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8332*/        OPC_EmitMergeInputChains1_0,
/*8333*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (mul:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (MSG:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*8344*/      0, /*End of Scope*/
/*8345*/    /*Scope*/ 113, /*->8459*/
/*8346*/      OPC_RecordChild0, // #0 = $R1src
/*8347*/      OPC_Scope, 68, /*->8417*/ // 3 children in Scope
/*8349*/        OPC_RecordChild1, // #1 = $I2
/*8350*/        OPC_MoveChild, 1,
/*8352*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8355*/        OPC_Scope, 19, /*->8376*/ // 3 children in Scope
/*8357*/          OPC_CheckPredicate, 16, // Predicate_imm32sx16
/*8359*/          OPC_MoveParent,
/*8360*/          OPC_CheckType, MVT::i32,
/*8362*/          OPC_EmitConvertToTarget, 1,
/*8364*/          OPC_EmitNodeXForm, 2, 2, // SIMM16
/*8367*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MHI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (mul:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                  // Dst: (MHI:i32 GR32:i32:$R1src, (SIMM16:i32 (imm:i32):$I2))
/*8376*/        /*Scope*/ 19, /*->8396*/
/*8377*/          OPC_CheckPredicate, 17, // Predicate_imm64sx16
/*8379*/          OPC_MoveParent,
/*8380*/          OPC_CheckType, MVT::i64,
/*8382*/          OPC_EmitConvertToTarget, 1,
/*8384*/          OPC_EmitNodeXForm, 2, 2, // SIMM16
/*8387*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MGHI), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (mul:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                  // Dst: (MGHI:i64 GR64:i64:$R1src, (SIMM16:i64 (imm:i64):$I2))
/*8396*/        /*Scope*/ 19, /*->8416*/
/*8397*/          OPC_CheckPredicate, 37, // Predicate_imm64sx32
/*8399*/          OPC_MoveParent,
/*8400*/          OPC_CheckType, MVT::i64,
/*8402*/          OPC_EmitConvertToTarget, 1,
/*8404*/          OPC_EmitNodeXForm, 10, 2, // SIMM32
/*8407*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFI), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (mul:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$I2) - Complexity = 7
                  // Dst: (MSGFI:i64 GR64:i64:$R1src, (SIMM32:i64 (imm:i64):$I2))
/*8416*/        0, /*End of Scope*/
/*8417*/      /*Scope*/ 16, /*->8434*/
/*8418*/        OPC_MoveChild, 1,
/*8420*/        OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*8423*/        OPC_RecordChild0, // #1 = $src2
/*8424*/        OPC_MoveParent,
/*8425*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i64 GR64:i64:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                // Dst: (MSGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
/*8434*/      /*Scope*/ 23, /*->8458*/
/*8435*/        OPC_RecordChild1, // #1 = $I2
/*8436*/        OPC_MoveChild, 1,
/*8438*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8441*/        OPC_MoveParent,
/*8442*/        OPC_CheckType, MVT::i32,
/*8444*/        OPC_EmitConvertToTarget, 1,
/*8446*/        OPC_EmitNodeXForm, 10, 2, // SIMM32
/*8449*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSFI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (mul:i32 GR32:i32:$R1src, (imm:i32)<<X:SIMM32>>:$I2) - Complexity = 6
                // Dst: (MSFI:i32 GR32:i32:$R1src, (SIMM32:i32 (imm:i32):$I2))
/*8458*/      0, /*End of Scope*/
/*8459*/    /*Scope*/ 17, /*->8477*/
/*8460*/      OPC_MoveChild, 0,
/*8462*/      OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*8465*/      OPC_RecordChild0, // #0 = $src2
/*8466*/      OPC_MoveParent,
/*8467*/      OPC_RecordChild1, // #1 = $src1
/*8468*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFR), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
              // Src: (mul:i64 (sext:i64 GR32:i32:$src2), GR64:i64:$src1) - Complexity = 6
              // Dst: (MSGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
/*8477*/    /*Scope*/ 34, /*->8512*/
/*8478*/      OPC_RecordChild0, // #0 = $src1
/*8479*/      OPC_MoveChild, 1,
/*8481*/      OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*8484*/      OPC_RecordChild0, // #1 = $src2
/*8485*/      OPC_MoveChild, 1,
/*8487*/      OPC_CheckValueType, MVT::i32,
/*8489*/      OPC_MoveParent,
/*8490*/      OPC_MoveParent,
/*8491*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*8494*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*8503*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFR), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
              // Src: (mul:i64 GR64:i64:$src1, (sext_inreg:i64 GR64:i64:$src2, i32:Other)) - Complexity = 6
              // Dst: (MSGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*8512*/    /*Scope*/ 34, /*->8547*/
/*8513*/      OPC_MoveChild, 0,
/*8515*/      OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*8518*/      OPC_RecordChild0, // #0 = $src2
/*8519*/      OPC_MoveChild, 1,
/*8521*/      OPC_CheckValueType, MVT::i32,
/*8523*/      OPC_MoveParent,
/*8524*/      OPC_MoveParent,
/*8525*/      OPC_RecordChild1, // #1 = $src1
/*8526*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*8529*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*8538*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFR), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 3, 
              // Src: (mul:i64 (sext_inreg:i64 GR64:i64:$src2, i32:Other), GR64:i64:$src1) - Complexity = 6
              // Dst: (MSGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*8547*/    /*Scope*/ 26, /*->8574*/
/*8548*/      OPC_RecordChild0, // #0 = $R1src
/*8549*/      OPC_RecordChild1, // #1 = $R2
/*8550*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8562
/*8553*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (MSR:i32 GR32:i32:$R1src, GR32:i32:$R2)
              /*SwitchType*/ 9,  MVT::i64,// ->8573
/*8564*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (MSGR:i64 GR64:i64:$R1src, GR64:i64:$R2)
              0, // EndSwitchType
/*8574*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(SystemZISD::UMUL_LOHI64),// ->8624
/*8578*/    OPC_RecordChild0, // #0 = $R1src
/*8579*/    OPC_Scope, 31, /*->8612*/ // 2 children in Scope
/*8581*/      OPC_MoveChild, 1,
/*8583*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8586*/      OPC_RecordMemRef,
/*8587*/      OPC_RecordNode, // #1 = 'ld' chained node
/*8588*/      OPC_CheckFoldableChainNode,
/*8589*/      OPC_RecordChild1, // #2 = $XBD2
/*8590*/      OPC_CheckChild1Type, MVT::i64,
/*8592*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8594*/      OPC_CheckPredicate, 1, // Predicate_load
/*8596*/      OPC_MoveParent,
/*8597*/      OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8600*/      OPC_EmitMergeInputChains1_1,
/*8601*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MLG), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (z_umul_lohi64:Untyped GR128:Untyped:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
              // Dst: (MLG:Untyped GR128:Untyped:$R1src, bdxaddr20only:i64:$XBD2)
/*8612*/    /*Scope*/ 10, /*->8623*/
/*8613*/      OPC_RecordChild1, // #1 = $R2
/*8614*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MLGR), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (z_umul_lohi64:Untyped GR128:Untyped:$R1src, GR64:i64:$R2) - Complexity = 3
              // Dst: (MLGR:Untyped GR128:Untyped:$R1src, GR64:i64:$R2)
/*8623*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 117,  TARGET_VAL(SystemZISD::SDIVREM64),// ->8744
/*8627*/    OPC_RecordChild0, // #0 = $R1src
/*8628*/    OPC_Scope, 102, /*->8732*/ // 2 children in Scope
/*8630*/      OPC_MoveChild, 1,
/*8632*/      OPC_SwitchOpcode /*3 cases */, 50,  TARGET_VAL(ISD::LOAD),// ->8686
/*8636*/        OPC_RecordMemRef,
/*8637*/        OPC_RecordNode, // #1 = 'ld' chained node
/*8638*/        OPC_CheckFoldableChainNode,
/*8639*/        OPC_RecordChild1, // #2 = $XBD2
/*8640*/        OPC_CheckChild1Type, MVT::i64,
/*8642*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8644*/        OPC_Scope, 20, /*->8666*/ // 2 children in Scope
/*8646*/          OPC_CheckPredicate, 10, // Predicate_sextload
/*8648*/          OPC_CheckPredicate, 35, // Predicate_sextloadi32
/*8650*/          OPC_MoveParent,
/*8651*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8654*/          OPC_EmitMergeInputChains1_1,
/*8655*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::DSGF), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (z_sdivrem64:Untyped GR128:Untyped:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>) - Complexity = 19
                  // Dst: (DSGF:Untyped GR128:Untyped:$R1src, bdxaddr20only:i64:$XBD2)
/*8666*/        /*Scope*/ 18, /*->8685*/
/*8667*/          OPC_CheckPredicate, 1, // Predicate_load
/*8669*/          OPC_MoveParent,
/*8670*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8673*/          OPC_EmitMergeInputChains1_1,
/*8674*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::DSG), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (z_sdivrem64:Untyped GR128:Untyped:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (DSG:Untyped GR128:Untyped:$R1src, bdxaddr20only:i64:$XBD2)
/*8685*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::SIGN_EXTEND),// ->8700
/*8689*/        OPC_RecordChild0, // #1 = $src2
/*8690*/        OPC_MoveParent,
/*8691*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::DSGFR), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
                // Src: (z_sdivrem64:Untyped GR128:Untyped:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                // Dst: (DSGFR:Untyped GR128:Untyped:$src1, GR32:i32:$src2)
              /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->8731
/*8703*/        OPC_RecordChild0, // #1 = $src2
/*8704*/        OPC_MoveChild, 1,
/*8706*/        OPC_CheckValueType, MVT::i32,
/*8708*/        OPC_MoveParent,
/*8709*/        OPC_MoveParent,
/*8710*/        OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*8713*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*8722*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::DSGFR), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 3, 
                // Src: (z_sdivrem64:Untyped GR128:Untyped:$src1, (sext_inreg:i64 GR64:i64:$src2, i32:Other)) - Complexity = 6
                // Dst: (DSGFR:Untyped GR128:Untyped:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
              0, // EndSwitchOpcode
/*8732*/    /*Scope*/ 10, /*->8743*/
/*8733*/      OPC_RecordChild1, // #1 = $R2
/*8734*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::DSGR), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (z_sdivrem64:Untyped GR128:Untyped:$R1src, GR64:i64:$R2) - Complexity = 3
              // Dst: (DSGR:Untyped GR128:Untyped:$R1src, GR64:i64:$R2)
/*8743*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(SystemZISD::UDIVREM32),// ->8793
/*8747*/    OPC_RecordChild0, // #0 = $R1src
/*8748*/    OPC_Scope, 31, /*->8781*/ // 2 children in Scope
/*8750*/      OPC_MoveChild, 1,
/*8752*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8755*/      OPC_RecordMemRef,
/*8756*/      OPC_RecordNode, // #1 = 'ld' chained node
/*8757*/      OPC_CheckFoldableChainNode,
/*8758*/      OPC_RecordChild1, // #2 = $XBD2
/*8759*/      OPC_CheckChild1Type, MVT::i64,
/*8761*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8763*/      OPC_CheckPredicate, 1, // Predicate_load
/*8765*/      OPC_MoveParent,
/*8766*/      OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8769*/      OPC_EmitMergeInputChains1_1,
/*8770*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::DL), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (z_udivrem32:Untyped GR128:Untyped:$R1src, (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
              // Dst: (DL:Untyped GR128:Untyped:$R1src, bdxaddr20only:i64:$XBD2)
/*8781*/    /*Scope*/ 10, /*->8792*/
/*8782*/      OPC_RecordChild1, // #1 = $R2
/*8783*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::DLR), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (z_udivrem32:Untyped GR128:Untyped:$R1src, GR32:i32:$R2) - Complexity = 3
              // Dst: (DLR:Untyped GR128:Untyped:$R1src, GR32:i32:$R2)
/*8792*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(SystemZISD::UDIVREM64),// ->8842
/*8796*/    OPC_RecordChild0, // #0 = $R1src
/*8797*/    OPC_Scope, 31, /*->8830*/ // 2 children in Scope
/*8799*/      OPC_MoveChild, 1,
/*8801*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8804*/      OPC_RecordMemRef,
/*8805*/      OPC_RecordNode, // #1 = 'ld' chained node
/*8806*/      OPC_CheckFoldableChainNode,
/*8807*/      OPC_RecordChild1, // #2 = $XBD2
/*8808*/      OPC_CheckChild1Type, MVT::i64,
/*8810*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8812*/      OPC_CheckPredicate, 1, // Predicate_load
/*8814*/      OPC_MoveParent,
/*8815*/      OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8818*/      OPC_EmitMergeInputChains1_1,
/*8819*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::DLG), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (z_udivrem64:Untyped GR128:Untyped:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
              // Dst: (DLG:Untyped GR128:Untyped:$R1src, bdxaddr20only:i64:$XBD2)
/*8830*/    /*Scope*/ 10, /*->8841*/
/*8831*/      OPC_RecordChild1, // #1 = $R2
/*8832*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::DLGR), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (z_udivrem64:Untyped GR128:Untyped:$R1src, GR64:i64:$R2) - Complexity = 3
              // Dst: (DLGR:Untyped GR128:Untyped:$R1src, GR64:i64:$R2)
/*8841*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 85,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_AND),// ->8930
/*8845*/    OPC_RecordMemRef,
/*8846*/    OPC_RecordNode,   // #0 = 'z_atomic_loadw_and' chained node
/*8847*/    OPC_RecordChild1, // #1 = $ptr
/*8848*/    OPC_CheckChild1Type, MVT::i64,
/*8850*/    OPC_RecordChild2, // #2 = $src2
/*8851*/    OPC_Scope, 44, /*->8897*/ // 2 children in Scope
/*8853*/      OPC_MoveChild, 2,
/*8855*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8858*/      OPC_CheckPredicate, 49, // Predicate_imm32lh16c
/*8860*/      OPC_MoveParent,
/*8861*/      OPC_RecordChild3, // #3 = $bitshift
/*8862*/      OPC_RecordChild4, // #4 = $negbitshift
/*8863*/      OPC_RecordChild5, // #5 = $bitsize
/*8864*/      OPC_MoveChild, 5,
/*8866*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8869*/      OPC_MoveParent,
/*8870*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*8873*/      OPC_EmitMergeInputChains1_0,
/*8874*/      OPC_EmitConvertToTarget, 2,
/*8876*/      OPC_EmitNodeXForm, 4, 8, // LH16
/*8879*/      OPC_EmitConvertToTarget, 5,
/*8881*/      OPC_EmitNodeXForm, 9, 10, // UIMM32
/*8884*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_NILH), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
              // Src: (z_atomic_loadw_and:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 19
              // Dst: (ATOMIC_LOADW_NILH:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*8897*/    /*Scope*/ 31, /*->8929*/
/*8898*/      OPC_RecordChild3, // #3 = $bitshift
/*8899*/      OPC_RecordChild4, // #4 = $negbitshift
/*8900*/      OPC_RecordChild5, // #5 = $bitsize
/*8901*/      OPC_MoveChild, 5,
/*8903*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8906*/      OPC_MoveParent,
/*8907*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*8910*/      OPC_EmitMergeInputChains1_0,
/*8911*/      OPC_EmitConvertToTarget, 5,
/*8913*/      OPC_EmitNodeXForm, 9, 8, // UIMM32
/*8916*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_NR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_and:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_NR:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*8929*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 85,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_OR),// ->9018
/*8933*/    OPC_RecordMemRef,
/*8934*/    OPC_RecordNode,   // #0 = 'z_atomic_loadw_or' chained node
/*8935*/    OPC_RecordChild1, // #1 = $ptr
/*8936*/    OPC_CheckChild1Type, MVT::i64,
/*8938*/    OPC_RecordChild2, // #2 = $src2
/*8939*/    OPC_Scope, 44, /*->8985*/ // 2 children in Scope
/*8941*/      OPC_MoveChild, 2,
/*8943*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8946*/      OPC_CheckPredicate, 25, // Predicate_imm32lh16
/*8948*/      OPC_MoveParent,
/*8949*/      OPC_RecordChild3, // #3 = $bitshift
/*8950*/      OPC_RecordChild4, // #4 = $negbitshift
/*8951*/      OPC_RecordChild5, // #5 = $bitsize
/*8952*/      OPC_MoveChild, 5,
/*8954*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8957*/      OPC_MoveParent,
/*8958*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*8961*/      OPC_EmitMergeInputChains1_0,
/*8962*/      OPC_EmitConvertToTarget, 2,
/*8964*/      OPC_EmitNodeXForm, 4, 8, // LH16
/*8967*/      OPC_EmitConvertToTarget, 5,
/*8969*/      OPC_EmitNodeXForm, 9, 10, // UIMM32
/*8972*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_OILH), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
              // Src: (z_atomic_loadw_or:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 19
              // Dst: (ATOMIC_LOADW_OILH:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*8985*/    /*Scope*/ 31, /*->9017*/
/*8986*/      OPC_RecordChild3, // #3 = $bitshift
/*8987*/      OPC_RecordChild4, // #4 = $negbitshift
/*8988*/      OPC_RecordChild5, // #5 = $bitsize
/*8989*/      OPC_MoveChild, 5,
/*8991*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8994*/      OPC_MoveParent,
/*8995*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*8998*/      OPC_EmitMergeInputChains1_0,
/*8999*/      OPC_EmitConvertToTarget, 5,
/*9001*/      OPC_EmitNodeXForm, 9, 8, // UIMM32
/*9004*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_OR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_or:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_OR:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9017*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 85,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_NAND),// ->9106
/*9021*/    OPC_RecordMemRef,
/*9022*/    OPC_RecordNode,   // #0 = 'z_atomic_loadw_nand' chained node
/*9023*/    OPC_RecordChild1, // #1 = $ptr
/*9024*/    OPC_CheckChild1Type, MVT::i64,
/*9026*/    OPC_RecordChild2, // #2 = $src2
/*9027*/    OPC_Scope, 44, /*->9073*/ // 2 children in Scope
/*9029*/      OPC_MoveChild, 2,
/*9031*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9034*/      OPC_CheckPredicate, 49, // Predicate_imm32lh16c
/*9036*/      OPC_MoveParent,
/*9037*/      OPC_RecordChild3, // #3 = $bitshift
/*9038*/      OPC_RecordChild4, // #4 = $negbitshift
/*9039*/      OPC_RecordChild5, // #5 = $bitsize
/*9040*/      OPC_MoveChild, 5,
/*9042*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9045*/      OPC_MoveParent,
/*9046*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9049*/      OPC_EmitMergeInputChains1_0,
/*9050*/      OPC_EmitConvertToTarget, 2,
/*9052*/      OPC_EmitNodeXForm, 4, 8, // LH16
/*9055*/      OPC_EmitConvertToTarget, 5,
/*9057*/      OPC_EmitNodeXForm, 9, 10, // UIMM32
/*9060*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_NILHi), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
              // Src: (z_atomic_loadw_nand:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 19
              // Dst: (ATOMIC_LOADW_NILHi:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9073*/    /*Scope*/ 31, /*->9105*/
/*9074*/      OPC_RecordChild3, // #3 = $bitshift
/*9075*/      OPC_RecordChild4, // #4 = $negbitshift
/*9076*/      OPC_RecordChild5, // #5 = $bitsize
/*9077*/      OPC_MoveChild, 5,
/*9079*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9082*/      OPC_MoveParent,
/*9083*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9086*/      OPC_EmitMergeInputChains1_0,
/*9087*/      OPC_EmitConvertToTarget, 5,
/*9089*/      OPC_EmitNodeXForm, 9, 8, // UIMM32
/*9092*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_NRi), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_nand:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_NRi:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9105*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_ADD),// ->9192
/*9109*/    OPC_RecordMemRef,
/*9110*/    OPC_RecordNode,   // #0 = 'z_atomic_loadw_add' chained node
/*9111*/    OPC_RecordChild1, // #1 = $ptr
/*9112*/    OPC_CheckChild1Type, MVT::i64,
/*9114*/    OPC_RecordChild2, // #2 = $src2
/*9115*/    OPC_Scope, 42, /*->9159*/ // 2 children in Scope
/*9117*/      OPC_MoveChild, 2,
/*9119*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9122*/      OPC_MoveParent,
/*9123*/      OPC_RecordChild3, // #3 = $bitshift
/*9124*/      OPC_RecordChild4, // #4 = $negbitshift
/*9125*/      OPC_RecordChild5, // #5 = $bitsize
/*9126*/      OPC_MoveChild, 5,
/*9128*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9131*/      OPC_MoveParent,
/*9132*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9135*/      OPC_EmitMergeInputChains1_0,
/*9136*/      OPC_EmitConvertToTarget, 2,
/*9138*/      OPC_EmitNodeXForm, 10, 8, // SIMM32
/*9141*/      OPC_EmitConvertToTarget, 5,
/*9143*/      OPC_EmitNodeXForm, 9, 10, // UIMM32
/*9146*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_AFI), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
              // Src: (z_atomic_loadw_add:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:SIMM32>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 18
              // Dst: (ATOMIC_LOADW_AFI:i32 bdaddr20only:i64:$ptr, (SIMM32:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9159*/    /*Scope*/ 31, /*->9191*/
/*9160*/      OPC_RecordChild3, // #3 = $bitshift
/*9161*/      OPC_RecordChild4, // #4 = $negbitshift
/*9162*/      OPC_RecordChild5, // #5 = $bitsize
/*9163*/      OPC_MoveChild, 5,
/*9165*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9168*/      OPC_MoveParent,
/*9169*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9172*/      OPC_EmitMergeInputChains1_0,
/*9173*/      OPC_EmitConvertToTarget, 5,
/*9175*/      OPC_EmitNodeXForm, 9, 8, // UIMM32
/*9178*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_AR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_add:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_AR:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9191*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_XOR),// ->9278
/*9195*/    OPC_RecordMemRef,
/*9196*/    OPC_RecordNode,   // #0 = 'z_atomic_loadw_xor' chained node
/*9197*/    OPC_RecordChild1, // #1 = $ptr
/*9198*/    OPC_CheckChild1Type, MVT::i64,
/*9200*/    OPC_RecordChild2, // #2 = $src2
/*9201*/    OPC_Scope, 42, /*->9245*/ // 2 children in Scope
/*9203*/      OPC_MoveChild, 2,
/*9205*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9208*/      OPC_MoveParent,
/*9209*/      OPC_RecordChild3, // #3 = $bitshift
/*9210*/      OPC_RecordChild4, // #4 = $negbitshift
/*9211*/      OPC_RecordChild5, // #5 = $bitsize
/*9212*/      OPC_MoveChild, 5,
/*9214*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9217*/      OPC_MoveParent,
/*9218*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9221*/      OPC_EmitMergeInputChains1_0,
/*9222*/      OPC_EmitConvertToTarget, 2,
/*9224*/      OPC_EmitNodeXForm, 9, 8, // UIMM32
/*9227*/      OPC_EmitConvertToTarget, 5,
/*9229*/      OPC_EmitNodeXForm, 9, 10, // UIMM32
/*9232*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_XILF), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
              // Src: (z_atomic_loadw_xor:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 18
              // Dst: (ATOMIC_LOADW_XILF:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9245*/    /*Scope*/ 31, /*->9277*/
/*9246*/      OPC_RecordChild3, // #3 = $bitshift
/*9247*/      OPC_RecordChild4, // #4 = $negbitshift
/*9248*/      OPC_RecordChild5, // #5 = $bitsize
/*9249*/      OPC_MoveChild, 5,
/*9251*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9254*/      OPC_MoveParent,
/*9255*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9258*/      OPC_EmitMergeInputChains1_0,
/*9259*/      OPC_EmitConvertToTarget, 5,
/*9261*/      OPC_EmitNodeXForm, 9, 8, // UIMM32
/*9264*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_XR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_xor:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_XR:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9277*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 73|128,5/*713*/,  TARGET_VAL(ISD::LOAD),// ->9995
/*9282*/    OPC_RecordMemRef,
/*9283*/    OPC_RecordNode,   // #0 = 'ld' chained node
/*9284*/    OPC_RecordChild1, // #1 = $I2
/*9285*/    OPC_CheckChild1Type, MVT::i64,
/*9287*/    OPC_CheckPredicate, 0, // Predicate_unindexedload
/*9289*/    OPC_Scope, 34, /*->9325*/ // 9 children in Scope
/*9291*/      OPC_CheckPredicate, 1, // Predicate_load
/*9293*/      OPC_CheckPredicate, 34, // Predicate_aligned_load
/*9295*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9310
/*9298*/        OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectPCRelAddress:$I2 #2
/*9301*/        OPC_EmitMergeInputChains1_0,
/*9302*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>> - Complexity = 17
                // Dst: (LRL:i32 pcrel32:i64:$I2)
              /*SwitchType*/ 12,  MVT::i64,// ->9324
/*9312*/        OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectPCRelAddress:$I2 #2
/*9315*/        OPC_EmitMergeInputChains1_0,
/*9316*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGRL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>> - Complexity = 17
                // Dst: (LGRL:i64 pcrel32:i64:$I2)
              0, // EndSwitchType
/*9325*/    /*Scope*/ 58, /*->9384*/
/*9326*/      OPC_CheckPredicate, 10, // Predicate_sextload
/*9328*/      OPC_Scope, 34, /*->9364*/ // 2 children in Scope
/*9330*/        OPC_CheckPredicate, 32, // Predicate_sextloadi16
/*9332*/        OPC_CheckPredicate, 33, // Predicate_aligned_sextloadi16
/*9334*/        OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9349
/*9337*/          OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectPCRelAddress:$I2 #2
/*9340*/          OPC_EmitMergeInputChains1_0,
/*9341*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHRL), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                  // Src: (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_aligned_sextloadi16>> - Complexity = 17
                  // Dst: (LHRL:i32 pcrel32:i64:$I2)
                /*SwitchType*/ 12,  MVT::i64,// ->9363
/*9351*/          OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectPCRelAddress:$I2 #2
/*9354*/          OPC_EmitMergeInputChains1_0,
/*9355*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGHRL), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                  // Src: (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_aligned_sextloadi16>> - Complexity = 17
                  // Dst: (LGHRL:i64 pcrel32:i64:$I2)
                0, // EndSwitchType
/*9364*/      /*Scope*/ 18, /*->9383*/
/*9365*/        OPC_CheckPredicate, 35, // Predicate_sextloadi32
/*9367*/        OPC_CheckPredicate, 36, // Predicate_aligned_sextloadi32
/*9369*/        OPC_CheckType, MVT::i64,
/*9371*/        OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectPCRelAddress:$I2 #2
/*9374*/        OPC_EmitMergeInputChains1_0,
/*9375*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGFRL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>><<P:Predicate_aligned_sextloadi32>> - Complexity = 17
                // Dst: (LGFRL:i64 pcrel32:i64:$I2)
/*9383*/      0, /*End of Scope*/
/*9384*/    /*Scope*/ 58, /*->9443*/
/*9385*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*9387*/      OPC_Scope, 34, /*->9423*/ // 2 children in Scope
/*9389*/        OPC_CheckPredicate, 38, // Predicate_zextloadi16
/*9391*/        OPC_CheckPredicate, 39, // Predicate_aligned_zextloadi16
/*9393*/        OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9408
/*9396*/          OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectPCRelAddress:$I2 #2
/*9399*/          OPC_EmitMergeInputChains1_0,
/*9400*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLHRL), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                  // Src: (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_aligned_zextloadi16>> - Complexity = 17
                  // Dst: (LLHRL:i32 pcrel32:i64:$I2)
                /*SwitchType*/ 12,  MVT::i64,// ->9422
/*9410*/          OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectPCRelAddress:$I2 #2
/*9413*/          OPC_EmitMergeInputChains1_0,
/*9414*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGHRL), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                  // Src: (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_aligned_zextloadi16>> - Complexity = 17
                  // Dst: (LLGHRL:i64 pcrel32:i64:$I2)
                0, // EndSwitchType
/*9423*/      /*Scope*/ 18, /*->9442*/
/*9424*/        OPC_CheckPredicate, 40, // Predicate_zextloadi32
/*9426*/        OPC_CheckPredicate, 41, // Predicate_aligned_zextloadi32
/*9428*/        OPC_CheckType, MVT::i64,
/*9430*/        OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectPCRelAddress:$I2 #2
/*9433*/        OPC_EmitMergeInputChains1_0,
/*9434*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGFRL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>><<P:Predicate_aligned_zextloadi32>> - Complexity = 17
                // Dst: (LLGFRL:i64 pcrel32:i64:$I2)
/*9442*/      0, /*End of Scope*/
/*9443*/    /*Scope*/ 70, /*->9514*/
/*9444*/      OPC_CheckPredicate, 1, // Predicate_load
/*9446*/      OPC_SwitchType /*3 cases */, 32,  MVT::i32,// ->9481
/*9449*/        OPC_Scope, 14, /*->9465*/ // 2 children in Scope
/*9451*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #2 #3 #4
/*9454*/          OPC_EmitMergeInputChains1_0,
/*9455*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::L), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (L:i32 bdxaddr12pair:i64:$XBD2)
/*9465*/        /*Scope*/ 14, /*->9480*/
/*9466*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #2 #3 #4
/*9469*/          OPC_EmitMergeInputChains1_0,
/*9470*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LY:i32 bdxaddr20pair:i64:$XBD2)
/*9480*/        0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->9497
/*9483*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*9486*/        OPC_EmitMergeInputChains1_0,
/*9487*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                // Dst: (LG:i64 bdxaddr20only:i64:$XBD2)
              /*SwitchType*/ 14,  MVT::Untyped,// ->9513
/*9499*/        OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Only128:$src #2 #3 #4
/*9502*/        OPC_EmitMergeInputChains1_0,
/*9503*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::L128), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:Untyped bdxaddr20only128:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                // Dst: (L128:Untyped bdxaddr20only128:i64:$src)
              0, // EndSwitchType
/*9514*/    /*Scope*/ 115, /*->9630*/
/*9515*/      OPC_CheckPredicate, 10, // Predicate_sextload
/*9517*/      OPC_SwitchType /*2 cases */, 54,  MVT::i32,// ->9574
/*9520*/        OPC_Scope, 16, /*->9538*/ // 2 children in Scope
/*9522*/          OPC_CheckPredicate, 11, // Predicate_sextloadi8
/*9524*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*9527*/          OPC_EmitMergeInputChains1_0,
/*9528*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                  // Dst: (LB:i32 bdxaddr20only:i64:$XBD2)
/*9538*/        /*Scope*/ 34, /*->9573*/
/*9539*/          OPC_CheckPredicate, 32, // Predicate_sextloadi16
/*9541*/          OPC_Scope, 14, /*->9557*/ // 2 children in Scope
/*9543*/            OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #2 #3 #4
/*9546*/            OPC_EmitMergeInputChains1_0,
/*9547*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LH), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                    // Dst: (LH:i32 bdxaddr12pair:i64:$XBD2)
/*9557*/          /*Scope*/ 14, /*->9572*/
/*9558*/            OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #2 #3 #4
/*9561*/            OPC_EmitMergeInputChains1_0,
/*9562*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                    // Dst: (LHY:i32 bdxaddr20pair:i64:$XBD2)
/*9572*/          0, /*End of Scope*/
/*9573*/        0, /*End of Scope*/
              /*SwitchType*/ 53,  MVT::i64,// ->9629
/*9576*/        OPC_Scope, 16, /*->9594*/ // 3 children in Scope
/*9578*/          OPC_CheckPredicate, 11, // Predicate_sextloadi8
/*9580*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*9583*/          OPC_EmitMergeInputChains1_0,
/*9584*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                  // Dst: (LGB:i64 bdxaddr20only:i64:$XBD2)
/*9594*/        /*Scope*/ 16, /*->9611*/
/*9595*/          OPC_CheckPredicate, 32, // Predicate_sextloadi16
/*9597*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*9600*/          OPC_EmitMergeInputChains1_0,
/*9601*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                  // Dst: (LGH:i64 bdxaddr20only:i64:$XBD2)
/*9611*/        /*Scope*/ 16, /*->9628*/
/*9612*/          OPC_CheckPredicate, 35, // Predicate_sextloadi32
/*9614*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*9617*/          OPC_EmitMergeInputChains1_0,
/*9618*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGF), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 16
                  // Dst: (LGF:i64 bdxaddr20only:i64:$XBD2)
/*9628*/        0, /*End of Scope*/
              0, // EndSwitchType
/*9630*/    /*Scope*/ 115, /*->9746*/
/*9631*/      OPC_CheckPredicate, 12, // Predicate_extload
/*9633*/      OPC_SwitchType /*2 cases */, 54,  MVT::i32,// ->9690
/*9636*/        OPC_Scope, 16, /*->9654*/ // 2 children in Scope
/*9638*/          OPC_CheckPredicate, 13, // Predicate_extloadi8
/*9640*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$src #2 #3 #4
/*9643*/          OPC_EmitMergeInputChains1_0,
/*9644*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr20only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 16
                  // Dst: (LB:i32 bdxaddr20only:i64:$src)
/*9654*/        /*Scope*/ 34, /*->9689*/
/*9655*/          OPC_CheckPredicate, 56, // Predicate_extloadi16
/*9657*/          OPC_Scope, 14, /*->9673*/ // 2 children in Scope
/*9659*/            OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src #2 #3 #4
/*9662*/            OPC_EmitMergeInputChains1_0,
/*9663*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LH), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i32 bdxaddr12pair:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                    // Dst: (LH:i32 bdxaddr12pair:i64:$src)
/*9673*/          /*Scope*/ 14, /*->9688*/
/*9674*/            OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src #2 #3 #4
/*9677*/            OPC_EmitMergeInputChains1_0,
/*9678*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i32 bdxaddr20pair:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                    // Dst: (LHY:i32 bdxaddr20pair:i64:$src)
/*9688*/          0, /*End of Scope*/
/*9689*/        0, /*End of Scope*/
              /*SwitchType*/ 53,  MVT::i64,// ->9745
/*9692*/        OPC_Scope, 16, /*->9710*/ // 3 children in Scope
/*9694*/          OPC_CheckPredicate, 13, // Predicate_extloadi8
/*9696*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$src #2 #3 #4
/*9699*/          OPC_EmitMergeInputChains1_0,
/*9700*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 16
                  // Dst: (LGB:i64 bdxaddr20only:i64:$src)
/*9710*/        /*Scope*/ 16, /*->9727*/
/*9711*/          OPC_CheckPredicate, 56, // Predicate_extloadi16
/*9713*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$src #2 #3 #4
/*9716*/          OPC_EmitMergeInputChains1_0,
/*9717*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                  // Dst: (LGH:i64 bdxaddr20only:i64:$src)
/*9727*/        /*Scope*/ 16, /*->9744*/
/*9728*/          OPC_CheckPredicate, 57, // Predicate_extloadi32
/*9730*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$src #2 #3 #4
/*9733*/          OPC_EmitMergeInputChains1_0,
/*9734*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGF), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 16
                  // Dst: (LGF:i64 bdxaddr20only:i64:$src)
/*9744*/        0, /*End of Scope*/
              0, // EndSwitchType
/*9746*/    /*Scope*/ 97, /*->9844*/
/*9747*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*9749*/      OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->9788
/*9752*/        OPC_Scope, 16, /*->9770*/ // 2 children in Scope
/*9754*/          OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*9756*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*9759*/          OPC_EmitMergeInputChains1_0,
/*9760*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLC), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                  // Dst: (LLC:i32 bdxaddr20only:i64:$XBD2)
/*9770*/        /*Scope*/ 16, /*->9787*/
/*9771*/          OPC_CheckPredicate, 38, // Predicate_zextloadi16
/*9773*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*9776*/          OPC_EmitMergeInputChains1_0,
/*9777*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                  // Dst: (LLH:i32 bdxaddr20only:i64:$XBD2)
/*9787*/        0, /*End of Scope*/
              /*SwitchType*/ 53,  MVT::i64,// ->9843
/*9790*/        OPC_Scope, 16, /*->9808*/ // 3 children in Scope
/*9792*/          OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*9794*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*9797*/          OPC_EmitMergeInputChains1_0,
/*9798*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGC), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                  // Dst: (LLGC:i64 bdxaddr20only:i64:$XBD2)
/*9808*/        /*Scope*/ 16, /*->9825*/
/*9809*/          OPC_CheckPredicate, 38, // Predicate_zextloadi16
/*9811*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*9814*/          OPC_EmitMergeInputChains1_0,
/*9815*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                  // Dst: (LLGH:i64 bdxaddr20only:i64:$XBD2)
/*9825*/        /*Scope*/ 16, /*->9842*/
/*9826*/          OPC_CheckPredicate, 40, // Predicate_zextloadi32
/*9828*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*9831*/          OPC_EmitMergeInputChains1_0,
/*9832*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGF), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 16
                  // Dst: (LLGF:i64 bdxaddr20only:i64:$XBD2)
/*9842*/        0, /*End of Scope*/
              0, // EndSwitchType
/*9844*/    /*Scope*/ 88, /*->9933*/
/*9845*/      OPC_CheckPredicate, 1, // Predicate_load
/*9847*/      OPC_SwitchType /*3 cases */, 32,  MVT::f32,// ->9882
/*9850*/        OPC_Scope, 14, /*->9866*/ // 2 children in Scope
/*9852*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #2 #3 #4
/*9855*/          OPC_EmitMergeInputChains1_0,
/*9856*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LE), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LE:f32 bdxaddr12pair:i64:$XBD2)
/*9866*/        /*Scope*/ 14, /*->9881*/
/*9867*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #2 #3 #4
/*9870*/          OPC_EmitMergeInputChains1_0,
/*9871*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LEY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LEY:f32 bdxaddr20pair:i64:$XBD2)
/*9881*/        0, /*End of Scope*/
              /*SwitchType*/ 32,  MVT::f64,// ->9916
/*9884*/        OPC_Scope, 14, /*->9900*/ // 2 children in Scope
/*9886*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #2 #3 #4
/*9889*/          OPC_EmitMergeInputChains1_0,
/*9890*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LD), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f64 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LD:f64 bdxaddr12pair:i64:$XBD2)
/*9900*/        /*Scope*/ 14, /*->9915*/
/*9901*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #2 #3 #4
/*9904*/          OPC_EmitMergeInputChains1_0,
/*9905*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LDY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f64 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LDY:f64 bdxaddr20pair:i64:$XBD2)
/*9915*/        0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::f128,// ->9932
/*9918*/        OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Only128:$src #2 #3 #4
/*9921*/        OPC_EmitMergeInputChains1_0,
/*9922*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:f128 bdxaddr20only128:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                // Dst: (LX:f128 bdxaddr20only128:i64:$src)
              0, // EndSwitchType
/*9933*/    /*Scope*/ 60, /*->9994*/
/*9934*/      OPC_CheckPredicate, 12, // Predicate_extload
/*9936*/      OPC_Scope, 36, /*->9974*/ // 2 children in Scope
/*9938*/        OPC_CheckPredicate, 58, // Predicate_extloadf32
/*9940*/        OPC_SwitchType /*2 cases */, 14,  MVT::f64,// ->9957
/*9943*/          OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDXAddr12Only:$XBD2 #2 #3 #4
/*9946*/          OPC_EmitMergeInputChains1_0,
/*9947*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LDEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 16
                  // Dst: (LDEB:f64 bdxaddr12only:i64:$XBD2)
                /*SwitchType*/ 14,  MVT::f128,// ->9973
/*9959*/          OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDXAddr12Only:$XBD2 #2 #3 #4
/*9962*/          OPC_EmitMergeInputChains1_0,
/*9963*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LXEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f128, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f128 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 16
                  // Dst: (LXEB:f128 bdxaddr12only:i64:$XBD2)
                0, // EndSwitchType
/*9974*/      /*Scope*/ 18, /*->9993*/
/*9975*/        OPC_CheckPredicate, 59, // Predicate_extloadf64
/*9977*/        OPC_CheckType, MVT::f128,
/*9979*/        OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDXAddr12Only:$XBD2 #2 #3 #4
/*9982*/        OPC_EmitMergeInputChains1_0,
/*9983*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LXDB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:f128 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf64>> - Complexity = 16
                // Dst: (LXDB:f128 bdxaddr12only:i64:$XBD2)
/*9993*/      0, /*End of Scope*/
/*9994*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 32|128,1/*160*/,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->10159
/*9999*/    OPC_RecordMemRef,
/*10000*/   OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*10001*/   OPC_RecordChild1, // #1 = $ptr
/*10002*/   OPC_CheckChild1Type, MVT::i64,
/*10004*/   OPC_RecordChild2, // #2 = $src2
/*10005*/   OPC_Scope, 113, /*->10120*/ // 3 children in Scope
/*10007*/     OPC_MoveChild, 2,
/*10009*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10012*/     OPC_Scope, 26, /*->10040*/ // 4 children in Scope
/*10014*/       OPC_CheckPredicate, 16, // Predicate_imm32sx16
/*10016*/       OPC_MoveParent,
/*10017*/       OPC_CheckPredicate, 60, // Predicate_atomic_load_add_32
/*10019*/       OPC_CheckType, MVT::i32,
/*10021*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10024*/       OPC_EmitMergeInputChains1_0,
/*10025*/       OPC_EmitConvertToTarget, 2,
/*10027*/       OPC_EmitNodeXForm, 2, 5, // SIMM16
/*10030*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AHI), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_add:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$src2)<<P:Predicate_atomic_load_add_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_AHI:i32 bdaddr20only:i64:$ptr, (SIMM16:i32 (imm:i32):$src2))
/*10040*/     /*Scope*/ 26, /*->10067*/
/*10041*/       OPC_CheckPredicate, 17, // Predicate_imm64sx16
/*10043*/       OPC_MoveParent,
/*10044*/       OPC_CheckPredicate, 61, // Predicate_atomic_load_add_64
/*10046*/       OPC_CheckType, MVT::i64,
/*10048*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10051*/       OPC_EmitMergeInputChains1_0,
/*10052*/       OPC_EmitConvertToTarget, 2,
/*10054*/       OPC_EmitNodeXForm, 2, 5, // SIMM16
/*10057*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AGHI), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_add:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$src2)<<P:Predicate_atomic_load_add_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_AGHI:i64 bdaddr20only:i64:$ptr, (SIMM16:i64 (imm:i64):$src2))
/*10067*/     /*Scope*/ 26, /*->10094*/
/*10068*/       OPC_CheckPredicate, 37, // Predicate_imm64sx32
/*10070*/       OPC_MoveParent,
/*10071*/       OPC_CheckPredicate, 61, // Predicate_atomic_load_add_64
/*10073*/       OPC_CheckType, MVT::i64,
/*10075*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10078*/       OPC_EmitMergeInputChains1_0,
/*10079*/       OPC_EmitConvertToTarget, 2,
/*10081*/       OPC_EmitNodeXForm, 10, 5, // SIMM32
/*10084*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AGFI), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_add:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$src2)<<P:Predicate_atomic_load_add_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_AGFI:i64 bdaddr20only:i64:$ptr, (SIMM32:i64 (imm:i64):$src2))
/*10094*/     /*Scope*/ 24, /*->10119*/
/*10095*/       OPC_MoveParent,
/*10096*/       OPC_CheckPredicate, 60, // Predicate_atomic_load_add_32
/*10098*/       OPC_CheckType, MVT::i32,
/*10100*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10103*/       OPC_EmitMergeInputChains1_0,
/*10104*/       OPC_EmitConvertToTarget, 2,
/*10106*/       OPC_EmitNodeXForm, 10, 5, // SIMM32
/*10109*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AFI), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_add:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:SIMM32>>:$src2)<<P:Predicate_atomic_load_add_32>> - Complexity = 16
                // Dst: (ATOMIC_LOAD_AFI:i32 bdaddr20only:i64:$ptr, (SIMM32:i32 (imm:i32):$src2))
/*10119*/     0, /*End of Scope*/
/*10120*/   /*Scope*/ 18, /*->10139*/
/*10121*/     OPC_CheckPredicate, 60, // Predicate_atomic_load_add_32
/*10123*/     OPC_CheckType, MVT::i32,
/*10125*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10128*/     OPC_EmitMergeInputChains1_0,
/*10129*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_add:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_add_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_AR:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*10139*/   /*Scope*/ 18, /*->10158*/
/*10140*/     OPC_CheckPredicate, 61, // Predicate_atomic_load_add_64
/*10142*/     OPC_CheckType, MVT::i64,
/*10144*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10147*/     OPC_EmitMergeInputChains1_0,
/*10148*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AGR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_add:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_add_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_AGR:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*10158*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 40|128,2/*296*/,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->10459
/*10163*/   OPC_RecordMemRef,
/*10164*/   OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*10165*/   OPC_RecordChild1, // #1 = $ptr
/*10166*/   OPC_CheckChild1Type, MVT::i64,
/*10168*/   OPC_RecordChild2, // #2 = $src2
/*10169*/   OPC_Scope, 120|128,1/*248*/, /*->10420*/ // 3 children in Scope
/*10172*/     OPC_MoveChild, 2,
/*10174*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10177*/     OPC_Scope, 26, /*->10205*/ // 9 children in Scope
/*10179*/       OPC_CheckPredicate, 48, // Predicate_imm32ll16c
/*10181*/       OPC_MoveParent,
/*10182*/       OPC_CheckPredicate, 62, // Predicate_atomic_load_and_32
/*10184*/       OPC_CheckType, MVT::i32,
/*10186*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10189*/       OPC_EmitMergeInputChains1_0,
/*10190*/       OPC_EmitConvertToTarget, 2,
/*10192*/       OPC_EmitNodeXForm, 3, 5, // LL16
/*10195*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILL32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32ll16c>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_and_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILL32:i32 bdaddr20only:i64:$ptr, (LL16:i32 (imm:i32):$src2))
/*10205*/     /*Scope*/ 26, /*->10232*/
/*10206*/       OPC_CheckPredicate, 49, // Predicate_imm32lh16c
/*10208*/       OPC_MoveParent,
/*10209*/       OPC_CheckPredicate, 62, // Predicate_atomic_load_and_32
/*10211*/       OPC_CheckType, MVT::i32,
/*10213*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10216*/       OPC_EmitMergeInputChains1_0,
/*10217*/       OPC_EmitConvertToTarget, 2,
/*10219*/       OPC_EmitNodeXForm, 4, 5, // LH16
/*10222*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILH32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_and_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILH32:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2))
/*10232*/     /*Scope*/ 26, /*->10259*/
/*10233*/       OPC_CheckPredicate, 50, // Predicate_imm64ll16c
/*10235*/       OPC_MoveParent,
/*10236*/       OPC_CheckPredicate, 63, // Predicate_atomic_load_and_64
/*10238*/       OPC_CheckType, MVT::i64,
/*10240*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10243*/       OPC_EmitMergeInputChains1_0,
/*10244*/       OPC_EmitConvertToTarget, 2,
/*10246*/       OPC_EmitNodeXForm, 3, 5, // LL16
/*10249*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64ll16c>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILL:i64 bdaddr20only:i64:$ptr, (LL16:i64 (imm:i64):$src2))
/*10259*/     /*Scope*/ 26, /*->10286*/
/*10260*/       OPC_CheckPredicate, 51, // Predicate_imm64lh16c
/*10262*/       OPC_MoveParent,
/*10263*/       OPC_CheckPredicate, 63, // Predicate_atomic_load_and_64
/*10265*/       OPC_CheckType, MVT::i64,
/*10267*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10270*/       OPC_EmitMergeInputChains1_0,
/*10271*/       OPC_EmitConvertToTarget, 2,
/*10273*/       OPC_EmitNodeXForm, 4, 5, // LH16
/*10276*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILH), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lh16c>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILH:i64 bdaddr20only:i64:$ptr, (LH16:i64 (imm:i64):$src2))
/*10286*/     /*Scope*/ 26, /*->10313*/
/*10287*/       OPC_CheckPredicate, 52, // Predicate_imm64hl16c
/*10289*/       OPC_MoveParent,
/*10290*/       OPC_CheckPredicate, 63, // Predicate_atomic_load_and_64
/*10292*/       OPC_CheckType, MVT::i64,
/*10294*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10297*/       OPC_EmitMergeInputChains1_0,
/*10298*/       OPC_EmitConvertToTarget, 2,
/*10300*/       OPC_EmitNodeXForm, 5, 5, // HL16
/*10303*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hl16c>><<X:HL16>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHL:i64 bdaddr20only:i64:$ptr, (HL16:i64 (imm:i64):$src2))
/*10313*/     /*Scope*/ 26, /*->10340*/
/*10314*/       OPC_CheckPredicate, 53, // Predicate_imm64hh16c
/*10316*/       OPC_MoveParent,
/*10317*/       OPC_CheckPredicate, 63, // Predicate_atomic_load_and_64
/*10319*/       OPC_CheckType, MVT::i64,
/*10321*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10324*/       OPC_EmitMergeInputChains1_0,
/*10325*/       OPC_EmitConvertToTarget, 2,
/*10327*/       OPC_EmitNodeXForm, 6, 5, // HH16
/*10330*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHH), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hh16c>><<X:HH16>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHH:i64 bdaddr20only:i64:$ptr, (HH16:i64 (imm:i64):$src2))
/*10340*/     /*Scope*/ 26, /*->10367*/
/*10341*/       OPC_CheckPredicate, 54, // Predicate_imm64lf32c
/*10343*/       OPC_MoveParent,
/*10344*/       OPC_CheckPredicate, 63, // Predicate_atomic_load_and_64
/*10346*/       OPC_CheckType, MVT::i64,
/*10348*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10351*/       OPC_EmitMergeInputChains1_0,
/*10352*/       OPC_EmitConvertToTarget, 2,
/*10354*/       OPC_EmitNodeXForm, 7, 5, // LF32
/*10357*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lf32c>><<X:LF32>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILF:i64 bdaddr20only:i64:$ptr, (LF32:i64 (imm:i64):$src2))
/*10367*/     /*Scope*/ 26, /*->10394*/
/*10368*/       OPC_CheckPredicate, 55, // Predicate_imm64hf32c
/*10370*/       OPC_MoveParent,
/*10371*/       OPC_CheckPredicate, 63, // Predicate_atomic_load_and_64
/*10373*/       OPC_CheckType, MVT::i64,
/*10375*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10378*/       OPC_EmitMergeInputChains1_0,
/*10379*/       OPC_EmitConvertToTarget, 2,
/*10381*/       OPC_EmitNodeXForm, 8, 5, // HF32
/*10384*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hf32c>><<X:HF32>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHF:i64 bdaddr20only:i64:$ptr, (HF32:i64 (imm:i64):$src2))
/*10394*/     /*Scope*/ 24, /*->10419*/
/*10395*/       OPC_MoveParent,
/*10396*/       OPC_CheckPredicate, 62, // Predicate_atomic_load_and_32
/*10398*/       OPC_CheckType, MVT::i32,
/*10400*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10403*/       OPC_EmitMergeInputChains1_0,
/*10404*/       OPC_EmitConvertToTarget, 2,
/*10406*/       OPC_EmitNodeXForm, 9, 5, // UIMM32
/*10409*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILF32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2)<<P:Predicate_atomic_load_and_32>> - Complexity = 16
                // Dst: (ATOMIC_LOAD_NILF32:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2))
/*10419*/     0, /*End of Scope*/
/*10420*/   /*Scope*/ 18, /*->10439*/
/*10421*/     OPC_CheckPredicate, 62, // Predicate_atomic_load_and_32
/*10423*/     OPC_CheckType, MVT::i32,
/*10425*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10428*/     OPC_EmitMergeInputChains1_0,
/*10429*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_and:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_and_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NR:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*10439*/   /*Scope*/ 18, /*->10458*/
/*10440*/     OPC_CheckPredicate, 63, // Predicate_atomic_load_and_64
/*10442*/     OPC_CheckType, MVT::i64,
/*10444*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10447*/     OPC_EmitMergeInputChains1_0,
/*10448*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NGR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NGR:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*10458*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 40|128,2/*296*/,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->10759
/*10463*/   OPC_RecordMemRef,
/*10464*/   OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*10465*/   OPC_RecordChild1, // #1 = $ptr
/*10466*/   OPC_CheckChild1Type, MVT::i64,
/*10468*/   OPC_RecordChild2, // #2 = $src2
/*10469*/   OPC_Scope, 120|128,1/*248*/, /*->10720*/ // 3 children in Scope
/*10472*/     OPC_MoveChild, 2,
/*10474*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10477*/     OPC_Scope, 26, /*->10505*/ // 9 children in Scope
/*10479*/       OPC_CheckPredicate, 24, // Predicate_imm32ll16
/*10481*/       OPC_MoveParent,
/*10482*/       OPC_CheckPredicate, 64, // Predicate_atomic_load_or_32
/*10484*/       OPC_CheckType, MVT::i32,
/*10486*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10489*/       OPC_EmitMergeInputChains1_0,
/*10490*/       OPC_EmitConvertToTarget, 2,
/*10492*/       OPC_EmitNodeXForm, 3, 5, // LL16
/*10495*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILL32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_or_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OILL32:i32 bdaddr20only:i64:$ptr, (LL16:i32 (imm:i32):$src2))
/*10505*/     /*Scope*/ 26, /*->10532*/
/*10506*/       OPC_CheckPredicate, 25, // Predicate_imm32lh16
/*10508*/       OPC_MoveParent,
/*10509*/       OPC_CheckPredicate, 64, // Predicate_atomic_load_or_32
/*10511*/       OPC_CheckType, MVT::i32,
/*10513*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10516*/       OPC_EmitMergeInputChains1_0,
/*10517*/       OPC_EmitConvertToTarget, 2,
/*10519*/       OPC_EmitNodeXForm, 4, 5, // LH16
/*10522*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILH32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_or_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OILH32:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2))
/*10532*/     /*Scope*/ 26, /*->10559*/
/*10533*/       OPC_CheckPredicate, 26, // Predicate_imm64ll16
/*10535*/       OPC_MoveParent,
/*10536*/       OPC_CheckPredicate, 65, // Predicate_atomic_load_or_64
/*10538*/       OPC_CheckType, MVT::i64,
/*10540*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10543*/       OPC_EmitMergeInputChains1_0,
/*10544*/       OPC_EmitConvertToTarget, 2,
/*10546*/       OPC_EmitNodeXForm, 3, 5, // LL16
/*10549*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64ll16>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OILL:i64 bdaddr20only:i64:$ptr, (LL16:i64 (imm:i64):$src2))
/*10559*/     /*Scope*/ 26, /*->10586*/
/*10560*/       OPC_CheckPredicate, 27, // Predicate_imm64lh16
/*10562*/       OPC_MoveParent,
/*10563*/       OPC_CheckPredicate, 65, // Predicate_atomic_load_or_64
/*10565*/       OPC_CheckType, MVT::i64,
/*10567*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10570*/       OPC_EmitMergeInputChains1_0,
/*10571*/       OPC_EmitConvertToTarget, 2,
/*10573*/       OPC_EmitNodeXForm, 4, 5, // LH16
/*10576*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILH), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lh16>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OILH:i64 bdaddr20only:i64:$ptr, (LH16:i64 (imm:i64):$src2))
/*10586*/     /*Scope*/ 26, /*->10613*/
/*10587*/       OPC_CheckPredicate, 28, // Predicate_imm64hl16
/*10589*/       OPC_MoveParent,
/*10590*/       OPC_CheckPredicate, 65, // Predicate_atomic_load_or_64
/*10592*/       OPC_CheckType, MVT::i64,
/*10594*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10597*/       OPC_EmitMergeInputChains1_0,
/*10598*/       OPC_EmitConvertToTarget, 2,
/*10600*/       OPC_EmitNodeXForm, 5, 5, // HL16
/*10603*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OIHL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hl16>><<X:HL16>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OIHL:i64 bdaddr20only:i64:$ptr, (HL16:i64 (imm:i64):$src2))
/*10613*/     /*Scope*/ 26, /*->10640*/
/*10614*/       OPC_CheckPredicate, 29, // Predicate_imm64hh16
/*10616*/       OPC_MoveParent,
/*10617*/       OPC_CheckPredicate, 65, // Predicate_atomic_load_or_64
/*10619*/       OPC_CheckType, MVT::i64,
/*10621*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10624*/       OPC_EmitMergeInputChains1_0,
/*10625*/       OPC_EmitConvertToTarget, 2,
/*10627*/       OPC_EmitNodeXForm, 6, 5, // HH16
/*10630*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OIHH), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hh16>><<X:HH16>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OIHH:i64 bdaddr20only:i64:$ptr, (HH16:i64 (imm:i64):$src2))
/*10640*/     /*Scope*/ 26, /*->10667*/
/*10641*/       OPC_CheckPredicate, 30, // Predicate_imm64lf32
/*10643*/       OPC_MoveParent,
/*10644*/       OPC_CheckPredicate, 65, // Predicate_atomic_load_or_64
/*10646*/       OPC_CheckType, MVT::i64,
/*10648*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10651*/       OPC_EmitMergeInputChains1_0,
/*10652*/       OPC_EmitConvertToTarget, 2,
/*10654*/       OPC_EmitNodeXForm, 7, 5, // LF32
/*10657*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OILF:i64 bdaddr20only:i64:$ptr, (LF32:i64 (imm:i64):$src2))
/*10667*/     /*Scope*/ 26, /*->10694*/
/*10668*/       OPC_CheckPredicate, 31, // Predicate_imm64hf32
/*10670*/       OPC_MoveParent,
/*10671*/       OPC_CheckPredicate, 65, // Predicate_atomic_load_or_64
/*10673*/       OPC_CheckType, MVT::i64,
/*10675*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10678*/       OPC_EmitMergeInputChains1_0,
/*10679*/       OPC_EmitConvertToTarget, 2,
/*10681*/       OPC_EmitNodeXForm, 8, 5, // HF32
/*10684*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OIHF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OIHF:i64 bdaddr20only:i64:$ptr, (HF32:i64 (imm:i64):$src2))
/*10694*/     /*Scope*/ 24, /*->10719*/
/*10695*/       OPC_MoveParent,
/*10696*/       OPC_CheckPredicate, 64, // Predicate_atomic_load_or_32
/*10698*/       OPC_CheckType, MVT::i32,
/*10700*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10703*/       OPC_EmitMergeInputChains1_0,
/*10704*/       OPC_EmitConvertToTarget, 2,
/*10706*/       OPC_EmitNodeXForm, 9, 5, // UIMM32
/*10709*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILF32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2)<<P:Predicate_atomic_load_or_32>> - Complexity = 16
                // Dst: (ATOMIC_LOAD_OILF32:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2))
/*10719*/     0, /*End of Scope*/
/*10720*/   /*Scope*/ 18, /*->10739*/
/*10721*/     OPC_CheckPredicate, 64, // Predicate_atomic_load_or_32
/*10723*/     OPC_CheckType, MVT::i32,
/*10725*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10728*/     OPC_EmitMergeInputChains1_0,
/*10729*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_or:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_or_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_OR:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*10739*/   /*Scope*/ 18, /*->10758*/
/*10740*/     OPC_CheckPredicate, 65, // Predicate_atomic_load_or_64
/*10742*/     OPC_CheckType, MVT::i64,
/*10744*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10747*/     OPC_EmitMergeInputChains1_0,
/*10748*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OGR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_OGR:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*10758*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 5|128,1/*133*/,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->10896
/*10763*/   OPC_RecordMemRef,
/*10764*/   OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*10765*/   OPC_RecordChild1, // #1 = $ptr
/*10766*/   OPC_CheckChild1Type, MVT::i64,
/*10768*/   OPC_RecordChild2, // #2 = $src2
/*10769*/   OPC_Scope, 86, /*->10857*/ // 3 children in Scope
/*10771*/     OPC_MoveChild, 2,
/*10773*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10776*/     OPC_Scope, 26, /*->10804*/ // 3 children in Scope
/*10778*/       OPC_CheckPredicate, 30, // Predicate_imm64lf32
/*10780*/       OPC_MoveParent,
/*10781*/       OPC_CheckPredicate, 66, // Predicate_atomic_load_xor_64
/*10783*/       OPC_CheckType, MVT::i64,
/*10785*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10788*/       OPC_EmitMergeInputChains1_0,
/*10789*/       OPC_EmitConvertToTarget, 2,
/*10791*/       OPC_EmitNodeXForm, 7, 5, // LF32
/*10794*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XILF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_xor:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$src2)<<P:Predicate_atomic_load_xor_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_XILF:i64 bdaddr20only:i64:$ptr, (LF32:i64 (imm:i64):$src2))
/*10804*/     /*Scope*/ 26, /*->10831*/
/*10805*/       OPC_CheckPredicate, 31, // Predicate_imm64hf32
/*10807*/       OPC_MoveParent,
/*10808*/       OPC_CheckPredicate, 66, // Predicate_atomic_load_xor_64
/*10810*/       OPC_CheckType, MVT::i64,
/*10812*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10815*/       OPC_EmitMergeInputChains1_0,
/*10816*/       OPC_EmitConvertToTarget, 2,
/*10818*/       OPC_EmitNodeXForm, 8, 5, // HF32
/*10821*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XIHF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_xor:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$src2)<<P:Predicate_atomic_load_xor_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_XIHF:i64 bdaddr20only:i64:$ptr, (HF32:i64 (imm:i64):$src2))
/*10831*/     /*Scope*/ 24, /*->10856*/
/*10832*/       OPC_MoveParent,
/*10833*/       OPC_CheckPredicate, 67, // Predicate_atomic_load_xor_32
/*10835*/       OPC_CheckType, MVT::i32,
/*10837*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10840*/       OPC_EmitMergeInputChains1_0,
/*10841*/       OPC_EmitConvertToTarget, 2,
/*10843*/       OPC_EmitNodeXForm, 9, 5, // UIMM32
/*10846*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XILF32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_xor:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2)<<P:Predicate_atomic_load_xor_32>> - Complexity = 16
                // Dst: (ATOMIC_LOAD_XILF32:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2))
/*10856*/     0, /*End of Scope*/
/*10857*/   /*Scope*/ 18, /*->10876*/
/*10858*/     OPC_CheckPredicate, 67, // Predicate_atomic_load_xor_32
/*10860*/     OPC_CheckType, MVT::i32,
/*10862*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10865*/     OPC_EmitMergeInputChains1_0,
/*10866*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_xor:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_xor_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_XR:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*10876*/   /*Scope*/ 18, /*->10895*/
/*10877*/     OPC_CheckPredicate, 66, // Predicate_atomic_load_xor_64
/*10879*/     OPC_CheckType, MVT::i64,
/*10881*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10884*/     OPC_EmitMergeInputChains1_0,
/*10885*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XGR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_xor:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_xor_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_XGR:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*10895*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 40|128,2/*296*/,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->11196
/*10900*/   OPC_RecordMemRef,
/*10901*/   OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*10902*/   OPC_RecordChild1, // #1 = $ptr
/*10903*/   OPC_CheckChild1Type, MVT::i64,
/*10905*/   OPC_RecordChild2, // #2 = $src2
/*10906*/   OPC_Scope, 120|128,1/*248*/, /*->11157*/ // 3 children in Scope
/*10909*/     OPC_MoveChild, 2,
/*10911*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10914*/     OPC_Scope, 26, /*->10942*/ // 9 children in Scope
/*10916*/       OPC_CheckPredicate, 48, // Predicate_imm32ll16c
/*10918*/       OPC_MoveParent,
/*10919*/       OPC_CheckPredicate, 68, // Predicate_atomic_load_nand_32
/*10921*/       OPC_CheckType, MVT::i32,
/*10923*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10926*/       OPC_EmitMergeInputChains1_0,
/*10927*/       OPC_EmitConvertToTarget, 2,
/*10929*/       OPC_EmitNodeXForm, 3, 5, // LL16
/*10932*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILL32i), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32ll16c>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_nand_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILL32i:i32 bdaddr20only:i64:$ptr, (LL16:i32 (imm:i32):$src2))
/*10942*/     /*Scope*/ 26, /*->10969*/
/*10943*/       OPC_CheckPredicate, 49, // Predicate_imm32lh16c
/*10945*/       OPC_MoveParent,
/*10946*/       OPC_CheckPredicate, 68, // Predicate_atomic_load_nand_32
/*10948*/       OPC_CheckType, MVT::i32,
/*10950*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10953*/       OPC_EmitMergeInputChains1_0,
/*10954*/       OPC_EmitConvertToTarget, 2,
/*10956*/       OPC_EmitNodeXForm, 4, 5, // LH16
/*10959*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILH32i), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_nand_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILH32i:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2))
/*10969*/     /*Scope*/ 26, /*->10996*/
/*10970*/       OPC_CheckPredicate, 50, // Predicate_imm64ll16c
/*10972*/       OPC_MoveParent,
/*10973*/       OPC_CheckPredicate, 69, // Predicate_atomic_load_nand_64
/*10975*/       OPC_CheckType, MVT::i64,
/*10977*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10980*/       OPC_EmitMergeInputChains1_0,
/*10981*/       OPC_EmitConvertToTarget, 2,
/*10983*/       OPC_EmitNodeXForm, 3, 5, // LL16
/*10986*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILLi), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64ll16c>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILLi:i64 bdaddr20only:i64:$ptr, (LL16:i64 (imm:i64):$src2))
/*10996*/     /*Scope*/ 26, /*->11023*/
/*10997*/       OPC_CheckPredicate, 51, // Predicate_imm64lh16c
/*10999*/       OPC_MoveParent,
/*11000*/       OPC_CheckPredicate, 69, // Predicate_atomic_load_nand_64
/*11002*/       OPC_CheckType, MVT::i64,
/*11004*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11007*/       OPC_EmitMergeInputChains1_0,
/*11008*/       OPC_EmitConvertToTarget, 2,
/*11010*/       OPC_EmitNodeXForm, 4, 5, // LH16
/*11013*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILHi), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lh16c>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILHi:i64 bdaddr20only:i64:$ptr, (LH16:i64 (imm:i64):$src2))
/*11023*/     /*Scope*/ 26, /*->11050*/
/*11024*/       OPC_CheckPredicate, 52, // Predicate_imm64hl16c
/*11026*/       OPC_MoveParent,
/*11027*/       OPC_CheckPredicate, 69, // Predicate_atomic_load_nand_64
/*11029*/       OPC_CheckType, MVT::i64,
/*11031*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11034*/       OPC_EmitMergeInputChains1_0,
/*11035*/       OPC_EmitConvertToTarget, 2,
/*11037*/       OPC_EmitNodeXForm, 5, 5, // HL16
/*11040*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHLi), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hl16c>><<X:HL16>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHLi:i64 bdaddr20only:i64:$ptr, (HL16:i64 (imm:i64):$src2))
/*11050*/     /*Scope*/ 26, /*->11077*/
/*11051*/       OPC_CheckPredicate, 53, // Predicate_imm64hh16c
/*11053*/       OPC_MoveParent,
/*11054*/       OPC_CheckPredicate, 69, // Predicate_atomic_load_nand_64
/*11056*/       OPC_CheckType, MVT::i64,
/*11058*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11061*/       OPC_EmitMergeInputChains1_0,
/*11062*/       OPC_EmitConvertToTarget, 2,
/*11064*/       OPC_EmitNodeXForm, 6, 5, // HH16
/*11067*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHHi), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hh16c>><<X:HH16>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHHi:i64 bdaddr20only:i64:$ptr, (HH16:i64 (imm:i64):$src2))
/*11077*/     /*Scope*/ 26, /*->11104*/
/*11078*/       OPC_CheckPredicate, 54, // Predicate_imm64lf32c
/*11080*/       OPC_MoveParent,
/*11081*/       OPC_CheckPredicate, 69, // Predicate_atomic_load_nand_64
/*11083*/       OPC_CheckType, MVT::i64,
/*11085*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11088*/       OPC_EmitMergeInputChains1_0,
/*11089*/       OPC_EmitConvertToTarget, 2,
/*11091*/       OPC_EmitNodeXForm, 7, 5, // LF32
/*11094*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILFi), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lf32c>><<X:LF32>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILFi:i64 bdaddr20only:i64:$ptr, (LF32:i64 (imm:i64):$src2))
/*11104*/     /*Scope*/ 26, /*->11131*/
/*11105*/       OPC_CheckPredicate, 55, // Predicate_imm64hf32c
/*11107*/       OPC_MoveParent,
/*11108*/       OPC_CheckPredicate, 69, // Predicate_atomic_load_nand_64
/*11110*/       OPC_CheckType, MVT::i64,
/*11112*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11115*/       OPC_EmitMergeInputChains1_0,
/*11116*/       OPC_EmitConvertToTarget, 2,
/*11118*/       OPC_EmitNodeXForm, 8, 5, // HF32
/*11121*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHFi), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hf32c>><<X:HF32>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHFi:i64 bdaddr20only:i64:$ptr, (HF32:i64 (imm:i64):$src2))
/*11131*/     /*Scope*/ 24, /*->11156*/
/*11132*/       OPC_MoveParent,
/*11133*/       OPC_CheckPredicate, 68, // Predicate_atomic_load_nand_32
/*11135*/       OPC_CheckType, MVT::i32,
/*11137*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11140*/       OPC_EmitMergeInputChains1_0,
/*11141*/       OPC_EmitConvertToTarget, 2,
/*11143*/       OPC_EmitNodeXForm, 9, 5, // UIMM32
/*11146*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILF32i), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2)<<P:Predicate_atomic_load_nand_32>> - Complexity = 16
                // Dst: (ATOMIC_LOAD_NILF32i:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2))
/*11156*/     0, /*End of Scope*/
/*11157*/   /*Scope*/ 18, /*->11176*/
/*11158*/     OPC_CheckPredicate, 68, // Predicate_atomic_load_nand_32
/*11160*/     OPC_CheckType, MVT::i32,
/*11162*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11165*/     OPC_EmitMergeInputChains1_0,
/*11166*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NRi), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_nand:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_nand_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NRi:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*11176*/   /*Scope*/ 18, /*->11195*/
/*11177*/     OPC_CheckPredicate, 69, // Predicate_atomic_load_nand_64
/*11179*/     OPC_CheckType, MVT::i64,
/*11181*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11184*/     OPC_EmitMergeInputChains1_0,
/*11185*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NGRi), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NGRi:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*11195*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 37,  TARGET_VAL(SystemZISD::ATOMIC_SWAPW),// ->11236
/*11199*/   OPC_RecordMemRef,
/*11200*/   OPC_RecordNode,   // #0 = 'z_atomic_swapw' chained node
/*11201*/   OPC_RecordChild1, // #1 = $ptr
/*11202*/   OPC_CheckChild1Type, MVT::i64,
/*11204*/   OPC_RecordChild2, // #2 = $src2
/*11205*/   OPC_RecordChild3, // #3 = $bitshift
/*11206*/   OPC_RecordChild4, // #4 = $negbitshift
/*11207*/   OPC_RecordChild5, // #5 = $bitsize
/*11208*/   OPC_MoveChild, 5,
/*11210*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11213*/   OPC_MoveParent,
/*11214*/   OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*11217*/   OPC_EmitMergeInputChains1_0,
/*11218*/   OPC_EmitConvertToTarget, 5,
/*11220*/   OPC_EmitNodeXForm, 9, 8, // UIMM32
/*11223*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_SWAPW), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_swapw:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_SWAPW:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 37,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_SUB),// ->11276
/*11239*/   OPC_RecordMemRef,
/*11240*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_sub' chained node
/*11241*/   OPC_RecordChild1, // #1 = $ptr
/*11242*/   OPC_CheckChild1Type, MVT::i64,
/*11244*/   OPC_RecordChild2, // #2 = $src2
/*11245*/   OPC_RecordChild3, // #3 = $bitshift
/*11246*/   OPC_RecordChild4, // #4 = $negbitshift
/*11247*/   OPC_RecordChild5, // #5 = $bitsize
/*11248*/   OPC_MoveChild, 5,
/*11250*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11253*/   OPC_MoveParent,
/*11254*/   OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*11257*/   OPC_EmitMergeInputChains1_0,
/*11258*/   OPC_EmitConvertToTarget, 5,
/*11260*/   OPC_EmitNodeXForm, 9, 8, // UIMM32
/*11263*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_SR), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_loadw_sub:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_LOADW_SR:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 37,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_MIN),// ->11316
/*11279*/   OPC_RecordMemRef,
/*11280*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_min' chained node
/*11281*/   OPC_RecordChild1, // #1 = $ptr
/*11282*/   OPC_CheckChild1Type, MVT::i64,
/*11284*/   OPC_RecordChild2, // #2 = $src2
/*11285*/   OPC_RecordChild3, // #3 = $bitshift
/*11286*/   OPC_RecordChild4, // #4 = $negbitshift
/*11287*/   OPC_RecordChild5, // #5 = $bitsize
/*11288*/   OPC_MoveChild, 5,
/*11290*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11293*/   OPC_MoveParent,
/*11294*/   OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*11297*/   OPC_EmitMergeInputChains1_0,
/*11298*/   OPC_EmitConvertToTarget, 5,
/*11300*/   OPC_EmitNodeXForm, 9, 8, // UIMM32
/*11303*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_MIN), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_loadw_min:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_LOADW_MIN:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 37,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_MAX),// ->11356
/*11319*/   OPC_RecordMemRef,
/*11320*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_max' chained node
/*11321*/   OPC_RecordChild1, // #1 = $ptr
/*11322*/   OPC_CheckChild1Type, MVT::i64,
/*11324*/   OPC_RecordChild2, // #2 = $src2
/*11325*/   OPC_RecordChild3, // #3 = $bitshift
/*11326*/   OPC_RecordChild4, // #4 = $negbitshift
/*11327*/   OPC_RecordChild5, // #5 = $bitsize
/*11328*/   OPC_MoveChild, 5,
/*11330*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11333*/   OPC_MoveParent,
/*11334*/   OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*11337*/   OPC_EmitMergeInputChains1_0,
/*11338*/   OPC_EmitConvertToTarget, 5,
/*11340*/   OPC_EmitNodeXForm, 9, 8, // UIMM32
/*11343*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_MAX), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_loadw_max:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_LOADW_MAX:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 37,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_UMIN),// ->11396
/*11359*/   OPC_RecordMemRef,
/*11360*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_umin' chained node
/*11361*/   OPC_RecordChild1, // #1 = $ptr
/*11362*/   OPC_CheckChild1Type, MVT::i64,
/*11364*/   OPC_RecordChild2, // #2 = $src2
/*11365*/   OPC_RecordChild3, // #3 = $bitshift
/*11366*/   OPC_RecordChild4, // #4 = $negbitshift
/*11367*/   OPC_RecordChild5, // #5 = $bitsize
/*11368*/   OPC_MoveChild, 5,
/*11370*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11373*/   OPC_MoveParent,
/*11374*/   OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*11377*/   OPC_EmitMergeInputChains1_0,
/*11378*/   OPC_EmitConvertToTarget, 5,
/*11380*/   OPC_EmitNodeXForm, 9, 8, // UIMM32
/*11383*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_UMIN), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_loadw_umin:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_LOADW_UMIN:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 37,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_UMAX),// ->11436
/*11399*/   OPC_RecordMemRef,
/*11400*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_umax' chained node
/*11401*/   OPC_RecordChild1, // #1 = $ptr
/*11402*/   OPC_CheckChild1Type, MVT::i64,
/*11404*/   OPC_RecordChild2, // #2 = $src2
/*11405*/   OPC_RecordChild3, // #3 = $bitshift
/*11406*/   OPC_RecordChild4, // #4 = $negbitshift
/*11407*/   OPC_RecordChild5, // #5 = $bitsize
/*11408*/   OPC_MoveChild, 5,
/*11410*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11413*/   OPC_MoveParent,
/*11414*/   OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*11417*/   OPC_EmitMergeInputChains1_0,
/*11418*/   OPC_EmitConvertToTarget, 5,
/*11420*/   OPC_EmitNodeXForm, 9, 8, // UIMM32
/*11423*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_UMAX), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_loadw_umax:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_LOADW_UMAX:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 39,  TARGET_VAL(SystemZISD::ATOMIC_CMP_SWAPW),// ->11478
/*11439*/   OPC_RecordMemRef,
/*11440*/   OPC_RecordNode,   // #0 = 'z_atomic_cmp_swapw' chained node
/*11441*/   OPC_RecordChild1, // #1 = $addr
/*11442*/   OPC_CheckChild1Type, MVT::i64,
/*11444*/   OPC_RecordChild2, // #2 = $cmp
/*11445*/   OPC_RecordChild3, // #3 = $swap
/*11446*/   OPC_RecordChild4, // #4 = $bitshift
/*11447*/   OPC_RecordChild5, // #5 = $negbitshift
/*11448*/   OPC_RecordChild6, // #6 = $bitsize
/*11449*/   OPC_MoveChild, 6,
/*11451*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11454*/   OPC_MoveParent,
/*11455*/   OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$addr #7 #8
/*11458*/   OPC_EmitMergeInputChains1_0,
/*11459*/   OPC_EmitConvertToTarget, 6,
/*11461*/   OPC_EmitNodeXForm, 9, 9, // UIMM32
/*11464*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_CMP_SWAPW), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 7/*#Ops*/, 7, 8, 2, 3, 4, 5, 10, 
            // Src: (z_atomic_cmp_swapw:i32 bdaddr20only:i64:$addr, GR32:i32:$cmp, GR32:i32:$swap, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_CMP_SWAPW:i32 bdaddr20only:i64:$addr, GR32:i32:$cmp, GR32:i32:$swap, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 66,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->11547
/*11481*/   OPC_RecordMemRef,
/*11482*/   OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*11483*/   OPC_RecordChild1, // #1 = $BD2
/*11484*/   OPC_CheckChild1Type, MVT::i64,
/*11486*/   OPC_RecordChild2, // #2 = $R1src
/*11487*/   OPC_RecordChild3, // #3 = $R3
/*11488*/   OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->11527
/*11491*/     OPC_CheckPredicate, 70, // Predicate_atomic_cmp_swap_32
/*11493*/     OPC_Scope, 15, /*->11510*/ // 2 children in Scope
/*11495*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr12Pair:$BD2 #4 #5
/*11498*/       OPC_EmitMergeInputChains1_0,
/*11499*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CS), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (atomic_cmp_swap:i32 bdaddr12pair:i64:$BD2, GR32:i32:$R1src, GR32:i32:$R3)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 13
                // Dst: (CS:i32 GR32:i32:$R1src, GR32:i32:$R3, bdaddr12pair:i64:$BD2)
/*11510*/     /*Scope*/ 15, /*->11526*/
/*11511*/       OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectBDAddr20Pair:$BD2 #4 #5
/*11514*/       OPC_EmitMergeInputChains1_0,
/*11515*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CSY), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (atomic_cmp_swap:i32 bdaddr20pair:i64:$BD2, GR32:i32:$R1src, GR32:i32:$R3)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 13
                // Dst: (CSY:i32 GR32:i32:$R1src, GR32:i32:$R3, bdaddr20pair:i64:$BD2)
/*11526*/     0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->11546
/*11529*/     OPC_CheckPredicate, 71, // Predicate_atomic_cmp_swap_64
/*11531*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$BD2 #4 #5
/*11534*/     OPC_EmitMergeInputChains1_0,
/*11535*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::CSG), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (atomic_cmp_swap:i64 bdaddr20only:i64:$BD2, GR64:i64:$R1src, GR64:i64:$R3)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 13
              // Dst: (CSG:i64 GR64:i64:$R1src, GR64:i64:$R3, bdaddr20only:i64:$BD2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->11594
/*11550*/   OPC_RecordMemRef,
/*11551*/   OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*11552*/   OPC_RecordChild1, // #1 = $ptr
/*11553*/   OPC_CheckChild1Type, MVT::i64,
/*11555*/   OPC_RecordChild2, // #2 = $src2
/*11556*/   OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->11575
/*11559*/     OPC_CheckPredicate, 72, // Predicate_atomic_swap_32
/*11561*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11564*/     OPC_EmitMergeInputChains1_0,
/*11565*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_SWAP_32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_swap:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_swap_32>> - Complexity = 13
              // Dst: (ATOMIC_SWAP_32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 16,  MVT::i64,// ->11593
/*11577*/     OPC_CheckPredicate, 73, // Predicate_atomic_swap_64
/*11579*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11582*/     OPC_EmitMergeInputChains1_0,
/*11583*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_SWAP_64), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_swap:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_SWAP_64:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->11641
/*11597*/   OPC_RecordMemRef,
/*11598*/   OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*11599*/   OPC_RecordChild1, // #1 = $ptr
/*11600*/   OPC_CheckChild1Type, MVT::i64,
/*11602*/   OPC_RecordChild2, // #2 = $src2
/*11603*/   OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->11622
/*11606*/     OPC_CheckPredicate, 74, // Predicate_atomic_load_sub_32
/*11608*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11611*/     OPC_EmitMergeInputChains1_0,
/*11612*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_SR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_sub:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_sub_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_SR:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 16,  MVT::i64,// ->11640
/*11624*/     OPC_CheckPredicate, 75, // Predicate_atomic_load_sub_64
/*11626*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11629*/     OPC_EmitMergeInputChains1_0,
/*11630*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_SGR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_sub:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_sub_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_SGR:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::ATOMIC_LOAD_MIN),// ->11688
/*11644*/   OPC_RecordMemRef,
/*11645*/   OPC_RecordNode,   // #0 = 'atomic_load_min' chained node
/*11646*/   OPC_RecordChild1, // #1 = $ptr
/*11647*/   OPC_CheckChild1Type, MVT::i64,
/*11649*/   OPC_RecordChild2, // #2 = $src2
/*11650*/   OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->11669
/*11653*/     OPC_CheckPredicate, 76, // Predicate_atomic_load_min_32
/*11655*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11658*/     OPC_EmitMergeInputChains1_0,
/*11659*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_MIN_32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_min:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_min_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_MIN_32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 16,  MVT::i64,// ->11687
/*11671*/     OPC_CheckPredicate, 77, // Predicate_atomic_load_min_64
/*11673*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11676*/     OPC_EmitMergeInputChains1_0,
/*11677*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_MIN_64), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_min:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_min_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_MIN_64:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::ATOMIC_LOAD_MAX),// ->11735
/*11691*/   OPC_RecordMemRef,
/*11692*/   OPC_RecordNode,   // #0 = 'atomic_load_max' chained node
/*11693*/   OPC_RecordChild1, // #1 = $ptr
/*11694*/   OPC_CheckChild1Type, MVT::i64,
/*11696*/   OPC_RecordChild2, // #2 = $src2
/*11697*/   OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->11716
/*11700*/     OPC_CheckPredicate, 78, // Predicate_atomic_load_max_32
/*11702*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11705*/     OPC_EmitMergeInputChains1_0,
/*11706*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_MAX_32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_max:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_max_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_MAX_32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 16,  MVT::i64,// ->11734
/*11718*/     OPC_CheckPredicate, 79, // Predicate_atomic_load_max_64
/*11720*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11723*/     OPC_EmitMergeInputChains1_0,
/*11724*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_MAX_64), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_max:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_max_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_MAX_64:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::ATOMIC_LOAD_UMIN),// ->11782
/*11738*/   OPC_RecordMemRef,
/*11739*/   OPC_RecordNode,   // #0 = 'atomic_load_umin' chained node
/*11740*/   OPC_RecordChild1, // #1 = $ptr
/*11741*/   OPC_CheckChild1Type, MVT::i64,
/*11743*/   OPC_RecordChild2, // #2 = $src2
/*11744*/   OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->11763
/*11747*/     OPC_CheckPredicate, 80, // Predicate_atomic_load_umin_32
/*11749*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11752*/     OPC_EmitMergeInputChains1_0,
/*11753*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_UMIN_32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_umin:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_umin_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_UMIN_32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 16,  MVT::i64,// ->11781
/*11765*/     OPC_CheckPredicate, 81, // Predicate_atomic_load_umin_64
/*11767*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11770*/     OPC_EmitMergeInputChains1_0,
/*11771*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_UMIN_64), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_umin:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_umin_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_UMIN_64:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::ATOMIC_LOAD_UMAX),// ->11829
/*11785*/   OPC_RecordMemRef,
/*11786*/   OPC_RecordNode,   // #0 = 'atomic_load_umax' chained node
/*11787*/   OPC_RecordChild1, // #1 = $ptr
/*11788*/   OPC_CheckChild1Type, MVT::i64,
/*11790*/   OPC_RecordChild2, // #2 = $src2
/*11791*/   OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->11810
/*11794*/     OPC_CheckPredicate, 82, // Predicate_atomic_load_umax_32
/*11796*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11799*/     OPC_EmitMergeInputChains1_0,
/*11800*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_UMAX_32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_umax:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_umax_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_UMAX_32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 16,  MVT::i64,// ->11828
/*11812*/     OPC_CheckPredicate, 83, // Predicate_atomic_load_umax_64
/*11814*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11817*/     OPC_EmitMergeInputChains1_0,
/*11818*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_UMAX_64), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_umax:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_umax_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_UMAX_64:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 47,  TARGET_VAL(ISD::FrameIndex),// ->11879
/*11832*/   OPC_RecordNode,   // #0 = $src
/*11833*/   OPC_CheckType, MVT::i64,
/*11835*/   OPC_Scope, 13, /*->11850*/ // 3 children in Scope
/*11837*/     OPC_CheckComplexPat, /*CP*/9, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*11840*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: dynalloc12only:i64:$src - Complexity = 12
              // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*11850*/   /*Scope*/ 13, /*->11864*/
/*11851*/     OPC_CheckComplexPat, /*CP*/10, /*#*/0, // selectLAAddr12Pair:$XBD2 #1 #2 #3
/*11854*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: laaddr12pair:i64:$XBD2 - Complexity = 12
              // Dst: (LA:i64 laaddr12pair:i64:$XBD2)
/*11864*/   /*Scope*/ 13, /*->11878*/
/*11865*/     OPC_CheckComplexPat, /*CP*/11, /*#*/0, // selectLAAddr20Pair:$XBD2 #1 #2 #3
/*11868*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: laaddr20pair:i64:$XBD2 - Complexity = 12
              // Dst: (LAY:i64 laaddr20pair:i64:$XBD2)
/*11878*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(SystemZISD::ADJDYNALLOC),// ->11929
/*11882*/   OPC_RecordNode,   // #0 = $src
/*11883*/   OPC_CheckType, MVT::i64,
/*11885*/   OPC_Scope, 13, /*->11900*/ // 3 children in Scope
/*11887*/     OPC_CheckComplexPat, /*CP*/9, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*11890*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: dynalloc12only:i64:$src - Complexity = 12
              // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*11900*/   /*Scope*/ 13, /*->11914*/
/*11901*/     OPC_CheckComplexPat, /*CP*/10, /*#*/0, // selectLAAddr12Pair:$XBD2 #1 #2 #3
/*11904*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: laaddr12pair:i64:$XBD2 - Complexity = 12
              // Dst: (LA:i64 laaddr12pair:i64:$XBD2)
/*11914*/   /*Scope*/ 13, /*->11928*/
/*11915*/     OPC_CheckComplexPat, /*CP*/11, /*#*/0, // selectLAAddr20Pair:$XBD2 #1 #2 #3
/*11918*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: laaddr20pair:i64:$XBD2 - Complexity = 12
              // Dst: (LAY:i64 laaddr20pair:i64:$XBD2)
/*11928*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::SHL),// ->11968
/*11932*/   OPC_RecordChild0, // #0 = $R1src
/*11933*/   OPC_RecordChild1, // #1 = $BD2
/*11934*/   OPC_CheckChild1Type, MVT::i32,
/*11936*/   OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->11952
/*11939*/     OPC_CheckComplexPat, /*CP*/13, /*#*/1, // selectBDAddr12Only:$BD2 #2 #3
/*11942*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLL), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
              // Src: (shl:i32 GR32:i32:$R1src, shift12only:i32:$BD2) - Complexity = 12
              // Dst: (SLL:i32 GR32:i32:$R1src, shift12only:i32:$BD2)
            /*SwitchType*/ 13,  MVT::i64,// ->11967
/*11954*/     OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDAddr20Only:$BD2 #2 #3
/*11957*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLLG), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
              // Src: (shl:i64 GR64:i64:$R3, shift20only:i32:$BD2) - Complexity = 12
              // Dst: (SLLG:i64 GR64:i64:$R3, shift20only:i32:$BD2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::SRL),// ->12007
/*11971*/   OPC_RecordChild0, // #0 = $R1src
/*11972*/   OPC_RecordChild1, // #1 = $BD2
/*11973*/   OPC_CheckChild1Type, MVT::i32,
/*11975*/   OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->11991
/*11978*/     OPC_CheckComplexPat, /*CP*/13, /*#*/1, // selectBDAddr12Only:$BD2 #2 #3
/*11981*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRL), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
              // Src: (srl:i32 GR32:i32:$R1src, shift12only:i32:$BD2) - Complexity = 12
              // Dst: (SRL:i32 GR32:i32:$R1src, shift12only:i32:$BD2)
            /*SwitchType*/ 13,  MVT::i64,// ->12006
/*11993*/     OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDAddr20Only:$BD2 #2 #3
/*11996*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRLG), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
              // Src: (srl:i64 GR64:i64:$R3, shift20only:i32:$BD2) - Complexity = 12
              // Dst: (SRLG:i64 GR64:i64:$R3, shift20only:i32:$BD2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::SRA),// ->12046
/*12010*/   OPC_RecordChild0, // #0 = $R1src
/*12011*/   OPC_RecordChild1, // #1 = $BD2
/*12012*/   OPC_CheckChild1Type, MVT::i32,
/*12014*/   OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->12030
/*12017*/     OPC_CheckComplexPat, /*CP*/13, /*#*/1, // selectBDAddr12Only:$BD2 #2 #3
/*12020*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRA), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
              // Src: (sra:i32 GR32:i32:$R1src, shift12only:i32:$BD2) - Complexity = 12
              // Dst: (SRA:i32 GR32:i32:$R1src, shift12only:i32:$BD2)
            /*SwitchType*/ 13,  MVT::i64,// ->12045
/*12032*/     OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDAddr20Only:$BD2 #2 #3
/*12035*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRAG), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
              // Src: (sra:i64 GR64:i64:$R3, shift20only:i32:$BD2) - Complexity = 12
              // Dst: (SRAG:i64 GR64:i64:$R3, shift20only:i32:$BD2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::ROTL),// ->12085
/*12049*/   OPC_RecordChild0, // #0 = $R3
/*12050*/   OPC_RecordChild1, // #1 = $BD2
/*12051*/   OPC_CheckChild1Type, MVT::i32,
/*12053*/   OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->12069
/*12056*/     OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDAddr20Only:$BD2 #2 #3
/*12059*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::RLL), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
              // Src: (rotl:i32 GR32:i32:$R3, shift20only:i32:$BD2) - Complexity = 12
              // Dst: (RLL:i32 GR32:i32:$R3, shift20only:i32:$BD2)
            /*SwitchType*/ 13,  MVT::i64,// ->12084
/*12071*/     OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDAddr20Only:$BD2 #2 #3
/*12074*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::RLLG), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
              // Src: (rotl:i64 GR64:i64:$R3, shift20only:i32:$BD2) - Complexity = 12
              // Dst: (RLLG:i64 GR64:i64:$R3, shift20only:i32:$BD2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 19,  TARGET_VAL(SystemZISD::EXTRACT_ACCESS),// ->12107
/*12088*/   OPC_RecordChild0, // #0 = $R2
/*12089*/   OPC_MoveChild, 0,
/*12091*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12094*/   OPC_CheckPredicate, 84, // Predicate_access_reg
/*12096*/   OPC_MoveParent,
/*12097*/   OPC_EmitConvertToTarget, 0,
/*12099*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::EAR), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (z_extract_access:i32 (imm:i8)<<P:Predicate_access_reg>>:$R2) - Complexity = 7
            // Dst: (EAR:i32 (imm:i8):$R2)
          /*SwitchOpcode*/ 14,  TARGET_VAL(SystemZISD::PCREL_WRAPPER),// ->12124
/*12110*/   OPC_RecordNode,   // #0 = $I2
/*12111*/   OPC_CheckType, MVT::i64,
/*12113*/   OPC_CheckComplexPat, /*CP*/4, /*#*/0, // selectPCRelAddress:$I2 #1
/*12116*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::LARL), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
            // Src: pcrel32:i64:$I2 - Complexity = 6
            // Dst: (LARL:i64 pcrel32:i64:$I2)
          /*SwitchOpcode*/ 82,  TARGET_VAL(SystemZISD::SELECT_CCMASK),// ->12209
/*12127*/   OPC_CaptureGlueInput,
/*12128*/   OPC_RecordChild0, // #0 = $src1
/*12129*/   OPC_RecordChild1, // #1 = $src2
/*12130*/   OPC_RecordChild2, // #2 = $cc
/*12131*/   OPC_MoveChild, 2,
/*12133*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12136*/   OPC_MoveParent,
/*12137*/   OPC_SwitchType /*5 cases */, 12,  MVT::i32,// ->12152
/*12140*/     OPC_EmitConvertToTarget, 2,
/*12142*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::Select32), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (z_select_ccmask:i32 GR32:i32:$src1, GR32:i32:$src2, (imm:i8):$cc) - Complexity = 6
              // Dst: (Select32:i32 GR32:i32:$src1, GR32:i32:$src2, (imm:i8):$cc)
            /*SwitchType*/ 12,  MVT::i64,// ->12166
/*12154*/     OPC_EmitConvertToTarget, 2,
/*12156*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::Select64), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
              // Src: (z_select_ccmask:i64 GR64:i64:$src1, GR64:i64:$src2, (imm:i8):$cc) - Complexity = 6
              // Dst: (Select64:i64 GR64:i64:$src1, GR64:i64:$src2, (imm:i8):$cc)
            /*SwitchType*/ 12,  MVT::f32,// ->12180
/*12168*/     OPC_EmitConvertToTarget, 2,
/*12170*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SelectF32), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (z_select_ccmask:f32 FP32:f32:$src1, FP32:f32:$src2, (imm:i8):$cc) - Complexity = 6
              // Dst: (SelectF32:f32 FP32:f32:$src1, FP32:f32:$src2, (imm:i8):$cc)
            /*SwitchType*/ 12,  MVT::f64,// ->12194
/*12182*/     OPC_EmitConvertToTarget, 2,
/*12184*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SelectF64), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 3, 
              // Src: (z_select_ccmask:f64 FP64:f64:$src1, FP64:f64:$src2, (imm:i8):$cc) - Complexity = 6
              // Dst: (SelectF64:f64 FP64:f64:$src1, FP64:f64:$src2, (imm:i8):$cc)
            /*SwitchType*/ 12,  MVT::f128,// ->12208
/*12196*/     OPC_EmitConvertToTarget, 2,
/*12198*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SelectF128), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f128, 3/*#Ops*/, 0, 1, 3, 
              // Src: (z_select_ccmask:f128 FP128:f128:$src1, FP128:f128:$src2, (imm:i8):$cc) - Complexity = 6
              // Dst: (SelectF128:f128 FP128:f128:$src1, FP128:f128:$src2, (imm:i8):$cc)
            0, // EndSwitchType
          /*SwitchOpcode*/ 98|128,1/*226*/,  TARGET_VAL(ISD::Constant),// ->12439
/*12213*/   OPC_RecordNode,   // #0 = $I2
/*12214*/   OPC_SwitchType /*2 cases */, 88,  MVT::i32,// ->12305
/*12217*/     OPC_Scope, 15, /*->12234*/ // 4 children in Scope
/*12219*/       OPC_CheckPredicate, 16, // Predicate_imm32sx16
/*12221*/       OPC_EmitConvertToTarget, 0,
/*12223*/       OPC_EmitNodeXForm, 2, 1, // SIMM16
/*12226*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2 - Complexity = 4
                // Dst: (LHI:i32 (SIMM16:i32 (imm:i32):$I2))
/*12234*/     /*Scope*/ 27, /*->12262*/
/*12235*/       OPC_CheckPredicate, 24, // Predicate_imm32ll16
/*12237*/       OPC_EmitConvertToTarget, 0,
/*12239*/       OPC_EmitNodeXForm, 3, 1, // LL16
/*12242*/       OPC_EmitNode, TARGET_VAL(SystemZ::LLILL), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2,  // Results = #3
/*12250*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*12253*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                // Src: (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$src - Complexity = 4
                // Dst: (EXTRACT_SUBREG:i32 (LLILL:i64 (LL16:i64 (imm:i32):$src)), subreg_32bit:i32)
/*12262*/     /*Scope*/ 27, /*->12290*/
/*12263*/       OPC_CheckPredicate, 25, // Predicate_imm32lh16
/*12265*/       OPC_EmitConvertToTarget, 0,
/*12267*/       OPC_EmitNodeXForm, 4, 1, // LH16
/*12270*/       OPC_EmitNode, TARGET_VAL(SystemZ::LLILH), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2,  // Results = #3
/*12278*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*12281*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                // Src: (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$src - Complexity = 4
                // Dst: (EXTRACT_SUBREG:i32 (LLILH:i64 (LH16:i64 (imm:i32):$src)), subreg_32bit:i32)
/*12290*/     /*Scope*/ 13, /*->12304*/
/*12291*/       OPC_EmitConvertToTarget, 0,
/*12293*/       OPC_EmitNodeXForm, 9, 1, // UIMM32
/*12296*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILF32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<X:UIMM32>>:$I2 - Complexity = 3
                // Dst: (IILF32:i32 (UIMM32:i32 (imm:i32):$I2))
/*12304*/     0, /*End of Scope*/
            /*SwitchType*/ 2|128,1/*130*/,  MVT::i64,// ->12438
/*12308*/     OPC_Scope, 15, /*->12325*/ // 8 children in Scope
/*12310*/       OPC_CheckPredicate, 17, // Predicate_imm64sx16
/*12312*/       OPC_EmitConvertToTarget, 0,
/*12314*/       OPC_EmitNodeXForm, 2, 1, // SIMM16
/*12317*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGHI), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2 - Complexity = 4
                // Dst: (LGHI:i64 (SIMM16:i64 (imm:i64):$I2))
/*12325*/     /*Scope*/ 15, /*->12341*/
/*12326*/       OPC_CheckPredicate, 26, // Predicate_imm64ll16
/*12328*/       OPC_EmitConvertToTarget, 0,
/*12330*/       OPC_EmitNodeXForm, 3, 1, // LL16
/*12333*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLILL), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64ll16>><<X:LL16>>:$I2 - Complexity = 4
                // Dst: (LLILL:i64 (LL16:i64 (imm:i64):$I2))
/*12341*/     /*Scope*/ 15, /*->12357*/
/*12342*/       OPC_CheckPredicate, 27, // Predicate_imm64lh16
/*12344*/       OPC_EmitConvertToTarget, 0,
/*12346*/       OPC_EmitNodeXForm, 4, 1, // LH16
/*12349*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLILH), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64lh16>><<X:LH16>>:$I2 - Complexity = 4
                // Dst: (LLILH:i64 (LH16:i64 (imm:i64):$I2))
/*12357*/     /*Scope*/ 15, /*->12373*/
/*12358*/       OPC_CheckPredicate, 28, // Predicate_imm64hl16
/*12360*/       OPC_EmitConvertToTarget, 0,
/*12362*/       OPC_EmitNodeXForm, 5, 1, // HL16
/*12365*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLIHL), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64hl16>><<X:HL16>>:$I2 - Complexity = 4
                // Dst: (LLIHL:i64 (HL16:i64 (imm:i64):$I2))
/*12373*/     /*Scope*/ 15, /*->12389*/
/*12374*/       OPC_CheckPredicate, 29, // Predicate_imm64hh16
/*12376*/       OPC_EmitConvertToTarget, 0,
/*12378*/       OPC_EmitNodeXForm, 6, 1, // HH16
/*12381*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLIHH), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64hh16>><<X:HH16>>:$I2 - Complexity = 4
                // Dst: (LLIHH:i64 (HH16:i64 (imm:i64):$I2))
/*12389*/     /*Scope*/ 15, /*->12405*/
/*12390*/       OPC_CheckPredicate, 37, // Predicate_imm64sx32
/*12392*/       OPC_EmitConvertToTarget, 0,
/*12394*/       OPC_EmitNodeXForm, 10, 1, // SIMM32
/*12397*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGFI), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$I2 - Complexity = 4
                // Dst: (LGFI:i64 (SIMM32:i64 (imm:i64):$I2))
/*12405*/     /*Scope*/ 15, /*->12421*/
/*12406*/       OPC_CheckPredicate, 30, // Predicate_imm64lf32
/*12408*/       OPC_EmitConvertToTarget, 0,
/*12410*/       OPC_EmitNodeXForm, 7, 1, // LF32
/*12413*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLILF), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$I2 - Complexity = 4
                // Dst: (LLILF:i64 (LF32:i64 (imm:i64):$I2))
/*12421*/     /*Scope*/ 15, /*->12437*/
/*12422*/       OPC_CheckPredicate, 31, // Predicate_imm64hf32
/*12424*/       OPC_EmitConvertToTarget, 0,
/*12426*/       OPC_EmitNodeXForm, 8, 1, // HF32
/*12429*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLIHF), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$I2 - Complexity = 4
                // Dst: (LLIHF:i64 (HF32:i64 (imm:i64):$I2))
/*12437*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 81,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->12523
/*12442*/   OPC_RecordChild0, // #0 = $R2
/*12443*/   OPC_MoveChild, 1,
/*12445*/   OPC_Scope, 25, /*->12472*/ // 3 children in Scope
/*12447*/     OPC_CheckValueType, MVT::i8,
/*12449*/     OPC_MoveParent,
/*12450*/     OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->12461
/*12453*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LBR), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GR32:i32:$R2, i8:Other) - Complexity = 3
                // Dst: (LBR:i32 GR32:i32:$R2)
              /*SwitchType*/ 8,  MVT::i64,// ->12471
/*12463*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGBR), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 GR64:i64:$R2, i8:Other) - Complexity = 3
                // Dst: (LGBR:i64 GR64:i64:$R2)
              0, // EndSwitchType
/*12472*/   /*Scope*/ 25, /*->12498*/
/*12473*/     OPC_CheckValueType, MVT::i16,
/*12475*/     OPC_MoveParent,
/*12476*/     OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->12487
/*12479*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHR), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GR32:i32:$R2, i16:Other) - Complexity = 3
                // Dst: (LHR:i32 GR32:i32:$R2)
              /*SwitchType*/ 8,  MVT::i64,// ->12497
/*12489*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGHR), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 GR64:i64:$R2, i16:Other) - Complexity = 3
                // Dst: (LGHR:i64 GR64:i64:$R2)
              0, // EndSwitchType
/*12498*/   /*Scope*/ 23, /*->12522*/
/*12499*/     OPC_CheckValueType, MVT::i32,
/*12501*/     OPC_MoveParent,
/*12502*/     OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*12505*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*12514*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGFR), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (sext_inreg:i64 GR64:i64:$src, i32:Other) - Complexity = 3
              // Dst: (LGFR:i64 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32))
/*12522*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::SIGN_EXTEND),// ->12535
/*12526*/   OPC_RecordChild0, // #0 = $R2
/*12527*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGFR), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (sext:i64 GR32:i32:$R2) - Complexity = 3
            // Dst: (LGFR:i64 GR32:i32:$R2)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::ZERO_EXTEND),// ->12547
/*12538*/   OPC_RecordChild0, // #0 = $R2
/*12539*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGFR), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (zext:i64 GR32:i32:$R2) - Complexity = 3
            // Dst: (LLGFR:i64 GR32:i32:$R2)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TRUNCATE),// ->12563
/*12550*/   OPC_RecordChild0, // #0 = $src
/*12551*/   OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*12554*/   OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (trunc:i32 GR64:i64:$src) - Complexity = 3
            // Dst: (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32)
          /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::BITCAST),// ->12593
/*12566*/   OPC_RecordChild0, // #0 = $R2
/*12567*/   OPC_SwitchType /*2 cases */, 10,  MVT::i64,// ->12580
/*12570*/     OPC_CheckChild0Type, MVT::f64,
/*12572*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGDR), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:i64 FP64:f64:$R2) - Complexity = 3
              // Dst: (LGDR:i64 FP64:f64:$R2)
            /*SwitchType*/ 10,  MVT::f64,// ->12592
/*12582*/     OPC_CheckChild0Type, MVT::i64,
/*12584*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LDGR), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:f64 GR64:i64:$R2) - Complexity = 3
              // Dst: (LDGR:f64 GR64:i64:$R2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 102,  TARGET_VAL(ISD::FP_TO_SINT),// ->12698
/*12596*/   OPC_RecordChild0, // #0 = $src
/*12597*/   OPC_Scope, 32, /*->12631*/ // 3 children in Scope
/*12599*/     OPC_CheckChild0Type, MVT::f32,
/*12601*/     OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->12616
/*12604*/       OPC_EmitInteger, MVT::i8, 5, 
/*12607*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CFEBR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (fp_to_sint:i32 FP32:f32:$src) - Complexity = 3
                // Dst: (CFEBR:i32 5:i8, FP32:f32:$src)
              /*SwitchType*/ 12,  MVT::i64,// ->12630
/*12618*/       OPC_EmitInteger, MVT::i8, 5, 
/*12621*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGEBR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (fp_to_sint:i64 FP32:f32:$src) - Complexity = 3
                // Dst: (CGEBR:i64 5:i8, FP32:f32:$src)
              0, // EndSwitchType
/*12631*/   /*Scope*/ 32, /*->12664*/
/*12632*/     OPC_CheckChild0Type, MVT::f64,
/*12634*/     OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->12649
/*12637*/       OPC_EmitInteger, MVT::i8, 5, 
/*12640*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CFDBR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (fp_to_sint:i32 FP64:f64:$src) - Complexity = 3
                // Dst: (CFDBR:i32 5:i8, FP64:f64:$src)
              /*SwitchType*/ 12,  MVT::i64,// ->12663
/*12651*/       OPC_EmitInteger, MVT::i8, 5, 
/*12654*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGDBR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (fp_to_sint:i64 FP64:f64:$src) - Complexity = 3
                // Dst: (CGDBR:i64 5:i8, FP64:f64:$src)
              0, // EndSwitchType
/*12664*/   /*Scope*/ 32, /*->12697*/
/*12665*/     OPC_CheckChild0Type, MVT::f128,
/*12667*/     OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->12682
/*12670*/       OPC_EmitInteger, MVT::i8, 5, 
/*12673*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CFXBR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (fp_to_sint:i32 FP128:f128:$src) - Complexity = 3
                // Dst: (CFXBR:i32 5:i8, FP128:f128:$src)
              /*SwitchType*/ 12,  MVT::i64,// ->12696
/*12684*/       OPC_EmitInteger, MVT::i8, 5, 
/*12687*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGXBR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (fp_to_sint:i64 FP128:f128:$src) - Complexity = 3
                // Dst: (CGXBR:i64 5:i8, FP128:f128:$src)
              0, // EndSwitchType
/*12697*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::CTLZ),// ->12724
/*12701*/   OPC_RecordChild0, // #0 = $src
/*12702*/   OPC_CheckType, MVT::i64,
/*12704*/   OPC_EmitNode, TARGET_VAL(SystemZ::FLOGR), 0,
                1/*#VTs*/, MVT::Untyped, 1/*#Ops*/, 0,  // Results = #1
/*12712*/   OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*12715*/   OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
            // Src: (ctlz:i64 GR64:i64:$src) - Complexity = 3
            // Dst: (EXTRACT_SUBREG:i64 (FLOGR:Untyped GR64:i64:$src), subreg_high:i32)
          /*SwitchOpcode*/ 21,  TARGET_VAL(ISD::ANY_EXTEND),// ->12748
/*12727*/   OPC_RecordChild0, // #0 = $src
/*12728*/   OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1
/*12735*/   OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*12738*/   OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
            // Src: (anyext:i64 GR32:i32:$src) - Complexity = 3
            // Dst: (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), GR32:i32:$src, subreg_32bit:i32)
          /*SwitchOpcode*/ 46|128,1/*174*/,  TARGET_VAL(ISD::FMA),// ->12926
/*12752*/   OPC_RecordChild0, // #0 = $R3
/*12753*/   OPC_Scope, 104, /*->12859*/ // 2 children in Scope
/*12755*/     OPC_MoveChild, 1,
/*12757*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*12760*/     OPC_RecordMemRef,
/*12761*/     OPC_RecordNode, // #1 = 'ld' chained node
/*12762*/     OPC_CheckFoldableChainNode,
/*12763*/     OPC_RecordChild1, // #2 = $XBD2
/*12764*/     OPC_CheckChild1Type, MVT::i64,
/*12766*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*12768*/     OPC_CheckPredicate, 1, // Predicate_load
/*12770*/     OPC_MoveParent,
/*12771*/     OPC_Scope, 45, /*->12818*/ // 2 children in Scope
/*12773*/       OPC_MoveChild, 2,
/*12775*/       OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*12778*/       OPC_RecordChild0, // #3 = $R1src
/*12779*/       OPC_MoveParent,
/*12780*/       OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->12799
/*12783*/         OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$XBD2 #4 #5 #6
/*12786*/         OPC_EmitMergeInputChains1_1,
/*12787*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 5/*#Ops*/, 3, 0, 4, 5, 6, 
                  // Src: (fma:f32 FP32:f32:$R3, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (fneg:f32 FP32:f32:$R1src)) - Complexity = 22
                  // Dst: (MSEB:f32 FP32:f32:$R1src, FP32:f32:$R3, bdxaddr12only:i64:$XBD2)
                /*SwitchType*/ 16,  MVT::f64,// ->12817
/*12801*/         OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$XBD2 #4 #5 #6
/*12804*/         OPC_EmitMergeInputChains1_1,
/*12805*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSDB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 5/*#Ops*/, 3, 0, 4, 5, 6, 
                  // Src: (fma:f64 FP64:f64:$R3, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (fneg:f64 FP64:f64:$R1src)) - Complexity = 22
                  // Dst: (MSDB:f64 FP64:f64:$R1src, FP64:f64:$R3, bdxaddr12only:i64:$XBD2)
                0, // EndSwitchType
/*12818*/     /*Scope*/ 39, /*->12858*/
/*12819*/       OPC_RecordChild2, // #3 = $R1src
/*12820*/       OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->12839
/*12823*/         OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$XBD2 #4 #5 #6
/*12826*/         OPC_EmitMergeInputChains1_1,
/*12827*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MAEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 5/*#Ops*/, 3, 0, 4, 5, 6, 
                  // Src: (fma:f32 FP32:f32:$R3, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$R1src) - Complexity = 19
                  // Dst: (MAEB:f32 FP32:f32:$R1src, FP32:f32:$R3, bdxaddr12only:i64:$XBD2)
                /*SwitchType*/ 16,  MVT::f64,// ->12857
/*12841*/         OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$XBD2 #4 #5 #6
/*12844*/         OPC_EmitMergeInputChains1_1,
/*12845*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MADB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 5/*#Ops*/, 3, 0, 4, 5, 6, 
                  // Src: (fma:f64 FP64:f64:$R3, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$R1src) - Complexity = 19
                  // Dst: (MADB:f64 FP64:f64:$R1src, FP64:f64:$R3, bdxaddr12only:i64:$XBD2)
                0, // EndSwitchType
/*12858*/     0, /*End of Scope*/
/*12859*/   /*Scope*/ 65, /*->12925*/
/*12860*/     OPC_RecordChild1, // #1 = $R2
/*12861*/     OPC_Scope, 33, /*->12896*/ // 2 children in Scope
/*12863*/       OPC_MoveChild, 2,
/*12865*/       OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*12868*/       OPC_RecordChild0, // #2 = $R1src
/*12869*/       OPC_MoveParent,
/*12870*/       OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->12883
/*12873*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSEBR), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fma:f32 FP32:f32:$R3, FP32:f32:$R2, (fneg:f32 FP32:f32:$R1src)) - Complexity = 6
                  // Dst: (MSEBR:f32 FP32:f32:$R1src, FP32:f32:$R3, FP32:f32:$R2)
                /*SwitchType*/ 10,  MVT::f64,// ->12895
/*12885*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSDBR), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fma:f64 FP64:f64:$R3, FP64:f64:$R2, (fneg:f64 FP64:f64:$R1src)) - Complexity = 6
                  // Dst: (MSDBR:f64 FP64:f64:$R1src, FP64:f64:$R3, FP64:f64:$R2)
                0, // EndSwitchType
/*12896*/     /*Scope*/ 27, /*->12924*/
/*12897*/       OPC_RecordChild2, // #2 = $R1src
/*12898*/       OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->12911
/*12901*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MAEBR), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fma:f32 FP32:f32:$R3, FP32:f32:$R2, FP32:f32:$R1src) - Complexity = 3
                  // Dst: (MAEBR:f32 FP32:f32:$R1src, FP32:f32:$R3, FP32:f32:$R2)
                /*SwitchType*/ 10,  MVT::f64,// ->12923
/*12913*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MADBR), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fma:f64 FP64:f64:$R3, FP64:f64:$R2, FP64:f64:$R1src) - Complexity = 3
                  // Dst: (MADBR:f64 FP64:f64:$R1src, FP64:f64:$R3, FP64:f64:$R2)
                0, // EndSwitchType
/*12924*/     0, /*End of Scope*/
/*12925*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 98|128,3/*482*/,  TARGET_VAL(ISD::FMUL),// ->13412
/*12930*/   OPC_Scope, 111|128,1/*239*/, /*->13172*/ // 4 children in Scope
/*12933*/     OPC_MoveChild, 0,
/*12935*/     OPC_SwitchOpcode /*2 cases */, 119,  TARGET_VAL(ISD::FP_EXTEND),// ->13058
/*12939*/       OPC_RecordChild0, // #0 = $src1
/*12940*/       OPC_Scope, 56, /*->12998*/ // 2 children in Scope
/*12942*/         OPC_MoveParent,
/*12943*/         OPC_MoveChild, 1,
/*12945*/         OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*12948*/         OPC_RecordMemRef,
/*12949*/         OPC_RecordNode, // #1 = 'ld' chained node
/*12950*/         OPC_CheckFoldableChainNode,
/*12951*/         OPC_RecordChild1, // #2 = $addr
/*12952*/         OPC_CheckChild1Type, MVT::i64,
/*12954*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*12956*/         OPC_CheckPredicate, 12, // Predicate_extload
/*12958*/         OPC_CheckPredicate, 58, // Predicate_extloadf32
/*12960*/         OPC_MoveParent,
/*12961*/         OPC_CheckType, MVT::f64,
/*12963*/         OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$addr #3 #4 #5
/*12966*/         OPC_EmitMergeInputChains1_1,
/*12967*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #6
/*12974*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*12977*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 6, 0, 7,  // Results = #8
/*12987*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 4/*#Ops*/, 8, 3, 4, 5, 
                  // Src: (fmul:f64 (fextend:f64 FP32:f32:$src1), (ld:f64 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>>) - Complexity = 22
                  // Dst: (MDEB:f64 (INSERT_SUBREG:f64 (IMPLICIT_DEF:f64), FP32:f32:$src1, subreg_32bit:i32), bdxaddr12only:i64:$addr)
/*12998*/       /*Scope*/ 58, /*->13057*/
/*12999*/         OPC_CheckChild0Type, MVT::f64,
/*13001*/         OPC_MoveParent,
/*13002*/         OPC_MoveChild, 1,
/*13004*/         OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13007*/         OPC_RecordMemRef,
/*13008*/         OPC_RecordNode, // #1 = 'ld' chained node
/*13009*/         OPC_CheckFoldableChainNode,
/*13010*/         OPC_RecordChild1, // #2 = $addr
/*13011*/         OPC_CheckChild1Type, MVT::i64,
/*13013*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13015*/         OPC_CheckPredicate, 12, // Predicate_extload
/*13017*/         OPC_CheckPredicate, 59, // Predicate_extloadf64
/*13019*/         OPC_MoveParent,
/*13020*/         OPC_CheckType, MVT::f128,
/*13022*/         OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$addr #3 #4 #5
/*13025*/         OPC_EmitMergeInputChains1_1,
/*13026*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f128, 0/*#Ops*/,  // Results = #6
/*13033*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*13036*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f128, 3/*#Ops*/, 6, 0, 7,  // Results = #8
/*13046*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MXDB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f128, 4/*#Ops*/, 8, 3, 4, 5, 
                  // Src: (fmul:f128 (fextend:f128 FP64:f64:$src1), (ld:f128 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf64>>) - Complexity = 22
                  // Dst: (MXDB:f128 (INSERT_SUBREG:f128 (IMPLICIT_DEF:f128), FP64:f64:$src1, subreg_high:i32), bdxaddr12only:i64:$addr)
/*13057*/       0, /*End of Scope*/
              /*SwitchOpcode*/ 110,  TARGET_VAL(ISD::LOAD),// ->13171
/*13061*/       OPC_RecordMemRef,
/*13062*/       OPC_RecordNode, // #0 = 'ld' chained node
/*13063*/       OPC_CheckFoldableChainNode,
/*13064*/       OPC_RecordChild1, // #1 = $addr
/*13065*/       OPC_CheckChild1Type, MVT::i64,
/*13067*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13069*/       OPC_CheckPredicate, 12, // Predicate_extload
/*13071*/       OPC_Scope, 47, /*->13120*/ // 2 children in Scope
/*13073*/         OPC_CheckPredicate, 58, // Predicate_extloadf32
/*13075*/         OPC_MoveParent,
/*13076*/         OPC_MoveChild, 1,
/*13078*/         OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*13081*/         OPC_RecordChild0, // #2 = $src1
/*13082*/         OPC_MoveParent,
/*13083*/         OPC_CheckType, MVT::f64,
/*13085*/         OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDXAddr12Only:$addr #3 #4 #5
/*13088*/         OPC_EmitMergeInputChains1_0,
/*13089*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #6
/*13096*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*13099*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 6, 2, 7,  // Results = #8
/*13109*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 4/*#Ops*/, 8, 3, 4, 5, 
                  // Src: (fmul:f64 (ld:f64 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>>, (fextend:f64 FP32:f32:$src1)) - Complexity = 22
                  // Dst: (MDEB:f64 (INSERT_SUBREG:f64 (IMPLICIT_DEF:f64), FP32:f32:$src1, subreg_32bit:i32), bdxaddr12only:i64:$addr)
/*13120*/       /*Scope*/ 49, /*->13170*/
/*13121*/         OPC_CheckPredicate, 59, // Predicate_extloadf64
/*13123*/         OPC_MoveParent,
/*13124*/         OPC_MoveChild, 1,
/*13126*/         OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*13129*/         OPC_RecordChild0, // #2 = $src1
/*13130*/         OPC_CheckChild0Type, MVT::f64,
/*13132*/         OPC_MoveParent,
/*13133*/         OPC_CheckType, MVT::f128,
/*13135*/         OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDXAddr12Only:$addr #3 #4 #5
/*13138*/         OPC_EmitMergeInputChains1_0,
/*13139*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f128, 0/*#Ops*/,  // Results = #6
/*13146*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*13149*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f128, 3/*#Ops*/, 6, 2, 7,  // Results = #8
/*13159*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MXDB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f128, 4/*#Ops*/, 8, 3, 4, 5, 
                  // Src: (fmul:f128 (ld:f128 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf64>>, (fextend:f128 FP64:f64:$src1)) - Complexity = 22
                  // Dst: (MXDB:f128 (INSERT_SUBREG:f128 (IMPLICIT_DEF:f128), FP64:f64:$src1, subreg_high:i32), bdxaddr12only:i64:$addr)
/*13170*/       0, /*End of Scope*/
              0, // EndSwitchOpcode
/*13172*/   /*Scope*/ 53, /*->13226*/
/*13173*/     OPC_RecordChild0, // #0 = $R1src
/*13174*/     OPC_MoveChild, 1,
/*13176*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13179*/     OPC_RecordMemRef,
/*13180*/     OPC_RecordNode, // #1 = 'ld' chained node
/*13181*/     OPC_CheckFoldableChainNode,
/*13182*/     OPC_RecordChild1, // #2 = $XBD2
/*13183*/     OPC_CheckChild1Type, MVT::i64,
/*13185*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13187*/     OPC_CheckPredicate, 1, // Predicate_load
/*13189*/     OPC_MoveParent,
/*13190*/     OPC_SwitchType /*2 cases */, 15,  MVT::f32,// ->13208
/*13193*/       OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*13196*/       OPC_EmitMergeInputChains1_1,
/*13197*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MEEB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fmul:f32 FP32:f32:$R1src, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (MEEB:f32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
              /*SwitchType*/ 15,  MVT::f64,// ->13225
/*13210*/       OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*13213*/       OPC_EmitMergeInputChains1_1,
/*13214*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fmul:f64 FP64:f64:$R1src, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (MDB:f64 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
              0, // EndSwitchType
/*13226*/   /*Scope*/ 17|128,1/*145*/, /*->13373*/
/*13228*/     OPC_MoveChild, 0,
/*13230*/     OPC_SwitchOpcode /*2 cases */, 48,  TARGET_VAL(ISD::LOAD),// ->13282
/*13234*/       OPC_RecordMemRef,
/*13235*/       OPC_RecordNode, // #0 = 'ld' chained node
/*13236*/       OPC_CheckFoldableChainNode,
/*13237*/       OPC_RecordChild1, // #1 = $XBD2
/*13238*/       OPC_CheckChild1Type, MVT::i64,
/*13240*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13242*/       OPC_CheckPredicate, 1, // Predicate_load
/*13244*/       OPC_MoveParent,
/*13245*/       OPC_RecordChild1, // #2 = $R1src
/*13246*/       OPC_SwitchType /*2 cases */, 15,  MVT::f32,// ->13264
/*13249*/         OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*13252*/         OPC_EmitMergeInputChains1_0,
/*13253*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MEEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (fmul:f32 (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$R1src) - Complexity = 19
                  // Dst: (MEEB:f32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
                /*SwitchType*/ 15,  MVT::f64,// ->13281
/*13266*/         OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*13269*/         OPC_EmitMergeInputChains1_0,
/*13270*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (fmul:f64 (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$R1src) - Complexity = 19
                  // Dst: (MDB:f64 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
                0, // EndSwitchType
              /*SwitchOpcode*/ 87,  TARGET_VAL(ISD::FP_EXTEND),// ->13372
/*13285*/       OPC_RecordChild0, // #0 = $src1
/*13286*/       OPC_Scope, 39, /*->13327*/ // 2 children in Scope
/*13288*/         OPC_MoveParent,
/*13289*/         OPC_MoveChild, 1,
/*13291*/         OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*13294*/         OPC_RecordChild0, // #1 = $src2
/*13295*/         OPC_MoveParent,
/*13296*/         OPC_CheckType, MVT::f64,
/*13298*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #2
/*13305*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*13308*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 3,  // Results = #4
/*13318*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDEBR), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 1, 
                  // Src: (fmul:f64 (fextend:f64 FP32:f32:$src1), (fextend:f64 FP32:f32:$src2)) - Complexity = 9
                  // Dst: (MDEBR:f64 (INSERT_SUBREG:f64 (IMPLICIT_DEF:f64), FP32:f32:$src1, subreg_32bit:i32), FP32:f32:$src2)
/*13327*/       /*Scope*/ 43, /*->13371*/
/*13328*/         OPC_CheckChild0Type, MVT::f64,
/*13330*/         OPC_MoveParent,
/*13331*/         OPC_MoveChild, 1,
/*13333*/         OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*13336*/         OPC_RecordChild0, // #1 = $src2
/*13337*/         OPC_CheckChild0Type, MVT::f64,
/*13339*/         OPC_MoveParent,
/*13340*/         OPC_CheckType, MVT::f128,
/*13342*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f128, 0/*#Ops*/,  // Results = #2
/*13349*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*13352*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f128, 3/*#Ops*/, 2, 0, 3,  // Results = #4
/*13362*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MXDBR), 0,
                      1/*#VTs*/, MVT::f128, 2/*#Ops*/, 4, 1, 
                  // Src: (fmul:f128 (fextend:f128 FP64:f64:$src1), (fextend:f128 FP64:f64:$src2)) - Complexity = 9
                  // Dst: (MXDBR:f128 (INSERT_SUBREG:f128 (IMPLICIT_DEF:f128), FP64:f64:$src1, subreg_high:i32), FP64:f64:$src2)
/*13371*/       0, /*End of Scope*/
              0, // EndSwitchOpcode
/*13373*/   /*Scope*/ 37, /*->13411*/
/*13374*/     OPC_RecordChild0, // #0 = $R1src
/*13375*/     OPC_RecordChild1, // #1 = $R2
/*13376*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->13388
/*13379*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MEEBR), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f32 FP32:f32:$R1src, FP32:f32:$R2) - Complexity = 3
                // Dst: (MEEBR:f32 FP32:f32:$R1src, FP32:f32:$R2)
              /*SwitchType*/ 9,  MVT::f64,// ->13399
/*13390*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDBR), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 FP64:f64:$R1src, FP64:f64:$R2) - Complexity = 3
                // Dst: (MDBR:f64 FP64:f64:$R1src, FP64:f64:$R2)
              /*SwitchType*/ 9,  MVT::f128,// ->13410
/*13401*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MXBR), 0,
                    1/*#VTs*/, MVT::f128, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f128 FP128:f128:$R1src, FP128:f128:$R2) - Complexity = 3
                // Dst: (MXBR:f128 FP128:f128:$R1src, FP128:f128:$R2)
              0, // EndSwitchType
/*13411*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 86,  TARGET_VAL(ISD::FSQRT),// ->13501
/*13415*/   OPC_Scope, 49, /*->13466*/ // 2 children in Scope
/*13417*/     OPC_MoveChild, 0,
/*13419*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13422*/     OPC_RecordMemRef,
/*13423*/     OPC_RecordNode, // #0 = 'ld' chained node
/*13424*/     OPC_RecordChild1, // #1 = $XBD2
/*13425*/     OPC_CheckChild1Type, MVT::i64,
/*13427*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13429*/     OPC_CheckPredicate, 1, // Predicate_load
/*13431*/     OPC_MoveParent,
/*13432*/     OPC_SwitchType /*2 cases */, 14,  MVT::f32,// ->13449
/*13435*/       OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDXAddr12Only:$XBD2 #2 #3 #4
/*13438*/       OPC_EmitMergeInputChains1_0,
/*13439*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQEB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (fsqrt:f32 (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SQEB:f32 bdxaddr12only:i64:$XBD2)
              /*SwitchType*/ 14,  MVT::f64,// ->13465
/*13451*/       OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDXAddr12Only:$XBD2 #2 #3 #4
/*13454*/       OPC_EmitMergeInputChains1_0,
/*13455*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQDB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                // Src: (fsqrt:f64 (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SQDB:f64 bdxaddr12only:i64:$XBD2)
              0, // EndSwitchType
/*13466*/   /*Scope*/ 33, /*->13500*/
/*13467*/     OPC_RecordChild0, // #0 = $R2
/*13468*/     OPC_SwitchType /*3 cases */, 8,  MVT::f32,// ->13479
/*13471*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQEBR), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f32 FP32:f32:$R2) - Complexity = 3
                // Dst: (SQEBR:f32 FP32:f32:$R2)
              /*SwitchType*/ 8,  MVT::f64,// ->13489
/*13481*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQDBR), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f64 FP64:f64:$R2) - Complexity = 3
                // Dst: (SQDBR:f64 FP64:f64:$R2)
              /*SwitchType*/ 8,  MVT::f128,// ->13499
/*13491*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQXBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f128 FP128:f128:$R2) - Complexity = 3
                // Dst: (SQXBR:f128 FP128:f128:$R2)
              0, // EndSwitchType
/*13500*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 20|128,1/*148*/,  TARGET_VAL(ISD::FADD),// ->13653
/*13505*/   OPC_Scope, 53, /*->13560*/ // 3 children in Scope
/*13507*/     OPC_RecordChild0, // #0 = $R1src
/*13508*/     OPC_MoveChild, 1,
/*13510*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13513*/     OPC_RecordMemRef,
/*13514*/     OPC_RecordNode, // #1 = 'ld' chained node
/*13515*/     OPC_CheckFoldableChainNode,
/*13516*/     OPC_RecordChild1, // #2 = $XBD2
/*13517*/     OPC_CheckChild1Type, MVT::i64,
/*13519*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13521*/     OPC_CheckPredicate, 1, // Predicate_load
/*13523*/     OPC_MoveParent,
/*13524*/     OPC_SwitchType /*2 cases */, 15,  MVT::f32,// ->13542
/*13527*/       OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*13530*/       OPC_EmitMergeInputChains1_1,
/*13531*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AEB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fadd:f32 FP32:f32:$R1src, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (AEB:f32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
              /*SwitchType*/ 15,  MVT::f64,// ->13559
/*13544*/       OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*13547*/       OPC_EmitMergeInputChains1_1,
/*13548*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fadd:f64 FP64:f64:$R1src, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (ADB:f64 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
              0, // EndSwitchType
/*13560*/   /*Scope*/ 53, /*->13614*/
/*13561*/     OPC_MoveChild, 0,
/*13563*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13566*/     OPC_RecordMemRef,
/*13567*/     OPC_RecordNode, // #0 = 'ld' chained node
/*13568*/     OPC_CheckFoldableChainNode,
/*13569*/     OPC_RecordChild1, // #1 = $XBD2
/*13570*/     OPC_CheckChild1Type, MVT::i64,
/*13572*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13574*/     OPC_CheckPredicate, 1, // Predicate_load
/*13576*/     OPC_MoveParent,
/*13577*/     OPC_RecordChild1, // #2 = $R1src
/*13578*/     OPC_SwitchType /*2 cases */, 15,  MVT::f32,// ->13596
/*13581*/       OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*13584*/       OPC_EmitMergeInputChains1_0,
/*13585*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AEB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (fadd:f32 (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$R1src) - Complexity = 19
                // Dst: (AEB:f32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
              /*SwitchType*/ 15,  MVT::f64,// ->13613
/*13598*/       OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*13601*/       OPC_EmitMergeInputChains1_0,
/*13602*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (fadd:f64 (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$R1src) - Complexity = 19
                // Dst: (ADB:f64 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
              0, // EndSwitchType
/*13614*/   /*Scope*/ 37, /*->13652*/
/*13615*/     OPC_RecordChild0, // #0 = $R1src
/*13616*/     OPC_RecordChild1, // #1 = $R2
/*13617*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->13629
/*13620*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AEBR), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:f32 FP32:f32:$R1src, FP32:f32:$R2) - Complexity = 3
                // Dst: (AEBR:f32 FP32:f32:$R1src, FP32:f32:$R2)
              /*SwitchType*/ 9,  MVT::f64,// ->13640
/*13631*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADBR), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:f64 FP64:f64:$R1src, FP64:f64:$R2) - Complexity = 3
                // Dst: (ADBR:f64 FP64:f64:$R1src, FP64:f64:$R2)
              /*SwitchType*/ 9,  MVT::f128,// ->13651
/*13642*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AXBR), 0,
                    1/*#VTs*/, MVT::f128, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:f128 FP128:f128:$R1src, FP128:f128:$R2) - Complexity = 3
                // Dst: (AXBR:f128 FP128:f128:$R1src, FP128:f128:$R2)
              0, // EndSwitchType
/*13652*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 93,  TARGET_VAL(ISD::FSUB),// ->13749
/*13656*/   OPC_RecordChild0, // #0 = $R1src
/*13657*/   OPC_Scope, 52, /*->13711*/ // 2 children in Scope
/*13659*/     OPC_MoveChild, 1,
/*13661*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13664*/     OPC_RecordMemRef,
/*13665*/     OPC_RecordNode, // #1 = 'ld' chained node
/*13666*/     OPC_CheckFoldableChainNode,
/*13667*/     OPC_RecordChild1, // #2 = $XBD2
/*13668*/     OPC_CheckChild1Type, MVT::i64,
/*13670*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13672*/     OPC_CheckPredicate, 1, // Predicate_load
/*13674*/     OPC_MoveParent,
/*13675*/     OPC_SwitchType /*2 cases */, 15,  MVT::f32,// ->13693
/*13678*/       OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*13681*/       OPC_EmitMergeInputChains1_1,
/*13682*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SEB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fsub:f32 FP32:f32:$R1src, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SEB:f32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
              /*SwitchType*/ 15,  MVT::f64,// ->13710
/*13695*/       OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*13698*/       OPC_EmitMergeInputChains1_1,
/*13699*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SDB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fsub:f64 FP64:f64:$R1src, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SDB:f64 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
              0, // EndSwitchType
/*13711*/   /*Scope*/ 36, /*->13748*/
/*13712*/     OPC_RecordChild1, // #1 = $R2
/*13713*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->13725
/*13716*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SEBR), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f32 FP32:f32:$R1src, FP32:f32:$R2) - Complexity = 3
                // Dst: (SEBR:f32 FP32:f32:$R1src, FP32:f32:$R2)
              /*SwitchType*/ 9,  MVT::f64,// ->13736
/*13727*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SDBR), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f64 FP64:f64:$R1src, FP64:f64:$R2) - Complexity = 3
                // Dst: (SDBR:f64 FP64:f64:$R1src, FP64:f64:$R2)
              /*SwitchType*/ 9,  MVT::f128,// ->13747
/*13738*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SXBR), 0,
                    1/*#VTs*/, MVT::f128, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f128 FP128:f128:$R1src, FP128:f128:$R2) - Complexity = 3
                // Dst: (SXBR:f128 FP128:f128:$R1src, FP128:f128:$R2)
              0, // EndSwitchType
/*13748*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 93,  TARGET_VAL(ISD::FDIV),// ->13845
/*13752*/   OPC_RecordChild0, // #0 = $R1src
/*13753*/   OPC_Scope, 52, /*->13807*/ // 2 children in Scope
/*13755*/     OPC_MoveChild, 1,
/*13757*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13760*/     OPC_RecordMemRef,
/*13761*/     OPC_RecordNode, // #1 = 'ld' chained node
/*13762*/     OPC_CheckFoldableChainNode,
/*13763*/     OPC_RecordChild1, // #2 = $XBD2
/*13764*/     OPC_CheckChild1Type, MVT::i64,
/*13766*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13768*/     OPC_CheckPredicate, 1, // Predicate_load
/*13770*/     OPC_MoveParent,
/*13771*/     OPC_SwitchType /*2 cases */, 15,  MVT::f32,// ->13789
/*13774*/       OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*13777*/       OPC_EmitMergeInputChains1_1,
/*13778*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DEB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fdiv:f32 FP32:f32:$R1src, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (DEB:f32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
              /*SwitchType*/ 15,  MVT::f64,// ->13806
/*13791*/       OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*13794*/       OPC_EmitMergeInputChains1_1,
/*13795*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DDB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fdiv:f64 FP64:f64:$R1src, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (DDB:f64 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
              0, // EndSwitchType
/*13807*/   /*Scope*/ 36, /*->13844*/
/*13808*/     OPC_RecordChild1, // #1 = $R2
/*13809*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->13821
/*13812*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DEBR), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f32 FP32:f32:$R1src, FP32:f32:$R2) - Complexity = 3
                // Dst: (DEBR:f32 FP32:f32:$R1src, FP32:f32:$R2)
              /*SwitchType*/ 9,  MVT::f64,// ->13832
/*13823*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DDBR), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f64 FP64:f64:$R1src, FP64:f64:$R2) - Complexity = 3
                // Dst: (DDBR:f64 FP64:f64:$R1src, FP64:f64:$R2)
              /*SwitchType*/ 9,  MVT::f128,// ->13843
/*13834*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DXBR), 0,
                    1/*#VTs*/, MVT::f128, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f128 FP128:f128:$R1src, FP128:f128:$R2) - Complexity = 3
                // Dst: (DXBR:f128 FP128:f128:$R1src, FP128:f128:$R2)
              0, // EndSwitchType
/*13844*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::CALLSEQ_END),// ->13873
/*13848*/   OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*13849*/   OPC_CaptureGlueInput,
/*13850*/   OPC_RecordChild1, // #1 = $amt1
/*13851*/   OPC_MoveChild, 1,
/*13853*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*13856*/   OPC_MoveParent,
/*13857*/   OPC_RecordChild2, // #2 = $amt2
/*13858*/   OPC_MoveChild, 2,
/*13860*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*13863*/   OPC_MoveParent,
/*13864*/   OPC_EmitMergeInputChains1_0,
/*13865*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i64):$amt1, (timm:i64):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP (timm:i64):$amt1, (timm:i64):$amt2)
          /*SwitchOpcode*/ 30,  TARGET_VAL(SystemZISD::CALL),// ->13906
/*13876*/   OPC_RecordNode,   // #0 = 'z_call' chained node
/*13877*/   OPC_CaptureGlueInput,
/*13878*/   OPC_RecordChild1, // #1 = $I2
/*13879*/   OPC_CheckChild1Type, MVT::i64,
/*13881*/   OPC_Scope, 12, /*->13895*/ // 2 children in Scope
/*13883*/     OPC_CheckComplexPat, /*CP*/15, /*#*/1, // selectPCRelAddress:$I2 #2
/*13886*/     OPC_EmitMergeInputChains1_0,
/*13887*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::BRASL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (z_call pcrel32call:i64:$I2) - Complexity = 9
              // Dst: (BRASL:i64 pcrel32call:i64:$I2)
/*13895*/   /*Scope*/ 9, /*->13905*/
/*13896*/     OPC_EmitMergeInputChains1_0,
/*13897*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::BASR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (z_call ADDR64:i64:$R2) - Complexity = 3
              // Dst: (BASR:i64 ADDR64:i64:$R2)
/*13905*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 29,  TARGET_VAL(SystemZISD::BR_CCMASK),// ->13938
/*13909*/   OPC_RecordNode,   // #0 = 'z_br_ccmask' chained node
/*13910*/   OPC_CaptureGlueInput,
/*13911*/   OPC_RecordChild1, // #1 = $cond
/*13912*/   OPC_MoveChild, 1,
/*13914*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13917*/   OPC_CheckPredicate, 85, // Predicate_cond4
/*13919*/   OPC_MoveParent,
/*13920*/   OPC_RecordChild2, // #2 = $dst
/*13921*/   OPC_MoveChild, 2,
/*13923*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*13926*/   OPC_MoveParent,
/*13927*/   OPC_EmitMergeInputChains1_0,
/*13928*/   OPC_EmitConvertToTarget, 1,
/*13930*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::BRC), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 2/*#Ops*/, 3, 2, 
            // Src: (z_br_ccmask (imm:i8)<<P:Predicate_cond4>>:$cond, (bb:Other):$dst) - Complexity = 7
            // Dst: (BRC (imm:i8)<<P:Predicate_cond4>>:$cond, (bb:Other):$dst)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::CALLSEQ_START),// ->13957
/*13941*/   OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*13942*/   OPC_RecordChild1, // #1 = $amt
/*13943*/   OPC_MoveChild, 1,
/*13945*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*13948*/   OPC_MoveParent,
/*13949*/   OPC_EmitMergeInputChains1_0,
/*13950*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i64):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN (timm:i64):$amt)
          /*SwitchOpcode*/ 76,  TARGET_VAL(ISD::FNEG),// ->14036
/*13960*/   OPC_Scope, 39, /*->14001*/ // 2 children in Scope
/*13962*/     OPC_MoveChild, 0,
/*13964*/     OPC_CheckOpcode, TARGET_VAL(ISD::FABS),
/*13967*/     OPC_RecordChild0, // #0 = $R2
/*13968*/     OPC_MoveParent,
/*13969*/     OPC_SwitchType /*3 cases */, 8,  MVT::f32,// ->13980
/*13972*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNEBR), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 (fabs:f32 FP32:f32:$R2)) - Complexity = 6
                // Dst: (LNEBR:f32 FP32:f32:$R2)
              /*SwitchType*/ 8,  MVT::f64,// ->13990
/*13982*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNDBR), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 (fabs:f64 FP64:f64:$R2)) - Complexity = 6
                // Dst: (LNDBR:f64 FP64:f64:$R2)
              /*SwitchType*/ 8,  MVT::f128,// ->14000
/*13992*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNXBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fneg:f128 (fabs:f128 FP128:f128:$R2)) - Complexity = 6
                // Dst: (LNXBR:f128 FP128:f128:$R2)
              0, // EndSwitchType
/*14001*/   /*Scope*/ 33, /*->14035*/
/*14002*/     OPC_RecordChild0, // #0 = $R2
/*14003*/     OPC_SwitchType /*3 cases */, 8,  MVT::f32,// ->14014
/*14006*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCEBR), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 FP32:f32:$R2) - Complexity = 3
                // Dst: (LCEBR:f32 FP32:f32:$R2)
              /*SwitchType*/ 8,  MVT::f64,// ->14024
/*14016*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCDBR), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 FP64:f64:$R2) - Complexity = 3
                // Dst: (LCDBR:f64 FP64:f64:$R2)
              /*SwitchType*/ 8,  MVT::f128,// ->14034
/*14026*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCXBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fneg:f128 FP128:f128:$R2) - Complexity = 3
                // Dst: (LCXBR:f128 FP128:f128:$R2)
              0, // EndSwitchType
/*14035*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 90,  TARGET_VAL(ISD::ConstantFP),// ->14129
/*14039*/   OPC_Scope, 31, /*->14072*/ // 2 children in Scope
/*14041*/     OPC_CheckPredicate, 86, // Predicate_fpimm0
/*14043*/     OPC_SwitchType /*3 cases */, 7,  MVT::f32,// ->14053
/*14046*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LZER), 0,
                    1/*#VTs*/, MVT::f32, 0/*#Ops*/, 
                // Src: (fpimm:f32)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (LZER:f32)
              /*SwitchType*/ 7,  MVT::f64,// ->14062
/*14055*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LZDR), 0,
                    1/*#VTs*/, MVT::f64, 0/*#Ops*/, 
                // Src: (fpimm:f64)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (LZDR:f64)
              /*SwitchType*/ 7,  MVT::f128,// ->14071
/*14064*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LZXR), 0,
                    1/*#VTs*/, MVT::f128, 0/*#Ops*/, 
                // Src: (fpimm:f128)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (LZXR:f128)
              0, // EndSwitchType
/*14072*/   /*Scope*/ 55, /*->14128*/
/*14073*/     OPC_CheckPredicate, 87, // Predicate_fpimmneg0
/*14075*/     OPC_SwitchType /*3 cases */, 15,  MVT::f32,// ->14093
/*14078*/       OPC_EmitNode, TARGET_VAL(SystemZ::LZER), 0,
                    1/*#VTs*/, MVT::f32, 0/*#Ops*/,  // Results = #0
/*14085*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCEBR), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fpimm:f32)<<P:Predicate_fpimmneg0>> - Complexity = 4
                // Dst: (LCEBR:f32 (LZER:f32))
              /*SwitchType*/ 15,  MVT::f64,// ->14110
/*14095*/       OPC_EmitNode, TARGET_VAL(SystemZ::LZDR), 0,
                    1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #0
/*14102*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCDBR), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fpimm:f64)<<P:Predicate_fpimmneg0>> - Complexity = 4
                // Dst: (LCDBR:f64 (LZDR:f64))
              /*SwitchType*/ 15,  MVT::f128,// ->14127
/*14112*/       OPC_EmitNode, TARGET_VAL(SystemZ::LZXR), 0,
                    1/*#VTs*/, MVT::f128, 0/*#Ops*/,  // Results = #0
/*14119*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCXBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fpimm:f128)<<P:Predicate_fpimmneg0>> - Complexity = 4
                // Dst: (LCXBR:f128 (LZXR:f128))
              0, // EndSwitchType
/*14128*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 9,  TARGET_VAL(SystemZISD::RET_FLAG),// ->14141
/*14132*/   OPC_RecordNode,   // #0 = 'z_retflag' chained node
/*14133*/   OPC_CaptureGlueInput,
/*14134*/   OPC_EmitMergeInputChains1_0,
/*14135*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::RET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (z_retflag) - Complexity = 3
            // Dst: (RET)
          /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::BRIND),// ->14156
/*14144*/   OPC_RecordNode,   // #0 = 'brind' chained node
/*14145*/   OPC_RecordChild1, // #1 = $R2
/*14146*/   OPC_CheckChild1Type, MVT::i64,
/*14148*/   OPC_EmitMergeInputChains1_0,
/*14149*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::BR), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (brind ADDR64:i64:$R2) - Complexity = 3
            // Dst: (BR ADDR64:i64:$R2)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->14175
/*14159*/   OPC_RecordNode,   // #0 = 'br' chained node
/*14160*/   OPC_RecordChild1, // #1 = $I2
/*14161*/   OPC_MoveChild, 1,
/*14163*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*14166*/   OPC_MoveParent,
/*14167*/   OPC_EmitMergeInputChains1_0,
/*14168*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::J), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$I2) - Complexity = 3
            // Dst: (J (bb:Other):$I2)
          /*SwitchOpcode*/ 101|128,1/*229*/,  TARGET_VAL(ISD::FCOPYSIGN),// ->14408
/*14179*/   OPC_RecordChild0, // #0 = $R3
/*14180*/   OPC_RecordChild1, // #1 = $R2
/*14181*/   OPC_Scope, 62, /*->14245*/ // 3 children in Scope
/*14183*/     OPC_CheckChild1Type, MVT::f32,
/*14185*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->14197
/*14188*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRss), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fcopysign:f32 FP32:f32:$R3, FP32:f32:$R2) - Complexity = 3
                // Dst: (CPSDRss:f32 FP32:f32:$R3, FP32:f32:$R2)
              /*SwitchType*/ 9,  MVT::f64,// ->14208
/*14199*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRds), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fcopysign:f64 FP64:f64:$R3, FP32:f32:$R2) - Complexity = 3
                // Dst: (CPSDRds:f64 FP64:f64:$R3, FP32:f32:$R2)
              /*SwitchType*/ 34,  MVT::f128,// ->14244
/*14210*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*14213*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 2,  // Results = #3
/*14222*/       OPC_EmitNode, TARGET_VAL(SystemZ::CPSDRds), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 3, 1,  // Results = #4
/*14231*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*14234*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 0, 4, 5, 
                // Src: (fcopysign:f128 FP128:f128:$src1, FP32:f32:$src2) - Complexity = 3
                // Dst: (INSERT_SUBREG:f128 FP128:f128:$src1, (CPSDRds:f64 (EXTRACT_SUBREG:f64 FP128:f128:$src1, subreg_high:i32), FP32:f32:$src2), subreg_high:i32)
              0, // EndSwitchType
/*14245*/   /*Scope*/ 62, /*->14308*/
/*14246*/     OPC_CheckChild1Type, MVT::f64,
/*14248*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->14260
/*14251*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRsd), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fcopysign:f32 FP32:f32:$R3, FP64:f64:$R2) - Complexity = 3
                // Dst: (CPSDRsd:f32 FP32:f32:$R3, FP64:f64:$R2)
              /*SwitchType*/ 9,  MVT::f64,// ->14271
/*14262*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRdd), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fcopysign:f64 FP64:f64:$R3, FP64:f64:$R2) - Complexity = 3
                // Dst: (CPSDRdd:f64 FP64:f64:$R3, FP64:f64:$R2)
              /*SwitchType*/ 34,  MVT::f128,// ->14307
/*14273*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*14276*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 2,  // Results = #3
/*14285*/       OPC_EmitNode, TARGET_VAL(SystemZ::CPSDRdd), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 3, 1,  // Results = #4
/*14294*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*14297*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 0, 4, 5, 
                // Src: (fcopysign:f128 FP128:f128:$src1, FP64:f64:$src2) - Complexity = 3
                // Dst: (INSERT_SUBREG:f128 FP128:f128:$src1, (CPSDRdd:f64 (EXTRACT_SUBREG:f64 FP128:f128:$src1, subreg_high:i32), FP64:f64:$src2), subreg_high:i32)
              0, // EndSwitchType
/*14308*/   /*Scope*/ 98, /*->14407*/
/*14309*/     OPC_CheckChild1Type, MVT::f128,
/*14311*/     OPC_SwitchType /*3 cases */, 21,  MVT::f32,// ->14335
/*14314*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*14317*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2,  // Results = #3
/*14326*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRsd), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 3, 
                // Src: (fcopysign:f32 FP32:f32:$src1, FP128:f128:$src2) - Complexity = 3
                // Dst: (CPSDRsd:f32 FP32:f32:$src1, (EXTRACT_SUBREG:f64 FP128:f128:$src2, subreg_high:i32))
              /*SwitchType*/ 21,  MVT::f64,// ->14358
/*14337*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*14340*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2,  // Results = #3
/*14349*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRdd), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 3, 
                // Src: (fcopysign:f64 FP64:f64:$src1, FP128:f128:$src2) - Complexity = 3
                // Dst: (CPSDRdd:f64 FP64:f64:$src1, (EXTRACT_SUBREG:f64 FP128:f128:$src2, subreg_high:i32))
              /*SwitchType*/ 46,  MVT::f128,// ->14406
/*14360*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*14363*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 2,  // Results = #3
/*14372*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*14375*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 4,  // Results = #5
/*14384*/       OPC_EmitNode, TARGET_VAL(SystemZ::CPSDRdd), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 3, 5,  // Results = #6
/*14393*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*14396*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 0, 6, 7, 
                // Src: (fcopysign:f128 FP128:f128:$src1, FP128:f128:$src2) - Complexity = 3
                // Dst: (INSERT_SUBREG:f128 FP128:f128:$src1, (CPSDRdd:f64 (EXTRACT_SUBREG:f64 FP128:f128:$src1, subreg_high:i32), (EXTRACT_SUBREG:f64 FP128:f128:$src2, subreg_high:i32)), subreg_high:i32)
              0, // EndSwitchType
/*14407*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 63,  TARGET_VAL(ISD::FP_ROUND),// ->14474
/*14411*/   OPC_RecordChild0, // #0 = $R2
/*14412*/   OPC_SwitchType /*2 cases */, 36,  MVT::f32,// ->14451
/*14415*/     OPC_Scope, 10, /*->14427*/ // 2 children in Scope
/*14417*/       OPC_CheckChild0Type, MVT::f64,
/*14419*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LEDBR), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fround:f32 FP64:f64:$R2) - Complexity = 3
                // Dst: (LEDBR:f32 FP64:f64:$R2)
/*14427*/     /*Scope*/ 22, /*->14450*/
/*14428*/       OPC_CheckChild0Type, MVT::f128,
/*14430*/       OPC_EmitNode, TARGET_VAL(SystemZ::LEXBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0,  // Results = #1
/*14438*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*14441*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                // Src: (fround:f32 FP128:f128:$src) - Complexity = 3
                // Dst: (EXTRACT_SUBREG:f32 (LEXBR:f128 FP128:f128:$src), subreg_32bit:i32)
/*14450*/     0, /*End of Scope*/
            /*SwitchType*/ 20,  MVT::f64,// ->14473
/*14453*/     OPC_EmitNode, TARGET_VAL(SystemZ::LDXBR), 0,
                  1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0,  // Results = #1
/*14461*/     OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*14464*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
              // Src: (fround:f64 FP128:f128:$src) - Complexity = 3
              // Dst: (EXTRACT_SUBREG:f64 (LDXBR:f128 FP128:f128:$src), subreg_high:i32)
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FP_EXTEND),// ->14516
/*14477*/   OPC_RecordChild0, // #0 = $R2
/*14478*/   OPC_SwitchType /*2 cases */, 8,  MVT::f64,// ->14489
/*14481*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LDEBR), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fextend:f64 FP32:f32:$R2) - Complexity = 3
              // Dst: (LDEBR:f64 FP32:f32:$R2)
            /*SwitchType*/ 24,  MVT::f128,// ->14515
/*14491*/     OPC_Scope, 10, /*->14503*/ // 2 children in Scope
/*14493*/       OPC_CheckChild0Type, MVT::f32,
/*14495*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LXEBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fextend:f128 FP32:f32:$R2) - Complexity = 3
                // Dst: (LXEBR:f128 FP32:f32:$R2)
/*14503*/     /*Scope*/ 10, /*->14514*/
/*14504*/       OPC_CheckChild0Type, MVT::f64,
/*14506*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LXDBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fextend:f128 FP64:f64:$R2) - Complexity = 3
                // Dst: (LXDBR:f128 FP64:f64:$R2)
/*14514*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 73,  TARGET_VAL(ISD::SINT_TO_FP),// ->14592
/*14519*/   OPC_RecordChild0, // #0 = $R2
/*14520*/   OPC_Scope, 34, /*->14556*/ // 2 children in Scope
/*14522*/     OPC_CheckChild0Type, MVT::i32,
/*14524*/     OPC_SwitchType /*3 cases */, 8,  MVT::f32,// ->14535
/*14527*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CEFBR), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f32 GR32:i32:$R2) - Complexity = 3
                // Dst: (CEFBR:f32 GR32:i32:$R2)
              /*SwitchType*/ 8,  MVT::f64,// ->14545
/*14537*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CDFBR), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f64 GR32:i32:$R2) - Complexity = 3
                // Dst: (CDFBR:f64 GR32:i32:$R2)
              /*SwitchType*/ 8,  MVT::f128,// ->14555
/*14547*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CXFBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f128 GR32:i32:$R2) - Complexity = 3
                // Dst: (CXFBR:f128 GR32:i32:$R2)
              0, // EndSwitchType
/*14556*/   /*Scope*/ 34, /*->14591*/
/*14557*/     OPC_CheckChild0Type, MVT::i64,
/*14559*/     OPC_SwitchType /*3 cases */, 8,  MVT::f32,// ->14570
/*14562*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CEGBR), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f32 GR64:i64:$R2) - Complexity = 3
                // Dst: (CEGBR:f32 GR64:i64:$R2)
              /*SwitchType*/ 8,  MVT::f64,// ->14580
/*14572*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CDGBR), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f64 GR64:i64:$R2) - Complexity = 3
                // Dst: (CDGBR:f64 GR64:i64:$R2)
              /*SwitchType*/ 8,  MVT::f128,// ->14590
/*14582*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CXGBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f128 GR64:i64:$R2) - Complexity = 3
                // Dst: (CXGBR:f128 GR64:i64:$R2)
              0, // EndSwitchType
/*14591*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 33,  TARGET_VAL(ISD::FABS),// ->14628
/*14595*/   OPC_RecordChild0, // #0 = $R2
/*14596*/   OPC_SwitchType /*3 cases */, 8,  MVT::f32,// ->14607
/*14599*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPEBR), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 FP32:f32:$R2) - Complexity = 3
              // Dst: (LPEBR:f32 FP32:f32:$R2)
            /*SwitchType*/ 8,  MVT::f64,// ->14617
/*14609*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPDBR), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fabs:f64 FP64:f64:$R2) - Complexity = 3
              // Dst: (LPDBR:f64 FP64:f64:$R2)
            /*SwitchType*/ 8,  MVT::f128,// ->14627
/*14619*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPXBR), 0,
                  1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
              // Src: (fabs:f128 FP128:f128:$R2) - Complexity = 3
              // Dst: (LPXBR:f128 FP128:f128:$R2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 45,  TARGET_VAL(ISD::FRINT),// ->14676
/*14631*/   OPC_RecordChild0, // #0 = $src
/*14632*/   OPC_SwitchType /*3 cases */, 12,  MVT::f32,// ->14647
/*14635*/     OPC_EmitInteger, MVT::i8, 0, 
/*14638*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIEBR), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 0, 
              // Src: (frint:f32 FP32:f32:$src) - Complexity = 3
              // Dst: (FIEBR:f32 0:i8, FP32:f32:$src)
            /*SwitchType*/ 12,  MVT::f64,// ->14661
/*14649*/     OPC_EmitInteger, MVT::i8, 0, 
/*14652*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIDBR), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 0, 
              // Src: (frint:f64 FP64:f64:$src) - Complexity = 3
              // Dst: (FIDBR:f64 0:i8, FP64:f64:$src)
            /*SwitchType*/ 12,  MVT::f128,// ->14675
/*14663*/     OPC_EmitInteger, MVT::i8, 0, 
/*14666*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIXBR), 0,
                  1/*#VTs*/, MVT::f128, 2/*#Ops*/, 1, 0, 
              // Src: (frint:f128 FP128:f128:$src) - Complexity = 3
              // Dst: (FIXBR:f128 0:i8, FP128:f128:$src)
            0, // EndSwitchType
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 14678 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 173
  // #OPC_RecordNode                     = 105
  // #OPC_RecordChild                    = 430
  // #OPC_RecordMemRef                   = 91
  // #OPC_CaptureGlueInput               = 7
  // #OPC_MoveChild                      = 226
  // #OPC_MoveParent                     = 407
  // #OPC_CheckSame                      = 38
  // #OPC_CheckPatternPredicate          = 0
  // #OPC_CheckPredicate                 = 629
  // #OPC_CheckOpcode                    = 163
  // #OPC_SwitchOpcode                   = 10
  // #OPC_CheckType                      = 169
  // #OPC_SwitchType                     = 101
  // #OPC_CheckChildType                 = 156
  // #OPC_CheckInteger                   = 2
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 11
  // #OPC_CheckComplexPat                = 360
  // #OPC_CheckAndImm                    = 22
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 63
  // #OPC_EmitInteger                    = 9
  // #OPC_EmitStringInteger              = 40
  // #OPC_EmitRegister                   = 0
  // #OPC_EmitConvertToTarget            = 174
  // #OPC_EmitMergeInputChains           = 343
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 49
  // #OPC_EmitNodeXForm                  = 167
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 581

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 1: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 2: { // Predicate_imm32sx8
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<8>(N->getSExtValue());

  }
  case 3: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 4: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 5: { // Predicate_imm64sx8
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<8>(N->getSExtValue());

  }
  case 6: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 7: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 8: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 9: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 10: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 11: { // Predicate_sextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 12: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 13: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 14: { // Predicate_nonvolatile_store
    SDNode *N = Node;

  StoreSDNode *Store = cast<StoreSDNode>(N);
  return !Store->isVolatile();

  }
  case 15: { // Predicate_aligned_store
    SDNode *N = Node;

  StoreSDNode *Store = cast<StoreSDNode>(N);
  return Store->getAlignment() >= Store->getMemoryVT().getStoreSize();

  }
  case 16: { // Predicate_imm32sx16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<16>(N->getSExtValue());

  }
  case 17: { // Predicate_imm64sx16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<16>(N->getSExtValue());

  }
  case 18: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 19: { // Predicate_aligned_truncstorei16
    SDNode *N = Node;

  StoreSDNode *Store = cast<StoreSDNode>(N);
  return Store->getAlignment() >= Store->getMemoryVT().getStoreSize();

  }
  case 20: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 21: { // Predicate_aligned_truncstorei32
    SDNode *N = Node;

  StoreSDNode *Store = cast<StoreSDNode>(N);
  return Store->getAlignment() >= Store->getMemoryVT().getStoreSize();

  }
  case 22: { // Predicate_or_as_inserti8
    SDNode *N = Node;

  unsigned BitWidth = N->getValueType(0).getScalarType().getSizeInBits();
  return CurDAG->MaskedValueIsZero(N->getOperand(0),
                                   APInt::getLowBitsSet(BitWidth, 8));

  }
  case 23: { // Predicate_or_as_revinserti8
    SDNode *N = Node;

  unsigned BitWidth = N->getValueType(0).getScalarType().getSizeInBits();
  return CurDAG->MaskedValueIsZero(N->getOperand(1),
                                   APInt::getLowBitsSet(BitWidth, 8));

  }
  case 24: { // Predicate_imm32ll16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLL(N->getZExtValue());

  }
  case 25: { // Predicate_imm32lh16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLH(N->getZExtValue());

  }
  case 26: { // Predicate_imm64ll16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLL(N->getZExtValue());

  }
  case 27: { // Predicate_imm64lh16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLH(N->getZExtValue());

  }
  case 28: { // Predicate_imm64hl16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHL(N->getZExtValue());

  }
  case 29: { // Predicate_imm64hh16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHH(N->getZExtValue());

  }
  case 30: { // Predicate_imm64lf32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLF(N->getZExtValue());

  }
  case 31: { // Predicate_imm64hf32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHF(N->getZExtValue());

  }
  case 32: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 33: { // Predicate_aligned_sextloadi16
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 34: { // Predicate_aligned_load
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 35: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 36: { // Predicate_aligned_sextloadi32
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 37: { // Predicate_imm64sx32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<32>(N->getSExtValue());

  }
  case 38: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 39: { // Predicate_aligned_zextloadi16
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 40: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 41: { // Predicate_aligned_zextloadi32
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 42: { // Predicate_imm32zx8
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<8>(N->getZExtValue());

  }
  case 43: { // Predicate_imm32zx16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<16>(N->getZExtValue());

  }
  case 44: { // Predicate_imm64zx16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<16>(N->getZExtValue());

  }
  case 45: { // Predicate_imm64zx32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<32>(N->getZExtValue());

  }
  case 46: { // Predicate_nonvolatile_load
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return !Load->isVolatile();

  }
  case 47: { // Predicate_imm64zx32n
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<32>(-N->getSExtValue());

  }
  case 48: { // Predicate_imm32ll16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLL(uint32_t(~N->getZExtValue()));

  }
  case 49: { // Predicate_imm32lh16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLH(uint32_t(~N->getZExtValue()));

  }
  case 50: { // Predicate_imm64ll16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLL(uint64_t(~N->getZExtValue()));

  }
  case 51: { // Predicate_imm64lh16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLH(uint64_t(~N->getZExtValue()));

  }
  case 52: { // Predicate_imm64hl16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHL(uint64_t(~N->getZExtValue()));

  }
  case 53: { // Predicate_imm64hh16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHH(uint64_t(~N->getZExtValue()));

  }
  case 54: { // Predicate_imm64lf32c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLF(uint64_t(~N->getZExtValue()));

  }
  case 55: { // Predicate_imm64hf32c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHF(uint64_t(~N->getZExtValue()));

  }
  case 56: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 57: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 58: { // Predicate_extloadf32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::f32;

  }
  case 59: { // Predicate_extloadf64
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::f64;

  }
  case 60: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 61: { // Predicate_atomic_load_add_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 62: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 63: { // Predicate_atomic_load_and_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 64: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 65: { // Predicate_atomic_load_or_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 66: { // Predicate_atomic_load_xor_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 67: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 68: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 69: { // Predicate_atomic_load_nand_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 70: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 71: { // Predicate_atomic_cmp_swap_64
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

  }
  case 72: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 73: { // Predicate_atomic_swap_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 74: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 75: { // Predicate_atomic_load_sub_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 76: { // Predicate_atomic_load_min_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 77: { // Predicate_atomic_load_min_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 78: { // Predicate_atomic_load_max_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 79: { // Predicate_atomic_load_max_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 80: { // Predicate_atomic_load_umin_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 81: { // Predicate_atomic_load_umin_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 82: { // Predicate_atomic_load_umax_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 83: { // Predicate_atomic_load_umax_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 84: { // Predicate_access_reg
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return N->getZExtValue() < 16; 
  }
  case 85: { // Predicate_cond4
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return (N->getZExtValue() < 16); 
  }
  case 86: { // Predicate_fpimm0
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);
 return N->isExactlyValue(+0.0); 
  }
  case 87: { // Predicate_fpimmneg0
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);
 return N->isExactlyValue(-0.0); 
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
    return selectBDAddr20Only(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return selectBDAddr12Pair(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+2);
    return selectBDAddr20Pair(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+3);
    return selectBDXAddr20Only(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 4:
    Result.resize(NextRes+1);
    return selectPCRelAddress(N, Result[NextRes+0].first);
  case 5:
    Result.resize(NextRes+2);
    return selectBDAddr12Only(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 6:
    Result.resize(NextRes+3);
    return selectBDXAddr12Pair(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 7:
    Result.resize(NextRes+3);
    return selectBDXAddr20Pair(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 8:
    Result.resize(NextRes+3);
    return selectBDXAddr20Only128(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 9:
    Result.resize(NextRes+3);
    return selectDynAlloc12Only(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 10:
    Result.resize(NextRes+3);
    return selectLAAddr12Pair(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 11:
    Result.resize(NextRes+3);
    return selectLAAddr20Pair(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 12:
    Result.resize(NextRes+3);
    return selectBDXAddr12Only(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 13:
    Result.resize(NextRes+2);
    return selectBDAddr12Only(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 14:
    Result.resize(NextRes+2);
    return selectBDAddr20Only(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 15:
    Result.resize(NextRes+1);
    return selectPCRelAddress(N, Result[NextRes+0].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // SIMM8
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(int8_t(N->getZExtValue()), MVT::i64);

  }
  case 1: {  // UIMM8
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(uint8_t(N->getZExtValue()), MVT::i64);

  }
  case 2: {  // SIMM16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(int16_t(N->getZExtValue()), MVT::i64);

  }
  case 3: {  // LL16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = N->getZExtValue() & 0x000000000000FFFFULL;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 4: {  // LH16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = (N->getZExtValue() & 0x00000000FFFF0000ULL) >> 16;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 5: {  // HL16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = (N->getZExtValue() & 0x0000FFFF00000000ULL) >> 32;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 6: {  // HH16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = (N->getZExtValue() & 0xFFFF000000000000ULL) >> 48;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 7: {  // LF32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = N->getZExtValue() & 0x00000000FFFFFFFFULL;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 8: {  // HF32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = N->getZExtValue() >> 32;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 9: {  // UIMM32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(uint32_t(N->getZExtValue()), MVT::i64);

  }
  case 10: {  // SIMM32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(int32_t(N->getZExtValue()), MVT::i64);

  }
  case 11: {  // UIMM16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(uint16_t(N->getZExtValue()), MVT::i64);

  }
  case 12: {  // NEGIMM32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(uint32_t(-N->getZExtValue()), MVT::i64);

  }
  }
}

