/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the PPC target                                 *|
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
/*0*/     OPC_SwitchOpcode /*128 cases */, 33,  TARGET_VAL(ISD::PREFETCH),// ->37
/*4*/       OPC_RecordMemRef,
/*5*/       OPC_RecordNode,   // #0 = 'prefetch' chained node
/*6*/       OPC_RecordChild1, // #1 = $dst
/*7*/       OPC_MoveChild, 2,
/*9*/       OPC_CheckInteger, 0, 
/*11*/      OPC_CheckType, MVT::i32,
/*13*/      OPC_MoveParent,
/*14*/      OPC_MoveChild, 3,
/*16*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19*/      OPC_MoveParent,
/*20*/      OPC_MoveChild, 4,
/*22*/      OPC_CheckInteger, 1, 
/*24*/      OPC_MoveParent,
/*25*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*28*/      OPC_EmitMergeInputChains1_0,
/*29*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DCBT), 0|OPFL_Chain|OPFL_MemRefs,
                0/*#VTs*/, 2/*#Ops*/, 2, 3, 
            // Src: (prefetch xoaddr:iPTR:$dst, 0:i32, (imm:i32), 1:i32) - Complexity = 25
            // Dst: (DCBT xoaddr:iPTR:$dst)
          /*SwitchOpcode*/ 9|128,5/*649*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->690
/*41*/      OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*42*/      OPC_MoveChild, 1,
/*44*/      OPC_Scope, 17, /*->63*/ // 22 children in Scope
/*46*/        OPC_CheckInteger, 71|128,12/*1607*/, 
/*49*/        OPC_MoveParent,
/*50*/        OPC_RecordChild2, // #1 = $dst
/*51*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*54*/        OPC_EmitMergeInputChains1_0,
/*55*/        OPC_MorphNodeTo, TARGET_VAL(PPC::DCBA), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1607:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBA xoaddr:iPTR:$dst)
/*63*/      /*Scope*/ 17, /*->81*/
/*64*/        OPC_CheckInteger, 72|128,12/*1608*/, 
/*67*/        OPC_MoveParent,
/*68*/        OPC_RecordChild2, // #1 = $dst
/*69*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*72*/        OPC_EmitMergeInputChains1_0,
/*73*/        OPC_MorphNodeTo, TARGET_VAL(PPC::DCBF), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1608:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBF xoaddr:iPTR:$dst)
/*81*/      /*Scope*/ 17, /*->99*/
/*82*/        OPC_CheckInteger, 73|128,12/*1609*/, 
/*85*/        OPC_MoveParent,
/*86*/        OPC_RecordChild2, // #1 = $dst
/*87*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*90*/        OPC_EmitMergeInputChains1_0,
/*91*/        OPC_MorphNodeTo, TARGET_VAL(PPC::DCBI), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1609:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBI xoaddr:iPTR:$dst)
/*99*/      /*Scope*/ 17, /*->117*/
/*100*/       OPC_CheckInteger, 74|128,12/*1610*/, 
/*103*/       OPC_MoveParent,
/*104*/       OPC_RecordChild2, // #1 = $dst
/*105*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*108*/       OPC_EmitMergeInputChains1_0,
/*109*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBST), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1610:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBST xoaddr:iPTR:$dst)
/*117*/     /*Scope*/ 17, /*->135*/
/*118*/       OPC_CheckInteger, 75|128,12/*1611*/, 
/*121*/       OPC_MoveParent,
/*122*/       OPC_RecordChild2, // #1 = $dst
/*123*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*126*/       OPC_EmitMergeInputChains1_0,
/*127*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBT), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1611:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBT xoaddr:iPTR:$dst)
/*135*/     /*Scope*/ 17, /*->153*/
/*136*/       OPC_CheckInteger, 76|128,12/*1612*/, 
/*139*/       OPC_MoveParent,
/*140*/       OPC_RecordChild2, // #1 = $dst
/*141*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*144*/       OPC_EmitMergeInputChains1_0,
/*145*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBTST), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1612:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBTST xoaddr:iPTR:$dst)
/*153*/     /*Scope*/ 17, /*->171*/
/*154*/       OPC_CheckInteger, 77|128,12/*1613*/, 
/*157*/       OPC_MoveParent,
/*158*/       OPC_RecordChild2, // #1 = $dst
/*159*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*162*/       OPC_EmitMergeInputChains1_0,
/*163*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBZ), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1613:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBZ xoaddr:iPTR:$dst)
/*171*/     /*Scope*/ 17, /*->189*/
/*172*/       OPC_CheckInteger, 78|128,12/*1614*/, 
/*175*/       OPC_MoveParent,
/*176*/       OPC_RecordChild2, // #1 = $dst
/*177*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*180*/       OPC_EmitMergeInputChains1_0,
/*181*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBZL), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1614:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBZL xoaddr:iPTR:$dst)
/*189*/     /*Scope*/ 21, /*->211*/
/*190*/       OPC_CheckInteger, 67|128,11/*1475*/, 
/*193*/       OPC_MoveParent,
/*194*/       OPC_RecordChild2, // #1 = $rS
/*195*/       OPC_RecordChild3, // #2 = $dst
/*196*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*198*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*201*/       OPC_EmitMergeInputChains1_0,
/*202*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEBX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1475:iPTR, v16i8:v16i8:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEBX v16i8:v16i8:$rS, xoaddr:iPTR:$dst)
/*211*/     /*Scope*/ 21, /*->233*/
/*212*/       OPC_CheckInteger, 68|128,11/*1476*/, 
/*215*/       OPC_MoveParent,
/*216*/       OPC_RecordChild2, // #1 = $rS
/*217*/       OPC_RecordChild3, // #2 = $dst
/*218*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*220*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*223*/       OPC_EmitMergeInputChains1_0,
/*224*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEHX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1476:iPTR, v8i16:v8i16:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEHX v8i16:v8i16:$rS, xoaddr:iPTR:$dst)
/*233*/     /*Scope*/ 21, /*->255*/
/*234*/       OPC_CheckInteger, 69|128,11/*1477*/, 
/*237*/       OPC_MoveParent,
/*238*/       OPC_RecordChild2, // #1 = $rS
/*239*/       OPC_RecordChild3, // #2 = $dst
/*240*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*242*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*245*/       OPC_EmitMergeInputChains1_0,
/*246*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEWX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1477:iPTR, v4i32:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEWX v4i32:v4i32:$rS, xoaddr:iPTR:$dst)
/*255*/     /*Scope*/ 21, /*->277*/
/*256*/       OPC_CheckInteger, 70|128,11/*1478*/, 
/*259*/       OPC_MoveParent,
/*260*/       OPC_RecordChild2, // #1 = $rS
/*261*/       OPC_RecordChild3, // #2 = $dst
/*262*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*264*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*267*/       OPC_EmitMergeInputChains1_0,
/*268*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1478:iPTR, v4i32:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVX v4i32:v4i32:$rS, xoaddr:iPTR:$dst)
/*277*/     /*Scope*/ 21, /*->299*/
/*278*/       OPC_CheckInteger, 71|128,11/*1479*/, 
/*281*/       OPC_MoveParent,
/*282*/       OPC_RecordChild2, // #1 = $rS
/*283*/       OPC_RecordChild3, // #2 = $dst
/*284*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*286*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*289*/       OPC_EmitMergeInputChains1_0,
/*290*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVXL), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1479:iPTR, v4i32:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVXL v4i32:v4i32:$rS, xoaddr:iPTR:$dst)
/*299*/     /*Scope*/ 35, /*->335*/
/*300*/       OPC_CheckInteger, 52|128,11/*1460*/, 
/*303*/       OPC_MoveParent,
/*304*/       OPC_RecordChild2, // #1 = $STRM
/*305*/       OPC_MoveChild, 2,
/*307*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*310*/       OPC_MoveParent,
/*311*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*313*/       OPC_EmitMergeInputChains1_0,
/*314*/       OPC_EmitInteger, MVT::i32, 0, 
/*317*/       OPC_EmitConvertToTarget, 1,
/*319*/       OPC_EmitInteger, MVT::i32, 0, 
/*322*/       OPC_EmitInteger, MVT::i32, 0, 
/*325*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DSS), 0|OPFL_Chain,
                  0/*#VTs*/, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (intrinsic_void 1460:iPTR, (imm:i32):$STRM) - Complexity = 11
              // Dst: (DSS 0:i32, (imm:i32):$STRM, 0:i32, 0:i32)
/*335*/     /*Scope*/ 65, /*->401*/
/*336*/       OPC_CheckInteger, 54|128,11/*1462*/, 
/*339*/       OPC_MoveParent,
/*340*/       OPC_RecordChild2, // #1 = $rA
/*341*/       OPC_Scope, 28, /*->371*/ // 2 children in Scope
/*343*/         OPC_CheckChild2Type, MVT::i32,
/*345*/         OPC_RecordChild3, // #2 = $rB
/*346*/         OPC_RecordChild4, // #3 = $STRM
/*347*/         OPC_MoveChild, 4,
/*349*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*352*/         OPC_MoveParent,
/*353*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*355*/         OPC_EmitMergeInputChains1_0,
/*356*/         OPC_EmitInteger, MVT::i32, 0, 
/*359*/         OPC_EmitConvertToTarget, 3,
/*361*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DST), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1462:iPTR, i32:i32:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DST 0:i32, (imm:i32):$STRM, ?:i32:$rA, ?:i32:$rB)
/*371*/       /*Scope*/ 28, /*->400*/
/*372*/         OPC_CheckChild2Type, MVT::i64,
/*374*/         OPC_RecordChild3, // #2 = $rB
/*375*/         OPC_RecordChild4, // #3 = $STRM
/*376*/         OPC_MoveChild, 4,
/*378*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*381*/         OPC_MoveParent,
/*382*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*384*/         OPC_EmitMergeInputChains1_0,
/*385*/         OPC_EmitInteger, MVT::i32, 0, 
/*388*/         OPC_EmitConvertToTarget, 3,
/*390*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DST64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1462:iPTR, i64:i64:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DST64 0:i32, (imm:i32):$STRM, ?:i64:$rA, ?:i32:$rB)
/*400*/       0, /*End of Scope*/
/*401*/     /*Scope*/ 65, /*->467*/
/*402*/       OPC_CheckInteger, 57|128,11/*1465*/, 
/*405*/       OPC_MoveParent,
/*406*/       OPC_RecordChild2, // #1 = $rA
/*407*/       OPC_Scope, 28, /*->437*/ // 2 children in Scope
/*409*/         OPC_CheckChild2Type, MVT::i32,
/*411*/         OPC_RecordChild3, // #2 = $rB
/*412*/         OPC_RecordChild4, // #3 = $STRM
/*413*/         OPC_MoveChild, 4,
/*415*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*418*/         OPC_MoveParent,
/*419*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*421*/         OPC_EmitMergeInputChains1_0,
/*422*/         OPC_EmitInteger, MVT::i32, 1, 
/*425*/         OPC_EmitConvertToTarget, 3,
/*427*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTT), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1465:iPTR, i32:i32:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTT 1:i32, (imm:i32):$STRM, ?:i32:$rA, ?:i32:$rB)
/*437*/       /*Scope*/ 28, /*->466*/
/*438*/         OPC_CheckChild2Type, MVT::i64,
/*440*/         OPC_RecordChild3, // #2 = $rB
/*441*/         OPC_RecordChild4, // #3 = $STRM
/*442*/         OPC_MoveChild, 4,
/*444*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*447*/         OPC_MoveParent,
/*448*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*450*/         OPC_EmitMergeInputChains1_0,
/*451*/         OPC_EmitInteger, MVT::i32, 1, 
/*454*/         OPC_EmitConvertToTarget, 3,
/*456*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTT64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1465:iPTR, i64:i64:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTT64 1:i32, (imm:i32):$STRM, ?:i64:$rA, ?:i32:$rB)
/*466*/       0, /*End of Scope*/
/*467*/     /*Scope*/ 65, /*->533*/
/*468*/       OPC_CheckInteger, 55|128,11/*1463*/, 
/*471*/       OPC_MoveParent,
/*472*/       OPC_RecordChild2, // #1 = $rA
/*473*/       OPC_Scope, 28, /*->503*/ // 2 children in Scope
/*475*/         OPC_CheckChild2Type, MVT::i32,
/*477*/         OPC_RecordChild3, // #2 = $rB
/*478*/         OPC_RecordChild4, // #3 = $STRM
/*479*/         OPC_MoveChild, 4,
/*481*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*484*/         OPC_MoveParent,
/*485*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*487*/         OPC_EmitMergeInputChains1_0,
/*488*/         OPC_EmitInteger, MVT::i32, 0, 
/*491*/         OPC_EmitConvertToTarget, 3,
/*493*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTST), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1463:iPTR, i32:i32:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTST 0:i32, (imm:i32):$STRM, ?:i32:$rA, ?:i32:$rB)
/*503*/       /*Scope*/ 28, /*->532*/
/*504*/         OPC_CheckChild2Type, MVT::i64,
/*506*/         OPC_RecordChild3, // #2 = $rB
/*507*/         OPC_RecordChild4, // #3 = $STRM
/*508*/         OPC_MoveChild, 4,
/*510*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*513*/         OPC_MoveParent,
/*514*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*516*/         OPC_EmitMergeInputChains1_0,
/*517*/         OPC_EmitInteger, MVT::i32, 0, 
/*520*/         OPC_EmitConvertToTarget, 3,
/*522*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTST64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1463:iPTR, i64:i64:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTST64 0:i32, (imm:i32):$STRM, ?:i64:$rA, ?:i32:$rB)
/*532*/       0, /*End of Scope*/
/*533*/     /*Scope*/ 65, /*->599*/
/*534*/       OPC_CheckInteger, 56|128,11/*1464*/, 
/*537*/       OPC_MoveParent,
/*538*/       OPC_RecordChild2, // #1 = $rA
/*539*/       OPC_Scope, 28, /*->569*/ // 2 children in Scope
/*541*/         OPC_CheckChild2Type, MVT::i32,
/*543*/         OPC_RecordChild3, // #2 = $rB
/*544*/         OPC_RecordChild4, // #3 = $STRM
/*545*/         OPC_MoveChild, 4,
/*547*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*550*/         OPC_MoveParent,
/*551*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*553*/         OPC_EmitMergeInputChains1_0,
/*554*/         OPC_EmitInteger, MVT::i32, 1, 
/*557*/         OPC_EmitConvertToTarget, 3,
/*559*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTSTT), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1464:iPTR, i32:i32:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTSTT 1:i32, (imm:i32):$STRM, ?:i32:$rA, ?:i32:$rB)
/*569*/       /*Scope*/ 28, /*->598*/
/*570*/         OPC_CheckChild2Type, MVT::i64,
/*572*/         OPC_RecordChild3, // #2 = $rB
/*573*/         OPC_RecordChild4, // #3 = $STRM
/*574*/         OPC_MoveChild, 4,
/*576*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*579*/         OPC_MoveParent,
/*580*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*582*/         OPC_EmitMergeInputChains1_0,
/*583*/         OPC_EmitInteger, MVT::i32, 1, 
/*586*/         OPC_EmitConvertToTarget, 3,
/*588*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTSTT64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1464:iPTR, i64:i64:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTSTT64 1:i32, (imm:i32):$STRM, ?:i64:$rA, ?:i32:$rB)
/*598*/       0, /*End of Scope*/
/*599*/     /*Scope*/ 11, /*->611*/
/*600*/       OPC_CheckInteger, 81|128,12/*1617*/, 
/*603*/       OPC_MoveParent,
/*604*/       OPC_EmitMergeInputChains1_0,
/*605*/       OPC_MorphNodeTo, TARGET_VAL(PPC::SYNC), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (intrinsic_void 1617:iPTR) - Complexity = 8
              // Dst: (SYNC)
/*611*/     /*Scope*/ 31, /*->643*/
/*612*/       OPC_CheckInteger, 80|128,12/*1616*/, 
/*615*/       OPC_MoveParent,
/*616*/       OPC_RecordChild2, // #1 = $rS
/*617*/       OPC_Scope, 11, /*->630*/ // 2 children in Scope
/*619*/         OPC_CheckChild2Type, MVT::i32,
/*621*/         OPC_EmitMergeInputChains1_0,
/*622*/         OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTRloop), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 1616:iPTR, i32:i32:$rS) - Complexity = 8
                // Dst: (MTCTRloop:i32 i32:i32:$rS)
/*630*/       /*Scope*/ 11, /*->642*/
/*631*/         OPC_CheckChild2Type, MVT::i64,
/*633*/         OPC_EmitMergeInputChains1_0,
/*634*/         OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTR8loop), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 1616:iPTR, i64:i64:$rS) - Complexity = 8
                // Dst: (MTCTR8loop:i64 i64:i64:$rS)
/*642*/       0, /*End of Scope*/
/*643*/     /*Scope*/ 15, /*->659*/
/*644*/       OPC_CheckInteger, 66|128,11/*1474*/, 
/*647*/       OPC_MoveParent,
/*648*/       OPC_RecordChild2, // #1 = $vB
/*649*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*651*/       OPC_EmitMergeInputChains1_0,
/*652*/       OPC_MorphNodeTo, TARGET_VAL(PPC::MTVSCR), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 1474:iPTR, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (MTVSCR v4i32:v4i32:$vB)
/*659*/     /*Scope*/ 29, /*->689*/
/*660*/       OPC_CheckInteger, 53|128,11/*1461*/, 
/*663*/       OPC_MoveParent,
/*664*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*666*/       OPC_EmitMergeInputChains1_0,
/*667*/       OPC_EmitInteger, MVT::i32, 1, 
/*670*/       OPC_EmitInteger, MVT::i32, 0, 
/*673*/       OPC_EmitInteger, MVT::i32, 0, 
/*676*/       OPC_EmitInteger, MVT::i32, 0, 
/*679*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DSSALL), 0|OPFL_Chain,
                  0/*#VTs*/, 4/*#Ops*/, 1, 2, 3, 4, 
              // Src: (intrinsic_void 1461:iPTR) - Complexity = 8
              // Dst: (DSSALL 1:i32, 0:i32, 0:i32, 0:i32)
/*689*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 83|128,4/*595*/,  TARGET_VAL(ISD::ADD),// ->1289
/*694*/     OPC_Scope, 49|128,1/*177*/, /*->874*/ // 3 children in Scope
/*697*/       OPC_RecordChild0, // #0 = $rA
/*698*/       OPC_MoveChild, 1,
/*700*/       OPC_SwitchOpcode /*2 cases */, 24,  TARGET_VAL(PPCISD::Lo),// ->728
/*704*/         OPC_RecordChild0, // #1 = $sym
/*705*/         OPC_MoveChild, 0,
/*707*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*710*/         OPC_MoveParent,
/*711*/         OPC_MoveChild, 1,
/*713*/         OPC_CheckInteger, 0, 
/*715*/         OPC_MoveParent,
/*716*/         OPC_MoveParent,
/*717*/         OPC_CheckType, MVT::i32,
/*719*/         OPC_MorphNodeTo, TARGET_VAL(PPC::LA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 i32:i32:$rA, (PPClo:i32 (tglobaladdr:i32):$sym, 0:i32)) - Complexity = 14
                // Dst: (LA:i32 i32:i32:$rA, (tglobaladdr:i32):$sym)
              /*SwitchOpcode*/ 13|128,1/*141*/,  TARGET_VAL(PPCISD::Hi),// ->873
/*732*/         OPC_RecordChild0, // #1 = $g
/*733*/         OPC_MoveChild, 0,
/*735*/         OPC_SwitchOpcode /*4 cases */, 31,  TARGET_VAL(ISD::TargetGlobalAddress),// ->770
/*739*/           OPC_MoveParent,
/*740*/           OPC_MoveChild, 1,
/*742*/           OPC_CheckInteger, 0, 
/*744*/           OPC_MoveParent,
/*745*/           OPC_MoveParent,
/*746*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->758
/*749*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 i32:i32:$in, (PPChi:i32 (tglobaladdr:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tglobaladdr:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->769
/*760*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 i64:i64:$in, (PPChi:i64 (tglobaladdr:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tglobaladdr:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetConstantPool),// ->804
/*773*/           OPC_MoveParent,
/*774*/           OPC_MoveChild, 1,
/*776*/           OPC_CheckInteger, 0, 
/*778*/           OPC_MoveParent,
/*779*/           OPC_MoveParent,
/*780*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->792
/*783*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 i32:i32:$in, (PPChi:i32 (tconstpool:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tconstpool:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->803
/*794*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 i64:i64:$in, (PPChi:i64 (tconstpool:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tconstpool:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetJumpTable),// ->838
/*807*/           OPC_MoveParent,
/*808*/           OPC_MoveChild, 1,
/*810*/           OPC_CheckInteger, 0, 
/*812*/           OPC_MoveParent,
/*813*/           OPC_MoveParent,
/*814*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->826
/*817*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 i32:i32:$in, (PPChi:i32 (tjumptable:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tjumptable:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->837
/*828*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 i64:i64:$in, (PPChi:i64 (tjumptable:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tjumptable:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetBlockAddress),// ->872
/*841*/           OPC_MoveParent,
/*842*/           OPC_MoveChild, 1,
/*844*/           OPC_CheckInteger, 0, 
/*846*/           OPC_MoveParent,
/*847*/           OPC_MoveParent,
/*848*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->860
/*851*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 i32:i32:$in, (PPChi:i32 (tblockaddress:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tblockaddress:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->871
/*862*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 i64:i64:$in, (PPChi:i64 (tblockaddress:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tblockaddress:i64):$g)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*874*/     /*Scope*/ 53|128,1/*181*/, /*->1057*/
/*876*/       OPC_MoveChild, 0,
/*878*/       OPC_SwitchOpcode /*2 cases */, 25,  TARGET_VAL(PPCISD::Lo),// ->907
/*882*/         OPC_RecordChild0, // #0 = $sym
/*883*/         OPC_MoveChild, 0,
/*885*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*888*/         OPC_MoveParent,
/*889*/         OPC_MoveChild, 1,
/*891*/         OPC_CheckInteger, 0, 
/*893*/         OPC_MoveParent,
/*894*/         OPC_MoveParent,
/*895*/         OPC_RecordChild1, // #1 = $rA
/*896*/         OPC_CheckType, MVT::i32,
/*898*/         OPC_MorphNodeTo, TARGET_VAL(PPC::LA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i32 (PPClo:i32 (tglobaladdr:i32):$sym, 0:i32), i32:i32:$rA) - Complexity = 14
                // Dst: (LA:i32 i32:i32:$rA, (tglobaladdr:i32):$sym)
              /*SwitchOpcode*/ 17|128,1/*145*/,  TARGET_VAL(PPCISD::Hi),// ->1056
