/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the Mips target                                *|
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
/*0*/     OPC_SwitchOpcode /*125 cases */, 54|128,11/*1462*/,  TARGET_VAL(ISD::LOAD),// ->1467
/*5*/       OPC_RecordMemRef,
/*6*/       OPC_RecordNode,   // #0 = 'ld' chained node
/*7*/       OPC_Scope, 123, /*->132*/ // 5 children in Scope
/*9*/         OPC_RecordChild1, // #1 = $a
/*10*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*12*/        OPC_CheckType, MVT::i32,
/*14*/        OPC_Scope, 19, /*->35*/ // 6 children in Scope
/*16*/          OPC_CheckPredicate, 1, // Predicate_zextload
/*18*/          OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*20*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*22*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*25*/          OPC_EmitMergeInputChains1_0,
/*26*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 53
                // Dst: (LBu:i32 addrRegImm:i32:$a)
/*35*/        /*Scope*/ 19, /*->55*/
/*36*/          OPC_CheckPredicate, 3, // Predicate_sextload
/*38*/          OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*40*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*42*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*45*/          OPC_EmitMergeInputChains1_0,
/*46*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LH), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 53
                // Dst: (LH:i32 addrRegImm:i32:$a)
/*55*/        /*Scope*/ 17, /*->73*/
/*56*/          OPC_CheckPredicate, 5, // Predicate_load
/*58*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*60*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*63*/          OPC_EmitMergeInputChains1_0,
/*64*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                // Dst: (LW:i32 addrRegImm:i32:$a)
/*73*/        /*Scope*/ 19, /*->93*/
/*74*/          OPC_CheckPredicate, 1, // Predicate_zextload
/*76*/          OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*78*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*80*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*83*/          OPC_EmitMergeInputChains1_0,
/*84*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 53
                // Dst: (LBu_P8:i32 addrRegImm:i64:$a)
/*93*/        /*Scope*/ 19, /*->113*/
/*94*/          OPC_CheckPredicate, 3, // Predicate_sextload
/*96*/          OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*98*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*100*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*103*/         OPC_EmitMergeInputChains1_0,
/*104*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LH_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 53
                // Dst: (LH_P8:i32 addrRegImm:i64:$a)
/*113*/       /*Scope*/ 17, /*->131*/
/*114*/         OPC_CheckPredicate, 5, // Predicate_load
/*116*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*118*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*121*/         OPC_EmitMergeInputChains1_0,
/*122*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                // Dst: (LW_P8:i32 addrRegImm:i64:$a)
/*131*/       0, /*End of Scope*/
/*132*/     /*Scope*/ 65, /*->198*/
/*133*/       OPC_MoveChild, 1,
/*135*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*138*/       OPC_RecordChild0, // #1 = $base
/*139*/       OPC_RecordChild1, // #2 = $index
/*140*/       OPC_CheckType, MVT::i32,
/*142*/       OPC_MoveParent,
/*143*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*145*/       OPC_CheckType, MVT::i32,
/*147*/       OPC_Scope, 16, /*->165*/ // 3 children in Scope
/*149*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*151*/         OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*153*/         OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*155*/         OPC_EmitMergeInputChains1_0,
/*156*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LBUX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (ld:i32 (add:i32 i32:i32:$base, i32:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 27
                // Dst: (LBUX:i32 i32:i32:$base, i32:i32:$index)
/*165*/       /*Scope*/ 16, /*->182*/
/*166*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*168*/         OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*170*/         OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*172*/         OPC_EmitMergeInputChains1_0,
/*173*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LHX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (ld:i32 (add:i32 i32:i32:$base, i32:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 27
                // Dst: (LHX:i32 i32:i32:$base, i32:i32:$index)
/*182*/       /*Scope*/ 14, /*->197*/
/*183*/         OPC_CheckPredicate, 5, // Predicate_load
/*185*/         OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*187*/         OPC_EmitMergeInputChains1_0,
/*188*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LWX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (ld:i32 (add:i32 i32:i32:$base, i32:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                // Dst: (LWX:i32 i32:i32:$base, i32:i32:$index)
/*197*/       0, /*End of Scope*/
/*198*/     /*Scope*/ 115|128,7/*1011*/, /*->1211*/
/*200*/       OPC_RecordChild1, // #1 = $addr
/*201*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*203*/       OPC_Scope, 22, /*->227*/ // 21 children in Scope
/*205*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*207*/         OPC_CheckPredicate, 6, // Predicate_sextloadi8
/*209*/         OPC_CheckType, MVT::i32,
/*211*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*213*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$addr #2 #3 #4
/*216*/         OPC_EmitMergeInputChains1_0,
/*217*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LbRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                // Dst: (LbRxRyOffMemX16:i32 addr16:i32:$addr)
/*227*/       /*Scope*/ 22, /*->250*/
/*228*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*230*/         OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*232*/         OPC_CheckType, MVT::i32,
/*234*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*236*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$addr #2 #3 #4
/*239*/         OPC_EmitMergeInputChains1_0,
/*240*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LbuRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                // Dst: (LbuRxRyOffMemX16:i32 addr16:i32:$addr)
/*250*/       /*Scope*/ 22, /*->273*/
/*251*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*253*/         OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*255*/         OPC_CheckType, MVT::i32,
/*257*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*259*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$addr #2 #3 #4
/*262*/         OPC_EmitMergeInputChains1_0,
/*263*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LhRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                // Dst: (LhRxRyOffMemX16:i32 addr16:i32:$addr)
/*273*/       /*Scope*/ 22, /*->296*/
/*274*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*276*/         OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*278*/         OPC_CheckType, MVT::i32,
/*280*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*282*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$addr #2 #3 #4
/*285*/         OPC_EmitMergeInputChains1_0,
/*286*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LhuRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                // Dst: (LhuRxRyOffMemX16:i32 addr16:i32:$addr)
/*296*/       /*Scope*/ 20, /*->317*/
/*297*/         OPC_CheckPredicate, 5, // Predicate_load
/*299*/         OPC_CheckType, MVT::i32,
/*301*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*303*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$addr #2 #3 #4
/*306*/         OPC_EmitMergeInputChains1_0,
/*307*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LwRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                // Dst: (LwRxRyOffMemX16:i32 addr16:i32:$addr)
/*317*/       /*Scope*/ 44, /*->362*/
/*318*/         OPC_CheckPredicate, 8, // Predicate_extload
/*320*/         OPC_CheckType, MVT::i32,
/*322*/         OPC_Scope, 18, /*->342*/ // 2 children in Scope
/*324*/           OPC_CheckPredicate, 9, // Predicate_extloadi8
/*326*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*328*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$src #2 #3 #4
/*331*/           OPC_EmitMergeInputChains1_0,
/*332*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LbuRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 addr16:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 16
                  // Dst: (LbuRxRyOffMemX16:i32 addr16:i32:$src)
/*342*/         /*Scope*/ 18, /*->361*/
/*343*/           OPC_CheckPredicate, 10, // Predicate_extloadi16
/*345*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*347*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$src #2 #3 #4
/*350*/           OPC_EmitMergeInputChains1_0,
/*351*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LhuRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 addr16:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                  // Dst: (LhuRxRyOffMemX16:i32 addr16:i32:$src)
/*361*/         0, /*End of Scope*/
/*362*/       /*Scope*/ 40, /*->403*/
/*363*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*365*/         OPC_CheckPredicate, 6, // Predicate_sextloadi8
/*367*/         OPC_CheckType, MVT::i32,
/*369*/         OPC_Scope, 15, /*->386*/ // 2 children in Scope
/*371*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*373*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*376*/           OPC_EmitMergeInputChains1_0,
/*377*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB:i32 addr:i32:$addr)
/*386*/         /*Scope*/ 15, /*->402*/
/*387*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*389*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*392*/           OPC_EmitMergeInputChains1_0,
/*393*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB_P8:i32 addr:i64:$addr)
/*402*/         0, /*End of Scope*/
/*403*/       /*Scope*/ 40, /*->444*/
/*404*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*406*/         OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*408*/         OPC_CheckType, MVT::i32,
/*410*/         OPC_Scope, 15, /*->427*/ // 2 children in Scope
/*412*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*414*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*417*/           OPC_EmitMergeInputChains1_0,
/*418*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu:i32 addrDefault:i32:$addr)
/*427*/         /*Scope*/ 15, /*->443*/
/*428*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*430*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*433*/           OPC_EmitMergeInputChains1_0,
/*434*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu_P8:i32 addrDefault:i64:$addr)
/*443*/         0, /*End of Scope*/
/*444*/       /*Scope*/ 40, /*->485*/
/*445*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*447*/         OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*449*/         OPC_CheckType, MVT::i32,
/*451*/         OPC_Scope, 15, /*->468*/ // 2 children in Scope
/*453*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*455*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*458*/           OPC_EmitMergeInputChains1_0,
/*459*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LH:i32 addrDefault:i32:$addr)
/*468*/         /*Scope*/ 15, /*->484*/
/*469*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*471*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*474*/           OPC_EmitMergeInputChains1_0,
/*475*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LH_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LH_P8:i32 addrDefault:i64:$addr)
/*484*/         0, /*End of Scope*/
/*485*/       /*Scope*/ 40, /*->526*/
/*486*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*488*/         OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*490*/         OPC_CheckType, MVT::i32,
/*492*/         OPC_Scope, 15, /*->509*/ // 2 children in Scope
/*494*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*496*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*499*/           OPC_EmitMergeInputChains1_0,
/*500*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHu:i32 addr:i32:$addr)
/*509*/         /*Scope*/ 15, /*->525*/
/*510*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*512*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*515*/           OPC_EmitMergeInputChains1_0,
/*516*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHu_P8:i32 addr:i64:$addr)
/*525*/         0, /*End of Scope*/
/*526*/       /*Scope*/ 38, /*->565*/
/*527*/         OPC_CheckPredicate, 5, // Predicate_load
/*529*/         OPC_CheckType, MVT::i32,
/*531*/         OPC_Scope, 15, /*->548*/ // 2 children in Scope
/*533*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*535*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*538*/           OPC_EmitMergeInputChains1_0,
/*539*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LW:i32 addrDefault:i32:$addr)
/*548*/         /*Scope*/ 15, /*->564*/
/*549*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*551*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*554*/           OPC_EmitMergeInputChains1_0,
/*555*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LW_P8:i32 addrDefault:i64:$addr)
/*564*/         0, /*End of Scope*/
/*565*/       /*Scope*/ 114, /*->680*/
/*566*/         OPC_CheckPredicate, 8, // Predicate_extload
/*568*/         OPC_CheckType, MVT::i32,
/*570*/         OPC_Scope, 17, /*->589*/ // 6 children in Scope
/*572*/           OPC_CheckPredicate, 11, // Predicate_extloadi1
/*574*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*576*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*579*/           OPC_EmitMergeInputChains1_0,
/*580*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBu:i32 addr:i32:$src)
/*589*/         /*Scope*/ 17, /*->607*/
/*590*/           OPC_CheckPredicate, 9, // Predicate_extloadi8
/*592*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*594*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*597*/           OPC_EmitMergeInputChains1_0,
/*598*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBu:i32 addr:i32:$src)
/*607*/         /*Scope*/ 17, /*->625*/
/*608*/           OPC_CheckPredicate, 10, // Predicate_extloadi16
/*610*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*612*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*615*/           OPC_EmitMergeInputChains1_0,
/*616*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHu:i32 addr:i32:$src)
/*625*/         /*Scope*/ 17, /*->643*/
/*626*/           OPC_CheckPredicate, 11, // Predicate_extloadi1
/*628*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*630*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*633*/           OPC_EmitMergeInputChains1_0,
/*634*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBu_P8:i32 addr:i64:$src)
/*643*/         /*Scope*/ 17, /*->661*/
/*644*/           OPC_CheckPredicate, 9, // Predicate_extloadi8
/*646*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*648*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*651*/           OPC_EmitMergeInputChains1_0,
/*652*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBu_P8:i32 addr:i64:$src)
/*661*/         /*Scope*/ 17, /*->679*/
/*662*/           OPC_CheckPredicate, 10, // Predicate_extloadi16
/*664*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*666*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*669*/           OPC_EmitMergeInputChains1_0,
/*670*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHu_P8:i32 addr:i64:$src)
/*679*/         0, /*End of Scope*/
/*680*/       /*Scope*/ 40, /*->721*/
/*681*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*683*/         OPC_CheckPredicate, 6, // Predicate_sextloadi8
/*685*/         OPC_CheckType, MVT::i64,
/*687*/         OPC_Scope, 15, /*->704*/ // 2 children in Scope
/*689*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*691*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*694*/           OPC_EmitMergeInputChains1_0,
/*695*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB64:i64 addr:i32:$addr)
/*704*/         /*Scope*/ 15, /*->720*/
/*705*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*707*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*710*/           OPC_EmitMergeInputChains1_0,
/*711*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB64_P8:i64 addr:i64:$addr)
/*720*/         0, /*End of Scope*/
/*721*/       /*Scope*/ 40, /*->762*/
/*722*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*724*/         OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*726*/         OPC_CheckType, MVT::i64,
/*728*/         OPC_Scope, 15, /*->745*/ // 2 children in Scope
/*730*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*732*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*735*/           OPC_EmitMergeInputChains1_0,
/*736*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu64:i64 addr:i32:$addr)
/*745*/         /*Scope*/ 15, /*->761*/
/*746*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*748*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*751*/           OPC_EmitMergeInputChains1_0,
/*752*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu64_P8:i64 addr:i64:$addr)
/*761*/         0, /*End of Scope*/
/*762*/       /*Scope*/ 40, /*->803*/
/*763*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*765*/         OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*767*/         OPC_CheckType, MVT::i64,
/*769*/         OPC_Scope, 15, /*->786*/ // 2 children in Scope
/*771*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*773*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*776*/           OPC_EmitMergeInputChains1_0,
/*777*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LH64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LH64:i64 addr:i32:$addr)
/*786*/         /*Scope*/ 15, /*->802*/
/*787*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*789*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*792*/           OPC_EmitMergeInputChains1_0,
/*793*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LH64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LH64_P8:i64 addr:i64:$addr)
/*802*/         0, /*End of Scope*/
/*803*/       /*Scope*/ 40, /*->844*/
/*804*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*806*/         OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*808*/         OPC_CheckType, MVT::i64,
/*810*/         OPC_Scope, 15, /*->827*/ // 2 children in Scope
/*812*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*814*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*817*/           OPC_EmitMergeInputChains1_0,
/*818*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHu64:i64 addr:i32:$addr)
/*827*/         /*Scope*/ 15, /*->843*/
/*828*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*830*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*833*/           OPC_EmitMergeInputChains1_0,
/*834*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHu64_P8:i64 addr:i64:$addr)
/*843*/         0, /*End of Scope*/
/*844*/       /*Scope*/ 40, /*->885*/
/*845*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*847*/         OPC_CheckPredicate, 12, // Predicate_sextloadi32
/*849*/         OPC_CheckType, MVT::i64,
/*851*/         OPC_Scope, 15, /*->868*/ // 2 children in Scope
/*853*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*855*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*858*/           OPC_EmitMergeInputChains1_0,
/*859*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LW64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                  // Dst: (LW64:i64 addr:i32:$addr)
/*868*/         /*Scope*/ 15, /*->884*/
/*869*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*871*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*874*/           OPC_EmitMergeInputChains1_0,
/*875*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LW64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                  // Dst: (LW64_P8:i64 addr:i64:$addr)
/*884*/         0, /*End of Scope*/
/*885*/       /*Scope*/ 40, /*->926*/
/*886*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*888*/         OPC_CheckPredicate, 13, // Predicate_zextloadi32
/*890*/         OPC_CheckType, MVT::i64,
/*892*/         OPC_Scope, 15, /*->909*/ // 2 children in Scope
/*894*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*896*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*899*/           OPC_EmitMergeInputChains1_0,
/*900*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LWu64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                  // Dst: (LWu64:i64 addr:i32:$addr)
/*909*/         /*Scope*/ 15, /*->925*/
/*910*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*912*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*915*/           OPC_EmitMergeInputChains1_0,
/*916*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LWu64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                  // Dst: (LWu64_P8:i64 addr:i64:$addr)
/*925*/         0, /*End of Scope*/
/*926*/       /*Scope*/ 38, /*->965*/
/*927*/         OPC_CheckPredicate, 5, // Predicate_load
/*929*/         OPC_CheckType, MVT::i64,
/*931*/         OPC_Scope, 15, /*->948*/ // 2 children in Scope
/*933*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*935*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*938*/           OPC_EmitMergeInputChains1_0,
/*939*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LD), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LD:i64 addr:i32:$addr)
/*948*/         /*Scope*/ 15, /*->964*/
/*949*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*951*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*954*/           OPC_EmitMergeInputChains1_0,
/*955*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LD_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LD_P8:i64 addr:i64:$addr)
/*964*/         0, /*End of Scope*/
/*965*/       /*Scope*/ 22|128,1/*150*/, /*->1117*/
/*967*/         OPC_CheckPredicate, 8, // Predicate_extload
/*969*/         OPC_CheckType, MVT::i64,
/*971*/         OPC_Scope, 17, /*->990*/ // 8 children in Scope
/*973*/           OPC_CheckPredicate, 11, // Predicate_extloadi1
/*975*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*977*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*980*/           OPC_EmitMergeInputChains1_0,
/*981*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LB64:i64 addr:i32:$src)
/*990*/         /*Scope*/ 17, /*->1008*/
/*991*/           OPC_CheckPredicate, 9, // Predicate_extloadi8
/*993*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*995*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*998*/           OPC_EmitMergeInputChains1_0,
/*999*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LB64:i64 addr:i32:$src)
/*1008*/        /*Scope*/ 17, /*->1026*/
/*1009*/          OPC_CheckPredicate, 10, // Predicate_extloadi16
/*1011*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1013*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1016*/          OPC_EmitMergeInputChains1_0,
/*1017*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LH64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LH64:i64 addr:i32:$src)
/*1026*/        /*Scope*/ 17, /*->1044*/
/*1027*/          OPC_CheckPredicate, 14, // Predicate_extloadi32
/*1029*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1031*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1034*/          OPC_EmitMergeInputChains1_0,
/*1035*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LW64:i64 addr:i32:$src)
/*1044*/        /*Scope*/ 17, /*->1062*/
/*1045*/          OPC_CheckPredicate, 11, // Predicate_extloadi1
/*1047*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1049*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1052*/          OPC_EmitMergeInputChains1_0,
/*1053*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LB64_P8:i64 addr:i64:$src)
/*1062*/        /*Scope*/ 17, /*->1080*/
/*1063*/          OPC_CheckPredicate, 9, // Predicate_extloadi8
/*1065*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1067*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1070*/          OPC_EmitMergeInputChains1_0,
/*1071*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LB64_P8:i64 addr:i64:$src)
/*1080*/        /*Scope*/ 17, /*->1098*/
/*1081*/          OPC_CheckPredicate, 10, // Predicate_extloadi16
/*1083*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1085*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1088*/          OPC_EmitMergeInputChains1_0,
/*1089*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LH64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LH64_P8:i64 addr:i64:$src)
/*1098*/        /*Scope*/ 17, /*->1116*/
/*1099*/          OPC_CheckPredicate, 14, // Predicate_extloadi32
/*1101*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1103*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1106*/          OPC_EmitMergeInputChains1_0,
/*1107*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LW64_P8:i64 addr:i64:$src)
/*1116*/        0, /*End of Scope*/
/*1117*/      /*Scope*/ 92, /*->1210*/
/*1118*/        OPC_CheckPredicate, 5, // Predicate_load
/*1120*/        OPC_SwitchType /*2 cases */, 34,  MVT::f32,// ->1157
/*1123*/          OPC_Scope, 15, /*->1140*/ // 2 children in Scope
/*1125*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1127*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*1130*/            OPC_EmitMergeInputChains1_0,
/*1131*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LWC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                    // Dst: (LWC1_P8:f32 addrRegImm:i64:$a)
/*1140*/          /*Scope*/ 15, /*->1156*/
/*1141*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1143*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*1146*/            OPC_EmitMergeInputChains1_0,
/*1147*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LWC1), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                    // Dst: (LWC1:f32 addrRegImm:i32:$a)
/*1156*/          0, /*End of Scope*/
                /*SwitchType*/ 50,  MVT::f64,// ->1209
/*1159*/          OPC_Scope, 15, /*->1176*/ // 3 children in Scope
/*1161*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1163*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*1166*/            OPC_EmitMergeInputChains1_0,
/*1167*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                    // Dst: (LDC164_P8:f64 addrRegImm:i64:$a)
/*1176*/          /*Scope*/ 15, /*->1192*/
/*1177*/            OPC_CheckPatternPredicate, 4, // (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1179*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*1182*/            OPC_EmitMergeInputChains1_0,
/*1183*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDC164), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                    // Dst: (LDC164:f64 addrRegImm:i32:$a)
/*1192*/          /*Scope*/ 15, /*->1208*/
/*1193*/            OPC_CheckPatternPredicate, 5, // (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1195*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*1198*/            OPC_EmitMergeInputChains1_0,
/*1199*/            OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoLDC1), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                    // Dst: (PseudoLDC1:f64 addrRegImm:i32:$a)
/*1208*/          0, /*End of Scope*/
                0, // EndSwitchType
/*1210*/      0, /*End of Scope*/
/*1211*/    /*Scope*/ 99, /*->1311*/
/*1212*/      OPC_MoveChild, 1,
/*1214*/      OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1217*/      OPC_RecordChild0, // #1 = $base
/*1218*/      OPC_RecordChild1, // #2 = $index
/*1219*/      OPC_SwitchType /*2 cases */, 51,  MVT::i32,// ->1273
/*1222*/        OPC_MoveParent,
/*1223*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1225*/        OPC_CheckPredicate, 5, // Predicate_load
/*1227*/        OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->1242
/*1230*/          OPC_CheckPatternPredicate, 6, // (Subtarget.hasFPIdx()) && (Subtarget.hasStandardEncoding())
/*1232*/          OPC_EmitMergeInputChains1_0,
/*1233*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWXC1), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:f32 (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                  // Dst: (LWXC1:f32 CPURegs:i32:$base, CPURegs:i32:$index)
                /*SwitchType*/ 28,  MVT::f64,// ->1272
/*1244*/          OPC_Scope, 12, /*->1258*/ // 2 children in Scope
/*1246*/            OPC_CheckPatternPredicate, 7, // (Subtarget.hasMips32r2()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1248*/            OPC_EmitMergeInputChains1_0,
/*1249*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDXC1), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:f64 (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                    // Dst: (LDXC1:f64 CPURegs:i32:$base, CPURegs:i32:$index)
/*1258*/          /*Scope*/ 12, /*->1271*/
/*1259*/            OPC_CheckPatternPredicate, 8, // (Subtarget.hasMips64()) && (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1261*/            OPC_EmitMergeInputChains1_0,
/*1262*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDXC164), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:f64 (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                    // Dst: (LDXC164:f64 CPURegs:i32:$base, CPURegs:i32:$index)
/*1271*/          0, /*End of Scope*/
                0, // EndSwitchType
              /*SwitchType*/ 35,  MVT::i64,// ->1310
/*1275*/        OPC_MoveParent,
/*1276*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1278*/        OPC_CheckPredicate, 5, // Predicate_load
/*1280*/        OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->1295
/*1283*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1285*/          OPC_EmitMergeInputChains1_0,
/*1286*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWXC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:f32 (add:i64 CPU64Regs:i64:$base, CPU64Regs:i64:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                  // Dst: (LWXC1_P8:f32 CPU64Regs:i64:$base, CPU64Regs:i64:$index)
                /*SwitchType*/ 12,  MVT::f64,// ->1309
/*1297*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1299*/          OPC_EmitMergeInputChains1_0,
/*1300*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LDXC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:f64 (add:i64 CPU64Regs:i64:$base, CPU64Regs:i64:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                  // Dst: (LDXC164_P8:f64 CPU64Regs:i64:$base, CPU64Regs:i64:$index)
                0, // EndSwitchType
              0, // EndSwitchType
/*1311*/    /*Scope*/ 25|128,1/*153*/, /*->1466*/
/*1313*/      OPC_RecordChild1, // #1 = $addr
/*1314*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1316*/      OPC_CheckPredicate, 5, // Predicate_load
/*1318*/      OPC_SwitchType /*4 cases */, 34,  MVT::f32,// ->1355
/*1321*/        OPC_Scope, 15, /*->1338*/ // 2 children in Scope
/*1323*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1325*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*1328*/          OPC_EmitMergeInputChains1_0,
/*1329*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LWC1_P8:f32 addrDefault:i64:$addr)
/*1338*/        /*Scope*/ 15, /*->1354*/
/*1339*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1341*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*1344*/          OPC_EmitMergeInputChains1_0,
/*1345*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWC1), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LWC1:f32 addrDefault:i32:$addr)
/*1354*/        0, /*End of Scope*/
              /*SwitchType*/ 50,  MVT::f64,// ->1407
/*1357*/        OPC_Scope, 15, /*->1374*/ // 3 children in Scope
/*1359*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1361*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*1364*/          OPC_EmitMergeInputChains1_0,
/*1365*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LDC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDC164_P8:f64 addrDefault:i64:$addr)
/*1374*/        /*Scope*/ 15, /*->1390*/
/*1375*/          OPC_CheckPatternPredicate, 4, // (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1377*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*1380*/          OPC_EmitMergeInputChains1_0,
/*1381*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LDC164), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDC164:f64 addrDefault:i32:$addr)
/*1390*/        /*Scope*/ 15, /*->1406*/
/*1391*/          OPC_CheckPatternPredicate, 5, // (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1393*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*1396*/          OPC_EmitMergeInputChains1_0,
/*1397*/          OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoLDC1), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (PseudoLDC1:f64 addrDefault:i32:$addr)
/*1406*/        0, /*End of Scope*/
              /*SwitchType*/ 27,  MVT::v2i16,// ->1436
/*1409*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*1411*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$a #2 #3
/*1414*/        OPC_EmitMergeInputChains1_0,
/*1415*/        OPC_EmitNode, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*1424*/        OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*1427*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 4, 5, 
                // Src: (ld:v2i16 addr:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:v2i16 (LW:i32 addr:i32:$a), DSPRegs:i32)
              /*SwitchType*/ 27,  MVT::v4i8,// ->1465
/*1438*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*1440*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$a #2 #3
/*1443*/        OPC_EmitMergeInputChains1_0,
/*1444*/        OPC_EmitNode, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*1453*/        OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*1456*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 4, 5, 
                // Src: (ld:v4i8 addr:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:v4i8 (LW:i32 addr:i32:$a), DSPRegs:i32)
              0, // EndSwitchType
/*1466*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 36|128,6/*804*/,  TARGET_VAL(ISD::STORE),// ->2275
/*1471*/    OPC_RecordMemRef,
/*1472*/    OPC_RecordNode,   // #0 = 'st' chained node
/*1473*/    OPC_Scope, 93|128,1/*221*/, /*->1697*/ // 3 children in Scope
/*1476*/      OPC_RecordChild1, // #1 = $v
/*1477*/      OPC_Scope, 92, /*->1571*/ // 2 children in Scope
/*1479*/        OPC_CheckChild1Type, MVT::f32,
/*1481*/        OPC_Scope, 39, /*->1522*/ // 2 children in Scope
/*1483*/          OPC_RecordChild2, // #2 = $a
/*1484*/          OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1486*/          OPC_CheckPredicate, 16, // Predicate_store
/*1488*/          OPC_Scope, 15, /*->1505*/ // 2 children in Scope
/*1490*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1492*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRegImm:$a #3 #4
/*1495*/            OPC_EmitMergeInputChains1_0,
/*1496*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SWC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st f32:f32:$v, addrRegImm:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 53
                    // Dst: (SWC1_P8 f32:f32:$v, addrRegImm:i64:$a)
/*1505*/          /*Scope*/ 15, /*->1521*/
/*1506*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1508*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRegImm:$a #3 #4
/*1511*/            OPC_EmitMergeInputChains1_0,
/*1512*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SWC1), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st f32:f32:$v, addrRegImm:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 53
                    // Dst: (SWC1 f32:f32:$v, addrRegImm:i32:$a)
/*1521*/          0, /*End of Scope*/
/*1522*/        /*Scope*/ 47, /*->1570*/
/*1523*/          OPC_MoveChild, 2,
/*1525*/          OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1528*/          OPC_RecordChild0, // #2 = $base
/*1529*/          OPC_RecordChild1, // #3 = $index
/*1530*/          OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->1550
/*1533*/            OPC_MoveParent,
/*1534*/            OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1536*/            OPC_CheckPredicate, 16, // Predicate_store
/*1538*/            OPC_CheckPatternPredicate, 6, // (Subtarget.hasFPIdx()) && (Subtarget.hasStandardEncoding())
/*1540*/            OPC_EmitMergeInputChains1_0,
/*1541*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SWXC1), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (st FGR32:f32:$fs, (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 27
                    // Dst: (SWXC1 FGR32:f32:$fs, CPURegs:i32:$base, CPURegs:i32:$index)
                  /*SwitchType*/ 17,  MVT::i64,// ->1569
/*1552*/            OPC_MoveParent,
/*1553*/            OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1555*/            OPC_CheckPredicate, 16, // Predicate_store
/*1557*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1559*/            OPC_EmitMergeInputChains1_0,
/*1560*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SWXC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (st FGR32:f32:$fs, (add:i64 CPU64Regs:i64:$base, CPU64Regs:i64:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 27
                    // Dst: (SWXC1_P8 FGR32:f32:$fs, CPU64Regs:i64:$base, CPU64Regs:i64:$index)
                  0, // EndSwitchType
/*1570*/        0, /*End of Scope*/
/*1571*/      /*Scope*/ 124, /*->1696*/
/*1572*/        OPC_CheckChild1Type, MVT::f64,
/*1574*/        OPC_Scope, 55, /*->1631*/ // 2 children in Scope
/*1576*/          OPC_RecordChild2, // #2 = $a
/*1577*/          OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1579*/          OPC_CheckPredicate, 16, // Predicate_store
/*1581*/          OPC_Scope, 15, /*->1598*/ // 3 children in Scope
/*1583*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1585*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRegImm:$a #3 #4
/*1588*/            OPC_EmitMergeInputChains1_0,
/*1589*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SDC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st f64:f64:$v, addrRegImm:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 53
                    // Dst: (SDC164_P8 f64:f64:$v, addrRegImm:i64:$a)
/*1598*/          /*Scope*/ 15, /*->1614*/
/*1599*/            OPC_CheckPatternPredicate, 4, // (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1601*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRegImm:$a #3 #4
/*1604*/            OPC_EmitMergeInputChains1_0,
/*1605*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SDC164), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st f64:f64:$v, addrRegImm:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 53
                    // Dst: (SDC164 f64:f64:$v, addrRegImm:i32:$a)
/*1614*/          /*Scope*/ 15, /*->1630*/
/*1615*/            OPC_CheckPatternPredicate, 5, // (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1617*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRegImm:$a #3 #4
/*1620*/            OPC_EmitMergeInputChains1_0,
/*1621*/            OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoSDC1), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st f64:f64:$v, addrRegImm:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 53
                    // Dst: (PseudoSDC1 f64:f64:$v, addrRegImm:i32:$a)
/*1630*/          0, /*End of Scope*/
/*1631*/        /*Scope*/ 63, /*->1695*/
/*1632*/          OPC_MoveChild, 2,
/*1634*/          OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1637*/          OPC_RecordChild0, // #2 = $base
/*1638*/          OPC_RecordChild1, // #3 = $index
/*1639*/          OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->1675
/*1642*/            OPC_MoveParent,
/*1643*/            OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1645*/            OPC_CheckPredicate, 16, // Predicate_store
/*1647*/            OPC_Scope, 12, /*->1661*/ // 2 children in Scope
/*1649*/              OPC_CheckPatternPredicate, 7, // (Subtarget.hasMips32r2()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1651*/              OPC_EmitMergeInputChains1_0,
/*1652*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SDXC1), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (st AFGR64:f64:$fs, (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 27
                      // Dst: (SDXC1 AFGR64:f64:$fs, CPURegs:i32:$base, CPURegs:i32:$index)
/*1661*/            /*Scope*/ 12, /*->1674*/
/*1662*/              OPC_CheckPatternPredicate, 8, // (Subtarget.hasMips64()) && (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1664*/              OPC_EmitMergeInputChains1_0,
/*1665*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SDXC164), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (st FGR64:f64:$fs, (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 27
                      // Dst: (SDXC164 FGR64:f64:$fs, CPURegs:i32:$base, CPURegs:i32:$index)
/*1674*/            0, /*End of Scope*/
                  /*SwitchType*/ 17,  MVT::i64,// ->1694
/*1677*/            OPC_MoveParent,
/*1678*/            OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1680*/            OPC_CheckPredicate, 16, // Predicate_store
/*1682*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1684*/            OPC_EmitMergeInputChains1_0,
/*1685*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SDXC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (st FGR64:f64:$fs, (add:i64 CPU64Regs:i64:$base, CPU64Regs:i64:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 27
                    // Dst: (SDXC164_P8 FGR64:f64:$fs, CPU64Regs:i64:$base, CPU64Regs:i64:$index)
                  0, // EndSwitchType
/*1695*/        0, /*End of Scope*/
/*1696*/      0, /*End of Scope*/
/*1697*/    /*Scope*/ 52, /*->1750*/
/*1698*/      OPC_MoveChild, 1,
/*1700*/      OPC_CheckInteger, 0, 
/*1702*/      OPC_CheckType, MVT::i32,
/*1704*/      OPC_MoveParent,
/*1705*/      OPC_RecordChild2, // #1 = $dst
/*1706*/      OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1708*/      OPC_CheckPredicate, 16, // Predicate_store
/*1710*/      OPC_Scope, 18, /*->1730*/ // 2 children in Scope
/*1712*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1714*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$dst #2 #3
/*1717*/        OPC_EmitMergeInputChains1_0,
/*1718*/        OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*1721*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 4, 2, 3, 
                // Src: (st 0:i32, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                // Dst: (SW ZERO:i32, addr:i32:$dst)
/*1730*/      /*Scope*/ 18, /*->1749*/
/*1731*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1733*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$dst #2 #3
/*1736*/        OPC_EmitMergeInputChains1_0,
/*1737*/        OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*1740*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 4, 2, 3, 
                // Src: (st 0:i32, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                // Dst: (SW_P8 ZERO:i32, addr:i64:$dst)
/*1749*/      0, /*End of Scope*/
/*1750*/    /*Scope*/ 10|128,4/*522*/, /*->2274*/
/*1752*/      OPC_RecordChild1, // #1 = $r
/*1753*/      OPC_Scope, 57|128,1/*185*/, /*->1941*/ // 6 children in Scope
/*1756*/        OPC_CheckChild1Type, MVT::i32,
/*1758*/        OPC_RecordChild2, // #2 = $addr
/*1759*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1761*/        OPC_Scope, 42, /*->1805*/ // 4 children in Scope
/*1763*/          OPC_CheckPredicate, 17, // Predicate_truncstore
/*1765*/          OPC_Scope, 18, /*->1785*/ // 2 children in Scope
/*1767*/            OPC_CheckPredicate, 18, // Predicate_truncstorei8
/*1769*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*1771*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectAddr16:$addr #3 #4 #5
/*1774*/            OPC_EmitMergeInputChains1_0,
/*1775*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SbRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st CPU16Regs:i32:$r, addr16:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (SbRxRyOffMemX16 CPU16Regs:i32:$r, addr16:i32:$addr)
/*1785*/          /*Scope*/ 18, /*->1804*/
/*1786*/            OPC_CheckPredicate, 19, // Predicate_truncstorei16
/*1788*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*1790*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectAddr16:$addr #3 #4 #5
/*1793*/            OPC_EmitMergeInputChains1_0,
/*1794*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ShRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st CPU16Regs:i32:$r, addr16:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (ShRxRyOffMemX16 CPU16Regs:i32:$r, addr16:i32:$addr)
/*1804*/          0, /*End of Scope*/
/*1805*/        /*Scope*/ 18, /*->1824*/
/*1806*/          OPC_CheckPredicate, 16, // Predicate_store
/*1808*/          OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*1810*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectAddr16:$addr #3 #4 #5
/*1813*/          OPC_EmitMergeInputChains1_0,
/*1814*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SwRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st CPU16Regs:i32:$r, addr16:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (SwRxRyOffMemX16 CPU16Regs:i32:$r, addr16:i32:$addr)
/*1824*/        /*Scope*/ 78, /*->1903*/
/*1825*/          OPC_CheckPredicate, 17, // Predicate_truncstore
/*1827*/          OPC_Scope, 36, /*->1865*/ // 2 children in Scope
/*1829*/            OPC_CheckPredicate, 18, // Predicate_truncstorei8
/*1831*/            OPC_Scope, 15, /*->1848*/ // 2 children in Scope
/*1833*/              OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1835*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1838*/              OPC_EmitMergeInputChains1_0,
/*1839*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SB), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB CPURegs:i32:$rt, addr:i32:$addr)
/*1848*/            /*Scope*/ 15, /*->1864*/
/*1849*/              OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1851*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1854*/              OPC_EmitMergeInputChains1_0,
/*1855*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SB_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*1864*/            0, /*End of Scope*/
/*1865*/          /*Scope*/ 36, /*->1902*/
/*1866*/            OPC_CheckPredicate, 19, // Predicate_truncstorei16
/*1868*/            OPC_Scope, 15, /*->1885*/ // 2 children in Scope
/*1870*/              OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1872*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1875*/              OPC_EmitMergeInputChains1_0,
/*1876*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SH), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (SH CPURegs:i32:$rt, addr:i32:$addr)
/*1885*/            /*Scope*/ 15, /*->1901*/
/*1886*/              OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1888*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1891*/              OPC_EmitMergeInputChains1_0,
/*1892*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SH_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (SH_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*1901*/            0, /*End of Scope*/
/*1902*/          0, /*End of Scope*/
/*1903*/        /*Scope*/ 36, /*->1940*/
/*1904*/          OPC_CheckPredicate, 16, // Predicate_store
/*1906*/          OPC_Scope, 15, /*->1923*/ // 2 children in Scope
/*1908*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1910*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1913*/            OPC_EmitMergeInputChains1_0,
/*1914*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SW CPURegs:i32:$rt, addr:i32:$addr)
/*1923*/          /*Scope*/ 15, /*->1939*/
/*1924*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1926*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1929*/            OPC_EmitMergeInputChains1_0,
/*1930*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SW_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*1939*/          0, /*End of Scope*/
/*1940*/        0, /*End of Scope*/
/*1941*/      /*Scope*/ 41, /*->1983*/
/*1942*/        OPC_CheckChild1Type, MVT::f32,
/*1944*/        OPC_RecordChild2, // #2 = $addr
/*1945*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1947*/        OPC_CheckPredicate, 16, // Predicate_store
/*1949*/        OPC_Scope, 15, /*->1966*/ // 2 children in Scope
/*1951*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1953*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrDefault:$addr #3 #4
/*1956*/          OPC_EmitMergeInputChains1_0,
/*1957*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SWC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st FGR32:f32:$rt, addrDefault:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SWC1_P8 FGR32:f32:$rt, addrDefault:i64:$addr)
/*1966*/        /*Scope*/ 15, /*->1982*/
/*1967*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1969*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrDefault:$addr #3 #4
/*1972*/          OPC_EmitMergeInputChains1_0,
/*1973*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SWC1), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st FGR32:f32:$rt, addrDefault:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SWC1 FGR32:f32:$rt, addrDefault:i32:$addr)
/*1982*/        0, /*End of Scope*/
/*1983*/      /*Scope*/ 57, /*->2041*/
/*1984*/        OPC_CheckChild1Type, MVT::f64,
/*1986*/        OPC_RecordChild2, // #2 = $addr
/*1987*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1989*/        OPC_CheckPredicate, 16, // Predicate_store
/*1991*/        OPC_Scope, 15, /*->2008*/ // 3 children in Scope
/*1993*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1995*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrDefault:$addr #3 #4
/*1998*/          OPC_EmitMergeInputChains1_0,
/*1999*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SDC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st FGR64:f64:$rt, addrDefault:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SDC164_P8 FGR64:f64:$rt, addrDefault:i64:$addr)
/*2008*/        /*Scope*/ 15, /*->2024*/
/*2009*/          OPC_CheckPatternPredicate, 4, // (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*2011*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrDefault:$addr #3 #4
/*2014*/          OPC_EmitMergeInputChains1_0,
/*2015*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SDC164), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st FGR64:f64:$rt, addrDefault:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SDC164 FGR64:f64:$rt, addrDefault:i32:$addr)
/*2024*/        /*Scope*/ 15, /*->2040*/
/*2025*/          OPC_CheckPatternPredicate, 5, // (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*2027*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrDefault:$addr #3 #4
/*2030*/          OPC_EmitMergeInputChains1_0,
/*2031*/          OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoSDC1), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st AFGR64:f64:$rt, addrDefault:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (PseudoSDC1 AFGR64:f64:$rt, addrDefault:i32:$addr)
/*2040*/        0, /*End of Scope*/
/*2041*/      /*Scope*/ 32|128,1/*160*/, /*->2203*/
/*2043*/        OPC_CheckChild1Type, MVT::i64,
/*2045*/        OPC_RecordChild2, // #2 = $addr
/*2046*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*2048*/        OPC_Scope, 115, /*->2165*/ // 2 children in Scope
/*2050*/          OPC_CheckPredicate, 17, // Predicate_truncstore
/*2052*/          OPC_Scope, 36, /*->2090*/ // 3 children in Scope
/*2054*/            OPC_CheckPredicate, 18, // Predicate_truncstorei8
/*2056*/            OPC_Scope, 15, /*->2073*/ // 2 children in Scope
/*2058*/              OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2060*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2063*/              OPC_EmitMergeInputChains1_0,
/*2064*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SB64), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*2073*/            /*Scope*/ 15, /*->2089*/
/*2074*/              OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2076*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2079*/              OPC_EmitMergeInputChains1_0,
/*2080*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*2089*/            0, /*End of Scope*/
/*2090*/          /*Scope*/ 36, /*->2127*/
/*2091*/            OPC_CheckPredicate, 19, // Predicate_truncstorei16
/*2093*/            OPC_Scope, 15, /*->2110*/ // 2 children in Scope
/*2095*/              OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2097*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2100*/              OPC_EmitMergeInputChains1_0,
/*2101*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SH64), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (SH64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*2110*/            /*Scope*/ 15, /*->2126*/
/*2111*/              OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2113*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2116*/              OPC_EmitMergeInputChains1_0,
/*2117*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SH64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (SH64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*2126*/            0, /*End of Scope*/
/*2127*/          /*Scope*/ 36, /*->2164*/
/*2128*/            OPC_CheckPredicate, 20, // Predicate_truncstorei32
/*2130*/            OPC_Scope, 15, /*->2147*/ // 2 children in Scope
/*2132*/              OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2134*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2137*/              OPC_EmitMergeInputChains1_0,
/*2138*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SW64), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                      // Dst: (SW64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*2147*/            /*Scope*/ 15, /*->2163*/
/*2148*/              OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2150*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2153*/              OPC_EmitMergeInputChains1_0,
/*2154*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SW64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                      // Dst: (SW64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*2163*/            0, /*End of Scope*/
/*2164*/          0, /*End of Scope*/
/*2165*/        /*Scope*/ 36, /*->2202*/
/*2166*/          OPC_CheckPredicate, 16, // Predicate_store
/*2168*/          OPC_Scope, 15, /*->2185*/ // 2 children in Scope
/*2170*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2172*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2175*/            OPC_EmitMergeInputChains1_0,
/*2176*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SD), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SD CPU64Regs:i64:$rt, addr:i32:$addr)
/*2185*/          /*Scope*/ 15, /*->2201*/
/*2186*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2188*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2191*/            OPC_EmitMergeInputChains1_0,
/*2192*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SD_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SD_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*2201*/          0, /*End of Scope*/
/*2202*/        0, /*End of Scope*/
/*2203*/      /*Scope*/ 34, /*->2238*/
/*2204*/        OPC_CheckChild1Type, MVT::v2i16,
/*2206*/        OPC_RecordChild2, // #2 = $a
/*2207*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*2209*/        OPC_CheckPredicate, 16, // Predicate_store
/*2211*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2213*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$a #3 #4
/*2216*/        OPC_EmitMergeInputChains1_0,
/*2217*/        OPC_EmitInteger, MVT::i32, Mips::CPURegsRegClassID,
/*2220*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*2229*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 6, 3, 4, 
                // Src: (st DSPRegs:v2i16:$val, addr:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (SW (COPY_TO_REGCLASS:i32 DSPRegs:v2i16:$val, CPURegs:i32), addr:i32:$a)
/*2238*/      /*Scope*/ 34, /*->2273*/
/*2239*/        OPC_CheckChild1Type, MVT::v4i8,
/*2241*/        OPC_RecordChild2, // #2 = $a
/*2242*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*2244*/        OPC_CheckPredicate, 16, // Predicate_store
/*2246*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2248*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$a #3 #4
/*2251*/        OPC_EmitMergeInputChains1_0,
/*2252*/        OPC_EmitInteger, MVT::i32, Mips::CPURegsRegClassID,
/*2255*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*2264*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 6, 3, 4, 
                // Src: (st DSPRegs:v4i8:$val, addr:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (SW (COPY_TO_REGCLASS:i32 DSPRegs:v4i8:$val, CPURegs:i32), addr:i32:$a)
/*2273*/      0, /*End of Scope*/
/*2274*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 57,  TARGET_VAL(MipsISD::ExtractLOHI),// ->2335
/*2278*/    OPC_RecordChild0, // #0 = $ac
/*2279*/    OPC_RecordChild1, // #1 = $lohi_idx
/*2280*/    OPC_MoveChild, 1,
/*2282*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2285*/    OPC_MoveParent,
/*2286*/    OPC_SwitchType /*2 cases */, 30,  MVT::i32,// ->2319
/*2289*/      OPC_Scope, 13, /*->2304*/ // 2 children in Scope
/*2291*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2293*/        OPC_EmitConvertToTarget, 1,
/*2295*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (ExtractLOHI:i32 ACRegsDSP:Untyped:$ac, (imm:i32):$lohi_idx) - Complexity = 26
                // Dst: (EXTRACT_SUBREG:i32 ACRegsDSP:Untyped:$ac, (imm:i32):$lohi_idx)
/*2304*/      /*Scope*/ 13, /*->2318*/
/*2305*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2307*/        OPC_EmitConvertToTarget, 1,
/*2309*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (ExtractLOHI:i32 ACRegs:Untyped:$ac, (imm:i32):$lohi_idx) - Complexity = 6
                // Dst: (EXTRACT_SUBREG:i32 ACRegs:Untyped:$ac, (imm:i32):$lohi_idx)
/*2318*/      0, /*End of Scope*/
            /*SwitchType*/ 13,  MVT::i64,// ->2334
/*2321*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2323*/      OPC_EmitConvertToTarget, 1,
/*2325*/      OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
              // Src: (ExtractLOHI:i64 ACRegs128:Untyped:$ac, (imm:i32):$lohi_idx) - Complexity = 6
              // Dst: (EXTRACT_SUBREG:i64 ACRegs128:Untyped:$ac, (imm:i32):$lohi_idx)
            0, // EndSwitchType
          /*SwitchOpcode*/ 48,  TARGET_VAL(MipsISD::Mult),// ->2386
/*2338*/    OPC_RecordChild0, // #0 = $rs
/*2339*/    OPC_Scope, 29, /*->2370*/ // 2 children in Scope
/*2341*/      OPC_CheckChild0Type, MVT::i32,
/*2343*/      OPC_RecordChild1, // #1 = $rt
/*2344*/      OPC_Scope, 11, /*->2357*/ // 2 children in Scope
/*2346*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2348*/        OPC_MorphNodeTo, TARGET_VAL(Mips::MULT_DSP), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
                // Src: (MipsMult:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 23
                // Dst: (MULT_DSP:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt)
/*2357*/      /*Scope*/ 11, /*->2369*/
/*2358*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2360*/        OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMULT), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
                // Src: (MipsMult:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                // Dst: (PseudoMULT:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*2369*/      0, /*End of Scope*/
/*2370*/    /*Scope*/ 14, /*->2385*/
/*2371*/      OPC_CheckChild0Type, MVT::i64,
/*2373*/      OPC_RecordChild1, // #1 = $rt
/*2374*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2376*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoDMULT), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsMult:Untyped CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
              // Dst: (PseudoDMULT:Untyped CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*2385*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 48,  TARGET_VAL(MipsISD::Multu),// ->2437
/*2389*/    OPC_RecordChild0, // #0 = $rs
/*2390*/    OPC_Scope, 29, /*->2421*/ // 2 children in Scope
/*2392*/      OPC_CheckChild0Type, MVT::i32,
/*2394*/      OPC_RecordChild1, // #1 = $rt
/*2395*/      OPC_Scope, 11, /*->2408*/ // 2 children in Scope
/*2397*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2399*/        OPC_MorphNodeTo, TARGET_VAL(Mips::MULTU_DSP), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
                // Src: (MipsMultu:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 23
                // Dst: (MULTU_DSP:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt)
/*2408*/      /*Scope*/ 11, /*->2420*/
/*2409*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2411*/        OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMULTu), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
                // Src: (MipsMultu:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                // Dst: (PseudoMULTu:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*2420*/      0, /*End of Scope*/
/*2421*/    /*Scope*/ 14, /*->2436*/
/*2422*/      OPC_CheckChild0Type, MVT::i64,
/*2424*/      OPC_RecordChild1, // #1 = $rt
/*2425*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2427*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoDMULTu), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsMultu:Untyped CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
              // Dst: (PseudoDMULTu:Untyped CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*2436*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 31,  TARGET_VAL(MipsISD::MAdd),// ->2471
/*2440*/    OPC_RecordChild0, // #0 = $rs
/*2441*/    OPC_RecordChild1, // #1 = $rt
/*2442*/    OPC_RecordChild2, // #2 = $acin
/*2443*/    OPC_Scope, 12, /*->2457*/ // 2 children in Scope
/*2445*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2447*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_DSP), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMAdd:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 23
              // Dst: (MADD_DSP:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
/*2457*/    /*Scope*/ 12, /*->2470*/
/*2458*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2460*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMADD), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMAdd:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, ACRegs:Untyped:$acin) - Complexity = 3
              // Dst: (PseudoMADD:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, ACRegs:Untyped:$acin)
/*2470*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 31,  TARGET_VAL(MipsISD::MAddu),// ->2505
/*2474*/    OPC_RecordChild0, // #0 = $rs
/*2475*/    OPC_RecordChild1, // #1 = $rt
/*2476*/    OPC_RecordChild2, // #2 = $acin
/*2477*/    OPC_Scope, 12, /*->2491*/ // 2 children in Scope
/*2479*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2481*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MADDU_DSP), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMAddu:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 23
              // Dst: (MADDU_DSP:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
/*2491*/    /*Scope*/ 12, /*->2504*/
/*2492*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2494*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMADDU), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMAddu:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, ACRegs:Untyped:$acin) - Complexity = 3
              // Dst: (PseudoMADDU:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, ACRegs:Untyped:$acin)
/*2504*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 31,  TARGET_VAL(MipsISD::MSub),// ->2539
/*2508*/    OPC_RecordChild0, // #0 = $rs
/*2509*/    OPC_RecordChild1, // #1 = $rt
/*2510*/    OPC_RecordChild2, // #2 = $acin
/*2511*/    OPC_Scope, 12, /*->2525*/ // 2 children in Scope
/*2513*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2515*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_DSP), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMSub:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 23
              // Dst: (MSUB_DSP:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
/*2525*/    /*Scope*/ 12, /*->2538*/
/*2526*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2528*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMSUB), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMSub:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, ACRegs:Untyped:$acin) - Complexity = 3
              // Dst: (PseudoMSUB:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, ACRegs:Untyped:$acin)
/*2538*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 31,  TARGET_VAL(MipsISD::MSubu),// ->2573
/*2542*/    OPC_RecordChild0, // #0 = $rs
/*2543*/    OPC_RecordChild1, // #1 = $rt
/*2544*/    OPC_RecordChild2, // #2 = $acin
/*2545*/    OPC_Scope, 12, /*->2559*/ // 2 children in Scope
/*2547*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2549*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MSUBU_DSP), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMSubu:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 23
              // Dst: (MSUBU_DSP:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
/*2559*/    /*Scope*/ 12, /*->2572*/
/*2560*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2562*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMSUBU), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMSubu:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, ACRegs:Untyped:$acin) - Complexity = 3
              // Dst: (PseudoMSUBU:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, ACRegs:Untyped:$acin)
/*2572*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 82,  TARGET_VAL(MipsISD::LWL),// ->2658
/*2576*/    OPC_RecordMemRef,
/*2577*/    OPC_RecordNode,   // #0 = 'MipsLWL' chained node
/*2578*/    OPC_RecordChild1, // #1 = $addr
/*2579*/    OPC_RecordChild2, // #2 = $src
/*2580*/    OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->2619
/*2583*/      OPC_Scope, 16, /*->2601*/ // 2 children in Scope
/*2585*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2587*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2590*/        OPC_EmitMergeInputChains1_0,
/*2591*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i32 addr:iPTR:$addr, CPURegs:i32:$src) - Complexity = 12
                // Dst: (LWL:i32 addr:i32:$addr, CPURegs:i32:$src)
/*2601*/      /*Scope*/ 16, /*->2618*/
/*2602*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2604*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2607*/        OPC_EmitMergeInputChains1_0,
/*2608*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i32 addr:iPTR:$addr, CPURegs:i32:$src) - Complexity = 12
                // Dst: (LWL_P8:i32 addr:i64:$addr, CPURegs:i32:$src)
/*2618*/      0, /*End of Scope*/
            /*SwitchType*/ 36,  MVT::i64,// ->2657
/*2621*/      OPC_Scope, 16, /*->2639*/ // 2 children in Scope
/*2623*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2625*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2628*/        OPC_EmitMergeInputChains1_0,
/*2629*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
                // Dst: (LWL64:i64 addr:i32:$addr, CPU64Regs:i64:$src)
/*2639*/      /*Scope*/ 16, /*->2656*/
/*2640*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2642*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2645*/        OPC_EmitMergeInputChains1_0,
/*2646*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
                // Dst: (LWL64_P8:i64 addr:i64:$addr, CPU64Regs:i64:$src)
/*2656*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 82,  TARGET_VAL(MipsISD::LWR),// ->2743
/*2661*/    OPC_RecordMemRef,
/*2662*/    OPC_RecordNode,   // #0 = 'MipsLWR' chained node
/*2663*/    OPC_RecordChild1, // #1 = $addr
/*2664*/    OPC_RecordChild2, // #2 = $src
/*2665*/    OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->2704
/*2668*/      OPC_Scope, 16, /*->2686*/ // 2 children in Scope
/*2670*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2672*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2675*/        OPC_EmitMergeInputChains1_0,
/*2676*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i32 addr:iPTR:$addr, CPURegs:i32:$src) - Complexity = 12
                // Dst: (LWR:i32 addr:i32:$addr, CPURegs:i32:$src)
/*2686*/      /*Scope*/ 16, /*->2703*/
/*2687*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2689*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2692*/        OPC_EmitMergeInputChains1_0,
/*2693*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i32 addr:iPTR:$addr, CPURegs:i32:$src) - Complexity = 12
                // Dst: (LWR_P8:i32 addr:i64:$addr, CPURegs:i32:$src)
/*2703*/      0, /*End of Scope*/
            /*SwitchType*/ 36,  MVT::i64,// ->2742
/*2706*/      OPC_Scope, 16, /*->2724*/ // 2 children in Scope
/*2708*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2710*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2713*/        OPC_EmitMergeInputChains1_0,
/*2714*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
                // Dst: (LWR64:i64 addr:i32:$addr, CPU64Regs:i64:$src)
/*2724*/      /*Scope*/ 16, /*->2741*/
/*2725*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2727*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2730*/        OPC_EmitMergeInputChains1_0,
/*2731*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
                // Dst: (LWR64_P8:i64 addr:i64:$addr, CPU64Regs:i64:$src)
/*2741*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 81,  TARGET_VAL(MipsISD::SWL),// ->2827
/*2746*/    OPC_RecordMemRef,
/*2747*/    OPC_RecordNode,   // #0 = 'MipsSWL' chained node
/*2748*/    OPC_RecordChild1, // #1 = $rt
/*2749*/    OPC_Scope, 37, /*->2788*/ // 2 children in Scope
/*2751*/      OPC_CheckChild1Type, MVT::i32,
/*2753*/      OPC_RecordChild2, // #2 = $addr
/*2754*/      OPC_Scope, 15, /*->2771*/ // 2 children in Scope
/*2756*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2758*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2761*/        OPC_EmitMergeInputChains1_0,
/*2762*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL CPURegs:i32:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWL CPURegs:i32:$rt, addr:i32:$addr)
/*2771*/      /*Scope*/ 15, /*->2787*/
/*2772*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2774*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2777*/        OPC_EmitMergeInputChains1_0,
/*2778*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL CPURegs:i32:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWL_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*2787*/      0, /*End of Scope*/
/*2788*/    /*Scope*/ 37, /*->2826*/
/*2789*/      OPC_CheckChild1Type, MVT::i64,
/*2791*/      OPC_RecordChild2, // #2 = $addr
/*2792*/      OPC_Scope, 15, /*->2809*/ // 2 children in Scope
/*2794*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2796*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2799*/        OPC_EmitMergeInputChains1_0,
/*2800*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL64), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWL64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*2809*/      /*Scope*/ 15, /*->2825*/
/*2810*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2812*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2815*/        OPC_EmitMergeInputChains1_0,
/*2816*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWL64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*2825*/      0, /*End of Scope*/
/*2826*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 81,  TARGET_VAL(MipsISD::SWR),// ->2911
/*2830*/    OPC_RecordMemRef,
/*2831*/    OPC_RecordNode,   // #0 = 'MipsSWR' chained node
/*2832*/    OPC_RecordChild1, // #1 = $rt
/*2833*/    OPC_Scope, 37, /*->2872*/ // 2 children in Scope
/*2835*/      OPC_CheckChild1Type, MVT::i32,
/*2837*/      OPC_RecordChild2, // #2 = $addr
/*2838*/      OPC_Scope, 15, /*->2855*/ // 2 children in Scope
/*2840*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2842*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2845*/        OPC_EmitMergeInputChains1_0,
/*2846*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR CPURegs:i32:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWR CPURegs:i32:$rt, addr:i32:$addr)
/*2855*/      /*Scope*/ 15, /*->2871*/
/*2856*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2858*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2861*/        OPC_EmitMergeInputChains1_0,
/*2862*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR CPURegs:i32:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWR_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*2871*/      0, /*End of Scope*/
/*2872*/    /*Scope*/ 37, /*->2910*/
/*2873*/      OPC_CheckChild1Type, MVT::i64,
/*2875*/      OPC_RecordChild2, // #2 = $addr
/*2876*/      OPC_Scope, 15, /*->2893*/ // 2 children in Scope
/*2878*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2880*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2883*/        OPC_EmitMergeInputChains1_0,
/*2884*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR64), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWR64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*2893*/      /*Scope*/ 15, /*->2909*/
/*2894*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2896*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2899*/        OPC_EmitMergeInputChains1_0,
/*2900*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWR64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*2909*/      0, /*End of Scope*/
/*2910*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::LDL),// ->2956
/*2914*/    OPC_RecordMemRef,
/*2915*/    OPC_RecordNode,   // #0 = 'MipsLDL' chained node
/*2916*/    OPC_RecordChild1, // #1 = $addr
/*2917*/    OPC_RecordChild2, // #2 = $src
/*2918*/    OPC_CheckType, MVT::i64,
/*2920*/    OPC_Scope, 16, /*->2938*/ // 2 children in Scope
/*2922*/      OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2924*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2927*/      OPC_EmitMergeInputChains1_0,
/*2928*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LDL), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (MipsLDL:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
              // Dst: (LDL:i64 addr:i32:$addr, CPU64Regs:i64:$src)
/*2938*/    /*Scope*/ 16, /*->2955*/
/*2939*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2941*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2944*/      OPC_EmitMergeInputChains1_0,
/*2945*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LDL_P8), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (MipsLDL:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
              // Dst: (LDL_P8:i64 addr:i64:$addr, CPU64Regs:i64:$src)
/*2955*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::LDR),// ->3001
/*2959*/    OPC_RecordMemRef,
/*2960*/    OPC_RecordNode,   // #0 = 'MipsLDR' chained node
/*2961*/    OPC_RecordChild1, // #1 = $addr
/*2962*/    OPC_RecordChild2, // #2 = $src
/*2963*/    OPC_CheckType, MVT::i64,
/*2965*/    OPC_Scope, 16, /*->2983*/ // 2 children in Scope
/*2967*/      OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2969*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2972*/      OPC_EmitMergeInputChains1_0,
/*2973*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LDR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (MipsLDR:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
              // Dst: (LDR:i64 addr:i32:$addr, CPU64Regs:i64:$src)
/*2983*/    /*Scope*/ 16, /*->3000*/
/*2984*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2986*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2989*/      OPC_EmitMergeInputChains1_0,
/*2990*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LDR_P8), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (MipsLDR:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
              // Dst: (LDR_P8:i64 addr:i64:$addr, CPU64Regs:i64:$src)
/*3000*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SDL),// ->3044
/*3004*/    OPC_RecordMemRef,
/*3005*/    OPC_RecordNode,   // #0 = 'MipsSDL' chained node
/*3006*/    OPC_RecordChild1, // #1 = $rt
/*3007*/    OPC_CheckChild1Type, MVT::i64,
/*3009*/    OPC_RecordChild2, // #2 = $addr
/*3010*/    OPC_Scope, 15, /*->3027*/ // 2 children in Scope
/*3012*/      OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*3014*/      OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*3017*/      OPC_EmitMergeInputChains1_0,
/*3018*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SDL), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (MipsSDL CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
              // Dst: (SDL CPU64Regs:i64:$rt, addr:i32:$addr)
/*3027*/    /*Scope*/ 15, /*->3043*/
/*3028*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*3030*/      OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*3033*/      OPC_EmitMergeInputChains1_0,
/*3034*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SDL_P8), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (MipsSDL CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
              // Dst: (SDL_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*3043*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SDR),// ->3087
/*3047*/    OPC_RecordMemRef,
/*3048*/    OPC_RecordNode,   // #0 = 'MipsSDR' chained node
/*3049*/    OPC_RecordChild1, // #1 = $rt
/*3050*/    OPC_CheckChild1Type, MVT::i64,
/*3052*/    OPC_RecordChild2, // #2 = $addr
/*3053*/    OPC_Scope, 15, /*->3070*/ // 2 children in Scope
/*3055*/      OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*3057*/      OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*3060*/      OPC_EmitMergeInputChains1_0,
/*3061*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SDR), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (MipsSDR CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
              // Dst: (SDR CPU64Regs:i64:$rt, addr:i32:$addr)
/*3070*/    /*Scope*/ 15, /*->3086*/
/*3071*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*3073*/      OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*3076*/      OPC_EmitMergeInputChains1_0,
/*3077*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SDR_P8), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (MipsSDR CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
              // Dst: (SDR_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*3086*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 54,  TARGET_VAL(ISD::FrameIndex),// ->3144
/*3090*/    OPC_RecordNode,   // #0 = $addr
/*3091*/    OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->3127
/*3094*/      OPC_Scope, 15, /*->3111*/ // 2 children in Scope
/*3096*/        OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*3098*/        OPC_CheckComplexPat, /*CP*/1, /*#*/0, // selectAddr16:$addr #1 #2 #3
/*3101*/        OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRyOffMemX16), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                // Src: addr16:i32:$addr - Complexity = 12
                // Dst: (AddiuRxRyOffMemX16:i32 addr16:i32:$addr)
/*3111*/      /*Scope*/ 14, /*->3126*/
/*3112*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*3114*/        OPC_CheckComplexPat, /*CP*/2, /*#*/0, // selectIntAddr:$addr #1 #2
/*3117*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LEA_ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: addr:i32:$addr - Complexity = 9
                // Dst: (LEA_ADDiu:i32 addr:i32:$addr)
/*3126*/      0, /*End of Scope*/
            /*SwitchType*/ 14,  MVT::i64,// ->3143
/*3129*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*3131*/      OPC_CheckComplexPat, /*CP*/2, /*#*/0, // selectIntAddr:$addr #1 #2
/*3134*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LEA_ADDiu64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: addr:i64:$addr - Complexity = 9
              // Dst: (LEA_ADDiu64:i64 addr:i64:$addr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 37|128,8/*1061*/,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->4209
/*3148*/    OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*3149*/    OPC_MoveChild, 1,
/*3151*/    OPC_Scope, 44, /*->3197*/ // 50 children in Scope
/*3153*/      OPC_CheckInteger, 124|128,8/*1148*/, 
/*3156*/      OPC_MoveParent,
/*3157*/      OPC_RecordChild2, // #1 = $rt
/*3158*/      OPC_RecordChild3, // #2 = $rs_sa
/*3159*/      OPC_Scope, 22, /*->3183*/ // 2 children in Scope
/*3161*/        OPC_MoveChild, 3,
/*3163*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3166*/        OPC_CheckPredicate, 21, // Predicate_immZExt5
/*3168*/        OPC_MoveParent,
/*3169*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3171*/        OPC_EmitMergeInputChains1_0,
/*3172*/        OPC_EmitConvertToTarget, 2,
/*3174*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_S_W), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:i32 1148:iPTR, CPURegs:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$rs_sa) - Complexity = 12
                // Dst: (SHLL_S_W:i32 CPURegs:i32:$rt, (imm:i32):$rs_sa)
/*3183*/      /*Scope*/ 12, /*->3196*/
/*3184*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3186*/        OPC_EmitMergeInputChains1_0,
/*3187*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLLV_S_W), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:i32 1148:iPTR, CPURegs:i32:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHLLV_S_W:i32 CPURegs:i32:$rt, CPURegs:i32:$rs_sa)
/*3196*/      0, /*End of Scope*/
/*3197*/    /*Scope*/ 26, /*->3224*/
/*3198*/      OPC_CheckInteger, 117|128,8/*1141*/, 
/*3201*/      OPC_MoveParent,
/*3202*/      OPC_RecordChild2, // #1 = $mask
/*3203*/      OPC_MoveChild, 2,
/*3205*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3208*/      OPC_CheckPredicate, 22, // Predicate_immZExt10
/*3210*/      OPC_MoveParent,
/*3211*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3213*/      OPC_EmitMergeInputChains1_0,
/*3214*/      OPC_EmitConvertToTarget, 1,
/*3216*/      OPC_MorphNodeTo, TARGET_VAL(Mips::RDDSP), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (intrinsic_w_chain:i32 1141:iPTR, (imm:i32)<<P:Predicate_immZExt10>>:$mask) - Complexity = 12
              // Dst: (RDDSP:i32 (imm:i32):$mask)
/*3224*/    /*Scope*/ 18, /*->3243*/
/*3225*/      OPC_CheckInteger, 16|128,8/*1040*/, 
/*3228*/      OPC_MoveParent,
/*3229*/      OPC_RecordChild2, // #1 = $rs
/*3230*/      OPC_RecordChild3, // #2 = $rt
/*3231*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3233*/      OPC_EmitMergeInputChains1_0,
/*3234*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQ_S_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1040:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (ADDQ_S_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*3243*/    /*Scope*/ 18, /*->3262*/
/*3244*/      OPC_CheckInteger, 6|128,9/*1158*/, 
/*3247*/      OPC_MoveParent,
/*3248*/      OPC_RecordChild2, // #1 = $rs
/*3249*/      OPC_RecordChild3, // #2 = $rt
/*3250*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3252*/      OPC_EmitMergeInputChains1_0,
/*3253*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQ_S_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1158:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (SUBQ_S_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*3262*/    /*Scope*/ 16, /*->3279*/
/*3263*/      OPC_CheckInteger, 13|128,8/*1037*/, 
/*3266*/      OPC_MoveParent,
/*3267*/      OPC_RecordChild2, // #1 = $rt
/*3268*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3270*/      OPC_EmitMergeInputChains1_0,
/*3271*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ABSQ_S_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 1037:iPTR, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (ABSQ_S_W:i32 CPURegs:i32:$rt)
/*3279*/    /*Scope*/ 18, /*->3298*/
/*3280*/      OPC_CheckInteger, 83|128,8/*1107*/, 
/*3283*/      OPC_MoveParent,
/*3284*/      OPC_RecordChild2, // #1 = $rs
/*3285*/      OPC_RecordChild3, // #2 = $rt
/*3286*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3288*/      OPC_EmitMergeInputChains1_0,
/*3289*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULEQ_S_W_PHL), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1107:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULEQ_S_W_PHL:i32 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3298*/    /*Scope*/ 18, /*->3317*/
/*3299*/      OPC_CheckInteger, 84|128,8/*1108*/, 
/*3302*/      OPC_MoveParent,
/*3303*/      OPC_RecordChild2, // #1 = $rs
/*3304*/      OPC_RecordChild3, // #2 = $rt
/*3305*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3307*/      OPC_EmitMergeInputChains1_0,
/*3308*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULEQ_S_W_PHR), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1108:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULEQ_S_W_PHR:i32 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3317*/    /*Scope*/ 18, /*->3336*/
/*3318*/      OPC_CheckInteger, 39|128,8/*1063*/, 
/*3321*/      OPC_MoveParent,
/*3322*/      OPC_RecordChild2, // #1 = $rs
/*3323*/      OPC_RecordChild3, // #2 = $rt
/*3324*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3326*/      OPC_EmitMergeInputChains1_0,
/*3327*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGU_EQ_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1063:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGU_EQ_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3336*/    /*Scope*/ 18, /*->3355*/
/*3337*/      OPC_CheckInteger, 41|128,8/*1065*/, 
/*3340*/      OPC_MoveParent,
/*3341*/      OPC_RecordChild2, // #1 = $rs
/*3342*/      OPC_RecordChild3, // #2 = $rt
/*3343*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3345*/      OPC_EmitMergeInputChains1_0,
/*3346*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGU_LT_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1065:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGU_LT_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3355*/    /*Scope*/ 18, /*->3374*/
/*3356*/      OPC_CheckInteger, 40|128,8/*1064*/, 
/*3359*/      OPC_MoveParent,
/*3360*/      OPC_RecordChild2, // #1 = $rs
/*3361*/      OPC_RecordChild3, // #2 = $rt
/*3362*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3364*/      OPC_EmitMergeInputChains1_0,
/*3365*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGU_LE_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1064:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGU_LE_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3374*/    /*Scope*/ 20, /*->3395*/
/*3375*/      OPC_CheckInteger, 70|128,8/*1094*/, 
/*3378*/      OPC_MoveParent,
/*3379*/      OPC_RecordChild2, // #1 = $base
/*3380*/      OPC_CheckChild2Type, MVT::i32,
/*3382*/      OPC_RecordChild3, // #2 = $index
/*3383*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3385*/      OPC_EmitMergeInputChains1_0,
/*3386*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LWX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1094:iPTR, CPURegs:i32:$base, CPURegs:i32:$index) - Complexity = 8
              // Dst: (LWX:i32 CPURegs:i32:$base, CPURegs:i32:$index)
/*3395*/    /*Scope*/ 20, /*->3416*/
/*3396*/      OPC_CheckInteger, 69|128,8/*1093*/, 
/*3399*/      OPC_MoveParent,
/*3400*/      OPC_RecordChild2, // #1 = $base
/*3401*/      OPC_CheckChild2Type, MVT::i32,
/*3403*/      OPC_RecordChild3, // #2 = $index
/*3404*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3406*/      OPC_EmitMergeInputChains1_0,
/*3407*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LHX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1093:iPTR, CPURegs:i32:$base, CPURegs:i32:$index) - Complexity = 8
              // Dst: (LHX:i32 CPURegs:i32:$base, CPURegs:i32:$index)
/*3416*/    /*Scope*/ 20, /*->3437*/
/*3417*/      OPC_CheckInteger, 68|128,8/*1092*/, 
/*3420*/      OPC_MoveParent,
/*3421*/      OPC_RecordChild2, // #1 = $base
/*3422*/      OPC_CheckChild2Type, MVT::i32,
/*3424*/      OPC_RecordChild3, // #2 = $index
/*3425*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3427*/      OPC_EmitMergeInputChains1_0,
/*3428*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LBUX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1092:iPTR, CPURegs:i32:$base, CPURegs:i32:$index) - Complexity = 8
              // Dst: (LBUX:i32 CPURegs:i32:$base, CPURegs:i32:$index)
/*3437*/    /*Scope*/ 18, /*->3456*/
/*3438*/      OPC_CheckInteger, 67|128,8/*1091*/, 
/*3441*/      OPC_MoveParent,
/*3442*/      OPC_RecordChild2, // #1 = $src
/*3443*/      OPC_RecordChild3, // #2 = $rs
/*3444*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3446*/      OPC_EmitMergeInputChains1_0,
/*3447*/      OPC_MorphNodeTo, TARGET_VAL(Mips::INSV), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1091:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs) - Complexity = 8
              // Dst: (INSV:i32 CPURegs:i32:$src, CPURegs:i32:$rs)
/*3456*/    /*Scope*/ 18, /*->3475*/
/*3457*/      OPC_CheckInteger, 36|128,8/*1060*/, 
/*3460*/      OPC_MoveParent,
/*3461*/      OPC_RecordChild2, // #1 = $rs
/*3462*/      OPC_RecordChild3, // #2 = $rt
/*3463*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3465*/      OPC_EmitMergeInputChains1_0,
/*3466*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGDU_EQ_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1060:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGDU_EQ_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3475*/    /*Scope*/ 18, /*->3494*/
/*3476*/      OPC_CheckInteger, 38|128,8/*1062*/, 
/*3479*/      OPC_MoveParent,
/*3480*/      OPC_RecordChild2, // #1 = $rs
/*3481*/      OPC_RecordChild3, // #2 = $rt
/*3482*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3484*/      OPC_EmitMergeInputChains1_0,
/*3485*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGDU_LT_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1062:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGDU_LT_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3494*/    /*Scope*/ 18, /*->3513*/
/*3495*/      OPC_CheckInteger, 37|128,8/*1061*/, 
/*3498*/      OPC_MoveParent,
/*3499*/      OPC_RecordChild2, // #1 = $rs
/*3500*/      OPC_RecordChild3, // #2 = $rt
/*3501*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3503*/      OPC_EmitMergeInputChains1_0,
/*3504*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGDU_LE_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1061:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGDU_LE_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3513*/    /*Scope*/ 18, /*->3532*/
/*3514*/      OPC_CheckInteger, 90|128,8/*1114*/, 
/*3517*/      OPC_MoveParent,
/*3518*/      OPC_RecordChild2, // #1 = $rs
/*3519*/      OPC_RecordChild3, // #2 = $rt
/*3520*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3522*/      OPC_EmitMergeInputChains1_0,
/*3523*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULQ_S_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1114:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (MULQ_S_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*3532*/    /*Scope*/ 18, /*->3551*/
/*3533*/      OPC_CheckInteger, 88|128,8/*1112*/, 
/*3536*/      OPC_MoveParent,
/*3537*/      OPC_RecordChild2, // #1 = $rs
/*3538*/      OPC_RecordChild3, // #2 = $rt
/*3539*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3541*/      OPC_EmitMergeInputChains1_0,
/*3542*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULQ_RS_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1112:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (MULQ_RS_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*3551*/    /*Scope*/ 18, /*->3570*/
/*3552*/      OPC_CheckInteger, 21|128,8/*1045*/, 
/*3555*/      OPC_MoveParent,
/*3556*/      OPC_RecordChild2, // #1 = $a
/*3557*/      OPC_RecordChild3, // #2 = $b
/*3558*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3560*/      OPC_EmitMergeInputChains1_0,
/*3561*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDSC), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1045:iPTR, i32:i32:$a, i32:i32:$b) - Complexity = 8
              // Dst: (ADDSC:i32 i32:i32:$a, i32:i32:$b)
/*3570*/    /*Scope*/ 18, /*->3589*/
/*3571*/      OPC_CheckInteger, 28|128,8/*1052*/, 
/*3574*/      OPC_MoveParent,
/*3575*/      OPC_RecordChild2, // #1 = $a
/*3576*/      OPC_RecordChild3, // #2 = $b
/*3577*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3579*/      OPC_EmitMergeInputChains1_0,
/*3580*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDWC), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1052:iPTR, i32:i32:$a, i32:i32:$b) - Complexity = 8
              // Dst: (ADDWC:i32 i32:i32:$a, i32:i32:$b)
/*3589*/    /*Scope*/ 12, /*->3602*/
/*3590*/      OPC_CheckInteger, 32|128,8/*1056*/, 
/*3593*/      OPC_MoveParent,
/*3594*/      OPC_EmitMergeInputChains1_0,
/*3595*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BPOSGE32_PSEUDO), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (intrinsic_w_chain:i32 1056:iPTR) - Complexity = 8
              // Dst: (BPOSGE32_PSEUDO:i32)
/*3602*/    /*Scope*/ 44, /*->3647*/
/*3603*/      OPC_CheckInteger, 123|128,8/*1147*/, 
/*3606*/      OPC_MoveParent,
/*3607*/      OPC_RecordChild2, // #1 = $rt
/*3608*/      OPC_RecordChild3, // #2 = $rs_sa
/*3609*/      OPC_Scope, 22, /*->3633*/ // 2 children in Scope
/*3611*/        OPC_MoveChild, 3,
/*3613*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3616*/        OPC_CheckPredicate, 23, // Predicate_immZExt4
/*3618*/        OPC_MoveParent,
/*3619*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3621*/        OPC_EmitMergeInputChains1_0,
/*3622*/        OPC_EmitConvertToTarget, 2,
/*3624*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_S_PH), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v2i16 1147:iPTR, DSPRegs:v2i16:$rt, (imm:i32)<<P:Predicate_immZExt4>>:$rs_sa) - Complexity = 12
                // Dst: (SHLL_S_PH:v2i16 DSPRegs:v2i16:$rt, (imm:i32):$rs_sa)
/*3633*/      /*Scope*/ 12, /*->3646*/
/*3634*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3636*/        OPC_EmitMergeInputChains1_0,
/*3637*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLLV_S_PH), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:v2i16 1147:iPTR, DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHLLV_S_PH:v2i16 DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa)
/*3646*/      0, /*End of Scope*/
/*3647*/    /*Scope*/ 44, /*->3692*/
/*3648*/      OPC_CheckInteger, 121|128,8/*1145*/, 
/*3651*/      OPC_MoveParent,
/*3652*/      OPC_RecordChild2, // #1 = $a
/*3653*/      OPC_RecordChild3, // #2 = $shamt
/*3654*/      OPC_Scope, 22, /*->3678*/ // 2 children in Scope
/*3656*/        OPC_MoveChild, 3,
/*3658*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3661*/        OPC_CheckPredicate, 23, // Predicate_immZExt4
/*3663*/        OPC_MoveParent,
/*3664*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3666*/        OPC_EmitMergeInputChains1_0,
/*3667*/        OPC_EmitConvertToTarget, 2,
/*3669*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_PH), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v2i16 1145:iPTR, v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt) - Complexity = 12
                // Dst: (SHLL_PH:v2i16 v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt)
/*3678*/      /*Scope*/ 12, /*->3691*/
/*3679*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3681*/        OPC_EmitMergeInputChains1_0,
/*3682*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLLV_PH), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:v2i16 1145:iPTR, DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHLLV_PH:v2i16 DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa)
/*3691*/      0, /*End of Scope*/
/*3692*/    /*Scope*/ 44, /*->3737*/
/*3693*/      OPC_CheckInteger, 122|128,8/*1146*/, 
/*3696*/      OPC_MoveParent,
/*3697*/      OPC_RecordChild2, // #1 = $a
/*3698*/      OPC_RecordChild3, // #2 = $shamt
/*3699*/      OPC_Scope, 22, /*->3723*/ // 2 children in Scope
/*3701*/        OPC_MoveChild, 3,
/*3703*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3706*/        OPC_CheckPredicate, 24, // Predicate_immZExt3
/*3708*/        OPC_MoveParent,
/*3709*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3711*/        OPC_EmitMergeInputChains1_0,
/*3712*/        OPC_EmitConvertToTarget, 2,
/*3714*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_QB), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v4i8 1146:iPTR, v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt) - Complexity = 12
                // Dst: (SHLL_QB:v4i8 v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt)
/*3723*/      /*Scope*/ 12, /*->3736*/
/*3724*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3726*/        OPC_EmitMergeInputChains1_0,
/*3727*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLLV_QB), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:v4i8 1146:iPTR, DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHLLV_QB:v4i8 DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa)
/*3736*/      0, /*End of Scope*/
/*3737*/    /*Scope*/ 18, /*->3756*/
/*3738*/      OPC_CheckInteger, 25|128,8/*1049*/, 
/*3741*/      OPC_MoveParent,
/*3742*/      OPC_RecordChild2, // #1 = $rs
/*3743*/      OPC_RecordChild3, // #2 = $rt
/*3744*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3746*/      OPC_EmitMergeInputChains1_0,
/*3747*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_S_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1049:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (ADDU_S_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3756*/    /*Scope*/ 18, /*->3775*/
/*3757*/      OPC_CheckInteger, 14|128,9/*1166*/, 
/*3760*/      OPC_MoveParent,
/*3761*/      OPC_RecordChild2, // #1 = $rs
/*3762*/      OPC_RecordChild3, // #2 = $rt
/*3763*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3765*/      OPC_EmitMergeInputChains1_0,
/*3766*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_S_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1166:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (SUBU_S_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3775*/    /*Scope*/ 18, /*->3794*/
/*3776*/      OPC_CheckInteger, 15|128,8/*1039*/, 
/*3779*/      OPC_MoveParent,
/*3780*/      OPC_RecordChild2, // #1 = $rs
/*3781*/      OPC_RecordChild3, // #2 = $rt
/*3782*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3784*/      OPC_EmitMergeInputChains1_0,
/*3785*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQ_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1039:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDQ_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3794*/    /*Scope*/ 18, /*->3813*/
/*3795*/      OPC_CheckInteger, 5|128,9/*1157*/, 
/*3798*/      OPC_MoveParent,
/*3799*/      OPC_RecordChild2, // #1 = $rs
/*3800*/      OPC_RecordChild3, // #2 = $rt
/*3801*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3803*/      OPC_EmitMergeInputChains1_0,
/*3804*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQ_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1157:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBQ_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3813*/    /*Scope*/ 16, /*->3830*/
/*3814*/      OPC_CheckInteger, 11|128,8/*1035*/, 
/*3817*/      OPC_MoveParent,
/*3818*/      OPC_RecordChild2, // #1 = $rt
/*3819*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3821*/      OPC_EmitMergeInputChains1_0,
/*3822*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ABSQ_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:v2i16 1035:iPTR, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ABSQ_S_PH:v2i16 DSPRegs:v2i16:$rt)
/*3830*/    /*Scope*/ 18, /*->3849*/
/*3831*/      OPC_CheckInteger, 113|128,8/*1137*/, 
/*3834*/      OPC_MoveParent,
/*3835*/      OPC_RecordChild2, // #1 = $rs
/*3836*/      OPC_RecordChild3, // #2 = $rt
/*3837*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3839*/      OPC_EmitMergeInputChains1_0,
/*3840*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECRQ_RS_PH_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1137:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (PRECRQ_RS_PH_W:v2i16 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*3849*/    /*Scope*/ 18, /*->3868*/
/*3850*/      OPC_CheckInteger, 114|128,8/*1138*/, 
/*3853*/      OPC_MoveParent,
/*3854*/      OPC_RecordChild2, // #1 = $rs
/*3855*/      OPC_RecordChild3, // #2 = $rt
/*3856*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3858*/      OPC_EmitMergeInputChains1_0,
/*3859*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECRQU_S_QB_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1138:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECRQU_S_QB_PH:v4i8 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3868*/    /*Scope*/ 18, /*->3887*/
/*3869*/      OPC_CheckInteger, 85|128,8/*1109*/, 
/*3872*/      OPC_MoveParent,
/*3873*/      OPC_RecordChild2, // #1 = $rs
/*3874*/      OPC_RecordChild3, // #2 = $rt
/*3875*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3877*/      OPC_EmitMergeInputChains1_0,
/*3878*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULEU_S_PH_QBL), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1109:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULEU_S_PH_QBL:v2i16 DSPRegs:v4i8:$rs, DSPRegs:v2i16:$rt)
/*3887*/    /*Scope*/ 18, /*->3906*/
/*3888*/      OPC_CheckInteger, 86|128,8/*1110*/, 
/*3891*/      OPC_MoveParent,
/*3892*/      OPC_RecordChild2, // #1 = $rs
/*3893*/      OPC_RecordChild3, // #2 = $rt
/*3894*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3896*/      OPC_EmitMergeInputChains1_0,
/*3897*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULEU_S_PH_QBR), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1110:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULEU_S_PH_QBR:v2i16 DSPRegs:v4i8:$rs, DSPRegs:v2i16:$rt)
/*3906*/    /*Scope*/ 18, /*->3925*/
/*3907*/      OPC_CheckInteger, 87|128,8/*1111*/, 
/*3910*/      OPC_MoveParent,
/*3911*/      OPC_RecordChild2, // #1 = $rs
/*3912*/      OPC_RecordChild3, // #2 = $rt
/*3913*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3915*/      OPC_EmitMergeInputChains1_0,
/*3916*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULQ_RS_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1111:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULQ_RS_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3925*/    /*Scope*/ 18, /*->3944*/
/*3926*/      OPC_CheckInteger, 97|128,8/*1121*/, 
/*3929*/      OPC_MoveParent,
/*3930*/      OPC_RecordChild2, // #1 = $rs
/*3931*/      OPC_RecordChild3, // #2 = $rt
/*3932*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3934*/      OPC_EmitMergeInputChains1_0,
/*3935*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PICK_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1121:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PICK_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3944*/    /*Scope*/ 18, /*->3963*/
/*3945*/      OPC_CheckInteger, 96|128,8/*1120*/, 
/*3948*/      OPC_MoveParent,
/*3949*/      OPC_RecordChild2, // #1 = $rs
/*3950*/      OPC_RecordChild3, // #2 = $rt
/*3951*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3953*/      OPC_EmitMergeInputChains1_0,
/*3954*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PICK_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1120:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PICK_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3963*/    /*Scope*/ 18, /*->3982*/
/*3964*/      OPC_CheckInteger, 22|128,8/*1046*/, 
/*3967*/      OPC_MoveParent,
/*3968*/      OPC_RecordChild2, // #1 = $rs
/*3969*/      OPC_RecordChild3, // #2 = $rt
/*3970*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3972*/      OPC_EmitMergeInputChains1_0,
/*3973*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1046:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDU_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3982*/    /*Scope*/ 18, /*->4001*/
/*3983*/      OPC_CheckInteger, 24|128,8/*1048*/, 
/*3986*/      OPC_MoveParent,
/*3987*/      OPC_RecordChild2, // #1 = $rs
/*3988*/      OPC_RecordChild3, // #2 = $rt
/*3989*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3991*/      OPC_EmitMergeInputChains1_0,
/*3992*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1048:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDU_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4001*/    /*Scope*/ 18, /*->4020*/
/*4002*/      OPC_CheckInteger, 11|128,9/*1163*/, 
/*4005*/      OPC_MoveParent,
/*4006*/      OPC_RecordChild2, // #1 = $rs
/*4007*/      OPC_RecordChild3, // #2 = $rt
/*4008*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4010*/      OPC_EmitMergeInputChains1_0,
/*4011*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1163:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBU_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4020*/    /*Scope*/ 18, /*->4039*/
/*4021*/      OPC_CheckInteger, 13|128,9/*1165*/, 
/*4024*/      OPC_MoveParent,
/*4025*/      OPC_RecordChild2, // #1 = $rs
/*4026*/      OPC_RecordChild3, // #2 = $rt
/*4027*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4029*/      OPC_EmitMergeInputChains1_0,
/*4030*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1165:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBU_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4039*/    /*Scope*/ 16, /*->4056*/
/*4040*/      OPC_CheckInteger, 12|128,8/*1036*/, 
/*4043*/      OPC_MoveParent,
/*4044*/      OPC_RecordChild2, // #1 = $rt
/*4045*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4047*/      OPC_EmitMergeInputChains1_0,
/*4048*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ABSQ_S_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:v4i8 1036:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (ABSQ_S_QB:v4i8 DSPRegs:v4i8:$rt)
/*4056*/    /*Scope*/ 18, /*->4075*/
/*4057*/      OPC_CheckInteger, 82|128,8/*1106*/, 
/*4060*/      OPC_MoveParent,
/*4061*/      OPC_RecordChild2, // #1 = $rs
/*4062*/      OPC_RecordChild3, // #2 = $rt
/*4063*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4065*/      OPC_EmitMergeInputChains1_0,
/*4066*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MUL_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1106:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MUL_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4075*/    /*Scope*/ 18, /*->4094*/
/*4076*/      OPC_CheckInteger, 89|128,8/*1113*/, 
/*4079*/      OPC_MoveParent,
/*4080*/      OPC_RecordChild2, // #1 = $rs
/*4081*/      OPC_RecordChild3, // #2 = $rt
/*4082*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4084*/      OPC_EmitMergeInputChains1_0,
/*4085*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULQ_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1113:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULQ_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4094*/    /*Scope*/ 18, /*->4113*/
/*4095*/      OPC_CheckInteger, 108|128,8/*1132*/, 
/*4098*/      OPC_MoveParent,
/*4099*/      OPC_RecordChild2, // #1 = $rs
/*4100*/      OPC_RecordChild3, // #2 = $rt
/*4101*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4103*/      OPC_EmitMergeInputChains1_0,
/*4104*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECR_QB_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1132:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECR_QB_PH:v4i8 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4113*/    /*Scope*/ 18, /*->4132*/
/*4114*/      OPC_CheckInteger, 14|128,8/*1038*/, 
/*4117*/      OPC_MoveParent,
/*4118*/      OPC_RecordChild2, // #1 = $a
/*4119*/      OPC_RecordChild3, // #2 = $b
/*4120*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4122*/      OPC_EmitMergeInputChains1_0,
/*4123*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQ_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1038:iPTR, v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 8
              // Dst: (ADDQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
/*4132*/    /*Scope*/ 18, /*->4151*/
/*4133*/      OPC_CheckInteger, 4|128,9/*1156*/, 
/*4136*/      OPC_MoveParent,
/*4137*/      OPC_RecordChild2, // #1 = $a
/*4138*/      OPC_RecordChild3, // #2 = $b
/*4139*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4141*/      OPC_EmitMergeInputChains1_0,
/*4142*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQ_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1156:iPTR, v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 8
              // Dst: (SUBQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
/*4151*/    /*Scope*/ 18, /*->4170*/
/*4152*/      OPC_CheckInteger, 81|128,8/*1105*/, 
/*4155*/      OPC_MoveParent,
/*4156*/      OPC_RecordChild2, // #1 = $a
/*4157*/      OPC_RecordChild3, // #2 = $b
/*4158*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4160*/      OPC_EmitMergeInputChains1_0,
/*4161*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MUL_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1105:iPTR, v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 8
              // Dst: (MUL_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
/*4170*/    /*Scope*/ 18, /*->4189*/
/*4171*/      OPC_CheckInteger, 23|128,8/*1047*/, 
/*4174*/      OPC_MoveParent,
/*4175*/      OPC_RecordChild2, // #1 = $a
/*4176*/      OPC_RecordChild3, // #2 = $b
/*4177*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4179*/      OPC_EmitMergeInputChains1_0,
/*4180*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1047:iPTR, v4i8:v4i8:$a, v4i8:v4i8:$b) - Complexity = 8
              // Dst: (ADDU_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b)
/*4189*/    /*Scope*/ 18, /*->4208*/
/*4190*/      OPC_CheckInteger, 12|128,9/*1164*/, 
/*4193*/      OPC_MoveParent,
/*4194*/      OPC_RecordChild2, // #1 = $a
/*4195*/      OPC_RecordChild3, // #2 = $b
/*4196*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4198*/      OPC_EmitMergeInputChains1_0,
/*4199*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1164:iPTR, v4i8:v4i8:$a, v4i8:v4i8:$b) - Complexity = 8
              // Dst: (SUBU_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b)
/*4208*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 119|128,7/*1015*/,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->5228
/*4213*/    OPC_MoveChild, 0,
/*4215*/    OPC_Scope, 42, /*->4259*/ // 42 children in Scope
/*4217*/      OPC_CheckInteger, 1|128,9/*1153*/, 
/*4220*/      OPC_MoveParent,
/*4221*/      OPC_RecordChild1, // #0 = $rt
/*4222*/      OPC_RecordChild2, // #1 = $rs_sa
/*4223*/      OPC_Scope, 21, /*->4246*/ // 2 children in Scope
/*4225*/        OPC_MoveChild, 2,
/*4227*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4230*/        OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4232*/        OPC_MoveParent,
/*4233*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4235*/        OPC_EmitConvertToTarget, 1,
/*4237*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_R_W), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:i32 1153:iPTR, CPURegs:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$rs_sa) - Complexity = 12
                // Dst: (SHRA_R_W:i32 CPURegs:i32:$rt, (imm:i32):$rs_sa)
/*4246*/      /*Scope*/ 11, /*->4258*/
/*4247*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4249*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_R_W), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:i32 1153:iPTR, CPURegs:i32:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_R_W:i32 CPURegs:i32:$rt, CPURegs:i32:$rs_sa)
/*4258*/      0, /*End of Scope*/
/*4259*/    /*Scope*/ 29, /*->4289*/
/*4260*/      OPC_CheckInteger, 29|128,8/*1053*/, 
/*4263*/      OPC_MoveParent,
/*4264*/      OPC_RecordChild1, // #0 = $src
/*4265*/      OPC_RecordChild2, // #1 = $rs
/*4266*/      OPC_RecordChild3, // #2 = $sa
/*4267*/      OPC_MoveChild, 3,
/*4269*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4272*/      OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4274*/      OPC_MoveParent,
/*4275*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4277*/      OPC_EmitConvertToTarget, 2,
/*4279*/      OPC_MorphNodeTo, TARGET_VAL(Mips::APPEND), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:i32 1053:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt5>>:$sa) - Complexity = 12
              // Dst: (APPEND:i32 CPURegs:i32:$rs, (imm:i32):$sa, CPURegs:i32:$src)
/*4289*/    /*Scope*/ 29, /*->4319*/
/*4290*/      OPC_CheckInteger, 30|128,8/*1054*/, 
/*4293*/      OPC_MoveParent,
/*4294*/      OPC_RecordChild1, // #0 = $src
/*4295*/      OPC_RecordChild2, // #1 = $rs
/*4296*/      OPC_RecordChild3, // #2 = $sa
/*4297*/      OPC_MoveChild, 3,
/*4299*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4302*/      OPC_CheckPredicate, 25, // Predicate_immZExt2
/*4304*/      OPC_MoveParent,
/*4305*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4307*/      OPC_EmitConvertToTarget, 2,
/*4309*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BALIGN), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:i32 1054:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt2>>:$sa) - Complexity = 12
              // Dst: (BALIGN:i32 CPURegs:i32:$rs, (imm:i32):$sa, CPURegs:i32:$src)
/*4319*/    /*Scope*/ 29, /*->4349*/
/*4320*/      OPC_CheckInteger, 115|128,8/*1139*/, 
/*4323*/      OPC_MoveParent,
/*4324*/      OPC_RecordChild1, // #0 = $src
/*4325*/      OPC_RecordChild2, // #1 = $rs
/*4326*/      OPC_RecordChild3, // #2 = $sa
/*4327*/      OPC_MoveChild, 3,
/*4329*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4332*/      OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4334*/      OPC_MoveParent,
/*4335*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4337*/      OPC_EmitConvertToTarget, 2,
/*4339*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PREPEND), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:i32 1139:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt5>>:$sa) - Complexity = 12
              // Dst: (PREPEND:i32 CPURegs:i32:$rs, (imm:i32):$sa, CPURegs:i32:$src)
/*4349*/    /*Scope*/ 17, /*->4367*/
/*4350*/      OPC_CheckInteger, 77|128,8/*1101*/, 
/*4353*/      OPC_MoveParent,
/*4354*/      OPC_RecordChild1, // #0 = $rs
/*4355*/      OPC_RecordChild2, // #1 = $rt
/*4356*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4358*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MODSUB), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1101:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (MODSUB:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*4367*/    /*Scope*/ 15, /*->4383*/
/*4368*/      OPC_CheckInteger, 116|128,8/*1140*/, 
/*4371*/      OPC_MoveParent,
/*4372*/      OPC_RecordChild1, // #0 = $rs
/*4373*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4375*/      OPC_MorphNodeTo, TARGET_VAL(Mips::RADDU_W_QB), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1140:iPTR, DSPRegs:v4i8:$rs) - Complexity = 8
              // Dst: (RADDU_W_QB:i32 DSPRegs:v4i8:$rs)
/*4383*/    /*Scope*/ 15, /*->4399*/
/*4384*/      OPC_CheckInteger, 98|128,8/*1122*/, 
/*4387*/      OPC_MoveParent,
/*4388*/      OPC_RecordChild1, // #0 = $rt
/*4389*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4391*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQ_W_PHL), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1122:iPTR, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECEQ_W_PHL:i32 DSPRegs:v2i16:$rt)
/*4399*/    /*Scope*/ 15, /*->4415*/
/*4400*/      OPC_CheckInteger, 99|128,8/*1123*/, 
/*4403*/      OPC_MoveParent,
/*4404*/      OPC_RecordChild1, // #0 = $rt
/*4405*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4407*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQ_W_PHR), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1123:iPTR, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECEQ_W_PHR:i32 DSPRegs:v2i16:$rt)
/*4415*/    /*Scope*/ 15, /*->4431*/
/*4416*/      OPC_CheckInteger, 31|128,8/*1055*/, 
/*4419*/      OPC_MoveParent,
/*4420*/      OPC_RecordChild1, // #0 = $rt
/*4421*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4423*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BITREV), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1055:iPTR, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (BITREV:i32 CPURegs:i32:$rt)
/*4431*/    /*Scope*/ 17, /*->4449*/
/*4432*/      OPC_CheckInteger, 20|128,8/*1044*/, 
/*4435*/      OPC_MoveParent,
/*4436*/      OPC_RecordChild1, // #0 = $rs
/*4437*/      OPC_RecordChild2, // #1 = $rt
/*4438*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4440*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQH_W), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1044:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (ADDQH_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*4449*/    /*Scope*/ 17, /*->4467*/
/*4450*/      OPC_CheckInteger, 19|128,8/*1043*/, 
/*4453*/      OPC_MoveParent,
/*4454*/      OPC_RecordChild1, // #0 = $rs
/*4455*/      OPC_RecordChild2, // #1 = $rt
/*4456*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4458*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQH_R_W), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1043:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (ADDQH_R_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*4467*/    /*Scope*/ 17, /*->4485*/
/*4468*/      OPC_CheckInteger, 10|128,9/*1162*/, 
/*4471*/      OPC_MoveParent,
/*4472*/      OPC_RecordChild1, // #0 = $rs
/*4473*/      OPC_RecordChild2, // #1 = $rt
/*4474*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4476*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQH_W), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1162:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (SUBQH_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*4485*/    /*Scope*/ 17, /*->4503*/
/*4486*/      OPC_CheckInteger, 9|128,9/*1161*/, 
/*4489*/      OPC_MoveParent,
/*4490*/      OPC_RecordChild1, // #0 = $rs
/*4491*/      OPC_RecordChild2, // #1 = $rt
/*4492*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4494*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQH_R_W), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1161:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (SUBQH_R_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*4503*/    /*Scope*/ 42, /*->4546*/
/*4504*/      OPC_CheckInteger, 127|128,8/*1151*/, 
/*4507*/      OPC_MoveParent,
/*4508*/      OPC_RecordChild1, // #0 = $rt
/*4509*/      OPC_RecordChild2, // #1 = $rs_sa
/*4510*/      OPC_Scope, 21, /*->4533*/ // 2 children in Scope
/*4512*/        OPC_MoveChild, 2,
/*4514*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4517*/        OPC_CheckPredicate, 23, // Predicate_immZExt4
/*4519*/        OPC_MoveParent,
/*4520*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4522*/        OPC_EmitConvertToTarget, 1,
/*4524*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_R_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v2i16 1151:iPTR, DSPRegs:v2i16:$rt, (imm:i32)<<P:Predicate_immZExt4>>:$rs_sa) - Complexity = 12
                // Dst: (SHRA_R_PH:v2i16 DSPRegs:v2i16:$rt, (imm:i32):$rs_sa)
/*4533*/      /*Scope*/ 11, /*->4545*/
/*4534*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4536*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_R_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v2i16 1151:iPTR, DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_R_PH:v2i16 DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa)
/*4545*/      0, /*End of Scope*/
/*4546*/    /*Scope*/ 39, /*->4586*/
/*4547*/      OPC_CheckInteger, 119|128,8/*1143*/, 
/*4550*/      OPC_MoveParent,
/*4551*/      OPC_RecordChild1, // #0 = $imm
/*4552*/      OPC_Scope, 20, /*->4574*/ // 2 children in Scope
/*4554*/        OPC_MoveChild, 1,
/*4556*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4559*/        OPC_CheckPredicate, 26, // Predicate_immZExt8
/*4561*/        OPC_MoveParent,
/*4562*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4564*/        OPC_EmitConvertToTarget, 0,
/*4566*/        OPC_MorphNodeTo, TARGET_VAL(Mips::REPL_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 1/*#Ops*/, 1, 
                // Src: (intrinsic_wo_chain:v4i8 1143:iPTR, (imm:i32)<<P:Predicate_immZExt8>>:$imm) - Complexity = 12
                // Dst: (REPL_QB:v4i8 (imm:i32):$imm)
/*4574*/      /*Scope*/ 10, /*->4585*/
/*4575*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4577*/        OPC_MorphNodeTo, TARGET_VAL(Mips::REPLV_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4i8 1143:iPTR, CPURegs:i32:$rt) - Complexity = 8
                // Dst: (REPLV_QB:v4i8 CPURegs:i32:$rt)
/*4585*/      0, /*End of Scope*/
/*4586*/    /*Scope*/ 39, /*->4626*/
/*4587*/      OPC_CheckInteger, 118|128,8/*1142*/, 
/*4590*/      OPC_MoveParent,
/*4591*/      OPC_RecordChild1, // #0 = $imm
/*4592*/      OPC_Scope, 20, /*->4614*/ // 2 children in Scope
/*4594*/        OPC_MoveChild, 1,
/*4596*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4599*/        OPC_CheckPredicate, 22, // Predicate_immZExt10
/*4601*/        OPC_MoveParent,
/*4602*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4604*/        OPC_EmitConvertToTarget, 0,
/*4606*/        OPC_MorphNodeTo, TARGET_VAL(Mips::REPL_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 1, 
                // Src: (intrinsic_wo_chain:v2i16 1142:iPTR, (imm:i32)<<P:Predicate_immZExt10>>:$imm) - Complexity = 12
                // Dst: (REPL_PH:v2i16 (imm:i32):$imm)
/*4614*/      /*Scope*/ 10, /*->4625*/
/*4615*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4617*/        OPC_MorphNodeTo, TARGET_VAL(Mips::REPLV_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v2i16 1142:iPTR, CPURegs:i32:$rt) - Complexity = 8
                // Dst: (REPLV_PH:v2i16 CPURegs:i32:$rt)
/*4625*/      0, /*End of Scope*/
/*4626*/    /*Scope*/ 29, /*->4656*/
/*4627*/      OPC_CheckInteger, 109|128,8/*1133*/, 
/*4630*/      OPC_MoveParent,
/*4631*/      OPC_RecordChild1, // #0 = $src
/*4632*/      OPC_RecordChild2, // #1 = $rs
/*4633*/      OPC_RecordChild3, // #2 = $sa
/*4634*/      OPC_MoveChild, 3,
/*4636*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4639*/      OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4641*/      OPC_MoveParent,
/*4642*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4644*/      OPC_EmitConvertToTarget, 2,
/*4646*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECR_SRA_PH_W), 0,
                  1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1133:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt5>>:$sa) - Complexity = 12
              // Dst: (PRECR_SRA_PH_W:v2i16 CPURegs:i32:$rs, (imm:i32):$sa, CPURegs:i32:$src)
/*4656*/    /*Scope*/ 29, /*->4686*/
/*4657*/      OPC_CheckInteger, 110|128,8/*1134*/, 
/*4660*/      OPC_MoveParent,
/*4661*/      OPC_RecordChild1, // #0 = $src
/*4662*/      OPC_RecordChild2, // #1 = $rs
/*4663*/      OPC_RecordChild3, // #2 = $sa
/*4664*/      OPC_MoveChild, 3,
/*4666*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4669*/      OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4671*/      OPC_MoveParent,
/*4672*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4674*/      OPC_EmitConvertToTarget, 2,
/*4676*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECR_SRA_R_PH_W), 0,
                  1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1134:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt5>>:$sa) - Complexity = 12
              // Dst: (PRECR_SRA_R_PH_W:v2i16 CPURegs:i32:$rs, (imm:i32):$sa, CPURegs:i32:$src)
/*4686*/    /*Scope*/ 42, /*->4729*/
/*4687*/      OPC_CheckInteger, 0|128,9/*1152*/, 
/*4690*/      OPC_MoveParent,
/*4691*/      OPC_RecordChild1, // #0 = $rt
/*4692*/      OPC_RecordChild2, // #1 = $rs_sa
/*4693*/      OPC_Scope, 21, /*->4716*/ // 2 children in Scope
/*4695*/        OPC_MoveChild, 2,
/*4697*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4700*/        OPC_CheckPredicate, 24, // Predicate_immZExt3
/*4702*/        OPC_MoveParent,
/*4703*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4705*/        OPC_EmitConvertToTarget, 1,
/*4707*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_R_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v4i8 1152:iPTR, DSPRegs:v4i8:$rt, (imm:i32)<<P:Predicate_immZExt3>>:$rs_sa) - Complexity = 12
                // Dst: (SHRA_R_QB:v4i8 DSPRegs:v4i8:$rt, (imm:i32):$rs_sa)
/*4716*/      /*Scope*/ 11, /*->4728*/
/*4717*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4719*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_R_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i8 1152:iPTR, DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_R_QB:v4i8 DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa)
/*4728*/      0, /*End of Scope*/
/*4729*/    /*Scope*/ 42, /*->4772*/
/*4730*/      OPC_CheckInteger, 125|128,8/*1149*/, 
/*4733*/      OPC_MoveParent,
/*4734*/      OPC_RecordChild1, // #0 = $a
/*4735*/      OPC_RecordChild2, // #1 = $shamt
/*4736*/      OPC_Scope, 21, /*->4759*/ // 2 children in Scope
/*4738*/        OPC_MoveChild, 2,
/*4740*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4743*/        OPC_CheckPredicate, 23, // Predicate_immZExt4
/*4745*/        OPC_MoveParent,
/*4746*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4748*/        OPC_EmitConvertToTarget, 1,
/*4750*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v2i16 1149:iPTR, v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt) - Complexity = 12
                // Dst: (SHRA_PH:v2i16 v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt)
/*4759*/      /*Scope*/ 11, /*->4771*/
/*4760*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4762*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v2i16 1149:iPTR, DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_PH:v2i16 DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa)
/*4771*/      0, /*End of Scope*/
/*4772*/    /*Scope*/ 42, /*->4815*/
/*4773*/      OPC_CheckInteger, 2|128,9/*1154*/, 
/*4776*/      OPC_MoveParent,
/*4777*/      OPC_RecordChild1, // #0 = $a
/*4778*/      OPC_RecordChild2, // #1 = $shamt
/*4779*/      OPC_Scope, 21, /*->4802*/ // 2 children in Scope
/*4781*/        OPC_MoveChild, 2,
/*4783*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4786*/        OPC_CheckPredicate, 23, // Predicate_immZExt4
/*4788*/        OPC_MoveParent,
/*4789*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4791*/        OPC_EmitConvertToTarget, 1,
/*4793*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRL_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v2i16 1154:iPTR, v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt) - Complexity = 12
                // Dst: (SHRL_PH:v2i16 v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt)
/*4802*/      /*Scope*/ 11, /*->4814*/
/*4803*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4805*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRLV_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v2i16 1154:iPTR, DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRLV_PH:v2i16 DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa)
/*4814*/      0, /*End of Scope*/
/*4815*/    /*Scope*/ 42, /*->4858*/
/*4816*/      OPC_CheckInteger, 126|128,8/*1150*/, 
/*4819*/      OPC_MoveParent,
/*4820*/      OPC_RecordChild1, // #0 = $a
/*4821*/      OPC_RecordChild2, // #1 = $shamt
/*4822*/      OPC_Scope, 21, /*->4845*/ // 2 children in Scope
/*4824*/        OPC_MoveChild, 2,
/*4826*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4829*/        OPC_CheckPredicate, 24, // Predicate_immZExt3
/*4831*/        OPC_MoveParent,
/*4832*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4834*/        OPC_EmitConvertToTarget, 1,
/*4836*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v4i8 1150:iPTR, v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt) - Complexity = 12
                // Dst: (SHRA_QB:v4i8 v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt)
/*4845*/      /*Scope*/ 11, /*->4857*/
/*4846*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4848*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i8 1150:iPTR, DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_QB:v4i8 DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa)
/*4857*/      0, /*End of Scope*/
/*4858*/    /*Scope*/ 42, /*->4901*/
/*4859*/      OPC_CheckInteger, 3|128,9/*1155*/, 
/*4862*/      OPC_MoveParent,
/*4863*/      OPC_RecordChild1, // #0 = $a
/*4864*/      OPC_RecordChild2, // #1 = $shamt
/*4865*/      OPC_Scope, 21, /*->4888*/ // 2 children in Scope
/*4867*/        OPC_MoveChild, 2,
/*4869*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4872*/        OPC_CheckPredicate, 24, // Predicate_immZExt3
/*4874*/        OPC_MoveParent,
/*4875*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4877*/        OPC_EmitConvertToTarget, 1,
/*4879*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRL_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v4i8 1155:iPTR, v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt) - Complexity = 12
                // Dst: (SHRL_QB:v4i8 v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt)
/*4888*/      /*Scope*/ 11, /*->4900*/
/*4889*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4891*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRLV_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i8 1155:iPTR, DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRLV_QB:v4i8 DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa)
/*4900*/      0, /*End of Scope*/
/*4901*/    /*Scope*/ 17, /*->4919*/
/*4902*/      OPC_CheckInteger, 112|128,8/*1136*/, 
/*4905*/      OPC_MoveParent,
/*4906*/      OPC_RecordChild1, // #0 = $rs
/*4907*/      OPC_RecordChild2, // #1 = $rt
/*4908*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4910*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECRQ_QB_PH), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1136:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECRQ_QB_PH:v4i8 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4919*/    /*Scope*/ 17, /*->4937*/
/*4920*/      OPC_CheckInteger, 111|128,8/*1135*/, 
/*4923*/      OPC_MoveParent,
/*4924*/      OPC_RecordChild1, // #0 = $rs
/*4925*/      OPC_RecordChild2, // #1 = $rt
/*4926*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4928*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECRQ_PH_W), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1135:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (PRECRQ_PH_W:v2i16 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*4937*/    /*Scope*/ 15, /*->4953*/
/*4938*/      OPC_CheckInteger, 100|128,8/*1124*/, 
/*4941*/      OPC_MoveParent,
/*4942*/      OPC_RecordChild1, // #0 = $rt
/*4943*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4945*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQU_PH_QBL), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1124:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEQU_PH_QBL:v2i16 DSPRegs:v4i8:$rt)
/*4953*/    /*Scope*/ 15, /*->4969*/
/*4954*/      OPC_CheckInteger, 102|128,8/*1126*/, 
/*4957*/      OPC_MoveParent,
/*4958*/      OPC_RecordChild1, // #0 = $rt
/*4959*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4961*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQU_PH_QBR), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1126:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEQU_PH_QBR:v2i16 DSPRegs:v4i8:$rt)
/*4969*/    /*Scope*/ 15, /*->4985*/
/*4970*/      OPC_CheckInteger, 101|128,8/*1125*/, 
/*4973*/      OPC_MoveParent,
/*4974*/      OPC_RecordChild1, // #0 = $rt
/*4975*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4977*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQU_PH_QBLA), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1125:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEQU_PH_QBLA:v2i16 DSPRegs:v4i8:$rt)
/*4985*/    /*Scope*/ 15, /*->5001*/
/*4986*/      OPC_CheckInteger, 103|128,8/*1127*/, 
/*4989*/      OPC_MoveParent,
/*4990*/      OPC_RecordChild1, // #0 = $rt
/*4991*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4993*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQU_PH_QBRA), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1127:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEQU_PH_QBRA:v2i16 DSPRegs:v4i8:$rt)
/*5001*/    /*Scope*/ 15, /*->5017*/
/*5002*/      OPC_CheckInteger, 104|128,8/*1128*/, 
/*5005*/      OPC_MoveParent,
/*5006*/      OPC_RecordChild1, // #0 = $rt
/*5007*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5009*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEU_PH_QBL), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1128:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEU_PH_QBL:v2i16 DSPRegs:v4i8:$rt)
/*5017*/    /*Scope*/ 15, /*->5033*/
/*5018*/      OPC_CheckInteger, 106|128,8/*1130*/, 
/*5021*/      OPC_MoveParent,
/*5022*/      OPC_RecordChild1, // #0 = $rt
/*5023*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5025*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEU_PH_QBR), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1130:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEU_PH_QBR:v2i16 DSPRegs:v4i8:$rt)
/*5033*/    /*Scope*/ 15, /*->5049*/
/*5034*/      OPC_CheckInteger, 105|128,8/*1129*/, 
/*5037*/      OPC_MoveParent,
/*5038*/      OPC_RecordChild1, // #0 = $rt
/*5039*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5041*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEU_PH_QBLA), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1129:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEU_PH_QBLA:v2i16 DSPRegs:v4i8:$rt)
/*5049*/    /*Scope*/ 15, /*->5065*/
/*5050*/      OPC_CheckInteger, 107|128,8/*1131*/, 
/*5053*/      OPC_MoveParent,
/*5054*/      OPC_RecordChild1, // #0 = $rt
/*5055*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5057*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEU_PH_QBRA), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1131:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEU_PH_QBRA:v2i16 DSPRegs:v4i8:$rt)
/*5065*/    /*Scope*/ 17, /*->5083*/
/*5066*/      OPC_CheckInteger, 95|128,8/*1119*/, 
/*5069*/      OPC_MoveParent,
/*5070*/      OPC_RecordChild1, // #0 = $rs
/*5071*/      OPC_RecordChild2, // #1 = $rt
/*5072*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5074*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PACKRL_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1119:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PACKRL_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5083*/    /*Scope*/ 17, /*->5101*/
/*5084*/      OPC_CheckInteger, 26|128,8/*1050*/, 
/*5087*/      OPC_MoveParent,
/*5088*/      OPC_RecordChild1, // #0 = $rs
/*5089*/      OPC_RecordChild2, // #1 = $rt
/*5090*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5092*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDUH_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1050:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (ADDUH_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*5101*/    /*Scope*/ 17, /*->5119*/
/*5102*/      OPC_CheckInteger, 27|128,8/*1051*/, 
/*5105*/      OPC_MoveParent,
/*5106*/      OPC_RecordChild1, // #0 = $rs
/*5107*/      OPC_RecordChild2, // #1 = $rt
/*5108*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5110*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDUH_R_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1051:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (ADDUH_R_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*5119*/    /*Scope*/ 17, /*->5137*/
/*5120*/      OPC_CheckInteger, 15|128,9/*1167*/, 
/*5123*/      OPC_MoveParent,
/*5124*/      OPC_RecordChild1, // #0 = $rs
/*5125*/      OPC_RecordChild2, // #1 = $rt
/*5126*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5128*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBUH_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1167:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (SUBUH_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*5137*/    /*Scope*/ 17, /*->5155*/
/*5138*/      OPC_CheckInteger, 16|128,9/*1168*/, 
/*5141*/      OPC_MoveParent,
/*5142*/      OPC_RecordChild1, // #0 = $rs
/*5143*/      OPC_RecordChild2, // #1 = $rt
/*5144*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5146*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBUH_R_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1168:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (SUBUH_R_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*5155*/    /*Scope*/ 17, /*->5173*/
/*5156*/      OPC_CheckInteger, 17|128,8/*1041*/, 
/*5159*/      OPC_MoveParent,
/*5160*/      OPC_RecordChild1, // #0 = $rs
/*5161*/      OPC_RecordChild2, // #1 = $rt
/*5162*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5164*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQH_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1041:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDQH_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5173*/    /*Scope*/ 17, /*->5191*/
/*5174*/      OPC_CheckInteger, 18|128,8/*1042*/, 
/*5177*/      OPC_MoveParent,
/*5178*/      OPC_RecordChild1, // #0 = $rs
/*5179*/      OPC_RecordChild2, // #1 = $rt
/*5180*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5182*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQH_R_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1042:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDQH_R_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5191*/    /*Scope*/ 17, /*->5209*/
/*5192*/      OPC_CheckInteger, 7|128,9/*1159*/, 
/*5195*/      OPC_MoveParent,
/*5196*/      OPC_RecordChild1, // #0 = $rs
/*5197*/      OPC_RecordChild2, // #1 = $rt
/*5198*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5200*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQH_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1159:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBQH_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5209*/    /*Scope*/ 17, /*->5227*/
/*5210*/      OPC_CheckInteger, 8|128,9/*1160*/, 
/*5213*/      OPC_MoveParent,
/*5214*/      OPC_RecordChild1, // #0 = $rs
/*5215*/      OPC_RecordChild2, // #1 = $rt
/*5216*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5218*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQH_R_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1160:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBQH_R_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5227*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 13|128,1/*141*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->5373
/*5232*/    OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*5233*/    OPC_MoveChild, 1,
/*5235*/    OPC_Scope, 27, /*->5264*/ // 7 children in Scope
/*5237*/      OPC_CheckInteger, 17|128,9/*1169*/, 
/*5240*/      OPC_MoveParent,
/*5241*/      OPC_RecordChild2, // #1 = $rs
/*5242*/      OPC_RecordChild3, // #2 = $mask
/*5243*/      OPC_MoveChild, 3,
/*5245*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5248*/      OPC_CheckPredicate, 22, // Predicate_immZExt10
/*5250*/      OPC_MoveParent,
/*5251*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5253*/      OPC_EmitMergeInputChains1_0,
/*5254*/      OPC_EmitConvertToTarget, 2,
/*5256*/      OPC_MorphNodeTo, TARGET_VAL(Mips::WRDSP), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (intrinsic_void 1169:iPTR, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt10>>:$mask) - Complexity = 12
              // Dst: (WRDSP CPURegs:i32:$rs, (imm:i32):$mask)
/*5264*/    /*Scope*/ 17, /*->5282*/
/*5265*/      OPC_CheckInteger, 42|128,8/*1066*/, 
/*5268*/      OPC_MoveParent,
/*5269*/      OPC_RecordChild2, // #1 = $rs
/*5270*/      OPC_RecordChild3, // #2 = $rt
/*5271*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5273*/      OPC_EmitMergeInputChains1_0,
/*5274*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPU_EQ_QB), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1066:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPU_EQ_QB DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*5282*/    /*Scope*/ 17, /*->5300*/
/*5283*/      OPC_CheckInteger, 44|128,8/*1068*/, 
/*5286*/      OPC_MoveParent,
/*5287*/      OPC_RecordChild2, // #1 = $rs
/*5288*/      OPC_RecordChild3, // #2 = $rt
/*5289*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5291*/      OPC_EmitMergeInputChains1_0,
/*5292*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPU_LT_QB), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1068:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPU_LT_QB DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*5300*/    /*Scope*/ 17, /*->5318*/
/*5301*/      OPC_CheckInteger, 43|128,8/*1067*/, 
/*5304*/      OPC_MoveParent,
/*5305*/      OPC_RecordChild2, // #1 = $rs
/*5306*/      OPC_RecordChild3, // #2 = $rt
/*5307*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5309*/      OPC_EmitMergeInputChains1_0,
/*5310*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPU_LE_QB), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1067:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPU_LE_QB DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*5318*/    /*Scope*/ 17, /*->5336*/
/*5319*/      OPC_CheckInteger, 33|128,8/*1057*/, 
/*5322*/      OPC_MoveParent,
/*5323*/      OPC_RecordChild2, // #1 = $rs
/*5324*/      OPC_RecordChild3, // #2 = $rt
/*5325*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5327*/      OPC_EmitMergeInputChains1_0,
/*5328*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMP_EQ_PH), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1057:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (CMP_EQ_PH DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5336*/    /*Scope*/ 17, /*->5354*/
/*5337*/      OPC_CheckInteger, 35|128,8/*1059*/, 
/*5340*/      OPC_MoveParent,
/*5341*/      OPC_RecordChild2, // #1 = $rs
/*5342*/      OPC_RecordChild3, // #2 = $rt
/*5343*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5345*/      OPC_EmitMergeInputChains1_0,
/*5346*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMP_LT_PH), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1059:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (CMP_LT_PH DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5354*/    /*Scope*/ 17, /*->5372*/
/*5355*/      OPC_CheckInteger, 34|128,8/*1058*/, 
/*5358*/      OPC_MoveParent,
/*5359*/      OPC_RecordChild2, // #1 = $rs
/*5360*/      OPC_RecordChild3, // #2 = $rt
/*5361*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5363*/      OPC_EmitMergeInputChains1_0,
/*5364*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMP_LE_PH), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1058:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (CMP_LE_PH DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5372*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 69|128,1/*197*/,  TARGET_VAL(ISD::XOR),// ->5574
/*5377*/    OPC_Scope, 50, /*->5429*/ // 2 children in Scope
/*5379*/      OPC_MoveChild, 0,
/*5381*/      OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*5384*/      OPC_RecordChild0, // #0 = $rs
/*5385*/      OPC_RecordChild1, // #1 = $rt
/*5386*/      OPC_MoveParent,
/*5387*/      OPC_MoveChild, 1,
/*5389*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5400*/      OPC_MoveParent,
/*5401*/      OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->5415
/*5404*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5406*/        OPC_MorphNodeTo, TARGET_VAL(Mips::NOR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i32 (or:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt), -1:i32) - Complexity = 11
                // Dst: (NOR:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
              /*SwitchType*/ 11,  MVT::i64,// ->5428
/*5417*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5419*/        OPC_MorphNodeTo, TARGET_VAL(Mips::NOR64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i64 (or:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt), -1:i64) - Complexity = 11
                // Dst: (NOR64:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
              0, // EndSwitchType
/*5429*/    /*Scope*/ 14|128,1/*142*/, /*->5573*/
/*5431*/      OPC_RecordChild0, // #0 = $in
/*5432*/      OPC_Scope, 44, /*->5478*/ // 2 children in Scope
/*5434*/        OPC_MoveChild, 1,
/*5436*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5447*/        OPC_MoveParent,
/*5448*/        OPC_CheckType, MVT::i32,
/*5450*/        OPC_Scope, 14, /*->5466*/ // 2 children in Scope
/*5452*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5454*/          OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5457*/          OPC_MorphNodeTo, TARGET_VAL(Mips::NOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 CPURegs:i32:$in, -1:i32) - Complexity = 8
                  // Dst: (NOR:i32 CPURegsOpnd:i32:$in, ZERO:i32)
/*5466*/        /*Scope*/ 10, /*->5477*/
/*5467*/          OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*5469*/          OPC_MorphNodeTo, TARGET_VAL(Mips::NotRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (xor:i32 CPU16Regs:i32:$r, -1:i32) - Complexity = 8
                  // Dst: (NotRxRy16:i32 CPU16Regs:i32:$r)
/*5477*/        0, /*End of Scope*/
/*5478*/      /*Scope*/ 93, /*->5572*/
/*5479*/        OPC_RecordChild1, // #1 = $imm16
/*5480*/        OPC_Scope, 46, /*->5528*/ // 3 children in Scope
/*5482*/          OPC_MoveChild, 1,
/*5484*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5487*/          OPC_CheckPredicate, 27, // Predicate_immZExt16
/*5489*/          OPC_MoveParent,
/*5490*/          OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->5509
/*5493*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5495*/            OPC_EmitConvertToTarget, 1,
/*5497*/            OPC_EmitNodeXForm, 0, 2, // LO16
/*5500*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 CPURegsOpnd:i32:$rs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                    // Dst: (XORi:i32 CPURegsOpnd:i32:$rs, (LO16:i32 (imm:i32):$imm16))
                  /*SwitchType*/ 16,  MVT::i64,// ->5527
/*5511*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5513*/            OPC_EmitConvertToTarget, 1,
/*5515*/            OPC_EmitNodeXForm, 0, 2, // LO16
/*5518*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XORi64), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 CPU64RegsOpnd:i64:$rs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                    // Dst: (XORi64:i64 CPU64RegsOpnd:i64:$rs, (LO16:i64 (imm:i64):$imm16))
                  0, // EndSwitchType
/*5528*/        /*Scope*/ 28, /*->5557*/
/*5529*/          OPC_CheckType, MVT::i32,
/*5531*/          OPC_Scope, 11, /*->5544*/ // 2 children in Scope
/*5533*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5535*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XOR), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                    // Dst: (XOR:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*5544*/          /*Scope*/ 11, /*->5556*/
/*5545*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*5547*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*5556*/          0, /*End of Scope*/
/*5557*/        /*Scope*/ 13, /*->5571*/
/*5558*/          OPC_CheckType, MVT::i64,
/*5560*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5562*/          OPC_MorphNodeTo, TARGET_VAL(Mips::XOR64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
                  // Dst: (XOR64:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*5571*/        0, /*End of Scope*/
/*5572*/      0, /*End of Scope*/
/*5573*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 116|128,11/*1524*/,  TARGET_VAL(ISD::BRCOND),// ->7102
/*5578*/    OPC_RecordNode,   // #0 = 'brcond' chained node
/*5579*/    OPC_Scope, 42|128,11/*1450*/, /*->7032*/ // 2 children in Scope
/*5582*/      OPC_MoveChild, 1,
/*5584*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*5587*/      OPC_RecordChild0, // #1 = $rs
/*5588*/      OPC_Scope, 116|128,6/*884*/, /*->6475*/ // 2 children in Scope
/*5591*/        OPC_CheckChild0Type, MVT::i32,
/*5593*/        OPC_Scope, 24|128,2/*280*/, /*->5876*/ // 2 children in Scope
/*5596*/          OPC_MoveChild, 1,
/*5598*/          OPC_Scope, 77|128,1/*205*/, /*->5806*/ // 3 children in Scope
/*5601*/            OPC_CheckInteger, 0, 
/*5603*/            OPC_MoveParent,
/*5604*/            OPC_MoveChild, 2,
/*5606*/            OPC_Scope, 24, /*->5632*/ // 7 children in Scope
/*5608*/              OPC_CheckCondCode, ISD::SETGE,
/*5610*/              OPC_MoveParent,
/*5611*/              OPC_CheckType, MVT::i32,
/*5613*/              OPC_MoveParent,
/*5614*/              OPC_RecordChild2, // #2 = $offset
/*5615*/              OPC_MoveChild, 2,
/*5617*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5620*/              OPC_MoveParent,
/*5621*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5623*/              OPC_EmitMergeInputChains1_0,
/*5624*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BGEZ), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 CPURegsOpnd:i32:$rs, 0:i32, SETGE:Other), (bb:Other):$offset) - Complexity = 11
                      // Dst: (BGEZ CPURegsOpnd:i32:$rs, (bb:Other):$offset)
/*5632*/            /*Scope*/ 24, /*->5657*/
/*5633*/              OPC_CheckCondCode, ISD::SETGT,
/*5635*/              OPC_MoveParent,
/*5636*/              OPC_CheckType, MVT::i32,
/*5638*/              OPC_MoveParent,
/*5639*/              OPC_RecordChild2, // #2 = $offset
/*5640*/              OPC_MoveChild, 2,
/*5642*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5645*/              OPC_MoveParent,
/*5646*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5648*/              OPC_EmitMergeInputChains1_0,
/*5649*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BGTZ), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 CPURegsOpnd:i32:$rs, 0:i32, SETGT:Other), (bb:Other):$offset) - Complexity = 11
                      // Dst: (BGTZ CPURegsOpnd:i32:$rs, (bb:Other):$offset)
/*5657*/            /*Scope*/ 24, /*->5682*/
/*5658*/              OPC_CheckCondCode, ISD::SETLE,
/*5660*/              OPC_MoveParent,
/*5661*/              OPC_CheckType, MVT::i32,
/*5663*/              OPC_MoveParent,
/*5664*/              OPC_RecordChild2, // #2 = $offset
/*5665*/              OPC_MoveChild, 2,
/*5667*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5670*/              OPC_MoveParent,
/*5671*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5673*/              OPC_EmitMergeInputChains1_0,
/*5674*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BLEZ), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 CPURegsOpnd:i32:$rs, 0:i32, SETLE:Other), (bb:Other):$offset) - Complexity = 11
                      // Dst: (BLEZ CPURegsOpnd:i32:$rs, (bb:Other):$offset)
/*5682*/            /*Scope*/ 24, /*->5707*/
/*5683*/              OPC_CheckCondCode, ISD::SETLT,
/*5685*/              OPC_MoveParent,
/*5686*/              OPC_CheckType, MVT::i32,
/*5688*/              OPC_MoveParent,
/*5689*/              OPC_RecordChild2, // #2 = $offset
/*5690*/              OPC_MoveChild, 2,
/*5692*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5695*/              OPC_MoveParent,
/*5696*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5698*/              OPC_EmitMergeInputChains1_0,
/*5699*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BLTZ), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 CPURegsOpnd:i32:$rs, 0:i32, SETLT:Other), (bb:Other):$offset) - Complexity = 11
                      // Dst: (BLTZ CPURegsOpnd:i32:$rs, (bb:Other):$offset)
/*5707*/            /*Scope*/ 28, /*->5736*/
/*5708*/              OPC_CheckCondCode, ISD::SETNE,
/*5710*/              OPC_MoveParent,
/*5711*/              OPC_CheckType, MVT::i32,
/*5713*/              OPC_MoveParent,
/*5714*/              OPC_RecordChild2, // #2 = $dst
/*5715*/              OPC_MoveChild, 2,
/*5717*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5720*/              OPC_MoveParent,
/*5721*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5723*/              OPC_EmitMergeInputChains1_0,
/*5724*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5727*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), (bb:Other):$dst) - Complexity = 11
                      // Dst: (BNE CPURegs:i32:$lhs, ZERO:i32, (bb:Other):$dst)
/*5736*/            /*Scope*/ 43, /*->5780*/
/*5737*/              OPC_CheckCondCode, ISD::SETEQ,
/*5739*/              OPC_MoveParent,
/*5740*/              OPC_CheckType, MVT::i32,
/*5742*/              OPC_MoveParent,
/*5743*/              OPC_RecordChild2, // #2 = $dst
/*5744*/              OPC_MoveChild, 2,
/*5746*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5749*/              OPC_MoveParent,
/*5750*/              OPC_Scope, 15, /*->5767*/ // 2 children in Scope
/*5752*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5754*/                OPC_EmitMergeInputChains1_0,
/*5755*/                OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5758*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                        // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), (bb:Other):$dst) - Complexity = 11
                        // Dst: (BEQ CPURegs:i32:$lhs, ZERO:i32, (bb:Other):$dst)
/*5767*/              /*Scope*/ 11, /*->5779*/
/*5768*/                OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*5770*/                OPC_EmitMergeInputChains1_0,
/*5771*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BeqzRxImmX16), 0|OPFL_Chain,
                            0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                        // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, 0:i32, SETEQ:Other), (bb:Other):$targ16) - Complexity = 11
                        // Dst: (BeqzRxImmX16 CPU16Regs:i32:$rx, (bb:Other):$targ16)
/*5779*/              0, /*End of Scope*/
/*5780*/            /*Scope*/ 24, /*->5805*/
/*5781*/              OPC_CheckCondCode, ISD::SETNE,
/*5783*/              OPC_MoveParent,
/*5784*/              OPC_CheckType, MVT::i32,
/*5786*/              OPC_MoveParent,
/*5787*/              OPC_RecordChild2, // #2 = $targ16
/*5788*/              OPC_MoveChild, 2,
/*5790*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5793*/              OPC_MoveParent,
/*5794*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*5796*/              OPC_EmitMergeInputChains1_0,
/*5797*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BnezRxImmX16), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, 0:i32, SETNE:Other), (bb:Other):$targ16) - Complexity = 11
                      // Dst: (BnezRxImmX16 CPU16Regs:i32:$rx, (bb:Other):$targ16)
/*5805*/            0, /*End of Scope*/
/*5806*/          /*Scope*/ 29, /*->5836*/
/*5807*/            OPC_CheckInteger, 1, 
/*5809*/            OPC_MoveParent,
/*5810*/            OPC_MoveChild, 2,
/*5812*/            OPC_CheckCondCode, ISD::SETLT,
/*5814*/            OPC_MoveParent,
/*5815*/            OPC_CheckType, MVT::i32,
/*5817*/            OPC_MoveParent,
/*5818*/            OPC_RecordChild2, // #2 = $dst
/*5819*/            OPC_MoveChild, 2,
/*5821*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5824*/            OPC_MoveParent,
/*5825*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5827*/            OPC_EmitMergeInputChains1_0,
/*5828*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BLEZ), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 i32:i32:$lhs, 1:i32, SETLT:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BLEZ i32:i32:$lhs, (bb:Other):$dst)
/*5836*/          /*Scope*/ 38, /*->5875*/
/*5837*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5848*/            OPC_MoveParent,
/*5849*/            OPC_MoveChild, 2,
/*5851*/            OPC_CheckCondCode, ISD::SETGT,
/*5853*/            OPC_MoveParent,
/*5854*/            OPC_CheckType, MVT::i32,
/*5856*/            OPC_MoveParent,
/*5857*/            OPC_RecordChild2, // #2 = $dst
/*5858*/            OPC_MoveChild, 2,
/*5860*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5863*/            OPC_MoveParent,
/*5864*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5866*/            OPC_EmitMergeInputChains1_0,
/*5867*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BGEZ), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 i32:i32:$lhs, -1:i32, SETGT:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BGEZ i32:i32:$lhs, (bb:Other):$dst)
/*5875*/          0, /*End of Scope*/
/*5876*/        /*Scope*/ 84|128,4/*596*/, /*->6474*/
/*5878*/          OPC_RecordChild1, // #2 = $rhs
/*5879*/          OPC_Scope, 97|128,1/*225*/, /*->6107*/ // 2 children in Scope
/*5882*/            OPC_MoveChild, 1,
/*5884*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5887*/            OPC_Scope, 87, /*->5976*/ // 4 children in Scope
/*5889*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*5891*/              OPC_MoveParent,
/*5892*/              OPC_MoveChild, 2,
/*5894*/              OPC_Scope, 39, /*->5935*/ // 2 children in Scope
/*5896*/                OPC_CheckCondCode, ISD::SETGE,
/*5898*/                OPC_MoveParent,
/*5899*/                OPC_CheckType, MVT::i32,
/*5901*/                OPC_MoveParent,
/*5902*/                OPC_RecordChild2, // #3 = $dst
/*5903*/                OPC_MoveChild, 2,
/*5905*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5908*/                OPC_MoveParent,
/*5909*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5911*/                OPC_EmitMergeInputChains1_0,
/*5912*/                OPC_EmitConvertToTarget, 2,
/*5914*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*5923*/                OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5926*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                        // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 10
                        // Dst: (BEQ (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*5935*/              /*Scope*/ 39, /*->5975*/
/*5936*/                OPC_CheckCondCode, ISD::SETUGE,
/*5938*/                OPC_MoveParent,
/*5939*/                OPC_CheckType, MVT::i32,
/*5941*/                OPC_MoveParent,
/*5942*/                OPC_RecordChild2, // #3 = $dst
/*5943*/                OPC_MoveChild, 2,
/*5945*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5948*/                OPC_MoveParent,
/*5949*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5951*/                OPC_EmitMergeInputChains1_0,
/*5952*/                OPC_EmitConvertToTarget, 2,
/*5954*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*5963*/                OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5966*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                        // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 10
                        // Dst: (BEQ (SLTiu:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*5975*/              0, /*End of Scope*/
/*5976*/            /*Scope*/ 32, /*->6009*/
/*5977*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*5979*/              OPC_MoveParent,
/*5980*/              OPC_MoveChild, 2,
/*5982*/              OPC_CheckCondCode, ISD::SETEQ,
/*5984*/              OPC_MoveParent,
/*5985*/              OPC_CheckType, MVT::i32,
/*5987*/              OPC_MoveParent,
/*5988*/              OPC_RecordChild2, // #3 = $targ16
/*5989*/              OPC_MoveChild, 2,
/*5991*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5994*/              OPC_MoveParent,
/*5995*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*5997*/              OPC_EmitMergeInputChains1_0,
/*5998*/              OPC_EmitConvertToTarget, 2,
/*6000*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8CmpiX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 4, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm, SETEQ:Other), (bb:Other):$targ16) - Complexity = 10
                      // Dst: (BteqzT8CmpiX16 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, (bb:Other):$targ16)
/*6009*/            /*Scope*/ 63, /*->6073*/
/*6010*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*6012*/              OPC_MoveParent,
/*6013*/              OPC_MoveChild, 2,
/*6015*/              OPC_Scope, 27, /*->6044*/ // 2 children in Scope
/*6017*/                OPC_CheckCondCode, ISD::SETGE,
/*6019*/                OPC_MoveParent,
/*6020*/                OPC_CheckType, MVT::i32,
/*6022*/                OPC_MoveParent,
/*6023*/                OPC_RecordChild2, // #3 = $imm16
/*6024*/                OPC_MoveChild, 2,
/*6026*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6029*/                OPC_MoveParent,
/*6030*/                OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6032*/                OPC_EmitMergeInputChains1_0,
/*6033*/                OPC_EmitConvertToTarget, 2,
/*6035*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8SltiX16), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 1, 4, 3, 
                        // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, SETGE:Other), (bb:Other):$imm16) - Complexity = 10
                        // Dst: (BteqzT8SltiX16 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, (bb:Other):$imm16)
/*6044*/              /*Scope*/ 27, /*->6072*/
/*6045*/                OPC_CheckCondCode, ISD::SETLT,
/*6047*/                OPC_MoveParent,
/*6048*/                OPC_CheckType, MVT::i32,
/*6050*/                OPC_MoveParent,
/*6051*/                OPC_RecordChild2, // #3 = $imm16
/*6052*/                OPC_MoveChild, 2,
/*6054*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6057*/                OPC_MoveParent,
/*6058*/                OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6060*/                OPC_EmitMergeInputChains1_0,
/*6061*/                OPC_EmitConvertToTarget, 2,
/*6063*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8SltiX16), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 1, 4, 3, 
                        // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, SETLT:Other), (bb:Other):$imm16) - Complexity = 10
                        // Dst: (BtnezT8SltiX16 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, (bb:Other):$imm16)
/*6072*/              0, /*End of Scope*/
/*6073*/            /*Scope*/ 32, /*->6106*/
/*6074*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*6076*/              OPC_MoveParent,
/*6077*/              OPC_MoveChild, 2,
/*6079*/              OPC_CheckCondCode, ISD::SETNE,
/*6081*/              OPC_MoveParent,
/*6082*/              OPC_CheckType, MVT::i32,
/*6084*/              OPC_MoveParent,
/*6085*/              OPC_RecordChild2, // #3 = $targ16
/*6086*/              OPC_MoveChild, 2,
/*6088*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6091*/              OPC_MoveParent,
/*6092*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6094*/              OPC_EmitMergeInputChains1_0,
/*6095*/              OPC_EmitConvertToTarget, 2,
/*6097*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8CmpiX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 4, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm, SETNE:Other), (bb:Other):$targ16) - Complexity = 10
                      // Dst: (BtnezT8CmpiX16 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, (bb:Other):$targ16)
/*6106*/            0, /*End of Scope*/
/*6107*/          /*Scope*/ 108|128,2/*364*/, /*->6473*/
/*6109*/            OPC_MoveChild, 2,
/*6111*/            OPC_Scope, 25, /*->6138*/ // 12 children in Scope
/*6113*/              OPC_CheckCondCode, ISD::SETEQ,
/*6115*/              OPC_MoveParent,
/*6116*/              OPC_CheckType, MVT::i32,
/*6118*/              OPC_MoveParent,
/*6119*/              OPC_RecordChild2, // #3 = $offset
/*6120*/              OPC_MoveChild, 2,
/*6122*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6125*/              OPC_MoveParent,
/*6126*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6128*/              OPC_EmitMergeInputChains1_0,
/*6129*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, SETEQ:Other), (bb:Other):$offset) - Complexity = 6
                      // Dst: (BEQ CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, (bb:Other):$offset)
/*6138*/            /*Scope*/ 25, /*->6164*/
/*6139*/              OPC_CheckCondCode, ISD::SETNE,
/*6141*/              OPC_MoveParent,
/*6142*/              OPC_CheckType, MVT::i32,
/*6144*/              OPC_MoveParent,
/*6145*/              OPC_RecordChild2, // #3 = $offset
/*6146*/              OPC_MoveChild, 2,
/*6148*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6151*/              OPC_MoveParent,
/*6152*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6154*/              OPC_EmitMergeInputChains1_0,
/*6155*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, SETNE:Other), (bb:Other):$offset) - Complexity = 6
                      // Dst: (BNE CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, (bb:Other):$offset)
/*6164*/            /*Scope*/ 37, /*->6202*/
/*6165*/              OPC_CheckCondCode, ISD::SETGE,
/*6167*/              OPC_MoveParent,
/*6168*/              OPC_CheckType, MVT::i32,
/*6170*/              OPC_MoveParent,
/*6171*/              OPC_RecordChild2, // #3 = $dst
/*6172*/              OPC_MoveChild, 2,
/*6174*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6177*/              OPC_MoveParent,
/*6178*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6180*/              OPC_EmitMergeInputChains1_0,
/*6181*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*6190*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6193*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), ZERO:i32, (bb:Other):$dst)
/*6202*/            /*Scope*/ 37, /*->6240*/
/*6203*/              OPC_CheckCondCode, ISD::SETUGE,
/*6205*/              OPC_MoveParent,
/*6206*/              OPC_CheckType, MVT::i32,
/*6208*/              OPC_MoveParent,
/*6209*/              OPC_RecordChild2, // #3 = $dst
/*6210*/              OPC_MoveChild, 2,
/*6212*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6215*/              OPC_MoveParent,
/*6216*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6218*/              OPC_EmitMergeInputChains1_0,
/*6219*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*6228*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6231*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), ZERO:i32, (bb:Other):$dst)
/*6240*/            /*Scope*/ 37, /*->6278*/
/*6241*/              OPC_CheckCondCode, ISD::SETLE,
/*6243*/              OPC_MoveParent,
/*6244*/              OPC_CheckType, MVT::i32,
/*6246*/              OPC_MoveParent,
/*6247*/              OPC_RecordChild2, // #3 = $dst
/*6248*/              OPC_MoveChild, 2,
/*6250*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6253*/              OPC_MoveParent,
/*6254*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6256*/              OPC_EmitMergeInputChains1_0,
/*6257*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*6266*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6269*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), ZERO:i32, (bb:Other):$dst)
/*6278*/            /*Scope*/ 37, /*->6316*/
/*6279*/              OPC_CheckCondCode, ISD::SETULE,
/*6281*/              OPC_MoveParent,
/*6282*/              OPC_CheckType, MVT::i32,
/*6284*/              OPC_MoveParent,
/*6285*/              OPC_RecordChild2, // #3 = $dst
/*6286*/              OPC_MoveChild, 2,
/*6288*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6291*/              OPC_MoveParent,
/*6292*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6294*/              OPC_EmitMergeInputChains1_0,
/*6295*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*6304*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6307*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), ZERO:i32, (bb:Other):$dst)
/*6316*/            /*Scope*/ 25, /*->6342*/
/*6317*/              OPC_CheckCondCode, ISD::SETEQ,
/*6319*/              OPC_MoveParent,
/*6320*/              OPC_CheckType, MVT::i32,
/*6322*/              OPC_MoveParent,
/*6323*/              OPC_RecordChild2, // #3 = $imm16
/*6324*/              OPC_MoveChild, 2,
/*6326*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6329*/              OPC_MoveParent,
/*6330*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6332*/              OPC_EmitMergeInputChains1_0,
/*6333*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8CmpX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETEQ:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BteqzT8CmpX16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, (bb:Other):$imm16)
/*6342*/            /*Scope*/ 25, /*->6368*/
/*6343*/              OPC_CheckCondCode, ISD::SETGT,
/*6345*/              OPC_MoveParent,
/*6346*/              OPC_CheckType, MVT::i32,
/*6348*/              OPC_MoveParent,
/*6349*/              OPC_RecordChild2, // #3 = $imm16
/*6350*/              OPC_MoveChild, 2,
/*6352*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6355*/              OPC_MoveParent,
/*6356*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6358*/              OPC_EmitMergeInputChains1_0,
/*6359*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8SltX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 2, 1, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETGT:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BtnezT8SltX16 CPU16Regs:i32:$ry, CPU16Regs:i32:$rx, (bb:Other):$imm16)
/*6368*/            /*Scope*/ 25, /*->6394*/
/*6369*/              OPC_CheckCondCode, ISD::SETGE,
/*6371*/              OPC_MoveParent,
/*6372*/              OPC_CheckType, MVT::i32,
/*6374*/              OPC_MoveParent,
/*6375*/              OPC_RecordChild2, // #3 = $imm16
/*6376*/              OPC_MoveChild, 2,
/*6378*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6381*/              OPC_MoveParent,
/*6382*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6384*/              OPC_EmitMergeInputChains1_0,
/*6385*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8SltX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETGE:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BteqzT8SltX16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, (bb:Other):$imm16)
/*6394*/            /*Scope*/ 25, /*->6420*/
/*6395*/              OPC_CheckCondCode, ISD::SETLT,
/*6397*/              OPC_MoveParent,
/*6398*/              OPC_CheckType, MVT::i32,
/*6400*/              OPC_MoveParent,
/*6401*/              OPC_RecordChild2, // #3 = $imm16
/*6402*/              OPC_MoveChild, 2,
/*6404*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6407*/              OPC_MoveParent,
/*6408*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6410*/              OPC_EmitMergeInputChains1_0,
/*6411*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8SltX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETLT:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BtnezT8SltX16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, (bb:Other):$imm16)
/*6420*/            /*Scope*/ 25, /*->6446*/
/*6421*/              OPC_CheckCondCode, ISD::SETLE,
/*6423*/              OPC_MoveParent,
/*6424*/              OPC_CheckType, MVT::i32,
/*6426*/              OPC_MoveParent,
/*6427*/              OPC_RecordChild2, // #3 = $imm16
/*6428*/              OPC_MoveChild, 2,
/*6430*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6433*/              OPC_MoveParent,
/*6434*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6436*/              OPC_EmitMergeInputChains1_0,
/*6437*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8SltX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 2, 1, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETLE:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BteqzT8SltX16 CPU16Regs:i32:$ry, CPU16Regs:i32:$rx, (bb:Other):$imm16)
/*6446*/            /*Scope*/ 25, /*->6472*/
/*6447*/              OPC_CheckCondCode, ISD::SETNE,
/*6449*/              OPC_MoveParent,
/*6450*/              OPC_CheckType, MVT::i32,
/*6452*/              OPC_MoveParent,
/*6453*/              OPC_RecordChild2, // #3 = $imm16
/*6454*/              OPC_MoveChild, 2,
/*6456*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6459*/              OPC_MoveParent,
/*6460*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6462*/              OPC_EmitMergeInputChains1_0,
/*6463*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8CmpX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETNE:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BtnezT8CmpX16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, (bb:Other):$imm16)
/*6472*/            0, /*End of Scope*/
/*6473*/          0, /*End of Scope*/
/*6474*/        0, /*End of Scope*/
/*6475*/      /*Scope*/ 42|128,4/*554*/, /*->7031*/
/*6477*/        OPC_CheckChild0Type, MVT::i64,
/*6479*/        OPC_Scope, 112|128,1/*240*/, /*->6722*/ // 2 children in Scope
/*6482*/          OPC_MoveChild, 1,
/*6484*/          OPC_Scope, 37|128,1/*165*/, /*->6652*/ // 3 children in Scope
/*6487*/            OPC_CheckInteger, 0, 
/*6489*/            OPC_MoveParent,
/*6490*/            OPC_MoveChild, 2,
/*6492*/            OPC_Scope, 24, /*->6518*/ // 6 children in Scope
/*6494*/              OPC_CheckCondCode, ISD::SETGE,
/*6496*/              OPC_MoveParent,
/*6497*/              OPC_CheckType, MVT::i32,
/*6499*/              OPC_MoveParent,
/*6500*/              OPC_RecordChild2, // #2 = $offset
/*6501*/              OPC_MoveChild, 2,
/*6503*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6506*/              OPC_MoveParent,
/*6507*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6509*/              OPC_EmitMergeInputChains1_0,
/*6510*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BGEZ64), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 CPU64RegsOpnd:i64:$rs, 0:i64, SETGE:Other), (bb:Other):$offset) - Complexity = 11
                      // Dst: (BGEZ64 CPU64RegsOpnd:i64:$rs, (bb:Other):$offset)
/*6518*/            /*Scope*/ 24, /*->6543*/
/*6519*/              OPC_CheckCondCode, ISD::SETGT,
/*6521*/              OPC_MoveParent,
/*6522*/              OPC_CheckType, MVT::i32,
/*6524*/              OPC_MoveParent,
/*6525*/              OPC_RecordChild2, // #2 = $offset
/*6526*/              OPC_MoveChild, 2,
/*6528*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6531*/              OPC_MoveParent,
/*6532*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6534*/              OPC_EmitMergeInputChains1_0,
/*6535*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BGTZ64), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 CPU64RegsOpnd:i64:$rs, 0:i64, SETGT:Other), (bb:Other):$offset) - Complexity = 11
                      // Dst: (BGTZ64 CPU64RegsOpnd:i64:$rs, (bb:Other):$offset)
/*6543*/            /*Scope*/ 24, /*->6568*/
/*6544*/              OPC_CheckCondCode, ISD::SETLE,
/*6546*/              OPC_MoveParent,
/*6547*/              OPC_CheckType, MVT::i32,
/*6549*/              OPC_MoveParent,
/*6550*/              OPC_RecordChild2, // #2 = $offset
/*6551*/              OPC_MoveChild, 2,
/*6553*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6556*/              OPC_MoveParent,
/*6557*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6559*/              OPC_EmitMergeInputChains1_0,
/*6560*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BLEZ64), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 CPU64RegsOpnd:i64:$rs, 0:i64, SETLE:Other), (bb:Other):$offset) - Complexity = 11
                      // Dst: (BLEZ64 CPU64RegsOpnd:i64:$rs, (bb:Other):$offset)
/*6568*/            /*Scope*/ 24, /*->6593*/
/*6569*/              OPC_CheckCondCode, ISD::SETLT,
/*6571*/              OPC_MoveParent,
/*6572*/              OPC_CheckType, MVT::i32,
/*6574*/              OPC_MoveParent,
/*6575*/              OPC_RecordChild2, // #2 = $offset
/*6576*/              OPC_MoveChild, 2,
/*6578*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6581*/              OPC_MoveParent,
/*6582*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6584*/              OPC_EmitMergeInputChains1_0,
/*6585*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BLTZ64), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 CPU64RegsOpnd:i64:$rs, 0:i64, SETLT:Other), (bb:Other):$offset) - Complexity = 11
                      // Dst: (BLTZ64 CPU64RegsOpnd:i64:$rs, (bb:Other):$offset)
/*6593*/            /*Scope*/ 28, /*->6622*/
/*6594*/              OPC_CheckCondCode, ISD::SETNE,
/*6596*/              OPC_MoveParent,
/*6597*/              OPC_CheckType, MVT::i32,
/*6599*/              OPC_MoveParent,
/*6600*/              OPC_RecordChild2, // #2 = $dst
/*6601*/              OPC_MoveChild, 2,
/*6603*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6606*/              OPC_MoveParent,
/*6607*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6609*/              OPC_EmitMergeInputChains1_0,
/*6610*/              OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*6613*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BNE64), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), (bb:Other):$dst) - Complexity = 11
                      // Dst: (BNE64 CPU64Regs:i64:$lhs, ZERO_64:i64, (bb:Other):$dst)
/*6622*/            /*Scope*/ 28, /*->6651*/
/*6623*/              OPC_CheckCondCode, ISD::SETEQ,
/*6625*/              OPC_MoveParent,
/*6626*/              OPC_CheckType, MVT::i32,
/*6628*/              OPC_MoveParent,
/*6629*/              OPC_RecordChild2, // #2 = $dst
/*6630*/              OPC_MoveChild, 2,
/*6632*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6635*/              OPC_MoveParent,
/*6636*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6638*/              OPC_EmitMergeInputChains1_0,
/*6639*/              OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*6642*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ64), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), (bb:Other):$dst) - Complexity = 11
                      // Dst: (BEQ64 CPU64Regs:i64:$lhs, ZERO_64:i64, (bb:Other):$dst)
/*6651*/            0, /*End of Scope*/
/*6652*/          /*Scope*/ 29, /*->6682*/
/*6653*/            OPC_CheckInteger, 1, 
/*6655*/            OPC_MoveParent,
/*6656*/            OPC_MoveChild, 2,
/*6658*/            OPC_CheckCondCode, ISD::SETLT,
/*6660*/            OPC_MoveParent,
/*6661*/            OPC_CheckType, MVT::i32,
/*6663*/            OPC_MoveParent,
/*6664*/            OPC_RecordChild2, // #2 = $dst
/*6665*/            OPC_MoveChild, 2,
/*6667*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6670*/            OPC_MoveParent,
/*6671*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6673*/            OPC_EmitMergeInputChains1_0,
/*6674*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BLEZ64), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 i64:i64:$lhs, 1:i64, SETLT:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BLEZ64 i64:i64:$lhs, (bb:Other):$dst)
/*6682*/          /*Scope*/ 38, /*->6721*/
/*6683*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6694*/            OPC_MoveParent,
/*6695*/            OPC_MoveChild, 2,
/*6697*/            OPC_CheckCondCode, ISD::SETGT,
/*6699*/            OPC_MoveParent,
/*6700*/            OPC_CheckType, MVT::i32,
/*6702*/            OPC_MoveParent,
/*6703*/            OPC_RecordChild2, // #2 = $dst
/*6704*/            OPC_MoveChild, 2,
/*6706*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6709*/            OPC_MoveParent,
/*6710*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6712*/            OPC_EmitMergeInputChains1_0,
/*6713*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BGEZ64), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 i64:i64:$lhs, -1:i64, SETGT:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BGEZ64 i64:i64:$lhs, (bb:Other):$dst)
/*6721*/          0, /*End of Scope*/
/*6722*/        /*Scope*/ 50|128,2/*306*/, /*->7030*/
/*6724*/          OPC_RecordChild1, // #2 = $rhs
/*6725*/          OPC_Scope, 92, /*->6819*/ // 2 children in Scope
/*6727*/            OPC_MoveChild, 1,
/*6729*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6732*/            OPC_CheckPredicate, 28, // Predicate_immSExt16
/*6734*/            OPC_MoveParent,
/*6735*/            OPC_MoveChild, 2,
/*6737*/            OPC_Scope, 39, /*->6778*/ // 2 children in Scope
/*6739*/              OPC_CheckCondCode, ISD::SETGE,
/*6741*/              OPC_MoveParent,
/*6742*/              OPC_CheckType, MVT::i32,
/*6744*/              OPC_MoveParent,
/*6745*/              OPC_RecordChild2, // #3 = $dst
/*6746*/              OPC_MoveChild, 2,
/*6748*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6751*/              OPC_MoveParent,
/*6752*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6754*/              OPC_EmitMergeInputChains1_0,
/*6755*/              OPC_EmitConvertToTarget, 2,
/*6757*/              OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*6766*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6769*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 10
                      // Dst: (BEQ (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*6778*/            /*Scope*/ 39, /*->6818*/
/*6779*/              OPC_CheckCondCode, ISD::SETUGE,
/*6781*/              OPC_MoveParent,
/*6782*/              OPC_CheckType, MVT::i32,
/*6784*/              OPC_MoveParent,
/*6785*/              OPC_RecordChild2, // #3 = $dst
/*6786*/              OPC_MoveChild, 2,
/*6788*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6791*/              OPC_MoveParent,
/*6792*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6794*/              OPC_EmitMergeInputChains1_0,
/*6795*/              OPC_EmitConvertToTarget, 2,
/*6797*/              OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*6806*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6809*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 10
                      // Dst: (BEQ (SLTiu64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*6818*/            0, /*End of Scope*/
/*6819*/          /*Scope*/ 80|128,1/*208*/, /*->7029*/
/*6821*/            OPC_MoveChild, 2,
/*6823*/            OPC_Scope, 25, /*->6850*/ // 6 children in Scope
/*6825*/              OPC_CheckCondCode, ISD::SETEQ,
/*6827*/              OPC_MoveParent,
/*6828*/              OPC_CheckType, MVT::i32,
/*6830*/              OPC_MoveParent,
/*6831*/              OPC_RecordChild2, // #3 = $offset
/*6832*/              OPC_MoveChild, 2,
/*6834*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6837*/              OPC_MoveParent,
/*6838*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6840*/              OPC_EmitMergeInputChains1_0,
/*6841*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ64), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt, SETEQ:Other), (bb:Other):$offset) - Complexity = 6
                      // Dst: (BEQ64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt, (bb:Other):$offset)
/*6850*/            /*Scope*/ 25, /*->6876*/
/*6851*/              OPC_CheckCondCode, ISD::SETNE,
/*6853*/              OPC_MoveParent,
/*6854*/              OPC_CheckType, MVT::i32,
/*6856*/              OPC_MoveParent,
/*6857*/              OPC_RecordChild2, // #3 = $offset
/*6858*/              OPC_MoveChild, 2,
/*6860*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6863*/              OPC_MoveParent,
/*6864*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6866*/              OPC_EmitMergeInputChains1_0,
/*6867*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BNE64), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt, SETNE:Other), (bb:Other):$offset) - Complexity = 6
                      // Dst: (BNE64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt, (bb:Other):$offset)
/*6876*/            /*Scope*/ 37, /*->6914*/
/*6877*/              OPC_CheckCondCode, ISD::SETGE,
/*6879*/              OPC_MoveParent,
/*6880*/              OPC_CheckType, MVT::i32,
/*6882*/              OPC_MoveParent,
/*6883*/              OPC_RecordChild2, // #3 = $dst
/*6884*/              OPC_MoveChild, 2,
/*6886*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6889*/              OPC_MoveParent,
/*6890*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6892*/              OPC_EmitMergeInputChains1_0,
/*6893*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*6902*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6905*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), ZERO:i32, (bb:Other):$dst)
/*6914*/            /*Scope*/ 37, /*->6952*/
/*6915*/              OPC_CheckCondCode, ISD::SETUGE,
/*6917*/              OPC_MoveParent,
/*6918*/              OPC_CheckType, MVT::i32,
/*6920*/              OPC_MoveParent,
/*6921*/              OPC_RecordChild2, // #3 = $dst
/*6922*/              OPC_MoveChild, 2,
/*6924*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6927*/              OPC_MoveParent,
/*6928*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6930*/              OPC_EmitMergeInputChains1_0,
/*6931*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*6940*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6943*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), ZERO:i32, (bb:Other):$dst)
/*6952*/            /*Scope*/ 37, /*->6990*/
/*6953*/              OPC_CheckCondCode, ISD::SETLE,
/*6955*/              OPC_MoveParent,
/*6956*/              OPC_CheckType, MVT::i32,
/*6958*/              OPC_MoveParent,
/*6959*/              OPC_RecordChild2, // #3 = $dst
/*6960*/              OPC_MoveChild, 2,
/*6962*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6965*/              OPC_MoveParent,
/*6966*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6968*/              OPC_EmitMergeInputChains1_0,
/*6969*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*6978*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6981*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), ZERO:i32, (bb:Other):$dst)
/*6990*/            /*Scope*/ 37, /*->7028*/
/*6991*/              OPC_CheckCondCode, ISD::SETULE,
/*6993*/              OPC_MoveParent,
/*6994*/              OPC_CheckType, MVT::i32,
/*6996*/              OPC_MoveParent,
/*6997*/              OPC_RecordChild2, // #3 = $dst
/*6998*/              OPC_MoveChild, 2,
/*7000*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*7003*/              OPC_MoveParent,
/*7004*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7006*/              OPC_EmitMergeInputChains1_0,
/*7007*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*7016*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*7019*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), ZERO:i32, (bb:Other):$dst)
/*7028*/            0, /*End of Scope*/
/*7029*/          0, /*End of Scope*/
/*7030*/        0, /*End of Scope*/
/*7031*/      0, /*End of Scope*/
/*7032*/    /*Scope*/ 68, /*->7101*/
/*7033*/      OPC_RecordChild1, // #1 = $cond
/*7034*/      OPC_Scope, 39, /*->7075*/ // 2 children in Scope
/*7036*/        OPC_CheckChild1Type, MVT::i32,
/*7038*/        OPC_RecordChild2, // #2 = $dst
/*7039*/        OPC_MoveChild, 2,
/*7041*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*7044*/        OPC_MoveParent,
/*7045*/        OPC_Scope, 15, /*->7062*/ // 2 children in Scope
/*7047*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7049*/          OPC_EmitMergeInputChains1_0,
/*7050*/          OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*7053*/          OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                  // Src: (brcond CPURegs:i32:$cond, (bb:Other):$dst) - Complexity = 3
                  // Dst: (BNE CPURegs:i32:$cond, ZERO:i32, (bb:Other):$dst)
/*7062*/        /*Scope*/ 11, /*->7074*/
/*7063*/          OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*7065*/          OPC_EmitMergeInputChains1_0,
/*7066*/          OPC_MorphNodeTo, TARGET_VAL(Mips::BnezRxImmX16), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond CPU16Regs:i32:$rx, (bb:Other):$targ16) - Complexity = 3
                  // Dst: (BnezRxImmX16 CPU16Regs:i32:$rx, (bb:Other):$targ16)
/*7074*/        0, /*End of Scope*/
/*7075*/      /*Scope*/ 24, /*->7100*/
/*7076*/        OPC_CheckChild1Type, MVT::i64,
/*7078*/        OPC_RecordChild2, // #2 = $dst
/*7079*/        OPC_MoveChild, 2,
/*7081*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*7084*/        OPC_MoveParent,
/*7085*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7087*/        OPC_EmitMergeInputChains1_0,
/*7088*/        OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*7091*/        OPC_MorphNodeTo, TARGET_VAL(Mips::BNE64), 0|OPFL_Chain,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                // Src: (brcond CPU64Regs:i64:$cond, (bb:Other):$dst) - Complexity = 3
                // Dst: (BNE64 CPU64Regs:i64:$cond, ZERO_64:i64, (bb:Other):$dst)
/*7100*/      0, /*End of Scope*/
/*7101*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 78,  TARGET_VAL(ISD::CTLZ),// ->7183
/*7105*/    OPC_Scope, 47, /*->7154*/ // 2 children in Scope
/*7107*/      OPC_MoveChild, 0,
/*7109*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*7112*/      OPC_RecordChild0, // #0 = $rs
/*7113*/      OPC_MoveChild, 1,
/*7115*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7126*/      OPC_MoveParent,
/*7127*/      OPC_MoveParent,
/*7128*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->7141
/*7131*/        OPC_CheckPatternPredicate, 11, // (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding())
/*7133*/        OPC_MorphNodeTo, TARGET_VAL(Mips::CLO), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (ctlz:i32 (xor:i32 CPURegsOpnd:i32:$rs, -1:i32)) - Complexity = 11
                // Dst: (CLO:i32 CPURegsOpnd:i32:$rs)
              /*SwitchType*/ 10,  MVT::i64,// ->7153
/*7143*/        OPC_CheckPatternPredicate, 11, // (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding())
/*7145*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DCLO), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (ctlz:i64 (xor:i64 CPU64RegsOpnd:i64:$rs, -1:i64)) - Complexity = 11
                // Dst: (DCLO:i64 CPU64RegsOpnd:i64:$rs)
              0, // EndSwitchType
/*7154*/    /*Scope*/ 27, /*->7182*/
/*7155*/      OPC_RecordChild0, // #0 = $rs
/*7156*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->7169
/*7159*/        OPC_CheckPatternPredicate, 11, // (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding())
/*7161*/        OPC_MorphNodeTo, TARGET_VAL(Mips::CLZ), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (ctlz:i32 CPURegsOpnd:i32:$rs) - Complexity = 3
                // Dst: (CLZ:i32 CPURegsOpnd:i32:$rs)
              /*SwitchType*/ 10,  MVT::i64,// ->7181
/*7171*/        OPC_CheckPatternPredicate, 11, // (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding())
/*7173*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DCLZ), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (ctlz:i64 CPU64RegsOpnd:i64:$rs) - Complexity = 3
                // Dst: (DCLZ:i64 CPU64RegsOpnd:i64:$rs)
              0, // EndSwitchType
/*7182*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 79|128,33/*4303*/,  TARGET_VAL(ISD::SELECT),// ->11490
/*7187*/    OPC_Scope, 40|128,32/*4136*/, /*->11326*/ // 2 children in Scope
/*7190*/      OPC_MoveChild, 0,
/*7192*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*7195*/      OPC_RecordChild0, // #0 = $lhs
/*7196*/      OPC_Scope, 6|128,19/*2438*/, /*->9637*/ // 2 children in Scope
/*7199*/        OPC_CheckChild0Type, MVT::i32,
/*7201*/        OPC_Scope, 5|128,1/*133*/, /*->7337*/ // 4 children in Scope
/*7204*/          OPC_MoveChild, 1,
/*7206*/          OPC_CheckInteger, 0, 
/*7208*/          OPC_MoveParent,
/*7209*/          OPC_MoveChild, 2,
/*7211*/          OPC_Scope, 38, /*->7251*/ // 4 children in Scope
/*7213*/            OPC_CheckCondCode, ISD::SETEQ,
/*7215*/            OPC_MoveParent,
/*7216*/            OPC_CheckType, MVT::i32,
/*7218*/            OPC_MoveParent,
/*7219*/            OPC_RecordChild1, // #1 = $T
/*7220*/            OPC_RecordChild2, // #2 = $F
/*7221*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->7236
/*7224*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7226*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 11
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, CPURegs:i32:$lhs, CPURegs:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->7250
/*7238*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7240*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 11
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, CPURegs:i32:$lhs, CPU64Regs:i64:$F)
                    0, // EndSwitchType
/*7251*/          /*Scope*/ 38, /*->7290*/
/*7252*/            OPC_CheckCondCode, ISD::SETNE,
/*7254*/            OPC_MoveParent,
/*7255*/            OPC_CheckType, MVT::i32,
/*7257*/            OPC_MoveParent,
/*7258*/            OPC_RecordChild1, // #1 = $T
/*7259*/            OPC_RecordChild2, // #2 = $F
/*7260*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->7275
/*7263*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7265*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 11
                      // Dst: (MOVN_I_I:i32 CPURegs:i32:$T, CPURegs:i32:$lhs, CPURegs:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->7289
/*7277*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7279*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 11
                      // Dst: (MOVN_I_I64:i64 CPU64Regs:i64:$T, CPURegs:i32:$lhs, CPU64Regs:i64:$F)
                    0, // EndSwitchType
/*7290*/          /*Scope*/ 22, /*->7313*/
/*7291*/            OPC_CheckCondCode, ISD::SETEQ,
/*7293*/            OPC_MoveParent,
/*7294*/            OPC_CheckType, MVT::i32,
/*7296*/            OPC_MoveParent,
/*7297*/            OPC_RecordChild1, // #1 = $x
/*7298*/            OPC_RecordChild2, // #2 = $y
/*7299*/            OPC_CheckType, MVT::i32,
/*7301*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*7303*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SelBeqZ), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 0, 
                    // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, 0:i32, SETEQ:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 11
                    // Dst: (SelBeqZ:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a)
/*7313*/          /*Scope*/ 22, /*->7336*/
/*7314*/            OPC_CheckCondCode, ISD::SETNE,
/*7316*/            OPC_MoveParent,
/*7317*/            OPC_CheckType, MVT::i32,
/*7319*/            OPC_MoveParent,
/*7320*/            OPC_RecordChild1, // #1 = $x
/*7321*/            OPC_RecordChild2, // #2 = $y
/*7322*/            OPC_CheckType, MVT::i32,
/*7324*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*7326*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SelBneZ), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 0, 
                    // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, 0:i32, SETNE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 11
                    // Dst: (SelBneZ:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a)
/*7336*/          0, /*End of Scope*/
/*7337*/        /*Scope*/ 54|128,8/*1078*/, /*->8417*/
/*7339*/          OPC_RecordChild1, // #1 = $rhs
/*7340*/          OPC_Scope, 114|128,3/*498*/, /*->7841*/ // 2 children in Scope
/*7343*/            OPC_MoveChild, 1,
/*7345*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7348*/            OPC_Scope, 75, /*->7425*/ // 8 children in Scope
/*7350*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*7352*/              OPC_MoveParent,
/*7353*/              OPC_MoveChild, 2,
/*7355*/              OPC_Scope, 33, /*->7390*/ // 2 children in Scope
/*7357*/                OPC_CheckCondCode, ISD::SETGE,
/*7359*/                OPC_MoveParent,
/*7360*/                OPC_CheckType, MVT::i32,
/*7362*/                OPC_MoveParent,
/*7363*/                OPC_RecordChild1, // #2 = $T
/*7364*/                OPC_RecordChild2, // #3 = $F
/*7365*/                OPC_CheckType, MVT::i32,
/*7367*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7369*/                OPC_EmitConvertToTarget, 1,
/*7371*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7380*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), CPURegs:i32:$F)
/*7390*/              /*Scope*/ 33, /*->7424*/
/*7391*/                OPC_CheckCondCode, ISD::SETUGE,
/*7393*/                OPC_MoveParent,
/*7394*/                OPC_CheckType, MVT::i32,
/*7396*/                OPC_MoveParent,
/*7397*/                OPC_RecordChild1, // #2 = $T
/*7398*/                OPC_RecordChild2, // #3 = $F
/*7399*/                OPC_CheckType, MVT::i32,
/*7401*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7403*/                OPC_EmitConvertToTarget, 1,
/*7405*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7414*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), CPURegs:i32:$F)
/*7424*/              0, /*End of Scope*/
/*7425*/            /*Scope*/ 81, /*->7507*/
/*7426*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*7428*/              OPC_MoveParent,
/*7429*/              OPC_MoveChild, 2,
/*7431*/              OPC_Scope, 36, /*->7469*/ // 2 children in Scope
/*7433*/                OPC_CheckCondCode, ISD::SETGT,
/*7435*/                OPC_MoveParent,
/*7436*/                OPC_CheckType, MVT::i32,
/*7438*/                OPC_MoveParent,
/*7439*/                OPC_RecordChild1, // #2 = $T
/*7440*/                OPC_RecordChild2, // #3 = $F
/*7441*/                OPC_CheckType, MVT::i32,
/*7443*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7445*/                OPC_EmitConvertToTarget, 1,
/*7447*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*7450*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*7459*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTi:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), CPURegs:i32:$F)
/*7469*/              /*Scope*/ 36, /*->7506*/
/*7470*/                OPC_CheckCondCode, ISD::SETUGT,
/*7472*/                OPC_MoveParent,
/*7473*/                OPC_CheckType, MVT::i32,
/*7475*/                OPC_MoveParent,
/*7476*/                OPC_RecordChild1, // #2 = $T
/*7477*/                OPC_RecordChild2, // #3 = $F
/*7478*/                OPC_CheckType, MVT::i32,
/*7480*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7482*/                OPC_EmitConvertToTarget, 1,
/*7484*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*7487*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*7496*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTiu:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), CPURegs:i32:$F)
/*7506*/              0, /*End of Scope*/
/*7507*/            /*Scope*/ 38, /*->7546*/
/*7508*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*7510*/              OPC_MoveParent,
/*7511*/              OPC_MoveChild, 2,
/*7513*/              OPC_CheckCondCode, ISD::SETEQ,
/*7515*/              OPC_MoveParent,
/*7516*/              OPC_CheckType, MVT::i32,
/*7518*/              OPC_MoveParent,
/*7519*/              OPC_RecordChild1, // #2 = $T
/*7520*/              OPC_RecordChild2, // #3 = $F
/*7521*/              OPC_CheckType, MVT::i32,
/*7523*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7525*/              OPC_EmitConvertToTarget, 1,
/*7527*/              OPC_EmitNode, TARGET_VAL(Mips::XORi), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7536*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (XORi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16), CPURegs:i32:$F)
/*7546*/            /*Scope*/ 75, /*->7622*/
/*7547*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*7549*/              OPC_MoveParent,
/*7550*/              OPC_MoveChild, 2,
/*7552*/              OPC_Scope, 33, /*->7587*/ // 2 children in Scope
/*7554*/                OPC_CheckCondCode, ISD::SETGE,
/*7556*/                OPC_MoveParent,
/*7557*/                OPC_CheckType, MVT::i32,
/*7559*/                OPC_MoveParent,
/*7560*/                OPC_RecordChild1, // #2 = $T
/*7561*/                OPC_RecordChild2, // #3 = $F
/*7562*/                OPC_CheckType, MVT::i64,
/*7564*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7566*/                OPC_EmitConvertToTarget, 1,
/*7568*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7577*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), CPU64Regs:i64:$F)
/*7587*/              /*Scope*/ 33, /*->7621*/
/*7588*/                OPC_CheckCondCode, ISD::SETUGE,
/*7590*/                OPC_MoveParent,
/*7591*/                OPC_CheckType, MVT::i32,
/*7593*/                OPC_MoveParent,
/*7594*/                OPC_RecordChild1, // #2 = $T
/*7595*/                OPC_RecordChild2, // #3 = $F
/*7596*/                OPC_CheckType, MVT::i64,
/*7598*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7600*/                OPC_EmitConvertToTarget, 1,
/*7602*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7611*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), CPU64Regs:i64:$F)
/*7621*/              0, /*End of Scope*/
/*7622*/            /*Scope*/ 81, /*->7704*/
/*7623*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*7625*/              OPC_MoveParent,
/*7626*/              OPC_MoveChild, 2,
/*7628*/              OPC_Scope, 36, /*->7666*/ // 2 children in Scope
/*7630*/                OPC_CheckCondCode, ISD::SETGT,
/*7632*/                OPC_MoveParent,
/*7633*/                OPC_CheckType, MVT::i32,
/*7635*/                OPC_MoveParent,
/*7636*/                OPC_RecordChild1, // #2 = $T
/*7637*/                OPC_RecordChild2, // #3 = $F
/*7638*/                OPC_CheckType, MVT::i64,
/*7640*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7642*/                OPC_EmitConvertToTarget, 1,
/*7644*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*7647*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*7656*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTi:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), CPU64Regs:i64:$F)
/*7666*/              /*Scope*/ 36, /*->7703*/
/*7667*/                OPC_CheckCondCode, ISD::SETUGT,
/*7669*/                OPC_MoveParent,
/*7670*/                OPC_CheckType, MVT::i32,
/*7672*/                OPC_MoveParent,
/*7673*/                OPC_RecordChild1, // #2 = $T
/*7674*/                OPC_RecordChild2, // #3 = $F
/*7675*/                OPC_CheckType, MVT::i64,
/*7677*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7679*/                OPC_EmitConvertToTarget, 1,
/*7681*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*7684*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*7693*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTiu:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), CPU64Regs:i64:$F)
/*7703*/              0, /*End of Scope*/
/*7704*/            /*Scope*/ 38, /*->7743*/
/*7705*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*7707*/              OPC_MoveParent,
/*7708*/              OPC_MoveChild, 2,
/*7710*/              OPC_CheckCondCode, ISD::SETEQ,
/*7712*/              OPC_MoveParent,
/*7713*/              OPC_CheckType, MVT::i32,
/*7715*/              OPC_MoveParent,
/*7716*/              OPC_RecordChild1, // #2 = $T
/*7717*/              OPC_RecordChild2, // #3 = $F
/*7718*/              OPC_CheckType, MVT::i64,
/*7720*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7722*/              OPC_EmitConvertToTarget, 1,
/*7724*/              OPC_EmitNode, TARGET_VAL(Mips::XORi), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7733*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (XORi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16), CPU64Regs:i64:$F)
/*7743*/            /*Scope*/ 30, /*->7774*/
/*7744*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*7746*/              OPC_MoveParent,
/*7747*/              OPC_MoveChild, 2,
/*7749*/              OPC_CheckCondCode, ISD::SETLT,
/*7751*/              OPC_MoveParent,
/*7752*/              OPC_CheckType, MVT::i32,
/*7754*/              OPC_MoveParent,
/*7755*/              OPC_RecordChild1, // #2 = $x
/*7756*/              OPC_RecordChild2, // #3 = $y
/*7757*/              OPC_CheckType, MVT::i32,
/*7759*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*7761*/              OPC_EmitConvertToTarget, 1,
/*7763*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZSlti), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 4, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, (imm:i32)<<P:Predicate_immSExt16>>:$b, SETLT:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 10
                      // Dst: (SelTBtneZSlti:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, (imm:i32)<<P:Predicate_immSExt16>>:$b)
/*7774*/            /*Scope*/ 65, /*->7840*/
/*7775*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*7777*/              OPC_MoveParent,
/*7778*/              OPC_MoveChild, 2,
/*7780*/              OPC_Scope, 28, /*->7810*/ // 2 children in Scope
/*7782*/                OPC_CheckCondCode, ISD::SETEQ,
/*7784*/                OPC_MoveParent,
/*7785*/                OPC_CheckType, MVT::i32,
/*7787*/                OPC_MoveParent,
/*7788*/                OPC_RecordChild1, // #2 = $x
/*7789*/                OPC_RecordChild2, // #3 = $y
/*7790*/                OPC_CheckType, MVT::i32,
/*7792*/                OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*7794*/                OPC_EmitConvertToTarget, 1,
/*7796*/                OPC_EmitNodeXForm, 0, 4, // LO16
/*7799*/                OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZCmpi), 0,
                            1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 5, 
                        // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$k, SETEQ:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 10
                        // Dst: (SelTBteqZCmpi:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, (LO16:i32 (imm:i32)<<P:Predicate_immZExt16>>:$k))
/*7810*/              /*Scope*/ 28, /*->7839*/
/*7811*/                OPC_CheckCondCode, ISD::SETNE,
/*7813*/                OPC_MoveParent,
/*7814*/                OPC_CheckType, MVT::i32,
/*7816*/                OPC_MoveParent,
/*7817*/                OPC_RecordChild1, // #2 = $x
/*7818*/                OPC_RecordChild2, // #3 = $y
/*7819*/                OPC_CheckType, MVT::i32,
/*7821*/                OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*7823*/                OPC_EmitConvertToTarget, 1,
/*7825*/                OPC_EmitNodeXForm, 0, 4, // LO16
/*7828*/                OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZCmpi), 0,
                            1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 5, 
                        // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$k, SETNE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 10
                        // Dst: (SelTBtneZCmpi:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, (LO16:i32 (imm:i32)<<P:Predicate_immZExt16>>:$k))
/*7839*/              0, /*End of Scope*/
/*7840*/            0, /*End of Scope*/
/*7841*/          /*Scope*/ 61|128,4/*573*/, /*->8416*/
/*7843*/            OPC_MoveChild, 2,
/*7845*/            OPC_Scope, 31, /*->7878*/ // 19 children in Scope
/*7847*/              OPC_CheckCondCode, ISD::SETGE,
/*7849*/              OPC_MoveParent,
/*7850*/              OPC_CheckType, MVT::i32,
/*7852*/              OPC_MoveParent,
/*7853*/              OPC_RecordChild1, // #2 = $T
/*7854*/              OPC_RecordChild2, // #3 = $F
/*7855*/              OPC_CheckType, MVT::i32,
/*7857*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7859*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7868*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPURegs:i32:$F)
/*7878*/            /*Scope*/ 31, /*->7910*/
/*7879*/              OPC_CheckCondCode, ISD::SETUGE,
/*7881*/              OPC_MoveParent,
/*7882*/              OPC_CheckType, MVT::i32,
/*7884*/              OPC_MoveParent,
/*7885*/              OPC_RecordChild1, // #2 = $T
/*7886*/              OPC_RecordChild2, // #3 = $F
/*7887*/              OPC_CheckType, MVT::i32,
/*7889*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7891*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7900*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPURegs:i32:$F)
/*7910*/            /*Scope*/ 31, /*->7942*/
/*7911*/              OPC_CheckCondCode, ISD::SETLE,
/*7913*/              OPC_MoveParent,
/*7914*/              OPC_CheckType, MVT::i32,
/*7916*/              OPC_MoveParent,
/*7917*/              OPC_RecordChild1, // #2 = $T
/*7918*/              OPC_RecordChild2, // #3 = $F
/*7919*/              OPC_CheckType, MVT::i32,
/*7921*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7923*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*7932*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), CPURegs:i32:$F)
/*7942*/            /*Scope*/ 31, /*->7974*/
/*7943*/              OPC_CheckCondCode, ISD::SETULE,
/*7945*/              OPC_MoveParent,
/*7946*/              OPC_CheckType, MVT::i32,
/*7948*/              OPC_MoveParent,
/*7949*/              OPC_RecordChild1, // #2 = $T
/*7950*/              OPC_RecordChild2, // #3 = $F
/*7951*/              OPC_CheckType, MVT::i32,
/*7953*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7955*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*7964*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), CPURegs:i32:$F)
/*7974*/            /*Scope*/ 31, /*->8006*/
/*7975*/              OPC_CheckCondCode, ISD::SETEQ,
/*7977*/              OPC_MoveParent,
/*7978*/              OPC_CheckType, MVT::i32,
/*7980*/              OPC_MoveParent,
/*7981*/              OPC_RecordChild1, // #2 = $T
/*7982*/              OPC_RecordChild2, // #3 = $F
/*7983*/              OPC_CheckType, MVT::i32,
/*7985*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7987*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7996*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPURegs:i32:$F)
/*8006*/            /*Scope*/ 31, /*->8038*/
/*8007*/              OPC_CheckCondCode, ISD::SETGE,
/*8009*/              OPC_MoveParent,
/*8010*/              OPC_CheckType, MVT::i32,
/*8012*/              OPC_MoveParent,
/*8013*/              OPC_RecordChild1, // #2 = $T
/*8014*/              OPC_RecordChild2, // #3 = $F
/*8015*/              OPC_CheckType, MVT::i64,
/*8017*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8019*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8028*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPU64Regs:i64:$F)
/*8038*/            /*Scope*/ 31, /*->8070*/
/*8039*/              OPC_CheckCondCode, ISD::SETUGE,
/*8041*/              OPC_MoveParent,
/*8042*/              OPC_CheckType, MVT::i32,
/*8044*/              OPC_MoveParent,
/*8045*/              OPC_RecordChild1, // #2 = $T
/*8046*/              OPC_RecordChild2, // #3 = $F
/*8047*/              OPC_CheckType, MVT::i64,
/*8049*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8051*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8060*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPU64Regs:i64:$F)
/*8070*/            /*Scope*/ 31, /*->8102*/
/*8071*/              OPC_CheckCondCode, ISD::SETLE,
/*8073*/              OPC_MoveParent,
/*8074*/              OPC_CheckType, MVT::i32,
/*8076*/              OPC_MoveParent,
/*8077*/              OPC_RecordChild1, // #2 = $T
/*8078*/              OPC_RecordChild2, // #3 = $F
/*8079*/              OPC_CheckType, MVT::i64,
/*8081*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8083*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*8092*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), CPU64Regs:i64:$F)
/*8102*/            /*Scope*/ 31, /*->8134*/
/*8103*/              OPC_CheckCondCode, ISD::SETULE,
/*8105*/              OPC_MoveParent,
/*8106*/              OPC_CheckType, MVT::i32,
/*8108*/              OPC_MoveParent,
/*8109*/              OPC_RecordChild1, // #2 = $T
/*8110*/              OPC_RecordChild2, // #3 = $F
/*8111*/              OPC_CheckType, MVT::i64,
/*8113*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8115*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*8124*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), CPU64Regs:i64:$F)
/*8134*/            /*Scope*/ 31, /*->8166*/
/*8135*/              OPC_CheckCondCode, ISD::SETEQ,
/*8137*/              OPC_MoveParent,
/*8138*/              OPC_CheckType, MVT::i32,
/*8140*/              OPC_MoveParent,
/*8141*/              OPC_RecordChild1, // #2 = $T
/*8142*/              OPC_RecordChild2, // #3 = $F
/*8143*/              OPC_CheckType, MVT::i64,
/*8145*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8147*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8156*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPU64Regs:i64:$F)
/*8166*/            /*Scope*/ 56, /*->8223*/
/*8167*/              OPC_CheckCondCode, ISD::SETNE,
/*8169*/              OPC_MoveParent,
/*8170*/              OPC_CheckType, MVT::i32,
/*8172*/              OPC_MoveParent,
/*8173*/              OPC_RecordChild1, // #2 = $T
/*8174*/              OPC_RecordChild2, // #3 = $F
/*8175*/              OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->8199
/*8178*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8180*/                OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8189*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                        // Dst: (MOVN_I_I:i32 CPURegs:i32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPURegs:i32:$F)
                      /*SwitchType*/ 21,  MVT::i64,// ->8222
/*8201*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8203*/                OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8212*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                        // Dst: (MOVN_I_I64:i64 CPU64Regs:i64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPU64Regs:i64:$F)
                      0, // EndSwitchType
/*8223*/            /*Scope*/ 23, /*->8247*/
/*8224*/              OPC_CheckCondCode, ISD::SETGE,
/*8226*/              OPC_MoveParent,
/*8227*/              OPC_CheckType, MVT::i32,
/*8229*/              OPC_MoveParent,
/*8230*/              OPC_RecordChild1, // #2 = $x
/*8231*/              OPC_RecordChild2, // #3 = $y
/*8232*/              OPC_CheckType, MVT::i32,
/*8234*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8236*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZSlt), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 1, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETGE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZSlt:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, CPU16Regs:i32:$b)
/*8247*/            /*Scope*/ 23, /*->8271*/
/*8248*/              OPC_CheckCondCode, ISD::SETGT,
/*8250*/              OPC_MoveParent,
/*8251*/              OPC_CheckType, MVT::i32,
/*8253*/              OPC_MoveParent,
/*8254*/              OPC_RecordChild1, // #2 = $x
/*8255*/              OPC_RecordChild2, // #3 = $y
/*8256*/              OPC_CheckType, MVT::i32,
/*8258*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8260*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZSlt), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETGT:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBtneZSlt:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8271*/            /*Scope*/ 23, /*->8295*/
/*8272*/              OPC_CheckCondCode, ISD::SETUGE,
/*8274*/              OPC_MoveParent,
/*8275*/              OPC_CheckType, MVT::i32,
/*8277*/              OPC_MoveParent,
/*8278*/              OPC_RecordChild1, // #2 = $x
/*8279*/              OPC_RecordChild2, // #3 = $y
/*8280*/              OPC_CheckType, MVT::i32,
/*8282*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8284*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZSltu), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 1, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETUGE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZSltu:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, CPU16Regs:i32:$b)
/*8295*/            /*Scope*/ 23, /*->8319*/
/*8296*/              OPC_CheckCondCode, ISD::SETUGT,
/*8298*/              OPC_MoveParent,
/*8299*/              OPC_CheckType, MVT::i32,
/*8301*/              OPC_MoveParent,
/*8302*/              OPC_RecordChild1, // #2 = $x
/*8303*/              OPC_RecordChild2, // #3 = $y
/*8304*/              OPC_CheckType, MVT::i32,
/*8306*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8308*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZSltu), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETUGT:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBtneZSltu:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8319*/            /*Scope*/ 23, /*->8343*/
/*8320*/              OPC_CheckCondCode, ISD::SETLE,
/*8322*/              OPC_MoveParent,
/*8323*/              OPC_CheckType, MVT::i32,
/*8325*/              OPC_MoveParent,
/*8326*/              OPC_RecordChild1, // #2 = $x
/*8327*/              OPC_RecordChild2, // #3 = $y
/*8328*/              OPC_CheckType, MVT::i32,
/*8330*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8332*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZSlt), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETLE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZSlt:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8343*/            /*Scope*/ 23, /*->8367*/
/*8344*/              OPC_CheckCondCode, ISD::SETULE,
/*8346*/              OPC_MoveParent,
/*8347*/              OPC_CheckType, MVT::i32,
/*8349*/              OPC_MoveParent,
/*8350*/              OPC_RecordChild1, // #2 = $x
/*8351*/              OPC_RecordChild2, // #3 = $y
/*8352*/              OPC_CheckType, MVT::i32,
/*8354*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8356*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZSltu), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETULE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZSltu:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8367*/            /*Scope*/ 23, /*->8391*/
/*8368*/              OPC_CheckCondCode, ISD::SETEQ,
/*8370*/              OPC_MoveParent,
/*8371*/              OPC_CheckType, MVT::i32,
/*8373*/              OPC_MoveParent,
/*8374*/              OPC_RecordChild1, // #2 = $x
/*8375*/              OPC_RecordChild2, // #3 = $y
/*8376*/              OPC_CheckType, MVT::i32,
/*8378*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8380*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZCmp), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETEQ:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZCmp:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8391*/            /*Scope*/ 23, /*->8415*/
/*8392*/              OPC_CheckCondCode, ISD::SETNE,
/*8394*/              OPC_MoveParent,
/*8395*/              OPC_CheckType, MVT::i32,
/*8397*/              OPC_MoveParent,
/*8398*/              OPC_RecordChild1, // #2 = $x
/*8399*/              OPC_RecordChild2, // #3 = $y
/*8400*/              OPC_CheckType, MVT::i32,
/*8402*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8404*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZCmp), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETNE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBtneZCmp:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8415*/            0, /*End of Scope*/
/*8416*/          0, /*End of Scope*/
/*8417*/        /*Scope*/ 19|128,1/*147*/, /*->8566*/
/*8419*/          OPC_MoveChild, 1,
/*8421*/          OPC_CheckInteger, 0, 
/*8423*/          OPC_MoveParent,
/*8424*/          OPC_MoveChild, 2,
/*8426*/          OPC_Scope, 22, /*->8450*/ // 6 children in Scope
/*8428*/            OPC_CheckCondCode, ISD::SETEQ,
/*8430*/            OPC_MoveParent,
/*8431*/            OPC_CheckType, MVT::i32,
/*8433*/            OPC_MoveParent,
/*8434*/            OPC_RecordChild1, // #1 = $T
/*8435*/            OPC_RecordChild2, // #2 = $F
/*8436*/            OPC_CheckType, MVT::f32,
/*8438*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8440*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, CPURegs:i32:$lhs, FGR32:f32:$F)
/*8450*/          /*Scope*/ 22, /*->8473*/
/*8451*/            OPC_CheckCondCode, ISD::SETNE,
/*8453*/            OPC_MoveParent,
/*8454*/            OPC_CheckType, MVT::i32,
/*8456*/            OPC_MoveParent,
/*8457*/            OPC_RecordChild1, // #1 = $T
/*8458*/            OPC_RecordChild2, // #2 = $F
/*8459*/            OPC_CheckType, MVT::f32,
/*8461*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8463*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVN_I_S:f32 FGR32:f32:$T, CPURegs:i32:$lhs, FGR32:f32:$F)
/*8473*/          /*Scope*/ 22, /*->8496*/
/*8474*/            OPC_CheckCondCode, ISD::SETEQ,
/*8476*/            OPC_MoveParent,
/*8477*/            OPC_CheckType, MVT::i32,
/*8479*/            OPC_MoveParent,
/*8480*/            OPC_RecordChild1, // #1 = $T
/*8481*/            OPC_RecordChild2, // #2 = $F
/*8482*/            OPC_CheckType, MVT::f64,
/*8484*/            OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8486*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, CPURegs:i32:$lhs, AFGR64:f64:$F)
/*8496*/          /*Scope*/ 22, /*->8519*/
/*8497*/            OPC_CheckCondCode, ISD::SETNE,
/*8499*/            OPC_MoveParent,
/*8500*/            OPC_CheckType, MVT::i32,
/*8502*/            OPC_MoveParent,
/*8503*/            OPC_RecordChild1, // #1 = $T
/*8504*/            OPC_RecordChild2, // #2 = $F
/*8505*/            OPC_CheckType, MVT::f64,
/*8507*/            OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8509*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVN_I_D32:f64 AFGR64:f64:$T, CPURegs:i32:$lhs, AFGR64:f64:$F)
/*8519*/          /*Scope*/ 22, /*->8542*/
/*8520*/            OPC_CheckCondCode, ISD::SETEQ,
/*8522*/            OPC_MoveParent,
/*8523*/            OPC_CheckType, MVT::i32,
/*8525*/            OPC_MoveParent,
/*8526*/            OPC_RecordChild1, // #1 = $T
/*8527*/            OPC_RecordChild2, // #2 = $F
/*8528*/            OPC_CheckType, MVT::f64,
/*8530*/            OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8532*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, CPURegs:i32:$lhs, FGR64:f64:$F)
/*8542*/          /*Scope*/ 22, /*->8565*/
/*8543*/            OPC_CheckCondCode, ISD::SETNE,
/*8545*/            OPC_MoveParent,
/*8546*/            OPC_CheckType, MVT::i32,
/*8548*/            OPC_MoveParent,
/*8549*/            OPC_RecordChild1, // #1 = $T
/*8550*/            OPC_RecordChild2, // #2 = $F
/*8551*/            OPC_CheckType, MVT::f64,
/*8553*/            OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8555*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVN_I_D64:f64 FGR64:f64:$T, CPURegs:i32:$lhs, FGR64:f64:$F)
/*8565*/          0, /*End of Scope*/
/*8566*/        /*Scope*/ 44|128,8/*1068*/, /*->9636*/
/*8568*/          OPC_RecordChild1, // #1 = $rhs
/*8569*/          OPC_Scope, 97|128,3/*481*/, /*->9053*/ // 2 children in Scope
/*8572*/            OPC_MoveChild, 1,
/*8574*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8577*/            OPC_Scope, 75, /*->8654*/ // 6 children in Scope
/*8579*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*8581*/              OPC_MoveParent,
/*8582*/              OPC_MoveChild, 2,
/*8584*/              OPC_Scope, 33, /*->8619*/ // 2 children in Scope
/*8586*/                OPC_CheckCondCode, ISD::SETGE,
/*8588*/                OPC_MoveParent,
/*8589*/                OPC_CheckType, MVT::i32,
/*8591*/                OPC_MoveParent,
/*8592*/                OPC_RecordChild1, // #2 = $T
/*8593*/                OPC_RecordChild2, // #3 = $F
/*8594*/                OPC_CheckType, MVT::f32,
/*8596*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8598*/                OPC_EmitConvertToTarget, 1,
/*8600*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8609*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), FGR32:f32:$F)
/*8619*/              /*Scope*/ 33, /*->8653*/
/*8620*/                OPC_CheckCondCode, ISD::SETUGE,
/*8622*/                OPC_MoveParent,
/*8623*/                OPC_CheckType, MVT::i32,
/*8625*/                OPC_MoveParent,
/*8626*/                OPC_RecordChild1, // #2 = $T
/*8627*/                OPC_RecordChild2, // #3 = $F
/*8628*/                OPC_CheckType, MVT::f32,
/*8630*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8632*/                OPC_EmitConvertToTarget, 1,
/*8634*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8643*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f32 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), FGR32:f32:$F)
/*8653*/              0, /*End of Scope*/
/*8654*/            /*Scope*/ 81, /*->8736*/
/*8655*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*8657*/              OPC_MoveParent,
/*8658*/              OPC_MoveChild, 2,
/*8660*/              OPC_Scope, 36, /*->8698*/ // 2 children in Scope
/*8662*/                OPC_CheckCondCode, ISD::SETGT,
/*8664*/                OPC_MoveParent,
/*8665*/                OPC_CheckType, MVT::i32,
/*8667*/                OPC_MoveParent,
/*8668*/                OPC_RecordChild1, // #2 = $T
/*8669*/                OPC_RecordChild2, // #3 = $F
/*8670*/                OPC_CheckType, MVT::f32,
/*8672*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8674*/                OPC_EmitConvertToTarget, 1,
/*8676*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*8679*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*8688*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTi:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), FGR32:f32:$F)
/*8698*/              /*Scope*/ 36, /*->8735*/
/*8699*/                OPC_CheckCondCode, ISD::SETUGT,
/*8701*/                OPC_MoveParent,
/*8702*/                OPC_CheckType, MVT::i32,
/*8704*/                OPC_MoveParent,
/*8705*/                OPC_RecordChild1, // #2 = $T
/*8706*/                OPC_RecordChild2, // #3 = $F
/*8707*/                OPC_CheckType, MVT::f32,
/*8709*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8711*/                OPC_EmitConvertToTarget, 1,
/*8713*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*8716*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*8725*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTiu:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), FGR32:f32:$F)
/*8735*/              0, /*End of Scope*/
/*8736*/            /*Scope*/ 75, /*->8812*/
/*8737*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*8739*/              OPC_MoveParent,
/*8740*/              OPC_MoveChild, 2,
/*8742*/              OPC_Scope, 33, /*->8777*/ // 2 children in Scope
/*8744*/                OPC_CheckCondCode, ISD::SETGE,
/*8746*/                OPC_MoveParent,
/*8747*/                OPC_CheckType, MVT::i32,
/*8749*/                OPC_MoveParent,
/*8750*/                OPC_RecordChild1, // #2 = $T
/*8751*/                OPC_RecordChild2, // #3 = $F
/*8752*/                OPC_CheckType, MVT::f64,
/*8754*/                OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8756*/                OPC_EmitConvertToTarget, 1,
/*8758*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8767*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), AFGR64:f64:$F)
/*8777*/              /*Scope*/ 33, /*->8811*/
/*8778*/                OPC_CheckCondCode, ISD::SETUGE,
/*8780*/                OPC_MoveParent,
/*8781*/                OPC_CheckType, MVT::i32,
/*8783*/                OPC_MoveParent,
/*8784*/                OPC_RecordChild1, // #2 = $T
/*8785*/                OPC_RecordChild2, // #3 = $F
/*8786*/                OPC_CheckType, MVT::f64,
/*8788*/                OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8790*/                OPC_EmitConvertToTarget, 1,
/*8792*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8801*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), AFGR64:f64:$F)
/*8811*/              0, /*End of Scope*/
/*8812*/            /*Scope*/ 81, /*->8894*/
/*8813*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*8815*/              OPC_MoveParent,
/*8816*/              OPC_MoveChild, 2,
/*8818*/              OPC_Scope, 36, /*->8856*/ // 2 children in Scope
/*8820*/                OPC_CheckCondCode, ISD::SETGT,
/*8822*/                OPC_MoveParent,
/*8823*/                OPC_CheckType, MVT::i32,
/*8825*/                OPC_MoveParent,
/*8826*/                OPC_RecordChild1, // #2 = $T
/*8827*/                OPC_RecordChild2, // #3 = $F
/*8828*/                OPC_CheckType, MVT::f64,
/*8830*/                OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8832*/                OPC_EmitConvertToTarget, 1,
/*8834*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*8837*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*8846*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTi:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), AFGR64:f64:$F)
/*8856*/              /*Scope*/ 36, /*->8893*/
/*8857*/                OPC_CheckCondCode, ISD::SETUGT,
/*8859*/                OPC_MoveParent,
/*8860*/                OPC_CheckType, MVT::i32,
/*8862*/                OPC_MoveParent,
/*8863*/                OPC_RecordChild1, // #2 = $T
/*8864*/                OPC_RecordChild2, // #3 = $F
/*8865*/                OPC_CheckType, MVT::f64,
/*8867*/                OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8869*/                OPC_EmitConvertToTarget, 1,
/*8871*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*8874*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*8883*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTiu:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), AFGR64:f64:$F)
/*8893*/              0, /*End of Scope*/
/*8894*/            /*Scope*/ 75, /*->8970*/
/*8895*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*8897*/              OPC_MoveParent,
/*8898*/              OPC_MoveChild, 2,
/*8900*/              OPC_Scope, 33, /*->8935*/ // 2 children in Scope
/*8902*/                OPC_CheckCondCode, ISD::SETGE,
/*8904*/                OPC_MoveParent,
/*8905*/                OPC_CheckType, MVT::i32,
/*8907*/                OPC_MoveParent,
/*8908*/                OPC_RecordChild1, // #2 = $T
/*8909*/                OPC_RecordChild2, // #3 = $F
/*8910*/                OPC_CheckType, MVT::f64,
/*8912*/                OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8914*/                OPC_EmitConvertToTarget, 1,
/*8916*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8925*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), FGR64:f64:$F)
/*8935*/              /*Scope*/ 33, /*->8969*/
/*8936*/                OPC_CheckCondCode, ISD::SETUGE,
/*8938*/                OPC_MoveParent,
/*8939*/                OPC_CheckType, MVT::i32,
/*8941*/                OPC_MoveParent,
/*8942*/                OPC_RecordChild1, // #2 = $T
/*8943*/                OPC_RecordChild2, // #3 = $F
/*8944*/                OPC_CheckType, MVT::f64,
/*8946*/                OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8948*/                OPC_EmitConvertToTarget, 1,
/*8950*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8959*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), FGR64:f64:$F)
/*8969*/              0, /*End of Scope*/
/*8970*/            /*Scope*/ 81, /*->9052*/
/*8971*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*8973*/              OPC_MoveParent,
/*8974*/              OPC_MoveChild, 2,
/*8976*/              OPC_Scope, 36, /*->9014*/ // 2 children in Scope
/*8978*/                OPC_CheckCondCode, ISD::SETGT,
/*8980*/                OPC_MoveParent,
/*8981*/                OPC_CheckType, MVT::i32,
/*8983*/                OPC_MoveParent,
/*8984*/                OPC_RecordChild1, // #2 = $T
/*8985*/                OPC_RecordChild2, // #3 = $F
/*8986*/                OPC_CheckType, MVT::f64,
/*8988*/                OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8990*/                OPC_EmitConvertToTarget, 1,
/*8992*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*8995*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*9004*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTi:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), FGR64:f64:$F)
/*9014*/              /*Scope*/ 36, /*->9051*/
/*9015*/                OPC_CheckCondCode, ISD::SETUGT,
/*9017*/                OPC_MoveParent,
/*9018*/                OPC_CheckType, MVT::i32,
/*9020*/                OPC_MoveParent,
/*9021*/                OPC_RecordChild1, // #2 = $T
/*9022*/                OPC_RecordChild2, // #3 = $F
/*9023*/                OPC_CheckType, MVT::f64,
/*9025*/                OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9027*/                OPC_EmitConvertToTarget, 1,
/*9029*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*9032*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*9041*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTiu:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), FGR64:f64:$F)
/*9051*/              0, /*End of Scope*/
/*9052*/            0, /*End of Scope*/
/*9053*/          /*Scope*/ 68|128,4/*580*/, /*->9635*/
/*9055*/            OPC_MoveChild, 2,
/*9057*/            OPC_Scope, 31, /*->9090*/ // 18 children in Scope
/*9059*/              OPC_CheckCondCode, ISD::SETGE,
/*9061*/              OPC_MoveParent,
/*9062*/              OPC_CheckType, MVT::i32,
/*9064*/              OPC_MoveParent,
/*9065*/              OPC_RecordChild1, // #2 = $T
/*9066*/              OPC_RecordChild2, // #3 = $F
/*9067*/              OPC_CheckType, MVT::f32,
/*9069*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9071*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9080*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR32:f32:$F)
/*9090*/            /*Scope*/ 31, /*->9122*/
/*9091*/              OPC_CheckCondCode, ISD::SETUGE,
/*9093*/              OPC_MoveParent,
/*9094*/              OPC_CheckType, MVT::i32,
/*9096*/              OPC_MoveParent,
/*9097*/              OPC_RecordChild1, // #2 = $T
/*9098*/              OPC_RecordChild2, // #3 = $F
/*9099*/              OPC_CheckType, MVT::f32,
/*9101*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9103*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9112*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR32:f32:$F)
/*9122*/            /*Scope*/ 31, /*->9154*/
/*9123*/              OPC_CheckCondCode, ISD::SETLE,
/*9125*/              OPC_MoveParent,
/*9126*/              OPC_CheckType, MVT::i32,
/*9128*/              OPC_MoveParent,
/*9129*/              OPC_RecordChild1, // #2 = $T
/*9130*/              OPC_RecordChild2, // #3 = $F
/*9131*/              OPC_CheckType, MVT::f32,
/*9133*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9135*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*9144*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), FGR32:f32:$F)
/*9154*/            /*Scope*/ 31, /*->9186*/
/*9155*/              OPC_CheckCondCode, ISD::SETULE,
/*9157*/              OPC_MoveParent,
/*9158*/              OPC_CheckType, MVT::i32,
/*9160*/              OPC_MoveParent,
/*9161*/              OPC_RecordChild1, // #2 = $T
/*9162*/              OPC_RecordChild2, // #3 = $F
/*9163*/              OPC_CheckType, MVT::f32,
/*9165*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9167*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*9176*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), FGR32:f32:$F)
/*9186*/            /*Scope*/ 31, /*->9218*/
/*9187*/              OPC_CheckCondCode, ISD::SETEQ,
/*9189*/              OPC_MoveParent,
/*9190*/              OPC_CheckType, MVT::i32,
/*9192*/              OPC_MoveParent,
/*9193*/              OPC_RecordChild1, // #2 = $T
/*9194*/              OPC_RecordChild2, // #3 = $F
/*9195*/              OPC_CheckType, MVT::f32,
/*9197*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9199*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9208*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR32:f32:$F)
/*9218*/            /*Scope*/ 31, /*->9250*/
/*9219*/              OPC_CheckCondCode, ISD::SETNE,
/*9221*/              OPC_MoveParent,
/*9222*/              OPC_CheckType, MVT::i32,
/*9224*/              OPC_MoveParent,
/*9225*/              OPC_RecordChild1, // #2 = $T
/*9226*/              OPC_RecordChild2, // #3 = $F
/*9227*/              OPC_CheckType, MVT::f32,
/*9229*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9231*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9240*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVN_I_S:f32 FGR32:f32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR32:f32:$F)
/*9250*/            /*Scope*/ 31, /*->9282*/
/*9251*/              OPC_CheckCondCode, ISD::SETGE,
/*9253*/              OPC_MoveParent,
/*9254*/              OPC_CheckType, MVT::i32,
/*9256*/              OPC_MoveParent,
/*9257*/              OPC_RecordChild1, // #2 = $T
/*9258*/              OPC_RecordChild2, // #3 = $F
/*9259*/              OPC_CheckType, MVT::f64,
/*9261*/              OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9263*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9272*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), AFGR64:f64:$F)
/*9282*/            /*Scope*/ 31, /*->9314*/
/*9283*/              OPC_CheckCondCode, ISD::SETUGE,
/*9285*/              OPC_MoveParent,
/*9286*/              OPC_CheckType, MVT::i32,
/*9288*/              OPC_MoveParent,
/*9289*/              OPC_RecordChild1, // #2 = $T
/*9290*/              OPC_RecordChild2, // #3 = $F
/*9291*/              OPC_CheckType, MVT::f64,
/*9293*/              OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9295*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9304*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), AFGR64:f64:$F)
/*9314*/            /*Scope*/ 31, /*->9346*/
/*9315*/              OPC_CheckCondCode, ISD::SETLE,
/*9317*/              OPC_MoveParent,
/*9318*/              OPC_CheckType, MVT::i32,
/*9320*/              OPC_MoveParent,
/*9321*/              OPC_RecordChild1, // #2 = $T
/*9322*/              OPC_RecordChild2, // #3 = $F
/*9323*/              OPC_CheckType, MVT::f64,
/*9325*/              OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9327*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*9336*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), AFGR64:f64:$F)
/*9346*/            /*Scope*/ 31, /*->9378*/
/*9347*/              OPC_CheckCondCode, ISD::SETULE,
/*9349*/              OPC_MoveParent,
/*9350*/              OPC_CheckType, MVT::i32,
/*9352*/              OPC_MoveParent,
/*9353*/              OPC_RecordChild1, // #2 = $T
/*9354*/              OPC_RecordChild2, // #3 = $F
/*9355*/              OPC_CheckType, MVT::f64,
/*9357*/              OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9359*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*9368*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), AFGR64:f64:$F)
/*9378*/            /*Scope*/ 31, /*->9410*/
/*9379*/              OPC_CheckCondCode, ISD::SETEQ,
/*9381*/              OPC_MoveParent,
/*9382*/              OPC_CheckType, MVT::i32,
/*9384*/              OPC_MoveParent,
/*9385*/              OPC_RecordChild1, // #2 = $T
/*9386*/              OPC_RecordChild2, // #3 = $F
/*9387*/              OPC_CheckType, MVT::f64,
/*9389*/              OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9391*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9400*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), AFGR64:f64:$F)
/*9410*/            /*Scope*/ 31, /*->9442*/
/*9411*/              OPC_CheckCondCode, ISD::SETNE,
/*9413*/              OPC_MoveParent,
/*9414*/              OPC_CheckType, MVT::i32,
/*9416*/              OPC_MoveParent,
/*9417*/              OPC_RecordChild1, // #2 = $T
/*9418*/              OPC_RecordChild2, // #3 = $F
/*9419*/              OPC_CheckType, MVT::f64,
/*9421*/              OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9423*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9432*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVN_I_D32:f64 AFGR64:f64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), AFGR64:f64:$F)
/*9442*/            /*Scope*/ 31, /*->9474*/
/*9443*/              OPC_CheckCondCode, ISD::SETGE,
/*9445*/              OPC_MoveParent,
/*9446*/              OPC_CheckType, MVT::i32,
/*9448*/              OPC_MoveParent,
/*9449*/              OPC_RecordChild1, // #2 = $T
/*9450*/              OPC_RecordChild2, // #3 = $F
/*9451*/              OPC_CheckType, MVT::f64,
/*9453*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9455*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9464*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR64:f64:$F)
/*9474*/            /*Scope*/ 31, /*->9506*/
/*9475*/              OPC_CheckCondCode, ISD::SETUGE,
/*9477*/              OPC_MoveParent,
/*9478*/              OPC_CheckType, MVT::i32,
/*9480*/              OPC_MoveParent,
/*9481*/              OPC_RecordChild1, // #2 = $T
/*9482*/              OPC_RecordChild2, // #3 = $F
/*9483*/              OPC_CheckType, MVT::f64,
/*9485*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9487*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9496*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR64:f64:$F)
/*9506*/            /*Scope*/ 31, /*->9538*/
/*9507*/              OPC_CheckCondCode, ISD::SETLE,
/*9509*/              OPC_MoveParent,
/*9510*/              OPC_CheckType, MVT::i32,
/*9512*/              OPC_MoveParent,
/*9513*/              OPC_RecordChild1, // #2 = $T
/*9514*/              OPC_RecordChild2, // #3 = $F
/*9515*/              OPC_CheckType, MVT::f64,
/*9517*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9519*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*9528*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), FGR64:f64:$F)
/*9538*/            /*Scope*/ 31, /*->9570*/
/*9539*/              OPC_CheckCondCode, ISD::SETULE,
/*9541*/              OPC_MoveParent,
/*9542*/              OPC_CheckType, MVT::i32,
/*9544*/              OPC_MoveParent,
/*9545*/              OPC_RecordChild1, // #2 = $T
/*9546*/              OPC_RecordChild2, // #3 = $F
/*9547*/              OPC_CheckType, MVT::f64,
/*9549*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9551*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*9560*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), FGR64:f64:$F)
/*9570*/            /*Scope*/ 31, /*->9602*/
/*9571*/              OPC_CheckCondCode, ISD::SETEQ,
/*9573*/              OPC_MoveParent,
/*9574*/              OPC_CheckType, MVT::i32,
/*9576*/              OPC_MoveParent,
/*9577*/              OPC_RecordChild1, // #2 = $T
/*9578*/              OPC_RecordChild2, // #3 = $F
/*9579*/              OPC_CheckType, MVT::f64,
/*9581*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9583*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9592*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR64:f64:$F)
/*9602*/            /*Scope*/ 31, /*->9634*/
/*9603*/              OPC_CheckCondCode, ISD::SETNE,
/*9605*/              OPC_MoveParent,
/*9606*/              OPC_CheckType, MVT::i32,
/*9608*/              OPC_MoveParent,
/*9609*/              OPC_RecordChild1, // #2 = $T
/*9610*/              OPC_RecordChild2, // #3 = $F
/*9611*/              OPC_CheckType, MVT::f64,
/*9613*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9615*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9624*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVN_I_D64:f64 FGR64:f64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR64:f64:$F)
/*9634*/            0, /*End of Scope*/
/*9635*/          0, /*End of Scope*/
/*9636*/        0, /*End of Scope*/
/*9637*/      /*Scope*/ 22|128,13/*1686*/, /*->11325*/
/*9639*/        OPC_CheckChild0Type, MVT::i64,
/*9641*/        OPC_Scope, 87, /*->9730*/ // 4 children in Scope
/*9643*/          OPC_MoveChild, 1,
/*9645*/          OPC_CheckInteger, 0, 
/*9647*/          OPC_MoveParent,
/*9648*/          OPC_MoveChild, 2,
/*9650*/          OPC_Scope, 38, /*->9690*/ // 2 children in Scope
/*9652*/            OPC_CheckCondCode, ISD::SETEQ,
/*9654*/            OPC_MoveParent,
/*9655*/            OPC_CheckType, MVT::i32,
/*9657*/            OPC_MoveParent,
/*9658*/            OPC_RecordChild1, // #1 = $T
/*9659*/            OPC_RecordChild2, // #2 = $F
/*9660*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9675
/*9663*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9665*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 11
                      // Dst: (MOVZ_I64_I:i32 CPURegs:i32:$T, CPU64Regs:i64:$lhs, CPURegs:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->9689
/*9677*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9679*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 11
                      // Dst: (MOVZ_I64_I64:i64 CPU64Regs:i64:$T, CPU64Regs:i64:$lhs, CPU64Regs:i64:$F)
                    0, // EndSwitchType
/*9690*/          /*Scope*/ 38, /*->9729*/
/*9691*/            OPC_CheckCondCode, ISD::SETNE,
/*9693*/            OPC_MoveParent,
/*9694*/            OPC_CheckType, MVT::i32,
/*9696*/            OPC_MoveParent,
/*9697*/            OPC_RecordChild1, // #1 = $T
/*9698*/            OPC_RecordChild2, // #2 = $F
/*9699*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9714
/*9702*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9704*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 11
                      // Dst: (MOVN_I64_I:i32 CPURegs:i32:$T, CPU64Regs:i64:$lhs, CPURegs:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->9728
/*9716*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9718*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 11
                      // Dst: (MOVN_I64_I64:i64 CPU64Regs:i64:$T, CPU64Regs:i64:$lhs, CPU64Regs:i64:$F)
                    0, // EndSwitchType
/*9729*/          0, /*End of Scope*/
/*9730*/        /*Scope*/ 2|128,6/*770*/, /*->10502*/
/*9732*/          OPC_RecordChild1, // #1 = $rhs
/*9733*/          OPC_Scope, 5|128,3/*389*/, /*->10125*/ // 2 children in Scope
/*9736*/            OPC_MoveChild, 1,
/*9738*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9741*/            OPC_Scope, 75, /*->9818*/ // 5 children in Scope
/*9743*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*9745*/              OPC_MoveParent,
/*9746*/              OPC_MoveChild, 2,
/*9748*/              OPC_Scope, 33, /*->9783*/ // 2 children in Scope
/*9750*/                OPC_CheckCondCode, ISD::SETGE,
/*9752*/                OPC_MoveParent,
/*9753*/                OPC_CheckType, MVT::i32,
/*9755*/                OPC_MoveParent,
/*9756*/                OPC_RecordChild1, // #2 = $T
/*9757*/                OPC_RecordChild2, // #3 = $F
/*9758*/                OPC_CheckType, MVT::i32,
/*9760*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9762*/                OPC_EmitConvertToTarget, 1,
/*9764*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9773*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), CPURegs:i32:$F)
/*9783*/              /*Scope*/ 33, /*->9817*/
/*9784*/                OPC_CheckCondCode, ISD::SETUGE,
/*9786*/                OPC_MoveParent,
/*9787*/                OPC_CheckType, MVT::i32,
/*9789*/                OPC_MoveParent,
/*9790*/                OPC_RecordChild1, // #2 = $T
/*9791*/                OPC_RecordChild2, // #3 = $F
/*9792*/                OPC_CheckType, MVT::i32,
/*9794*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9796*/                OPC_EmitConvertToTarget, 1,
/*9798*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9807*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTiu64:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), CPURegs:i32:$F)
/*9817*/              0, /*End of Scope*/
/*9818*/            /*Scope*/ 81, /*->9900*/
/*9819*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*9821*/              OPC_MoveParent,
/*9822*/              OPC_MoveChild, 2,
/*9824*/              OPC_Scope, 36, /*->9862*/ // 2 children in Scope
/*9826*/                OPC_CheckCondCode, ISD::SETGT,
/*9828*/                OPC_MoveParent,
/*9829*/                OPC_CheckType, MVT::i32,
/*9831*/                OPC_MoveParent,
/*9832*/                OPC_RecordChild1, // #2 = $T
/*9833*/                OPC_RecordChild2, // #3 = $F
/*9834*/                OPC_CheckType, MVT::i32,
/*9836*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9838*/                OPC_EmitConvertToTarget, 1,
/*9840*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*9843*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*9852*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), CPURegs:i32:$F)
/*9862*/              /*Scope*/ 36, /*->9899*/
/*9863*/                OPC_CheckCondCode, ISD::SETUGT,
/*9865*/                OPC_MoveParent,
/*9866*/                OPC_CheckType, MVT::i32,
/*9868*/                OPC_MoveParent,
/*9869*/                OPC_RecordChild1, // #2 = $T
/*9870*/                OPC_RecordChild2, // #3 = $F
/*9871*/                OPC_CheckType, MVT::i32,
/*9873*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9875*/                OPC_EmitConvertToTarget, 1,
/*9877*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*9880*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*9889*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTiu64:i32 CPU64Regs:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), CPURegs:i32:$F)
/*9899*/              0, /*End of Scope*/
/*9900*/            /*Scope*/ 75, /*->9976*/
/*9901*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*9903*/              OPC_MoveParent,
/*9904*/              OPC_MoveChild, 2,
/*9906*/              OPC_Scope, 33, /*->9941*/ // 2 children in Scope
/*9908*/                OPC_CheckCondCode, ISD::SETGE,
/*9910*/                OPC_MoveParent,
/*9911*/                OPC_CheckType, MVT::i32,
/*9913*/                OPC_MoveParent,
/*9914*/                OPC_RecordChild1, // #2 = $T
/*9915*/                OPC_RecordChild2, // #3 = $F
/*9916*/                OPC_CheckType, MVT::i64,
/*9918*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9920*/                OPC_EmitConvertToTarget, 1,
/*9922*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9931*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), CPU64Regs:i64:$F)
/*9941*/              /*Scope*/ 33, /*->9975*/
/*9942*/                OPC_CheckCondCode, ISD::SETUGE,
/*9944*/                OPC_MoveParent,
/*9945*/                OPC_CheckType, MVT::i32,
/*9947*/                OPC_MoveParent,
/*9948*/                OPC_RecordChild1, // #2 = $T
/*9949*/                OPC_RecordChild2, // #3 = $F
/*9950*/                OPC_CheckType, MVT::i64,
/*9952*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9954*/                OPC_EmitConvertToTarget, 1,
/*9956*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9965*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTiu64:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), CPU64Regs:i64:$F)
/*9975*/              0, /*End of Scope*/
/*9976*/            /*Scope*/ 81, /*->10058*/
/*9977*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*9979*/              OPC_MoveParent,
/*9980*/              OPC_MoveChild, 2,
/*9982*/              OPC_Scope, 36, /*->10020*/ // 2 children in Scope
/*9984*/                OPC_CheckCondCode, ISD::SETGT,
/*9986*/                OPC_MoveParent,
/*9987*/                OPC_CheckType, MVT::i32,
/*9989*/                OPC_MoveParent,
/*9990*/                OPC_RecordChild1, // #2 = $T
/*9991*/                OPC_RecordChild2, // #3 = $F
/*9992*/                OPC_CheckType, MVT::i64,
/*9994*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9996*/                OPC_EmitConvertToTarget, 1,
/*9998*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*10001*/               OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*10010*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), CPU64Regs:i64:$F)
/*10020*/             /*Scope*/ 36, /*->10057*/
/*10021*/               OPC_CheckCondCode, ISD::SETUGT,
/*10023*/               OPC_MoveParent,
/*10024*/               OPC_CheckType, MVT::i32,
/*10026*/               OPC_MoveParent,
/*10027*/               OPC_RecordChild1, // #2 = $T
/*10028*/               OPC_RecordChild2, // #3 = $F
/*10029*/               OPC_CheckType, MVT::i64,
/*10031*/               OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10033*/               OPC_EmitConvertToTarget, 1,
/*10035*/               OPC_EmitNodeXForm, 1, 4, // Plus1
/*10038*/               OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*10047*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTiu64:i32 CPU64Regs:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), CPU64Regs:i64:$F)
/*10057*/             0, /*End of Scope*/
/*10058*/           /*Scope*/ 65, /*->10124*/
/*10059*/             OPC_CheckPredicate, 27, // Predicate_immZExt16
/*10061*/             OPC_MoveParent,
/*10062*/             OPC_MoveChild, 2,
/*10064*/             OPC_CheckCondCode, ISD::SETEQ,
/*10066*/             OPC_MoveParent,
/*10067*/             OPC_CheckType, MVT::i32,
/*10069*/             OPC_MoveParent,
/*10070*/             OPC_RecordChild1, // #2 = $T
/*10071*/             OPC_RecordChild2, // #3 = $F
/*10072*/             OPC_SwitchType /*2 cases */, 23,  MVT::i32,// ->10098
/*10075*/               OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10077*/               OPC_EmitConvertToTarget, 1,
/*10079*/               OPC_EmitNode, TARGET_VAL(Mips::XORi64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 4,  // Results = #5
/*10088*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I64_I:i32 CPURegs:i32:$T, (XORi64:i64 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16), CPURegs:i32:$F)
                      /*SwitchType*/ 23,  MVT::i64,// ->10123
/*10100*/               OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10102*/               OPC_EmitConvertToTarget, 1,
/*10104*/               OPC_EmitNode, TARGET_VAL(Mips::XORi64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 4,  // Results = #5
/*10113*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I64_I64:i64 CPU64Regs:i64:$T, (XORi64:i64 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16), CPU64Regs:i64:$F)
                      0, // EndSwitchType
/*10124*/           0, /*End of Scope*/
/*10125*/         /*Scope*/ 118|128,2/*374*/, /*->10501*/
/*10127*/           OPC_MoveChild, 2,
/*10129*/           OPC_Scope, 31, /*->10162*/ // 10 children in Scope
/*10131*/             OPC_CheckCondCode, ISD::SETGE,
/*10133*/             OPC_MoveParent,
/*10134*/             OPC_CheckType, MVT::i32,
/*10136*/             OPC_MoveParent,
/*10137*/             OPC_RecordChild1, // #2 = $T
/*10138*/             OPC_RecordChild2, // #3 = $F
/*10139*/             OPC_CheckType, MVT::i32,
/*10141*/             OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10143*/             OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10152*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPURegs:i32:$F)
/*10162*/           /*Scope*/ 31, /*->10194*/
/*10163*/             OPC_CheckCondCode, ISD::SETUGE,
/*10165*/             OPC_MoveParent,
/*10166*/             OPC_CheckType, MVT::i32,
/*10168*/             OPC_MoveParent,
/*10169*/             OPC_RecordChild1, // #2 = $T
/*10170*/             OPC_RecordChild2, // #3 = $F
/*10171*/             OPC_CheckType, MVT::i32,
/*10173*/             OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10175*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10184*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPURegs:i32:$F)
/*10194*/           /*Scope*/ 31, /*->10226*/
/*10195*/             OPC_CheckCondCode, ISD::SETLE,
/*10197*/             OPC_MoveParent,
/*10198*/             OPC_CheckType, MVT::i32,
/*10200*/             OPC_MoveParent,
/*10201*/             OPC_RecordChild1, // #2 = $T
/*10202*/             OPC_RecordChild2, // #3 = $F
/*10203*/             OPC_CheckType, MVT::i32,
/*10205*/             OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10207*/             OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10216*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), CPURegs:i32:$F)
/*10226*/           /*Scope*/ 31, /*->10258*/
/*10227*/             OPC_CheckCondCode, ISD::SETULE,
/*10229*/             OPC_MoveParent,
/*10230*/             OPC_CheckType, MVT::i32,
/*10232*/             OPC_MoveParent,
/*10233*/             OPC_RecordChild1, // #2 = $T
/*10234*/             OPC_RecordChild2, // #3 = $F
/*10235*/             OPC_CheckType, MVT::i32,
/*10237*/             OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10239*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10248*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), CPURegs:i32:$F)
/*10258*/           /*Scope*/ 31, /*->10290*/
/*10259*/             OPC_CheckCondCode, ISD::SETGE,
/*10261*/             OPC_MoveParent,
/*10262*/             OPC_CheckType, MVT::i32,
/*10264*/             OPC_MoveParent,
/*10265*/             OPC_RecordChild1, // #2 = $T
/*10266*/             OPC_RecordChild2, // #3 = $F
/*10267*/             OPC_CheckType, MVT::i64,
/*10269*/             OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10271*/             OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10280*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPU64Regs:i64:$F)
/*10290*/           /*Scope*/ 31, /*->10322*/
/*10291*/             OPC_CheckCondCode, ISD::SETUGE,
/*10293*/             OPC_MoveParent,
/*10294*/             OPC_CheckType, MVT::i32,
/*10296*/             OPC_MoveParent,
/*10297*/             OPC_RecordChild1, // #2 = $T
/*10298*/             OPC_RecordChild2, // #3 = $F
/*10299*/             OPC_CheckType, MVT::i64,
/*10301*/             OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10303*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10312*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPU64Regs:i64:$F)
/*10322*/           /*Scope*/ 31, /*->10354*/
/*10323*/             OPC_CheckCondCode, ISD::SETLE,
/*10325*/             OPC_MoveParent,
/*10326*/             OPC_CheckType, MVT::i32,
/*10328*/             OPC_MoveParent,
/*10329*/             OPC_RecordChild1, // #2 = $T
/*10330*/             OPC_RecordChild2, // #3 = $F
/*10331*/             OPC_CheckType, MVT::i64,
/*10333*/             OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10335*/             OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10344*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), CPU64Regs:i64:$F)
/*10354*/           /*Scope*/ 31, /*->10386*/
/*10355*/             OPC_CheckCondCode, ISD::SETULE,
/*10357*/             OPC_MoveParent,
/*10358*/             OPC_CheckType, MVT::i32,
/*10360*/             OPC_MoveParent,
/*10361*/             OPC_RecordChild1, // #2 = $T
/*10362*/             OPC_RecordChild2, // #3 = $F
/*10363*/             OPC_CheckType, MVT::i64,
/*10365*/             OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10367*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10376*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), CPU64Regs:i64:$F)
/*10386*/           /*Scope*/ 56, /*->10443*/
/*10387*/             OPC_CheckCondCode, ISD::SETEQ,
/*10389*/             OPC_MoveParent,
/*10390*/             OPC_CheckType, MVT::i32,
/*10392*/             OPC_MoveParent,
/*10393*/             OPC_RecordChild1, // #2 = $T
/*10394*/             OPC_RecordChild2, // #3 = $F
/*10395*/             OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->10419
/*10398*/               OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10400*/               OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*10409*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                        // Dst: (MOVZ_I64_I:i32 CPURegs:i32:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPURegs:i32:$F)
                      /*SwitchType*/ 21,  MVT::i64,// ->10442
/*10421*/               OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10423*/               OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*10432*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                        // Dst: (MOVZ_I64_I64:i64 CPU64Regs:i64:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPU64Regs:i64:$F)
                      0, // EndSwitchType
/*10443*/           /*Scope*/ 56, /*->10500*/
/*10444*/             OPC_CheckCondCode, ISD::SETNE,
/*10446*/             OPC_MoveParent,
/*10447*/             OPC_CheckType, MVT::i32,
/*10449*/             OPC_MoveParent,
/*10450*/             OPC_RecordChild1, // #2 = $T
/*10451*/             OPC_RecordChild2, // #3 = $F
/*10452*/             OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->10476
/*10455*/               OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10457*/               OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*10466*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                        // Dst: (MOVN_I64_I:i32 CPURegs:i32:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPURegs:i32:$F)
                      /*SwitchType*/ 21,  MVT::i64,// ->10499
/*10478*/               OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10480*/               OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*10489*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                        // Dst: (MOVN_I64_I64:i64 CPU64Regs:i64:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPU64Regs:i64:$F)
                      0, // EndSwitchType
/*10500*/           0, /*End of Scope*/
/*10501*/         0, /*End of Scope*/
/*10502*/       /*Scope*/ 101, /*->10604*/
/*10503*/         OPC_MoveChild, 1,
/*10505*/         OPC_CheckInteger, 0, 
/*10507*/         OPC_MoveParent,
/*10508*/         OPC_MoveChild, 2,
/*10510*/         OPC_Scope, 22, /*->10534*/ // 4 children in Scope
/*10512*/           OPC_CheckCondCode, ISD::SETEQ,
/*10514*/           OPC_MoveParent,
/*10515*/           OPC_CheckType, MVT::i32,
/*10517*/           OPC_MoveParent,
/*10518*/           OPC_RecordChild1, // #1 = $T
/*10519*/           OPC_RecordChild2, // #2 = $F
/*10520*/           OPC_CheckType, MVT::f32,
/*10522*/           OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10524*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVZ_I64_S:f32 FGR32:f32:$T, CPU64Regs:i64:$lhs, FGR32:f32:$F)
/*10534*/         /*Scope*/ 22, /*->10557*/
/*10535*/           OPC_CheckCondCode, ISD::SETNE,
/*10537*/           OPC_MoveParent,
/*10538*/           OPC_CheckType, MVT::i32,
/*10540*/           OPC_MoveParent,
/*10541*/           OPC_RecordChild1, // #1 = $T
/*10542*/           OPC_RecordChild2, // #2 = $F
/*10543*/           OPC_CheckType, MVT::f32,
/*10545*/           OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10547*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVN_I64_S:f32 FGR32:f32:$T, CPU64Regs:i64:$lhs, FGR32:f32:$F)
/*10557*/         /*Scope*/ 22, /*->10580*/
/*10558*/           OPC_CheckCondCode, ISD::SETEQ,
/*10560*/           OPC_MoveParent,
/*10561*/           OPC_CheckType, MVT::i32,
/*10563*/           OPC_MoveParent,
/*10564*/           OPC_RecordChild1, // #1 = $T
/*10565*/           OPC_RecordChild2, // #2 = $F
/*10566*/           OPC_CheckType, MVT::f64,
/*10568*/           OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10570*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVZ_I64_D64:f64 FGR64:f64:$T, CPU64Regs:i64:$lhs, FGR64:f64:$F)
/*10580*/         /*Scope*/ 22, /*->10603*/
/*10581*/           OPC_CheckCondCode, ISD::SETNE,
/*10583*/           OPC_MoveParent,
/*10584*/           OPC_CheckType, MVT::i32,
/*10586*/           OPC_MoveParent,
/*10587*/           OPC_RecordChild1, // #1 = $T
/*10588*/           OPC_RecordChild2, // #2 = $F
/*10589*/           OPC_CheckType, MVT::f64,
/*10591*/           OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10593*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVN_I64_D64:f64 FGR64:f64:$T, CPU64Regs:i64:$lhs, FGR64:f64:$F)
/*10603*/         0, /*End of Scope*/
/*10604*/       /*Scope*/ 78|128,5/*718*/, /*->11324*/
/*10606*/         OPC_RecordChild1, // #1 = $rhs
/*10607*/         OPC_Scope, 67|128,2/*323*/, /*->10933*/ // 2 children in Scope
/*10610*/           OPC_MoveChild, 1,
/*10612*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10615*/           OPC_Scope, 75, /*->10692*/ // 4 children in Scope
/*10617*/             OPC_CheckPredicate, 28, // Predicate_immSExt16
/*10619*/             OPC_MoveParent,
/*10620*/             OPC_MoveChild, 2,
/*10622*/             OPC_Scope, 33, /*->10657*/ // 2 children in Scope
/*10624*/               OPC_CheckCondCode, ISD::SETGE,
/*10626*/               OPC_MoveParent,
/*10627*/               OPC_CheckType, MVT::i32,
/*10629*/               OPC_MoveParent,
/*10630*/               OPC_RecordChild1, // #2 = $T
/*10631*/               OPC_RecordChild2, // #3 = $F
/*10632*/               OPC_CheckType, MVT::f32,
/*10634*/               OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10636*/               OPC_EmitConvertToTarget, 1,
/*10638*/               OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*10647*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), FGR32:f32:$F)
/*10657*/             /*Scope*/ 33, /*->10691*/
/*10658*/               OPC_CheckCondCode, ISD::SETUGE,
/*10660*/               OPC_MoveParent,
/*10661*/               OPC_CheckType, MVT::i32,
/*10663*/               OPC_MoveParent,
/*10664*/               OPC_RecordChild1, // #2 = $T
/*10665*/               OPC_RecordChild2, // #3 = $F
/*10666*/               OPC_CheckType, MVT::f32,
/*10668*/               OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10670*/               OPC_EmitConvertToTarget, 1,
/*10672*/               OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*10681*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTiu64:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), FGR32:f32:$F)
/*10691*/             0, /*End of Scope*/
/*10692*/           /*Scope*/ 81, /*->10774*/
/*10693*/             OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*10695*/             OPC_MoveParent,
/*10696*/             OPC_MoveChild, 2,
/*10698*/             OPC_Scope, 36, /*->10736*/ // 2 children in Scope
/*10700*/               OPC_CheckCondCode, ISD::SETGT,
/*10702*/               OPC_MoveParent,
/*10703*/               OPC_CheckType, MVT::i32,
/*10705*/               OPC_MoveParent,
/*10706*/               OPC_RecordChild1, // #2 = $T
/*10707*/               OPC_RecordChild2, // #3 = $F
/*10708*/               OPC_CheckType, MVT::f32,
/*10710*/               OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10712*/               OPC_EmitConvertToTarget, 1,
/*10714*/               OPC_EmitNodeXForm, 1, 4, // Plus1
/*10717*/               OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*10726*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), FGR32:f32:$F)
/*10736*/             /*Scope*/ 36, /*->10773*/
/*10737*/               OPC_CheckCondCode, ISD::SETUGT,
/*10739*/               OPC_MoveParent,
/*10740*/               OPC_CheckType, MVT::i32,
/*10742*/               OPC_MoveParent,
/*10743*/               OPC_RecordChild1, // #2 = $T
/*10744*/               OPC_RecordChild2, // #3 = $F
/*10745*/               OPC_CheckType, MVT::f32,
/*10747*/               OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10749*/               OPC_EmitConvertToTarget, 1,
/*10751*/               OPC_EmitNodeXForm, 1, 4, // Plus1
/*10754*/               OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*10763*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTiu64:i32 CPU64Regs:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), FGR32:f32:$F)
/*10773*/             0, /*End of Scope*/
/*10774*/           /*Scope*/ 75, /*->10850*/
/*10775*/             OPC_CheckPredicate, 28, // Predicate_immSExt16
/*10777*/             OPC_MoveParent,
/*10778*/             OPC_MoveChild, 2,
/*10780*/             OPC_Scope, 33, /*->10815*/ // 2 children in Scope
/*10782*/               OPC_CheckCondCode, ISD::SETGE,
/*10784*/               OPC_MoveParent,
/*10785*/               OPC_CheckType, MVT::i32,
/*10787*/               OPC_MoveParent,
/*10788*/               OPC_RecordChild1, // #2 = $T
/*10789*/               OPC_RecordChild2, // #3 = $F
/*10790*/               OPC_CheckType, MVT::f64,
/*10792*/               OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10794*/               OPC_EmitConvertToTarget, 1,
/*10796*/               OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*10805*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), FGR64:f64:$F)
/*10815*/             /*Scope*/ 33, /*->10849*/
/*10816*/               OPC_CheckCondCode, ISD::SETUGE,
/*10818*/               OPC_MoveParent,
/*10819*/               OPC_CheckType, MVT::i32,
/*10821*/               OPC_MoveParent,
/*10822*/               OPC_RecordChild1, // #2 = $T
/*10823*/               OPC_RecordChild2, // #3 = $F
/*10824*/               OPC_CheckType, MVT::f64,
/*10826*/               OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10828*/               OPC_EmitConvertToTarget, 1,
/*10830*/               OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*10839*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTiu64:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), FGR64:f64:$F)
/*10849*/             0, /*End of Scope*/
/*10850*/           /*Scope*/ 81, /*->10932*/
/*10851*/             OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*10853*/             OPC_MoveParent,
/*10854*/             OPC_MoveChild, 2,
/*10856*/             OPC_Scope, 36, /*->10894*/ // 2 children in Scope
/*10858*/               OPC_CheckCondCode, ISD::SETGT,
/*10860*/               OPC_MoveParent,
/*10861*/               OPC_CheckType, MVT::i32,
/*10863*/               OPC_MoveParent,
/*10864*/               OPC_RecordChild1, // #2 = $T
/*10865*/               OPC_RecordChild2, // #3 = $F
/*10866*/               OPC_CheckType, MVT::f64,
/*10868*/               OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10870*/               OPC_EmitConvertToTarget, 1,
/*10872*/               OPC_EmitNodeXForm, 1, 4, // Plus1
/*10875*/               OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*10884*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), FGR64:f64:$F)
/*10894*/             /*Scope*/ 36, /*->10931*/
/*10895*/               OPC_CheckCondCode, ISD::SETUGT,
/*10897*/               OPC_MoveParent,
/*10898*/               OPC_CheckType, MVT::i32,
/*10900*/               OPC_MoveParent,
/*10901*/               OPC_RecordChild1, // #2 = $T
/*10902*/               OPC_RecordChild2, // #3 = $F
/*10903*/               OPC_CheckType, MVT::f64,
/*10905*/               OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10907*/               OPC_EmitConvertToTarget, 1,
/*10909*/               OPC_EmitNodeXForm, 1, 4, // Plus1
/*10912*/               OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*10921*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTiu64:i32 CPU64Regs:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), FGR64:f64:$F)
/*10931*/             0, /*End of Scope*/
/*10932*/           0, /*End of Scope*/
/*10933*/         /*Scope*/ 4|128,3/*388*/, /*->11323*/
/*10935*/           OPC_MoveChild, 2,
/*10937*/           OPC_Scope, 31, /*->10970*/ // 12 children in Scope
/*10939*/             OPC_CheckCondCode, ISD::SETGE,
/*10941*/             OPC_MoveParent,
/*10942*/             OPC_CheckType, MVT::i32,
/*10944*/             OPC_MoveParent,
/*10945*/             OPC_RecordChild1, // #2 = $T
/*10946*/             OPC_RecordChild2, // #3 = $F
/*10947*/             OPC_CheckType, MVT::f32,
/*10949*/             OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10951*/             OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10960*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR32:f32:$F)
/*10970*/           /*Scope*/ 31, /*->11002*/
/*10971*/             OPC_CheckCondCode, ISD::SETUGE,
/*10973*/             OPC_MoveParent,
/*10974*/             OPC_CheckType, MVT::i32,
/*10976*/             OPC_MoveParent,
/*10977*/             OPC_RecordChild1, // #2 = $T
/*10978*/             OPC_RecordChild2, // #3 = $F
/*10979*/             OPC_CheckType, MVT::f32,
/*10981*/             OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10983*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10992*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR32:f32:$F)
/*11002*/           /*Scope*/ 31, /*->11034*/
/*11003*/             OPC_CheckCondCode, ISD::SETLE,
/*11005*/             OPC_MoveParent,
/*11006*/             OPC_CheckType, MVT::i32,
/*11008*/             OPC_MoveParent,
/*11009*/             OPC_RecordChild1, // #2 = $T
/*11010*/             OPC_RecordChild2, // #3 = $F
/*11011*/             OPC_CheckType, MVT::f32,
/*11013*/             OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11015*/             OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*11024*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), FGR32:f32:$F)
/*11034*/           /*Scope*/ 31, /*->11066*/
/*11035*/             OPC_CheckCondCode, ISD::SETULE,
/*11037*/             OPC_MoveParent,
/*11038*/             OPC_CheckType, MVT::i32,
/*11040*/             OPC_MoveParent,
/*11041*/             OPC_RecordChild1, // #2 = $T
/*11042*/             OPC_RecordChild2, // #3 = $F
/*11043*/             OPC_CheckType, MVT::f32,
/*11045*/             OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11047*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*11056*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), FGR32:f32:$F)
/*11066*/           /*Scope*/ 31, /*->11098*/
/*11067*/             OPC_CheckCondCode, ISD::SETEQ,
/*11069*/             OPC_MoveParent,
/*11070*/             OPC_CheckType, MVT::i32,
/*11072*/             OPC_MoveParent,
/*11073*/             OPC_RecordChild1, // #2 = $T
/*11074*/             OPC_RecordChild2, // #3 = $F
/*11075*/             OPC_CheckType, MVT::f32,
/*11077*/             OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11079*/             OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*11088*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I64_S:f32 FGR32:f32:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR32:f32:$F)
/*11098*/           /*Scope*/ 31, /*->11130*/
/*11099*/             OPC_CheckCondCode, ISD::SETNE,
/*11101*/             OPC_MoveParent,
/*11102*/             OPC_CheckType, MVT::i32,
/*11104*/             OPC_MoveParent,
/*11105*/             OPC_RecordChild1, // #2 = $T
/*11106*/             OPC_RecordChild2, // #3 = $F
/*11107*/             OPC_CheckType, MVT::f32,
/*11109*/             OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11111*/             OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*11120*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVN_I64_S:f32 FGR32:f32:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR32:f32:$F)
/*11130*/           /*Scope*/ 31, /*->11162*/
/*11131*/             OPC_CheckCondCode, ISD::SETGE,
/*11133*/             OPC_MoveParent,
/*11134*/             OPC_CheckType, MVT::i32,
/*11136*/             OPC_MoveParent,
/*11137*/             OPC_RecordChild1, // #2 = $T
/*11138*/             OPC_RecordChild2, // #3 = $F
/*11139*/             OPC_CheckType, MVT::f64,
/*11141*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11143*/             OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*11152*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR64:f64:$F)
/*11162*/           /*Scope*/ 31, /*->11194*/
/*11163*/             OPC_CheckCondCode, ISD::SETUGE,
/*11165*/             OPC_MoveParent,
/*11166*/             OPC_CheckType, MVT::i32,
/*11168*/             OPC_MoveParent,
/*11169*/             OPC_RecordChild1, // #2 = $T
/*11170*/             OPC_RecordChild2, // #3 = $F
/*11171*/             OPC_CheckType, MVT::f64,
/*11173*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11175*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*11184*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR64:f64:$F)
/*11194*/           /*Scope*/ 31, /*->11226*/
/*11195*/             OPC_CheckCondCode, ISD::SETLE,
/*11197*/             OPC_MoveParent,
/*11198*/             OPC_CheckType, MVT::i32,
/*11200*/             OPC_MoveParent,
/*11201*/             OPC_RecordChild1, // #2 = $T
/*11202*/             OPC_RecordChild2, // #3 = $F
/*11203*/             OPC_CheckType, MVT::f64,
/*11205*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11207*/             OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*11216*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), FGR64:f64:$F)
/*11226*/           /*Scope*/ 31, /*->11258*/
/*11227*/             OPC_CheckCondCode, ISD::SETULE,
/*11229*/             OPC_MoveParent,
/*11230*/             OPC_CheckType, MVT::i32,
/*11232*/             OPC_MoveParent,
/*11233*/             OPC_RecordChild1, // #2 = $T
/*11234*/             OPC_RecordChild2, // #3 = $F
/*11235*/             OPC_CheckType, MVT::f64,
/*11237*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11239*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*11248*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), FGR64:f64:$F)
/*11258*/           /*Scope*/ 31, /*->11290*/
/*11259*/             OPC_CheckCondCode, ISD::SETEQ,
/*11261*/             OPC_MoveParent,
/*11262*/             OPC_CheckType, MVT::i32,
/*11264*/             OPC_MoveParent,
/*11265*/             OPC_RecordChild1, // #2 = $T
/*11266*/             OPC_RecordChild2, // #3 = $F
/*11267*/             OPC_CheckType, MVT::f64,
/*11269*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11271*/             OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*11280*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I64_D64:f64 FGR64:f64:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR64:f64:$F)
/*11290*/           /*Scope*/ 31, /*->11322*/
/*11291*/             OPC_CheckCondCode, ISD::SETNE,
/*11293*/             OPC_MoveParent,
/*11294*/             OPC_CheckType, MVT::i32,
/*11296*/             OPC_MoveParent,
/*11297*/             OPC_RecordChild1, // #2 = $T
/*11298*/             OPC_RecordChild2, // #3 = $F
/*11299*/             OPC_CheckType, MVT::f64,
/*11301*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11303*/             OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*11312*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVN_I64_D64:f64 FGR64:f64:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR64:f64:$F)
/*11322*/           0, /*End of Scope*/
/*11323*/         0, /*End of Scope*/
/*11324*/       0, /*End of Scope*/
/*11325*/     0, /*End of Scope*/
/*11326*/   /*Scope*/ 33|128,1/*161*/, /*->11489*/
/*11328*/     OPC_RecordChild0, // #0 = $cond
/*11329*/     OPC_Scope, 94, /*->11425*/ // 2 children in Scope
/*11331*/       OPC_CheckChild0Type, MVT::i32,
/*11333*/       OPC_RecordChild1, // #1 = $T
/*11334*/       OPC_RecordChild2, // #2 = $F
/*11335*/       OPC_SwitchType /*4 cases */, 28,  MVT::i32,// ->11366
/*11338*/         OPC_Scope, 12, /*->11352*/ // 2 children in Scope
/*11340*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11342*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:i32 CPURegs:i32:$cond, CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 3
                    // Dst: (MOVN_I_I:i32 CPURegs:i32:$T, CPURegs:i32:$cond, CPURegs:i32:$F)
/*11352*/         /*Scope*/ 12, /*->11365*/
/*11353*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*11355*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SelBneZ), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 0, 
                    // Src: (select:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 3
                    // Dst: (SelBneZ:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a)
/*11365*/         0, /*End of Scope*/
                /*SwitchType*/ 12,  MVT::i64,// ->11380
/*11368*/         OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11370*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I64), 0,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:i64 CPURegs:i32:$cond, CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 3
                  // Dst: (MOVN_I_I64:i64 CPU64Regs:i64:$T, CPURegs:i32:$cond, CPU64Regs:i64:$F)
                /*SwitchType*/ 12,  MVT::f32,// ->11394
/*11382*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11384*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:f32 CPURegs:i32:$cond, FGR32:f32:$T, FGR32:f32:$F) - Complexity = 3
                  // Dst: (MOVN_I_S:f32 FGR32:f32:$T, CPURegs:i32:$cond, FGR32:f32:$F)
                /*SwitchType*/ 28,  MVT::f64,// ->11424
/*11396*/         OPC_Scope, 12, /*->11410*/ // 2 children in Scope
/*11398*/           OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11400*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 CPURegs:i32:$cond, AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 3
                    // Dst: (MOVN_I_D32:f64 AFGR64:f64:$T, CPURegs:i32:$cond, AFGR64:f64:$F)
/*11410*/         /*Scope*/ 12, /*->11423*/
/*11411*/           OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11413*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 CPURegs:i32:$cond, FGR64:f64:$T, FGR64:f64:$F) - Complexity = 3
                    // Dst: (MOVN_I_D64:f64 FGR64:f64:$T, CPURegs:i32:$cond, FGR64:f64:$F)
/*11423*/         0, /*End of Scope*/
                0, // EndSwitchType
/*11425*/     /*Scope*/ 62, /*->11488*/
/*11426*/       OPC_CheckChild0Type, MVT::i64,
/*11428*/       OPC_RecordChild1, // #1 = $T
/*11429*/       OPC_RecordChild2, // #2 = $F
/*11430*/       OPC_SwitchType /*4 cases */, 12,  MVT::i32,// ->11445
/*11433*/         OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11435*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:i32 CPU64Regs:i64:$cond, CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 3
                  // Dst: (MOVN_I64_I:i32 CPURegs:i32:$T, CPU64Regs:i64:$cond, CPURegs:i32:$F)
                /*SwitchType*/ 12,  MVT::i64,// ->11459
/*11447*/         OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11449*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I64), 0,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:i64 CPU64Regs:i64:$cond, CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 3
                  // Dst: (MOVN_I64_I64:i64 CPU64Regs:i64:$T, CPU64Regs:i64:$cond, CPU64Regs:i64:$F)
                /*SwitchType*/ 12,  MVT::f32,// ->11473
/*11461*/         OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11463*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:f32 CPU64Regs:i64:$cond, FGR32:f32:$T, FGR32:f32:$F) - Complexity = 3
                  // Dst: (MOVN_I64_S:f32 FGR32:f32:$T, CPU64Regs:i64:$cond, FGR32:f32:$F)
                /*SwitchType*/ 12,  MVT::f64,// ->11487
/*11475*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11477*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:f64 CPU64Regs:i64:$cond, FGR64:f64:$T, FGR64:f64:$F) - Complexity = 3
                  // Dst: (MOVN_I64_D64:f64 FGR64:f64:$T, CPU64Regs:i64:$cond, FGR64:f64:$F)
                0, // EndSwitchType
/*11488*/     0, /*End of Scope*/
/*11489*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::CALLSEQ_END),// ->11518
/*11493*/   OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*11494*/   OPC_CaptureGlueInput,
/*11495*/   OPC_RecordChild1, // #1 = $amt1
/*11496*/   OPC_MoveChild, 1,
/*11498*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*11501*/   OPC_MoveParent,
/*11502*/   OPC_RecordChild2, // #2 = $amt2
/*11503*/   OPC_MoveChild, 2,
/*11505*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*11508*/   OPC_MoveParent,
/*11509*/   OPC_EmitMergeInputChains1_0,
/*11510*/   OPC_MorphNodeTo, TARGET_VAL(Mips::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 53,  TARGET_VAL(MipsISD::Ext),// ->11574
/*11521*/   OPC_RecordChild0, // #0 = $rs
/*11522*/   OPC_RecordChild1, // #1 = $pos
/*11523*/   OPC_MoveChild, 1,
/*11525*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11528*/   OPC_MoveParent,
/*11529*/   OPC_RecordChild2, // #2 = $size
/*11530*/   OPC_MoveChild, 2,
/*11532*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11535*/   OPC_MoveParent,
/*11536*/   OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->11555
/*11539*/     OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*11541*/     OPC_EmitConvertToTarget, 1,
/*11543*/     OPC_EmitConvertToTarget, 2,
/*11545*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXT), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 3, 4, 
              // Src: (MipsExt:i32 CPURegsOpnd:i32:$rs, (imm:i32):$pos, (imm:i32):$size) - Complexity = 9
              // Dst: (EXT:i32 CPURegsOpnd:i32:$rs, (imm:i32):$pos, (imm:i32):$size)
            /*SwitchType*/ 16,  MVT::i64,// ->11573
/*11557*/     OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*11559*/     OPC_EmitConvertToTarget, 1,
/*11561*/     OPC_EmitConvertToTarget, 2,
/*11563*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DEXT), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 3, 4, 
              // Src: (MipsExt:i64 CPU64RegsOpnd:i64:$rs, (imm:i32):$pos, (imm:i32):$size) - Complexity = 9
              // Dst: (DEXT:i64 CPU64RegsOpnd:i64:$rs, (imm:i32):$pos, (imm:i32):$size)
            0, // EndSwitchType
          /*SwitchOpcode*/ 56,  TARGET_VAL(MipsISD::Ins),// ->11633
/*11577*/   OPC_RecordChild0, // #0 = $rs
/*11578*/   OPC_RecordChild1, // #1 = $pos
/*11579*/   OPC_MoveChild, 1,
/*11581*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11584*/   OPC_MoveParent,
/*11585*/   OPC_RecordChild2, // #2 = $size
/*11586*/   OPC_MoveChild, 2,
/*11588*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11591*/   OPC_MoveParent,
/*11592*/   OPC_RecordChild3, // #3 = $src
/*11593*/   OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->11613
/*11596*/     OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*11598*/     OPC_EmitConvertToTarget, 1,
/*11600*/     OPC_EmitConvertToTarget, 2,
/*11602*/     OPC_MorphNodeTo, TARGET_VAL(Mips::INS), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 4, 5, 3, 
              // Src: (MipsIns:i32 CPURegsOpnd:i32:$rs, (imm:i32):$pos, (imm:i32):$size, CPURegsOpnd:i32:$src) - Complexity = 9
              // Dst: (INS:i32 CPURegsOpnd:i32:$rs, (imm:i32):$pos, (imm:i32):$size, CPURegsOpnd:i32:$src)
            /*SwitchType*/ 17,  MVT::i64,// ->11632
/*11615*/     OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*11617*/     OPC_EmitConvertToTarget, 1,
/*11619*/     OPC_EmitConvertToTarget, 2,
/*11621*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DINS), 0,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 4, 5, 3, 
              // Src: (MipsIns:i64 CPU64RegsOpnd:i64:$rs, (imm:i32):$pos, (imm:i32):$size, CPU64RegsOpnd:i64:$src) - Complexity = 9
              // Dst: (DINS:i64 CPU64RegsOpnd:i64:$rs, (imm:i32):$pos, (imm:i32):$size, CPU64RegsOpnd:i64:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 7|128,5/*647*/,  TARGET_VAL(ISD::ADD),// ->12284
/*11637*/   OPC_Scope, 110|128,1/*238*/, /*->11878*/ // 3 children in Scope
/*11640*/     OPC_RecordChild0, // #0 = $hi
/*11641*/     OPC_MoveChild, 1,
/*11643*/     OPC_SwitchOpcode /*2 cases */, 57|128,1/*185*/,  TARGET_VAL(MipsISD::Lo),// ->11833
/*11648*/       OPC_RecordChild0, // #1 = $lo
/*11649*/       OPC_MoveChild, 0,
/*11651*/       OPC_SwitchOpcode /*5 cases */, 45,  TARGET_VAL(ISD::TargetGlobalAddress),// ->11700
/*11655*/         OPC_MoveParent,
/*11656*/         OPC_MoveParent,
/*11657*/         OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->11686
/*11660*/           OPC_Scope, 11, /*->11673*/ // 2 children in Scope
/*11662*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11664*/             OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                      // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tglobaladdr:i32):$lo)) - Complexity = 9
                      // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaladdr:i32):$lo)
/*11673*/           /*Scope*/ 11, /*->11685*/
/*11674*/             OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*11676*/             OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                      // Src: (add:i32 CPU16Regs:i32:$hi, (MipsLo:i32 (tglobaladdr:i32):$lo)) - Complexity = 9
                      // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$hi, (tglobaladdr:i32):$lo)
/*11685*/           0, /*End of Scope*/
                  /*SwitchType*/ 11,  MVT::i64,// ->11699
/*11688*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11690*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tglobaladdr:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tglobaladdr:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::TargetBlockAddress),// ->11733
/*11703*/         OPC_MoveParent,
/*11704*/         OPC_MoveParent,
/*11705*/         OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->11719
/*11708*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11710*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tblockaddress:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tblockaddress:i32):$lo)
                  /*SwitchType*/ 11,  MVT::i64,// ->11732
/*11721*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11723*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tblockaddress:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tblockaddress:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::TargetJumpTable),// ->11766
/*11736*/         OPC_MoveParent,
/*11737*/         OPC_MoveParent,
/*11738*/         OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->11752
/*11741*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11743*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tjumptable:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tjumptable:i32):$lo)
                  /*SwitchType*/ 11,  MVT::i64,// ->11765
/*11754*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11756*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tjumptable:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tjumptable:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::TargetConstantPool),// ->11799
/*11769*/         OPC_MoveParent,
/*11770*/         OPC_MoveParent,
/*11771*/         OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->11785
/*11774*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11776*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tconstpool:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tconstpool:i32):$lo)
                  /*SwitchType*/ 11,  MVT::i64,// ->11798
/*11787*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11789*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tconstpool:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tconstpool:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->11832
/*11802*/         OPC_MoveParent,
/*11803*/         OPC_MoveParent,
/*11804*/         OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->11818
/*11807*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11809*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tglobaltlsaddr:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaltlsaddr:i32):$lo)
                  /*SwitchType*/ 11,  MVT::i64,// ->11831
/*11820*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11822*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tglobaltlsaddr:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tglobaltlsaddr:i64):$lo)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 41,  TARGET_VAL(MipsISD::GPRel),// ->11877
/*11836*/       OPC_RecordChild0, // #1 = $in
/*11837*/       OPC_MoveChild, 0,
/*11839*/       OPC_SwitchOpcode /*2 cases */, 15,  TARGET_VAL(ISD::TargetGlobalAddress),// ->11858
/*11843*/         OPC_MoveParent,
/*11844*/         OPC_MoveParent,
/*11845*/         OPC_CheckType, MVT::i32,
/*11847*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11849*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegs:i32:$gp, (MipsGPRel:i32 (tglobaladdr:i32):$in)) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in)
                /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::TargetConstantPool),// ->11876
/*11861*/         OPC_MoveParent,
/*11862*/         OPC_MoveParent,
/*11863*/         OPC_CheckType, MVT::i32,
/*11865*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11867*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegs:i32:$gp, (MipsGPRel:i32 (tconstpool:i32):$in)) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tconstpool:i32):$in)
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*11878*/   /*Scope*/ 116|128,1/*244*/, /*->12124*/
/*11880*/     OPC_MoveChild, 0,
/*11882*/     OPC_SwitchOpcode /*2 cases */, 62|128,1/*190*/,  TARGET_VAL(MipsISD::Lo),// ->12077
/*11887*/       OPC_RecordChild0, // #0 = $lo
/*11888*/       OPC_MoveChild, 0,
/*11890*/       OPC_SwitchOpcode /*5 cases */, 46,  TARGET_VAL(ISD::TargetGlobalAddress),// ->11940
/*11894*/         OPC_MoveParent,
/*11895*/         OPC_MoveParent,
/*11896*/         OPC_RecordChild1, // #1 = $hi
/*11897*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->11911
/*11900*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11902*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tglobaladdr:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tglobaladdr:i64):$lo)
                  /*SwitchType*/ 26,  MVT::i32,// ->11939
/*11913*/           OPC_Scope, 11, /*->11926*/ // 2 children in Scope
/*11915*/             OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*11917*/             OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                      // Src: (add:i32 (MipsLo:i32 (tglobaladdr:i32):$lo), CPU16Regs:i32:$hi) - Complexity = 9
                      // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$hi, (tglobaladdr:i32):$lo)
/*11926*/           /*Scope*/ 11, /*->11938*/
/*11927*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11929*/             OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                      // Src: (add:i32 (MipsLo:i32 (tglobaladdr:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                      // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaladdr:i32):$lo)
/*11938*/           0, /*End of Scope*/
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetBlockAddress),// ->11974
/*11943*/         OPC_MoveParent,
/*11944*/         OPC_MoveParent,
/*11945*/         OPC_RecordChild1, // #1 = $hi
/*11946*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->11960
/*11949*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11951*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tblockaddress:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tblockaddress:i64):$lo)
                  /*SwitchType*/ 11,  MVT::i32,// ->11973
/*11962*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11964*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tblockaddress:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tblockaddress:i32):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetJumpTable),// ->12008
/*11977*/         OPC_MoveParent,
/*11978*/         OPC_MoveParent,
/*11979*/         OPC_RecordChild1, // #1 = $hi
/*11980*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->11994
/*11983*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11985*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tjumptable:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tjumptable:i64):$lo)
                  /*SwitchType*/ 11,  MVT::i32,// ->12007
/*11996*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11998*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tjumptable:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tjumptable:i32):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetConstantPool),// ->12042
/*12011*/         OPC_MoveParent,
/*12012*/         OPC_MoveParent,
/*12013*/         OPC_RecordChild1, // #1 = $hi
/*12014*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->12028
/*12017*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12019*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tconstpool:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tconstpool:i64):$lo)
                  /*SwitchType*/ 11,  MVT::i32,// ->12041
/*12030*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12032*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tconstpool:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tconstpool:i32):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->12076
/*12045*/         OPC_MoveParent,
/*12046*/         OPC_MoveParent,
/*12047*/         OPC_RecordChild1, // #1 = $hi
/*12048*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->12062
/*12051*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12053*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tglobaltlsaddr:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tglobaltlsaddr:i64):$lo)
                  /*SwitchType*/ 11,  MVT::i32,// ->12075
/*12064*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12066*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tglobaltlsaddr:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaltlsaddr:i32):$lo)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 43,  TARGET_VAL(MipsISD::GPRel),// ->12123
/*12080*/       OPC_RecordChild0, // #0 = $in
/*12081*/       OPC_MoveChild, 0,
/*12083*/       OPC_SwitchOpcode /*2 cases */, 16,  TARGET_VAL(ISD::TargetGlobalAddress),// ->12103
/*12087*/         OPC_MoveParent,
/*12088*/         OPC_MoveParent,
/*12089*/         OPC_RecordChild1, // #1 = $gp
/*12090*/         OPC_CheckType, MVT::i32,
/*12092*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12094*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (MipsGPRel:i32 (tglobaladdr:i32):$in), CPURegs:i32:$gp) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in)
                /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::TargetConstantPool),// ->12122
/*12106*/         OPC_MoveParent,
/*12107*/         OPC_MoveParent,
/*12108*/         OPC_RecordChild1, // #1 = $gp
/*12109*/         OPC_CheckType, MVT::i32,
/*12111*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12113*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (MipsGPRel:i32 (tconstpool:i32):$in), CPURegs:i32:$gp) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tconstpool:i32):$in)
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*12124*/   /*Scope*/ 29|128,1/*157*/, /*->12283*/
/*12126*/     OPC_RecordChild0, // #0 = $rs
/*12127*/     OPC_RecordChild1, // #1 = $imm16
/*12128*/     OPC_Scope, 81, /*->12211*/ // 5 children in Scope
/*12130*/       OPC_MoveChild, 1,
/*12132*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12135*/       OPC_Scope, 35, /*->12172*/ // 3 children in Scope
/*12137*/         OPC_CheckPredicate, 28, // Predicate_immSExt16
/*12139*/         OPC_MoveParent,
/*12140*/         OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->12156
/*12143*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12145*/           OPC_EmitConvertToTarget, 1,
/*12147*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i32 CPURegsOpnd:i32:$rs, (imm:i32)<<P:Predicate_immSExt16>>:$imm16) - Complexity = 7
                    // Dst: (ADDiu:i32 CPURegsOpnd:i32:$rs, (imm:i32):$imm16)
                  /*SwitchType*/ 13,  MVT::i64,// ->12171
/*12158*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12160*/           OPC_EmitConvertToTarget, 1,
/*12162*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i64 CPU64RegsOpnd:i64:$rs, (imm:i64)<<P:Predicate_immSExt16>>:$imm16) - Complexity = 7
                    // Dst: (DADDiu:i64 CPU64RegsOpnd:i64:$rs, (imm:i64):$imm16)
                  0, // EndSwitchType
/*12172*/       /*Scope*/ 18, /*->12191*/
/*12173*/         OPC_CheckPredicate, 30, // Predicate_immSExt8
/*12175*/         OPC_MoveParent,
/*12176*/         OPC_CheckType, MVT::i32,
/*12178*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12180*/         OPC_EmitConvertToTarget, 1,
/*12182*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImm16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immSExt8>>:$imm) - Complexity = 7
                  // Dst: (AddiuRxRxImm16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immSExt8>>:$imm)
/*12191*/       /*Scope*/ 18, /*->12210*/
/*12192*/         OPC_CheckPredicate, 28, // Predicate_immSExt16
/*12194*/         OPC_MoveParent,
/*12195*/         OPC_CheckType, MVT::i32,
/*12197*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12199*/         OPC_EmitConvertToTarget, 1,
/*12201*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                  // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immSExt16>>:$imm)
/*12210*/       0, /*End of Scope*/
/*12211*/     /*Scope*/ 28, /*->12240*/
/*12212*/       OPC_CheckType, MVT::i32,
/*12214*/       OPC_Scope, 11, /*->12227*/ // 2 children in Scope
/*12216*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12218*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                  // Dst: (ADDu:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*12227*/       /*Scope*/ 11, /*->12239*/
/*12228*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12230*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AdduRxRyRz16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                  // Dst: (AdduRxRyRz16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*12239*/       0, /*End of Scope*/
/*12240*/     /*Scope*/ 13, /*->12254*/
/*12241*/       OPC_CheckType, MVT::i64,
/*12243*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12245*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (add:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
                // Dst: (DADDu:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*12254*/     /*Scope*/ 13, /*->12268*/
/*12255*/       OPC_CheckType, MVT::v2i16,
/*12257*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*12259*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (add:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 3
                // Dst: (ADDQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
/*12268*/     /*Scope*/ 13, /*->12282*/
/*12269*/       OPC_CheckType, MVT::v4i8,
/*12271*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*12273*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (add:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b) - Complexity = 3
                // Dst: (ADDU_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b)
/*12282*/     0, /*End of Scope*/
/*12283*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 103|128,9/*1255*/,  TARGET_VAL(ISD::SETCC),// ->13543
/*12288*/   OPC_RecordChild0, // #0 = $lhs
/*12289*/   OPC_Scope, 60|128,6/*828*/, /*->13120*/ // 2 children in Scope
/*12292*/     OPC_CheckChild0Type, MVT::i32,
/*12294*/     OPC_Scope, 7|128,1/*135*/, /*->12432*/ // 2 children in Scope
/*12297*/       OPC_MoveChild, 1,
/*12299*/       OPC_Scope, 67, /*->12368*/ // 2 children in Scope
/*12301*/         OPC_CheckInteger, 0, 
/*12303*/         OPC_MoveParent,
/*12304*/         OPC_MoveChild, 2,
/*12306*/         OPC_Scope, 19, /*->12327*/ // 3 children in Scope
/*12308*/           OPC_CheckCondCode, ISD::SETEQ,
/*12310*/           OPC_MoveParent,
/*12311*/           OPC_CheckType, MVT::i32,
/*12313*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12315*/           OPC_EmitInteger, MVT::i32, 1, 
/*12318*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other) - Complexity = 8
                    // Dst: (SLTiu:i32 CPURegs:i32:$lhs, 1:i32)
/*12327*/         /*Scope*/ 19, /*->12347*/
/*12328*/           OPC_CheckCondCode, ISD::SETNE,
/*12330*/           OPC_MoveParent,
/*12331*/           OPC_CheckType, MVT::i32,
/*12333*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12335*/           OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*12338*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other) - Complexity = 8
                    // Dst: (SLTu:i32 ZERO:i32, CPURegs:i32:$lhs)
/*12347*/         /*Scope*/ 19, /*->12367*/
/*12348*/           OPC_CheckCondCode, ISD::SETEQ,
/*12350*/           OPC_MoveParent,
/*12351*/           OPC_CheckType, MVT::i32,
/*12353*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12355*/           OPC_EmitInteger, MVT::i32, 1, 
/*12358*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltiuCCRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, 0:i32, SETEQ:Other) - Complexity = 8
                    // Dst: (SltiuCCRxImmX16:i32 CPU16Regs:i32:$lhs, 1:i32)
/*12367*/         0, /*End of Scope*/
/*12368*/       /*Scope*/ 62, /*->12431*/
/*12369*/         OPC_CheckInteger, 127|128,127|128,125|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709518847*/, 
/*12380*/         OPC_MoveParent,
/*12381*/         OPC_MoveChild, 2,
/*12383*/         OPC_CheckCondCode, ISD::SETGT,
/*12385*/         OPC_MoveParent,
/*12386*/         OPC_CheckType, MVT::i32,
/*12388*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12390*/         OPC_EmitInteger, MVT::i32, 0|128,0|128,126|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709518848*/, 
/*12402*/         OPC_EmitNode, TARGET_VAL(Mips::SltiCCRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*12411*/         OPC_EmitInteger, MVT::i32, 1, 
/*12414*/         OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*12422*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                  // Src: (setcc:i32 CPU16Regs:i32:$lhs, -32769:i32, SETGT:Other) - Complexity = 8
                  // Dst: (XorRxRxRy16:i32 (SltiCCRxImmX16:i32 CPU16Regs:i32:$lhs, -32768:i32), (LiRxImmX16:i32 1:i32))
/*12431*/       0, /*End of Scope*/
/*12432*/     /*Scope*/ 45|128,5/*685*/, /*->13119*/
/*12434*/       OPC_RecordChild1, // #1 = $imm16
/*12435*/       OPC_Scope, 22|128,1/*150*/, /*->12588*/ // 2 children in Scope
/*12438*/         OPC_MoveChild, 1,
/*12440*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12443*/         OPC_CheckPredicate, 28, // Predicate_immSExt16
/*12445*/         OPC_MoveParent,
/*12446*/         OPC_MoveChild, 2,
/*12448*/         OPC_Scope, 18, /*->12468*/ // 6 children in Scope
/*12450*/           OPC_CheckCondCode, ISD::SETLT,
/*12452*/           OPC_MoveParent,
/*12453*/           OPC_CheckType, MVT::i32,
/*12455*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12457*/           OPC_EmitConvertToTarget, 1,
/*12459*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETLT:Other) - Complexity = 7
                    // Dst: (SLTi:i32 CPURegs:i32:$rs, (imm:i32):$imm16)
/*12468*/         /*Scope*/ 18, /*->12487*/
/*12469*/           OPC_CheckCondCode, ISD::SETULT,
/*12471*/           OPC_MoveParent,
/*12472*/           OPC_CheckType, MVT::i32,
/*12474*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12476*/           OPC_EmitConvertToTarget, 1,
/*12478*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETULT:Other) - Complexity = 7
                    // Dst: (SLTiu:i32 CPURegs:i32:$rs, (imm:i32):$imm16)
/*12487*/         /*Scope*/ 30, /*->12518*/
/*12488*/           OPC_CheckCondCode, ISD::SETGE,
/*12490*/           OPC_MoveParent,
/*12491*/           OPC_CheckType, MVT::i32,
/*12493*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12495*/           OPC_EmitConvertToTarget, 1,
/*12497*/           OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*12506*/           OPC_EmitInteger, MVT::i32, 1, 
/*12509*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other) - Complexity = 7
                    // Dst: (XORi:i32 (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*12518*/         /*Scope*/ 30, /*->12549*/
/*12519*/           OPC_CheckCondCode, ISD::SETUGE,
/*12521*/           OPC_MoveParent,
/*12522*/           OPC_CheckType, MVT::i32,
/*12524*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12526*/           OPC_EmitConvertToTarget, 1,
/*12528*/           OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*12537*/           OPC_EmitInteger, MVT::i32, 1, 
/*12540*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other) - Complexity = 7
                    // Dst: (XORi:i32 (SLTiu:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*12549*/         /*Scope*/ 18, /*->12568*/
/*12550*/           OPC_CheckCondCode, ISD::SETLT,
/*12552*/           OPC_MoveParent,
/*12553*/           OPC_CheckType, MVT::i32,
/*12555*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12557*/           OPC_EmitConvertToTarget, 1,
/*12559*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltiCCRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETLT:Other) - Complexity = 7
                    // Dst: (SltiCCRxImmX16:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm16)
/*12568*/         /*Scope*/ 18, /*->12587*/
/*12569*/           OPC_CheckCondCode, ISD::SETULT,
/*12571*/           OPC_MoveParent,
/*12572*/           OPC_CheckType, MVT::i32,
/*12574*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12576*/           OPC_EmitConvertToTarget, 1,
/*12578*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltiuCCRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETULT:Other) - Complexity = 7
                    // Dst: (SltiuCCRxImmX16:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm16)
/*12587*/         0, /*End of Scope*/
/*12588*/       /*Scope*/ 16|128,4/*528*/, /*->13118*/
/*12590*/         OPC_MoveChild, 2,
/*12592*/         OPC_Scope, 16, /*->12610*/ // 20 children in Scope
/*12594*/           OPC_CheckCondCode, ISD::SETLT,
/*12596*/           OPC_MoveParent,
/*12597*/           OPC_CheckType, MVT::i32,
/*12599*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12601*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLT), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPURegs:i32:$rs, CPURegs:i32:$rt, SETLT:Other) - Complexity = 3
                    // Dst: (SLT:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*12610*/         /*Scope*/ 16, /*->12627*/
/*12611*/           OPC_CheckCondCode, ISD::SETULT,
/*12613*/           OPC_MoveParent,
/*12614*/           OPC_CheckType, MVT::i32,
/*12616*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12618*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPURegs:i32:$rs, CPURegs:i32:$rt, SETULT:Other) - Complexity = 3
                    // Dst: (SLTu:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*12627*/         /*Scope*/ 16, /*->12644*/
/*12628*/           OPC_CheckCondCode, ISD::SETGT,
/*12630*/           OPC_MoveParent,
/*12631*/           OPC_CheckType, MVT::i32,
/*12633*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12635*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLT), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGT:Other) - Complexity = 3
                    // Dst: (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs)
/*12644*/         /*Scope*/ 16, /*->12661*/
/*12645*/           OPC_CheckCondCode, ISD::SETUGT,
/*12647*/           OPC_MoveParent,
/*12648*/           OPC_CheckType, MVT::i32,
/*12650*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12652*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGT:Other) - Complexity = 3
                    // Dst: (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs)
/*12661*/         /*Scope*/ 28, /*->12690*/
/*12662*/           OPC_CheckCondCode, ISD::SETEQ,
/*12664*/           OPC_MoveParent,
/*12665*/           OPC_CheckType, MVT::i32,
/*12667*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12669*/           OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*12678*/           OPC_EmitInteger, MVT::i32, 1, 
/*12681*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other) - Complexity = 3
                    // Dst: (SLTiu:i32 (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), 1:i32)
/*12690*/         /*Scope*/ 28, /*->12719*/
/*12691*/           OPC_CheckCondCode, ISD::SETNE,
/*12693*/           OPC_MoveParent,
/*12694*/           OPC_CheckType, MVT::i32,
/*12696*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12698*/           OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*12701*/           OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #3
/*12710*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other) - Complexity = 3
                    // Dst: (SLTu:i32 ZERO:i32, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs))
/*12719*/         /*Scope*/ 28, /*->12748*/
/*12720*/           OPC_CheckCondCode, ISD::SETLE,
/*12722*/           OPC_MoveParent,
/*12723*/           OPC_CheckType, MVT::i32,
/*12725*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12727*/           OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*12736*/           OPC_EmitInteger, MVT::i32, 1, 
/*12739*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), 1:i32)
/*12748*/         /*Scope*/ 28, /*->12777*/
/*12749*/           OPC_CheckCondCode, ISD::SETULE,
/*12751*/           OPC_MoveParent,
/*12752*/           OPC_CheckType, MVT::i32,
/*12754*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12756*/           OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*12765*/           OPC_EmitInteger, MVT::i32, 1, 
/*12768*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), 1:i32)
/*12777*/         /*Scope*/ 28, /*->12806*/
/*12778*/           OPC_CheckCondCode, ISD::SETGE,
/*12780*/           OPC_MoveParent,
/*12781*/           OPC_CheckType, MVT::i32,
/*12783*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12785*/           OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*12794*/           OPC_EmitInteger, MVT::i32, 1, 
/*12797*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), 1:i32)
/*12806*/         /*Scope*/ 28, /*->12835*/
/*12807*/           OPC_CheckCondCode, ISD::SETUGE,
/*12809*/           OPC_MoveParent,
/*12810*/           OPC_CheckType, MVT::i32,
/*12812*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12814*/           OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*12823*/           OPC_EmitInteger, MVT::i32, 1, 
/*12826*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), 1:i32)
/*12835*/         /*Scope*/ 16, /*->12852*/
/*12836*/           OPC_CheckCondCode, ISD::SETGT,
/*12838*/           OPC_MoveParent,
/*12839*/           OPC_CheckType, MVT::i32,
/*12841*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12843*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETGT:Other) - Complexity = 3
                    // Dst: (SltCCRxRy16:i32 CPU16Regs:i32:$rhs, CPU16Regs:i32:$lhs)
/*12852*/         /*Scope*/ 16, /*->12869*/
/*12853*/           OPC_CheckCondCode, ISD::SETLT,
/*12855*/           OPC_MoveParent,
/*12856*/           OPC_CheckType, MVT::i32,
/*12858*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12860*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETLT:Other) - Complexity = 3
                    // Dst: (SltCCRxRy16:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry)
/*12869*/         /*Scope*/ 16, /*->12886*/
/*12870*/           OPC_CheckCondCode, ISD::SETUGT,
/*12872*/           OPC_MoveParent,
/*12873*/           OPC_CheckType, MVT::i32,
/*12875*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12877*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETUGT:Other) - Complexity = 3
                    // Dst: (SltuCCRxRy16:i32 CPU16Regs:i32:$rhs, CPU16Regs:i32:$lhs)
/*12886*/         /*Scope*/ 16, /*->12903*/
/*12887*/           OPC_CheckCondCode, ISD::SETULT,
/*12889*/           OPC_MoveParent,
/*12890*/           OPC_CheckType, MVT::i32,
/*12892*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12894*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETULT:Other) - Complexity = 3
                    // Dst: (SltuCCRxRy16:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry)
/*12903*/         /*Scope*/ 28, /*->12932*/
/*12904*/           OPC_CheckCondCode, ISD::SETEQ,
/*12906*/           OPC_MoveParent,
/*12907*/           OPC_CheckType, MVT::i32,
/*12909*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12911*/           OPC_EmitNode, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*12920*/           OPC_EmitInteger, MVT::i32, 1, 
/*12923*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltiuCCRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETEQ:Other) - Complexity = 3
                    // Dst: (SltiuCCRxImmX16:i32 (XorRxRxRy16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs), 1:i32)
/*12932*/         /*Scope*/ 36, /*->12969*/
/*12933*/           OPC_CheckCondCode, ISD::SETGE,
/*12935*/           OPC_MoveParent,
/*12936*/           OPC_CheckType, MVT::i32,
/*12938*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12940*/           OPC_EmitNode, TARGET_VAL(Mips::SltCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*12949*/           OPC_EmitInteger, MVT::i32, 1, 
/*12952*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*12960*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETGE:Other) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 (SltCCRxRy16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs), (LiRxImmX16:i32 1:i32))
/*12969*/         /*Scope*/ 36, /*->13006*/
/*12970*/           OPC_CheckCondCode, ISD::SETLE,
/*12972*/           OPC_MoveParent,
/*12973*/           OPC_CheckType, MVT::i32,
/*12975*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12977*/           OPC_EmitNode, TARGET_VAL(Mips::SltCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*12986*/           OPC_EmitInteger, MVT::i32, 1, 
/*12989*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImm16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*12997*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETLE:Other) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 (SltCCRxRy16:i32 CPU16Regs:i32:$rhs, CPU16Regs:i32:$lhs), (LiRxImm16:i32 1:i32))
/*13006*/         /*Scope*/ 36, /*->13043*/
/*13007*/           OPC_CheckCondCode, ISD::SETNE,
/*13009*/           OPC_MoveParent,
/*13010*/           OPC_CheckType, MVT::i32,
/*13012*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13014*/           OPC_EmitInteger, MVT::i32, 0, 
/*13017*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*13025*/           OPC_EmitNode, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*13034*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETNE:Other) - Complexity = 3
                    // Dst: (SltuCCRxRy16:i32 (LiRxImmX16:i32 0:i32), (XorRxRxRy16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs))
/*13043*/         /*Scope*/ 36, /*->13080*/
/*13044*/           OPC_CheckCondCode, ISD::SETUGE,
/*13046*/           OPC_MoveParent,
/*13047*/           OPC_CheckType, MVT::i32,
/*13049*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13051*/           OPC_EmitNode, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*13060*/           OPC_EmitInteger, MVT::i32, 1, 
/*13063*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*13071*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETUGE:Other) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 (SltuCCRxRy16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs), (LiRxImmX16:i32 1:i32))
/*13080*/         /*Scope*/ 36, /*->13117*/
/*13081*/           OPC_CheckCondCode, ISD::SETULE,
/*13083*/           OPC_MoveParent,
/*13084*/           OPC_CheckType, MVT::i32,
/*13086*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13088*/           OPC_EmitNode, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*13097*/           OPC_EmitInteger, MVT::i32, 1, 
/*13100*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*13108*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETULE:Other) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 (SltuCCRxRy16:i32 CPU16Regs:i32:$rhs, CPU16Regs:i32:$lhs), (LiRxImmX16:i32 1:i32))
/*13117*/         0, /*End of Scope*/
/*13118*/       0, /*End of Scope*/
/*13119*/     0, /*End of Scope*/
/*13120*/   /*Scope*/ 36|128,3/*420*/, /*->13542*/
/*13122*/     OPC_CheckChild0Type, MVT::i64,
/*13124*/     OPC_Scope, 49, /*->13175*/ // 2 children in Scope
/*13126*/       OPC_MoveChild, 1,
/*13128*/       OPC_CheckInteger, 0, 
/*13130*/       OPC_MoveParent,
/*13131*/       OPC_MoveChild, 2,
/*13133*/       OPC_Scope, 19, /*->13154*/ // 2 children in Scope
/*13135*/         OPC_CheckCondCode, ISD::SETEQ,
/*13137*/         OPC_MoveParent,
/*13138*/         OPC_CheckType, MVT::i32,
/*13140*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13142*/         OPC_EmitInteger, MVT::i64, 1, 
/*13145*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other) - Complexity = 8
                  // Dst: (SLTiu64:i32 CPU64Regs:i64:$lhs, 1:i64)
/*13154*/       /*Scope*/ 19, /*->13174*/
/*13155*/         OPC_CheckCondCode, ISD::SETNE,
/*13157*/         OPC_MoveParent,
/*13158*/         OPC_CheckType, MVT::i32,
/*13160*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13162*/         OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*13165*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other) - Complexity = 8
                  // Dst: (SLTu64:i32 ZERO_64:i64, CPU64Regs:i64:$lhs)
/*13174*/       0, /*End of Scope*/
/*13175*/     /*Scope*/ 108|128,2/*364*/, /*->13541*/
/*13177*/       OPC_RecordChild1, // #1 = $imm16
/*13178*/       OPC_Scope, 112, /*->13292*/ // 2 children in Scope
/*13180*/         OPC_MoveChild, 1,
/*13182*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13185*/         OPC_CheckPredicate, 28, // Predicate_immSExt16
/*13187*/         OPC_MoveParent,
/*13188*/         OPC_MoveChild, 2,
/*13190*/         OPC_Scope, 18, /*->13210*/ // 4 children in Scope
/*13192*/           OPC_CheckCondCode, ISD::SETLT,
/*13194*/           OPC_MoveParent,
/*13195*/           OPC_CheckType, MVT::i32,
/*13197*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13199*/           OPC_EmitConvertToTarget, 1,
/*13201*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTi64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 CPU64Regs:i64:$rs, (imm:i64)<<P:Predicate_immSExt16>>:$imm16, SETLT:Other) - Complexity = 7
                    // Dst: (SLTi64:i32 CPU64Regs:i64:$rs, (imm:i64):$imm16)
/*13210*/         /*Scope*/ 18, /*->13229*/
/*13211*/           OPC_CheckCondCode, ISD::SETULT,
/*13213*/           OPC_MoveParent,
/*13214*/           OPC_CheckType, MVT::i32,
/*13216*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13218*/           OPC_EmitConvertToTarget, 1,
/*13220*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 CPU64Regs:i64:$rs, (imm:i64)<<P:Predicate_immSExt16>>:$imm16, SETULT:Other) - Complexity = 7
                    // Dst: (SLTiu64:i32 CPU64Regs:i64:$rs, (imm:i64):$imm16)
/*13229*/         /*Scope*/ 30, /*->13260*/
/*13230*/           OPC_CheckCondCode, ISD::SETGE,
/*13232*/           OPC_MoveParent,
/*13233*/           OPC_CheckType, MVT::i32,
/*13235*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13237*/           OPC_EmitConvertToTarget, 1,
/*13239*/           OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*13248*/           OPC_EmitInteger, MVT::i32, 1, 
/*13251*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                    // Src: (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other) - Complexity = 7
                    // Dst: (XORi:i32 (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*13260*/         /*Scope*/ 30, /*->13291*/
/*13261*/           OPC_CheckCondCode, ISD::SETUGE,
/*13263*/           OPC_MoveParent,
/*13264*/           OPC_CheckType, MVT::i32,
/*13266*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13268*/           OPC_EmitConvertToTarget, 1,
/*13270*/           OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*13279*/           OPC_EmitInteger, MVT::i32, 1, 
/*13282*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                    // Src: (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other) - Complexity = 7
                    // Dst: (XORi:i32 (SLTiu64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*13291*/         0, /*End of Scope*/
/*13292*/       /*Scope*/ 118|128,1/*246*/, /*->13540*/
/*13294*/         OPC_MoveChild, 2,
/*13296*/         OPC_Scope, 16, /*->13314*/ // 10 children in Scope
/*13298*/           OPC_CheckCondCode, ISD::SETLT,
/*13300*/           OPC_MoveParent,
/*13301*/           OPC_CheckType, MVT::i32,
/*13303*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13305*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLT64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, SETLT:Other) - Complexity = 3
                    // Dst: (SLT64:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt)
/*13314*/         /*Scope*/ 16, /*->13331*/
/*13315*/           OPC_CheckCondCode, ISD::SETULT,
/*13317*/           OPC_MoveParent,
/*13318*/           OPC_CheckType, MVT::i32,
/*13320*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13322*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, SETULT:Other) - Complexity = 3
                    // Dst: (SLTu64:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt)
/*13331*/         /*Scope*/ 16, /*->13348*/
/*13332*/           OPC_CheckCondCode, ISD::SETGT,
/*13334*/           OPC_MoveParent,
/*13335*/           OPC_CheckType, MVT::i32,
/*13337*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13339*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLT64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGT:Other) - Complexity = 3
                    // Dst: (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs)
/*13348*/         /*Scope*/ 16, /*->13365*/
/*13349*/           OPC_CheckCondCode, ISD::SETUGT,
/*13351*/           OPC_MoveParent,
/*13352*/           OPC_CheckType, MVT::i32,
/*13354*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13356*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGT:Other) - Complexity = 3
                    // Dst: (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs)
/*13365*/         /*Scope*/ 28, /*->13394*/
/*13366*/           OPC_CheckCondCode, ISD::SETEQ,
/*13368*/           OPC_MoveParent,
/*13369*/           OPC_CheckType, MVT::i32,
/*13371*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13373*/           OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #2
/*13382*/           OPC_EmitInteger, MVT::i64, 1, 
/*13385*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other) - Complexity = 3
                    // Dst: (SLTiu64:i32 (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), 1:i64)
/*13394*/         /*Scope*/ 28, /*->13423*/
/*13395*/           OPC_CheckCondCode, ISD::SETNE,
/*13397*/           OPC_MoveParent,
/*13398*/           OPC_CheckType, MVT::i32,
/*13400*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13402*/           OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*13405*/           OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #3
/*13414*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other) - Complexity = 3
                    // Dst: (SLTu64:i32 ZERO_64:i64, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs))
/*13423*/         /*Scope*/ 28, /*->13452*/
/*13424*/           OPC_CheckCondCode, ISD::SETLE,
/*13426*/           OPC_MoveParent,
/*13427*/           OPC_CheckType, MVT::i32,
/*13429*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13431*/           OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*13440*/           OPC_EmitInteger, MVT::i32, 1, 
/*13443*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), 1:i32)
/*13452*/         /*Scope*/ 28, /*->13481*/
/*13453*/           OPC_CheckCondCode, ISD::SETULE,
/*13455*/           OPC_MoveParent,
/*13456*/           OPC_CheckType, MVT::i32,
/*13458*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13460*/           OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*13469*/           OPC_EmitInteger, MVT::i32, 1, 
/*13472*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), 1:i32)
/*13481*/         /*Scope*/ 28, /*->13510*/
/*13482*/           OPC_CheckCondCode, ISD::SETGE,
/*13484*/           OPC_MoveParent,
/*13485*/           OPC_CheckType, MVT::i32,
/*13487*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13489*/           OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*13498*/           OPC_EmitInteger, MVT::i32, 1, 
/*13501*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), 1:i32)
/*13510*/         /*Scope*/ 28, /*->13539*/
/*13511*/           OPC_CheckCondCode, ISD::SETUGE,
/*13513*/           OPC_MoveParent,
/*13514*/           OPC_CheckType, MVT::i32,
/*13516*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13518*/           OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*13527*/           OPC_EmitInteger, MVT::i32, 1, 
/*13530*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), 1:i32)
/*13539*/         0, /*End of Scope*/
/*13540*/       0, /*End of Scope*/
/*13541*/     0, /*End of Scope*/
/*13542*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 50,  TARGET_VAL(MipsISD::FPBrcond),// ->13596
/*13546*/   OPC_RecordNode,   // #0 = 'MipsFPBrcond' chained node
/*13547*/   OPC_CaptureGlueInput,
/*13548*/   OPC_MoveChild, 1,
/*13550*/   OPC_CheckType, MVT::i32,
/*13552*/   OPC_Scope, 20, /*->13574*/ // 2 children in Scope
/*13554*/     OPC_CheckInteger, 0, 
/*13556*/     OPC_MoveParent,
/*13557*/     OPC_RecordChild2, // #1 = $offset
/*13558*/     OPC_MoveChild, 2,
/*13560*/     OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*13563*/     OPC_MoveParent,
/*13564*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13566*/     OPC_EmitMergeInputChains1_0,
/*13567*/     OPC_MorphNodeTo, TARGET_VAL(Mips::BC1F), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsFPBrcond 0:i32, (bb:Other):$offset) - Complexity = 8
              // Dst: (BC1F (bb:Other):$offset)
/*13574*/   /*Scope*/ 20, /*->13595*/
/*13575*/     OPC_CheckInteger, 1, 
/*13577*/     OPC_MoveParent,
/*13578*/     OPC_RecordChild2, // #1 = $offset
/*13579*/     OPC_MoveChild, 2,
/*13581*/     OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*13584*/     OPC_MoveParent,
/*13585*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13587*/     OPC_EmitMergeInputChains1_0,
/*13588*/     OPC_MorphNodeTo, TARGET_VAL(Mips::BC1T), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsFPBrcond 1:i32, (bb:Other):$offset) - Complexity = 8
              // Dst: (BC1T (bb:Other):$offset)
/*13595*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 93,  TARGET_VAL(ISD::SUB),// ->13692
/*13599*/   OPC_Scope, 18, /*->13619*/ // 2 children in Scope
/*13601*/     OPC_MoveChild, 0,
/*13603*/     OPC_CheckInteger, 0, 
/*13605*/     OPC_MoveParent,
/*13606*/     OPC_RecordChild1, // #0 = $r
/*13607*/     OPC_CheckType, MVT::i32,
/*13609*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13611*/     OPC_MorphNodeTo, TARGET_VAL(Mips::NegRxRy16), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (sub:i32 0:i32, CPU16Regs:i32:$r) - Complexity = 8
              // Dst: (NegRxRy16:i32 CPU16Regs:i32:$r)
/*13619*/   /*Scope*/ 71, /*->13691*/
/*13620*/     OPC_RecordChild0, // #0 = $rs
/*13621*/     OPC_RecordChild1, // #1 = $rt
/*13622*/     OPC_SwitchType /*4 cases */, 26,  MVT::i32,// ->13651
/*13625*/       OPC_Scope, 11, /*->13638*/ // 2 children in Scope
/*13627*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13629*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SUBu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                  // Dst: (SUBu:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*13638*/       /*Scope*/ 11, /*->13650*/
/*13639*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13641*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SubuRxRyRz16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                  // Dst: (SubuRxRyRz16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*13650*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->13664
/*13653*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13655*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSUBu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
                // Dst: (DSUBu:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
              /*SwitchType*/ 11,  MVT::v2i16,// ->13677
/*13666*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*13668*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (sub:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 3
                // Dst: (SUBQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
              /*SwitchType*/ 11,  MVT::v4i8,// ->13690
/*13679*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*13681*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (sub:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b) - Complexity = 3
                // Dst: (SUBU_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b)
              0, // EndSwitchType
/*13691*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 94,  TARGET_VAL(ISD::AND),// ->13789
/*13695*/   OPC_RecordChild0, // #0 = $rs
/*13696*/   OPC_RecordChild1, // #1 = $imm16
/*13697*/   OPC_Scope, 46, /*->13745*/ // 3 children in Scope
/*13699*/     OPC_MoveChild, 1,
/*13701*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13704*/     OPC_CheckPredicate, 27, // Predicate_immZExt16
/*13706*/     OPC_MoveParent,
/*13707*/     OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->13726
/*13710*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13712*/       OPC_EmitConvertToTarget, 1,
/*13714*/       OPC_EmitNodeXForm, 0, 2, // LO16
/*13717*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ANDi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (and:i32 CPURegsOpnd:i32:$rs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (ANDi:i32 CPURegsOpnd:i32:$rs, (LO16:i32 (imm:i32):$imm16))
              /*SwitchType*/ 16,  MVT::i64,// ->13744
/*13728*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13730*/       OPC_EmitConvertToTarget, 1,
/*13732*/       OPC_EmitNodeXForm, 0, 2, // LO16
/*13735*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DANDi), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (and:i64 CPU64RegsOpnd:i64:$rs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (DANDi:i64 CPU64RegsOpnd:i64:$rs, (LO16:i64 (imm:i64):$imm16))
              0, // EndSwitchType
/*13745*/   /*Scope*/ 28, /*->13774*/
/*13746*/     OPC_CheckType, MVT::i32,
/*13748*/     OPC_Scope, 11, /*->13761*/ // 2 children in Scope
/*13750*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13752*/       OPC_MorphNodeTo, TARGET_VAL(Mips::AND), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                // Dst: (AND:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*13761*/     /*Scope*/ 11, /*->13773*/
/*13762*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13764*/       OPC_MorphNodeTo, TARGET_VAL(Mips::AndRxRxRy16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                // Dst: (AndRxRxRy16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*13773*/     0, /*End of Scope*/
/*13774*/   /*Scope*/ 13, /*->13788*/
/*13775*/     OPC_CheckType, MVT::i64,
/*13777*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13779*/     OPC_MorphNodeTo, TARGET_VAL(Mips::AND64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (and:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
              // Dst: (AND64:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*13788*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 94,  TARGET_VAL(ISD::OR),// ->13886
/*13792*/   OPC_RecordChild0, // #0 = $rs
/*13793*/   OPC_RecordChild1, // #1 = $imm16
/*13794*/   OPC_Scope, 46, /*->13842*/ // 3 children in Scope
/*13796*/     OPC_MoveChild, 1,
/*13798*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13801*/     OPC_CheckPredicate, 27, // Predicate_immZExt16
/*13803*/     OPC_MoveParent,
/*13804*/     OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->13823
/*13807*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13809*/       OPC_EmitConvertToTarget, 1,
/*13811*/       OPC_EmitNodeXForm, 0, 2, // LO16
/*13814*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (or:i32 CPURegsOpnd:i32:$rs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (ORi:i32 CPURegsOpnd:i32:$rs, (LO16:i32 (imm:i32):$imm16))
              /*SwitchType*/ 16,  MVT::i64,// ->13841
/*13825*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13827*/       OPC_EmitConvertToTarget, 1,
/*13829*/       OPC_EmitNodeXForm, 0, 2, // LO16
/*13832*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ORi64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 CPU64RegsOpnd:i64:$rs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (ORi64:i64 CPU64RegsOpnd:i64:$rs, (LO16:i64 (imm:i64):$imm16))
              0, // EndSwitchType
/*13842*/   /*Scope*/ 28, /*->13871*/
/*13843*/     OPC_CheckType, MVT::i32,
/*13845*/     OPC_Scope, 11, /*->13858*/ // 2 children in Scope
/*13847*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13849*/       OPC_MorphNodeTo, TARGET_VAL(Mips::OR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                // Dst: (OR:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*13858*/     /*Scope*/ 11, /*->13870*/
/*13859*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13861*/       OPC_MorphNodeTo, TARGET_VAL(Mips::OrRxRxRy16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                // Dst: (OrRxRxRy16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*13870*/     0, /*End of Scope*/
/*13871*/   /*Scope*/ 13, /*->13885*/
/*13872*/     OPC_CheckType, MVT::i64,
/*13874*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13876*/     OPC_MorphNodeTo, TARGET_VAL(Mips::OR64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (or:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
              // Dst: (OR64:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*13885*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 117,  TARGET_VAL(ISD::SHL),// ->14006
/*13889*/   OPC_RecordChild0, // #0 = $rt
/*13890*/   OPC_RecordChild1, // #1 = $shamt
/*13891*/   OPC_Scope, 66, /*->13959*/ // 2 children in Scope
/*13893*/     OPC_MoveChild, 1,
/*13895*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13898*/     OPC_CheckType, MVT::i32,
/*13900*/     OPC_Scope, 18, /*->13920*/ // 3 children in Scope
/*13902*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*13904*/       OPC_MoveParent,
/*13905*/       OPC_CheckType, MVT::i32,
/*13907*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13909*/       OPC_EmitConvertToTarget, 1,
/*13911*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SLL), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i32 CPURegsOpnd:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (SLL:i32 CPURegsOpnd:i32:$rt, (imm:i32):$shamt)
/*13920*/     /*Scope*/ 18, /*->13939*/
/*13921*/       OPC_CheckPredicate, 31, // Predicate_immZExt6
/*13923*/       OPC_MoveParent,
/*13924*/       OPC_CheckType, MVT::i64,
/*13926*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13928*/       OPC_EmitConvertToTarget, 1,
/*13930*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSLL), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i64 CPU64RegsOpnd:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DSLL:i64 CPU64RegsOpnd:i64:$rt, (imm:i32):$shamt)
/*13939*/     /*Scope*/ 18, /*->13958*/
/*13940*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*13942*/       OPC_MoveParent,
/*13943*/       OPC_CheckType, MVT::i32,
/*13945*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13947*/       OPC_EmitConvertToTarget, 1,
/*13949*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SllX16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm) - Complexity = 7
                // Dst: (SllX16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm)
/*13958*/     0, /*End of Scope*/
/*13959*/   /*Scope*/ 45, /*->14005*/
/*13960*/     OPC_CheckChild1Type, MVT::i32,
/*13962*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->13991
/*13965*/       OPC_Scope, 11, /*->13978*/ // 2 children in Scope
/*13967*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13969*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLLV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (shl:i32 CPURegsOpnd:i32:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                  // Dst: (SLLV:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*13978*/       /*Scope*/ 11, /*->13990*/
/*13979*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13981*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SllvRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (shl:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra) - Complexity = 3
                  // Dst: (SllvRxRy16:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra)
/*13990*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->14004
/*13993*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13995*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSLLV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (shl:i64 CPU64RegsOpnd:i64:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                // Dst: (DSLLV:i64 CPURegsOpnd:i32:$rs, CPU64RegsOpnd:i64:$rt)
              0, // EndSwitchType
/*14005*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 117,  TARGET_VAL(ISD::SRL),// ->14126
/*14009*/   OPC_RecordChild0, // #0 = $rt
/*14010*/   OPC_RecordChild1, // #1 = $shamt
/*14011*/   OPC_Scope, 66, /*->14079*/ // 2 children in Scope
/*14013*/     OPC_MoveChild, 1,
/*14015*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14018*/     OPC_CheckType, MVT::i32,
/*14020*/     OPC_Scope, 18, /*->14040*/ // 3 children in Scope
/*14022*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14024*/       OPC_MoveParent,
/*14025*/       OPC_CheckType, MVT::i32,
/*14027*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14029*/       OPC_EmitConvertToTarget, 1,
/*14031*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SRL), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i32 CPURegsOpnd:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (SRL:i32 CPURegsOpnd:i32:$rt, (imm:i32):$shamt)
/*14040*/     /*Scope*/ 18, /*->14059*/
/*14041*/       OPC_CheckPredicate, 31, // Predicate_immZExt6
/*14043*/       OPC_MoveParent,
/*14044*/       OPC_CheckType, MVT::i64,
/*14046*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14048*/       OPC_EmitConvertToTarget, 1,
/*14050*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSRL), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i64 CPU64RegsOpnd:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DSRL:i64 CPU64RegsOpnd:i64:$rt, (imm:i32):$shamt)
/*14059*/     /*Scope*/ 18, /*->14078*/
/*14060*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14062*/       OPC_MoveParent,
/*14063*/       OPC_CheckType, MVT::i32,
/*14065*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14067*/       OPC_EmitConvertToTarget, 1,
/*14069*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SrlX16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm) - Complexity = 7
                // Dst: (SrlX16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm)
/*14078*/     0, /*End of Scope*/
/*14079*/   /*Scope*/ 45, /*->14125*/
/*14080*/     OPC_CheckChild1Type, MVT::i32,
/*14082*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->14111
/*14085*/       OPC_Scope, 11, /*->14098*/ // 2 children in Scope
/*14087*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14089*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SRLV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (srl:i32 CPURegsOpnd:i32:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                  // Dst: (SRLV:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*14098*/       /*Scope*/ 11, /*->14110*/
/*14099*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14101*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SrlvRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (srl:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra) - Complexity = 3
                  // Dst: (SrlvRxRy16:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra)
/*14110*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->14124
/*14113*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14115*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSRLV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (srl:i64 CPU64RegsOpnd:i64:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                // Dst: (DSRLV:i64 CPURegsOpnd:i32:$rs, CPU64RegsOpnd:i64:$rt)
              0, // EndSwitchType
/*14125*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 117,  TARGET_VAL(ISD::SRA),// ->14246
/*14129*/   OPC_RecordChild0, // #0 = $rt
/*14130*/   OPC_RecordChild1, // #1 = $shamt
/*14131*/   OPC_Scope, 66, /*->14199*/ // 2 children in Scope
/*14133*/     OPC_MoveChild, 1,
/*14135*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14138*/     OPC_CheckType, MVT::i32,
/*14140*/     OPC_Scope, 18, /*->14160*/ // 3 children in Scope
/*14142*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14144*/       OPC_MoveParent,
/*14145*/       OPC_CheckType, MVT::i32,
/*14147*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14149*/       OPC_EmitConvertToTarget, 1,
/*14151*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SRA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 CPURegsOpnd:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (SRA:i32 CPURegsOpnd:i32:$rt, (imm:i32):$shamt)
/*14160*/     /*Scope*/ 18, /*->14179*/
/*14161*/       OPC_CheckPredicate, 31, // Predicate_immZExt6
/*14163*/       OPC_MoveParent,
/*14164*/       OPC_CheckType, MVT::i64,
/*14166*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14168*/       OPC_EmitConvertToTarget, 1,
/*14170*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSRA), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i64 CPU64RegsOpnd:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DSRA:i64 CPU64RegsOpnd:i64:$rt, (imm:i32):$shamt)
/*14179*/     /*Scope*/ 18, /*->14198*/
/*14180*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14182*/       OPC_MoveParent,
/*14183*/       OPC_CheckType, MVT::i32,
/*14185*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14187*/       OPC_EmitConvertToTarget, 1,
/*14189*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SraX16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm) - Complexity = 7
                // Dst: (SraX16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm)
/*14198*/     0, /*End of Scope*/
/*14199*/   /*Scope*/ 45, /*->14245*/
/*14200*/     OPC_CheckChild1Type, MVT::i32,
/*14202*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->14231
/*14205*/       OPC_Scope, 11, /*->14218*/ // 2 children in Scope
/*14207*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14209*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SRAV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (sra:i32 CPURegsOpnd:i32:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                  // Dst: (SRAV:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*14218*/       /*Scope*/ 11, /*->14230*/
/*14219*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14221*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SravRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra) - Complexity = 3
                  // Dst: (SravRxRy16:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra)
/*14230*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->14244
/*14233*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14235*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSRAV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (sra:i64 CPU64RegsOpnd:i64:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                // Dst: (DSRAV:i64 CPURegsOpnd:i32:$rs, CPU64RegsOpnd:i64:$rt)
              0, // EndSwitchType
/*14245*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ROTR),// ->14332
/*14249*/   OPC_RecordChild0, // #0 = $rt
/*14250*/   OPC_RecordChild1, // #1 = $shamt
/*14251*/   OPC_Scope, 47, /*->14300*/ // 2 children in Scope
/*14253*/     OPC_MoveChild, 1,
/*14255*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14258*/     OPC_CheckType, MVT::i32,
/*14260*/     OPC_Scope, 18, /*->14280*/ // 2 children in Scope
/*14262*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14264*/       OPC_MoveParent,
/*14265*/       OPC_CheckType, MVT::i32,
/*14267*/       OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*14269*/       OPC_EmitConvertToTarget, 1,
/*14271*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ROTR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (rotr:i32 CPURegsOpnd:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (ROTR:i32 CPURegsOpnd:i32:$rt, (imm:i32):$shamt)
/*14280*/     /*Scope*/ 18, /*->14299*/
/*14281*/       OPC_CheckPredicate, 31, // Predicate_immZExt6
/*14283*/       OPC_MoveParent,
/*14284*/       OPC_CheckType, MVT::i64,
/*14286*/       OPC_CheckPatternPredicate, 16, // (Subtarget.hasMips64r2()) && (Subtarget.hasStandardEncoding())
/*14288*/       OPC_EmitConvertToTarget, 1,
/*14290*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DROTR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (rotr:i64 CPU64RegsOpnd:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DROTR:i64 CPU64RegsOpnd:i64:$rt, (imm:i32):$shamt)
/*14299*/     0, /*End of Scope*/
/*14300*/   /*Scope*/ 30, /*->14331*/
/*14301*/     OPC_CheckChild1Type, MVT::i32,
/*14303*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->14317
/*14306*/       OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*14308*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ROTRV), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (rotr:i32 CPURegsOpnd:i32:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                // Dst: (ROTRV:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
              /*SwitchType*/ 11,  MVT::i64,// ->14330
/*14319*/       OPC_CheckPatternPredicate, 16, // (Subtarget.hasMips64r2()) && (Subtarget.hasStandardEncoding())
/*14321*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DROTRV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (rotr:i64 CPU64RegsOpnd:i64:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                // Dst: (DROTRV:i64 CPURegsOpnd:i32:$rs, CPU64RegsOpnd:i64:$rt)
              0, // EndSwitchType
/*14331*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 86,  TARGET_VAL(ISD::ADDC),// ->14421
/*14335*/   OPC_RecordChild0, // #0 = $src
/*14336*/   OPC_RecordChild1, // #1 = $imm
/*14337*/   OPC_Scope, 40, /*->14379*/ // 2 children in Scope
/*14339*/     OPC_MoveChild, 1,
/*14341*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14344*/     OPC_CheckPredicate, 28, // Predicate_immSExt16
/*14346*/     OPC_MoveParent,
/*14347*/     OPC_CheckType, MVT::i32,
/*14349*/     OPC_Scope, 13, /*->14364*/ // 2 children in Scope
/*14351*/       OPC_CheckPatternPredicate, 17, // (Subtarget.hasStandardEncoding()) && (!Subtarget.hasDSP())
/*14353*/       OPC_EmitConvertToTarget, 1,
/*14355*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 CPURegs:i32:$src, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (ADDiu:i32 CPURegs:i32:$src, (imm:i32):$imm)
/*14364*/     /*Scope*/ 13, /*->14378*/
/*14365*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14367*/       OPC_EmitConvertToTarget, 1,
/*14369*/       OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 CPU16Regs:i32:$src, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$src, (imm:i32):$imm)
/*14378*/     0, /*End of Scope*/
/*14379*/   /*Scope*/ 40, /*->14420*/
/*14380*/     OPC_CheckType, MVT::i32,
/*14382*/     OPC_Scope, 11, /*->14395*/ // 3 children in Scope
/*14384*/       OPC_CheckPatternPredicate, 17, // (Subtarget.hasStandardEncoding()) && (!Subtarget.hasDSP())
/*14386*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDu), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs) - Complexity = 3
                // Dst: (ADDu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs)
/*14395*/     /*Scope*/ 11, /*->14407*/
/*14396*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14398*/       OPC_MorphNodeTo, TARGET_VAL(Mips::AdduRxRyRz16), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs) - Complexity = 3
                // Dst: (AdduRxRyRz16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs)
/*14407*/     /*Scope*/ 11, /*->14419*/
/*14408*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14410*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDSC), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i32 i32:i32:$a, i32:i32:$b) - Complexity = 3
                // Dst: (ADDSC:i32 i32:i32:$a, i32:i32:$b)
/*14419*/     0, /*End of Scope*/
/*14420*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 39,  TARGET_VAL(MipsISD::SHILO),// ->14463
/*14424*/   OPC_RecordChild0, // #0 = $shift
/*14425*/   OPC_Scope, 22, /*->14449*/ // 2 children in Scope
/*14427*/     OPC_MoveChild, 0,
/*14429*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14432*/     OPC_CheckPredicate, 32, // Predicate_immSExt6
/*14434*/     OPC_MoveParent,
/*14435*/     OPC_RecordChild1, // #1 = $acin
/*14436*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14438*/     OPC_EmitConvertToTarget, 0,
/*14440*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHILO), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 2, 1, 
              // Src: (MipsSHILO:Untyped (imm:i32)<<P:Predicate_immSExt6>>:$shift, ACRegsDSP:Untyped:$acin) - Complexity = 7
              // Dst: (SHILO:Untyped (imm:i32):$shift, ACRegsDSP:Untyped:$acin)
/*14449*/   /*Scope*/ 12, /*->14462*/
/*14450*/     OPC_RecordChild1, // #1 = $acin
/*14451*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14453*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHILOV), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsSHILO:Untyped CPURegs:i32:$rs, ACRegsDSP:Untyped:$acin) - Complexity = 3
              // Dst: (SHILOV:Untyped CPURegs:i32:$rs, ACRegsDSP:Untyped:$acin)
/*14462*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTP),// ->14508
/*14466*/   OPC_RecordNode,   // #0 = 'MipsEXTP' chained node
/*14467*/   OPC_RecordChild1, // #1 = $shift
/*14468*/   OPC_Scope, 23, /*->14493*/ // 2 children in Scope
/*14470*/     OPC_MoveChild, 1,
/*14472*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14475*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14477*/     OPC_MoveParent,
/*14478*/     OPC_RecordChild2, // #2 = $ac
/*14479*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14481*/     OPC_EmitMergeInputChains1_0,
/*14482*/     OPC_EmitConvertToTarget, 1,
/*14484*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTP), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTP:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACRegsDSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTP:i32 ACRegsDSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*14493*/   /*Scope*/ 13, /*->14507*/
/*14494*/     OPC_RecordChild2, // #2 = $ac
/*14495*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14497*/     OPC_EmitMergeInputChains1_0,
/*14498*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTPV), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTP:i32 CPURegs:i32:$rs, ACRegsDSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTPV:i32 ACRegsDSP:Untyped:$ac, CPURegs:i32:$rs)
/*14507*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTPDP),// ->14553
/*14511*/   OPC_RecordNode,   // #0 = 'MipsEXTPDP' chained node
/*14512*/   OPC_RecordChild1, // #1 = $shift
/*14513*/   OPC_Scope, 23, /*->14538*/ // 2 children in Scope
/*14515*/     OPC_MoveChild, 1,
/*14517*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14520*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14522*/     OPC_MoveParent,
/*14523*/     OPC_RecordChild2, // #2 = $ac
/*14524*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14526*/     OPC_EmitMergeInputChains1_0,
/*14527*/     OPC_EmitConvertToTarget, 1,
/*14529*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTPDP), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTPDP:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACRegsDSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTPDP:i32 ACRegsDSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*14538*/   /*Scope*/ 13, /*->14552*/
/*14539*/     OPC_RecordChild2, // #2 = $ac
/*14540*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14542*/     OPC_EmitMergeInputChains1_0,
/*14543*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTPDPV), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTPDP:i32 CPURegs:i32:$rs, ACRegsDSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTPDPV:i32 ACRegsDSP:Untyped:$ac, CPURegs:i32:$rs)
/*14552*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTR_W),// ->14598
/*14556*/   OPC_RecordNode,   // #0 = 'MipsEXTR_W' chained node
/*14557*/   OPC_RecordChild1, // #1 = $shift
/*14558*/   OPC_Scope, 23, /*->14583*/ // 2 children in Scope
/*14560*/     OPC_MoveChild, 1,
/*14562*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14565*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14567*/     OPC_MoveParent,
/*14568*/     OPC_RecordChild2, // #2 = $ac
/*14569*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14571*/     OPC_EmitMergeInputChains1_0,
/*14572*/     OPC_EmitConvertToTarget, 1,
/*14574*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTR_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTR_W:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACRegsDSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTR_W:i32 ACRegsDSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*14583*/   /*Scope*/ 13, /*->14597*/
/*14584*/     OPC_RecordChild2, // #2 = $ac
/*14585*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14587*/     OPC_EmitMergeInputChains1_0,
/*14588*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTRV_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTR_W:i32 CPURegs:i32:$rs, ACRegsDSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTRV_W:i32 ACRegsDSP:Untyped:$ac, CPURegs:i32:$rs)
/*14597*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTR_R_W),// ->14643
/*14601*/   OPC_RecordNode,   // #0 = 'MipsEXTR_R_W' chained node
/*14602*/   OPC_RecordChild1, // #1 = $shift
/*14603*/   OPC_Scope, 23, /*->14628*/ // 2 children in Scope
/*14605*/     OPC_MoveChild, 1,
/*14607*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14610*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14612*/     OPC_MoveParent,
/*14613*/     OPC_RecordChild2, // #2 = $ac
/*14614*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14616*/     OPC_EmitMergeInputChains1_0,
/*14617*/     OPC_EmitConvertToTarget, 1,
/*14619*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTR_R_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTR_R_W:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACRegsDSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTR_R_W:i32 ACRegsDSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*14628*/   /*Scope*/ 13, /*->14642*/
/*14629*/     OPC_RecordChild2, // #2 = $ac
/*14630*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14632*/     OPC_EmitMergeInputChains1_0,
/*14633*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTRV_R_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTR_R_W:i32 CPURegs:i32:$rs, ACRegsDSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTRV_R_W:i32 ACRegsDSP:Untyped:$ac, CPURegs:i32:$rs)
/*14642*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTR_RS_W),// ->14688
/*14646*/   OPC_RecordNode,   // #0 = 'MipsEXTR_RS_W' chained node
/*14647*/   OPC_RecordChild1, // #1 = $shift
/*14648*/   OPC_Scope, 23, /*->14673*/ // 2 children in Scope
/*14650*/     OPC_MoveChild, 1,
/*14652*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14655*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14657*/     OPC_MoveParent,
/*14658*/     OPC_RecordChild2, // #2 = $ac
/*14659*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14661*/     OPC_EmitMergeInputChains1_0,
/*14662*/     OPC_EmitConvertToTarget, 1,
/*14664*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTR_RS_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTR_RS_W:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACRegsDSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTR_RS_W:i32 ACRegsDSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*14673*/   /*Scope*/ 13, /*->14687*/
/*14674*/     OPC_RecordChild2, // #2 = $ac
/*14675*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14677*/     OPC_EmitMergeInputChains1_0,
/*14678*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTRV_RS_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTR_RS_W:i32 CPURegs:i32:$rs, ACRegsDSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTRV_RS_W:i32 ACRegsDSP:Untyped:$ac, CPURegs:i32:$rs)
/*14687*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTR_S_H),// ->14733
/*14691*/   OPC_RecordNode,   // #0 = 'MipsEXTR_S_H' chained node
/*14692*/   OPC_RecordChild1, // #1 = $shift
/*14693*/   OPC_Scope, 23, /*->14718*/ // 2 children in Scope
/*14695*/     OPC_MoveChild, 1,
/*14697*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14700*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14702*/     OPC_MoveParent,
/*14703*/     OPC_RecordChild2, // #2 = $ac
/*14704*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14706*/     OPC_EmitMergeInputChains1_0,
/*14707*/     OPC_EmitConvertToTarget, 1,
/*14709*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTR_S_H), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTR_S_H:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACRegsDSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTR_S_H:i32 ACRegsDSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*14718*/   /*Scope*/ 13, /*->14732*/
/*14719*/     OPC_RecordChild2, // #2 = $ac
/*14720*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14722*/     OPC_EmitMergeInputChains1_0,
/*14723*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTRV_S_H), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTR_S_H:i32 CPURegs:i32:$rs, ACRegsDSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTRV_S_H:i32 ACRegsDSP:Untyped:$ac, CPURegs:i32:$rs)
/*14732*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 7|128,2/*263*/,  TARGET_VAL(MipsISD::Hi),// ->15000
/*14737*/   OPC_RecordChild0, // #0 = $in
/*14738*/   OPC_MoveChild, 0,
/*14740*/   OPC_SwitchOpcode /*6 cases */, 53,  TARGET_VAL(ISD::TargetGlobalAddress),// ->14797
/*14744*/     OPC_MoveParent,
/*14745*/     OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->14784
/*14748*/       OPC_Scope, 10, /*->14760*/ // 2 children in Scope
/*14750*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14752*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (MipsHi:i32 (tglobaladdr:i32):$in) - Complexity = 6
                  // Dst: (LUi:i32 (tglobaladdr:i32):$in)
/*14760*/       /*Scope*/ 22, /*->14783*/
/*14761*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14763*/         OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*14771*/         OPC_EmitInteger, MVT::i32, 16, 
/*14774*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SllX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (MipsHi:i32 (tglobaladdr:i32):$in) - Complexity = 6
                  // Dst: (SllX16:i32 (LiRxImmX16:i32 (tglobaladdr:i32):$in), 16:i32)
/*14783*/       0, /*End of Scope*/
              /*SwitchType*/ 10,  MVT::i64,// ->14796
/*14786*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14788*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tglobaladdr:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetBlockAddress),// ->14827
/*14800*/     OPC_MoveParent,
/*14801*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->14814
/*14804*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14806*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (tblockaddress:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 10,  MVT::i64,// ->14826
/*14816*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14818*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tblockaddress:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::TargetJumpTable),// ->14883
/*14830*/     OPC_MoveParent,
/*14831*/     OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->14870
/*14834*/       OPC_Scope, 10, /*->14846*/ // 2 children in Scope
/*14836*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14838*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (MipsHi:i32 (tjumptable:i32):$in) - Complexity = 6
                  // Dst: (LUi:i32 (tjumptable:i32):$in)
/*14846*/       /*Scope*/ 22, /*->14869*/
/*14847*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14849*/         OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*14857*/         OPC_EmitInteger, MVT::i32, 16, 
/*14860*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SllX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (MipsHi:i32 (tjumptable:i32):$in) - Complexity = 6
                  // Dst: (SllX16:i32 (LiRxImmX16:i32 (tjumptable:i32):$in), 16:i32)
/*14869*/       0, /*End of Scope*/
              /*SwitchType*/ 10,  MVT::i64,// ->14882
/*14872*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14874*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tjumptable:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetConstantPool),// ->14913
/*14886*/     OPC_MoveParent,
/*14887*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->14900
/*14890*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14892*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (tconstpool:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 10,  MVT::i64,// ->14912
/*14902*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14904*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tconstpool:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->14969
/*14916*/     OPC_MoveParent,
/*14917*/     OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->14956
/*14920*/       OPC_Scope, 10, /*->14932*/ // 2 children in Scope
/*14922*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14924*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (MipsHi:i32 (tglobaltlsaddr:i32):$in) - Complexity = 6
                  // Dst: (LUi:i32 (tglobaltlsaddr:i32):$in)
/*14932*/       /*Scope*/ 22, /*->14955*/
/*14933*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14935*/         OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*14943*/         OPC_EmitInteger, MVT::i32, 16, 
/*14946*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SllX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (MipsHi:i32 (tglobaltlsaddr:i32):$in) - Complexity = 6
                  // Dst: (SllX16:i32 (LiRxImmX16:i32 (tglobaltlsaddr:i32):$in), 16:i32)
/*14955*/       0, /*End of Scope*/
              /*SwitchType*/ 10,  MVT::i64,// ->14968
/*14958*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14960*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tglobaltlsaddr:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tglobaltlsaddr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetExternalSymbol),// ->14999
/*14972*/     OPC_MoveParent,
/*14973*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->14986
/*14976*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14978*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (texternalsym:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (texternalsym:i32):$in)
              /*SwitchType*/ 10,  MVT::i64,// ->14998
/*14988*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14990*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (texternalsym:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (texternalsym:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 105|128,1/*233*/,  TARGET_VAL(MipsISD::Lo),// ->15237
/*15004*/   OPC_RecordChild0, // #0 = $in
/*15005*/   OPC_MoveChild, 0,
/*15007*/   OPC_SwitchOpcode /*6 cases */, 35,  TARGET_VAL(ISD::TargetGlobalAddress),// ->15046
/*15011*/     OPC_MoveParent,
/*15012*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15029
/*15015*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15017*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15020*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tglobaladdr:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tglobaladdr:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15045
/*15031*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15033*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15036*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tglobaladdr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetBlockAddress),// ->15084
/*15049*/     OPC_MoveParent,
/*15050*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15067
/*15053*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15055*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15058*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tblockaddress:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tblockaddress:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15083
/*15069*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15071*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15074*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tblockaddress:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetJumpTable),// ->15122
/*15087*/     OPC_MoveParent,
/*15088*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15105
/*15091*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15093*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15096*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tjumptable:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tjumptable:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15121
/*15107*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15109*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15112*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tjumptable:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetConstantPool),// ->15160
/*15125*/     OPC_MoveParent,
/*15126*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15143
/*15129*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15131*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15134*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tconstpool:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tconstpool:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15159
/*15145*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15147*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15150*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tconstpool:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->15198
/*15163*/     OPC_MoveParent,
/*15164*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15181
/*15167*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15169*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15172*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tglobaltlsaddr:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tglobaltlsaddr:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15197
/*15183*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15185*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15188*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tglobaltlsaddr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tglobaltlsaddr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetExternalSymbol),// ->15236
/*15201*/     OPC_MoveParent,
/*15202*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15219
/*15205*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15207*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15210*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (texternalsym:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (texternalsym:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15235
/*15221*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15223*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15226*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (texternalsym:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (texternalsym:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 100|128,1/*228*/,  TARGET_VAL(MipsISD::Wrapper),// ->15469
/*15241*/   OPC_RecordChild0, // #0 = $gp
/*15242*/   OPC_RecordChild1, // #1 = $in
/*15243*/   OPC_MoveChild, 1,
/*15245*/   OPC_SwitchOpcode /*6 cases */, 44,  TARGET_VAL(ISD::TargetGlobalAddress),// ->15293
/*15249*/     OPC_MoveParent,
/*15250*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->15279
/*15253*/       OPC_Scope, 11, /*->15266*/ // 2 children in Scope
/*15255*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15257*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in) - Complexity = 6
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in)
/*15266*/       /*Scope*/ 11, /*->15278*/
/*15267*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15269*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (MipsWrapper:i32 CPU16Regs:i32:$gp, (tglobaladdr:i32):$in) - Complexity = 6
                  // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$gp, (tglobaladdr:i32):$in)
/*15278*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->15292
/*15281*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15283*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tglobaladdr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TargetConstantPool),// ->15325
/*15296*/     OPC_MoveParent,
/*15297*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->15311
/*15300*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15302*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tconstpool:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tconstpool:i32):$in)
              /*SwitchType*/ 11,  MVT::i64,// ->15324
/*15313*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15315*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tconstpool:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TargetExternalSymbol),// ->15357
/*15328*/     OPC_MoveParent,
/*15329*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->15343
/*15332*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15334*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (texternalsym:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 CPURegs:i32:$gp, (texternalsym:i32):$in)
              /*SwitchType*/ 11,  MVT::i64,// ->15356
/*15345*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15347*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (texternalsym:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (texternalsym:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TargetBlockAddress),// ->15389
/*15360*/     OPC_MoveParent,
/*15361*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->15375
/*15364*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15366*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tblockaddress:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tblockaddress:i32):$in)
              /*SwitchType*/ 11,  MVT::i64,// ->15388
/*15377*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15379*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tblockaddress:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TargetJumpTable),// ->15421
/*15392*/     OPC_MoveParent,
/*15393*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->15407
/*15396*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15398*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tjumptable:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tjumptable:i32):$in)
              /*SwitchType*/ 11,  MVT::i64,// ->15420
/*15409*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15411*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tjumptable:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->15468
/*15424*/     OPC_MoveParent,
/*15425*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->15454
/*15428*/       OPC_Scope, 11, /*->15441*/ // 2 children in Scope
/*15430*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15432*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tglobaltlsaddr:i32):$in) - Complexity = 6
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaltlsaddr:i32):$in)
/*15441*/       /*Scope*/ 11, /*->15453*/
/*15442*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15444*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (MipsWrapper:i32 CPU16Regs:i32:$gp, (tglobaltlsaddr:i32):$in) - Complexity = 6
                  // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$gp, (tglobaltlsaddr:i32):$in)
/*15453*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->15467
/*15456*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15458*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tglobaltlsaddr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tglobaltlsaddr:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 21,  TARGET_VAL(MipsISD::ExtractElementF64),// ->15493
/*15472*/   OPC_RecordChild0, // #0 = $src
/*15473*/   OPC_RecordChild1, // #1 = $n
/*15474*/   OPC_MoveChild, 1,
/*15476*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15479*/   OPC_MoveParent,
/*15480*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15482*/   OPC_EmitConvertToTarget, 1,
/*15484*/   OPC_MorphNodeTo, TARGET_VAL(Mips::ExtractElementF64), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
            // Src: (MipsExtractElementF64:i32 AFGR64:f64:$src, (imm:i32):$n) - Complexity = 6
            // Dst: (ExtractElementF64:i32 AFGR64:f64:$src, (imm:i32):$n)
          /*SwitchOpcode*/ 61|128,1/*189*/,  TARGET_VAL(ISD::Constant),// ->15686
/*15497*/   OPC_RecordNode,   // #0 = $in
/*15498*/   OPC_CheckType, MVT::i32,
/*15500*/   OPC_Scope, 18, /*->15520*/ // 6 children in Scope
/*15502*/     OPC_CheckPredicate, 28, // Predicate_immSExt16
/*15504*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15506*/     OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15509*/     OPC_EmitConvertToTarget, 0,
/*15511*/     OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (imm:i32)<<P:Predicate_immSExt16>>:$in - Complexity = 4
              // Dst: (ADDiu:i32 ZERO:i32, (imm:i32):$in)
/*15520*/   /*Scope*/ 18, /*->15539*/
/*15521*/     OPC_CheckPredicate, 27, // Predicate_immZExt16
/*15523*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15525*/     OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15528*/     OPC_EmitConvertToTarget, 0,
/*15530*/     OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$in - Complexity = 4
              // Dst: (ORi:i32 ZERO:i32, (imm:i32):$in)
/*15539*/   /*Scope*/ 17, /*->15557*/
/*15540*/     OPC_CheckPredicate, 33, // Predicate_immLow16Zero
/*15542*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15544*/     OPC_EmitConvertToTarget, 0,
/*15546*/     OPC_EmitNodeXForm, 2, 1, // HI16
/*15549*/     OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (imm:i32)<<P:Predicate_immLow16Zero>>:$in - Complexity = 4
              // Dst: (LUi:i32 (HI16:i32 (imm:i32):$in))
/*15557*/   /*Scope*/ 17, /*->15575*/
/*15558*/     OPC_CheckPredicate, 27, // Predicate_immZExt16
/*15560*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15562*/     OPC_EmitConvertToTarget, 0,
/*15564*/     OPC_EmitNodeXForm, 0, 1, // LO16
/*15567*/     OPC_MorphNodeTo, TARGET_VAL(Mips::LiRxImmX16), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$in - Complexity = 4
              // Dst: (LiRxImmX16:i32 (LO16:i32 (imm:i32)<<P:Predicate_immZExt16>>:$in))
/*15575*/   /*Scope*/ 26, /*->15602*/
/*15576*/     OPC_CheckPredicate, 28, // Predicate_immSExt16
/*15578*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15580*/     OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15583*/     OPC_EmitNode, TARGET_VAL(Mips::Move32R16), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*15591*/     OPC_EmitConvertToTarget, 0,
/*15593*/     OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (imm:i32)<<P:Predicate_immSExt16>>:$in - Complexity = 4
              // Dst: (AddiuRxRxImmX16:i32 (Move32R16:i32 ZERO:i32), (imm:i32)<<P:Predicate_immSExt16>>:$in)
/*15602*/   /*Scope*/ 82, /*->15685*/
/*15603*/     OPC_Scope, 29, /*->15634*/ // 2 children in Scope
/*15605*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15607*/       OPC_EmitConvertToTarget, 0,
/*15609*/       OPC_EmitNodeXForm, 2, 1, // HI16
/*15612*/       OPC_EmitNode, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*15620*/       OPC_EmitConvertToTarget, 0,
/*15622*/       OPC_EmitNodeXForm, 0, 4, // LO16
/*15625*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 5, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (ORi:i32 (LUi:i32 (HI16:i32 (imm:i32):$imm)), (LO16:i32 (imm:i32):$imm))
/*15634*/     /*Scope*/ 49, /*->15684*/
/*15635*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15637*/       OPC_EmitConvertToTarget, 0,
/*15639*/       OPC_EmitNodeXForm, 2, 1, // HI16
/*15642*/       OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*15650*/       OPC_EmitInteger, MVT::i32, 16, 
/*15653*/       OPC_EmitNode, TARGET_VAL(Mips::SllX16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*15662*/       OPC_EmitConvertToTarget, 0,
/*15664*/       OPC_EmitNodeXForm, 0, 6, // LO16
/*15667*/       OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*15675*/       OPC_MorphNodeTo, TARGET_VAL(Mips::OrRxRxRy16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 8, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (OrRxRxRy16:i32 (SllX16:i32 (LiRxImmX16:i32 (HI16:i32 (imm:i32):$imm)), 16:i32), (LiRxImmX16:i32 (LO16:i32 (imm:i32):$imm)))
/*15684*/     0, /*End of Scope*/
/*15685*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->15837
/*15690*/   OPC_RecordMemRef,
/*15691*/   OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*15692*/   OPC_RecordChild1, // #1 = $ptr
/*15693*/   OPC_Scope, 70, /*->15765*/ // 2 children in Scope
/*15695*/     OPC_CheckChild1Type, MVT::i32,
/*15697*/     OPC_RecordChild2, // #2 = $incr
/*15698*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->15748
/*15701*/       OPC_Scope, 14, /*->15717*/ // 3 children in Scope
/*15703*/         OPC_CheckPredicate, 34, // Predicate_atomic_load_add_8
/*15705*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*15707*/         OPC_EmitMergeInputChains1_0,
/*15708*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*15717*/       /*Scope*/ 14, /*->15732*/
/*15718*/         OPC_CheckPredicate, 35, // Predicate_atomic_load_add_16
/*15720*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*15722*/         OPC_EmitMergeInputChains1_0,
/*15723*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*15732*/       /*Scope*/ 14, /*->15747*/
/*15733*/         OPC_CheckPredicate, 36, // Predicate_atomic_load_add_32
/*15735*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*15737*/         OPC_EmitMergeInputChains1_0,
/*15738*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*15747*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->15764
/*15750*/       OPC_CheckPredicate, 37, // Predicate_atomic_load_add_64
/*15752*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15754*/       OPC_EmitMergeInputChains1_0,
/*15755*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_add:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_add_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_ADD_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*15765*/   /*Scope*/ 70, /*->15836*/
/*15766*/     OPC_CheckChild1Type, MVT::i64,
/*15768*/     OPC_RecordChild2, // #2 = $incr
/*15769*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->15819
/*15772*/       OPC_Scope, 14, /*->15788*/ // 3 children in Scope
/*15774*/         OPC_CheckPredicate, 34, // Predicate_atomic_load_add_8
/*15776*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*15778*/         OPC_EmitMergeInputChains1_0,
/*15779*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*15788*/       /*Scope*/ 14, /*->15803*/
/*15789*/         OPC_CheckPredicate, 35, // Predicate_atomic_load_add_16
/*15791*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*15793*/         OPC_EmitMergeInputChains1_0,
/*15794*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*15803*/       /*Scope*/ 14, /*->15818*/
/*15804*/         OPC_CheckPredicate, 36, // Predicate_atomic_load_add_32
/*15806*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*15808*/         OPC_EmitMergeInputChains1_0,
/*15809*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*15818*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->15835
/*15821*/       OPC_CheckPredicate, 37, // Predicate_atomic_load_add_64
/*15823*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15825*/       OPC_EmitMergeInputChains1_0,
/*15826*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_add:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_add_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_ADD_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*15836*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->15988
/*15841*/   OPC_RecordMemRef,
/*15842*/   OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*15843*/   OPC_RecordChild1, // #1 = $ptr
/*15844*/   OPC_Scope, 70, /*->15916*/ // 2 children in Scope
/*15846*/     OPC_CheckChild1Type, MVT::i32,
/*15848*/     OPC_RecordChild2, // #2 = $incr
/*15849*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->15899
/*15852*/       OPC_Scope, 14, /*->15868*/ // 3 children in Scope
/*15854*/         OPC_CheckPredicate, 38, // Predicate_atomic_load_sub_8
/*15856*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*15858*/         OPC_EmitMergeInputChains1_0,
/*15859*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*15868*/       /*Scope*/ 14, /*->15883*/
/*15869*/         OPC_CheckPredicate, 39, // Predicate_atomic_load_sub_16
/*15871*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*15873*/         OPC_EmitMergeInputChains1_0,
/*15874*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*15883*/       /*Scope*/ 14, /*->15898*/
/*15884*/         OPC_CheckPredicate, 40, // Predicate_atomic_load_sub_32
/*15886*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*15888*/         OPC_EmitMergeInputChains1_0,
/*15889*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*15898*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->15915
/*15901*/       OPC_CheckPredicate, 41, // Predicate_atomic_load_sub_64
/*15903*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15905*/       OPC_EmitMergeInputChains1_0,
/*15906*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_sub:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_sub_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_SUB_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*15916*/   /*Scope*/ 70, /*->15987*/
/*15917*/     OPC_CheckChild1Type, MVT::i64,
/*15919*/     OPC_RecordChild2, // #2 = $incr
/*15920*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->15970
/*15923*/       OPC_Scope, 14, /*->15939*/ // 3 children in Scope
/*15925*/         OPC_CheckPredicate, 38, // Predicate_atomic_load_sub_8
/*15927*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*15929*/         OPC_EmitMergeInputChains1_0,
/*15930*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*15939*/       /*Scope*/ 14, /*->15954*/
/*15940*/         OPC_CheckPredicate, 39, // Predicate_atomic_load_sub_16
/*15942*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*15944*/         OPC_EmitMergeInputChains1_0,
/*15945*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*15954*/       /*Scope*/ 14, /*->15969*/
/*15955*/         OPC_CheckPredicate, 40, // Predicate_atomic_load_sub_32
/*15957*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*15959*/         OPC_EmitMergeInputChains1_0,
/*15960*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*15969*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->15986
/*15972*/       OPC_CheckPredicate, 41, // Predicate_atomic_load_sub_64
/*15974*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15976*/       OPC_EmitMergeInputChains1_0,
/*15977*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_sub:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_sub_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_SUB_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*15987*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->16139
/*15992*/   OPC_RecordMemRef,
/*15993*/   OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*15994*/   OPC_RecordChild1, // #1 = $ptr
/*15995*/   OPC_Scope, 70, /*->16067*/ // 2 children in Scope
/*15997*/     OPC_CheckChild1Type, MVT::i32,
/*15999*/     OPC_RecordChild2, // #2 = $incr
/*16000*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16050
/*16003*/       OPC_Scope, 14, /*->16019*/ // 3 children in Scope
/*16005*/         OPC_CheckPredicate, 42, // Predicate_atomic_load_and_8
/*16007*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16009*/         OPC_EmitMergeInputChains1_0,
/*16010*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16019*/       /*Scope*/ 14, /*->16034*/
/*16020*/         OPC_CheckPredicate, 43, // Predicate_atomic_load_and_16
/*16022*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16024*/         OPC_EmitMergeInputChains1_0,
/*16025*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16034*/       /*Scope*/ 14, /*->16049*/
/*16035*/         OPC_CheckPredicate, 44, // Predicate_atomic_load_and_32
/*16037*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16039*/         OPC_EmitMergeInputChains1_0,
/*16040*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16049*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16066
/*16052*/       OPC_CheckPredicate, 45, // Predicate_atomic_load_and_64
/*16054*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16056*/       OPC_EmitMergeInputChains1_0,
/*16057*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_and:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_and_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_AND_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16067*/   /*Scope*/ 70, /*->16138*/
/*16068*/     OPC_CheckChild1Type, MVT::i64,
/*16070*/     OPC_RecordChild2, // #2 = $incr
/*16071*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16121
/*16074*/       OPC_Scope, 14, /*->16090*/ // 3 children in Scope
/*16076*/         OPC_CheckPredicate, 42, // Predicate_atomic_load_and_8
/*16078*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16080*/         OPC_EmitMergeInputChains1_0,
/*16081*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16090*/       /*Scope*/ 14, /*->16105*/
/*16091*/         OPC_CheckPredicate, 43, // Predicate_atomic_load_and_16
/*16093*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16095*/         OPC_EmitMergeInputChains1_0,
/*16096*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16105*/       /*Scope*/ 14, /*->16120*/
/*16106*/         OPC_CheckPredicate, 44, // Predicate_atomic_load_and_32
/*16108*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16110*/         OPC_EmitMergeInputChains1_0,
/*16111*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16120*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16137
/*16123*/       OPC_CheckPredicate, 45, // Predicate_atomic_load_and_64
/*16125*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16127*/       OPC_EmitMergeInputChains1_0,
/*16128*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_and:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_and_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_AND_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16138*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->16290
/*16143*/   OPC_RecordMemRef,
/*16144*/   OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*16145*/   OPC_RecordChild1, // #1 = $ptr
/*16146*/   OPC_Scope, 70, /*->16218*/ // 2 children in Scope
/*16148*/     OPC_CheckChild1Type, MVT::i32,
/*16150*/     OPC_RecordChild2, // #2 = $incr
/*16151*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16201
/*16154*/       OPC_Scope, 14, /*->16170*/ // 3 children in Scope
/*16156*/         OPC_CheckPredicate, 46, // Predicate_atomic_load_or_8
/*16158*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16160*/         OPC_EmitMergeInputChains1_0,
/*16161*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16170*/       /*Scope*/ 14, /*->16185*/
/*16171*/         OPC_CheckPredicate, 47, // Predicate_atomic_load_or_16
/*16173*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16175*/         OPC_EmitMergeInputChains1_0,
/*16176*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16185*/       /*Scope*/ 14, /*->16200*/
/*16186*/         OPC_CheckPredicate, 48, // Predicate_atomic_load_or_32
/*16188*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16190*/         OPC_EmitMergeInputChains1_0,
/*16191*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16200*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16217
/*16203*/       OPC_CheckPredicate, 49, // Predicate_atomic_load_or_64
/*16205*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16207*/       OPC_EmitMergeInputChains1_0,
/*16208*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_or:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_or_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_OR_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16218*/   /*Scope*/ 70, /*->16289*/
/*16219*/     OPC_CheckChild1Type, MVT::i64,
/*16221*/     OPC_RecordChild2, // #2 = $incr
/*16222*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16272
/*16225*/       OPC_Scope, 14, /*->16241*/ // 3 children in Scope
/*16227*/         OPC_CheckPredicate, 46, // Predicate_atomic_load_or_8
/*16229*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16231*/         OPC_EmitMergeInputChains1_0,
/*16232*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16241*/       /*Scope*/ 14, /*->16256*/
/*16242*/         OPC_CheckPredicate, 47, // Predicate_atomic_load_or_16
/*16244*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16246*/         OPC_EmitMergeInputChains1_0,
/*16247*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16256*/       /*Scope*/ 14, /*->16271*/
/*16257*/         OPC_CheckPredicate, 48, // Predicate_atomic_load_or_32
/*16259*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16261*/         OPC_EmitMergeInputChains1_0,
/*16262*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16271*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16288
/*16274*/       OPC_CheckPredicate, 49, // Predicate_atomic_load_or_64
/*16276*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16278*/       OPC_EmitMergeInputChains1_0,
/*16279*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_or:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_or_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_OR_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16289*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->16441
/*16294*/   OPC_RecordMemRef,
/*16295*/   OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*16296*/   OPC_RecordChild1, // #1 = $ptr
/*16297*/   OPC_Scope, 70, /*->16369*/ // 2 children in Scope
/*16299*/     OPC_CheckChild1Type, MVT::i32,
/*16301*/     OPC_RecordChild2, // #2 = $incr
/*16302*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16352
/*16305*/       OPC_Scope, 14, /*->16321*/ // 3 children in Scope
/*16307*/         OPC_CheckPredicate, 50, // Predicate_atomic_load_xor_8
/*16309*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16311*/         OPC_EmitMergeInputChains1_0,
/*16312*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16321*/       /*Scope*/ 14, /*->16336*/
/*16322*/         OPC_CheckPredicate, 51, // Predicate_atomic_load_xor_16
/*16324*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16326*/         OPC_EmitMergeInputChains1_0,
/*16327*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16336*/       /*Scope*/ 14, /*->16351*/
/*16337*/         OPC_CheckPredicate, 52, // Predicate_atomic_load_xor_32
/*16339*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16341*/         OPC_EmitMergeInputChains1_0,
/*16342*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16351*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16368
/*16354*/       OPC_CheckPredicate, 53, // Predicate_atomic_load_xor_64
/*16356*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16358*/       OPC_EmitMergeInputChains1_0,
/*16359*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_xor:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_xor_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_XOR_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16369*/   /*Scope*/ 70, /*->16440*/
/*16370*/     OPC_CheckChild1Type, MVT::i64,
/*16372*/     OPC_RecordChild2, // #2 = $incr
/*16373*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16423
/*16376*/       OPC_Scope, 14, /*->16392*/ // 3 children in Scope
/*16378*/         OPC_CheckPredicate, 50, // Predicate_atomic_load_xor_8
/*16380*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16382*/         OPC_EmitMergeInputChains1_0,
/*16383*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16392*/       /*Scope*/ 14, /*->16407*/
/*16393*/         OPC_CheckPredicate, 51, // Predicate_atomic_load_xor_16
/*16395*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16397*/         OPC_EmitMergeInputChains1_0,
/*16398*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16407*/       /*Scope*/ 14, /*->16422*/
/*16408*/         OPC_CheckPredicate, 52, // Predicate_atomic_load_xor_32
/*16410*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16412*/         OPC_EmitMergeInputChains1_0,
/*16413*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16422*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16439
/*16425*/       OPC_CheckPredicate, 53, // Predicate_atomic_load_xor_64
/*16427*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16429*/       OPC_EmitMergeInputChains1_0,
/*16430*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_xor:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_xor_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_XOR_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16440*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->16592
/*16445*/   OPC_RecordMemRef,
/*16446*/   OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*16447*/   OPC_RecordChild1, // #1 = $ptr
/*16448*/   OPC_Scope, 70, /*->16520*/ // 2 children in Scope
/*16450*/     OPC_CheckChild1Type, MVT::i32,
/*16452*/     OPC_RecordChild2, // #2 = $incr
/*16453*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16503
/*16456*/       OPC_Scope, 14, /*->16472*/ // 3 children in Scope
/*16458*/         OPC_CheckPredicate, 54, // Predicate_atomic_load_nand_8
/*16460*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16462*/         OPC_EmitMergeInputChains1_0,
/*16463*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16472*/       /*Scope*/ 14, /*->16487*/
/*16473*/         OPC_CheckPredicate, 55, // Predicate_atomic_load_nand_16
/*16475*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16477*/         OPC_EmitMergeInputChains1_0,
/*16478*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16487*/       /*Scope*/ 14, /*->16502*/
/*16488*/         OPC_CheckPredicate, 56, // Predicate_atomic_load_nand_32
/*16490*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16492*/         OPC_EmitMergeInputChains1_0,
/*16493*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16502*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16519
/*16505*/       OPC_CheckPredicate, 57, // Predicate_atomic_load_nand_64
/*16507*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16509*/       OPC_EmitMergeInputChains1_0,
/*16510*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_nand:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_nand_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_NAND_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16520*/   /*Scope*/ 70, /*->16591*/
/*16521*/     OPC_CheckChild1Type, MVT::i64,
/*16523*/     OPC_RecordChild2, // #2 = $incr
/*16524*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16574
/*16527*/       OPC_Scope, 14, /*->16543*/ // 3 children in Scope
/*16529*/         OPC_CheckPredicate, 54, // Predicate_atomic_load_nand_8
/*16531*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16533*/         OPC_EmitMergeInputChains1_0,
/*16534*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16543*/       /*Scope*/ 14, /*->16558*/
/*16544*/         OPC_CheckPredicate, 55, // Predicate_atomic_load_nand_16
/*16546*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16548*/         OPC_EmitMergeInputChains1_0,
/*16549*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16558*/       /*Scope*/ 14, /*->16573*/
/*16559*/         OPC_CheckPredicate, 56, // Predicate_atomic_load_nand_32
/*16561*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16563*/         OPC_EmitMergeInputChains1_0,
/*16564*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16573*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16590
/*16576*/       OPC_CheckPredicate, 57, // Predicate_atomic_load_nand_64
/*16578*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16580*/       OPC_EmitMergeInputChains1_0,
/*16581*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_nand:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_nand_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_NAND_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16591*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->16743
/*16596*/   OPC_RecordMemRef,
/*16597*/   OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*16598*/   OPC_RecordChild1, // #1 = $ptr
/*16599*/   OPC_Scope, 70, /*->16671*/ // 2 children in Scope
/*16601*/     OPC_CheckChild1Type, MVT::i32,
/*16603*/     OPC_RecordChild2, // #2 = $incr
/*16604*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16654
/*16607*/       OPC_Scope, 14, /*->16623*/ // 3 children in Scope
/*16609*/         OPC_CheckPredicate, 58, // Predicate_atomic_swap_8
/*16611*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16613*/         OPC_EmitMergeInputChains1_0,
/*16614*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16623*/       /*Scope*/ 14, /*->16638*/
/*16624*/         OPC_CheckPredicate, 59, // Predicate_atomic_swap_16
/*16626*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16628*/         OPC_EmitMergeInputChains1_0,
/*16629*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16638*/       /*Scope*/ 14, /*->16653*/
/*16639*/         OPC_CheckPredicate, 60, // Predicate_atomic_swap_32
/*16641*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16643*/         OPC_EmitMergeInputChains1_0,
/*16644*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16653*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16670
/*16656*/       OPC_CheckPredicate, 61, // Predicate_atomic_swap_64
/*16658*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16660*/       OPC_EmitMergeInputChains1_0,
/*16661*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_swap:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_SWAP_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16671*/   /*Scope*/ 70, /*->16742*/
/*16672*/     OPC_CheckChild1Type, MVT::i64,
/*16674*/     OPC_RecordChild2, // #2 = $incr
/*16675*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16725
/*16678*/       OPC_Scope, 14, /*->16694*/ // 3 children in Scope
/*16680*/         OPC_CheckPredicate, 58, // Predicate_atomic_swap_8
/*16682*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16684*/         OPC_EmitMergeInputChains1_0,
/*16685*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16694*/       /*Scope*/ 14, /*->16709*/
/*16695*/         OPC_CheckPredicate, 59, // Predicate_atomic_swap_16
/*16697*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16699*/         OPC_EmitMergeInputChains1_0,
/*16700*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16709*/       /*Scope*/ 14, /*->16724*/
/*16710*/         OPC_CheckPredicate, 60, // Predicate_atomic_swap_32
/*16712*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16714*/         OPC_EmitMergeInputChains1_0,
/*16715*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16724*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16741
/*16727*/       OPC_CheckPredicate, 61, // Predicate_atomic_swap_64
/*16729*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16731*/       OPC_EmitMergeInputChains1_0,
/*16732*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_swap:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_SWAP_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16742*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 29|128,1/*157*/,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->16904
/*16747*/   OPC_RecordMemRef,
/*16748*/   OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*16749*/   OPC_RecordChild1, // #1 = $ptr
/*16750*/   OPC_Scope, 75, /*->16827*/ // 2 children in Scope
/*16752*/     OPC_CheckChild1Type, MVT::i32,
/*16754*/     OPC_RecordChild2, // #2 = $cmp
/*16755*/     OPC_RecordChild3, // #3 = $swap
/*16756*/     OPC_SwitchType /*2 cases */, 50,  MVT::i32,// ->16809
/*16759*/       OPC_Scope, 15, /*->16776*/ // 3 children in Scope
/*16761*/         OPC_CheckPredicate, 62, // Predicate_atomic_cmp_swap_8
/*16763*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16765*/         OPC_EmitMergeInputChains1_0,
/*16766*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*16776*/       /*Scope*/ 15, /*->16792*/
/*16777*/         OPC_CheckPredicate, 63, // Predicate_atomic_cmp_swap_16
/*16779*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16781*/         OPC_EmitMergeInputChains1_0,
/*16782*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*16792*/       /*Scope*/ 15, /*->16808*/
/*16793*/         OPC_CheckPredicate, 64, // Predicate_atomic_cmp_swap_32
/*16795*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16797*/         OPC_EmitMergeInputChains1_0,
/*16798*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*16808*/       0, /*End of Scope*/
              /*SwitchType*/ 15,  MVT::i64,// ->16826
/*16811*/       OPC_CheckPredicate, 65, // Predicate_atomic_cmp_swap_64
/*16813*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16815*/       OPC_EmitMergeInputChains1_0,
/*16816*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: (atomic_cmp_swap:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$cmp, CPU64Regs:i64:$swap)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_CMP_SWAP_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$cmp, CPU64Regs:i64:$swap)
              0, // EndSwitchType
/*16827*/   /*Scope*/ 75, /*->16903*/
/*16828*/     OPC_CheckChild1Type, MVT::i64,
/*16830*/     OPC_RecordChild2, // #2 = $cmp
/*16831*/     OPC_RecordChild3, // #3 = $swap
/*16832*/     OPC_SwitchType /*2 cases */, 50,  MVT::i32,// ->16885
/*16835*/       OPC_Scope, 15, /*->16852*/ // 3 children in Scope
/*16837*/         OPC_CheckPredicate, 62, // Predicate_atomic_cmp_swap_8
/*16839*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16841*/         OPC_EmitMergeInputChains1_0,
/*16842*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*16852*/       /*Scope*/ 15, /*->16868*/
/*16853*/         OPC_CheckPredicate, 63, // Predicate_atomic_cmp_swap_16
/*16855*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16857*/         OPC_EmitMergeInputChains1_0,
/*16858*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*16868*/       /*Scope*/ 15, /*->16884*/
/*16869*/         OPC_CheckPredicate, 64, // Predicate_atomic_cmp_swap_32
/*16871*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16873*/         OPC_EmitMergeInputChains1_0,
/*16874*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*16884*/       0, /*End of Scope*/
              /*SwitchType*/ 15,  MVT::i64,// ->16902
/*16887*/       OPC_CheckPredicate, 65, // Predicate_atomic_cmp_swap_64
/*16889*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16891*/       OPC_EmitMergeInputChains1_0,
/*16892*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: (atomic_cmp_swap:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$cmp, CPU64Regs:i64:$swap)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_CMP_SWAP_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$cmp, CPU64Regs:i64:$swap)
              0, // EndSwitchType
/*16903*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(ISD::MUL),// ->16953
/*16907*/   OPC_RecordChild0, // #0 = $rs
/*16908*/   OPC_RecordChild1, // #1 = $rt
/*16909*/   OPC_SwitchType /*2 cases */, 27,  MVT::i32,// ->16939
/*16912*/     OPC_Scope, 11, /*->16925*/ // 2 children in Scope
/*16914*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16916*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MUL), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                // Dst: (MUL:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*16925*/     /*Scope*/ 12, /*->16938*/
/*16926*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*16928*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MultRxRyRz16), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                // Dst: (MultRxRyRz16:i32:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*16938*/     0, /*End of Scope*/
            /*SwitchType*/ 11,  MVT::v2i16,// ->16952
/*16941*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*16943*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MUL_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (mul:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 3
              // Dst: (MUL_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
            0, // EndSwitchType
          /*SwitchOpcode*/ 40|128,2/*296*/,  TARGET_VAL(ISD::FSUB),// ->17253
/*16957*/   OPC_Scope, 118|128,1/*246*/, /*->17206*/ // 2 children in Scope
/*16960*/     OPC_MoveChild, 0,
/*16962*/     OPC_SwitchOpcode /*2 cases */, 57|128,1/*185*/,  TARGET_VAL(ISD::ConstantFP),// ->17152
/*16967*/       OPC_CheckPredicate, 66, // Predicate_fpimm0
/*16969*/       OPC_MoveParent,
/*16970*/       OPC_MoveChild, 1,
/*16972*/       OPC_SwitchOpcode /*2 cases */, 116,  TARGET_VAL(ISD::FADD),// ->17092
/*16976*/         OPC_Scope, 56, /*->17034*/ // 2 children in Scope
/*16978*/           OPC_MoveChild, 0,
/*16980*/           OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*16983*/           OPC_RecordChild0, // #0 = $fs
/*16984*/           OPC_RecordChild1, // #1 = $ft
/*16985*/           OPC_MoveParent,
/*16986*/           OPC_RecordChild1, // #2 = $fr
/*16987*/           OPC_MoveParent,
/*16988*/           OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->17003
/*16991*/             OPC_CheckPatternPredicate, 18, // (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*16993*/             OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                      // Src: (fsub:f32 (fpimm:f32)<<P:Predicate_fpimm0>>, (fadd:f32 (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft), FGR32:f32:$fr)) - Complexity = 13
                      // Dst: (NMADD_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                    /*SwitchType*/ 28,  MVT::f64,// ->17033
/*17005*/             OPC_Scope, 12, /*->17019*/ // 2 children in Scope
/*17007*/               OPC_CheckPatternPredicate, 19, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*17009*/               OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft), AFGR64:f64:$fr)) - Complexity = 13
                        // Dst: (NMADD_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*17019*/             /*Scope*/ 12, /*->17032*/
/*17020*/               OPC_CheckPatternPredicate, 20, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*17022*/               OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft), FGR64:f64:$fr)) - Complexity = 13
                        // Dst: (NMADD_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*17032*/             0, /*End of Scope*/
                    0, // EndSwitchType
/*17034*/         /*Scope*/ 56, /*->17091*/
/*17035*/           OPC_RecordChild0, // #0 = $fr
/*17036*/           OPC_MoveChild, 1,
/*17038*/           OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*17041*/           OPC_RecordChild0, // #1 = $fs
/*17042*/           OPC_RecordChild1, // #2 = $ft
/*17043*/           OPC_MoveParent,
/*17044*/           OPC_MoveParent,
/*17045*/           OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->17060
/*17048*/             OPC_CheckPatternPredicate, 18, // (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*17050*/             OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (fsub:f32 (fpimm:f32)<<P:Predicate_fpimm0>>, (fadd:f32 FGR32:f32:$fr, (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft))) - Complexity = 13
                      // Dst: (NMADD_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                    /*SwitchType*/ 28,  MVT::f64,// ->17090
/*17062*/             OPC_Scope, 12, /*->17076*/ // 2 children in Scope
/*17064*/               OPC_CheckPatternPredicate, 19, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*17066*/               OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 AFGR64:f64:$fr, (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft))) - Complexity = 13
                        // Dst: (NMADD_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*17076*/             /*Scope*/ 12, /*->17089*/
/*17077*/               OPC_CheckPatternPredicate, 20, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*17079*/               OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 FGR64:f64:$fr, (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft))) - Complexity = 13
                        // Dst: (NMADD_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*17089*/             0, /*End of Scope*/
                    0, // EndSwitchType
/*17091*/         0, /*End of Scope*/
                /*SwitchOpcode*/ 56,  TARGET_VAL(ISD::FSUB),// ->17151
/*17095*/         OPC_MoveChild, 0,
/*17097*/         OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*17100*/         OPC_RecordChild0, // #0 = $fs
/*17101*/         OPC_RecordChild1, // #1 = $ft
/*17102*/         OPC_MoveParent,
/*17103*/         OPC_RecordChild1, // #2 = $fr
/*17104*/         OPC_MoveParent,
/*17105*/         OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->17120
/*17108*/           OPC_CheckPatternPredicate, 18, // (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*17110*/           OPC_MorphNodeTo, TARGET_VAL(Mips::NMSUB_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (fsub:f32 (fpimm:f32)<<P:Predicate_fpimm0>>, (fsub:f32 (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft), FGR32:f32:$fr)) - Complexity = 13
                    // Dst: (NMSUB_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                  /*SwitchType*/ 28,  MVT::f64,// ->17150
/*17122*/           OPC_Scope, 12, /*->17136*/ // 2 children in Scope
/*17124*/             OPC_CheckPatternPredicate, 19, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*17126*/             OPC_MorphNodeTo, TARGET_VAL(Mips::NMSUB_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                      // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fsub:f64 (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft), AFGR64:f64:$fr)) - Complexity = 13
                      // Dst: (NMSUB_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*17136*/           /*Scope*/ 12, /*->17149*/
/*17137*/             OPC_CheckPatternPredicate, 20, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*17139*/             OPC_MorphNodeTo, TARGET_VAL(Mips::NMSUB_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                      // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fsub:f64 (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft), FGR64:f64:$fr)) - Complexity = 13
                      // Dst: (NMSUB_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*17149*/           0, /*End of Scope*/
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 50,  TARGET_VAL(ISD::FMUL),// ->17205
/*17155*/       OPC_RecordChild0, // #0 = $fs
/*17156*/       OPC_RecordChild1, // #1 = $ft
/*17157*/       OPC_MoveParent,
/*17158*/       OPC_RecordChild1, // #2 = $fr
/*17159*/       OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->17174
/*17162*/         OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*17164*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fsub:f32 (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft), FGR32:f32:$fr) - Complexity = 6
                  // Dst: (MSUB_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                /*SwitchType*/ 28,  MVT::f64,// ->17204
/*17176*/         OPC_Scope, 12, /*->17190*/ // 2 children in Scope
/*17178*/           OPC_CheckPatternPredicate, 21, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17180*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (fsub:f64 (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft), AFGR64:f64:$fr) - Complexity = 6
                    // Dst: (MSUB_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*17190*/         /*Scope*/ 12, /*->17203*/
/*17191*/           OPC_CheckPatternPredicate, 22, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17193*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (fsub:f64 (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft), FGR64:f64:$fr) - Complexity = 6
                    // Dst: (MSUB_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*17203*/         0, /*End of Scope*/
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*17206*/   /*Scope*/ 45, /*->17252*/
/*17207*/     OPC_RecordChild0, // #0 = $fs
/*17208*/     OPC_RecordChild1, // #1 = $ft
/*17209*/     OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->17223
/*17212*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17214*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FSUB_S), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
                // Dst: (FSUB_S:f32 FGR32:f32:$fs, FGR32:f32:$ft)
              /*SwitchType*/ 26,  MVT::f64,// ->17251
/*17225*/       OPC_Scope, 11, /*->17238*/ // 2 children in Scope
/*17227*/         OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17229*/         OPC_MorphNodeTo, TARGET_VAL(Mips::FSUB_D32), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fsub:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
                  // Dst: (FSUB_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
/*17238*/       /*Scope*/ 11, /*->17250*/
/*17239*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17241*/         OPC_MorphNodeTo, TARGET_VAL(Mips::FSUB_D64), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fsub:f64 FGR64:f64:$fs, FGR64:f64:$ft) - Complexity = 3
                  // Dst: (FSUB_D64:f64 FGR64:f64:$fs, FGR64:f64:$ft)
/*17250*/       0, /*End of Scope*/
              0, // EndSwitchType
/*17252*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 34|128,1/*162*/,  TARGET_VAL(ISD::FADD),// ->17419
/*17257*/   OPC_Scope, 55, /*->17314*/ // 2 children in Scope
/*17259*/     OPC_MoveChild, 0,
/*17261*/     OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*17264*/     OPC_RecordChild0, // #0 = $fs
/*17265*/     OPC_RecordChild1, // #1 = $ft
/*17266*/     OPC_MoveParent,
/*17267*/     OPC_RecordChild1, // #2 = $fr
/*17268*/     OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->17283
/*17271*/       OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*17273*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_S), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                // Src: (fadd:f32 (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft), FGR32:f32:$fr) - Complexity = 6
                // Dst: (MADD_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
              /*SwitchType*/ 28,  MVT::f64,// ->17313
/*17285*/       OPC_Scope, 12, /*->17299*/ // 2 children in Scope
/*17287*/         OPC_CheckPatternPredicate, 21, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17289*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D32), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fadd:f64 (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft), AFGR64:f64:$fr) - Complexity = 6
                  // Dst: (MADD_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*17299*/       /*Scope*/ 12, /*->17312*/
/*17300*/         OPC_CheckPatternPredicate, 22, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17302*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fadd:f64 (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft), FGR64:f64:$fr) - Complexity = 6
                  // Dst: (MADD_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*17312*/       0, /*End of Scope*/
              0, // EndSwitchType
/*17314*/   /*Scope*/ 103, /*->17418*/
/*17315*/     OPC_RecordChild0, // #0 = $fr
/*17316*/     OPC_Scope, 54, /*->17372*/ // 2 children in Scope
/*17318*/       OPC_MoveChild, 1,
/*17320*/       OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*17323*/       OPC_RecordChild0, // #1 = $fs
/*17324*/       OPC_RecordChild1, // #2 = $ft
/*17325*/       OPC_MoveParent,
/*17326*/       OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->17341
/*17329*/         OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*17331*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fadd:f32 FGR32:f32:$fr, (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft)) - Complexity = 6
                  // Dst: (MADD_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                /*SwitchType*/ 28,  MVT::f64,// ->17371
/*17343*/         OPC_Scope, 12, /*->17357*/ // 2 children in Scope
/*17345*/           OPC_CheckPatternPredicate, 21, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17347*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fadd:f64 AFGR64:f64:$fr, (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)) - Complexity = 6
                    // Dst: (MADD_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*17357*/         /*Scope*/ 12, /*->17370*/
/*17358*/           OPC_CheckPatternPredicate, 22, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17360*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fadd:f64 FGR64:f64:$fr, (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft)) - Complexity = 6
                    // Dst: (MADD_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*17370*/         0, /*End of Scope*/
                0, // EndSwitchType
/*17372*/     /*Scope*/ 44, /*->17417*/
/*17373*/       OPC_RecordChild1, // #1 = $ft
/*17374*/       OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->17388
/*17377*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17379*/         OPC_MorphNodeTo, TARGET_VAL(Mips::FADD_S), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (fadd:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
                  // Dst: (FADD_S:f32 FGR32:f32:$fs, FGR32:f32:$ft)
                /*SwitchType*/ 26,  MVT::f64,// ->17416
/*17390*/         OPC_Scope, 11, /*->17403*/ // 2 children in Scope
/*17392*/           OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17394*/           OPC_MorphNodeTo, TARGET_VAL(Mips::FADD_D32), 0,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                    // Src: (fadd:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
                    // Dst: (FADD_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
/*17403*/         /*Scope*/ 11, /*->17415*/
/*17404*/           OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17406*/           OPC_MorphNodeTo, TARGET_VAL(Mips::FADD_D64), 0,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                    // Src: (fadd:f64 FGR64:f64:$fs, FGR64:f64:$ft) - Complexity = 3
                    // Dst: (FADD_D64:f64 FGR64:f64:$fs, FGR64:f64:$ft)
/*17415*/         0, /*End of Scope*/
                0, // EndSwitchType
/*17417*/     0, /*End of Scope*/
/*17418*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 88,  TARGET_VAL(ISD::ConstantFP),// ->17510
/*17422*/   OPC_Scope, 34, /*->17458*/ // 2 children in Scope
/*17424*/     OPC_CheckPredicate, 66, // Predicate_fpimm0
/*17426*/     OPC_SwitchType /*2 cases */, 13,  MVT::f32,// ->17442
/*17429*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17431*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*17434*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MTC1), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fpimm:f32)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (MTC1:f32 ZERO:i32)
              /*SwitchType*/ 13,  MVT::f64,// ->17457
/*17444*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17446*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*17449*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DMTC1), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fpimm:f64)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (DMTC1:f64 ZERO_64:i64)
              0, // EndSwitchType
/*17458*/   /*Scope*/ 50, /*->17509*/
/*17459*/     OPC_CheckPredicate, 67, // Predicate_fpimm0neg
/*17461*/     OPC_SwitchType /*2 cases */, 21,  MVT::f32,// ->17485
/*17464*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17466*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*17469*/       OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*17477*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_S), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
                // Src: (fpimm:f32)<<P:Predicate_fpimm0neg>> - Complexity = 4
                // Dst: (FNEG_S:f32 (MTC1:f32 ZERO:i32))
              /*SwitchType*/ 21,  MVT::f64,// ->17508
/*17487*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17489*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*17492*/       OPC_EmitNode, TARGET_VAL(Mips::DMTC1), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1
/*17500*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 1, 
                // Src: (fpimm:f64)<<P:Predicate_fpimm0neg>> - Complexity = 4
                // Dst: (FNEG_D64:f64 (DMTC1:f64 ZERO_64:i64))
              0, // EndSwitchType
/*17509*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::CALLSEQ_START),// ->17529
/*17513*/   OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*17514*/   OPC_RecordChild1, // #1 = $amt
/*17515*/   OPC_MoveChild, 1,
/*17517*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*17520*/   OPC_MoveParent,
/*17521*/   OPC_EmitMergeInputChains1_0,
/*17522*/   OPC_MorphNodeTo, TARGET_VAL(Mips::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN (timm:i32):$amt)
          /*SwitchOpcode*/ 20,  TARGET_VAL(MipsISD::Sync),// ->17552
/*17532*/   OPC_RecordNode,   // #0 = 'MipsSync' chained node
/*17533*/   OPC_RecordChild1, // #1 = $stype
/*17534*/   OPC_MoveChild, 1,
/*17536*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17539*/   OPC_MoveParent,
/*17540*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17542*/   OPC_EmitMergeInputChains1_0,
/*17543*/   OPC_EmitConvertToTarget, 1,
/*17545*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SYNC), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 2, 
            // Src: (MipsSync (imm:i32):$stype) - Complexity = 6
            // Dst: (SYNC (imm:i32):$stype)
          /*SwitchOpcode*/ 126,  TARGET_VAL(MipsISD::JmpLink),// ->17681
/*17555*/   OPC_RecordNode,   // #0 = 'MipsJmpLink' chained node
/*17556*/   OPC_CaptureGlueInput,
/*17557*/   OPC_RecordChild1, // #1 = $target
/*17558*/   OPC_Scope, 80, /*->17640*/ // 3 children in Scope
/*17560*/     OPC_MoveChild, 1,
/*17562*/     OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::Constant),// ->17579
/*17566*/       OPC_MoveParent,
/*17567*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17569*/       OPC_EmitMergeInputChains1_0,
/*17570*/       OPC_EmitConvertToTarget, 1,
/*17572*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (MipsJmpLink (imm:iPTR):$target) - Complexity = 6
                // Dst: (JAL (imm:iPTR):$target)
              /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetGlobalAddress),// ->17609
/*17582*/       OPC_CheckType, MVT::i32,
/*17584*/       OPC_MoveParent,
/*17585*/       OPC_Scope, 10, /*->17597*/ // 2 children in Scope
/*17587*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17589*/         OPC_EmitMergeInputChains1_0,
/*17590*/         OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 1, 
                  // Src: (MipsJmpLink (tglobaladdr:i32):$dst) - Complexity = 6
                  // Dst: (JAL (tglobaladdr:i32):$dst)
/*17597*/       /*Scope*/ 10, /*->17608*/
/*17598*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*17600*/         OPC_EmitMergeInputChains1_0,
/*17601*/         OPC_MorphNodeTo, TARGET_VAL(Mips::Jal16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 1, 
                  // Src: (MipsJmpLink (tglobaladdr:i32):$dst) - Complexity = 6
                  // Dst: (Jal16 (tglobaladdr:i32):$dst)
/*17608*/       0, /*End of Scope*/
              /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetExternalSymbol),// ->17639
/*17612*/       OPC_CheckType, MVT::i32,
/*17614*/       OPC_MoveParent,
/*17615*/       OPC_Scope, 10, /*->17627*/ // 2 children in Scope
/*17617*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17619*/         OPC_EmitMergeInputChains1_0,
/*17620*/         OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 1, 
                  // Src: (MipsJmpLink (texternalsym:i32):$dst) - Complexity = 6
                  // Dst: (JAL (texternalsym:i32):$dst)
/*17627*/       /*Scope*/ 10, /*->17638*/
/*17628*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*17630*/         OPC_EmitMergeInputChains1_0,
/*17631*/         OPC_MorphNodeTo, TARGET_VAL(Mips::Jal16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 1, 
                  // Src: (MipsJmpLink (texternalsym:i32):$dst) - Complexity = 6
                  // Dst: (Jal16 (texternalsym:i32):$dst)
/*17638*/       0, /*End of Scope*/
              0, // EndSwitchOpcode
/*17640*/   /*Scope*/ 26, /*->17667*/
/*17641*/     OPC_CheckChild1Type, MVT::i32,
/*17643*/     OPC_Scope, 10, /*->17655*/ // 2 children in Scope
/*17645*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17647*/       OPC_EmitMergeInputChains1_0,
/*17648*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JALRPseudo), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsJmpLink CPURegs:i32:$rs) - Complexity = 3
                // Dst: (JALRPseudo CPURegs:i32:$rs)
/*17655*/     /*Scope*/ 10, /*->17666*/
/*17656*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*17658*/       OPC_EmitMergeInputChains1_0,
/*17659*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JumpLinkReg16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsJmpLink CPU16Regs:i32:$rs) - Complexity = 3
                // Dst: (JumpLinkReg16 CPU16Regs:i32:$rs)
/*17666*/     0, /*End of Scope*/
/*17667*/   /*Scope*/ 12, /*->17680*/
/*17668*/     OPC_CheckChild1Type, MVT::i64,
/*17670*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17672*/     OPC_EmitMergeInputChains1_0,
/*17673*/     OPC_MorphNodeTo, TARGET_VAL(Mips::JALR64Pseudo), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsJmpLink CPU64Regs:i64:$rs) - Complexity = 3
              // Dst: (JALR64Pseudo CPU64Regs:i64:$rs)
/*17680*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 80,  TARGET_VAL(MipsISD::TailCall),// ->17764
/*17684*/   OPC_RecordNode,   // #0 = 'MipsTailCall' chained node
/*17685*/   OPC_CaptureGlueInput,
/*17686*/   OPC_RecordChild1, // #1 = $target
/*17687*/   OPC_Scope, 48, /*->17737*/ // 3 children in Scope
/*17689*/     OPC_MoveChild, 1,
/*17691*/     OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::Constant),// ->17708
/*17695*/       OPC_MoveParent,
/*17696*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17698*/       OPC_EmitMergeInputChains1_0,
/*17699*/       OPC_EmitConvertToTarget, 1,
/*17701*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (MipsTailCall (imm:iPTR):$target) - Complexity = 6
                // Dst: (TAILCALL (imm:iPTR):$target)
              /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->17722
/*17711*/       OPC_MoveParent,
/*17712*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17714*/       OPC_EmitMergeInputChains1_0,
/*17715*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsTailCall (tglobaladdr:iPTR):$dst) - Complexity = 6
                // Dst: (TAILCALL (tglobaladdr:iPTR):$dst)
              /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetExternalSymbol),// ->17736
/*17725*/       OPC_MoveParent,
/*17726*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17728*/       OPC_EmitMergeInputChains1_0,
/*17729*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsTailCall (texternalsym:iPTR):$dst) - Complexity = 6
                // Dst: (TAILCALL (texternalsym:iPTR):$dst)
              0, // EndSwitchOpcode
/*17737*/   /*Scope*/ 12, /*->17750*/
/*17738*/     OPC_CheckChild1Type, MVT::i32,
/*17740*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17742*/     OPC_EmitMergeInputChains1_0,
/*17743*/     OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL_R), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsTailCall CPURegs:i32:$rs) - Complexity = 3
              // Dst: (TAILCALL_R CPURegs:i32:$rs)
/*17750*/   /*Scope*/ 12, /*->17763*/
/*17751*/     OPC_CheckChild1Type, MVT::i64,
/*17753*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17755*/     OPC_EmitMergeInputChains1_0,
/*17756*/     OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL64_R), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsTailCall CPU64Regs:i64:$rs) - Complexity = 3
              // Dst: (TAILCALL64_R CPU64Regs:i64:$rs)
/*17763*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 71,  TARGET_VAL(MipsISD::FPCmp),// ->17838
/*17767*/   OPC_RecordChild0, // #0 = $fs
/*17768*/   OPC_Scope, 24, /*->17794*/ // 2 children in Scope
/*17770*/     OPC_CheckChild0Type, MVT::f32,
/*17772*/     OPC_RecordChild1, // #1 = $ft
/*17773*/     OPC_RecordChild2, // #2 = $cond
/*17774*/     OPC_MoveChild, 2,
/*17776*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17779*/     OPC_MoveParent,
/*17780*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17782*/     OPC_EmitConvertToTarget, 2,
/*17784*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FCMP_S32), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (MipsFPCmp FGR32:f32:$fs, FGR32:f32:$ft, (imm:i32):$cond) - Complexity = 6
              // Dst: (FCMP_S32:i32 FGR32:f32:$fs, FGR32:f32:$ft, (imm:i32):$cond)
/*17794*/   /*Scope*/ 42, /*->17837*/
/*17795*/     OPC_CheckChild0Type, MVT::f64,
/*17797*/     OPC_RecordChild1, // #1 = $ft
/*17798*/     OPC_RecordChild2, // #2 = $cond
/*17799*/     OPC_MoveChild, 2,
/*17801*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17804*/     OPC_MoveParent,
/*17805*/     OPC_Scope, 14, /*->17821*/ // 2 children in Scope
/*17807*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17809*/       OPC_EmitConvertToTarget, 2,
/*17811*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FCMP_D32), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (MipsFPCmp AFGR64:f64:$fs, AFGR64:f64:$ft, (imm:i32):$cond) - Complexity = 6
                // Dst: (FCMP_D32:i32 AFGR64:f64:$fs, AFGR64:f64:$ft, (imm:i32):$cond)
/*17821*/     /*Scope*/ 14, /*->17836*/
/*17822*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17824*/       OPC_EmitConvertToTarget, 2,
/*17826*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FCMP_D64), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (MipsFPCmp FGR64:f64:$fs, FGR64:f64:$ft, (imm:i32):$cond) - Complexity = 6
                // Dst: (FCMP_D64:i32 FGR64:f64:$fs, FGR64:f64:$ft, (imm:i32):$cond)
/*17836*/     0, /*End of Scope*/
/*17837*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SHLL_DSP),// ->17881
/*17841*/   OPC_RecordChild0, // #0 = $a
/*17842*/   OPC_RecordChild1, // #1 = $shamt
/*17843*/   OPC_MoveChild, 1,
/*17845*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17848*/   OPC_MoveParent,
/*17849*/   OPC_SwitchType /*2 cases */, 13,  MVT::v2i16,// ->17865
/*17852*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17854*/     OPC_EmitConvertToTarget, 1,
/*17856*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHLL_DSP:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHLL_PH:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt)
            /*SwitchType*/ 13,  MVT::v4i8,// ->17880
/*17867*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17869*/     OPC_EmitConvertToTarget, 1,
/*17871*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHLL_DSP:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHLL_QB:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt)
            0, // EndSwitchType
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SHRA_DSP),// ->17924
/*17884*/   OPC_RecordChild0, // #0 = $a
/*17885*/   OPC_RecordChild1, // #1 = $shamt
/*17886*/   OPC_MoveChild, 1,
/*17888*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17891*/   OPC_MoveParent,
/*17892*/   OPC_SwitchType /*2 cases */, 13,  MVT::v2i16,// ->17908
/*17895*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17897*/     OPC_EmitConvertToTarget, 1,
/*17899*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHRA_DSP:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHRA_PH:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt)
            /*SwitchType*/ 13,  MVT::v4i8,// ->17923
/*17910*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*17912*/     OPC_EmitConvertToTarget, 1,
/*17914*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHRA_DSP:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHRA_QB:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt)
            0, // EndSwitchType
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SHRL_DSP),// ->17967
/*17927*/   OPC_RecordChild0, // #0 = $a
/*17928*/   OPC_RecordChild1, // #1 = $shamt
/*17929*/   OPC_MoveChild, 1,
/*17931*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17934*/   OPC_MoveParent,
/*17935*/   OPC_SwitchType /*2 cases */, 13,  MVT::v2i16,// ->17951
/*17938*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*17940*/     OPC_EmitConvertToTarget, 1,
/*17942*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHRL_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHRL_DSP:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHRL_PH:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt)
            /*SwitchType*/ 13,  MVT::v4i8,// ->17966
/*17953*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17955*/     OPC_EmitConvertToTarget, 1,
/*17957*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHRL_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHRL_DSP:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHRL_QB:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt)
            0, // EndSwitchType
          /*SwitchOpcode*/ 24,  TARGET_VAL(MipsISD::Ret),// ->17994
/*17970*/   OPC_RecordNode,   // #0 = 'MipsRet' chained node
/*17971*/   OPC_CaptureGlueInput,
/*17972*/   OPC_Scope, 9, /*->17983*/ // 2 children in Scope
/*17974*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17976*/     OPC_EmitMergeInputChains1_0,
/*17977*/     OPC_MorphNodeTo, TARGET_VAL(Mips::RetRA), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (MipsRet) - Complexity = 3
              // Dst: (RetRA)
/*17983*/   /*Scope*/ 9, /*->17993*/
/*17984*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*17986*/     OPC_EmitMergeInputChains1_0,
/*17987*/     OPC_MorphNodeTo, TARGET_VAL(Mips::RetRA16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (MipsRet) - Complexity = 3
              // Dst: (RetRA16)
/*17993*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 43,  TARGET_VAL(ISD::BR),// ->18040
/*17997*/   OPC_RecordNode,   // #0 = 'br' chained node
/*17998*/   OPC_RecordChild1, // #1 = $target
/*17999*/   OPC_MoveChild, 1,
/*18001*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*18004*/   OPC_MoveParent,
/*18005*/   OPC_Scope, 10, /*->18017*/ // 3 children in Scope
/*18007*/     OPC_CheckPatternPredicate, 23, // (TM.getRelocationModel() == Reloc::Static) && (Subtarget.hasStandardEncoding())
/*18009*/     OPC_EmitMergeInputChains1_0,
/*18010*/     OPC_MorphNodeTo, TARGET_VAL(Mips::J), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$target) - Complexity = 3
              // Dst: (J (bb:Other):$target)
/*18017*/   /*Scope*/ 10, /*->18028*/
/*18018*/     OPC_CheckPatternPredicate, 24, // (TM.getRelocationModel() == Reloc::PIC_) && (Subtarget.hasStandardEncoding())
/*18020*/     OPC_EmitMergeInputChains1_0,
/*18021*/     OPC_MorphNodeTo, TARGET_VAL(Mips::B), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$offset) - Complexity = 3
              // Dst: (B (bb:Other):$offset)
/*18028*/   /*Scope*/ 10, /*->18039*/
/*18029*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*18031*/     OPC_EmitMergeInputChains1_0,
/*18032*/     OPC_MorphNodeTo, TARGET_VAL(Mips::BimmX16), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$imm16) - Complexity = 3
              // Dst: (BimmX16 (bb:Other):$imm16)
/*18039*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::BRIND),// ->18087
/*18043*/   OPC_RecordNode,   // #0 = 'brind' chained node
/*18044*/   OPC_RecordChild1, // #1 = $rs
/*18045*/   OPC_Scope, 26, /*->18073*/ // 2 children in Scope
/*18047*/     OPC_CheckChild1Type, MVT::i32,
/*18049*/     OPC_Scope, 10, /*->18061*/ // 2 children in Scope
/*18051*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18053*/       OPC_EmitMergeInputChains1_0,
/*18054*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JR), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (brind CPURegs:i32:$rs) - Complexity = 3
                // Dst: (JR CPURegs:i32:$rs)
/*18061*/     /*Scope*/ 10, /*->18072*/
/*18062*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*18064*/       OPC_EmitMergeInputChains1_0,
/*18065*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JrcRx16), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (brind CPU16Regs:i32:$rs) - Complexity = 3
                // Dst: (JrcRx16 CPU16Regs:i32:$rs)
/*18072*/     0, /*End of Scope*/
/*18073*/   /*Scope*/ 12, /*->18086*/
/*18074*/     OPC_CheckChild1Type, MVT::i64,
/*18076*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18078*/     OPC_EmitMergeInputChains1_0,
/*18079*/     OPC_MorphNodeTo, TARGET_VAL(Mips::JR64), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (brind CPU64Regs:i64:$rs) - Complexity = 3
              // Dst: (JR64 CPU64Regs:i64:$rs)
/*18086*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 35,  TARGET_VAL(MipsISD::EH_RETURN),// ->18125
/*18090*/   OPC_RecordNode,   // #0 = 'MIPSehret' chained node
/*18091*/   OPC_CaptureGlueInput,
/*18092*/   OPC_RecordChild1, // #1 = $spoff
/*18093*/   OPC_Scope, 14, /*->18109*/ // 2 children in Scope
/*18095*/     OPC_CheckChild1Type, MVT::i32,
/*18097*/     OPC_RecordChild2, // #2 = $dst
/*18098*/     OPC_CheckChild2Type, MVT::i32,
/*18100*/     OPC_EmitMergeInputChains1_0,
/*18101*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MIPSeh_return32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (MIPSehret CPURegs:i32:$spoff, CPURegs:i32:$dst) - Complexity = 3
              // Dst: (MIPSeh_return32 CPURegs:i32:$spoff, CPURegs:i32:$dst)
/*18109*/   /*Scope*/ 14, /*->18124*/
/*18110*/     OPC_CheckChild1Type, MVT::i64,
/*18112*/     OPC_RecordChild2, // #2 = $dst
/*18113*/     OPC_CheckChild2Type, MVT::i64,
/*18115*/     OPC_EmitMergeInputChains1_0,
/*18116*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MIPSeh_return64), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (MIPSehret CPU64Regs:i64:$spoff, CPU64Regs:i64:$dst) - Complexity = 3
              // Dst: (MIPSeh_return64 CPU64Regs:i64:$spoff, CPU64Regs:i64:$dst)
/*18124*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 79,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->18207
/*18128*/   OPC_RecordChild0, // #0 = $rt
/*18129*/   OPC_MoveChild, 1,
/*18131*/   OPC_Scope, 29, /*->18162*/ // 3 children in Scope
/*18133*/     OPC_CheckValueType, MVT::i8,
/*18135*/     OPC_MoveParent,
/*18136*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->18149
/*18139*/       OPC_CheckPatternPredicate, 25, // (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding())
/*18141*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEB), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 CPURegs:i32:$rt, i8:Other) - Complexity = 3
                // Dst: (SEB:i32 CPURegs:i32:$rt)
              /*SwitchType*/ 10,  MVT::i64,// ->18161
/*18151*/       OPC_CheckPatternPredicate, 25, // (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding())
/*18153*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEB64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 CPU64Regs:i64:$rt, i8:Other) - Complexity = 3
                // Dst: (SEB64:i64 CPU64Regs:i64:$rt)
              0, // EndSwitchType
/*18162*/   /*Scope*/ 29, /*->18192*/
/*18163*/     OPC_CheckValueType, MVT::i16,
/*18165*/     OPC_MoveParent,
/*18166*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->18179
/*18169*/       OPC_CheckPatternPredicate, 25, // (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding())
/*18171*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEH), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 CPURegs:i32:$rt, i16:Other) - Complexity = 3
                // Dst: (SEH:i32 CPURegs:i32:$rt)
              /*SwitchType*/ 10,  MVT::i64,// ->18191
/*18181*/       OPC_CheckPatternPredicate, 25, // (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding())
/*18183*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEH64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 CPU64Regs:i64:$rt, i16:Other) - Complexity = 3
                // Dst: (SEH64:i64 CPU64Regs:i64:$rt)
              0, // EndSwitchType
/*18192*/   /*Scope*/ 13, /*->18206*/
/*18193*/     OPC_CheckValueType, MVT::i32,
/*18195*/     OPC_MoveParent,
/*18196*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18198*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SLL64_64), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i64 CPU64Regs:i64:$src, i32:Other) - Complexity = 3
              // Dst: (SLL64_64:i64 CPU64Regs:i64:$src)
/*18206*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::SUBC),// ->18240
/*18210*/   OPC_RecordChild0, // #0 = $lhs
/*18211*/   OPC_RecordChild1, // #1 = $rhs
/*18212*/   OPC_CheckType, MVT::i32,
/*18214*/   OPC_Scope, 11, /*->18227*/ // 2 children in Scope
/*18216*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18218*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SUBu), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs) - Complexity = 3
              // Dst: (SUBu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs)
/*18227*/   /*Scope*/ 11, /*->18239*/
/*18228*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*18230*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SubuRxRyRz16), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs) - Complexity = 3
              // Dst: (SubuRxRyRz16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs)
/*18239*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 7|128,1/*135*/,  TARGET_VAL(ISD::BITCAST),// ->18379
/*18244*/   OPC_RecordChild0, // #0 = $fs
/*18245*/   OPC_Scope, 14, /*->18261*/ // 6 children in Scope
/*18247*/     OPC_CheckChild0Type, MVT::f32,
/*18249*/     OPC_CheckType, MVT::i32,
/*18251*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18253*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MFC1), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (bitconvert:i32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (MFC1:i32 FGR32:f32:$fs)
/*18261*/   /*Scope*/ 14, /*->18276*/
/*18262*/     OPC_CheckChild0Type, MVT::f64,
/*18264*/     OPC_CheckType, MVT::i64,
/*18266*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18268*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DMFC1), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:i64 FGR64:f64:$fs) - Complexity = 3
              // Dst: (DMFC1:i64 FGR64:f64:$fs)
/*18276*/   /*Scope*/ 18, /*->18295*/
/*18277*/     OPC_CheckChild0Type, MVT::v2i16,
/*18279*/     OPC_CheckType, MVT::i32,
/*18281*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18283*/     OPC_EmitInteger, MVT::i32, Mips::CPURegsRegClassID,
/*18286*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (bitconvert:i32 DSPRegs:v2i16:$src) - Complexity = 3
              // Dst: (COPY_TO_REGCLASS:i32 DSPRegs:v2i16:$src, CPURegs:i32)
/*18295*/   /*Scope*/ 18, /*->18314*/
/*18296*/     OPC_CheckChild0Type, MVT::v4i8,
/*18298*/     OPC_CheckType, MVT::i32,
/*18300*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18302*/     OPC_EmitInteger, MVT::i32, Mips::CPURegsRegClassID,
/*18305*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (bitconvert:i32 DSPRegs:v4i8:$src) - Complexity = 3
              // Dst: (COPY_TO_REGCLASS:i32 DSPRegs:v4i8:$src, CPURegs:i32)
/*18314*/   /*Scope*/ 48, /*->18363*/
/*18315*/     OPC_CheckChild0Type, MVT::i32,
/*18317*/     OPC_SwitchType /*3 cases */, 10,  MVT::f32,// ->18330
/*18320*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18322*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MTC1), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (bitconvert:f32 CPURegs:i32:$rt) - Complexity = 3
                // Dst: (MTC1:f32 CPURegs:i32:$rt)
              /*SwitchType*/ 14,  MVT::v2i16,// ->18346
/*18332*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18334*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*18337*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (bitconvert:v2i16 CPURegs:i32:$src) - Complexity = 3
                // Dst: (COPY_TO_REGCLASS:v2i16 CPURegs:i32:$src, DSPRegs:i32)
              /*SwitchType*/ 14,  MVT::v4i8,// ->18362
/*18348*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18350*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*18353*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (bitconvert:v4i8 CPURegs:i32:$src) - Complexity = 3
                // Dst: (COPY_TO_REGCLASS:v4i8 CPURegs:i32:$src, DSPRegs:i32)
              0, // EndSwitchType
/*18363*/   /*Scope*/ 14, /*->18378*/
/*18364*/     OPC_CheckChild0Type, MVT::i64,
/*18366*/     OPC_CheckType, MVT::f64,
/*18368*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18370*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DMTC1), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:f64 CPU64Regs:i64:$rt) - Complexity = 3
              // Dst: (DMTC1:f64 CPU64Regs:i64:$rt)
/*18378*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::ANY_EXTEND),// ->18397
/*18382*/   OPC_RecordChild0, // #0 = $src
/*18383*/   OPC_CheckChild0Type, MVT::i32,
/*18385*/   OPC_CheckType, MVT::i64,
/*18387*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18389*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SLL64_32), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (anyext:i64 CPURegs:i32:$src) - Complexity = 3
            // Dst: (SLL64_32:i64 CPURegs:i32:$src)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::SIGN_EXTEND),// ->18415
/*18400*/   OPC_RecordChild0, // #0 = $src
/*18401*/   OPC_CheckChild0Type, MVT::i32,
/*18403*/   OPC_CheckType, MVT::i64,
/*18405*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18407*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SLL64_32), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (sext:i64 CPURegs:i32:$src) - Complexity = 3
            // Dst: (SLL64_32:i64 CPURegs:i32:$src)
          /*SwitchOpcode*/ 72,  TARGET_VAL(MipsISD::CMovFP_T),// ->18490
/*18418*/   OPC_CaptureGlueInput,
/*18419*/   OPC_RecordChild0, // #0 = $rs
/*18420*/   OPC_RecordChild1, // #1 = $F
/*18421*/   OPC_SwitchType /*4 cases */, 11,  MVT::i32,// ->18435
/*18424*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18426*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_I), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_T:i32 CPURegs:i32:$rs, CPURegs:i32:$F) - Complexity = 3
              // Dst: (MOVT_I:i32 CPURegs:i32:$rs, CPURegs:i32:$F)
            /*SwitchType*/ 11,  MVT::i64,// ->18448
/*18437*/     OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*18439*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_I64), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_T:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$F) - Complexity = 3
              // Dst: (MOVT_I64:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$F)
            /*SwitchType*/ 11,  MVT::f32,// ->18461
/*18450*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18452*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_S), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_T:f32 FGR32:f32:$fs, FGR32:f32:$F) - Complexity = 3
              // Dst: (MOVT_S:f32 FGR32:f32:$fs, FGR32:f32:$F)
            /*SwitchType*/ 26,  MVT::f64,// ->18489
/*18463*/     OPC_Scope, 11, /*->18476*/ // 2 children in Scope
/*18465*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18467*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_D32), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsCMovFP_T:f64 AFGR64:f64:$fs, AFGR64:f64:$F) - Complexity = 3
                // Dst: (MOVT_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$F)
/*18476*/     /*Scope*/ 11, /*->18488*/
/*18477*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18479*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_D64), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsCMovFP_T:f64 FGR64:f64:$fs, FGR64:f64:$F) - Complexity = 3
                // Dst: (MOVT_D64:f64 FGR64:f64:$fs, FGR64:f64:$F)
/*18488*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 72,  TARGET_VAL(MipsISD::CMovFP_F),// ->18565
/*18493*/   OPC_CaptureGlueInput,
/*18494*/   OPC_RecordChild0, // #0 = $rs
/*18495*/   OPC_RecordChild1, // #1 = $F
/*18496*/   OPC_SwitchType /*4 cases */, 11,  MVT::i32,// ->18510
/*18499*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18501*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_I), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_F:i32 CPURegs:i32:$rs, CPURegs:i32:$F) - Complexity = 3
              // Dst: (MOVF_I:i32 CPURegs:i32:$rs, CPURegs:i32:$F)
            /*SwitchType*/ 11,  MVT::i64,// ->18523
/*18512*/     OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*18514*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_I64), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_F:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$F) - Complexity = 3
              // Dst: (MOVF_I64:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$F)
            /*SwitchType*/ 11,  MVT::f32,// ->18536
/*18525*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18527*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_S), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_F:f32 FGR32:f32:$fs, FGR32:f32:$F) - Complexity = 3
              // Dst: (MOVF_S:f32 FGR32:f32:$fs, FGR32:f32:$F)
            /*SwitchType*/ 26,  MVT::f64,// ->18564
/*18538*/     OPC_Scope, 11, /*->18551*/ // 2 children in Scope
/*18540*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18542*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_D32), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsCMovFP_F:f64 AFGR64:f64:$fs, AFGR64:f64:$F) - Complexity = 3
                // Dst: (MOVF_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$F)
/*18551*/     /*Scope*/ 11, /*->18563*/
/*18552*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18554*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_D64), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsCMovFP_F:f64 FGR64:f64:$fs, FGR64:f64:$F) - Complexity = 3
                // Dst: (MOVF_D64:f64 FGR64:f64:$fs, FGR64:f64:$F)
/*18563*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DivRem16),// ->18583
/*18568*/   OPC_RecordChild0, // #0 = $rx
/*18569*/   OPC_CheckChild0Type, MVT::i32,
/*18571*/   OPC_RecordChild1, // #1 = $ry
/*18572*/   OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*18574*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DivRxRy16), 0|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsDivRem16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry) - Complexity = 3
            // Dst: (DivRxRy16:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DivRemU16),// ->18601
/*18586*/   OPC_RecordChild0, // #0 = $rx
/*18587*/   OPC_CheckChild0Type, MVT::i32,
/*18589*/   OPC_RecordChild1, // #1 = $ry
/*18590*/   OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*18592*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DivuRxRy16), 0|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsDivRemU16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry) - Complexity = 3
            // Dst: (DivuRxRy16:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::MULSAQ_S_W_PH),// ->18621
/*18604*/   OPC_RecordNode,   // #0 = 'MipsMULSAQ_S_W_PH' chained node
/*18605*/   OPC_RecordChild1, // #1 = $rs
/*18606*/   OPC_RecordChild2, // #2 = $rt
/*18607*/   OPC_RecordChild3, // #3 = $acin
/*18608*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18610*/   OPC_EmitMergeInputChains1_0,
/*18611*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MULSAQ_S_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsMULSAQ_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (MULSAQ_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::MAQ_S_W_PHL),// ->18641
/*18624*/   OPC_RecordNode,   // #0 = 'MipsMAQ_S_W_PHL' chained node
/*18625*/   OPC_RecordChild1, // #1 = $rs
/*18626*/   OPC_RecordChild2, // #2 = $rt
/*18627*/   OPC_RecordChild3, // #3 = $acin
/*18628*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18630*/   OPC_EmitMergeInputChains1_0,
/*18631*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MAQ_S_W_PHL), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsMAQ_S_W_PHL:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (MAQ_S_W_PHL:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::MAQ_S_W_PHR),// ->18661
/*18644*/   OPC_RecordNode,   // #0 = 'MipsMAQ_S_W_PHR' chained node
/*18645*/   OPC_RecordChild1, // #1 = $rs
/*18646*/   OPC_RecordChild2, // #2 = $rt
/*18647*/   OPC_RecordChild3, // #3 = $acin
/*18648*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18650*/   OPC_EmitMergeInputChains1_0,
/*18651*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MAQ_S_W_PHR), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsMAQ_S_W_PHR:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (MAQ_S_W_PHR:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::MAQ_SA_W_PHL),// ->18681
/*18664*/   OPC_RecordNode,   // #0 = 'MipsMAQ_SA_W_PHL' chained node
/*18665*/   OPC_RecordChild1, // #1 = $rs
/*18666*/   OPC_RecordChild2, // #2 = $rt
/*18667*/   OPC_RecordChild3, // #3 = $acin
/*18668*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18670*/   OPC_EmitMergeInputChains1_0,
/*18671*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MAQ_SA_W_PHL), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsMAQ_SA_W_PHL:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (MAQ_SA_W_PHL:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::MAQ_SA_W_PHR),// ->18701
/*18684*/   OPC_RecordNode,   // #0 = 'MipsMAQ_SA_W_PHR' chained node
/*18685*/   OPC_RecordChild1, // #1 = $rs
/*18686*/   OPC_RecordChild2, // #2 = $rt
/*18687*/   OPC_RecordChild3, // #3 = $acin
/*18688*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18690*/   OPC_EmitMergeInputChains1_0,
/*18691*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MAQ_SA_W_PHR), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsMAQ_SA_W_PHR:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (MAQ_SA_W_PHR:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAU_H_QBL),// ->18719
/*18704*/   OPC_RecordChild0, // #0 = $rs
/*18705*/   OPC_RecordChild1, // #1 = $rt
/*18706*/   OPC_RecordChild2, // #2 = $acin
/*18707*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18709*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAU_H_QBL), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPAU_H_QBL:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPAU_H_QBL:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAU_H_QBR),// ->18737
/*18722*/   OPC_RecordChild0, // #0 = $rs
/*18723*/   OPC_RecordChild1, // #1 = $rt
/*18724*/   OPC_RecordChild2, // #2 = $acin
/*18725*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18727*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAU_H_QBR), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPAU_H_QBR:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPAU_H_QBR:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSU_H_QBL),// ->18755
/*18740*/   OPC_RecordChild0, // #0 = $rs
/*18741*/   OPC_RecordChild1, // #1 = $rt
/*18742*/   OPC_RecordChild2, // #2 = $acin
/*18743*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18745*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSU_H_QBL), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPSU_H_QBL:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPSU_H_QBL:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSU_H_QBR),// ->18773
/*18758*/   OPC_RecordChild0, // #0 = $rs
/*18759*/   OPC_RecordChild1, // #1 = $rt
/*18760*/   OPC_RecordChild2, // #2 = $acin
/*18761*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18763*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSU_H_QBR), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPSU_H_QBR:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPSU_H_QBR:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPAQ_S_W_PH),// ->18793
/*18776*/   OPC_RecordNode,   // #0 = 'MipsDPAQ_S_W_PH' chained node
/*18777*/   OPC_RecordChild1, // #1 = $rs
/*18778*/   OPC_RecordChild2, // #2 = $rt
/*18779*/   OPC_RecordChild3, // #3 = $acin
/*18780*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18782*/   OPC_EmitMergeInputChains1_0,
/*18783*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAQ_S_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPAQ_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPAQ_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPSQ_S_W_PH),// ->18813
/*18796*/   OPC_RecordNode,   // #0 = 'MipsDPSQ_S_W_PH' chained node
/*18797*/   OPC_RecordChild1, // #1 = $rs
/*18798*/   OPC_RecordChild2, // #2 = $rt
/*18799*/   OPC_RecordChild3, // #3 = $acin
/*18800*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18802*/   OPC_EmitMergeInputChains1_0,
/*18803*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSQ_S_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPSQ_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPSQ_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPAQ_SA_L_W),// ->18833
/*18816*/   OPC_RecordNode,   // #0 = 'MipsDPAQ_SA_L_W' chained node
/*18817*/   OPC_RecordChild1, // #1 = $rs
/*18818*/   OPC_RecordChild2, // #2 = $rt
/*18819*/   OPC_RecordChild3, // #3 = $acin
/*18820*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18822*/   OPC_EmitMergeInputChains1_0,
/*18823*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAQ_SA_L_W), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPAQ_SA_L_W:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPAQ_SA_L_W:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPSQ_SA_L_W),// ->18853
/*18836*/   OPC_RecordNode,   // #0 = 'MipsDPSQ_SA_L_W' chained node
/*18837*/   OPC_RecordChild1, // #1 = $rs
/*18838*/   OPC_RecordChild2, // #2 = $rt
/*18839*/   OPC_RecordChild3, // #3 = $acin
/*18840*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18842*/   OPC_EmitMergeInputChains1_0,
/*18843*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSQ_SA_L_W), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPSQ_SA_L_W:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPSQ_SA_L_W:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MTHLIP),// ->18871
/*18856*/   OPC_RecordNode,   // #0 = 'MipsMTHLIP' chained node
/*18857*/   OPC_RecordChild1, // #1 = $rs
/*18858*/   OPC_RecordChild2, // #2 = $acin
/*18859*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18861*/   OPC_EmitMergeInputChains1_0,
/*18862*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MTHLIP), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMTHLIP:Untyped CPURegs:i32:$rs, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (MTHLIP:Untyped CPURegs:i32:$rs, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPA_W_PH),// ->18889
/*18874*/   OPC_RecordChild0, // #0 = $rs
/*18875*/   OPC_RecordChild1, // #1 = $rt
/*18876*/   OPC_RecordChild2, // #2 = $acin
/*18877*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18879*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPA_W_PH), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPA_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPA_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPS_W_PH),// ->18907
/*18892*/   OPC_RecordChild0, // #0 = $rs
/*18893*/   OPC_RecordChild1, // #1 = $rt
/*18894*/   OPC_RecordChild2, // #2 = $acin
/*18895*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18897*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPS_W_PH), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPS_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPS_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPAQX_S_W_PH),// ->18927
/*18910*/   OPC_RecordNode,   // #0 = 'MipsDPAQX_S_W_PH' chained node
/*18911*/   OPC_RecordChild1, // #1 = $rs
/*18912*/   OPC_RecordChild2, // #2 = $rt
/*18913*/   OPC_RecordChild3, // #3 = $acin
/*18914*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18916*/   OPC_EmitMergeInputChains1_0,
/*18917*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAQX_S_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPAQX_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPAQX_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPAQX_SA_W_PH),// ->18947
/*18930*/   OPC_RecordNode,   // #0 = 'MipsDPAQX_SA_W_PH' chained node
/*18931*/   OPC_RecordChild1, // #1 = $rs
/*18932*/   OPC_RecordChild2, // #2 = $rt
/*18933*/   OPC_RecordChild3, // #3 = $acin
/*18934*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18936*/   OPC_EmitMergeInputChains1_0,
/*18937*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAQX_SA_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPAQX_SA_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPAQX_SA_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAX_W_PH),// ->18965
/*18950*/   OPC_RecordChild0, // #0 = $rs
/*18951*/   OPC_RecordChild1, // #1 = $rt
/*18952*/   OPC_RecordChild2, // #2 = $acin
/*18953*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18955*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAX_W_PH), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPAX_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPAX_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSX_W_PH),// ->18983
/*18968*/   OPC_RecordChild0, // #0 = $rs
/*18969*/   OPC_RecordChild1, // #1 = $rt
/*18970*/   OPC_RecordChild2, // #2 = $acin
/*18971*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18973*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSX_W_PH), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPSX_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPSX_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPSQX_S_W_PH),// ->19003
/*18986*/   OPC_RecordNode,   // #0 = 'MipsDPSQX_S_W_PH' chained node
/*18987*/   OPC_RecordChild1, // #1 = $rs
/*18988*/   OPC_RecordChild2, // #2 = $rt
/*18989*/   OPC_RecordChild3, // #3 = $acin
/*18990*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18992*/   OPC_EmitMergeInputChains1_0,
/*18993*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSQX_S_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPSQX_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPSQX_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPSQX_SA_W_PH),// ->19023
/*19006*/   OPC_RecordNode,   // #0 = 'MipsDPSQX_SA_W_PH' chained node
/*19007*/   OPC_RecordChild1, // #1 = $rs
/*19008*/   OPC_RecordChild2, // #2 = $rt
/*19009*/   OPC_RecordChild3, // #3 = $acin
/*19010*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*19012*/   OPC_EmitMergeInputChains1_0,
/*19013*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSQX_SA_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPSQX_SA_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPSQX_SA_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MULSA_W_PH),// ->19041
/*19026*/   OPC_RecordChild0, // #0 = $rs
/*19027*/   OPC_RecordChild1, // #1 = $rt
/*19028*/   OPC_RecordChild2, // #2 = $acin
/*19029*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*19031*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MULSA_W_PH), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsMULSA_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (MULSA_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::ADDE),// ->19060
/*19044*/   OPC_CaptureGlueInput,
/*19045*/   OPC_RecordChild0, // #0 = $a
/*19046*/   OPC_RecordChild1, // #1 = $b
/*19047*/   OPC_CheckType, MVT::i32,
/*19049*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19051*/   OPC_MorphNodeTo, TARGET_VAL(Mips::ADDWC), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (adde:i32 i32:i32:$a, i32:i32:$b) - Complexity = 3
            // Dst: (ADDWC:i32 i32:i32:$a, i32:i32:$b)
          /*SwitchOpcode*/ 47,  TARGET_VAL(ISD::BSWAP),// ->19110
/*19063*/   OPC_RecordChild0, // #0 = $rt
/*19064*/   OPC_SwitchType /*2 cases */, 22,  MVT::i32,// ->19089
/*19067*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19069*/     OPC_EmitNode, TARGET_VAL(Mips::WSBH), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*19077*/     OPC_EmitInteger, MVT::i32, 16, 
/*19080*/     OPC_MorphNodeTo, TARGET_VAL(Mips::ROTR), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (bswap:i32 CPURegs:i32:$rt) - Complexity = 3
              // Dst: (ROTR:i32 (WSBH:i32 CPURegs:i32:$rt), 16:i32)
            /*SwitchType*/ 18,  MVT::i64,// ->19109
/*19091*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19093*/     OPC_EmitNode, TARGET_VAL(Mips::DSBH), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0,  // Results = #1
/*19101*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DSHD), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (bswap:i64 CPU64Regs:i64:$rt) - Complexity = 3
              // Dst: (DSHD:i64 (DSBH:i64 CPU64Regs:i64:$rt))
            0, // EndSwitchType
          /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TRUNCATE),// ->19142
/*19113*/   OPC_RecordChild0, // #0 = $src
/*19114*/   OPC_CheckType, MVT::i32,
/*19116*/   OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*19118*/   OPC_EmitInteger, MVT::i32, Mips::sub_32,
/*19121*/   OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*19130*/   OPC_EmitInteger, MVT::i32, 0, 
/*19133*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SLL), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
            // Src: (trunc:i32 CPU64Regs:i64:$src) - Complexity = 3
            // Dst: (SLL:i32 (EXTRACT_SUBREG:i32 CPU64Regs:i64:$src, sub_32:i32), 0:i32)
          /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::ZERO_EXTEND),// ->19172
/*19145*/   OPC_RecordChild0, // #0 = $src
/*19146*/   OPC_CheckChild0Type, MVT::i32,
/*19148*/   OPC_CheckType, MVT::i64,
/*19150*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19152*/   OPC_EmitNode, TARGET_VAL(Mips::DSLL64_32), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0,  // Results = #1
/*19160*/   OPC_EmitInteger, MVT::i32, 32, 
/*19163*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DSRL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
            // Src: (zext:i64 CPURegs:i32:$src) - Complexity = 3
            // Dst: (DSRL:i64 (DSLL64_32:i64 CPURegs:i32:$src), 32:i32)
          /*SwitchOpcode*/ 33,  TARGET_VAL(MipsISD::DivRem),// ->19208
/*19175*/   OPC_RecordChild0, // #0 = $rs
/*19176*/   OPC_Scope, 14, /*->19192*/ // 2 children in Scope
/*19178*/     OPC_CheckChild0Type, MVT::i32,
/*19180*/     OPC_RecordChild1, // #1 = $rt
/*19181*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19183*/     OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoSDIV), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsDivRem:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
              // Dst: (PseudoSDIV:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*19192*/   /*Scope*/ 14, /*->19207*/
/*19193*/     OPC_CheckChild0Type, MVT::i64,
/*19195*/     OPC_RecordChild1, // #1 = $rt
/*19196*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19198*/     OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoDSDIV), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsDivRem:Untyped CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
              // Dst: (PseudoDSDIV:Untyped CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*19207*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 33,  TARGET_VAL(MipsISD::DivRemU),// ->19244
/*19211*/   OPC_RecordChild0, // #0 = $rs
/*19212*/   OPC_Scope, 14, /*->19228*/ // 2 children in Scope
/*19214*/     OPC_CheckChild0Type, MVT::i32,
/*19216*/     OPC_RecordChild1, // #1 = $rt
/*19217*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19219*/     OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoUDIV), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsDivRemU:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
              // Dst: (PseudoUDIV:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*19228*/   /*Scope*/ 14, /*->19243*/
/*19229*/     OPC_CheckChild0Type, MVT::i64,
/*19231*/     OPC_RecordChild1, // #1 = $rt
/*19232*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19234*/     OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoDUDIV), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsDivRemU:Untyped CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
              // Dst: (PseudoDUDIV:Untyped CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*19243*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FABS),// ->19286
/*19247*/   OPC_RecordChild0, // #0 = $fs
/*19248*/   OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->19261
/*19251*/     OPC_CheckPatternPredicate, 26, // (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*19253*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FABS_S), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (FABS_S:f32 FGR32:f32:$fs)
            /*SwitchType*/ 22,  MVT::f64,// ->19285
/*19263*/     OPC_CheckPatternPredicate, 26, // (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*19265*/     OPC_Scope, 8, /*->19275*/ // 2 children in Scope
/*19267*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FABS_D32), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fabs:f64 AFGR64:f64:$fs) - Complexity = 3
                // Dst: (FABS_D32:f64 AFGR64:f64:$fs)
/*19275*/     /*Scope*/ 8, /*->19284*/
/*19276*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FABS_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fabs:f64 FGR64:f64:$fs) - Complexity = 3
                // Dst: (FABS_D64:f64 FGR64:f64:$fs)
/*19284*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FNEG),// ->19328
/*19289*/   OPC_RecordChild0, // #0 = $fs
/*19290*/   OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->19303
/*19293*/     OPC_CheckPatternPredicate, 26, // (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*19295*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_S), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fneg:f32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (FNEG_S:f32 FGR32:f32:$fs)
            /*SwitchType*/ 22,  MVT::f64,// ->19327
/*19305*/     OPC_CheckPatternPredicate, 26, // (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*19307*/     OPC_Scope, 8, /*->19317*/ // 2 children in Scope
/*19309*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_D32), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 AFGR64:f64:$fs) - Complexity = 3
                // Dst: (FNEG_D32:f64 AFGR64:f64:$fs)
/*19317*/     /*Scope*/ 8, /*->19326*/
/*19318*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 FGR64:f64:$fs) - Complexity = 3
                // Dst: (FNEG_D64:f64 FGR64:f64:$fs)
/*19326*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::FSQRT),// ->19372
/*19331*/   OPC_RecordChild0, // #0 = $fs
/*19332*/   OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->19345
/*19335*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19337*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FSQRT_S), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (FSQRT_S:f32 FGR32:f32:$fs)
            /*SwitchType*/ 24,  MVT::f64,// ->19371
/*19347*/     OPC_Scope, 10, /*->19359*/ // 2 children in Scope
/*19349*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19351*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FSQRT_D32), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f64 AFGR64:f64:$fs) - Complexity = 3
                // Dst: (FSQRT_D32:f64 AFGR64:f64:$fs)
/*19359*/     /*Scope*/ 10, /*->19370*/
/*19360*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19362*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FSQRT_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f64 FGR64:f64:$fs) - Complexity = 3
                // Dst: (FSQRT_D64:f64 FGR64:f64:$fs)
/*19370*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 45,  TARGET_VAL(ISD::FDIV),// ->19420
/*19375*/   OPC_RecordChild0, // #0 = $fs
/*19376*/   OPC_RecordChild1, // #1 = $ft
/*19377*/   OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->19391
/*19380*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19382*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FDIV_S), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
              // Dst: (FDIV_S:f32 FGR32:f32:$fs, FGR32:f32:$ft)
            /*SwitchType*/ 26,  MVT::f64,// ->19419
/*19393*/     OPC_Scope, 11, /*->19406*/ // 2 children in Scope
/*19395*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19397*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FDIV_D32), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
                // Dst: (FDIV_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
/*19406*/     /*Scope*/ 11, /*->19418*/
/*19407*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19409*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FDIV_D64), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f64 FGR64:f64:$fs, FGR64:f64:$ft) - Complexity = 3
                // Dst: (FDIV_D64:f64 FGR64:f64:$fs, FGR64:f64:$ft)
/*19418*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 45,  TARGET_VAL(ISD::FMUL),// ->19468
/*19423*/   OPC_RecordChild0, // #0 = $fs
/*19424*/   OPC_RecordChild1, // #1 = $ft
/*19425*/   OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->19439
/*19428*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19430*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FMUL_S), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
              // Dst: (FMUL_S:f32 FGR32:f32:$fs, FGR32:f32:$ft)
            /*SwitchType*/ 26,  MVT::f64,// ->19467
/*19441*/     OPC_Scope, 11, /*->19454*/ // 2 children in Scope
/*19443*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19445*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FMUL_D32), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
                // Dst: (FMUL_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
/*19454*/     /*Scope*/ 11, /*->19466*/
/*19455*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19457*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FMUL_D64), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft) - Complexity = 3
                // Dst: (FMUL_D64:f64 FGR64:f64:$fs, FGR64:f64:$ft)
/*19466*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 13,  TARGET_VAL(MipsISD::BuildPairF64),// ->19484
/*19471*/   OPC_RecordChild0, // #0 = $lo
/*19472*/   OPC_RecordChild1, // #1 = $hi
/*19473*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19475*/   OPC_MorphNodeTo, TARGET_VAL(Mips::BuildPairF64), 0,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (MipsBuildPairF64:f64 CPURegs:i32:$lo, CPURegs:i32:$hi) - Complexity = 3
            // Dst: (BuildPairF64:f64 CPURegs:i32:$lo, CPURegs:i32:$hi)
          /*SwitchOpcode*/ 87,  TARGET_VAL(ISD::SINT_TO_FP),// ->19574
/*19487*/   OPC_RecordChild0, // #0 = $src
/*19488*/   OPC_Scope, 42, /*->19532*/ // 2 children in Scope
/*19490*/     OPC_CheckChild0Type, MVT::i32,
/*19492*/     OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->19505
/*19495*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19497*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoCVT_S_W), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f32 CPURegs:i32:$src) - Complexity = 3
                // Dst: (PseudoCVT_S_W:f32 CPURegs:i32:$src)
              /*SwitchType*/ 24,  MVT::f64,// ->19531
/*19507*/       OPC_Scope, 10, /*->19519*/ // 2 children in Scope
/*19509*/         OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19511*/         OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoCVT_D32_W), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                  // Src: (sint_to_fp:f64 CPURegs:i32:$src) - Complexity = 3
                  // Dst: (PseudoCVT_D32_W:f64 CPURegs:i32:$src)
/*19519*/       /*Scope*/ 10, /*->19530*/
/*19520*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19522*/         OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoCVT_D64_W), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                  // Src: (sint_to_fp:f64 CPURegs:i32:$src) - Complexity = 3
                  // Dst: (PseudoCVT_D64_W:f64 CPURegs:i32:$src)
/*19530*/       0, /*End of Scope*/
              0, // EndSwitchType
/*19532*/   /*Scope*/ 40, /*->19573*/
/*19533*/     OPC_CheckChild0Type, MVT::i64,
/*19535*/     OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->19548
/*19538*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19540*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoCVT_D64_L), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f64 CPU64Regs:i64:$src) - Complexity = 3
                // Dst: (PseudoCVT_D64_L:f64 CPU64Regs:i64:$src)
              /*SwitchType*/ 22,  MVT::f32,// ->19572
/*19550*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19552*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCVT_S_L), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1
/*19560*/       OPC_EmitInteger, MVT::i32, Mips::sub_32,
/*19563*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                // Src: (sint_to_fp:f32 CPU64Regs:i64:$src) - Complexity = 3
                // Dst: (EXTRACT_SUBREG:f32 (PseudoCVT_S_L:f64 CPU64Regs:i64:$src), sub_32:i32)
              0, // EndSwitchType
/*19573*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 75,  TARGET_VAL(MipsISD::TruncIntFP),// ->19652
/*19577*/   OPC_RecordChild0, // #0 = $src
/*19578*/   OPC_Scope, 28, /*->19608*/ // 2 children in Scope
/*19580*/     OPC_CheckChild0Type, MVT::f32,
/*19582*/     OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->19595
/*19585*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19587*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TRUNC_W_S), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (MipsTruncIntFP:f32 FGR32:f32:$src) - Complexity = 3
                // Dst: (TRUNC_W_S:f32 FGR32:f32:$src)
              /*SwitchType*/ 10,  MVT::f64,// ->19607
/*19597*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19599*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TRUNC_L_S), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (MipsTruncIntFP:f64 FGR32:f32:$src) - Complexity = 3
                // Dst: (TRUNC_L_S:f64 FGR32:f32:$src)
              0, // EndSwitchType
/*19608*/   /*Scope*/ 42, /*->19651*/
/*19609*/     OPC_CheckChild0Type, MVT::f64,
/*19611*/     OPC_SwitchType /*2 cases */, 24,  MVT::f32,// ->19638
/*19614*/       OPC_Scope, 10, /*->19626*/ // 2 children in Scope
/*19616*/         OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19618*/         OPC_MorphNodeTo, TARGET_VAL(Mips::TRUNC_W_D32), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (MipsTruncIntFP:f32 AFGR64:f64:$src) - Complexity = 3
                  // Dst: (TRUNC_W_D32:f32 AFGR64:f64:$src)
/*19626*/       /*Scope*/ 10, /*->19637*/
/*19627*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19629*/         OPC_MorphNodeTo, TARGET_VAL(Mips::TRUNC_W_D64), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (MipsTruncIntFP:f32 FGR64:f64:$src) - Complexity = 3
                  // Dst: (TRUNC_W_D64:f32 FGR64:f64:$src)
/*19637*/       0, /*End of Scope*/
              /*SwitchType*/ 10,  MVT::f64,// ->19650
/*19640*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19642*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TRUNC_L_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (MipsTruncIntFP:f64 FGR64:f64:$src) - Complexity = 3
                // Dst: (TRUNC_L_D64:f64 FGR64:f64:$src)
              0, // EndSwitchType
/*19651*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::FP_ROUND),// ->19680
/*19655*/   OPC_RecordChild0, // #0 = $src
/*19656*/   OPC_Scope, 10, /*->19668*/ // 2 children in Scope
/*19658*/     OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19660*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_S_D32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fround:f32 AFGR64:f64:$src) - Complexity = 3
              // Dst: (CVT_S_D32:f32 AFGR64:f64:$src)
/*19668*/   /*Scope*/ 10, /*->19679*/
/*19669*/     OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19671*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_S_D64), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fround:f32 FGR64:f64:$src) - Complexity = 3
              // Dst: (CVT_S_D64:f32 FGR64:f64:$src)
/*19679*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::FP_EXTEND),// ->19708
/*19683*/   OPC_RecordChild0, // #0 = $src
/*19684*/   OPC_Scope, 10, /*->19696*/ // 2 children in Scope
/*19686*/     OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19688*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D32_S), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fextend:f64 FGR32:f32:$src) - Complexity = 3
              // Dst: (CVT_D32_S:f64 FGR32:f32:$src)
/*19696*/   /*Scope*/ 10, /*->19707*/
/*19697*/     OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19699*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D64_S), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fextend:f64 FGR32:f32:$src) - Complexity = 3
              // Dst: (CVT_D64_S:f64 FGR32:f32:$src)
/*19707*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 93|128,2/*349*/,  TARGET_VAL(MipsISD::SELECT_CC_DSP),// ->20061
/*19712*/   OPC_RecordChild0, // #0 = $a
/*19713*/   OPC_Scope, 43|128,1/*171*/, /*->19887*/ // 2 children in Scope
/*19716*/     OPC_CheckChild0Type, MVT::v2i16,
/*19718*/     OPC_RecordChild1, // #1 = $b
/*19719*/     OPC_RecordChild2, // #2 = $c
/*19720*/     OPC_RecordChild3, // #3 = $d
/*19721*/     OPC_MoveChild, 4,
/*19723*/     OPC_Scope, 26, /*->19751*/ // 6 children in Scope
/*19725*/       OPC_CheckCondCode, ISD::SETEQ,
/*19727*/       OPC_MoveParent,
/*19728*/       OPC_CheckType, MVT::v2i16,
/*19730*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19732*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_EQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*19741*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETEQ:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_EQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$c, ?:v2i16:$d)
/*19751*/     /*Scope*/ 26, /*->19778*/
/*19752*/       OPC_CheckCondCode, ISD::SETLT,
/*19754*/       OPC_MoveParent,
/*19755*/       OPC_CheckType, MVT::v2i16,
/*19757*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19759*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LT_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*19768*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETLT:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LT_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$c, ?:v2i16:$d)
/*19778*/     /*Scope*/ 26, /*->19805*/
/*19779*/       OPC_CheckCondCode, ISD::SETLE,
/*19781*/       OPC_MoveParent,
/*19782*/       OPC_CheckType, MVT::v2i16,
/*19784*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19786*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LE_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*19795*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETLE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LE_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$c, ?:v2i16:$d)
/*19805*/     /*Scope*/ 26, /*->19832*/
/*19806*/       OPC_CheckCondCode, ISD::SETNE,
/*19808*/       OPC_MoveParent,
/*19809*/       OPC_CheckType, MVT::v2i16,
/*19811*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19813*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_EQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*19822*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETNE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_EQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$d, ?:v2i16:$c)
/*19832*/     /*Scope*/ 26, /*->19859*/
/*19833*/       OPC_CheckCondCode, ISD::SETGE,
/*19835*/       OPC_MoveParent,
/*19836*/       OPC_CheckType, MVT::v2i16,
/*19838*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19840*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LT_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*19849*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETGE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LT_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$d, ?:v2i16:$c)
/*19859*/     /*Scope*/ 26, /*->19886*/
/*19860*/       OPC_CheckCondCode, ISD::SETGT,
/*19862*/       OPC_MoveParent,
/*19863*/       OPC_CheckType, MVT::v2i16,
/*19865*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19867*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LE_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*19876*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETGT:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LE_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$d, ?:v2i16:$c)
/*19886*/     0, /*End of Scope*/
/*19887*/   /*Scope*/ 43|128,1/*171*/, /*->20060*/
/*19889*/     OPC_CheckChild0Type, MVT::v4i8,
/*19891*/     OPC_RecordChild1, // #1 = $b
/*19892*/     OPC_RecordChild2, // #2 = $c
/*19893*/     OPC_RecordChild3, // #3 = $d
/*19894*/     OPC_MoveChild, 4,
/*19896*/     OPC_Scope, 26, /*->19924*/ // 6 children in Scope
/*19898*/       OPC_CheckCondCode, ISD::SETEQ,
/*19900*/       OPC_MoveParent,
/*19901*/       OPC_CheckType, MVT::v4i8,
/*19903*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19905*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_EQ_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*19914*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETEQ:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_EQ_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$c, ?:v4i8:$d)
/*19924*/     /*Scope*/ 26, /*->19951*/
/*19925*/       OPC_CheckCondCode, ISD::SETULT,
/*19927*/       OPC_MoveParent,
/*19928*/       OPC_CheckType, MVT::v4i8,
/*19930*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19932*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LT_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*19941*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETULT:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LT_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$c, ?:v4i8:$d)
/*19951*/     /*Scope*/ 26, /*->19978*/
/*19952*/       OPC_CheckCondCode, ISD::SETULE,
/*19954*/       OPC_MoveParent,
/*19955*/       OPC_CheckType, MVT::v4i8,
/*19957*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19959*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LE_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*19968*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETULE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LE_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$c, ?:v4i8:$d)
/*19978*/     /*Scope*/ 26, /*->20005*/
/*19979*/       OPC_CheckCondCode, ISD::SETNE,
/*19981*/       OPC_MoveParent,
/*19982*/       OPC_CheckType, MVT::v4i8,
/*19984*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19986*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_EQ_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*19995*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETNE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_EQ_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$d, ?:v4i8:$c)
/*20005*/     /*Scope*/ 26, /*->20032*/
/*20006*/       OPC_CheckCondCode, ISD::SETUGE,
/*20008*/       OPC_MoveParent,
/*20009*/       OPC_CheckType, MVT::v4i8,
/*20011*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20013*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LT_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*20022*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETUGE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LT_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$d, ?:v4i8:$c)
/*20032*/     /*Scope*/ 26, /*->20059*/
/*20033*/       OPC_CheckCondCode, ISD::SETUGT,
/*20035*/       OPC_MoveParent,
/*20036*/       OPC_CheckType, MVT::v4i8,
/*20038*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20040*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LE_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*20049*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETUGT:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LE_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$d, ?:v4i8:$c)
/*20059*/     0, /*End of Scope*/
/*20060*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 45|128,6/*813*/,  TARGET_VAL(MipsISD::SETCC_DSP),// ->20878
/*20065*/   OPC_RecordChild0, // #0 = $a
/*20066*/   OPC_Scope, 19|128,3/*403*/, /*->20472*/ // 2 children in Scope
/*20069*/     OPC_CheckChild0Type, MVT::v2i16,
/*20071*/     OPC_RecordChild1, // #1 = $b
/*20072*/     OPC_MoveChild, 2,
/*20074*/     OPC_Scope, 65, /*->20141*/ // 6 children in Scope
/*20076*/       OPC_CheckCondCode, ISD::SETEQ,
/*20078*/       OPC_MoveParent,
/*20079*/       OPC_CheckType, MVT::v2i16,
/*20081*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20083*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_EQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*20092*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20095*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20107*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*20116*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20119*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 5, 6,  // Results = #7
/*20128*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*20131*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETEQ:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_EQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32), ZERO:v2i16)
/*20141*/     /*Scope*/ 65, /*->20207*/
/*20142*/       OPC_CheckCondCode, ISD::SETLT,
/*20144*/       OPC_MoveParent,
/*20145*/       OPC_CheckType, MVT::v2i16,
/*20147*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20149*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LT_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*20158*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20161*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20173*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*20182*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20185*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 5, 6,  // Results = #7
/*20194*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*20197*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETLT:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LT_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32), ZERO:v2i16)
/*20207*/     /*Scope*/ 65, /*->20273*/
/*20208*/       OPC_CheckCondCode, ISD::SETLE,
/*20210*/       OPC_MoveParent,
/*20211*/       OPC_CheckType, MVT::v2i16,
/*20213*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20215*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LE_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*20224*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20227*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20239*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*20248*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20251*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 5, 6,  // Results = #7
/*20260*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*20263*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETLE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LE_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32), ZERO:v2i16)
/*20273*/     /*Scope*/ 65, /*->20339*/
/*20274*/       OPC_CheckCondCode, ISD::SETNE,
/*20276*/       OPC_MoveParent,
/*20277*/       OPC_CheckType, MVT::v2i16,
/*20279*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20281*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_EQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*20290*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*20293*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20296*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20308*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*20317*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20320*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 6, 7,  // Results = #8
/*20329*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETNE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_EQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ZERO:v2i16, (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32))
/*20339*/     /*Scope*/ 65, /*->20405*/
/*20340*/       OPC_CheckCondCode, ISD::SETGE,
/*20342*/       OPC_MoveParent,
/*20343*/       OPC_CheckType, MVT::v2i16,
/*20345*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20347*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LT_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*20356*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*20359*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20362*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20374*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*20383*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20386*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 6, 7,  // Results = #8
/*20395*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETGE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LT_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ZERO:v2i16, (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32))
/*20405*/     /*Scope*/ 65, /*->20471*/
/*20406*/       OPC_CheckCondCode, ISD::SETGT,
/*20408*/       OPC_MoveParent,
/*20409*/       OPC_CheckType, MVT::v2i16,
/*20411*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20413*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LE_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*20422*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*20425*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20428*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20440*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*20449*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20452*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 6, 7,  // Results = #8
/*20461*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETGT:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LE_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ZERO:v2i16, (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32))
/*20471*/     0, /*End of Scope*/
/*20472*/   /*Scope*/ 19|128,3/*403*/, /*->20877*/
/*20474*/     OPC_CheckChild0Type, MVT::v4i8,
/*20476*/     OPC_RecordChild1, // #1 = $b
/*20477*/     OPC_MoveChild, 2,
/*20479*/     OPC_Scope, 65, /*->20546*/ // 6 children in Scope
/*20481*/       OPC_CheckCondCode, ISD::SETEQ,
/*20483*/       OPC_MoveParent,
/*20484*/       OPC_CheckType, MVT::v4i8,
/*20486*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20488*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_EQ_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*20497*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20500*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20512*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*20521*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20524*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 5, 6,  // Results = #7
/*20533*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*20536*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETEQ:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_EQ_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32), ZERO:v4i8)
/*20546*/     /*Scope*/ 65, /*->20612*/
/*20547*/       OPC_CheckCondCode, ISD::SETULT,
/*20549*/       OPC_MoveParent,
/*20550*/       OPC_CheckType, MVT::v4i8,
/*20552*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20554*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LT_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*20563*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20566*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20578*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*20587*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20590*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 5, 6,  // Results = #7
/*20599*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*20602*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETULT:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LT_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32), ZERO:v4i8)
/*20612*/     /*Scope*/ 65, /*->20678*/
/*20613*/       OPC_CheckCondCode, ISD::SETULE,
/*20615*/       OPC_MoveParent,
/*20616*/       OPC_CheckType, MVT::v4i8,
/*20618*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20620*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LE_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*20629*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20632*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20644*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*20653*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20656*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 5, 6,  // Results = #7
/*20665*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*20668*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETULE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LE_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32), ZERO:v4i8)
/*20678*/     /*Scope*/ 65, /*->20744*/
/*20679*/       OPC_CheckCondCode, ISD::SETNE,
/*20681*/       OPC_MoveParent,
/*20682*/       OPC_CheckType, MVT::v4i8,
/*20684*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20686*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_EQ_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*20695*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*20698*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20701*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20713*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*20722*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20725*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 6, 7,  // Results = #8
/*20734*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETNE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_EQ_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ZERO:v4i8, (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32))
/*20744*/     /*Scope*/ 65, /*->20810*/
/*20745*/       OPC_CheckCondCode, ISD::SETUGE,
/*20747*/       OPC_MoveParent,
/*20748*/       OPC_CheckType, MVT::v4i8,
/*20750*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20752*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LT_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*20761*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*20764*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20767*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20779*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*20788*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20791*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 6, 7,  // Results = #8
/*20800*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETUGE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LT_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ZERO:v4i8, (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32))
/*20810*/     /*Scope*/ 65, /*->20876*/
/*20811*/       OPC_CheckCondCode, ISD::SETUGT,
/*20813*/       OPC_MoveParent,
/*20814*/       OPC_CheckType, MVT::v4i8,
/*20816*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20818*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LE_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*20827*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*20830*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20833*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20845*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*20854*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20857*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 6, 7,  // Results = #8
/*20866*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETUGT:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LE_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ZERO:v4i8, (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32))
/*20876*/     0, /*End of Scope*/
/*20877*/   0, /*End of Scope*/
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 20880 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 281
  // #OPC_RecordNode                     = 53
  // #OPC_RecordChild                    = 799
  // #OPC_RecordMemRef                   = 18
  // #OPC_CaptureGlueInput               = 9
  // #OPC_MoveChild                      = 206
  // #OPC_MoveParent                     = 721
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 889
  // #OPC_CheckPredicate                 = 259
  // #OPC_CheckOpcode                    = 120
  // #OPC_SwitchOpcode                   = 14
  // #OPC_CheckType                      = 415
  // #OPC_SwitchType                     = 108
  // #OPC_CheckChildType                 = 86
  // #OPC_CheckInteger                   = 119
  // #OPC_CheckCondCode                  = 230
  // #OPC_CheckValueType                 = 3
  // #OPC_CheckComplexPat                = 121
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 44
  // #OPC_EmitStringInteger              = 22
  // #OPC_EmitRegister                   = 68
  // #OPC_EmitConvertToTarget            = 144
  // #OPC_EmitMergeInputChains           = 357
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 202
  // #OPC_EmitNodeXForm                  = 32
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 896

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding());
  case 1: return (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding());
  case 2: return (Subtarget.hasDSP());
  case 3: return (Subtarget.inMips16Mode());
  case 4: return (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding());
  case 5: return (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding());
  case 6: return (Subtarget.hasFPIdx()) && (Subtarget.hasStandardEncoding());
  case 7: return (Subtarget.hasMips32r2()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding());
  case 8: return (Subtarget.hasMips64()) && (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding());
  case 9: return (Subtarget.hasStandardEncoding());
  case 10: return (Subtarget.hasDSPR2());
  case 11: return (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding());
  case 12: return (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding());
  case 13: return (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding());
  case 14: return (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding());
  case 15: return (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding());
  case 16: return (Subtarget.hasMips64r2()) && (Subtarget.hasStandardEncoding());
  case 17: return (Subtarget.hasStandardEncoding()) && (!Subtarget.hasDSP());
  case 18: return (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding());
  case 19: return (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding());
  case 20: return (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding());
  case 21: return (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding());
  case 22: return (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding());
  case 23: return (TM.getRelocationModel() == Reloc::Static) && (Subtarget.hasStandardEncoding());
  case 24: return (TM.getRelocationModel() == Reloc::PIC_) && (Subtarget.hasStandardEncoding());
  case 25: return (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding());
  case 26: return (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding());
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
  case 1: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 2: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 3: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 4: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 5: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 6: { // Predicate_sextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 7: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 8: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 9: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 10: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 11: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 12: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 13: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 14: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 15: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 16: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

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
  case 20: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 21: { // Predicate_immZExt5
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return Imm == (Imm & 0x1f);
  }
  case 22: { // Predicate_immZExt10
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<10>(Imm);
  }
  case 23: { // Predicate_immZExt4
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<4>(Imm);
  }
  case 24: { // Predicate_immZExt3
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<3>(Imm);
  }
  case 25: { // Predicate_immZExt2
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<2>(Imm);
  }
  case 26: { // Predicate_immZExt8
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<8>(Imm);
  }
  case 27: { // Predicate_immZExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  if (N->getValueType(0) == MVT::i32)
    return (uint32_t)N->getZExtValue() == (unsigned short)N->getZExtValue();
  else
    return (uint64_t)N->getZExtValue() == (unsigned short)N->getZExtValue();

  }
  case 28: { // Predicate_immSExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<16>(N->getSExtValue()); 
  }
  case 29: { // Predicate_immSExt16Plus1
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<17>(N->getSExtValue()) && isInt<16>(N->getSExtValue() + 1);

  }
  case 30: { // Predicate_immSExt8
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<8>(N->getSExtValue()); 
  }
  case 31: { // Predicate_immZExt6
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return Imm == (Imm & 0x3f);
  }
  case 32: { // Predicate_immSExt6
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isInt<6>(Imm);
  }
  case 33: { // Predicate_immLow16Zero
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  int64_t Val = N->getSExtValue();
  return isInt<32>(Val) && !(Val & 0xffff);

  }
  case 34: { // Predicate_atomic_load_add_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 35: { // Predicate_atomic_load_add_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 36: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 37: { // Predicate_atomic_load_add_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 38: { // Predicate_atomic_load_sub_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 39: { // Predicate_atomic_load_sub_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 40: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 41: { // Predicate_atomic_load_sub_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 42: { // Predicate_atomic_load_and_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 43: { // Predicate_atomic_load_and_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 44: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 45: { // Predicate_atomic_load_and_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 46: { // Predicate_atomic_load_or_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 47: { // Predicate_atomic_load_or_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 48: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 49: { // Predicate_atomic_load_or_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 50: { // Predicate_atomic_load_xor_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 51: { // Predicate_atomic_load_xor_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 52: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 53: { // Predicate_atomic_load_xor_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 54: { // Predicate_atomic_load_nand_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 55: { // Predicate_atomic_load_nand_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 56: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 57: { // Predicate_atomic_load_nand_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 58: { // Predicate_atomic_swap_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 59: { // Predicate_atomic_swap_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 60: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 61: { // Predicate_atomic_swap_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 62: { // Predicate_atomic_cmp_swap_8
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 63: { // Predicate_atomic_cmp_swap_16
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 64: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 65: { // Predicate_atomic_cmp_swap_64
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

  }
  case 66: { // Predicate_fpimm0
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);

  return N->isExactlyValue(+0.0);

  }
  case 67: { // Predicate_fpimm0neg
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
    return selectAddrRegImm(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+3);
    return selectAddr16(Parent, N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 2:
    Result.resize(NextRes+2);
    return selectIntAddr(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+2);
    return selectAddrDefault(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // LO16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return getImm(N, N->getZExtValue() & 0xFFFF);

  }
  case 1: {  // Plus1
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());
 return getImm(N, N->getSExtValue() + 1); 
  }
  case 2: {  // HI16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return getImm(N, (N->getZExtValue() >> 16) & 0xFFFF);

  }
  }
}