/*911*/         OPC_RecordChild0, // #0 = $g
/*912*/         OPC_MoveChild, 0,
/*914*/         OPC_SwitchOpcode /*4 cases */, 32,  TARGET_VAL(ISD::TargetGlobalAddress),// ->950
/*918*/           OPC_MoveParent,
/*919*/           OPC_MoveChild, 1,
/*921*/           OPC_CheckInteger, 0, 
/*923*/           OPC_MoveParent,
/*924*/           OPC_MoveParent,
/*925*/           OPC_RecordChild1, // #1 = $in
/*926*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->938
/*929*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tglobaladdr:i64):$g, 0:i64), i64:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tglobaladdr:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->949
/*940*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tglobaladdr:i32):$g, 0:i32), i32:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tglobaladdr:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetConstantPool),// ->985
/*953*/           OPC_MoveParent,
/*954*/           OPC_MoveChild, 1,
/*956*/           OPC_CheckInteger, 0, 
/*958*/           OPC_MoveParent,
/*959*/           OPC_MoveParent,
/*960*/           OPC_RecordChild1, // #1 = $in
/*961*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->973
/*964*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tconstpool:i64):$g, 0:i64), i64:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tconstpool:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->984
/*975*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tconstpool:i32):$g, 0:i32), i32:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tconstpool:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetJumpTable),// ->1020
/*988*/           OPC_MoveParent,
/*989*/           OPC_MoveChild, 1,
/*991*/           OPC_CheckInteger, 0, 
/*993*/           OPC_MoveParent,
/*994*/           OPC_MoveParent,
/*995*/           OPC_RecordChild1, // #1 = $in
/*996*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->1008
/*999*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tjumptable:i64):$g, 0:i64), i64:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tjumptable:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->1019
/*1010*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tjumptable:i32):$g, 0:i32), i32:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tjumptable:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetBlockAddress),// ->1055
/*1023*/          OPC_MoveParent,
/*1024*/          OPC_MoveChild, 1,
/*1026*/          OPC_CheckInteger, 0, 
/*1028*/          OPC_MoveParent,
/*1029*/          OPC_MoveParent,
/*1030*/          OPC_RecordChild1, // #1 = $in
/*1031*/          OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->1043
/*1034*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tblockaddress:i64):$g, 0:i64), i64:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tblockaddress:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->1054
/*1045*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tblockaddress:i32):$g, 0:i32), i32:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tblockaddress:i32):$g)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*1057*/    /*Scope*/ 101|128,1/*229*/, /*->1288*/
/*1059*/      OPC_RecordChild0, // #0 = $rA
/*1060*/      OPC_Scope, 99, /*->1161*/ // 3 children in Scope
/*1062*/        OPC_RecordChild1, // #1 = $imm
/*1063*/        OPC_MoveChild, 1,
/*1065*/        OPC_SwitchOpcode /*2 cases */, 76,  TARGET_VAL(ISD::Constant),// ->1145
/*1069*/          OPC_Scope, 16, /*->1087*/ // 4 children in Scope
/*1071*/            OPC_CheckPredicate, 0, // Predicate_imm32SExt16
/*1073*/            OPC_MoveParent,
/*1074*/            OPC_CheckType, MVT::i32,
/*1076*/            OPC_EmitConvertToTarget, 1,
/*1078*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i32 i32:i32:$rA, (imm:i32)<<P:Predicate_imm32SExt16>>:$imm) - Complexity = 7
                    // Dst: (ADDI:i32 i32:i32:$rA, (imm:i32):$imm)
/*1087*/          /*Scope*/ 19, /*->1107*/
/*1088*/            OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*1090*/            OPC_MoveParent,
/*1091*/            OPC_CheckType, MVT::i32,
/*1093*/            OPC_EmitConvertToTarget, 1,
/*1095*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*1098*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (add:i32 i32:i32:$rA, (imm:i32)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm) - Complexity = 7
                    // Dst: (ADDIS:i32 i32:i32:$rA, (HI16:i32 (imm:i32):$imm))
/*1107*/          /*Scope*/ 16, /*->1124*/
/*1108*/            OPC_CheckPredicate, 2, // Predicate_imm64SExt16
/*1110*/            OPC_MoveParent,
/*1111*/            OPC_CheckType, MVT::i64,
/*1113*/            OPC_EmitConvertToTarget, 1,
/*1115*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i64 i64:i64:$rA, (imm:i64)<<P:Predicate_imm64SExt16>>:$imm) - Complexity = 7
                    // Dst: (ADDI8:i64 i64:i64:$rA, (imm:i64):$imm)
/*1124*/          /*Scope*/ 19, /*->1144*/
/*1125*/            OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*1127*/            OPC_MoveParent,
/*1128*/            OPC_CheckType, MVT::i64,
/*1130*/            OPC_EmitConvertToTarget, 1,
/*1132*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*1135*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (add:i64 i64:i64:$rA, (imm:i64)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm) - Complexity = 7
                    // Dst: (ADDIS8:i64 i64:i64:$rA, (HI16:i64 (imm:i64):$imm))
/*1144*/          0, /*End of Scope*/
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->1160
/*1148*/          OPC_MoveParent,
/*1149*/          OPC_CheckType, MVT::i64,
/*1151*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8TLS), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 i64:i64:$rA, (tglobaltlsaddr:i64):$rB) - Complexity = 6
                  // Dst: (ADD8TLS:i64 i64:i64:$rA, (tglobaltlsaddr:i64):$rB)
                0, // EndSwitchOpcode
/*1161*/      /*Scope*/ 18, /*->1180*/
/*1162*/        OPC_MoveChild, 0,
/*1164*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*1167*/        OPC_MoveParent,
/*1168*/        OPC_RecordChild1, // #1 = $rA
/*1169*/        OPC_CheckType, MVT::i64,
/*1171*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8TLS), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (add:i64 (tglobaltlsaddr:i64):$rB, i64:i64:$rA) - Complexity = 6
                // Dst: (ADD8TLS:i64 i64:i64:$rA, (tglobaltlsaddr:i64):$rB)
/*1180*/      /*Scope*/ 106, /*->1287*/
/*1181*/        OPC_RecordChild1, // #1 = $imm
/*1182*/        OPC_Scope, 36, /*->1220*/ // 6 children in Scope
/*1184*/          OPC_MoveChild, 1,
/*1186*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1189*/          OPC_MoveParent,
/*1190*/          OPC_CheckType, MVT::i32,
/*1192*/          OPC_EmitConvertToTarget, 1,
/*1194*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*1197*/          OPC_EmitNode, TARGET_VAL(PPC::ADDI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*1206*/          OPC_EmitConvertToTarget, 1,
/*1208*/          OPC_EmitNodeXForm, 2, 5, // HA16
/*1211*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                  // Src: (add:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                  // Dst: (ADDIS:i32 (ADDI:i32 ?:i32:$in, (LO16:i32 (imm:i32):$imm)), (HA16:i32 (imm:i32):$imm))
/*1220*/        /*Scope*/ 11, /*->1232*/
/*1221*/          OPC_CheckType, MVT::i32,
/*1223*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADD4), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
                  // Dst: (ADD4:i32 i32:i32:$rA, i32:i32:$rB)
/*1232*/        /*Scope*/ 11, /*->1244*/
/*1233*/          OPC_CheckType, MVT::i64,
/*1235*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
                  // Dst: (ADD8:i64 i64:i64:$rA, i64:i64:$rB)
/*1244*/        /*Scope*/ 13, /*->1258*/
/*1245*/          OPC_CheckType, MVT::v16i8,
/*1247*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*1249*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUBM), 0,
                      1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                  // Src: (add:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
                  // Dst: (VADDUBM:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*1258*/        /*Scope*/ 13, /*->1272*/
/*1259*/          OPC_CheckType, MVT::v8i16,
/*1261*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*1263*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUHM), 0,
                      1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                  // Src: (add:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
                  // Dst: (VADDUHM:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*1272*/        /*Scope*/ 13, /*->1286*/
/*1273*/          OPC_CheckType, MVT::v4i32,
/*1275*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*1277*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUWM), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
                  // Dst: (VADDUWM:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*1286*/        0, /*End of Scope*/
/*1287*/      0, /*End of Scope*/
/*1288*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 117|128,6/*885*/,  TARGET_VAL(ISD::LOAD),// ->2178
/*1293*/    OPC_RecordMemRef,
/*1294*/    OPC_RecordNode,   // #0 = 'ld' chained node
/*1295*/    OPC_RecordChild1, // #1 = $src
/*1296*/    OPC_CheckPredicate, 3, // Predicate_unindexedload
/*1298*/    OPC_Scope, 19, /*->1319*/ // 19 children in Scope
/*1300*/      OPC_CheckPredicate, 4, // Predicate_zextload
/*1302*/      OPC_CheckPredicate, 5, // Predicate_zextloadi8
/*1304*/      OPC_CheckType, MVT::i32,
/*1306*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1309*/      OPC_EmitMergeInputChains1_0,
/*1310*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
              // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1319*/    /*Scope*/ 19, /*->1339*/
/*1320*/      OPC_CheckPredicate, 6, // Predicate_sextload
/*1322*/      OPC_CheckPredicate, 7, // Predicate_sextloadi16
/*1324*/      OPC_CheckType, MVT::i32,
/*1326*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1329*/      OPC_EmitMergeInputChains1_0,
/*1330*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHA), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
              // Dst: (LHA:i32 iaddr:iPTR:$src)
/*1339*/    /*Scope*/ 19, /*->1359*/
/*1340*/      OPC_CheckPredicate, 4, // Predicate_zextload
/*1342*/      OPC_CheckPredicate, 8, // Predicate_zextloadi16
/*1344*/      OPC_CheckType, MVT::i32,
/*1346*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1349*/      OPC_EmitMergeInputChains1_0,
/*1350*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
              // Dst: (LHZ:i32 iaddr:iPTR:$src)
/*1359*/    /*Scope*/ 17, /*->1377*/
/*1360*/      OPC_CheckPredicate, 9, // Predicate_load
/*1362*/      OPC_CheckType, MVT::i32,
/*1364*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1367*/      OPC_EmitMergeInputChains1_0,
/*1368*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LWZ:i32 iaddr:iPTR:$src)
/*1377*/    /*Scope*/ 19, /*->1397*/
/*1378*/      OPC_CheckPredicate, 4, // Predicate_zextload
/*1380*/      OPC_CheckPredicate, 5, // Predicate_zextloadi8
/*1382*/      OPC_CheckType, MVT::i32,
/*1384*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1387*/      OPC_EmitMergeInputChains1_0,
/*1388*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
              // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1397*/    /*Scope*/ 19, /*->1417*/
/*1398*/      OPC_CheckPredicate, 6, // Predicate_sextload
/*1400*/      OPC_CheckPredicate, 7, // Predicate_sextloadi16
/*1402*/      OPC_CheckType, MVT::i32,
/*1404*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1407*/      OPC_EmitMergeInputChains1_0,
/*1408*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHAX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
              // Dst: (LHAX:i32 xaddr:iPTR:$src)
/*1417*/    /*Scope*/ 19, /*->1437*/
/*1418*/      OPC_CheckPredicate, 4, // Predicate_zextload
/*1420*/      OPC_CheckPredicate, 8, // Predicate_zextloadi16
/*1422*/      OPC_CheckType, MVT::i32,
/*1424*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1427*/      OPC_EmitMergeInputChains1_0,
/*1428*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
              // Dst: (LHZX:i32 xaddr:iPTR:$src)
/*1437*/    /*Scope*/ 17, /*->1455*/
/*1438*/      OPC_CheckPredicate, 9, // Predicate_load
/*1440*/      OPC_CheckType, MVT::i32,
/*1442*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1445*/      OPC_EmitMergeInputChains1_0,
/*1446*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LWZX:i32 xaddr:iPTR:$src)
/*1455*/    /*Scope*/ 36, /*->1492*/
/*1456*/      OPC_CheckPredicate, 4, // Predicate_zextload
/*1458*/      OPC_CheckPredicate, 10, // Predicate_zextloadi1
/*1460*/      OPC_CheckType, MVT::i32,
/*1462*/      OPC_Scope, 13, /*->1477*/ // 2 children in Scope
/*1464*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1467*/        OPC_EmitMergeInputChains1_0,
/*1468*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1477*/      /*Scope*/ 13, /*->1491*/
/*1478*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1481*/        OPC_EmitMergeInputChains1_0,
/*1482*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1491*/      0, /*End of Scope*/
/*1492*/    /*Scope*/ 105, /*->1598*/
/*1493*/      OPC_CheckPredicate, 11, // Predicate_extload
/*1495*/      OPC_CheckType, MVT::i32,
/*1497*/      OPC_Scope, 32, /*->1531*/ // 3 children in Scope
/*1499*/        OPC_CheckPredicate, 12, // Predicate_extloadi1
/*1501*/        OPC_Scope, 13, /*->1516*/ // 2 children in Scope
/*1503*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1506*/          OPC_EmitMergeInputChains1_0,
/*1507*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1516*/        /*Scope*/ 13, /*->1530*/
/*1517*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1520*/          OPC_EmitMergeInputChains1_0,
/*1521*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1530*/        0, /*End of Scope*/
/*1531*/      /*Scope*/ 32, /*->1564*/
/*1532*/        OPC_CheckPredicate, 13, // Predicate_extloadi8
/*1534*/        OPC_Scope, 13, /*->1549*/ // 2 children in Scope
/*1536*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1539*/          OPC_EmitMergeInputChains1_0,
/*1540*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1549*/        /*Scope*/ 13, /*->1563*/
/*1550*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1553*/          OPC_EmitMergeInputChains1_0,
/*1554*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1563*/        0, /*End of Scope*/
/*1564*/      /*Scope*/ 32, /*->1597*/
/*1565*/        OPC_CheckPredicate, 14, // Predicate_extloadi16
/*1567*/        OPC_Scope, 13, /*->1582*/ // 2 children in Scope
/*1569*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1572*/          OPC_EmitMergeInputChains1_0,
/*1573*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZ:i32 iaddr:iPTR:$src)
/*1582*/        /*Scope*/ 13, /*->1596*/
/*1583*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1586*/          OPC_EmitMergeInputChains1_0,
/*1587*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZX:i32 xaddr:iPTR:$src)
/*1596*/        0, /*End of Scope*/
/*1597*/      0, /*End of Scope*/
/*1598*/    /*Scope*/ 72, /*->1671*/
/*1599*/      OPC_CheckPredicate, 6, // Predicate_sextload
/*1601*/      OPC_CheckType, MVT::i64,
/*1603*/      OPC_Scope, 15, /*->1620*/ // 4 children in Scope
/*1605*/        OPC_CheckPredicate, 7, // Predicate_sextloadi16
/*1607*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1610*/        OPC_EmitMergeInputChains1_0,
/*1611*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHA8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LHA8:i64 iaddr:iPTR:$src)
/*1620*/      /*Scope*/ 17, /*->1638*/
/*1621*/        OPC_CheckPredicate, 15, // Predicate_sextloadi32
/*1623*/        OPC_CheckPredicate, 16, // Predicate_aligned4sextloadi32
/*1625*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmX4:$src #2 #3
/*1628*/        OPC_EmitMergeInputChains1_0,
/*1629*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWA), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ixaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>><<P:Predicate_aligned4sextloadi32>> - Complexity = 13
                // Dst: (LWA:i64 ixaddr:iPTR:$src)
/*1638*/      /*Scope*/ 15, /*->1654*/
/*1639*/        OPC_CheckPredicate, 7, // Predicate_sextloadi16
/*1641*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1644*/        OPC_EmitMergeInputChains1_0,
/*1645*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHAX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LHAX8:i64 xaddr:iPTR:$src)
/*1654*/      /*Scope*/ 15, /*->1670*/
/*1655*/        OPC_CheckPredicate, 15, // Predicate_sextloadi32
/*1657*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1660*/        OPC_EmitMergeInputChains1_0,
/*1661*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWAX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                // Dst: (LWAX:i64 xaddr:iPTR:$src)
/*1670*/      0, /*End of Scope*/
/*1671*/    /*Scope*/ 102, /*->1774*/
/*1672*/      OPC_CheckPredicate, 4, // Predicate_zextload
/*1674*/      OPC_CheckType, MVT::i64,
/*1676*/      OPC_Scope, 15, /*->1693*/ // 6 children in Scope
/*1678*/        OPC_CheckPredicate, 5, // Predicate_zextloadi8
/*1680*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1683*/        OPC_EmitMergeInputChains1_0,
/*1684*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1693*/      /*Scope*/ 15, /*->1709*/
/*1694*/        OPC_CheckPredicate, 8, // Predicate_zextloadi16
/*1696*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1699*/        OPC_EmitMergeInputChains1_0,
/*1700*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LHZ8:i64 iaddr:iPTR:$src)
/*1709*/      /*Scope*/ 15, /*->1725*/
/*1710*/        OPC_CheckPredicate, 17, // Predicate_zextloadi32
/*1712*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1715*/        OPC_EmitMergeInputChains1_0,
/*1716*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LWZ8:i64 iaddr:iPTR:$src)
/*1725*/      /*Scope*/ 15, /*->1741*/
/*1726*/        OPC_CheckPredicate, 5, // Predicate_zextloadi8
/*1728*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1731*/        OPC_EmitMergeInputChains1_0,
/*1732*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1741*/      /*Scope*/ 15, /*->1757*/
/*1742*/        OPC_CheckPredicate, 8, // Predicate_zextloadi16
/*1744*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1747*/        OPC_EmitMergeInputChains1_0,
/*1748*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LHZX8:i64 xaddr:iPTR:$src)
/*1757*/      /*Scope*/ 15, /*->1773*/
/*1758*/        OPC_CheckPredicate, 17, // Predicate_zextloadi32
/*1760*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1763*/        OPC_EmitMergeInputChains1_0,
/*1764*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LWZX8:i64 xaddr:iPTR:$src)
/*1773*/      0, /*End of Scope*/
/*1774*/    /*Scope*/ 36, /*->1811*/
/*1775*/      OPC_CheckPredicate, 9, // Predicate_load
/*1777*/      OPC_CheckType, MVT::i64,
/*1779*/      OPC_Scope, 15, /*->1796*/ // 2 children in Scope
/*1781*/        OPC_CheckPredicate, 18, // Predicate_aligned4load
/*1783*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmX4:$src #2 #3
/*1786*/        OPC_EmitMergeInputChains1_0,
/*1787*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LD), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ixaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned4load>> - Complexity = 13
                // Dst: (LD:i64 ixaddr:iPTR:$src)
/*1796*/      /*Scope*/ 13, /*->1810*/
/*1797*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1800*/        OPC_EmitMergeInputChains1_0,
/*1801*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDX:i64 xaddr:iPTR:$src)
/*1810*/      0, /*End of Scope*/
/*1811*/    /*Scope*/ 36, /*->1848*/
/*1812*/      OPC_CheckPredicate, 4, // Predicate_zextload
/*1814*/      OPC_CheckPredicate, 10, // Predicate_zextloadi1
/*1816*/      OPC_CheckType, MVT::i64,
/*1818*/      OPC_Scope, 13, /*->1833*/ // 2 children in Scope
/*1820*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1823*/        OPC_EmitMergeInputChains1_0,
/*1824*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1833*/      /*Scope*/ 13, /*->1847*/
/*1834*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1837*/        OPC_EmitMergeInputChains1_0,
/*1838*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1847*/      0, /*End of Scope*/
/*1848*/    /*Scope*/ 10|128,1/*138*/, /*->1988*/
/*1850*/      OPC_CheckPredicate, 11, // Predicate_extload
/*1852*/      OPC_CheckType, MVT::i64,
/*1854*/      OPC_Scope, 32, /*->1888*/ // 4 children in Scope
/*1856*/        OPC_CheckPredicate, 12, // Predicate_extloadi1
/*1858*/        OPC_Scope, 13, /*->1873*/ // 2 children in Scope
/*1860*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1863*/          OPC_EmitMergeInputChains1_0,
/*1864*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1873*/        /*Scope*/ 13, /*->1887*/
/*1874*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1877*/          OPC_EmitMergeInputChains1_0,
/*1878*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1887*/        0, /*End of Scope*/
/*1888*/      /*Scope*/ 32, /*->1921*/
/*1889*/        OPC_CheckPredicate, 13, // Predicate_extloadi8
/*1891*/        OPC_Scope, 13, /*->1906*/ // 2 children in Scope
/*1893*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1896*/          OPC_EmitMergeInputChains1_0,
/*1897*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1906*/        /*Scope*/ 13, /*->1920*/
/*1907*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1910*/          OPC_EmitMergeInputChains1_0,
/*1911*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1920*/        0, /*End of Scope*/
/*1921*/      /*Scope*/ 32, /*->1954*/
/*1922*/        OPC_CheckPredicate, 14, // Predicate_extloadi16
/*1924*/        OPC_Scope, 13, /*->1939*/ // 2 children in Scope
/*1926*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1929*/          OPC_EmitMergeInputChains1_0,
/*1930*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZ8:i64 iaddr:iPTR:$src)
/*1939*/        /*Scope*/ 13, /*->1953*/
/*1940*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1943*/          OPC_EmitMergeInputChains1_0,
/*1944*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZX8:i64 xaddr:iPTR:$src)
/*1953*/        0, /*End of Scope*/
/*1954*/      /*Scope*/ 32, /*->1987*/
/*1955*/        OPC_CheckPredicate, 19, // Predicate_extloadi32
/*1957*/        OPC_Scope, 13, /*->1972*/ // 2 children in Scope
/*1959*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1962*/          OPC_EmitMergeInputChains1_0,
/*1963*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LWZ8:i64 iaddr:iPTR:$src)
/*1972*/        /*Scope*/ 13, /*->1986*/
/*1973*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1976*/          OPC_EmitMergeInputChains1_0,
/*1977*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LWZX8:i64 xaddr:iPTR:$src)
/*1986*/        0, /*End of Scope*/
/*1987*/      0, /*End of Scope*/
/*1988*/    /*Scope*/ 21, /*->2010*/
/*1989*/      OPC_CheckPredicate, 6, // Predicate_sextload
/*1991*/      OPC_CheckPredicate, 15, // Predicate_sextloadi32
/*1993*/      OPC_CheckPredicate, 20, // Predicate_unaligned4sextloadi32
/*1995*/      OPC_CheckType, MVT::i64,
/*1997*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*2000*/      OPC_EmitMergeInputChains1_0,
/*2001*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWAX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i64 xoaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>><<P:Predicate_unaligned4sextloadi32>> - Complexity = 13
              // Dst: (LWAX:i64 xoaddr:iPTR:$src)
/*2010*/    /*Scope*/ 85, /*->2096*/
/*2011*/      OPC_CheckPredicate, 9, // Predicate_load
/*2013*/      OPC_SwitchType /*3 cases */, 15,  MVT::i64,// ->2031
/*2016*/        OPC_CheckPredicate, 21, // Predicate_unaligned4load
/*2018*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*2021*/        OPC_EmitMergeInputChains1_0,
/*2022*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xoaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_unaligned4load>> - Complexity = 13
                // Dst: (LDX:i64 xoaddr:iPTR:$src)
              /*SwitchType*/ 30,  MVT::f32,// ->2063
/*2033*/        OPC_Scope, 13, /*->2048*/ // 2 children in Scope
/*2035*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*2038*/          OPC_EmitMergeInputChains1_0,
/*2039*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFS), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFS:f32 iaddr:iPTR:$src)
/*2048*/        /*Scope*/ 13, /*->2062*/
/*2049*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*2052*/          OPC_EmitMergeInputChains1_0,
/*2053*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFSX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFSX:f32 xaddr:iPTR:$src)
/*2062*/        0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f64,// ->2095
/*2065*/        OPC_Scope, 13, /*->2080*/ // 2 children in Scope
/*2067*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*2070*/          OPC_EmitMergeInputChains1_0,
/*2071*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFD), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFD:f64 iaddr:iPTR:$src)
/*2080*/        /*Scope*/ 13, /*->2094*/
/*2081*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*2084*/          OPC_EmitMergeInputChains1_0,
/*2085*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFDX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFDX:f64 xaddr:iPTR:$src)
/*2094*/        0, /*End of Scope*/
              0, // EndSwitchType
/*2096*/    /*Scope*/ 60, /*->2157*/
/*2097*/      OPC_CheckPredicate, 11, // Predicate_extload
/*2099*/      OPC_CheckPredicate, 22, // Predicate_extloadf32
/*2101*/      OPC_CheckType, MVT::f64,
/*2103*/      OPC_Scope, 25, /*->2130*/ // 2 children in Scope
/*2105*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*2108*/        OPC_EmitMergeInputChains1_0,
/*2109*/        OPC_EmitNode, TARGET_VAL(PPC::LFS), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3,  // Results = #4
/*2118*/        OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*2121*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 5, 
                // Src: (ld:f64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:f64 (LFS:f32 iaddr:iPTR:$src), F8RC:i32)
/*2130*/      /*Scope*/ 25, /*->2156*/
/*2131*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*2134*/        OPC_EmitMergeInputChains1_0,
/*2135*/        OPC_EmitNode, TARGET_VAL(PPC::LFSX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3,  // Results = #4
/*2144*/        OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*2147*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 5, 
                // Src: (ld:f64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:f64 (LFSX:f32 xaddr:iPTR:$src), F8RC:i32)
/*2156*/      0, /*End of Scope*/
/*2157*/    /*Scope*/ 19, /*->2177*/
/*2158*/      OPC_CheckPredicate, 9, // Predicate_load
/*2160*/      OPC_CheckType, MVT::v4i32,
/*2162*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*2164*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*2167*/      OPC_EmitMergeInputChains1_0,
/*2168*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:v4i32 xoaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LVX:v4i32 xoaddr:iPTR:$src)
/*2177*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 90|128,5/*730*/,  TARGET_VAL(ISD::STORE),// ->2912
/*2182*/    OPC_RecordMemRef,
/*2183*/    OPC_RecordNode,   // #0 = 'st' chained node
/*2184*/    OPC_RecordChild1, // #1 = $rS
/*2185*/    OPC_Scope, 103|128,1/*231*/, /*->2419*/ // 5 children in Scope
/*2188*/      OPC_CheckChild1Type, MVT::i32,
/*2190*/      OPC_RecordChild2, // #2 = $src
/*2191*/      OPC_Scope, 110, /*->2303*/ // 2 children in Scope
/*2193*/        OPC_CheckPredicate, 23, // Predicate_unindexedstore
/*2195*/        OPC_Scope, 36, /*->2233*/ // 4 children in Scope
/*2197*/          OPC_CheckPredicate, 24, // Predicate_truncstore
/*2199*/          OPC_Scope, 15, /*->2216*/ // 2 children in Scope
/*2201*/            OPC_CheckPredicate, 25, // Predicate_truncstorei8
/*2203*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2206*/            OPC_EmitMergeInputChains1_0,
/*2207*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STB), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i32:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB i32:i32:$rS, iaddr:iPTR:$src)
/*2216*/          /*Scope*/ 15, /*->2232*/
/*2217*/            OPC_CheckPredicate, 26, // Predicate_truncstorei16
/*2219*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2222*/            OPC_EmitMergeInputChains1_0,
/*2223*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STH), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i32:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH i32:i32:$rS, iaddr:iPTR:$src)
/*2232*/          0, /*End of Scope*/
/*2233*/        /*Scope*/ 15, /*->2249*/
/*2234*/          OPC_CheckPredicate, 27, // Predicate_store
/*2236*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2239*/          OPC_EmitMergeInputChains1_0,
/*2240*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STW), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st i32:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STW i32:i32:$rS, iaddr:iPTR:$src)
/*2249*/        /*Scope*/ 36, /*->2286*/
/*2250*/          OPC_CheckPredicate, 24, // Predicate_truncstore
/*2252*/          OPC_Scope, 15, /*->2269*/ // 2 children in Scope
/*2254*/            OPC_CheckPredicate, 25, // Predicate_truncstorei8
/*2256*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2259*/            OPC_EmitMergeInputChains1_0,
/*2260*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i32:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBX i32:i32:$rS, xaddr:iPTR:$dst)
/*2269*/          /*Scope*/ 15, /*->2285*/
/*2270*/            OPC_CheckPredicate, 26, // Predicate_truncstorei16
/*2272*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2275*/            OPC_EmitMergeInputChains1_0,
/*2276*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i32:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHX i32:i32:$rS, xaddr:iPTR:$dst)
/*2285*/          0, /*End of Scope*/
/*2286*/        /*Scope*/ 15, /*->2302*/
/*2287*/          OPC_CheckPredicate, 27, // Predicate_store
/*2289*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2292*/          OPC_EmitMergeInputChains1_0,
/*2293*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st i32:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STWX i32:i32:$rS, xaddr:iPTR:$dst)
/*2302*/        0, /*End of Scope*/
/*2303*/      /*Scope*/ 114, /*->2418*/
/*2304*/        OPC_RecordChild3, // #3 = $ptroff
/*2305*/        OPC_Scope, 40, /*->2347*/ // 4 children in Scope
/*2307*/          OPC_CheckPredicate, 28, // Predicate_itruncstore
/*2309*/          OPC_CheckPredicate, 29, // Predicate_pre_truncst
/*2311*/          OPC_Scope, 16, /*->2329*/ // 2 children in Scope
/*2313*/            OPC_CheckPredicate, 30, // Predicate_pre_truncsti8
/*2315*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2318*/            OPC_EmitMergeInputChains1_0,
/*2319*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBU), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBU:iPTR ?:i32:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2329*/          /*Scope*/ 16, /*->2346*/
/*2330*/            OPC_CheckPredicate, 31, // Predicate_pre_truncsti16
/*2332*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2335*/            OPC_EmitMergeInputChains1_0,
/*2336*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHU), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHU:iPTR ?:i32:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2346*/          0, /*End of Scope*/
/*2347*/        /*Scope*/ 18, /*->2366*/
/*2348*/          OPC_CheckPredicate, 32, // Predicate_istore
/*2350*/          OPC_CheckPredicate, 33, // Predicate_pre_store
/*2352*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2355*/          OPC_EmitMergeInputChains1_0,
/*2356*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STWU:iPTR ?:i32:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2366*/        /*Scope*/ 34, /*->2401*/
/*2367*/          OPC_CheckPredicate, 28, // Predicate_itruncstore
/*2369*/          OPC_CheckPredicate, 29, // Predicate_pre_truncst
/*2371*/          OPC_Scope, 13, /*->2386*/ // 2 children in Scope
/*2373*/            OPC_CheckPredicate, 30, // Predicate_pre_truncsti8
/*2375*/            OPC_EmitMergeInputChains1_0,
/*2376*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBUX), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 4
                    // Dst: (STBUX:iPTR ?:i32:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2386*/          /*Scope*/ 13, /*->2400*/
/*2387*/            OPC_CheckPredicate, 31, // Predicate_pre_truncsti16
/*2389*/            OPC_EmitMergeInputChains1_0,
/*2390*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHUX), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 4
                    // Dst: (STHUX:iPTR ?:i32:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2400*/          0, /*End of Scope*/
/*2401*/        /*Scope*/ 15, /*->2417*/
/*2402*/          OPC_CheckPredicate, 32, // Predicate_istore
/*2404*/          OPC_CheckPredicate, 33, // Predicate_pre_store
/*2406*/          OPC_EmitMergeInputChains1_0,
/*2407*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 4
                  // Dst: (STWUX:iPTR ?:i32:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2417*/        0, /*End of Scope*/
/*2418*/      0, /*End of Scope*/
/*2419*/    /*Scope*/ 75, /*->2495*/
/*2420*/      OPC_CheckChild1Type, MVT::f32,
/*2422*/      OPC_RecordChild2, // #2 = $dst
/*2423*/      OPC_Scope, 34, /*->2459*/ // 2 children in Scope
/*2425*/        OPC_CheckPredicate, 23, // Predicate_unindexedstore
/*2427*/        OPC_CheckPredicate, 27, // Predicate_store
/*2429*/        OPC_Scope, 13, /*->2444*/ // 2 children in Scope
/*2431*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$dst #3 #4
/*2434*/          OPC_EmitMergeInputChains1_0,
/*2435*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFS), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st f32:f32:$rS, iaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFS f32:f32:$rS, iaddr:iPTR:$dst)
/*2444*/        /*Scope*/ 13, /*->2458*/
/*2445*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2448*/          OPC_EmitMergeInputChains1_0,
/*2449*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st f32:f32:$frS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFSX f32:f32:$frS, xaddr:iPTR:$dst)
/*2458*/        0, /*End of Scope*/
/*2459*/      /*Scope*/ 34, /*->2494*/
/*2460*/        OPC_RecordChild3, // #3 = $ptroff
/*2461*/        OPC_CheckPredicate, 32, // Predicate_istore
/*2463*/        OPC_CheckPredicate, 33, // Predicate_pre_store
/*2465*/        OPC_Scope, 14, /*->2481*/ // 2 children in Scope
/*2467*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2470*/          OPC_EmitMergeInputChains1_0,
/*2471*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR f32:f32:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STFSU:iPTR ?:f32:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2481*/        /*Scope*/ 11, /*->2493*/
/*2482*/          OPC_EmitMergeInputChains1_0,
/*2483*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (ist:iPTR f32:f32:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 4
                  // Dst: (STFSUX:iPTR ?:f32:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2493*/        0, /*End of Scope*/
/*2494*/      0, /*End of Scope*/
/*2495*/    /*Scope*/ 75, /*->2571*/
/*2496*/      OPC_CheckChild1Type, MVT::f64,
/*2498*/      OPC_RecordChild2, // #2 = $dst
/*2499*/      OPC_Scope, 34, /*->2535*/ // 2 children in Scope
/*2501*/        OPC_CheckPredicate, 23, // Predicate_unindexedstore
/*2503*/        OPC_CheckPredicate, 27, // Predicate_store
/*2505*/        OPC_Scope, 13, /*->2520*/ // 2 children in Scope
/*2507*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$dst #3 #4
/*2510*/          OPC_EmitMergeInputChains1_0,
/*2511*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFD), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st f64:f64:$rS, iaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFD f64:f64:$rS, iaddr:iPTR:$dst)
/*2520*/        /*Scope*/ 13, /*->2534*/
/*2521*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2524*/          OPC_EmitMergeInputChains1_0,
/*2525*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st f64:f64:$frS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFDX f64:f64:$frS, xaddr:iPTR:$dst)
/*2534*/        0, /*End of Scope*/
/*2535*/      /*Scope*/ 34, /*->2570*/
/*2536*/        OPC_RecordChild3, // #3 = $ptroff
/*2537*/        OPC_CheckPredicate, 32, // Predicate_istore
/*2539*/        OPC_CheckPredicate, 33, // Predicate_pre_store
/*2541*/        OPC_Scope, 14, /*->2557*/ // 2 children in Scope
/*2543*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2546*/          OPC_EmitMergeInputChains1_0,
/*2547*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR f64:f64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STFDU:iPTR ?:f64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2557*/        /*Scope*/ 11, /*->2569*/
/*2558*/          OPC_EmitMergeInputChains1_0,
/*2559*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (ist:iPTR f64:f64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 4
                  // Dst: (STFDUX:iPTR ?:f64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2569*/        0, /*End of Scope*/
/*2570*/      0, /*End of Scope*/
/*2571*/    /*Scope*/ 59|128,2/*315*/, /*->2888*/
/*2573*/      OPC_CheckChild1Type, MVT::i64,
/*2575*/      OPC_RecordChild2, // #2 = $ptrreg
/*2576*/      OPC_Scope, 82, /*->2660*/ // 3 children in Scope
/*2578*/        OPC_RecordChild3, // #3 = $ptroff
/*2579*/        OPC_Scope, 57, /*->2638*/ // 2 children in Scope
/*2581*/          OPC_CheckPredicate, 28, // Predicate_itruncstore
/*2583*/          OPC_CheckPredicate, 29, // Predicate_pre_truncst
/*2585*/          OPC_Scope, 16, /*->2603*/ // 3 children in Scope
/*2587*/            OPC_CheckPredicate, 30, // Predicate_pre_truncsti8
/*2589*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2592*/            OPC_EmitMergeInputChains1_0,
/*2593*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBU8:iPTR ?:i64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2603*/          /*Scope*/ 16, /*->2620*/
/*2604*/            OPC_CheckPredicate, 31, // Predicate_pre_truncsti16
/*2606*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2609*/            OPC_EmitMergeInputChains1_0,
/*2610*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHU8:iPTR ?:i64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2620*/          /*Scope*/ 16, /*->2637*/
/*2621*/            OPC_CheckPredicate, 34, // Predicate_pre_truncsti32
/*2623*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2626*/            OPC_EmitMergeInputChains1_0,
/*2627*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti32>> - Complexity = 10
                    // Dst: (STWU8:iPTR ?:i64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2637*/          0, /*End of Scope*/
/*2638*/        /*Scope*/ 20, /*->2659*/
/*2639*/          OPC_CheckPredicate, 32, // Predicate_istore
/*2641*/          OPC_CheckPredicate, 33, // Predicate_pre_store
/*2643*/          OPC_CheckPredicate, 35, // Predicate_aligned4pre_store
/*2645*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2648*/          OPC_EmitMergeInputChains1_0,
/*2649*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STDU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>><<P:Predicate_aligned4pre_store>> - Complexity = 10
                  // Dst: (STDU:iPTR ?:i64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2659*/        0, /*End of Scope*/
/*2660*/      /*Scope*/ 28|128,1/*156*/, /*->2818*/
/*2662*/        OPC_CheckPredicate, 23, // Predicate_unindexedstore
/*2664*/        OPC_Scope, 100, /*->2766*/ // 2 children in Scope
/*2666*/          OPC_CheckPredicate, 24, // Predicate_truncstore
/*2668*/          OPC_Scope, 15, /*->2685*/ // 6 children in Scope
/*2670*/            OPC_CheckPredicate, 25, // Predicate_truncstorei8
/*2672*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2675*/            OPC_EmitMergeInputChains1_0,
/*2676*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STB8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB8 i64:i64:$rS, iaddr:iPTR:$src)
/*2685*/          /*Scope*/ 15, /*->2701*/
/*2686*/            OPC_CheckPredicate, 26, // Predicate_truncstorei16
/*2688*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2691*/            OPC_EmitMergeInputChains1_0,
/*2692*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STH8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH8 i64:i64:$rS, iaddr:iPTR:$src)
/*2701*/          /*Scope*/ 15, /*->2717*/
/*2702*/            OPC_CheckPredicate, 36, // Predicate_truncstorei32
/*2704*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2707*/            OPC_EmitMergeInputChains1_0,
/*2708*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STW8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STW8 i64:i64:$rS, iaddr:iPTR:$src)
/*2717*/          /*Scope*/ 15, /*->2733*/
/*2718*/            OPC_CheckPredicate, 25, // Predicate_truncstorei8
/*2720*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2723*/            OPC_EmitMergeInputChains1_0,
/*2724*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBX8 i64:i64:$rS, xaddr:iPTR:$dst)
/*2733*/          /*Scope*/ 15, /*->2749*/
/*2734*/            OPC_CheckPredicate, 26, // Predicate_truncstorei16
/*2736*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2739*/            OPC_EmitMergeInputChains1_0,
/*2740*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHX8 i64:i64:$rS, xaddr:iPTR:$dst)
/*2749*/          /*Scope*/ 15, /*->2765*/
/*2750*/            OPC_CheckPredicate, 36, // Predicate_truncstorei32
/*2752*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2755*/            OPC_EmitMergeInputChains1_0,
/*2756*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STWX8 i64:i64:$rS, xaddr:iPTR:$dst)
/*2765*/          0, /*End of Scope*/
/*2766*/        /*Scope*/ 50, /*->2817*/
/*2767*/          OPC_CheckPredicate, 27, // Predicate_store
/*2769*/          OPC_Scope, 15, /*->2786*/ // 3 children in Scope
/*2771*/            OPC_CheckPredicate, 37, // Predicate_aligned4store
/*2773*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectAddrImmX4:$dst #3 #4
/*2776*/            OPC_EmitMergeInputChains1_0,
/*2777*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STD), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, ixaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_aligned4store>> - Complexity = 13
                    // Dst: (STD i64:i64:$rS, ixaddr:iPTR:$dst)
/*2786*/          /*Scope*/ 13, /*->2800*/
/*2787*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2790*/            OPC_EmitMergeInputChains1_0,
/*2791*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STDX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDX i64:i64:$rS, xaddr:iPTR:$dst)
/*2800*/          /*Scope*/ 15, /*->2816*/
/*2801*/            OPC_CheckPredicate, 38, // Predicate_unaligned4store
/*2803*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*2806*/            OPC_EmitMergeInputChains1_0,
/*2807*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STDX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xoaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_unaligned4store>> - Complexity = 13
                    // Dst: (STDX ?:i64:$rS, xoaddr:iPTR:$dst)
/*2816*/          0, /*End of Scope*/
/*2817*/        0, /*End of Scope*/
/*2818*/      /*Scope*/ 68, /*->2887*/
/*2819*/        OPC_RecordChild3, // #3 = $ptroff
/*2820*/        OPC_Scope, 48, /*->2870*/ // 2 children in Scope
/*2822*/          OPC_CheckPredicate, 28, // Predicate_itruncstore
/*2824*/          OPC_CheckPredicate, 29, // Predicate_pre_truncst
/*2826*/          OPC_Scope, 13, /*->2841*/ // 3 children in Scope
/*2828*/            OPC_CheckPredicate, 30, // Predicate_pre_truncsti8
/*2830*/            OPC_EmitMergeInputChains1_0,
/*2831*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBUX8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 4
                    // Dst: (STBUX8:iPTR ?:i64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2841*/          /*Scope*/ 13, /*->2855*/
/*2842*/            OPC_CheckPredicate, 31, // Predicate_pre_truncsti16
/*2844*/            OPC_EmitMergeInputChains1_0,
/*2845*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHUX8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 4
                    // Dst: (STHUX8:iPTR ?:i64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2855*/          /*Scope*/ 13, /*->2869*/
/*2856*/            OPC_CheckPredicate, 34, // Predicate_pre_truncsti32
/*2858*/            OPC_EmitMergeInputChains1_0,
/*2859*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWUX8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti32>> - Complexity = 4
                    // Dst: (STWUX8:iPTR ?:i64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2869*/          0, /*End of Scope*/
/*2870*/        /*Scope*/ 15, /*->2886*/
/*2871*/          OPC_CheckPredicate, 32, // Predicate_istore
/*2873*/          OPC_CheckPredicate, 33, // Predicate_pre_store
/*2875*/          OPC_EmitMergeInputChains1_0,
/*2876*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STDUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 4
                  // Dst: (STDUX:iPTR ?:i64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2886*/        0, /*End of Scope*/
/*2887*/      0, /*End of Scope*/
/*2888*/    /*Scope*/ 22, /*->2911*/
/*2889*/      OPC_CheckChild1Type, MVT::v4i32,
/*2891*/      OPC_RecordChild2, // #2 = $dst
/*2892*/      OPC_CheckPredicate, 23, // Predicate_unindexedstore
/*2894*/      OPC_CheckPredicate, 27, // Predicate_store
/*2896*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*2898*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*2901*/      OPC_EmitMergeInputChains1_0,
/*2902*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STVX), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (st v4i32:v4i32:$rS, xoaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
              // Dst: (STVX ?:v4i32:$rS, xoaddr:iPTR:$dst)
/*2911*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->2998
/*2915*/    OPC_RecordMemRef,
/*2916*/    OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*2917*/    OPC_RecordChild1, // #1 = $ptr
/*2918*/    OPC_RecordChild2, // #2 = $incr
/*2919*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->2978
/*2922*/      OPC_Scope, 17, /*->2941*/ // 3 children in Scope
/*2924*/        OPC_CheckPredicate, 39, // Predicate_atomic_load_add_8
/*2926*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2929*/        OPC_EmitMergeInputChains1_0,
/*2930*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*2941*/      /*Scope*/ 17, /*->2959*/
/*2942*/        OPC_CheckPredicate, 40, // Predicate_atomic_load_add_16
/*2944*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2947*/        OPC_EmitMergeInputChains1_0,
/*2948*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*2959*/      /*Scope*/ 17, /*->2977*/
/*2960*/        OPC_CheckPredicate, 41, // Predicate_atomic_load_add_32
/*2962*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2965*/        OPC_EmitMergeInputChains1_0,
/*2966*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*2977*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->2997
/*2980*/      OPC_CheckPredicate, 42, // Predicate_atomic_load_add_64
/*2982*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2985*/      OPC_EmitMergeInputChains1_0,
/*2986*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_add:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_add_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_ADD_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->3084
/*3001*/    OPC_RecordMemRef,
/*3002*/    OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*3003*/    OPC_RecordChild1, // #1 = $ptr
/*3004*/    OPC_RecordChild2, // #2 = $incr
/*3005*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3064
/*3008*/      OPC_Scope, 17, /*->3027*/ // 3 children in Scope
/*3010*/        OPC_CheckPredicate, 43, // Predicate_atomic_load_sub_8
/*3012*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3015*/        OPC_EmitMergeInputChains1_0,
/*3016*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3027*/      /*Scope*/ 17, /*->3045*/
/*3028*/        OPC_CheckPredicate, 44, // Predicate_atomic_load_sub_16
/*3030*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3033*/        OPC_EmitMergeInputChains1_0,
/*3034*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3045*/      /*Scope*/ 17, /*->3063*/
/*3046*/        OPC_CheckPredicate, 45, // Predicate_atomic_load_sub_32
/*3048*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3051*/        OPC_EmitMergeInputChains1_0,
/*3052*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3063*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3083
/*3066*/      OPC_CheckPredicate, 46, // Predicate_atomic_load_sub_64
/*3068*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3071*/      OPC_EmitMergeInputChains1_0,
/*3072*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_sub:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_sub_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_SUB_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->3170
/*3087*/    OPC_RecordMemRef,
/*3088*/    OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*3089*/    OPC_RecordChild1, // #1 = $ptr
/*3090*/    OPC_RecordChild2, // #2 = $incr
/*3091*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3150
/*3094*/      OPC_Scope, 17, /*->3113*/ // 3 children in Scope
/*3096*/        OPC_CheckPredicate, 47, // Predicate_atomic_load_and_8
/*3098*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3101*/        OPC_EmitMergeInputChains1_0,
/*3102*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3113*/      /*Scope*/ 17, /*->3131*/
/*3114*/        OPC_CheckPredicate, 48, // Predicate_atomic_load_and_16
/*3116*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3119*/        OPC_EmitMergeInputChains1_0,
/*3120*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3131*/      /*Scope*/ 17, /*->3149*/
/*3132*/        OPC_CheckPredicate, 49, // Predicate_atomic_load_and_32
/*3134*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3137*/        OPC_EmitMergeInputChains1_0,
/*3138*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3149*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3169
/*3152*/      OPC_CheckPredicate, 50, // Predicate_atomic_load_and_64
/*3154*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3157*/      OPC_EmitMergeInputChains1_0,
/*3158*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_and:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_and_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_AND_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->3256
/*3173*/    OPC_RecordMemRef,
/*3174*/    OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*3175*/    OPC_RecordChild1, // #1 = $ptr
/*3176*/    OPC_RecordChild2, // #2 = $incr
/*3177*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3236
/*3180*/      OPC_Scope, 17, /*->3199*/ // 3 children in Scope
/*3182*/        OPC_CheckPredicate, 51, // Predicate_atomic_load_or_8
/*3184*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3187*/        OPC_EmitMergeInputChains1_0,
/*3188*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3199*/      /*Scope*/ 17, /*->3217*/
/*3200*/        OPC_CheckPredicate, 52, // Predicate_atomic_load_or_16
/*3202*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3205*/        OPC_EmitMergeInputChains1_0,
/*3206*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3217*/      /*Scope*/ 17, /*->3235*/
/*3218*/        OPC_CheckPredicate, 53, // Predicate_atomic_load_or_32
/*3220*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3223*/        OPC_EmitMergeInputChains1_0,
/*3224*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3235*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3255
/*3238*/      OPC_CheckPredicate, 54, // Predicate_atomic_load_or_64
/*3240*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3243*/      OPC_EmitMergeInputChains1_0,
/*3244*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_or:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_or_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_OR_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->3342
/*3259*/    OPC_RecordMemRef,
/*3260*/    OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*3261*/    OPC_RecordChild1, // #1 = $ptr
/*3262*/    OPC_RecordChild2, // #2 = $incr
/*3263*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3322
/*3266*/      OPC_Scope, 17, /*->3285*/ // 3 children in Scope
/*3268*/        OPC_CheckPredicate, 55, // Predicate_atomic_load_xor_8
/*3270*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3273*/        OPC_EmitMergeInputChains1_0,
/*3274*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3285*/      /*Scope*/ 17, /*->3303*/
/*3286*/        OPC_CheckPredicate, 56, // Predicate_atomic_load_xor_16
/*3288*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3291*/        OPC_EmitMergeInputChains1_0,
/*3292*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3303*/      /*Scope*/ 17, /*->3321*/
/*3304*/        OPC_CheckPredicate, 57, // Predicate_atomic_load_xor_32
/*3306*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3309*/        OPC_EmitMergeInputChains1_0,
/*3310*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3321*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3341
/*3324*/      OPC_CheckPredicate, 58, // Predicate_atomic_load_xor_64
/*3326*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3329*/      OPC_EmitMergeInputChains1_0,
/*3330*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_xor:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_xor_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_XOR_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->3428
/*3345*/    OPC_RecordMemRef,
/*3346*/    OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*3347*/    OPC_RecordChild1, // #1 = $ptr
/*3348*/    OPC_RecordChild2, // #2 = $incr
/*3349*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3408
/*3352*/      OPC_Scope, 17, /*->3371*/ // 3 children in Scope
/*3354*/        OPC_CheckPredicate, 59, // Predicate_atomic_load_nand_8
/*3356*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3359*/        OPC_EmitMergeInputChains1_0,
/*3360*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3371*/      /*Scope*/ 17, /*->3389*/
/*3372*/        OPC_CheckPredicate, 60, // Predicate_atomic_load_nand_16
/*3374*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3377*/        OPC_EmitMergeInputChains1_0,
/*3378*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3389*/      /*Scope*/ 17, /*->3407*/
/*3390*/        OPC_CheckPredicate, 61, // Predicate_atomic_load_nand_32
/*3392*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3395*/        OPC_EmitMergeInputChains1_0,
/*3396*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3407*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3427
/*3410*/      OPC_CheckPredicate, 62, // Predicate_atomic_load_nand_64
/*3412*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3415*/      OPC_EmitMergeInputChains1_0,
/*3416*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_nand:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_nand_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NAND_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 88,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->3519
/*3431*/    OPC_RecordMemRef,
/*3432*/    OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*3433*/    OPC_RecordChild1, // #1 = $ptr
/*3434*/    OPC_RecordChild2, // #2 = $old
/*3435*/    OPC_RecordChild3, // #3 = $new
/*3436*/    OPC_SwitchType /*2 cases */, 59,  MVT::i32,// ->3498
/*3439*/      OPC_Scope, 18, /*->3459*/ // 3 children in Scope
/*3441*/        OPC_CheckPredicate, 63, // Predicate_atomic_cmp_swap_8
/*3443*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3446*/        OPC_EmitMergeInputChains1_0,
/*3447*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)
/*3459*/      /*Scope*/ 18, /*->3478*/
/*3460*/        OPC_CheckPredicate, 64, // Predicate_atomic_cmp_swap_16
/*3462*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3465*/        OPC_EmitMergeInputChains1_0,
/*3466*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)
/*3478*/      /*Scope*/ 18, /*->3497*/
/*3479*/        OPC_CheckPredicate, 65, // Predicate_atomic_cmp_swap_32
/*3481*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3484*/        OPC_EmitMergeInputChains1_0,
/*3485*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)
/*3497*/      0, /*End of Scope*/
            /*SwitchType*/ 18,  MVT::i64,// ->3518
/*3500*/      OPC_CheckPredicate, 66, // Predicate_atomic_cmp_swap_64
/*3502*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3505*/      OPC_EmitMergeInputChains1_0,
/*3506*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
              // Src: (atomic_cmp_swap:i64 xoaddr:iPTR:$ptr, i64:i64:$old, i64:i64:$new)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_CMP_SWAP_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$old, i64:i64:$new)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->3605
/*3522*/    OPC_RecordMemRef,
/*3523*/    OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*3524*/    OPC_RecordChild1, // #1 = $ptr
/*3525*/    OPC_RecordChild2, // #2 = $new
/*3526*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3585
/*3529*/      OPC_Scope, 17, /*->3548*/ // 3 children in Scope
/*3531*/        OPC_CheckPredicate, 67, // Predicate_atomic_swap_8
/*3533*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3536*/        OPC_EmitMergeInputChains1_0,
/*3537*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$new)<<P:Predicate_atomic_swap_8>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$new)
/*3548*/      /*Scope*/ 17, /*->3566*/
/*3549*/        OPC_CheckPredicate, 68, // Predicate_atomic_swap_16
/*3551*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3554*/        OPC_EmitMergeInputChains1_0,
/*3555*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$new)<<P:Predicate_atomic_swap_16>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$new)
/*3566*/      /*Scope*/ 17, /*->3584*/
/*3567*/        OPC_CheckPredicate, 69, // Predicate_atomic_swap_32
/*3569*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3572*/        OPC_EmitMergeInputChains1_0,
/*3573*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$new)<<P:Predicate_atomic_swap_32>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$new)
/*3584*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3604
/*3587*/      OPC_CheckPredicate, 70, // Predicate_atomic_swap_64
/*3589*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3592*/      OPC_EmitMergeInputChains1_0,
/*3593*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_swap:i64 xoaddr:iPTR:$ptr, i64:i64:$new)<<P:Predicate_atomic_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_SWAP_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$new)
            0, // EndSwitchType
          /*SwitchOpcode*/ 48,  TARGET_VAL(PPCISD::DYNALLOC),// ->3656
/*3608*/    OPC_RecordNode,   // #0 = 'PPCdynalloc' chained node
/*3609*/    OPC_RecordChild1, // #1 = $negsize
/*3610*/    OPC_SwitchType /*2 cases */, 20,  MVT::i32,// ->3633
/*3613*/      OPC_CheckChild1Type, MVT::i32,
/*3615*/      OPC_RecordChild2, // #2 = $fpsi
/*3616*/      OPC_CheckChild2Type, MVT::iPTR,
/*3618*/      OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$fpsi #3 #4
/*3621*/      OPC_EmitMergeInputChains1_0,
/*3622*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DYNALLOC), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCdynalloc:i32 i32:i32:$negsize, iaddr:iPTR:$fpsi) - Complexity = 12
              // Dst: (DYNALLOC:i32:i32 i32:i32:$negsize, iaddr:iPTR:$fpsi)
            /*SwitchType*/ 20,  MVT::i64,// ->3655
/*3635*/      OPC_CheckChild1Type, MVT::i64,
/*3637*/      OPC_RecordChild2, // #2 = $fpsi
/*3638*/      OPC_CheckChild2Type, MVT::iPTR,
/*3640*/      OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$fpsi #3 #4
/*3643*/      OPC_EmitMergeInputChains1_0,
/*3644*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DYNALLOC8), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i64, MVT::i64, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCdynalloc:i64 i64:i64:$negsize, iaddr:iPTR:$fpsi) - Complexity = 12
              // Dst: (DYNALLOC8:i64:i64 i64:i64:$negsize, iaddr:iPTR:$fpsi)
            0, // EndSwitchType
          /*SwitchOpcode*/ 34,  TARGET_VAL(PPCISD::LARX),// ->3693
/*3659*/    OPC_RecordNode,   // #0 = 'PPClarx' chained node
/*3660*/    OPC_RecordChild1, // #1 = $src
/*3661*/    OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->3677
/*3664*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3667*/      OPC_EmitMergeInputChains1_0,
/*3668*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWARX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClarx:i32 xoaddr:iPTR:$src) - Complexity = 12
              // Dst: (LWARX:i32 xoaddr:iPTR:$src)
            /*SwitchType*/ 13,  MVT::i64,// ->3692
/*3679*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #2 #3
/*3682*/      OPC_EmitMergeInputChains1_0,
/*3683*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDARX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPClarx:i64 xoaddr:iPTR:$ptr) - Complexity = 12
              // Dst: (LDARX:i64 xoaddr:iPTR:$ptr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 63,  TARGET_VAL(PPCISD::LBRX),// ->3759
/*3696*/    OPC_RecordNode,   // #0 = 'PPClbrx' chained node
/*3697*/    OPC_RecordChild1, // #1 = $src
/*3698*/    OPC_MoveChild, 2,
/*3700*/    OPC_Scope, 18, /*->3720*/ // 3 children in Scope
/*3702*/      OPC_CheckValueType, MVT::i16,
/*3704*/      OPC_MoveParent,
/*3705*/      OPC_CheckType, MVT::i32,
/*3707*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3710*/      OPC_EmitMergeInputChains1_0,
/*3711*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i32 xoaddr:iPTR:$src, i16:Other) - Complexity = 12
              // Dst: (LHBRX:i32 xoaddr:iPTR:$src)
/*3720*/    /*Scope*/ 18, /*->3739*/
/*3721*/      OPC_CheckValueType, MVT::i32,
/*3723*/      OPC_MoveParent,
/*3724*/      OPC_CheckType, MVT::i32,
/*3726*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3729*/      OPC_EmitMergeInputChains1_0,
/*3730*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i32 xoaddr:iPTR:$src, i32:Other) - Complexity = 12
              // Dst: (LWBRX:i32 xoaddr:iPTR:$src)
/*3739*/    /*Scope*/ 18, /*->3758*/
/*3740*/      OPC_CheckValueType, MVT::i64,
/*3742*/      OPC_MoveParent,
/*3743*/      OPC_CheckType, MVT::i64,
/*3745*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3748*/      OPC_EmitMergeInputChains1_0,
/*3749*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i64 xoaddr:iPTR:$src, i64:Other) - Complexity = 12
              // Dst: (LDBRX:i64 xoaddr:iPTR:$src)
/*3758*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 37,  TARGET_VAL(PPCISD::LOAD),// ->3799
/*3762*/    OPC_RecordNode,   // #0 = 'PPCload' chained node
/*3763*/    OPC_CaptureGlueInput,
/*3764*/    OPC_RecordChild1, // #1 = $src
/*3765*/    OPC_CheckChild1Type, MVT::iPTR,
/*3767*/    OPC_CheckType, MVT::i64,
/*3769*/    OPC_Scope, 13, /*->3784*/ // 2 children in Scope
/*3771*/      OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmX4:$src #2 #3
/*3774*/      OPC_EmitMergeInputChains1_0,
/*3775*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LD), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPCload:i64 ixaddr:iPTR:$src) - Complexity = 12
              // Dst: (LD:i64 ixaddr:iPTR:$src)
/*3784*/    /*Scope*/ 13, /*->3798*/
/*3785*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*3788*/      OPC_EmitMergeInputChains1_0,
/*3789*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPCload:i64 xaddr:iPTR:$src) - Complexity = 12
              // Dst: (LDX:i64 xaddr:iPTR:$src)
/*3798*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 92|128,4/*604*/,  TARGET_VAL(ISD::XOR),// ->4407
/*3803*/    OPC_Scope, 39|128,1/*167*/, /*->3973*/ // 8 children in Scope
/*3806*/      OPC_MoveChild, 0,
/*3808*/      OPC_SwitchOpcode /*3 cases */, 41,  TARGET_VAL(ISD::AND),// ->3853
/*3812*/        OPC_RecordChild0, // #0 = $rS
/*3813*/        OPC_RecordChild1, // #1 = $rB
/*3814*/        OPC_MoveParent,
/*3815*/        OPC_MoveChild, 1,
/*3817*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3828*/        OPC_MoveParent,
/*3829*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3841
/*3832*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NAND), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (and:i32 i32:i32:$rS, i32:i32:$rB), -1:i32) - Complexity = 11
                  // Dst: (NAND:i32 i32:i32:$rS, i32:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->3852
/*3843*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NAND8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 (and:i64 i64:i64:$rS, i64:i64:$rB), -1:i64) - Complexity = 11
                  // Dst: (NAND8:i64 i64:i64:$rS, i64:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::OR),// ->3897
/*3856*/        OPC_RecordChild0, // #0 = $rS
/*3857*/        OPC_RecordChild1, // #1 = $rB
/*3858*/        OPC_MoveParent,
/*3859*/        OPC_MoveChild, 1,
/*3861*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3872*/        OPC_MoveParent,
/*3873*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3885
/*3876*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (or:i32 i32:i32:$rS, i32:i32:$rB), -1:i32) - Complexity = 11
                  // Dst: (NOR:i32 i32:i32:$rS, i32:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->3896
/*3887*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 (or:i64 i64:i64:$rS, i64:i64:$rB), -1:i64) - Complexity = 11
                  // Dst: (NOR8:i64 i64:i64:$rS, i64:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 72,  TARGET_VAL(ISD::XOR),// ->3972
/*3900*/        OPC_RecordChild0, // #0 = $rS
/*3901*/        OPC_Scope, 40, /*->3943*/ // 2 children in Scope
/*3903*/          OPC_RecordChild1, // #1 = $rB
/*3904*/          OPC_MoveParent,
/*3905*/          OPC_MoveChild, 1,
/*3907*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3918*/          OPC_MoveParent,
/*3919*/          OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3931
/*3922*/            OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 (xor:i32 i32:i32:$rS, i32:i32:$rB), -1:i32) - Complexity = 11
                    // Dst: (EQV:i32 i32:i32:$rS, i32:i32:$rB)
                  /*SwitchType*/ 9,  MVT::i64,// ->3942
/*3933*/            OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i64 (xor:i64 i64:i64:$rS, i64:i64:$rB), -1:i64) - Complexity = 11
                    // Dst: (EQV8:i64 i64:i64:$rS, i64:i64:$rB)
                  0, // EndSwitchType
/*3943*/        /*Scope*/ 27, /*->3971*/
/*3944*/          OPC_MoveChild, 1,
/*3946*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3957*/          OPC_MoveParent,
/*3958*/          OPC_MoveParent,
/*3959*/          OPC_RecordChild1, // #1 = $rB
/*3960*/          OPC_CheckType, MVT::i32,
/*3962*/          OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (xor:i32 i32:i32:$rS, -1:i32), i32:i32:$rB) - Complexity = 11
                  // Dst: (EQV:i32 i32:i32:$rS, i32:i32:$rB)
/*3971*/        0, /*End of Scope*/
              0, // EndSwitchOpcode
/*3973*/    /*Scope*/ 33, /*->4007*/
/*3974*/      OPC_RecordChild0, // #0 = $rB
/*3975*/      OPC_MoveChild, 1,
/*3977*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3980*/      OPC_RecordChild0, // #1 = $rS
/*3981*/      OPC_MoveChild, 1,
/*3983*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3994*/      OPC_MoveParent,
/*3995*/      OPC_MoveParent,
/*3996*/      OPC_CheckType, MVT::i32,
/*3998*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (xor:i32 i32:i32:$rB, (xor:i32 i32:i32:$rS, -1:i32)) - Complexity = 11
              // Dst: (EQV:i32 i32:i32:$rS, i32:i32:$rB)
/*4007*/    /*Scope*/ 33, /*->4041*/
/*4008*/      OPC_MoveChild, 0,
/*4010*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4013*/      OPC_RecordChild0, // #0 = $rS
/*4014*/      OPC_MoveChild, 1,
/*4016*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4027*/      OPC_MoveParent,
/*4028*/      OPC_MoveParent,
/*4029*/      OPC_RecordChild1, // #1 = $rB
/*4030*/      OPC_CheckType, MVT::i64,
/*4032*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i64 (xor:i64 i64:i64:$rS, -1:i64), i64:i64:$rB) - Complexity = 11
              // Dst: (EQV8:i64 i64:i64:$rS, i64:i64:$rB)
/*4041*/    /*Scope*/ 33, /*->4075*/
/*4042*/      OPC_RecordChild0, // #0 = $rB
/*4043*/      OPC_MoveChild, 1,
/*4045*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4048*/      OPC_RecordChild0, // #1 = $rS
/*4049*/      OPC_MoveChild, 1,
/*4051*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4062*/      OPC_MoveParent,
/*4063*/      OPC_MoveParent,
/*4064*/      OPC_CheckType, MVT::i64,
/*4066*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
              // Src: (xor:i64 i64:i64:$rB, (xor:i64 i64:i64:$rS, -1:i64)) - Complexity = 11
              // Dst: (EQV8:i64 i64:i64:$rS, i64:i64:$rB)
/*4075*/    /*Scope*/ 74, /*->4150*/
/*4076*/      OPC_MoveChild, 0,
/*4078*/      OPC_SwitchOpcode /*2 cases */, 32,  TARGET_VAL(ISD::OR),// ->4114
/*4082*/        OPC_RecordChild0, // #0 = $vA
/*4083*/        OPC_RecordChild1, // #1 = $vB
/*4084*/        OPC_MoveParent,
/*4085*/        OPC_MoveChild, 1,
/*4087*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4090*/        OPC_MoveChild, 0,
/*4092*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4095*/        OPC_CheckPredicate, 71, // Predicate_immAllOnesV
/*4097*/        OPC_CheckType, MVT::v16i8,
/*4099*/        OPC_MoveParent,
/*4100*/        OPC_MoveParent,
/*4101*/        OPC_CheckType, MVT::v4i32,
/*4103*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4105*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:v4i32 (or:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB), (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)) - Complexity = 13
                // Dst: (VNOR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
              /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::BITCAST),// ->4149
/*4117*/        OPC_MoveChild, 0,
/*4119*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4122*/        OPC_CheckPredicate, 71, // Predicate_immAllOnesV
/*4124*/        OPC_CheckType, MVT::v16i8,
/*4126*/        OPC_MoveParent,
/*4127*/        OPC_MoveParent,
/*4128*/        OPC_MoveChild, 1,
/*4130*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4133*/        OPC_RecordChild0, // #0 = $vA
/*4134*/        OPC_RecordChild1, // #1 = $vB
/*4135*/        OPC_MoveParent,
/*4136*/        OPC_CheckType, MVT::v4i32,
/*4138*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4140*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), (or:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)) - Complexity = 13
                // Dst: (VNOR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
              0, // EndSwitchOpcode
/*4150*/    /*Scope*/ 30, /*->4181*/
/*4151*/      OPC_RecordChild0, // #0 = $vA
/*4152*/      OPC_MoveChild, 1,
/*4154*/      OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4157*/      OPC_MoveChild, 0,
/*4159*/      OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4162*/      OPC_CheckPredicate, 71, // Predicate_immAllOnesV
/*4164*/      OPC_CheckType, MVT::v16i8,
/*4166*/      OPC_MoveParent,
/*4167*/      OPC_MoveParent,
/*4168*/      OPC_CheckType, MVT::v4i32,
/*4170*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4172*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 0, 
              // Src: (xor:v4i32 v4i32:v4i32:$vA, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)) - Complexity = 10
              // Dst: (VNOR:v4i32 ?:v4i32:$vA, ?:v4i32:$vA)
/*4181*/    /*Scope*/ 30, /*->4212*/
/*4182*/      OPC_MoveChild, 0,
/*4184*/      OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4187*/      OPC_MoveChild, 0,
/*4189*/      OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4192*/      OPC_CheckPredicate, 71, // Predicate_immAllOnesV
/*4194*/      OPC_CheckType, MVT::v16i8,
/*4196*/      OPC_MoveParent,
/*4197*/      OPC_MoveParent,
/*4198*/      OPC_RecordChild1, // #0 = $vA
/*4199*/      OPC_CheckType, MVT::v4i32,
/*4201*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4203*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 0, 
              // Src: (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), v4i32:v4i32:$vA) - Complexity = 10
              // Dst: (VNOR:v4i32 ?:v4i32:$vA, ?:v4i32:$vA)
/*4212*/    /*Scope*/ 64|128,1/*192*/, /*->4406*/
/*4214*/      OPC_RecordChild0, // #0 = $in
/*4215*/      OPC_Scope, 25, /*->4242*/ // 2 children in Scope
/*4217*/        OPC_MoveChild, 1,
/*4219*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4230*/        OPC_MoveParent,
/*4231*/        OPC_CheckType, MVT::i32,
/*4233*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NOR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (xor:i32 i32:i32:$in, -1:i32) - Complexity = 8
                // Dst: (NOR:i32 ?:i32:$in, ?:i32:$in)
/*4242*/      /*Scope*/ 33|128,1/*161*/, /*->4405*/
/*4244*/        OPC_RecordChild1, // #1 = $src2
/*4245*/        OPC_Scope, 119, /*->4366*/ // 4 children in Scope
/*4247*/          OPC_MoveChild, 1,
/*4249*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4252*/          OPC_Scope, 19, /*->4273*/ // 5 children in Scope
/*4254*/            OPC_CheckPredicate, 72, // Predicate_immZExt16
/*4256*/            OPC_MoveParent,
/*4257*/            OPC_CheckType, MVT::i32,
/*4259*/            OPC_EmitConvertToTarget, 1,
/*4261*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4264*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (XORI:i32 i32:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4273*/          /*Scope*/ 19, /*->4293*/
/*4274*/            OPC_CheckPredicate, 73, // Predicate_imm16ShiftedZExt
/*4276*/            OPC_MoveParent,
/*4277*/            OPC_CheckType, MVT::i32,
/*4279*/            OPC_EmitConvertToTarget, 1,
/*4281*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4284*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (XORIS:i32 i32:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4293*/          /*Scope*/ 19, /*->4313*/
/*4294*/            OPC_CheckPredicate, 72, // Predicate_immZExt16
/*4296*/            OPC_MoveParent,
/*4297*/            OPC_CheckType, MVT::i64,
/*4299*/            OPC_EmitConvertToTarget, 1,
/*4301*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4304*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORI8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (XORI8:i64 i64:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*4313*/          /*Scope*/ 19, /*->4333*/
/*4314*/            OPC_CheckPredicate, 73, // Predicate_imm16ShiftedZExt
/*4316*/            OPC_MoveParent,
/*4317*/            OPC_CheckType, MVT::i64,
/*4319*/            OPC_EmitConvertToTarget, 1,
/*4321*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4324*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (XORIS8:i64 i64:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*4333*/          /*Scope*/ 31, /*->4365*/
/*4334*/            OPC_MoveParent,
/*4335*/            OPC_CheckType, MVT::i32,
/*4337*/            OPC_EmitConvertToTarget, 1,
/*4339*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4342*/            OPC_EmitNode, TARGET_VAL(PPC::XORI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*4351*/            OPC_EmitConvertToTarget, 1,
/*4353*/            OPC_EmitNodeXForm, 0, 5, // HI16
/*4356*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                    // Src: (xor:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                    // Dst: (XORIS:i32 (XORI:i32 ?:i32:$in, (LO16:i32 (imm:i32):$imm)), (HI16:i32 (imm:i32):$imm))
/*4365*/          0, /*End of Scope*/
/*4366*/        /*Scope*/ 11, /*->4378*/
/*4367*/          OPC_CheckType, MVT::i32,
/*4369*/          OPC_MorphNodeTo, TARGET_VAL(PPC::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                  // Dst: (XOR:i32 i32:i32:$rS, i32:i32:$rB)
/*4378*/        /*Scope*/ 11, /*->4390*/
/*4379*/          OPC_CheckType, MVT::i64,
/*4381*/          OPC_MorphNodeTo, TARGET_VAL(PPC::XOR8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 i64:i64:$rS, i64:i64:$rB) - Complexity = 3
                  // Dst: (XOR8:i64 i64:i64:$rS, i64:i64:$rB)
/*4390*/        /*Scope*/ 13, /*->4404*/
/*4391*/          OPC_CheckType, MVT::v4i32,
/*4393*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4395*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VXOR), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
                  // Dst: (VXOR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4404*/        0, /*End of Scope*/
/*4405*/      0, /*End of Scope*/
/*4406*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 37|128,3/*421*/,  TARGET_VAL(ISD::AND),// ->4832
/*4411*/    OPC_Scope, 46, /*->4459*/ // 5 children in Scope
/*4413*/      OPC_RecordChild0, // #0 = $rS
/*4414*/      OPC_MoveChild, 1,
/*4416*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4419*/      OPC_RecordChild0, // #1 = $rB
/*4420*/      OPC_MoveChild, 1,
/*4422*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4433*/      OPC_MoveParent,
/*4434*/      OPC_MoveParent,
/*4435*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4447
/*4438*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 i32:i32:$rS, (xor:i32 i32:i32:$rB, -1:i32)) - Complexity = 11
                // Dst: (ANDC:i32 i32:i32:$rS, i32:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4458
/*4449*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 i64:i64:$rS, (xor:i64 i64:i64:$rB, -1:i64)) - Complexity = 11
                // Dst: (ANDC8:i64 i64:i64:$rS, i64:i64:$rB)
              0, // EndSwitchType
/*4459*/    /*Scope*/ 88, /*->4548*/
/*4460*/      OPC_MoveChild, 0,
/*4462*/      OPC_SwitchOpcode /*2 cases */, 41,  TARGET_VAL(ISD::XOR),// ->4507
/*4466*/        OPC_RecordChild0, // #0 = $rB
/*4467*/        OPC_MoveChild, 1,
/*4469*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4480*/        OPC_MoveParent,
/*4481*/        OPC_MoveParent,
/*4482*/        OPC_RecordChild1, // #1 = $rS
/*4483*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4495
/*4486*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i32 (xor:i32 i32:i32:$rB, -1:i32), i32:i32:$rS) - Complexity = 11
                  // Dst: (ANDC:i32 i32:i32:$rS, i32:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->4506
/*4497*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i64 (xor:i64 i64:i64:$rB, -1:i64), i64:i64:$rS) - Complexity = 11
                  // Dst: (ANDC8:i64 i64:i64:$rS, i64:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::ROTL),// ->4547
/*4510*/        OPC_RecordChild0, // #0 = $in
/*4511*/        OPC_RecordChild1, // #1 = $sh
/*4512*/        OPC_CheckChild1Type, MVT::i32,
/*4514*/        OPC_MoveParent,
/*4515*/        OPC_RecordChild1, // #2 = $imm
/*4516*/        OPC_MoveChild, 1,
/*4518*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4521*/        OPC_CheckPredicate, 74, // Predicate_maskimm32
/*4523*/        OPC_MoveParent,
/*4524*/        OPC_CheckType, MVT::i32,
/*4526*/        OPC_EmitConvertToTarget, 2,
/*4528*/        OPC_EmitNodeXForm, 3, 3, // MB
/*4531*/        OPC_EmitConvertToTarget, 2,
/*4533*/        OPC_EmitNodeXForm, 4, 5, // ME
/*4536*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWNM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 4, 6, 
                // Src: (and:i32 (rotl:i32 i32:i32:$in, i32:i32:$sh), (imm:i32)<<P:Predicate_maskimm32>>:$imm) - Complexity = 10
                // Dst: (RLWNM:i32 ?:i32:$in, ?:i32:$sh, (MB:i32 (imm:i32)<<P:Predicate_maskimm32>>:$imm), (ME:i32 (imm:i32)<<P:Predicate_maskimm32>>:$imm))
              0, // EndSwitchOpcode
/*4548*/    /*Scope*/ 72, /*->4621*/
/*4549*/      OPC_RecordChild0, // #0 = $vA
/*4550*/      OPC_MoveChild, 1,
/*4552*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4555*/      OPC_Scope, 31, /*->4588*/ // 2 children in Scope
/*4557*/        OPC_RecordChild0, // #1 = $vB
/*4558*/        OPC_MoveChild, 1,
/*4560*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4563*/        OPC_MoveChild, 0,
/*4565*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4568*/        OPC_CheckPredicate, 71, // Predicate_immAllOnesV
/*4570*/        OPC_CheckType, MVT::v16i8,
/*4572*/        OPC_MoveParent,
/*4573*/        OPC_MoveParent,
/*4574*/        OPC_MoveParent,
/*4575*/        OPC_CheckType, MVT::v4i32,
/*4577*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4579*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:v4i32 v4i32:v4i32:$vA, (xor:v4i32 v4i32:v4i32:$vB, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>))) - Complexity = 13
                // Dst: (VANDC:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4588*/      /*Scope*/ 31, /*->4620*/
/*4589*/        OPC_MoveChild, 0,
/*4591*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4594*/        OPC_MoveChild, 0,
/*4596*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4599*/        OPC_CheckPredicate, 71, // Predicate_immAllOnesV
/*4601*/        OPC_CheckType, MVT::v16i8,
/*4603*/        OPC_MoveParent,
/*4604*/        OPC_MoveParent,
/*4605*/        OPC_RecordChild1, // #1 = $vB
/*4606*/        OPC_MoveParent,
/*4607*/        OPC_CheckType, MVT::v4i32,
/*4609*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4611*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:v4i32 v4i32:v4i32:$vA, (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), v4i32:v4i32:$vB)) - Complexity = 13
                // Dst: (VANDC:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4620*/      0, /*End of Scope*/
/*4621*/    /*Scope*/ 73, /*->4695*/
/*4622*/      OPC_MoveChild, 0,
/*4624*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4627*/      OPC_Scope, 32, /*->4661*/ // 2 children in Scope
/*4629*/        OPC_RecordChild0, // #0 = $vB
/*4630*/        OPC_MoveChild, 1,
/*4632*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4635*/        OPC_MoveChild, 0,
/*4637*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4640*/        OPC_CheckPredicate, 71, // Predicate_immAllOnesV
/*4642*/        OPC_CheckType, MVT::v16i8,
/*4644*/        OPC_MoveParent,
/*4645*/        OPC_MoveParent,
/*4646*/        OPC_MoveParent,
/*4647*/        OPC_RecordChild1, // #1 = $vA
/*4648*/        OPC_CheckType, MVT::v4i32,
/*4650*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4652*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:v4i32 (xor:v4i32 v4i32:v4i32:$vB, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)), v4i32:v4i32:$vA) - Complexity = 13
                // Dst: (VANDC:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4661*/      /*Scope*/ 32, /*->4694*/
/*4662*/        OPC_MoveChild, 0,
/*4664*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4667*/        OPC_MoveChild, 0,
/*4669*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4672*/        OPC_CheckPredicate, 71, // Predicate_immAllOnesV
/*4674*/        OPC_CheckType, MVT::v16i8,
/*4676*/        OPC_MoveParent,
/*4677*/        OPC_MoveParent,
/*4678*/        OPC_RecordChild1, // #0 = $vB
/*4679*/        OPC_MoveParent,
/*4680*/        OPC_RecordChild1, // #1 = $vA
/*4681*/        OPC_CheckType, MVT::v4i32,
/*4683*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4685*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:v4i32 (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), v4i32:v4i32:$vB), v4i32:v4i32:$vA) - Complexity = 13
                // Dst: (VANDC:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4694*/      0, /*End of Scope*/
/*4695*/    /*Scope*/ 6|128,1/*134*/, /*->4831*/
/*4697*/      OPC_RecordChild0, // #0 = $src1
/*4698*/      OPC_RecordChild1, // #1 = $src2
/*4699*/      OPC_Scope, 91, /*->4792*/ // 4 children in Scope
/*4701*/        OPC_MoveChild, 1,
/*4703*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4706*/        OPC_Scope, 20, /*->4728*/ // 4 children in Scope
/*4708*/          OPC_CheckPredicate, 72, // Predicate_immZExt16
/*4710*/          OPC_MoveParent,
/*4711*/          OPC_CheckType, MVT::i32,
/*4713*/          OPC_EmitConvertToTarget, 1,
/*4715*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4718*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDIo), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ANDIo:i32:i32 i32:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4728*/        /*Scope*/ 20, /*->4749*/
/*4729*/          OPC_CheckPredicate, 73, // Predicate_imm16ShiftedZExt
/*4731*/          OPC_MoveParent,
/*4732*/          OPC_CheckType, MVT::i32,
/*4734*/          OPC_EmitConvertToTarget, 1,
/*4736*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*4739*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDISo), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ANDISo:i32:i32 i32:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4749*/        /*Scope*/ 20, /*->4770*/
/*4750*/          OPC_CheckPredicate, 72, // Predicate_immZExt16
/*4752*/          OPC_MoveParent,
/*4753*/          OPC_CheckType, MVT::i64,
/*4755*/          OPC_EmitConvertToTarget, 1,
/*4757*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4760*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDIo8), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ANDIo8:i64:i32 i64:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*4770*/        /*Scope*/ 20, /*->4791*/
/*4771*/          OPC_CheckPredicate, 73, // Predicate_imm16ShiftedZExt
/*4773*/          OPC_MoveParent,
/*4774*/          OPC_CheckType, MVT::i64,
/*4776*/          OPC_EmitConvertToTarget, 1,
/*4778*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*4781*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDISo8), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ANDISo8:i64:i32 i64:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*4791*/        0, /*End of Scope*/
/*4792*/      /*Scope*/ 11, /*->4804*/
/*4793*/        OPC_CheckType, MVT::i32,
/*4795*/        OPC_MorphNodeTo, TARGET_VAL(PPC::AND), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (AND:i32 i32:i32:$rS, i32:i32:$rB)
/*4804*/      /*Scope*/ 11, /*->4816*/
/*4805*/        OPC_CheckType, MVT::i64,
/*4807*/        OPC_MorphNodeTo, TARGET_VAL(PPC::AND8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 i64:i64:$rS, i64:i64:$rB) - Complexity = 3
                // Dst: (AND8:i64 i64:i64:$rS, i64:i64:$rB)
/*4816*/      /*Scope*/ 13, /*->4830*/
/*4817*/        OPC_CheckType, MVT::v4i32,
/*4819*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4821*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VAND), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
                // Dst: (VAND:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4830*/      0, /*End of Scope*/
/*4831*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 4|128,2/*260*/,  TARGET_VAL(ISD::OR),// ->5096
/*4836*/    OPC_Scope, 46, /*->4884*/ // 3 children in Scope
/*4838*/      OPC_RecordChild0, // #0 = $rS
/*4839*/      OPC_MoveChild, 1,
/*4841*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4844*/      OPC_RecordChild0, // #1 = $rB
/*4845*/      OPC_MoveChild, 1,
/*4847*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4858*/      OPC_MoveParent,
/*4859*/      OPC_MoveParent,
/*4860*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4872
/*4863*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 i32:i32:$rS, (xor:i32 i32:i32:$rB, -1:i32)) - Complexity = 11
                // Dst: (ORC:i32 i32:i32:$rS, i32:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4883
/*4874*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 i64:i64:$rS, (xor:i64 i64:i64:$rB, -1:i64)) - Complexity = 11
                // Dst: (ORC8:i64 i64:i64:$rS, i64:i64:$rB)
              0, // EndSwitchType
/*4884*/    /*Scope*/ 46, /*->4931*/
/*4885*/      OPC_MoveChild, 0,
/*4887*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4890*/      OPC_RecordChild0, // #0 = $rB
/*4891*/      OPC_MoveChild, 1,
/*4893*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4904*/      OPC_MoveParent,
/*4905*/      OPC_MoveParent,
/*4906*/      OPC_RecordChild1, // #1 = $rS
/*4907*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4919
/*4910*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (or:i32 (xor:i32 i32:i32:$rB, -1:i32), i32:i32:$rS) - Complexity = 11
                // Dst: (ORC:i32 i32:i32:$rS, i32:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4930
/*4921*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (or:i64 (xor:i64 i64:i64:$rB, -1:i64), i64:i64:$rS) - Complexity = 11
                // Dst: (ORC8:i64 i64:i64:$rS, i64:i64:$rB)
              0, // EndSwitchType
/*4931*/    /*Scope*/ 34|128,1/*162*/, /*->5095*/
/*4933*/      OPC_RecordChild0, // #0 = $src1
/*4934*/      OPC_RecordChild1, // #1 = $src2
/*4935*/      OPC_Scope, 119, /*->5056*/ // 4 children in Scope
/*4937*/        OPC_MoveChild, 1,
/*4939*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4942*/        OPC_Scope, 19, /*->4963*/ // 5 children in Scope
/*4944*/          OPC_CheckPredicate, 72, // Predicate_immZExt16
/*4946*/          OPC_MoveParent,
/*4947*/          OPC_CheckType, MVT::i32,
/*4949*/          OPC_EmitConvertToTarget, 1,
/*4951*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4954*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ORI:i32 i32:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4963*/        /*Scope*/ 19, /*->4983*/
/*4964*/          OPC_CheckPredicate, 73, // Predicate_imm16ShiftedZExt
/*4966*/          OPC_MoveParent,
/*4967*/          OPC_CheckType, MVT::i32,
/*4969*/          OPC_EmitConvertToTarget, 1,
/*4971*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*4974*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ORIS:i32 i32:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4983*/        /*Scope*/ 19, /*->5003*/
/*4984*/          OPC_CheckPredicate, 72, // Predicate_immZExt16
/*4986*/          OPC_MoveParent,
/*4987*/          OPC_CheckType, MVT::i64,
/*4989*/          OPC_EmitConvertToTarget, 1,
/*4991*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4994*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORI8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ORI8:i64 i64:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*5003*/        /*Scope*/ 19, /*->5023*/
/*5004*/          OPC_CheckPredicate, 73, // Predicate_imm16ShiftedZExt
/*5006*/          OPC_MoveParent,
/*5007*/          OPC_CheckType, MVT::i64,
/*5009*/          OPC_EmitConvertToTarget, 1,
/*5011*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*5014*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ORIS8:i64 i64:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*5023*/        /*Scope*/ 31, /*->5055*/
/*5024*/          OPC_MoveParent,
/*5025*/          OPC_CheckType, MVT::i32,
/*5027*/          OPC_EmitConvertToTarget, 1,
/*5029*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*5032*/          OPC_EmitNode, TARGET_VAL(PPC::ORI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*5041*/          OPC_EmitConvertToTarget, 1,
/*5043*/          OPC_EmitNodeXForm, 0, 5, // HI16
/*5046*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                  // Src: (or:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                  // Dst: (ORIS:i32 (ORI:i32 ?:i32:$in, (LO16:i32 (imm:i32):$imm)), (HI16:i32 (imm:i32):$imm))
/*5055*/        0, /*End of Scope*/
/*5056*/      /*Scope*/ 11, /*->5068*/
/*5057*/        OPC_CheckType, MVT::i32,
/*5059*/        OPC_MorphNodeTo, TARGET_VAL(PPC::OR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (OR:i32 i32:i32:$rS, i32:i32:$rB)
/*5068*/      /*Scope*/ 11, /*->5080*/
/*5069*/        OPC_CheckType, MVT::i64,
/*5071*/        OPC_MorphNodeTo, TARGET_VAL(PPC::OR8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 i64:i64:$rS, i64:i64:$rB) - Complexity = 3
                // Dst: (OR8:i64 i64:i64:$rS, i64:i64:$rB)
/*5080*/      /*Scope*/ 13, /*->5094*/
/*5081*/        OPC_CheckType, MVT::v4i32,
/*5083*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5085*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
                // Dst: (VOR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*5094*/      0, /*End of Scope*/
/*5095*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 30|128,1/*158*/,  TARGET_VAL(PPCISD::Hi),// ->5258
/*5100*/    OPC_RecordChild0, // #0 = $in
/*5101*/    OPC_MoveChild, 0,
/*5103*/    OPC_SwitchOpcode /*5 cases */, 28,  TARGET_VAL(ISD::TargetGlobalAddress),// ->5135
/*5107*/      OPC_MoveParent,
/*5108*/      OPC_MoveChild, 1,
/*5110*/      OPC_CheckInteger, 0, 
/*5112*/      OPC_MoveParent,
/*5113*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5124
/*5116*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tglobaladdr:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tglobaladdr:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5134
/*5126*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tglobaladdr:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetConstantPool),// ->5166
/*5138*/      OPC_MoveParent,
/*5139*/      OPC_MoveChild, 1,
/*5141*/      OPC_CheckInteger, 0, 
/*5143*/      OPC_MoveParent,
/*5144*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5155
/*5147*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tconstpool:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5165
/*5157*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tconstpool:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetJumpTable),// ->5197
/*5169*/      OPC_MoveParent,
/*5170*/      OPC_MoveChild, 1,
/*5172*/      OPC_CheckInteger, 0, 
/*5174*/      OPC_MoveParent,
/*5175*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5186
/*5178*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tjumptable:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tjumptable:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5196
/*5188*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tjumptable:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetBlockAddress),// ->5228
/*5200*/      OPC_MoveParent,
/*5201*/      OPC_MoveChild, 1,
/*5203*/      OPC_CheckInteger, 0, 
/*5205*/      OPC_MoveParent,
/*5206*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5217
/*5209*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tblockaddress:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5227
/*5219*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tblockaddress:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->5257
/*5231*/      OPC_MoveParent,
/*5232*/      OPC_RecordChild1, // #1 = $in
/*5233*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5245
/*5236*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (PPChi:i32 (tglobaltlsaddr:i32):$g, i32:i32:$in) - Complexity = 6
                // Dst: (ADDIS:i32 ?:i32:$in, (tglobaltlsaddr:i32):$g)
              /*SwitchType*/ 9,  MVT::i64,// ->5256
/*5247*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (PPChi:i64 (tglobaltlsaddr:i64):$g, i64:i64:$in) - Complexity = 6
                // Dst: (ADDIS8:i64 ?:i64:$in, (tglobaltlsaddr:i64):$g)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 30|128,1/*158*/,  TARGET_VAL(PPCISD::Lo),// ->5420
/*5262*/    OPC_RecordChild0, // #0 = $in
/*5263*/    OPC_MoveChild, 0,
/*5265*/    OPC_SwitchOpcode /*5 cases */, 28,  TARGET_VAL(ISD::TargetGlobalAddress),// ->5297
/*5269*/      OPC_MoveParent,
/*5270*/      OPC_MoveChild, 1,
/*5272*/      OPC_CheckInteger, 0, 
/*5274*/      OPC_MoveParent,
/*5275*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5286
/*5278*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tglobaladdr:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tglobaladdr:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5296
/*5288*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tglobaladdr:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetConstantPool),// ->5328
/*5300*/      OPC_MoveParent,
/*5301*/      OPC_MoveChild, 1,
/*5303*/      OPC_CheckInteger, 0, 
/*5305*/      OPC_MoveParent,
/*5306*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5317
/*5309*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tconstpool:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5327
/*5319*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tconstpool:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetJumpTable),// ->5359
/*5331*/      OPC_MoveParent,
/*5332*/      OPC_MoveChild, 1,
/*5334*/      OPC_CheckInteger, 0, 
/*5336*/      OPC_MoveParent,
/*5337*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5348
/*5340*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tjumptable:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tjumptable:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5358
/*5350*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tjumptable:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetBlockAddress),// ->5390
/*5362*/      OPC_MoveParent,
/*5363*/      OPC_MoveChild, 1,
/*5365*/      OPC_CheckInteger, 0, 
/*5367*/      OPC_MoveParent,
/*5368*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5379
/*5371*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tblockaddress:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5389
/*5381*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tblockaddress:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->5419
/*5393*/      OPC_MoveParent,
/*5394*/      OPC_RecordChild1, // #1 = $in
/*5395*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5407
/*5398*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (PPClo:i32 (tglobaltlsaddr:i32):$g, i32:i32:$in) - Complexity = 6
                // Dst: (ADDI:i32 ?:i32:$in, (tglobaltlsaddr:i32):$g)
              /*SwitchType*/ 9,  MVT::i64,// ->5418
/*5409*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (PPClo:i64 (tglobaltlsaddr:i64):$g, i64:i64:$in) - Complexity = 6
                // Dst: (ADDI8:i64 ?:i64:$in, (tglobaltlsaddr:i64):$g)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::LFIWAX),// ->5438
/*5423*/    OPC_RecordNode,   // #0 = 'PPClfiwax' chained node
/*5424*/    OPC_RecordChild1, // #1 = $src
/*5425*/    OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5428*/    OPC_EmitMergeInputChains1_0,
/*5429*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LFIWAX), 0|OPFL_Chain,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
            // Src: (PPClfiwax:f64 xoaddr:iPTR:$src) - Complexity = 12
            // Dst: (LFIWAX:f64 xoaddr:iPTR:$src)
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::LFIWZX),// ->5456
/*5441*/    OPC_RecordNode,   // #0 = 'PPClfiwzx' chained node
/*5442*/    OPC_RecordChild1, // #1 = $src
/*5443*/    OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5446*/    OPC_EmitMergeInputChains1_0,
/*5447*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LFIWZX), 0|OPFL_Chain,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
            // Src: (PPClfiwzx:f64 xoaddr:iPTR:$src) - Complexity = 12
            // Dst: (LFIWZX:f64 xoaddr:iPTR:$src)
          /*SwitchOpcode*/ 125,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->5584
/*5459*/    OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*5460*/    OPC_MoveChild, 1,
/*5462*/    OPC_Scope, 20, /*->5484*/ // 6 children in Scope
/*5464*/      OPC_CheckInteger, 58|128,11/*1466*/, 
/*5467*/      OPC_MoveParent,
/*5468*/      OPC_RecordChild2, // #1 = $src
/*5469*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5471*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5474*/      OPC_EmitMergeInputChains1_0,
/*5475*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEBX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v16i8 1466:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEBX:v16i8 xoaddr:iPTR:$src)
/*5484*/    /*Scope*/ 20, /*->5505*/
/*5485*/      OPC_CheckInteger, 59|128,11/*1467*/, 
/*5488*/      OPC_MoveParent,
/*5489*/      OPC_RecordChild2, // #1 = $src
/*5490*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5492*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5495*/      OPC_EmitMergeInputChains1_0,
/*5496*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEHX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v8i16 1467:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEHX:v8i16 xoaddr:iPTR:$src)
/*5505*/    /*Scope*/ 20, /*->5526*/
/*5506*/      OPC_CheckInteger, 60|128,11/*1468*/, 
/*5509*/      OPC_MoveParent,
/*5510*/      OPC_RecordChild2, // #1 = $src
/*5511*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5513*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5516*/      OPC_EmitMergeInputChains1_0,
/*5517*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEWX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 1468:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEWX:v4i32 xoaddr:iPTR:$src)
/*5526*/    /*Scope*/ 20, /*->5547*/
/*5527*/      OPC_CheckInteger, 63|128,11/*1471*/, 
/*5530*/      OPC_MoveParent,
/*5531*/      OPC_RecordChild2, // #1 = $src
/*5532*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5534*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5537*/      OPC_EmitMergeInputChains1_0,
/*5538*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 1471:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVX:v4i32 xoaddr:iPTR:$src)
/*5547*/    /*Scope*/ 20, /*->5568*/
/*5548*/      OPC_CheckInteger, 64|128,11/*1472*/, 
/*5551*/      OPC_MoveParent,
/*5552*/      OPC_RecordChild2, // #1 = $src
/*5553*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5555*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5558*/      OPC_EmitMergeInputChains1_0,
/*5559*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVXL), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 1472:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVXL:v4i32 xoaddr:iPTR:$src)
/*5568*/    /*Scope*/ 14, /*->5583*/
/*5569*/      OPC_CheckInteger, 65|128,11/*1473*/, 
/*5572*/      OPC_MoveParent,
/*5573*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5575*/      OPC_EmitMergeInputChains1_0,
/*5576*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MFVSCR), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v8i16, 0/*#Ops*/, 
              // Src: (intrinsic_w_chain:v8i16 1473:iPTR) - Complexity = 8
              // Dst: (MFVSCR:v8i16)
/*5583*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 48|128,15/*1968*/,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->7556
/*5588*/    OPC_MoveChild, 0,
/*5590*/    OPC_Scope, 19, /*->5611*/ // 103 children in Scope
/*5592*/      OPC_CheckInteger, 61|128,11/*1469*/, 
/*5595*/      OPC_MoveParent,
/*5596*/      OPC_RecordChild1, // #0 = $src
/*5597*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5599*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddrIdxOnly:$src #1 #2
/*5602*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVSL), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_wo_chain:v16i8 1469:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVSL:v16i8 xoaddr:iPTR:$src)
/*5611*/    /*Scope*/ 19, /*->5631*/
/*5612*/      OPC_CheckInteger, 62|128,11/*1470*/, 
/*5615*/      OPC_MoveParent,
/*5616*/      OPC_RecordChild1, // #0 = $src
/*5617*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5619*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddrIdxOnly:$src #1 #2
/*5622*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVSR), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_wo_chain:v16i8 1470:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVSR:v16i8 xoaddr:iPTR:$src)
/*5631*/    /*Scope*/ 44, /*->5676*/
/*5632*/      OPC_CheckInteger, 114|128,11/*1522*/, 
/*5635*/      OPC_MoveParent,
/*5636*/      OPC_RecordChild1, // #0 = $vB
/*5637*/      OPC_Scope, 15, /*->5654*/ // 2 children in Scope
/*5639*/        OPC_MoveChild, 2,
/*5641*/        OPC_CheckInteger, 0, 
/*5643*/        OPC_MoveParent,
/*5644*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5646*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS_0), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1522:iPTR, v4f32:v4f32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCTUXS_0:v4i32 v4f32:v4f32:$vB)
/*5654*/      /*Scope*/ 20, /*->5675*/
/*5655*/        OPC_RecordChild2, // #1 = $UIMM
/*5656*/        OPC_MoveChild, 2,
/*5658*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5661*/        OPC_MoveParent,
/*5662*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5664*/        OPC_EmitConvertToTarget, 1,
/*5666*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1522:iPTR, v4f32:v4f32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCTUXS:v4i32 (imm:i32):$UIMM, v4f32:v4f32:$vB)
/*5675*/      0, /*End of Scope*/
/*5676*/    /*Scope*/ 44, /*->5721*/
/*5677*/      OPC_CheckInteger, 113|128,11/*1521*/, 
/*5680*/      OPC_MoveParent,
/*5681*/      OPC_RecordChild1, // #0 = $vB
/*5682*/      OPC_Scope, 15, /*->5699*/ // 2 children in Scope
/*5684*/        OPC_MoveChild, 2,
/*5686*/        OPC_CheckInteger, 0, 
/*5688*/        OPC_MoveParent,
/*5689*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5691*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS_0), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1521:iPTR, v4f32:v4f32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCTSXS_0:v4i32 v4f32:v4f32:$vB)
/*5699*/      /*Scope*/ 20, /*->5720*/
/*5700*/        OPC_RecordChild2, // #1 = $UIMM
/*5701*/        OPC_MoveChild, 2,
/*5703*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5706*/        OPC_MoveParent,
/*5707*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5709*/        OPC_EmitConvertToTarget, 1,
/*5711*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1521:iPTR, v4f32:v4f32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCTSXS:v4i32 (imm:i32):$UIMM, v4f32:v4f32:$vB)
/*5720*/      0, /*End of Scope*/
/*5721*/    /*Scope*/ 44, /*->5766*/
/*5722*/      OPC_CheckInteger, 85|128,11/*1493*/, 
/*5725*/      OPC_MoveParent,
/*5726*/      OPC_RecordChild1, // #0 = $vB
/*5727*/      OPC_Scope, 15, /*->5744*/ // 2 children in Scope
/*5729*/        OPC_MoveChild, 2,
/*5731*/        OPC_CheckInteger, 0, 
/*5733*/        OPC_MoveParent,
/*5734*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5736*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX_0), 0,
                    1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1493:iPTR, v4i32:v4i32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCFSX_0:v4f32 v4i32:v4i32:$vB)
/*5744*/      /*Scope*/ 20, /*->5765*/
/*5745*/        OPC_RecordChild2, // #1 = $UIMM
/*5746*/        OPC_MoveChild, 2,
/*5748*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5751*/        OPC_MoveParent,
/*5752*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5754*/        OPC_EmitConvertToTarget, 1,
/*5756*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX), 0,
                    1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1493:iPTR, v4i32:v4i32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCFSX:v4f32 (imm:i32):$UIMM, v4i32:v4i32:$vB)
/*5765*/      0, /*End of Scope*/
/*5766*/    /*Scope*/ 44, /*->5811*/
/*5767*/      OPC_CheckInteger, 86|128,11/*1494*/, 
/*5770*/      OPC_MoveParent,
/*5771*/      OPC_RecordChild1, // #0 = $vB
/*5772*/      OPC_Scope, 15, /*->5789*/ // 2 children in Scope
/*5774*/        OPC_MoveChild, 2,
/*5776*/        OPC_CheckInteger, 0, 
/*5778*/        OPC_MoveParent,
/*5779*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5781*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX_0), 0,
                    1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1494:iPTR, v4i32:v4i32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCFUX_0:v4f32 v4i32:v4i32:$vB)
/*5789*/      /*Scope*/ 20, /*->5810*/
/*5790*/        OPC_RecordChild2, // #1 = $UIMM
/*5791*/        OPC_MoveChild, 2,
/*5793*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5796*/        OPC_MoveParent,
/*5797*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5799*/        OPC_EmitConvertToTarget, 1,
/*5801*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX), 0,
                    1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1494:iPTR, v4i32:v4i32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCFUX:v4f32 (imm:i32):$UIMM, v4i32:v4i32:$vB)
/*5810*/      0, /*End of Scope*/
/*5811*/    /*Scope*/ 19, /*->5831*/
/*5812*/      OPC_CheckInteger, 125|128,11/*1533*/, 
/*5815*/      OPC_MoveParent,
/*5816*/      OPC_RecordChild1, // #0 = $vA
/*5817*/      OPC_RecordChild2, // #1 = $vB
/*5818*/      OPC_RecordChild3, // #2 = $vC
/*5819*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5821*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMHADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 1533:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC) - Complexity = 8
              // Dst: (VMHADDSHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC)
/*5831*/    /*Scope*/ 19, /*->5851*/
/*5832*/      OPC_CheckInteger, 126|128,11/*1534*/, 
/*5835*/      OPC_MoveParent,
/*5836*/      OPC_RecordChild1, // #0 = $vA
/*5837*/      OPC_RecordChild2, // #1 = $vB
/*5838*/      OPC_RecordChild3, // #2 = $vC
/*5839*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5841*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMHRADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 1534:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC) - Complexity = 8
              // Dst: (VMHRADDSHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC)
/*5851*/    /*Scope*/ 19, /*->5871*/
/*5852*/      OPC_CheckInteger, 6|128,12/*1542*/, 
/*5855*/      OPC_MoveParent,
/*5856*/      OPC_RecordChild1, // #0 = $vA
/*5857*/      OPC_RecordChild2, // #1 = $vB
/*5858*/      OPC_RecordChild3, // #2 = $vC
/*5859*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5861*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMLADDUHM), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 1542:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC) - Complexity = 8
              // Dst: (VMLADDUHM:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC)
/*5871*/    /*Scope*/ 19, /*->5891*/
/*5872*/      OPC_CheckInteger, 22|128,12/*1558*/, 
/*5875*/      OPC_MoveParent,
/*5876*/      OPC_RecordChild1, // #0 = $vA
/*5877*/      OPC_RecordChild2, // #1 = $vB
/*5878*/      OPC_RecordChild3, // #2 = $vC
/*5879*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5881*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPERM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1558:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB, v16i8:v16i8:$vC) - Complexity = 8
              // Dst: (VPERM:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, v16i8:v16i8:$vC)
/*5891*/    /*Scope*/ 19, /*->5911*/
/*5892*/      OPC_CheckInteger, 39|128,12/*1575*/, 
/*5895*/      OPC_MoveParent,
/*5896*/      OPC_RecordChild1, // #0 = $vA
/*5897*/      OPC_RecordChild2, // #1 = $vB
/*5898*/      OPC_RecordChild3, // #2 = $vC
/*5899*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5901*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSEL), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1575:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VSEL:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, v4i32:v4i32:$vC)
/*5911*/    /*Scope*/ 17, /*->5929*/
/*5912*/      OPC_CheckInteger, 72|128,11/*1480*/, 
/*5915*/      OPC_MoveParent,
/*5916*/      OPC_RecordChild1, // #0 = $vA
/*5917*/      OPC_RecordChild2, // #1 = $vB
/*5918*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5920*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDCUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1480:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VADDCUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*5929*/    /*Scope*/ 17, /*->5947*/
/*5930*/      OPC_CheckInteger, 73|128,11/*1481*/, 
/*5933*/      OPC_MoveParent,
/*5934*/      OPC_RecordChild1, // #0 = $vA
/*5935*/      OPC_RecordChild2, // #1 = $vB
/*5936*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5938*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1481:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VADDSBS:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*5947*/    /*Scope*/ 17, /*->5965*/
/*5948*/      OPC_CheckInteger, 74|128,11/*1482*/, 
/*5951*/      OPC_MoveParent,
/*5952*/      OPC_RecordChild1, // #0 = $vA
/*5953*/      OPC_RecordChild2, // #1 = $vB
/*5954*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5956*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1482:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VADDSHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*5965*/    /*Scope*/ 17, /*->5983*/
/*5966*/      OPC_CheckInteger, 75|128,11/*1483*/, 
/*5969*/      OPC_MoveParent,
/*5970*/      OPC_RecordChild1, // #0 = $vA
/*5971*/      OPC_RecordChild2, // #1 = $vB
/*5972*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5974*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1483:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VADDSWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*5983*/    /*Scope*/ 17, /*->6001*/
/*5984*/      OPC_CheckInteger, 76|128,11/*1484*/, 
/*5987*/      OPC_MoveParent,
/*5988*/      OPC_RecordChild1, // #0 = $vA
/*5989*/      OPC_RecordChild2, // #1 = $vB
/*5990*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5992*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1484:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VADDUBS:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6001*/    /*Scope*/ 17, /*->6019*/
/*6002*/      OPC_CheckInteger, 77|128,11/*1485*/, 
/*6005*/      OPC_MoveParent,
/*6006*/      OPC_RecordChild1, // #0 = $vA
/*6007*/      OPC_RecordChild2, // #1 = $vB
/*6008*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6010*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1485:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VADDUHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6019*/    /*Scope*/ 17, /*->6037*/
/*6020*/      OPC_CheckInteger, 78|128,11/*1486*/, 
/*6023*/      OPC_MoveParent,
/*6024*/      OPC_RecordChild1, // #0 = $vA
/*6025*/      OPC_RecordChild2, // #1 = $vB
/*6026*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6028*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1486:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VADDUWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6037*/    /*Scope*/ 17, /*->6055*/
/*6038*/      OPC_CheckInteger, 79|128,11/*1487*/, 
/*6041*/      OPC_MoveParent,
/*6042*/      OPC_RecordChild1, // #0 = $vA
/*6043*/      OPC_RecordChild2, // #1 = $vB
/*6044*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6046*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1487:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VAVGSB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6055*/    /*Scope*/ 17, /*->6073*/
/*6056*/      OPC_CheckInteger, 80|128,11/*1488*/, 
/*6059*/      OPC_MoveParent,
/*6060*/      OPC_RecordChild1, // #0 = $vA
/*6061*/      OPC_RecordChild2, // #1 = $vB
/*6062*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6064*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1488:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VAVGSH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6073*/    /*Scope*/ 17, /*->6091*/
/*6074*/      OPC_CheckInteger, 81|128,11/*1489*/, 
/*6077*/      OPC_MoveParent,
/*6078*/      OPC_RecordChild1, // #0 = $vA
/*6079*/      OPC_RecordChild2, // #1 = $vB
/*6080*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6082*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1489:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VAVGSW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6091*/    /*Scope*/ 17, /*->6109*/
/*6092*/      OPC_CheckInteger, 82|128,11/*1490*/, 
/*6095*/      OPC_MoveParent,
/*6096*/      OPC_RecordChild1, // #0 = $vA
/*6097*/      OPC_RecordChild2, // #1 = $vB
/*6098*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6100*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1490:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VAVGUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6109*/    /*Scope*/ 17, /*->6127*/
/*6110*/      OPC_CheckInteger, 83|128,11/*1491*/, 
/*6113*/      OPC_MoveParent,
/*6114*/      OPC_RecordChild1, // #0 = $vA
/*6115*/      OPC_RecordChild2, // #1 = $vB
/*6116*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6118*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1491:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VAVGUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6127*/    /*Scope*/ 17, /*->6145*/
/*6128*/      OPC_CheckInteger, 84|128,11/*1492*/, 
/*6131*/      OPC_MoveParent,
/*6132*/      OPC_RecordChild1, // #0 = $vA
/*6133*/      OPC_RecordChild2, // #1 = $vB
/*6134*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6136*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1492:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VAVGUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6145*/    /*Scope*/ 17, /*->6163*/
/*6146*/      OPC_CheckInteger, 119|128,11/*1527*/, 
/*6149*/      OPC_MoveParent,
/*6150*/      OPC_RecordChild1, // #0 = $vA
/*6151*/      OPC_RecordChild2, // #1 = $vB
/*6152*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6154*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1527:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMAXSB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6163*/    /*Scope*/ 17, /*->6181*/
/*6164*/      OPC_CheckInteger, 120|128,11/*1528*/, 
/*6167*/      OPC_MoveParent,
/*6168*/      OPC_RecordChild1, // #0 = $vA
/*6169*/      OPC_RecordChild2, // #1 = $vB
/*6170*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6172*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1528:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMAXSH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6181*/    /*Scope*/ 17, /*->6199*/
/*6182*/      OPC_CheckInteger, 121|128,11/*1529*/, 
/*6185*/      OPC_MoveParent,
/*6186*/      OPC_RecordChild1, // #0 = $vA
/*6187*/      OPC_RecordChild2, // #1 = $vB
/*6188*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6190*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1529:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VMAXSW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6199*/    /*Scope*/ 17, /*->6217*/
/*6200*/      OPC_CheckInteger, 122|128,11/*1530*/, 
/*6203*/      OPC_MoveParent,
/*6204*/      OPC_RecordChild1, // #0 = $vA
/*6205*/      OPC_RecordChild2, // #1 = $vB
/*6206*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6208*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1530:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMAXUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6217*/    /*Scope*/ 17, /*->6235*/
/*6218*/      OPC_CheckInteger, 123|128,11/*1531*/, 
/*6221*/      OPC_MoveParent,
/*6222*/      OPC_RecordChild1, // #0 = $vA
/*6223*/      OPC_RecordChild2, // #1 = $vB
/*6224*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6226*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1531:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMAXUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6235*/    /*Scope*/ 17, /*->6253*/
/*6236*/      OPC_CheckInteger, 124|128,11/*1532*/, 
/*6239*/      OPC_MoveParent,
/*6240*/      OPC_RecordChild1, // #0 = $vA
/*6241*/      OPC_RecordChild2, // #1 = $vB
/*6242*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6244*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1532:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VMAXUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6253*/    /*Scope*/ 17, /*->6271*/
/*6254*/      OPC_CheckInteger, 0|128,12/*1536*/, 
/*6257*/      OPC_MoveParent,
/*6258*/      OPC_RecordChild1, // #0 = $vA
/*6259*/      OPC_RecordChild2, // #1 = $vB
/*6260*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6262*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1536:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMINSB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6271*/    /*Scope*/ 17, /*->6289*/
/*6272*/      OPC_CheckInteger, 1|128,12/*1537*/, 
/*6275*/      OPC_MoveParent,
/*6276*/      OPC_RecordChild1, // #0 = $vA
/*6277*/      OPC_RecordChild2, // #1 = $vB
/*6278*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6280*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1537:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMINSH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6289*/    /*Scope*/ 17, /*->6307*/
/*6290*/      OPC_CheckInteger, 2|128,12/*1538*/, 
/*6293*/      OPC_MoveParent,
/*6294*/      OPC_RecordChild1, // #0 = $vA
/*6295*/      OPC_RecordChild2, // #1 = $vB
/*6296*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6298*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1538:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VMINSW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6307*/    /*Scope*/ 17, /*->6325*/
/*6308*/      OPC_CheckInteger, 3|128,12/*1539*/, 
/*6311*/      OPC_MoveParent,
/*6312*/      OPC_RecordChild1, // #0 = $vA
/*6313*/      OPC_RecordChild2, // #1 = $vB
/*6314*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6316*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1539:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMINUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6325*/    /*Scope*/ 17, /*->6343*/
/*6326*/      OPC_CheckInteger, 4|128,12/*1540*/, 
/*6329*/      OPC_MoveParent,
/*6330*/      OPC_RecordChild1, // #0 = $vA
/*6331*/      OPC_RecordChild2, // #1 = $vB
/*6332*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6334*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1540:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMINUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6343*/    /*Scope*/ 17, /*->6361*/
/*6344*/      OPC_CheckInteger, 5|128,12/*1541*/, 
/*6347*/      OPC_MoveParent,
/*6348*/      OPC_RecordChild1, // #0 = $vA
/*6349*/      OPC_RecordChild2, // #1 = $vB
/*6350*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6352*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1541:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VMINUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6361*/    /*Scope*/ 19, /*->6381*/
/*6362*/      OPC_CheckInteger, 7|128,12/*1543*/, 
/*6365*/      OPC_MoveParent,
/*6366*/      OPC_RecordChild1, // #0 = $vA
/*6367*/      OPC_RecordChild2, // #1 = $vB
/*6368*/      OPC_RecordChild3, // #2 = $vC
/*6369*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6371*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMMBM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1543:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMMBM:v4i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB, v4i32:v4i32:$vC)
/*6381*/    /*Scope*/ 19, /*->6401*/
/*6382*/      OPC_CheckInteger, 8|128,12/*1544*/, 
/*6385*/      OPC_MoveParent,
/*6386*/      OPC_RecordChild1, // #0 = $vA
/*6387*/      OPC_RecordChild2, // #1 = $vB
/*6388*/      OPC_RecordChild3, // #2 = $vC
/*6389*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6391*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMSHM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1544:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMSHM:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC)
/*6401*/    /*Scope*/ 19, /*->6421*/
/*6402*/      OPC_CheckInteger, 9|128,12/*1545*/, 
/*6405*/      OPC_MoveParent,
/*6406*/      OPC_RecordChild1, // #0 = $vA
/*6407*/      OPC_RecordChild2, // #1 = $vB
/*6408*/      OPC_RecordChild3, // #2 = $vC
/*6409*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6411*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMSHS), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1545:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMSHS:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC)
/*6421*/    /*Scope*/ 19, /*->6441*/
/*6422*/      OPC_CheckInteger, 10|128,12/*1546*/, 
/*6425*/      OPC_MoveParent,
/*6426*/      OPC_RecordChild1, // #0 = $vA
/*6427*/      OPC_RecordChild2, // #1 = $vB
/*6428*/      OPC_RecordChild3, // #2 = $vC
/*6429*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6431*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUBM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1546:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUBM:v4i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB, v4i32:v4i32:$vC)
/*6441*/    /*Scope*/ 19, /*->6461*/
/*6442*/      OPC_CheckInteger, 11|128,12/*1547*/, 
/*6445*/      OPC_MoveParent,
/*6446*/      OPC_RecordChild1, // #0 = $vA
/*6447*/      OPC_RecordChild2, // #1 = $vB
/*6448*/      OPC_RecordChild3, // #2 = $vC
/*6449*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6451*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUHM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1547:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUHM:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC)
/*6461*/    /*Scope*/ 19, /*->6481*/
/*6462*/      OPC_CheckInteger, 12|128,12/*1548*/, 
/*6465*/      OPC_MoveParent,
/*6466*/      OPC_RecordChild1, // #0 = $vA
/*6467*/      OPC_RecordChild2, // #1 = $vB
/*6468*/      OPC_RecordChild3, // #2 = $vC
/*6469*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6471*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUHS), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1548:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUHS:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC)
/*6481*/    /*Scope*/ 17, /*->6499*/
/*6482*/      OPC_CheckInteger, 13|128,12/*1549*/, 
/*6485*/      OPC_MoveParent,
/*6486*/      OPC_RecordChild1, // #0 = $vA
/*6487*/      OPC_RecordChild2, // #1 = $vB
/*6488*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6490*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULESB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1549:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMULESB:v8i16 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6499*/    /*Scope*/ 17, /*->6517*/
/*6500*/      OPC_CheckInteger, 14|128,12/*1550*/, 
/*6503*/      OPC_MoveParent,
/*6504*/      OPC_RecordChild1, // #0 = $vA
/*6505*/      OPC_RecordChild2, // #1 = $vB
/*6506*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6508*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULESH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1550:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMULESH:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6517*/    /*Scope*/ 17, /*->6535*/
/*6518*/      OPC_CheckInteger, 15|128,12/*1551*/, 
/*6521*/      OPC_MoveParent,
/*6522*/      OPC_RecordChild1, // #0 = $vA
/*6523*/      OPC_RecordChild2, // #1 = $vB
/*6524*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6526*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULEUB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1551:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMULEUB:v8i16 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6535*/    /*Scope*/ 17, /*->6553*/
/*6536*/      OPC_CheckInteger, 16|128,12/*1552*/, 
/*6539*/      OPC_MoveParent,
/*6540*/      OPC_RecordChild1, // #0 = $vA
/*6541*/      OPC_RecordChild2, // #1 = $vB
/*6542*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6544*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULEUH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1552:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMULEUH:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6553*/    /*Scope*/ 17, /*->6571*/
/*6554*/      OPC_CheckInteger, 17|128,12/*1553*/, 
/*6557*/      OPC_MoveParent,
/*6558*/      OPC_RecordChild1, // #0 = $vA
/*6559*/      OPC_RecordChild2, // #1 = $vB
/*6560*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6562*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOSB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1553:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMULOSB:v8i16 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6571*/    /*Scope*/ 17, /*->6589*/
/*6572*/      OPC_CheckInteger, 18|128,12/*1554*/, 
/*6575*/      OPC_MoveParent,
/*6576*/      OPC_RecordChild1, // #0 = $vA
/*6577*/      OPC_RecordChild2, // #1 = $vB
/*6578*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6580*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOSH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1554:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMULOSH:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6589*/    /*Scope*/ 17, /*->6607*/
/*6590*/      OPC_CheckInteger, 19|128,12/*1555*/, 
/*6593*/      OPC_MoveParent,
/*6594*/      OPC_RecordChild1, // #0 = $vA
/*6595*/      OPC_RecordChild2, // #1 = $vB
/*6596*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6598*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOUB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1555:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMULOUB:v8i16 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6607*/    /*Scope*/ 17, /*->6625*/
/*6608*/      OPC_CheckInteger, 20|128,12/*1556*/, 
/*6611*/      OPC_MoveParent,
/*6612*/      OPC_RecordChild1, // #0 = $vA
/*6613*/      OPC_RecordChild2, // #1 = $vB
/*6614*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6616*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOUH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1556:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMULOUH:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6625*/    /*Scope*/ 17, /*->6643*/
/*6626*/      OPC_CheckInteger, 53|128,12/*1589*/, 
/*6629*/      OPC_MoveParent,
/*6630*/      OPC_RecordChild1, // #0 = $vA
/*6631*/      OPC_RecordChild2, // #1 = $vB
/*6632*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6634*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBCUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1589:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBCUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6643*/    /*Scope*/ 17, /*->6661*/
/*6644*/      OPC_CheckInteger, 54|128,12/*1590*/, 
/*6647*/      OPC_MoveParent,
/*6648*/      OPC_RecordChild1, // #0 = $vA
/*6649*/      OPC_RecordChild2, // #1 = $vB
/*6650*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6652*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1590:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSUBSBS:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6661*/    /*Scope*/ 17, /*->6679*/
/*6662*/      OPC_CheckInteger, 55|128,12/*1591*/, 
/*6665*/      OPC_MoveParent,
/*6666*/      OPC_RecordChild1, // #0 = $vA
/*6667*/      OPC_RecordChild2, // #1 = $vB
/*6668*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6670*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1591:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSUBSHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6679*/    /*Scope*/ 17, /*->6697*/
/*6680*/      OPC_CheckInteger, 56|128,12/*1592*/, 
/*6683*/      OPC_MoveParent,
/*6684*/      OPC_RecordChild1, // #0 = $vA
/*6685*/      OPC_RecordChild2, // #1 = $vB
/*6686*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6688*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1592:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBSWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6697*/    /*Scope*/ 17, /*->6715*/
/*6698*/      OPC_CheckInteger, 57|128,12/*1593*/, 
/*6701*/      OPC_MoveParent,
/*6702*/      OPC_RecordChild1, // #0 = $vA
/*6703*/      OPC_RecordChild2, // #1 = $vB
/*6704*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6706*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1593:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSUBUBS:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6715*/    /*Scope*/ 17, /*->6733*/
/*6716*/      OPC_CheckInteger, 58|128,12/*1594*/, 
/*6719*/      OPC_MoveParent,
/*6720*/      OPC_RecordChild1, // #0 = $vA
/*6721*/      OPC_RecordChild2, // #1 = $vB
/*6722*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6724*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1594:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSUBUHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6733*/    /*Scope*/ 17, /*->6751*/
/*6734*/      OPC_CheckInteger, 59|128,12/*1595*/, 
/*6737*/      OPC_MoveParent,
/*6738*/      OPC_RecordChild1, // #0 = $vA
/*6739*/      OPC_RecordChild2, // #1 = $vB
/*6740*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6742*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1595:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBUWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6751*/    /*Scope*/ 17, /*->6769*/
/*6752*/      OPC_CheckInteger, 64|128,12/*1600*/, 
/*6755*/      OPC_MoveParent,
/*6756*/      OPC_RecordChild1, // #0 = $vA
/*6757*/      OPC_RecordChild2, // #1 = $vB
/*6758*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6760*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUMSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1600:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUMSWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6769*/    /*Scope*/ 17, /*->6787*/
/*6770*/      OPC_CheckInteger, 60|128,12/*1596*/, 
/*6773*/      OPC_MoveParent,
/*6774*/      OPC_RecordChild1, // #0 = $vA
/*6775*/      OPC_RecordChild2, // #1 = $vB
/*6776*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6778*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM2SWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1596:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM2SWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6787*/    /*Scope*/ 17, /*->6805*/
/*6788*/      OPC_CheckInteger, 61|128,12/*1597*/, 
/*6791*/      OPC_MoveParent,
/*6792*/      OPC_RecordChild1, // #0 = $vA
/*6793*/      OPC_RecordChild2, // #1 = $vB
/*6794*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6796*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4SBS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1597:iPTR, v16i8:v16i8:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4SBS:v4i32 v16i8:v16i8:$vA, v4i32:v4i32:$vB)
/*6805*/    /*Scope*/ 17, /*->6823*/
/*6806*/      OPC_CheckInteger, 62|128,12/*1598*/, 
/*6809*/      OPC_MoveParent,
/*6810*/      OPC_RecordChild1, // #0 = $vA
/*6811*/      OPC_RecordChild2, // #1 = $vB
/*6812*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6814*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4SHS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1598:iPTR, v8i16:v8i16:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4SHS:v4i32 v8i16:v8i16:$vA, v4i32:v4i32:$vB)
/*6823*/    /*Scope*/ 17, /*->6841*/
/*6824*/      OPC_CheckInteger, 63|128,12/*1599*/, 
/*6827*/      OPC_MoveParent,
/*6828*/      OPC_RecordChild1, // #0 = $vA
/*6829*/      OPC_RecordChild2, // #1 = $vB
/*6830*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6832*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4UBS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1599:iPTR, v16i8:v16i8:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4UBS:v4i32 v16i8:v16i8:$vA, v4i32:v4i32:$vB)
/*6841*/    /*Scope*/ 17, /*->6859*/
/*6842*/      OPC_CheckInteger, 35|128,12/*1571*/, 
/*6845*/      OPC_MoveParent,
/*6846*/      OPC_RecordChild1, // #0 = $vA
/*6847*/      OPC_RecordChild2, // #1 = $vB
/*6848*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6850*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1571:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VRLB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6859*/    /*Scope*/ 17, /*->6877*/
/*6860*/      OPC_CheckInteger, 36|128,12/*1572*/, 
/*6863*/      OPC_MoveParent,
/*6864*/      OPC_RecordChild1, // #0 = $vA
/*6865*/      OPC_RecordChild2, // #1 = $vB
/*6866*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6868*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1572:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VRLH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6877*/    /*Scope*/ 17, /*->6895*/
/*6878*/      OPC_CheckInteger, 37|128,12/*1573*/, 
/*6881*/      OPC_MoveParent,
/*6882*/      OPC_RecordChild1, // #0 = $vA
/*6883*/      OPC_RecordChild2, // #1 = $vB
/*6884*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6886*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1573:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VRLW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6895*/    /*Scope*/ 17, /*->6913*/
/*6896*/      OPC_CheckInteger, 40|128,12/*1576*/, 
/*6899*/      OPC_MoveParent,
/*6900*/      OPC_RecordChild1, // #0 = $vA
/*6901*/      OPC_RecordChild2, // #1 = $vB
/*6902*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6904*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSL), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1576:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSL:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6913*/    /*Scope*/ 17, /*->6931*/
/*6914*/      OPC_CheckInteger, 43|128,12/*1579*/, 
/*6917*/      OPC_MoveParent,
/*6918*/      OPC_RecordChild1, // #0 = $vA
/*6919*/      OPC_RecordChild2, // #1 = $vB
/*6920*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6922*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLO), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1579:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSLO:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6931*/    /*Scope*/ 17, /*->6949*/
/*6932*/      OPC_CheckInteger, 41|128,12/*1577*/, 
/*6935*/      OPC_MoveParent,
/*6936*/      OPC_RecordChild1, // #0 = $vA
/*6937*/      OPC_RecordChild2, // #1 = $vB
/*6938*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6940*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1577:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSLB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6949*/    /*Scope*/ 17, /*->6967*/
/*6950*/      OPC_CheckInteger, 42|128,12/*1578*/, 
/*6953*/      OPC_MoveParent,
/*6954*/      OPC_RecordChild1, // #0 = $vA
/*6955*/      OPC_RecordChild2, // #1 = $vB
/*6956*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6958*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1578:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSLH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6967*/    /*Scope*/ 17, /*->6985*/
/*6968*/      OPC_CheckInteger, 44|128,12/*1580*/, 
/*6971*/      OPC_MoveParent,
/*6972*/      OPC_RecordChild1, // #0 = $vA
/*6973*/      OPC_RecordChild2, // #1 = $vB
/*6974*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6976*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1580:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSLW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6985*/    /*Scope*/ 17, /*->7003*/
/*6986*/      OPC_CheckInteger, 45|128,12/*1581*/, 
/*6989*/      OPC_MoveParent,
/*6990*/      OPC_RecordChild1, // #0 = $vA
/*6991*/      OPC_RecordChild2, // #1 = $vB
/*6992*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6994*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1581:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*7003*/    /*Scope*/ 17, /*->7021*/
/*7004*/      OPC_CheckInteger, 51|128,12/*1587*/, 
/*7007*/      OPC_MoveParent,
/*7008*/      OPC_RecordChild1, // #0 = $vA
/*7009*/      OPC_RecordChild2, // #1 = $vB
/*7010*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7012*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRO), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1587:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSRO:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*7021*/    /*Scope*/ 17, /*->7039*/
/*7022*/      OPC_CheckInteger, 46|128,12/*1582*/, 
/*7025*/      OPC_MoveParent,
/*7026*/      OPC_RecordChild1, // #0 = $vA
/*7027*/      OPC_RecordChild2, // #1 = $vB
/*7028*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7030*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1582:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSRAB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*7039*/    /*Scope*/ 17, /*->7057*/
/*7040*/      OPC_CheckInteger, 47|128,12/*1583*/, 
/*7043*/      OPC_MoveParent,
/*7044*/      OPC_RecordChild1, // #0 = $vA
/*7045*/      OPC_RecordChild2, // #1 = $vB
/*7046*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7048*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1583:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSRAH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*7057*/    /*Scope*/ 17, /*->7075*/
/*7058*/      OPC_CheckInteger, 48|128,12/*1584*/, 
/*7061*/      OPC_MoveParent,
/*7062*/      OPC_RecordChild1, // #0 = $vA
/*7063*/      OPC_RecordChild2, // #1 = $vB
/*7064*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7066*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1584:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSRAW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*7075*/    /*Scope*/ 17, /*->7093*/
/*7076*/      OPC_CheckInteger, 49|128,12/*1585*/, 
/*7079*/      OPC_MoveParent,
/*7080*/      OPC_RecordChild1, // #0 = $vA
/*7081*/      OPC_RecordChild2, // #1 = $vB
/*7082*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7084*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1585:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSRB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*7093*/    /*Scope*/ 17, /*->7111*/
/*7094*/      OPC_CheckInteger, 50|128,12/*1586*/, 
/*7097*/      OPC_MoveParent,
/*7098*/      OPC_RecordChild1, // #0 = $vA
/*7099*/      OPC_RecordChild2, // #1 = $vB
/*7100*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7102*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1586:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSRH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*7111*/    /*Scope*/ 17, /*->7129*/
/*7112*/      OPC_CheckInteger, 52|128,12/*1588*/, 
/*7115*/      OPC_MoveParent,
/*7116*/      OPC_RecordChild1, // #0 = $vA
/*7117*/      OPC_RecordChild2, // #1 = $vB
/*7118*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7120*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1588:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSRW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*7129*/    /*Scope*/ 17, /*->7147*/
/*7130*/      OPC_CheckInteger, 23|128,12/*1559*/, 
/*7133*/      OPC_MoveParent,
/*7134*/      OPC_RecordChild1, // #0 = $vA
/*7135*/      OPC_RecordChild2, // #1 = $vB
/*7136*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7138*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKPX), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1559:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VPKPX:v8i16 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*7147*/    /*Scope*/ 17, /*->7165*/
/*7148*/      OPC_CheckInteger, 24|128,12/*1560*/, 
/*7151*/      OPC_MoveParent,
/*7152*/      OPC_RecordChild1, // #0 = $vA
/*7153*/      OPC_RecordChild2, // #1 = $vB
/*7154*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7156*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSHSS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1560:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VPKSHSS:v16i8 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*7165*/    /*Scope*/ 17, /*->7183*/
/*7166*/      OPC_CheckInteger, 25|128,12/*1561*/, 
/*7169*/      OPC_MoveParent,
/*7170*/      OPC_RecordChild1, // #0 = $vA
/*7171*/      OPC_RecordChild2, // #1 = $vB
/*7172*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7174*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSHUS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1561:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VPKSHUS:v16i8 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*7183*/    /*Scope*/ 17, /*->7201*/
/*7184*/      OPC_CheckInteger, 26|128,12/*1562*/, 
/*7187*/      OPC_MoveParent,
/*7188*/      OPC_RecordChild1, // #0 = $vA
/*7189*/      OPC_RecordChild2, // #1 = $vB
/*7190*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7192*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSWSS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1562:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VPKSWSS:v16i8 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*7201*/    /*Scope*/ 17, /*->7219*/
/*7202*/      OPC_CheckInteger, 27|128,12/*1563*/, 
/*7205*/      OPC_MoveParent,
/*7206*/      OPC_RecordChild1, // #0 = $vA
/*7207*/      OPC_RecordChild2, // #1 = $vB
/*7208*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7210*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSWUS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1563:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VPKSWUS:v8i16 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*7219*/    /*Scope*/ 17, /*->7237*/
/*7220*/      OPC_CheckInteger, 28|128,12/*1564*/, 
/*7223*/      OPC_MoveParent,
/*7224*/      OPC_RecordChild1, // #0 = $vA
/*7225*/      OPC_RecordChild2, // #1 = $vB
/*7226*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7228*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1564:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VPKUHUS:v16i8 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*7237*/    /*Scope*/ 17, /*->7255*/
/*7238*/      OPC_CheckInteger, 29|128,12/*1565*/, 
/*7241*/      OPC_MoveParent,
/*7242*/      OPC_RecordChild1, // #0 = $vA
/*7243*/      OPC_RecordChild2, // #1 = $vB
/*7244*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7246*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1565:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VPKUWUS:v8i16 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*7255*/    /*Scope*/ 15, /*->7271*/
/*7256*/      OPC_CheckInteger, 65|128,12/*1601*/, 
/*7259*/      OPC_MoveParent,
/*7260*/      OPC_RecordChild1, // #0 = $vB
/*7261*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7263*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHPX), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1601:iPTR, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKHPX:v4i32 v8i16:v8i16:$vB)
/*7271*/    /*Scope*/ 15, /*->7287*/
/*7272*/      OPC_CheckInteger, 66|128,12/*1602*/, 
/*7275*/      OPC_MoveParent,
/*7276*/      OPC_RecordChild1, // #0 = $vB
/*7277*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7279*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHSB), 0,
                  1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v8i16 1602:iPTR, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VUPKHSB:v8i16 v16i8:v16i8:$vB)
/*7287*/    /*Scope*/ 15, /*->7303*/
/*7288*/      OPC_CheckInteger, 67|128,12/*1603*/, 
/*7291*/      OPC_MoveParent,
/*7292*/      OPC_RecordChild1, // #0 = $vB
/*7293*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7295*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHSH), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1603:iPTR, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKHSH:v4i32 v8i16:v8i16:$vB)
/*7303*/    /*Scope*/ 15, /*->7319*/
/*7304*/      OPC_CheckInteger, 68|128,12/*1604*/, 
/*7307*/      OPC_MoveParent,
/*7308*/      OPC_RecordChild1, // #0 = $vB
/*7309*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7311*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLPX), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1604:iPTR, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKLPX:v4i32 v8i16:v8i16:$vB)
/*7319*/    /*Scope*/ 15, /*->7335*/
/*7320*/      OPC_CheckInteger, 69|128,12/*1605*/, 
/*7323*/      OPC_MoveParent,
/*7324*/      OPC_RecordChild1, // #0 = $vB
/*7325*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7327*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLSB), 0,
                  1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v8i16 1605:iPTR, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VUPKLSB:v8i16 v16i8:v16i8:$vB)
/*7335*/    /*Scope*/ 15, /*->7351*/
/*7336*/      OPC_CheckInteger, 70|128,12/*1606*/, 
/*7339*/      OPC_MoveParent,
/*7340*/      OPC_RecordChild1, // #0 = $vB
/*7341*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7343*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLSH), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1606:iPTR, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKLSH:v4i32 v8i16:v8i16:$vB)
/*7351*/    /*Scope*/ 15, /*->7367*/
/*7352*/      OPC_CheckInteger, 115|128,11/*1523*/, 
/*7355*/      OPC_MoveParent,
/*7356*/      OPC_RecordChild1, // #0 = $vB
/*7357*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7359*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VEXPTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1523:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VEXPTEFP:v4f32 v4f32:v4f32:$vB)
/*7367*/    /*Scope*/ 15, /*->7383*/
/*7368*/      OPC_CheckInteger, 116|128,11/*1524*/, 
/*7371*/      OPC_MoveParent,
/*7372*/      OPC_RecordChild1, // #0 = $vB
/*7373*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7375*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VLOGEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1524:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VLOGEFP:v4f32 v4f32:v4f32:$vB)
/*7383*/    /*Scope*/ 17, /*->7401*/
/*7384*/      OPC_CheckInteger, 118|128,11/*1526*/, 
/*7387*/      OPC_MoveParent,
/*7388*/      OPC_RecordChild1, // #0 = $vA
/*7389*/      OPC_RecordChild2, // #1 = $vB
/*7390*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7392*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4f32 1526:iPTR, v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VMAXFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*7401*/    /*Scope*/ 17, /*->7419*/
/*7402*/      OPC_CheckInteger, 127|128,11/*1535*/, 
/*7405*/      OPC_MoveParent,
/*7406*/      OPC_RecordChild1, // #0 = $vA
/*7407*/      OPC_RecordChild2, // #1 = $vB
/*7408*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7410*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4f32 1535:iPTR, v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VMINFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*7419*/    /*Scope*/ 15, /*->7435*/
/*7420*/      OPC_CheckInteger, 30|128,12/*1566*/, 
/*7423*/      OPC_MoveParent,
/*7424*/      OPC_RecordChild1, // #0 = $vB
/*7425*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7427*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VREFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1566:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VREFP:v4f32 v4f32:v4f32:$vB)
/*7435*/    /*Scope*/ 15, /*->7451*/
/*7436*/      OPC_CheckInteger, 31|128,12/*1567*/, 
/*7439*/      OPC_MoveParent,
/*7440*/      OPC_RecordChild1, // #0 = $vB
/*7441*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7443*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIM), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1567:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIM:v4f32 v4f32:v4f32:$vB)
/*7451*/    /*Scope*/ 15, /*->7467*/
/*7452*/      OPC_CheckInteger, 32|128,12/*1568*/, 
/*7455*/      OPC_MoveParent,
/*7456*/      OPC_RecordChild1, // #0 = $vB
/*7457*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7459*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIN), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1568:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIN:v4f32 v4f32:v4f32:$vB)
/*7467*/    /*Scope*/ 15, /*->7483*/
/*7468*/      OPC_CheckInteger, 33|128,12/*1569*/, 
/*7471*/      OPC_MoveParent,
/*7472*/      OPC_RecordChild1, // #0 = $vB
/*7473*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7475*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1569:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIP:v4f32 v4f32:v4f32:$vB)
/*7483*/    /*Scope*/ 15, /*->7499*/
/*7484*/      OPC_CheckInteger, 34|128,12/*1570*/, 
/*7487*/      OPC_MoveParent,
/*7488*/      OPC_RecordChild1, // #0 = $vB
/*7489*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7491*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIZ), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1570:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIZ:v4f32 v4f32:v4f32:$vB)
/*7499*/    /*Scope*/ 15, /*->7515*/
/*7500*/      OPC_CheckInteger, 38|128,12/*1574*/, 
/*7503*/      OPC_MoveParent,
/*7504*/      OPC_RecordChild1, // #0 = $vB
/*7505*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7507*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRSQRTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1574:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRSQRTEFP:v4f32 v4f32:v4f32:$vB)
/*7515*/    /*Scope*/ 19, /*->7535*/
/*7516*/      OPC_CheckInteger, 117|128,11/*1525*/, 
/*7519*/      OPC_MoveParent,
/*7520*/      OPC_RecordChild1, // #0 = $A
/*7521*/      OPC_RecordChild2, // #1 = $B
/*7522*/      OPC_RecordChild3, // #2 = $C
/*7523*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7525*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4f32 1525:iPTR, v4f32:v4f32:$A, v4f32:v4f32:$B, v4f32:v4f32:$C) - Complexity = 8
              // Dst: (VMADDFP:v4f32 ?:v4f32:$A, ?:v4f32:$B, ?:v4f32:$C)
/*7535*/    /*Scope*/ 19, /*->7555*/
/*7536*/      OPC_CheckInteger, 21|128,12/*1557*/, 
/*7539*/      OPC_MoveParent,
/*7540*/      OPC_RecordChild1, // #0 = $A
/*7541*/      OPC_RecordChild2, // #1 = $B
/*7542*/      OPC_RecordChild3, // #2 = $C
/*7543*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7545*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4f32 1557:iPTR, v4f32:v4f32:$A, v4f32:v4f32:$B, v4f32:v4f32:$C) - Complexity = 8
              // Dst: (VNMSUBFP:v4f32 ?:v4f32:$A, ?:v4f32:$B, ?:v4f32:$C)
/*7555*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(PPCISD::STCX),// ->7599
/*7559*/    OPC_RecordNode,   // #0 = 'PPCstcx' chained node
/*7560*/    OPC_RecordChild1, // #1 = $rS
/*7561*/    OPC_Scope, 17, /*->7580*/ // 2 children in Scope
/*7563*/      OPC_CheckChild1Type, MVT::i32,
/*7565*/      OPC_RecordChild2, // #2 = $dst
/*7566*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7569*/      OPC_EmitMergeInputChains1_0,
/*7570*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STWCX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstcx i32:i32:$rS, xoaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STWCX:i32 i32:i32:$rS, xoaddr:iPTR:$dst)
/*7580*/    /*Scope*/ 17, /*->7598*/
/*7581*/      OPC_CheckChild1Type, MVT::i64,
/*7583*/      OPC_RecordChild2, // #2 = $dst
/*7584*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7587*/      OPC_EmitMergeInputChains1_0,
/*7588*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STDCX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstcx i64:i64:$rS, xoaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STDCX:i32 i64:i64:$rS, xoaddr:iPTR:$dst)
/*7598*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 68,  TARGET_VAL(PPCISD::STBRX),// ->7670
/*7602*/    OPC_RecordNode,   // #0 = 'PPCstbrx' chained node
/*7603*/    OPC_RecordChild1, // #1 = $rS
/*7604*/    OPC_Scope, 41, /*->7647*/ // 2 children in Scope
/*7606*/      OPC_CheckChild1Type, MVT::i32,
/*7608*/      OPC_RecordChild2, // #2 = $dst
/*7609*/      OPC_MoveChild, 3,
/*7611*/      OPC_Scope, 16, /*->7629*/ // 2 children in Scope
/*7613*/        OPC_CheckValueType, MVT::i16,
/*7615*/        OPC_MoveParent,
/*7616*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7619*/        OPC_EmitMergeInputChains1_0,
/*7620*/        OPC_MorphNodeTo, TARGET_VAL(PPC::STHBRX), 0|OPFL_Chain,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (PPCstbrx i32:i32:$rS, xoaddr:iPTR:$dst, i16:Other) - Complexity = 12
                // Dst: (STHBRX i32:i32:$rS, xoaddr:iPTR:$dst)
/*7629*/      /*Scope*/ 16, /*->7646*/
/*7630*/        OPC_CheckValueType, MVT::i32,
/*7632*/        OPC_MoveParent,
/*7633*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7636*/        OPC_EmitMergeInputChains1_0,
/*7637*/        OPC_MorphNodeTo, TARGET_VAL(PPC::STWBRX), 0|OPFL_Chain,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (PPCstbrx i32:i32:$rS, xoaddr:iPTR:$dst, i32:Other) - Complexity = 12
                // Dst: (STWBRX i32:i32:$rS, xoaddr:iPTR:$dst)
/*7646*/      0, /*End of Scope*/
/*7647*/    /*Scope*/ 21, /*->7669*/
/*7648*/      OPC_CheckChild1Type, MVT::i64,
/*7650*/      OPC_RecordChild2, // #2 = $dst
/*7651*/      OPC_MoveChild, 3,
/*7653*/      OPC_CheckValueType, MVT::i64,
/*7655*/      OPC_MoveParent,
/*7656*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7659*/      OPC_EmitMergeInputChains1_0,
/*7660*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STDBRX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstbrx i64:i64:$rS, xoaddr:iPTR:$dst, i64:Other) - Complexity = 12
              // Dst: (STDBRX i64:i64:$rS, xoaddr:iPTR:$dst)
/*7669*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(PPCISD::STFIWX),// ->7689
/*7673*/    OPC_RecordNode,   // #0 = 'PPCstfiwx' chained node
/*7674*/    OPC_RecordChild1, // #1 = $frS
/*7675*/    OPC_RecordChild2, // #2 = $dst
/*7676*/    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7679*/    OPC_EmitMergeInputChains1_0,
/*7680*/    OPC_MorphNodeTo, TARGET_VAL(PPC::STFIWX), 0|OPFL_Chain,
                0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
            // Src: (PPCstfiwx f64:f64:$frS, xoaddr:iPTR:$dst) - Complexity = 12
            // Dst: (STFIWX f64:f64:$frS, xoaddr:iPTR:$dst)
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::CALLSEQ_END),// ->7718
/*7692*/    OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*7693*/    OPC_CaptureGlueInput,
/*7694*/    OPC_RecordChild1, // #1 = $amt1
/*7695*/    OPC_MoveChild, 1,
/*7697*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*7700*/    OPC_MoveParent,
/*7701*/    OPC_RecordChild2, // #2 = $amt2
/*7702*/    OPC_MoveChild, 2,
/*7704*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*7707*/    OPC_MoveParent,
/*7708*/    OPC_EmitMergeInputChains1_0,
/*7709*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP:i32 (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 70|128,1/*198*/,  TARGET_VAL(PPCISD::TC_RETURN),// ->7920
/*7722*/    OPC_RecordNode,   // #0 = 'PPCtc_return' chained node
/*7723*/    OPC_CaptureGlueInput,
/*7724*/    OPC_RecordChild1, // #1 = $func
/*7725*/    OPC_Scope, 21|128,1/*149*/, /*->7877*/ // 3 children in Scope
/*7728*/      OPC_MoveChild, 1,
/*7730*/      OPC_SwitchOpcode /*3 cases */, 48,  TARGET_VAL(ISD::Constant),// ->7782
/*7734*/        OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->7758
/*7737*/          OPC_MoveParent,
/*7738*/          OPC_RecordChild2, // #2 = $offset
/*7739*/          OPC_MoveChild, 2,
/*7741*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7744*/          OPC_MoveParent,
/*7745*/          OPC_EmitMergeInputChains1_0,
/*7746*/          OPC_EmitConvertToTarget, 1,
/*7748*/          OPC_EmitConvertToTarget, 2,
/*7750*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNai), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 3, 4, 
                  // Src: (PPCtc_return (imm:i32):$func, (imm:i32):$offset) - Complexity = 9
                  // Dst: (TCRETURNai (imm:i32):$func, (imm:i32):$offset)
                /*SwitchType*/ 21,  MVT::i64,// ->7781
/*7760*/          OPC_MoveParent,
/*7761*/          OPC_RecordChild2, // #2 = $offset
/*7762*/          OPC_MoveChild, 2,
/*7764*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7767*/          OPC_MoveParent,
/*7768*/          OPC_EmitMergeInputChains1_0,
/*7769*/          OPC_EmitConvertToTarget, 1,
/*7771*/          OPC_EmitConvertToTarget, 2,
/*7773*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNai8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 3, 4, 
                  // Src: (PPCtc_return (imm:i64):$func, (imm:i32):$offset) - Complexity = 9
                  // Dst: (TCRETURNai8 (imm:i64):$func, (imm:i32):$offset)
                0, // EndSwitchType
              /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetGlobalAddress),// ->7829
/*7785*/        OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->7807
/*7788*/          OPC_MoveParent,
/*7789*/          OPC_RecordChild2, // #2 = $imm
/*7790*/          OPC_MoveChild, 2,
/*7792*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7795*/          OPC_MoveParent,
/*7796*/          OPC_EmitMergeInputChains1_0,
/*7797*/          OPC_EmitConvertToTarget, 2,
/*7799*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (tglobaladdr:i32):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi (tglobaladdr:i32):$dst, (imm:i32):$imm)
                /*SwitchType*/ 19,  MVT::i64,// ->7828
/*7809*/          OPC_MoveParent,
/*7810*/          OPC_RecordChild2, // #2 = $imm
/*7811*/          OPC_MoveChild, 2,
/*7813*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7816*/          OPC_MoveParent,
/*7817*/          OPC_EmitMergeInputChains1_0,
/*7818*/          OPC_EmitConvertToTarget, 2,
/*7820*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (tglobaladdr:i64):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi8 (tglobaladdr:i64):$dst, (imm:i32):$imm)
                0, // EndSwitchType
              /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetExternalSymbol),// ->7876
/*7832*/        OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->7854
/*7835*/          OPC_MoveParent,
/*7836*/          OPC_RecordChild2, // #2 = $imm
/*7837*/          OPC_MoveChild, 2,
/*7839*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7842*/          OPC_MoveParent,
/*7843*/          OPC_EmitMergeInputChains1_0,
/*7844*/          OPC_EmitConvertToTarget, 2,
/*7846*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (texternalsym:i32):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi (texternalsym:i32):$dst, (imm:i32):$imm)
                /*SwitchType*/ 19,  MVT::i64,// ->7875
/*7856*/          OPC_MoveParent,
/*7857*/          OPC_RecordChild2, // #2 = $imm
/*7858*/          OPC_MoveChild, 2,
/*7860*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7863*/          OPC_MoveParent,
/*7864*/          OPC_EmitMergeInputChains1_0,
/*7865*/          OPC_EmitConvertToTarget, 2,
/*7867*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (texternalsym:i64):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi8 (texternalsym:i64):$dst, (imm:i32):$imm)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*7877*/    /*Scope*/ 20, /*->7898*/
/*7878*/      OPC_CheckChild1Type, MVT::i32,
/*7880*/      OPC_RecordChild2, // #2 = $imm
/*7881*/      OPC_MoveChild, 2,
/*7883*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7886*/      OPC_MoveParent,
/*7887*/      OPC_EmitMergeInputChains1_0,
/*7888*/      OPC_EmitConvertToTarget, 2,
/*7890*/      OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (PPCtc_return CTRRC:i32:$dst, (imm:i32):$imm) - Complexity = 6
              // Dst: (TCRETURNri CTRRC:i32:$dst, (imm:i32):$imm)
/*7898*/    /*Scope*/ 20, /*->7919*/
/*7899*/      OPC_CheckChild1Type, MVT::i64,
/*7901*/      OPC_RecordChild2, // #2 = $imm
/*7902*/      OPC_MoveChild, 2,
/*7904*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7907*/      OPC_MoveParent,
/*7908*/      OPC_EmitMergeInputChains1_0,
/*7909*/      OPC_EmitConvertToTarget, 2,
/*7911*/      OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNri8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (PPCtc_return CTRRC8:i64:$dst, (imm:i32):$imm) - Complexity = 6
              // Dst: (TCRETURNri8 CTRRC8:i64:$dst, (imm:i32):$imm)
/*7919*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 20,  TARGET_VAL(ISD::ATOMIC_FENCE),// ->7943
/*7923*/    OPC_RecordNode,   // #0 = 'atomic_fence' chained node
/*7924*/    OPC_MoveChild, 1,
/*7926*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7929*/    OPC_MoveParent,
/*7930*/    OPC_MoveChild, 2,
/*7932*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7935*/    OPC_MoveParent,
/*7936*/    OPC_EmitMergeInputChains1_0,
/*7937*/    OPC_MorphNodeTo, TARGET_VAL(PPC::SYNC), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (atomic_fence (imm:iPTR), (imm:iPTR)) - Complexity = 9
            // Dst: (SYNC)
          /*SwitchOpcode*/ 36,  TARGET_VAL(PPCISD::EH_SJLJ_SETJMP),// ->7982
/*7946*/    OPC_RecordNode,   // #0 = 'PPCeh_sjlj_setjmp' chained node
/*7947*/    OPC_RecordChild1, // #1 = $buf
/*7948*/    OPC_CheckType, MVT::i32,
/*7950*/    OPC_Scope, 14, /*->7966*/ // 2 children in Scope
/*7952*/      OPC_CheckPatternPredicate, 1, // (!PPCSubTarget.isPPC64())
/*7954*/      OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectAddr:$buf #2
/*7957*/      OPC_EmitMergeInputChains1_0,
/*7958*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EH_SjLj_SetJmp32), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (PPCeh_sjlj_setjmp:i32 addr:iPTR:$buf) - Complexity = 9
              // Dst: (EH_SjLj_SetJmp32:i32 addr:iPTR:$buf)
/*7966*/    /*Scope*/ 14, /*->7981*/
/*7967*/      OPC_CheckPatternPredicate, 2, // (PPCSubTarget.isPPC64())
/*7969*/      OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectAddr:$buf #2
/*7972*/      OPC_EmitMergeInputChains1_0,
/*7973*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EH_SjLj_SetJmp64), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (PPCeh_sjlj_setjmp:i32 addr:iPTR:$buf) - Complexity = 9
              // Dst: (EH_SjLj_SetJmp64:i32 addr:iPTR:$buf)
/*7981*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 32,  TARGET_VAL(PPCISD::EH_SJLJ_LONGJMP),// ->8017
/*7985*/    OPC_RecordNode,   // #0 = 'PPCeh_sjlj_longjmp' chained node
/*7986*/    OPC_RecordChild1, // #1 = $buf
/*7987*/    OPC_Scope, 13, /*->8002*/ // 2 children in Scope
/*7989*/      OPC_CheckPatternPredicate, 1, // (!PPCSubTarget.isPPC64())
/*7991*/      OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectAddr:$buf #2
/*7994*/      OPC_EmitMergeInputChains1_0,
/*7995*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EH_SjLj_LongJmp32), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 2, 
              // Src: (PPCeh_sjlj_longjmp addr:iPTR:$buf) - Complexity = 9
              // Dst: (EH_SjLj_LongJmp32 addr:iPTR:$buf)
/*8002*/    /*Scope*/ 13, /*->8016*/
/*8003*/      OPC_CheckPatternPredicate, 2, // (PPCSubTarget.isPPC64())
/*8005*/      OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectAddr:$buf #2
/*8008*/      OPC_EmitMergeInputChains1_0,
/*8009*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EH_SjLj_LongJmp64), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 2, 
              // Src: (PPCeh_sjlj_longjmp addr:iPTR:$buf) - Complexity = 9
              // Dst: (EH_SjLj_LongJmp64 addr:iPTR:$buf)
/*8016*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 124,  TARGET_VAL(ISD::SUB),// ->8144
/*8020*/    OPC_Scope, 28, /*->8050*/ // 2 children in Scope
/*8022*/      OPC_MoveChild, 0,
/*8024*/      OPC_CheckInteger, 0, 
/*8026*/      OPC_MoveParent,
/*8027*/      OPC_RecordChild1, // #0 = $rA
/*8028*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->8039
/*8031*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NEG), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sub:i32 0:i32, i32:i32:$rA) - Complexity = 8
                // Dst: (NEG:i32 i32:i32:$rA)
              /*SwitchType*/ 8,  MVT::i64,// ->8049
/*8041*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NEG8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sub:i64 0:i64, i64:i64:$rA) - Complexity = 8
                // Dst: (NEG8:i64 i64:i64:$rA)
              0, // EndSwitchType
/*8050*/    /*Scope*/ 92, /*->8143*/
/*8051*/      OPC_RecordChild0, // #0 = $imm
/*8052*/      OPC_Scope, 23, /*->8077*/ // 2 children in Scope
/*8054*/        OPC_MoveChild, 0,
/*8056*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8059*/        OPC_CheckPredicate, 0, // Predicate_imm32SExt16
/*8061*/        OPC_MoveParent,
/*8062*/        OPC_RecordChild1, // #1 = $in
/*8063*/        OPC_CheckType, MVT::i32,
/*8065*/        OPC_EmitConvertToTarget, 0,
/*8067*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (sub:i32 (imm:i32)<<P:Predicate_imm32SExt16>>:$imm, i32:i32:$in) - Complexity = 7
                // Dst: (SUBFIC:i32:i32 ?:i32:$in, (imm:i32):$imm)
/*8077*/      /*Scope*/ 64, /*->8142*/
/*8078*/        OPC_RecordChild1, // #1 = $rA
/*8079*/        OPC_SwitchType /*5 cases */, 9,  MVT::i32,// ->8091
/*8082*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBF), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (sub:i32 i32:i32:$rB, i32:i32:$rA) - Complexity = 3
                  // Dst: (SUBF:i32 i32:i32:$rA, i32:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->8102
/*8093*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBF8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (sub:i64 i64:i64:$rB, i64:i64:$rA) - Complexity = 3
                  // Dst: (SUBF8:i64 i64:i64:$rA, i64:i64:$rB)
                /*SwitchType*/ 11,  MVT::v16i8,// ->8115
/*8104*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8106*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUBM), 0,
                      1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
                  // Dst: (VSUBUBM:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
                /*SwitchType*/ 11,  MVT::v8i16,// ->8128
/*8117*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8119*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUHM), 0,
                      1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
                  // Dst: (VSUBUHM:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
                /*SwitchType*/ 11,  MVT::v4i32,// ->8141
/*8130*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8132*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUWM), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
                  // Dst: (VSUBUWM:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
                0, // EndSwitchType
/*8142*/      0, /*End of Scope*/
/*8143*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 102,  TARGET_VAL(ISD::ADDE),// ->8249
/*8147*/    OPC_CaptureGlueInput,
/*8148*/    OPC_RecordChild0, // #0 = $rA
/*8149*/    OPC_Scope, 69, /*->8220*/ // 2 children in Scope
/*8151*/      OPC_MoveChild, 1,
/*8153*/      OPC_Scope, 36, /*->8191*/ // 2 children in Scope
/*8155*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8166*/        OPC_MoveParent,
/*8167*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8179
/*8170*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDME), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i32 i32:i32:$rA, -1:i32) - Complexity = 8
                  // Dst: (ADDME:i32:i32 i32:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->8190
/*8181*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDME8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i64 i64:i64:$rA, -1:i64) - Complexity = 8
                  // Dst: (ADDME8:i64:i32 i64:i64:$rA)
                0, // EndSwitchType
/*8191*/      /*Scope*/ 27, /*->8219*/
/*8192*/        OPC_CheckInteger, 0, 
/*8194*/        OPC_MoveParent,
/*8195*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8207
/*8198*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDZE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i32 i32:i32:$rA, 0:i32) - Complexity = 8
                  // Dst: (ADDZE:i32:i32 i32:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->8218
/*8209*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDZE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i64 i64:i64:$rA, 0:i64) - Complexity = 8
                  // Dst: (ADDZE8:i64:i32 i64:i64:$rA)
                0, // EndSwitchType
/*8219*/      0, /*End of Scope*/
/*8220*/    /*Scope*/ 27, /*->8248*/
/*8221*/      OPC_RecordChild1, // #1 = $rB
/*8222*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->8235
/*8225*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
                // Dst: (ADDE:i32:i32 i32:i32:$rA, i32:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->8247
/*8237*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
                // Dst: (ADDE8:i64:i32 i64:i64:$rA, i64:i64:$rB)
              0, // EndSwitchType
/*8248*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 104,  TARGET_VAL(ISD::SUBE),// ->8356
/*8252*/    OPC_CaptureGlueInput,
/*8253*/    OPC_Scope, 71, /*->8326*/ // 2 children in Scope
/*8255*/      OPC_MoveChild, 0,
/*8257*/      OPC_Scope, 37, /*->8296*/ // 2 children in Scope
/*8259*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8270*/        OPC_MoveParent,
/*8271*/        OPC_RecordChild1, // #0 = $rA
/*8272*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8284
/*8275*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFME), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i32 -1:i32, i32:i32:$rA) - Complexity = 8
                  // Dst: (SUBFME:i32:i32 i32:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->8295
/*8286*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFME8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i64 -1:i64, i64:i64:$rA) - Complexity = 8
                  // Dst: (SUBFME8:i64:i32 i64:i64:$rA)
                0, // EndSwitchType
/*8296*/      /*Scope*/ 28, /*->8325*/
/*8297*/        OPC_CheckInteger, 0, 
/*8299*/        OPC_MoveParent,
/*8300*/        OPC_RecordChild1, // #0 = $rA
/*8301*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8313
/*8304*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFZE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i32 0:i32, i32:i32:$rA) - Complexity = 8
                  // Dst: (SUBFZE:i32:i32 i32:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->8324
/*8315*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFZE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i64 0:i64, i64:i64:$rA) - Complexity = 8
                  // Dst: (SUBFZE8:i64:i32 i64:i64:$rA)
                0, // EndSwitchType
/*8325*/      0, /*End of Scope*/
/*8326*/    /*Scope*/ 28, /*->8355*/
/*8327*/      OPC_RecordChild0, // #0 = $rB
/*8328*/      OPC_RecordChild1, // #1 = $rA
/*8329*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->8342
/*8332*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (sube:i32 i32:i32:$rB, i32:i32:$rA) - Complexity = 3
                // Dst: (SUBFE:i32:i32 i32:i32:$rA, i32:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->8354
/*8344*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (sube:i64 i64:i64:$rB, i64:i64:$rA) - Complexity = 3
                // Dst: (SUBFE8:i64:i32 i64:i64:$rA, i64:i64:$rB)
              0, // EndSwitchType
/*8355*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 74,  TARGET_VAL(ISD::ADDC),// ->8433
/*8359*/    OPC_RecordChild0, // #0 = $rA
/*8360*/    OPC_RecordChild1, // #1 = $imm
/*8361*/    OPC_Scope, 43, /*->8406*/ // 3 children in Scope
/*8363*/      OPC_MoveChild, 1,
/*8365*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8368*/      OPC_Scope, 17, /*->8387*/ // 2 children in Scope
/*8370*/        OPC_CheckPredicate, 0, // Predicate_imm32SExt16
/*8372*/        OPC_MoveParent,
/*8373*/        OPC_CheckType, MVT::i32,
/*8375*/        OPC_EmitConvertToTarget, 1,
/*8377*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 i32:i32:$rA, (imm:i32)<<P:Predicate_imm32SExt16>>:$imm) - Complexity = 7
                // Dst: (ADDIC:i32:i32 i32:i32:$rA, (imm:i32):$imm)
/*8387*/      /*Scope*/ 17, /*->8405*/
/*8388*/        OPC_CheckPredicate, 2, // Predicate_imm64SExt16
/*8390*/        OPC_MoveParent,
/*8391*/        OPC_CheckType, MVT::i64,
/*8393*/        OPC_EmitConvertToTarget, 1,
/*8395*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i64 i64:i64:$rA, (imm:i64)<<P:Predicate_imm64SExt16>>:$imm) - Complexity = 7
                // Dst: (ADDIC8:i64:i32 i64:i64:$rA, (imm:i64):$imm)
/*8405*/      0, /*End of Scope*/
/*8406*/    /*Scope*/ 12, /*->8419*/
/*8407*/      OPC_CheckType, MVT::i32,
/*8409*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ADDC), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (ADDC:i32:i32 i32:i32:$rA, i32:i32:$rB)
/*8419*/    /*Scope*/ 12, /*->8432*/
/*8420*/      OPC_CheckType, MVT::i64,
/*8422*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ADDC8), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (ADDC8:i64:i32 i64:i64:$rA, i64:i64:$rB)
/*8432*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 50,  TARGET_VAL(ISD::MUL),// ->8486
/*8436*/    OPC_RecordChild0, // #0 = $rA
/*8437*/    OPC_RecordChild1, // #1 = $imm
/*8438*/    OPC_Scope, 21, /*->8461*/ // 3 children in Scope
/*8440*/      OPC_MoveChild, 1,
/*8442*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8445*/      OPC_CheckPredicate, 0, // Predicate_imm32SExt16
/*8447*/      OPC_MoveParent,
/*8448*/      OPC_CheckType, MVT::i32,
/*8450*/      OPC_EmitConvertToTarget, 1,
/*8452*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (mul:i32 i32:i32:$rA, (imm:i32)<<P:Predicate_imm32SExt16>>:$imm) - Complexity = 7
              // Dst: (MULLI:i32 i32:i32:$rA, (imm:i32):$imm)
/*8461*/    /*Scope*/ 11, /*->8473*/
/*8462*/      OPC_CheckType, MVT::i32,
/*8464*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (MULLW:i32 i32:i32:$rA, i32:i32:$rB)
/*8473*/    /*Scope*/ 11, /*->8485*/
/*8474*/      OPC_CheckType, MVT::i64,
/*8476*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (MULLD:i64 i64:i64:$rA, i64:i64:$rB)
/*8485*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 77,  TARGET_VAL(ISD::SUBC),// ->8566
/*8489*/    OPC_RecordChild0, // #0 = $imm
/*8490*/    OPC_Scope, 45, /*->8537*/ // 2 children in Scope
/*8492*/      OPC_MoveChild, 0,
/*8494*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8497*/      OPC_Scope, 18, /*->8517*/ // 2 children in Scope
/*8499*/        OPC_CheckPredicate, 0, // Predicate_imm32SExt16
/*8501*/        OPC_MoveParent,
/*8502*/        OPC_RecordChild1, // #1 = $rA
/*8503*/        OPC_CheckType, MVT::i32,
/*8505*/        OPC_EmitConvertToTarget, 0,
/*8507*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (subc:i32 (imm:i32)<<P:Predicate_imm32SExt16>>:$imm, i32:i32:$rA) - Complexity = 7
                // Dst: (SUBFIC:i32:i32 i32:i32:$rA, (imm:i32):$imm)
/*8517*/      /*Scope*/ 18, /*->8536*/
/*8518*/        OPC_CheckPredicate, 2, // Predicate_imm64SExt16
/*8520*/        OPC_MoveParent,
/*8521*/        OPC_RecordChild1, // #1 = $rA
/*8522*/        OPC_CheckType, MVT::i64,
/*8524*/        OPC_EmitConvertToTarget, 0,
/*8526*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (subc:i64 (imm:i64)<<P:Predicate_imm64SExt16>>:$imm, i64:i64:$rA) - Complexity = 7
                // Dst: (SUBFIC8:i64:i32 i64:i64:$rA, (imm:i64):$imm)
/*8536*/      0, /*End of Scope*/
/*8537*/    /*Scope*/ 27, /*->8565*/
/*8538*/      OPC_RecordChild1, // #1 = $rA
/*8539*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->8552
/*8542*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (subc:i32 i32:i32:$rB, i32:i32:$rA) - Complexity = 3
                // Dst: (SUBFC:i32:i32 i32:i32:$rA, i32:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->8564
/*8554*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (subc:i64 i64:i64:$rB, i64:i64:$rA) - Complexity = 3
                // Dst: (SUBFC8:i64:i32 i64:i64:$rA, i64:i64:$rB)
              0, // EndSwitchType
/*8565*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 120,  TARGET_VAL(ISD::SRA),// ->8689
/*8569*/    OPC_RecordChild0, // #0 = $rS
/*8570*/    OPC_RecordChild1, // #1 = $SH
/*8571*/    OPC_Scope, 38, /*->8611*/ // 5 children in Scope
/*8573*/      OPC_MoveChild, 1,
/*8575*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8578*/      OPC_CheckType, MVT::i32,
/*8580*/      OPC_MoveParent,
/*8581*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->8596
/*8584*/        OPC_EmitConvertToTarget, 1,
/*8586*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAWI), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 i32:i32:$rS, (imm:i32):$SH) - Complexity = 6
                // Dst: (SRAWI:i32:i32 i32:i32:$rS, (imm:i32):$SH)
              /*SwitchType*/ 12,  MVT::i64,// ->8610
/*8598*/        OPC_EmitConvertToTarget, 1,
/*8600*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRADI), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i64 i64:i64:$rS, (imm:i32):$SH) - Complexity = 6
                // Dst: (SRADI:i64:i32 i64:i64:$rS, (imm:i32):$SH)
              0, // EndSwitchType
/*8611*/    /*Scope*/ 28, /*->8640*/
/*8612*/      OPC_CheckChild1Type, MVT::i32,
/*8614*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->8627
/*8617*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAW), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SRAW:i32:i32 ?:i32:$rS, ?:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->8639
/*8629*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAD), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SRAD:i64:i32 ?:i64:$rS, ?:i32:$rB)
              0, // EndSwitchType
/*8640*/    /*Scope*/ 15, /*->8656*/
/*8641*/      OPC_CheckChild1Type, MVT::v16i8,
/*8643*/      OPC_CheckType, MVT::v16i8,
/*8645*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8647*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
              // Dst: (VSRAB:v16i8 ?:v16i8:$vA, ?:v16i8:$vB)
/*8656*/    /*Scope*/ 15, /*->8672*/
/*8657*/      OPC_CheckChild1Type, MVT::v8i16,
/*8659*/      OPC_CheckType, MVT::v8i16,
/*8661*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8663*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
              // Dst: (VSRAH:v8i16 ?:v8i16:$vA, ?:v8i16:$vB)
/*8672*/    /*Scope*/ 15, /*->8688*/
/*8673*/      OPC_CheckChild1Type, MVT::v4i32,
/*8675*/      OPC_CheckType, MVT::v4i32,
/*8677*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8679*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
              // Dst: (VSRAW:v4i32 ?:v4i32:$vA, ?:v4i32:$vB)
/*8688*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 4|128,1/*132*/,  TARGET_VAL(ISD::SHL),// ->8825
/*8693*/    OPC_RecordChild0, // #0 = $in
/*8694*/    OPC_RecordChild1, // #1 = $imm
/*8695*/    OPC_Scope, 52, /*->8749*/ // 5 children in Scope
/*8697*/      OPC_MoveChild, 1,
/*8699*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8702*/      OPC_CheckType, MVT::i32,
/*8704*/      OPC_MoveParent,
/*8705*/      OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->8729
/*8708*/        OPC_EmitConvertToTarget, 1,
/*8710*/        OPC_EmitInteger, MVT::i32, 0, 
/*8713*/        OPC_EmitConvertToTarget, 1,
/*8715*/        OPC_EmitNodeXForm, 5, 4, // SHL32
/*8718*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 5, 
                // Src: (shl:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 ?:i32:$in, (imm:i32):$imm, 0:i32, (SHL32:i32 (imm:i32):$imm))
              /*SwitchType*/ 17,  MVT::i64,// ->8748
/*8731*/        OPC_EmitConvertToTarget, 1,
/*8733*/        OPC_EmitConvertToTarget, 1,
/*8735*/        OPC_EmitNodeXForm, 6, 3, // SHL64
/*8738*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICR), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 4, 
                // Src: (shl:i64 i64:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICR:i64 ?:i64:$in, (imm:i32):$imm, (SHL64:i32 (imm:i32):$imm))
              0, // EndSwitchType
/*8749*/    /*Scope*/ 26, /*->8776*/
/*8750*/      OPC_CheckChild1Type, MVT::i32,
/*8752*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8764
/*8755*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SLW), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SLW:i32 ?:i32:$rS, ?:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->8775
/*8766*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SLD), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SLD:i64 ?:i64:$rS, ?:i32:$rB)
              0, // EndSwitchType
/*8776*/    /*Scope*/ 15, /*->8792*/
/*8777*/      OPC_CheckChild1Type, MVT::v16i8,
/*8779*/      OPC_CheckType, MVT::v16i8,
/*8781*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8783*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
              // Dst: (VSLB:v16i8 ?:v16i8:$vA, ?:v16i8:$vB)
/*8792*/    /*Scope*/ 15, /*->8808*/
/*8793*/      OPC_CheckChild1Type, MVT::v8i16,
/*8795*/      OPC_CheckType, MVT::v8i16,
/*8797*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8799*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
              // Dst: (VSLH:v8i16 ?:v8i16:$vA, ?:v8i16:$vB)
/*8808*/    /*Scope*/ 15, /*->8824*/
/*8809*/      OPC_CheckChild1Type, MVT::v4i32,
/*8811*/      OPC_CheckType, MVT::v4i32,
/*8813*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8815*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
              // Dst: (VSLW:v4i32 ?:v4i32:$vA, ?:v4i32:$vB)
/*8824*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 4|128,1/*132*/,  TARGET_VAL(ISD::SRL),// ->8961
/*8829*/    OPC_RecordChild0, // #0 = $in
/*8830*/    OPC_RecordChild1, // #1 = $imm
/*8831*/    OPC_Scope, 52, /*->8885*/ // 5 children in Scope
/*8833*/      OPC_MoveChild, 1,
/*8835*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8838*/      OPC_CheckType, MVT::i32,
/*8840*/      OPC_MoveParent,
/*8841*/      OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->8865
/*8844*/        OPC_EmitConvertToTarget, 1,
/*8846*/        OPC_EmitNodeXForm, 7, 2, // SRL32
/*8849*/        OPC_EmitConvertToTarget, 1,
/*8851*/        OPC_EmitInteger, MVT::i32, 31, 
/*8854*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (srl:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 ?:i32:$in, (SRL32:i32 (imm:i32):$imm), (imm:i32):$imm, 31:i32)
              /*SwitchType*/ 17,  MVT::i64,// ->8884
/*8867*/        OPC_EmitConvertToTarget, 1,
/*8869*/        OPC_EmitNodeXForm, 8, 2, // SRL64
/*8872*/        OPC_EmitConvertToTarget, 1,
/*8874*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 3, 4, 
                // Src: (srl:i64 i64:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICL:i64 ?:i64:$in, (SRL64:i32 (imm:i32):$imm), (imm:i32):$imm)
              0, // EndSwitchType
/*8885*/    /*Scope*/ 26, /*->8912*/
/*8886*/      OPC_CheckChild1Type, MVT::i32,
/*8888*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8900
/*8891*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRW), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SRW:i32 ?:i32:$rS, ?:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->8911
/*8902*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRD), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SRD:i64 ?:i64:$rS, ?:i32:$rB)
              0, // EndSwitchType
/*8912*/    /*Scope*/ 15, /*->8928*/
/*8913*/      OPC_CheckChild1Type, MVT::v16i8,
/*8915*/      OPC_CheckType, MVT::v16i8,
/*8917*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8919*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
              // Dst: (VSRB:v16i8 ?:v16i8:$vA, ?:v16i8:$vB)
/*8928*/    /*Scope*/ 15, /*->8944*/
/*8929*/      OPC_CheckChild1Type, MVT::v8i16,
/*8931*/      OPC_CheckType, MVT::v8i16,
/*8933*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8935*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
              // Dst: (VSRH:v8i16 ?:v8i16:$vA, ?:v8i16:$vB)
/*8944*/    /*Scope*/ 15, /*->8960*/
/*8945*/      OPC_CheckChild1Type, MVT::v4i32,
/*8947*/      OPC_CheckType, MVT::v4i32,
/*8949*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8951*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
              // Dst: (VSRW:v4i32 ?:v4i32:$vA, ?:v4i32:$vB)
/*8960*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 92,  TARGET_VAL(ISD::ROTL),// ->9056
/*8964*/    OPC_RecordChild0, // #0 = $in
/*8965*/    OPC_RecordChild1, // #1 = $imm
/*8966*/    OPC_Scope, 48, /*->9016*/ // 2 children in Scope
/*8968*/      OPC_MoveChild, 1,
/*8970*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8973*/      OPC_CheckType, MVT::i32,
/*8975*/      OPC_MoveParent,
/*8976*/      OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->8998
/*8979*/        OPC_EmitConvertToTarget, 1,
/*8981*/        OPC_EmitInteger, MVT::i32, 0, 
/*8984*/        OPC_EmitInteger, MVT::i32, 31, 
/*8987*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (rotl:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 ?:i32:$in, (imm:i32):$imm, 0:i32, 31:i32)
              /*SwitchType*/ 15,  MVT::i64,// ->9015
/*9000*/        OPC_EmitConvertToTarget, 1,
/*9002*/        OPC_EmitInteger, MVT::i32, 0, 
/*9005*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
                // Src: (rotl:i64 i64:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICL:i64 ?:i64:$in, (imm:i32):$imm, 0:i32)
              0, // EndSwitchType
/*9016*/    /*Scope*/ 38, /*->9055*/
/*9017*/      OPC_CheckChild1Type, MVT::i32,
/*9019*/      OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->9039
/*9022*/        OPC_EmitInteger, MVT::i32, 0, 
/*9025*/        OPC_EmitInteger, MVT::i32, 31, 
/*9028*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWNM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                // Src: (rotl:i32 i32:i32:$in, i32:i32:$sh) - Complexity = 3
                // Dst: (RLWNM:i32 ?:i32:$in, ?:i32:$sh, 0:i32, 31:i32)
              /*SwitchType*/ 13,  MVT::i64,// ->9054
/*9041*/        OPC_EmitInteger, MVT::i32, 0, 
/*9044*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDCL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (rotl:i64 i64:i64:$in, i32:i32:$sh) - Complexity = 3
                // Dst: (RLDCL:i64 ?:i64:$in, ?:i32:$sh, 0:i32)
              0, // EndSwitchType
/*9055*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 53,  TARGET_VAL(PPCISD::TOC_ENTRY),// ->9112
/*9059*/    OPC_RecordChild0, // #0 = $disp
/*9060*/    OPC_MoveChild, 0,
/*9062*/    OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::TargetGlobalAddress),// ->9079
/*9066*/      OPC_MoveParent,
/*9067*/      OPC_RecordChild1, // #1 = $reg
/*9068*/      OPC_CheckType, MVT::i64,
/*9070*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDtoc), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCtoc_entry:i64 (tglobaladdr:i64):$disp, i64:i64:$reg) - Complexity = 6
              // Dst: (LDtoc:i64 (tglobaladdr:i64):$disp, i64:i64:$reg)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetJumpTable),// ->9095
/*9082*/      OPC_MoveParent,
/*9083*/      OPC_RecordChild1, // #1 = $reg
/*9084*/      OPC_CheckType, MVT::i64,
/*9086*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDtocJTI), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCtoc_entry:i64 (tjumptable:i64):$disp, i64:i64:$reg) - Complexity = 6
              // Dst: (LDtocJTI:i64 (tjumptable:i64):$disp, i64:i64:$reg)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetConstantPool),// ->9111
/*9098*/      OPC_MoveParent,
/*9099*/      OPC_RecordChild1, // #1 = $reg
/*9100*/      OPC_CheckType, MVT::i64,
/*9102*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDtocCPT), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCtoc_entry:i64 (tconstpool:i64):$disp, i64:i64:$reg) - Complexity = 6
              // Dst: (LDtocCPT:i64 (tconstpool:i64):$disp, i64:i64:$reg)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDIS_TOC_HA),// ->9134
/*9115*/    OPC_RecordChild0, // #0 = $reg
/*9116*/    OPC_RecordChild1, // #1 = $disp
/*9117*/    OPC_MoveChild, 1,
/*9119*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*9122*/    OPC_MoveParent,
/*9123*/    OPC_CheckType, MVT::i64,
/*9125*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIStocHA), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddisTocHA:i64 i64:i64:$reg, (tglobaladdr:i64):$disp) - Complexity = 6
            // Dst: (ADDIStocHA:i64 i64:i64:$reg, (tglobaladdr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::LD_TOC_L),// ->9156
/*9137*/    OPC_RecordChild0, // #0 = $disp
/*9138*/    OPC_MoveChild, 0,
/*9140*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*9143*/    OPC_MoveParent,
/*9144*/    OPC_RecordChild1, // #1 = $reg
/*9145*/    OPC_CheckType, MVT::i64,
/*9147*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LDtocL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCldTocL:i64 (tglobaladdr:i64):$disp, i64:i64:$reg) - Complexity = 6
            // Dst: (LDtocL:i64 (tglobaladdr:i64):$disp, i64:i64:$reg)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDI_TOC_L),// ->9178
/*9159*/    OPC_RecordChild0, // #0 = $reg
/*9160*/    OPC_RecordChild1, // #1 = $disp
/*9161*/    OPC_MoveChild, 1,
/*9163*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*9166*/    OPC_MoveParent,
/*9167*/    OPC_CheckType, MVT::i64,
/*9169*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDItocL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddiTocL:i64 i64:i64:$reg, (tglobaladdr:i64):$disp) - Complexity = 6
            // Dst: (ADDItocL:i64 i64:i64:$reg, (tglobaladdr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDIS_GOT_TPREL_HA),// ->9200
/*9181*/    OPC_RecordChild0, // #0 = $reg
/*9182*/    OPC_RecordChild1, // #1 = $disp
/*9183*/    OPC_MoveChild, 1,
/*9185*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9188*/    OPC_MoveParent,
/*9189*/    OPC_CheckType, MVT::i64,
/*9191*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDISgotTprelHA), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddisGotTprelHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDISgotTprelHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::LD_GOT_TPREL_L),// ->9222
/*9203*/    OPC_RecordChild0, // #0 = $disp
/*9204*/    OPC_MoveChild, 0,
/*9206*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9209*/    OPC_MoveParent,
/*9210*/    OPC_RecordChild1, // #1 = $reg
/*9211*/    OPC_CheckType, MVT::i64,
/*9213*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LDgotTprelL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCldGotTprelL:i64 (tglobaltlsaddr:i64):$disp, i64:i64:$reg) - Complexity = 6
            // Dst: (LDgotTprelL:i64 (tglobaltlsaddr:i64):$disp, i64:i64:$reg)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADD_TLS),// ->9244
/*9225*/    OPC_RecordChild0, // #0 = $in
/*9226*/    OPC_RecordChild1, // #1 = $g
/*9227*/    OPC_MoveChild, 1,
/*9229*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9232*/    OPC_MoveParent,
/*9233*/    OPC_CheckType, MVT::i64,
/*9235*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8TLS), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddTls:i64 i64:i64:$in, (tglobaltlsaddr:i64):$g) - Complexity = 6
            // Dst: (ADD8TLS:i64 ?:i64:$in, (tglobaltlsaddr:i64):$g)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDIS_TLSGD_HA),// ->9266
/*9247*/    OPC_RecordChild0, // #0 = $reg
/*9248*/    OPC_RecordChild1, // #1 = $disp
/*9249*/    OPC_MoveChild, 1,
/*9251*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9254*/    OPC_MoveParent,
/*9255*/    OPC_CheckType, MVT::i64,
/*9257*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIStlsgdHA), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddisTlsgdHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDIStlsgdHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDI_TLSGD_L),// ->9288
/*9269*/    OPC_RecordChild0, // #0 = $reg
/*9270*/    OPC_RecordChild1, // #1 = $disp
/*9271*/    OPC_MoveChild, 1,
/*9273*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9276*/    OPC_MoveParent,
/*9277*/    OPC_CheckType, MVT::i64,
/*9279*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDItlsgdL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddiTlsgdL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDItlsgdL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::GET_TLS_ADDR),// ->9310
/*9291*/    OPC_RecordChild0, // #0 = $reg
/*9292*/    OPC_RecordChild1, // #1 = $sym
/*9293*/    OPC_MoveChild, 1,
/*9295*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9298*/    OPC_MoveParent,
/*9299*/    OPC_CheckType, MVT::i64,
/*9301*/    OPC_MorphNodeTo, TARGET_VAL(PPC::GETtlsADDR), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCgetTlsAddr:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$sym) - Complexity = 6
            // Dst: (GETtlsADDR:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$sym)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDIS_TLSLD_HA),// ->9332
/*9313*/    OPC_RecordChild0, // #0 = $reg
/*9314*/    OPC_RecordChild1, // #1 = $disp
/*9315*/    OPC_MoveChild, 1,
/*9317*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9320*/    OPC_MoveParent,
/*9321*/    OPC_CheckType, MVT::i64,
/*9323*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIStlsldHA), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddisTlsldHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDIStlsldHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDI_TLSLD_L),// ->9354
/*9335*/    OPC_RecordChild0, // #0 = $reg
/*9336*/    OPC_RecordChild1, // #1 = $disp
/*9337*/    OPC_MoveChild, 1,
/*9339*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9342*/    OPC_MoveParent,
/*9343*/    OPC_CheckType, MVT::i64,
/*9345*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDItlsldL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddiTlsldL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDItlsldL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::GET_TLSLD_ADDR),// ->9376
/*9357*/    OPC_RecordChild0, // #0 = $reg
/*9358*/    OPC_RecordChild1, // #1 = $sym
/*9359*/    OPC_MoveChild, 1,
/*9361*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9364*/    OPC_MoveParent,
/*9365*/    OPC_CheckType, MVT::i64,
/*9367*/    OPC_MorphNodeTo, TARGET_VAL(PPC::GETtlsldADDR), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCgetTlsldAddr:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$sym) - Complexity = 6
            // Dst: (GETtlsldADDR:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$sym)
          /*SwitchOpcode*/ 21,  TARGET_VAL(PPCISD::ADDIS_DTPREL_HA),// ->9400
/*9379*/    OPC_RecordNode,   // #0 = 'PPCaddisDtprelHA' chained node
/*9380*/    OPC_RecordChild1, // #1 = $reg
/*9381*/    OPC_RecordChild2, // #2 = $disp
/*9382*/    OPC_MoveChild, 2,
/*9384*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9387*/    OPC_MoveParent,
/*9388*/    OPC_CheckType, MVT::i64,
/*9390*/    OPC_EmitMergeInputChains1_0,
/*9391*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDISdtprelHA), 0|OPFL_Chain,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
            // Src: (PPCaddisDtprelHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDISdtprelHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDI_DTPREL_L),// ->9422
/*9403*/    OPC_RecordChild0, // #0 = $reg
/*9404*/    OPC_RecordChild1, // #1 = $disp
/*9405*/    OPC_MoveChild, 1,
/*9407*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9410*/    OPC_MoveParent,
/*9411*/    OPC_CheckType, MVT::i64,
/*9413*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIdtprelL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddiDtprelL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDIdtprelL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 97,  TARGET_VAL(ISD::Constant),// ->9522
/*9425*/    OPC_RecordNode,   // #0 = $imm
/*9426*/    OPC_SwitchType /*2 cases */, 59,  MVT::i32,// ->9488
/*9429*/      OPC_Scope, 12, /*->9443*/ // 3 children in Scope
/*9431*/        OPC_CheckPredicate, 0, // Predicate_imm32SExt16
/*9433*/        OPC_EmitConvertToTarget, 0,
/*9435*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (imm:i32)<<P:Predicate_imm32SExt16>>:$imm - Complexity = 4
                // Dst: (LI:i32 (imm:i32):$imm)
/*9443*/      /*Scope*/ 15, /*->9459*/
/*9444*/        OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*9446*/        OPC_EmitConvertToTarget, 0,
/*9448*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*9451*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm - Complexity = 4
                // Dst: (LIS:i32 (HI16:i32 (imm:i32):$imm))
/*9459*/      /*Scope*/ 27, /*->9487*/
/*9460*/        OPC_EmitConvertToTarget, 0,
/*9462*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*9465*/        OPC_EmitNode, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*9473*/        OPC_EmitConvertToTarget, 0,
/*9475*/        OPC_EmitNodeXForm, 1, 4, // LO16
/*9478*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 5, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (ORI:i32 (LIS:i32 (HI16:i32 (imm:i32):$imm)), (LO16:i32 (imm:i32):$imm))
/*9487*/      0, /*End of Scope*/
            /*SwitchType*/ 31,  MVT::i64,// ->9521
/*9490*/      OPC_Scope, 12, /*->9504*/ // 2 children in Scope
/*9492*/        OPC_CheckPredicate, 2, // Predicate_imm64SExt16
/*9494*/        OPC_EmitConvertToTarget, 0,
/*9496*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (imm:i64)<<P:Predicate_imm64SExt16>>:$imm - Complexity = 4
                // Dst: (LI8:i64 (imm:i64):$imm)
/*9504*/      /*Scope*/ 15, /*->9520*/
/*9505*/        OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*9507*/        OPC_EmitConvertToTarget, 0,
/*9509*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*9512*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm - Complexity = 4
                // Dst: (LIS8:i64 (HI16:i64 (imm:i64):$imm))
/*9520*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(PPCISD::SHL),// ->9553
/*9525*/    OPC_RecordChild0, // #0 = $rS
/*9526*/    OPC_RecordChild1, // #1 = $rB
/*9527*/    OPC_CheckChild1Type, MVT::i32,
/*9529*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9541
/*9532*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SLW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCshl:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SLW:i32 i32:i32:$rS, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9552
/*9543*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SLD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCshl:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SLD:i64 i64:i64:$rS, i32:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(PPCISD::SRL),// ->9584
/*9556*/    OPC_RecordChild0, // #0 = $rS
/*9557*/    OPC_RecordChild1, // #1 = $rB
/*9558*/    OPC_CheckChild1Type, MVT::i32,
/*9560*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9572
/*9563*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsrl:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SRW:i32 i32:i32:$rS, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9583
/*9574*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsrl:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SRD:i64 i64:i64:$rS, i32:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 30,  TARGET_VAL(PPCISD::SRA),// ->9617
/*9587*/    OPC_RecordChild0, // #0 = $rS
/*9588*/    OPC_RecordChild1, // #1 = $rB
/*9589*/    OPC_CheckChild1Type, MVT::i32,
/*9591*/    OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->9604
/*9594*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRAW), 0,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsra:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SRAW:i32:i32 i32:i32:$rS, i32:i32:$rB)
            /*SwitchType*/ 10,  MVT::i64,// ->9616
/*9606*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRAD), 0,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsra:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SRAD:i64:i32 i64:i64:$rS, i32:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::CTLZ),// ->9643
/*9620*/    OPC_RecordChild0, // #0 = $rS
/*9621*/    OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->9632
/*9624*/      OPC_MorphNodeTo, TARGET_VAL(PPC::CNTLZW), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctlz:i32 i32:i32:$rS) - Complexity = 3
              // Dst: (CNTLZW:i32 i32:i32:$rS)
            /*SwitchType*/ 8,  MVT::i64,// ->9642
/*9634*/      OPC_MorphNodeTo, TARGET_VAL(PPC::CNTLZD), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (ctlz:i64 i64:i64:$rS) - Complexity = 3
              // Dst: (CNTLZD:i64 i64:i64:$rS)
            0, // EndSwitchType
          /*SwitchOpcode*/ 69,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->9715
/*9646*/    OPC_RecordChild0, // #0 = $rS
/*9647*/    OPC_MoveChild, 1,
/*9649*/    OPC_Scope, 25, /*->9676*/ // 3 children in Scope
/*9651*/      OPC_CheckValueType, MVT::i8,
/*9653*/      OPC_MoveParent,
/*9654*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->9665
/*9657*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSB), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 i32:i32:$rS, i8:Other) - Complexity = 3
                // Dst: (EXTSB:i32 i32:i32:$rS)
              /*SwitchType*/ 8,  MVT::i64,// ->9675
/*9667*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSB8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 i64:i64:$rS, i8:Other) - Complexity = 3
                // Dst: (EXTSB8:i64 i64:i64:$rS)
              0, // EndSwitchType
/*9676*/    /*Scope*/ 25, /*->9702*/
/*9677*/      OPC_CheckValueType, MVT::i16,
/*9679*/      OPC_MoveParent,
/*9680*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->9691
/*9683*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSH), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 i32:i32:$rS, i16:Other) - Complexity = 3
                // Dst: (EXTSH:i32 i32:i32:$rS)
              /*SwitchType*/ 8,  MVT::i64,// ->9701
/*9693*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSH8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 i64:i64:$rS, i16:Other) - Complexity = 3
                // Dst: (EXTSH8:i64 i64:i64:$rS)
              0, // EndSwitchType
/*9702*/    /*Scope*/ 11, /*->9714*/
/*9703*/      OPC_CheckValueType, MVT::i32,
/*9705*/      OPC_MoveParent,
/*9706*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i64 i64:i64:$rS, i32:Other) - Complexity = 3
              // Dst: (EXTSW:i64 i64:i64:$rS)
/*9714*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::SDIV),// ->9744
/*9718*/    OPC_RecordChild0, // #0 = $rA
/*9719*/    OPC_RecordChild1, // #1 = $rB
/*9720*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9732
/*9723*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (DIVW:i32 i32:i32:$rA, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9743
/*9734*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (DIVD:i64 i64:i64:$rA, i64:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::UDIV),// ->9773
/*9747*/    OPC_RecordChild0, // #0 = $rA
/*9748*/    OPC_RecordChild1, // #1 = $rB
/*9749*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9761
/*9752*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVWU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (DIVWU:i32 i32:i32:$rA, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9772
/*9763*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVDU), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (DIVDU:i64 i64:i64:$rA, i64:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::MULHS),// ->9802
/*9776*/    OPC_RecordChild0, // #0 = $rA
/*9777*/    OPC_RecordChild1, // #1 = $rB
/*9778*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9790
/*9781*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mulhs:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (MULHW:i32 i32:i32:$rA, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9801
/*9792*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mulhs:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (MULHD:i64 i64:i64:$rA, i64:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::MULHU),// ->9831
/*9805*/    OPC_RecordChild0, // #0 = $rA
/*9806*/    OPC_RecordChild1, // #1 = $rB
/*9807*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9819
/*9810*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHWU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mulhu:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (MULHWU:i32 i32:i32:$rA, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9830
/*9821*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHDU), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mulhu:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (MULHDU:i64 i64:i64:$rA, i64:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::READCYCLECOUNTER),// ->9845
/*9834*/    OPC_RecordNode,   // #0 = 'readcyclecounter' chained node
/*9835*/    OPC_CheckType, MVT::i64,
/*9837*/    OPC_EmitMergeInputChains1_0,
/*9838*/    OPC_MorphNodeTo, TARGET_VAL(PPC::MFTB8), 0|OPFL_Chain,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/, 
            // Src: (readcyclecounter:i64) - Complexity = 3
            // Dst: (MFTB8:i64)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::SIGN_EXTEND),// ->9861
/*9848*/    OPC_RecordChild0, // #0 = $rS
/*9849*/    OPC_CheckChild0Type, MVT::i32,
/*9851*/    OPC_CheckType, MVT::i64,
/*9853*/    OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW_32_64), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (sext:i64 i32:i32:$rS) - Complexity = 3
            // Dst: (EXTSW_32_64:i64 i32:i32:$rS)
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::CTPOP),// ->9887
/*9864*/    OPC_RecordChild0, // #0 = $rS
/*9865*/    OPC_SwitchType /*2 cases */, 8,  MVT::i64,// ->9876
/*9868*/      OPC_MorphNodeTo, TARGET_VAL(PPC::POPCNTD), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (ctpop:i64 i64:i64:$rS) - Complexity = 3
              // Dst: (POPCNTD:i64 i64:i64:$rS)
            /*SwitchType*/ 8,  MVT::i32,// ->9886
/*9878*/      OPC_MorphNodeTo, TARGET_VAL(PPC::POPCNTW), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctpop:i32 i32:i32:$rS) - Complexity = 3
              // Dst: (POPCNTW:i32 i32:i32:$rS)
            0, // EndSwitchType
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::TRUNCATE),// ->9905
/*9890*/    OPC_RecordChild0, // #0 = $in
/*9891*/    OPC_CheckType, MVT::i32,
/*9893*/    OPC_EmitInteger, MVT::i32, PPC::sub_32,
/*9896*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (trunc:i32 i64:i64:$in) - Complexity = 3
            // Dst: (EXTRACT_SUBREG:i32 ?:i64:$in, sub_32:i32)
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::ANY_EXTEND),// ->9933
/*9908*/    OPC_RecordChild0, // #0 = $in
/*9909*/    OPC_CheckChild0Type, MVT::i32,
/*9911*/    OPC_CheckType, MVT::i64,
/*9913*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1
/*9920*/    OPC_EmitInteger, MVT::i32, PPC::sub_32,
/*9923*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
            // Src: (anyext:i64 i32:i32:$in) - Complexity = 3
            // Dst: (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), ?:i32:$in, sub_32:i32)
          /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::ZERO_EXTEND),// ->9977
/*9936*/    OPC_RecordChild0, // #0 = $in
/*9937*/    OPC_CheckChild0Type, MVT::i32,
/*9939*/    OPC_CheckType, MVT::i64,
/*9941*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1
/*9948*/    OPC_EmitInteger, MVT::i32, PPC::sub_32,
/*9951*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2,  // Results = #3
/*9961*/    OPC_EmitInteger, MVT::i32, 0, 
/*9964*/    OPC_EmitInteger, MVT::i32, 32, 
/*9967*/    OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 5, 
            // Src: (zext:i64 i32:i32:$in) - Complexity = 3
            // Dst: (RLDICL:i64 (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), ?:i32:$in, sub_32:i32), 0:i32, 32:i32)
          /*SwitchOpcode*/ 31|128,1/*159*/,  TARGET_VAL(ISD::FNEG),// ->10140
/*9981*/    OPC_Scope, 102, /*->10085*/ // 3 children in Scope
/*9983*/      OPC_MoveChild, 0,
/*9985*/      OPC_SwitchOpcode /*2 cases */, 68,  TARGET_VAL(ISD::FMA),// ->10057
/*9989*/        OPC_RecordChild0, // #0 = $FRA
/*9990*/        OPC_RecordChild1, // #1 = $FRC
/*9991*/        OPC_Scope, 34, /*->10027*/ // 2 children in Scope
/*9993*/          OPC_MoveChild, 2,
/*9995*/          OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*9998*/          OPC_RecordChild0, // #2 = $FRB
/*9999*/          OPC_MoveParent,
/*10000*/         OPC_MoveParent,
/*10001*/         OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->10014
/*10004*/           OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUB), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f64 (fma:f64 f64:f64:$FRA, f64:f64:$FRC, (fneg:f64 f64:f64:$FRB))) - Complexity = 9
                    // Dst: (FNMSUB:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
                  /*SwitchType*/ 10,  MVT::f32,// ->10026
/*10016*/           OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUBS), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f32 (fma:f32 f32:f32:$FRA, f32:f32:$FRC, (fneg:f32 f32:f32:$FRB))) - Complexity = 9
                    // Dst: (FNMSUBS:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)
                  0, // EndSwitchType
/*10027*/       /*Scope*/ 28, /*->10056*/
/*10028*/         OPC_RecordChild2, // #2 = $FRB
/*10029*/         OPC_MoveParent,
/*10030*/         OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->10043
/*10033*/           OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADD), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f64 (fma:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)) - Complexity = 6
                    // Dst: (FNMADD:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
                  /*SwitchType*/ 10,  MVT::f32,// ->10055
/*10045*/           OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADDS), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f32 (fma:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)) - Complexity = 6
                    // Dst: (FNMADDS:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)
                  0, // EndSwitchType
/*10056*/       0, /*End of Scope*/
              /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::FABS),// ->10084
/*10060*/       OPC_RecordChild0, // #0 = $frB
/*10061*/       OPC_MoveParent,
/*10062*/       OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->10073
/*10065*/         OPC_MorphNodeTo, TARGET_VAL(PPC::FNABSS), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (fneg:f32 (fabs:f32 f32:f32:$frB)) - Complexity = 6
                  // Dst: (FNABSS:f32 f32:f32:$frB)
                /*SwitchType*/ 8,  MVT::f64,// ->10083
/*10075*/         OPC_MorphNodeTo, TARGET_VAL(PPC::FNABSD), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                  // Src: (fneg:f64 (fabs:f64 f64:f64:$frB)) - Complexity = 6
                  // Dst: (FNABSD:f64 f64:f64:$frB)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*10085*/   /*Scope*/ 23, /*->10109*/
/*10086*/     OPC_RecordChild0, // #0 = $frB
/*10087*/     OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->10098
/*10090*/       OPC_MorphNodeTo, TARGET_VAL(PPC::FNEGS), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 f32:f32:$frB) - Complexity = 3
                // Dst: (FNEGS:f32 f32:f32:$frB)
              /*SwitchType*/ 8,  MVT::f64,// ->10108
/*10100*/       OPC_MorphNodeTo, TARGET_VAL(PPC::FNEGD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 f64:f64:$frB) - Complexity = 3
                // Dst: (FNEGD:f64 f64:f64:$frB)
              0, // EndSwitchType
/*10109*/   /*Scope*/ 29, /*->10139*/
/*10110*/     OPC_MoveChild, 0,
/*10112*/     OPC_CheckOpcode, TARGET_VAL(ISD::FMA),
/*10115*/     OPC_RecordChild0, // #0 = $vA
/*10116*/     OPC_RecordChild1, // #1 = $vC
/*10117*/     OPC_MoveChild, 2,
/*10119*/     OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*10122*/     OPC_RecordChild0, // #2 = $vB
/*10123*/     OPC_MoveParent,
/*10124*/     OPC_MoveParent,
/*10125*/     OPC_CheckType, MVT::v4f32,
/*10127*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10129*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fneg:v4f32 (fma:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vC, (fneg:v4f32 v4f32:v4f32:$vB))) - Complexity = 9
              // Dst: (VNMSUBFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vC, v4f32:v4f32:$vB)
/*10139*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 44|128,1/*172*/,  TARGET_VAL(ISD::FMA),// ->10316
/*10144*/   OPC_Scope, 35, /*->10181*/ // 5 children in Scope
/*10146*/     OPC_RecordChild0, // #0 = $FRA
/*10147*/     OPC_RecordChild1, // #1 = $FRC
/*10148*/     OPC_MoveChild, 2,
/*10150*/     OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*10153*/     OPC_RecordChild0, // #2 = $FRB
/*10154*/     OPC_MoveParent,
/*10155*/     OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->10168
/*10158*/       OPC_MorphNodeTo, TARGET_VAL(PPC::FMSUB), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f64 f64:f64:$FRA, f64:f64:$FRC, (fneg:f64 f64:f64:$FRB)) - Complexity = 6
                // Dst: (FMSUB:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
              /*SwitchType*/ 10,  MVT::f32,// ->10180
/*10170*/       OPC_MorphNodeTo, TARGET_VAL(PPC::FMSUBS), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f32 f32:f32:$FRA, f32:f32:$FRC, (fneg:f32 f32:f32:$FRB)) - Complexity = 6
                // Dst: (FMSUBS:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)
              0, // EndSwitchType
/*10181*/   /*Scope*/ 21, /*->10203*/
/*10182*/     OPC_MoveChild, 0,
/*10184*/     OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*10187*/     OPC_RecordChild0, // #0 = $A
/*10188*/     OPC_MoveParent,
/*10189*/     OPC_RecordChild1, // #1 = $C
/*10190*/     OPC_RecordChild2, // #2 = $B
/*10191*/     OPC_CheckType, MVT::f64,
/*10193*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUB), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fma:f64 (fneg:f64 f64:f64:$A), f64:f64:$C, f64:f64:$B) - Complexity = 6
              // Dst: (FNMSUB:f64 ?:f64:$A, ?:f64:$C, ?:f64:$B)
/*10203*/   /*Scope*/ 21, /*->10225*/
/*10204*/     OPC_RecordChild0, // #0 = $A
/*10205*/     OPC_MoveChild, 1,
/*10207*/     OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*10210*/     OPC_RecordChild0, // #1 = $C
/*10211*/     OPC_MoveParent,
/*10212*/     OPC_RecordChild2, // #2 = $B
/*10213*/     OPC_CheckType, MVT::f64,
/*10215*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUB), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fma:f64 f64:f64:$A, (fneg:f64 f64:f64:$C), f64:f64:$B) - Complexity = 6
              // Dst: (FNMSUB:f64 ?:f64:$A, ?:f64:$C, ?:f64:$B)
/*10225*/   /*Scope*/ 21, /*->10247*/
/*10226*/     OPC_MoveChild, 0,
/*10228*/     OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*10231*/     OPC_RecordChild0, // #0 = $A
/*10232*/     OPC_MoveParent,
/*10233*/     OPC_RecordChild1, // #1 = $C
/*10234*/     OPC_RecordChild2, // #2 = $B
/*10235*/     OPC_CheckType, MVT::f32,
/*10237*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUBS), 0,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fma:f32 (fneg:f32 f32:f32:$A), f32:f32:$C, f32:f32:$B) - Complexity = 6
              // Dst: (FNMSUBS:f32 ?:f32:$A, ?:f32:$C, ?:f32:$B)
/*10247*/   /*Scope*/ 67, /*->10315*/
/*10248*/     OPC_RecordChild0, // #0 = $A
/*10249*/     OPC_Scope, 20, /*->10271*/ // 2 children in Scope
/*10251*/       OPC_MoveChild, 1,
/*10253*/       OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*10256*/       OPC_RecordChild0, // #1 = $C
/*10257*/       OPC_MoveParent,
/*10258*/       OPC_RecordChild2, // #2 = $B
/*10259*/       OPC_CheckType, MVT::f32,
/*10261*/       OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUBS), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f32 f32:f32:$A, (fneg:f32 f32:f32:$C), f32:f32:$B) - Complexity = 6
                // Dst: (FNMSUBS:f32 ?:f32:$A, ?:f32:$C, ?:f32:$B)
/*10271*/     /*Scope*/ 42, /*->10314*/
/*10272*/       OPC_RecordChild1, // #1 = $FRC
/*10273*/       OPC_RecordChild2, // #2 = $FRB
/*10274*/       OPC_SwitchType /*3 cases */, 10,  MVT::f64,// ->10287
/*10277*/         OPC_MorphNodeTo, TARGET_VAL(PPC::FMADD), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fma:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB) - Complexity = 3
                  // Dst: (FMADD:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
                /*SwitchType*/ 10,  MVT::f32,// ->10299
/*10289*/         OPC_MorphNodeTo, TARGET_VAL(PPC::FMADDS), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fma:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB) - Complexity = 3
                  // Dst: (FMADDS:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)
                /*SwitchType*/ 12,  MVT::v4f32,// ->10313
/*10301*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10303*/         OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                      1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fma:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vC, v4f32:v4f32:$vB) - Complexity = 3
                  // Dst: (VMADDFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vC, v4f32:v4f32:$vB)
                0, // EndSwitchType
/*10314*/     0, /*End of Scope*/
/*10315*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIWZ),// ->10330
/*10319*/   OPC_RecordChild0, // #0 = $frB
/*10320*/   OPC_CheckType, MVT::f64,
/*10322*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIWZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctiwz:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCTIWZ:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::FP_ROUND),// ->10342
/*10333*/   OPC_RecordChild0, // #0 = $frB
/*10334*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FRSP), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (fround:f32 f64:f64:$frB) - Complexity = 3
            // Dst: (FRSP:f32 f64:f64:$frB)
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::FNEARBYINT),// ->10380
/*10345*/   OPC_RecordChild0, // #0 = $frB
/*10346*/   OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->10357
/*10349*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRIND), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fnearbyint:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRIND:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10367
/*10359*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRINS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fnearbyint:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRINS:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->10379
/*10369*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10371*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIN), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (fnearbyint:v4f32 v4f32:v4f32:$vA) - Complexity = 3
              // Dst: (VRFIN:v4f32 ?:v4f32:$vA)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::FCEIL),// ->10418
/*10383*/   OPC_RecordChild0, // #0 = $frB
/*10384*/   OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->10395
/*10387*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRIPD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fceil:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRIPD:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10405
/*10397*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRIPS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fceil:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRIPS:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->10417
/*10407*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10409*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (fceil:v4f32 v4f32:v4f32:$vA) - Complexity = 3
              // Dst: (VRFIP:v4f32 ?:v4f32:$vA)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::FTRUNC),// ->10456
/*10421*/   OPC_RecordChild0, // #0 = $frB
/*10422*/   OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->10433
/*10425*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRIZD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (ftrunc:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRIZD:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10443
/*10435*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRIZS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (ftrunc:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRIZS:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->10455
/*10445*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10447*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIZ), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (ftrunc:v4f32 v4f32:v4f32:$vA) - Complexity = 3
              // Dst: (VRFIZ:v4f32 ?:v4f32:$vA)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::FFLOOR),// ->10494
/*10459*/   OPC_RecordChild0, // #0 = $frB
/*10460*/   OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->10471
/*10463*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRIMD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (ffloor:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRIMD:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10481
/*10473*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRIMS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (ffloor:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRIMS:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->10493
/*10483*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10485*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIM), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (ffloor:v4f32 v4f32:v4f32:$vA) - Complexity = 3
              // Dst: (VRFIM:v4f32 ?:v4f32:$vA)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FSQRT),// ->10520
/*10497*/   OPC_RecordChild0, // #0 = $frB
/*10498*/   OPC_SwitchType /*2 cases */, 8,  MVT::f64,// ->10509
/*10501*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSQRT), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FSQRT:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10519
/*10511*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSQRTS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FSQRTS:f32 f32:f32:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FABS),// ->10546
/*10523*/   OPC_RecordChild0, // #0 = $frB
/*10524*/   OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->10535
/*10527*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FABSS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FABSS:f32 f32:f32:$frB)
            /*SwitchType*/ 8,  MVT::f64,// ->10545
/*10537*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FABSD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fabs:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FABSD:f64 f64:f64:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(PPCISD::FRE),// ->10584
/*10549*/   OPC_RecordChild0, // #0 = $frB
/*10550*/   OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->10561
/*10553*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRE), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (PPCfre:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRE:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10571
/*10563*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRES), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (PPCfre:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRES:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->10583
/*10573*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10575*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VREFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (PPCfre:v4f32 v4f32:v4f32:$A) - Complexity = 3
              // Dst: (VREFP:v4f32 ?:v4f32:$A)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(PPCISD::FRSQRTE),// ->10622
/*10587*/   OPC_RecordChild0, // #0 = $frB
/*10588*/   OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->10599
/*10591*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRSQRTE), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (PPCfrsqrte:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRSQRTE:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10609
/*10601*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRSQRTES), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (PPCfrsqrte:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRSQRTES:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->10621
/*10611*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10613*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRSQRTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (PPCfrsqrte:v4f32 v4f32:v4f32:$A) - Complexity = 3
              // Dst: (VRSQRTEFP:v4f32 ?:v4f32:$A)
            0, // EndSwitchType
          /*SwitchOpcode*/ 7,  TARGET_VAL(PPCISD::MFFS),// ->10632
/*10625*/   OPC_MorphNodeTo, TARGET_VAL(PPC::MFFS), 0,
                1/*#VTs*/, MVT::f64, 0/*#Ops*/, 
            // Src: (PPCmffs:f64) - Complexity = 3
            // Dst: (MFFS:f64)
          /*SwitchOpcode*/ 29,  TARGET_VAL(PPCISD::FSEL),// ->10664
/*10635*/   OPC_RecordChild0, // #0 = $FRA
/*10636*/   OPC_RecordChild1, // #1 = $FRC
/*10637*/   OPC_RecordChild2, // #2 = $FRB
/*10638*/   OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->10651
/*10641*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSELD), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (PPCfsel:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB) - Complexity = 3
              // Dst: (FSELD:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
            /*SwitchType*/ 10,  MVT::f32,// ->10663
/*10653*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSELS), 0,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (PPCfsel:f32 f64:f64:$FRA, f32:f32:$FRC, f32:f32:$FRB) - Complexity = 3
              // Dst: (FSELS:f32 f64:f64:$FRA, f32:f32:$FRC, f32:f32:$FRB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FADD),// ->10706
/*10667*/   OPC_RecordChild0, // #0 = $FRA
/*10668*/   OPC_RecordChild1, // #1 = $FRB
/*10669*/   OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->10681
/*10672*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FADD), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f64 f64:f64:$FRA, f64:f64:$FRB) - Complexity = 3
              // Dst: (FADD:f64 f64:f64:$FRA, f64:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->10692
/*10683*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FADDS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f32 f32:f32:$FRA, f32:f32:$FRB) - Complexity = 3
              // Dst: (FADDS:f32 f32:f32:$FRA, f32:f32:$FRB)
            /*SwitchType*/ 11,  MVT::v4f32,// ->10705
/*10694*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10696*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 3
              // Dst: (VADDFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::FDIV),// ->10735
/*10709*/   OPC_RecordChild0, // #0 = $FRA
/*10710*/   OPC_RecordChild1, // #1 = $FRB
/*10711*/   OPC_SwitchType /*2 cases */, 9,  MVT::f64,// ->10723
/*10714*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FDIV), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f64 f64:f64:$FRA, f64:f64:$FRB) - Complexity = 3
              // Dst: (FDIV:f64 f64:f64:$FRA, f64:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->10734
/*10725*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FDIVS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f32 f32:f32:$FRA, f32:f32:$FRB) - Complexity = 3
              // Dst: (FDIVS:f32 f32:f32:$FRA, f32:f32:$FRB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 63,  TARGET_VAL(ISD::FMUL),// ->10801
/*10738*/   OPC_RecordChild0, // #0 = $FRA
/*10739*/   OPC_RecordChild1, // #1 = $FRC
/*10740*/   OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->10752
/*10743*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FMUL), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f64 f64:f64:$FRA, f64:f64:$FRC) - Complexity = 3
              // Dst: (FMUL:f64 f64:f64:$FRA, f64:f64:$FRC)
            /*SwitchType*/ 9,  MVT::f32,// ->10763
/*10754*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FMULS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f32 f32:f32:$FRA, f32:f32:$FRC) - Complexity = 3
              // Dst: (FMULS:f32 f32:f32:$FRA, f32:f32:$FRC)
            /*SwitchType*/ 35,  MVT::v4f32,// ->10800
/*10765*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10767*/     OPC_EmitNode, TARGET_VAL(PPC::V_SETALLONES), 0,
                  1/*#VTs*/, MVT::v16i8, 0/*#Ops*/,  // Results = #2
/*10774*/     OPC_EmitNode, TARGET_VAL(PPC::V_SETALLONES), 0,
                  1/*#VTs*/, MVT::v16i8, 0/*#Ops*/,  // Results = #3
/*10781*/     OPC_EmitNode, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*10790*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 4, 
              // Src: (fmul:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 3
              // Dst: (VMADDFP:v4f32 ?:v4f32:$vA, ?:v4f32:$vB, (VSLW:v4i32 (V_SETALLONES:v16i8), (V_SETALLONES:v16i8)))
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FSUB),// ->10843
/*10804*/   OPC_RecordChild0, // #0 = $FRA
/*10805*/   OPC_RecordChild1, // #1 = $FRB
/*10806*/   OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->10818
/*10809*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSUB), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f64 f64:f64:$FRA, f64:f64:$FRB) - Complexity = 3
              // Dst: (FSUB:f64 f64:f64:$FRA, f64:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->10829
/*10820*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSUBS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f32 f32:f32:$FRA, f32:f32:$FRB) - Complexity = 3
              // Dst: (FSUBS:f32 f32:f32:$FRA, f32:f32:$FRB)
            /*SwitchType*/ 11,  MVT::v4f32,// ->10842
/*10831*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10833*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 3
              // Dst: (VSUBFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FP_EXTEND),// ->10859
/*10846*/   OPC_RecordChild0, // #0 = $src
/*10847*/   OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*10850*/   OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (fextend:f64 f32:f32:$src) - Complexity = 3
            // Dst: (COPY_TO_REGCLASS:f64 ?:f32:$src, F8RC:i32)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCFID),// ->10873
/*10862*/   OPC_RecordChild0, // #0 = $frB
/*10863*/   OPC_CheckType, MVT::f64,
/*10865*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCFID), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfcfid:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCFID:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIDZ),// ->10887
/*10876*/   OPC_RecordChild0, // #0 = $frB
/*10877*/   OPC_CheckType, MVT::f64,
/*10879*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIDZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctidz:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCTIDZ:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCFIDU),// ->10901
/*10890*/   OPC_RecordChild0, // #0 = $frB
/*10891*/   OPC_CheckType, MVT::f64,
/*10893*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCFIDU), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfcfidu:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCFIDU:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::FCFIDS),// ->10913
/*10904*/   OPC_RecordChild0, // #0 = $frB
/*10905*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCFIDS), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (PPCfcfids:f32 f64:f64:$frB) - Complexity = 3
            // Dst: (FCFIDS:f32 f64:f64:$frB)
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::FCFIDUS),// ->10925
/*10916*/   OPC_RecordChild0, // #0 = $frB
/*10917*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCFIDUS), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (PPCfcfidus:f32 f64:f64:$frB) - Complexity = 3
            // Dst: (FCFIDUS:f32 f64:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIDUZ),// ->10939
/*10928*/   OPC_RecordChild0, // #0 = $frB
/*10929*/   OPC_CheckType, MVT::f64,
/*10931*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIDUZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctiduz:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCTIDUZ:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIWUZ),// ->10953
/*10942*/   OPC_RecordChild0, // #0 = $frB
/*10943*/   OPC_CheckType, MVT::f64,
/*10945*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIWUZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctiwuz:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCTIWUZ:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FRINT),// ->10979
/*10956*/   OPC_RecordChild0, // #0 = $frB
/*10957*/   OPC_SwitchType /*2 cases */, 8,  MVT::f64,// ->10968
/*10960*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRINDrint), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (frint:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRINDrint:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10978
/*10970*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRINSrint), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (frint:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRINSrint:f32 f32:f32:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 13,  TARGET_VAL(PPCISD::FADDRTZ),// ->10995
/*10982*/   OPC_RecordChild0, // #0 = $FRA
/*10983*/   OPC_RecordChild1, // #1 = $FRB
/*10984*/   OPC_CheckType, MVT::f64,
/*10986*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FADDrtz), 0,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCfaddrtz:f64 f64:f64:$FRA, f64:f64:$FRB) - Complexity = 3
            // Dst: (FADDrtz:f64 f64:f64:$FRA, f64:f64:$FRB)
          /*SwitchOpcode*/ 110|128,1/*238*/,  TARGET_VAL(PPCISD::VCMP),// ->11237
/*10999*/   OPC_RecordChild0, // #0 = $vA
/*11000*/   OPC_RecordChild1, // #1 = $vB
/*11001*/   OPC_MoveChild, 2,
/*11003*/   OPC_Scope, 16, /*->11021*/ // 13 children in Scope
/*11005*/     OPC_CheckInteger, 6, 
/*11007*/     OPC_MoveParent,
/*11008*/     OPC_CheckType, MVT::v16i8,
/*11010*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11012*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 6:i32) - Complexity = 8
              // Dst: (VCMPEQUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11021*/   /*Scope*/ 17, /*->11039*/
/*11022*/     OPC_CheckInteger, 6|128,6/*774*/, 
/*11025*/     OPC_MoveParent,
/*11026*/     OPC_CheckType, MVT::v16i8,
/*11028*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11030*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 774:i32) - Complexity = 8
              // Dst: (VCMPGTSB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11039*/   /*Scope*/ 17, /*->11057*/
/*11040*/     OPC_CheckInteger, 6|128,4/*518*/, 
/*11043*/     OPC_MoveParent,
/*11044*/     OPC_CheckType, MVT::v16i8,
/*11046*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11048*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 518:i32) - Complexity = 8
              // Dst: (VCMPGTUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11057*/   /*Scope*/ 16, /*->11074*/
/*11058*/     OPC_CheckInteger, 70, 
/*11060*/     OPC_MoveParent,
/*11061*/     OPC_CheckType, MVT::v8i16,
/*11063*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11065*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 70:i32) - Complexity = 8
              // Dst: (VCMPEQUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11074*/   /*Scope*/ 17, /*->11092*/
/*11075*/     OPC_CheckInteger, 70|128,6/*838*/, 
/*11078*/     OPC_MoveParent,
/*11079*/     OPC_CheckType, MVT::v8i16,
/*11081*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11083*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 838:i32) - Complexity = 8
              // Dst: (VCMPGTSH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11092*/   /*Scope*/ 17, /*->11110*/
/*11093*/     OPC_CheckInteger, 70|128,4/*582*/, 
/*11096*/     OPC_MoveParent,
/*11097*/     OPC_CheckType, MVT::v8i16,
/*11099*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11101*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 582:i32) - Complexity = 8
              // Dst: (VCMPGTUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11110*/   /*Scope*/ 17, /*->11128*/
/*11111*/     OPC_CheckInteger, 6|128,1/*134*/, 
/*11114*/     OPC_MoveParent,
/*11115*/     OPC_CheckType, MVT::v4i32,
/*11117*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11119*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 134:i32) - Complexity = 8
              // Dst: (VCMPEQUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11128*/   /*Scope*/ 17, /*->11146*/
/*11129*/     OPC_CheckInteger, 6|128,7/*902*/, 
/*11132*/     OPC_MoveParent,
/*11133*/     OPC_CheckType, MVT::v4i32,
/*11135*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11137*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 902:i32) - Complexity = 8
              // Dst: (VCMPGTSW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11146*/   /*Scope*/ 17, /*->11164*/
/*11147*/     OPC_CheckInteger, 6|128,5/*646*/, 
/*11150*/     OPC_MoveParent,
/*11151*/     OPC_CheckType, MVT::v4i32,
/*11153*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11155*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 646:i32) - Complexity = 8
              // Dst: (VCMPGTUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11164*/   /*Scope*/ 17, /*->11182*/
/*11165*/     OPC_CheckInteger, 70|128,7/*966*/, 
/*11168*/     OPC_MoveParent,
/*11169*/     OPC_CheckType, MVT::v4f32,
/*11171*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11173*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 966:i32) - Complexity = 8
              // Dst: (VCMPBFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11182*/   /*Scope*/ 17, /*->11200*/
/*11183*/     OPC_CheckInteger, 70|128,1/*198*/, 
/*11186*/     OPC_MoveParent,
/*11187*/     OPC_CheckType, MVT::v4f32,
/*11189*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11191*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 198:i32) - Complexity = 8
              // Dst: (VCMPEQFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11200*/   /*Scope*/ 17, /*->11218*/
/*11201*/     OPC_CheckInteger, 70|128,3/*454*/, 
/*11204*/     OPC_MoveParent,
/*11205*/     OPC_CheckType, MVT::v4f32,
/*11207*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11209*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 454:i32) - Complexity = 8
              // Dst: (VCMPGEFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11218*/   /*Scope*/ 17, /*->11236*/
/*11219*/     OPC_CheckInteger, 70|128,5/*710*/, 
/*11222*/     OPC_MoveParent,
/*11223*/     OPC_CheckType, MVT::v4f32,
/*11225*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11227*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 710:i32) - Complexity = 8
              // Dst: (VCMPGTFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11236*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 123|128,1/*251*/,  TARGET_VAL(PPCISD::VCMPo),// ->11492
/*11241*/   OPC_RecordChild0, // #0 = $vA
/*11242*/   OPC_RecordChild1, // #1 = $vB
/*11243*/   OPC_MoveChild, 2,
/*11245*/   OPC_Scope, 17, /*->11264*/ // 13 children in Scope
/*11247*/     OPC_CheckInteger, 6, 
/*11249*/     OPC_MoveParent,
/*11250*/     OPC_CheckType, MVT::v16i8,
/*11252*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11254*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 6:i32) - Complexity = 8
              // Dst: (VCMPEQUBo:v16i8:i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11264*/   /*Scope*/ 18, /*->11283*/
/*11265*/     OPC_CheckInteger, 6|128,6/*774*/, 
/*11268*/     OPC_MoveParent,
/*11269*/     OPC_CheckType, MVT::v16i8,
/*11271*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11273*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 774:i32) - Complexity = 8
              // Dst: (VCMPGTSBo:v16i8:i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11283*/   /*Scope*/ 18, /*->11302*/
/*11284*/     OPC_CheckInteger, 6|128,4/*518*/, 
/*11287*/     OPC_MoveParent,
/*11288*/     OPC_CheckType, MVT::v16i8,
/*11290*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11292*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 518:i32) - Complexity = 8
              // Dst: (VCMPGTUBo:v16i8:i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11302*/   /*Scope*/ 17, /*->11320*/
/*11303*/     OPC_CheckInteger, 70, 
/*11305*/     OPC_MoveParent,
/*11306*/     OPC_CheckType, MVT::v8i16,
/*11308*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11310*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 70:i32) - Complexity = 8
              // Dst: (VCMPEQUHo:v8i16:i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11320*/   /*Scope*/ 18, /*->11339*/
/*11321*/     OPC_CheckInteger, 70|128,6/*838*/, 
/*11324*/     OPC_MoveParent,
/*11325*/     OPC_CheckType, MVT::v8i16,
/*11327*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11329*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 838:i32) - Complexity = 8
              // Dst: (VCMPGTSHo:v8i16:i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11339*/   /*Scope*/ 18, /*->11358*/
/*11340*/     OPC_CheckInteger, 70|128,4/*582*/, 
/*11343*/     OPC_MoveParent,
/*11344*/     OPC_CheckType, MVT::v8i16,
/*11346*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11348*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 582:i32) - Complexity = 8
              // Dst: (VCMPGTUHo:v8i16:i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11358*/   /*Scope*/ 18, /*->11377*/
/*11359*/     OPC_CheckInteger, 6|128,1/*134*/, 
/*11362*/     OPC_MoveParent,
/*11363*/     OPC_CheckType, MVT::v4i32,
/*11365*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11367*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 134:i32) - Complexity = 8
              // Dst: (VCMPEQUWo:v4i32:i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11377*/   /*Scope*/ 18, /*->11396*/
/*11378*/     OPC_CheckInteger, 6|128,7/*902*/, 
/*11381*/     OPC_MoveParent,
/*11382*/     OPC_CheckType, MVT::v4i32,
/*11384*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11386*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 902:i32) - Complexity = 8
              // Dst: (VCMPGTSWo:v4i32:i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11396*/   /*Scope*/ 18, /*->11415*/
/*11397*/     OPC_CheckInteger, 6|128,5/*646*/, 
/*11400*/     OPC_MoveParent,
/*11401*/     OPC_CheckType, MVT::v4i32,
/*11403*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11405*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 646:i32) - Complexity = 8
              // Dst: (VCMPGTUWo:v4i32:i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11415*/   /*Scope*/ 18, /*->11434*/
/*11416*/     OPC_CheckInteger, 70|128,7/*966*/, 
/*11419*/     OPC_MoveParent,
/*11420*/     OPC_CheckType, MVT::v4f32,
/*11422*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11424*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPBFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 966:i32) - Complexity = 8
              // Dst: (VCMPBFPo:v4f32:i32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11434*/   /*Scope*/ 18, /*->11453*/
/*11435*/     OPC_CheckInteger, 70|128,1/*198*/, 
/*11438*/     OPC_MoveParent,
/*11439*/     OPC_CheckType, MVT::v4f32,
/*11441*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11443*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 198:i32) - Complexity = 8
              // Dst: (VCMPEQFPo:v4f32:i32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11453*/   /*Scope*/ 18, /*->11472*/
/*11454*/     OPC_CheckInteger, 70|128,3/*454*/, 
/*11457*/     OPC_MoveParent,
/*11458*/     OPC_CheckType, MVT::v4f32,
/*11460*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11462*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGEFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 454:i32) - Complexity = 8
              // Dst: (VCMPGEFPo:v4f32:i32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11472*/   /*Scope*/ 18, /*->11491*/
/*11473*/     OPC_CheckInteger, 70|128,5/*710*/, 
/*11476*/     OPC_MoveParent,
/*11477*/     OPC_CheckType, MVT::v4f32,
/*11479*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11481*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 710:i32) - Complexity = 8
              // Dst: (VCMPGTFPo:v4f32:i32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11491*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 94|128,2/*350*/,  TARGET_VAL(ISD::VECTOR_SHUFFLE),// ->11846
/*11496*/   OPC_Scope, 81, /*->11579*/ // 4 children in Scope
/*11498*/     OPC_RecordNode, // #0 = $UIMM
/*11499*/     OPC_RecordChild0, // #1 = $vB
/*11500*/     OPC_MoveChild, 1,
/*11502*/     OPC_CheckOpcode, TARGET_VAL(ISD::UNDEF),
/*11505*/     OPC_MoveParent,
/*11506*/     OPC_CheckType, MVT::v16i8,
/*11508*/     OPC_Scope, 16, /*->11526*/ // 4 children in Scope
/*11510*/       OPC_CheckPredicate, 75, // Predicate_vspltb_shuffle
/*11512*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11514*/       OPC_EmitNodeXForm, 9, 0, // VSPLTB_get_imm
/*11517*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8))<<P:Predicate_vspltb_shuffle>><<X:VSPLTB_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTB:v16i8 (VSPLTB_get_imm:i32 (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8)):$UIMM), v16i8:v16i8:$vB)
/*11526*/     /*Scope*/ 16, /*->11543*/
/*11527*/       OPC_CheckPredicate, 76, // Predicate_vsplth_shuffle
/*11529*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11531*/       OPC_EmitNodeXForm, 10, 0, // VSPLTH_get_imm
/*11534*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8))<<P:Predicate_vsplth_shuffle>><<X:VSPLTH_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTH:v16i8 (VSPLTH_get_imm:i32 (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8)):$UIMM), v16i8:v16i8:$vB)
/*11543*/     /*Scope*/ 16, /*->11560*/
/*11544*/       OPC_CheckPredicate, 77, // Predicate_vspltw_shuffle
/*11546*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11548*/       OPC_EmitNodeXForm, 11, 0, // VSPLTW_get_imm
/*11551*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8))<<P:Predicate_vspltw_shuffle>><<X:VSPLTW_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTW:v16i8 (VSPLTW_get_imm:i32 (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8)):$UIMM), v16i8:v16i8:$vB)
/*11560*/     /*Scope*/ 17, /*->11578*/
/*11561*/       OPC_CheckPredicate, 78, // Predicate_vsldoi_unary_shuffle
/*11563*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11565*/       OPC_EmitNodeXForm, 12, 0, // VSLDOI_unary_get_imm
/*11568*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSLDOI), 0,
                    1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 1, 1, 2, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vsldoi_unary_shuffle>><<X:VSLDOI_unary_get_imm>>:$in - Complexity = 7
                // Dst: (VSLDOI:v16i8 ?:v16i8:$vA, ?:v16i8:$vA, (VSLDOI_unary_get_imm:i32 ?:v16i8:$in))
/*11578*/     0, /*End of Scope*/
/*11579*/   /*Scope*/ 123, /*->11703*/
/*11580*/     OPC_RecordChild0, // #0 = $vA
/*11581*/     OPC_MoveChild, 1,
/*11583*/     OPC_CheckOpcode, TARGET_VAL(ISD::UNDEF),
/*11586*/     OPC_MoveParent,
/*11587*/     OPC_CheckType, MVT::v16i8,
/*11589*/     OPC_Scope, 13, /*->11604*/ // 8 children in Scope
/*11591*/       OPC_CheckPredicate, 79, // Predicate_vpkuwum_unary_shuffle
/*11593*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11595*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vpkuwum_unary_shuffle>> - Complexity = 7
                // Dst: (VPKUWUM:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11604*/     /*Scope*/ 13, /*->11618*/
/*11605*/       OPC_CheckPredicate, 80, // Predicate_vpkuhum_unary_shuffle
/*11607*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11609*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vpkuhum_unary_shuffle>> - Complexity = 7
                // Dst: (VPKUHUM:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11618*/     /*Scope*/ 13, /*->11632*/
/*11619*/       OPC_CheckPredicate, 81, // Predicate_vmrglb_unary_shuffle
/*11621*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11623*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglb_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLB:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11632*/     /*Scope*/ 13, /*->11646*/
/*11633*/       OPC_CheckPredicate, 82, // Predicate_vmrglh_unary_shuffle
/*11635*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11637*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglh_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLH:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11646*/     /*Scope*/ 13, /*->11660*/
/*11647*/       OPC_CheckPredicate, 83, // Predicate_vmrglw_unary_shuffle
/*11649*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11651*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglw_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLW:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11660*/     /*Scope*/ 13, /*->11674*/
/*11661*/       OPC_CheckPredicate, 84, // Predicate_vmrghb_unary_shuffle
/*11663*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11665*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghb_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHB:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11674*/     /*Scope*/ 13, /*->11688*/
/*11675*/       OPC_CheckPredicate, 85, // Predicate_vmrghh_unary_shuffle
/*11677*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11679*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghh_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHH:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11688*/     /*Scope*/ 13, /*->11702*/
/*11689*/       OPC_CheckPredicate, 86, // Predicate_vmrghw_unary_shuffle
/*11691*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11693*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghw_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHW:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11702*/     0, /*End of Scope*/
/*11703*/   /*Scope*/ 22, /*->11726*/
/*11704*/     OPC_RecordNode, // #0 = $SH
/*11705*/     OPC_RecordChild0, // #1 = $vA
/*11706*/     OPC_RecordChild1, // #2 = $vB
/*11707*/     OPC_CheckPredicate, 87, // Predicate_vsldoi_shuffle
/*11709*/     OPC_CheckType, MVT::v16i8,
/*11711*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11713*/     OPC_EmitNodeXForm, 13, 0, // VSLDOI_get_imm
/*11716*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSLDOI), 0,
                  1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 1, 2, 3, 
              // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vsldoi_shuffle>><<X:VSLDOI_get_imm>>:$SH - Complexity = 4
              // Dst: (VSLDOI:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, (VSLDOI_get_imm:i32 (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB):$SH))
/*11726*/   /*Scope*/ 118, /*->11845*/
/*11727*/     OPC_RecordChild0, // #0 = $vA
/*11728*/     OPC_RecordChild1, // #1 = $vB
/*11729*/     OPC_CheckType, MVT::v16i8,
/*11731*/     OPC_Scope, 13, /*->11746*/ // 8 children in Scope
/*11733*/       OPC_CheckPredicate, 88, // Predicate_vmrghb_shuffle
/*11735*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11737*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrghb_shuffle>> - Complexity = 4
                // Dst: (VMRGHB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11746*/     /*Scope*/ 13, /*->11760*/
/*11747*/       OPC_CheckPredicate, 89, // Predicate_vmrghh_shuffle
/*11749*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11751*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrghh_shuffle>> - Complexity = 4
                // Dst: (VMRGHH:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11760*/     /*Scope*/ 13, /*->11774*/
/*11761*/       OPC_CheckPredicate, 90, // Predicate_vmrghw_shuffle
/*11763*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11765*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrghw_shuffle>> - Complexity = 4
                // Dst: (VMRGHW:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11774*/     /*Scope*/ 13, /*->11788*/
/*11775*/       OPC_CheckPredicate, 91, // Predicate_vmrglb_shuffle
/*11777*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11779*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrglb_shuffle>> - Complexity = 4
                // Dst: (VMRGLB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11788*/     /*Scope*/ 13, /*->11802*/
/*11789*/       OPC_CheckPredicate, 92, // Predicate_vmrglh_shuffle
/*11791*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11793*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrglh_shuffle>> - Complexity = 4
                // Dst: (VMRGLH:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11802*/     /*Scope*/ 13, /*->11816*/
/*11803*/       OPC_CheckPredicate, 93, // Predicate_vmrglw_shuffle
/*11805*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11807*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrglw_shuffle>> - Complexity = 4
                // Dst: (VMRGLW:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11816*/     /*Scope*/ 13, /*->11830*/
/*11817*/       OPC_CheckPredicate, 94, // Predicate_vpkuhum_shuffle
/*11819*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11821*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vpkuhum_shuffle>> - Complexity = 4
                // Dst: (VPKUHUM:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11830*/     /*Scope*/ 13, /*->11844*/
/*11831*/       OPC_CheckPredicate, 95, // Predicate_vpkuwum_shuffle
/*11833*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11835*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vpkuwum_shuffle>> - Complexity = 4
                // Dst: (VPKUWUM:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11844*/     0, /*End of Scope*/
/*11845*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 85,  TARGET_VAL(ISD::BUILD_VECTOR),// ->11934
/*11849*/   OPC_Scope, 54, /*->11905*/ // 3 children in Scope
/*11851*/     OPC_RecordNode, // #0 = $SIMM
/*11852*/     OPC_SwitchType /*3 cases */, 15,  MVT::v16i8,// ->11870
/*11855*/       OPC_CheckPredicate, 96, // Predicate_vecspltisb
/*11857*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11859*/       OPC_EmitNodeXForm, 14, 0, // VSPLTISB_get_imm
/*11862*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISB), 0,
                    1/*#VTs*/, MVT::v16i8, 1/*#Ops*/, 1, 
                // Src: (build_vector:v16i8)<<P:Predicate_vecspltisb>><<X:VSPLTISB_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISB:v16i8 (VSPLTISB_get_imm:i32 (build_vector:v16i8):$SIMM))
              /*SwitchType*/ 15,  MVT::v8i16,// ->11887
/*11872*/       OPC_CheckPredicate, 97, // Predicate_vecspltish
/*11874*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11876*/       OPC_EmitNodeXForm, 15, 0, // VSPLTISH_get_imm
/*11879*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISH), 0,
                    1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 1, 
                // Src: (build_vector:v8i16)<<P:Predicate_vecspltish>><<X:VSPLTISH_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISH:v8i16 (VSPLTISH_get_imm:i32 (build_vector:v8i16):$SIMM))
              /*SwitchType*/ 15,  MVT::v4i32,// ->11904
/*11889*/       OPC_CheckPredicate, 98, // Predicate_vecspltisw
/*11891*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11893*/       OPC_EmitNodeXForm, 16, 0, // VSPLTISW_get_imm
/*11896*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISW), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 1, 
                // Src: (build_vector:v4i32)<<P:Predicate_vecspltisw>><<X:VSPLTISW_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISW:v4i32 (VSPLTISW_get_imm:i32 (build_vector:v4i32):$SIMM))
              0, // EndSwitchType
/*11905*/   /*Scope*/ 13, /*->11919*/
/*11906*/     OPC_CheckPredicate, 99, // Predicate_immAllZerosV
/*11908*/     OPC_CheckType, MVT::v4i32,
/*11910*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11912*/     OPC_MorphNodeTo, TARGET_VAL(PPC::V_SET0), 0,
                  1/*#VTs*/, MVT::v4i32, 0/*#Ops*/, 
              // Src: (build_vector:v4i32)<<P:Predicate_immAllZerosV>> - Complexity = 4
              // Dst: (V_SET0:v4i32)
/*11919*/   /*Scope*/ 13, /*->11933*/
/*11920*/     OPC_CheckPredicate, 71, // Predicate_immAllOnesV
/*11922*/     OPC_CheckType, MVT::v4i32,
/*11924*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11926*/     OPC_MorphNodeTo, TARGET_VAL(PPC::V_SETALLONES), 0,
                  1/*#VTs*/, MVT::v4i32, 0/*#Ops*/, 
              // Src: (build_vector:v4i32)<<P:Predicate_immAllOnesV>> - Complexity = 4
              // Dst: (V_SETALLONES:v4i32)
/*11933*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 107,  TARGET_VAL(ISD::BITCAST),// ->12044
/*11937*/   OPC_RecordChild0, // #0 = $src
/*11938*/   OPC_Scope, 25, /*->11965*/ // 4 children in Scope
/*11940*/     OPC_CheckChild0Type, MVT::v8i16,
/*11942*/     OPC_SwitchType /*3 cases */, 5,  MVT::v16i8,// ->11950
/*11945*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11947*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 5,  MVT::v4i32,// ->11957
/*11952*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11954*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              /*SwitchType*/ 5,  MVT::v4f32,// ->11964
/*11959*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11961*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*11965*/   /*Scope*/ 25, /*->11991*/
/*11966*/     OPC_CheckChild0Type, MVT::v4i32,
/*11968*/     OPC_SwitchType /*3 cases */, 5,  MVT::v16i8,// ->11976
/*11971*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11973*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 5,  MVT::v8i16,// ->11983
/*11978*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11980*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 5,  MVT::v4f32,// ->11990
/*11985*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11987*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*11991*/   /*Scope*/ 25, /*->12017*/
/*11992*/     OPC_CheckChild0Type, MVT::v4f32,
/*11994*/     OPC_SwitchType /*3 cases */, 5,  MVT::v16i8,// ->12002
/*11997*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11999*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 5,  MVT::v8i16,// ->12009
/*12004*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12006*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 5,  MVT::v4i32,// ->12016
/*12011*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12013*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              0, // EndSwitchType
/*12017*/   /*Scope*/ 25, /*->12043*/
/*12018*/     OPC_CheckChild0Type, MVT::v16i8,
/*12020*/     OPC_SwitchType /*3 cases */, 5,  MVT::v8i16,// ->12028
/*12023*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12025*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 5,  MVT::v4i32,// ->12035
/*12030*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12032*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              /*SwitchType*/ 5,  MVT::v4f32,// ->12042
/*12037*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12039*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*12043*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(PPCISD::VPERM),// ->12064
/*12047*/   OPC_RecordChild0, // #0 = $vA
/*12048*/   OPC_RecordChild1, // #1 = $vB
/*12049*/   OPC_RecordChild2, // #2 = $vC
/*12050*/   OPC_CheckType, MVT::v16i8,
/*12052*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12054*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VPERM), 0,
                1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvperm:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, v16i8:v16i8:$vC) - Complexity = 3
            // Dst: (VPERM:v16i8 ?:v16i8:$vA, ?:v16i8:$vB, ?:v16i8:$vC)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::FP_TO_SINT),// ->12082
/*12067*/   OPC_RecordChild0, // #0 = $vA
/*12068*/   OPC_CheckChild0Type, MVT::v4f32,
/*12070*/   OPC_CheckType, MVT::v4i32,
/*12072*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12074*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS_0), 0,
                1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
            // Src: (fp_to_sint:v4i32 v4f32:v4f32:$vA) - Complexity = 3
            // Dst: (VCTSXS_0:v4i32 ?:v4f32:$vA)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::FP_TO_UINT),// ->12100
/*12085*/   OPC_RecordChild0, // #0 = $vA
/*12086*/   OPC_CheckChild0Type, MVT::v4f32,
/*12088*/   OPC_CheckType, MVT::v4i32,
/*12090*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12092*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS_0), 0,
                1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
            // Src: (fp_to_uint:v4i32 v4f32:v4f32:$vA) - Complexity = 3
            // Dst: (VCTUXS_0:v4i32 ?:v4f32:$vA)
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::CALLSEQ_START),// ->12120
/*12103*/   OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*12104*/   OPC_RecordChild1, // #1 = $amt
/*12105*/   OPC_MoveChild, 1,
/*12107*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*12110*/   OPC_MoveParent,
/*12111*/   OPC_EmitMergeInputChains1_0,
/*12112*/   OPC_MorphNodeTo, TARGET_VAL(PPC::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN:i32 (timm:i32):$amt)
          /*SwitchOpcode*/ 92,  TARGET_VAL(PPCISD::CALL),// ->12215
/*12123*/   OPC_RecordNode,   // #0 = 'PPCcall' chained node
/*12124*/   OPC_CaptureGlueInput,
/*12125*/   OPC_RecordChild1, // #1 = $func
/*12126*/   OPC_MoveChild, 1,
/*12128*/   OPC_SwitchOpcode /*3 cases */, 28,  TARGET_VAL(ISD::Constant),// ->12160
/*12132*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->12146
/*12135*/       OPC_MoveParent,
/*12136*/       OPC_EmitMergeInputChains1_0,
/*12137*/       OPC_EmitConvertToTarget, 1,
/*12139*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BLA), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (PPCcall (imm:i32):$func) - Complexity = 6
                // Dst: (BLA (imm:i32):$func)
              /*SwitchType*/ 11,  MVT::i64,// ->12159
/*12148*/       OPC_MoveParent,
/*12149*/       OPC_EmitMergeInputChains1_0,
/*12150*/       OPC_EmitConvertToTarget, 1,
/*12152*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BLA8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (PPCcall (imm:i64):$func) - Complexity = 6
                // Dst: (BLA8 (imm:i64):$func)
              0, // EndSwitchType
            /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::TargetGlobalAddress),// ->12187
/*12163*/     OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->12175
/*12166*/       OPC_MoveParent,
/*12167*/       OPC_EmitMergeInputChains1_0,
/*12168*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (PPCcall (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (BL (tglobaladdr:i32):$dst)
              /*SwitchType*/ 9,  MVT::i64,// ->12186
/*12177*/       OPC_MoveParent,
/*12178*/       OPC_EmitMergeInputChains1_0,
/*12179*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (PPCcall (tglobaladdr:i64):$dst) - Complexity = 6
                // Dst: (BL8 (tglobaladdr:i64):$dst)
              0, // EndSwitchType
            /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::TargetExternalSymbol),// ->12214
/*12190*/     OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->12202
/*12193*/       OPC_MoveParent,
/*12194*/       OPC_EmitMergeInputChains1_0,
/*12195*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (PPCcall (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (BL (texternalsym:i32):$dst)
              /*SwitchType*/ 9,  MVT::i64,// ->12213
/*12204*/       OPC_MoveParent,
/*12205*/       OPC_EmitMergeInputChains1_0,
/*12206*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (PPCcall (texternalsym:i64):$dst) - Complexity = 6
                // Dst: (BL8 (texternalsym:i64):$dst)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 20,  TARGET_VAL(PPCISD::SC),// ->12238
/*12218*/   OPC_RecordNode,   // #0 = 'PPCsc' chained node
/*12219*/   OPC_RecordChild1, // #1 = $lev
/*12220*/   OPC_MoveChild, 1,
/*12222*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12225*/   OPC_CheckType, MVT::i32,
/*12227*/   OPC_MoveParent,
/*12228*/   OPC_EmitMergeInputChains1_0,
/*12229*/   OPC_EmitConvertToTarget, 1,
/*12231*/   OPC_MorphNodeTo, TARGET_VAL(PPC::SC), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 2, 
            // Src: (PPCsc (imm:i32):$lev) - Complexity = 6
            // Dst: (SC (imm:i32):$lev)
          /*SwitchOpcode*/ 51,  TARGET_VAL(PPCISD::CALL_NOP),// ->12292
/*12241*/   OPC_RecordNode,   // #0 = 'PPCcall_nop' chained node
/*12242*/   OPC_CaptureGlueInput,
/*12243*/   OPC_RecordChild1, // #1 = $func
/*12244*/   OPC_MoveChild, 1,
/*12246*/   OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::Constant),// ->12263
/*12250*/     OPC_CheckType, MVT::i64,
/*12252*/     OPC_MoveParent,
/*12253*/     OPC_EmitMergeInputChains1_0,
/*12254*/     OPC_EmitConvertToTarget, 1,
/*12256*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BLA8_NOP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 2, 
              // Src: (PPCcall_nop (imm:i64):$func) - Complexity = 6
              // Dst: (BLA8_NOP (imm:i64):$func)
            /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->12277
/*12266*/     OPC_CheckType, MVT::i64,
/*12268*/     OPC_MoveParent,
/*12269*/     OPC_EmitMergeInputChains1_0,
/*12270*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_NOP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (PPCcall_nop (tglobaladdr:i64):$dst) - Complexity = 6
              // Dst: (BL8_NOP (tglobaladdr:i64):$dst)
            /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetExternalSymbol),// ->12291
/*12280*/     OPC_CheckType, MVT::i64,
/*12282*/     OPC_MoveParent,
/*12283*/     OPC_EmitMergeInputChains1_0,
/*12284*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_NOP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (PPCcall_nop (texternalsym:i64):$dst) - Complexity = 6
              // Dst: (BL8_NOP (texternalsym:i64):$dst)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::RET_FLAG),// ->12304
/*12295*/   OPC_RecordNode,   // #0 = 'retflag' chained node
/*12296*/   OPC_CaptureGlueInput,
/*12297*/   OPC_EmitMergeInputChains1_0,
/*12298*/   OPC_MorphNodeTo, TARGET_VAL(PPC::BLR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (retflag) - Complexity = 3
            // Dst: (BLR)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->12323
/*12307*/   OPC_RecordNode,   // #0 = 'br' chained node
/*12308*/   OPC_RecordChild1, // #1 = $dst
/*12309*/   OPC_MoveChild, 1,
/*12311*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*12314*/   OPC_MoveParent,
/*12315*/   OPC_EmitMergeInputChains1_0,
/*12316*/   OPC_MorphNodeTo, TARGET_VAL(PPC::B), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$dst) - Complexity = 3
            // Dst: (B (bb:Other):$dst)
          /*SwitchOpcode*/ 24,  TARGET_VAL(PPCISD::BCTRL),// ->12350
/*12326*/   OPC_RecordNode,   // #0 = 'PPCbctrl' chained node
/*12327*/   OPC_CaptureGlueInput,
/*12328*/   OPC_Scope, 9, /*->12339*/ // 2 children in Scope
/*12330*/     OPC_CheckPatternPredicate, 1, // (!PPCSubTarget.isPPC64())
/*12332*/     OPC_EmitMergeInputChains1_0,
/*12333*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (PPCbctrl) - Complexity = 3
              // Dst: (BCTRL)
/*12339*/   /*Scope*/ 9, /*->12349*/
/*12340*/     OPC_CheckPatternPredicate, 2, // (PPCSubTarget.isPPC64())
/*12342*/     OPC_EmitMergeInputChains1_0,
/*12343*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (PPCbctrl) - Complexity = 3
              // Dst: (BCTRL8)
/*12349*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 8,  TARGET_VAL(ISD::TRAP),// ->12361
/*12353*/   OPC_RecordNode,   // #0 = 'trap' chained node
/*12354*/   OPC_EmitMergeInputChains1_0,
/*12355*/   OPC_MorphNodeTo, TARGET_VAL(PPC::TRAP), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (trap) - Complexity = 3
            // Dst: (TRAP)
          /*SwitchOpcode*/ 10,  TARGET_VAL(PPCISD::CR6SET),// ->12374
/*12364*/   OPC_RecordNode,   // #0 = 'PPCcr6set' chained node
/*12365*/   OPC_CaptureGlueInput,
/*12366*/   OPC_EmitMergeInputChains1_0,
/*12367*/   OPC_MorphNodeTo, TARGET_VAL(PPC::CR6SET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
            // Src: (PPCcr6set) - Complexity = 3
            // Dst: (CR6SET:i32)
          /*SwitchOpcode*/ 10,  TARGET_VAL(PPCISD::CR6UNSET),// ->12387
/*12377*/   OPC_RecordNode,   // #0 = 'PPCcr6unset' chained node
/*12378*/   OPC_CaptureGlueInput,
/*12379*/   OPC_EmitMergeInputChains1_0,
/*12380*/   OPC_MorphNodeTo, TARGET_VAL(PPC::CR6UNSET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
            // Src: (PPCcr6unset) - Complexity = 3
            // Dst: (CR6UNSET:i32)
          /*SwitchOpcode*/ 29,  TARGET_VAL(PPCISD::MTCTR),// ->12419
/*12390*/   OPC_RecordNode,   // #0 = 'PPCmtctr' chained node
/*12391*/   OPC_CaptureGlueInput,
/*12392*/   OPC_RecordChild1, // #1 = $rS
/*12393*/   OPC_Scope, 11, /*->12406*/ // 2 children in Scope
/*12395*/     OPC_CheckChild1Type, MVT::i32,
/*12397*/     OPC_EmitMergeInputChains1_0,
/*12398*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (PPCmtctr i32:i32:$rS) - Complexity = 3
              // Dst: (MTCTR:i32 i32:i32:$rS)
/*12406*/   /*Scope*/ 11, /*->12418*/
/*12407*/     OPC_CheckChild1Type, MVT::i64,
/*12409*/     OPC_EmitMergeInputChains1_0,
/*12410*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTR8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (PPCmtctr i64:i64:$rS) - Complexity = 3
              // Dst: (MTCTR8:i64 i64:i64:$rS)
/*12418*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(PPCISD::VMADDFP),// ->12439
/*12422*/   OPC_RecordChild0, // #0 = $A
/*12423*/   OPC_RecordChild1, // #1 = $B
/*12424*/   OPC_RecordChild2, // #2 = $C
/*12425*/   OPC_CheckType, MVT::v4f32,
/*12427*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12429*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvmaddfp:v4f32 v4f32:v4f32:$A, v4f32:v4f32:$B, v4f32:v4f32:$C) - Complexity = 3
            // Dst: (VMADDFP:v4f32 ?:v4f32:$A, ?:v4f32:$B, ?:v4f32:$C)
          /*SwitchOpcode*/ 17,  TARGET_VAL(PPCISD::VNMSUBFP),// ->12459
/*12442*/   OPC_RecordChild0, // #0 = $A
/*12443*/   OPC_RecordChild1, // #1 = $B
/*12444*/   OPC_RecordChild2, // #2 = $C
/*12445*/   OPC_CheckType, MVT::v4f32,
/*12447*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12449*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvnmsubfp:v4f32 v4f32:v4f32:$A, v4f32:v4f32:$B, v4f32:v4f32:$C) - Complexity = 3
            // Dst: (VNMSUBFP:v4f32 ?:v4f32:$A, ?:v4f32:$B, ?:v4f32:$C)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::SINT_TO_FP),// ->12477
/*12462*/   OPC_RecordChild0, // #0 = $vA
/*12463*/   OPC_CheckChild0Type, MVT::v4i32,
/*12465*/   OPC_CheckType, MVT::v4f32,
/*12467*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12469*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX_0), 0,
                1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
            // Src: (sint_to_fp:v4f32 v4i32:v4i32:$vA) - Complexity = 3
            // Dst: (VCFSX_0:v4f32 ?:v4i32:$vA)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::UINT_TO_FP),// ->12495
/*12480*/   OPC_RecordChild0, // #0 = $vA
/*12481*/   OPC_CheckChild0Type, MVT::v4i32,
/*12483*/   OPC_CheckType, MVT::v4f32,
/*12485*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12487*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX_0), 0,
                1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
            // Src: (uint_to_fp:v4f32 v4i32:v4i32:$vA) - Complexity = 3
            // Dst: (VCFUX_0:v4f32 ?:v4i32:$vA)
          /*SwitchOpcode*/ 13,  TARGET_VAL(PPCISD::LOAD_TOC),// ->12511
/*12498*/   OPC_RecordNode,   // #0 = 'PPCload_toc' chained node
/*12499*/   OPC_CaptureGlueInput,
/*12500*/   OPC_RecordChild1, // #1 = $reg
/*12501*/   OPC_CheckChild1Type, MVT::i64,
/*12503*/   OPC_EmitMergeInputChains1_0,
/*12504*/   OPC_MorphNodeTo, TARGET_VAL(PPC::LDinto_toc), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (PPCload_toc i64:i64:$reg) - Complexity = 3
            // Dst: (LDinto_toc i64:i64:$reg)
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::TOC_RESTORE),// ->12523
/*12514*/   OPC_RecordNode,   // #0 = 'PPCtoc_restore' chained node
/*12515*/   OPC_CaptureGlueInput,
/*12516*/   OPC_EmitMergeInputChains1_0,
/*12517*/   OPC_MorphNodeTo, TARGET_VAL(PPC::LDtoc_restore), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (PPCtoc_restore) - Complexity = 3
            // Dst: (LDtoc_restore)
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 12525 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 117
  // #OPC_RecordNode                     = 46
  // #OPC_RecordChild                    = 537
  // #OPC_RecordMemRef                   = 11
  // #OPC_CaptureGlueInput               = 14
  // #OPC_MoveChild                      = 156
  // #OPC_MoveParent                     = 377
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 245
  // #OPC_CheckPredicate                 = 201
  // #OPC_CheckOpcode                    = 93
  // #OPC_SwitchOpcode                   = 16
  // #OPC_CheckType                      = 183
  // #OPC_SwitchType                     = 96
  // #OPC_CheckChildType                 = 57
  // #OPC_CheckInteger                   = 198
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 9
  // #OPC_CheckComplexPat                = 150
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 25
  // #OPC_EmitStringInteger              = 6
  // #OPC_EmitRegister                   = 0
  // #OPC_EmitConvertToTarget            = 75
  // #OPC_EmitMergeInputChains           = 206
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 12
  // #OPC_EmitNodeXForm                  = 38
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 12
  // #OPC_MorphNodeTo                    = 644

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (PPCSubTarget.hasAltivec());
  case 1: return (!PPCSubTarget.isPPC64());
  case 2: return (PPCSubTarget.isPPC64());
  }
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_imm32SExt16
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();

  // imm32SExt16 predicate - True if the i32 immediate fits in a 16-bit
  // sign extended field.  Used by instructions like 'addi'.
  return (int32_t)Imm == (short)Imm;

  }
  case 1: { // Predicate_imm16ShiftedSExt
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // imm16ShiftedSExt predicate - True if only bits in the top 16-bits of the
  // immediate are set.  Used by instructions like 'addis'.  Identical to 
  // imm16ShiftedZExt in 32-bit mode.
  if (N->getZExtValue() & 0xFFFF) return false;
  if (N->getValueType(0) == MVT::i32)
    return true;
  // For 64-bit, make sure it is sext right.
  return N->getZExtValue() == (uint64_t)(int)N->getZExtValue();

  }
  case 2: { // Predicate_imm64SExt16
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();

  // imm64SExt16 predicate - True if the i64 immediate fits in a 16-bit
  // sign extended field.  Used by instructions like 'addi'.
  return (int64_t)Imm == (short)Imm;

  }
  case 3: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 4: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 5: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 6: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 7: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 8: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 9: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 10: { // Predicate_zextloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 11: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 12: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 13: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 14: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 15: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 16: { // Predicate_aligned4sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAlignment() >= 4;

  }
  case 17: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 18: { // Predicate_aligned4load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAlignment() >= 4;

  }
  case 19: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 20: { // Predicate_unaligned4sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAlignment() < 4;

  }
  case 21: { // Predicate_unaligned4load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAlignment() < 4;

  }
  case 22: { // Predicate_extloadf32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::f32;

  }
  case 23: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 24: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 25: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 26: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 27: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 28: { // Predicate_itruncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 29: { // Predicate_pre_truncst
    SDNode *N = Node;

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

  }
  case 30: { // Predicate_pre_truncsti8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 31: { // Predicate_pre_truncsti16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 32: { // Predicate_istore
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 33: { // Predicate_pre_store
    SDNode *N = Node;

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

  }
  case 34: { // Predicate_pre_truncsti32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 35: { // Predicate_aligned4pre_store
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAlignment() >= 4;

  }
  case 36: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 37: { // Predicate_aligned4store
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAlignment() >= 4;

  }
  case 38: { // Predicate_unaligned4store
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAlignment() < 4;

  }
  case 39: { // Predicate_atomic_load_add_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 40: { // Predicate_atomic_load_add_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 41: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 42: { // Predicate_atomic_load_add_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 43: { // Predicate_atomic_load_sub_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 44: { // Predicate_atomic_load_sub_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 45: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 46: { // Predicate_atomic_load_sub_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 47: { // Predicate_atomic_load_and_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 48: { // Predicate_atomic_load_and_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 49: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 50: { // Predicate_atomic_load_and_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 51: { // Predicate_atomic_load_or_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 52: { // Predicate_atomic_load_or_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 53: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 54: { // Predicate_atomic_load_or_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 55: { // Predicate_atomic_load_xor_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 56: { // Predicate_atomic_load_xor_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 57: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 58: { // Predicate_atomic_load_xor_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 59: { // Predicate_atomic_load_nand_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 60: { // Predicate_atomic_load_nand_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 61: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 62: { // Predicate_atomic_load_nand_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 63: { // Predicate_atomic_cmp_swap_8
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 64: { // Predicate_atomic_cmp_swap_16
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 65: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 66: { // Predicate_atomic_cmp_swap_64
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

  }
  case 67: { // Predicate_atomic_swap_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 68: { // Predicate_atomic_swap_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 69: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 70: { // Predicate_atomic_swap_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 71: { // Predicate_immAllOnesV
    SDNode *N = Node;

  return ISD::isBuildVectorAllOnes(N);

  }
  case 72: { // Predicate_immZExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immZExt16 predicate - True if the immediate fits in a 16-bit zero extended
  // field.  Used by instructions like 'ori'.
  return (uint64_t)N->getZExtValue() == (unsigned short)N->getZExtValue();

  }
  case 73: { // Predicate_imm16ShiftedZExt
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // imm16ShiftedZExt predicate - True if only bits in the top 16-bits of the
  // immediate are set.  Used by instructions like 'xoris'.
  return (N->getZExtValue() & ~uint64_t(0xFFFF0000)) == 0;

  }
  case 74: { // Predicate_maskimm32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // maskImm predicate - True if immediate is a run of ones.
  unsigned mb, me;
  if (N->getValueType(0) == MVT::i32)
    return isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  else
    return false;

  }
  case 75: { // Predicate_vspltb_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 1);

  }
  case 76: { // Predicate_vsplth_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 2);

  }
  case 77: { // Predicate_vspltw_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 4);

  }
  case 78: { // Predicate_vsldoi_unary_shuffle
    SDNode *N = Node;

  return PPC::isVSLDOIShuffleMask(N, true) != -1;

  }
  case 79: { // Predicate_vpkuwum_unary_shuffle
    SDNode *N = Node;

  return PPC::isVPKUWUMShuffleMask(cast<ShuffleVectorSDNode>(N), true);

  }
  case 80: { // Predicate_vpkuhum_unary_shuffle
    SDNode *N = Node;

  return PPC::isVPKUHUMShuffleMask(cast<ShuffleVectorSDNode>(N), true);

  }
  case 81: { // Predicate_vmrglb_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 1, true);

  }
  case 82: { // Predicate_vmrglh_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 2, true);

  }
  case 83: { // Predicate_vmrglw_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 4, true);

  }
  case 84: { // Predicate_vmrghb_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 1, true);

  }
  case 85: { // Predicate_vmrghh_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 2, true);

  }
  case 86: { // Predicate_vmrghw_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 4, true);

  }
  case 87: { // Predicate_vsldoi_shuffle
    SDNode *N = Node;

  return PPC::isVSLDOIShuffleMask(N, false) != -1;

  }
  case 88: { // Predicate_vmrghb_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 1, false);

  }
  case 89: { // Predicate_vmrghh_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 2, false);

  }
  case 90: { // Predicate_vmrghw_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 4, false);

  }
  case 91: { // Predicate_vmrglb_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 1, false);

  }
  case 92: { // Predicate_vmrglh_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 2, false);

  }
  case 93: { // Predicate_vmrglw_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 4, false);

  }
  case 94: { // Predicate_vpkuhum_shuffle
    SDNode *N = Node;

  return PPC::isVPKUHUMShuffleMask(cast<ShuffleVectorSDNode>(N), false);

  }
  case 95: { // Predicate_vpkuwum_shuffle
    SDNode *N = Node;

  return PPC::isVPKUWUMShuffleMask(cast<ShuffleVectorSDNode>(N), false);

  }
  case 96: { // Predicate_vecspltisb
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 1, *CurDAG).getNode() != 0;

  }
  case 97: { // Predicate_vecspltish
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 2, *CurDAG).getNode() != 0;

  }
  case 98: { // Predicate_vecspltisw
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 4, *CurDAG).getNode() != 0;

  }
  case 99: { // Predicate_immAllZerosV
    SDNode *N = Node;

  return ISD::isBuildVectorAllZeros(N);

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
    return SelectAddrIdxOnly(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectAddrImm(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+2);
    return SelectAddrIdx(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+2);
    return SelectAddrImmX4(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 4:
    Result.resize(NextRes+1);
    return SelectAddrImmOffs(N, Result[NextRes+0].first);
  case 5:
    Result.resize(NextRes+1);
    return SelectAddr(N, Result[NextRes+0].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // HI16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  return getI32Imm((unsigned)N->getZExtValue() >> 16);

  }
  case 1: {  // LO16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the low 16 bits.
  return getI32Imm((unsigned short)N->getZExtValue());

  }
  case 2: {  // HA16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  signed int Val = N->getZExtValue();
  return getI32Imm((Val - (signed short)Val) >> 16);

  }
  case 3: {  // MB
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the start bit of a mask
  unsigned mb = 0, me;
  (void)isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  return getI32Imm(mb);

  }
  case 4: {  // ME
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the end bit of a mask
  unsigned mb, me = 0;
  (void)isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  return getI32Imm(me);

  }
  case 5: {  // SHL32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 31 - imm
  return getI32Imm(31 - N->getZExtValue());

  }
  case 6: {  // SHL64
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 63 - imm
  return getI32Imm(63 - N->getZExtValue());

  }
  case 7: {  // SRL32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 32 - imm
  return N->getZExtValue() ? getI32Imm(32 - N->getZExtValue()) : getI32Imm(0);

  }
  case 8: {  // SRL64
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 64 - imm
  return N->getZExtValue() ? getI32Imm(64 - N->getZExtValue()) : getI32Imm(0);

  }
  case 9: {  // VSPLTB_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 1));

  }
  case 10: {  // VSPLTH_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 2));

  }
  case 11: {  // VSPLTW_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 4));

  }
  case 12: {  // VSLDOI_unary_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::isVSLDOIShuffleMask(N, true));

  }
  case 13: {  // VSLDOI_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::isVSLDOIShuffleMask(N, false));

  }
  case 14: {  // VSPLTISB_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 1, *CurDAG);

  }
  case 15: {  // VSPLTISH_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 2, *CurDAG);

  }
  case 16: {  // VSPLTISW_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 4, *CurDAG);

  }
  }
}

