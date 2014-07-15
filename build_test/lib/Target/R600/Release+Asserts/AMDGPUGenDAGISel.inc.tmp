/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the AMDGPU target                              *|
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
/*0*/     OPC_SwitchOpcode /*65 cases */, 98|128,9/*1250*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->1255
/*5*/       OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*6*/       OPC_MoveChild, 1,
/*8*/       OPC_Scope, 80, /*->90*/ // 9 children in Scope
/*10*/        OPC_CheckInteger, 13|128,20/*2573*/, 
/*13*/        OPC_MoveParent,
/*14*/        OPC_RecordChild2, // #1 = $en
/*15*/        OPC_MoveChild, 2,
/*17*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*20*/        OPC_MoveParent,
/*21*/        OPC_RecordChild3, // #2 = $vm
/*22*/        OPC_MoveChild, 3,
/*24*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*27*/        OPC_MoveParent,
/*28*/        OPC_RecordChild4, // #3 = $done
/*29*/        OPC_MoveChild, 4,
/*31*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*34*/        OPC_MoveParent,
/*35*/        OPC_RecordChild5, // #4 = $tgt
/*36*/        OPC_MoveChild, 5,
/*38*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*41*/        OPC_MoveParent,
/*42*/        OPC_RecordChild6, // #5 = $compr
/*43*/        OPC_MoveChild, 6,
/*45*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*48*/        OPC_MoveParent,
/*49*/        OPC_RecordChild7, // #6 = $src0
/*50*/        OPC_MoveChild, 8,
/*52*/        OPC_RecordNode, // #7 = $src1
/*53*/        OPC_MoveParent,
/*54*/        OPC_MoveChild, 9,
/*56*/        OPC_RecordNode, // #8 = $src2
/*57*/        OPC_MoveParent,
/*58*/        OPC_MoveChild, 10,
/*60*/        OPC_RecordNode, // #9 = $src3
/*61*/        OPC_MoveParent,
/*62*/        OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*64*/        OPC_EmitMergeInputChains1_0,
/*65*/        OPC_EmitConvertToTarget, 1,
/*67*/        OPC_EmitConvertToTarget, 4,
/*69*/        OPC_EmitConvertToTarget, 5,
/*71*/        OPC_EmitConvertToTarget, 3,
/*73*/        OPC_EmitConvertToTarget, 2,
/*75*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP), 0|OPFL_Chain,
                  0/*#VTs*/, 9/*#Ops*/, 10, 11, 12, 13, 14, 6, 7, 8, 9, 
              // Src: (intrinsic_void 2573:iPTR, (imm:i32):$en, (imm:i32):$vm, (imm:i32):$done, (imm:i32):$tgt, (imm:i32):$compr, f32:f32:$src0, f32:f32:$src1, f32:f32:$src2, f32:f32:$src3) - Complexity = 23
              // Dst: (EXP (imm:i32):$en, (imm:i32):$tgt, (imm:i32):$compr, (imm:i32):$done, (imm:i32):$vm, ?:f32:$src0, ?:f32:$src1, ?:f32:$src2, ?:f32:$src3)
/*90*/      /*Scope*/ 84|128,2/*340*/, /*->432*/
/*92*/        OPC_CheckInteger, 127|128,19/*2559*/, 
/*95*/        OPC_MoveParent,
/*96*/        OPC_RecordChild2, // #1 = $src
/*97*/        OPC_RecordChild3, // #2 = $arraybase
/*98*/        OPC_MoveChild, 3,
/*100*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*103*/       OPC_MoveParent,
/*104*/       OPC_MoveChild, 4,
/*106*/       OPC_Scope, 80, /*->188*/ // 4 children in Scope
/*108*/         OPC_CheckInteger, 0, 
/*110*/         OPC_MoveParent,
/*111*/         OPC_RecordChild5, // #3 = $mask
/*112*/         OPC_MoveChild, 5,
/*114*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*117*/         OPC_MoveParent,
/*118*/         OPC_Scope, 33, /*->153*/ // 2 children in Scope
/*120*/           OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*122*/           OPC_EmitMergeInputChains1_0,
/*123*/           OPC_EmitInteger, MVT::i32, 0, 
/*126*/           OPC_EmitConvertToTarget, 2,
/*128*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*132*/           OPC_EmitConvertToTarget, 3,
/*134*/           OPC_EmitInteger, MVT::i32, 32, 
/*137*/           OPC_EmitInteger, MVT::i32, 0, 
/*140*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2559:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 0:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (R600_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 32:i32, 0:i32)
/*153*/         /*Scope*/ 33, /*->187*/
/*154*/           OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*156*/           OPC_EmitMergeInputChains1_0,
/*157*/           OPC_EmitInteger, MVT::i32, 0, 
/*160*/           OPC_EmitConvertToTarget, 2,
/*162*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*166*/           OPC_EmitConvertToTarget, 3,
/*168*/           OPC_EmitInteger, MVT::i32, 64, 
/*171*/           OPC_EmitInteger, MVT::i32, 0, 
/*174*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2559:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 0:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (EG_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 64:i32, 0:i32)
/*187*/         0, /*End of Scope*/
/*188*/       /*Scope*/ 80, /*->269*/
/*189*/         OPC_CheckInteger, 1, 
/*191*/         OPC_MoveParent,
/*192*/         OPC_RecordChild5, // #3 = $mask
/*193*/         OPC_MoveChild, 5,
/*195*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*198*/         OPC_MoveParent,
/*199*/         OPC_Scope, 33, /*->234*/ // 2 children in Scope
/*201*/           OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*203*/           OPC_EmitMergeInputChains1_0,
/*204*/           OPC_EmitInteger, MVT::i32, 0, 
/*207*/           OPC_EmitConvertToTarget, 2,
/*209*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*213*/           OPC_EmitConvertToTarget, 3,
/*215*/           OPC_EmitInteger, MVT::i32, 33, 
/*218*/           OPC_EmitInteger, MVT::i32, 0, 
/*221*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2559:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 1:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (R600_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 33:i32, 0:i32)
/*234*/         /*Scope*/ 33, /*->268*/
/*235*/           OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*237*/           OPC_EmitMergeInputChains1_0,
/*238*/           OPC_EmitInteger, MVT::i32, 0, 
/*241*/           OPC_EmitConvertToTarget, 2,
/*243*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*247*/           OPC_EmitConvertToTarget, 3,
/*249*/           OPC_EmitInteger, MVT::i32, 65, 
/*252*/           OPC_EmitInteger, MVT::i32, 0, 
/*255*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2559:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 1:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (EG_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 65:i32, 0:i32)
/*268*/         0, /*End of Scope*/
/*269*/       /*Scope*/ 80, /*->350*/
/*270*/         OPC_CheckInteger, 2, 
/*272*/         OPC_MoveParent,
/*273*/         OPC_RecordChild5, // #3 = $mask
/*274*/         OPC_MoveChild, 5,
/*276*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*279*/         OPC_MoveParent,
/*280*/         OPC_Scope, 33, /*->315*/ // 2 children in Scope
/*282*/           OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*284*/           OPC_EmitMergeInputChains1_0,
/*285*/           OPC_EmitInteger, MVT::i32, 0, 
/*288*/           OPC_EmitConvertToTarget, 2,
/*290*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*294*/           OPC_EmitConvertToTarget, 3,
/*296*/           OPC_EmitInteger, MVT::i32, 34, 
/*299*/           OPC_EmitInteger, MVT::i32, 0, 
/*302*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2559:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 2:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (R600_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 34:i32, 0:i32)
/*315*/         /*Scope*/ 33, /*->349*/
/*316*/           OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*318*/           OPC_EmitMergeInputChains1_0,
/*319*/           OPC_EmitInteger, MVT::i32, 0, 
/*322*/           OPC_EmitConvertToTarget, 2,
/*324*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*328*/           OPC_EmitConvertToTarget, 3,
/*330*/           OPC_EmitInteger, MVT::i32, 66, 
/*333*/           OPC_EmitInteger, MVT::i32, 0, 
/*336*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2559:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 2:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (EG_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 66:i32, 0:i32)
/*349*/         0, /*End of Scope*/
/*350*/       /*Scope*/ 80, /*->431*/
/*351*/         OPC_CheckInteger, 3, 
/*353*/         OPC_MoveParent,
/*354*/         OPC_RecordChild5, // #3 = $mask
/*355*/         OPC_MoveChild, 5,
/*357*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*360*/         OPC_MoveParent,
/*361*/         OPC_Scope, 33, /*->396*/ // 2 children in Scope
/*363*/           OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*365*/           OPC_EmitMergeInputChains1_0,
/*366*/           OPC_EmitInteger, MVT::i32, 0, 
/*369*/           OPC_EmitConvertToTarget, 2,
/*371*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*375*/           OPC_EmitConvertToTarget, 3,
/*377*/           OPC_EmitInteger, MVT::i32, 35, 
/*380*/           OPC_EmitInteger, MVT::i32, 0, 
/*383*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2559:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 3:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (R600_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 35:i32, 0:i32)
/*396*/         /*Scope*/ 33, /*->430*/
/*397*/           OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*399*/           OPC_EmitMergeInputChains1_0,
/*400*/           OPC_EmitInteger, MVT::i32, 0, 
/*403*/           OPC_EmitConvertToTarget, 2,
/*405*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*409*/           OPC_EmitConvertToTarget, 3,
/*411*/           OPC_EmitInteger, MVT::i32, 67, 
/*414*/           OPC_EmitInteger, MVT::i32, 0, 
/*417*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2559:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 3:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (EG_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 67:i32, 0:i32)
/*430*/         0, /*End of Scope*/
/*431*/       0, /*End of Scope*/
/*432*/     /*Scope*/ 94|128,1/*222*/, /*->656*/
/*434*/       OPC_CheckInteger, 124|128,19/*2556*/, 
/*437*/       OPC_MoveParent,
/*438*/       OPC_Scope, 107, /*->547*/ // 2 children in Scope
/*440*/         OPC_MoveChild, 2,
/*442*/         OPC_CheckInteger, 1, 
/*444*/         OPC_MoveParent,
/*445*/         OPC_Scope, 49, /*->496*/ // 2 children in Scope
/*447*/           OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*449*/           OPC_EmitMergeInputChains1_0,
/*450*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #1
/*457*/           OPC_EmitInteger, MVT::i32, 1, 
/*460*/           OPC_EmitInteger, MVT::i32, 60, 
/*463*/           OPC_EmitInteger, MVT::i32, 7, 
/*466*/           OPC_EmitInteger, MVT::i32, 7, 
/*469*/           OPC_EmitInteger, MVT::i32, 7, 
/*472*/           OPC_EmitInteger, MVT::i32, 7, 
/*475*/           OPC_EmitInteger, MVT::i32, 39, 
/*478*/           OPC_EmitInteger, MVT::i32, 0, 
/*481*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportSwz), 0|OPFL_Chain,
                      0/*#VTs*/, 9/*#Ops*/, 1, 2, 3, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2556:iPTR, 1:i32) - Complexity = 13
                  // Dst: (R600_ExportSwz (IMPLICIT_DEF:v4f32), 1:i32, 60:i32, 7:i32, 7:i32, 7:i32, 7:i32, 39:i32, 0:i32)
/*496*/         /*Scope*/ 49, /*->546*/
/*497*/           OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*499*/           OPC_EmitMergeInputChains1_0,
/*500*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #1
/*507*/           OPC_EmitInteger, MVT::i32, 1, 
/*510*/           OPC_EmitInteger, MVT::i32, 60, 
/*513*/           OPC_EmitInteger, MVT::i32, 7, 
/*516*/           OPC_EmitInteger, MVT::i32, 7, 
/*519*/           OPC_EmitInteger, MVT::i32, 7, 
/*522*/           OPC_EmitInteger, MVT::i32, 7, 
/*525*/           OPC_EmitInteger, MVT::i32, 83, 
/*528*/           OPC_EmitInteger, MVT::i32, 0, 
/*531*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportSwz), 0|OPFL_Chain,
                      0/*#VTs*/, 9/*#Ops*/, 1, 2, 3, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2556:iPTR, 1:i32) - Complexity = 13
                  // Dst: (EG_ExportSwz (IMPLICIT_DEF:v4f32), 1:i32, 60:i32, 7:i32, 7:i32, 7:i32, 7:i32, 83:i32, 0:i32)
/*546*/         0, /*End of Scope*/
/*547*/       /*Scope*/ 107, /*->655*/
/*548*/         OPC_RecordChild2, // #1 = $type
/*549*/         OPC_MoveChild, 2,
/*551*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*554*/         OPC_MoveParent,
/*555*/         OPC_Scope, 48, /*->605*/ // 2 children in Scope
/*557*/           OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*559*/           OPC_EmitMergeInputChains1_0,
/*560*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #2
/*567*/           OPC_EmitConvertToTarget, 1,
/*569*/           OPC_EmitInteger, MVT::i32, 0, 
/*572*/           OPC_EmitInteger, MVT::i32, 7, 
/*575*/           OPC_EmitInteger, MVT::i32, 7, 
/*578*/           OPC_EmitInteger, MVT::i32, 7, 
/*581*/           OPC_EmitInteger, MVT::i32, 7, 
/*584*/           OPC_EmitInteger, MVT::i32, 39, 
/*587*/           OPC_EmitInteger, MVT::i32, 0, 
/*590*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportSwz), 0|OPFL_Chain,
                      0/*#VTs*/, 9/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
                  // Src: (intrinsic_void 2556:iPTR, (imm:i32):$type) - Complexity = 11
                  // Dst: (R600_ExportSwz (IMPLICIT_DEF:v4f32), (imm:i32):$type, 0:i32, 7:i32, 7:i32, 7:i32, 7:i32, 39:i32, 0:i32)
/*605*/         /*Scope*/ 48, /*->654*/
/*606*/           OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*608*/           OPC_EmitMergeInputChains1_0,
/*609*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #2
/*616*/           OPC_EmitConvertToTarget, 1,
/*618*/           OPC_EmitInteger, MVT::i32, 0, 
/*621*/           OPC_EmitInteger, MVT::i32, 7, 
/*624*/           OPC_EmitInteger, MVT::i32, 7, 
/*627*/           OPC_EmitInteger, MVT::i32, 7, 
/*630*/           OPC_EmitInteger, MVT::i32, 7, 
/*633*/           OPC_EmitInteger, MVT::i32, 83, 
/*636*/           OPC_EmitInteger, MVT::i32, 0, 
/*639*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportSwz), 0|OPFL_Chain,
                      0/*#VTs*/, 9/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
                  // Src: (intrinsic_void 2556:iPTR, (imm:i32):$type) - Complexity = 11
                  // Dst: (EG_ExportSwz (IMPLICIT_DEF:v4f32), (imm:i32):$type, 0:i32, 7:i32, 7:i32, 7:i32, 7:i32, 83:i32, 0:i32)
/*654*/         0, /*End of Scope*/
/*655*/       0, /*End of Scope*/
/*656*/     /*Scope*/ 23, /*->680*/
/*657*/       OPC_CheckInteger, 20|128,20/*2580*/, 
/*660*/       OPC_MoveParent,
/*661*/       OPC_RecordChild2, // #1 = $saved
/*662*/       OPC_RecordChild3, // #2 = $target
/*663*/       OPC_MoveChild, 3,
/*665*/       OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*668*/       OPC_MoveParent,
/*669*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*671*/       OPC_EmitMergeInputChains1_0,
/*672*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_LOOP), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2580:iPTR, i64:i64:$saved, (bb:Other):$target) - Complexity = 8
              // Dst: (SI_LOOP i64:i64:$saved, (bb:Other):$target)
/*680*/     /*Scope*/ 15, /*->696*/
/*681*/       OPC_CheckInteger, 12|128,20/*2572*/, 
/*684*/       OPC_MoveParent,
/*685*/       OPC_RecordChild2, // #1 = $saved
/*686*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*688*/       OPC_EmitMergeInputChains1_0,
/*689*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_END_CF), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 2572:iPTR, i64:i64:$saved) - Complexity = 8
              // Dst: (SI_END_CF i64:i64:$saved)
/*696*/     /*Scope*/ 5|128,1/*133*/, /*->831*/
/*698*/       OPC_CheckInteger, 12|128,19/*2444*/, 
/*701*/       OPC_MoveParent,
/*702*/       OPC_RecordChild2, // #1 = $src
/*703*/       OPC_Scope, 10, /*->715*/ // 2 children in Scope
/*705*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*707*/         OPC_EmitMergeInputChains1_0,
/*708*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_KILL), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 2444:iPTR, f32:f32:$src) - Complexity = 8
                // Dst: (SI_KILL f32:f32:$src)
/*715*/       /*Scope*/ 114, /*->830*/
/*716*/         OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*718*/         OPC_EmitMergeInputChains1_0,
/*719*/         OPC_EmitInteger, MVT::i32, 0, 
/*722*/         OPC_EmitInteger, MVT::i32, 0, 
/*725*/         OPC_EmitInteger, MVT::i32, 1, 
/*728*/         OPC_EmitInteger, MVT::i32, 0, 
/*731*/         OPC_EmitInteger, MVT::i32, 0, 
/*734*/         OPC_EmitInteger, MVT::i32, 0, 
/*737*/         OPC_EmitRegister2, MVT::f32, TARGET_VAL(AMDGPU::ZERO),
/*741*/         OPC_EmitInteger, MVT::i32, 0, 
/*744*/         OPC_EmitInteger, MVT::i32, 0, 
/*747*/         OPC_EmitInteger, MVT::i32, 0, 
/*750*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*762*/         OPC_EmitInteger, MVT::i32, 0, 
/*765*/         OPC_EmitInteger, MVT::i32, 0, 
/*768*/         OPC_EmitInteger, MVT::i32, 0, 
/*771*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*783*/         OPC_EmitInteger, MVT::i32, 1, 
/*786*/         OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*790*/         OPC_EmitInteger, MVT::i32, 0, 
/*793*/         OPC_EmitInteger, MVT::i32, 0, 
/*796*/         OPC_EmitNode, TARGET_VAL(AMDGPU::KILLGT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 1, 13, 14, 15, 16, 17, 18, 19, 20,  // Results = #21
/*823*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MASK_WRITE), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 21, 
                // Src: (intrinsic_void 2444:iPTR, f32:f32:$src0) - Complexity = 8
                // Dst: (MASK_WRITE (KILLGT:i32 ZERO:f32, ?:f32:$src0))
/*830*/       0, /*End of Scope*/
/*831*/     /*Scope*/ 23|128,1/*151*/, /*->984*/
/*833*/       OPC_CheckInteger, 13|128,19/*2445*/, 
/*836*/       OPC_MoveParent,
/*837*/       OPC_Scope, 25, /*->864*/ // 2 children in Scope
/*839*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*841*/         OPC_EmitMergeInputChains1_0,
/*842*/         OPC_EmitInteger, MVT::i32, 0|128,0|128,0|128,124|128,11/*3212836864*/, 
/*849*/         OPC_EmitNode, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*857*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_KILL), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2445:iPTR) - Complexity = 8
                // Dst: (SI_KILL (V_MOV_B32_e32:i32 3212836864:i32))
/*864*/       /*Scope*/ 118, /*->983*/
/*865*/         OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*867*/         OPC_EmitMergeInputChains1_0,
/*868*/         OPC_EmitInteger, MVT::i32, 0, 
/*871*/         OPC_EmitInteger, MVT::i32, 0, 
/*874*/         OPC_EmitInteger, MVT::i32, 1, 
/*877*/         OPC_EmitInteger, MVT::i32, 0, 
/*880*/         OPC_EmitInteger, MVT::i32, 0, 
/*883*/         OPC_EmitInteger, MVT::i32, 0, 
/*886*/         OPC_EmitRegister2, MVT::f32, TARGET_VAL(AMDGPU::ONE),
/*890*/         OPC_EmitInteger, MVT::i32, 0, 
/*893*/         OPC_EmitInteger, MVT::i32, 0, 
/*896*/         OPC_EmitInteger, MVT::i32, 0, 
/*899*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*911*/         OPC_EmitRegister2, MVT::f32, TARGET_VAL(AMDGPU::ZERO),
/*915*/         OPC_EmitInteger, MVT::i32, 0, 
/*918*/         OPC_EmitInteger, MVT::i32, 0, 
/*921*/         OPC_EmitInteger, MVT::i32, 0, 
/*924*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*936*/         OPC_EmitInteger, MVT::i32, 1, 
/*939*/         OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*943*/         OPC_EmitInteger, MVT::i32, 0, 
/*946*/         OPC_EmitInteger, MVT::i32, 0, 
/*949*/         OPC_EmitNode, TARGET_VAL(AMDGPU::KILLGT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,  // Results = #21
/*976*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MASK_WRITE), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 21, 
                // Src: (intrinsic_void 2445:iPTR) - Complexity = 8
                // Dst: (MASK_WRITE (KILLGT:i32 ONE:f32, ZERO:f32))
/*983*/       0, /*End of Scope*/
/*984*/     /*Scope*/ 5|128,1/*133*/, /*->1119*/
/*986*/       OPC_CheckInteger, 125|128,19/*2557*/, 
/*989*/       OPC_MoveParent,
/*990*/       OPC_RecordChild2, // #1 = $reg
/*991*/       OPC_Scope, 62, /*->1055*/ // 2 children in Scope
/*993*/         OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*995*/         OPC_EmitMergeInputChains1_0,
/*996*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #2
/*1003*/        OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*1006*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 2, 1, 3,  // Results = #4
/*1016*/        OPC_EmitInteger, MVT::i32, 0, 
/*1019*/        OPC_EmitInteger, MVT::i32, 61, 
/*1022*/        OPC_EmitInteger, MVT::i32, 0, 
/*1025*/        OPC_EmitInteger, MVT::i32, 7, 
/*1028*/        OPC_EmitInteger, MVT::i32, 7, 
/*1031*/        OPC_EmitInteger, MVT::i32, 7, 
/*1034*/        OPC_EmitInteger, MVT::i32, 39, 
/*1037*/        OPC_EmitInteger, MVT::i32, 0, 
/*1040*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportSwz), 0|OPFL_Chain,
                    0/*#VTs*/, 9/*#Ops*/, 4, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_void 2557:iPTR, R600_Reg32:f32:$reg) - Complexity = 8
                // Dst: (R600_ExportSwz (INSERT_SUBREG:v4f32 (IMPLICIT_DEF:v4f32), R600_Reg32:f32:$reg, sub0:i32), 0:i32, 61:i32, 0:i32, 7:i32, 7:i32, 7:i32, 39:i32, 0:i32)
/*1055*/      /*Scope*/ 62, /*->1118*/
/*1056*/        OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*1058*/        OPC_EmitMergeInputChains1_0,
/*1059*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #2
/*1066*/        OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*1069*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 2, 1, 3,  // Results = #4
/*1079*/        OPC_EmitInteger, MVT::i32, 0, 
/*1082*/        OPC_EmitInteger, MVT::i32, 61, 
/*1085*/        OPC_EmitInteger, MVT::i32, 0, 
/*1088*/        OPC_EmitInteger, MVT::i32, 7, 
/*1091*/        OPC_EmitInteger, MVT::i32, 7, 
/*1094*/        OPC_EmitInteger, MVT::i32, 7, 
/*1097*/        OPC_EmitInteger, MVT::i32, 83, 
/*1100*/        OPC_EmitInteger, MVT::i32, 0, 
/*1103*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportSwz), 0|OPFL_Chain,
                    0/*#VTs*/, 9/*#Ops*/, 4, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_void 2557:iPTR, R600_Reg32:f32:$reg) - Complexity = 8
                // Dst: (EG_ExportSwz (INSERT_SUBREG:v4f32 (IMPLICIT_DEF:v4f32), R600_Reg32:f32:$reg, sub0:i32), 0:i32, 61:i32, 0:i32, 7:i32, 7:i32, 7:i32, 83:i32, 0:i32)
/*1118*/      0, /*End of Scope*/
/*1119*/    /*Scope*/ 5|128,1/*133*/, /*->1254*/
/*1121*/      OPC_CheckInteger, 126|128,19/*2558*/, 
/*1124*/      OPC_MoveParent,
/*1125*/      OPC_RecordChild2, // #1 = $reg
/*1126*/      OPC_Scope, 62, /*->1190*/ // 2 children in Scope
/*1128*/        OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*1130*/        OPC_EmitMergeInputChains1_0,
/*1131*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #2
/*1138*/        OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*1141*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 2, 1, 3,  // Results = #4
/*1151*/        OPC_EmitInteger, MVT::i32, 0, 
/*1154*/        OPC_EmitInteger, MVT::i32, 61, 
/*1157*/        OPC_EmitInteger, MVT::i32, 7, 
/*1160*/        OPC_EmitInteger, MVT::i32, 0, 
/*1163*/        OPC_EmitInteger, MVT::i32, 7, 
/*1166*/        OPC_EmitInteger, MVT::i32, 7, 
/*1169*/        OPC_EmitInteger, MVT::i32, 39, 
/*1172*/        OPC_EmitInteger, MVT::i32, 0, 
/*1175*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportSwz), 0|OPFL_Chain,
                    0/*#VTs*/, 9/*#Ops*/, 4, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_void 2558:iPTR, R600_Reg32:f32:$reg) - Complexity = 8
                // Dst: (R600_ExportSwz (INSERT_SUBREG:v4f32 (IMPLICIT_DEF:v4f32), R600_Reg32:f32:$reg, sub0:i32), 0:i32, 61:i32, 7:i32, 0:i32, 7:i32, 7:i32, 39:i32, 0:i32)
/*1190*/      /*Scope*/ 62, /*->1253*/
/*1191*/        OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*1193*/        OPC_EmitMergeInputChains1_0,
/*1194*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #2
/*1201*/        OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*1204*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 2, 1, 3,  // Results = #4
/*1214*/        OPC_EmitInteger, MVT::i32, 0, 
/*1217*/        OPC_EmitInteger, MVT::i32, 61, 
/*1220*/        OPC_EmitInteger, MVT::i32, 7, 
/*1223*/        OPC_EmitInteger, MVT::i32, 0, 
/*1226*/        OPC_EmitInteger, MVT::i32, 7, 
/*1229*/        OPC_EmitInteger, MVT::i32, 7, 
/*1232*/        OPC_EmitInteger, MVT::i32, 83, 
/*1235*/        OPC_EmitInteger, MVT::i32, 0, 
/*1238*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportSwz), 0|OPFL_Chain,
                    0/*#VTs*/, 9/*#Ops*/, 4, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_void 2558:iPTR, R600_Reg32:f32:$reg) - Complexity = 8
                // Dst: (EG_ExportSwz (INSERT_SUBREG:v4f32 (IMPLICIT_DEF:v4f32), R600_Reg32:f32:$reg, sub0:i32), 0:i32, 61:i32, 7:i32, 0:i32, 7:i32, 7:i32, 83:i32, 0:i32)
/*1253*/      0, /*End of Scope*/
/*1254*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 6|128,1/*134*/,  TARGET_VAL(AMDGPUISD::EXPORT),// ->1393
/*1259*/    OPC_RecordNode,   // #0 = 'EXPORT' chained node
/*1260*/    OPC_RecordChild1, // #1 = $src
/*1261*/    OPC_CheckChild1Type, MVT::v4f32,
/*1263*/    OPC_RecordChild2, // #2 = $base
/*1264*/    OPC_MoveChild, 2,
/*1266*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1269*/    OPC_CheckType, MVT::i32,
/*1271*/    OPC_MoveParent,
/*1272*/    OPC_RecordChild3, // #3 = $type
/*1273*/    OPC_MoveChild, 3,
/*1275*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1278*/    OPC_CheckType, MVT::i32,
/*1280*/    OPC_MoveParent,
/*1281*/    OPC_RecordChild4, // #4 = $swz_x
/*1282*/    OPC_MoveChild, 4,
/*1284*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1287*/    OPC_CheckType, MVT::i32,
/*1289*/    OPC_MoveParent,
/*1290*/    OPC_RecordChild5, // #5 = $swz_y
/*1291*/    OPC_MoveChild, 5,
/*1293*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1296*/    OPC_CheckType, MVT::i32,
/*1298*/    OPC_MoveParent,
/*1299*/    OPC_RecordChild6, // #6 = $swz_z
/*1300*/    OPC_MoveChild, 6,
/*1302*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1305*/    OPC_CheckType, MVT::i32,
/*1307*/    OPC_MoveParent,
/*1308*/    OPC_RecordChild7, // #7 = $swz_w
/*1309*/    OPC_MoveChild, 7,
/*1311*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1314*/    OPC_CheckType, MVT::i32,
/*1316*/    OPC_MoveParent,
/*1317*/    OPC_Scope, 36, /*->1355*/ // 2 children in Scope
/*1319*/      OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*1321*/      OPC_EmitMergeInputChains1_0,
/*1322*/      OPC_EmitConvertToTarget, 3,
/*1324*/      OPC_EmitConvertToTarget, 2,
/*1326*/      OPC_EmitConvertToTarget, 4,
/*1328*/      OPC_EmitConvertToTarget, 5,
/*1330*/      OPC_EmitConvertToTarget, 6,
/*1332*/      OPC_EmitConvertToTarget, 7,
/*1334*/      OPC_EmitInteger, MVT::i32, 39, 
/*1337*/      OPC_EmitInteger, MVT::i32, 0, 
/*1340*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportSwz), 0|OPFL_Chain,
                  0/*#VTs*/, 9/*#Ops*/, 1, 8, 9, 10, 11, 12, 13, 14, 15, 
              // Src: (EXPORT R600_Reg128:v4f32:$src, (imm:i32):$base, (imm:i32):$type, (imm:i32):$swz_x, (imm:i32):$swz_y, (imm:i32):$swz_z, (imm:i32):$swz_w) - Complexity = 21
              // Dst: (R600_ExportSwz R600_Reg128:v4f32:$src, (imm:i32):$type, (imm:i32):$base, (imm:i32):$swz_x, (imm:i32):$swz_y, (imm:i32):$swz_z, (imm:i32):$swz_w, 39:i32, 0:i32)
/*1355*/    /*Scope*/ 36, /*->1392*/
/*1356*/      OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*1358*/      OPC_EmitMergeInputChains1_0,
/*1359*/      OPC_EmitConvertToTarget, 3,
/*1361*/      OPC_EmitConvertToTarget, 2,
/*1363*/      OPC_EmitConvertToTarget, 4,
/*1365*/      OPC_EmitConvertToTarget, 5,
/*1367*/      OPC_EmitConvertToTarget, 6,
/*1369*/      OPC_EmitConvertToTarget, 7,
/*1371*/      OPC_EmitInteger, MVT::i32, 83, 
/*1374*/      OPC_EmitInteger, MVT::i32, 0, 
/*1377*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportSwz), 0|OPFL_Chain,
                  0/*#VTs*/, 9/*#Ops*/, 1, 8, 9, 10, 11, 12, 13, 14, 15, 
              // Src: (EXPORT R600_Reg128:v4f32:$src, (imm:i32):$base, (imm:i32):$type, (imm:i32):$swz_x, (imm:i32):$swz_y, (imm:i32):$swz_z, (imm:i32):$swz_w) - Complexity = 21
              // Dst: (EG_ExportSwz R600_Reg128:v4f32:$src, (imm:i32):$type, (imm:i32):$base, (imm:i32):$swz_x, (imm:i32):$swz_y, (imm:i32):$swz_z, (imm:i32):$swz_w, 83:i32, 0:i32)
/*1392*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 74|128,45/*5834*/,  TARGET_VAL(ISD::OR),// ->7231
/*1397*/    OPC_Scope, 60|128,44/*5692*/, /*->7092*/ // 2 children in Scope
/*1400*/      OPC_MoveChild, 0,
/*1402*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*1405*/      OPC_Scope, 73|128,3/*457*/, /*->1865*/ // 8 children in Scope
/*1408*/        OPC_RecordChild0, // #0 = $y
/*1409*/        OPC_Scope, 90|128,2/*346*/, /*->1758*/ // 2 children in Scope
/*1412*/          OPC_RecordChild1, // #1 = $x
/*1413*/          OPC_MoveParent,
/*1414*/          OPC_MoveChild, 1,
/*1416*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*1419*/          OPC_Scope, 33|128,1/*161*/, /*->1583*/ // 4 children in Scope
/*1422*/            OPC_RecordChild0, // #2 = $z
/*1423*/            OPC_MoveChild, 1,
/*1425*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1428*/            OPC_MoveChild, 0,
/*1430*/            OPC_CheckSame, 1,
/*1432*/            OPC_MoveParent,
/*1433*/            OPC_MoveChild, 1,
/*1435*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1446*/            OPC_MoveParent,
/*1447*/            OPC_MoveParent,
/*1448*/            OPC_MoveParent,
/*1449*/            OPC_CheckType, MVT::i32,
/*1451*/            OPC_Scope, 100, /*->1553*/ // 2 children in Scope
/*1453*/              OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*1455*/              OPC_EmitInteger, MVT::i32, 0, 
/*1458*/              OPC_EmitInteger, MVT::i32, 0, 
/*1461*/              OPC_EmitInteger, MVT::i32, 0, 
/*1464*/              OPC_EmitInteger, MVT::i32, 0, 
/*1467*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1479*/              OPC_EmitInteger, MVT::i32, 0, 
/*1482*/              OPC_EmitInteger, MVT::i32, 0, 
/*1485*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1497*/              OPC_EmitInteger, MVT::i32, 0, 
/*1500*/              OPC_EmitInteger, MVT::i32, 0, 
/*1503*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1515*/              OPC_EmitInteger, MVT::i32, 1, 
/*1518*/              OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*1522*/              OPC_EmitInteger, MVT::i32, 0, 
/*1525*/              OPC_EmitInteger, MVT::i32, 0, 
/*1528*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 0, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (or:i32 (and:i32 i32:i32:$y, i32:i32:$x), (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32))) - Complexity = 17
                      // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*1553*/            /*Scope*/ 28, /*->1582*/
/*1554*/              OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*1556*/              OPC_EmitInteger, MVT::i32, 0, 
/*1559*/              OPC_EmitInteger, MVT::i32, 0, 
/*1562*/              OPC_EmitInteger, MVT::i32, 0, 
/*1565*/              OPC_EmitInteger, MVT::i32, 0, 
/*1568*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 1, 0, 2, 3, 4, 5, 6, 
                      // Src: (or:i32 (and:i32 i32:i32:$y, i32:i32:$x), (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32))) - Complexity = 17
                      // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*1582*/            0, /*End of Scope*/
/*1583*/          /*Scope*/ 57, /*->1641*/
/*1584*/            OPC_MoveChild, 0,
/*1586*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1589*/            OPC_MoveChild, 0,
/*1591*/            OPC_CheckSame, 1,
/*1593*/            OPC_MoveParent,
/*1594*/            OPC_MoveChild, 1,
/*1596*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1607*/            OPC_MoveParent,
/*1608*/            OPC_MoveParent,
/*1609*/            OPC_RecordChild1, // #2 = $z
/*1610*/            OPC_MoveParent,
/*1611*/            OPC_CheckType, MVT::i32,
/*1613*/            OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*1615*/            OPC_EmitInteger, MVT::i32, 0, 
/*1618*/            OPC_EmitInteger, MVT::i32, 0, 
/*1621*/            OPC_EmitInteger, MVT::i32, 0, 
/*1624*/            OPC_EmitInteger, MVT::i32, 0, 
/*1627*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 1, 0, 2, 3, 4, 5, 6, 
                    // Src: (or:i32 (and:i32 i32:i32:$y, i32:i32:$x), (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z)) - Complexity = 17
                    // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*1641*/          /*Scope*/ 57, /*->1699*/
/*1642*/            OPC_RecordChild0, // #2 = $z
/*1643*/            OPC_MoveChild, 1,
/*1645*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1648*/            OPC_MoveChild, 0,
/*1650*/            OPC_CheckSame, 0,
/*1652*/            OPC_MoveParent,
/*1653*/            OPC_MoveChild, 1,
/*1655*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1666*/            OPC_MoveParent,
/*1667*/            OPC_MoveParent,
/*1668*/            OPC_MoveParent,
/*1669*/            OPC_CheckType, MVT::i32,
/*1671*/            OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*1673*/            OPC_EmitInteger, MVT::i32, 0, 
/*1676*/            OPC_EmitInteger, MVT::i32, 0, 
/*1679*/            OPC_EmitInteger, MVT::i32, 0, 
/*1682*/            OPC_EmitInteger, MVT::i32, 0, 
/*1685*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
                    // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$y), (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32))) - Complexity = 17
                    // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*1699*/          /*Scope*/ 57, /*->1757*/
/*1700*/            OPC_MoveChild, 0,
/*1702*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1705*/            OPC_MoveChild, 0,
/*1707*/            OPC_CheckSame, 0,
/*1709*/            OPC_MoveParent,
/*1710*/            OPC_MoveChild, 1,
/*1712*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1723*/            OPC_MoveParent,
/*1724*/            OPC_MoveParent,
/*1725*/            OPC_RecordChild1, // #2 = $z
/*1726*/            OPC_MoveParent,
/*1727*/            OPC_CheckType, MVT::i32,
/*1729*/            OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*1731*/            OPC_EmitInteger, MVT::i32, 0, 
/*1734*/            OPC_EmitInteger, MVT::i32, 0, 
/*1737*/            OPC_EmitInteger, MVT::i32, 0, 
/*1740*/            OPC_EmitInteger, MVT::i32, 0, 
/*1743*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
                    // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$y), (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z)) - Complexity = 17
                    // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*1757*/          0, /*End of Scope*/
/*1758*/        /*Scope*/ 105, /*->1864*/
/*1759*/          OPC_MoveChild, 1,
/*1761*/          OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1764*/          OPC_RecordChild0, // #1 = $x
/*1765*/          OPC_MoveChild, 1,
/*1767*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1778*/          OPC_MoveParent,
/*1779*/          OPC_MoveParent,
/*1780*/          OPC_MoveParent,
/*1781*/          OPC_MoveChild, 1,
/*1783*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*1786*/          OPC_Scope, 37, /*->1825*/ // 2 children in Scope
/*1788*/            OPC_RecordChild0, // #2 = $y
/*1789*/            OPC_MoveChild, 1,
/*1791*/            OPC_CheckSame, 1,
/*1793*/            OPC_MoveParent,
/*1794*/            OPC_MoveParent,
/*1795*/            OPC_CheckType, MVT::i32,
/*1797*/            OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*1799*/            OPC_EmitInteger, MVT::i32, 0, 
/*1802*/            OPC_EmitInteger, MVT::i32, 0, 
/*1805*/            OPC_EmitInteger, MVT::i32, 0, 
/*1808*/            OPC_EmitInteger, MVT::i32, 0, 
/*1811*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 
                    // Src: (or:i32 (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32)), (and:i32 i32:i32:$y, i32:i32:$x)) - Complexity = 17
                    // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*1825*/          /*Scope*/ 37, /*->1863*/
/*1826*/            OPC_MoveChild, 0,
/*1828*/            OPC_CheckSame, 1,
/*1830*/            OPC_MoveParent,
/*1831*/            OPC_RecordChild1, // #2 = $y
/*1832*/            OPC_MoveParent,
/*1833*/            OPC_CheckType, MVT::i32,
/*1835*/            OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*1837*/            OPC_EmitInteger, MVT::i32, 0, 
/*1840*/            OPC_EmitInteger, MVT::i32, 0, 
/*1843*/            OPC_EmitInteger, MVT::i32, 0, 
/*1846*/            OPC_EmitInteger, MVT::i32, 0, 
/*1849*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 
                    // Src: (or:i32 (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32)), (and:i32 i32:i32:$x, i32:i32:$y)) - Complexity = 17
                    // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*1863*/          0, /*End of Scope*/
/*1864*/        0, /*End of Scope*/
/*1865*/      /*Scope*/ 106, /*->1972*/
/*1866*/        OPC_MoveChild, 0,
/*1868*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1871*/        OPC_RecordChild0, // #0 = $x
/*1872*/        OPC_MoveChild, 1,
/*1874*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1885*/        OPC_MoveParent,
/*1886*/        OPC_MoveParent,
/*1887*/        OPC_RecordChild1, // #1 = $z
/*1888*/        OPC_MoveParent,
/*1889*/        OPC_MoveChild, 1,
/*1891*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*1894*/        OPC_Scope, 37, /*->1933*/ // 2 children in Scope
/*1896*/          OPC_RecordChild0, // #2 = $y
/*1897*/          OPC_MoveChild, 1,
/*1899*/          OPC_CheckSame, 0,
/*1901*/          OPC_MoveParent,
/*1902*/          OPC_MoveParent,
/*1903*/          OPC_CheckType, MVT::i32,
/*1905*/          OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*1907*/          OPC_EmitInteger, MVT::i32, 0, 
/*1910*/          OPC_EmitInteger, MVT::i32, 0, 
/*1913*/          OPC_EmitInteger, MVT::i32, 0, 
/*1916*/          OPC_EmitInteger, MVT::i32, 0, 
/*1919*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 2, 1, 3, 4, 5, 6, 
                  // Src: (or:i32 (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z), (and:i32 i32:i32:$y, i32:i32:$x)) - Complexity = 17
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*1933*/        /*Scope*/ 37, /*->1971*/
/*1934*/          OPC_MoveChild, 0,
/*1936*/          OPC_CheckSame, 0,
/*1938*/          OPC_MoveParent,
/*1939*/          OPC_RecordChild1, // #2 = $y
/*1940*/          OPC_MoveParent,
/*1941*/          OPC_CheckType, MVT::i32,
/*1943*/          OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*1945*/          OPC_EmitInteger, MVT::i32, 0, 
/*1948*/          OPC_EmitInteger, MVT::i32, 0, 
/*1951*/          OPC_EmitInteger, MVT::i32, 0, 
/*1954*/          OPC_EmitInteger, MVT::i32, 0, 
/*1957*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 2, 1, 3, 4, 5, 6, 
                  // Src: (or:i32 (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z), (and:i32 i32:i32:$x, i32:i32:$y)) - Complexity = 17
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*1971*/        0, /*End of Scope*/
/*1972*/      /*Scope*/ 18|128,5/*658*/, /*->2632*/
/*1974*/        OPC_RecordChild0, // #0 = $y
/*1975*/        OPC_Scope, 18|128,3/*402*/, /*->2380*/ // 2 children in Scope
/*1978*/          OPC_RecordChild1, // #1 = $x
/*1979*/          OPC_MoveParent,
/*1980*/          OPC_MoveChild, 1,
/*1982*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*1985*/          OPC_Scope, 1|128,1/*129*/, /*->2117*/ // 3 children in Scope
/*1988*/            OPC_MoveChild, 0,
/*1990*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1993*/            OPC_MoveChild, 0,
/*1995*/            OPC_CheckSame, 1,
/*1997*/            OPC_MoveParent,
/*1998*/            OPC_MoveChild, 1,
/*2000*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2011*/            OPC_MoveParent,
/*2012*/            OPC_MoveParent,
/*2013*/            OPC_RecordChild1, // #2 = $z
/*2014*/            OPC_MoveParent,
/*2015*/            OPC_CheckType, MVT::i32,
/*2017*/            OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*2019*/            OPC_EmitInteger, MVT::i32, 0, 
/*2022*/            OPC_EmitInteger, MVT::i32, 0, 
/*2025*/            OPC_EmitInteger, MVT::i32, 0, 
/*2028*/            OPC_EmitInteger, MVT::i32, 0, 
/*2031*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2043*/            OPC_EmitInteger, MVT::i32, 0, 
/*2046*/            OPC_EmitInteger, MVT::i32, 0, 
/*2049*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2061*/            OPC_EmitInteger, MVT::i32, 0, 
/*2064*/            OPC_EmitInteger, MVT::i32, 0, 
/*2067*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2079*/            OPC_EmitInteger, MVT::i32, 1, 
/*2082*/            OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*2086*/            OPC_EmitInteger, MVT::i32, 0, 
/*2089*/            OPC_EmitInteger, MVT::i32, 0, 
/*2092*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 0, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (or:i32 (and:i32 i32:i32:$y, i32:i32:$x), (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z)) - Complexity = 17
                    // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2117*/          /*Scope*/ 1|128,1/*129*/, /*->2248*/
/*2119*/            OPC_RecordChild0, // #2 = $z
/*2120*/            OPC_MoveChild, 1,
/*2122*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2125*/            OPC_MoveChild, 0,
/*2127*/            OPC_CheckSame, 0,
/*2129*/            OPC_MoveParent,
/*2130*/            OPC_MoveChild, 1,
/*2132*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2143*/            OPC_MoveParent,
/*2144*/            OPC_MoveParent,
/*2145*/            OPC_MoveParent,
/*2146*/            OPC_CheckType, MVT::i32,
/*2148*/            OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*2150*/            OPC_EmitInteger, MVT::i32, 0, 
/*2153*/            OPC_EmitInteger, MVT::i32, 0, 
/*2156*/            OPC_EmitInteger, MVT::i32, 0, 
/*2159*/            OPC_EmitInteger, MVT::i32, 0, 
/*2162*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2174*/            OPC_EmitInteger, MVT::i32, 0, 
/*2177*/            OPC_EmitInteger, MVT::i32, 0, 
/*2180*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2192*/            OPC_EmitInteger, MVT::i32, 0, 
/*2195*/            OPC_EmitInteger, MVT::i32, 0, 
/*2198*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2210*/            OPC_EmitInteger, MVT::i32, 1, 
/*2213*/            OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*2217*/            OPC_EmitInteger, MVT::i32, 0, 
/*2220*/            OPC_EmitInteger, MVT::i32, 0, 
/*2223*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$y), (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32))) - Complexity = 17
                    // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2248*/          /*Scope*/ 1|128,1/*129*/, /*->2379*/
/*2250*/            OPC_MoveChild, 0,
/*2252*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2255*/            OPC_MoveChild, 0,
/*2257*/            OPC_CheckSame, 0,
/*2259*/            OPC_MoveParent,
/*2260*/            OPC_MoveChild, 1,
/*2262*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2273*/            OPC_MoveParent,
/*2274*/            OPC_MoveParent,
/*2275*/            OPC_RecordChild1, // #2 = $z
/*2276*/            OPC_MoveParent,
/*2277*/            OPC_CheckType, MVT::i32,
/*2279*/            OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*2281*/            OPC_EmitInteger, MVT::i32, 0, 
/*2284*/            OPC_EmitInteger, MVT::i32, 0, 
/*2287*/            OPC_EmitInteger, MVT::i32, 0, 
/*2290*/            OPC_EmitInteger, MVT::i32, 0, 
/*2293*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2305*/            OPC_EmitInteger, MVT::i32, 0, 
/*2308*/            OPC_EmitInteger, MVT::i32, 0, 
/*2311*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2323*/            OPC_EmitInteger, MVT::i32, 0, 
/*2326*/            OPC_EmitInteger, MVT::i32, 0, 
/*2329*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2341*/            OPC_EmitInteger, MVT::i32, 1, 
/*2344*/            OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*2348*/            OPC_EmitInteger, MVT::i32, 0, 
/*2351*/            OPC_EmitInteger, MVT::i32, 0, 
/*2354*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$y), (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z)) - Complexity = 17
                    // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2379*/          0, /*End of Scope*/
/*2380*/        /*Scope*/ 121|128,1/*249*/, /*->2631*/
/*2382*/          OPC_MoveChild, 1,
/*2384*/          OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2387*/          OPC_RecordChild0, // #1 = $x
/*2388*/          OPC_MoveChild, 1,
/*2390*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2401*/          OPC_MoveParent,
/*2402*/          OPC_MoveParent,
/*2403*/          OPC_MoveParent,
/*2404*/          OPC_MoveChild, 1,
/*2406*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*2409*/          OPC_Scope, 109, /*->2520*/ // 2 children in Scope
/*2411*/            OPC_RecordChild0, // #2 = $y
/*2412*/            OPC_MoveChild, 1,
/*2414*/            OPC_CheckSame, 1,
/*2416*/            OPC_MoveParent,
/*2417*/            OPC_MoveParent,
/*2418*/            OPC_CheckType, MVT::i32,
/*2420*/            OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*2422*/            OPC_EmitInteger, MVT::i32, 0, 
/*2425*/            OPC_EmitInteger, MVT::i32, 0, 
/*2428*/            OPC_EmitInteger, MVT::i32, 0, 
/*2431*/            OPC_EmitInteger, MVT::i32, 0, 
/*2434*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2446*/            OPC_EmitInteger, MVT::i32, 0, 
/*2449*/            OPC_EmitInteger, MVT::i32, 0, 
/*2452*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2464*/            OPC_EmitInteger, MVT::i32, 0, 
/*2467*/            OPC_EmitInteger, MVT::i32, 0, 
/*2470*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2482*/            OPC_EmitInteger, MVT::i32, 1, 
/*2485*/            OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*2489*/            OPC_EmitInteger, MVT::i32, 0, 
/*2492*/            OPC_EmitInteger, MVT::i32, 0, 
/*2495*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (or:i32 (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32)), (and:i32 i32:i32:$y, i32:i32:$x)) - Complexity = 17
                    // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2520*/          /*Scope*/ 109, /*->2630*/
/*2521*/            OPC_MoveChild, 0,
/*2523*/            OPC_CheckSame, 1,
/*2525*/            OPC_MoveParent,
/*2526*/            OPC_RecordChild1, // #2 = $y
/*2527*/            OPC_MoveParent,
/*2528*/            OPC_CheckType, MVT::i32,
/*2530*/            OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*2532*/            OPC_EmitInteger, MVT::i32, 0, 
/*2535*/            OPC_EmitInteger, MVT::i32, 0, 
/*2538*/            OPC_EmitInteger, MVT::i32, 0, 
/*2541*/            OPC_EmitInteger, MVT::i32, 0, 
/*2544*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2556*/            OPC_EmitInteger, MVT::i32, 0, 
/*2559*/            OPC_EmitInteger, MVT::i32, 0, 
/*2562*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2574*/            OPC_EmitInteger, MVT::i32, 0, 
/*2577*/            OPC_EmitInteger, MVT::i32, 0, 
/*2580*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2592*/            OPC_EmitInteger, MVT::i32, 1, 
/*2595*/            OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*2599*/            OPC_EmitInteger, MVT::i32, 0, 
/*2602*/            OPC_EmitInteger, MVT::i32, 0, 
/*2605*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (or:i32 (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32)), (and:i32 i32:i32:$x, i32:i32:$y)) - Complexity = 17
                    // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2630*/          0, /*End of Scope*/
/*2631*/        0, /*End of Scope*/
/*2632*/      /*Scope*/ 122|128,1/*250*/, /*->2884*/
/*2634*/        OPC_MoveChild, 0,
/*2636*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2639*/        OPC_RecordChild0, // #0 = $x
/*2640*/        OPC_MoveChild, 1,
/*2642*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2653*/        OPC_MoveParent,
/*2654*/        OPC_MoveParent,
/*2655*/        OPC_RecordChild1, // #1 = $z
/*2656*/        OPC_MoveParent,
/*2657*/        OPC_MoveChild, 1,
/*2659*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*2662*/        OPC_Scope, 109, /*->2773*/ // 2 children in Scope
/*2664*/          OPC_RecordChild0, // #2 = $y
/*2665*/          OPC_MoveChild, 1,
/*2667*/          OPC_CheckSame, 0,
/*2669*/          OPC_MoveParent,
/*2670*/          OPC_MoveParent,
/*2671*/          OPC_CheckType, MVT::i32,
/*2673*/          OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*2675*/          OPC_EmitInteger, MVT::i32, 0, 
/*2678*/          OPC_EmitInteger, MVT::i32, 0, 
/*2681*/          OPC_EmitInteger, MVT::i32, 0, 
/*2684*/          OPC_EmitInteger, MVT::i32, 0, 
/*2687*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2699*/          OPC_EmitInteger, MVT::i32, 0, 
/*2702*/          OPC_EmitInteger, MVT::i32, 0, 
/*2705*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2717*/          OPC_EmitInteger, MVT::i32, 0, 
/*2720*/          OPC_EmitInteger, MVT::i32, 0, 
/*2723*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2735*/          OPC_EmitInteger, MVT::i32, 1, 
/*2738*/          OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*2742*/          OPC_EmitInteger, MVT::i32, 0, 
/*2745*/          OPC_EmitInteger, MVT::i32, 0, 
/*2748*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 2, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (or:i32 (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z), (and:i32 i32:i32:$y, i32:i32:$x)) - Complexity = 17
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2773*/        /*Scope*/ 109, /*->2883*/
/*2774*/          OPC_MoveChild, 0,
/*2776*/          OPC_CheckSame, 0,
/*2778*/          OPC_MoveParent,
/*2779*/          OPC_RecordChild1, // #2 = $y
/*2780*/          OPC_MoveParent,
/*2781*/          OPC_CheckType, MVT::i32,
/*2783*/          OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*2785*/          OPC_EmitInteger, MVT::i32, 0, 
/*2788*/          OPC_EmitInteger, MVT::i32, 0, 
/*2791*/          OPC_EmitInteger, MVT::i32, 0, 
/*2794*/          OPC_EmitInteger, MVT::i32, 0, 
/*2797*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2809*/          OPC_EmitInteger, MVT::i32, 0, 
/*2812*/          OPC_EmitInteger, MVT::i32, 0, 
/*2815*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2827*/          OPC_EmitInteger, MVT::i32, 0, 
/*2830*/          OPC_EmitInteger, MVT::i32, 0, 
/*2833*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2845*/          OPC_EmitInteger, MVT::i32, 1, 
/*2848*/          OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*2852*/          OPC_EmitInteger, MVT::i32, 0, 
/*2855*/          OPC_EmitInteger, MVT::i32, 0, 
/*2858*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 2, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (or:i32 (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z), (and:i32 i32:i32:$x, i32:i32:$y)) - Complexity = 17
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2883*/        0, /*End of Scope*/
/*2884*/      /*Scope*/ 105|128,6/*873*/, /*->3759*/
/*2886*/        OPC_RecordChild0, // #0 = $x
/*2887*/        OPC_Scope, 22|128,5/*662*/, /*->3552*/ // 2 children in Scope
/*2890*/          OPC_RecordChild1, // #1 = $z
/*2891*/          OPC_MoveParent,
/*2892*/          OPC_MoveChild, 1,
/*2894*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*2897*/          OPC_Scope, 60|128,2/*316*/, /*->3216*/ // 4 children in Scope
/*2900*/            OPC_RecordChild0, // #2 = $y
/*2901*/            OPC_MoveChild, 1,
/*2903*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*2906*/            OPC_MoveChild, 0,
/*2908*/            OPC_Scope, 126|128,1/*254*/, /*->3165*/ // 2 children in Scope
/*2911*/              OPC_CheckSame, 0,
/*2913*/              OPC_MoveParent,
/*2914*/              OPC_MoveChild, 1,
/*2916*/              OPC_CheckSame, 1,
/*2918*/              OPC_MoveParent,
/*2919*/              OPC_MoveParent,
/*2920*/              OPC_MoveParent,
/*2921*/              OPC_CheckType, MVT::i32,
/*2923*/              OPC_Scope, 72|128,1/*200*/, /*->3126*/ // 2 children in Scope
/*2926*/                OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*2928*/                OPC_EmitInteger, MVT::i32, 0, 
/*2931*/                OPC_EmitInteger, MVT::i32, 0, 
/*2934*/                OPC_EmitInteger, MVT::i32, 0, 
/*2937*/                OPC_EmitInteger, MVT::i32, 0, 
/*2940*/                OPC_EmitInteger, MVT::i32, 1, 
/*2943*/                OPC_EmitInteger, MVT::i32, 0, 
/*2946*/                OPC_EmitInteger, MVT::i32, 0, 
/*2949*/                OPC_EmitInteger, MVT::i32, 0, 
/*2952*/                OPC_EmitInteger, MVT::i32, 0, 
/*2955*/                OPC_EmitInteger, MVT::i32, 0, 
/*2958*/                OPC_EmitInteger, MVT::i32, 0, 
/*2961*/                OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2973*/                OPC_EmitInteger, MVT::i32, 0, 
/*2976*/                OPC_EmitInteger, MVT::i32, 0, 
/*2979*/                OPC_EmitInteger, MVT::i32, 0, 
/*2982*/                OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2994*/                OPC_EmitInteger, MVT::i32, 1, 
/*2997*/                OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*3001*/                OPC_EmitInteger, MVT::i32, 0, 
/*3004*/                OPC_EmitInteger, MVT::i32, 0, 
/*3007*/                OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                            1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*3034*/                OPC_EmitInteger, MVT::i32, 0, 
/*3037*/                OPC_EmitInteger, MVT::i32, 0, 
/*3040*/                OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3052*/                OPC_EmitInteger, MVT::i32, 0, 
/*3055*/                OPC_EmitInteger, MVT::i32, 0, 
/*3058*/                OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3070*/                OPC_EmitInteger, MVT::i32, 0, 
/*3073*/                OPC_EmitInteger, MVT::i32, 0, 
/*3076*/                OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3088*/                OPC_EmitInteger, MVT::i32, 1, 
/*3091*/                OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*3095*/                OPC_EmitInteger, MVT::i32, 0, 
/*3098*/                OPC_EmitInteger, MVT::i32, 0, 
/*3101*/                OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                            1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z))) - Complexity = 12
                        // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*3126*/              /*Scope*/ 37, /*->3164*/
/*3127*/                OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*3129*/                OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*3138*/                OPC_EmitInteger, MVT::i32, 0, 
/*3141*/                OPC_EmitInteger, MVT::i32, 0, 
/*3144*/                OPC_EmitInteger, MVT::i32, 0, 
/*3147*/                OPC_EmitInteger, MVT::i32, 0, 
/*3150*/                OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                            1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 2, 4, 5, 6, 7, 
                        // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z))) - Complexity = 12
                        // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*3164*/              0, /*End of Scope*/
/*3165*/            /*Scope*/ 49, /*->3215*/
/*3166*/              OPC_CheckSame, 1,
/*3168*/              OPC_MoveParent,
/*3169*/              OPC_MoveChild, 1,
/*3171*/              OPC_CheckSame, 0,
/*3173*/              OPC_MoveParent,
/*3174*/              OPC_MoveParent,
/*3175*/              OPC_MoveParent,
/*3176*/              OPC_CheckType, MVT::i32,
/*3178*/              OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*3180*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*3189*/              OPC_EmitInteger, MVT::i32, 0, 
/*3192*/              OPC_EmitInteger, MVT::i32, 0, 
/*3195*/              OPC_EmitInteger, MVT::i32, 0, 
/*3198*/              OPC_EmitInteger, MVT::i32, 0, 
/*3201*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 2, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x))) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*3215*/            0, /*End of Scope*/
/*3216*/          /*Scope*/ 111, /*->3328*/
/*3217*/            OPC_MoveChild, 0,
/*3219*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*3222*/            OPC_MoveChild, 0,
/*3224*/            OPC_Scope, 50, /*->3276*/ // 2 children in Scope
/*3226*/              OPC_CheckSame, 0,
/*3228*/              OPC_MoveParent,
/*3229*/              OPC_MoveChild, 1,
/*3231*/              OPC_CheckSame, 1,
/*3233*/              OPC_MoveParent,
/*3234*/              OPC_MoveParent,
/*3235*/              OPC_RecordChild1, // #2 = $y
/*3236*/              OPC_MoveParent,
/*3237*/              OPC_CheckType, MVT::i32,
/*3239*/              OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*3241*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*3250*/              OPC_EmitInteger, MVT::i32, 0, 
/*3253*/              OPC_EmitInteger, MVT::i32, 0, 
/*3256*/              OPC_EmitInteger, MVT::i32, 0, 
/*3259*/              OPC_EmitInteger, MVT::i32, 0, 
/*3262*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 2, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y)) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*3276*/            /*Scope*/ 50, /*->3327*/
/*3277*/              OPC_CheckSame, 1,
/*3279*/              OPC_MoveParent,
/*3280*/              OPC_MoveChild, 1,
/*3282*/              OPC_CheckSame, 0,
/*3284*/              OPC_MoveParent,
/*3285*/              OPC_MoveParent,
/*3286*/              OPC_RecordChild1, // #2 = $y
/*3287*/              OPC_MoveParent,
/*3288*/              OPC_CheckType, MVT::i32,
/*3290*/              OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*3292*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*3301*/              OPC_EmitInteger, MVT::i32, 0, 
/*3304*/              OPC_EmitInteger, MVT::i32, 0, 
/*3307*/              OPC_EmitInteger, MVT::i32, 0, 
/*3310*/              OPC_EmitInteger, MVT::i32, 0, 
/*3313*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 2, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y)) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*3327*/            0, /*End of Scope*/
/*3328*/          /*Scope*/ 110, /*->3439*/
/*3329*/            OPC_RecordChild0, // #2 = $y
/*3330*/            OPC_MoveChild, 1,
/*3332*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*3335*/            OPC_MoveChild, 0,
/*3337*/            OPC_Scope, 49, /*->3388*/ // 2 children in Scope
/*3339*/              OPC_CheckSame, 1,
/*3341*/              OPC_MoveParent,
/*3342*/              OPC_MoveChild, 1,
/*3344*/              OPC_CheckSame, 0,
/*3346*/              OPC_MoveParent,
/*3347*/              OPC_MoveParent,
/*3348*/              OPC_MoveParent,
/*3349*/              OPC_CheckType, MVT::i32,
/*3351*/              OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*3353*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*3362*/              OPC_EmitInteger, MVT::i32, 0, 
/*3365*/              OPC_EmitInteger, MVT::i32, 0, 
/*3368*/              OPC_EmitInteger, MVT::i32, 0, 
/*3371*/              OPC_EmitInteger, MVT::i32, 0, 
/*3374*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 0, 2, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z))) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*3388*/            /*Scope*/ 49, /*->3438*/
/*3389*/              OPC_CheckSame, 0,
/*3391*/              OPC_MoveParent,
/*3392*/              OPC_MoveChild, 1,
/*3394*/              OPC_CheckSame, 1,
/*3396*/              OPC_MoveParent,
/*3397*/              OPC_MoveParent,
/*3398*/              OPC_MoveParent,
/*3399*/              OPC_CheckType, MVT::i32,
/*3401*/              OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*3403*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*3412*/              OPC_EmitInteger, MVT::i32, 0, 
/*3415*/              OPC_EmitInteger, MVT::i32, 0, 
/*3418*/              OPC_EmitInteger, MVT::i32, 0, 
/*3421*/              OPC_EmitInteger, MVT::i32, 0, 
/*3424*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 0, 2, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x))) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*3438*/            0, /*End of Scope*/
/*3439*/          /*Scope*/ 111, /*->3551*/
/*3440*/            OPC_MoveChild, 0,
/*3442*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*3445*/            OPC_MoveChild, 0,
/*3447*/            OPC_Scope, 50, /*->3499*/ // 2 children in Scope
/*3449*/              OPC_CheckSame, 1,
/*3451*/              OPC_MoveParent,
/*3452*/              OPC_MoveChild, 1,
/*3454*/              OPC_CheckSame, 0,
/*3456*/              OPC_MoveParent,
/*3457*/              OPC_MoveParent,
/*3458*/              OPC_RecordChild1, // #2 = $y
/*3459*/              OPC_MoveParent,
/*3460*/              OPC_CheckType, MVT::i32,
/*3462*/              OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*3464*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*3473*/              OPC_EmitInteger, MVT::i32, 0, 
/*3476*/              OPC_EmitInteger, MVT::i32, 0, 
/*3479*/              OPC_EmitInteger, MVT::i32, 0, 
/*3482*/              OPC_EmitInteger, MVT::i32, 0, 
/*3485*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 0, 2, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y)) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*3499*/            /*Scope*/ 50, /*->3550*/
/*3500*/              OPC_CheckSame, 0,
/*3502*/              OPC_MoveParent,
/*3503*/              OPC_MoveChild, 1,
/*3505*/              OPC_CheckSame, 1,
/*3507*/              OPC_MoveParent,
/*3508*/              OPC_MoveParent,
/*3509*/              OPC_RecordChild1, // #2 = $y
/*3510*/              OPC_MoveParent,
/*3511*/              OPC_CheckType, MVT::i32,
/*3513*/              OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*3515*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*3524*/              OPC_EmitInteger, MVT::i32, 0, 
/*3527*/              OPC_EmitInteger, MVT::i32, 0, 
/*3530*/              OPC_EmitInteger, MVT::i32, 0, 
/*3533*/              OPC_EmitInteger, MVT::i32, 0, 
/*3536*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 0, 2, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y)) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*3550*/            0, /*End of Scope*/
/*3551*/          0, /*End of Scope*/
/*3552*/        /*Scope*/ 76|128,1/*204*/, /*->3758*/
/*3554*/          OPC_MoveChild, 1,
/*3556*/          OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*3559*/          OPC_RecordChild0, // #1 = $x
/*3560*/          OPC_RecordChild1, // #2 = $z
/*3561*/          OPC_MoveParent,
/*3562*/          OPC_MoveParent,
/*3563*/          OPC_MoveChild, 1,
/*3565*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*3568*/          OPC_MoveChild, 0,
/*3570*/          OPC_Scope, 48, /*->3620*/ // 3 children in Scope
/*3572*/            OPC_CheckSame, 1,
/*3574*/            OPC_MoveParent,
/*3575*/            OPC_MoveChild, 1,
/*3577*/            OPC_CheckSame, 2,
/*3579*/            OPC_MoveParent,
/*3580*/            OPC_MoveParent,
/*3581*/            OPC_CheckType, MVT::i32,
/*3583*/            OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*3585*/            OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #3
/*3594*/            OPC_EmitInteger, MVT::i32, 0, 
/*3597*/            OPC_EmitInteger, MVT::i32, 0, 
/*3600*/            OPC_EmitInteger, MVT::i32, 0, 
/*3603*/            OPC_EmitInteger, MVT::i32, 0, 
/*3606*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 2, 0, 4, 5, 6, 7, 
                    // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z)), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                    // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*3620*/          /*Scope*/ 87, /*->3708*/
/*3621*/            OPC_CheckSame, 2,
/*3623*/            OPC_MoveParent,
/*3624*/            OPC_MoveChild, 1,
/*3626*/            OPC_CheckSame, 1,
/*3628*/            OPC_MoveParent,
/*3629*/            OPC_MoveParent,
/*3630*/            OPC_CheckType, MVT::i32,
/*3632*/            OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*3634*/            OPC_Scope, 35, /*->3671*/ // 2 children in Scope
/*3636*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #3
/*3645*/              OPC_EmitInteger, MVT::i32, 0, 
/*3648*/              OPC_EmitInteger, MVT::i32, 0, 
/*3651*/              OPC_EmitInteger, MVT::i32, 0, 
/*3654*/              OPC_EmitInteger, MVT::i32, 0, 
/*3657*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 2, 0, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z)), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*3671*/            /*Scope*/ 35, /*->3707*/
/*3672*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 0,  // Results = #3
/*3681*/              OPC_EmitInteger, MVT::i32, 0, 
/*3684*/              OPC_EmitInteger, MVT::i32, 0, 
/*3687*/              OPC_EmitInteger, MVT::i32, 0, 
/*3690*/              OPC_EmitInteger, MVT::i32, 0, 
/*3693*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 0, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x)), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*3707*/            0, /*End of Scope*/
/*3708*/          /*Scope*/ 48, /*->3757*/
/*3709*/            OPC_CheckSame, 1,
/*3711*/            OPC_MoveParent,
/*3712*/            OPC_MoveChild, 1,
/*3714*/            OPC_CheckSame, 2,
/*3716*/            OPC_MoveParent,
/*3717*/            OPC_MoveParent,
/*3718*/            OPC_CheckType, MVT::i32,
/*3720*/            OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*3722*/            OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 0,  // Results = #3
/*3731*/            OPC_EmitInteger, MVT::i32, 0, 
/*3734*/            OPC_EmitInteger, MVT::i32, 0, 
/*3737*/            OPC_EmitInteger, MVT::i32, 0, 
/*3740*/            OPC_EmitInteger, MVT::i32, 0, 
/*3743*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 0, 4, 5, 6, 7, 
                    // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x)), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                    // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*3757*/          0, /*End of Scope*/
/*3758*/        0, /*End of Scope*/
/*3759*/      /*Scope*/ 77|128,1/*205*/, /*->3966*/
/*3761*/        OPC_MoveChild, 0,
/*3763*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*3766*/        OPC_RecordChild0, // #0 = $x
/*3767*/        OPC_RecordChild1, // #1 = $z
/*3768*/        OPC_MoveParent,
/*3769*/        OPC_RecordChild1, // #2 = $y
/*3770*/        OPC_MoveParent,
/*3771*/        OPC_MoveChild, 1,
/*3773*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*3776*/        OPC_MoveChild, 0,
/*3778*/        OPC_Scope, 48, /*->3828*/ // 3 children in Scope
/*3780*/          OPC_CheckSame, 0,
/*3782*/          OPC_MoveParent,
/*3783*/          OPC_MoveChild, 1,
/*3785*/          OPC_CheckSame, 1,
/*3787*/          OPC_MoveParent,
/*3788*/          OPC_MoveParent,
/*3789*/          OPC_CheckType, MVT::i32,
/*3791*/          OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*3793*/          OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*3802*/          OPC_EmitInteger, MVT::i32, 0, 
/*3805*/          OPC_EmitInteger, MVT::i32, 0, 
/*3808*/          OPC_EmitInteger, MVT::i32, 0, 
/*3811*/          OPC_EmitInteger, MVT::i32, 0, 
/*3814*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 2, 4, 5, 6, 7, 
                  // Src: (or:i32 (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                  // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*3828*/        /*Scope*/ 87, /*->3916*/
/*3829*/          OPC_CheckSame, 1,
/*3831*/          OPC_MoveParent,
/*3832*/          OPC_MoveChild, 1,
/*3834*/          OPC_CheckSame, 0,
/*3836*/          OPC_MoveParent,
/*3837*/          OPC_MoveParent,
/*3838*/          OPC_CheckType, MVT::i32,
/*3840*/          OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*3842*/          OPC_Scope, 35, /*->3879*/ // 2 children in Scope
/*3844*/            OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*3853*/            OPC_EmitInteger, MVT::i32, 0, 
/*3856*/            OPC_EmitInteger, MVT::i32, 0, 
/*3859*/            OPC_EmitInteger, MVT::i32, 0, 
/*3862*/            OPC_EmitInteger, MVT::i32, 0, 
/*3865*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 2, 4, 5, 6, 7, 
                    // Src: (or:i32 (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                    // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*3879*/          /*Scope*/ 35, /*->3915*/
/*3880*/            OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*3889*/            OPC_EmitInteger, MVT::i32, 0, 
/*3892*/            OPC_EmitInteger, MVT::i32, 0, 
/*3895*/            OPC_EmitInteger, MVT::i32, 0, 
/*3898*/            OPC_EmitInteger, MVT::i32, 0, 
/*3901*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 0, 2, 4, 5, 6, 7, 
                    // Src: (or:i32 (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                    // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*3915*/          0, /*End of Scope*/
/*3916*/        /*Scope*/ 48, /*->3965*/
/*3917*/          OPC_CheckSame, 0,
/*3919*/          OPC_MoveParent,
/*3920*/          OPC_MoveChild, 1,
/*3922*/          OPC_CheckSame, 1,
/*3924*/          OPC_MoveParent,
/*3925*/          OPC_MoveParent,
/*3926*/          OPC_CheckType, MVT::i32,
/*3928*/          OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*3930*/          OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*3939*/          OPC_EmitInteger, MVT::i32, 0, 
/*3942*/          OPC_EmitInteger, MVT::i32, 0, 
/*3945*/          OPC_EmitInteger, MVT::i32, 0, 
/*3948*/          OPC_EmitInteger, MVT::i32, 0, 
/*3951*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 0, 2, 4, 5, 6, 7, 
                  // Src: (or:i32 (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                  // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*3965*/        0, /*End of Scope*/
/*3966*/      /*Scope*/ 36|128,18/*2340*/, /*->6308*/
/*3968*/        OPC_RecordChild0, // #0 = $x
/*3969*/        OPC_Scope, 17|128,12/*1553*/, /*->5525*/ // 2 children in Scope
/*3972*/          OPC_RecordChild1, // #1 = $z
/*3973*/          OPC_MoveParent,
/*3974*/          OPC_MoveChild, 1,
/*3976*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*3979*/          OPC_Scope, 92|128,1/*220*/, /*->4202*/ // 4 children in Scope
/*3982*/            OPC_RecordChild0, // #2 = $y
/*3983*/            OPC_MoveChild, 1,
/*3985*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*3988*/            OPC_MoveChild, 0,
/*3990*/            OPC_CheckSame, 1,
/*3992*/            OPC_MoveParent,
/*3993*/            OPC_MoveChild, 1,
/*3995*/            OPC_CheckSame, 0,
/*3997*/            OPC_MoveParent,
/*3998*/            OPC_MoveParent,
/*3999*/            OPC_MoveParent,
/*4000*/            OPC_CheckType, MVT::i32,
/*4002*/            OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*4004*/            OPC_EmitInteger, MVT::i32, 0, 
/*4007*/            OPC_EmitInteger, MVT::i32, 0, 
/*4010*/            OPC_EmitInteger, MVT::i32, 0, 
/*4013*/            OPC_EmitInteger, MVT::i32, 0, 
/*4016*/            OPC_EmitInteger, MVT::i32, 1, 
/*4019*/            OPC_EmitInteger, MVT::i32, 0, 
/*4022*/            OPC_EmitInteger, MVT::i32, 0, 
/*4025*/            OPC_EmitInteger, MVT::i32, 0, 
/*4028*/            OPC_EmitInteger, MVT::i32, 0, 
/*4031*/            OPC_EmitInteger, MVT::i32, 0, 
/*4034*/            OPC_EmitInteger, MVT::i32, 0, 
/*4037*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4049*/            OPC_EmitInteger, MVT::i32, 0, 
/*4052*/            OPC_EmitInteger, MVT::i32, 0, 
/*4055*/            OPC_EmitInteger, MVT::i32, 0, 
/*4058*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4070*/            OPC_EmitInteger, MVT::i32, 1, 
/*4073*/            OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*4077*/            OPC_EmitInteger, MVT::i32, 0, 
/*4080*/            OPC_EmitInteger, MVT::i32, 0, 
/*4083*/            OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*4110*/            OPC_EmitInteger, MVT::i32, 0, 
/*4113*/            OPC_EmitInteger, MVT::i32, 0, 
/*4116*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4128*/            OPC_EmitInteger, MVT::i32, 0, 
/*4131*/            OPC_EmitInteger, MVT::i32, 0, 
/*4134*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4146*/            OPC_EmitInteger, MVT::i32, 0, 
/*4149*/            OPC_EmitInteger, MVT::i32, 0, 
/*4152*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4164*/            OPC_EmitInteger, MVT::i32, 1, 
/*4167*/            OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*4171*/            OPC_EmitInteger, MVT::i32, 0, 
/*4174*/            OPC_EmitInteger, MVT::i32, 0, 
/*4177*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                    // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x))) - Complexity = 12
                    // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4202*/          /*Scope*/ 55|128,3/*439*/, /*->4643*/
/*4204*/            OPC_MoveChild, 0,
/*4206*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4209*/            OPC_MoveChild, 0,
/*4211*/            OPC_Scope, 85|128,1/*213*/, /*->4427*/ // 2 children in Scope
/*4214*/              OPC_CheckSame, 0,
/*4216*/              OPC_MoveParent,
/*4217*/              OPC_MoveChild, 1,
/*4219*/              OPC_CheckSame, 1,
/*4221*/              OPC_MoveParent,
/*4222*/              OPC_MoveParent,
/*4223*/              OPC_RecordChild1, // #2 = $y
/*4224*/              OPC_MoveParent,
/*4225*/              OPC_CheckType, MVT::i32,
/*4227*/              OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*4229*/              OPC_EmitInteger, MVT::i32, 0, 
/*4232*/              OPC_EmitInteger, MVT::i32, 0, 
/*4235*/              OPC_EmitInteger, MVT::i32, 0, 
/*4238*/              OPC_EmitInteger, MVT::i32, 0, 
/*4241*/              OPC_EmitInteger, MVT::i32, 1, 
/*4244*/              OPC_EmitInteger, MVT::i32, 0, 
/*4247*/              OPC_EmitInteger, MVT::i32, 0, 
/*4250*/              OPC_EmitInteger, MVT::i32, 0, 
/*4253*/              OPC_EmitInteger, MVT::i32, 0, 
/*4256*/              OPC_EmitInteger, MVT::i32, 0, 
/*4259*/              OPC_EmitInteger, MVT::i32, 0, 
/*4262*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4274*/              OPC_EmitInteger, MVT::i32, 0, 
/*4277*/              OPC_EmitInteger, MVT::i32, 0, 
/*4280*/              OPC_EmitInteger, MVT::i32, 0, 
/*4283*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4295*/              OPC_EmitInteger, MVT::i32, 1, 
/*4298*/              OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*4302*/              OPC_EmitInteger, MVT::i32, 0, 
/*4305*/              OPC_EmitInteger, MVT::i32, 0, 
/*4308*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*4335*/              OPC_EmitInteger, MVT::i32, 0, 
/*4338*/              OPC_EmitInteger, MVT::i32, 0, 
/*4341*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4353*/              OPC_EmitInteger, MVT::i32, 0, 
/*4356*/              OPC_EmitInteger, MVT::i32, 0, 
/*4359*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4371*/              OPC_EmitInteger, MVT::i32, 0, 
/*4374*/              OPC_EmitInteger, MVT::i32, 0, 
/*4377*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4389*/              OPC_EmitInteger, MVT::i32, 1, 
/*4392*/              OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*4396*/              OPC_EmitInteger, MVT::i32, 0, 
/*4399*/              OPC_EmitInteger, MVT::i32, 0, 
/*4402*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y)) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4427*/            /*Scope*/ 85|128,1/*213*/, /*->4642*/
/*4429*/              OPC_CheckSame, 1,
/*4431*/              OPC_MoveParent,
/*4432*/              OPC_MoveChild, 1,
/*4434*/              OPC_CheckSame, 0,
/*4436*/              OPC_MoveParent,
/*4437*/              OPC_MoveParent,
/*4438*/              OPC_RecordChild1, // #2 = $y
/*4439*/              OPC_MoveParent,
/*4440*/              OPC_CheckType, MVT::i32,
/*4442*/              OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*4444*/              OPC_EmitInteger, MVT::i32, 0, 
/*4447*/              OPC_EmitInteger, MVT::i32, 0, 
/*4450*/              OPC_EmitInteger, MVT::i32, 0, 
/*4453*/              OPC_EmitInteger, MVT::i32, 0, 
/*4456*/              OPC_EmitInteger, MVT::i32, 1, 
/*4459*/              OPC_EmitInteger, MVT::i32, 0, 
/*4462*/              OPC_EmitInteger, MVT::i32, 0, 
/*4465*/              OPC_EmitInteger, MVT::i32, 0, 
/*4468*/              OPC_EmitInteger, MVT::i32, 0, 
/*4471*/              OPC_EmitInteger, MVT::i32, 0, 
/*4474*/              OPC_EmitInteger, MVT::i32, 0, 
/*4477*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4489*/              OPC_EmitInteger, MVT::i32, 0, 
/*4492*/              OPC_EmitInteger, MVT::i32, 0, 
/*4495*/              OPC_EmitInteger, MVT::i32, 0, 
/*4498*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4510*/              OPC_EmitInteger, MVT::i32, 1, 
/*4513*/              OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*4517*/              OPC_EmitInteger, MVT::i32, 0, 
/*4520*/              OPC_EmitInteger, MVT::i32, 0, 
/*4523*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*4550*/              OPC_EmitInteger, MVT::i32, 0, 
/*4553*/              OPC_EmitInteger, MVT::i32, 0, 
/*4556*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4568*/              OPC_EmitInteger, MVT::i32, 0, 
/*4571*/              OPC_EmitInteger, MVT::i32, 0, 
/*4574*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4586*/              OPC_EmitInteger, MVT::i32, 0, 
/*4589*/              OPC_EmitInteger, MVT::i32, 0, 
/*4592*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4604*/              OPC_EmitInteger, MVT::i32, 1, 
/*4607*/              OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*4611*/              OPC_EmitInteger, MVT::i32, 0, 
/*4614*/              OPC_EmitInteger, MVT::i32, 0, 
/*4617*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y)) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4642*/            0, /*End of Scope*/
/*4643*/          /*Scope*/ 54|128,3/*438*/, /*->5083*/
/*4645*/            OPC_RecordChild0, // #2 = $y
/*4646*/            OPC_MoveChild, 1,
/*4648*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4651*/            OPC_MoveChild, 0,
/*4653*/            OPC_Scope, 84|128,1/*212*/, /*->4868*/ // 2 children in Scope
/*4656*/              OPC_CheckSame, 1,
/*4658*/              OPC_MoveParent,
/*4659*/              OPC_MoveChild, 1,
/*4661*/              OPC_CheckSame, 0,
/*4663*/              OPC_MoveParent,
/*4664*/              OPC_MoveParent,
/*4665*/              OPC_MoveParent,
/*4666*/              OPC_CheckType, MVT::i32,
/*4668*/              OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*4670*/              OPC_EmitInteger, MVT::i32, 0, 
/*4673*/              OPC_EmitInteger, MVT::i32, 0, 
/*4676*/              OPC_EmitInteger, MVT::i32, 0, 
/*4679*/              OPC_EmitInteger, MVT::i32, 0, 
/*4682*/              OPC_EmitInteger, MVT::i32, 1, 
/*4685*/              OPC_EmitInteger, MVT::i32, 0, 
/*4688*/              OPC_EmitInteger, MVT::i32, 0, 
/*4691*/              OPC_EmitInteger, MVT::i32, 0, 
/*4694*/              OPC_EmitInteger, MVT::i32, 0, 
/*4697*/              OPC_EmitInteger, MVT::i32, 0, 
/*4700*/              OPC_EmitInteger, MVT::i32, 0, 
/*4703*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4715*/              OPC_EmitInteger, MVT::i32, 0, 
/*4718*/              OPC_EmitInteger, MVT::i32, 0, 
/*4721*/              OPC_EmitInteger, MVT::i32, 0, 
/*4724*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4736*/              OPC_EmitInteger, MVT::i32, 1, 
/*4739*/              OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*4743*/              OPC_EmitInteger, MVT::i32, 0, 
/*4746*/              OPC_EmitInteger, MVT::i32, 0, 
/*4749*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*4776*/              OPC_EmitInteger, MVT::i32, 0, 
/*4779*/              OPC_EmitInteger, MVT::i32, 0, 
/*4782*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4794*/              OPC_EmitInteger, MVT::i32, 0, 
/*4797*/              OPC_EmitInteger, MVT::i32, 0, 
/*4800*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4812*/              OPC_EmitInteger, MVT::i32, 0, 
/*4815*/              OPC_EmitInteger, MVT::i32, 0, 
/*4818*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4830*/              OPC_EmitInteger, MVT::i32, 1, 
/*4833*/              OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*4837*/              OPC_EmitInteger, MVT::i32, 0, 
/*4840*/              OPC_EmitInteger, MVT::i32, 0, 
/*4843*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z))) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4868*/            /*Scope*/ 84|128,1/*212*/, /*->5082*/
/*4870*/              OPC_CheckSame, 0,
/*4872*/              OPC_MoveParent,
/*4873*/              OPC_MoveChild, 1,
/*4875*/              OPC_CheckSame, 1,
/*4877*/              OPC_MoveParent,
/*4878*/              OPC_MoveParent,
/*4879*/              OPC_MoveParent,
/*4880*/              OPC_CheckType, MVT::i32,
/*4882*/              OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*4884*/              OPC_EmitInteger, MVT::i32, 0, 
/*4887*/              OPC_EmitInteger, MVT::i32, 0, 
/*4890*/              OPC_EmitInteger, MVT::i32, 0, 
/*4893*/              OPC_EmitInteger, MVT::i32, 0, 
/*4896*/              OPC_EmitInteger, MVT::i32, 1, 
/*4899*/              OPC_EmitInteger, MVT::i32, 0, 
/*4902*/              OPC_EmitInteger, MVT::i32, 0, 
/*4905*/              OPC_EmitInteger, MVT::i32, 0, 
/*4908*/              OPC_EmitInteger, MVT::i32, 0, 
/*4911*/              OPC_EmitInteger, MVT::i32, 0, 
/*4914*/              OPC_EmitInteger, MVT::i32, 0, 
/*4917*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4929*/              OPC_EmitInteger, MVT::i32, 0, 
/*4932*/              OPC_EmitInteger, MVT::i32, 0, 
/*4935*/              OPC_EmitInteger, MVT::i32, 0, 
/*4938*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4950*/              OPC_EmitInteger, MVT::i32, 1, 
/*4953*/              OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*4957*/              OPC_EmitInteger, MVT::i32, 0, 
/*4960*/              OPC_EmitInteger, MVT::i32, 0, 
/*4963*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*4990*/              OPC_EmitInteger, MVT::i32, 0, 
/*4993*/              OPC_EmitInteger, MVT::i32, 0, 
/*4996*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5008*/              OPC_EmitInteger, MVT::i32, 0, 
/*5011*/              OPC_EmitInteger, MVT::i32, 0, 
/*5014*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5026*/              OPC_EmitInteger, MVT::i32, 0, 
/*5029*/              OPC_EmitInteger, MVT::i32, 0, 
/*5032*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5044*/              OPC_EmitInteger, MVT::i32, 1, 
/*5047*/              OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*5051*/              OPC_EmitInteger, MVT::i32, 0, 
/*5054*/              OPC_EmitInteger, MVT::i32, 0, 
/*5057*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x))) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*5082*/            0, /*End of Scope*/
/*5083*/          /*Scope*/ 55|128,3/*439*/, /*->5524*/
/*5085*/            OPC_MoveChild, 0,
/*5087*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*5090*/            OPC_MoveChild, 0,
/*5092*/            OPC_Scope, 85|128,1/*213*/, /*->5308*/ // 2 children in Scope
/*5095*/              OPC_CheckSame, 1,
/*5097*/              OPC_MoveParent,
/*5098*/              OPC_MoveChild, 1,
/*5100*/              OPC_CheckSame, 0,
/*5102*/              OPC_MoveParent,
/*5103*/              OPC_MoveParent,
/*5104*/              OPC_RecordChild1, // #2 = $y
/*5105*/              OPC_MoveParent,
/*5106*/              OPC_CheckType, MVT::i32,
/*5108*/              OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*5110*/              OPC_EmitInteger, MVT::i32, 0, 
/*5113*/              OPC_EmitInteger, MVT::i32, 0, 
/*5116*/              OPC_EmitInteger, MVT::i32, 0, 
/*5119*/              OPC_EmitInteger, MVT::i32, 0, 
/*5122*/              OPC_EmitInteger, MVT::i32, 1, 
/*5125*/              OPC_EmitInteger, MVT::i32, 0, 
/*5128*/              OPC_EmitInteger, MVT::i32, 0, 
/*5131*/              OPC_EmitInteger, MVT::i32, 0, 
/*5134*/              OPC_EmitInteger, MVT::i32, 0, 
/*5137*/              OPC_EmitInteger, MVT::i32, 0, 
/*5140*/              OPC_EmitInteger, MVT::i32, 0, 
/*5143*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5155*/              OPC_EmitInteger, MVT::i32, 0, 
/*5158*/              OPC_EmitInteger, MVT::i32, 0, 
/*5161*/              OPC_EmitInteger, MVT::i32, 0, 
/*5164*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5176*/              OPC_EmitInteger, MVT::i32, 1, 
/*5179*/              OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*5183*/              OPC_EmitInteger, MVT::i32, 0, 
/*5186*/              OPC_EmitInteger, MVT::i32, 0, 
/*5189*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*5216*/              OPC_EmitInteger, MVT::i32, 0, 
/*5219*/              OPC_EmitInteger, MVT::i32, 0, 
/*5222*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5234*/              OPC_EmitInteger, MVT::i32, 0, 
/*5237*/              OPC_EmitInteger, MVT::i32, 0, 
/*5240*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5252*/              OPC_EmitInteger, MVT::i32, 0, 
/*5255*/              OPC_EmitInteger, MVT::i32, 0, 
/*5258*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5270*/              OPC_EmitInteger, MVT::i32, 1, 
/*5273*/              OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*5277*/              OPC_EmitInteger, MVT::i32, 0, 
/*5280*/              OPC_EmitInteger, MVT::i32, 0, 
/*5283*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y)) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*5308*/            /*Scope*/ 85|128,1/*213*/, /*->5523*/
/*5310*/              OPC_CheckSame, 0,
/*5312*/              OPC_MoveParent,
/*5313*/              OPC_MoveChild, 1,
/*5315*/              OPC_CheckSame, 1,
/*5317*/              OPC_MoveParent,
/*5318*/              OPC_MoveParent,
/*5319*/              OPC_RecordChild1, // #2 = $y
/*5320*/              OPC_MoveParent,
/*5321*/              OPC_CheckType, MVT::i32,
/*5323*/              OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*5325*/              OPC_EmitInteger, MVT::i32, 0, 
/*5328*/              OPC_EmitInteger, MVT::i32, 0, 
/*5331*/              OPC_EmitInteger, MVT::i32, 0, 
/*5334*/              OPC_EmitInteger, MVT::i32, 0, 
/*5337*/              OPC_EmitInteger, MVT::i32, 1, 
/*5340*/              OPC_EmitInteger, MVT::i32, 0, 
/*5343*/              OPC_EmitInteger, MVT::i32, 0, 
/*5346*/              OPC_EmitInteger, MVT::i32, 0, 
/*5349*/              OPC_EmitInteger, MVT::i32, 0, 
/*5352*/              OPC_EmitInteger, MVT::i32, 0, 
/*5355*/              OPC_EmitInteger, MVT::i32, 0, 
/*5358*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5370*/              OPC_EmitInteger, MVT::i32, 0, 
/*5373*/              OPC_EmitInteger, MVT::i32, 0, 
/*5376*/              OPC_EmitInteger, MVT::i32, 0, 
/*5379*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5391*/              OPC_EmitInteger, MVT::i32, 1, 
/*5394*/              OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*5398*/              OPC_EmitInteger, MVT::i32, 0, 
/*5401*/              OPC_EmitInteger, MVT::i32, 0, 
/*5404*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*5431*/              OPC_EmitInteger, MVT::i32, 0, 
/*5434*/              OPC_EmitInteger, MVT::i32, 0, 
/*5437*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5449*/              OPC_EmitInteger, MVT::i32, 0, 
/*5452*/              OPC_EmitInteger, MVT::i32, 0, 
/*5455*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5467*/              OPC_EmitInteger, MVT::i32, 0, 
/*5470*/              OPC_EmitInteger, MVT::i32, 0, 
/*5473*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5485*/              OPC_EmitInteger, MVT::i32, 1, 
/*5488*/              OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*5492*/              OPC_EmitInteger, MVT::i32, 0, 
/*5495*/              OPC_EmitInteger, MVT::i32, 0, 
/*5498*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y)) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*5523*/            0, /*End of Scope*/
/*5524*/          0, /*End of Scope*/
/*5525*/        /*Scope*/ 12|128,6/*780*/, /*->6307*/
/*5527*/          OPC_MoveChild, 1,
/*5529*/          OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*5532*/          OPC_RecordChild0, // #1 = $x
/*5533*/          OPC_RecordChild1, // #2 = $z
/*5534*/          OPC_MoveParent,
/*5535*/          OPC_MoveParent,
/*5536*/          OPC_MoveChild, 1,
/*5538*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*5541*/          OPC_MoveChild, 0,
/*5543*/          OPC_Scope, 83|128,1/*211*/, /*->5757*/ // 3 children in Scope
/*5546*/            OPC_CheckSame, 1,
/*5548*/            OPC_MoveParent,
/*5549*/            OPC_MoveChild, 1,
/*5551*/            OPC_CheckSame, 2,
/*5553*/            OPC_MoveParent,
/*5554*/            OPC_MoveParent,
/*5555*/            OPC_CheckType, MVT::i32,
/*5557*/            OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*5559*/            OPC_EmitInteger, MVT::i32, 0, 
/*5562*/            OPC_EmitInteger, MVT::i32, 0, 
/*5565*/            OPC_EmitInteger, MVT::i32, 0, 
/*5568*/            OPC_EmitInteger, MVT::i32, 0, 
/*5571*/            OPC_EmitInteger, MVT::i32, 1, 
/*5574*/            OPC_EmitInteger, MVT::i32, 0, 
/*5577*/            OPC_EmitInteger, MVT::i32, 0, 
/*5580*/            OPC_EmitInteger, MVT::i32, 0, 
/*5583*/            OPC_EmitInteger, MVT::i32, 0, 
/*5586*/            OPC_EmitInteger, MVT::i32, 0, 
/*5589*/            OPC_EmitInteger, MVT::i32, 0, 
/*5592*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5604*/            OPC_EmitInteger, MVT::i32, 0, 
/*5607*/            OPC_EmitInteger, MVT::i32, 0, 
/*5610*/            OPC_EmitInteger, MVT::i32, 0, 
/*5613*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5625*/            OPC_EmitInteger, MVT::i32, 1, 
/*5628*/            OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*5632*/            OPC_EmitInteger, MVT::i32, 0, 
/*5635*/            OPC_EmitInteger, MVT::i32, 0, 
/*5638*/            OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*5665*/            OPC_EmitInteger, MVT::i32, 0, 
/*5668*/            OPC_EmitInteger, MVT::i32, 0, 
/*5671*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5683*/            OPC_EmitInteger, MVT::i32, 0, 
/*5686*/            OPC_EmitInteger, MVT::i32, 0, 
/*5689*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5701*/            OPC_EmitInteger, MVT::i32, 0, 
/*5704*/            OPC_EmitInteger, MVT::i32, 0, 
/*5707*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5719*/            OPC_EmitInteger, MVT::i32, 1, 
/*5722*/            OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*5726*/            OPC_EmitInteger, MVT::i32, 0, 
/*5729*/            OPC_EmitInteger, MVT::i32, 0, 
/*5732*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 2, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                    // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z)), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                    // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*5757*/          /*Scope*/ 78|128,2/*334*/, /*->6093*/
/*5759*/            OPC_CheckSame, 2,
/*5761*/            OPC_MoveParent,
/*5762*/            OPC_MoveChild, 1,
/*5764*/            OPC_CheckSame, 1,
/*5766*/            OPC_MoveParent,
/*5767*/            OPC_MoveParent,
/*5768*/            OPC_CheckType, MVT::i32,
/*5770*/            OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*5772*/            OPC_EmitInteger, MVT::i32, 0, 
/*5775*/            OPC_EmitInteger, MVT::i32, 0, 
/*5778*/            OPC_EmitInteger, MVT::i32, 0, 
/*5781*/            OPC_EmitInteger, MVT::i32, 0, 
/*5784*/            OPC_EmitInteger, MVT::i32, 1, 
/*5787*/            OPC_EmitInteger, MVT::i32, 0, 
/*5790*/            OPC_EmitInteger, MVT::i32, 0, 
/*5793*/            OPC_EmitInteger, MVT::i32, 0, 
/*5796*/            OPC_EmitInteger, MVT::i32, 0, 
/*5799*/            OPC_EmitInteger, MVT::i32, 0, 
/*5802*/            OPC_EmitInteger, MVT::i32, 0, 
/*5805*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5817*/            OPC_EmitInteger, MVT::i32, 0, 
/*5820*/            OPC_EmitInteger, MVT::i32, 0, 
/*5823*/            OPC_EmitInteger, MVT::i32, 0, 
/*5826*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5838*/            OPC_EmitInteger, MVT::i32, 1, 
/*5841*/            OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*5845*/            OPC_EmitInteger, MVT::i32, 0, 
/*5848*/            OPC_EmitInteger, MVT::i32, 0, 
/*5851*/            OPC_Scope, 119, /*->5972*/ // 2 children in Scope
/*5853*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*5880*/              OPC_EmitInteger, MVT::i32, 0, 
/*5883*/              OPC_EmitInteger, MVT::i32, 0, 
/*5886*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5898*/              OPC_EmitInteger, MVT::i32, 0, 
/*5901*/              OPC_EmitInteger, MVT::i32, 0, 
/*5904*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5916*/              OPC_EmitInteger, MVT::i32, 0, 
/*5919*/              OPC_EmitInteger, MVT::i32, 0, 
/*5922*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5934*/              OPC_EmitInteger, MVT::i32, 1, 
/*5937*/              OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*5941*/              OPC_EmitInteger, MVT::i32, 0, 
/*5944*/              OPC_EmitInteger, MVT::i32, 0, 
/*5947*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 2, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z)), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*5972*/            /*Scope*/ 119, /*->6092*/
/*5973*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 2, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*6000*/              OPC_EmitInteger, MVT::i32, 0, 
/*6003*/              OPC_EmitInteger, MVT::i32, 0, 
/*6006*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6018*/              OPC_EmitInteger, MVT::i32, 0, 
/*6021*/              OPC_EmitInteger, MVT::i32, 0, 
/*6024*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6036*/              OPC_EmitInteger, MVT::i32, 0, 
/*6039*/              OPC_EmitInteger, MVT::i32, 0, 
/*6042*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6054*/              OPC_EmitInteger, MVT::i32, 1, 
/*6057*/              OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*6061*/              OPC_EmitInteger, MVT::i32, 0, 
/*6064*/              OPC_EmitInteger, MVT::i32, 0, 
/*6067*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x)), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*6092*/            0, /*End of Scope*/
/*6093*/          /*Scope*/ 83|128,1/*211*/, /*->6306*/
/*6095*/            OPC_CheckSame, 1,
/*6097*/            OPC_MoveParent,
/*6098*/            OPC_MoveChild, 1,
/*6100*/            OPC_CheckSame, 2,
/*6102*/            OPC_MoveParent,
/*6103*/            OPC_MoveParent,
/*6104*/            OPC_CheckType, MVT::i32,
/*6106*/            OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*6108*/            OPC_EmitInteger, MVT::i32, 0, 
/*6111*/            OPC_EmitInteger, MVT::i32, 0, 
/*6114*/            OPC_EmitInteger, MVT::i32, 0, 
/*6117*/            OPC_EmitInteger, MVT::i32, 0, 
/*6120*/            OPC_EmitInteger, MVT::i32, 1, 
/*6123*/            OPC_EmitInteger, MVT::i32, 0, 
/*6126*/            OPC_EmitInteger, MVT::i32, 0, 
/*6129*/            OPC_EmitInteger, MVT::i32, 0, 
/*6132*/            OPC_EmitInteger, MVT::i32, 0, 
/*6135*/            OPC_EmitInteger, MVT::i32, 0, 
/*6138*/            OPC_EmitInteger, MVT::i32, 0, 
/*6141*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6153*/            OPC_EmitInteger, MVT::i32, 0, 
/*6156*/            OPC_EmitInteger, MVT::i32, 0, 
/*6159*/            OPC_EmitInteger, MVT::i32, 0, 
/*6162*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6174*/            OPC_EmitInteger, MVT::i32, 1, 
/*6177*/            OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*6181*/            OPC_EmitInteger, MVT::i32, 0, 
/*6184*/            OPC_EmitInteger, MVT::i32, 0, 
/*6187*/            OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 2, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*6214*/            OPC_EmitInteger, MVT::i32, 0, 
/*6217*/            OPC_EmitInteger, MVT::i32, 0, 
/*6220*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6232*/            OPC_EmitInteger, MVT::i32, 0, 
/*6235*/            OPC_EmitInteger, MVT::i32, 0, 
/*6238*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6250*/            OPC_EmitInteger, MVT::i32, 0, 
/*6253*/            OPC_EmitInteger, MVT::i32, 0, 
/*6256*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6268*/            OPC_EmitInteger, MVT::i32, 1, 
/*6271*/            OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*6275*/            OPC_EmitInteger, MVT::i32, 0, 
/*6278*/            OPC_EmitInteger, MVT::i32, 0, 
/*6281*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                    // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x)), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                    // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*6306*/          0, /*End of Scope*/
/*6307*/        0, /*End of Scope*/
/*6308*/      /*Scope*/ 13|128,6/*781*/, /*->7091*/
/*6310*/        OPC_MoveChild, 0,
/*6312*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*6315*/        OPC_RecordChild0, // #0 = $x
/*6316*/        OPC_RecordChild1, // #1 = $z
/*6317*/        OPC_MoveParent,
/*6318*/        OPC_RecordChild1, // #2 = $y
/*6319*/        OPC_MoveParent,
/*6320*/        OPC_MoveChild, 1,
/*6322*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*6325*/        OPC_MoveChild, 0,
/*6327*/        OPC_Scope, 83|128,1/*211*/, /*->6541*/ // 3 children in Scope
/*6330*/          OPC_CheckSame, 0,
/*6332*/          OPC_MoveParent,
/*6333*/          OPC_MoveChild, 1,
/*6335*/          OPC_CheckSame, 1,
/*6337*/          OPC_MoveParent,
/*6338*/          OPC_MoveParent,
/*6339*/          OPC_CheckType, MVT::i32,
/*6341*/          OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*6343*/          OPC_EmitInteger, MVT::i32, 0, 
/*6346*/          OPC_EmitInteger, MVT::i32, 0, 
/*6349*/          OPC_EmitInteger, MVT::i32, 0, 
/*6352*/          OPC_EmitInteger, MVT::i32, 0, 
/*6355*/          OPC_EmitInteger, MVT::i32, 1, 
/*6358*/          OPC_EmitInteger, MVT::i32, 0, 
/*6361*/          OPC_EmitInteger, MVT::i32, 0, 
/*6364*/          OPC_EmitInteger, MVT::i32, 0, 
/*6367*/          OPC_EmitInteger, MVT::i32, 0, 
/*6370*/          OPC_EmitInteger, MVT::i32, 0, 
/*6373*/          OPC_EmitInteger, MVT::i32, 0, 
/*6376*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6388*/          OPC_EmitInteger, MVT::i32, 0, 
/*6391*/          OPC_EmitInteger, MVT::i32, 0, 
/*6394*/          OPC_EmitInteger, MVT::i32, 0, 
/*6397*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6409*/          OPC_EmitInteger, MVT::i32, 1, 
/*6412*/          OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*6416*/          OPC_EmitInteger, MVT::i32, 0, 
/*6419*/          OPC_EmitInteger, MVT::i32, 0, 
/*6422*/          OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*6449*/          OPC_EmitInteger, MVT::i32, 0, 
/*6452*/          OPC_EmitInteger, MVT::i32, 0, 
/*6455*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6467*/          OPC_EmitInteger, MVT::i32, 0, 
/*6470*/          OPC_EmitInteger, MVT::i32, 0, 
/*6473*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6485*/          OPC_EmitInteger, MVT::i32, 0, 
/*6488*/          OPC_EmitInteger, MVT::i32, 0, 
/*6491*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6503*/          OPC_EmitInteger, MVT::i32, 1, 
/*6506*/          OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*6510*/          OPC_EmitInteger, MVT::i32, 0, 
/*6513*/          OPC_EmitInteger, MVT::i32, 0, 
/*6516*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                  // Src: (or:i32 (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                  // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*6541*/        /*Scope*/ 78|128,2/*334*/, /*->6877*/
/*6543*/          OPC_CheckSame, 1,
/*6545*/          OPC_MoveParent,
/*6546*/          OPC_MoveChild, 1,
/*6548*/          OPC_CheckSame, 0,
/*6550*/          OPC_MoveParent,
/*6551*/          OPC_MoveParent,
/*6552*/          OPC_CheckType, MVT::i32,
/*6554*/          OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*6556*/          OPC_EmitInteger, MVT::i32, 0, 
/*6559*/          OPC_EmitInteger, MVT::i32, 0, 
/*6562*/          OPC_EmitInteger, MVT::i32, 0, 
/*6565*/          OPC_EmitInteger, MVT::i32, 0, 
/*6568*/          OPC_EmitInteger, MVT::i32, 1, 
/*6571*/          OPC_EmitInteger, MVT::i32, 0, 
/*6574*/          OPC_EmitInteger, MVT::i32, 0, 
/*6577*/          OPC_EmitInteger, MVT::i32, 0, 
/*6580*/          OPC_EmitInteger, MVT::i32, 0, 
/*6583*/          OPC_EmitInteger, MVT::i32, 0, 
/*6586*/          OPC_EmitInteger, MVT::i32, 0, 
/*6589*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6601*/          OPC_EmitInteger, MVT::i32, 0, 
/*6604*/          OPC_EmitInteger, MVT::i32, 0, 
/*6607*/          OPC_EmitInteger, MVT::i32, 0, 
/*6610*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6622*/          OPC_EmitInteger, MVT::i32, 1, 
/*6625*/          OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*6629*/          OPC_EmitInteger, MVT::i32, 0, 
/*6632*/          OPC_EmitInteger, MVT::i32, 0, 
/*6635*/          OPC_Scope, 119, /*->6756*/ // 2 children in Scope
/*6637*/            OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*6664*/            OPC_EmitInteger, MVT::i32, 0, 
/*6667*/            OPC_EmitInteger, MVT::i32, 0, 
/*6670*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6682*/            OPC_EmitInteger, MVT::i32, 0, 
/*6685*/            OPC_EmitInteger, MVT::i32, 0, 
/*6688*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6700*/            OPC_EmitInteger, MVT::i32, 0, 
/*6703*/            OPC_EmitInteger, MVT::i32, 0, 
/*6706*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6718*/            OPC_EmitInteger, MVT::i32, 1, 
/*6721*/            OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*6725*/            OPC_EmitInteger, MVT::i32, 0, 
/*6728*/            OPC_EmitInteger, MVT::i32, 0, 
/*6731*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                    // Src: (or:i32 (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                    // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*6756*/          /*Scope*/ 119, /*->6876*/
/*6757*/            OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*6784*/            OPC_EmitInteger, MVT::i32, 0, 
/*6787*/            OPC_EmitInteger, MVT::i32, 0, 
/*6790*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6802*/            OPC_EmitInteger, MVT::i32, 0, 
/*6805*/            OPC_EmitInteger, MVT::i32, 0, 
/*6808*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6820*/            OPC_EmitInteger, MVT::i32, 0, 
/*6823*/            OPC_EmitInteger, MVT::i32, 0, 
/*6826*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6838*/            OPC_EmitInteger, MVT::i32, 1, 
/*6841*/            OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*6845*/            OPC_EmitInteger, MVT::i32, 0, 
/*6848*/            OPC_EmitInteger, MVT::i32, 0, 
/*6851*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                    // Src: (or:i32 (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                    // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*6876*/          0, /*End of Scope*/
/*6877*/        /*Scope*/ 83|128,1/*211*/, /*->7090*/
/*6879*/          OPC_CheckSame, 0,
/*6881*/          OPC_MoveParent,
/*6882*/          OPC_MoveChild, 1,
/*6884*/          OPC_CheckSame, 1,
/*6886*/          OPC_MoveParent,
/*6887*/          OPC_MoveParent,
/*6888*/          OPC_CheckType, MVT::i32,
/*6890*/          OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*6892*/          OPC_EmitInteger, MVT::i32, 0, 
/*6895*/          OPC_EmitInteger, MVT::i32, 0, 
/*6898*/          OPC_EmitInteger, MVT::i32, 0, 
/*6901*/          OPC_EmitInteger, MVT::i32, 0, 
/*6904*/          OPC_EmitInteger, MVT::i32, 1, 
/*6907*/          OPC_EmitInteger, MVT::i32, 0, 
/*6910*/          OPC_EmitInteger, MVT::i32, 0, 
/*6913*/          OPC_EmitInteger, MVT::i32, 0, 
/*6916*/          OPC_EmitInteger, MVT::i32, 0, 
/*6919*/          OPC_EmitInteger, MVT::i32, 0, 
/*6922*/          OPC_EmitInteger, MVT::i32, 0, 
/*6925*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6937*/          OPC_EmitInteger, MVT::i32, 0, 
/*6940*/          OPC_EmitInteger, MVT::i32, 0, 
/*6943*/          OPC_EmitInteger, MVT::i32, 0, 
/*6946*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6958*/          OPC_EmitInteger, MVT::i32, 1, 
/*6961*/          OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*6965*/          OPC_EmitInteger, MVT::i32, 0, 
/*6968*/          OPC_EmitInteger, MVT::i32, 0, 
/*6971*/          OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*6998*/          OPC_EmitInteger, MVT::i32, 0, 
/*7001*/          OPC_EmitInteger, MVT::i32, 0, 
/*7004*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7016*/          OPC_EmitInteger, MVT::i32, 0, 
/*7019*/          OPC_EmitInteger, MVT::i32, 0, 
/*7022*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7034*/          OPC_EmitInteger, MVT::i32, 0, 
/*7037*/          OPC_EmitInteger, MVT::i32, 0, 
/*7040*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7052*/          OPC_EmitInteger, MVT::i32, 1, 
/*7055*/          OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*7059*/          OPC_EmitInteger, MVT::i32, 0, 
/*7062*/          OPC_EmitInteger, MVT::i32, 0, 
/*7065*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                  // Src: (or:i32 (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                  // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*7090*/        0, /*End of Scope*/
/*7091*/      0, /*End of Scope*/
/*7092*/    /*Scope*/ 8|128,1/*136*/, /*->7230*/
/*7094*/      OPC_RecordChild0, // #0 = $src0
/*7095*/      OPC_RecordChild1, // #1 = $src1
/*7096*/      OPC_SwitchType /*2 cases */, 117,  MVT::i32,// ->7216
/*7099*/        OPC_Scope, 102, /*->7203*/ // 2 children in Scope
/*7101*/          OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*7103*/          OPC_EmitInteger, MVT::i32, 0, 
/*7106*/          OPC_EmitInteger, MVT::i32, 0, 
/*7109*/          OPC_EmitInteger, MVT::i32, 1, 
/*7112*/          OPC_EmitInteger, MVT::i32, 0, 
/*7115*/          OPC_EmitInteger, MVT::i32, 0, 
/*7118*/          OPC_EmitInteger, MVT::i32, 0, 
/*7121*/          OPC_EmitInteger, MVT::i32, 0, 
/*7124*/          OPC_EmitInteger, MVT::i32, 0, 
/*7127*/          OPC_EmitInteger, MVT::i32, 0, 
/*7130*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7142*/          OPC_EmitInteger, MVT::i32, 0, 
/*7145*/          OPC_EmitInteger, MVT::i32, 0, 
/*7148*/          OPC_EmitInteger, MVT::i32, 0, 
/*7151*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7163*/          OPC_EmitInteger, MVT::i32, 1, 
/*7166*/          OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*7170*/          OPC_EmitInteger, MVT::i32, 0, 
/*7173*/          OPC_EmitInteger, MVT::i32, 0, 
/*7176*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::OR_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (or:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                  // Dst: (OR_INT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*7203*/        /*Scope*/ 11, /*->7215*/
/*7204*/          OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*7206*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_OR_B32_e32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (or:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
                  // Dst: (V_OR_B32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*7215*/        0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i1,// ->7229
/*7218*/        OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*7220*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_OR_B64), 0,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                // Src: (or:i1 i1:i1:$src0, i1:i1:$src1) - Complexity = 3
                // Dst: (S_OR_B64:i1 ?:i1:$src0, ?:i1:$src1)
              0, // EndSwitchType
/*7230*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 29,  TARGET_VAL(AMDGPUISD::REGISTER_LOAD),// ->7263
/*7234*/    OPC_RecordNode,   // #0 = 'AMDGPUregister_load' chained node
/*7235*/    OPC_RecordChild1, // #1 = $addr
/*7236*/    OPC_RecordChild2, // #2 = $chan
/*7237*/    OPC_MoveChild, 2,
/*7239*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*7242*/    OPC_CheckType, MVT::i32,
/*7244*/    OPC_MoveParent,
/*7245*/    OPC_CheckType, MVT::i32,
/*7247*/    OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*7249*/    OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRIndirect:$addr #3 #4
/*7252*/    OPC_EmitMergeInputChains1_0,
/*7253*/    OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_RegisterLoad), 0|OPFL_Chain,
                1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
            // Src: (AMDGPUregister_load:i32 ADDRIndirect:iPTR:$addr, (timm:i32):$chan) - Complexity = 15
            // Dst: (R600_RegisterLoad:i32 ADDRIndirect:iPTR:$addr, (timm:i32):$chan)
          /*SwitchOpcode*/ 30,  TARGET_VAL(AMDGPUISD::REGISTER_STORE),// ->7296
/*7266*/    OPC_RecordNode,   // #0 = 'AMDGPUregister_store' chained node
/*7267*/    OPC_RecordChild1, // #1 = $val
/*7268*/    OPC_CheckChild1Type, MVT::i32,
/*7270*/    OPC_RecordChild2, // #2 = $addr
/*7271*/    OPC_RecordChild3, // #3 = $chan
/*7272*/    OPC_MoveChild, 3,
/*7274*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*7277*/    OPC_CheckType, MVT::i32,
/*7279*/    OPC_MoveParent,
/*7280*/    OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*7282*/    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRIndirect:$addr #4 #5
/*7285*/    OPC_EmitMergeInputChains1_0,
/*7286*/    OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_RegisterStore), 0|OPFL_Chain,
                0/*#VTs*/, 4/*#Ops*/, 1, 4, 5, 3, 
            // Src: (AMDGPUregister_store i32:i32:$val, ADDRIndirect:iPTR:$addr, (timm:i32):$chan) - Complexity = 15
            // Dst: (R600_RegisterStore i32:i32:$val, ADDRIndirect:iPTR:$addr, (timm:i32):$chan)
          /*SwitchOpcode*/ 28|128,2/*284*/,  TARGET_VAL(ISD::AND),// ->7584
/*7300*/    OPC_Scope, 1|128,1/*129*/, /*->7432*/ // 2 children in Scope
/*7303*/      OPC_MoveChild, 0,
/*7305*/      OPC_CheckOpcode, TARGET_VAL(ISD::SRL),
/*7308*/      OPC_RecordChild0, // #0 = $x
/*7309*/      OPC_RecordChild1, // #1 = $y
/*7310*/      OPC_MoveChild, 1,
/*7312*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7315*/      OPC_CheckPredicate, 0, // Predicate_legalshift32
/*7317*/      OPC_CheckType, MVT::i32,
/*7319*/      OPC_MoveParent,
/*7320*/      OPC_MoveParent,
/*7321*/      OPC_RecordChild1, // #2 = $z
/*7322*/      OPC_MoveChild, 1,
/*7324*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7327*/      OPC_CheckPredicate, 1, // Predicate_bfemask
/*7329*/      OPC_MoveParent,
/*7330*/      OPC_CheckType, MVT::i32,
/*7332*/      OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*7334*/      OPC_EmitInteger, MVT::i32, 0, 
/*7337*/      OPC_EmitInteger, MVT::i32, 0, 
/*7340*/      OPC_EmitInteger, MVT::i32, 0, 
/*7343*/      OPC_EmitInteger, MVT::i32, 0, 
/*7346*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7358*/      OPC_EmitInteger, MVT::i32, 0, 
/*7361*/      OPC_EmitInteger, MVT::i32, 0, 
/*7364*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7376*/      OPC_EmitInteger, MVT::i32, 0, 
/*7379*/      OPC_EmitInteger, MVT::i32, 0, 
/*7382*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7394*/      OPC_EmitInteger, MVT::i32, 1, 
/*7397*/      OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*7401*/      OPC_EmitInteger, MVT::i32, 0, 
/*7404*/      OPC_EmitInteger, MVT::i32, 0, 
/*7407*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFE_UINT_eg), 0,
                  1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (and:i32 (srl:i32 i32:i32:$x, (imm:i32)<<P:Predicate_legalshift32>>:$y), (imm:i32)<<P:Predicate_bfemask>><<X:anonymous.val.347>>:$z) - Complexity = 14
              // Dst: (BFE_UINT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*7432*/    /*Scope*/ 21|128,1/*149*/, /*->7583*/
/*7434*/      OPC_RecordChild0, // #0 = $src0
/*7435*/      OPC_RecordChild1, // #1 = $src1
/*7436*/      OPC_SwitchType /*3 cases */, 117,  MVT::i32,// ->7556
/*7439*/        OPC_Scope, 102, /*->7543*/ // 2 children in Scope
/*7441*/          OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*7443*/          OPC_EmitInteger, MVT::i32, 0, 
/*7446*/          OPC_EmitInteger, MVT::i32, 0, 
/*7449*/          OPC_EmitInteger, MVT::i32, 1, 
/*7452*/          OPC_EmitInteger, MVT::i32, 0, 
/*7455*/          OPC_EmitInteger, MVT::i32, 0, 
/*7458*/          OPC_EmitInteger, MVT::i32, 0, 
/*7461*/          OPC_EmitInteger, MVT::i32, 0, 
/*7464*/          OPC_EmitInteger, MVT::i32, 0, 
/*7467*/          OPC_EmitInteger, MVT::i32, 0, 
/*7470*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7482*/          OPC_EmitInteger, MVT::i32, 0, 
/*7485*/          OPC_EmitInteger, MVT::i32, 0, 
/*7488*/          OPC_EmitInteger, MVT::i32, 0, 
/*7491*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7503*/          OPC_EmitInteger, MVT::i32, 1, 
/*7506*/          OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*7510*/          OPC_EmitInteger, MVT::i32, 0, 
/*7513*/          OPC_EmitInteger, MVT::i32, 0, 
/*7516*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::AND_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (and:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                  // Dst: (AND_INT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*7543*/        /*Scope*/ 11, /*->7555*/
/*7544*/          OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*7546*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_AND_B32_e32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
                  // Dst: (V_AND_B32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*7555*/        0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->7569
/*7558*/        OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*7560*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_AND_B64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 i64:i64:$src0, i64:i64:$src1) - Complexity = 3
                // Dst: (S_AND_B64:i64 i64:i64:$src0, i64:i64:$src1)
              /*SwitchType*/ 11,  MVT::i1,// ->7582
/*7571*/        OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*7573*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_AND_B64), 0,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                // Src: (and:i1 i1:i1:$src0, i1:i1:$src1) - Complexity = 3
                // Dst: (S_AND_B64:i1 ?:i1:$src0, ?:i1:$src1)
              0, // EndSwitchType
/*7583*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 1|128,34/*4353*/,  TARGET_VAL(ISD::SELECT_CC),// ->11941
/*7588*/    OPC_RecordChild0, // #0 = $src0
/*7589*/    OPC_Scope, 19|128,19/*2451*/, /*->10043*/ // 2 children in Scope
/*7592*/      OPC_CheckChild0Type, MVT::f32,
/*7594*/      OPC_Scope, 126|128,13/*1790*/, /*->9387*/ // 2 children in Scope
/*7597*/        OPC_RecordChild1, // #1 = $src1
/*7598*/        OPC_MoveChild, 2,
/*7600*/        OPC_Scope, 124|128,6/*892*/, /*->8495*/ // 2 children in Scope
/*7603*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7614*/          OPC_MoveParent,
/*7615*/          OPC_MoveChild, 3,
/*7617*/          OPC_CheckInteger, 0, 
/*7619*/          OPC_MoveParent,
/*7620*/          OPC_MoveChild, 4,
/*7622*/          OPC_Scope, 13|128,5/*653*/, /*->8278*/ // 3 children in Scope
/*7625*/            OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*7628*/            OPC_Scope, 107, /*->7737*/ // 6 children in Scope
/*7630*/              OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*7632*/              OPC_MoveParent,
/*7633*/              OPC_CheckType, MVT::i32,
/*7635*/              OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*7637*/              OPC_EmitInteger, MVT::i32, 0, 
/*7640*/              OPC_EmitInteger, MVT::i32, 0, 
/*7643*/              OPC_EmitInteger, MVT::i32, 1, 
/*7646*/              OPC_EmitInteger, MVT::i32, 0, 
/*7649*/              OPC_EmitInteger, MVT::i32, 0, 
/*7652*/              OPC_EmitInteger, MVT::i32, 0, 
/*7655*/              OPC_EmitInteger, MVT::i32, 0, 
/*7658*/              OPC_EmitInteger, MVT::i32, 0, 
/*7661*/              OPC_EmitInteger, MVT::i32, 0, 
/*7664*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7676*/              OPC_EmitInteger, MVT::i32, 0, 
/*7679*/              OPC_EmitInteger, MVT::i32, 0, 
/*7682*/              OPC_EmitInteger, MVT::i32, 0, 
/*7685*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7697*/              OPC_EmitInteger, MVT::i32, 1, 
/*7700*/              OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*7704*/              OPC_EmitInteger, MVT::i32, 0, 
/*7707*/              OPC_EmitInteger, MVT::i32, 0, 
/*7710*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETE_DX10), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 13
                      // Dst: (SETE_DX10:i32 f32:f32:$src0, f32:f32:$src1)
/*7737*/            /*Scope*/ 107, /*->7845*/
/*7738*/              OPC_CheckPredicate, 3, // Predicate_COND_GT
/*7740*/              OPC_MoveParent,
/*7741*/              OPC_CheckType, MVT::i32,
/*7743*/              OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*7745*/              OPC_EmitInteger, MVT::i32, 0, 
/*7748*/              OPC_EmitInteger, MVT::i32, 0, 
/*7751*/              OPC_EmitInteger, MVT::i32, 1, 
/*7754*/              OPC_EmitInteger, MVT::i32, 0, 
/*7757*/              OPC_EmitInteger, MVT::i32, 0, 
/*7760*/              OPC_EmitInteger, MVT::i32, 0, 
/*7763*/              OPC_EmitInteger, MVT::i32, 0, 
/*7766*/              OPC_EmitInteger, MVT::i32, 0, 
/*7769*/              OPC_EmitInteger, MVT::i32, 0, 
/*7772*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7784*/              OPC_EmitInteger, MVT::i32, 0, 
/*7787*/              OPC_EmitInteger, MVT::i32, 0, 
/*7790*/              OPC_EmitInteger, MVT::i32, 0, 
/*7793*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7805*/              OPC_EmitInteger, MVT::i32, 1, 
/*7808*/              OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*7812*/              OPC_EmitInteger, MVT::i32, 0, 
/*7815*/              OPC_EmitInteger, MVT::i32, 0, 
/*7818*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGT_DX10), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 13
                      // Dst: (SETGT_DX10:i32 f32:f32:$src0, f32:f32:$src1)
/*7845*/            /*Scope*/ 107, /*->7953*/
/*7846*/              OPC_CheckPredicate, 4, // Predicate_COND_GE
/*7848*/              OPC_MoveParent,
/*7849*/              OPC_CheckType, MVT::i32,
/*7851*/              OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*7853*/              OPC_EmitInteger, MVT::i32, 0, 
/*7856*/              OPC_EmitInteger, MVT::i32, 0, 
/*7859*/              OPC_EmitInteger, MVT::i32, 1, 
/*7862*/              OPC_EmitInteger, MVT::i32, 0, 
/*7865*/              OPC_EmitInteger, MVT::i32, 0, 
/*7868*/              OPC_EmitInteger, MVT::i32, 0, 
/*7871*/              OPC_EmitInteger, MVT::i32, 0, 
/*7874*/              OPC_EmitInteger, MVT::i32, 0, 
/*7877*/              OPC_EmitInteger, MVT::i32, 0, 
/*7880*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7892*/              OPC_EmitInteger, MVT::i32, 0, 
/*7895*/              OPC_EmitInteger, MVT::i32, 0, 
/*7898*/              OPC_EmitInteger, MVT::i32, 0, 
/*7901*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7913*/              OPC_EmitInteger, MVT::i32, 1, 
/*7916*/              OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*7920*/              OPC_EmitInteger, MVT::i32, 0, 
/*7923*/              OPC_EmitInteger, MVT::i32, 0, 
/*7926*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGE_DX10), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 13
                      // Dst: (SETGE_DX10:i32 f32:f32:$src0, f32:f32:$src1)
/*7953*/            /*Scope*/ 107, /*->8061*/
/*7954*/              OPC_CheckPredicate, 5, // Predicate_COND_NE
/*7956*/              OPC_MoveParent,
/*7957*/              OPC_CheckType, MVT::i32,
/*7959*/              OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*7961*/              OPC_EmitInteger, MVT::i32, 0, 
/*7964*/              OPC_EmitInteger, MVT::i32, 0, 
/*7967*/              OPC_EmitInteger, MVT::i32, 1, 
/*7970*/              OPC_EmitInteger, MVT::i32, 0, 
/*7973*/              OPC_EmitInteger, MVT::i32, 0, 
/*7976*/              OPC_EmitInteger, MVT::i32, 0, 
/*7979*/              OPC_EmitInteger, MVT::i32, 0, 
/*7982*/              OPC_EmitInteger, MVT::i32, 0, 
/*7985*/              OPC_EmitInteger, MVT::i32, 0, 
/*7988*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8000*/              OPC_EmitInteger, MVT::i32, 0, 
/*8003*/              OPC_EmitInteger, MVT::i32, 0, 
/*8006*/              OPC_EmitInteger, MVT::i32, 0, 
/*8009*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8021*/              OPC_EmitInteger, MVT::i32, 1, 
/*8024*/              OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*8028*/              OPC_EmitInteger, MVT::i32, 0, 
/*8031*/              OPC_EmitInteger, MVT::i32, 0, 
/*8034*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETNE_DX10), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, (cond:Other)<<P:Predicate_COND_NE>>) - Complexity = 13
                      // Dst: (SETNE_DX10:i32 f32:f32:$src0, f32:f32:$src1)
/*8061*/            /*Scope*/ 107, /*->8169*/
/*8062*/              OPC_CheckPredicate, 6, // Predicate_COND_LT
/*8064*/              OPC_MoveParent,
/*8065*/              OPC_CheckType, MVT::i32,
/*8067*/              OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*8069*/              OPC_EmitInteger, MVT::i32, 0, 
/*8072*/              OPC_EmitInteger, MVT::i32, 0, 
/*8075*/              OPC_EmitInteger, MVT::i32, 1, 
/*8078*/              OPC_EmitInteger, MVT::i32, 0, 
/*8081*/              OPC_EmitInteger, MVT::i32, 0, 
/*8084*/              OPC_EmitInteger, MVT::i32, 0, 
/*8087*/              OPC_EmitInteger, MVT::i32, 0, 
/*8090*/              OPC_EmitInteger, MVT::i32, 0, 
/*8093*/              OPC_EmitInteger, MVT::i32, 0, 
/*8096*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8108*/              OPC_EmitInteger, MVT::i32, 0, 
/*8111*/              OPC_EmitInteger, MVT::i32, 0, 
/*8114*/              OPC_EmitInteger, MVT::i32, 0, 
/*8117*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8129*/              OPC_EmitInteger, MVT::i32, 1, 
/*8132*/              OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*8136*/              OPC_EmitInteger, MVT::i32, 0, 
/*8139*/              OPC_EmitInteger, MVT::i32, 0, 
/*8142*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGT_DX10), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, (cond:Other)<<P:Predicate_COND_LT>>) - Complexity = 13
                      // Dst: (SETGT_DX10:i32 ?:f32:$src1, ?:f32:$src0)
/*8169*/            /*Scope*/ 107, /*->8277*/
/*8170*/              OPC_CheckPredicate, 7, // Predicate_COND_LE
/*8172*/              OPC_MoveParent,
/*8173*/              OPC_CheckType, MVT::i32,
/*8175*/              OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*8177*/              OPC_EmitInteger, MVT::i32, 0, 
/*8180*/              OPC_EmitInteger, MVT::i32, 0, 
/*8183*/              OPC_EmitInteger, MVT::i32, 1, 
/*8186*/              OPC_EmitInteger, MVT::i32, 0, 
/*8189*/              OPC_EmitInteger, MVT::i32, 0, 
/*8192*/              OPC_EmitInteger, MVT::i32, 0, 
/*8195*/              OPC_EmitInteger, MVT::i32, 0, 
/*8198*/              OPC_EmitInteger, MVT::i32, 0, 
/*8201*/              OPC_EmitInteger, MVT::i32, 0, 
/*8204*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8216*/              OPC_EmitInteger, MVT::i32, 0, 
/*8219*/              OPC_EmitInteger, MVT::i32, 0, 
/*8222*/              OPC_EmitInteger, MVT::i32, 0, 
/*8225*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8237*/              OPC_EmitInteger, MVT::i32, 1, 
/*8240*/              OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*8244*/              OPC_EmitInteger, MVT::i32, 0, 
/*8247*/              OPC_EmitInteger, MVT::i32, 0, 
/*8250*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGE_DX10), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, (cond:Other)<<P:Predicate_COND_LE>>) - Complexity = 13
                      // Dst: (SETGE_DX10:i32 ?:f32:$src1, ?:f32:$src0)
/*8277*/            0, /*End of Scope*/
/*8278*/          /*Scope*/ 107, /*->8386*/
/*8279*/            OPC_CheckCondCode, ISD::SETO,
/*8281*/            OPC_MoveParent,
/*8282*/            OPC_CheckType, MVT::i32,
/*8284*/            OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*8286*/            OPC_EmitInteger, MVT::i32, 0, 
/*8289*/            OPC_EmitInteger, MVT::i32, 0, 
/*8292*/            OPC_EmitInteger, MVT::i32, 1, 
/*8295*/            OPC_EmitInteger, MVT::i32, 0, 
/*8298*/            OPC_EmitInteger, MVT::i32, 0, 
/*8301*/            OPC_EmitInteger, MVT::i32, 0, 
/*8304*/            OPC_EmitInteger, MVT::i32, 0, 
/*8307*/            OPC_EmitInteger, MVT::i32, 0, 
/*8310*/            OPC_EmitInteger, MVT::i32, 0, 
/*8313*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8325*/            OPC_EmitInteger, MVT::i32, 0, 
/*8328*/            OPC_EmitInteger, MVT::i32, 0, 
/*8331*/            OPC_EmitInteger, MVT::i32, 0, 
/*8334*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8346*/            OPC_EmitInteger, MVT::i32, 1, 
/*8349*/            OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*8353*/            OPC_EmitInteger, MVT::i32, 0, 
/*8356*/            OPC_EmitInteger, MVT::i32, 0, 
/*8359*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETE_DX10), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, SETO:Other) - Complexity = 13
                    // Dst: (SETE_DX10:i32 ?:f32:$src0, ?:f32:$src1)
/*8386*/          /*Scope*/ 107, /*->8494*/
/*8387*/            OPC_CheckCondCode, ISD::SETUO,
/*8389*/            OPC_MoveParent,
/*8390*/            OPC_CheckType, MVT::i32,
/*8392*/            OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*8394*/            OPC_EmitInteger, MVT::i32, 0, 
/*8397*/            OPC_EmitInteger, MVT::i32, 0, 
/*8400*/            OPC_EmitInteger, MVT::i32, 1, 
/*8403*/            OPC_EmitInteger, MVT::i32, 0, 
/*8406*/            OPC_EmitInteger, MVT::i32, 0, 
/*8409*/            OPC_EmitInteger, MVT::i32, 0, 
/*8412*/            OPC_EmitInteger, MVT::i32, 0, 
/*8415*/            OPC_EmitInteger, MVT::i32, 0, 
/*8418*/            OPC_EmitInteger, MVT::i32, 0, 
/*8421*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8433*/            OPC_EmitInteger, MVT::i32, 0, 
/*8436*/            OPC_EmitInteger, MVT::i32, 0, 
/*8439*/            OPC_EmitInteger, MVT::i32, 0, 
/*8442*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8454*/            OPC_EmitInteger, MVT::i32, 1, 
/*8457*/            OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*8461*/            OPC_EmitInteger, MVT::i32, 0, 
/*8464*/            OPC_EmitInteger, MVT::i32, 0, 
/*8467*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETNE_DX10), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, SETUO:Other) - Complexity = 13
                    // Dst: (SETNE_DX10:i32 ?:f32:$src0, ?:f32:$src1)
/*8494*/          0, /*End of Scope*/
/*8495*/        /*Scope*/ 121|128,6/*889*/, /*->9386*/
/*8497*/          OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*8500*/          OPC_CheckPredicate, 8, // Predicate_FP_ONE
/*8502*/          OPC_MoveParent,
/*8503*/          OPC_MoveChild, 3,
/*8505*/          OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*8508*/          OPC_CheckPredicate, 9, // Predicate_FP_ZERO
/*8510*/          OPC_MoveParent,
/*8511*/          OPC_MoveChild, 4,
/*8513*/          OPC_Scope, 13|128,5/*653*/, /*->9169*/ // 3 children in Scope
/*8516*/            OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*8519*/            OPC_Scope, 107, /*->8628*/ // 6 children in Scope
/*8521*/              OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*8523*/              OPC_MoveParent,
/*8524*/              OPC_CheckType, MVT::f32,
/*8526*/              OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*8528*/              OPC_EmitInteger, MVT::i32, 0, 
/*8531*/              OPC_EmitInteger, MVT::i32, 0, 
/*8534*/              OPC_EmitInteger, MVT::i32, 1, 
/*8537*/              OPC_EmitInteger, MVT::i32, 0, 
/*8540*/              OPC_EmitInteger, MVT::i32, 0, 
/*8543*/              OPC_EmitInteger, MVT::i32, 0, 
/*8546*/              OPC_EmitInteger, MVT::i32, 0, 
/*8549*/              OPC_EmitInteger, MVT::i32, 0, 
/*8552*/              OPC_EmitInteger, MVT::i32, 0, 
/*8555*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8567*/              OPC_EmitInteger, MVT::i32, 0, 
/*8570*/              OPC_EmitInteger, MVT::i32, 0, 
/*8573*/              OPC_EmitInteger, MVT::i32, 0, 
/*8576*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8588*/              OPC_EmitInteger, MVT::i32, 1, 
/*8591*/              OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*8595*/              OPC_EmitInteger, MVT::i32, 0, 
/*8598*/              OPC_EmitInteger, MVT::i32, 0, 
/*8601*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETE), 0,
                          1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 11
                      // Dst: (SETE:f32 f32:f32:$src0, f32:f32:$src1)
/*8628*/            /*Scope*/ 107, /*->8736*/
/*8629*/              OPC_CheckPredicate, 3, // Predicate_COND_GT
/*8631*/              OPC_MoveParent,
/*8632*/              OPC_CheckType, MVT::f32,
/*8634*/              OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*8636*/              OPC_EmitInteger, MVT::i32, 0, 
/*8639*/              OPC_EmitInteger, MVT::i32, 0, 
/*8642*/              OPC_EmitInteger, MVT::i32, 1, 
/*8645*/              OPC_EmitInteger, MVT::i32, 0, 
/*8648*/              OPC_EmitInteger, MVT::i32, 0, 
/*8651*/              OPC_EmitInteger, MVT::i32, 0, 
/*8654*/              OPC_EmitInteger, MVT::i32, 0, 
/*8657*/              OPC_EmitInteger, MVT::i32, 0, 
/*8660*/              OPC_EmitInteger, MVT::i32, 0, 
/*8663*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8675*/              OPC_EmitInteger, MVT::i32, 0, 
/*8678*/              OPC_EmitInteger, MVT::i32, 0, 
/*8681*/              OPC_EmitInteger, MVT::i32, 0, 
/*8684*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8696*/              OPC_EmitInteger, MVT::i32, 1, 
/*8699*/              OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*8703*/              OPC_EmitInteger, MVT::i32, 0, 
/*8706*/              OPC_EmitInteger, MVT::i32, 0, 
/*8709*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SGT), 0,
                          1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 11
                      // Dst: (SGT:f32 f32:f32:$src0, f32:f32:$src1)
/*8736*/            /*Scope*/ 107, /*->8844*/
/*8737*/              OPC_CheckPredicate, 4, // Predicate_COND_GE
/*8739*/              OPC_MoveParent,
/*8740*/              OPC_CheckType, MVT::f32,
/*8742*/              OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*8744*/              OPC_EmitInteger, MVT::i32, 0, 
/*8747*/              OPC_EmitInteger, MVT::i32, 0, 
/*8750*/              OPC_EmitInteger, MVT::i32, 1, 
/*8753*/              OPC_EmitInteger, MVT::i32, 0, 
/*8756*/              OPC_EmitInteger, MVT::i32, 0, 
/*8759*/              OPC_EmitInteger, MVT::i32, 0, 
/*8762*/              OPC_EmitInteger, MVT::i32, 0, 
/*8765*/              OPC_EmitInteger, MVT::i32, 0, 
/*8768*/              OPC_EmitInteger, MVT::i32, 0, 
/*8771*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8783*/              OPC_EmitInteger, MVT::i32, 0, 
/*8786*/              OPC_EmitInteger, MVT::i32, 0, 
/*8789*/              OPC_EmitInteger, MVT::i32, 0, 
/*8792*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8804*/              OPC_EmitInteger, MVT::i32, 1, 
/*8807*/              OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*8811*/              OPC_EmitInteger, MVT::i32, 0, 
/*8814*/              OPC_EmitInteger, MVT::i32, 0, 
/*8817*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SGE), 0,
                          1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 11
                      // Dst: (SGE:f32 f32:f32:$src0, f32:f32:$src1)
/*8844*/            /*Scope*/ 107, /*->8952*/
/*8845*/              OPC_CheckPredicate, 5, // Predicate_COND_NE
/*8847*/              OPC_MoveParent,
/*8848*/              OPC_CheckType, MVT::f32,
/*8850*/              OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*8852*/              OPC_EmitInteger, MVT::i32, 0, 
/*8855*/              OPC_EmitInteger, MVT::i32, 0, 
/*8858*/              OPC_EmitInteger, MVT::i32, 1, 
/*8861*/              OPC_EmitInteger, MVT::i32, 0, 
/*8864*/              OPC_EmitInteger, MVT::i32, 0, 
/*8867*/              OPC_EmitInteger, MVT::i32, 0, 
/*8870*/              OPC_EmitInteger, MVT::i32, 0, 
/*8873*/              OPC_EmitInteger, MVT::i32, 0, 
/*8876*/              OPC_EmitInteger, MVT::i32, 0, 
/*8879*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8891*/              OPC_EmitInteger, MVT::i32, 0, 
/*8894*/              OPC_EmitInteger, MVT::i32, 0, 
/*8897*/              OPC_EmitInteger, MVT::i32, 0, 
/*8900*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8912*/              OPC_EmitInteger, MVT::i32, 1, 
/*8915*/              OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*8919*/              OPC_EmitInteger, MVT::i32, 0, 
/*8922*/              OPC_EmitInteger, MVT::i32, 0, 
/*8925*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SNE), 0,
                          1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (cond:Other)<<P:Predicate_COND_NE>>) - Complexity = 11
                      // Dst: (SNE:f32 f32:f32:$src0, f32:f32:$src1)
/*8952*/            /*Scope*/ 107, /*->9060*/
/*8953*/              OPC_CheckPredicate, 6, // Predicate_COND_LT
/*8955*/              OPC_MoveParent,
/*8956*/              OPC_CheckType, MVT::f32,
/*8958*/              OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*8960*/              OPC_EmitInteger, MVT::i32, 0, 
/*8963*/              OPC_EmitInteger, MVT::i32, 0, 
/*8966*/              OPC_EmitInteger, MVT::i32, 1, 
/*8969*/              OPC_EmitInteger, MVT::i32, 0, 
/*8972*/              OPC_EmitInteger, MVT::i32, 0, 
/*8975*/              OPC_EmitInteger, MVT::i32, 0, 
/*8978*/              OPC_EmitInteger, MVT::i32, 0, 
/*8981*/              OPC_EmitInteger, MVT::i32, 0, 
/*8984*/              OPC_EmitInteger, MVT::i32, 0, 
/*8987*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8999*/              OPC_EmitInteger, MVT::i32, 0, 
/*9002*/              OPC_EmitInteger, MVT::i32, 0, 
/*9005*/              OPC_EmitInteger, MVT::i32, 0, 
/*9008*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9020*/              OPC_EmitInteger, MVT::i32, 1, 
/*9023*/              OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*9027*/              OPC_EmitInteger, MVT::i32, 0, 
/*9030*/              OPC_EmitInteger, MVT::i32, 0, 
/*9033*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SGT), 0,
                          1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (cond:Other)<<P:Predicate_COND_LT>>) - Complexity = 11
                      // Dst: (SGT:f32 ?:f32:$src1, ?:f32:$src0)
/*9060*/            /*Scope*/ 107, /*->9168*/
/*9061*/              OPC_CheckPredicate, 7, // Predicate_COND_LE
/*9063*/              OPC_MoveParent,
/*9064*/              OPC_CheckType, MVT::f32,
/*9066*/              OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*9068*/              OPC_EmitInteger, MVT::i32, 0, 
/*9071*/              OPC_EmitInteger, MVT::i32, 0, 
/*9074*/              OPC_EmitInteger, MVT::i32, 1, 
/*9077*/              OPC_EmitInteger, MVT::i32, 0, 
/*9080*/              OPC_EmitInteger, MVT::i32, 0, 
/*9083*/              OPC_EmitInteger, MVT::i32, 0, 
/*9086*/              OPC_EmitInteger, MVT::i32, 0, 
/*9089*/              OPC_EmitInteger, MVT::i32, 0, 
/*9092*/              OPC_EmitInteger, MVT::i32, 0, 
/*9095*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9107*/              OPC_EmitInteger, MVT::i32, 0, 
/*9110*/              OPC_EmitInteger, MVT::i32, 0, 
/*9113*/              OPC_EmitInteger, MVT::i32, 0, 
/*9116*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9128*/              OPC_EmitInteger, MVT::i32, 1, 
/*9131*/              OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*9135*/              OPC_EmitInteger, MVT::i32, 0, 
/*9138*/              OPC_EmitInteger, MVT::i32, 0, 
/*9141*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SGE), 0,
                          1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (cond:Other)<<P:Predicate_COND_LE>>) - Complexity = 11
                      // Dst: (SGE:f32 ?:f32:$src1, ?:f32:$src0)
/*9168*/            0, /*End of Scope*/
/*9169*/          /*Scope*/ 107, /*->9277*/
/*9170*/            OPC_CheckCondCode, ISD::SETO,
/*9172*/            OPC_MoveParent,
/*9173*/            OPC_CheckType, MVT::f32,
/*9175*/            OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*9177*/            OPC_EmitInteger, MVT::i32, 0, 
/*9180*/            OPC_EmitInteger, MVT::i32, 0, 
/*9183*/            OPC_EmitInteger, MVT::i32, 1, 
/*9186*/            OPC_EmitInteger, MVT::i32, 0, 
/*9189*/            OPC_EmitInteger, MVT::i32, 0, 
/*9192*/            OPC_EmitInteger, MVT::i32, 0, 
/*9195*/            OPC_EmitInteger, MVT::i32, 0, 
/*9198*/            OPC_EmitInteger, MVT::i32, 0, 
/*9201*/            OPC_EmitInteger, MVT::i32, 0, 
/*9204*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9216*/            OPC_EmitInteger, MVT::i32, 0, 
/*9219*/            OPC_EmitInteger, MVT::i32, 0, 
/*9222*/            OPC_EmitInteger, MVT::i32, 0, 
/*9225*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9237*/            OPC_EmitInteger, MVT::i32, 1, 
/*9240*/            OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*9244*/            OPC_EmitInteger, MVT::i32, 0, 
/*9247*/            OPC_EmitInteger, MVT::i32, 0, 
/*9250*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETE), 0,
                        1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, SETO:Other) - Complexity = 11
                    // Dst: (SETE:f32 ?:f32:$src0, ?:f32:$src1)
/*9277*/          /*Scope*/ 107, /*->9385*/
/*9278*/            OPC_CheckCondCode, ISD::SETUO,
/*9280*/            OPC_MoveParent,
/*9281*/            OPC_CheckType, MVT::f32,
/*9283*/            OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*9285*/            OPC_EmitInteger, MVT::i32, 0, 
/*9288*/            OPC_EmitInteger, MVT::i32, 0, 
/*9291*/            OPC_EmitInteger, MVT::i32, 1, 
/*9294*/            OPC_EmitInteger, MVT::i32, 0, 
/*9297*/            OPC_EmitInteger, MVT::i32, 0, 
/*9300*/            OPC_EmitInteger, MVT::i32, 0, 
/*9303*/            OPC_EmitInteger, MVT::i32, 0, 
/*9306*/            OPC_EmitInteger, MVT::i32, 0, 
/*9309*/            OPC_EmitInteger, MVT::i32, 0, 
/*9312*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9324*/            OPC_EmitInteger, MVT::i32, 0, 
/*9327*/            OPC_EmitInteger, MVT::i32, 0, 
/*9330*/            OPC_EmitInteger, MVT::i32, 0, 
/*9333*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9345*/            OPC_EmitInteger, MVT::i32, 1, 
/*9348*/            OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*9352*/            OPC_EmitInteger, MVT::i32, 0, 
/*9355*/            OPC_EmitInteger, MVT::i32, 0, 
/*9358*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SNE), 0,
                        1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, SETUO:Other) - Complexity = 11
                    // Dst: (SNE:f32 ?:f32:$src0, ?:f32:$src1)
/*9385*/          0, /*End of Scope*/
/*9386*/        0, /*End of Scope*/
/*9387*/      /*Scope*/ 13|128,5/*653*/, /*->10042*/
/*9389*/        OPC_MoveChild, 1,
/*9391*/        OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*9394*/        OPC_CheckPredicate, 9, // Predicate_FP_ZERO
/*9396*/        OPC_MoveParent,
/*9397*/        OPC_RecordChild2, // #1 = $src1
/*9398*/        OPC_RecordChild3, // #2 = $src2
/*9399*/        OPC_MoveChild, 4,
/*9401*/        OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*9404*/        OPC_Scope, 105, /*->9511*/ // 6 children in Scope
/*9406*/          OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*9408*/          OPC_MoveParent,
/*9409*/          OPC_CheckType, MVT::f32,
/*9411*/          OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*9413*/          OPC_EmitInteger, MVT::i32, 0, 
/*9416*/          OPC_EmitInteger, MVT::i32, 0, 
/*9419*/          OPC_EmitInteger, MVT::i32, 0, 
/*9422*/          OPC_EmitInteger, MVT::i32, 0, 
/*9425*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9437*/          OPC_EmitInteger, MVT::i32, 0, 
/*9440*/          OPC_EmitInteger, MVT::i32, 0, 
/*9443*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9455*/          OPC_EmitInteger, MVT::i32, 0, 
/*9458*/          OPC_EmitInteger, MVT::i32, 0, 
/*9461*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9473*/          OPC_EmitInteger, MVT::i32, 1, 
/*9476*/          OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*9480*/          OPC_EmitInteger, MVT::i32, 0, 
/*9483*/          OPC_EmitInteger, MVT::i32, 0, 
/*9486*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDE_r600), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:f32 f32:f32:$src0, (fpimm:f32)<<P:Predicate_FP_ZERO>>, f32:f32:$src1, f32:f32:$src2, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 7
                  // Dst: (CNDE_r600:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*9511*/        /*Scope*/ 105, /*->9617*/
/*9512*/          OPC_CheckPredicate, 3, // Predicate_COND_GT
/*9514*/          OPC_MoveParent,
/*9515*/          OPC_CheckType, MVT::f32,
/*9517*/          OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*9519*/          OPC_EmitInteger, MVT::i32, 0, 
/*9522*/          OPC_EmitInteger, MVT::i32, 0, 
/*9525*/          OPC_EmitInteger, MVT::i32, 0, 
/*9528*/          OPC_EmitInteger, MVT::i32, 0, 
/*9531*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9543*/          OPC_EmitInteger, MVT::i32, 0, 
/*9546*/          OPC_EmitInteger, MVT::i32, 0, 
/*9549*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9561*/          OPC_EmitInteger, MVT::i32, 0, 
/*9564*/          OPC_EmitInteger, MVT::i32, 0, 
/*9567*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9579*/          OPC_EmitInteger, MVT::i32, 1, 
/*9582*/          OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*9586*/          OPC_EmitInteger, MVT::i32, 0, 
/*9589*/          OPC_EmitInteger, MVT::i32, 0, 
/*9592*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGT_r600), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:f32 f32:f32:$src0, (fpimm:f32)<<P:Predicate_FP_ZERO>>, f32:f32:$src1, f32:f32:$src2, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 7
                  // Dst: (CNDGT_r600:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*9617*/        /*Scope*/ 105, /*->9723*/
/*9618*/          OPC_CheckPredicate, 4, // Predicate_COND_GE
/*9620*/          OPC_MoveParent,
/*9621*/          OPC_CheckType, MVT::f32,
/*9623*/          OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*9625*/          OPC_EmitInteger, MVT::i32, 0, 
/*9628*/          OPC_EmitInteger, MVT::i32, 0, 
/*9631*/          OPC_EmitInteger, MVT::i32, 0, 
/*9634*/          OPC_EmitInteger, MVT::i32, 0, 
/*9637*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9649*/          OPC_EmitInteger, MVT::i32, 0, 
/*9652*/          OPC_EmitInteger, MVT::i32, 0, 
/*9655*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9667*/          OPC_EmitInteger, MVT::i32, 0, 
/*9670*/          OPC_EmitInteger, MVT::i32, 0, 
/*9673*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9685*/          OPC_EmitInteger, MVT::i32, 1, 
/*9688*/          OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*9692*/          OPC_EmitInteger, MVT::i32, 0, 
/*9695*/          OPC_EmitInteger, MVT::i32, 0, 
/*9698*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGE_r600), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:f32 f32:f32:$src0, (fpimm:f32)<<P:Predicate_FP_ZERO>>, f32:f32:$src1, f32:f32:$src2, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 7
                  // Dst: (CNDGE_r600:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*9723*/        /*Scope*/ 105, /*->9829*/
/*9724*/          OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*9726*/          OPC_MoveParent,
/*9727*/          OPC_CheckType, MVT::f32,
/*9729*/          OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*9731*/          OPC_EmitInteger, MVT::i32, 0, 
/*9734*/          OPC_EmitInteger, MVT::i32, 0, 
/*9737*/          OPC_EmitInteger, MVT::i32, 0, 
/*9740*/          OPC_EmitInteger, MVT::i32, 0, 
/*9743*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9755*/          OPC_EmitInteger, MVT::i32, 0, 
/*9758*/          OPC_EmitInteger, MVT::i32, 0, 
/*9761*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9773*/          OPC_EmitInteger, MVT::i32, 0, 
/*9776*/          OPC_EmitInteger, MVT::i32, 0, 
/*9779*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9791*/          OPC_EmitInteger, MVT::i32, 1, 
/*9794*/          OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*9798*/          OPC_EmitInteger, MVT::i32, 0, 
/*9801*/          OPC_EmitInteger, MVT::i32, 0, 
/*9804*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDE_eg), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:f32 f32:f32:$src0, (fpimm:f32)<<P:Predicate_FP_ZERO>>, f32:f32:$src1, f32:f32:$src2, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 7
                  // Dst: (CNDE_eg:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*9829*/        /*Scope*/ 105, /*->9935*/
/*9830*/          OPC_CheckPredicate, 3, // Predicate_COND_GT
/*9832*/          OPC_MoveParent,
/*9833*/          OPC_CheckType, MVT::f32,
/*9835*/          OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*9837*/          OPC_EmitInteger, MVT::i32, 0, 
/*9840*/          OPC_EmitInteger, MVT::i32, 0, 
/*9843*/          OPC_EmitInteger, MVT::i32, 0, 
/*9846*/          OPC_EmitInteger, MVT::i32, 0, 
/*9849*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9861*/          OPC_EmitInteger, MVT::i32, 0, 
/*9864*/          OPC_EmitInteger, MVT::i32, 0, 
/*9867*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9879*/          OPC_EmitInteger, MVT::i32, 0, 
/*9882*/          OPC_EmitInteger, MVT::i32, 0, 
/*9885*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9897*/          OPC_EmitInteger, MVT::i32, 1, 
/*9900*/          OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*9904*/          OPC_EmitInteger, MVT::i32, 0, 
/*9907*/          OPC_EmitInteger, MVT::i32, 0, 
/*9910*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGT_eg), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:f32 f32:f32:$src0, (fpimm:f32)<<P:Predicate_FP_ZERO>>, f32:f32:$src1, f32:f32:$src2, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 7
                  // Dst: (CNDGT_eg:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*9935*/        /*Scope*/ 105, /*->10041*/
/*9936*/          OPC_CheckPredicate, 4, // Predicate_COND_GE
/*9938*/          OPC_MoveParent,
/*9939*/          OPC_CheckType, MVT::f32,
/*9941*/          OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*9943*/          OPC_EmitInteger, MVT::i32, 0, 
/*9946*/          OPC_EmitInteger, MVT::i32, 0, 
/*9949*/          OPC_EmitInteger, MVT::i32, 0, 
/*9952*/          OPC_EmitInteger, MVT::i32, 0, 
/*9955*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9967*/          OPC_EmitInteger, MVT::i32, 0, 
/*9970*/          OPC_EmitInteger, MVT::i32, 0, 
/*9973*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9985*/          OPC_EmitInteger, MVT::i32, 0, 
/*9988*/          OPC_EmitInteger, MVT::i32, 0, 
/*9991*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10003*/         OPC_EmitInteger, MVT::i32, 1, 
/*10006*/         OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*10010*/         OPC_EmitInteger, MVT::i32, 0, 
/*10013*/         OPC_EmitInteger, MVT::i32, 0, 
/*10016*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGE_eg), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:f32 f32:f32:$src0, (fpimm:f32)<<P:Predicate_FP_ZERO>>, f32:f32:$src1, f32:f32:$src2, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 7
                  // Dst: (CNDGE_eg:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*10041*/       0, /*End of Scope*/
/*10042*/     0, /*End of Scope*/
/*10043*/   /*Scope*/ 103|128,14/*1895*/, /*->11940*/
/*10045*/     OPC_CheckChild0Type, MVT::i32,
/*10047*/     OPC_Scope, 80|128,8/*1104*/, /*->11154*/ // 2 children in Scope
/*10050*/       OPC_RecordChild1, // #1 = $src1
/*10051*/       OPC_MoveChild, 2,
/*10053*/       OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10064*/       OPC_MoveParent,
/*10065*/       OPC_MoveChild, 3,
/*10067*/       OPC_CheckInteger, 0, 
/*10069*/       OPC_MoveParent,
/*10070*/       OPC_MoveChild, 4,
/*10072*/       OPC_Scope, 107, /*->10181*/ // 10 children in Scope
/*10074*/         OPC_CheckCondCode, ISD::SETEQ,
/*10076*/         OPC_MoveParent,
/*10077*/         OPC_CheckType, MVT::i32,
/*10079*/         OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*10081*/         OPC_EmitInteger, MVT::i32, 0, 
/*10084*/         OPC_EmitInteger, MVT::i32, 0, 
/*10087*/         OPC_EmitInteger, MVT::i32, 1, 
/*10090*/         OPC_EmitInteger, MVT::i32, 0, 
/*10093*/         OPC_EmitInteger, MVT::i32, 0, 
/*10096*/         OPC_EmitInteger, MVT::i32, 0, 
/*10099*/         OPC_EmitInteger, MVT::i32, 0, 
/*10102*/         OPC_EmitInteger, MVT::i32, 0, 
/*10105*/         OPC_EmitInteger, MVT::i32, 0, 
/*10108*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10120*/         OPC_EmitInteger, MVT::i32, 0, 
/*10123*/         OPC_EmitInteger, MVT::i32, 0, 
/*10126*/         OPC_EmitInteger, MVT::i32, 0, 
/*10129*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10141*/         OPC_EmitInteger, MVT::i32, 1, 
/*10144*/         OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*10148*/         OPC_EmitInteger, MVT::i32, 0, 
/*10151*/         OPC_EmitInteger, MVT::i32, 0, 
/*10154*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETE_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETEQ:Other) - Complexity = 13
                  // Dst: (SETE_INT:i32 i32:i32:$src0, i32:i32:$src1)
/*10181*/       /*Scope*/ 107, /*->10289*/
/*10182*/         OPC_CheckCondCode, ISD::SETGT,
/*10184*/         OPC_MoveParent,
/*10185*/         OPC_CheckType, MVT::i32,
/*10187*/         OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*10189*/         OPC_EmitInteger, MVT::i32, 0, 
/*10192*/         OPC_EmitInteger, MVT::i32, 0, 
/*10195*/         OPC_EmitInteger, MVT::i32, 1, 
/*10198*/         OPC_EmitInteger, MVT::i32, 0, 
/*10201*/         OPC_EmitInteger, MVT::i32, 0, 
/*10204*/         OPC_EmitInteger, MVT::i32, 0, 
/*10207*/         OPC_EmitInteger, MVT::i32, 0, 
/*10210*/         OPC_EmitInteger, MVT::i32, 0, 
/*10213*/         OPC_EmitInteger, MVT::i32, 0, 
/*10216*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10228*/         OPC_EmitInteger, MVT::i32, 0, 
/*10231*/         OPC_EmitInteger, MVT::i32, 0, 
/*10234*/         OPC_EmitInteger, MVT::i32, 0, 
/*10237*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10249*/         OPC_EmitInteger, MVT::i32, 1, 
/*10252*/         OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*10256*/         OPC_EmitInteger, MVT::i32, 0, 
/*10259*/         OPC_EmitInteger, MVT::i32, 0, 
/*10262*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGT_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETGT:Other) - Complexity = 13
                  // Dst: (SETGT_INT:i32 i32:i32:$src0, i32:i32:$src1)
/*10289*/       /*Scope*/ 107, /*->10397*/
/*10290*/         OPC_CheckCondCode, ISD::SETGE,
/*10292*/         OPC_MoveParent,
/*10293*/         OPC_CheckType, MVT::i32,
/*10295*/         OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*10297*/         OPC_EmitInteger, MVT::i32, 0, 
/*10300*/         OPC_EmitInteger, MVT::i32, 0, 
/*10303*/         OPC_EmitInteger, MVT::i32, 1, 
/*10306*/         OPC_EmitInteger, MVT::i32, 0, 
/*10309*/         OPC_EmitInteger, MVT::i32, 0, 
/*10312*/         OPC_EmitInteger, MVT::i32, 0, 
/*10315*/         OPC_EmitInteger, MVT::i32, 0, 
/*10318*/         OPC_EmitInteger, MVT::i32, 0, 
/*10321*/         OPC_EmitInteger, MVT::i32, 0, 
/*10324*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10336*/         OPC_EmitInteger, MVT::i32, 0, 
/*10339*/         OPC_EmitInteger, MVT::i32, 0, 
/*10342*/         OPC_EmitInteger, MVT::i32, 0, 
/*10345*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10357*/         OPC_EmitInteger, MVT::i32, 1, 
/*10360*/         OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*10364*/         OPC_EmitInteger, MVT::i32, 0, 
/*10367*/         OPC_EmitInteger, MVT::i32, 0, 
/*10370*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGE_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETGE:Other) - Complexity = 13
                  // Dst: (SETGE_INT:i32 i32:i32:$src0, i32:i32:$src1)
/*10397*/       /*Scope*/ 107, /*->10505*/
/*10398*/         OPC_CheckCondCode, ISD::SETNE,
/*10400*/         OPC_MoveParent,
/*10401*/         OPC_CheckType, MVT::i32,
/*10403*/         OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*10405*/         OPC_EmitInteger, MVT::i32, 0, 
/*10408*/         OPC_EmitInteger, MVT::i32, 0, 
/*10411*/         OPC_EmitInteger, MVT::i32, 1, 
/*10414*/         OPC_EmitInteger, MVT::i32, 0, 
/*10417*/         OPC_EmitInteger, MVT::i32, 0, 
/*10420*/         OPC_EmitInteger, MVT::i32, 0, 
/*10423*/         OPC_EmitInteger, MVT::i32, 0, 
/*10426*/         OPC_EmitInteger, MVT::i32, 0, 
/*10429*/         OPC_EmitInteger, MVT::i32, 0, 
/*10432*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10444*/         OPC_EmitInteger, MVT::i32, 0, 
/*10447*/         OPC_EmitInteger, MVT::i32, 0, 
/*10450*/         OPC_EmitInteger, MVT::i32, 0, 
/*10453*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10465*/         OPC_EmitInteger, MVT::i32, 1, 
/*10468*/         OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*10472*/         OPC_EmitInteger, MVT::i32, 0, 
/*10475*/         OPC_EmitInteger, MVT::i32, 0, 
/*10478*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETNE_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETNE:Other) - Complexity = 13
                  // Dst: (SETNE_INT:i32 i32:i32:$src0, i32:i32:$src1)
/*10505*/       /*Scope*/ 107, /*->10613*/
/*10506*/         OPC_CheckCondCode, ISD::SETUGT,
/*10508*/         OPC_MoveParent,
/*10509*/         OPC_CheckType, MVT::i32,
/*10511*/         OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*10513*/         OPC_EmitInteger, MVT::i32, 0, 
/*10516*/         OPC_EmitInteger, MVT::i32, 0, 
/*10519*/         OPC_EmitInteger, MVT::i32, 1, 
/*10522*/         OPC_EmitInteger, MVT::i32, 0, 
/*10525*/         OPC_EmitInteger, MVT::i32, 0, 
/*10528*/         OPC_EmitInteger, MVT::i32, 0, 
/*10531*/         OPC_EmitInteger, MVT::i32, 0, 
/*10534*/         OPC_EmitInteger, MVT::i32, 0, 
/*10537*/         OPC_EmitInteger, MVT::i32, 0, 
/*10540*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10552*/         OPC_EmitInteger, MVT::i32, 0, 
/*10555*/         OPC_EmitInteger, MVT::i32, 0, 
/*10558*/         OPC_EmitInteger, MVT::i32, 0, 
/*10561*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10573*/         OPC_EmitInteger, MVT::i32, 1, 
/*10576*/         OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*10580*/         OPC_EmitInteger, MVT::i32, 0, 
/*10583*/         OPC_EmitInteger, MVT::i32, 0, 
/*10586*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGT_UINT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETUGT:Other) - Complexity = 13
                  // Dst: (SETGT_UINT:i32 i32:i32:$src0, i32:i32:$src1)
/*10613*/       /*Scope*/ 107, /*->10721*/
/*10614*/         OPC_CheckCondCode, ISD::SETUGE,
/*10616*/         OPC_MoveParent,
/*10617*/         OPC_CheckType, MVT::i32,
/*10619*/         OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*10621*/         OPC_EmitInteger, MVT::i32, 0, 
/*10624*/         OPC_EmitInteger, MVT::i32, 0, 
/*10627*/         OPC_EmitInteger, MVT::i32, 1, 
/*10630*/         OPC_EmitInteger, MVT::i32, 0, 
/*10633*/         OPC_EmitInteger, MVT::i32, 0, 
/*10636*/         OPC_EmitInteger, MVT::i32, 0, 
/*10639*/         OPC_EmitInteger, MVT::i32, 0, 
/*10642*/         OPC_EmitInteger, MVT::i32, 0, 
/*10645*/         OPC_EmitInteger, MVT::i32, 0, 
/*10648*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10660*/         OPC_EmitInteger, MVT::i32, 0, 
/*10663*/         OPC_EmitInteger, MVT::i32, 0, 
/*10666*/         OPC_EmitInteger, MVT::i32, 0, 
/*10669*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10681*/         OPC_EmitInteger, MVT::i32, 1, 
/*10684*/         OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*10688*/         OPC_EmitInteger, MVT::i32, 0, 
/*10691*/         OPC_EmitInteger, MVT::i32, 0, 
/*10694*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGE_UINT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETUGE:Other) - Complexity = 13
                  // Dst: (SETGE_UINT:i32 i32:i32:$src0, i32:i32:$src1)
/*10721*/       /*Scope*/ 107, /*->10829*/
/*10722*/         OPC_CheckCondCode, ISD::SETLT,
/*10724*/         OPC_MoveParent,
/*10725*/         OPC_CheckType, MVT::i32,
/*10727*/         OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*10729*/         OPC_EmitInteger, MVT::i32, 0, 
/*10732*/         OPC_EmitInteger, MVT::i32, 0, 
/*10735*/         OPC_EmitInteger, MVT::i32, 1, 
/*10738*/         OPC_EmitInteger, MVT::i32, 0, 
/*10741*/         OPC_EmitInteger, MVT::i32, 0, 
/*10744*/         OPC_EmitInteger, MVT::i32, 0, 
/*10747*/         OPC_EmitInteger, MVT::i32, 0, 
/*10750*/         OPC_EmitInteger, MVT::i32, 0, 
/*10753*/         OPC_EmitInteger, MVT::i32, 0, 
/*10756*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10768*/         OPC_EmitInteger, MVT::i32, 0, 
/*10771*/         OPC_EmitInteger, MVT::i32, 0, 
/*10774*/         OPC_EmitInteger, MVT::i32, 0, 
/*10777*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10789*/         OPC_EmitInteger, MVT::i32, 1, 
/*10792*/         OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*10796*/         OPC_EmitInteger, MVT::i32, 0, 
/*10799*/         OPC_EmitInteger, MVT::i32, 0, 
/*10802*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGT_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETLT:Other) - Complexity = 13
                  // Dst: (SETGT_INT:i32 ?:i32:$src1, ?:i32:$src0)
/*10829*/       /*Scope*/ 107, /*->10937*/
/*10830*/         OPC_CheckCondCode, ISD::SETLE,
/*10832*/         OPC_MoveParent,
/*10833*/         OPC_CheckType, MVT::i32,
/*10835*/         OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*10837*/         OPC_EmitInteger, MVT::i32, 0, 
/*10840*/         OPC_EmitInteger, MVT::i32, 0, 
/*10843*/         OPC_EmitInteger, MVT::i32, 1, 
/*10846*/         OPC_EmitInteger, MVT::i32, 0, 
/*10849*/         OPC_EmitInteger, MVT::i32, 0, 
/*10852*/         OPC_EmitInteger, MVT::i32, 0, 
/*10855*/         OPC_EmitInteger, MVT::i32, 0, 
/*10858*/         OPC_EmitInteger, MVT::i32, 0, 
/*10861*/         OPC_EmitInteger, MVT::i32, 0, 
/*10864*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10876*/         OPC_EmitInteger, MVT::i32, 0, 
/*10879*/         OPC_EmitInteger, MVT::i32, 0, 
/*10882*/         OPC_EmitInteger, MVT::i32, 0, 
/*10885*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10897*/         OPC_EmitInteger, MVT::i32, 1, 
/*10900*/         OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*10904*/         OPC_EmitInteger, MVT::i32, 0, 
/*10907*/         OPC_EmitInteger, MVT::i32, 0, 
/*10910*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGE_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETLE:Other) - Complexity = 13
                  // Dst: (SETGE_INT:i32 ?:i32:$src1, ?:i32:$src0)
/*10937*/       /*Scope*/ 107, /*->11045*/
/*10938*/         OPC_CheckCondCode, ISD::SETULT,
/*10940*/         OPC_MoveParent,
/*10941*/         OPC_CheckType, MVT::i32,
/*10943*/         OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*10945*/         OPC_EmitInteger, MVT::i32, 0, 
/*10948*/         OPC_EmitInteger, MVT::i32, 0, 
/*10951*/         OPC_EmitInteger, MVT::i32, 1, 
/*10954*/         OPC_EmitInteger, MVT::i32, 0, 
/*10957*/         OPC_EmitInteger, MVT::i32, 0, 
/*10960*/         OPC_EmitInteger, MVT::i32, 0, 
/*10963*/         OPC_EmitInteger, MVT::i32, 0, 
/*10966*/         OPC_EmitInteger, MVT::i32, 0, 
/*10969*/         OPC_EmitInteger, MVT::i32, 0, 
/*10972*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10984*/         OPC_EmitInteger, MVT::i32, 0, 
/*10987*/         OPC_EmitInteger, MVT::i32, 0, 
/*10990*/         OPC_EmitInteger, MVT::i32, 0, 
/*10993*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11005*/         OPC_EmitInteger, MVT::i32, 1, 
/*11008*/         OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*11012*/         OPC_EmitInteger, MVT::i32, 0, 
/*11015*/         OPC_EmitInteger, MVT::i32, 0, 
/*11018*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGT_UINT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETULT:Other) - Complexity = 13
                  // Dst: (SETGT_UINT:i32 ?:i32:$src1, ?:i32:$src0)
/*11045*/       /*Scope*/ 107, /*->11153*/
/*11046*/         OPC_CheckCondCode, ISD::SETULE,
/*11048*/         OPC_MoveParent,
/*11049*/         OPC_CheckType, MVT::i32,
/*11051*/         OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*11053*/         OPC_EmitInteger, MVT::i32, 0, 
/*11056*/         OPC_EmitInteger, MVT::i32, 0, 
/*11059*/         OPC_EmitInteger, MVT::i32, 1, 
/*11062*/         OPC_EmitInteger, MVT::i32, 0, 
/*11065*/         OPC_EmitInteger, MVT::i32, 0, 
/*11068*/         OPC_EmitInteger, MVT::i32, 0, 
/*11071*/         OPC_EmitInteger, MVT::i32, 0, 
/*11074*/         OPC_EmitInteger, MVT::i32, 0, 
/*11077*/         OPC_EmitInteger, MVT::i32, 0, 
/*11080*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11092*/         OPC_EmitInteger, MVT::i32, 0, 
/*11095*/         OPC_EmitInteger, MVT::i32, 0, 
/*11098*/         OPC_EmitInteger, MVT::i32, 0, 
/*11101*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11113*/         OPC_EmitInteger, MVT::i32, 1, 
/*11116*/         OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*11120*/         OPC_EmitInteger, MVT::i32, 0, 
/*11123*/         OPC_EmitInteger, MVT::i32, 0, 
/*11126*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGE_UINT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETULE:Other) - Complexity = 13
                  // Dst: (SETGE_UINT:i32 ?:i32:$src1, ?:i32:$src0)
/*11153*/       0, /*End of Scope*/
/*11154*/     /*Scope*/ 15|128,6/*783*/, /*->11939*/
/*11156*/       OPC_MoveChild, 1,
/*11158*/       OPC_Scope, 12|128,5/*652*/, /*->11813*/ // 2 children in Scope
/*11161*/         OPC_CheckInteger, 0, 
/*11163*/         OPC_MoveParent,
/*11164*/         OPC_RecordChild2, // #1 = $src1
/*11165*/         OPC_RecordChild3, // #2 = $src2
/*11166*/         OPC_MoveChild, 4,
/*11168*/         OPC_Scope, 67|128,2/*323*/, /*->11494*/ // 4 children in Scope
/*11171*/           OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*11174*/           OPC_Scope, 105, /*->11281*/ // 3 children in Scope
/*11176*/             OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*11178*/             OPC_MoveParent,
/*11179*/             OPC_CheckType, MVT::i32,
/*11181*/             OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*11183*/             OPC_EmitInteger, MVT::i32, 0, 
/*11186*/             OPC_EmitInteger, MVT::i32, 0, 
/*11189*/             OPC_EmitInteger, MVT::i32, 0, 
/*11192*/             OPC_EmitInteger, MVT::i32, 0, 
/*11195*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11207*/             OPC_EmitInteger, MVT::i32, 0, 
/*11210*/             OPC_EmitInteger, MVT::i32, 0, 
/*11213*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11225*/             OPC_EmitInteger, MVT::i32, 0, 
/*11228*/             OPC_EmitInteger, MVT::i32, 0, 
/*11231*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11243*/             OPC_EmitInteger, MVT::i32, 1, 
/*11246*/             OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*11250*/             OPC_EmitInteger, MVT::i32, 0, 
/*11253*/             OPC_EmitInteger, MVT::i32, 0, 
/*11256*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDE_INT), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (selectcc:i32 i32:i32:$src0, 0:i32, i32:i32:$src1, i32:i32:$src2, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 8
                      // Dst: (CNDE_INT:i32 i32:i32:$src0, i32:i32:$src1, i32:i32:$src2)
/*11281*/           /*Scope*/ 105, /*->11387*/
/*11282*/             OPC_CheckPredicate, 4, // Predicate_COND_GE
/*11284*/             OPC_MoveParent,
/*11285*/             OPC_CheckType, MVT::i32,
/*11287*/             OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*11289*/             OPC_EmitInteger, MVT::i32, 0, 
/*11292*/             OPC_EmitInteger, MVT::i32, 0, 
/*11295*/             OPC_EmitInteger, MVT::i32, 0, 
/*11298*/             OPC_EmitInteger, MVT::i32, 0, 
/*11301*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11313*/             OPC_EmitInteger, MVT::i32, 0, 
/*11316*/             OPC_EmitInteger, MVT::i32, 0, 
/*11319*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11331*/             OPC_EmitInteger, MVT::i32, 0, 
/*11334*/             OPC_EmitInteger, MVT::i32, 0, 
/*11337*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11349*/             OPC_EmitInteger, MVT::i32, 1, 
/*11352*/             OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*11356*/             OPC_EmitInteger, MVT::i32, 0, 
/*11359*/             OPC_EmitInteger, MVT::i32, 0, 
/*11362*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGE_INT), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (selectcc:i32 i32:i32:$src0, 0:i32, i32:i32:$src1, i32:i32:$src2, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 8
                      // Dst: (CNDGE_INT:i32 i32:i32:$src0, i32:i32:$src1, i32:i32:$src2)
/*11387*/           /*Scope*/ 105, /*->11493*/
/*11388*/             OPC_CheckPredicate, 3, // Predicate_COND_GT
/*11390*/             OPC_MoveParent,
/*11391*/             OPC_CheckType, MVT::i32,
/*11393*/             OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*11395*/             OPC_EmitInteger, MVT::i32, 0, 
/*11398*/             OPC_EmitInteger, MVT::i32, 0, 
/*11401*/             OPC_EmitInteger, MVT::i32, 0, 
/*11404*/             OPC_EmitInteger, MVT::i32, 0, 
/*11407*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11419*/             OPC_EmitInteger, MVT::i32, 0, 
/*11422*/             OPC_EmitInteger, MVT::i32, 0, 
/*11425*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11437*/             OPC_EmitInteger, MVT::i32, 0, 
/*11440*/             OPC_EmitInteger, MVT::i32, 0, 
/*11443*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11455*/             OPC_EmitInteger, MVT::i32, 1, 
/*11458*/             OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*11462*/             OPC_EmitInteger, MVT::i32, 0, 
/*11465*/             OPC_EmitInteger, MVT::i32, 0, 
/*11468*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGT_INT), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (selectcc:i32 i32:i32:$src0, 0:i32, i32:i32:$src1, i32:i32:$src2, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 8
                      // Dst: (CNDGT_INT:i32 i32:i32:$src0, i32:i32:$src1, i32:i32:$src2)
/*11493*/           0, /*End of Scope*/
/*11494*/         /*Scope*/ 105, /*->11600*/
/*11495*/           OPC_CheckCondCode, ISD::SETEQ,
/*11497*/           OPC_MoveParent,
/*11498*/           OPC_CheckType, MVT::f32,
/*11500*/           OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*11502*/           OPC_EmitInteger, MVT::i32, 0, 
/*11505*/           OPC_EmitInteger, MVT::i32, 0, 
/*11508*/           OPC_EmitInteger, MVT::i32, 0, 
/*11511*/           OPC_EmitInteger, MVT::i32, 0, 
/*11514*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11526*/           OPC_EmitInteger, MVT::i32, 0, 
/*11529*/           OPC_EmitInteger, MVT::i32, 0, 
/*11532*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11544*/           OPC_EmitInteger, MVT::i32, 0, 
/*11547*/           OPC_EmitInteger, MVT::i32, 0, 
/*11550*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11562*/           OPC_EmitInteger, MVT::i32, 1, 
/*11565*/           OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*11569*/           OPC_EmitInteger, MVT::i32, 0, 
/*11572*/           OPC_EmitInteger, MVT::i32, 0, 
/*11575*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDE_INT), 0,
                        1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:f32 i32:i32:$src0, 0:i32, f32:f32:$src1, f32:f32:$src2, SETEQ:Other) - Complexity = 8
                    // Dst: (CNDE_INT:f32 ?:i32:$src0, ?:f32:$src1, ?:f32:$src2)
/*11600*/         /*Scope*/ 105, /*->11706*/
/*11601*/           OPC_CheckCondCode, ISD::SETGT,
/*11603*/           OPC_MoveParent,
/*11604*/           OPC_CheckType, MVT::f32,
/*11606*/           OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*11608*/           OPC_EmitInteger, MVT::i32, 0, 
/*11611*/           OPC_EmitInteger, MVT::i32, 0, 
/*11614*/           OPC_EmitInteger, MVT::i32, 0, 
/*11617*/           OPC_EmitInteger, MVT::i32, 0, 
/*11620*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11632*/           OPC_EmitInteger, MVT::i32, 0, 
/*11635*/           OPC_EmitInteger, MVT::i32, 0, 
/*11638*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11650*/           OPC_EmitInteger, MVT::i32, 0, 
/*11653*/           OPC_EmitInteger, MVT::i32, 0, 
/*11656*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11668*/           OPC_EmitInteger, MVT::i32, 1, 
/*11671*/           OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*11675*/           OPC_EmitInteger, MVT::i32, 0, 
/*11678*/           OPC_EmitInteger, MVT::i32, 0, 
/*11681*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGT_INT), 0,
                        1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:f32 i32:i32:$src0, 0:i32, f32:f32:$src1, f32:f32:$src2, SETGT:Other) - Complexity = 8
                    // Dst: (CNDGT_INT:f32 ?:i32:$src0, ?:f32:$src1, ?:f32:$src2)
/*11706*/         /*Scope*/ 105, /*->11812*/
/*11707*/           OPC_CheckCondCode, ISD::SETGE,
/*11709*/           OPC_MoveParent,
/*11710*/           OPC_CheckType, MVT::f32,
/*11712*/           OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*11714*/           OPC_EmitInteger, MVT::i32, 0, 
/*11717*/           OPC_EmitInteger, MVT::i32, 0, 
/*11720*/           OPC_EmitInteger, MVT::i32, 0, 
/*11723*/           OPC_EmitInteger, MVT::i32, 0, 
/*11726*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11738*/           OPC_EmitInteger, MVT::i32, 0, 
/*11741*/           OPC_EmitInteger, MVT::i32, 0, 
/*11744*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11756*/           OPC_EmitInteger, MVT::i32, 0, 
/*11759*/           OPC_EmitInteger, MVT::i32, 0, 
/*11762*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11774*/           OPC_EmitInteger, MVT::i32, 1, 
/*11777*/           OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*11781*/           OPC_EmitInteger, MVT::i32, 0, 
/*11784*/           OPC_EmitInteger, MVT::i32, 0, 
/*11787*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGE_INT), 0,
                        1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:f32 i32:i32:$src0, 0:i32, f32:f32:$src1, f32:f32:$src2, SETGE:Other) - Complexity = 8
                    // Dst: (CNDGE_INT:f32 ?:i32:$src0, ?:f32:$src1, ?:f32:$src2)
/*11812*/         0, /*End of Scope*/
/*11813*/       /*Scope*/ 124, /*->11938*/
/*11814*/         OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11825*/         OPC_MoveParent,
/*11826*/         OPC_RecordChild2, // #1 = $src1
/*11827*/         OPC_RecordChild3, // #2 = $src2
/*11828*/         OPC_MoveChild, 4,
/*11830*/         OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*11833*/         OPC_CheckPredicate, 3, // Predicate_COND_GT
/*11835*/         OPC_MoveParent,
/*11836*/         OPC_CheckType, MVT::i32,
/*11838*/         OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*11840*/         OPC_EmitInteger, MVT::i32, 0, 
/*11843*/         OPC_EmitInteger, MVT::i32, 0, 
/*11846*/         OPC_EmitInteger, MVT::i32, 0, 
/*11849*/         OPC_EmitInteger, MVT::i32, 0, 
/*11852*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11864*/         OPC_EmitInteger, MVT::i32, 0, 
/*11867*/         OPC_EmitInteger, MVT::i32, 0, 
/*11870*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11882*/         OPC_EmitInteger, MVT::i32, 0, 
/*11885*/         OPC_EmitInteger, MVT::i32, 0, 
/*11888*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11900*/         OPC_EmitInteger, MVT::i32, 1, 
/*11903*/         OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*11907*/         OPC_EmitInteger, MVT::i32, 0, 
/*11910*/         OPC_EmitInteger, MVT::i32, 0, 
/*11913*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGE_INT), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:i32 i32:i32:$src0, -1:i32, i32:i32:$src1, i32:i32:$src2, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 8
                  // Dst: (CNDGE_INT:i32 ?:i32:$src0, ?:i32:$src1, ?:i32:$src2)
/*11938*/       0, /*End of Scope*/
/*11939*/     0, /*End of Scope*/
/*11940*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 126|128,4/*638*/,  TARGET_VAL(ISD::LOAD),// ->12583
/*11945*/   OPC_RecordMemRef,
/*11946*/   OPC_RecordNode,   // #0 = 'ld' chained node
/*11947*/   OPC_Scope, 9|128,1/*137*/, /*->12087*/ // 7 children in Scope
/*11950*/     OPC_RecordChild1, // #1 = $ptr
/*11951*/     OPC_CheckChild1Type, MVT::i32,
/*11953*/     OPC_CheckPredicate, 10, // Predicate_unindexedload
/*11955*/     OPC_CheckType, MVT::i32,
/*11957*/     OPC_Scope, 44, /*->12003*/ // 4 children in Scope
/*11959*/       OPC_CheckPredicate, 11, // Predicate_zextload
/*11961*/       OPC_Scope, 19, /*->11982*/ // 2 children in Scope
/*11963*/         OPC_CheckPredicate, 12, // Predicate_zextloadi8
/*11965*/         OPC_CheckPredicate, 13, // Predicate_load_param_zexti8
/*11967*/         OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*11969*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$ptr #2 #3
/*11972*/         OPC_EmitMergeInputChains1_0,
/*11973*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_8_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRVTX_READ:i32:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>><<P:Predicate_load_param_zexti8>> - Complexity = 13
                  // Dst: (VTX_READ_PARAM_8_eg:i32 ADDRVTX_READ:i32:$ptr)
/*11982*/       /*Scope*/ 19, /*->12002*/
/*11983*/         OPC_CheckPredicate, 14, // Predicate_zextloadi16
/*11985*/         OPC_CheckPredicate, 15, // Predicate_load_param_zexti16
/*11987*/         OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*11989*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$ptr #2 #3
/*11992*/         OPC_EmitMergeInputChains1_0,
/*11993*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_16_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRVTX_READ:i32:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_load_param_zexti16>> - Complexity = 13
                  // Dst: (VTX_READ_PARAM_16_eg:i32 ADDRVTX_READ:i32:$ptr)
/*12002*/       0, /*End of Scope*/
/*12003*/     /*Scope*/ 19, /*->12023*/
/*12004*/       OPC_CheckPredicate, 16, // Predicate_load
/*12006*/       OPC_CheckPredicate, 17, // Predicate_load_param
/*12008*/       OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*12010*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$ptr #2 #3
/*12013*/       OPC_EmitMergeInputChains1_0,
/*12014*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_32_eg), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRVTX_READ:i32:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_param>> - Complexity = 13
                // Dst: (VTX_READ_PARAM_32_eg:i32 ADDRVTX_READ:i32:$ptr)
/*12023*/     /*Scope*/ 21, /*->12045*/
/*12024*/       OPC_CheckPredicate, 11, // Predicate_zextload
/*12026*/       OPC_CheckPredicate, 12, // Predicate_zextloadi8
/*12028*/       OPC_CheckPredicate, 18, // Predicate_zextloadi8_global
/*12030*/       OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*12032*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$ptr #2 #3
/*12035*/       OPC_EmitMergeInputChains1_0,
/*12036*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_8_eg), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRVTX_READ:i32:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>><<P:Predicate_zextloadi8_global>> - Complexity = 13
                // Dst: (VTX_READ_GLOBAL_8_eg:i32 ADDRVTX_READ:i32:$ptr)
/*12045*/     /*Scope*/ 40, /*->12086*/
/*12046*/       OPC_CheckPredicate, 16, // Predicate_load
/*12048*/       OPC_Scope, 17, /*->12067*/ // 2 children in Scope
/*12050*/         OPC_CheckPredicate, 19, // Predicate_global_load
/*12052*/         OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*12054*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$ptr #2 #3
/*12057*/         OPC_EmitMergeInputChains1_0,
/*12058*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_32_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRVTX_READ:i32:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 13
                  // Dst: (VTX_READ_GLOBAL_32_eg:i32 ADDRVTX_READ:i32:$ptr)
/*12067*/       /*Scope*/ 17, /*->12085*/
/*12068*/         OPC_CheckPredicate, 20, // Predicate_constant_load
/*12070*/         OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*12072*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$ptr #2 #3
/*12075*/         OPC_EmitMergeInputChains1_0,
/*12076*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CONSTANT_LOAD_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRVTX_READ:i32:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 13
                  // Dst: (CONSTANT_LOAD_eg:i32 ADDRVTX_READ:i32:$ptr)
/*12085*/       0, /*End of Scope*/
/*12086*/     0, /*End of Scope*/
/*12087*/   /*Scope*/ 124, /*->12212*/
/*12088*/     OPC_MoveChild, 1,
/*12090*/     OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*12093*/     OPC_RecordChild0, // #1 = $sbase
/*12094*/     OPC_RecordChild1, // #2 = $offset
/*12095*/     OPC_MoveChild, 1,
/*12097*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12100*/     OPC_Scope, 50, /*->12152*/ // 2 children in Scope
/*12102*/       OPC_CheckPredicate, 21, // Predicate_IMM8bitDWORD
/*12104*/       OPC_MoveParent,
/*12105*/       OPC_MoveParent,
/*12106*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*12108*/       OPC_CheckPredicate, 16, // Predicate_load
/*12110*/       OPC_CheckPredicate, 20, // Predicate_constant_load
/*12112*/       OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->12132
/*12115*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*12117*/         OPC_EmitMergeInputChains1_0,
/*12118*/         OPC_EmitConvertToTarget, 2,
/*12120*/         OPC_EmitNodeXForm, 0, 3, // anonymous.val.371
/*12123*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORD_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4, 
                  // Src: (ld:i32 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32)<<P:Predicate_IMM8bitDWORD>><<X:anonymous.val.371>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 11
                  // Dst: (S_LOAD_DWORD_IMM:i32 ?:i64:$sbase, (anonymous.val.371:i32 (imm:i32)<<P:Predicate_IMM8bitDWORD>>:$offset))
                /*SwitchType*/ 17,  MVT::i64,// ->12151
/*12134*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*12136*/         OPC_EmitMergeInputChains1_0,
/*12137*/         OPC_EmitConvertToTarget, 2,
/*12139*/         OPC_EmitNodeXForm, 0, 3, // anonymous.val.371
/*12142*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX2_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 4, 
                  // Src: (ld:i64 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32)<<P:Predicate_IMM8bitDWORD>><<X:anonymous.val.371>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 11
                  // Dst: (S_LOAD_DWORDX2_IMM:i64 ?:i64:$sbase, (anonymous.val.371:i32 (imm:i32)<<P:Predicate_IMM8bitDWORD>>:$offset))
                0, // EndSwitchType
/*12152*/     /*Scope*/ 58, /*->12211*/
/*12153*/       OPC_MoveParent,
/*12154*/       OPC_MoveParent,
/*12155*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*12157*/       OPC_CheckPredicate, 16, // Predicate_load
/*12159*/       OPC_CheckPredicate, 20, // Predicate_constant_load
/*12161*/       OPC_SwitchType /*2 cases */, 22,  MVT::i32,// ->12186
/*12164*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*12166*/         OPC_EmitMergeInputChains1_0,
/*12167*/         OPC_EmitConvertToTarget, 2,
/*12169*/         OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*12177*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORD_SGPR), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4, 
                  // Src: (ld:i32 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32):$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 10
                  // Dst: (S_LOAD_DWORD_SGPR:i32 ?:i64:$sbase, (S_MOV_B32:i32 (imm:i32):$offset))
                /*SwitchType*/ 22,  MVT::i64,// ->12210
/*12188*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*12190*/         OPC_EmitMergeInputChains1_0,
/*12191*/         OPC_EmitConvertToTarget, 2,
/*12193*/         OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*12201*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX2_SGPR), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 4, 
                  // Src: (ld:i64 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32):$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 10
                  // Dst: (S_LOAD_DWORDX2_SGPR:i64 ?:i64:$sbase, (S_MOV_B32:i32 (imm:i32):$offset))
                0, // EndSwitchType
/*12211*/     0, /*End of Scope*/
/*12212*/   /*Scope*/ 45, /*->12258*/
/*12213*/     OPC_RecordChild1, // #1 = $sbase
/*12214*/     OPC_CheckChild1Type, MVT::i64,
/*12216*/     OPC_CheckPredicate, 10, // Predicate_unindexedload
/*12218*/     OPC_CheckPredicate, 16, // Predicate_load
/*12220*/     OPC_CheckPredicate, 20, // Predicate_constant_load
/*12222*/     OPC_SwitchType /*2 cases */, 15,  MVT::i32,// ->12240
/*12225*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*12227*/       OPC_EmitMergeInputChains1_0,
/*12228*/       OPC_EmitInteger, MVT::i32, 0, 
/*12231*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORD_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (ld:i32 i64:i64:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 4
                // Dst: (S_LOAD_DWORD_IMM:i32 ?:i64:$sbase, 0:i32)
              /*SwitchType*/ 15,  MVT::i64,// ->12257
/*12242*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*12244*/       OPC_EmitMergeInputChains1_0,
/*12245*/       OPC_EmitInteger, MVT::i32, 0, 
/*12248*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX2_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (ld:i64 i64:i64:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 4
                // Dst: (S_LOAD_DWORDX2_IMM:i64 ?:i64:$sbase, 0:i32)
              0, // EndSwitchType
/*12258*/   /*Scope*/ 77, /*->12336*/
/*12259*/     OPC_MoveChild, 1,
/*12261*/     OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*12264*/     OPC_RecordChild0, // #1 = $sbase
/*12265*/     OPC_RecordChild1, // #2 = $offset
/*12266*/     OPC_MoveChild, 1,
/*12268*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12271*/     OPC_Scope, 29, /*->12302*/ // 2 children in Scope
/*12273*/       OPC_CheckPredicate, 21, // Predicate_IMM8bitDWORD
/*12275*/       OPC_MoveParent,
/*12276*/       OPC_MoveParent,
/*12277*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*12279*/       OPC_CheckPredicate, 16, // Predicate_load
/*12281*/       OPC_CheckPredicate, 20, // Predicate_constant_load
/*12283*/       OPC_CheckType, MVT::f32,
/*12285*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*12287*/       OPC_EmitMergeInputChains1_0,
/*12288*/       OPC_EmitConvertToTarget, 2,
/*12290*/       OPC_EmitNodeXForm, 0, 3, // anonymous.val.371
/*12293*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORD_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 4, 
                // Src: (ld:f32 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32)<<P:Predicate_IMM8bitDWORD>><<X:anonymous.val.371>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 11
                // Dst: (S_LOAD_DWORD_IMM:f32 ?:i64:$sbase, (anonymous.val.371:i32 (imm:i32)<<P:Predicate_IMM8bitDWORD>>:$offset))
/*12302*/     /*Scope*/ 32, /*->12335*/
/*12303*/       OPC_MoveParent,
/*12304*/       OPC_MoveParent,
/*12305*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*12307*/       OPC_CheckPredicate, 16, // Predicate_load
/*12309*/       OPC_CheckPredicate, 20, // Predicate_constant_load
/*12311*/       OPC_CheckType, MVT::f32,
/*12313*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*12315*/       OPC_EmitMergeInputChains1_0,
/*12316*/       OPC_EmitConvertToTarget, 2,
/*12318*/       OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*12326*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORD_SGPR), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 4, 
                // Src: (ld:f32 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32):$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 10
                // Dst: (S_LOAD_DWORD_SGPR:f32 ?:i64:$sbase, (S_MOV_B32:i32 (imm:i32):$offset))
/*12335*/     0, /*End of Scope*/
/*12336*/   /*Scope*/ 74, /*->12411*/
/*12337*/     OPC_RecordChild1, // #1 = $sbase
/*12338*/     OPC_SwitchType /*2 cases */, 23,  MVT::f32,// ->12364
/*12341*/       OPC_CheckChild1Type, MVT::i64,
/*12343*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*12345*/       OPC_CheckPredicate, 16, // Predicate_load
/*12347*/       OPC_CheckPredicate, 20, // Predicate_constant_load
/*12349*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*12351*/       OPC_EmitMergeInputChains1_0,
/*12352*/       OPC_EmitInteger, MVT::i32, 0, 
/*12355*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORD_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                // Src: (ld:f32 i64:i64:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 4
                // Dst: (S_LOAD_DWORD_IMM:f32 ?:i64:$sbase, 0:i32)
              /*SwitchType*/ 44,  MVT::v4i32,// ->12410
/*12366*/       OPC_CheckChild1Type, MVT::i32,
/*12368*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*12370*/       OPC_CheckPredicate, 16, // Predicate_load
/*12372*/       OPC_Scope, 17, /*->12391*/ // 2 children in Scope
/*12374*/         OPC_CheckPredicate, 17, // Predicate_load_param
/*12376*/         OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*12378*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$ptr #2 #3
/*12381*/         OPC_EmitMergeInputChains1_0,
/*12382*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_128_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:v4i32 ADDRVTX_READ:i32:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_param>> - Complexity = 13
                  // Dst: (VTX_READ_PARAM_128_eg:v4i32 ADDRVTX_READ:i32:$ptr)
/*12391*/       /*Scope*/ 17, /*->12409*/
/*12392*/         OPC_CheckPredicate, 19, // Predicate_global_load
/*12394*/         OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*12396*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$ptr #2 #3
/*12399*/         OPC_EmitMergeInputChains1_0,
/*12400*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_128_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:v4i32 ADDRVTX_READ:i32:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 13
                  // Dst: (VTX_READ_GLOBAL_128_eg:v4i32 ADDRVTX_READ:i32:$ptr)
/*12409*/       0, /*End of Scope*/
              0, // EndSwitchType
/*12411*/   /*Scope*/ 124, /*->12536*/
/*12412*/     OPC_MoveChild, 1,
/*12414*/     OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*12417*/     OPC_RecordChild0, // #1 = $sbase
/*12418*/     OPC_RecordChild1, // #2 = $offset
/*12419*/     OPC_MoveChild, 1,
/*12421*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12424*/     OPC_Scope, 50, /*->12476*/ // 2 children in Scope
/*12426*/       OPC_CheckPredicate, 21, // Predicate_IMM8bitDWORD
/*12428*/       OPC_MoveParent,
/*12429*/       OPC_MoveParent,
/*12430*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*12432*/       OPC_CheckPredicate, 16, // Predicate_load
/*12434*/       OPC_CheckPredicate, 20, // Predicate_constant_load
/*12436*/       OPC_SwitchType /*2 cases */, 17,  MVT::v16i8,// ->12456
/*12439*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*12441*/         OPC_EmitMergeInputChains1_0,
/*12442*/         OPC_EmitConvertToTarget, 2,
/*12444*/         OPC_EmitNodeXForm, 0, 3, // anonymous.val.371
/*12447*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX4_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 4, 
                  // Src: (ld:v16i8 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32)<<P:Predicate_IMM8bitDWORD>><<X:anonymous.val.371>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 11
                  // Dst: (S_LOAD_DWORDX4_IMM:v16i8 ?:i64:$sbase, (anonymous.val.371:i32 (imm:i32)<<P:Predicate_IMM8bitDWORD>>:$offset))
                /*SwitchType*/ 17,  MVT::v32i8,// ->12475
/*12458*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*12460*/         OPC_EmitMergeInputChains1_0,
/*12461*/         OPC_EmitConvertToTarget, 2,
/*12463*/         OPC_EmitNodeXForm, 0, 3, // anonymous.val.371
/*12466*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX8_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::v32i8, 2/*#Ops*/, 1, 4, 
                  // Src: (ld:v32i8 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32)<<P:Predicate_IMM8bitDWORD>><<X:anonymous.val.371>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 11
                  // Dst: (S_LOAD_DWORDX8_IMM:v32i8 ?:i64:$sbase, (anonymous.val.371:i32 (imm:i32)<<P:Predicate_IMM8bitDWORD>>:$offset))
                0, // EndSwitchType
/*12476*/     /*Scope*/ 58, /*->12535*/
/*12477*/       OPC_MoveParent,
/*12478*/       OPC_MoveParent,
/*12479*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*12481*/       OPC_CheckPredicate, 16, // Predicate_load
/*12483*/       OPC_CheckPredicate, 20, // Predicate_constant_load
/*12485*/       OPC_SwitchType /*2 cases */, 22,  MVT::v16i8,// ->12510
/*12488*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*12490*/         OPC_EmitMergeInputChains1_0,
/*12491*/         OPC_EmitConvertToTarget, 2,
/*12493*/         OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*12501*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX4_SGPR), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 4, 
                  // Src: (ld:v16i8 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32):$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 10
                  // Dst: (S_LOAD_DWORDX4_SGPR:v16i8 ?:i64:$sbase, (S_MOV_B32:i32 (imm:i32):$offset))
                /*SwitchType*/ 22,  MVT::v32i8,// ->12534
/*12512*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*12514*/         OPC_EmitMergeInputChains1_0,
/*12515*/         OPC_EmitConvertToTarget, 2,
/*12517*/         OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*12525*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX8_SGPR), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::v32i8, 2/*#Ops*/, 1, 4, 
                  // Src: (ld:v32i8 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32):$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 10
                  // Dst: (S_LOAD_DWORDX8_SGPR:v32i8 ?:i64:$sbase, (S_MOV_B32:i32 (imm:i32):$offset))
                0, // EndSwitchType
/*12535*/     0, /*End of Scope*/
/*12536*/   /*Scope*/ 45, /*->12582*/
/*12537*/     OPC_RecordChild1, // #1 = $sbase
/*12538*/     OPC_CheckChild1Type, MVT::i64,
/*12540*/     OPC_CheckPredicate, 10, // Predicate_unindexedload
/*12542*/     OPC_CheckPredicate, 16, // Predicate_load
/*12544*/     OPC_CheckPredicate, 20, // Predicate_constant_load
/*12546*/     OPC_SwitchType /*2 cases */, 15,  MVT::v16i8,// ->12564
/*12549*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*12551*/       OPC_EmitMergeInputChains1_0,
/*12552*/       OPC_EmitInteger, MVT::i32, 0, 
/*12555*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX4_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 2, 
                // Src: (ld:v16i8 i64:i64:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 4
                // Dst: (S_LOAD_DWORDX4_IMM:v16i8 ?:i64:$sbase, 0:i32)
              /*SwitchType*/ 15,  MVT::v32i8,// ->12581
/*12566*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*12568*/       OPC_EmitMergeInputChains1_0,
/*12569*/       OPC_EmitInteger, MVT::i32, 0, 
/*12572*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX8_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::v32i8, 2/*#Ops*/, 1, 2, 
                // Src: (ld:v32i8 i64:i64:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 4
                // Dst: (S_LOAD_DWORDX8_IMM:v32i8 ?:i64:$sbase, 0:i32)
              0, // EndSwitchType
/*12582*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 96|128,11/*1504*/,  TARGET_VAL(ISD::XOR),// ->14091
/*12587*/   OPC_Scope, 33|128,2/*289*/, /*->12879*/ // 5 children in Scope
/*12590*/     OPC_RecordChild0, // #0 = $z
/*12591*/     OPC_MoveChild, 1,
/*12593*/     OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*12596*/     OPC_Scope, 63|128,1/*191*/, /*->12790*/ // 2 children in Scope
/*12599*/       OPC_RecordChild0, // #1 = $x
/*12600*/       OPC_MoveChild, 1,
/*12602*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*12605*/       OPC_Scope, 14|128,1/*142*/, /*->12750*/ // 2 children in Scope
/*12608*/         OPC_RecordChild0, // #2 = $y
/*12609*/         OPC_MoveChild, 1,
/*12611*/         OPC_CheckSame, 0,
/*12613*/         OPC_MoveParent,
/*12614*/         OPC_MoveParent,
/*12615*/         OPC_MoveParent,
/*12616*/         OPC_CheckType, MVT::i32,
/*12618*/         OPC_Scope, 100, /*->12720*/ // 2 children in Scope
/*12620*/           OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*12622*/           OPC_EmitInteger, MVT::i32, 0, 
/*12625*/           OPC_EmitInteger, MVT::i32, 0, 
/*12628*/           OPC_EmitInteger, MVT::i32, 0, 
/*12631*/           OPC_EmitInteger, MVT::i32, 0, 
/*12634*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12646*/           OPC_EmitInteger, MVT::i32, 0, 
/*12649*/           OPC_EmitInteger, MVT::i32, 0, 
/*12652*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12664*/           OPC_EmitInteger, MVT::i32, 0, 
/*12667*/           OPC_EmitInteger, MVT::i32, 0, 
/*12670*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12682*/           OPC_EmitInteger, MVT::i32, 1, 
/*12685*/           OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*12689*/           OPC_EmitInteger, MVT::i32, 0, 
/*12692*/           OPC_EmitInteger, MVT::i32, 0, 
/*12695*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:i32 i32:i32:$z, (and:i32 i32:i32:$x, (xor:i32 i32:i32:$y, i32:i32:$z))) - Complexity = 9
                    // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*12720*/         /*Scope*/ 28, /*->12749*/
/*12721*/           OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*12723*/           OPC_EmitInteger, MVT::i32, 0, 
/*12726*/           OPC_EmitInteger, MVT::i32, 0, 
/*12729*/           OPC_EmitInteger, MVT::i32, 0, 
/*12732*/           OPC_EmitInteger, MVT::i32, 0, 
/*12735*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 
                    // Src: (xor:i32 i32:i32:$z, (and:i32 i32:i32:$x, (xor:i32 i32:i32:$y, i32:i32:$z))) - Complexity = 9
                    // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*12749*/         0, /*End of Scope*/
/*12750*/       /*Scope*/ 38, /*->12789*/
/*12751*/         OPC_MoveChild, 0,
/*12753*/         OPC_CheckSame, 0,
/*12755*/         OPC_MoveParent,
/*12756*/         OPC_RecordChild1, // #2 = $y
/*12757*/         OPC_MoveParent,
/*12758*/         OPC_MoveParent,
/*12759*/         OPC_CheckType, MVT::i32,
/*12761*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*12763*/         OPC_EmitInteger, MVT::i32, 0, 
/*12766*/         OPC_EmitInteger, MVT::i32, 0, 
/*12769*/         OPC_EmitInteger, MVT::i32, 0, 
/*12772*/         OPC_EmitInteger, MVT::i32, 0, 
/*12775*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 
                  // Src: (xor:i32 i32:i32:$z, (and:i32 i32:i32:$x, (xor:i32 i32:i32:$z, i32:i32:$y))) - Complexity = 9
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*12789*/       0, /*End of Scope*/
/*12790*/     /*Scope*/ 87, /*->12878*/
/*12791*/       OPC_MoveChild, 0,
/*12793*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*12796*/       OPC_Scope, 39, /*->12837*/ // 2 children in Scope
/*12798*/         OPC_RecordChild0, // #1 = $y
/*12799*/         OPC_MoveChild, 1,
/*12801*/         OPC_CheckSame, 0,
/*12803*/         OPC_MoveParent,
/*12804*/         OPC_MoveParent,
/*12805*/         OPC_RecordChild1, // #2 = $x
/*12806*/         OPC_MoveParent,
/*12807*/         OPC_CheckType, MVT::i32,
/*12809*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*12811*/         OPC_EmitInteger, MVT::i32, 0, 
/*12814*/         OPC_EmitInteger, MVT::i32, 0, 
/*12817*/         OPC_EmitInteger, MVT::i32, 0, 
/*12820*/         OPC_EmitInteger, MVT::i32, 0, 
/*12823*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 2, 1, 0, 3, 4, 5, 6, 
                  // Src: (xor:i32 i32:i32:$z, (and:i32 (xor:i32 i32:i32:$y, i32:i32:$z), i32:i32:$x)) - Complexity = 9
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*12837*/       /*Scope*/ 39, /*->12877*/
/*12838*/         OPC_MoveChild, 0,
/*12840*/         OPC_CheckSame, 0,
/*12842*/         OPC_MoveParent,
/*12843*/         OPC_RecordChild1, // #1 = $y
/*12844*/         OPC_MoveParent,
/*12845*/         OPC_RecordChild1, // #2 = $x
/*12846*/         OPC_MoveParent,
/*12847*/         OPC_CheckType, MVT::i32,
/*12849*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*12851*/         OPC_EmitInteger, MVT::i32, 0, 
/*12854*/         OPC_EmitInteger, MVT::i32, 0, 
/*12857*/         OPC_EmitInteger, MVT::i32, 0, 
/*12860*/         OPC_EmitInteger, MVT::i32, 0, 
/*12863*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 2, 1, 0, 3, 4, 5, 6, 
                  // Src: (xor:i32 i32:i32:$z, (and:i32 (xor:i32 i32:i32:$z, i32:i32:$y), i32:i32:$x)) - Complexity = 9
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*12877*/       0, /*End of Scope*/
/*12878*/     0, /*End of Scope*/
/*12879*/   /*Scope*/ 45|128,1/*173*/, /*->13054*/
/*12881*/     OPC_MoveChild, 0,
/*12883*/     OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*12886*/     OPC_Scope, 82, /*->12970*/ // 2 children in Scope
/*12888*/       OPC_RecordChild0, // #0 = $x
/*12889*/       OPC_MoveChild, 1,
/*12891*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*12894*/       OPC_RecordChild0, // #1 = $y
/*12895*/       OPC_RecordChild1, // #2 = $z
/*12896*/       OPC_MoveParent,
/*12897*/       OPC_MoveParent,
/*12898*/       OPC_MoveChild, 1,
/*12900*/       OPC_Scope, 33, /*->12935*/ // 2 children in Scope
/*12902*/         OPC_CheckSame, 2,
/*12904*/         OPC_MoveParent,
/*12905*/         OPC_CheckType, MVT::i32,
/*12907*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*12909*/         OPC_EmitInteger, MVT::i32, 0, 
/*12912*/         OPC_EmitInteger, MVT::i32, 0, 
/*12915*/         OPC_EmitInteger, MVT::i32, 0, 
/*12918*/         OPC_EmitInteger, MVT::i32, 0, 
/*12921*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
                  // Src: (xor:i32 (and:i32 i32:i32:$x, (xor:i32 i32:i32:$y, i32:i32:$z)), i32:i32:$z) - Complexity = 9
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*12935*/       /*Scope*/ 33, /*->12969*/
/*12936*/         OPC_CheckSame, 1,
/*12938*/         OPC_MoveParent,
/*12939*/         OPC_CheckType, MVT::i32,
/*12941*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*12943*/         OPC_EmitInteger, MVT::i32, 0, 
/*12946*/         OPC_EmitInteger, MVT::i32, 0, 
/*12949*/         OPC_EmitInteger, MVT::i32, 0, 
/*12952*/         OPC_EmitInteger, MVT::i32, 0, 
/*12955*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 2, 1, 3, 4, 5, 6, 
                  // Src: (xor:i32 (and:i32 i32:i32:$x, (xor:i32 i32:i32:$z, i32:i32:$y)), i32:i32:$z) - Complexity = 9
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*12969*/       0, /*End of Scope*/
/*12970*/     /*Scope*/ 82, /*->13053*/
/*12971*/       OPC_MoveChild, 0,
/*12973*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*12976*/       OPC_RecordChild0, // #0 = $y
/*12977*/       OPC_RecordChild1, // #1 = $z
/*12978*/       OPC_MoveParent,
/*12979*/       OPC_RecordChild1, // #2 = $x
/*12980*/       OPC_MoveParent,
/*12981*/       OPC_MoveChild, 1,
/*12983*/       OPC_Scope, 33, /*->13018*/ // 2 children in Scope
/*12985*/         OPC_CheckSame, 1,
/*12987*/         OPC_MoveParent,
/*12988*/         OPC_CheckType, MVT::i32,
/*12990*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*12992*/         OPC_EmitInteger, MVT::i32, 0, 
/*12995*/         OPC_EmitInteger, MVT::i32, 0, 
/*12998*/         OPC_EmitInteger, MVT::i32, 0, 
/*13001*/         OPC_EmitInteger, MVT::i32, 0, 
/*13004*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 2, 0, 1, 3, 4, 5, 6, 
                  // Src: (xor:i32 (and:i32 (xor:i32 i32:i32:$y, i32:i32:$z), i32:i32:$x), i32:i32:$z) - Complexity = 9
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*13018*/       /*Scope*/ 33, /*->13052*/
/*13019*/         OPC_CheckSame, 0,
/*13021*/         OPC_MoveParent,
/*13022*/         OPC_CheckType, MVT::i32,
/*13024*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*13026*/         OPC_EmitInteger, MVT::i32, 0, 
/*13029*/         OPC_EmitInteger, MVT::i32, 0, 
/*13032*/         OPC_EmitInteger, MVT::i32, 0, 
/*13035*/         OPC_EmitInteger, MVT::i32, 0, 
/*13038*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 2, 1, 0, 3, 4, 5, 6, 
                  // Src: (xor:i32 (and:i32 (xor:i32 i32:i32:$z, i32:i32:$y), i32:i32:$x), i32:i32:$z) - Complexity = 9
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*13052*/       0, /*End of Scope*/
/*13053*/     0, /*End of Scope*/
/*13054*/   /*Scope*/ 102|128,2/*358*/, /*->13414*/
/*13056*/     OPC_RecordChild0, // #0 = $z
/*13057*/     OPC_MoveChild, 1,
/*13059*/     OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*13062*/     OPC_Scope, 116, /*->13180*/ // 2 children in Scope
/*13064*/       OPC_RecordChild0, // #1 = $x
/*13065*/       OPC_MoveChild, 1,
/*13067*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*13070*/       OPC_MoveChild, 0,
/*13072*/       OPC_CheckSame, 0,
/*13074*/       OPC_MoveParent,
/*13075*/       OPC_RecordChild1, // #2 = $y
/*13076*/       OPC_MoveParent,
/*13077*/       OPC_MoveParent,
/*13078*/       OPC_CheckType, MVT::i32,
/*13080*/       OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*13082*/       OPC_EmitInteger, MVT::i32, 0, 
/*13085*/       OPC_EmitInteger, MVT::i32, 0, 
/*13088*/       OPC_EmitInteger, MVT::i32, 0, 
/*13091*/       OPC_EmitInteger, MVT::i32, 0, 
/*13094*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13106*/       OPC_EmitInteger, MVT::i32, 0, 
/*13109*/       OPC_EmitInteger, MVT::i32, 0, 
/*13112*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13124*/       OPC_EmitInteger, MVT::i32, 0, 
/*13127*/       OPC_EmitInteger, MVT::i32, 0, 
/*13130*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13142*/       OPC_EmitInteger, MVT::i32, 1, 
/*13145*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*13149*/       OPC_EmitInteger, MVT::i32, 0, 
/*13152*/       OPC_EmitInteger, MVT::i32, 0, 
/*13155*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                    1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                // Src: (xor:i32 i32:i32:$z, (and:i32 i32:i32:$x, (xor:i32 i32:i32:$z, i32:i32:$y))) - Complexity = 9
                // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*13180*/     /*Scope*/ 103|128,1/*231*/, /*->13413*/
/*13182*/       OPC_MoveChild, 0,
/*13184*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*13187*/       OPC_Scope, 111, /*->13300*/ // 2 children in Scope
/*13189*/         OPC_RecordChild0, // #1 = $y
/*13190*/         OPC_MoveChild, 1,
/*13192*/         OPC_CheckSame, 0,
/*13194*/         OPC_MoveParent,
/*13195*/         OPC_MoveParent,
/*13196*/         OPC_RecordChild1, // #2 = $x
/*13197*/         OPC_MoveParent,
/*13198*/         OPC_CheckType, MVT::i32,
/*13200*/         OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*13202*/         OPC_EmitInteger, MVT::i32, 0, 
/*13205*/         OPC_EmitInteger, MVT::i32, 0, 
/*13208*/         OPC_EmitInteger, MVT::i32, 0, 
/*13211*/         OPC_EmitInteger, MVT::i32, 0, 
/*13214*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13226*/         OPC_EmitInteger, MVT::i32, 0, 
/*13229*/         OPC_EmitInteger, MVT::i32, 0, 
/*13232*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13244*/         OPC_EmitInteger, MVT::i32, 0, 
/*13247*/         OPC_EmitInteger, MVT::i32, 0, 
/*13250*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13262*/         OPC_EmitInteger, MVT::i32, 1, 
/*13265*/         OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*13269*/         OPC_EmitInteger, MVT::i32, 0, 
/*13272*/         OPC_EmitInteger, MVT::i32, 0, 
/*13275*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 1, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (xor:i32 i32:i32:$z, (and:i32 (xor:i32 i32:i32:$y, i32:i32:$z), i32:i32:$x)) - Complexity = 9
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*13300*/       /*Scope*/ 111, /*->13412*/
/*13301*/         OPC_MoveChild, 0,
/*13303*/         OPC_CheckSame, 0,
/*13305*/         OPC_MoveParent,
/*13306*/         OPC_RecordChild1, // #1 = $y
/*13307*/         OPC_MoveParent,
/*13308*/         OPC_RecordChild1, // #2 = $x
/*13309*/         OPC_MoveParent,
/*13310*/         OPC_CheckType, MVT::i32,
/*13312*/         OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*13314*/         OPC_EmitInteger, MVT::i32, 0, 
/*13317*/         OPC_EmitInteger, MVT::i32, 0, 
/*13320*/         OPC_EmitInteger, MVT::i32, 0, 
/*13323*/         OPC_EmitInteger, MVT::i32, 0, 
/*13326*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13338*/         OPC_EmitInteger, MVT::i32, 0, 
/*13341*/         OPC_EmitInteger, MVT::i32, 0, 
/*13344*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13356*/         OPC_EmitInteger, MVT::i32, 0, 
/*13359*/         OPC_EmitInteger, MVT::i32, 0, 
/*13362*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13374*/         OPC_EmitInteger, MVT::i32, 1, 
/*13377*/         OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*13381*/         OPC_EmitInteger, MVT::i32, 0, 
/*13384*/         OPC_EmitInteger, MVT::i32, 0, 
/*13387*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 1, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (xor:i32 i32:i32:$z, (and:i32 (xor:i32 i32:i32:$z, i32:i32:$y), i32:i32:$x)) - Complexity = 9
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*13412*/       0, /*End of Scope*/
/*13413*/     0, /*End of Scope*/
/*13414*/   /*Scope*/ 79|128,3/*463*/, /*->13879*/
/*13416*/     OPC_MoveChild, 0,
/*13418*/     OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*13421*/     OPC_Scope, 98|128,1/*226*/, /*->13650*/ // 2 children in Scope
/*13424*/       OPC_RecordChild0, // #0 = $x
/*13425*/       OPC_MoveChild, 1,
/*13427*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*13430*/       OPC_RecordChild0, // #1 = $y
/*13431*/       OPC_RecordChild1, // #2 = $z
/*13432*/       OPC_MoveParent,
/*13433*/       OPC_MoveParent,
/*13434*/       OPC_MoveChild, 1,
/*13436*/       OPC_Scope, 105, /*->13543*/ // 2 children in Scope
/*13438*/         OPC_CheckSame, 2,
/*13440*/         OPC_MoveParent,
/*13441*/         OPC_CheckType, MVT::i32,
/*13443*/         OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*13445*/         OPC_EmitInteger, MVT::i32, 0, 
/*13448*/         OPC_EmitInteger, MVT::i32, 0, 
/*13451*/         OPC_EmitInteger, MVT::i32, 0, 
/*13454*/         OPC_EmitInteger, MVT::i32, 0, 
/*13457*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13469*/         OPC_EmitInteger, MVT::i32, 0, 
/*13472*/         OPC_EmitInteger, MVT::i32, 0, 
/*13475*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13487*/         OPC_EmitInteger, MVT::i32, 0, 
/*13490*/         OPC_EmitInteger, MVT::i32, 0, 
/*13493*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13505*/         OPC_EmitInteger, MVT::i32, 1, 
/*13508*/         OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*13512*/         OPC_EmitInteger, MVT::i32, 0, 
/*13515*/         OPC_EmitInteger, MVT::i32, 0, 
/*13518*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (xor:i32 (and:i32 i32:i32:$x, (xor:i32 i32:i32:$y, i32:i32:$z)), i32:i32:$z) - Complexity = 9
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*13543*/       /*Scope*/ 105, /*->13649*/
/*13544*/         OPC_CheckSame, 1,
/*13546*/         OPC_MoveParent,
/*13547*/         OPC_CheckType, MVT::i32,
/*13549*/         OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*13551*/         OPC_EmitInteger, MVT::i32, 0, 
/*13554*/         OPC_EmitInteger, MVT::i32, 0, 
/*13557*/         OPC_EmitInteger, MVT::i32, 0, 
/*13560*/         OPC_EmitInteger, MVT::i32, 0, 
/*13563*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13575*/         OPC_EmitInteger, MVT::i32, 0, 
/*13578*/         OPC_EmitInteger, MVT::i32, 0, 
/*13581*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13593*/         OPC_EmitInteger, MVT::i32, 0, 
/*13596*/         OPC_EmitInteger, MVT::i32, 0, 
/*13599*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13611*/         OPC_EmitInteger, MVT::i32, 1, 
/*13614*/         OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*13618*/         OPC_EmitInteger, MVT::i32, 0, 
/*13621*/         OPC_EmitInteger, MVT::i32, 0, 
/*13624*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 2, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (xor:i32 (and:i32 i32:i32:$x, (xor:i32 i32:i32:$z, i32:i32:$y)), i32:i32:$z) - Complexity = 9
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*13649*/       0, /*End of Scope*/
/*13650*/     /*Scope*/ 98|128,1/*226*/, /*->13878*/
/*13652*/       OPC_MoveChild, 0,
/*13654*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*13657*/       OPC_RecordChild0, // #0 = $y
/*13658*/       OPC_RecordChild1, // #1 = $z
/*13659*/       OPC_MoveParent,
/*13660*/       OPC_RecordChild1, // #2 = $x
/*13661*/       OPC_MoveParent,
/*13662*/       OPC_MoveChild, 1,
/*13664*/       OPC_Scope, 105, /*->13771*/ // 2 children in Scope
/*13666*/         OPC_CheckSame, 1,
/*13668*/         OPC_MoveParent,
/*13669*/         OPC_CheckType, MVT::i32,
/*13671*/         OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*13673*/         OPC_EmitInteger, MVT::i32, 0, 
/*13676*/         OPC_EmitInteger, MVT::i32, 0, 
/*13679*/         OPC_EmitInteger, MVT::i32, 0, 
/*13682*/         OPC_EmitInteger, MVT::i32, 0, 
/*13685*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13697*/         OPC_EmitInteger, MVT::i32, 0, 
/*13700*/         OPC_EmitInteger, MVT::i32, 0, 
/*13703*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13715*/         OPC_EmitInteger, MVT::i32, 0, 
/*13718*/         OPC_EmitInteger, MVT::i32, 0, 
/*13721*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13733*/         OPC_EmitInteger, MVT::i32, 1, 
/*13736*/         OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*13740*/         OPC_EmitInteger, MVT::i32, 0, 
/*13743*/         OPC_EmitInteger, MVT::i32, 0, 
/*13746*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 0, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (xor:i32 (and:i32 (xor:i32 i32:i32:$y, i32:i32:$z), i32:i32:$x), i32:i32:$z) - Complexity = 9
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*13771*/       /*Scope*/ 105, /*->13877*/
/*13772*/         OPC_CheckSame, 0,
/*13774*/         OPC_MoveParent,
/*13775*/         OPC_CheckType, MVT::i32,
/*13777*/         OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*13779*/         OPC_EmitInteger, MVT::i32, 0, 
/*13782*/         OPC_EmitInteger, MVT::i32, 0, 
/*13785*/         OPC_EmitInteger, MVT::i32, 0, 
/*13788*/         OPC_EmitInteger, MVT::i32, 0, 
/*13791*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13803*/         OPC_EmitInteger, MVT::i32, 0, 
/*13806*/         OPC_EmitInteger, MVT::i32, 0, 
/*13809*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13821*/         OPC_EmitInteger, MVT::i32, 0, 
/*13824*/         OPC_EmitInteger, MVT::i32, 0, 
/*13827*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13839*/         OPC_EmitInteger, MVT::i32, 1, 
/*13842*/         OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*13846*/         OPC_EmitInteger, MVT::i32, 0, 
/*13849*/         OPC_EmitInteger, MVT::i32, 0, 
/*13852*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 1, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (xor:i32 (and:i32 (xor:i32 i32:i32:$z, i32:i32:$y), i32:i32:$x), i32:i32:$z) - Complexity = 9
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*13877*/       0, /*End of Scope*/
/*13878*/     0, /*End of Scope*/
/*13879*/   /*Scope*/ 81|128,1/*209*/, /*->14090*/
/*13881*/     OPC_RecordChild0, // #0 = $src0
/*13882*/     OPC_Scope, 84, /*->13968*/ // 2 children in Scope
/*13884*/       OPC_MoveChild, 1,
/*13886*/       OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13897*/       OPC_MoveParent,
/*13898*/       OPC_CheckType, MVT::i32,
/*13900*/       OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*13902*/       OPC_EmitInteger, MVT::i32, 1, 
/*13905*/       OPC_EmitInteger, MVT::i32, 0, 
/*13908*/       OPC_EmitInteger, MVT::i32, 0, 
/*13911*/       OPC_EmitInteger, MVT::i32, 0, 
/*13914*/       OPC_EmitInteger, MVT::i32, 0, 
/*13917*/       OPC_EmitInteger, MVT::i32, 0, 
/*13920*/       OPC_EmitInteger, MVT::i32, 0, 
/*13923*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13935*/       OPC_EmitInteger, MVT::i32, 1, 
/*13938*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*13942*/       OPC_EmitInteger, MVT::i32, 0, 
/*13945*/       OPC_EmitInteger, MVT::i32, 0, 
/*13948*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::NOT_INT), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (xor:i32 R600_Reg32:i32:$src0, -1:i32) - Complexity = 8
                // Dst: (NOT_INT:i32 R600_Reg32:i32:$src0)
/*13968*/     /*Scope*/ 120, /*->14089*/
/*13969*/       OPC_RecordChild1, // #1 = $src1
/*13970*/       OPC_CheckType, MVT::i32,
/*13972*/       OPC_Scope, 102, /*->14076*/ // 2 children in Scope
/*13974*/         OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*13976*/         OPC_EmitInteger, MVT::i32, 0, 
/*13979*/         OPC_EmitInteger, MVT::i32, 0, 
/*13982*/         OPC_EmitInteger, MVT::i32, 1, 
/*13985*/         OPC_EmitInteger, MVT::i32, 0, 
/*13988*/         OPC_EmitInteger, MVT::i32, 0, 
/*13991*/         OPC_EmitInteger, MVT::i32, 0, 
/*13994*/         OPC_EmitInteger, MVT::i32, 0, 
/*13997*/         OPC_EmitInteger, MVT::i32, 0, 
/*14000*/         OPC_EmitInteger, MVT::i32, 0, 
/*14003*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*14015*/         OPC_EmitInteger, MVT::i32, 0, 
/*14018*/         OPC_EmitInteger, MVT::i32, 0, 
/*14021*/         OPC_EmitInteger, MVT::i32, 0, 
/*14024*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*14036*/         OPC_EmitInteger, MVT::i32, 1, 
/*14039*/         OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*14043*/         OPC_EmitInteger, MVT::i32, 0, 
/*14046*/         OPC_EmitInteger, MVT::i32, 0, 
/*14049*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::XOR_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (xor:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                  // Dst: (XOR_INT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*14076*/       /*Scope*/ 11, /*->14088*/
/*14077*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*14079*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
                  // Dst: (V_XOR_B32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*14088*/       0, /*End of Scope*/
/*14089*/     0, /*End of Scope*/
/*14090*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 50,  TARGET_VAL(AMDGPUISD::CONST_ADDRESS),// ->14144
/*14094*/   OPC_RecordChild0, // #0 = $src
/*14095*/   OPC_CheckChild0Type, MVT::i32,
/*14097*/   OPC_Scope, 15, /*->14114*/ // 2 children in Scope
/*14099*/     OPC_CheckType, MVT::i32,
/*14101*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*14103*/     OPC_CheckComplexPat, /*CP*/2, /*#*/0, // SelectGlobalValueConstantOffset:$src #1
/*14106*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CONST_COPY), 0|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (CONST_ADDRESS:i32 ADDRGA_CONST_OFFSET:i32:$src) - Complexity = 9
              // Dst: (CONST_COPY:i32 ADDRGA_CONST_OFFSET:i32:$src)
/*14114*/   /*Scope*/ 28, /*->14143*/
/*14115*/     OPC_RecordChild1, // #1 = $BUFFER_ID
/*14116*/     OPC_MoveChild, 1,
/*14118*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14121*/     OPC_CheckType, MVT::i32,
/*14123*/     OPC_MoveParent,
/*14124*/     OPC_CheckType, MVT::v4i32,
/*14126*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*14128*/     OPC_CheckComplexPat, /*CP*/3, /*#*/0, // SelectGlobalValueVariableOffset:$ptr #2 #3
/*14131*/     OPC_EmitConvertToTarget, 1,
/*14133*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_VTX_CONSTBUF), 0|OPFL_Variadic2,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
              // Src: (CONST_ADDRESS:v4i32 ADDRGA_VAR_OFFSET:i32:$ptr, (imm:i32):$BUFFER_ID) - Complexity = 15
              // Dst: (TEX_VTX_CONSTBUF:v4i32 ADDRGA_VAR_OFFSET:i32:$ptr, (imm:i32):$BUFFER_ID)
/*14143*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 51|128,44/*5683*/,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->19831
/*14148*/   OPC_MoveChild, 0,
/*14150*/   OPC_Scope, 115, /*->14267*/ // 22 children in Scope
/*14152*/     OPC_CheckInteger, 47|128,19/*2479*/, 
/*14155*/     OPC_MoveParent,
/*14156*/     OPC_RecordChild1, // #0 = $src0
/*14157*/     OPC_CheckChild1Type, MVT::i32,
/*14159*/     OPC_RecordChild2, // #1 = $src1
/*14160*/     OPC_CheckChild2Type, MVT::i32,
/*14162*/     OPC_RecordChild3, // #2 = $src2
/*14163*/     OPC_CheckChild3Type, MVT::i32,
/*14165*/     OPC_CheckType, MVT::i32,
/*14167*/     OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*14169*/     OPC_EmitInteger, MVT::i32, 0, 
/*14172*/     OPC_EmitInteger, MVT::i32, 0, 
/*14175*/     OPC_EmitInteger, MVT::i32, 0, 
/*14178*/     OPC_EmitInteger, MVT::i32, 0, 
/*14181*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*14193*/     OPC_EmitInteger, MVT::i32, 0, 
/*14196*/     OPC_EmitInteger, MVT::i32, 0, 
/*14199*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*14211*/     OPC_EmitInteger, MVT::i32, 0, 
/*14214*/     OPC_EmitInteger, MVT::i32, 0, 
/*14217*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*14229*/     OPC_EmitInteger, MVT::i32, 1, 
/*14232*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*14236*/     OPC_EmitInteger, MVT::i32, 0, 
/*14239*/     OPC_EmitInteger, MVT::i32, 0, 
/*14242*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFE_UINT_eg), 0,
                  1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (intrinsic_wo_chain:i32 2479:iPTR, i32:i32:$src0, i32:i32:$src1, i32:i32:$src2) - Complexity = 8
              // Dst: (BFE_UINT_eg:i32 i32:i32:$src0, i32:i32:$src1, i32:i32:$src2)
/*14267*/   /*Scope*/ 17, /*->14285*/
/*14268*/     OPC_CheckInteger, 21|128,20/*2581*/, 
/*14271*/     OPC_MoveParent,
/*14272*/     OPC_RecordChild1, // #0 = $src0
/*14273*/     OPC_RecordChild2, // #1 = $src1
/*14274*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*14276*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_PKRTZ_F16_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 2581:iPTR, f32:f32:$src0, f32:f32:$src1) - Complexity = 8
              // Dst: (V_CVT_PKRTZ_F16_F32_e32:i32 f32:f32:$src0, f32:f32:$src1)
/*14285*/   /*Scope*/ 73, /*->14359*/
/*14286*/     OPC_CheckInteger, 55|128,19/*2487*/, 
/*14289*/     OPC_MoveParent,
/*14290*/     OPC_RecordChild1, // #0 = $src
/*14291*/     OPC_CheckChild1Type, MVT::f32,
/*14293*/     OPC_MoveChild, 2,
/*14295*/     OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*14298*/     OPC_CheckPredicate, 9, // Predicate_FP_ZERO
/*14300*/     OPC_CheckType, MVT::f32,
/*14302*/     OPC_MoveParent,
/*14303*/     OPC_MoveChild, 3,
/*14305*/     OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*14308*/     OPC_CheckPredicate, 8, // Predicate_FP_ONE
/*14310*/     OPC_CheckType, MVT::f32,
/*14312*/     OPC_MoveParent,
/*14313*/     OPC_CheckType, MVT::f32,
/*14315*/     OPC_Scope, 30, /*->14347*/ // 2 children in Scope
/*14317*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*14319*/       OPC_EmitInteger, MVT::i32, 0, 
/*14322*/       OPC_EmitInteger, MVT::i32, 0, 
/*14325*/       OPC_EmitInteger, MVT::i32, 1, 
/*14328*/       OPC_EmitInteger, MVT::i32, 0, 
/*14331*/       OPC_EmitInteger, MVT::i32, 0, 
/*14334*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ADD_F32_e64), 0,
                    1/*#VTs*/, MVT::f32, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (intrinsic_wo_chain:f32 2487:iPTR, f32:f32:$src, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (fpimm:f32)<<P:Predicate_FP_ONE>>) - Complexity = 16
                // Dst: (V_ADD_F32_e64:f32 ?:f32:$src, 0:i32, 0:i32, 1:i32, 0:i32, 0:i32)
/*14347*/     /*Scope*/ 10, /*->14358*/
/*14348*/       OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*14350*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CLAMP_R600), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:f32 2487:iPTR, f32:f32:$src0, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (fpimm:f32)<<P:Predicate_FP_ONE>>) - Complexity = 16
                // Dst: (CLAMP_R600:f32 f32:f32:$src0)
/*14358*/     0, /*End of Scope*/
/*14359*/   /*Scope*/ 39, /*->14399*/
/*14360*/     OPC_CheckInteger, 14|128,20/*2574*/, 
/*14363*/     OPC_MoveParent,
/*14364*/     OPC_RecordChild1, // #0 = $attr_chan
/*14365*/     OPC_MoveChild, 1,
/*14367*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14370*/     OPC_MoveParent,
/*14371*/     OPC_RecordChild2, // #1 = $attr
/*14372*/     OPC_MoveChild, 2,
/*14374*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14377*/     OPC_MoveParent,
/*14378*/     OPC_RecordChild3, // #2 = $params
/*14379*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*14381*/     OPC_EmitInteger, MVT::i32, 2, 
/*14384*/     OPC_EmitConvertToTarget, 0,
/*14386*/     OPC_EmitConvertToTarget, 1,
/*14388*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_INTERP_MOV_F32), 0,
                  1/*#VTs*/, MVT::f32, 4/*#Ops*/, 3, 4, 5, 2, 
              // Src: (intrinsic_wo_chain:f32 2574:iPTR, (imm:i32):$attr_chan, (imm:i32):$attr, i32:i32:$params) - Complexity = 14
              // Dst: (V_INTERP_MOV_F32:f32 2:i32, (imm:i32):$attr_chan, (imm:i32):$attr, ?:i32:$params)
/*14399*/   /*Scope*/ 77, /*->14477*/
/*14400*/     OPC_CheckInteger, 15|128,20/*2575*/, 
/*14403*/     OPC_MoveParent,
/*14404*/     OPC_RecordChild1, // #0 = $attr_chan
/*14405*/     OPC_MoveChild, 1,
/*14407*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14410*/     OPC_MoveParent,
/*14411*/     OPC_RecordChild2, // #1 = $attr
/*14412*/     OPC_MoveChild, 2,
/*14414*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14417*/     OPC_MoveParent,
/*14418*/     OPC_RecordChild3, // #2 = $params
/*14419*/     OPC_RecordChild4, // #3 = $ij
/*14420*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*14422*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*14425*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*14434*/     OPC_EmitConvertToTarget, 0,
/*14436*/     OPC_EmitConvertToTarget, 1,
/*14438*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_INTERP_P1_F32), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 5, 6, 7, 2,  // Results = #8
/*14449*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*14452*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 9,  // Results = #10
/*14461*/     OPC_EmitConvertToTarget, 0,
/*14463*/     OPC_EmitConvertToTarget, 1,
/*14465*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_INTERP_P2_F32), 0,
                  1/*#VTs*/, MVT::f32, 5/*#Ops*/, 8, 10, 11, 12, 2, 
              // Src: (intrinsic_wo_chain:f32 2575:iPTR, (imm:i32):$attr_chan, (imm:i32):$attr, M0Reg:i32:$params, v2i32:v2i32:$ij) - Complexity = 14
              // Dst: (V_INTERP_P2_F32:f32 (V_INTERP_P1_F32:i32 (EXTRACT_SUBREG:i32 v2i32:v2i32:$ij, sub0:i32), (imm:i32):$attr_chan, (imm:i32):$attr, i32:i32:$params), (EXTRACT_SUBREG:i32 ?:v2i32:$ij, sub1:i32), (imm:i32):$attr_chan, (imm:i32):$attr, ?:i32:$params)
/*14477*/   /*Scope*/ 71, /*->14549*/
/*14478*/     OPC_CheckInteger, 19|128,20/*2579*/, 
/*14481*/     OPC_MoveParent,
/*14482*/     OPC_RecordChild1, // #0 = $sbase
/*14483*/     OPC_RecordChild2, // #1 = $offset
/*14484*/     OPC_Scope, 50, /*->14536*/ // 2 children in Scope
/*14486*/       OPC_MoveChild, 2,
/*14488*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14491*/       OPC_Scope, 19, /*->14512*/ // 2 children in Scope
/*14493*/         OPC_CheckPredicate, 21, // Predicate_IMM8bitDWORD
/*14495*/         OPC_MoveParent,
/*14496*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*14498*/         OPC_EmitConvertToTarget, 1,
/*14500*/         OPC_EmitNodeXForm, 0, 2, // anonymous.val.371
/*14503*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_BUFFER_LOAD_DWORD_IMM), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 3, 
                  // Src: (intrinsic_wo_chain:f32 2579:iPTR, v16i8:v16i8:$sbase, (imm:i32)<<P:Predicate_IMM8bitDWORD>><<X:anonymous.val.371>>:$offset) - Complexity = 12
                  // Dst: (S_BUFFER_LOAD_DWORD_IMM:f32 ?:v16i8:$sbase, (anonymous.val.371:i32 (imm:i32)<<P:Predicate_IMM8bitDWORD>>:$offset))
/*14512*/       /*Scope*/ 22, /*->14535*/
/*14513*/         OPC_MoveParent,
/*14514*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*14516*/         OPC_EmitConvertToTarget, 1,
/*14518*/         OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*14526*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_BUFFER_LOAD_DWORD_SGPR), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 3, 
                  // Src: (intrinsic_wo_chain:f32 2579:iPTR, v16i8:v16i8:$sbase, (imm:i32):$offset) - Complexity = 11
                  // Dst: (S_BUFFER_LOAD_DWORD_SGPR:f32 ?:v16i8:$sbase, (S_MOV_B32:i32 (imm:i32):$offset))
/*14535*/       0, /*End of Scope*/
/*14536*/     /*Scope*/ 11, /*->14548*/
/*14537*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*14539*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORD_OFFEN), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:f32 2579:iPTR, v16i8:v16i8:$sbase, i32:i32:$voff) - Complexity = 8
                // Dst: (BUFFER_LOAD_DWORD_OFFEN:f32 ?:v16i8:$sbase, ?:i32:$voff)
/*14548*/     0, /*End of Scope*/
/*14549*/   /*Scope*/ 23, /*->14573*/
/*14550*/     OPC_CheckInteger, 14|128,19/*2446*/, 
/*14553*/     OPC_MoveParent,
/*14554*/     OPC_RecordChild1, // #0 = $src
/*14555*/     OPC_MoveChild, 1,
/*14557*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14560*/     OPC_MoveParent,
/*14561*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*14563*/     OPC_EmitConvertToTarget, 0,
/*14565*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LOAD_CONST), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_wo_chain:f32 2446:iPTR, (imm:i32):$src) - Complexity = 11
              // Dst: (LOAD_CONST:f32 (imm:i32):$src)
/*14573*/   /*Scope*/ 123, /*->14697*/
/*14574*/     OPC_CheckInteger, 17|128,19/*2449*/, 
/*14577*/     OPC_MoveParent,
/*14578*/     OPC_RecordChild1, // #0 = $src0
/*14579*/     OPC_RecordChild2, // #1 = $src1
/*14580*/     OPC_Scope, 102, /*->14684*/ // 2 children in Scope
/*14582*/       OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*14584*/       OPC_EmitInteger, MVT::i32, 0, 
/*14587*/       OPC_EmitInteger, MVT::i32, 0, 
/*14590*/       OPC_EmitInteger, MVT::i32, 1, 
/*14593*/       OPC_EmitInteger, MVT::i32, 0, 
/*14596*/       OPC_EmitInteger, MVT::i32, 0, 
/*14599*/       OPC_EmitInteger, MVT::i32, 0, 
/*14602*/       OPC_EmitInteger, MVT::i32, 0, 
/*14605*/       OPC_EmitInteger, MVT::i32, 0, 
/*14608*/       OPC_EmitInteger, MVT::i32, 0, 
/*14611*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*14623*/       OPC_EmitInteger, MVT::i32, 0, 
/*14626*/       OPC_EmitInteger, MVT::i32, 0, 
/*14629*/       OPC_EmitInteger, MVT::i32, 0, 
/*14632*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*14644*/       OPC_EmitInteger, MVT::i32, 1, 
/*14647*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*14651*/       OPC_EmitInteger, MVT::i32, 0, 
/*14654*/       OPC_EmitInteger, MVT::i32, 0, 
/*14657*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (intrinsic_wo_chain:f32 2449:iPTR, R600_Reg32:f32:$src0, R600_Reg32:f32:$src1) - Complexity = 8
                // Dst: (MUL:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1)
/*14684*/     /*Scope*/ 11, /*->14696*/
/*14685*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*14687*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_LEGACY_F32_e32), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:f32 2449:iPTR, f32:f32:$src0, f32:f32:$src1) - Complexity = 8
                // Dst: (V_MUL_LEGACY_F32_e32:f32 f32:f32:$src0, f32:f32:$src1)
/*14696*/     0, /*End of Scope*/
/*14697*/   /*Scope*/ 87, /*->14785*/
/*14698*/     OPC_CheckInteger, 31|128,19/*2463*/, 
/*14701*/     OPC_MoveParent,
/*14702*/     OPC_RecordChild1, // #0 = $src0
/*14703*/     OPC_Scope, 68, /*->14773*/ // 2 children in Scope
/*14705*/       OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*14707*/       OPC_EmitInteger, MVT::i32, 1, 
/*14710*/       OPC_EmitInteger, MVT::i32, 0, 
/*14713*/       OPC_EmitInteger, MVT::i32, 0, 
/*14716*/       OPC_EmitInteger, MVT::i32, 0, 
/*14719*/       OPC_EmitInteger, MVT::i32, 0, 
/*14722*/       OPC_EmitInteger, MVT::i32, 0, 
/*14725*/       OPC_EmitInteger, MVT::i32, 0, 
/*14728*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*14740*/       OPC_EmitInteger, MVT::i32, 1, 
/*14743*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*14747*/       OPC_EmitInteger, MVT::i32, 0, 
/*14750*/       OPC_EmitInteger, MVT::i32, 0, 
/*14753*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TRUNC), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_wo_chain:f32 2463:iPTR, R600_Reg32:f32:$src0) - Complexity = 8
                // Dst: (TRUNC:f32 R600_Reg32:f32:$src0)
/*14773*/     /*Scope*/ 10, /*->14784*/
/*14774*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*14776*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_TRUNC_F32_e32), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:f32 2463:iPTR, f32:f32:$src0) - Complexity = 8
                // Dst: (V_TRUNC_F32_e32:f32 f32:f32:$src0)
/*14784*/     0, /*End of Scope*/
/*14785*/   /*Scope*/ 97|128,1/*225*/, /*->15012*/
/*14787*/     OPC_CheckInteger, 22|128,19/*2454*/, 
/*14790*/     OPC_MoveParent,
/*14791*/     OPC_RecordChild1, // #0 = $src0
/*14792*/     OPC_Scope, 68, /*->14862*/ // 4 children in Scope
/*14794*/       OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*14796*/       OPC_EmitInteger, MVT::i32, 1, 
/*14799*/       OPC_EmitInteger, MVT::i32, 0, 
/*14802*/       OPC_EmitInteger, MVT::i32, 0, 
/*14805*/       OPC_EmitInteger, MVT::i32, 0, 
/*14808*/       OPC_EmitInteger, MVT::i32, 0, 
/*14811*/       OPC_EmitInteger, MVT::i32, 0, 
/*14814*/       OPC_EmitInteger, MVT::i32, 0, 
/*14817*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*14829*/       OPC_EmitInteger, MVT::i32, 1, 
/*14832*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*14836*/       OPC_EmitInteger, MVT::i32, 0, 
/*14839*/       OPC_EmitInteger, MVT::i32, 0, 
/*14842*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIPSQRT_CLAMPED_r600), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_wo_chain:f32 2454:iPTR, R600_Reg32:f32:$src0) - Complexity = 8
                // Dst: (RECIPSQRT_CLAMPED_r600:f32 R600_Reg32:f32:$src0)
/*14862*/     /*Scope*/ 68, /*->14931*/
/*14863*/       OPC_CheckPatternPredicate, 4, // (Subtarget.device()->getGeneration() >= AMDGPUDeviceInfo::HD5XXX && Subtarget.device()->getGeneration() < AMDGPUDeviceInfo::HD7XXX && Subtarget.device()->getDeviceFlag() != OCL_DEVICE_CAYMAN)
/*14865*/       OPC_EmitInteger, MVT::i32, 1, 
/*14868*/       OPC_EmitInteger, MVT::i32, 0, 
/*14871*/       OPC_EmitInteger, MVT::i32, 0, 
/*14874*/       OPC_EmitInteger, MVT::i32, 0, 
/*14877*/       OPC_EmitInteger, MVT::i32, 0, 
/*14880*/       OPC_EmitInteger, MVT::i32, 0, 
/*14883*/       OPC_EmitInteger, MVT::i32, 0, 
/*14886*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*14898*/       OPC_EmitInteger, MVT::i32, 1, 
/*14901*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*14905*/       OPC_EmitInteger, MVT::i32, 0, 
/*14908*/       OPC_EmitInteger, MVT::i32, 0, 
/*14911*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIPSQRT_CLAMPED_eg), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_wo_chain:f32 2454:iPTR, R600_Reg32:f32:$src0) - Complexity = 8
                // Dst: (RECIPSQRT_CLAMPED_eg:f32 R600_Reg32:f32:$src0)
/*14931*/     /*Scope*/ 68, /*->15000*/
/*14932*/       OPC_CheckPatternPredicate, 5, // (Subtarget.device()->getDeviceFlag() == OCL_DEVICE_CAYMAN)
/*14934*/       OPC_EmitInteger, MVT::i32, 1, 
/*14937*/       OPC_EmitInteger, MVT::i32, 0, 
/*14940*/       OPC_EmitInteger, MVT::i32, 0, 
/*14943*/       OPC_EmitInteger, MVT::i32, 0, 
/*14946*/       OPC_EmitInteger, MVT::i32, 0, 
/*14949*/       OPC_EmitInteger, MVT::i32, 0, 
/*14952*/       OPC_EmitInteger, MVT::i32, 0, 
/*14955*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*14967*/       OPC_EmitInteger, MVT::i32, 1, 
/*14970*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*14974*/       OPC_EmitInteger, MVT::i32, 0, 
/*14977*/       OPC_EmitInteger, MVT::i32, 0, 
/*14980*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIPSQRT_CLAMPED_cm), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_wo_chain:f32 2454:iPTR, R600_Reg32:f32:$src0) - Complexity = 8
                // Dst: (RECIPSQRT_CLAMPED_cm:f32 R600_Reg32:f32:$src0)
/*15000*/     /*Scope*/ 10, /*->15011*/
/*15001*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*15003*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_RSQ_LEGACY_F32_e32), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:f32 2454:iPTR, f32:f32:$src0) - Complexity = 8
                // Dst: (V_RSQ_LEGACY_F32_e32:f32 f32:f32:$src0)
/*15011*/     0, /*End of Scope*/
/*15012*/   /*Scope*/ 26|128,4/*538*/, /*->15552*/
/*15014*/     OPC_CheckInteger, 8|128,19/*2440*/, 
/*15017*/     OPC_MoveParent,
/*15018*/     OPC_RecordChild1, // #0 = $src0
/*15019*/     OPC_RecordChild2, // #1 = $src1
/*15020*/     OPC_Scope, 40|128,1/*168*/, /*->15191*/ // 4 children in Scope
/*15023*/       OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*15025*/       OPC_EmitInteger, MVT::i32, 0, 
/*15028*/       OPC_EmitInteger, MVT::i32, 0, 
/*15031*/       OPC_EmitInteger, MVT::i32, 1, 
/*15034*/       OPC_EmitInteger, MVT::i32, 0, 
/*15037*/       OPC_EmitInteger, MVT::i32, 0, 
/*15040*/       OPC_EmitInteger, MVT::i32, 0, 
/*15043*/       OPC_EmitInteger, MVT::i32, 0, 
/*15046*/       OPC_EmitInteger, MVT::i32, 0, 
/*15049*/       OPC_EmitInteger, MVT::i32, 0, 
/*15052*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*15064*/       OPC_EmitInteger, MVT::i32, 1, 
/*15067*/       OPC_EmitInteger, MVT::i32, 0, 
/*15070*/       OPC_EmitInteger, MVT::i32, 0, 
/*15073*/       OPC_EmitInteger, MVT::i32, 0, 
/*15076*/       OPC_EmitInteger, MVT::i32, 0, 
/*15079*/       OPC_EmitInteger, MVT::i32, 0, 
/*15082*/       OPC_EmitInteger, MVT::i32, 0, 
/*15085*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*15097*/       OPC_EmitInteger, MVT::i32, 1, 
/*15100*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*15104*/       OPC_EmitInteger, MVT::i32, 0, 
/*15107*/       OPC_EmitInteger, MVT::i32, 0, 
/*15110*/       OPC_EmitNode, TARGET_VAL(AMDGPU::RECIP_IEEE_r600), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/*15130*/       OPC_EmitInteger, MVT::i32, 0, 
/*15133*/       OPC_EmitInteger, MVT::i32, 0, 
/*15136*/       OPC_EmitInteger, MVT::i32, 0, 
/*15139*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*15151*/       OPC_EmitInteger, MVT::i32, 1, 
/*15154*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*15158*/       OPC_EmitInteger, MVT::i32, 0, 
/*15161*/       OPC_EmitInteger, MVT::i32, 0, 
/*15164*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                // Src: (intrinsic_wo_chain:f32 2440:iPTR, f32:f32:$src0, f32:f32:$src1) - Complexity = 8
                // Dst: (MUL_IEEE:f32 ?:f32:$src0, (RECIP_IEEE_r600:i32 ?:f32:$src1))
/*15191*/     /*Scope*/ 40|128,1/*168*/, /*->15361*/
/*15193*/       OPC_CheckPatternPredicate, 4, // (Subtarget.device()->getGeneration() >= AMDGPUDeviceInfo::HD5XXX && Subtarget.device()->getGeneration() < AMDGPUDeviceInfo::HD7XXX && Subtarget.device()->getDeviceFlag() != OCL_DEVICE_CAYMAN)
/*15195*/       OPC_EmitInteger, MVT::i32, 0, 
/*15198*/       OPC_EmitInteger, MVT::i32, 0, 
/*15201*/       OPC_EmitInteger, MVT::i32, 1, 
/*15204*/       OPC_EmitInteger, MVT::i32, 0, 
/*15207*/       OPC_EmitInteger, MVT::i32, 0, 
/*15210*/       OPC_EmitInteger, MVT::i32, 0, 
/*15213*/       OPC_EmitInteger, MVT::i32, 0, 
/*15216*/       OPC_EmitInteger, MVT::i32, 0, 
/*15219*/       OPC_EmitInteger, MVT::i32, 0, 
/*15222*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*15234*/       OPC_EmitInteger, MVT::i32, 1, 
/*15237*/       OPC_EmitInteger, MVT::i32, 0, 
/*15240*/       OPC_EmitInteger, MVT::i32, 0, 
/*15243*/       OPC_EmitInteger, MVT::i32, 0, 
/*15246*/       OPC_EmitInteger, MVT::i32, 0, 
/*15249*/       OPC_EmitInteger, MVT::i32, 0, 
/*15252*/       OPC_EmitInteger, MVT::i32, 0, 
/*15255*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*15267*/       OPC_EmitInteger, MVT::i32, 1, 
/*15270*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*15274*/       OPC_EmitInteger, MVT::i32, 0, 
/*15277*/       OPC_EmitInteger, MVT::i32, 0, 
/*15280*/       OPC_EmitNode, TARGET_VAL(AMDGPU::RECIP_IEEE_eg), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/*15300*/       OPC_EmitInteger, MVT::i32, 0, 
/*15303*/       OPC_EmitInteger, MVT::i32, 0, 
/*15306*/       OPC_EmitInteger, MVT::i32, 0, 
/*15309*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*15321*/       OPC_EmitInteger, MVT::i32, 1, 
/*15324*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*15328*/       OPC_EmitInteger, MVT::i32, 0, 
/*15331*/       OPC_EmitInteger, MVT::i32, 0, 
/*15334*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                // Src: (intrinsic_wo_chain:f32 2440:iPTR, f32:f32:$src0, f32:f32:$src1) - Complexity = 8
                // Dst: (MUL_IEEE:f32 ?:f32:$src0, (RECIP_IEEE_eg:i32 ?:f32:$src1))
/*15361*/     /*Scope*/ 40|128,1/*168*/, /*->15531*/
/*15363*/       OPC_CheckPatternPredicate, 5, // (Subtarget.device()->getDeviceFlag() == OCL_DEVICE_CAYMAN)
/*15365*/       OPC_EmitInteger, MVT::i32, 0, 
/*15368*/       OPC_EmitInteger, MVT::i32, 0, 
/*15371*/       OPC_EmitInteger, MVT::i32, 1, 
/*15374*/       OPC_EmitInteger, MVT::i32, 0, 
/*15377*/       OPC_EmitInteger, MVT::i32, 0, 
/*15380*/       OPC_EmitInteger, MVT::i32, 0, 
/*15383*/       OPC_EmitInteger, MVT::i32, 0, 
/*15386*/       OPC_EmitInteger, MVT::i32, 0, 
/*15389*/       OPC_EmitInteger, MVT::i32, 0, 
/*15392*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*15404*/       OPC_EmitInteger, MVT::i32, 1, 
/*15407*/       OPC_EmitInteger, MVT::i32, 0, 
/*15410*/       OPC_EmitInteger, MVT::i32, 0, 
/*15413*/       OPC_EmitInteger, MVT::i32, 0, 
/*15416*/       OPC_EmitInteger, MVT::i32, 0, 
/*15419*/       OPC_EmitInteger, MVT::i32, 0, 
/*15422*/       OPC_EmitInteger, MVT::i32, 0, 
/*15425*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*15437*/       OPC_EmitInteger, MVT::i32, 1, 
/*15440*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*15444*/       OPC_EmitInteger, MVT::i32, 0, 
/*15447*/       OPC_EmitInteger, MVT::i32, 0, 
/*15450*/       OPC_EmitNode, TARGET_VAL(AMDGPU::RECIP_IEEE_cm), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/*15470*/       OPC_EmitInteger, MVT::i32, 0, 
/*15473*/       OPC_EmitInteger, MVT::i32, 0, 
/*15476*/       OPC_EmitInteger, MVT::i32, 0, 
/*15479*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*15491*/       OPC_EmitInteger, MVT::i32, 1, 
/*15494*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*15498*/       OPC_EmitInteger, MVT::i32, 0, 
/*15501*/       OPC_EmitInteger, MVT::i32, 0, 
/*15504*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                // Src: (intrinsic_wo_chain:f32 2440:iPTR, f32:f32:$src0, f32:f32:$src1) - Complexity = 8
                // Dst: (MUL_IEEE:f32 ?:f32:$src0, (RECIP_IEEE_cm:i32 ?:f32:$src1))
/*15531*/     /*Scope*/ 19, /*->15551*/
/*15532*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*15534*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_RCP_LEGACY_F32_e32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*15542*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_LEGACY_F32_e32), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:f32 2440:iPTR, f32:f32:$src0, f32:f32:$src1) - Complexity = 8
                // Dst: (V_MUL_LEGACY_F32_e32:f32 ?:f32:$src0, (V_RCP_LEGACY_F32_e32:i32 ?:f32:$src1))
/*15551*/     0, /*End of Scope*/
/*15552*/   /*Scope*/ 63, /*->15616*/
/*15553*/     OPC_CheckInteger, 4|128,19/*2436*/, 
/*15556*/     OPC_MoveParent,
/*15557*/     OPC_RecordChild1, // #0 = $src0
/*15558*/     OPC_RecordChild2, // #1 = $src1
/*15559*/     OPC_RecordChild3, // #2 = $src2
/*15560*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*15562*/     OPC_EmitInteger, MVT::i32, 0, 
/*15565*/     OPC_EmitInteger, MVT::i32, 0, 
/*15568*/     OPC_EmitInteger, MVT::i32, 0, 
/*15571*/     OPC_EmitInteger, MVT::i32, 0, 
/*15574*/     OPC_EmitInteger, MVT::i32, 0, 
/*15577*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_CMP_GT_F32_e64), 0,
                  1/*#VTs*/, MVT::i1, 6/*#Ops*/, 3, 0, 4, 5, 6, 7,  // Results = #8
/*15590*/     OPC_EmitInteger, MVT::i32, 0, 
/*15593*/     OPC_EmitInteger, MVT::i32, 0, 
/*15596*/     OPC_EmitInteger, MVT::i32, 0, 
/*15599*/     OPC_EmitInteger, MVT::i32, 0, 
/*15602*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CNDMASK_B32_e64), 0,
                  1/*#VTs*/, MVT::f32, 7/*#Ops*/, 2, 1, 8, 9, 10, 11, 12, 
              // Src: (intrinsic_wo_chain:f32 2436:iPTR, f32:f32:$src0, f32:f32:$src1, f32:f32:$src2) - Complexity = 8
              // Dst: (V_CNDMASK_B32_e64:f32 ?:f32:$src2, ?:f32:$src1, (V_CMP_GT_F32_e64:i1 0:i32, ?:f32:$src0))
/*15616*/   /*Scope*/ 45|128,5/*685*/, /*->16303*/
/*15618*/     OPC_CheckInteger, 27|128,20/*2587*/, 
/*15621*/     OPC_MoveParent,
/*15622*/     OPC_RecordChild1, // #0 = $src_x
/*15623*/     OPC_RecordChild2, // #1 = $src_y
/*15624*/     OPC_RecordChild3, // #2 = $src_w
/*15625*/     OPC_Scope, 80|128,2/*336*/, /*->15964*/ // 2 children in Scope
/*15628*/       OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*15630*/       OPC_EmitInteger, MVT::i32, 1, 
/*15633*/       OPC_EmitInteger, MVT::i32, 0, 
/*15636*/       OPC_EmitInteger, MVT::i32, 0, 
/*15639*/       OPC_EmitInteger, MVT::i32, 0, 
/*15642*/       OPC_EmitInteger, MVT::i32, 0, 
/*15645*/       OPC_EmitInteger, MVT::i32, 0, 
/*15648*/       OPC_EmitInteger, MVT::i32, 1, 
/*15651*/       OPC_EmitInteger, MVT::i32, 0, 
/*15654*/       OPC_EmitInteger, MVT::i32, 0, 
/*15657*/       OPC_EmitInteger, MVT::i32, 0, 
/*15660*/       OPC_EmitInteger, MVT::i32, 0, 
/*15663*/       OPC_EmitInteger, MVT::i32, 0, 
/*15666*/       OPC_EmitInteger, MVT::i32, 1, 
/*15669*/       OPC_EmitInteger, MVT::i32, 0, 
/*15672*/       OPC_EmitInteger, MVT::i32, 0, 
/*15675*/       OPC_EmitInteger, MVT::i32, 0, 
/*15678*/       OPC_EmitInteger, MVT::i32, 0, 
/*15681*/       OPC_EmitInteger, MVT::i32, 0, 
/*15684*/       OPC_EmitInteger, MVT::i32, 0, 
/*15687*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*15699*/       OPC_EmitRegister2, MVT::f32, TARGET_VAL(AMDGPU::ZERO),
/*15703*/       OPC_EmitInteger, MVT::i32, 0, 
/*15706*/       OPC_EmitInteger, MVT::i32, 0, 
/*15709*/       OPC_EmitInteger, MVT::i32, 0, 
/*15712*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*15724*/       OPC_EmitInteger, MVT::i32, 1, 
/*15727*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*15731*/       OPC_EmitInteger, MVT::i32, 0, 
/*15734*/       OPC_EmitInteger, MVT::i32, 0, 
/*15737*/       OPC_EmitNode, TARGET_VAL(AMDGPU::MAX), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 13, 14, 15, 16, 17, 18, 1, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,  // Results = #32
/*15764*/       OPC_EmitInteger, MVT::i32, 0, 
/*15767*/       OPC_EmitInteger, MVT::i32, 0, 
/*15770*/       OPC_EmitInteger, MVT::i32, 0, 
/*15773*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*15785*/       OPC_EmitInteger, MVT::i32, 1, 
/*15788*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*15792*/       OPC_EmitInteger, MVT::i32, 0, 
/*15795*/       OPC_EmitInteger, MVT::i32, 0, 
/*15798*/       OPC_EmitNode, TARGET_VAL(AMDGPU::LOG_CLAMPED_r600), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 9, 10, 11, 12, 32, 33, 34, 35, 36, 37, 38, 39, 40,  // Results = #41
/*15818*/       OPC_EmitInteger, MVT::i32, 0, 
/*15821*/       OPC_EmitInteger, MVT::i32, 0, 
/*15824*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*15836*/       OPC_EmitInteger, MVT::i32, 0, 
/*15839*/       OPC_EmitInteger, MVT::i32, 0, 
/*15842*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*15854*/       OPC_EmitInteger, MVT::i32, 0, 
/*15857*/       OPC_EmitInteger, MVT::i32, 0, 
/*15860*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*15872*/       OPC_EmitInteger, MVT::i32, 1, 
/*15875*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*15879*/       OPC_EmitInteger, MVT::i32, 0, 
/*15882*/       OPC_EmitInteger, MVT::i32, 0, 
/*15885*/       OPC_EmitNode, TARGET_VAL(AMDGPU::MUL_LIT_r600), 0,
                    1/*#VTs*/, MVT::i32, 18/*#Ops*/, 7, 8, 41, 42, 43, 44, 2, 45, 46, 47, 0, 48, 49, 50, 51, 52, 53, 54,  // Results = #55
/*15910*/       OPC_EmitInteger, MVT::i32, 0, 
/*15913*/       OPC_EmitInteger, MVT::i32, 0, 
/*15916*/       OPC_EmitInteger, MVT::i32, 0, 
/*15919*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*15931*/       OPC_EmitInteger, MVT::i32, 1, 
/*15934*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*15938*/       OPC_EmitInteger, MVT::i32, 0, 
/*15941*/       OPC_EmitInteger, MVT::i32, 0, 
/*15944*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_r600), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 3, 4, 5, 6, 55, 56, 57, 58, 59, 60, 61, 62, 63, 
                // Src: (intrinsic_wo_chain:f32 2587:iPTR, f32:f32:$src_x, f32:f32:$src_y, f32:f32:$src_w) - Complexity = 8
                // Dst: (EXP_IEEE_r600:f32 (MUL_LIT_r600:i32 (LOG_CLAMPED_r600:i32 (MAX:i32 ?:f32:$src_y, ZERO:f32)), ?:f32:$src_w, ?:f32:$src_x))
/*15964*/     /*Scope*/ 80|128,2/*336*/, /*->16302*/
/*15966*/       OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*15968*/       OPC_EmitInteger, MVT::i32, 1, 
/*15971*/       OPC_EmitInteger, MVT::i32, 0, 
/*15974*/       OPC_EmitInteger, MVT::i32, 0, 
/*15977*/       OPC_EmitInteger, MVT::i32, 0, 
/*15980*/       OPC_EmitInteger, MVT::i32, 0, 
/*15983*/       OPC_EmitInteger, MVT::i32, 0, 
/*15986*/       OPC_EmitInteger, MVT::i32, 1, 
/*15989*/       OPC_EmitInteger, MVT::i32, 0, 
/*15992*/       OPC_EmitInteger, MVT::i32, 0, 
/*15995*/       OPC_EmitInteger, MVT::i32, 0, 
/*15998*/       OPC_EmitInteger, MVT::i32, 0, 
/*16001*/       OPC_EmitInteger, MVT::i32, 0, 
/*16004*/       OPC_EmitInteger, MVT::i32, 1, 
/*16007*/       OPC_EmitInteger, MVT::i32, 0, 
/*16010*/       OPC_EmitInteger, MVT::i32, 0, 
/*16013*/       OPC_EmitInteger, MVT::i32, 0, 
/*16016*/       OPC_EmitInteger, MVT::i32, 0, 
/*16019*/       OPC_EmitInteger, MVT::i32, 0, 
/*16022*/       OPC_EmitInteger, MVT::i32, 0, 
/*16025*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16037*/       OPC_EmitRegister2, MVT::f32, TARGET_VAL(AMDGPU::ZERO),
/*16041*/       OPC_EmitInteger, MVT::i32, 0, 
/*16044*/       OPC_EmitInteger, MVT::i32, 0, 
/*16047*/       OPC_EmitInteger, MVT::i32, 0, 
/*16050*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16062*/       OPC_EmitInteger, MVT::i32, 1, 
/*16065*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*16069*/       OPC_EmitInteger, MVT::i32, 0, 
/*16072*/       OPC_EmitInteger, MVT::i32, 0, 
/*16075*/       OPC_EmitNode, TARGET_VAL(AMDGPU::MAX), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 13, 14, 15, 16, 17, 18, 1, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,  // Results = #32
/*16102*/       OPC_EmitInteger, MVT::i32, 0, 
/*16105*/       OPC_EmitInteger, MVT::i32, 0, 
/*16108*/       OPC_EmitInteger, MVT::i32, 0, 
/*16111*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16123*/       OPC_EmitInteger, MVT::i32, 1, 
/*16126*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*16130*/       OPC_EmitInteger, MVT::i32, 0, 
/*16133*/       OPC_EmitInteger, MVT::i32, 0, 
/*16136*/       OPC_EmitNode, TARGET_VAL(AMDGPU::LOG_CLAMPED_eg), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 9, 10, 11, 12, 32, 33, 34, 35, 36, 37, 38, 39, 40,  // Results = #41
/*16156*/       OPC_EmitInteger, MVT::i32, 0, 
/*16159*/       OPC_EmitInteger, MVT::i32, 0, 
/*16162*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16174*/       OPC_EmitInteger, MVT::i32, 0, 
/*16177*/       OPC_EmitInteger, MVT::i32, 0, 
/*16180*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16192*/       OPC_EmitInteger, MVT::i32, 0, 
/*16195*/       OPC_EmitInteger, MVT::i32, 0, 
/*16198*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16210*/       OPC_EmitInteger, MVT::i32, 1, 
/*16213*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*16217*/       OPC_EmitInteger, MVT::i32, 0, 
/*16220*/       OPC_EmitInteger, MVT::i32, 0, 
/*16223*/       OPC_EmitNode, TARGET_VAL(AMDGPU::MUL_LIT_eg), 0,
                    1/*#VTs*/, MVT::i32, 18/*#Ops*/, 7, 8, 41, 42, 43, 44, 2, 45, 46, 47, 0, 48, 49, 50, 51, 52, 53, 54,  // Results = #55
/*16248*/       OPC_EmitInteger, MVT::i32, 0, 
/*16251*/       OPC_EmitInteger, MVT::i32, 0, 
/*16254*/       OPC_EmitInteger, MVT::i32, 0, 
/*16257*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16269*/       OPC_EmitInteger, MVT::i32, 1, 
/*16272*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*16276*/       OPC_EmitInteger, MVT::i32, 0, 
/*16279*/       OPC_EmitInteger, MVT::i32, 0, 
/*16282*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_eg), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 3, 4, 5, 6, 55, 56, 57, 58, 59, 60, 61, 62, 63, 
                // Src: (intrinsic_wo_chain:f32 2587:iPTR, f32:f32:$src_x, f32:f32:$src_y, f32:f32:$src_w) - Complexity = 8
                // Dst: (EXP_IEEE_eg:f32 (MUL_LIT_eg:i32 (LOG_CLAMPED_eg:i32 (MAX:i32 ?:f32:$src_y, ZERO:f32)), ?:f32:$src_w, ?:f32:$src_x))
/*16302*/     0, /*End of Scope*/
/*16303*/   /*Scope*/ 85|128,1/*213*/, /*->16518*/
/*16305*/     OPC_CheckInteger, 18|128,20/*2578*/, 
/*16308*/     OPC_MoveParent,
/*16309*/     OPC_RecordChild1, // #0 = $addr
/*16310*/     OPC_Scope, 102, /*->16414*/ // 2 children in Scope
/*16312*/       OPC_CheckChild1Type, MVT::v2i32,
/*16314*/       OPC_RecordChild2, // #1 = $rsrc
/*16315*/       OPC_MoveChild, 3,
/*16317*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*16320*/       OPC_Scope, 46, /*->16368*/ // 2 children in Scope
/*16322*/         OPC_CheckPredicate, 22, // Predicate_TEX_ARRAY
/*16324*/         OPC_MoveParent,
/*16325*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*16327*/         OPC_EmitInteger, MVT::i32, 15, 
/*16330*/         OPC_EmitInteger, MVT::i1, 0, 
/*16333*/         OPC_EmitInteger, MVT::i1, 0, 
/*16336*/         OPC_EmitInteger, MVT::i1, 1, 
/*16339*/         OPC_EmitInteger, MVT::i1, 0, 
/*16342*/         OPC_EmitInteger, MVT::i1, 0, 
/*16345*/         OPC_EmitInteger, MVT::i1, 0, 
/*16348*/         OPC_EmitInteger, MVT::i1, 0, 
/*16351*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_LOAD_MIP), 0,
                      1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 
                  // Src: (intrinsic_wo_chain:v4i32 2578:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_LOAD_MIP:v4i32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc)
/*16368*/       /*Scope*/ 44, /*->16413*/
/*16369*/         OPC_MoveParent,
/*16370*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*16372*/         OPC_EmitInteger, MVT::i32, 15, 
/*16375*/         OPC_EmitInteger, MVT::i1, 0, 
/*16378*/         OPC_EmitInteger, MVT::i1, 0, 
/*16381*/         OPC_EmitInteger, MVT::i1, 0, 
/*16384*/         OPC_EmitInteger, MVT::i1, 0, 
/*16387*/         OPC_EmitInteger, MVT::i1, 0, 
/*16390*/         OPC_EmitInteger, MVT::i1, 0, 
/*16393*/         OPC_EmitInteger, MVT::i1, 0, 
/*16396*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_LOAD_MIP), 0,
                      1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 
                  // Src: (intrinsic_wo_chain:v4i32 2578:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_LOAD_MIP:v4i32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc)
/*16413*/       0, /*End of Scope*/
/*16414*/     /*Scope*/ 102, /*->16517*/
/*16415*/       OPC_CheckChild1Type, MVT::v4i32,
/*16417*/       OPC_RecordChild2, // #1 = $rsrc
/*16418*/       OPC_MoveChild, 3,
/*16420*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*16423*/       OPC_Scope, 46, /*->16471*/ // 2 children in Scope
/*16425*/         OPC_CheckPredicate, 22, // Predicate_TEX_ARRAY
/*16427*/         OPC_MoveParent,
/*16428*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*16430*/         OPC_EmitInteger, MVT::i32, 15, 
/*16433*/         OPC_EmitInteger, MVT::i1, 0, 
/*16436*/         OPC_EmitInteger, MVT::i1, 0, 
/*16439*/         OPC_EmitInteger, MVT::i1, 1, 
/*16442*/         OPC_EmitInteger, MVT::i1, 0, 
/*16445*/         OPC_EmitInteger, MVT::i1, 0, 
/*16448*/         OPC_EmitInteger, MVT::i1, 0, 
/*16451*/         OPC_EmitInteger, MVT::i1, 0, 
/*16454*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_LOAD_MIP), 0,
                      1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 
                  // Src: (intrinsic_wo_chain:v4i32 2578:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_LOAD_MIP:v4i32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc)
/*16471*/       /*Scope*/ 44, /*->16516*/
/*16472*/         OPC_MoveParent,
/*16473*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*16475*/         OPC_EmitInteger, MVT::i32, 15, 
/*16478*/         OPC_EmitInteger, MVT::i1, 0, 
/*16481*/         OPC_EmitInteger, MVT::i1, 0, 
/*16484*/         OPC_EmitInteger, MVT::i1, 0, 
/*16487*/         OPC_EmitInteger, MVT::i1, 0, 
/*16490*/         OPC_EmitInteger, MVT::i1, 0, 
/*16493*/         OPC_EmitInteger, MVT::i1, 0, 
/*16496*/         OPC_EmitInteger, MVT::i1, 0, 
/*16499*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_LOAD_MIP), 0,
                      1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 
                  // Src: (intrinsic_wo_chain:v4i32 2578:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_LOAD_MIP:v4i32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc)
/*16516*/       0, /*End of Scope*/
/*16517*/     0, /*End of Scope*/
/*16518*/   /*Scope*/ 121, /*->16640*/
/*16519*/     OPC_CheckInteger, 22|128,20/*2582*/, 
/*16522*/     OPC_MoveParent,
/*16523*/     OPC_RecordChild1, // #0 = $mipid
/*16524*/     OPC_RecordChild2, // #1 = $rsrc
/*16525*/     OPC_MoveChild, 3,
/*16527*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*16530*/     OPC_Scope, 54, /*->16586*/ // 2 children in Scope
/*16532*/       OPC_CheckPredicate, 22, // Predicate_TEX_ARRAY
/*16534*/       OPC_MoveParent,
/*16535*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*16537*/       OPC_EmitInteger, MVT::i32, 15, 
/*16540*/       OPC_EmitInteger, MVT::i1, 0, 
/*16543*/       OPC_EmitInteger, MVT::i1, 0, 
/*16546*/       OPC_EmitInteger, MVT::i1, 1, 
/*16549*/       OPC_EmitInteger, MVT::i1, 0, 
/*16552*/       OPC_EmitInteger, MVT::i1, 0, 
/*16555*/       OPC_EmitInteger, MVT::i1, 0, 
/*16558*/       OPC_EmitInteger, MVT::i1, 0, 
/*16561*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #10
/*16569*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_GET_RESINFO), 0,
                    1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 
                // Src: (intrinsic_wo_chain:v4i32 2582:iPTR, i32:i32:$mipid, v32i8:v32i8:$rsrc, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                // Dst: (IMAGE_GET_RESINFO:v4i32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, (V_MOV_B32_e32:i32 ?:i32:$mipid), ?:v32i8:$rsrc)
/*16586*/     /*Scope*/ 52, /*->16639*/
/*16587*/       OPC_MoveParent,
/*16588*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*16590*/       OPC_EmitInteger, MVT::i32, 15, 
/*16593*/       OPC_EmitInteger, MVT::i1, 0, 
/*16596*/       OPC_EmitInteger, MVT::i1, 0, 
/*16599*/       OPC_EmitInteger, MVT::i1, 0, 
/*16602*/       OPC_EmitInteger, MVT::i1, 0, 
/*16605*/       OPC_EmitInteger, MVT::i1, 0, 
/*16608*/       OPC_EmitInteger, MVT::i1, 0, 
/*16611*/       OPC_EmitInteger, MVT::i1, 0, 
/*16614*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #10
/*16622*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_GET_RESINFO), 0,
                    1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 
                // Src: (intrinsic_wo_chain:v4i32 2582:iPTR, i32:i32:$mipid, v32i8:v32i8:$rsrc, (imm:i32)) - Complexity = 11
                // Dst: (IMAGE_GET_RESINFO:v4i32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, (V_MOV_B32_e32:i32 ?:i32:$mipid), ?:v32i8:$rsrc)
/*16639*/     0, /*End of Scope*/
/*16640*/   /*Scope*/ 29, /*->16670*/
/*16641*/     OPC_CheckInteger, 123|128,19/*2555*/, 
/*16644*/     OPC_MoveParent,
/*16645*/     OPC_RecordChild1, // #0 = $ptr
/*16646*/     OPC_RecordChild2, // #1 = $BUFFER_ID
/*16647*/     OPC_MoveChild, 2,
/*16649*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*16652*/     OPC_MoveParent,
/*16653*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*16655*/     OPC_CheckComplexPat, /*CP*/3, /*#*/0, // SelectGlobalValueVariableOffset:$ptr #2 #3
/*16658*/     OPC_EmitConvertToTarget, 1,
/*16660*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_VTX_TEXBUF), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 2, 3, 4, 
              // Src: (intrinsic_wo_chain:v4f32 2555:iPTR, ADDRGA_VAR_OFFSET:i32:$ptr, (imm:i32):$BUFFER_ID) - Complexity = 20
              // Dst: (TEX_VTX_TEXBUF:v4f32 ADDRGA_VAR_OFFSET:i32:$ptr, (imm:i32):$BUFFER_ID)
/*16670*/   /*Scope*/ 77, /*->16748*/
/*16671*/     OPC_CheckInteger, 33|128,19/*2465*/, 
/*16674*/     OPC_MoveParent,
/*16675*/     OPC_RecordChild1, // #0 = $src0
/*16676*/     OPC_RecordChild2, // #1 = $src1
/*16677*/     OPC_RecordChild3, // #2 = $src2
/*16678*/     OPC_RecordChild4, // #3 = $resourceId
/*16679*/     OPC_MoveChild, 4,
/*16681*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*16684*/     OPC_MoveParent,
/*16685*/     OPC_RecordChild5, // #4 = $samplerId
/*16686*/     OPC_MoveChild, 5,
/*16688*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*16691*/     OPC_MoveParent,
/*16692*/     OPC_RecordChild6, // #5 = $textureTarget
/*16693*/     OPC_MoveChild, 6,
/*16695*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*16698*/     OPC_Scope, 24, /*->16724*/ // 2 children in Scope
/*16700*/       OPC_CheckPredicate, 23, // Predicate_TEX_SHADOW
/*16702*/       OPC_MoveParent,
/*16703*/       OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*16705*/       OPC_EmitConvertToTarget, 3,
/*16707*/       OPC_EmitConvertToTarget, 4,
/*16709*/       OPC_EmitConvertToTarget, 5,
/*16711*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TXD_SHADOW), 0,
                    1/*#VTs*/, MVT::v4f32, 6/*#Ops*/, 0, 1, 2, 6, 7, 8, 
                // Src: (intrinsic_wo_chain:v4f32 2465:iPTR, v4f32:v4f32:$src0, v4f32:v4f32:$src1, v4f32:v4f32:$src2, (imm:i32):$resourceId, (imm:i32):$samplerId, (imm:i32)<<P:Predicate_TEX_SHADOW>>:$textureTarget) - Complexity = 18
                // Dst: (TXD_SHADOW:v4f32 v4f32:v4f32:$src0, v4f32:v4f32:$src1, v4f32:v4f32:$src2, (imm:i32):$resourceId, (imm:i32):$samplerId, (imm:i32):$textureTarget)
/*16724*/     /*Scope*/ 22, /*->16747*/
/*16725*/       OPC_MoveParent,
/*16726*/       OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*16728*/       OPC_EmitConvertToTarget, 3,
/*16730*/       OPC_EmitConvertToTarget, 4,
/*16732*/       OPC_EmitConvertToTarget, 5,
/*16734*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TXD), 0,
                    1/*#VTs*/, MVT::v4f32, 6/*#Ops*/, 0, 1, 2, 6, 7, 8, 
                // Src: (intrinsic_wo_chain:v4f32 2465:iPTR, v4f32:v4f32:$src0, v4f32:v4f32:$src1, v4f32:v4f32:$src2, (imm:i32):$resourceId, (imm:i32):$samplerId, (imm:i32):$textureTarget) - Complexity = 17
                // Dst: (TXD:v4f32 v4f32:v4f32:$src0, v4f32:v4f32:$src1, v4f32:v4f32:$src2, (imm:i32):$resourceId, (imm:i32):$samplerId, (imm:i32):$textureTarget)
/*16747*/     0, /*End of Scope*/
/*16748*/   /*Scope*/ 29, /*->16778*/
/*16749*/     OPC_CheckInteger, 26|128,20/*2586*/, 
/*16752*/     OPC_MoveParent,
/*16753*/     OPC_RecordChild1, // #0 = $tlst
/*16754*/     OPC_RecordChild2, // #1 = $attr_offset
/*16755*/     OPC_MoveChild, 2,
/*16757*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*16760*/     OPC_CheckPredicate, 24, // Predicate_IMM12bit
/*16762*/     OPC_MoveParent,
/*16763*/     OPC_RecordChild3, // #2 = $buf_idx_vgpr
/*16764*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*16766*/     OPC_EmitConvertToTarget, 1,
/*16768*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_FORMAT_XYZW_IDXEN), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 2, 3, 
              // Src: (intrinsic_wo_chain:v4f32 2586:iPTR, v16i8:v16i8:$tlst, (imm:i16)<<P:Predicate_IMM12bit>>:$attr_offset, i32:i32:$buf_idx_vgpr) - Complexity = 12
              // Dst: (BUFFER_LOAD_FORMAT_XYZW_IDXEN:v4f32 ?:v16i8:$tlst, ?:i32:$buf_idx_vgpr, (imm:i16):$attr_offset)
/*16778*/   /*Scope*/ 42|128,8/*1066*/, /*->17846*/
/*16780*/     OPC_CheckInteger, 23|128,20/*2583*/, 
/*16783*/     OPC_MoveParent,
/*16784*/     OPC_RecordChild1, // #0 = $addr
/*16785*/     OPC_Scope, 121|128,1/*249*/, /*->17037*/ // 5 children in Scope
/*16788*/       OPC_CheckChild1Type, MVT::v2i32,
/*16790*/       OPC_RecordChild2, // #1 = $rsrc
/*16791*/       OPC_RecordChild3, // #2 = $sampler
/*16792*/       OPC_MoveChild, 4,
/*16794*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*16797*/       OPC_Scope, 47, /*->16846*/ // 5 children in Scope
/*16799*/         OPC_CheckPredicate, 25, // Predicate_TEX_RECT
/*16801*/         OPC_MoveParent,
/*16802*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*16804*/         OPC_EmitInteger, MVT::i32, 15, 
/*16807*/         OPC_EmitInteger, MVT::i1, 1, 
/*16810*/         OPC_EmitInteger, MVT::i1, 0, 
/*16813*/         OPC_EmitInteger, MVT::i1, 0, 
/*16816*/         OPC_EmitInteger, MVT::i1, 0, 
/*16819*/         OPC_EmitInteger, MVT::i1, 0, 
/*16822*/         OPC_EmitInteger, MVT::i1, 0, 
/*16825*/         OPC_EmitInteger, MVT::i1, 0, 
/*16828*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2583:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_RECT>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE:v4f32 15:i32, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*16846*/       /*Scope*/ 47, /*->16894*/
/*16847*/         OPC_CheckPredicate, 22, // Predicate_TEX_ARRAY
/*16849*/         OPC_MoveParent,
/*16850*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*16852*/         OPC_EmitInteger, MVT::i32, 15, 
/*16855*/         OPC_EmitInteger, MVT::i1, 0, 
/*16858*/         OPC_EmitInteger, MVT::i1, 0, 
/*16861*/         OPC_EmitInteger, MVT::i1, 1, 
/*16864*/         OPC_EmitInteger, MVT::i1, 0, 
/*16867*/         OPC_EmitInteger, MVT::i1, 0, 
/*16870*/         OPC_EmitInteger, MVT::i1, 0, 
/*16873*/         OPC_EmitInteger, MVT::i1, 0, 
/*16876*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2583:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*16894*/       /*Scope*/ 47, /*->16942*/
/*16895*/         OPC_CheckPredicate, 23, // Predicate_TEX_SHADOW
/*16897*/         OPC_MoveParent,
/*16898*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*16900*/         OPC_EmitInteger, MVT::i32, 15, 
/*16903*/         OPC_EmitInteger, MVT::i1, 0, 
/*16906*/         OPC_EmitInteger, MVT::i1, 0, 
/*16909*/         OPC_EmitInteger, MVT::i1, 0, 
/*16912*/         OPC_EmitInteger, MVT::i1, 0, 
/*16915*/         OPC_EmitInteger, MVT::i1, 0, 
/*16918*/         OPC_EmitInteger, MVT::i1, 0, 
/*16921*/         OPC_EmitInteger, MVT::i1, 0, 
/*16924*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2583:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*16942*/       /*Scope*/ 47, /*->16990*/
/*16943*/         OPC_CheckPredicate, 26, // Predicate_TEX_SHADOW_ARRAY
/*16945*/         OPC_MoveParent,
/*16946*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*16948*/         OPC_EmitInteger, MVT::i32, 15, 
/*16951*/         OPC_EmitInteger, MVT::i1, 0, 
/*16954*/         OPC_EmitInteger, MVT::i1, 0, 
/*16957*/         OPC_EmitInteger, MVT::i1, 1, 
/*16960*/         OPC_EmitInteger, MVT::i1, 0, 
/*16963*/         OPC_EmitInteger, MVT::i1, 0, 
/*16966*/         OPC_EmitInteger, MVT::i1, 0, 
/*16969*/         OPC_EmitInteger, MVT::i1, 0, 
/*16972*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2583:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*16990*/       /*Scope*/ 45, /*->17036*/
/*16991*/         OPC_MoveParent,
/*16992*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*16994*/         OPC_EmitInteger, MVT::i32, 15, 
/*16997*/         OPC_EmitInteger, MVT::i1, 0, 
/*17000*/         OPC_EmitInteger, MVT::i1, 0, 
/*17003*/         OPC_EmitInteger, MVT::i1, 0, 
/*17006*/         OPC_EmitInteger, MVT::i1, 0, 
/*17009*/         OPC_EmitInteger, MVT::i1, 0, 
/*17012*/         OPC_EmitInteger, MVT::i1, 0, 
/*17015*/         OPC_EmitInteger, MVT::i1, 0, 
/*17018*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2583:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_SAMPLE:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*17036*/       0, /*End of Scope*/
/*17037*/     /*Scope*/ 121|128,1/*249*/, /*->17288*/
/*17039*/       OPC_CheckChild1Type, MVT::v4i32,
/*17041*/       OPC_RecordChild2, // #1 = $rsrc
/*17042*/       OPC_RecordChild3, // #2 = $sampler
/*17043*/       OPC_MoveChild, 4,
/*17045*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17048*/       OPC_Scope, 47, /*->17097*/ // 5 children in Scope
/*17050*/         OPC_CheckPredicate, 25, // Predicate_TEX_RECT
/*17052*/         OPC_MoveParent,
/*17053*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*17055*/         OPC_EmitInteger, MVT::i32, 15, 
/*17058*/         OPC_EmitInteger, MVT::i1, 1, 
/*17061*/         OPC_EmitInteger, MVT::i1, 0, 
/*17064*/         OPC_EmitInteger, MVT::i1, 0, 
/*17067*/         OPC_EmitInteger, MVT::i1, 0, 
/*17070*/         OPC_EmitInteger, MVT::i1, 0, 
/*17073*/         OPC_EmitInteger, MVT::i1, 0, 
/*17076*/         OPC_EmitInteger, MVT::i1, 0, 
/*17079*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2583:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_RECT>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE:v4f32 15:i32, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*17097*/       /*Scope*/ 47, /*->17145*/
/*17098*/         OPC_CheckPredicate, 22, // Predicate_TEX_ARRAY
/*17100*/         OPC_MoveParent,
/*17101*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*17103*/         OPC_EmitInteger, MVT::i32, 15, 
/*17106*/         OPC_EmitInteger, MVT::i1, 0, 
/*17109*/         OPC_EmitInteger, MVT::i1, 0, 
/*17112*/         OPC_EmitInteger, MVT::i1, 1, 
/*17115*/         OPC_EmitInteger, MVT::i1, 0, 
/*17118*/         OPC_EmitInteger, MVT::i1, 0, 
/*17121*/         OPC_EmitInteger, MVT::i1, 0, 
/*17124*/         OPC_EmitInteger, MVT::i1, 0, 
/*17127*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2583:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*17145*/       /*Scope*/ 47, /*->17193*/
/*17146*/         OPC_CheckPredicate, 23, // Predicate_TEX_SHADOW
/*17148*/         OPC_MoveParent,
/*17149*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*17151*/         OPC_EmitInteger, MVT::i32, 15, 
/*17154*/         OPC_EmitInteger, MVT::i1, 0, 
/*17157*/         OPC_EmitInteger, MVT::i1, 0, 
/*17160*/         OPC_EmitInteger, MVT::i1, 0, 
/*17163*/         OPC_EmitInteger, MVT::i1, 0, 
/*17166*/         OPC_EmitInteger, MVT::i1, 0, 
/*17169*/         OPC_EmitInteger, MVT::i1, 0, 
/*17172*/         OPC_EmitInteger, MVT::i1, 0, 
/*17175*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2583:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*17193*/       /*Scope*/ 47, /*->17241*/
/*17194*/         OPC_CheckPredicate, 26, // Predicate_TEX_SHADOW_ARRAY
/*17196*/         OPC_MoveParent,
/*17197*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*17199*/         OPC_EmitInteger, MVT::i32, 15, 
/*17202*/         OPC_EmitInteger, MVT::i1, 0, 
/*17205*/         OPC_EmitInteger, MVT::i1, 0, 
/*17208*/         OPC_EmitInteger, MVT::i1, 1, 
/*17211*/         OPC_EmitInteger, MVT::i1, 0, 
/*17214*/         OPC_EmitInteger, MVT::i1, 0, 
/*17217*/         OPC_EmitInteger, MVT::i1, 0, 
/*17220*/         OPC_EmitInteger, MVT::i1, 0, 
/*17223*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2583:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*17241*/       /*Scope*/ 45, /*->17287*/
/*17242*/         OPC_MoveParent,
/*17243*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*17245*/         OPC_EmitInteger, MVT::i32, 15, 
/*17248*/         OPC_EmitInteger, MVT::i1, 0, 
/*17251*/         OPC_EmitInteger, MVT::i1, 0, 
/*17254*/         OPC_EmitInteger, MVT::i1, 0, 
/*17257*/         OPC_EmitInteger, MVT::i1, 0, 
/*17260*/         OPC_EmitInteger, MVT::i1, 0, 
/*17263*/         OPC_EmitInteger, MVT::i1, 0, 
/*17266*/         OPC_EmitInteger, MVT::i1, 0, 
/*17269*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2583:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_SAMPLE:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*17287*/       0, /*End of Scope*/
/*17288*/     /*Scope*/ 121|128,1/*249*/, /*->17539*/
/*17290*/       OPC_CheckChild1Type, MVT::v8i32,
/*17292*/       OPC_RecordChild2, // #1 = $rsrc
/*17293*/       OPC_RecordChild3, // #2 = $sampler
/*17294*/       OPC_MoveChild, 4,
/*17296*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17299*/       OPC_Scope, 47, /*->17348*/ // 5 children in Scope
/*17301*/         OPC_CheckPredicate, 25, // Predicate_TEX_RECT
/*17303*/         OPC_MoveParent,
/*17304*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*17306*/         OPC_EmitInteger, MVT::i32, 15, 
/*17309*/         OPC_EmitInteger, MVT::i1, 1, 
/*17312*/         OPC_EmitInteger, MVT::i1, 0, 
/*17315*/         OPC_EmitInteger, MVT::i1, 0, 
/*17318*/         OPC_EmitInteger, MVT::i1, 0, 
/*17321*/         OPC_EmitInteger, MVT::i1, 0, 
/*17324*/         OPC_EmitInteger, MVT::i1, 0, 
/*17327*/         OPC_EmitInteger, MVT::i1, 0, 
/*17330*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2583:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_RECT>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE:v4f32 15:i32, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*17348*/       /*Scope*/ 47, /*->17396*/
/*17349*/         OPC_CheckPredicate, 22, // Predicate_TEX_ARRAY
/*17351*/         OPC_MoveParent,
/*17352*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*17354*/         OPC_EmitInteger, MVT::i32, 15, 
/*17357*/         OPC_EmitInteger, MVT::i1, 0, 
/*17360*/         OPC_EmitInteger, MVT::i1, 0, 
/*17363*/         OPC_EmitInteger, MVT::i1, 1, 
/*17366*/         OPC_EmitInteger, MVT::i1, 0, 
/*17369*/         OPC_EmitInteger, MVT::i1, 0, 
/*17372*/         OPC_EmitInteger, MVT::i1, 0, 
/*17375*/         OPC_EmitInteger, MVT::i1, 0, 
/*17378*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2583:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*17396*/       /*Scope*/ 47, /*->17444*/
/*17397*/         OPC_CheckPredicate, 23, // Predicate_TEX_SHADOW
/*17399*/         OPC_MoveParent,
/*17400*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*17402*/         OPC_EmitInteger, MVT::i32, 15, 
/*17405*/         OPC_EmitInteger, MVT::i1, 0, 
/*17408*/         OPC_EmitInteger, MVT::i1, 0, 
/*17411*/         OPC_EmitInteger, MVT::i1, 0, 
/*17414*/         OPC_EmitInteger, MVT::i1, 0, 
/*17417*/         OPC_EmitInteger, MVT::i1, 0, 
/*17420*/         OPC_EmitInteger, MVT::i1, 0, 
/*17423*/         OPC_EmitInteger, MVT::i1, 0, 
/*17426*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2583:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*17444*/       /*Scope*/ 47, /*->17492*/
/*17445*/         OPC_CheckPredicate, 26, // Predicate_TEX_SHADOW_ARRAY
/*17447*/         OPC_MoveParent,
/*17448*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*17450*/         OPC_EmitInteger, MVT::i32, 15, 
/*17453*/         OPC_EmitInteger, MVT::i1, 0, 
/*17456*/         OPC_EmitInteger, MVT::i1, 0, 
/*17459*/         OPC_EmitInteger, MVT::i1, 1, 
/*17462*/         OPC_EmitInteger, MVT::i1, 0, 
/*17465*/         OPC_EmitInteger, MVT::i1, 0, 
/*17468*/         OPC_EmitInteger, MVT::i1, 0, 
/*17471*/         OPC_EmitInteger, MVT::i1, 0, 
/*17474*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2583:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*17492*/       /*Scope*/ 45, /*->17538*/
/*17493*/         OPC_MoveParent,
/*17494*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*17496*/         OPC_EmitInteger, MVT::i32, 15, 
/*17499*/         OPC_EmitInteger, MVT::i1, 0, 
/*17502*/         OPC_EmitInteger, MVT::i1, 0, 
/*17505*/         OPC_EmitInteger, MVT::i1, 0, 
/*17508*/         OPC_EmitInteger, MVT::i1, 0, 
/*17511*/         OPC_EmitInteger, MVT::i1, 0, 
/*17514*/         OPC_EmitInteger, MVT::i1, 0, 
/*17517*/         OPC_EmitInteger, MVT::i1, 0, 
/*17520*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2583:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_SAMPLE:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*17538*/       0, /*End of Scope*/
/*17539*/     /*Scope*/ 121|128,1/*249*/, /*->17790*/
/*17541*/       OPC_CheckChild1Type, MVT::v16i32,
/*17543*/       OPC_RecordChild2, // #1 = $rsrc
/*17544*/       OPC_RecordChild3, // #2 = $sampler
/*17545*/       OPC_MoveChild, 4,
/*17547*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17550*/       OPC_Scope, 47, /*->17599*/ // 5 children in Scope
/*17552*/         OPC_CheckPredicate, 25, // Predicate_TEX_RECT
/*17554*/         OPC_MoveParent,
/*17555*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*17557*/         OPC_EmitInteger, MVT::i32, 15, 
/*17560*/         OPC_EmitInteger, MVT::i1, 1, 
/*17563*/         OPC_EmitInteger, MVT::i1, 0, 
/*17566*/         OPC_EmitInteger, MVT::i1, 0, 
/*17569*/         OPC_EmitInteger, MVT::i1, 0, 
/*17572*/         OPC_EmitInteger, MVT::i1, 0, 
/*17575*/         OPC_EmitInteger, MVT::i1, 0, 
/*17578*/         OPC_EmitInteger, MVT::i1, 0, 
/*17581*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2583:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_RECT>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE:v4f32 15:i32, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*17599*/       /*Scope*/ 47, /*->17647*/
/*17600*/         OPC_CheckPredicate, 22, // Predicate_TEX_ARRAY
/*17602*/         OPC_MoveParent,
/*17603*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*17605*/         OPC_EmitInteger, MVT::i32, 15, 
/*17608*/         OPC_EmitInteger, MVT::i1, 0, 
/*17611*/         OPC_EmitInteger, MVT::i1, 0, 
/*17614*/         OPC_EmitInteger, MVT::i1, 1, 
/*17617*/         OPC_EmitInteger, MVT::i1, 0, 
/*17620*/         OPC_EmitInteger, MVT::i1, 0, 
/*17623*/         OPC_EmitInteger, MVT::i1, 0, 
/*17626*/         OPC_EmitInteger, MVT::i1, 0, 
/*17629*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2583:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*17647*/       /*Scope*/ 47, /*->17695*/
/*17648*/         OPC_CheckPredicate, 23, // Predicate_TEX_SHADOW
/*17650*/         OPC_MoveParent,
/*17651*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*17653*/         OPC_EmitInteger, MVT::i32, 15, 
/*17656*/         OPC_EmitInteger, MVT::i1, 0, 
/*17659*/         OPC_EmitInteger, MVT::i1, 0, 
/*17662*/         OPC_EmitInteger, MVT::i1, 0, 
/*17665*/         OPC_EmitInteger, MVT::i1, 0, 
/*17668*/         OPC_EmitInteger, MVT::i1, 0, 
/*17671*/         OPC_EmitInteger, MVT::i1, 0, 
/*17674*/         OPC_EmitInteger, MVT::i1, 0, 
/*17677*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2583:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*17695*/       /*Scope*/ 47, /*->17743*/
/*17696*/         OPC_CheckPredicate, 26, // Predicate_TEX_SHADOW_ARRAY
/*17698*/         OPC_MoveParent,
/*17699*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*17701*/         OPC_EmitInteger, MVT::i32, 15, 
/*17704*/         OPC_EmitInteger, MVT::i1, 0, 
/*17707*/         OPC_EmitInteger, MVT::i1, 0, 
/*17710*/         OPC_EmitInteger, MVT::i1, 1, 
/*17713*/         OPC_EmitInteger, MVT::i1, 0, 
/*17716*/         OPC_EmitInteger, MVT::i1, 0, 
/*17719*/         OPC_EmitInteger, MVT::i1, 0, 
/*17722*/         OPC_EmitInteger, MVT::i1, 0, 
/*17725*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2583:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*17743*/       /*Scope*/ 45, /*->17789*/
/*17744*/         OPC_MoveParent,
/*17745*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*17747*/         OPC_EmitInteger, MVT::i32, 15, 
/*17750*/         OPC_EmitInteger, MVT::i1, 0, 
/*17753*/         OPC_EmitInteger, MVT::i1, 0, 
/*17756*/         OPC_EmitInteger, MVT::i1, 0, 
/*17759*/         OPC_EmitInteger, MVT::i1, 0, 
/*17762*/         OPC_EmitInteger, MVT::i1, 0, 
/*17765*/         OPC_EmitInteger, MVT::i1, 0, 
/*17768*/         OPC_EmitInteger, MVT::i1, 0, 
/*17771*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2583:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_SAMPLE:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*17789*/       0, /*End of Scope*/
/*17790*/     /*Scope*/ 54, /*->17845*/
/*17791*/       OPC_CheckChild1Type, MVT::v1i32,
/*17793*/       OPC_RecordChild2, // #1 = $rsrc
/*17794*/       OPC_RecordChild3, // #2 = $sampler
/*17795*/       OPC_MoveChild, 4,
/*17797*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17800*/       OPC_MoveParent,
/*17801*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*17803*/       OPC_EmitInteger, MVT::i32, 15, 
/*17806*/       OPC_EmitInteger, MVT::i1, 0, 
/*17809*/       OPC_EmitInteger, MVT::i1, 0, 
/*17812*/       OPC_EmitInteger, MVT::i1, 0, 
/*17815*/       OPC_EmitInteger, MVT::i1, 0, 
/*17818*/       OPC_EmitInteger, MVT::i1, 0, 
/*17821*/       OPC_EmitInteger, MVT::i1, 0, 
/*17824*/       OPC_EmitInteger, MVT::i1, 0, 
/*17827*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (intrinsic_wo_chain:v4f32 2583:iPTR, v1i32:v1i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                // Dst: (IMAGE_SAMPLE:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v1i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*17845*/     0, /*End of Scope*/
/*17846*/   /*Scope*/ 51|128,6/*819*/, /*->18667*/
/*17848*/     OPC_CheckInteger, 25|128,20/*2585*/, 
/*17851*/     OPC_MoveParent,
/*17852*/     OPC_RecordChild1, // #0 = $addr
/*17853*/     OPC_Scope, 73|128,1/*201*/, /*->18057*/ // 4 children in Scope
/*17856*/       OPC_CheckChild1Type, MVT::v2i32,
/*17858*/       OPC_RecordChild2, // #1 = $rsrc
/*17859*/       OPC_RecordChild3, // #2 = $sampler
/*17860*/       OPC_MoveChild, 4,
/*17862*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17865*/       OPC_Scope, 47, /*->17914*/ // 4 children in Scope
/*17867*/         OPC_CheckPredicate, 22, // Predicate_TEX_ARRAY
/*17869*/         OPC_MoveParent,
/*17870*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*17872*/         OPC_EmitInteger, MVT::i32, 15, 
/*17875*/         OPC_EmitInteger, MVT::i1, 0, 
/*17878*/         OPC_EmitInteger, MVT::i1, 0, 
/*17881*/         OPC_EmitInteger, MVT::i1, 1, 
/*17884*/         OPC_EmitInteger, MVT::i1, 0, 
/*17887*/         OPC_EmitInteger, MVT::i1, 0, 
/*17890*/         OPC_EmitInteger, MVT::i1, 0, 
/*17893*/         OPC_EmitInteger, MVT::i1, 0, 
/*17896*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2585:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_L:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*17914*/       /*Scope*/ 47, /*->17962*/
/*17915*/         OPC_CheckPredicate, 23, // Predicate_TEX_SHADOW
/*17917*/         OPC_MoveParent,
/*17918*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*17920*/         OPC_EmitInteger, MVT::i32, 15, 
/*17923*/         OPC_EmitInteger, MVT::i1, 0, 
/*17926*/         OPC_EmitInteger, MVT::i1, 0, 
/*17929*/         OPC_EmitInteger, MVT::i1, 0, 
/*17932*/         OPC_EmitInteger, MVT::i1, 0, 
/*17935*/         OPC_EmitInteger, MVT::i1, 0, 
/*17938*/         OPC_EmitInteger, MVT::i1, 0, 
/*17941*/         OPC_EmitInteger, MVT::i1, 0, 
/*17944*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2585:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_L:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*17962*/       /*Scope*/ 47, /*->18010*/
/*17963*/         OPC_CheckPredicate, 26, // Predicate_TEX_SHADOW_ARRAY
/*17965*/         OPC_MoveParent,
/*17966*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*17968*/         OPC_EmitInteger, MVT::i32, 15, 
/*17971*/         OPC_EmitInteger, MVT::i1, 0, 
/*17974*/         OPC_EmitInteger, MVT::i1, 0, 
/*17977*/         OPC_EmitInteger, MVT::i1, 1, 
/*17980*/         OPC_EmitInteger, MVT::i1, 0, 
/*17983*/         OPC_EmitInteger, MVT::i1, 0, 
/*17986*/         OPC_EmitInteger, MVT::i1, 0, 
/*17989*/         OPC_EmitInteger, MVT::i1, 0, 
/*17992*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2585:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_L:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*18010*/       /*Scope*/ 45, /*->18056*/
/*18011*/         OPC_MoveParent,
/*18012*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*18014*/         OPC_EmitInteger, MVT::i32, 15, 
/*18017*/         OPC_EmitInteger, MVT::i1, 0, 
/*18020*/         OPC_EmitInteger, MVT::i1, 0, 
/*18023*/         OPC_EmitInteger, MVT::i1, 0, 
/*18026*/         OPC_EmitInteger, MVT::i1, 0, 
/*18029*/         OPC_EmitInteger, MVT::i1, 0, 
/*18032*/         OPC_EmitInteger, MVT::i1, 0, 
/*18035*/         OPC_EmitInteger, MVT::i1, 0, 
/*18038*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2585:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_SAMPLE_L:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*18056*/       0, /*End of Scope*/
/*18057*/     /*Scope*/ 73|128,1/*201*/, /*->18260*/
/*18059*/       OPC_CheckChild1Type, MVT::v4i32,
/*18061*/       OPC_RecordChild2, // #1 = $rsrc
/*18062*/       OPC_RecordChild3, // #2 = $sampler
/*18063*/       OPC_MoveChild, 4,
/*18065*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*18068*/       OPC_Scope, 47, /*->18117*/ // 4 children in Scope
/*18070*/         OPC_CheckPredicate, 22, // Predicate_TEX_ARRAY
/*18072*/         OPC_MoveParent,
/*18073*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*18075*/         OPC_EmitInteger, MVT::i32, 15, 
/*18078*/         OPC_EmitInteger, MVT::i1, 0, 
/*18081*/         OPC_EmitInteger, MVT::i1, 0, 
/*18084*/         OPC_EmitInteger, MVT::i1, 1, 
/*18087*/         OPC_EmitInteger, MVT::i1, 0, 
/*18090*/         OPC_EmitInteger, MVT::i1, 0, 
/*18093*/         OPC_EmitInteger, MVT::i1, 0, 
/*18096*/         OPC_EmitInteger, MVT::i1, 0, 
/*18099*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2585:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_L:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*18117*/       /*Scope*/ 47, /*->18165*/
/*18118*/         OPC_CheckPredicate, 23, // Predicate_TEX_SHADOW
/*18120*/         OPC_MoveParent,
/*18121*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*18123*/         OPC_EmitInteger, MVT::i32, 15, 
/*18126*/         OPC_EmitInteger, MVT::i1, 0, 
/*18129*/         OPC_EmitInteger, MVT::i1, 0, 
/*18132*/         OPC_EmitInteger, MVT::i1, 0, 
/*18135*/         OPC_EmitInteger, MVT::i1, 0, 
/*18138*/         OPC_EmitInteger, MVT::i1, 0, 
/*18141*/         OPC_EmitInteger, MVT::i1, 0, 
/*18144*/         OPC_EmitInteger, MVT::i1, 0, 
/*18147*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2585:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_L:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*18165*/       /*Scope*/ 47, /*->18213*/
/*18166*/         OPC_CheckPredicate, 26, // Predicate_TEX_SHADOW_ARRAY
/*18168*/         OPC_MoveParent,
/*18169*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*18171*/         OPC_EmitInteger, MVT::i32, 15, 
/*18174*/         OPC_EmitInteger, MVT::i1, 0, 
/*18177*/         OPC_EmitInteger, MVT::i1, 0, 
/*18180*/         OPC_EmitInteger, MVT::i1, 1, 
/*18183*/         OPC_EmitInteger, MVT::i1, 0, 
/*18186*/         OPC_EmitInteger, MVT::i1, 0, 
/*18189*/         OPC_EmitInteger, MVT::i1, 0, 
/*18192*/         OPC_EmitInteger, MVT::i1, 0, 
/*18195*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2585:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_L:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*18213*/       /*Scope*/ 45, /*->18259*/
/*18214*/         OPC_MoveParent,
/*18215*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*18217*/         OPC_EmitInteger, MVT::i32, 15, 
/*18220*/         OPC_EmitInteger, MVT::i1, 0, 
/*18223*/         OPC_EmitInteger, MVT::i1, 0, 
/*18226*/         OPC_EmitInteger, MVT::i1, 0, 
/*18229*/         OPC_EmitInteger, MVT::i1, 0, 
/*18232*/         OPC_EmitInteger, MVT::i1, 0, 
/*18235*/         OPC_EmitInteger, MVT::i1, 0, 
/*18238*/         OPC_EmitInteger, MVT::i1, 0, 
/*18241*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2585:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_SAMPLE_L:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*18259*/       0, /*End of Scope*/
/*18260*/     /*Scope*/ 73|128,1/*201*/, /*->18463*/
/*18262*/       OPC_CheckChild1Type, MVT::v8i32,
/*18264*/       OPC_RecordChild2, // #1 = $rsrc
/*18265*/       OPC_RecordChild3, // #2 = $sampler
/*18266*/       OPC_MoveChild, 4,
/*18268*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*18271*/       OPC_Scope, 47, /*->18320*/ // 4 children in Scope
/*18273*/         OPC_CheckPredicate, 22, // Predicate_TEX_ARRAY
/*18275*/         OPC_MoveParent,
/*18276*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*18278*/         OPC_EmitInteger, MVT::i32, 15, 
/*18281*/         OPC_EmitInteger, MVT::i1, 0, 
/*18284*/         OPC_EmitInteger, MVT::i1, 0, 
/*18287*/         OPC_EmitInteger, MVT::i1, 1, 
/*18290*/         OPC_EmitInteger, MVT::i1, 0, 
/*18293*/         OPC_EmitInteger, MVT::i1, 0, 
/*18296*/         OPC_EmitInteger, MVT::i1, 0, 
/*18299*/         OPC_EmitInteger, MVT::i1, 0, 
/*18302*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2585:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_L:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*18320*/       /*Scope*/ 47, /*->18368*/
/*18321*/         OPC_CheckPredicate, 23, // Predicate_TEX_SHADOW
/*18323*/         OPC_MoveParent,
/*18324*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*18326*/         OPC_EmitInteger, MVT::i32, 15, 
/*18329*/         OPC_EmitInteger, MVT::i1, 0, 
/*18332*/         OPC_EmitInteger, MVT::i1, 0, 
/*18335*/         OPC_EmitInteger, MVT::i1, 0, 
/*18338*/         OPC_EmitInteger, MVT::i1, 0, 
/*18341*/         OPC_EmitInteger, MVT::i1, 0, 
/*18344*/         OPC_EmitInteger, MVT::i1, 0, 
/*18347*/         OPC_EmitInteger, MVT::i1, 0, 
/*18350*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2585:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_L:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*18368*/       /*Scope*/ 47, /*->18416*/
/*18369*/         OPC_CheckPredicate, 26, // Predicate_TEX_SHADOW_ARRAY
/*18371*/         OPC_MoveParent,
/*18372*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*18374*/         OPC_EmitInteger, MVT::i32, 15, 
/*18377*/         OPC_EmitInteger, MVT::i1, 0, 
/*18380*/         OPC_EmitInteger, MVT::i1, 0, 
/*18383*/         OPC_EmitInteger, MVT::i1, 1, 
/*18386*/         OPC_EmitInteger, MVT::i1, 0, 
/*18389*/         OPC_EmitInteger, MVT::i1, 0, 
/*18392*/         OPC_EmitInteger, MVT::i1, 0, 
/*18395*/         OPC_EmitInteger, MVT::i1, 0, 
/*18398*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2585:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_L:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*18416*/       /*Scope*/ 45, /*->18462*/
/*18417*/         OPC_MoveParent,
/*18418*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*18420*/         OPC_EmitInteger, MVT::i32, 15, 
/*18423*/         OPC_EmitInteger, MVT::i1, 0, 
/*18426*/         OPC_EmitInteger, MVT::i1, 0, 
/*18429*/         OPC_EmitInteger, MVT::i1, 0, 
/*18432*/         OPC_EmitInteger, MVT::i1, 0, 
/*18435*/         OPC_EmitInteger, MVT::i1, 0, 
/*18438*/         OPC_EmitInteger, MVT::i1, 0, 
/*18441*/         OPC_EmitInteger, MVT::i1, 0, 
/*18444*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2585:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_SAMPLE_L:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*18462*/       0, /*End of Scope*/
/*18463*/     /*Scope*/ 73|128,1/*201*/, /*->18666*/
/*18465*/       OPC_CheckChild1Type, MVT::v16i32,
/*18467*/       OPC_RecordChild2, // #1 = $rsrc
/*18468*/       OPC_RecordChild3, // #2 = $sampler
/*18469*/       OPC_MoveChild, 4,
/*18471*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*18474*/       OPC_Scope, 47, /*->18523*/ // 4 children in Scope
/*18476*/         OPC_CheckPredicate, 22, // Predicate_TEX_ARRAY
/*18478*/         OPC_MoveParent,
/*18479*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*18481*/         OPC_EmitInteger, MVT::i32, 15, 
/*18484*/         OPC_EmitInteger, MVT::i1, 0, 
/*18487*/         OPC_EmitInteger, MVT::i1, 0, 
/*18490*/         OPC_EmitInteger, MVT::i1, 1, 
/*18493*/         OPC_EmitInteger, MVT::i1, 0, 
/*18496*/         OPC_EmitInteger, MVT::i1, 0, 
/*18499*/         OPC_EmitInteger, MVT::i1, 0, 
/*18502*/         OPC_EmitInteger, MVT::i1, 0, 
/*18505*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2585:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_L:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*18523*/       /*Scope*/ 47, /*->18571*/
/*18524*/         OPC_CheckPredicate, 23, // Predicate_TEX_SHADOW
/*18526*/         OPC_MoveParent,
/*18527*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*18529*/         OPC_EmitInteger, MVT::i32, 15, 
/*18532*/         OPC_EmitInteger, MVT::i1, 0, 
/*18535*/         OPC_EmitInteger, MVT::i1, 0, 
/*18538*/         OPC_EmitInteger, MVT::i1, 0, 
/*18541*/         OPC_EmitInteger, MVT::i1, 0, 
/*18544*/         OPC_EmitInteger, MVT::i1, 0, 
/*18547*/         OPC_EmitInteger, MVT::i1, 0, 
/*18550*/         OPC_EmitInteger, MVT::i1, 0, 
/*18553*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2585:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_L:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*18571*/       /*Scope*/ 47, /*->18619*/
/*18572*/         OPC_CheckPredicate, 26, // Predicate_TEX_SHADOW_ARRAY
/*18574*/         OPC_MoveParent,
/*18575*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*18577*/         OPC_EmitInteger, MVT::i32, 15, 
/*18580*/         OPC_EmitInteger, MVT::i1, 0, 
/*18583*/         OPC_EmitInteger, MVT::i1, 0, 
/*18586*/         OPC_EmitInteger, MVT::i1, 1, 
/*18589*/         OPC_EmitInteger, MVT::i1, 0, 
/*18592*/         OPC_EmitInteger, MVT::i1, 0, 
/*18595*/         OPC_EmitInteger, MVT::i1, 0, 
/*18598*/         OPC_EmitInteger, MVT::i1, 0, 
/*18601*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2585:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_L:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*18619*/       /*Scope*/ 45, /*->18665*/
/*18620*/         OPC_MoveParent,
/*18621*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*18623*/         OPC_EmitInteger, MVT::i32, 15, 
/*18626*/         OPC_EmitInteger, MVT::i1, 0, 
/*18629*/         OPC_EmitInteger, MVT::i1, 0, 
/*18632*/         OPC_EmitInteger, MVT::i1, 0, 
/*18635*/         OPC_EmitInteger, MVT::i1, 0, 
/*18638*/         OPC_EmitInteger, MVT::i1, 0, 
/*18641*/         OPC_EmitInteger, MVT::i1, 0, 
/*18644*/         OPC_EmitInteger, MVT::i1, 0, 
/*18647*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2585:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_SAMPLE_L:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*18665*/       0, /*End of Scope*/
/*18666*/     0, /*End of Scope*/
/*18667*/   /*Scope*/ 51|128,6/*819*/, /*->19488*/
/*18669*/     OPC_CheckInteger, 24|128,20/*2584*/, 
/*18672*/     OPC_MoveParent,
/*18673*/     OPC_RecordChild1, // #0 = $addr
/*18674*/     OPC_Scope, 73|128,1/*201*/, /*->18878*/ // 4 children in Scope
/*18677*/       OPC_CheckChild1Type, MVT::v2i32,
/*18679*/       OPC_RecordChild2, // #1 = $rsrc
/*18680*/       OPC_RecordChild3, // #2 = $sampler
/*18681*/       OPC_MoveChild, 4,
/*18683*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*18686*/       OPC_Scope, 47, /*->18735*/ // 4 children in Scope
/*18688*/         OPC_CheckPredicate, 22, // Predicate_TEX_ARRAY
/*18690*/         OPC_MoveParent,
/*18691*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*18693*/         OPC_EmitInteger, MVT::i32, 15, 
/*18696*/         OPC_EmitInteger, MVT::i1, 0, 
/*18699*/         OPC_EmitInteger, MVT::i1, 0, 
/*18702*/         OPC_EmitInteger, MVT::i1, 1, 
/*18705*/         OPC_EmitInteger, MVT::i1, 0, 
/*18708*/         OPC_EmitInteger, MVT::i1, 0, 
/*18711*/         OPC_EmitInteger, MVT::i1, 0, 
/*18714*/         OPC_EmitInteger, MVT::i1, 0, 
/*18717*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2584:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_B:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*18735*/       /*Scope*/ 47, /*->18783*/
/*18736*/         OPC_CheckPredicate, 23, // Predicate_TEX_SHADOW
/*18738*/         OPC_MoveParent,
/*18739*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*18741*/         OPC_EmitInteger, MVT::i32, 15, 
/*18744*/         OPC_EmitInteger, MVT::i1, 0, 
/*18747*/         OPC_EmitInteger, MVT::i1, 0, 
/*18750*/         OPC_EmitInteger, MVT::i1, 0, 
/*18753*/         OPC_EmitInteger, MVT::i1, 0, 
/*18756*/         OPC_EmitInteger, MVT::i1, 0, 
/*18759*/         OPC_EmitInteger, MVT::i1, 0, 
/*18762*/         OPC_EmitInteger, MVT::i1, 0, 
/*18765*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2584:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_B:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*18783*/       /*Scope*/ 47, /*->18831*/
/*18784*/         OPC_CheckPredicate, 26, // Predicate_TEX_SHADOW_ARRAY
/*18786*/         OPC_MoveParent,
/*18787*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*18789*/         OPC_EmitInteger, MVT::i32, 15, 
/*18792*/         OPC_EmitInteger, MVT::i1, 0, 
/*18795*/         OPC_EmitInteger, MVT::i1, 0, 
/*18798*/         OPC_EmitInteger, MVT::i1, 1, 
/*18801*/         OPC_EmitInteger, MVT::i1, 0, 
/*18804*/         OPC_EmitInteger, MVT::i1, 0, 
/*18807*/         OPC_EmitInteger, MVT::i1, 0, 
/*18810*/         OPC_EmitInteger, MVT::i1, 0, 
/*18813*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2584:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_B:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*18831*/       /*Scope*/ 45, /*->18877*/
/*18832*/         OPC_MoveParent,
/*18833*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*18835*/         OPC_EmitInteger, MVT::i32, 15, 
/*18838*/         OPC_EmitInteger, MVT::i1, 0, 
/*18841*/         OPC_EmitInteger, MVT::i1, 0, 
/*18844*/         OPC_EmitInteger, MVT::i1, 0, 
/*18847*/         OPC_EmitInteger, MVT::i1, 0, 
/*18850*/         OPC_EmitInteger, MVT::i1, 0, 
/*18853*/         OPC_EmitInteger, MVT::i1, 0, 
/*18856*/         OPC_EmitInteger, MVT::i1, 0, 
/*18859*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2584:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_SAMPLE_B:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*18877*/       0, /*End of Scope*/
/*18878*/     /*Scope*/ 73|128,1/*201*/, /*->19081*/
/*18880*/       OPC_CheckChild1Type, MVT::v4i32,
/*18882*/       OPC_RecordChild2, // #1 = $rsrc
/*18883*/       OPC_RecordChild3, // #2 = $sampler
/*18884*/       OPC_MoveChild, 4,
/*18886*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*18889*/       OPC_Scope, 47, /*->18938*/ // 4 children in Scope
/*18891*/         OPC_CheckPredicate, 22, // Predicate_TEX_ARRAY
/*18893*/         OPC_MoveParent,
/*18894*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*18896*/         OPC_EmitInteger, MVT::i32, 15, 
/*18899*/         OPC_EmitInteger, MVT::i1, 0, 
/*18902*/         OPC_EmitInteger, MVT::i1, 0, 
/*18905*/         OPC_EmitInteger, MVT::i1, 1, 
/*18908*/         OPC_EmitInteger, MVT::i1, 0, 
/*18911*/         OPC_EmitInteger, MVT::i1, 0, 
/*18914*/         OPC_EmitInteger, MVT::i1, 0, 
/*18917*/         OPC_EmitInteger, MVT::i1, 0, 
/*18920*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2584:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_B:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*18938*/       /*Scope*/ 47, /*->18986*/
/*18939*/         OPC_CheckPredicate, 23, // Predicate_TEX_SHADOW
/*18941*/         OPC_MoveParent,
/*18942*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*18944*/         OPC_EmitInteger, MVT::i32, 15, 
/*18947*/         OPC_EmitInteger, MVT::i1, 0, 
/*18950*/         OPC_EmitInteger, MVT::i1, 0, 
/*18953*/         OPC_EmitInteger, MVT::i1, 0, 
/*18956*/         OPC_EmitInteger, MVT::i1, 0, 
/*18959*/         OPC_EmitInteger, MVT::i1, 0, 
/*18962*/         OPC_EmitInteger, MVT::i1, 0, 
/*18965*/         OPC_EmitInteger, MVT::i1, 0, 
/*18968*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2584:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_B:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*18986*/       /*Scope*/ 47, /*->19034*/
/*18987*/         OPC_CheckPredicate, 26, // Predicate_TEX_SHADOW_ARRAY
/*18989*/         OPC_MoveParent,
/*18990*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*18992*/         OPC_EmitInteger, MVT::i32, 15, 
/*18995*/         OPC_EmitInteger, MVT::i1, 0, 
/*18998*/         OPC_EmitInteger, MVT::i1, 0, 
/*19001*/         OPC_EmitInteger, MVT::i1, 1, 
/*19004*/         OPC_EmitInteger, MVT::i1, 0, 
/*19007*/         OPC_EmitInteger, MVT::i1, 0, 
/*19010*/         OPC_EmitInteger, MVT::i1, 0, 
/*19013*/         OPC_EmitInteger, MVT::i1, 0, 
/*19016*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2584:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_B:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*19034*/       /*Scope*/ 45, /*->19080*/
/*19035*/         OPC_MoveParent,
/*19036*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*19038*/         OPC_EmitInteger, MVT::i32, 15, 
/*19041*/         OPC_EmitInteger, MVT::i1, 0, 
/*19044*/         OPC_EmitInteger, MVT::i1, 0, 
/*19047*/         OPC_EmitInteger, MVT::i1, 0, 
/*19050*/         OPC_EmitInteger, MVT::i1, 0, 
/*19053*/         OPC_EmitInteger, MVT::i1, 0, 
/*19056*/         OPC_EmitInteger, MVT::i1, 0, 
/*19059*/         OPC_EmitInteger, MVT::i1, 0, 
/*19062*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2584:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_SAMPLE_B:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*19080*/       0, /*End of Scope*/
/*19081*/     /*Scope*/ 73|128,1/*201*/, /*->19284*/
/*19083*/       OPC_CheckChild1Type, MVT::v8i32,
/*19085*/       OPC_RecordChild2, // #1 = $rsrc
/*19086*/       OPC_RecordChild3, // #2 = $sampler
/*19087*/       OPC_MoveChild, 4,
/*19089*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19092*/       OPC_Scope, 47, /*->19141*/ // 4 children in Scope
/*19094*/         OPC_CheckPredicate, 22, // Predicate_TEX_ARRAY
/*19096*/         OPC_MoveParent,
/*19097*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*19099*/         OPC_EmitInteger, MVT::i32, 15, 
/*19102*/         OPC_EmitInteger, MVT::i1, 0, 
/*19105*/         OPC_EmitInteger, MVT::i1, 0, 
/*19108*/         OPC_EmitInteger, MVT::i1, 1, 
/*19111*/         OPC_EmitInteger, MVT::i1, 0, 
/*19114*/         OPC_EmitInteger, MVT::i1, 0, 
/*19117*/         OPC_EmitInteger, MVT::i1, 0, 
/*19120*/         OPC_EmitInteger, MVT::i1, 0, 
/*19123*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2584:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_B:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*19141*/       /*Scope*/ 47, /*->19189*/
/*19142*/         OPC_CheckPredicate, 23, // Predicate_TEX_SHADOW
/*19144*/         OPC_MoveParent,
/*19145*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*19147*/         OPC_EmitInteger, MVT::i32, 15, 
/*19150*/         OPC_EmitInteger, MVT::i1, 0, 
/*19153*/         OPC_EmitInteger, MVT::i1, 0, 
/*19156*/         OPC_EmitInteger, MVT::i1, 0, 
/*19159*/         OPC_EmitInteger, MVT::i1, 0, 
/*19162*/         OPC_EmitInteger, MVT::i1, 0, 
/*19165*/         OPC_EmitInteger, MVT::i1, 0, 
/*19168*/         OPC_EmitInteger, MVT::i1, 0, 
/*19171*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2584:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_B:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*19189*/       /*Scope*/ 47, /*->19237*/
/*19190*/         OPC_CheckPredicate, 26, // Predicate_TEX_SHADOW_ARRAY
/*19192*/         OPC_MoveParent,
/*19193*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*19195*/         OPC_EmitInteger, MVT::i32, 15, 
/*19198*/         OPC_EmitInteger, MVT::i1, 0, 
/*19201*/         OPC_EmitInteger, MVT::i1, 0, 
/*19204*/         OPC_EmitInteger, MVT::i1, 1, 
/*19207*/         OPC_EmitInteger, MVT::i1, 0, 
/*19210*/         OPC_EmitInteger, MVT::i1, 0, 
/*19213*/         OPC_EmitInteger, MVT::i1, 0, 
/*19216*/         OPC_EmitInteger, MVT::i1, 0, 
/*19219*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2584:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_B:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*19237*/       /*Scope*/ 45, /*->19283*/
/*19238*/         OPC_MoveParent,
/*19239*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*19241*/         OPC_EmitInteger, MVT::i32, 15, 
/*19244*/         OPC_EmitInteger, MVT::i1, 0, 
/*19247*/         OPC_EmitInteger, MVT::i1, 0, 
/*19250*/         OPC_EmitInteger, MVT::i1, 0, 
/*19253*/         OPC_EmitInteger, MVT::i1, 0, 
/*19256*/         OPC_EmitInteger, MVT::i1, 0, 
/*19259*/         OPC_EmitInteger, MVT::i1, 0, 
/*19262*/         OPC_EmitInteger, MVT::i1, 0, 
/*19265*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2584:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_SAMPLE_B:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*19283*/       0, /*End of Scope*/
/*19284*/     /*Scope*/ 73|128,1/*201*/, /*->19487*/
/*19286*/       OPC_CheckChild1Type, MVT::v16i32,
/*19288*/       OPC_RecordChild2, // #1 = $rsrc
/*19289*/       OPC_RecordChild3, // #2 = $sampler
/*19290*/       OPC_MoveChild, 4,
/*19292*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19295*/       OPC_Scope, 47, /*->19344*/ // 4 children in Scope
/*19297*/         OPC_CheckPredicate, 22, // Predicate_TEX_ARRAY
/*19299*/         OPC_MoveParent,
/*19300*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*19302*/         OPC_EmitInteger, MVT::i32, 15, 
/*19305*/         OPC_EmitInteger, MVT::i1, 0, 
/*19308*/         OPC_EmitInteger, MVT::i1, 0, 
/*19311*/         OPC_EmitInteger, MVT::i1, 1, 
/*19314*/         OPC_EmitInteger, MVT::i1, 0, 
/*19317*/         OPC_EmitInteger, MVT::i1, 0, 
/*19320*/         OPC_EmitInteger, MVT::i1, 0, 
/*19323*/         OPC_EmitInteger, MVT::i1, 0, 
/*19326*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2584:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_B:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*19344*/       /*Scope*/ 47, /*->19392*/
/*19345*/         OPC_CheckPredicate, 23, // Predicate_TEX_SHADOW
/*19347*/         OPC_MoveParent,
/*19348*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*19350*/         OPC_EmitInteger, MVT::i32, 15, 
/*19353*/         OPC_EmitInteger, MVT::i1, 0, 
/*19356*/         OPC_EmitInteger, MVT::i1, 0, 
/*19359*/         OPC_EmitInteger, MVT::i1, 0, 
/*19362*/         OPC_EmitInteger, MVT::i1, 0, 
/*19365*/         OPC_EmitInteger, MVT::i1, 0, 
/*19368*/         OPC_EmitInteger, MVT::i1, 0, 
/*19371*/         OPC_EmitInteger, MVT::i1, 0, 
/*19374*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2584:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_B:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*19392*/       /*Scope*/ 47, /*->19440*/
/*19393*/         OPC_CheckPredicate, 26, // Predicate_TEX_SHADOW_ARRAY
/*19395*/         OPC_MoveParent,
/*19396*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*19398*/         OPC_EmitInteger, MVT::i32, 15, 
/*19401*/         OPC_EmitInteger, MVT::i1, 0, 
/*19404*/         OPC_EmitInteger, MVT::i1, 0, 
/*19407*/         OPC_EmitInteger, MVT::i1, 1, 
/*19410*/         OPC_EmitInteger, MVT::i1, 0, 
/*19413*/         OPC_EmitInteger, MVT::i1, 0, 
/*19416*/         OPC_EmitInteger, MVT::i1, 0, 
/*19419*/         OPC_EmitInteger, MVT::i1, 0, 
/*19422*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2584:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_B:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*19440*/       /*Scope*/ 45, /*->19486*/
/*19441*/         OPC_MoveParent,
/*19442*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*19444*/         OPC_EmitInteger, MVT::i32, 15, 
/*19447*/         OPC_EmitInteger, MVT::i1, 0, 
/*19450*/         OPC_EmitInteger, MVT::i1, 0, 
/*19453*/         OPC_EmitInteger, MVT::i1, 0, 
/*19456*/         OPC_EmitInteger, MVT::i1, 0, 
/*19459*/         OPC_EmitInteger, MVT::i1, 0, 
/*19462*/         OPC_EmitInteger, MVT::i1, 0, 
/*19465*/         OPC_EmitInteger, MVT::i1, 0, 
/*19468*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2584:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_SAMPLE_B:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*19486*/       0, /*End of Scope*/
/*19487*/     0, /*End of Scope*/
/*19488*/   /*Scope*/ 84|128,2/*340*/, /*->19830*/
/*19490*/     OPC_CheckInteger, 5|128,19/*2437*/, 
/*19493*/     OPC_MoveParent,
/*19494*/     OPC_RecordChild1, // #0 = $src
/*19495*/     OPC_Scope, 10, /*->19507*/ // 3 children in Scope
/*19497*/       OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*19499*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CUBE_r600_pseudo), 0,
                    1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4f32 2437:iPTR, v4f32:v4f32:$src) - Complexity = 8
                // Dst: (CUBE_r600_pseudo:v4f32 v4f32:v4f32:$src)
/*19507*/     /*Scope*/ 10, /*->19518*/
/*19508*/       OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*19510*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CUBE_eg_pseudo), 0,
                    1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4f32 2437:iPTR, v4f32:v4f32:$src) - Complexity = 8
                // Dst: (CUBE_eg_pseudo:v4f32 v4f32:v4f32:$src)
/*19518*/     /*Scope*/ 53|128,2/*309*/, /*->19829*/
/*19520*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*19522*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #1
/*19529*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*19532*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*19541*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*19544*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*19553*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*19556*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7
/*19565*/       OPC_EmitInteger, MVT::i32, 0, 
/*19568*/       OPC_EmitInteger, MVT::i32, 0, 
/*19571*/       OPC_EmitInteger, MVT::i32, 0, 
/*19574*/       OPC_EmitInteger, MVT::i32, 0, 
/*19577*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_CUBETC_F32), 0,
                    1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 5, 7, 8, 9, 10, 11,  // Results = #12
/*19591*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*19594*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 1, 12, 13,  // Results = #14
/*19604*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*19607*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 15,  // Results = #16
/*19616*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*19619*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 17,  // Results = #18
/*19628*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*19631*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 19,  // Results = #20
/*19640*/       OPC_EmitInteger, MVT::i32, 0, 
/*19643*/       OPC_EmitInteger, MVT::i32, 0, 
/*19646*/       OPC_EmitInteger, MVT::i32, 0, 
/*19649*/       OPC_EmitInteger, MVT::i32, 0, 
/*19652*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_CUBESC_F32), 0,
                    1/*#VTs*/, MVT::i32, 7/*#Ops*/, 16, 18, 20, 21, 22, 23, 24,  // Results = #25
/*19666*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*19669*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 14, 25, 26,  // Results = #27
/*19679*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*19682*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 28,  // Results = #29
/*19691*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*19694*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 30,  // Results = #31
/*19703*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*19706*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 32,  // Results = #33
/*19715*/       OPC_EmitInteger, MVT::i32, 0, 
/*19718*/       OPC_EmitInteger, MVT::i32, 0, 
/*19721*/       OPC_EmitInteger, MVT::i32, 0, 
/*19724*/       OPC_EmitInteger, MVT::i32, 0, 
/*19727*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_CUBEMA_F32), 0,
                    1/*#VTs*/, MVT::i32, 7/*#Ops*/, 29, 31, 33, 34, 35, 36, 37,  // Results = #38
/*19741*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*19744*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 27, 38, 39,  // Results = #40
/*19754*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*19757*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 41,  // Results = #42
/*19766*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*19769*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 43,  // Results = #44
/*19778*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*19781*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 45,  // Results = #46
/*19790*/       OPC_EmitInteger, MVT::i32, 0, 
/*19793*/       OPC_EmitInteger, MVT::i32, 0, 
/*19796*/       OPC_EmitInteger, MVT::i32, 0, 
/*19799*/       OPC_EmitInteger, MVT::i32, 0, 
/*19802*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_CUBEID_F32), 0,
                    1/*#VTs*/, MVT::i32, 7/*#Ops*/, 42, 44, 46, 47, 48, 49, 50,  // Results = #51
/*19816*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*19819*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 40, 51, 52, 
                // Src: (intrinsic_wo_chain:v4f32 2437:iPTR, v4f32:v4f32:$src) - Complexity = 8
                // Dst: (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (IMPLICIT_DEF:v4f32), (V_CUBETC_F32:i32 (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub0:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub1:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub2:i32)), sub0:i32), (V_CUBESC_F32:i32 (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub0:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub1:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub2:i32)), sub1:i32), (V_CUBEMA_F32:i32 (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub0:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub1:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub2:i32)), sub2:i32), (V_CUBEID_F32:i32 (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub0:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub1:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub2:i32)), sub3:i32)
/*19829*/     0, /*End of Scope*/
/*19830*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 114|128,13/*1778*/,  TARGET_VAL(ISD::EXTRACT_VECTOR_ELT),// ->21613
/*19835*/   OPC_RecordChild0, // #0 = $src
/*19836*/   OPC_Scope, 30|128,1/*158*/, /*->19997*/ // 8 children in Scope
/*19839*/     OPC_CheckChild0Type, MVT::v4i32,
/*19841*/     OPC_MoveChild, 1,
/*19843*/     OPC_Scope, 37, /*->19882*/ // 4 children in Scope
/*19845*/       OPC_CheckInteger, 0, 
/*19847*/       OPC_MoveParent,
/*19848*/       OPC_CheckType, MVT::i32,
/*19850*/       OPC_Scope, 14, /*->19866*/ // 2 children in Scope
/*19852*/         OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*19854*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*19857*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 0:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub0:i32)
/*19866*/       /*Scope*/ 14, /*->19881*/
/*19867*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*19869*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*19872*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 0:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub0:i32)
/*19881*/       0, /*End of Scope*/
/*19882*/     /*Scope*/ 37, /*->19920*/
/*19883*/       OPC_CheckInteger, 1, 
/*19885*/       OPC_MoveParent,
/*19886*/       OPC_CheckType, MVT::i32,
/*19888*/       OPC_Scope, 14, /*->19904*/ // 2 children in Scope
/*19890*/         OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*19892*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*19895*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 1:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub1:i32)
/*19904*/       /*Scope*/ 14, /*->19919*/
/*19905*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*19907*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*19910*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 1:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub1:i32)
/*19919*/       0, /*End of Scope*/
/*19920*/     /*Scope*/ 37, /*->19958*/
/*19921*/       OPC_CheckInteger, 2, 
/*19923*/       OPC_MoveParent,
/*19924*/       OPC_CheckType, MVT::i32,
/*19926*/       OPC_Scope, 14, /*->19942*/ // 2 children in Scope
/*19928*/         OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*19930*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*19933*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 2:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub2:i32)
/*19942*/       /*Scope*/ 14, /*->19957*/
/*19943*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*19945*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*19948*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 2:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub2:i32)
/*19957*/       0, /*End of Scope*/
/*19958*/     /*Scope*/ 37, /*->19996*/
/*19959*/       OPC_CheckInteger, 3, 
/*19961*/       OPC_MoveParent,
/*19962*/       OPC_CheckType, MVT::i32,
/*19964*/       OPC_Scope, 14, /*->19980*/ // 2 children in Scope
/*19966*/         OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*19968*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*19971*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 3:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub3:i32)
/*19980*/       /*Scope*/ 14, /*->19995*/
/*19981*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*19983*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*19986*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 3:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub3:i32)
/*19995*/       0, /*End of Scope*/
/*19996*/     0, /*End of Scope*/
/*19997*/   /*Scope*/ 66, /*->20064*/
/*19998*/     OPC_CheckChild0Type, MVT::v2i32,
/*20000*/     OPC_MoveChild, 1,
/*20002*/     OPC_Scope, 19, /*->20023*/ // 3 children in Scope
/*20004*/       OPC_CheckInteger, 0, 
/*20006*/       OPC_MoveParent,
/*20007*/       OPC_CheckType, MVT::i32,
/*20009*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20011*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*20014*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v2i32:v2i32:$src, 0:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v2i32:$src, sub0:i32)
/*20023*/     /*Scope*/ 19, /*->20043*/
/*20024*/       OPC_CheckInteger, 1, 
/*20026*/       OPC_MoveParent,
/*20027*/       OPC_CheckType, MVT::i32,
/*20029*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20031*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*20034*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v2i32:v2i32:$src, 1:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v2i32:$src, sub1:i32)
/*20043*/     /*Scope*/ 19, /*->20063*/
/*20044*/       OPC_CheckInteger, 2, 
/*20046*/       OPC_MoveParent,
/*20047*/       OPC_CheckType, MVT::i32,
/*20049*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20051*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*20054*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v2i32:v2i32:$src, 2:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v2i32:$src, sub2:i32)
/*20063*/     0, /*End of Scope*/
/*20064*/   /*Scope*/ 38|128,1/*166*/, /*->20232*/
/*20066*/     OPC_CheckChild0Type, MVT::v8i32,
/*20068*/     OPC_MoveChild, 1,
/*20070*/     OPC_Scope, 19, /*->20091*/ // 8 children in Scope
/*20072*/       OPC_CheckInteger, 0, 
/*20074*/       OPC_MoveParent,
/*20075*/       OPC_CheckType, MVT::i32,
/*20077*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20079*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*20082*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 0:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub0:i32)
/*20091*/     /*Scope*/ 19, /*->20111*/
/*20092*/       OPC_CheckInteger, 1, 
/*20094*/       OPC_MoveParent,
/*20095*/       OPC_CheckType, MVT::i32,
/*20097*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20099*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*20102*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 1:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub1:i32)
/*20111*/     /*Scope*/ 19, /*->20131*/
/*20112*/       OPC_CheckInteger, 2, 
/*20114*/       OPC_MoveParent,
/*20115*/       OPC_CheckType, MVT::i32,
/*20117*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20119*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*20122*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 2:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub2:i32)
/*20131*/     /*Scope*/ 19, /*->20151*/
/*20132*/       OPC_CheckInteger, 3, 
/*20134*/       OPC_MoveParent,
/*20135*/       OPC_CheckType, MVT::i32,
/*20137*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20139*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*20142*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 3:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub3:i32)
/*20151*/     /*Scope*/ 19, /*->20171*/
/*20152*/       OPC_CheckInteger, 4, 
/*20154*/       OPC_MoveParent,
/*20155*/       OPC_CheckType, MVT::i32,
/*20157*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20159*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*20162*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 4:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub4:i32)
/*20171*/     /*Scope*/ 19, /*->20191*/
/*20172*/       OPC_CheckInteger, 5, 
/*20174*/       OPC_MoveParent,
/*20175*/       OPC_CheckType, MVT::i32,
/*20177*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20179*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*20182*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 5:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub5:i32)
/*20191*/     /*Scope*/ 19, /*->20211*/
/*20192*/       OPC_CheckInteger, 6, 
/*20194*/       OPC_MoveParent,
/*20195*/       OPC_CheckType, MVT::i32,
/*20197*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20199*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*20202*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 6:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub6:i32)
/*20211*/     /*Scope*/ 19, /*->20231*/
/*20212*/       OPC_CheckInteger, 7, 
/*20214*/       OPC_MoveParent,
/*20215*/       OPC_CheckType, MVT::i32,
/*20217*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20219*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*20222*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 7:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub7:i32)
/*20231*/     0, /*End of Scope*/
/*20232*/   /*Scope*/ 70|128,2/*326*/, /*->20560*/
/*20234*/     OPC_CheckChild0Type, MVT::v16i32,
/*20236*/     OPC_MoveChild, 1,
/*20238*/     OPC_Scope, 19, /*->20259*/ // 16 children in Scope
/*20240*/       OPC_CheckInteger, 0, 
/*20242*/       OPC_MoveParent,
/*20243*/       OPC_CheckType, MVT::i32,
/*20245*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20247*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*20250*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 0:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub0:i32)
/*20259*/     /*Scope*/ 19, /*->20279*/
/*20260*/       OPC_CheckInteger, 1, 
/*20262*/       OPC_MoveParent,
/*20263*/       OPC_CheckType, MVT::i32,
/*20265*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20267*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*20270*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 1:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub1:i32)
/*20279*/     /*Scope*/ 19, /*->20299*/
/*20280*/       OPC_CheckInteger, 2, 
/*20282*/       OPC_MoveParent,
/*20283*/       OPC_CheckType, MVT::i32,
/*20285*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20287*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*20290*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 2:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub2:i32)
/*20299*/     /*Scope*/ 19, /*->20319*/
/*20300*/       OPC_CheckInteger, 3, 
/*20302*/       OPC_MoveParent,
/*20303*/       OPC_CheckType, MVT::i32,
/*20305*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20307*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*20310*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 3:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub3:i32)
/*20319*/     /*Scope*/ 19, /*->20339*/
/*20320*/       OPC_CheckInteger, 4, 
/*20322*/       OPC_MoveParent,
/*20323*/       OPC_CheckType, MVT::i32,
/*20325*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20327*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*20330*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 4:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub4:i32)
/*20339*/     /*Scope*/ 19, /*->20359*/
/*20340*/       OPC_CheckInteger, 5, 
/*20342*/       OPC_MoveParent,
/*20343*/       OPC_CheckType, MVT::i32,
/*20345*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20347*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*20350*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 5:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub5:i32)
/*20359*/     /*Scope*/ 19, /*->20379*/
/*20360*/       OPC_CheckInteger, 6, 
/*20362*/       OPC_MoveParent,
/*20363*/       OPC_CheckType, MVT::i32,
/*20365*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20367*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*20370*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 6:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub6:i32)
/*20379*/     /*Scope*/ 19, /*->20399*/
/*20380*/       OPC_CheckInteger, 7, 
/*20382*/       OPC_MoveParent,
/*20383*/       OPC_CheckType, MVT::i32,
/*20385*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20387*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*20390*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 7:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub7:i32)
/*20399*/     /*Scope*/ 19, /*->20419*/
/*20400*/       OPC_CheckInteger, 8, 
/*20402*/       OPC_MoveParent,
/*20403*/       OPC_CheckType, MVT::i32,
/*20405*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20407*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub8,
/*20410*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 8:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub8:i32)
/*20419*/     /*Scope*/ 19, /*->20439*/
/*20420*/       OPC_CheckInteger, 9, 
/*20422*/       OPC_MoveParent,
/*20423*/       OPC_CheckType, MVT::i32,
/*20425*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20427*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub9,
/*20430*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 9:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub9:i32)
/*20439*/     /*Scope*/ 19, /*->20459*/
/*20440*/       OPC_CheckInteger, 10, 
/*20442*/       OPC_MoveParent,
/*20443*/       OPC_CheckType, MVT::i32,
/*20445*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20447*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub10,
/*20450*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 10:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub10:i32)
/*20459*/     /*Scope*/ 19, /*->20479*/
/*20460*/       OPC_CheckInteger, 11, 
/*20462*/       OPC_MoveParent,
/*20463*/       OPC_CheckType, MVT::i32,
/*20465*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20467*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub11,
/*20470*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 11:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub11:i32)
/*20479*/     /*Scope*/ 19, /*->20499*/
/*20480*/       OPC_CheckInteger, 12, 
/*20482*/       OPC_MoveParent,
/*20483*/       OPC_CheckType, MVT::i32,
/*20485*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20487*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub12,
/*20490*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 12:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub12:i32)
/*20499*/     /*Scope*/ 19, /*->20519*/
/*20500*/       OPC_CheckInteger, 13, 
/*20502*/       OPC_MoveParent,
/*20503*/       OPC_CheckType, MVT::i32,
/*20505*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20507*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub13,
/*20510*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 13:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub13:i32)
/*20519*/     /*Scope*/ 19, /*->20539*/
/*20520*/       OPC_CheckInteger, 14, 
/*20522*/       OPC_MoveParent,
/*20523*/       OPC_CheckType, MVT::i32,
/*20525*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20527*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub14,
/*20530*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 14:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub14:i32)
/*20539*/     /*Scope*/ 19, /*->20559*/
/*20540*/       OPC_CheckInteger, 15, 
/*20542*/       OPC_MoveParent,
/*20543*/       OPC_CheckType, MVT::i32,
/*20545*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20547*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub15,
/*20550*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 15:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub15:i32)
/*20559*/     0, /*End of Scope*/
/*20560*/   /*Scope*/ 20|128,1/*148*/, /*->20710*/
/*20562*/     OPC_CheckChild0Type, MVT::v2f32,
/*20564*/     OPC_MoveChild, 1,
/*20566*/     OPC_Scope, 46, /*->20614*/ // 5 children in Scope
/*20568*/       OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*20571*/       OPC_MoveChild, 0,
/*20573*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*20576*/       OPC_RecordChild0, // #1 = $idx
/*20577*/       OPC_RecordChild1, // #2 = $off
/*20578*/       OPC_MoveChild, 1,
/*20580*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*20583*/       OPC_MoveParent,
/*20584*/       OPC_CheckType, MVT::i32,
/*20586*/       OPC_MoveParent,
/*20587*/       OPC_CheckType, MVT::i64,
/*20589*/       OPC_MoveParent,
/*20590*/       OPC_CheckType, MVT::f32,
/*20592*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20594*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*20601*/       OPC_EmitConvertToTarget, 2,
/*20603*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 3, 0, 1, 4, 
                // Src: (vector_extract:f32 v2f32:v2f32:$vec, (zext:i64 (add:i32 i32:i32:$idx, (imm:i32):$off))) - Complexity = 12
                // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v2f32:$vec, ?:i32:$idx, (imm:i32):$off)
/*20614*/     /*Scope*/ 19, /*->20634*/
/*20615*/       OPC_CheckInteger, 0, 
/*20617*/       OPC_MoveParent,
/*20618*/       OPC_CheckType, MVT::f32,
/*20620*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20622*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*20625*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:f32 v2f32:v2f32:$src, 0:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:f32 ?:v2f32:$src, sub0:i32)
/*20634*/     /*Scope*/ 19, /*->20654*/
/*20635*/       OPC_CheckInteger, 1, 
/*20637*/       OPC_MoveParent,
/*20638*/       OPC_CheckType, MVT::f32,
/*20640*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20642*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*20645*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:f32 v2f32:v2f32:$src, 1:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:f32 ?:v2f32:$src, sub1:i32)
/*20654*/     /*Scope*/ 19, /*->20674*/
/*20655*/       OPC_CheckInteger, 2, 
/*20657*/       OPC_MoveParent,
/*20658*/       OPC_CheckType, MVT::f32,
/*20660*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20662*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*20665*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:f32 v2f32:v2f32:$src, 2:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:f32 ?:v2f32:$src, sub2:i32)
/*20674*/     /*Scope*/ 34, /*->20709*/
/*20675*/       OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*20678*/       OPC_RecordChild0, // #1 = $idx
/*20679*/       OPC_CheckChild0Type, MVT::i32,
/*20681*/       OPC_CheckType, MVT::i64,
/*20683*/       OPC_MoveParent,
/*20684*/       OPC_CheckType, MVT::f32,
/*20686*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20688*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #2
/*20695*/       OPC_EmitInteger, MVT::i32, 0, 
/*20698*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 0, 1, 3, 
                // Src: (vector_extract:f32 v2f32:v2f32:$vec, (zext:i64 i32:i32:$idx)) - Complexity = 6
                // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v2f32:$vec, ?:i32:$idx, 0:i32)
/*20709*/     0, /*End of Scope*/
/*20710*/   /*Scope*/ 112|128,1/*240*/, /*->20952*/
/*20712*/     OPC_CheckChild0Type, MVT::v4f32,
/*20714*/     OPC_MoveChild, 1,
/*20716*/     OPC_Scope, 46, /*->20764*/ // 6 children in Scope
/*20718*/       OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*20721*/       OPC_MoveChild, 0,
/*20723*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*20726*/       OPC_RecordChild0, // #1 = $idx
/*20727*/       OPC_RecordChild1, // #2 = $off
/*20728*/       OPC_MoveChild, 1,
/*20730*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*20733*/       OPC_MoveParent,
/*20734*/       OPC_CheckType, MVT::i32,
/*20736*/       OPC_MoveParent,
/*20737*/       OPC_CheckType, MVT::i64,
/*20739*/       OPC_MoveParent,
/*20740*/       OPC_CheckType, MVT::f32,
/*20742*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20744*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*20751*/       OPC_EmitConvertToTarget, 2,
/*20753*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 3, 0, 1, 4, 
                // Src: (vector_extract:f32 v4f32:v4f32:$vec, (zext:i64 (add:i32 i32:i32:$idx, (imm:i32):$off))) - Complexity = 12
                // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v4f32:$vec, ?:i32:$idx, (imm:i32):$off)
/*20764*/     /*Scope*/ 37, /*->20802*/
/*20765*/       OPC_CheckInteger, 0, 
/*20767*/       OPC_MoveParent,
/*20768*/       OPC_CheckType, MVT::f32,
/*20770*/       OPC_Scope, 14, /*->20786*/ // 2 children in Scope
/*20772*/         OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*20774*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*20777*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v4f32:v4f32:$src, 0:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub0:i32)
/*20786*/       /*Scope*/ 14, /*->20801*/
/*20787*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20789*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*20792*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v4f32:v4f32:$src, 0:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub0:i32)
/*20801*/       0, /*End of Scope*/
/*20802*/     /*Scope*/ 37, /*->20840*/
/*20803*/       OPC_CheckInteger, 1, 
/*20805*/       OPC_MoveParent,
/*20806*/       OPC_CheckType, MVT::f32,
/*20808*/       OPC_Scope, 14, /*->20824*/ // 2 children in Scope
/*20810*/         OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*20812*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*20815*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v4f32:v4f32:$src, 1:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub1:i32)
/*20824*/       /*Scope*/ 14, /*->20839*/
/*20825*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20827*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*20830*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v4f32:v4f32:$src, 1:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub1:i32)
/*20839*/       0, /*End of Scope*/
/*20840*/     /*Scope*/ 37, /*->20878*/
/*20841*/       OPC_CheckInteger, 2, 
/*20843*/       OPC_MoveParent,
/*20844*/       OPC_CheckType, MVT::f32,
/*20846*/       OPC_Scope, 14, /*->20862*/ // 2 children in Scope
/*20848*/         OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*20850*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*20853*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v4f32:v4f32:$src, 2:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub2:i32)
/*20862*/       /*Scope*/ 14, /*->20877*/
/*20863*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20865*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*20868*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v4f32:v4f32:$src, 2:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub2:i32)
/*20877*/       0, /*End of Scope*/
/*20878*/     /*Scope*/ 37, /*->20916*/
/*20879*/       OPC_CheckInteger, 3, 
/*20881*/       OPC_MoveParent,
/*20882*/       OPC_CheckType, MVT::f32,
/*20884*/       OPC_Scope, 14, /*->20900*/ // 2 children in Scope
/*20886*/         OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*20888*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*20891*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v4f32:v4f32:$src, 3:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub3:i32)
/*20900*/       /*Scope*/ 14, /*->20915*/
/*20901*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20903*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*20906*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v4f32:v4f32:$src, 3:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub3:i32)
/*20915*/       0, /*End of Scope*/
/*20916*/     /*Scope*/ 34, /*->20951*/
/*20917*/       OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*20920*/       OPC_RecordChild0, // #1 = $idx
/*20921*/       OPC_CheckChild0Type, MVT::i32,
/*20923*/       OPC_CheckType, MVT::i64,
/*20925*/       OPC_MoveParent,
/*20926*/       OPC_CheckType, MVT::f32,
/*20928*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20930*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #2
/*20937*/       OPC_EmitInteger, MVT::i32, 0, 
/*20940*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 0, 1, 3, 
                // Src: (vector_extract:f32 v4f32:v4f32:$vec, (zext:i64 i32:i32:$idx)) - Complexity = 6
                // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v4f32:$vec, ?:i32:$idx, 0:i32)
/*20951*/     0, /*End of Scope*/
/*20952*/   /*Scope*/ 120|128,1/*248*/, /*->21202*/
/*20954*/     OPC_CheckChild0Type, MVT::v8f32,
/*20956*/     OPC_MoveChild, 1,
/*20958*/     OPC_Scope, 46, /*->21006*/ // 10 children in Scope
/*20960*/       OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*20963*/       OPC_MoveChild, 0,
/*20965*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*20968*/       OPC_RecordChild0, // #1 = $idx
/*20969*/       OPC_RecordChild1, // #2 = $off
/*20970*/       OPC_MoveChild, 1,
/*20972*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*20975*/       OPC_MoveParent,
/*20976*/       OPC_CheckType, MVT::i32,
/*20978*/       OPC_MoveParent,
/*20979*/       OPC_CheckType, MVT::i64,
/*20981*/       OPC_MoveParent,
/*20982*/       OPC_CheckType, MVT::f32,
/*20984*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*20986*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*20993*/       OPC_EmitConvertToTarget, 2,
/*20995*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 3, 0, 1, 4, 
                // Src: (vector_extract:f32 v8f32:v8f32:$vec, (zext:i64 (add:i32 i32:i32:$idx, (imm:i32):$off))) - Complexity = 12
                // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v8f32:$vec, ?:i32:$idx, (imm:i32):$off)
/*21006*/     /*Scope*/ 19, /*->21026*/
/*21007*/       OPC_CheckInteger, 0, 
/*21009*/       OPC_MoveParent,
/*21010*/       OPC_CheckType, MVT::f32,
/*21012*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21014*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*21017*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:f32 v8f32:v8f32:$src, 0:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub0:i32)
/*21026*/     /*Scope*/ 19, /*->21046*/
/*21027*/       OPC_CheckInteger, 1, 
/*21029*/       OPC_MoveParent,
/*21030*/       OPC_CheckType, MVT::f32,
/*21032*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21034*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*21037*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:f32 v8f32:v8f32:$src, 1:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub1:i32)
/*21046*/     /*Scope*/ 19, /*->21066*/
/*21047*/       OPC_CheckInteger, 2, 
/*21049*/       OPC_MoveParent,
/*21050*/       OPC_CheckType, MVT::f32,
/*21052*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21054*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*21057*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:f32 v8f32:v8f32:$src, 2:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub2:i32)
/*21066*/     /*Scope*/ 19, /*->21086*/
/*21067*/       OPC_CheckInteger, 3, 
/*21069*/       OPC_MoveParent,
/*21070*/       OPC_CheckType, MVT::f32,
/*21072*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21074*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*21077*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:f32 v8f32:v8f32:$src, 3:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub3:i32)
/*21086*/     /*Scope*/ 19, /*->21106*/
/*21087*/       OPC_CheckInteger, 4, 
/*21089*/       OPC_MoveParent,
/*21090*/       OPC_CheckType, MVT::f32,
/*21092*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21094*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*21097*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:f32 v8f32:v8f32:$src, 4:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub4:i32)
/*21106*/     /*Scope*/ 19, /*->21126*/
/*21107*/       OPC_CheckInteger, 5, 
/*21109*/       OPC_MoveParent,
/*21110*/       OPC_CheckType, MVT::f32,
/*21112*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21114*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*21117*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:f32 v8f32:v8f32:$src, 5:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub5:i32)
/*21126*/     /*Scope*/ 19, /*->21146*/
/*21127*/       OPC_CheckInteger, 6, 
/*21129*/       OPC_MoveParent,
/*21130*/       OPC_CheckType, MVT::f32,
/*21132*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21134*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*21137*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:f32 v8f32:v8f32:$src, 6:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub6:i32)
/*21146*/     /*Scope*/ 19, /*->21166*/
/*21147*/       OPC_CheckInteger, 7, 
/*21149*/       OPC_MoveParent,
/*21150*/       OPC_CheckType, MVT::f32,
/*21152*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21154*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*21157*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:f32 v8f32:v8f32:$src, 7:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub7:i32)
/*21166*/     /*Scope*/ 34, /*->21201*/
/*21167*/       OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*21170*/       OPC_RecordChild0, // #1 = $idx
/*21171*/       OPC_CheckChild0Type, MVT::i32,
/*21173*/       OPC_CheckType, MVT::i64,
/*21175*/       OPC_MoveParent,
/*21176*/       OPC_CheckType, MVT::f32,
/*21178*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21180*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #2
/*21187*/       OPC_EmitInteger, MVT::i32, 0, 
/*21190*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 0, 1, 3, 
                // Src: (vector_extract:f32 v8f32:v8f32:$vec, (zext:i64 i32:i32:$idx)) - Complexity = 6
                // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v8f32:$vec, ?:i32:$idx, 0:i32)
/*21201*/     0, /*End of Scope*/
/*21202*/   /*Scope*/ 24|128,3/*408*/, /*->21612*/
/*21204*/     OPC_CheckChild0Type, MVT::v16f32,
/*21206*/     OPC_MoveChild, 1,
/*21208*/     OPC_Scope, 46, /*->21256*/ // 18 children in Scope
/*21210*/       OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*21213*/       OPC_MoveChild, 0,
/*21215*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*21218*/       OPC_RecordChild0, // #1 = $idx
/*21219*/       OPC_RecordChild1, // #2 = $off
/*21220*/       OPC_MoveChild, 1,
/*21222*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*21225*/       OPC_MoveParent,
/*21226*/       OPC_CheckType, MVT::i32,
/*21228*/       OPC_MoveParent,
/*21229*/       OPC_CheckType, MVT::i64,
/*21231*/       OPC_MoveParent,
/*21232*/       OPC_CheckType, MVT::f32,
/*21234*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21236*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*21243*/       OPC_EmitConvertToTarget, 2,
/*21245*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 3, 0, 1, 4, 
                // Src: (vector_extract:f32 v16f32:v16f32:$vec, (zext:i64 (add:i32 i32:i32:$idx, (imm:i32):$off))) - Complexity = 12
                // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v16f32:$vec, ?:i32:$idx, (imm:i32):$off)
/*21256*/     /*Scope*/ 19, /*->21276*/
/*21257*/       OPC_CheckInteger, 0, 
/*21259*/       OPC_MoveParent,
/*21260*/       OPC_CheckType, MVT::f32,
/*21262*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21264*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*21267*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:f32 v16f32:v16f32:$src, 0:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub0:i32)
/*21276*/     /*Scope*/ 19, /*->21296*/
/*21277*/       OPC_CheckInteger, 1, 
/*21279*/       OPC_MoveParent,
/*21280*/       OPC_CheckType, MVT::f32,
/*21282*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21284*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*21287*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:f32 v16f32:v16f32:$src, 1:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub1:i32)
/*21296*/     /*Scope*/ 19, /*->21316*/
/*21297*/       OPC_CheckInteger, 2, 
/*21299*/       OPC_MoveParent,
/*21300*/       OPC_CheckType, MVT::f32,
/*21302*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21304*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*21307*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:f32 v16f32:v16f32:$src, 2:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub2:i32)
/*21316*/     /*Scope*/ 19, /*->21336*/
/*21317*/       OPC_CheckInteger, 3, 
/*21319*/       OPC_MoveParent,
/*21320*/       OPC_CheckType, MVT::f32,
/*21322*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21324*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*21327*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:f32 v16f32:v16f32:$src, 3:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub3:i32)
/*21336*/     /*Scope*/ 19, /*->21356*/
/*21337*/       OPC_CheckInteger, 4, 
/*21339*/       OPC_MoveParent,
/*21340*/       OPC_CheckType, MVT::f32,
/*21342*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21344*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*21347*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:f32 v16f32:v16f32:$src, 4:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub4:i32)
/*21356*/     /*Scope*/ 19, /*->21376*/
/*21357*/       OPC_CheckInteger, 5, 
/*21359*/       OPC_MoveParent,
/*21360*/       OPC_CheckType, MVT::f32,
/*21362*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21364*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*21367*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:f32 v16f32:v16f32:$src, 5:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub5:i32)
/*21376*/     /*Scope*/ 19, /*->21396*/
/*21377*/       OPC_CheckInteger, 6, 
/*21379*/       OPC_MoveParent,
/*21380*/       OPC_CheckType, MVT::f32,
/*21382*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21384*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*21387*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:f32 v16f32:v16f32:$src, 6:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub6:i32)
/*21396*/     /*Scope*/ 19, /*->21416*/
/*21397*/       OPC_CheckInteger, 7, 
/*21399*/       OPC_MoveParent,
/*21400*/       OPC_CheckType, MVT::f32,
/*21402*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21404*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*21407*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:f32 v16f32:v16f32:$src, 7:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub7:i32)
/*21416*/     /*Scope*/ 19, /*->21436*/
/*21417*/       OPC_CheckInteger, 8, 
/*21419*/       OPC_MoveParent,
/*21420*/       OPC_CheckType, MVT::f32,
/*21422*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21424*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub8,
/*21427*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:f32 v16f32:v16f32:$src, 8:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub8:i32)
/*21436*/     /*Scope*/ 19, /*->21456*/
/*21437*/       OPC_CheckInteger, 9, 
/*21439*/       OPC_MoveParent,
/*21440*/       OPC_CheckType, MVT::f32,
/*21442*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21444*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub9,
/*21447*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:f32 v16f32:v16f32:$src, 9:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub9:i32)
/*21456*/     /*Scope*/ 19, /*->21476*/
/*21457*/       OPC_CheckInteger, 10, 
/*21459*/       OPC_MoveParent,
/*21460*/       OPC_CheckType, MVT::f32,
/*21462*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21464*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub10,
/*21467*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:f32 v16f32:v16f32:$src, 10:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub10:i32)
/*21476*/     /*Scope*/ 19, /*->21496*/
/*21477*/       OPC_CheckInteger, 11, 
/*21479*/       OPC_MoveParent,
/*21480*/       OPC_CheckType, MVT::f32,
/*21482*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21484*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub11,
/*21487*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:f32 v16f32:v16f32:$src, 11:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub11:i32)
/*21496*/     /*Scope*/ 19, /*->21516*/
/*21497*/       OPC_CheckInteger, 12, 
/*21499*/       OPC_MoveParent,
/*21500*/       OPC_CheckType, MVT::f32,
/*21502*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21504*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub12,
/*21507*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:f32 v16f32:v16f32:$src, 12:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub12:i32)
/*21516*/     /*Scope*/ 19, /*->21536*/
/*21517*/       OPC_CheckInteger, 13, 
/*21519*/       OPC_MoveParent,
/*21520*/       OPC_CheckType, MVT::f32,
/*21522*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21524*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub13,
/*21527*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:f32 v16f32:v16f32:$src, 13:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub13:i32)
/*21536*/     /*Scope*/ 19, /*->21556*/
/*21537*/       OPC_CheckInteger, 14, 
/*21539*/       OPC_MoveParent,
/*21540*/       OPC_CheckType, MVT::f32,
/*21542*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21544*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub14,
/*21547*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:f32 v16f32:v16f32:$src, 14:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub14:i32)
/*21556*/     /*Scope*/ 19, /*->21576*/
/*21557*/       OPC_CheckInteger, 15, 
/*21559*/       OPC_MoveParent,
/*21560*/       OPC_CheckType, MVT::f32,
/*21562*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21564*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub15,
/*21567*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:f32 v16f32:v16f32:$src, 15:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub15:i32)
/*21576*/     /*Scope*/ 34, /*->21611*/
/*21577*/       OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*21580*/       OPC_RecordChild0, // #1 = $idx
/*21581*/       OPC_CheckChild0Type, MVT::i32,
/*21583*/       OPC_CheckType, MVT::i64,
/*21585*/       OPC_MoveParent,
/*21586*/       OPC_CheckType, MVT::f32,
/*21588*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21590*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #2
/*21597*/       OPC_EmitInteger, MVT::i32, 0, 
/*21600*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 0, 1, 3, 
                // Src: (vector_extract:f32 v16f32:v16f32:$vec, (zext:i64 i32:i32:$idx)) - Complexity = 6
                // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v16f32:$vec, ?:i32:$idx, 0:i32)
/*21611*/     0, /*End of Scope*/
/*21612*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 110,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->21726
/*21616*/   OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*21617*/   OPC_MoveChild, 1,
/*21619*/   OPC_Scope, 24, /*->21645*/ // 5 children in Scope
/*21621*/     OPC_CheckInteger, 16|128,20/*2576*/, 
/*21624*/     OPC_MoveParent,
/*21625*/     OPC_RecordChild2, // #1 = $vcc
/*21626*/     OPC_RecordChild3, // #2 = $target
/*21627*/     OPC_MoveChild, 3,
/*21629*/     OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*21632*/     OPC_MoveParent,
/*21633*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21635*/     OPC_EmitMergeInputChains1_0,
/*21636*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_IF), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i64 2576:iPTR, i1:i1:$vcc, (bb:Other):$target) - Complexity = 8
              // Dst: (SI_IF:i64 i1:i1:$vcc, (bb:Other):$target)
/*21645*/   /*Scope*/ 24, /*->21670*/
/*21646*/     OPC_CheckInteger, 10|128,20/*2570*/, 
/*21649*/     OPC_MoveParent,
/*21650*/     OPC_RecordChild2, // #1 = $src
/*21651*/     OPC_RecordChild3, // #2 = $target
/*21652*/     OPC_MoveChild, 3,
/*21654*/     OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*21657*/     OPC_MoveParent,
/*21658*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21660*/     OPC_EmitMergeInputChains1_0,
/*21661*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_ELSE), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i64 2570:iPTR, i64:i64:$src, (bb:Other):$target) - Complexity = 8
              // Dst: (SI_ELSE:i64 i64:i64:$src, (bb:Other):$target)
/*21670*/   /*Scope*/ 16, /*->21687*/
/*21671*/     OPC_CheckInteger, 9|128,20/*2569*/, 
/*21674*/     OPC_MoveParent,
/*21675*/     OPC_RecordChild2, // #1 = $src
/*21676*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21678*/     OPC_EmitMergeInputChains1_0,
/*21679*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_BREAK), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i64 2569:iPTR, i64:i64:$src) - Complexity = 8
              // Dst: (SI_BREAK:i64 i64:i64:$src)
/*21687*/   /*Scope*/ 18, /*->21706*/
/*21688*/     OPC_CheckInteger, 17|128,20/*2577*/, 
/*21691*/     OPC_MoveParent,
/*21692*/     OPC_RecordChild2, // #1 = $vcc
/*21693*/     OPC_RecordChild3, // #2 = $src
/*21694*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21696*/     OPC_EmitMergeInputChains1_0,
/*21697*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_IF_BREAK), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i64 2577:iPTR, i1:i1:$vcc, i64:i64:$src) - Complexity = 8
              // Dst: (SI_IF_BREAK:i64 i1:i1:$vcc, i64:i64:$src)
/*21706*/   /*Scope*/ 18, /*->21725*/
/*21707*/     OPC_CheckInteger, 11|128,20/*2571*/, 
/*21710*/     OPC_MoveParent,
/*21711*/     OPC_RecordChild2, // #1 = $src0
/*21712*/     OPC_RecordChild3, // #2 = $src1
/*21713*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21715*/     OPC_EmitMergeInputChains1_0,
/*21716*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_ELSE_BREAK), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i64 2571:iPTR, i64:i64:$src0, i64:i64:$src1) - Complexity = 8
              // Dst: (SI_ELSE_BREAK:i64 i64:i64:$src0, i64:i64:$src1)
/*21725*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 0|128,1/*128*/,  TARGET_VAL(ISD::Constant),// ->21858
/*21730*/   OPC_RecordNode,   // #0 = $imm
/*21731*/   OPC_SwitchType /*3 cases */, 79,  MVT::i64,// ->21813
/*21734*/     OPC_Scope, 14, /*->21750*/ // 2 children in Scope
/*21736*/       OPC_CheckPredicate, 27, // Predicate_anonymous.val.372
/*21738*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21740*/       OPC_EmitConvertToTarget, 0,
/*21742*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_MOV_B64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (imm:i64)<<P:Predicate_anonymous.val.372>>:$imm - Complexity = 4
                // Dst: (S_MOV_B64:i64 (imm:i64)<<P:Predicate_anonymous.val.373>>:$imm)
/*21750*/     /*Scope*/ 61, /*->21812*/
/*21751*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21753*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1
/*21760*/       OPC_EmitConvertToTarget, 0,
/*21762*/       OPC_EmitNodeXForm, 1, 2, // LO32
/*21765*/       OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*21773*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*21776*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 4, 5,  // Results = #6
/*21786*/       OPC_EmitConvertToTarget, 0,
/*21788*/       OPC_EmitNodeXForm, 2, 7, // HI32
/*21791*/       OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 8,  // Results = #9
/*21799*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*21802*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 6, 9, 10, 
                // Src: (imm:i64):$imm - Complexity = 3
                // Dst: (INSERT_SUBREG:i64 (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), (S_MOV_B32:i32 (LO32:i32 (imm:i64):$imm)), sub0:i32), (S_MOV_B32:i32 (HI32:i32 (imm:i64):$imm)), sub1:i32)
/*21812*/     0, /*End of Scope*/
            /*SwitchType*/ 28,  MVT::i32,// ->21843
/*21815*/     OPC_Scope, 12, /*->21829*/ // 2 children in Scope
/*21817*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21819*/       OPC_EmitConvertToTarget, 0,
/*21821*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (V_MOV_B32_e32:i32 (imm:i32):$imm)
/*21829*/     /*Scope*/ 12, /*->21842*/
/*21830*/       OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*21832*/       OPC_EmitConvertToTarget, 0,
/*21834*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MOV_IMM_I32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (imm:i32):$val - Complexity = 3
                // Dst: (MOV_IMM_I32:i32 (imm:i32):$val)
/*21842*/     0, /*End of Scope*/
            /*SwitchType*/ 12,  MVT::i1,// ->21857
/*21845*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21847*/     OPC_EmitConvertToTarget, 0,
/*21849*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_MOV_B64), 0,
                  1/*#VTs*/, MVT::i1, 1/*#Ops*/, 1, 
              // Src: (imm:i1):$imm - Complexity = 3
              // Dst: (S_MOV_B64:i1 (imm:i1):$imm)
            0, // EndSwitchType
          /*SwitchOpcode*/ 71,  TARGET_VAL(ISD::BITCAST),// ->21932
/*21861*/   OPC_RecordChild0, // #0 = $src0
/*21862*/   OPC_SwitchType /*4 cases */, 23,  MVT::i32,// ->21888
/*21865*/     OPC_CheckChild0Type, MVT::f32,
/*21867*/     OPC_Scope, 5, /*->21874*/ // 2 children in Scope
/*21869*/       OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*21871*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:i32 R600_Reg32:f32:$src0) - Complexity = 3
                // Dst: R600_Reg32:i32:$src0
/*21874*/     /*Scope*/ 12, /*->21887*/
/*21875*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21877*/       OPC_Scope, 3, /*->21882*/ // 2 children in Scope
/*21879*/         OPC_CompleteMatch, 1, 0, 
                  // Src: (bitconvert:i32 SReg_32:f32:$src0) - Complexity = 3
                  // Dst: SReg_32:i32:$src0
/*21882*/       /*Scope*/ 3, /*->21886*/
/*21883*/         OPC_CompleteMatch, 1, 0, 
                  // Src: (bitconvert:i32 VReg_32:f32:$src0) - Complexity = 3
                  // Dst: VReg_32:i32:$src0
/*21886*/       0, /*End of Scope*/
/*21887*/     0, /*End of Scope*/
            /*SwitchType*/ 23,  MVT::f32,// ->21913
/*21890*/     OPC_CheckChild0Type, MVT::i32,
/*21892*/     OPC_Scope, 5, /*->21899*/ // 2 children in Scope
/*21894*/       OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*21896*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:f32 R600_Reg32:i32:$src0) - Complexity = 3
                // Dst: R600_Reg32:f32:$src0
/*21899*/     /*Scope*/ 12, /*->21912*/
/*21900*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*21902*/       OPC_Scope, 3, /*->21907*/ // 2 children in Scope
/*21904*/         OPC_CompleteMatch, 1, 0, 
                  // Src: (bitconvert:f32 SReg_32:i32:$src0) - Complexity = 3
                  // Dst: SReg_32:f32:$src0
/*21907*/       /*Scope*/ 3, /*->21911*/
/*21908*/         OPC_CompleteMatch, 1, 0, 
                  // Src: (bitconvert:f32 VReg_32:i32:$src0) - Complexity = 3
                  // Dst: VReg_32:f32:$src0
/*21911*/       0, /*End of Scope*/
/*21912*/     0, /*End of Scope*/
            /*SwitchType*/ 7,  MVT::v4i32,// ->21922
/*21915*/     OPC_CheckChild0Type, MVT::v4f32,
/*21917*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*21919*/     OPC_CompleteMatch, 1, 0, 
              // Src: (bitconvert:v4i32 R600_Reg128:v4f32:$src0) - Complexity = 3
              // Dst: R600_Reg128:v4i32:$src0
            /*SwitchType*/ 7,  MVT::v4f32,// ->21931
/*21924*/     OPC_CheckChild0Type, MVT::v4i32,
/*21926*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*21928*/     OPC_CompleteMatch, 1, 0, 
              // Src: (bitconvert:v4f32 R600_Reg128:v4i32:$src0) - Complexity = 3
              // Dst: R600_Reg128:v4f32:$src0
            0, // EndSwitchType
          /*SwitchOpcode*/ 8,  TARGET_VAL(AMDGPUISD::DWORDADDR),// ->21943
/*21935*/   OPC_RecordChild0, // #0 = $addr
/*21936*/   OPC_CheckType, MVT::i32,
/*21938*/   OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*21940*/   OPC_CompleteMatch, 1, 0, 
            // Src: (AMDGPUdwordaddr:i32 R600_Reg32:i32:$addr) - Complexity = 3
            // Dst: R600_Reg32:i32:$addr
          /*SwitchOpcode*/ 6|128,1/*134*/,  TARGET_VAL(ISD::ADD),// ->22081
/*21947*/   OPC_RecordChild0, // #0 = $src0
/*21948*/   OPC_RecordChild1, // #1 = $src1
/*21949*/   OPC_CheckType, MVT::i32,
/*21951*/   OPC_Scope, 102, /*->22055*/ // 2 children in Scope
/*21953*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*21955*/     OPC_EmitInteger, MVT::i32, 0, 
/*21958*/     OPC_EmitInteger, MVT::i32, 0, 
/*21961*/     OPC_EmitInteger, MVT::i32, 1, 
/*21964*/     OPC_EmitInteger, MVT::i32, 0, 
/*21967*/     OPC_EmitInteger, MVT::i32, 0, 
/*21970*/     OPC_EmitInteger, MVT::i32, 0, 
/*21973*/     OPC_EmitInteger, MVT::i32, 0, 
/*21976*/     OPC_EmitInteger, MVT::i32, 0, 
/*21979*/     OPC_EmitInteger, MVT::i32, 0, 
/*21982*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*21994*/     OPC_EmitInteger, MVT::i32, 0, 
/*21997*/     OPC_EmitInteger, MVT::i32, 0, 
/*22000*/     OPC_EmitInteger, MVT::i32, 0, 
/*22003*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*22015*/     OPC_EmitInteger, MVT::i32, 1, 
/*22018*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*22022*/     OPC_EmitInteger, MVT::i32, 0, 
/*22025*/     OPC_EmitInteger, MVT::i32, 0, 
/*22028*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::ADD_INT), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (add:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (ADD_INT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*22055*/   /*Scope*/ 24, /*->22080*/
/*22056*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*22058*/     OPC_Scope, 9, /*->22069*/ // 2 children in Scope
/*22060*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ADD_I32_e32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 VSrc_32:i32:$src0, VReg_32:i32:$src1) - Complexity = 3
                // Dst: (V_ADD_I32_e32:i32 VSrc_32:i32:$src0, VReg_32:i32:$src1)
/*22069*/     /*Scope*/ 9, /*->22079*/
/*22070*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ADD_I32_e32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i32 VReg_32:i32:$src1, VSrc_32:i32:$src0) - Complexity = 3
                // Dst: (V_ADD_I32_e32:i32 VSrc_32:i32:$src0, VReg_32:i32:$src1)
/*22079*/     0, /*End of Scope*/
/*22080*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 121,  TARGET_VAL(ISD::SUB),// ->22205
/*22084*/   OPC_RecordChild0, // #0 = $src0
/*22085*/   OPC_RecordChild1, // #1 = $src1
/*22086*/   OPC_CheckType, MVT::i32,
/*22088*/   OPC_Scope, 102, /*->22192*/ // 2 children in Scope
/*22090*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*22092*/     OPC_EmitInteger, MVT::i32, 0, 
/*22095*/     OPC_EmitInteger, MVT::i32, 0, 
/*22098*/     OPC_EmitInteger, MVT::i32, 1, 
/*22101*/     OPC_EmitInteger, MVT::i32, 0, 
/*22104*/     OPC_EmitInteger, MVT::i32, 0, 
/*22107*/     OPC_EmitInteger, MVT::i32, 0, 
/*22110*/     OPC_EmitInteger, MVT::i32, 0, 
/*22113*/     OPC_EmitInteger, MVT::i32, 0, 
/*22116*/     OPC_EmitInteger, MVT::i32, 0, 
/*22119*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*22131*/     OPC_EmitInteger, MVT::i32, 0, 
/*22134*/     OPC_EmitInteger, MVT::i32, 0, 
/*22137*/     OPC_EmitInteger, MVT::i32, 0, 
/*22140*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*22152*/     OPC_EmitInteger, MVT::i32, 1, 
/*22155*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*22159*/     OPC_EmitInteger, MVT::i32, 0, 
/*22162*/     OPC_EmitInteger, MVT::i32, 0, 
/*22165*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SUB_INT), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (sub:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (SUB_INT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*22192*/   /*Scope*/ 11, /*->22204*/
/*22193*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*22195*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_SUB_I32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sub:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_SUB_I32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*22204*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 121,  TARGET_VAL(AMDGPUISD::SMAX),// ->22329
/*22208*/   OPC_RecordChild0, // #0 = $src0
/*22209*/   OPC_RecordChild1, // #1 = $src1
/*22210*/   OPC_CheckType, MVT::i32,
/*22212*/   OPC_Scope, 102, /*->22316*/ // 2 children in Scope
/*22214*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*22216*/     OPC_EmitInteger, MVT::i32, 0, 
/*22219*/     OPC_EmitInteger, MVT::i32, 0, 
/*22222*/     OPC_EmitInteger, MVT::i32, 1, 
/*22225*/     OPC_EmitInteger, MVT::i32, 0, 
/*22228*/     OPC_EmitInteger, MVT::i32, 0, 
/*22231*/     OPC_EmitInteger, MVT::i32, 0, 
/*22234*/     OPC_EmitInteger, MVT::i32, 0, 
/*22237*/     OPC_EmitInteger, MVT::i32, 0, 
/*22240*/     OPC_EmitInteger, MVT::i32, 0, 
/*22243*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*22255*/     OPC_EmitInteger, MVT::i32, 0, 
/*22258*/     OPC_EmitInteger, MVT::i32, 0, 
/*22261*/     OPC_EmitInteger, MVT::i32, 0, 
/*22264*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*22276*/     OPC_EmitInteger, MVT::i32, 1, 
/*22279*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*22283*/     OPC_EmitInteger, MVT::i32, 0, 
/*22286*/     OPC_EmitInteger, MVT::i32, 0, 
/*22289*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MAX_INT), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUsmax:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MAX_INT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*22316*/   /*Scope*/ 11, /*->22328*/
/*22317*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*22319*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAX_I32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (AMDGPUsmax:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_MAX_I32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*22328*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 121,  TARGET_VAL(AMDGPUISD::SMIN),// ->22453
/*22332*/   OPC_RecordChild0, // #0 = $src0
/*22333*/   OPC_RecordChild1, // #1 = $src1
/*22334*/   OPC_CheckType, MVT::i32,
/*22336*/   OPC_Scope, 102, /*->22440*/ // 2 children in Scope
/*22338*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*22340*/     OPC_EmitInteger, MVT::i32, 0, 
/*22343*/     OPC_EmitInteger, MVT::i32, 0, 
/*22346*/     OPC_EmitInteger, MVT::i32, 1, 
/*22349*/     OPC_EmitInteger, MVT::i32, 0, 
/*22352*/     OPC_EmitInteger, MVT::i32, 0, 
/*22355*/     OPC_EmitInteger, MVT::i32, 0, 
/*22358*/     OPC_EmitInteger, MVT::i32, 0, 
/*22361*/     OPC_EmitInteger, MVT::i32, 0, 
/*22364*/     OPC_EmitInteger, MVT::i32, 0, 
/*22367*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*22379*/     OPC_EmitInteger, MVT::i32, 0, 
/*22382*/     OPC_EmitInteger, MVT::i32, 0, 
/*22385*/     OPC_EmitInteger, MVT::i32, 0, 
/*22388*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*22400*/     OPC_EmitInteger, MVT::i32, 1, 
/*22403*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*22407*/     OPC_EmitInteger, MVT::i32, 0, 
/*22410*/     OPC_EmitInteger, MVT::i32, 0, 
/*22413*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MIN_INT), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUsmin:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MIN_INT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*22440*/   /*Scope*/ 11, /*->22452*/
/*22441*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*22443*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MIN_I32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (AMDGPUsmin:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_MIN_I32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*22452*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 121,  TARGET_VAL(AMDGPUISD::UMAX),// ->22577
/*22456*/   OPC_RecordChild0, // #0 = $src0
/*22457*/   OPC_RecordChild1, // #1 = $src1
/*22458*/   OPC_CheckType, MVT::i32,
/*22460*/   OPC_Scope, 102, /*->22564*/ // 2 children in Scope
/*22462*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*22464*/     OPC_EmitInteger, MVT::i32, 0, 
/*22467*/     OPC_EmitInteger, MVT::i32, 0, 
/*22470*/     OPC_EmitInteger, MVT::i32, 1, 
/*22473*/     OPC_EmitInteger, MVT::i32, 0, 
/*22476*/     OPC_EmitInteger, MVT::i32, 0, 
/*22479*/     OPC_EmitInteger, MVT::i32, 0, 
/*22482*/     OPC_EmitInteger, MVT::i32, 0, 
/*22485*/     OPC_EmitInteger, MVT::i32, 0, 
/*22488*/     OPC_EmitInteger, MVT::i32, 0, 
/*22491*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*22503*/     OPC_EmitInteger, MVT::i32, 0, 
/*22506*/     OPC_EmitInteger, MVT::i32, 0, 
/*22509*/     OPC_EmitInteger, MVT::i32, 0, 
/*22512*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*22524*/     OPC_EmitInteger, MVT::i32, 1, 
/*22527*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*22531*/     OPC_EmitInteger, MVT::i32, 0, 
/*22534*/     OPC_EmitInteger, MVT::i32, 0, 
/*22537*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MAX_UINT), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUumax:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MAX_UINT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*22564*/   /*Scope*/ 11, /*->22576*/
/*22565*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*22567*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAX_U32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (AMDGPUumax:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_MAX_U32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*22576*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 121,  TARGET_VAL(AMDGPUISD::UMIN),// ->22701
/*22580*/   OPC_RecordChild0, // #0 = $src0
/*22581*/   OPC_RecordChild1, // #1 = $src1
/*22582*/   OPC_CheckType, MVT::i32,
/*22584*/   OPC_Scope, 102, /*->22688*/ // 2 children in Scope
/*22586*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*22588*/     OPC_EmitInteger, MVT::i32, 0, 
/*22591*/     OPC_EmitInteger, MVT::i32, 0, 
/*22594*/     OPC_EmitInteger, MVT::i32, 1, 
/*22597*/     OPC_EmitInteger, MVT::i32, 0, 
/*22600*/     OPC_EmitInteger, MVT::i32, 0, 
/*22603*/     OPC_EmitInteger, MVT::i32, 0, 
/*22606*/     OPC_EmitInteger, MVT::i32, 0, 
/*22609*/     OPC_EmitInteger, MVT::i32, 0, 
/*22612*/     OPC_EmitInteger, MVT::i32, 0, 
/*22615*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*22627*/     OPC_EmitInteger, MVT::i32, 0, 
/*22630*/     OPC_EmitInteger, MVT::i32, 0, 
/*22633*/     OPC_EmitInteger, MVT::i32, 0, 
/*22636*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*22648*/     OPC_EmitInteger, MVT::i32, 1, 
/*22651*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*22655*/     OPC_EmitInteger, MVT::i32, 0, 
/*22658*/     OPC_EmitInteger, MVT::i32, 0, 
/*22661*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MIN_UINT), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUumin:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MIN_UINT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*22688*/   /*Scope*/ 11, /*->22700*/
/*22689*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*22691*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MIN_U32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (AMDGPUumin:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_MIN_U32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*22700*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 95|128,1/*223*/,  TARGET_VAL(ISD::FP_TO_SINT),// ->22928
/*22705*/   OPC_RecordChild0, // #0 = $src0
/*22706*/   OPC_CheckChild0Type, MVT::f32,
/*22708*/   OPC_CheckType, MVT::i32,
/*22710*/   OPC_Scope, 68, /*->22780*/ // 3 children in Scope
/*22712*/     OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*22714*/     OPC_EmitInteger, MVT::i32, 1, 
/*22717*/     OPC_EmitInteger, MVT::i32, 0, 
/*22720*/     OPC_EmitInteger, MVT::i32, 0, 
/*22723*/     OPC_EmitInteger, MVT::i32, 0, 
/*22726*/     OPC_EmitInteger, MVT::i32, 0, 
/*22729*/     OPC_EmitInteger, MVT::i32, 0, 
/*22732*/     OPC_EmitInteger, MVT::i32, 0, 
/*22735*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*22747*/     OPC_EmitInteger, MVT::i32, 1, 
/*22750*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*22754*/     OPC_EmitInteger, MVT::i32, 0, 
/*22757*/     OPC_EmitInteger, MVT::i32, 0, 
/*22760*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FLT_TO_INT_r600), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (fp_to_sint:i32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (FLT_TO_INT_r600:i32 R600_Reg32:f32:$src0)
/*22780*/   /*Scope*/ 10, /*->22791*/
/*22781*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*22783*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_I32_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (fp_to_sint:i32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_CVT_I32_F32_e32:i32 f32:f32:$src0)
/*22791*/   /*Scope*/ 6|128,1/*134*/, /*->22927*/
/*22793*/     OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*22795*/     OPC_EmitInteger, MVT::i32, 1, 
/*22798*/     OPC_EmitInteger, MVT::i32, 0, 
/*22801*/     OPC_EmitInteger, MVT::i32, 0, 
/*22804*/     OPC_EmitInteger, MVT::i32, 0, 
/*22807*/     OPC_EmitInteger, MVT::i32, 1, 
/*22810*/     OPC_EmitInteger, MVT::i32, 0, 
/*22813*/     OPC_EmitInteger, MVT::i32, 0, 
/*22816*/     OPC_EmitInteger, MVT::i32, 0, 
/*22819*/     OPC_EmitInteger, MVT::i32, 0, 
/*22822*/     OPC_EmitInteger, MVT::i32, 0, 
/*22825*/     OPC_EmitInteger, MVT::i32, 0, 
/*22828*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*22840*/     OPC_EmitInteger, MVT::i32, 1, 
/*22843*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*22847*/     OPC_EmitInteger, MVT::i32, 0, 
/*22850*/     OPC_EmitInteger, MVT::i32, 0, 
/*22853*/     OPC_EmitNode, TARGET_VAL(AMDGPU::TRUNC), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 5, 6, 7, 8, 0, 9, 10, 11, 12, 13, 14, 15, 16,  // Results = #17
/*22873*/     OPC_EmitInteger, MVT::i32, 0, 
/*22876*/     OPC_EmitInteger, MVT::i32, 0, 
/*22879*/     OPC_EmitInteger, MVT::i32, 0, 
/*22882*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*22894*/     OPC_EmitInteger, MVT::i32, 1, 
/*22897*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*22901*/     OPC_EmitInteger, MVT::i32, 0, 
/*22904*/     OPC_EmitInteger, MVT::i32, 0, 
/*22907*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FLT_TO_INT_eg), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 17, 18, 19, 20, 21, 22, 23, 24, 25, 
              // Src: (fp_to_sint:i32 f32:f32:$src0) - Complexity = 3
              // Dst: (FLT_TO_INT_eg:i32 (TRUNC:i32 ?:f32:$src0))
/*22927*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 84|128,1/*212*/,  TARGET_VAL(ISD::FP_TO_UINT),// ->23144
/*22932*/   OPC_RecordChild0, // #0 = $src0
/*22933*/   OPC_CheckChild0Type, MVT::f32,
/*22935*/   OPC_CheckType, MVT::i32,
/*22937*/   OPC_Scope, 68, /*->23007*/ // 2 children in Scope
/*22939*/     OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*22941*/     OPC_EmitInteger, MVT::i32, 1, 
/*22944*/     OPC_EmitInteger, MVT::i32, 0, 
/*22947*/     OPC_EmitInteger, MVT::i32, 0, 
/*22950*/     OPC_EmitInteger, MVT::i32, 0, 
/*22953*/     OPC_EmitInteger, MVT::i32, 0, 
/*22956*/     OPC_EmitInteger, MVT::i32, 0, 
/*22959*/     OPC_EmitInteger, MVT::i32, 0, 
/*22962*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*22974*/     OPC_EmitInteger, MVT::i32, 1, 
/*22977*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*22981*/     OPC_EmitInteger, MVT::i32, 0, 
/*22984*/     OPC_EmitInteger, MVT::i32, 0, 
/*22987*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FLT_TO_UINT_r600), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (fp_to_uint:i32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (FLT_TO_UINT_r600:i32 R600_Reg32:f32:$src0)
/*23007*/   /*Scope*/ 6|128,1/*134*/, /*->23143*/
/*23009*/     OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*23011*/     OPC_EmitInteger, MVT::i32, 1, 
/*23014*/     OPC_EmitInteger, MVT::i32, 0, 
/*23017*/     OPC_EmitInteger, MVT::i32, 0, 
/*23020*/     OPC_EmitInteger, MVT::i32, 0, 
/*23023*/     OPC_EmitInteger, MVT::i32, 1, 
/*23026*/     OPC_EmitInteger, MVT::i32, 0, 
/*23029*/     OPC_EmitInteger, MVT::i32, 0, 
/*23032*/     OPC_EmitInteger, MVT::i32, 0, 
/*23035*/     OPC_EmitInteger, MVT::i32, 0, 
/*23038*/     OPC_EmitInteger, MVT::i32, 0, 
/*23041*/     OPC_EmitInteger, MVT::i32, 0, 
/*23044*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23056*/     OPC_EmitInteger, MVT::i32, 1, 
/*23059*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*23063*/     OPC_EmitInteger, MVT::i32, 0, 
/*23066*/     OPC_EmitInteger, MVT::i32, 0, 
/*23069*/     OPC_EmitNode, TARGET_VAL(AMDGPU::TRUNC), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 5, 6, 7, 8, 0, 9, 10, 11, 12, 13, 14, 15, 16,  // Results = #17
/*23089*/     OPC_EmitInteger, MVT::i32, 0, 
/*23092*/     OPC_EmitInteger, MVT::i32, 0, 
/*23095*/     OPC_EmitInteger, MVT::i32, 0, 
/*23098*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23110*/     OPC_EmitInteger, MVT::i32, 1, 
/*23113*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*23117*/     OPC_EmitInteger, MVT::i32, 0, 
/*23120*/     OPC_EmitInteger, MVT::i32, 0, 
/*23123*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FLT_TO_UINT_eg), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 17, 18, 19, 20, 21, 22, 23, 24, 25, 
              // Src: (fp_to_uint:i32 f32:f32:$src0) - Complexity = 3
              // Dst: (FLT_TO_UINT_eg:i32 (TRUNC:i32 ?:f32:$src0))
/*23143*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 98|128,1/*226*/,  TARGET_VAL(ISD::SRA),// ->23374
/*23148*/   OPC_RecordChild0, // #0 = $src0
/*23149*/   OPC_RecordChild1, // #1 = $src1
/*23150*/   OPC_CheckChild1Type, MVT::i32,
/*23152*/   OPC_CheckType, MVT::i32,
/*23154*/   OPC_Scope, 102, /*->23258*/ // 3 children in Scope
/*23156*/     OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*23158*/     OPC_EmitInteger, MVT::i32, 0, 
/*23161*/     OPC_EmitInteger, MVT::i32, 0, 
/*23164*/     OPC_EmitInteger, MVT::i32, 1, 
/*23167*/     OPC_EmitInteger, MVT::i32, 0, 
/*23170*/     OPC_EmitInteger, MVT::i32, 0, 
/*23173*/     OPC_EmitInteger, MVT::i32, 0, 
/*23176*/     OPC_EmitInteger, MVT::i32, 0, 
/*23179*/     OPC_EmitInteger, MVT::i32, 0, 
/*23182*/     OPC_EmitInteger, MVT::i32, 0, 
/*23185*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23197*/     OPC_EmitInteger, MVT::i32, 0, 
/*23200*/     OPC_EmitInteger, MVT::i32, 0, 
/*23203*/     OPC_EmitInteger, MVT::i32, 0, 
/*23206*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23218*/     OPC_EmitInteger, MVT::i32, 1, 
/*23221*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*23225*/     OPC_EmitInteger, MVT::i32, 0, 
/*23228*/     OPC_EmitInteger, MVT::i32, 0, 
/*23231*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::ASHR_r600), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (sra:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (ASHR_r600:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*23258*/   /*Scope*/ 102, /*->23361*/
/*23259*/     OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*23261*/     OPC_EmitInteger, MVT::i32, 0, 
/*23264*/     OPC_EmitInteger, MVT::i32, 0, 
/*23267*/     OPC_EmitInteger, MVT::i32, 1, 
/*23270*/     OPC_EmitInteger, MVT::i32, 0, 
/*23273*/     OPC_EmitInteger, MVT::i32, 0, 
/*23276*/     OPC_EmitInteger, MVT::i32, 0, 
/*23279*/     OPC_EmitInteger, MVT::i32, 0, 
/*23282*/     OPC_EmitInteger, MVT::i32, 0, 
/*23285*/     OPC_EmitInteger, MVT::i32, 0, 
/*23288*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23300*/     OPC_EmitInteger, MVT::i32, 0, 
/*23303*/     OPC_EmitInteger, MVT::i32, 0, 
/*23306*/     OPC_EmitInteger, MVT::i32, 0, 
/*23309*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23321*/     OPC_EmitInteger, MVT::i32, 1, 
/*23324*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*23328*/     OPC_EmitInteger, MVT::i32, 0, 
/*23331*/     OPC_EmitInteger, MVT::i32, 0, 
/*23334*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::ASHR_eg), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (sra:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (ASHR_eg:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*23361*/   /*Scope*/ 11, /*->23373*/
/*23362*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*23364*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ASHR_I32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sra:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_ASHR_I32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*23373*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 114|128,1/*242*/,  TARGET_VAL(ISD::SRL),// ->23620
/*23378*/   OPC_RecordChild0, // #0 = $src0
/*23379*/   OPC_RecordChild1, // #1 = $src1
/*23380*/   OPC_CheckChild1Type, MVT::i32,
/*23382*/   OPC_SwitchType /*2 cases */, 92|128,1/*220*/,  MVT::i32,// ->23606
/*23386*/     OPC_Scope, 102, /*->23490*/ // 3 children in Scope
/*23388*/       OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*23390*/       OPC_EmitInteger, MVT::i32, 0, 
/*23393*/       OPC_EmitInteger, MVT::i32, 0, 
/*23396*/       OPC_EmitInteger, MVT::i32, 1, 
/*23399*/       OPC_EmitInteger, MVT::i32, 0, 
/*23402*/       OPC_EmitInteger, MVT::i32, 0, 
/*23405*/       OPC_EmitInteger, MVT::i32, 0, 
/*23408*/       OPC_EmitInteger, MVT::i32, 0, 
/*23411*/       OPC_EmitInteger, MVT::i32, 0, 
/*23414*/       OPC_EmitInteger, MVT::i32, 0, 
/*23417*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23429*/       OPC_EmitInteger, MVT::i32, 0, 
/*23432*/       OPC_EmitInteger, MVT::i32, 0, 
/*23435*/       OPC_EmitInteger, MVT::i32, 0, 
/*23438*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23450*/       OPC_EmitInteger, MVT::i32, 1, 
/*23453*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*23457*/       OPC_EmitInteger, MVT::i32, 0, 
/*23460*/       OPC_EmitInteger, MVT::i32, 0, 
/*23463*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LSHR_r600), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (srl:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                // Dst: (LSHR_r600:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*23490*/     /*Scope*/ 102, /*->23593*/
/*23491*/       OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*23493*/       OPC_EmitInteger, MVT::i32, 0, 
/*23496*/       OPC_EmitInteger, MVT::i32, 0, 
/*23499*/       OPC_EmitInteger, MVT::i32, 1, 
/*23502*/       OPC_EmitInteger, MVT::i32, 0, 
/*23505*/       OPC_EmitInteger, MVT::i32, 0, 
/*23508*/       OPC_EmitInteger, MVT::i32, 0, 
/*23511*/       OPC_EmitInteger, MVT::i32, 0, 
/*23514*/       OPC_EmitInteger, MVT::i32, 0, 
/*23517*/       OPC_EmitInteger, MVT::i32, 0, 
/*23520*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23532*/       OPC_EmitInteger, MVT::i32, 0, 
/*23535*/       OPC_EmitInteger, MVT::i32, 0, 
/*23538*/       OPC_EmitInteger, MVT::i32, 0, 
/*23541*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23553*/       OPC_EmitInteger, MVT::i32, 1, 
/*23556*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*23560*/       OPC_EmitInteger, MVT::i32, 0, 
/*23563*/       OPC_EmitInteger, MVT::i32, 0, 
/*23566*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LSHR_eg), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (srl:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                // Dst: (LSHR_eg:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*23593*/     /*Scope*/ 11, /*->23605*/
/*23594*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*23596*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_LSHR_B32_e32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
                // Dst: (V_LSHR_B32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*23605*/     0, /*End of Scope*/
            /*SwitchType*/ 11,  MVT::i64,// ->23619
/*23608*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*23610*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_LSHR_B64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (srl:i64 i64:i64:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_LSHR_B64:i64 i64:i64:$src0, i32:i32:$src1)
            0, // EndSwitchType
          /*SwitchOpcode*/ 114|128,1/*242*/,  TARGET_VAL(ISD::SHL),// ->23866
/*23624*/   OPC_RecordChild0, // #0 = $src0
/*23625*/   OPC_RecordChild1, // #1 = $src1
/*23626*/   OPC_CheckChild1Type, MVT::i32,
/*23628*/   OPC_SwitchType /*2 cases */, 92|128,1/*220*/,  MVT::i32,// ->23852
/*23632*/     OPC_Scope, 102, /*->23736*/ // 3 children in Scope
/*23634*/       OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*23636*/       OPC_EmitInteger, MVT::i32, 0, 
/*23639*/       OPC_EmitInteger, MVT::i32, 0, 
/*23642*/       OPC_EmitInteger, MVT::i32, 1, 
/*23645*/       OPC_EmitInteger, MVT::i32, 0, 
/*23648*/       OPC_EmitInteger, MVT::i32, 0, 
/*23651*/       OPC_EmitInteger, MVT::i32, 0, 
/*23654*/       OPC_EmitInteger, MVT::i32, 0, 
/*23657*/       OPC_EmitInteger, MVT::i32, 0, 
/*23660*/       OPC_EmitInteger, MVT::i32, 0, 
/*23663*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23675*/       OPC_EmitInteger, MVT::i32, 0, 
/*23678*/       OPC_EmitInteger, MVT::i32, 0, 
/*23681*/       OPC_EmitInteger, MVT::i32, 0, 
/*23684*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23696*/       OPC_EmitInteger, MVT::i32, 1, 
/*23699*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*23703*/       OPC_EmitInteger, MVT::i32, 0, 
/*23706*/       OPC_EmitInteger, MVT::i32, 0, 
/*23709*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LSHL_r600), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (shl:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                // Dst: (LSHL_r600:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*23736*/     /*Scope*/ 102, /*->23839*/
/*23737*/       OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*23739*/       OPC_EmitInteger, MVT::i32, 0, 
/*23742*/       OPC_EmitInteger, MVT::i32, 0, 
/*23745*/       OPC_EmitInteger, MVT::i32, 1, 
/*23748*/       OPC_EmitInteger, MVT::i32, 0, 
/*23751*/       OPC_EmitInteger, MVT::i32, 0, 
/*23754*/       OPC_EmitInteger, MVT::i32, 0, 
/*23757*/       OPC_EmitInteger, MVT::i32, 0, 
/*23760*/       OPC_EmitInteger, MVT::i32, 0, 
/*23763*/       OPC_EmitInteger, MVT::i32, 0, 
/*23766*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23778*/       OPC_EmitInteger, MVT::i32, 0, 
/*23781*/       OPC_EmitInteger, MVT::i32, 0, 
/*23784*/       OPC_EmitInteger, MVT::i32, 0, 
/*23787*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23799*/       OPC_EmitInteger, MVT::i32, 1, 
/*23802*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*23806*/       OPC_EmitInteger, MVT::i32, 0, 
/*23809*/       OPC_EmitInteger, MVT::i32, 0, 
/*23812*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LSHL_eg), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (shl:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                // Dst: (LSHL_eg:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*23839*/     /*Scope*/ 11, /*->23851*/
/*23840*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*23842*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_LSHL_B32_e32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
                // Dst: (V_LSHL_B32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*23851*/     0, /*End of Scope*/
            /*SwitchType*/ 11,  MVT::i64,// ->23865
/*23854*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*23856*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_LSHL_B64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (shl:i64 i64:i64:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_LSHL_B64:i64 i64:i64:$src0, i32:i32:$src1)
            0, // EndSwitchType
          /*SwitchOpcode*/ 91|128,2/*347*/,  TARGET_VAL(ISD::MUL),// ->24217
/*23870*/   OPC_RecordChild0, // #0 = $src0
/*23871*/   OPC_RecordChild1, // #1 = $src1
/*23872*/   OPC_CheckType, MVT::i32,
/*23874*/   OPC_Scope, 102, /*->23978*/ // 4 children in Scope
/*23876*/     OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*23878*/     OPC_EmitInteger, MVT::i32, 0, 
/*23881*/     OPC_EmitInteger, MVT::i32, 0, 
/*23884*/     OPC_EmitInteger, MVT::i32, 1, 
/*23887*/     OPC_EmitInteger, MVT::i32, 0, 
/*23890*/     OPC_EmitInteger, MVT::i32, 0, 
/*23893*/     OPC_EmitInteger, MVT::i32, 0, 
/*23896*/     OPC_EmitInteger, MVT::i32, 0, 
/*23899*/     OPC_EmitInteger, MVT::i32, 0, 
/*23902*/     OPC_EmitInteger, MVT::i32, 0, 
/*23905*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23917*/     OPC_EmitInteger, MVT::i32, 0, 
/*23920*/     OPC_EmitInteger, MVT::i32, 0, 
/*23923*/     OPC_EmitInteger, MVT::i32, 0, 
/*23926*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23938*/     OPC_EmitInteger, MVT::i32, 1, 
/*23941*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*23945*/     OPC_EmitInteger, MVT::i32, 0, 
/*23948*/     OPC_EmitInteger, MVT::i32, 0, 
/*23951*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULLO_INT_r600), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mul:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULLO_INT_r600:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*23978*/   /*Scope*/ 102, /*->24081*/
/*23979*/     OPC_CheckPatternPredicate, 4, // (Subtarget.device()->getGeneration() >= AMDGPUDeviceInfo::HD5XXX && Subtarget.device()->getGeneration() < AMDGPUDeviceInfo::HD7XXX && Subtarget.device()->getDeviceFlag() != OCL_DEVICE_CAYMAN)
/*23981*/     OPC_EmitInteger, MVT::i32, 0, 
/*23984*/     OPC_EmitInteger, MVT::i32, 0, 
/*23987*/     OPC_EmitInteger, MVT::i32, 1, 
/*23990*/     OPC_EmitInteger, MVT::i32, 0, 
/*23993*/     OPC_EmitInteger, MVT::i32, 0, 
/*23996*/     OPC_EmitInteger, MVT::i32, 0, 
/*23999*/     OPC_EmitInteger, MVT::i32, 0, 
/*24002*/     OPC_EmitInteger, MVT::i32, 0, 
/*24005*/     OPC_EmitInteger, MVT::i32, 0, 
/*24008*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24020*/     OPC_EmitInteger, MVT::i32, 0, 
/*24023*/     OPC_EmitInteger, MVT::i32, 0, 
/*24026*/     OPC_EmitInteger, MVT::i32, 0, 
/*24029*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24041*/     OPC_EmitInteger, MVT::i32, 1, 
/*24044*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*24048*/     OPC_EmitInteger, MVT::i32, 0, 
/*24051*/     OPC_EmitInteger, MVT::i32, 0, 
/*24054*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULLO_INT_eg), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mul:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULLO_INT_eg:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*24081*/   /*Scope*/ 102, /*->24184*/
/*24082*/     OPC_CheckPatternPredicate, 5, // (Subtarget.device()->getDeviceFlag() == OCL_DEVICE_CAYMAN)
/*24084*/     OPC_EmitInteger, MVT::i32, 0, 
/*24087*/     OPC_EmitInteger, MVT::i32, 0, 
/*24090*/     OPC_EmitInteger, MVT::i32, 1, 
/*24093*/     OPC_EmitInteger, MVT::i32, 0, 
/*24096*/     OPC_EmitInteger, MVT::i32, 0, 
/*24099*/     OPC_EmitInteger, MVT::i32, 0, 
/*24102*/     OPC_EmitInteger, MVT::i32, 0, 
/*24105*/     OPC_EmitInteger, MVT::i32, 0, 
/*24108*/     OPC_EmitInteger, MVT::i32, 0, 
/*24111*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24123*/     OPC_EmitInteger, MVT::i32, 0, 
/*24126*/     OPC_EmitInteger, MVT::i32, 0, 
/*24129*/     OPC_EmitInteger, MVT::i32, 0, 
/*24132*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24144*/     OPC_EmitInteger, MVT::i32, 1, 
/*24147*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*24151*/     OPC_EmitInteger, MVT::i32, 0, 
/*24154*/     OPC_EmitInteger, MVT::i32, 0, 
/*24157*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULLO_INT_cm), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mul:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULLO_INT_cm:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*24184*/   /*Scope*/ 31, /*->24216*/
/*24185*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*24187*/     OPC_EmitInteger, MVT::i32, 0, 
/*24190*/     OPC_EmitInteger, MVT::i32, 0, 
/*24193*/     OPC_EmitInteger, MVT::i32, 0, 
/*24196*/     OPC_EmitInteger, MVT::i32, 0, 
/*24199*/     OPC_EmitInteger, MVT::i32, 0, 
/*24202*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_LO_I32), 0,
                  1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
              // Src: (mul:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_MUL_LO_I32:i32 ?:i32:$src0, ?:i32:$src1, 0:i32)
/*24216*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 91|128,2/*347*/,  TARGET_VAL(ISD::MULHS),// ->24568
/*24221*/   OPC_RecordChild0, // #0 = $src0
/*24222*/   OPC_RecordChild1, // #1 = $src1
/*24223*/   OPC_CheckType, MVT::i32,
/*24225*/   OPC_Scope, 102, /*->24329*/ // 4 children in Scope
/*24227*/     OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*24229*/     OPC_EmitInteger, MVT::i32, 0, 
/*24232*/     OPC_EmitInteger, MVT::i32, 0, 
/*24235*/     OPC_EmitInteger, MVT::i32, 1, 
/*24238*/     OPC_EmitInteger, MVT::i32, 0, 
/*24241*/     OPC_EmitInteger, MVT::i32, 0, 
/*24244*/     OPC_EmitInteger, MVT::i32, 0, 
/*24247*/     OPC_EmitInteger, MVT::i32, 0, 
/*24250*/     OPC_EmitInteger, MVT::i32, 0, 
/*24253*/     OPC_EmitInteger, MVT::i32, 0, 
/*24256*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24268*/     OPC_EmitInteger, MVT::i32, 0, 
/*24271*/     OPC_EmitInteger, MVT::i32, 0, 
/*24274*/     OPC_EmitInteger, MVT::i32, 0, 
/*24277*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24289*/     OPC_EmitInteger, MVT::i32, 1, 
/*24292*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*24296*/     OPC_EmitInteger, MVT::i32, 0, 
/*24299*/     OPC_EmitInteger, MVT::i32, 0, 
/*24302*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULHI_INT_r600), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mulhs:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULHI_INT_r600:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*24329*/   /*Scope*/ 102, /*->24432*/
/*24330*/     OPC_CheckPatternPredicate, 4, // (Subtarget.device()->getGeneration() >= AMDGPUDeviceInfo::HD5XXX && Subtarget.device()->getGeneration() < AMDGPUDeviceInfo::HD7XXX && Subtarget.device()->getDeviceFlag() != OCL_DEVICE_CAYMAN)
/*24332*/     OPC_EmitInteger, MVT::i32, 0, 
/*24335*/     OPC_EmitInteger, MVT::i32, 0, 
/*24338*/     OPC_EmitInteger, MVT::i32, 1, 
/*24341*/     OPC_EmitInteger, MVT::i32, 0, 
/*24344*/     OPC_EmitInteger, MVT::i32, 0, 
/*24347*/     OPC_EmitInteger, MVT::i32, 0, 
/*24350*/     OPC_EmitInteger, MVT::i32, 0, 
/*24353*/     OPC_EmitInteger, MVT::i32, 0, 
/*24356*/     OPC_EmitInteger, MVT::i32, 0, 
/*24359*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24371*/     OPC_EmitInteger, MVT::i32, 0, 
/*24374*/     OPC_EmitInteger, MVT::i32, 0, 
/*24377*/     OPC_EmitInteger, MVT::i32, 0, 
/*24380*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24392*/     OPC_EmitInteger, MVT::i32, 1, 
/*24395*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*24399*/     OPC_EmitInteger, MVT::i32, 0, 
/*24402*/     OPC_EmitInteger, MVT::i32, 0, 
/*24405*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULHI_INT_eg), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mulhs:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULHI_INT_eg:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*24432*/   /*Scope*/ 102, /*->24535*/
/*24433*/     OPC_CheckPatternPredicate, 5, // (Subtarget.device()->getDeviceFlag() == OCL_DEVICE_CAYMAN)
/*24435*/     OPC_EmitInteger, MVT::i32, 0, 
/*24438*/     OPC_EmitInteger, MVT::i32, 0, 
/*24441*/     OPC_EmitInteger, MVT::i32, 1, 
/*24444*/     OPC_EmitInteger, MVT::i32, 0, 
/*24447*/     OPC_EmitInteger, MVT::i32, 0, 
/*24450*/     OPC_EmitInteger, MVT::i32, 0, 
/*24453*/     OPC_EmitInteger, MVT::i32, 0, 
/*24456*/     OPC_EmitInteger, MVT::i32, 0, 
/*24459*/     OPC_EmitInteger, MVT::i32, 0, 
/*24462*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24474*/     OPC_EmitInteger, MVT::i32, 0, 
/*24477*/     OPC_EmitInteger, MVT::i32, 0, 
/*24480*/     OPC_EmitInteger, MVT::i32, 0, 
/*24483*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24495*/     OPC_EmitInteger, MVT::i32, 1, 
/*24498*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*24502*/     OPC_EmitInteger, MVT::i32, 0, 
/*24505*/     OPC_EmitInteger, MVT::i32, 0, 
/*24508*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULHI_INT_cm), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mulhs:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULHI_INT_cm:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*24535*/   /*Scope*/ 31, /*->24567*/
/*24536*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*24538*/     OPC_EmitInteger, MVT::i32, 0, 
/*24541*/     OPC_EmitInteger, MVT::i32, 0, 
/*24544*/     OPC_EmitInteger, MVT::i32, 0, 
/*24547*/     OPC_EmitInteger, MVT::i32, 0, 
/*24550*/     OPC_EmitInteger, MVT::i32, 0, 
/*24553*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_HI_I32), 0,
                  1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
              // Src: (mulhs:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_MUL_HI_I32:i32 ?:i32:$src0, ?:i32:$src1, 0:i32)
/*24567*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 91|128,2/*347*/,  TARGET_VAL(ISD::MULHU),// ->24919
/*24572*/   OPC_RecordChild0, // #0 = $src0
/*24573*/   OPC_RecordChild1, // #1 = $src1
/*24574*/   OPC_CheckType, MVT::i32,
/*24576*/   OPC_Scope, 102, /*->24680*/ // 4 children in Scope
/*24578*/     OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*24580*/     OPC_EmitInteger, MVT::i32, 0, 
/*24583*/     OPC_EmitInteger, MVT::i32, 0, 
/*24586*/     OPC_EmitInteger, MVT::i32, 1, 
/*24589*/     OPC_EmitInteger, MVT::i32, 0, 
/*24592*/     OPC_EmitInteger, MVT::i32, 0, 
/*24595*/     OPC_EmitInteger, MVT::i32, 0, 
/*24598*/     OPC_EmitInteger, MVT::i32, 0, 
/*24601*/     OPC_EmitInteger, MVT::i32, 0, 
/*24604*/     OPC_EmitInteger, MVT::i32, 0, 
/*24607*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24619*/     OPC_EmitInteger, MVT::i32, 0, 
/*24622*/     OPC_EmitInteger, MVT::i32, 0, 
/*24625*/     OPC_EmitInteger, MVT::i32, 0, 
/*24628*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24640*/     OPC_EmitInteger, MVT::i32, 1, 
/*24643*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*24647*/     OPC_EmitInteger, MVT::i32, 0, 
/*24650*/     OPC_EmitInteger, MVT::i32, 0, 
/*24653*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULHI_UINT_r600), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mulhu:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULHI_UINT_r600:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*24680*/   /*Scope*/ 102, /*->24783*/
/*24681*/     OPC_CheckPatternPredicate, 4, // (Subtarget.device()->getGeneration() >= AMDGPUDeviceInfo::HD5XXX && Subtarget.device()->getGeneration() < AMDGPUDeviceInfo::HD7XXX && Subtarget.device()->getDeviceFlag() != OCL_DEVICE_CAYMAN)
/*24683*/     OPC_EmitInteger, MVT::i32, 0, 
/*24686*/     OPC_EmitInteger, MVT::i32, 0, 
/*24689*/     OPC_EmitInteger, MVT::i32, 1, 
/*24692*/     OPC_EmitInteger, MVT::i32, 0, 
/*24695*/     OPC_EmitInteger, MVT::i32, 0, 
/*24698*/     OPC_EmitInteger, MVT::i32, 0, 
/*24701*/     OPC_EmitInteger, MVT::i32, 0, 
/*24704*/     OPC_EmitInteger, MVT::i32, 0, 
/*24707*/     OPC_EmitInteger, MVT::i32, 0, 
/*24710*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24722*/     OPC_EmitInteger, MVT::i32, 0, 
/*24725*/     OPC_EmitInteger, MVT::i32, 0, 
/*24728*/     OPC_EmitInteger, MVT::i32, 0, 
/*24731*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24743*/     OPC_EmitInteger, MVT::i32, 1, 
/*24746*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*24750*/     OPC_EmitInteger, MVT::i32, 0, 
/*24753*/     OPC_EmitInteger, MVT::i32, 0, 
/*24756*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULHI_UINT_eg), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mulhu:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULHI_UINT_eg:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*24783*/   /*Scope*/ 102, /*->24886*/
/*24784*/     OPC_CheckPatternPredicate, 5, // (Subtarget.device()->getDeviceFlag() == OCL_DEVICE_CAYMAN)
/*24786*/     OPC_EmitInteger, MVT::i32, 0, 
/*24789*/     OPC_EmitInteger, MVT::i32, 0, 
/*24792*/     OPC_EmitInteger, MVT::i32, 1, 
/*24795*/     OPC_EmitInteger, MVT::i32, 0, 
/*24798*/     OPC_EmitInteger, MVT::i32, 0, 
/*24801*/     OPC_EmitInteger, MVT::i32, 0, 
/*24804*/     OPC_EmitInteger, MVT::i32, 0, 
/*24807*/     OPC_EmitInteger, MVT::i32, 0, 
/*24810*/     OPC_EmitInteger, MVT::i32, 0, 
/*24813*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24825*/     OPC_EmitInteger, MVT::i32, 0, 
/*24828*/     OPC_EmitInteger, MVT::i32, 0, 
/*24831*/     OPC_EmitInteger, MVT::i32, 0, 
/*24834*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24846*/     OPC_EmitInteger, MVT::i32, 1, 
/*24849*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*24853*/     OPC_EmitInteger, MVT::i32, 0, 
/*24856*/     OPC_EmitInteger, MVT::i32, 0, 
/*24859*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULHI_UINT_cm), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mulhu:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULHI_UINT_cm:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*24886*/   /*Scope*/ 31, /*->24918*/
/*24887*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*24889*/     OPC_EmitInteger, MVT::i32, 0, 
/*24892*/     OPC_EmitInteger, MVT::i32, 0, 
/*24895*/     OPC_EmitInteger, MVT::i32, 0, 
/*24898*/     OPC_EmitInteger, MVT::i32, 0, 
/*24901*/     OPC_EmitInteger, MVT::i32, 0, 
/*24904*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_HI_U32), 0,
                  1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
              // Src: (mulhu:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_MUL_HI_U32:i32 ?:i32:$src0, ?:i32:$src1, 0:i32)
/*24918*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 119|128,3/*503*/,  TARGET_VAL(AMDGPUISD::URECIP),// ->25426
/*24923*/   OPC_RecordChild0, // #0 = $src0
/*24924*/   OPC_CheckType, MVT::i32,
/*24926*/   OPC_Scope, 68, /*->24996*/ // 4 children in Scope
/*24928*/     OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*24930*/     OPC_EmitInteger, MVT::i32, 1, 
/*24933*/     OPC_EmitInteger, MVT::i32, 0, 
/*24936*/     OPC_EmitInteger, MVT::i32, 0, 
/*24939*/     OPC_EmitInteger, MVT::i32, 0, 
/*24942*/     OPC_EmitInteger, MVT::i32, 0, 
/*24945*/     OPC_EmitInteger, MVT::i32, 0, 
/*24948*/     OPC_EmitInteger, MVT::i32, 0, 
/*24951*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24963*/     OPC_EmitInteger, MVT::i32, 1, 
/*24966*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*24970*/     OPC_EmitInteger, MVT::i32, 0, 
/*24973*/     OPC_EmitInteger, MVT::i32, 0, 
/*24976*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIP_UINT_r600), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (AMDGPUurecip:i32 R600_Reg32:i32:$src0) - Complexity = 3
              // Dst: (RECIP_UINT_r600:i32 R600_Reg32:i32:$src0)
/*24996*/   /*Scope*/ 68, /*->25065*/
/*24997*/     OPC_CheckPatternPredicate, 4, // (Subtarget.device()->getGeneration() >= AMDGPUDeviceInfo::HD5XXX && Subtarget.device()->getGeneration() < AMDGPUDeviceInfo::HD7XXX && Subtarget.device()->getDeviceFlag() != OCL_DEVICE_CAYMAN)
/*24999*/     OPC_EmitInteger, MVT::i32, 1, 
/*25002*/     OPC_EmitInteger, MVT::i32, 0, 
/*25005*/     OPC_EmitInteger, MVT::i32, 0, 
/*25008*/     OPC_EmitInteger, MVT::i32, 0, 
/*25011*/     OPC_EmitInteger, MVT::i32, 0, 
/*25014*/     OPC_EmitInteger, MVT::i32, 0, 
/*25017*/     OPC_EmitInteger, MVT::i32, 0, 
/*25020*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25032*/     OPC_EmitInteger, MVT::i32, 1, 
/*25035*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*25039*/     OPC_EmitInteger, MVT::i32, 0, 
/*25042*/     OPC_EmitInteger, MVT::i32, 0, 
/*25045*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIP_UINT_eg), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (AMDGPUurecip:i32 R600_Reg32:i32:$src0) - Complexity = 3
              // Dst: (RECIP_UINT_eg:i32 R600_Reg32:i32:$src0)
/*25065*/   /*Scope*/ 42, /*->25108*/
/*25066*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*25068*/     OPC_EmitInteger, MVT::i32, 0|128,0|128,0|128,124|128,4/*1333788672*/, 
/*25075*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_CVT_F32_U32_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #2
/*25083*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_RCP_IFLAG_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*25091*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_MUL_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4
/*25100*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_U32_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 4, 
              // Src: (AMDGPUurecip:i32 i32:i32:$src0) - Complexity = 3
              // Dst: (V_CVT_U32_F32_e32:i32 (V_MUL_F32_e32:i32 1333788672:i32, (V_RCP_IFLAG_F32_e32:i32 (V_CVT_F32_U32_e32:i32 ?:i32:$src0))))
/*25108*/   /*Scope*/ 59|128,2/*315*/, /*->25425*/
/*25110*/     OPC_CheckPatternPredicate, 5, // (Subtarget.device()->getDeviceFlag() == OCL_DEVICE_CAYMAN)
/*25112*/     OPC_EmitInteger, MVT::i32, 1, 
/*25115*/     OPC_EmitInteger, MVT::i32, 0, 
/*25118*/     OPC_EmitInteger, MVT::i32, 0, 
/*25121*/     OPC_EmitInteger, MVT::i32, 0, 
/*25124*/     OPC_EmitInteger, MVT::i32, 0, 
/*25127*/     OPC_EmitInteger, MVT::i32, 0, 
/*25130*/     OPC_EmitInteger, MVT::i32, 1, 
/*25133*/     OPC_EmitInteger, MVT::i32, 0, 
/*25136*/     OPC_EmitInteger, MVT::i32, 0, 
/*25139*/     OPC_EmitInteger, MVT::i32, 0, 
/*25142*/     OPC_EmitInteger, MVT::i32, 1, 
/*25145*/     OPC_EmitInteger, MVT::i32, 0, 
/*25148*/     OPC_EmitInteger, MVT::i32, 0, 
/*25151*/     OPC_EmitInteger, MVT::i32, 0, 
/*25154*/     OPC_EmitInteger, MVT::i32, 1, 
/*25157*/     OPC_EmitInteger, MVT::i32, 0, 
/*25160*/     OPC_EmitInteger, MVT::i32, 0, 
/*25163*/     OPC_EmitInteger, MVT::i32, 0, 
/*25166*/     OPC_EmitInteger, MVT::i32, 0, 
/*25169*/     OPC_EmitInteger, MVT::i32, 0, 
/*25172*/     OPC_EmitInteger, MVT::i32, 0, 
/*25175*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25187*/     OPC_EmitInteger, MVT::i32, 1, 
/*25190*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*25194*/     OPC_EmitInteger, MVT::i32, 0, 
/*25197*/     OPC_EmitInteger, MVT::i32, 0, 
/*25200*/     OPC_EmitNode, TARGET_VAL(AMDGPU::UINT_TO_FLT_eg), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 15, 16, 17, 18, 0, 19, 20, 21, 22, 23, 24, 25, 26,  // Results = #27
/*25220*/     OPC_EmitInteger, MVT::i32, 0, 
/*25223*/     OPC_EmitInteger, MVT::i32, 0, 
/*25226*/     OPC_EmitInteger, MVT::i32, 0, 
/*25229*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25241*/     OPC_EmitInteger, MVT::i32, 1, 
/*25244*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*25248*/     OPC_EmitInteger, MVT::i32, 0, 
/*25251*/     OPC_EmitInteger, MVT::i32, 0, 
/*25254*/     OPC_EmitNode, TARGET_VAL(AMDGPU::RECIP_IEEE_cm), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 27, 28, 29, 30, 31, 32, 33, 34, 35,  // Results = #36
/*25274*/     OPC_EmitInteger, MVT::i32, 0, 
/*25277*/     OPC_EmitInteger, MVT::i32, 0, 
/*25280*/     OPC_EmitInteger, MVT::i32, 0, 
/*25283*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25295*/     OPC_EmitInteger, MVT::i32, 0|128,0|128,0|128,124|128,4/*1333788672*/, 
/*25302*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MOV_IMM_I32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 41,  // Results = #42
/*25310*/     OPC_EmitInteger, MVT::i32, 0, 
/*25313*/     OPC_EmitInteger, MVT::i32, 0, 
/*25316*/     OPC_EmitInteger, MVT::i32, 0, 
/*25319*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25331*/     OPC_EmitInteger, MVT::i32, 1, 
/*25334*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*25338*/     OPC_EmitInteger, MVT::i32, 0, 
/*25341*/     OPC_EmitInteger, MVT::i32, 0, 
/*25344*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 36, 37, 38, 39, 40, 42, 43, 44, 45, 46, 47, 48, 49, 50,  // Results = #51
/*25371*/     OPC_EmitInteger, MVT::i32, 0, 
/*25374*/     OPC_EmitInteger, MVT::i32, 0, 
/*25377*/     OPC_EmitInteger, MVT::i32, 0, 
/*25380*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25392*/     OPC_EmitInteger, MVT::i32, 1, 
/*25395*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*25399*/     OPC_EmitInteger, MVT::i32, 0, 
/*25402*/     OPC_EmitInteger, MVT::i32, 0, 
/*25405*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FLT_TO_UINT_eg), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 51, 52, 53, 54, 55, 56, 57, 58, 59, 
              // Src: (AMDGPUurecip:i32 i32:i32:$src0) - Complexity = 3
              // Dst: (FLT_TO_UINT_eg:i32 (MUL_IEEE:i32 (RECIP_IEEE_cm:i32 (UINT_TO_FLT_eg:i32 ?:i32:$src0)), (MOV_IMM_I32:i32 1333788672:i32)))
/*25425*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 10|128,1/*138*/,  TARGET_VAL(ISD::ROTR),// ->25568
/*25430*/   OPC_RecordChild0, // #0 = $src0
/*25431*/   OPC_RecordChild1, // #1 = $src1
/*25432*/   OPC_CheckChild1Type, MVT::i32,
/*25434*/   OPC_CheckType, MVT::i32,
/*25436*/   OPC_Scope, 100, /*->25538*/ // 2 children in Scope
/*25438*/     OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*25440*/     OPC_EmitInteger, MVT::i32, 0, 
/*25443*/     OPC_EmitInteger, MVT::i32, 0, 
/*25446*/     OPC_EmitInteger, MVT::i32, 0, 
/*25449*/     OPC_EmitInteger, MVT::i32, 0, 
/*25452*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25464*/     OPC_EmitInteger, MVT::i32, 0, 
/*25467*/     OPC_EmitInteger, MVT::i32, 0, 
/*25470*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25482*/     OPC_EmitInteger, MVT::i32, 0, 
/*25485*/     OPC_EmitInteger, MVT::i32, 0, 
/*25488*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25500*/     OPC_EmitInteger, MVT::i32, 1, 
/*25503*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*25507*/     OPC_EmitInteger, MVT::i32, 0, 
/*25510*/     OPC_EmitInteger, MVT::i32, 0, 
/*25513*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BIT_ALIGN_INT_eg), 0,
                  1/*#VTs*/, MVT::i32, 18/*#Ops*/, 2, 3, 0, 4, 5, 6, 0, 7, 8, 9, 1, 10, 11, 12, 13, 14, 15, 16, 
              // Src: (rotr:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (BIT_ALIGN_INT_eg:i32 ?:i32:$src0, ?:i32:$src0, ?:i32:$src1)
/*25538*/   /*Scope*/ 28, /*->25567*/
/*25539*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*25541*/     OPC_EmitInteger, MVT::i32, 0, 
/*25544*/     OPC_EmitInteger, MVT::i32, 0, 
/*25547*/     OPC_EmitInteger, MVT::i32, 0, 
/*25550*/     OPC_EmitInteger, MVT::i32, 0, 
/*25553*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ALIGNBIT_B32), 0,
                  1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 0, 1, 2, 3, 4, 5, 
              // Src: (rotr:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_ALIGNBIT_B32:i32 ?:i32:$src0, ?:i32:$src0, ?:i32:$src1)
/*25567*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 14|128,4/*526*/,  TARGET_VAL(ISD::SETCC),// ->26098
/*25572*/   OPC_RecordChild0, // #0 = $src0
/*25573*/   OPC_Scope, 55|128,2/*311*/, /*->25887*/ // 2 children in Scope
/*25576*/     OPC_CheckChild0Type, MVT::f32,
/*25578*/     OPC_RecordChild1, // #1 = $src1
/*25579*/     OPC_MoveChild, 2,
/*25581*/     OPC_Scope, 108|128,1/*236*/, /*->25820*/ // 3 children in Scope
/*25584*/       OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*25587*/       OPC_Scope, 32, /*->25621*/ // 7 children in Scope
/*25589*/         OPC_CheckPredicate, 6, // Predicate_COND_LT
/*25591*/         OPC_MoveParent,
/*25592*/         OPC_CheckType, MVT::i1,
/*25594*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*25596*/         OPC_EmitInteger, MVT::i32, 0, 
/*25599*/         OPC_EmitInteger, MVT::i32, 0, 
/*25602*/         OPC_EmitInteger, MVT::i32, 0, 
/*25605*/         OPC_EmitInteger, MVT::i32, 0, 
/*25608*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_LT_F32_e64), 0,
                      1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                  // Src: (setcc:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1, (cond:Other)<<P:Predicate_COND_LT>>) - Complexity = 3
                  // Dst: (V_CMP_LT_F32_e64:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1)
/*25621*/       /*Scope*/ 32, /*->25654*/
/*25622*/         OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*25624*/         OPC_MoveParent,
/*25625*/         OPC_CheckType, MVT::i1,
/*25627*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*25629*/         OPC_EmitInteger, MVT::i32, 0, 
/*25632*/         OPC_EmitInteger, MVT::i32, 0, 
/*25635*/         OPC_EmitInteger, MVT::i32, 0, 
/*25638*/         OPC_EmitInteger, MVT::i32, 0, 
/*25641*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_EQ_F32_e64), 0,
                      1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                  // Src: (setcc:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 3
                  // Dst: (V_CMP_EQ_F32_e64:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1)
/*25654*/       /*Scope*/ 32, /*->25687*/
/*25655*/         OPC_CheckPredicate, 7, // Predicate_COND_LE
/*25657*/         OPC_MoveParent,
/*25658*/         OPC_CheckType, MVT::i1,
/*25660*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*25662*/         OPC_EmitInteger, MVT::i32, 0, 
/*25665*/         OPC_EmitInteger, MVT::i32, 0, 
/*25668*/         OPC_EmitInteger, MVT::i32, 0, 
/*25671*/         OPC_EmitInteger, MVT::i32, 0, 
/*25674*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_LE_F32_e64), 0,
                      1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                  // Src: (setcc:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1, (cond:Other)<<P:Predicate_COND_LE>>) - Complexity = 3
                  // Dst: (V_CMP_LE_F32_e64:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1)
/*25687*/       /*Scope*/ 32, /*->25720*/
/*25688*/         OPC_CheckPredicate, 3, // Predicate_COND_GT
/*25690*/         OPC_MoveParent,
/*25691*/         OPC_CheckType, MVT::i1,
/*25693*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*25695*/         OPC_EmitInteger, MVT::i32, 0, 
/*25698*/         OPC_EmitInteger, MVT::i32, 0, 
/*25701*/         OPC_EmitInteger, MVT::i32, 0, 
/*25704*/         OPC_EmitInteger, MVT::i32, 0, 
/*25707*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_GT_F32_e64), 0,
                      1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                  // Src: (setcc:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 3
                  // Dst: (V_CMP_GT_F32_e64:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1)
/*25720*/       /*Scope*/ 32, /*->25753*/
/*25721*/         OPC_CheckPredicate, 5, // Predicate_COND_NE
/*25723*/         OPC_MoveParent,
/*25724*/         OPC_CheckType, MVT::i1,
/*25726*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*25728*/         OPC_EmitInteger, MVT::i32, 0, 
/*25731*/         OPC_EmitInteger, MVT::i32, 0, 
/*25734*/         OPC_EmitInteger, MVT::i32, 0, 
/*25737*/         OPC_EmitInteger, MVT::i32, 0, 
/*25740*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_LG_F32_e64), 0,
                      1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                  // Src: (setcc:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1, (cond:Other)<<P:Predicate_COND_NE>>) - Complexity = 3
                  // Dst: (V_CMP_LG_F32_e64:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1)
/*25753*/       /*Scope*/ 32, /*->25786*/
/*25754*/         OPC_CheckPredicate, 4, // Predicate_COND_GE
/*25756*/         OPC_MoveParent,
/*25757*/         OPC_CheckType, MVT::i1,
/*25759*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*25761*/         OPC_EmitInteger, MVT::i32, 0, 
/*25764*/         OPC_EmitInteger, MVT::i32, 0, 
/*25767*/         OPC_EmitInteger, MVT::i32, 0, 
/*25770*/         OPC_EmitInteger, MVT::i32, 0, 
/*25773*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_GE_F32_e64), 0,
                      1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                  // Src: (setcc:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 3
                  // Dst: (V_CMP_GE_F32_e64:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1)
/*25786*/       /*Scope*/ 32, /*->25819*/
/*25787*/         OPC_CheckPredicate, 5, // Predicate_COND_NE
/*25789*/         OPC_MoveParent,
/*25790*/         OPC_CheckType, MVT::i1,
/*25792*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*25794*/         OPC_EmitInteger, MVT::i32, 0, 
/*25797*/         OPC_EmitInteger, MVT::i32, 0, 
/*25800*/         OPC_EmitInteger, MVT::i32, 0, 
/*25803*/         OPC_EmitInteger, MVT::i32, 0, 
/*25806*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_NEQ_F32_e64), 0,
                      1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                  // Src: (setcc:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1, (cond:Other)<<P:Predicate_COND_NE>>) - Complexity = 3
                  // Dst: (V_CMP_NEQ_F32_e64:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1)
/*25819*/       0, /*End of Scope*/
/*25820*/     /*Scope*/ 32, /*->25853*/
/*25821*/       OPC_CheckCondCode, ISD::SETO,
/*25823*/       OPC_MoveParent,
/*25824*/       OPC_CheckType, MVT::i1,
/*25826*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*25828*/       OPC_EmitInteger, MVT::i32, 0, 
/*25831*/       OPC_EmitInteger, MVT::i32, 0, 
/*25834*/       OPC_EmitInteger, MVT::i32, 0, 
/*25837*/       OPC_EmitInteger, MVT::i32, 0, 
/*25840*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_O_F32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 f32:f32:$src0, f32:f32:$src1, SETO:Other) - Complexity = 3
                // Dst: (V_CMP_O_F32_e64:i1 ?:f32:$src0, ?:f32:$src1)
/*25853*/     /*Scope*/ 32, /*->25886*/
/*25854*/       OPC_CheckCondCode, ISD::SETUO,
/*25856*/       OPC_MoveParent,
/*25857*/       OPC_CheckType, MVT::i1,
/*25859*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*25861*/       OPC_EmitInteger, MVT::i32, 0, 
/*25864*/       OPC_EmitInteger, MVT::i32, 0, 
/*25867*/       OPC_EmitInteger, MVT::i32, 0, 
/*25870*/       OPC_EmitInteger, MVT::i32, 0, 
/*25873*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_U_F32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 f32:f32:$src0, f32:f32:$src1, SETUO:Other) - Complexity = 3
                // Dst: (V_CMP_U_F32_e64:i1 ?:f32:$src0, ?:f32:$src1)
/*25886*/     0, /*End of Scope*/
/*25887*/   /*Scope*/ 80|128,1/*208*/, /*->26097*/
/*25889*/     OPC_CheckChild0Type, MVT::i32,
/*25891*/     OPC_RecordChild1, // #1 = $src1
/*25892*/     OPC_MoveChild, 2,
/*25894*/     OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*25897*/     OPC_Scope, 32, /*->25931*/ // 6 children in Scope
/*25899*/       OPC_CheckPredicate, 6, // Predicate_COND_LT
/*25901*/       OPC_MoveParent,
/*25902*/       OPC_CheckType, MVT::i1,
/*25904*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*25906*/       OPC_EmitInteger, MVT::i32, 0, 
/*25909*/       OPC_EmitInteger, MVT::i32, 0, 
/*25912*/       OPC_EmitInteger, MVT::i32, 0, 
/*25915*/       OPC_EmitInteger, MVT::i32, 0, 
/*25918*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_LT_I32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1, (cond:Other)<<P:Predicate_COND_LT>>) - Complexity = 3
                // Dst: (V_CMP_LT_I32_e64:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1)
/*25931*/     /*Scope*/ 32, /*->25964*/
/*25932*/       OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*25934*/       OPC_MoveParent,
/*25935*/       OPC_CheckType, MVT::i1,
/*25937*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*25939*/       OPC_EmitInteger, MVT::i32, 0, 
/*25942*/       OPC_EmitInteger, MVT::i32, 0, 
/*25945*/       OPC_EmitInteger, MVT::i32, 0, 
/*25948*/       OPC_EmitInteger, MVT::i32, 0, 
/*25951*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_EQ_I32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 3
                // Dst: (V_CMP_EQ_I32_e64:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1)
/*25964*/     /*Scope*/ 32, /*->25997*/
/*25965*/       OPC_CheckPredicate, 7, // Predicate_COND_LE
/*25967*/       OPC_MoveParent,
/*25968*/       OPC_CheckType, MVT::i1,
/*25970*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*25972*/       OPC_EmitInteger, MVT::i32, 0, 
/*25975*/       OPC_EmitInteger, MVT::i32, 0, 
/*25978*/       OPC_EmitInteger, MVT::i32, 0, 
/*25981*/       OPC_EmitInteger, MVT::i32, 0, 
/*25984*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_LE_I32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1, (cond:Other)<<P:Predicate_COND_LE>>) - Complexity = 3
                // Dst: (V_CMP_LE_I32_e64:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1)
/*25997*/     /*Scope*/ 32, /*->26030*/
/*25998*/       OPC_CheckPredicate, 3, // Predicate_COND_GT
/*26000*/       OPC_MoveParent,
/*26001*/       OPC_CheckType, MVT::i1,
/*26003*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*26005*/       OPC_EmitInteger, MVT::i32, 0, 
/*26008*/       OPC_EmitInteger, MVT::i32, 0, 
/*26011*/       OPC_EmitInteger, MVT::i32, 0, 
/*26014*/       OPC_EmitInteger, MVT::i32, 0, 
/*26017*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_GT_I32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 3
                // Dst: (V_CMP_GT_I32_e64:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1)
/*26030*/     /*Scope*/ 32, /*->26063*/
/*26031*/       OPC_CheckPredicate, 5, // Predicate_COND_NE
/*26033*/       OPC_MoveParent,
/*26034*/       OPC_CheckType, MVT::i1,
/*26036*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*26038*/       OPC_EmitInteger, MVT::i32, 0, 
/*26041*/       OPC_EmitInteger, MVT::i32, 0, 
/*26044*/       OPC_EmitInteger, MVT::i32, 0, 
/*26047*/       OPC_EmitInteger, MVT::i32, 0, 
/*26050*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_NE_I32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1, (cond:Other)<<P:Predicate_COND_NE>>) - Complexity = 3
                // Dst: (V_CMP_NE_I32_e64:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1)
/*26063*/     /*Scope*/ 32, /*->26096*/
/*26064*/       OPC_CheckPredicate, 4, // Predicate_COND_GE
/*26066*/       OPC_MoveParent,
/*26067*/       OPC_CheckType, MVT::i1,
/*26069*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*26071*/       OPC_EmitInteger, MVT::i32, 0, 
/*26074*/       OPC_EmitInteger, MVT::i32, 0, 
/*26077*/       OPC_EmitInteger, MVT::i32, 0, 
/*26080*/       OPC_EmitInteger, MVT::i32, 0, 
/*26083*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_GE_I32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 3
                // Dst: (V_CMP_GE_I32_e64:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1)
/*26096*/     0, /*End of Scope*/
/*26097*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 67,  TARGET_VAL(ISD::SELECT),// ->26168
/*26101*/   OPC_RecordChild0, // #0 = $src2
/*26102*/   OPC_CheckChild0Type, MVT::i1,
/*26104*/   OPC_RecordChild1, // #1 = $src1
/*26105*/   OPC_RecordChild2, // #2 = $src0
/*26106*/   OPC_SwitchType /*2 cases */, 28,  MVT::i32,// ->26137
/*26109*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*26111*/     OPC_EmitInteger, MVT::i32, 0, 
/*26114*/     OPC_EmitInteger, MVT::i32, 0, 
/*26117*/     OPC_EmitInteger, MVT::i32, 0, 
/*26120*/     OPC_EmitInteger, MVT::i32, 0, 
/*26123*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CNDMASK_B32_e64), 0,
                  1/*#VTs*/, MVT::i32, 7/*#Ops*/, 2, 1, 0, 3, 4, 5, 6, 
              // Src: (select:i32 i1:i1:$src2, i32:i32:$src1, i32:i32:$src0) - Complexity = 3
              // Dst: (V_CNDMASK_B32_e64:i32 i32:i32:$src0, i32:i32:$src1, i1:i1:$src2)
            /*SwitchType*/ 28,  MVT::f32,// ->26167
/*26139*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*26141*/     OPC_EmitInteger, MVT::i32, 0, 
/*26144*/     OPC_EmitInteger, MVT::i32, 0, 
/*26147*/     OPC_EmitInteger, MVT::i32, 0, 
/*26150*/     OPC_EmitInteger, MVT::i32, 0, 
/*26153*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CNDMASK_B32_e64), 0,
                  1/*#VTs*/, MVT::f32, 7/*#Ops*/, 2, 1, 0, 3, 4, 5, 6, 
              // Src: (select:f32 i1:i1:$src2, f32:f32:$src1, f32:f32:$src0) - Complexity = 3
              // Dst: (V_CNDMASK_B32_e64:f32 ?:f32:$src0, ?:f32:$src1, ?:i1:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 48,  TARGET_VAL(ISD::SIGN_EXTEND),// ->26219
/*26171*/   OPC_RecordChild0, // #0 = $src0
/*26172*/   OPC_CheckChild0Type, MVT::i1,
/*26174*/   OPC_CheckType, MVT::i32,
/*26176*/   OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*26178*/   OPC_EmitInteger, MVT::i32, 0, 
/*26181*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26193*/   OPC_EmitInteger, MVT::i32, 0, 
/*26196*/   OPC_EmitInteger, MVT::i32, 0, 
/*26199*/   OPC_EmitInteger, MVT::i32, 0, 
/*26202*/   OPC_EmitInteger, MVT::i32, 0, 
/*26205*/   OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CNDMASK_B32_e64), 0,
                1/*#VTs*/, MVT::i32, 7/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 
            // Src: (sext:i32 i1:i1:$src0) - Complexity = 3
            // Dst: (V_CNDMASK_B32_e64:i32 0:i32, -1:i32, ?:i1:$src0)
          /*SwitchOpcode*/ 5|128,6/*773*/,  TARGET_VAL(ISD::FDIV),// ->26996
/*26223*/   OPC_Scope, 103|128,1/*231*/, /*->26457*/ // 2 children in Scope
/*26226*/     OPC_MoveChild, 0,
/*26228*/     OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*26231*/     OPC_CheckPredicate, 8, // Predicate_FP_ONE
/*26233*/     OPC_MoveParent,
/*26234*/     OPC_RecordChild1, // #0 = $src0
/*26235*/     OPC_CheckType, MVT::f32,
/*26237*/     OPC_Scope, 68, /*->26307*/ // 4 children in Scope
/*26239*/       OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*26241*/       OPC_EmitInteger, MVT::i32, 1, 
/*26244*/       OPC_EmitInteger, MVT::i32, 0, 
/*26247*/       OPC_EmitInteger, MVT::i32, 0, 
/*26250*/       OPC_EmitInteger, MVT::i32, 0, 
/*26253*/       OPC_EmitInteger, MVT::i32, 0, 
/*26256*/       OPC_EmitInteger, MVT::i32, 0, 
/*26259*/       OPC_EmitInteger, MVT::i32, 0, 
/*26262*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26274*/       OPC_EmitInteger, MVT::i32, 1, 
/*26277*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*26281*/       OPC_EmitInteger, MVT::i32, 0, 
/*26284*/       OPC_EmitInteger, MVT::i32, 0, 
/*26287*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIP_IEEE_r600), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (fdiv:f32 (fpimm:f32)<<P:Predicate_FP_ONE>>, f32:f32:$src0) - Complexity = 7
                // Dst: (RECIP_IEEE_r600:f32 f32:f32:$src0)
/*26307*/     /*Scope*/ 68, /*->26376*/
/*26308*/       OPC_CheckPatternPredicate, 4, // (Subtarget.device()->getGeneration() >= AMDGPUDeviceInfo::HD5XXX && Subtarget.device()->getGeneration() < AMDGPUDeviceInfo::HD7XXX && Subtarget.device()->getDeviceFlag() != OCL_DEVICE_CAYMAN)
/*26310*/       OPC_EmitInteger, MVT::i32, 1, 
/*26313*/       OPC_EmitInteger, MVT::i32, 0, 
/*26316*/       OPC_EmitInteger, MVT::i32, 0, 
/*26319*/       OPC_EmitInteger, MVT::i32, 0, 
/*26322*/       OPC_EmitInteger, MVT::i32, 0, 
/*26325*/       OPC_EmitInteger, MVT::i32, 0, 
/*26328*/       OPC_EmitInteger, MVT::i32, 0, 
/*26331*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26343*/       OPC_EmitInteger, MVT::i32, 1, 
/*26346*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*26350*/       OPC_EmitInteger, MVT::i32, 0, 
/*26353*/       OPC_EmitInteger, MVT::i32, 0, 
/*26356*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIP_IEEE_eg), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (fdiv:f32 (fpimm:f32)<<P:Predicate_FP_ONE>>, f32:f32:$src0) - Complexity = 7
                // Dst: (RECIP_IEEE_eg:f32 f32:f32:$src0)
/*26376*/     /*Scope*/ 68, /*->26445*/
/*26377*/       OPC_CheckPatternPredicate, 5, // (Subtarget.device()->getDeviceFlag() == OCL_DEVICE_CAYMAN)
/*26379*/       OPC_EmitInteger, MVT::i32, 1, 
/*26382*/       OPC_EmitInteger, MVT::i32, 0, 
/*26385*/       OPC_EmitInteger, MVT::i32, 0, 
/*26388*/       OPC_EmitInteger, MVT::i32, 0, 
/*26391*/       OPC_EmitInteger, MVT::i32, 0, 
/*26394*/       OPC_EmitInteger, MVT::i32, 0, 
/*26397*/       OPC_EmitInteger, MVT::i32, 0, 
/*26400*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26412*/       OPC_EmitInteger, MVT::i32, 1, 
/*26415*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*26419*/       OPC_EmitInteger, MVT::i32, 0, 
/*26422*/       OPC_EmitInteger, MVT::i32, 0, 
/*26425*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIP_IEEE_cm), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (fdiv:f32 (fpimm:f32)<<P:Predicate_FP_ONE>>, f32:f32:$src0) - Complexity = 7
                // Dst: (RECIP_IEEE_cm:f32 f32:f32:$src0)
/*26445*/     /*Scope*/ 10, /*->26456*/
/*26446*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*26448*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_RCP_F32_e32), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fdiv:f32 (fpimm:f32)<<P:Predicate_FP_ONE>>, f32:f32:$src0) - Complexity = 7
                // Dst: (V_RCP_F32_e32:f32 f32:f32:$src0)
/*26456*/     0, /*End of Scope*/
/*26457*/   /*Scope*/ 24|128,4/*536*/, /*->26995*/
/*26459*/     OPC_RecordChild0, // #0 = $src0
/*26460*/     OPC_RecordChild1, // #1 = $src1
/*26461*/     OPC_CheckType, MVT::f32,
/*26463*/     OPC_Scope, 40|128,1/*168*/, /*->26634*/ // 4 children in Scope
/*26466*/       OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*26468*/       OPC_EmitInteger, MVT::i32, 0, 
/*26471*/       OPC_EmitInteger, MVT::i32, 0, 
/*26474*/       OPC_EmitInteger, MVT::i32, 1, 
/*26477*/       OPC_EmitInteger, MVT::i32, 0, 
/*26480*/       OPC_EmitInteger, MVT::i32, 0, 
/*26483*/       OPC_EmitInteger, MVT::i32, 0, 
/*26486*/       OPC_EmitInteger, MVT::i32, 0, 
/*26489*/       OPC_EmitInteger, MVT::i32, 0, 
/*26492*/       OPC_EmitInteger, MVT::i32, 0, 
/*26495*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26507*/       OPC_EmitInteger, MVT::i32, 1, 
/*26510*/       OPC_EmitInteger, MVT::i32, 0, 
/*26513*/       OPC_EmitInteger, MVT::i32, 0, 
/*26516*/       OPC_EmitInteger, MVT::i32, 0, 
/*26519*/       OPC_EmitInteger, MVT::i32, 0, 
/*26522*/       OPC_EmitInteger, MVT::i32, 0, 
/*26525*/       OPC_EmitInteger, MVT::i32, 0, 
/*26528*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26540*/       OPC_EmitInteger, MVT::i32, 1, 
/*26543*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*26547*/       OPC_EmitInteger, MVT::i32, 0, 
/*26550*/       OPC_EmitInteger, MVT::i32, 0, 
/*26553*/       OPC_EmitNode, TARGET_VAL(AMDGPU::RECIP_IEEE_r600), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/*26573*/       OPC_EmitInteger, MVT::i32, 0, 
/*26576*/       OPC_EmitInteger, MVT::i32, 0, 
/*26579*/       OPC_EmitInteger, MVT::i32, 0, 
/*26582*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26594*/       OPC_EmitInteger, MVT::i32, 1, 
/*26597*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*26601*/       OPC_EmitInteger, MVT::i32, 0, 
/*26604*/       OPC_EmitInteger, MVT::i32, 0, 
/*26607*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                // Src: (fdiv:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
                // Dst: (MUL_IEEE:f32 ?:f32:$src0, (RECIP_IEEE_r600:i32 ?:f32:$src1))
/*26634*/     /*Scope*/ 40|128,1/*168*/, /*->26804*/
/*26636*/       OPC_CheckPatternPredicate, 4, // (Subtarget.device()->getGeneration() >= AMDGPUDeviceInfo::HD5XXX && Subtarget.device()->getGeneration() < AMDGPUDeviceInfo::HD7XXX && Subtarget.device()->getDeviceFlag() != OCL_DEVICE_CAYMAN)
/*26638*/       OPC_EmitInteger, MVT::i32, 0, 
/*26641*/       OPC_EmitInteger, MVT::i32, 0, 
/*26644*/       OPC_EmitInteger, MVT::i32, 1, 
/*26647*/       OPC_EmitInteger, MVT::i32, 0, 
/*26650*/       OPC_EmitInteger, MVT::i32, 0, 
/*26653*/       OPC_EmitInteger, MVT::i32, 0, 
/*26656*/       OPC_EmitInteger, MVT::i32, 0, 
/*26659*/       OPC_EmitInteger, MVT::i32, 0, 
/*26662*/       OPC_EmitInteger, MVT::i32, 0, 
/*26665*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26677*/       OPC_EmitInteger, MVT::i32, 1, 
/*26680*/       OPC_EmitInteger, MVT::i32, 0, 
/*26683*/       OPC_EmitInteger, MVT::i32, 0, 
/*26686*/       OPC_EmitInteger, MVT::i32, 0, 
/*26689*/       OPC_EmitInteger, MVT::i32, 0, 
/*26692*/       OPC_EmitInteger, MVT::i32, 0, 
/*26695*/       OPC_EmitInteger, MVT::i32, 0, 
/*26698*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26710*/       OPC_EmitInteger, MVT::i32, 1, 
/*26713*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*26717*/       OPC_EmitInteger, MVT::i32, 0, 
/*26720*/       OPC_EmitInteger, MVT::i32, 0, 
/*26723*/       OPC_EmitNode, TARGET_VAL(AMDGPU::RECIP_IEEE_eg), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/*26743*/       OPC_EmitInteger, MVT::i32, 0, 
/*26746*/       OPC_EmitInteger, MVT::i32, 0, 
/*26749*/       OPC_EmitInteger, MVT::i32, 0, 
/*26752*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26764*/       OPC_EmitInteger, MVT::i32, 1, 
/*26767*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*26771*/       OPC_EmitInteger, MVT::i32, 0, 
/*26774*/       OPC_EmitInteger, MVT::i32, 0, 
/*26777*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                // Src: (fdiv:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
                // Dst: (MUL_IEEE:f32 ?:f32:$src0, (RECIP_IEEE_eg:i32 ?:f32:$src1))
/*26804*/     /*Scope*/ 40|128,1/*168*/, /*->26974*/
/*26806*/       OPC_CheckPatternPredicate, 5, // (Subtarget.device()->getDeviceFlag() == OCL_DEVICE_CAYMAN)
/*26808*/       OPC_EmitInteger, MVT::i32, 0, 
/*26811*/       OPC_EmitInteger, MVT::i32, 0, 
/*26814*/       OPC_EmitInteger, MVT::i32, 1, 
/*26817*/       OPC_EmitInteger, MVT::i32, 0, 
/*26820*/       OPC_EmitInteger, MVT::i32, 0, 
/*26823*/       OPC_EmitInteger, MVT::i32, 0, 
/*26826*/       OPC_EmitInteger, MVT::i32, 0, 
/*26829*/       OPC_EmitInteger, MVT::i32, 0, 
/*26832*/       OPC_EmitInteger, MVT::i32, 0, 
/*26835*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26847*/       OPC_EmitInteger, MVT::i32, 1, 
/*26850*/       OPC_EmitInteger, MVT::i32, 0, 
/*26853*/       OPC_EmitInteger, MVT::i32, 0, 
/*26856*/       OPC_EmitInteger, MVT::i32, 0, 
/*26859*/       OPC_EmitInteger, MVT::i32, 0, 
/*26862*/       OPC_EmitInteger, MVT::i32, 0, 
/*26865*/       OPC_EmitInteger, MVT::i32, 0, 
/*26868*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26880*/       OPC_EmitInteger, MVT::i32, 1, 
/*26883*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*26887*/       OPC_EmitInteger, MVT::i32, 0, 
/*26890*/       OPC_EmitInteger, MVT::i32, 0, 
/*26893*/       OPC_EmitNode, TARGET_VAL(AMDGPU::RECIP_IEEE_cm), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/*26913*/       OPC_EmitInteger, MVT::i32, 0, 
/*26916*/       OPC_EmitInteger, MVT::i32, 0, 
/*26919*/       OPC_EmitInteger, MVT::i32, 0, 
/*26922*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26934*/       OPC_EmitInteger, MVT::i32, 1, 
/*26937*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*26941*/       OPC_EmitInteger, MVT::i32, 0, 
/*26944*/       OPC_EmitInteger, MVT::i32, 0, 
/*26947*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                // Src: (fdiv:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
                // Dst: (MUL_IEEE:f32 ?:f32:$src0, (RECIP_IEEE_cm:i32 ?:f32:$src1))
/*26974*/     /*Scope*/ 19, /*->26994*/
/*26975*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*26977*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_RCP_F32_e32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*26985*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_F32_e32), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 2, 
                // Src: (fdiv:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
                // Dst: (V_MUL_F32_e32:f32 ?:f32:$src0, (V_RCP_F32_e32:i32 ?:f32:$src1))
/*26994*/     0, /*End of Scope*/
/*26995*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 107|128,4/*619*/,  TARGET_VAL(ISD::FADD),// ->27619
/*27000*/   OPC_Scope, 116|128,1/*244*/, /*->27247*/ // 2 children in Scope
/*27003*/     OPC_MoveChild, 0,
/*27005*/     OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*27008*/     OPC_RecordChild0, // #0 = $src0
/*27009*/     OPC_RecordChild1, // #1 = $src1
/*27010*/     OPC_MoveParent,
/*27011*/     OPC_RecordChild1, // #2 = $src2
/*27012*/     OPC_CheckType, MVT::f32,
/*27014*/     OPC_Scope, 100, /*->27116*/ // 3 children in Scope
/*27016*/       OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*27018*/       OPC_EmitInteger, MVT::i32, 0, 
/*27021*/       OPC_EmitInteger, MVT::i32, 0, 
/*27024*/       OPC_EmitInteger, MVT::i32, 0, 
/*27027*/       OPC_EmitInteger, MVT::i32, 0, 
/*27030*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27042*/       OPC_EmitInteger, MVT::i32, 0, 
/*27045*/       OPC_EmitInteger, MVT::i32, 0, 
/*27048*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27060*/       OPC_EmitInteger, MVT::i32, 0, 
/*27063*/       OPC_EmitInteger, MVT::i32, 0, 
/*27066*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27078*/       OPC_EmitInteger, MVT::i32, 1, 
/*27081*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*27085*/       OPC_EmitInteger, MVT::i32, 0, 
/*27088*/       OPC_EmitInteger, MVT::i32, 0, 
/*27091*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULADD_IEEE_r600), 0,
                    1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                // Src: (fadd:f32 (fmul:f32 f32:f32:$src0, f32:f32:$src1), f32:f32:$src2) - Complexity = 6
                // Dst: (MULADD_IEEE_r600:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*27116*/     /*Scope*/ 100, /*->27217*/
/*27117*/       OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*27119*/       OPC_EmitInteger, MVT::i32, 0, 
/*27122*/       OPC_EmitInteger, MVT::i32, 0, 
/*27125*/       OPC_EmitInteger, MVT::i32, 0, 
/*27128*/       OPC_EmitInteger, MVT::i32, 0, 
/*27131*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27143*/       OPC_EmitInteger, MVT::i32, 0, 
/*27146*/       OPC_EmitInteger, MVT::i32, 0, 
/*27149*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27161*/       OPC_EmitInteger, MVT::i32, 0, 
/*27164*/       OPC_EmitInteger, MVT::i32, 0, 
/*27167*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27179*/       OPC_EmitInteger, MVT::i32, 1, 
/*27182*/       OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*27186*/       OPC_EmitInteger, MVT::i32, 0, 
/*27189*/       OPC_EmitInteger, MVT::i32, 0, 
/*27192*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULADD_IEEE_eg), 0,
                    1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                // Src: (fadd:f32 (fmul:f32 f32:f32:$src0, f32:f32:$src1), f32:f32:$src2) - Complexity = 6
                // Dst: (MULADD_IEEE_eg:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*27217*/     /*Scope*/ 28, /*->27246*/
/*27218*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*27220*/       OPC_EmitInteger, MVT::i32, 0, 
/*27223*/       OPC_EmitInteger, MVT::i32, 0, 
/*27226*/       OPC_EmitInteger, MVT::i32, 0, 
/*27229*/       OPC_EmitInteger, MVT::i32, 0, 
/*27232*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAD_F32), 0,
                    1/*#VTs*/, MVT::f32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
                // Src: (fadd:f32 (fmul:f32 f32:f32:$src0, f32:f32:$src1), f32:f32:$src2) - Complexity = 6
                // Dst: (V_MAD_F32:f32 ?:f32:$src0, ?:f32:$src1, ?:f32:$src2)
/*27246*/     0, /*End of Scope*/
/*27247*/   /*Scope*/ 113|128,2/*369*/, /*->27618*/
/*27249*/     OPC_RecordChild0, // #0 = $src2
/*27250*/     OPC_Scope, 115|128,1/*243*/, /*->27496*/ // 2 children in Scope
/*27253*/       OPC_MoveChild, 1,
/*27255*/       OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*27258*/       OPC_RecordChild0, // #1 = $src0
/*27259*/       OPC_RecordChild1, // #2 = $src1
/*27260*/       OPC_MoveParent,
/*27261*/       OPC_CheckType, MVT::f32,
/*27263*/       OPC_Scope, 100, /*->27365*/ // 3 children in Scope
/*27265*/         OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*27267*/         OPC_EmitInteger, MVT::i32, 0, 
/*27270*/         OPC_EmitInteger, MVT::i32, 0, 
/*27273*/         OPC_EmitInteger, MVT::i32, 0, 
/*27276*/         OPC_EmitInteger, MVT::i32, 0, 
/*27279*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27291*/         OPC_EmitInteger, MVT::i32, 0, 
/*27294*/         OPC_EmitInteger, MVT::i32, 0, 
/*27297*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27309*/         OPC_EmitInteger, MVT::i32, 0, 
/*27312*/         OPC_EmitInteger, MVT::i32, 0, 
/*27315*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27327*/         OPC_EmitInteger, MVT::i32, 1, 
/*27330*/         OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*27334*/         OPC_EmitInteger, MVT::i32, 0, 
/*27337*/         OPC_EmitInteger, MVT::i32, 0, 
/*27340*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULADD_IEEE_r600), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (fadd:f32 f32:f32:$src2, (fmul:f32 f32:f32:$src0, f32:f32:$src1)) - Complexity = 6
                  // Dst: (MULADD_IEEE_r600:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*27365*/       /*Scope*/ 100, /*->27466*/
/*27366*/         OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*27368*/         OPC_EmitInteger, MVT::i32, 0, 
/*27371*/         OPC_EmitInteger, MVT::i32, 0, 
/*27374*/         OPC_EmitInteger, MVT::i32, 0, 
/*27377*/         OPC_EmitInteger, MVT::i32, 0, 
/*27380*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27392*/         OPC_EmitInteger, MVT::i32, 0, 
/*27395*/         OPC_EmitInteger, MVT::i32, 0, 
/*27398*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27410*/         OPC_EmitInteger, MVT::i32, 0, 
/*27413*/         OPC_EmitInteger, MVT::i32, 0, 
/*27416*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27428*/         OPC_EmitInteger, MVT::i32, 1, 
/*27431*/         OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*27435*/         OPC_EmitInteger, MVT::i32, 0, 
/*27438*/         OPC_EmitInteger, MVT::i32, 0, 
/*27441*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULADD_IEEE_eg), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (fadd:f32 f32:f32:$src2, (fmul:f32 f32:f32:$src0, f32:f32:$src1)) - Complexity = 6
                  // Dst: (MULADD_IEEE_eg:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*27466*/       /*Scope*/ 28, /*->27495*/
/*27467*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*27469*/         OPC_EmitInteger, MVT::i32, 0, 
/*27472*/         OPC_EmitInteger, MVT::i32, 0, 
/*27475*/         OPC_EmitInteger, MVT::i32, 0, 
/*27478*/         OPC_EmitInteger, MVT::i32, 0, 
/*27481*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAD_F32), 0,
                      1/*#VTs*/, MVT::f32, 7/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 
                  // Src: (fadd:f32 f32:f32:$src2, (fmul:f32 f32:f32:$src0, f32:f32:$src1)) - Complexity = 6
                  // Dst: (V_MAD_F32:f32 ?:f32:$src0, ?:f32:$src1, ?:f32:$src2)
/*27495*/       0, /*End of Scope*/
/*27496*/     /*Scope*/ 120, /*->27617*/
/*27497*/       OPC_RecordChild1, // #1 = $src1
/*27498*/       OPC_CheckType, MVT::f32,
/*27500*/       OPC_Scope, 102, /*->27604*/ // 2 children in Scope
/*27502*/         OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*27504*/         OPC_EmitInteger, MVT::i32, 0, 
/*27507*/         OPC_EmitInteger, MVT::i32, 0, 
/*27510*/         OPC_EmitInteger, MVT::i32, 1, 
/*27513*/         OPC_EmitInteger, MVT::i32, 0, 
/*27516*/         OPC_EmitInteger, MVT::i32, 0, 
/*27519*/         OPC_EmitInteger, MVT::i32, 0, 
/*27522*/         OPC_EmitInteger, MVT::i32, 0, 
/*27525*/         OPC_EmitInteger, MVT::i32, 0, 
/*27528*/         OPC_EmitInteger, MVT::i32, 0, 
/*27531*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27543*/         OPC_EmitInteger, MVT::i32, 0, 
/*27546*/         OPC_EmitInteger, MVT::i32, 0, 
/*27549*/         OPC_EmitInteger, MVT::i32, 0, 
/*27552*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27564*/         OPC_EmitInteger, MVT::i32, 1, 
/*27567*/         OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*27571*/         OPC_EmitInteger, MVT::i32, 0, 
/*27574*/         OPC_EmitInteger, MVT::i32, 0, 
/*27577*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::ADD), 0,
                      1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (fadd:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1) - Complexity = 3
                  // Dst: (ADD:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1)
/*27604*/       /*Scope*/ 11, /*->27616*/
/*27605*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*27607*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ADD_F32_e32), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (fadd:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
                  // Dst: (V_ADD_F32_e32:f32 f32:f32:$src0, f32:f32:$src1)
/*27616*/       0, /*End of Scope*/
/*27617*/     0, /*End of Scope*/
/*27618*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 121,  TARGET_VAL(ISD::FMUL),// ->27743
/*27622*/   OPC_RecordChild0, // #0 = $src0
/*27623*/   OPC_RecordChild1, // #1 = $src1
/*27624*/   OPC_CheckType, MVT::f32,
/*27626*/   OPC_Scope, 102, /*->27730*/ // 2 children in Scope
/*27628*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*27630*/     OPC_EmitInteger, MVT::i32, 0, 
/*27633*/     OPC_EmitInteger, MVT::i32, 0, 
/*27636*/     OPC_EmitInteger, MVT::i32, 1, 
/*27639*/     OPC_EmitInteger, MVT::i32, 0, 
/*27642*/     OPC_EmitInteger, MVT::i32, 0, 
/*27645*/     OPC_EmitInteger, MVT::i32, 0, 
/*27648*/     OPC_EmitInteger, MVT::i32, 0, 
/*27651*/     OPC_EmitInteger, MVT::i32, 0, 
/*27654*/     OPC_EmitInteger, MVT::i32, 0, 
/*27657*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27669*/     OPC_EmitInteger, MVT::i32, 0, 
/*27672*/     OPC_EmitInteger, MVT::i32, 0, 
/*27675*/     OPC_EmitInteger, MVT::i32, 0, 
/*27678*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27690*/     OPC_EmitInteger, MVT::i32, 1, 
/*27693*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*27697*/     OPC_EmitInteger, MVT::i32, 0, 
/*27700*/     OPC_EmitInteger, MVT::i32, 0, 
/*27703*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                  1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (fmul:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1) - Complexity = 3
              // Dst: (MUL_IEEE:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1)
/*27730*/   /*Scope*/ 11, /*->27742*/
/*27731*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*27733*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
              // Dst: (V_MUL_F32_e32:f32 f32:f32:$src0, f32:f32:$src1)
/*27742*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 121,  TARGET_VAL(AMDGPUISD::FMAX),// ->27867
/*27746*/   OPC_RecordChild0, // #0 = $src0
/*27747*/   OPC_RecordChild1, // #1 = $src1
/*27748*/   OPC_CheckType, MVT::f32,
/*27750*/   OPC_Scope, 102, /*->27854*/ // 2 children in Scope
/*27752*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*27754*/     OPC_EmitInteger, MVT::i32, 0, 
/*27757*/     OPC_EmitInteger, MVT::i32, 0, 
/*27760*/     OPC_EmitInteger, MVT::i32, 1, 
/*27763*/     OPC_EmitInteger, MVT::i32, 0, 
/*27766*/     OPC_EmitInteger, MVT::i32, 0, 
/*27769*/     OPC_EmitInteger, MVT::i32, 0, 
/*27772*/     OPC_EmitInteger, MVT::i32, 0, 
/*27775*/     OPC_EmitInteger, MVT::i32, 0, 
/*27778*/     OPC_EmitInteger, MVT::i32, 0, 
/*27781*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27793*/     OPC_EmitInteger, MVT::i32, 0, 
/*27796*/     OPC_EmitInteger, MVT::i32, 0, 
/*27799*/     OPC_EmitInteger, MVT::i32, 0, 
/*27802*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27814*/     OPC_EmitInteger, MVT::i32, 1, 
/*27817*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*27821*/     OPC_EmitInteger, MVT::i32, 0, 
/*27824*/     OPC_EmitInteger, MVT::i32, 0, 
/*27827*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MAX), 0,
                  1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUfmax:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1) - Complexity = 3
              // Dst: (MAX:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1)
/*27854*/   /*Scope*/ 11, /*->27866*/
/*27855*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*27857*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAX_LEGACY_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (AMDGPUfmax:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
              // Dst: (V_MAX_LEGACY_F32_e32:f32 f32:f32:$src0, f32:f32:$src1)
/*27866*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 121,  TARGET_VAL(AMDGPUISD::FMIN),// ->27991
/*27870*/   OPC_RecordChild0, // #0 = $src0
/*27871*/   OPC_RecordChild1, // #1 = $src1
/*27872*/   OPC_CheckType, MVT::f32,
/*27874*/   OPC_Scope, 102, /*->27978*/ // 2 children in Scope
/*27876*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*27878*/     OPC_EmitInteger, MVT::i32, 0, 
/*27881*/     OPC_EmitInteger, MVT::i32, 0, 
/*27884*/     OPC_EmitInteger, MVT::i32, 1, 
/*27887*/     OPC_EmitInteger, MVT::i32, 0, 
/*27890*/     OPC_EmitInteger, MVT::i32, 0, 
/*27893*/     OPC_EmitInteger, MVT::i32, 0, 
/*27896*/     OPC_EmitInteger, MVT::i32, 0, 
/*27899*/     OPC_EmitInteger, MVT::i32, 0, 
/*27902*/     OPC_EmitInteger, MVT::i32, 0, 
/*27905*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27917*/     OPC_EmitInteger, MVT::i32, 0, 
/*27920*/     OPC_EmitInteger, MVT::i32, 0, 
/*27923*/     OPC_EmitInteger, MVT::i32, 0, 
/*27926*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27938*/     OPC_EmitInteger, MVT::i32, 1, 
/*27941*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*27945*/     OPC_EmitInteger, MVT::i32, 0, 
/*27948*/     OPC_EmitInteger, MVT::i32, 0, 
/*27951*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MIN), 0,
                  1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUfmin:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1) - Complexity = 3
              // Dst: (MIN:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1)
/*27978*/   /*Scope*/ 11, /*->27990*/
/*27979*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*27981*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MIN_LEGACY_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (AMDGPUfmin:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
              // Dst: (V_MIN_LEGACY_F32_e32:f32 f32:f32:$src0, f32:f32:$src1)
/*27990*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 85,  TARGET_VAL(AMDGPUISD::FRACT),// ->28079
/*27994*/   OPC_RecordChild0, // #0 = $src0
/*27995*/   OPC_CheckType, MVT::f32,
/*27997*/   OPC_Scope, 68, /*->28067*/ // 2 children in Scope
/*27999*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*28001*/     OPC_EmitInteger, MVT::i32, 1, 
/*28004*/     OPC_EmitInteger, MVT::i32, 0, 
/*28007*/     OPC_EmitInteger, MVT::i32, 0, 
/*28010*/     OPC_EmitInteger, MVT::i32, 0, 
/*28013*/     OPC_EmitInteger, MVT::i32, 0, 
/*28016*/     OPC_EmitInteger, MVT::i32, 0, 
/*28019*/     OPC_EmitInteger, MVT::i32, 0, 
/*28022*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28034*/     OPC_EmitInteger, MVT::i32, 1, 
/*28037*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*28041*/     OPC_EmitInteger, MVT::i32, 0, 
/*28044*/     OPC_EmitInteger, MVT::i32, 0, 
/*28047*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FRACT), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (AMDGPUfract:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (FRACT:f32 R600_Reg32:f32:$src0)
/*28067*/   /*Scope*/ 10, /*->28078*/
/*28068*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*28070*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_FRACT_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (AMDGPUfract:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_FRACT_F32_e32:f32 f32:f32:$src0)
/*28078*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 85,  TARGET_VAL(ISD::FCEIL),// ->28167
/*28082*/   OPC_RecordChild0, // #0 = $src0
/*28083*/   OPC_CheckType, MVT::f32,
/*28085*/   OPC_Scope, 68, /*->28155*/ // 2 children in Scope
/*28087*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*28089*/     OPC_EmitInteger, MVT::i32, 1, 
/*28092*/     OPC_EmitInteger, MVT::i32, 0, 
/*28095*/     OPC_EmitInteger, MVT::i32, 0, 
/*28098*/     OPC_EmitInteger, MVT::i32, 0, 
/*28101*/     OPC_EmitInteger, MVT::i32, 0, 
/*28104*/     OPC_EmitInteger, MVT::i32, 0, 
/*28107*/     OPC_EmitInteger, MVT::i32, 0, 
/*28110*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28122*/     OPC_EmitInteger, MVT::i32, 1, 
/*28125*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*28129*/     OPC_EmitInteger, MVT::i32, 0, 
/*28132*/     OPC_EmitInteger, MVT::i32, 0, 
/*28135*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CEIL), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (fceil:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (CEIL:f32 R600_Reg32:f32:$src0)
/*28155*/   /*Scope*/ 10, /*->28166*/
/*28156*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*28158*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CEIL_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fceil:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_CEIL_F32_e32:f32 f32:f32:$src0)
/*28166*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 85,  TARGET_VAL(ISD::FRINT),// ->28255
/*28170*/   OPC_RecordChild0, // #0 = $src0
/*28171*/   OPC_CheckType, MVT::f32,
/*28173*/   OPC_Scope, 68, /*->28243*/ // 2 children in Scope
/*28175*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*28177*/     OPC_EmitInteger, MVT::i32, 1, 
/*28180*/     OPC_EmitInteger, MVT::i32, 0, 
/*28183*/     OPC_EmitInteger, MVT::i32, 0, 
/*28186*/     OPC_EmitInteger, MVT::i32, 0, 
/*28189*/     OPC_EmitInteger, MVT::i32, 0, 
/*28192*/     OPC_EmitInteger, MVT::i32, 0, 
/*28195*/     OPC_EmitInteger, MVT::i32, 0, 
/*28198*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28210*/     OPC_EmitInteger, MVT::i32, 1, 
/*28213*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*28217*/     OPC_EmitInteger, MVT::i32, 0, 
/*28220*/     OPC_EmitInteger, MVT::i32, 0, 
/*28223*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RNDNE), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (frint:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (RNDNE:f32 R600_Reg32:f32:$src0)
/*28243*/   /*Scope*/ 10, /*->28254*/
/*28244*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*28246*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_RNDNE_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (frint:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_RNDNE_F32_e32:f32 f32:f32:$src0)
/*28254*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 85,  TARGET_VAL(ISD::FFLOOR),// ->28343
/*28258*/   OPC_RecordChild0, // #0 = $src0
/*28259*/   OPC_CheckType, MVT::f32,
/*28261*/   OPC_Scope, 68, /*->28331*/ // 2 children in Scope
/*28263*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*28265*/     OPC_EmitInteger, MVT::i32, 1, 
/*28268*/     OPC_EmitInteger, MVT::i32, 0, 
/*28271*/     OPC_EmitInteger, MVT::i32, 0, 
/*28274*/     OPC_EmitInteger, MVT::i32, 0, 
/*28277*/     OPC_EmitInteger, MVT::i32, 0, 
/*28280*/     OPC_EmitInteger, MVT::i32, 0, 
/*28283*/     OPC_EmitInteger, MVT::i32, 0, 
/*28286*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28298*/     OPC_EmitInteger, MVT::i32, 1, 
/*28301*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*28305*/     OPC_EmitInteger, MVT::i32, 0, 
/*28308*/     OPC_EmitInteger, MVT::i32, 0, 
/*28311*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FLOOR), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (ffloor:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (FLOOR:f32 R600_Reg32:f32:$src0)
/*28331*/   /*Scope*/ 10, /*->28342*/
/*28332*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*28334*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_FLOOR_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (ffloor:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_FLOOR_F32_e32:f32 f32:f32:$src0)
/*28342*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 95|128,2/*351*/,  TARGET_VAL(AMDGPUISD::DOT4),// ->28698
/*28347*/   OPC_RecordChild0, // #0 = $src0_X
/*28348*/   OPC_RecordChild1, // #1 = $src1_X
/*28349*/   OPC_RecordChild2, // #2 = $src0_Y
/*28350*/   OPC_RecordChild3, // #3 = $src1_Y
/*28351*/   OPC_RecordChild4, // #4 = $src0_Z
/*28352*/   OPC_RecordChild5, // #5 = $src1_Z
/*28353*/   OPC_RecordChild6, // #6 = $src0_W
/*28354*/   OPC_RecordChild7, // #7 = $src1_W
/*28355*/   OPC_CheckType, MVT::f32,
/*28357*/   OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*28359*/   OPC_EmitInteger, MVT::i32, 0, 
/*28362*/   OPC_EmitInteger, MVT::i32, 0, 
/*28365*/   OPC_EmitInteger, MVT::i32, 1, 
/*28368*/   OPC_EmitInteger, MVT::i32, 0, 
/*28371*/   OPC_EmitInteger, MVT::i32, 0, 
/*28374*/   OPC_EmitInteger, MVT::i32, 0, 
/*28377*/   OPC_EmitInteger, MVT::i32, 0, 
/*28380*/   OPC_EmitInteger, MVT::i32, 0, 
/*28383*/   OPC_EmitInteger, MVT::i32, 0, 
/*28386*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28398*/   OPC_EmitInteger, MVT::i32, 0, 
/*28401*/   OPC_EmitInteger, MVT::i32, 0, 
/*28404*/   OPC_EmitInteger, MVT::i32, 0, 
/*28407*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28419*/   OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*28423*/   OPC_EmitInteger, MVT::i32, 0, 
/*28426*/   OPC_EmitInteger, MVT::i32, 0, 
/*28429*/   OPC_EmitInteger, MVT::i32, 1, 
/*28432*/   OPC_EmitInteger, MVT::i32, 0, 
/*28435*/   OPC_EmitInteger, MVT::i32, 0, 
/*28438*/   OPC_EmitInteger, MVT::i32, 0, 
/*28441*/   OPC_EmitInteger, MVT::i32, 0, 
/*28444*/   OPC_EmitInteger, MVT::i32, 0, 
/*28447*/   OPC_EmitInteger, MVT::i32, 0, 
/*28450*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28462*/   OPC_EmitInteger, MVT::i32, 0, 
/*28465*/   OPC_EmitInteger, MVT::i32, 0, 
/*28468*/   OPC_EmitInteger, MVT::i32, 0, 
/*28471*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28483*/   OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*28487*/   OPC_EmitInteger, MVT::i32, 0, 
/*28490*/   OPC_EmitInteger, MVT::i32, 0, 
/*28493*/   OPC_EmitInteger, MVT::i32, 1, 
/*28496*/   OPC_EmitInteger, MVT::i32, 0, 
/*28499*/   OPC_EmitInteger, MVT::i32, 0, 
/*28502*/   OPC_EmitInteger, MVT::i32, 0, 
/*28505*/   OPC_EmitInteger, MVT::i32, 0, 
/*28508*/   OPC_EmitInteger, MVT::i32, 0, 
/*28511*/   OPC_EmitInteger, MVT::i32, 0, 
/*28514*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28526*/   OPC_EmitInteger, MVT::i32, 0, 
/*28529*/   OPC_EmitInteger, MVT::i32, 0, 
/*28532*/   OPC_EmitInteger, MVT::i32, 0, 
/*28535*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28547*/   OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*28551*/   OPC_EmitInteger, MVT::i32, 0, 
/*28554*/   OPC_EmitInteger, MVT::i32, 0, 
/*28557*/   OPC_EmitInteger, MVT::i32, 1, 
/*28560*/   OPC_EmitInteger, MVT::i32, 0, 
/*28563*/   OPC_EmitInteger, MVT::i32, 0, 
/*28566*/   OPC_EmitInteger, MVT::i32, 0, 
/*28569*/   OPC_EmitInteger, MVT::i32, 0, 
/*28572*/   OPC_EmitInteger, MVT::i32, 0, 
/*28575*/   OPC_EmitInteger, MVT::i32, 0, 
/*28578*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28590*/   OPC_EmitInteger, MVT::i32, 0, 
/*28593*/   OPC_EmitInteger, MVT::i32, 0, 
/*28596*/   OPC_EmitInteger, MVT::i32, 0, 
/*28599*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28611*/   OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*28615*/   OPC_EmitInteger, MVT::i32, 0, 
/*28618*/   OPC_EmitInteger, MVT::i32, 0, 
/*28621*/   OPC_MorphNodeTo, TARGET_VAL(AMDGPU::DOT_4), 0,
                1/*#VTs*/, MVT::f32, 70/*#Ops*/, 8, 9, 10, 11, 12, 13, 0, 14, 15, 16, 17, 1, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 2, 29, 30, 31, 32, 3, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 4, 44, 45, 46, 47, 5, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 6, 59, 60, 61, 62, 7, 63, 64, 65, 66, 67, 68, 69, 
            // Src: (DOT4:f32 R600_TReg32_X:f32:$src0_X, R600_TReg32_X:f32:$src1_X, R600_TReg32_Y:f32:$src0_Y, R600_TReg32_Y:f32:$src1_Y, R600_TReg32_Z:f32:$src0_Z, R600_TReg32_Z:f32:$src1_Z, R600_TReg32_W:f32:$src0_W, R600_TReg32_W:f32:$src1_W) - Complexity = 3
            // Dst: (DOT_4:f32 R600_TReg32_X:f32:$src0_X, R600_TReg32_X:f32:$src1_X, R600_TReg32_Y:f32:$src0_Y, R600_TReg32_Y:f32:$src1_Y, R600_TReg32_Z:f32:$src0_Z, R600_TReg32_Z:f32:$src1_Z, R600_TReg32_W:f32:$src0_W, R600_TReg32_W:f32:$src1_W)
          /*SwitchOpcode*/ 95|128,1/*223*/,  TARGET_VAL(ISD::FEXP2),// ->28925
/*28702*/   OPC_RecordChild0, // #0 = $src0
/*28703*/   OPC_CheckType, MVT::f32,
/*28705*/   OPC_Scope, 68, /*->28775*/ // 4 children in Scope
/*28707*/     OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*28709*/     OPC_EmitInteger, MVT::i32, 1, 
/*28712*/     OPC_EmitInteger, MVT::i32, 0, 
/*28715*/     OPC_EmitInteger, MVT::i32, 0, 
/*28718*/     OPC_EmitInteger, MVT::i32, 0, 
/*28721*/     OPC_EmitInteger, MVT::i32, 0, 
/*28724*/     OPC_EmitInteger, MVT::i32, 0, 
/*28727*/     OPC_EmitInteger, MVT::i32, 0, 
/*28730*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28742*/     OPC_EmitInteger, MVT::i32, 1, 
/*28745*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*28749*/     OPC_EmitInteger, MVT::i32, 0, 
/*28752*/     OPC_EmitInteger, MVT::i32, 0, 
/*28755*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_r600), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (fexp2:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (EXP_IEEE_r600:f32 R600_Reg32:f32:$src0)
/*28775*/   /*Scope*/ 68, /*->28844*/
/*28776*/     OPC_CheckPatternPredicate, 4, // (Subtarget.device()->getGeneration() >= AMDGPUDeviceInfo::HD5XXX && Subtarget.device()->getGeneration() < AMDGPUDeviceInfo::HD7XXX && Subtarget.device()->getDeviceFlag() != OCL_DEVICE_CAYMAN)
/*28778*/     OPC_EmitInteger, MVT::i32, 1, 
/*28781*/     OPC_EmitInteger, MVT::i32, 0, 
/*28784*/     OPC_EmitInteger, MVT::i32, 0, 
/*28787*/     OPC_EmitInteger, MVT::i32, 0, 
/*28790*/     OPC_EmitInteger, MVT::i32, 0, 
/*28793*/     OPC_EmitInteger, MVT::i32, 0, 
/*28796*/     OPC_EmitInteger, MVT::i32, 0, 
/*28799*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28811*/     OPC_EmitInteger, MVT::i32, 1, 
/*28814*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*28818*/     OPC_EmitInteger, MVT::i32, 0, 
/*28821*/     OPC_EmitInteger, MVT::i32, 0, 
/*28824*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_eg), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (fexp2:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (EXP_IEEE_eg:f32 R600_Reg32:f32:$src0)
/*28844*/   /*Scope*/ 68, /*->28913*/
/*28845*/     OPC_CheckPatternPredicate, 5, // (Subtarget.device()->getDeviceFlag() == OCL_DEVICE_CAYMAN)
/*28847*/     OPC_EmitInteger, MVT::i32, 1, 
/*28850*/     OPC_EmitInteger, MVT::i32, 0, 
/*28853*/     OPC_EmitInteger, MVT::i32, 0, 
/*28856*/     OPC_EmitInteger, MVT::i32, 0, 
/*28859*/     OPC_EmitInteger, MVT::i32, 0, 
/*28862*/     OPC_EmitInteger, MVT::i32, 0, 
/*28865*/     OPC_EmitInteger, MVT::i32, 0, 
/*28868*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28880*/     OPC_EmitInteger, MVT::i32, 1, 
/*28883*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*28887*/     OPC_EmitInteger, MVT::i32, 0, 
/*28890*/     OPC_EmitInteger, MVT::i32, 0, 
/*28893*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_cm), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (fexp2:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (EXP_IEEE_cm:f32 R600_Reg32:f32:$src0)
/*28913*/   /*Scope*/ 10, /*->28924*/
/*28914*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*28916*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_EXP_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fexp2:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_EXP_F32_e32:f32 f32:f32:$src0)
/*28924*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 95|128,1/*223*/,  TARGET_VAL(ISD::FLOG2),// ->29152
/*28929*/   OPC_RecordChild0, // #0 = $src0
/*28930*/   OPC_CheckType, MVT::f32,
/*28932*/   OPC_Scope, 68, /*->29002*/ // 4 children in Scope
/*28934*/     OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*28936*/     OPC_EmitInteger, MVT::i32, 1, 
/*28939*/     OPC_EmitInteger, MVT::i32, 0, 
/*28942*/     OPC_EmitInteger, MVT::i32, 0, 
/*28945*/     OPC_EmitInteger, MVT::i32, 0, 
/*28948*/     OPC_EmitInteger, MVT::i32, 0, 
/*28951*/     OPC_EmitInteger, MVT::i32, 0, 
/*28954*/     OPC_EmitInteger, MVT::i32, 0, 
/*28957*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28969*/     OPC_EmitInteger, MVT::i32, 1, 
/*28972*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*28976*/     OPC_EmitInteger, MVT::i32, 0, 
/*28979*/     OPC_EmitInteger, MVT::i32, 0, 
/*28982*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LOG_IEEE_r600), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (flog2:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (LOG_IEEE_r600:f32 R600_Reg32:f32:$src0)
/*29002*/   /*Scope*/ 68, /*->29071*/
/*29003*/     OPC_CheckPatternPredicate, 4, // (Subtarget.device()->getGeneration() >= AMDGPUDeviceInfo::HD5XXX && Subtarget.device()->getGeneration() < AMDGPUDeviceInfo::HD7XXX && Subtarget.device()->getDeviceFlag() != OCL_DEVICE_CAYMAN)
/*29005*/     OPC_EmitInteger, MVT::i32, 1, 
/*29008*/     OPC_EmitInteger, MVT::i32, 0, 
/*29011*/     OPC_EmitInteger, MVT::i32, 0, 
/*29014*/     OPC_EmitInteger, MVT::i32, 0, 
/*29017*/     OPC_EmitInteger, MVT::i32, 0, 
/*29020*/     OPC_EmitInteger, MVT::i32, 0, 
/*29023*/     OPC_EmitInteger, MVT::i32, 0, 
/*29026*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29038*/     OPC_EmitInteger, MVT::i32, 1, 
/*29041*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*29045*/     OPC_EmitInteger, MVT::i32, 0, 
/*29048*/     OPC_EmitInteger, MVT::i32, 0, 
/*29051*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LOG_IEEE_eg), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (flog2:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (LOG_IEEE_eg:f32 R600_Reg32:f32:$src0)
/*29071*/   /*Scope*/ 68, /*->29140*/
/*29072*/     OPC_CheckPatternPredicate, 5, // (Subtarget.device()->getDeviceFlag() == OCL_DEVICE_CAYMAN)
/*29074*/     OPC_EmitInteger, MVT::i32, 1, 
/*29077*/     OPC_EmitInteger, MVT::i32, 0, 
/*29080*/     OPC_EmitInteger, MVT::i32, 0, 
/*29083*/     OPC_EmitInteger, MVT::i32, 0, 
/*29086*/     OPC_EmitInteger, MVT::i32, 0, 
/*29089*/     OPC_EmitInteger, MVT::i32, 0, 
/*29092*/     OPC_EmitInteger, MVT::i32, 0, 
/*29095*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29107*/     OPC_EmitInteger, MVT::i32, 1, 
/*29110*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*29114*/     OPC_EmitInteger, MVT::i32, 0, 
/*29117*/     OPC_EmitInteger, MVT::i32, 0, 
/*29120*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LOG_IEEE_cm), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (flog2:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (LOG_IEEE_cm:f32 R600_Reg32:f32:$src0)
/*29140*/   /*Scope*/ 10, /*->29151*/
/*29141*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*29143*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_LOG_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (flog2:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_LOG_F32_e32:f32 f32:f32:$src0)
/*29151*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 28|128,1/*156*/,  TARGET_VAL(ISD::SINT_TO_FP),// ->29312
/*29156*/   OPC_RecordChild0, // #0 = $src0
/*29157*/   OPC_CheckChild0Type, MVT::i32,
/*29159*/   OPC_CheckType, MVT::f32,
/*29161*/   OPC_Scope, 68, /*->29231*/ // 3 children in Scope
/*29163*/     OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*29165*/     OPC_EmitInteger, MVT::i32, 1, 
/*29168*/     OPC_EmitInteger, MVT::i32, 0, 
/*29171*/     OPC_EmitInteger, MVT::i32, 0, 
/*29174*/     OPC_EmitInteger, MVT::i32, 0, 
/*29177*/     OPC_EmitInteger, MVT::i32, 0, 
/*29180*/     OPC_EmitInteger, MVT::i32, 0, 
/*29183*/     OPC_EmitInteger, MVT::i32, 0, 
/*29186*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29198*/     OPC_EmitInteger, MVT::i32, 1, 
/*29201*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*29205*/     OPC_EmitInteger, MVT::i32, 0, 
/*29208*/     OPC_EmitInteger, MVT::i32, 0, 
/*29211*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::INT_TO_FLT_r600), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (sint_to_fp:f32 R600_Reg32:i32:$src0) - Complexity = 3
              // Dst: (INT_TO_FLT_r600:f32 R600_Reg32:i32:$src0)
/*29231*/   /*Scope*/ 68, /*->29300*/
/*29232*/     OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*29234*/     OPC_EmitInteger, MVT::i32, 1, 
/*29237*/     OPC_EmitInteger, MVT::i32, 0, 
/*29240*/     OPC_EmitInteger, MVT::i32, 0, 
/*29243*/     OPC_EmitInteger, MVT::i32, 0, 
/*29246*/     OPC_EmitInteger, MVT::i32, 0, 
/*29249*/     OPC_EmitInteger, MVT::i32, 0, 
/*29252*/     OPC_EmitInteger, MVT::i32, 0, 
/*29255*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29267*/     OPC_EmitInteger, MVT::i32, 1, 
/*29270*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*29274*/     OPC_EmitInteger, MVT::i32, 0, 
/*29277*/     OPC_EmitInteger, MVT::i32, 0, 
/*29280*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::INT_TO_FLT_eg), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (sint_to_fp:f32 R600_Reg32:i32:$src0) - Complexity = 3
              // Dst: (INT_TO_FLT_eg:f32 R600_Reg32:i32:$src0)
/*29300*/   /*Scope*/ 10, /*->29311*/
/*29301*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*29303*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_F32_I32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (sint_to_fp:f32 i32:i32:$src0) - Complexity = 3
              // Dst: (V_CVT_F32_I32_e32:f32 i32:i32:$src0)
/*29311*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 28|128,1/*156*/,  TARGET_VAL(ISD::UINT_TO_FP),// ->29472
/*29316*/   OPC_RecordChild0, // #0 = $src0
/*29317*/   OPC_CheckChild0Type, MVT::i32,
/*29319*/   OPC_CheckType, MVT::f32,
/*29321*/   OPC_Scope, 68, /*->29391*/ // 3 children in Scope
/*29323*/     OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*29325*/     OPC_EmitInteger, MVT::i32, 1, 
/*29328*/     OPC_EmitInteger, MVT::i32, 0, 
/*29331*/     OPC_EmitInteger, MVT::i32, 0, 
/*29334*/     OPC_EmitInteger, MVT::i32, 0, 
/*29337*/     OPC_EmitInteger, MVT::i32, 0, 
/*29340*/     OPC_EmitInteger, MVT::i32, 0, 
/*29343*/     OPC_EmitInteger, MVT::i32, 0, 
/*29346*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29358*/     OPC_EmitInteger, MVT::i32, 1, 
/*29361*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*29365*/     OPC_EmitInteger, MVT::i32, 0, 
/*29368*/     OPC_EmitInteger, MVT::i32, 0, 
/*29371*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::UINT_TO_FLT_r600), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (uint_to_fp:f32 R600_Reg32:i32:$src0) - Complexity = 3
              // Dst: (UINT_TO_FLT_r600:f32 R600_Reg32:i32:$src0)
/*29391*/   /*Scope*/ 68, /*->29460*/
/*29392*/     OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*29394*/     OPC_EmitInteger, MVT::i32, 1, 
/*29397*/     OPC_EmitInteger, MVT::i32, 0, 
/*29400*/     OPC_EmitInteger, MVT::i32, 0, 
/*29403*/     OPC_EmitInteger, MVT::i32, 0, 
/*29406*/     OPC_EmitInteger, MVT::i32, 0, 
/*29409*/     OPC_EmitInteger, MVT::i32, 0, 
/*29412*/     OPC_EmitInteger, MVT::i32, 0, 
/*29415*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29427*/     OPC_EmitInteger, MVT::i32, 1, 
/*29430*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*29434*/     OPC_EmitInteger, MVT::i32, 0, 
/*29437*/     OPC_EmitInteger, MVT::i32, 0, 
/*29440*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::UINT_TO_FLT_eg), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (uint_to_fp:f32 R600_Reg32:i32:$src0) - Complexity = 3
              // Dst: (UINT_TO_FLT_eg:f32 R600_Reg32:i32:$src0)
/*29460*/   /*Scope*/ 10, /*->29471*/
/*29461*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*29463*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_F32_U32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (uint_to_fp:f32 i32:i32:$src0) - Complexity = 3
              // Dst: (V_CVT_F32_U32_e32:f32 i32:i32:$src0)
/*29471*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::FSUB),// ->29490
/*29475*/   OPC_RecordChild0, // #0 = $src0
/*29476*/   OPC_RecordChild1, // #1 = $src1
/*29477*/   OPC_CheckType, MVT::f32,
/*29479*/   OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*29481*/   OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_SUB_F32_e32), 0,
                1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
            // Src: (fsub:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
            // Dst: (V_SUB_F32_e32:f32 f32:f32:$src0, f32:f32:$src1)
          /*SwitchOpcode*/ 47,  TARGET_VAL(ISD::FABS),// ->29540
/*29493*/   OPC_RecordChild0, // #0 = $src
/*29494*/   OPC_CheckType, MVT::f32,
/*29496*/   OPC_Scope, 30, /*->29528*/ // 2 children in Scope
/*29498*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*29500*/     OPC_EmitInteger, MVT::i32, 0, 
/*29503*/     OPC_EmitInteger, MVT::i32, 1, 
/*29506*/     OPC_EmitInteger, MVT::i32, 0, 
/*29509*/     OPC_EmitInteger, MVT::i32, 0, 
/*29512*/     OPC_EmitInteger, MVT::i32, 0, 
/*29515*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ADD_F32_e64), 0,
                  1/*#VTs*/, MVT::f32, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
              // Src: (fabs:f32 f32:f32:$src) - Complexity = 3
              // Dst: (V_ADD_F32_e64:f32 ?:f32:$src, 0:i32, 1:i32, 0:i32, 0:i32, 0:i32)
/*29528*/   /*Scope*/ 10, /*->29539*/
/*29529*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*29531*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FABS_R600), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (FABS_R600:f32 f32:f32:$src0)
/*29539*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(ISD::FNEG),// ->29590
/*29543*/   OPC_RecordChild0, // #0 = $src
/*29544*/   OPC_CheckType, MVT::f32,
/*29546*/   OPC_Scope, 30, /*->29578*/ // 2 children in Scope
/*29548*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*29550*/     OPC_EmitInteger, MVT::i32, 0, 
/*29553*/     OPC_EmitInteger, MVT::i32, 0, 
/*29556*/     OPC_EmitInteger, MVT::i32, 0, 
/*29559*/     OPC_EmitInteger, MVT::i32, 0, 
/*29562*/     OPC_EmitInteger, MVT::i32, 1, 
/*29565*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ADD_F32_e64), 0,
                  1/*#VTs*/, MVT::f32, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
              // Src: (fneg:f32 f32:f32:$src) - Complexity = 3
              // Dst: (V_ADD_F32_e64:f32 ?:f32:$src, 0:i32, 0:i32, 0:i32, 0:i32, 1:i32)
/*29578*/   /*Scope*/ 10, /*->29589*/
/*29579*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*29581*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FNEG_R600), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fneg:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (FNEG_R600:f32 f32:f32:$src0)
/*29589*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::ConstantFP),// ->29624
/*29593*/   OPC_RecordNode,   // #0 = $imm
/*29594*/   OPC_CheckType, MVT::f32,
/*29596*/   OPC_Scope, 12, /*->29610*/ // 2 children in Scope
/*29598*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*29600*/     OPC_EmitConvertToTarget, 0,
/*29602*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
              // Src: (fpimm:f32):$imm - Complexity = 3
              // Dst: (V_MOV_B32_e32:f32 (fpimm:f32):$imm)
/*29610*/   /*Scope*/ 12, /*->29623*/
/*29611*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*29613*/     OPC_EmitConvertToTarget, 0,
/*29615*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MOV_IMM_F32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
              // Src: (fpimm:f32):$val - Complexity = 3
              // Dst: (MOV_IMM_F32:f32 (fpimm:f32):$val)
/*29623*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 3|128,4/*515*/,  TARGET_VAL(ISD::FSQRT),// ->30143
/*29628*/   OPC_RecordChild0, // #0 = $src
/*29629*/   OPC_CheckType, MVT::f32,
/*29631*/   OPC_Scope, 40|128,1/*168*/, /*->29802*/ // 3 children in Scope
/*29634*/     OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*29636*/     OPC_EmitInteger, MVT::i32, 0, 
/*29639*/     OPC_EmitInteger, MVT::i32, 0, 
/*29642*/     OPC_EmitInteger, MVT::i32, 1, 
/*29645*/     OPC_EmitInteger, MVT::i32, 0, 
/*29648*/     OPC_EmitInteger, MVT::i32, 0, 
/*29651*/     OPC_EmitInteger, MVT::i32, 0, 
/*29654*/     OPC_EmitInteger, MVT::i32, 0, 
/*29657*/     OPC_EmitInteger, MVT::i32, 0, 
/*29660*/     OPC_EmitInteger, MVT::i32, 0, 
/*29663*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29675*/     OPC_EmitInteger, MVT::i32, 1, 
/*29678*/     OPC_EmitInteger, MVT::i32, 0, 
/*29681*/     OPC_EmitInteger, MVT::i32, 0, 
/*29684*/     OPC_EmitInteger, MVT::i32, 0, 
/*29687*/     OPC_EmitInteger, MVT::i32, 0, 
/*29690*/     OPC_EmitInteger, MVT::i32, 0, 
/*29693*/     OPC_EmitInteger, MVT::i32, 0, 
/*29696*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29708*/     OPC_EmitInteger, MVT::i32, 1, 
/*29711*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*29715*/     OPC_EmitInteger, MVT::i32, 0, 
/*29718*/     OPC_EmitInteger, MVT::i32, 0, 
/*29721*/     OPC_EmitNode, TARGET_VAL(AMDGPU::RECIPSQRT_CLAMPED_r600), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*29741*/     OPC_EmitInteger, MVT::i32, 0, 
/*29744*/     OPC_EmitInteger, MVT::i32, 0, 
/*29747*/     OPC_EmitInteger, MVT::i32, 0, 
/*29750*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29762*/     OPC_EmitInteger, MVT::i32, 1, 
/*29765*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*29769*/     OPC_EmitInteger, MVT::i32, 0, 
/*29772*/     OPC_EmitInteger, MVT::i32, 0, 
/*29775*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL), 0,
                  1/*#VTs*/, MVT::f32, 20/*#Ops*/, 1, 2, 3, 4, 5, 6, 0, 7, 8, 9, 10, 23, 24, 25, 26, 27, 28, 29, 30, 31, 
              // Src: (fsqrt:f32 f32:f32:$src) - Complexity = 3
              // Dst: (MUL:f32 ?:f32:$src, (RECIPSQRT_CLAMPED_r600:i32 ?:f32:$src))
/*29802*/   /*Scope*/ 40|128,1/*168*/, /*->29972*/
/*29804*/     OPC_CheckPatternPredicate, 4, // (Subtarget.device()->getGeneration() >= AMDGPUDeviceInfo::HD5XXX && Subtarget.device()->getGeneration() < AMDGPUDeviceInfo::HD7XXX && Subtarget.device()->getDeviceFlag() != OCL_DEVICE_CAYMAN)
/*29806*/     OPC_EmitInteger, MVT::i32, 0, 
/*29809*/     OPC_EmitInteger, MVT::i32, 0, 
/*29812*/     OPC_EmitInteger, MVT::i32, 1, 
/*29815*/     OPC_EmitInteger, MVT::i32, 0, 
/*29818*/     OPC_EmitInteger, MVT::i32, 0, 
/*29821*/     OPC_EmitInteger, MVT::i32, 0, 
/*29824*/     OPC_EmitInteger, MVT::i32, 0, 
/*29827*/     OPC_EmitInteger, MVT::i32, 0, 
/*29830*/     OPC_EmitInteger, MVT::i32, 0, 
/*29833*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29845*/     OPC_EmitInteger, MVT::i32, 1, 
/*29848*/     OPC_EmitInteger, MVT::i32, 0, 
/*29851*/     OPC_EmitInteger, MVT::i32, 0, 
/*29854*/     OPC_EmitInteger, MVT::i32, 0, 
/*29857*/     OPC_EmitInteger, MVT::i32, 0, 
/*29860*/     OPC_EmitInteger, MVT::i32, 0, 
/*29863*/     OPC_EmitInteger, MVT::i32, 0, 
/*29866*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29878*/     OPC_EmitInteger, MVT::i32, 1, 
/*29881*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*29885*/     OPC_EmitInteger, MVT::i32, 0, 
/*29888*/     OPC_EmitInteger, MVT::i32, 0, 
/*29891*/     OPC_EmitNode, TARGET_VAL(AMDGPU::RECIPSQRT_CLAMPED_eg), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*29911*/     OPC_EmitInteger, MVT::i32, 0, 
/*29914*/     OPC_EmitInteger, MVT::i32, 0, 
/*29917*/     OPC_EmitInteger, MVT::i32, 0, 
/*29920*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29932*/     OPC_EmitInteger, MVT::i32, 1, 
/*29935*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*29939*/     OPC_EmitInteger, MVT::i32, 0, 
/*29942*/     OPC_EmitInteger, MVT::i32, 0, 
/*29945*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL), 0,
                  1/*#VTs*/, MVT::f32, 20/*#Ops*/, 1, 2, 3, 4, 5, 6, 0, 7, 8, 9, 10, 23, 24, 25, 26, 27, 28, 29, 30, 31, 
              // Src: (fsqrt:f32 f32:f32:$src) - Complexity = 3
              // Dst: (MUL:f32 ?:f32:$src, (RECIPSQRT_CLAMPED_eg:i32 ?:f32:$src))
/*29972*/   /*Scope*/ 40|128,1/*168*/, /*->30142*/
/*29974*/     OPC_CheckPatternPredicate, 5, // (Subtarget.device()->getDeviceFlag() == OCL_DEVICE_CAYMAN)
/*29976*/     OPC_EmitInteger, MVT::i32, 0, 
/*29979*/     OPC_EmitInteger, MVT::i32, 0, 
/*29982*/     OPC_EmitInteger, MVT::i32, 1, 
/*29985*/     OPC_EmitInteger, MVT::i32, 0, 
/*29988*/     OPC_EmitInteger, MVT::i32, 0, 
/*29991*/     OPC_EmitInteger, MVT::i32, 0, 
/*29994*/     OPC_EmitInteger, MVT::i32, 0, 
/*29997*/     OPC_EmitInteger, MVT::i32, 0, 
/*30000*/     OPC_EmitInteger, MVT::i32, 0, 
/*30003*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30015*/     OPC_EmitInteger, MVT::i32, 1, 
/*30018*/     OPC_EmitInteger, MVT::i32, 0, 
/*30021*/     OPC_EmitInteger, MVT::i32, 0, 
/*30024*/     OPC_EmitInteger, MVT::i32, 0, 
/*30027*/     OPC_EmitInteger, MVT::i32, 0, 
/*30030*/     OPC_EmitInteger, MVT::i32, 0, 
/*30033*/     OPC_EmitInteger, MVT::i32, 0, 
/*30036*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30048*/     OPC_EmitInteger, MVT::i32, 1, 
/*30051*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*30055*/     OPC_EmitInteger, MVT::i32, 0, 
/*30058*/     OPC_EmitInteger, MVT::i32, 0, 
/*30061*/     OPC_EmitNode, TARGET_VAL(AMDGPU::RECIPSQRT_CLAMPED_cm), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*30081*/     OPC_EmitInteger, MVT::i32, 0, 
/*30084*/     OPC_EmitInteger, MVT::i32, 0, 
/*30087*/     OPC_EmitInteger, MVT::i32, 0, 
/*30090*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30102*/     OPC_EmitInteger, MVT::i32, 1, 
/*30105*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*30109*/     OPC_EmitInteger, MVT::i32, 0, 
/*30112*/     OPC_EmitInteger, MVT::i32, 0, 
/*30115*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL), 0,
                  1/*#VTs*/, MVT::f32, 20/*#Ops*/, 1, 2, 3, 4, 5, 6, 0, 7, 8, 9, 10, 23, 24, 25, 26, 27, 28, 29, 30, 31, 
              // Src: (fsqrt:f32 f32:f32:$src) - Complexity = 3
              // Dst: (MUL:f32 R600_Reg32:f32:$src, (RECIPSQRT_CLAMPED_cm:i32 ?:f32:$src))
/*30142*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 102|128,5/*742*/,  TARGET_VAL(ISD::FPOW),// ->30889
/*30147*/   OPC_RecordChild0, // #0 = $src0
/*30148*/   OPC_RecordChild1, // #1 = $src1
/*30149*/   OPC_CheckType, MVT::f32,
/*30151*/   OPC_Scope, 106|128,1/*234*/, /*->30388*/ // 4 children in Scope
/*30154*/     OPC_CheckPatternPredicate, 1, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX)
/*30156*/     OPC_EmitInteger, MVT::i32, 1, 
/*30159*/     OPC_EmitInteger, MVT::i32, 0, 
/*30162*/     OPC_EmitInteger, MVT::i32, 0, 
/*30165*/     OPC_EmitInteger, MVT::i32, 0, 
/*30168*/     OPC_EmitInteger, MVT::i32, 0, 
/*30171*/     OPC_EmitInteger, MVT::i32, 0, 
/*30174*/     OPC_EmitInteger, MVT::i32, 1, 
/*30177*/     OPC_EmitInteger, MVT::i32, 0, 
/*30180*/     OPC_EmitInteger, MVT::i32, 0, 
/*30183*/     OPC_EmitInteger, MVT::i32, 0, 
/*30186*/     OPC_EmitInteger, MVT::i32, 0, 
/*30189*/     OPC_EmitInteger, MVT::i32, 0, 
/*30192*/     OPC_EmitInteger, MVT::i32, 0, 
/*30195*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30207*/     OPC_EmitInteger, MVT::i32, 1, 
/*30210*/     OPC_EmitInteger, MVT::i32, 0, 
/*30213*/     OPC_EmitInteger, MVT::i32, 0, 
/*30216*/     OPC_EmitInteger, MVT::i32, 0, 
/*30219*/     OPC_EmitInteger, MVT::i32, 0, 
/*30222*/     OPC_EmitInteger, MVT::i32, 0, 
/*30225*/     OPC_EmitInteger, MVT::i32, 0, 
/*30228*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30240*/     OPC_EmitInteger, MVT::i32, 1, 
/*30243*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*30247*/     OPC_EmitInteger, MVT::i32, 0, 
/*30250*/     OPC_EmitInteger, MVT::i32, 0, 
/*30253*/     OPC_EmitNode, TARGET_VAL(AMDGPU::LOG_IEEE_r600), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 16, 17, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/*30273*/     OPC_EmitInteger, MVT::i32, 0, 
/*30276*/     OPC_EmitInteger, MVT::i32, 0, 
/*30279*/     OPC_EmitInteger, MVT::i32, 0, 
/*30282*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30294*/     OPC_EmitInteger, MVT::i32, 1, 
/*30297*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*30301*/     OPC_EmitInteger, MVT::i32, 0, 
/*30304*/     OPC_EmitInteger, MVT::i32, 0, 
/*30307*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MUL), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 1, 12, 13, 14, 15, 28, 29, 30, 31, 32, 33, 34, 35, 36,  // Results = #37
/*30334*/     OPC_EmitInteger, MVT::i32, 0, 
/*30337*/     OPC_EmitInteger, MVT::i32, 0, 
/*30340*/     OPC_EmitInteger, MVT::i32, 0, 
/*30343*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30355*/     OPC_EmitInteger, MVT::i32, 1, 
/*30358*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*30362*/     OPC_EmitInteger, MVT::i32, 0, 
/*30365*/     OPC_EmitInteger, MVT::i32, 0, 
/*30368*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_r600), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 2, 3, 4, 5, 37, 38, 39, 40, 41, 42, 43, 44, 45, 
              // Src: (fpow:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
              // Dst: (EXP_IEEE_r600:f32 (MUL:i32 f32:f32:$src1, (LOG_IEEE_r600:i32 f32:f32:$src0)))
/*30388*/   /*Scope*/ 106|128,1/*234*/, /*->30624*/
/*30390*/     OPC_CheckPatternPredicate, 4, // (Subtarget.device()->getGeneration() >= AMDGPUDeviceInfo::HD5XXX && Subtarget.device()->getGeneration() < AMDGPUDeviceInfo::HD7XXX && Subtarget.device()->getDeviceFlag() != OCL_DEVICE_CAYMAN)
/*30392*/     OPC_EmitInteger, MVT::i32, 1, 
/*30395*/     OPC_EmitInteger, MVT::i32, 0, 
/*30398*/     OPC_EmitInteger, MVT::i32, 0, 
/*30401*/     OPC_EmitInteger, MVT::i32, 0, 
/*30404*/     OPC_EmitInteger, MVT::i32, 0, 
/*30407*/     OPC_EmitInteger, MVT::i32, 0, 
/*30410*/     OPC_EmitInteger, MVT::i32, 1, 
/*30413*/     OPC_EmitInteger, MVT::i32, 0, 
/*30416*/     OPC_EmitInteger, MVT::i32, 0, 
/*30419*/     OPC_EmitInteger, MVT::i32, 0, 
/*30422*/     OPC_EmitInteger, MVT::i32, 0, 
/*30425*/     OPC_EmitInteger, MVT::i32, 0, 
/*30428*/     OPC_EmitInteger, MVT::i32, 0, 
/*30431*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30443*/     OPC_EmitInteger, MVT::i32, 1, 
/*30446*/     OPC_EmitInteger, MVT::i32, 0, 
/*30449*/     OPC_EmitInteger, MVT::i32, 0, 
/*30452*/     OPC_EmitInteger, MVT::i32, 0, 
/*30455*/     OPC_EmitInteger, MVT::i32, 0, 
/*30458*/     OPC_EmitInteger, MVT::i32, 0, 
/*30461*/     OPC_EmitInteger, MVT::i32, 0, 
/*30464*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30476*/     OPC_EmitInteger, MVT::i32, 1, 
/*30479*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*30483*/     OPC_EmitInteger, MVT::i32, 0, 
/*30486*/     OPC_EmitInteger, MVT::i32, 0, 
/*30489*/     OPC_EmitNode, TARGET_VAL(AMDGPU::LOG_IEEE_eg), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 16, 17, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/*30509*/     OPC_EmitInteger, MVT::i32, 0, 
/*30512*/     OPC_EmitInteger, MVT::i32, 0, 
/*30515*/     OPC_EmitInteger, MVT::i32, 0, 
/*30518*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30530*/     OPC_EmitInteger, MVT::i32, 1, 
/*30533*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*30537*/     OPC_EmitInteger, MVT::i32, 0, 
/*30540*/     OPC_EmitInteger, MVT::i32, 0, 
/*30543*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MUL), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 1, 12, 13, 14, 15, 28, 29, 30, 31, 32, 33, 34, 35, 36,  // Results = #37
/*30570*/     OPC_EmitInteger, MVT::i32, 0, 
/*30573*/     OPC_EmitInteger, MVT::i32, 0, 
/*30576*/     OPC_EmitInteger, MVT::i32, 0, 
/*30579*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30591*/     OPC_EmitInteger, MVT::i32, 1, 
/*30594*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*30598*/     OPC_EmitInteger, MVT::i32, 0, 
/*30601*/     OPC_EmitInteger, MVT::i32, 0, 
/*30604*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_eg), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 2, 3, 4, 5, 37, 38, 39, 40, 41, 42, 43, 44, 45, 
              // Src: (fpow:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
              // Dst: (EXP_IEEE_eg:f32 (MUL:i32 f32:f32:$src1, (LOG_IEEE_eg:i32 f32:f32:$src0)))
/*30624*/   /*Scope*/ 106|128,1/*234*/, /*->30860*/
/*30626*/     OPC_CheckPatternPredicate, 5, // (Subtarget.device()->getDeviceFlag() == OCL_DEVICE_CAYMAN)
/*30628*/     OPC_EmitInteger, MVT::i32, 1, 
/*30631*/     OPC_EmitInteger, MVT::i32, 0, 
/*30634*/     OPC_EmitInteger, MVT::i32, 0, 
/*30637*/     OPC_EmitInteger, MVT::i32, 0, 
/*30640*/     OPC_EmitInteger, MVT::i32, 0, 
/*30643*/     OPC_EmitInteger, MVT::i32, 0, 
/*30646*/     OPC_EmitInteger, MVT::i32, 1, 
/*30649*/     OPC_EmitInteger, MVT::i32, 0, 
/*30652*/     OPC_EmitInteger, MVT::i32, 0, 
/*30655*/     OPC_EmitInteger, MVT::i32, 0, 
/*30658*/     OPC_EmitInteger, MVT::i32, 0, 
/*30661*/     OPC_EmitInteger, MVT::i32, 0, 
/*30664*/     OPC_EmitInteger, MVT::i32, 0, 
/*30667*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30679*/     OPC_EmitInteger, MVT::i32, 1, 
/*30682*/     OPC_EmitInteger, MVT::i32, 0, 
/*30685*/     OPC_EmitInteger, MVT::i32, 0, 
/*30688*/     OPC_EmitInteger, MVT::i32, 0, 
/*30691*/     OPC_EmitInteger, MVT::i32, 0, 
/*30694*/     OPC_EmitInteger, MVT::i32, 0, 
/*30697*/     OPC_EmitInteger, MVT::i32, 0, 
/*30700*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30712*/     OPC_EmitInteger, MVT::i32, 1, 
/*30715*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*30719*/     OPC_EmitInteger, MVT::i32, 0, 
/*30722*/     OPC_EmitInteger, MVT::i32, 0, 
/*30725*/     OPC_EmitNode, TARGET_VAL(AMDGPU::LOG_IEEE_cm), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 16, 17, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/*30745*/     OPC_EmitInteger, MVT::i32, 0, 
/*30748*/     OPC_EmitInteger, MVT::i32, 0, 
/*30751*/     OPC_EmitInteger, MVT::i32, 0, 
/*30754*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30766*/     OPC_EmitInteger, MVT::i32, 1, 
/*30769*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*30773*/     OPC_EmitInteger, MVT::i32, 0, 
/*30776*/     OPC_EmitInteger, MVT::i32, 0, 
/*30779*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MUL), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 1, 12, 13, 14, 15, 28, 29, 30, 31, 32, 33, 34, 35, 36,  // Results = #37
/*30806*/     OPC_EmitInteger, MVT::i32, 0, 
/*30809*/     OPC_EmitInteger, MVT::i32, 0, 
/*30812*/     OPC_EmitInteger, MVT::i32, 0, 
/*30815*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30827*/     OPC_EmitInteger, MVT::i32, 1, 
/*30830*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*30834*/     OPC_EmitInteger, MVT::i32, 0, 
/*30837*/     OPC_EmitInteger, MVT::i32, 0, 
/*30840*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_cm), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 2, 3, 4, 5, 37, 38, 39, 40, 41, 42, 43, 44, 45, 
              // Src: (fpow:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
              // Dst: (EXP_IEEE_cm:f32 (MUL:i32 f32:f32:$src1, (LOG_IEEE_cm:i32 f32:f32:$src0)))
/*30860*/   /*Scope*/ 27, /*->30888*/
/*30861*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*30863*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_LOG_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #2
/*30871*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_MUL_LEGACY_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*30880*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_EXP_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 3, 
              // Src: (fpow:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
              // Dst: (V_EXP_F32_e32:f32 (V_MUL_LEGACY_F32_e32:i32 f32:f32:$src1, (V_LOG_F32_e32:i32 f32:f32:$src0)))
/*30888*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 83|128,4/*595*/,  TARGET_VAL(ISD::FCOS),// ->31488
/*30893*/   OPC_RecordChild0, // #0 = $src0
/*30894*/   OPC_CheckType, MVT::f32,
/*30896*/   OPC_Scope, 34, /*->30932*/ // 4 children in Scope
/*30898*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*30900*/     OPC_EmitInteger, MVT::i32, 3|128,115|128,11|128,113|128,3/*1042479491*/, 
/*30907*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*30915*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_MUL_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*30924*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_COS_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 3, 
              // Src: (fcos:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_COS_F32_e32:f32 (V_MUL_F32_e32:i32 ?:f32:$src0, (V_MOV_B32_e32:i32 1042479491:i32)))
/*30932*/   /*Scope*/ 55|128,1/*183*/, /*->31117*/
/*30934*/     OPC_CheckPatternPredicate, 6, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX &&Subtarget.device()->getDeviceFlag()>= OCL_DEVICE_RV710)
/*30936*/     OPC_EmitInteger, MVT::i32, 1, 
/*30939*/     OPC_EmitInteger, MVT::i32, 0, 
/*30942*/     OPC_EmitInteger, MVT::i32, 0, 
/*30945*/     OPC_EmitInteger, MVT::i32, 0, 
/*30948*/     OPC_EmitInteger, MVT::i32, 0, 
/*30951*/     OPC_EmitInteger, MVT::i32, 0, 
/*30954*/     OPC_EmitInteger, MVT::i32, 1, 
/*30957*/     OPC_EmitInteger, MVT::i32, 0, 
/*30960*/     OPC_EmitInteger, MVT::i32, 0, 
/*30963*/     OPC_EmitInteger, MVT::i32, 0, 
/*30966*/     OPC_EmitInteger, MVT::i32, 3|128,115|128,11|128,113|128,3/*1042479491*/, 
/*30973*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MOV_IMM_I32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 11,  // Results = #12
/*30981*/     OPC_EmitInteger, MVT::i32, 0, 
/*30984*/     OPC_EmitInteger, MVT::i32, 0, 
/*30987*/     OPC_EmitInteger, MVT::i32, 0, 
/*30990*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31002*/     OPC_EmitInteger, MVT::i32, 0, 
/*31005*/     OPC_EmitInteger, MVT::i32, 0, 
/*31008*/     OPC_EmitInteger, MVT::i32, 0, 
/*31011*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31023*/     OPC_EmitInteger, MVT::i32, 1, 
/*31026*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*31030*/     OPC_EmitInteger, MVT::i32, 0, 
/*31033*/     OPC_EmitInteger, MVT::i32, 0, 
/*31036*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 12, 13, 14, 15, 16, 0, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*31063*/     OPC_EmitInteger, MVT::i32, 0, 
/*31066*/     OPC_EmitInteger, MVT::i32, 0, 
/*31069*/     OPC_EmitInteger, MVT::i32, 0, 
/*31072*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31084*/     OPC_EmitInteger, MVT::i32, 1, 
/*31087*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*31091*/     OPC_EmitInteger, MVT::i32, 0, 
/*31094*/     OPC_EmitInteger, MVT::i32, 0, 
/*31097*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::COS_r700), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 25, 26, 27, 28, 29, 30, 31, 32, 33, 
              // Src: (fcos:f32 f32:f32:$src) - Complexity = 3
              // Dst: (COS_r700:f32 (MUL_IEEE:i32 (MOV_IMM_I32:i32 1042479491:i32), ?:f32:$src))
/*31117*/   /*Scope*/ 55|128,1/*183*/, /*->31302*/
/*31119*/     OPC_CheckPatternPredicate, 4, // (Subtarget.device()->getGeneration() >= AMDGPUDeviceInfo::HD5XXX && Subtarget.device()->getGeneration() < AMDGPUDeviceInfo::HD7XXX && Subtarget.device()->getDeviceFlag() != OCL_DEVICE_CAYMAN)
/*31121*/     OPC_EmitInteger, MVT::i32, 1, 
/*31124*/     OPC_EmitInteger, MVT::i32, 0, 
/*31127*/     OPC_EmitInteger, MVT::i32, 0, 
/*31130*/     OPC_EmitInteger, MVT::i32, 0, 
/*31133*/     OPC_EmitInteger, MVT::i32, 0, 
/*31136*/     OPC_EmitInteger, MVT::i32, 0, 
/*31139*/     OPC_EmitInteger, MVT::i32, 1, 
/*31142*/     OPC_EmitInteger, MVT::i32, 0, 
/*31145*/     OPC_EmitInteger, MVT::i32, 0, 
/*31148*/     OPC_EmitInteger, MVT::i32, 0, 
/*31151*/     OPC_EmitInteger, MVT::i32, 3|128,115|128,11|128,113|128,3/*1042479491*/, 
/*31158*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MOV_IMM_I32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 11,  // Results = #12
/*31166*/     OPC_EmitInteger, MVT::i32, 0, 
/*31169*/     OPC_EmitInteger, MVT::i32, 0, 
/*31172*/     OPC_EmitInteger, MVT::i32, 0, 
/*31175*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31187*/     OPC_EmitInteger, MVT::i32, 0, 
/*31190*/     OPC_EmitInteger, MVT::i32, 0, 
/*31193*/     OPC_EmitInteger, MVT::i32, 0, 
/*31196*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31208*/     OPC_EmitInteger, MVT::i32, 1, 
/*31211*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*31215*/     OPC_EmitInteger, MVT::i32, 0, 
/*31218*/     OPC_EmitInteger, MVT::i32, 0, 
/*31221*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 12, 13, 14, 15, 16, 0, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*31248*/     OPC_EmitInteger, MVT::i32, 0, 
/*31251*/     OPC_EmitInteger, MVT::i32, 0, 
/*31254*/     OPC_EmitInteger, MVT::i32, 0, 
/*31257*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31269*/     OPC_EmitInteger, MVT::i32, 1, 
/*31272*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*31276*/     OPC_EmitInteger, MVT::i32, 0, 
/*31279*/     OPC_EmitInteger, MVT::i32, 0, 
/*31282*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::COS_eg), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 25, 26, 27, 28, 29, 30, 31, 32, 33, 
              // Src: (fcos:f32 f32:f32:$src) - Complexity = 3
              // Dst: (COS_eg:f32 (MUL_IEEE:i32 (MOV_IMM_I32:i32 1042479491:i32), ?:f32:$src))
/*31302*/   /*Scope*/ 55|128,1/*183*/, /*->31487*/
/*31304*/     OPC_CheckPatternPredicate, 5, // (Subtarget.device()->getDeviceFlag() == OCL_DEVICE_CAYMAN)
/*31306*/     OPC_EmitInteger, MVT::i32, 1, 
/*31309*/     OPC_EmitInteger, MVT::i32, 0, 
/*31312*/     OPC_EmitInteger, MVT::i32, 0, 
/*31315*/     OPC_EmitInteger, MVT::i32, 0, 
/*31318*/     OPC_EmitInteger, MVT::i32, 0, 
/*31321*/     OPC_EmitInteger, MVT::i32, 0, 
/*31324*/     OPC_EmitInteger, MVT::i32, 1, 
/*31327*/     OPC_EmitInteger, MVT::i32, 0, 
/*31330*/     OPC_EmitInteger, MVT::i32, 0, 
/*31333*/     OPC_EmitInteger, MVT::i32, 0, 
/*31336*/     OPC_EmitInteger, MVT::i32, 3|128,115|128,11|128,113|128,3/*1042479491*/, 
/*31343*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MOV_IMM_I32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 11,  // Results = #12
/*31351*/     OPC_EmitInteger, MVT::i32, 0, 
/*31354*/     OPC_EmitInteger, MVT::i32, 0, 
/*31357*/     OPC_EmitInteger, MVT::i32, 0, 
/*31360*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31372*/     OPC_EmitInteger, MVT::i32, 0, 
/*31375*/     OPC_EmitInteger, MVT::i32, 0, 
/*31378*/     OPC_EmitInteger, MVT::i32, 0, 
/*31381*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31393*/     OPC_EmitInteger, MVT::i32, 1, 
/*31396*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*31400*/     OPC_EmitInteger, MVT::i32, 0, 
/*31403*/     OPC_EmitInteger, MVT::i32, 0, 
/*31406*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 12, 13, 14, 15, 16, 0, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*31433*/     OPC_EmitInteger, MVT::i32, 0, 
/*31436*/     OPC_EmitInteger, MVT::i32, 0, 
/*31439*/     OPC_EmitInteger, MVT::i32, 0, 
/*31442*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31454*/     OPC_EmitInteger, MVT::i32, 1, 
/*31457*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*31461*/     OPC_EmitInteger, MVT::i32, 0, 
/*31464*/     OPC_EmitInteger, MVT::i32, 0, 
/*31467*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::COS_cm), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 25, 26, 27, 28, 29, 30, 31, 32, 33, 
              // Src: (fcos:f32 f32:f32:$src) - Complexity = 3
              // Dst: (COS_cm:f32 (MUL_IEEE:i32 (MOV_IMM_I32:i32 1042479491:i32), ?:f32:$src))
/*31487*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 83|128,4/*595*/,  TARGET_VAL(ISD::FSIN),// ->32087
/*31492*/   OPC_RecordChild0, // #0 = $src0
/*31493*/   OPC_CheckType, MVT::f32,
/*31495*/   OPC_Scope, 34, /*->31531*/ // 4 children in Scope
/*31497*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*31499*/     OPC_EmitInteger, MVT::i32, 3|128,115|128,11|128,113|128,3/*1042479491*/, 
/*31506*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*31514*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_MUL_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*31523*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_SIN_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 3, 
              // Src: (fsin:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_SIN_F32_e32:f32 (V_MUL_F32_e32:i32 ?:f32:$src0, (V_MOV_B32_e32:i32 1042479491:i32)))
/*31531*/   /*Scope*/ 55|128,1/*183*/, /*->31716*/
/*31533*/     OPC_CheckPatternPredicate, 6, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX &&Subtarget.device()->getDeviceFlag()>= OCL_DEVICE_RV710)
/*31535*/     OPC_EmitInteger, MVT::i32, 1, 
/*31538*/     OPC_EmitInteger, MVT::i32, 0, 
/*31541*/     OPC_EmitInteger, MVT::i32, 0, 
/*31544*/     OPC_EmitInteger, MVT::i32, 0, 
/*31547*/     OPC_EmitInteger, MVT::i32, 0, 
/*31550*/     OPC_EmitInteger, MVT::i32, 0, 
/*31553*/     OPC_EmitInteger, MVT::i32, 1, 
/*31556*/     OPC_EmitInteger, MVT::i32, 0, 
/*31559*/     OPC_EmitInteger, MVT::i32, 0, 
/*31562*/     OPC_EmitInteger, MVT::i32, 0, 
/*31565*/     OPC_EmitInteger, MVT::i32, 3|128,115|128,11|128,113|128,3/*1042479491*/, 
/*31572*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MOV_IMM_I32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 11,  // Results = #12
/*31580*/     OPC_EmitInteger, MVT::i32, 0, 
/*31583*/     OPC_EmitInteger, MVT::i32, 0, 
/*31586*/     OPC_EmitInteger, MVT::i32, 0, 
/*31589*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31601*/     OPC_EmitInteger, MVT::i32, 0, 
/*31604*/     OPC_EmitInteger, MVT::i32, 0, 
/*31607*/     OPC_EmitInteger, MVT::i32, 0, 
/*31610*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31622*/     OPC_EmitInteger, MVT::i32, 1, 
/*31625*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*31629*/     OPC_EmitInteger, MVT::i32, 0, 
/*31632*/     OPC_EmitInteger, MVT::i32, 0, 
/*31635*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 12, 13, 14, 15, 16, 0, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*31662*/     OPC_EmitInteger, MVT::i32, 0, 
/*31665*/     OPC_EmitInteger, MVT::i32, 0, 
/*31668*/     OPC_EmitInteger, MVT::i32, 0, 
/*31671*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31683*/     OPC_EmitInteger, MVT::i32, 1, 
/*31686*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*31690*/     OPC_EmitInteger, MVT::i32, 0, 
/*31693*/     OPC_EmitInteger, MVT::i32, 0, 
/*31696*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SIN_r700), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 25, 26, 27, 28, 29, 30, 31, 32, 33, 
              // Src: (fsin:f32 f32:f32:$src) - Complexity = 3
              // Dst: (SIN_r700:f32 (MUL_IEEE:i32 (MOV_IMM_I32:i32 1042479491:i32), ?:f32:$src))
/*31716*/   /*Scope*/ 55|128,1/*183*/, /*->31901*/
/*31718*/     OPC_CheckPatternPredicate, 4, // (Subtarget.device()->getGeneration() >= AMDGPUDeviceInfo::HD5XXX && Subtarget.device()->getGeneration() < AMDGPUDeviceInfo::HD7XXX && Subtarget.device()->getDeviceFlag() != OCL_DEVICE_CAYMAN)
/*31720*/     OPC_EmitInteger, MVT::i32, 1, 
/*31723*/     OPC_EmitInteger, MVT::i32, 0, 
/*31726*/     OPC_EmitInteger, MVT::i32, 0, 
/*31729*/     OPC_EmitInteger, MVT::i32, 0, 
/*31732*/     OPC_EmitInteger, MVT::i32, 0, 
/*31735*/     OPC_EmitInteger, MVT::i32, 0, 
/*31738*/     OPC_EmitInteger, MVT::i32, 1, 
/*31741*/     OPC_EmitInteger, MVT::i32, 0, 
/*31744*/     OPC_EmitInteger, MVT::i32, 0, 
/*31747*/     OPC_EmitInteger, MVT::i32, 0, 
/*31750*/     OPC_EmitInteger, MVT::i32, 3|128,115|128,11|128,113|128,3/*1042479491*/, 
/*31757*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MOV_IMM_I32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 11,  // Results = #12
/*31765*/     OPC_EmitInteger, MVT::i32, 0, 
/*31768*/     OPC_EmitInteger, MVT::i32, 0, 
/*31771*/     OPC_EmitInteger, MVT::i32, 0, 
/*31774*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31786*/     OPC_EmitInteger, MVT::i32, 0, 
/*31789*/     OPC_EmitInteger, MVT::i32, 0, 
/*31792*/     OPC_EmitInteger, MVT::i32, 0, 
/*31795*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31807*/     OPC_EmitInteger, MVT::i32, 1, 
/*31810*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*31814*/     OPC_EmitInteger, MVT::i32, 0, 
/*31817*/     OPC_EmitInteger, MVT::i32, 0, 
/*31820*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 12, 13, 14, 15, 16, 0, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*31847*/     OPC_EmitInteger, MVT::i32, 0, 
/*31850*/     OPC_EmitInteger, MVT::i32, 0, 
/*31853*/     OPC_EmitInteger, MVT::i32, 0, 
/*31856*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31868*/     OPC_EmitInteger, MVT::i32, 1, 
/*31871*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*31875*/     OPC_EmitInteger, MVT::i32, 0, 
/*31878*/     OPC_EmitInteger, MVT::i32, 0, 
/*31881*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SIN_eg), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 25, 26, 27, 28, 29, 30, 31, 32, 33, 
              // Src: (fsin:f32 f32:f32:$src) - Complexity = 3
              // Dst: (SIN_eg:f32 (MUL_IEEE:i32 (MOV_IMM_I32:i32 1042479491:i32), ?:f32:$src))
/*31901*/   /*Scope*/ 55|128,1/*183*/, /*->32086*/
/*31903*/     OPC_CheckPatternPredicate, 5, // (Subtarget.device()->getDeviceFlag() == OCL_DEVICE_CAYMAN)
/*31905*/     OPC_EmitInteger, MVT::i32, 1, 
/*31908*/     OPC_EmitInteger, MVT::i32, 0, 
/*31911*/     OPC_EmitInteger, MVT::i32, 0, 
/*31914*/     OPC_EmitInteger, MVT::i32, 0, 
/*31917*/     OPC_EmitInteger, MVT::i32, 0, 
/*31920*/     OPC_EmitInteger, MVT::i32, 0, 
/*31923*/     OPC_EmitInteger, MVT::i32, 1, 
/*31926*/     OPC_EmitInteger, MVT::i32, 0, 
/*31929*/     OPC_EmitInteger, MVT::i32, 0, 
/*31932*/     OPC_EmitInteger, MVT::i32, 0, 
/*31935*/     OPC_EmitInteger, MVT::i32, 3|128,115|128,11|128,113|128,3/*1042479491*/, 
/*31942*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MOV_IMM_I32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 11,  // Results = #12
/*31950*/     OPC_EmitInteger, MVT::i32, 0, 
/*31953*/     OPC_EmitInteger, MVT::i32, 0, 
/*31956*/     OPC_EmitInteger, MVT::i32, 0, 
/*31959*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31971*/     OPC_EmitInteger, MVT::i32, 0, 
/*31974*/     OPC_EmitInteger, MVT::i32, 0, 
/*31977*/     OPC_EmitInteger, MVT::i32, 0, 
/*31980*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31992*/     OPC_EmitInteger, MVT::i32, 1, 
/*31995*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*31999*/     OPC_EmitInteger, MVT::i32, 0, 
/*32002*/     OPC_EmitInteger, MVT::i32, 0, 
/*32005*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 12, 13, 14, 15, 16, 0, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*32032*/     OPC_EmitInteger, MVT::i32, 0, 
/*32035*/     OPC_EmitInteger, MVT::i32, 0, 
/*32038*/     OPC_EmitInteger, MVT::i32, 0, 
/*32041*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32053*/     OPC_EmitInteger, MVT::i32, 1, 
/*32056*/     OPC_EmitRegister2, MVT::i32, TARGET_VAL(AMDGPU::PRED_SEL_OFF),
/*32060*/     OPC_EmitInteger, MVT::i32, 0, 
/*32063*/     OPC_EmitInteger, MVT::i32, 0, 
/*32066*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SIN_cm), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 25, 26, 27, 28, 29, 30, 31, 32, 33, 
              // Src: (fsin:f32 f32:f32:$src) - Complexity = 3
              // Dst: (SIN_cm:f32 (MUL_IEEE:i32 (MOV_IMM_I32:i32 1042479491:i32), ?:f32:$src))
/*32086*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 91|128,12/*1627*/,  TARGET_VAL(ISD::INSERT_VECTOR_ELT),// ->33718
/*32091*/   OPC_RecordChild0, // #0 = $vec
/*32092*/   OPC_RecordChild1, // #1 = $elem
/*32093*/   OPC_Scope, 49|128,5/*689*/, /*->32785*/ // 2 children in Scope
/*32096*/     OPC_CheckChild1Type, MVT::i32,
/*32098*/     OPC_MoveChild, 2,
/*32100*/     OPC_Scope, 92, /*->32194*/ // 16 children in Scope
/*32102*/       OPC_CheckInteger, 0, 
/*32104*/       OPC_MoveParent,
/*32105*/       OPC_SwitchType /*4 cases */, 34,  MVT::v4i32,// ->32142
/*32108*/         OPC_Scope, 15, /*->32125*/ // 2 children in Scope
/*32110*/           OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*32112*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*32115*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 0:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub0:i32)
/*32125*/         /*Scope*/ 15, /*->32141*/
/*32126*/           OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32128*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*32131*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 0:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub0:i32)
/*32141*/         0, /*End of Scope*/
                /*SwitchType*/ 15,  MVT::v2i32,// ->32159
/*32144*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32146*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*32149*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v2i32 v2i32:v2i32:$vec, i32:i32:$elem, 0:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v2i32 ?:v2i32:$vec, ?:i32:$elem, sub0:i32)
                /*SwitchType*/ 15,  MVT::v8i32,// ->32176
/*32161*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32163*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*32166*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 0:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub0:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->32193
/*32178*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32180*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*32183*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 0:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub0:i32)
                0, // EndSwitchType
/*32194*/     /*Scope*/ 92, /*->32287*/
/*32195*/       OPC_CheckInteger, 1, 
/*32197*/       OPC_MoveParent,
/*32198*/       OPC_SwitchType /*4 cases */, 34,  MVT::v4i32,// ->32235
/*32201*/         OPC_Scope, 15, /*->32218*/ // 2 children in Scope
/*32203*/           OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*32205*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*32208*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 1:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub1:i32)
/*32218*/         /*Scope*/ 15, /*->32234*/
/*32219*/           OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32221*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*32224*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 1:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub1:i32)
/*32234*/         0, /*End of Scope*/
                /*SwitchType*/ 15,  MVT::v2i32,// ->32252
/*32237*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32239*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*32242*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v2i32 v2i32:v2i32:$vec, i32:i32:$elem, 1:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v2i32 ?:v2i32:$vec, ?:i32:$elem, sub1:i32)
                /*SwitchType*/ 15,  MVT::v8i32,// ->32269
/*32254*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32256*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*32259*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 1:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub1:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->32286
/*32271*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32273*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*32276*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 1:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub1:i32)
                0, // EndSwitchType
/*32287*/     /*Scope*/ 92, /*->32380*/
/*32288*/       OPC_CheckInteger, 2, 
/*32290*/       OPC_MoveParent,
/*32291*/       OPC_SwitchType /*4 cases */, 34,  MVT::v4i32,// ->32328
/*32294*/         OPC_Scope, 15, /*->32311*/ // 2 children in Scope
/*32296*/           OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*32298*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*32301*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 2:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub2:i32)
/*32311*/         /*Scope*/ 15, /*->32327*/
/*32312*/           OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32314*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*32317*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 2:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub2:i32)
/*32327*/         0, /*End of Scope*/
                /*SwitchType*/ 15,  MVT::v2i32,// ->32345
/*32330*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32332*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*32335*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v2i32 v2i32:v2i32:$vec, i32:i32:$elem, 2:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v2i32 ?:v2i32:$vec, ?:i32:$elem, sub2:i32)
                /*SwitchType*/ 15,  MVT::v8i32,// ->32362
/*32347*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32349*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*32352*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 2:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub2:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->32379
/*32364*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32366*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*32369*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 2:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub2:i32)
                0, // EndSwitchType
/*32380*/     /*Scope*/ 75, /*->32456*/
/*32381*/       OPC_CheckInteger, 3, 
/*32383*/       OPC_MoveParent,
/*32384*/       OPC_SwitchType /*3 cases */, 34,  MVT::v4i32,// ->32421
/*32387*/         OPC_Scope, 15, /*->32404*/ // 2 children in Scope
/*32389*/           OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*32391*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*32394*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 3:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub3:i32)
/*32404*/         /*Scope*/ 15, /*->32420*/
/*32405*/           OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32407*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*32410*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 3:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub3:i32)
/*32420*/         0, /*End of Scope*/
                /*SwitchType*/ 15,  MVT::v8i32,// ->32438
/*32423*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32425*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*32428*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 3:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub3:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->32455
/*32440*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32442*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*32445*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 3:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub3:i32)
                0, // EndSwitchType
/*32456*/     /*Scope*/ 39, /*->32496*/
/*32457*/       OPC_CheckInteger, 4, 
/*32459*/       OPC_MoveParent,
/*32460*/       OPC_SwitchType /*2 cases */, 15,  MVT::v8i32,// ->32478
/*32463*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32465*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*32468*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 4:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub4:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->32495
/*32480*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32482*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*32485*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 4:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub4:i32)
                0, // EndSwitchType
/*32496*/     /*Scope*/ 39, /*->32536*/
/*32497*/       OPC_CheckInteger, 5, 
/*32499*/       OPC_MoveParent,
/*32500*/       OPC_SwitchType /*2 cases */, 15,  MVT::v8i32,// ->32518
/*32503*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32505*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*32508*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 5:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub5:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->32535
/*32520*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32522*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*32525*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 5:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub5:i32)
                0, // EndSwitchType
/*32536*/     /*Scope*/ 39, /*->32576*/
/*32537*/       OPC_CheckInteger, 6, 
/*32539*/       OPC_MoveParent,
/*32540*/       OPC_SwitchType /*2 cases */, 15,  MVT::v8i32,// ->32558
/*32543*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32545*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*32548*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 6:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub6:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->32575
/*32560*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32562*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*32565*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 6:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub6:i32)
                0, // EndSwitchType
/*32576*/     /*Scope*/ 39, /*->32616*/
/*32577*/       OPC_CheckInteger, 7, 
/*32579*/       OPC_MoveParent,
/*32580*/       OPC_SwitchType /*2 cases */, 15,  MVT::v8i32,// ->32598
/*32583*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32585*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*32588*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 7:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub7:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->32615
/*32600*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32602*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*32605*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 7:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub7:i32)
                0, // EndSwitchType
/*32616*/     /*Scope*/ 20, /*->32637*/
/*32617*/       OPC_CheckInteger, 8, 
/*32619*/       OPC_MoveParent,
/*32620*/       OPC_CheckType, MVT::v16i32,
/*32622*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32624*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub8,
/*32627*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 8:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub8:i32)
/*32637*/     /*Scope*/ 20, /*->32658*/
/*32638*/       OPC_CheckInteger, 9, 
/*32640*/       OPC_MoveParent,
/*32641*/       OPC_CheckType, MVT::v16i32,
/*32643*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32645*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub9,
/*32648*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 9:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub9:i32)
/*32658*/     /*Scope*/ 20, /*->32679*/
/*32659*/       OPC_CheckInteger, 10, 
/*32661*/       OPC_MoveParent,
/*32662*/       OPC_CheckType, MVT::v16i32,
/*32664*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32666*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub10,
/*32669*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 10:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub10:i32)
/*32679*/     /*Scope*/ 20, /*->32700*/
/*32680*/       OPC_CheckInteger, 11, 
/*32682*/       OPC_MoveParent,
/*32683*/       OPC_CheckType, MVT::v16i32,
/*32685*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32687*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub11,
/*32690*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 11:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub11:i32)
/*32700*/     /*Scope*/ 20, /*->32721*/
/*32701*/       OPC_CheckInteger, 12, 
/*32703*/       OPC_MoveParent,
/*32704*/       OPC_CheckType, MVT::v16i32,
/*32706*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32708*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub12,
/*32711*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 12:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub12:i32)
/*32721*/     /*Scope*/ 20, /*->32742*/
/*32722*/       OPC_CheckInteger, 13, 
/*32724*/       OPC_MoveParent,
/*32725*/       OPC_CheckType, MVT::v16i32,
/*32727*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32729*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub13,
/*32732*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 13:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub13:i32)
/*32742*/     /*Scope*/ 20, /*->32763*/
/*32743*/       OPC_CheckInteger, 14, 
/*32745*/       OPC_MoveParent,
/*32746*/       OPC_CheckType, MVT::v16i32,
/*32748*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32750*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub14,
/*32753*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 14:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub14:i32)
/*32763*/     /*Scope*/ 20, /*->32784*/
/*32764*/       OPC_CheckInteger, 15, 
/*32766*/       OPC_MoveParent,
/*32767*/       OPC_CheckType, MVT::v16i32,
/*32769*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32771*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub15,
/*32774*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 15:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub15:i32)
/*32784*/     0, /*End of Scope*/
/*32785*/   /*Scope*/ 34|128,7/*930*/, /*->33717*/
/*32787*/     OPC_CheckChild1Type, MVT::f32,
/*32789*/     OPC_MoveChild, 2,
/*32791*/     OPC_Scope, 124, /*->32917*/ // 18 children in Scope
/*32793*/       OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*32796*/       OPC_MoveChild, 0,
/*32798*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*32801*/       OPC_RecordChild0, // #2 = $idx
/*32802*/       OPC_RecordChild1, // #3 = $off
/*32803*/       OPC_MoveChild, 1,
/*32805*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*32808*/       OPC_MoveParent,
/*32809*/       OPC_CheckType, MVT::i32,
/*32811*/       OPC_MoveParent,
/*32812*/       OPC_CheckType, MVT::i64,
/*32814*/       OPC_MoveParent,
/*32815*/       OPC_SwitchType /*4 cases */, 23,  MVT::v2f32,// ->32841
/*32818*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32820*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #4
/*32827*/         OPC_EmitConvertToTarget, 3,
/*32829*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V2), 0,
                      1/*#VTs*/, MVT::v2f32, 5/*#Ops*/, 4, 0, 2, 5, 1, 
                  // Src: (vector_insert:v2f32 v2f32:v2f32:$vec, f32:f32:$val, (zext:i64 (add:i32 i32:i32:$idx, (imm:i32):$off))) - Complexity = 12
                  // Dst: (SI_INDIRECT_DST_V2:v2f32 (IMPLICIT_DEF:i1), ?:v2f32:$vec, ?:i32:$idx, (imm:i32):$off, ?:f32:$val)
                /*SwitchType*/ 23,  MVT::v4f32,// ->32866
/*32843*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32845*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #4
/*32852*/         OPC_EmitConvertToTarget, 3,
/*32854*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V4), 0,
                      1/*#VTs*/, MVT::v4f32, 5/*#Ops*/, 4, 0, 2, 5, 1, 
                  // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$val, (zext:i64 (add:i32 i32:i32:$idx, (imm:i32):$off))) - Complexity = 12
                  // Dst: (SI_INDIRECT_DST_V4:v4f32 (IMPLICIT_DEF:i1), ?:v4f32:$vec, ?:i32:$idx, (imm:i32):$off, ?:f32:$val)
                /*SwitchType*/ 23,  MVT::v8f32,// ->32891
/*32868*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32870*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #4
/*32877*/         OPC_EmitConvertToTarget, 3,
/*32879*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V8), 0,
                      1/*#VTs*/, MVT::v8f32, 5/*#Ops*/, 4, 0, 2, 5, 1, 
                  // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$val, (zext:i64 (add:i32 i32:i32:$idx, (imm:i32):$off))) - Complexity = 12
                  // Dst: (SI_INDIRECT_DST_V8:v8f32 (IMPLICIT_DEF:i1), ?:v8f32:$vec, ?:i32:$idx, (imm:i32):$off, ?:f32:$val)
                /*SwitchType*/ 23,  MVT::v16f32,// ->32916
/*32893*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32895*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #4
/*32902*/         OPC_EmitConvertToTarget, 3,
/*32904*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V16), 0,
                      1/*#VTs*/, MVT::v16f32, 5/*#Ops*/, 4, 0, 2, 5, 1, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$val, (zext:i64 (add:i32 i32:i32:$idx, (imm:i32):$off))) - Complexity = 12
                  // Dst: (SI_INDIRECT_DST_V16:v16f32 (IMPLICIT_DEF:i1), ?:v16f32:$vec, ?:i32:$idx, (imm:i32):$off, ?:f32:$val)
                0, // EndSwitchType
/*32917*/     /*Scope*/ 92, /*->33010*/
/*32918*/       OPC_CheckInteger, 0, 
/*32920*/       OPC_MoveParent,
/*32921*/       OPC_SwitchType /*4 cases */, 34,  MVT::v4f32,// ->32958
/*32924*/         OPC_Scope, 15, /*->32941*/ // 2 children in Scope
/*32926*/           OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*32928*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*32931*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 0:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub0:i32)
/*32941*/         /*Scope*/ 15, /*->32957*/
/*32942*/           OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32944*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*32947*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 0:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub0:i32)
/*32957*/         0, /*End of Scope*/
                /*SwitchType*/ 15,  MVT::v2f32,// ->32975
/*32960*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32962*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*32965*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v2f32 v2f32:v2f32:$vec, f32:f32:$elem, 0:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v2f32 ?:v2f32:$vec, ?:f32:$elem, sub0:i32)
                /*SwitchType*/ 15,  MVT::v8f32,// ->32992
/*32977*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32979*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*32982*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 0:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub0:i32)
                /*SwitchType*/ 15,  MVT::v16f32,// ->33009
/*32994*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*32996*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*32999*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 0:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub0:i32)
                0, // EndSwitchType
/*33010*/     /*Scope*/ 92, /*->33103*/
/*33011*/       OPC_CheckInteger, 1, 
/*33013*/       OPC_MoveParent,
/*33014*/       OPC_SwitchType /*4 cases */, 34,  MVT::v4f32,// ->33051
/*33017*/         OPC_Scope, 15, /*->33034*/ // 2 children in Scope
/*33019*/           OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*33021*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*33024*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 1:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub1:i32)
/*33034*/         /*Scope*/ 15, /*->33050*/
/*33035*/           OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33037*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*33040*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 1:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub1:i32)
/*33050*/         0, /*End of Scope*/
                /*SwitchType*/ 15,  MVT::v2f32,// ->33068
/*33053*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33055*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*33058*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v2f32 v2f32:v2f32:$vec, f32:f32:$elem, 1:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v2f32 ?:v2f32:$vec, ?:f32:$elem, sub1:i32)
                /*SwitchType*/ 15,  MVT::v8f32,// ->33085
/*33070*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33072*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*33075*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 1:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub1:i32)
                /*SwitchType*/ 15,  MVT::v16f32,// ->33102
/*33087*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33089*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*33092*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 1:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub1:i32)
                0, // EndSwitchType
/*33103*/     /*Scope*/ 92, /*->33196*/
/*33104*/       OPC_CheckInteger, 2, 
/*33106*/       OPC_MoveParent,
/*33107*/       OPC_SwitchType /*4 cases */, 34,  MVT::v4f32,// ->33144
/*33110*/         OPC_Scope, 15, /*->33127*/ // 2 children in Scope
/*33112*/           OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*33114*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*33117*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 2:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub2:i32)
/*33127*/         /*Scope*/ 15, /*->33143*/
/*33128*/           OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33130*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*33133*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 2:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub2:i32)
/*33143*/         0, /*End of Scope*/
                /*SwitchType*/ 15,  MVT::v2f32,// ->33161
/*33146*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33148*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*33151*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v2f32 v2f32:v2f32:$vec, f32:f32:$elem, 2:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v2f32 ?:v2f32:$vec, ?:f32:$elem, sub2:i32)
                /*SwitchType*/ 15,  MVT::v8f32,// ->33178
/*33163*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33165*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*33168*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 2:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub2:i32)
                /*SwitchType*/ 15,  MVT::v16f32,// ->33195
/*33180*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33182*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*33185*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 2:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub2:i32)
                0, // EndSwitchType
/*33196*/     /*Scope*/ 75, /*->33272*/
/*33197*/       OPC_CheckInteger, 3, 
/*33199*/       OPC_MoveParent,
/*33200*/       OPC_SwitchType /*3 cases */, 34,  MVT::v4f32,// ->33237
/*33203*/         OPC_Scope, 15, /*->33220*/ // 2 children in Scope
/*33205*/           OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*33207*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*33210*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 3:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub3:i32)
/*33220*/         /*Scope*/ 15, /*->33236*/
/*33221*/           OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33223*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*33226*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 3:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub3:i32)
/*33236*/         0, /*End of Scope*/
                /*SwitchType*/ 15,  MVT::v8f32,// ->33254
/*33239*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33241*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*33244*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 3:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub3:i32)
                /*SwitchType*/ 15,  MVT::v16f32,// ->33271
/*33256*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33258*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*33261*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 3:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub3:i32)
                0, // EndSwitchType
/*33272*/     /*Scope*/ 39, /*->33312*/
/*33273*/       OPC_CheckInteger, 4, 
/*33275*/       OPC_MoveParent,
/*33276*/       OPC_SwitchType /*2 cases */, 15,  MVT::v8f32,// ->33294
/*33279*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33281*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*33284*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 4:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub4:i32)
                /*SwitchType*/ 15,  MVT::v16f32,// ->33311
/*33296*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33298*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*33301*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 4:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub4:i32)
                0, // EndSwitchType
/*33312*/     /*Scope*/ 39, /*->33352*/
/*33313*/       OPC_CheckInteger, 5, 
/*33315*/       OPC_MoveParent,
/*33316*/       OPC_SwitchType /*2 cases */, 15,  MVT::v8f32,// ->33334
/*33319*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33321*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*33324*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 5:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub5:i32)
                /*SwitchType*/ 15,  MVT::v16f32,// ->33351
/*33336*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33338*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*33341*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 5:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub5:i32)
                0, // EndSwitchType
/*33352*/     /*Scope*/ 39, /*->33392*/
/*33353*/       OPC_CheckInteger, 6, 
/*33355*/       OPC_MoveParent,
/*33356*/       OPC_SwitchType /*2 cases */, 15,  MVT::v8f32,// ->33374
/*33359*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33361*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*33364*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 6:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub6:i32)
                /*SwitchType*/ 15,  MVT::v16f32,// ->33391
/*33376*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33378*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*33381*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 6:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub6:i32)
                0, // EndSwitchType
/*33392*/     /*Scope*/ 39, /*->33432*/
/*33393*/       OPC_CheckInteger, 7, 
/*33395*/       OPC_MoveParent,
/*33396*/       OPC_SwitchType /*2 cases */, 15,  MVT::v8f32,// ->33414
/*33399*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33401*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*33404*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 7:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub7:i32)
                /*SwitchType*/ 15,  MVT::v16f32,// ->33431
/*33416*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33418*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*33421*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 7:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub7:i32)
                0, // EndSwitchType
/*33432*/     /*Scope*/ 20, /*->33453*/
/*33433*/       OPC_CheckInteger, 8, 
/*33435*/       OPC_MoveParent,
/*33436*/       OPC_CheckType, MVT::v16f32,
/*33438*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33440*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub8,
/*33443*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 8:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub8:i32)
/*33453*/     /*Scope*/ 20, /*->33474*/
/*33454*/       OPC_CheckInteger, 9, 
/*33456*/       OPC_MoveParent,
/*33457*/       OPC_CheckType, MVT::v16f32,
/*33459*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33461*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub9,
/*33464*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 9:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub9:i32)
/*33474*/     /*Scope*/ 20, /*->33495*/
/*33475*/       OPC_CheckInteger, 10, 
/*33477*/       OPC_MoveParent,
/*33478*/       OPC_CheckType, MVT::v16f32,
/*33480*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33482*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub10,
/*33485*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 10:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub10:i32)
/*33495*/     /*Scope*/ 20, /*->33516*/
/*33496*/       OPC_CheckInteger, 11, 
/*33498*/       OPC_MoveParent,
/*33499*/       OPC_CheckType, MVT::v16f32,
/*33501*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33503*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub11,
/*33506*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 11:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub11:i32)
/*33516*/     /*Scope*/ 20, /*->33537*/
/*33517*/       OPC_CheckInteger, 12, 
/*33519*/       OPC_MoveParent,
/*33520*/       OPC_CheckType, MVT::v16f32,
/*33522*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33524*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub12,
/*33527*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 12:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub12:i32)
/*33537*/     /*Scope*/ 20, /*->33558*/
/*33538*/       OPC_CheckInteger, 13, 
/*33540*/       OPC_MoveParent,
/*33541*/       OPC_CheckType, MVT::v16f32,
/*33543*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33545*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub13,
/*33548*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 13:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub13:i32)
/*33558*/     /*Scope*/ 20, /*->33579*/
/*33559*/       OPC_CheckInteger, 14, 
/*33561*/       OPC_MoveParent,
/*33562*/       OPC_CheckType, MVT::v16f32,
/*33564*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33566*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub14,
/*33569*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 14:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub14:i32)
/*33579*/     /*Scope*/ 20, /*->33600*/
/*33580*/       OPC_CheckInteger, 15, 
/*33582*/       OPC_MoveParent,
/*33583*/       OPC_CheckType, MVT::v16f32,
/*33585*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33587*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub15,
/*33590*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 15:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub15:i32)
/*33600*/     /*Scope*/ 115, /*->33716*/
/*33601*/       OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*33604*/       OPC_RecordChild0, // #2 = $idx
/*33605*/       OPC_CheckChild0Type, MVT::i32,
/*33607*/       OPC_CheckType, MVT::i64,
/*33609*/       OPC_MoveParent,
/*33610*/       OPC_SwitchType /*4 cases */, 24,  MVT::v2f32,// ->33637
/*33613*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33615*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*33622*/         OPC_EmitInteger, MVT::i32, 0, 
/*33625*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V2), 0,
                      1/*#VTs*/, MVT::v2f32, 5/*#Ops*/, 3, 0, 2, 4, 1, 
                  // Src: (vector_insert:v2f32 v2f32:v2f32:$vec, f32:f32:$val, (zext:i64 i32:i32:$idx)) - Complexity = 6
                  // Dst: (SI_INDIRECT_DST_V2:v2f32 (IMPLICIT_DEF:i1), ?:v2f32:$vec, ?:i32:$idx, 0:i32, ?:f32:$val)
                /*SwitchType*/ 24,  MVT::v4f32,// ->33663
/*33639*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33641*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*33648*/         OPC_EmitInteger, MVT::i32, 0, 
/*33651*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V4), 0,
                      1/*#VTs*/, MVT::v4f32, 5/*#Ops*/, 3, 0, 2, 4, 1, 
                  // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$val, (zext:i64 i32:i32:$idx)) - Complexity = 6
                  // Dst: (SI_INDIRECT_DST_V4:v4f32 (IMPLICIT_DEF:i1), ?:v4f32:$vec, ?:i32:$idx, 0:i32, ?:f32:$val)
                /*SwitchType*/ 24,  MVT::v8f32,// ->33689
/*33665*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33667*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*33674*/         OPC_EmitInteger, MVT::i32, 0, 
/*33677*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V8), 0,
                      1/*#VTs*/, MVT::v8f32, 5/*#Ops*/, 3, 0, 2, 4, 1, 
                  // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$val, (zext:i64 i32:i32:$idx)) - Complexity = 6
                  // Dst: (SI_INDIRECT_DST_V8:v8f32 (IMPLICIT_DEF:i1), ?:v8f32:$vec, ?:i32:$idx, 0:i32, ?:f32:$val)
                /*SwitchType*/ 24,  MVT::v16f32,// ->33715
/*33691*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33693*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*33700*/         OPC_EmitInteger, MVT::i32, 0, 
/*33703*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V16), 0,
                      1/*#VTs*/, MVT::v16f32, 5/*#Ops*/, 3, 0, 2, 4, 1, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$val, (zext:i64 i32:i32:$idx)) - Complexity = 6
                  // Dst: (SI_INDIRECT_DST_V16:v16f32 (IMPLICIT_DEF:i1), ?:v16f32:$vec, ?:i32:$idx, 0:i32, ?:f32:$val)
                0, // EndSwitchType
/*33716*/     0, /*End of Scope*/
/*33717*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 87|128,9/*1239*/,  TARGET_VAL(ISD::BUILD_VECTOR),// ->34961
/*33722*/   OPC_RecordChild0, // #0 = $src
/*33723*/   OPC_Scope, 117|128,4/*629*/, /*->34355*/ // 2 children in Scope
/*33726*/     OPC_CheckChild0Type, MVT::i32,
/*33728*/     OPC_Scope, 16, /*->33746*/ // 5 children in Scope
/*33730*/       OPC_CheckType, MVT::v1i32,
/*33732*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33734*/       OPC_EmitInteger, MVT::i32, AMDGPU::VReg_32RegClassID,
/*33737*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v1i32, 2/*#Ops*/, 0, 1, 
                // Src: (build_vector:v1i32 i32:i32:$src) - Complexity = 3
                // Dst: (COPY_TO_REGCLASS:v1i32 ?:i32:$src, VReg_32:i32)
/*33746*/     /*Scope*/ 40, /*->33787*/
/*33747*/       OPC_CheckType, MVT::v2i32,
/*33749*/       OPC_RecordChild1, // #1 = $sub1
/*33750*/       OPC_CheckChild1Type, MVT::i32,
/*33752*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33754*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v2i32, 0/*#Ops*/,  // Results = #2
/*33761*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*33764*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 2, 0, 3,  // Results = #4
/*33774*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*33777*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 4, 1, 5, 
                // Src: (build_vector:v2i32 i32:i32:$sub0, i32:i32:$sub1) - Complexity = 3
                // Dst: (INSERT_SUBREG:v2i32 (INSERT_SUBREG:v2i32 (IMPLICIT_DEF:v2i32), ?:i32:$sub0, sub0:i32), ?:i32:$sub1, sub1:i32)
/*33787*/     /*Scope*/ 9|128,1/*137*/, /*->33926*/
/*33789*/       OPC_CheckType, MVT::v4i32,
/*33791*/       OPC_RecordChild1, // #1 = $y
/*33792*/       OPC_CheckChild1Type, MVT::i32,
/*33794*/       OPC_RecordChild2, // #2 = $z
/*33795*/       OPC_CheckChild2Type, MVT::i32,
/*33797*/       OPC_RecordChild3, // #3 = $w
/*33798*/       OPC_CheckChild3Type, MVT::i32,
/*33800*/       OPC_Scope, 61, /*->33863*/ // 2 children in Scope
/*33802*/         OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*33804*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::v4i32, 0/*#Ops*/,  // Results = #4
/*33811*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*33814*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 4, 0, 5,  // Results = #6
/*33824*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*33827*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 6, 1, 7,  // Results = #8
/*33837*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*33840*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 8, 2, 9,  // Results = #10
/*33850*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*33853*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 10, 3, 11, 
                  // Src: (build_vector:v4i32 i32:i32:$x, i32:i32:$y, i32:i32:$z, i32:i32:$w) - Complexity = 3
                  // Dst: (INSERT_SUBREG:v4i32 (INSERT_SUBREG:v4i32 (INSERT_SUBREG:v4i32 (INSERT_SUBREG:v4i32 (IMPLICIT_DEF:v4i32), ?:i32:$x, sub0:i32), ?:i32:$y, sub1:i32), ?:i32:$z, sub2:i32), ?:i32:$w, sub3:i32)
/*33863*/       /*Scope*/ 61, /*->33925*/
/*33864*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33866*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::v4i32, 0/*#Ops*/,  // Results = #4
/*33873*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*33876*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 4, 0, 5,  // Results = #6
/*33886*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*33889*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 6, 1, 7,  // Results = #8
/*33899*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*33902*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 8, 2, 9,  // Results = #10
/*33912*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*33915*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 10, 3, 11, 
                  // Src: (build_vector:v4i32 i32:i32:$x, i32:i32:$y, i32:i32:$z, i32:i32:$w) - Complexity = 3
                  // Dst: (INSERT_SUBREG:v4i32 (INSERT_SUBREG:v4i32 (INSERT_SUBREG:v4i32 (INSERT_SUBREG:v4i32 (IMPLICIT_DEF:v4i32), ?:i32:$x, sub0:i32), ?:i32:$y, sub1:i32), ?:i32:$z, sub2:i32), ?:i32:$w, sub3:i32)
/*33925*/       0, /*End of Scope*/
/*33926*/     /*Scope*/ 8|128,1/*136*/, /*->34064*/
/*33928*/       OPC_CheckType, MVT::v8i32,
/*33930*/       OPC_RecordChild1, // #1 = $sub1
/*33931*/       OPC_CheckChild1Type, MVT::i32,
/*33933*/       OPC_RecordChild2, // #2 = $sub2
/*33934*/       OPC_CheckChild2Type, MVT::i32,
/*33936*/       OPC_RecordChild3, // #3 = $sub3
/*33937*/       OPC_CheckChild3Type, MVT::i32,
/*33939*/       OPC_RecordChild4, // #4 = $sub4
/*33940*/       OPC_CheckChild4Type, MVT::i32,
/*33942*/       OPC_RecordChild5, // #5 = $sub5
/*33943*/       OPC_CheckChild5Type, MVT::i32,
/*33945*/       OPC_RecordChild6, // #6 = $sub6
/*33946*/       OPC_CheckChild6Type, MVT::i32,
/*33948*/       OPC_RecordChild7, // #7 = $sub7
/*33949*/       OPC_CheckChild7Type, MVT::i32,
/*33951*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*33953*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v8i32, 0/*#Ops*/,  // Results = #8
/*33960*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*33963*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 8, 0, 9,  // Results = #10
/*33973*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*33976*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 10, 1, 11,  // Results = #12
/*33986*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*33989*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 12, 2, 13,  // Results = #14
/*33999*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*34002*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 14, 3, 15,  // Results = #16
/*34012*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*34015*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 16, 4, 17,  // Results = #18
/*34025*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*34028*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 18, 5, 19,  // Results = #20
/*34038*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*34041*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 20, 6, 21,  // Results = #22
/*34051*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*34054*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 22, 7, 23, 
                // Src: (build_vector:v8i32 i32:i32:$sub0, i32:i32:$sub1, i32:i32:$sub2, i32:i32:$sub3, i32:i32:$sub4, i32:i32:$sub5, i32:i32:$sub6, i32:i32:$sub7) - Complexity = 3
                // Dst: (INSERT_SUBREG:v8i32 (INSERT_SUBREG:v8i32 (INSERT_SUBREG:v8i32 (INSERT_SUBREG:v8i32 (INSERT_SUBREG:v8i32 (INSERT_SUBREG:v8i32 (INSERT_SUBREG:v8i32 (INSERT_SUBREG:v8i32 (IMPLICIT_DEF:v8i32), ?:i32:$sub0, sub0:i32), ?:i32:$sub1, sub1:i32), ?:i32:$sub2, sub2:i32), ?:i32:$sub3, sub3:i32), ?:i32:$sub4, sub4:i32), ?:i32:$sub5, sub5:i32), ?:i32:$sub6, sub6:i32), ?:i32:$sub7, sub7:i32)
/*34064*/     /*Scope*/ 32|128,2/*288*/, /*->34354*/
/*34066*/       OPC_RecordChild1, // #1 = $sub1
/*34067*/       OPC_CheckChild1Type, MVT::i32,
/*34069*/       OPC_RecordChild2, // #2 = $sub2
/*34070*/       OPC_CheckChild2Type, MVT::i32,
/*34072*/       OPC_RecordChild3, // #3 = $sub3
/*34073*/       OPC_CheckChild3Type, MVT::i32,
/*34075*/       OPC_RecordChild4, // #4 = $sub4
/*34076*/       OPC_CheckChild4Type, MVT::i32,
/*34078*/       OPC_RecordChild5, // #5 = $sub5
/*34079*/       OPC_CheckChild5Type, MVT::i32,
/*34081*/       OPC_RecordChild6, // #6 = $sub6
/*34082*/       OPC_CheckChild6Type, MVT::i32,
/*34084*/       OPC_RecordChild7, // #7 = $sub7
/*34085*/       OPC_CheckChild7Type, MVT::i32,
/*34087*/       OPC_MoveChild, 8,
/*34089*/       OPC_RecordNode, // #8 = $sub8
/*34090*/       OPC_CheckType, MVT::i32,
/*34092*/       OPC_MoveParent,
/*34093*/       OPC_MoveChild, 9,
/*34095*/       OPC_RecordNode, // #9 = $sub9
/*34096*/       OPC_CheckType, MVT::i32,
/*34098*/       OPC_MoveParent,
/*34099*/       OPC_MoveChild, 10,
/*34101*/       OPC_RecordNode, // #10 = $sub10
/*34102*/       OPC_CheckType, MVT::i32,
/*34104*/       OPC_MoveParent,
/*34105*/       OPC_MoveChild, 11,
/*34107*/       OPC_RecordNode, // #11 = $sub11
/*34108*/       OPC_CheckType, MVT::i32,
/*34110*/       OPC_MoveParent,
/*34111*/       OPC_MoveChild, 12,
/*34113*/       OPC_RecordNode, // #12 = $sub12
/*34114*/       OPC_CheckType, MVT::i32,
/*34116*/       OPC_MoveParent,
/*34117*/       OPC_MoveChild, 13,
/*34119*/       OPC_RecordNode, // #13 = $sub13
/*34120*/       OPC_CheckType, MVT::i32,
/*34122*/       OPC_MoveParent,
/*34123*/       OPC_MoveChild, 14,
/*34125*/       OPC_RecordNode, // #14 = $sub14
/*34126*/       OPC_CheckType, MVT::i32,
/*34128*/       OPC_MoveParent,
/*34129*/       OPC_MoveChild, 15,
/*34131*/       OPC_RecordNode, // #15 = $sub15
/*34132*/       OPC_CheckType, MVT::i32,
/*34134*/       OPC_MoveParent,
/*34135*/       OPC_CheckType, MVT::v16i32,
/*34137*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*34139*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v16i32, 0/*#Ops*/,  // Results = #16
/*34146*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*34149*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 16, 0, 17,  // Results = #18
/*34159*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*34162*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 18, 1, 19,  // Results = #20
/*34172*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*34175*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 20, 2, 21,  // Results = #22
/*34185*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*34188*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 22, 3, 23,  // Results = #24
/*34198*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*34201*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 24, 4, 25,  // Results = #26
/*34211*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*34214*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 26, 5, 27,  // Results = #28
/*34224*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*34227*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 28, 6, 29,  // Results = #30
/*34237*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*34240*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 30, 7, 31,  // Results = #32
/*34250*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub8,
/*34253*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 32, 8, 33,  // Results = #34
/*34263*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub9,
/*34266*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 34, 9, 35,  // Results = #36
/*34276*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub10,
/*34279*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 36, 10, 37,  // Results = #38
/*34289*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub11,
/*34292*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 38, 11, 39,  // Results = #40
/*34302*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub12,
/*34305*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 40, 12, 41,  // Results = #42
/*34315*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub13,
/*34318*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 42, 13, 43,  // Results = #44
/*34328*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub14,
/*34331*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 44, 14, 45,  // Results = #46
/*34341*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub15,
/*34344*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 46, 15, 47, 
                // Src: (build_vector:v16i32 i32:i32:$sub0, i32:i32:$sub1, i32:i32:$sub2, i32:i32:$sub3, i32:i32:$sub4, i32:i32:$sub5, i32:i32:$sub6, i32:i32:$sub7, i32:i32:$sub8, i32:i32:$sub9, i32:i32:$sub10, i32:i32:$sub11, i32:i32:$sub12, i32:i32:$sub13, i32:i32:$sub14, i32:i32:$sub15) - Complexity = 3
                // Dst: (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (IMPLICIT_DEF:v16i32), ?:i32:$sub0, sub0:i32), ?:i32:$sub1, sub1:i32), ?:i32:$sub2, sub2:i32), ?:i32:$sub3, sub3:i32), ?:i32:$sub4, sub4:i32), ?:i32:$sub5, sub5:i32), ?:i32:$sub6, sub6:i32), ?:i32:$sub7, sub7:i32), ?:i32:$sub8, sub8:i32), ?:i32:$sub9, sub9:i32), ?:i32:$sub10, sub10:i32), ?:i32:$sub11, sub11:i32), ?:i32:$sub12, sub12:i32), ?:i32:$sub13, sub13:i32), ?:i32:$sub14, sub14:i32), ?:i32:$sub15, sub15:i32)
/*34354*/     0, /*End of Scope*/
/*34355*/   /*Scope*/ 91|128,4/*603*/, /*->34960*/
/*34357*/     OPC_CheckChild0Type, MVT::f32,
/*34359*/     OPC_RecordChild1, // #1 = $sub1
/*34360*/     OPC_CheckChild1Type, MVT::f32,
/*34362*/     OPC_Scope, 37, /*->34401*/ // 4 children in Scope
/*34364*/       OPC_CheckType, MVT::v2f32,
/*34366*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*34368*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v2f32, 0/*#Ops*/,  // Results = #2
/*34375*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*34378*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v2f32, 3/*#Ops*/, 2, 0, 3,  // Results = #4
/*34388*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*34391*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v2f32, 3/*#Ops*/, 4, 1, 5, 
                // Src: (build_vector:v2f32 f32:f32:$sub0, f32:f32:$sub1) - Complexity = 3
                // Dst: (INSERT_SUBREG:v2f32 (INSERT_SUBREG:v2f32 (IMPLICIT_DEF:v2f32), ?:f32:$sub0, sub0:i32), ?:f32:$sub1, sub1:i32)
/*34401*/     /*Scope*/ 6|128,1/*134*/, /*->34537*/
/*34403*/       OPC_CheckType, MVT::v4f32,
/*34405*/       OPC_RecordChild2, // #2 = $z
/*34406*/       OPC_CheckChild2Type, MVT::f32,
/*34408*/       OPC_RecordChild3, // #3 = $w
/*34409*/       OPC_CheckChild3Type, MVT::f32,
/*34411*/       OPC_Scope, 61, /*->34474*/ // 2 children in Scope
/*34413*/         OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*34415*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #4
/*34422*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*34425*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 4, 0, 5,  // Results = #6
/*34435*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*34438*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 6, 1, 7,  // Results = #8
/*34448*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*34451*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 8, 2, 9,  // Results = #10
/*34461*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*34464*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 10, 3, 11, 
                  // Src: (build_vector:v4f32 f32:f32:$x, f32:f32:$y, f32:f32:$z, f32:f32:$w) - Complexity = 3
                  // Dst: (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (IMPLICIT_DEF:v4f32), ?:f32:$x, sub0:i32), ?:f32:$y, sub1:i32), ?:f32:$z, sub2:i32), ?:f32:$w, sub3:i32)
/*34474*/       /*Scope*/ 61, /*->34536*/
/*34475*/         OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*34477*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #4
/*34484*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*34487*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 4, 0, 5,  // Results = #6
/*34497*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*34500*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 6, 1, 7,  // Results = #8
/*34510*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*34513*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 8, 2, 9,  // Results = #10
/*34523*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*34526*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 10, 3, 11, 
                  // Src: (build_vector:v4f32 f32:f32:$x, f32:f32:$y, f32:f32:$z, f32:f32:$w) - Complexity = 3
                  // Dst: (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (IMPLICIT_DEF:v4f32), ?:f32:$x, sub0:i32), ?:f32:$y, sub1:i32), ?:f32:$z, sub2:i32), ?:f32:$w, sub3:i32)
/*34536*/       0, /*End of Scope*/
/*34537*/     /*Scope*/ 5|128,1/*133*/, /*->34672*/
/*34539*/       OPC_CheckType, MVT::v8f32,
/*34541*/       OPC_RecordChild2, // #2 = $sub2
/*34542*/       OPC_CheckChild2Type, MVT::f32,
/*34544*/       OPC_RecordChild3, // #3 = $sub3
/*34545*/       OPC_CheckChild3Type, MVT::f32,
/*34547*/       OPC_RecordChild4, // #4 = $sub4
/*34548*/       OPC_CheckChild4Type, MVT::f32,
/*34550*/       OPC_RecordChild5, // #5 = $sub5
/*34551*/       OPC_CheckChild5Type, MVT::f32,
/*34553*/       OPC_RecordChild6, // #6 = $sub6
/*34554*/       OPC_CheckChild6Type, MVT::f32,
/*34556*/       OPC_RecordChild7, // #7 = $sub7
/*34557*/       OPC_CheckChild7Type, MVT::f32,
/*34559*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*34561*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v8f32, 0/*#Ops*/,  // Results = #8
/*34568*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*34571*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 8, 0, 9,  // Results = #10
/*34581*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*34584*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 10, 1, 11,  // Results = #12
/*34594*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*34597*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 12, 2, 13,  // Results = #14
/*34607*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*34610*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 14, 3, 15,  // Results = #16
/*34620*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*34623*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 16, 4, 17,  // Results = #18
/*34633*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*34636*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 18, 5, 19,  // Results = #20
/*34646*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*34649*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 20, 6, 21,  // Results = #22
/*34659*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*34662*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 22, 7, 23, 
                // Src: (build_vector:v8f32 f32:f32:$sub0, f32:f32:$sub1, f32:f32:$sub2, f32:f32:$sub3, f32:f32:$sub4, f32:f32:$sub5, f32:f32:$sub6, f32:f32:$sub7) - Complexity = 3
                // Dst: (INSERT_SUBREG:v8f32 (INSERT_SUBREG:v8f32 (INSERT_SUBREG:v8f32 (INSERT_SUBREG:v8f32 (INSERT_SUBREG:v8f32 (INSERT_SUBREG:v8f32 (INSERT_SUBREG:v8f32 (INSERT_SUBREG:v8f32 (IMPLICIT_DEF:v8f32), ?:f32:$sub0, sub0:i32), ?:f32:$sub1, sub1:i32), ?:f32:$sub2, sub2:i32), ?:f32:$sub3, sub3:i32), ?:f32:$sub4, sub4:i32), ?:f32:$sub5, sub5:i32), ?:f32:$sub6, sub6:i32), ?:f32:$sub7, sub7:i32)
/*34672*/     /*Scope*/ 29|128,2/*285*/, /*->34959*/
/*34674*/       OPC_RecordChild2, // #2 = $sub2
/*34675*/       OPC_CheckChild2Type, MVT::f32,
/*34677*/       OPC_RecordChild3, // #3 = $sub3
/*34678*/       OPC_CheckChild3Type, MVT::f32,
/*34680*/       OPC_RecordChild4, // #4 = $sub4
/*34681*/       OPC_CheckChild4Type, MVT::f32,
/*34683*/       OPC_RecordChild5, // #5 = $sub5
/*34684*/       OPC_CheckChild5Type, MVT::f32,
/*34686*/       OPC_RecordChild6, // #6 = $sub6
/*34687*/       OPC_CheckChild6Type, MVT::f32,
/*34689*/       OPC_RecordChild7, // #7 = $sub7
/*34690*/       OPC_CheckChild7Type, MVT::f32,
/*34692*/       OPC_MoveChild, 8,
/*34694*/       OPC_RecordNode, // #8 = $sub8
/*34695*/       OPC_CheckType, MVT::f32,
/*34697*/       OPC_MoveParent,
/*34698*/       OPC_MoveChild, 9,
/*34700*/       OPC_RecordNode, // #9 = $sub9
/*34701*/       OPC_CheckType, MVT::f32,
/*34703*/       OPC_MoveParent,
/*34704*/       OPC_MoveChild, 10,
/*34706*/       OPC_RecordNode, // #10 = $sub10
/*34707*/       OPC_CheckType, MVT::f32,
/*34709*/       OPC_MoveParent,
/*34710*/       OPC_MoveChild, 11,
/*34712*/       OPC_RecordNode, // #11 = $sub11
/*34713*/       OPC_CheckType, MVT::f32,
/*34715*/       OPC_MoveParent,
/*34716*/       OPC_MoveChild, 12,
/*34718*/       OPC_RecordNode, // #12 = $sub12
/*34719*/       OPC_CheckType, MVT::f32,
/*34721*/       OPC_MoveParent,
/*34722*/       OPC_MoveChild, 13,
/*34724*/       OPC_RecordNode, // #13 = $sub13
/*34725*/       OPC_CheckType, MVT::f32,
/*34727*/       OPC_MoveParent,
/*34728*/       OPC_MoveChild, 14,
/*34730*/       OPC_RecordNode, // #14 = $sub14
/*34731*/       OPC_CheckType, MVT::f32,
/*34733*/       OPC_MoveParent,
/*34734*/       OPC_MoveChild, 15,
/*34736*/       OPC_RecordNode, // #15 = $sub15
/*34737*/       OPC_CheckType, MVT::f32,
/*34739*/       OPC_MoveParent,
/*34740*/       OPC_CheckType, MVT::v16f32,
/*34742*/       OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*34744*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v16f32, 0/*#Ops*/,  // Results = #16
/*34751*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*34754*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 16, 0, 17,  // Results = #18
/*34764*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*34767*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 18, 1, 19,  // Results = #20
/*34777*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*34780*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 20, 2, 21,  // Results = #22
/*34790*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*34793*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 22, 3, 23,  // Results = #24
/*34803*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*34806*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 24, 4, 25,  // Results = #26
/*34816*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*34819*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 26, 5, 27,  // Results = #28
/*34829*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*34832*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 28, 6, 29,  // Results = #30
/*34842*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*34845*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 30, 7, 31,  // Results = #32
/*34855*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub8,
/*34858*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 32, 8, 33,  // Results = #34
/*34868*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub9,
/*34871*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 34, 9, 35,  // Results = #36
/*34881*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub10,
/*34884*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 36, 10, 37,  // Results = #38
/*34894*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub11,
/*34897*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 38, 11, 39,  // Results = #40
/*34907*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub12,
/*34910*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 40, 12, 41,  // Results = #42
/*34920*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub13,
/*34923*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 42, 13, 43,  // Results = #44
/*34933*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub14,
/*34936*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 44, 14, 45,  // Results = #46
/*34946*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub15,
/*34949*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 46, 15, 47, 
                // Src: (build_vector:v16f32 f32:f32:$sub0, f32:f32:$sub1, f32:f32:$sub2, f32:f32:$sub3, f32:f32:$sub4, f32:f32:$sub5, f32:f32:$sub6, f32:f32:$sub7, f32:f32:$sub8, f32:f32:$sub9, f32:f32:$sub10, f32:f32:$sub11, f32:f32:$sub12, f32:f32:$sub13, f32:f32:$sub14, f32:f32:$sub15) - Complexity = 3
                // Dst: (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (IMPLICIT_DEF:v16f32), ?:f32:$sub0, sub0:i32), ?:f32:$sub1, sub1:i32), ?:f32:$sub2, sub2:i32), ?:f32:$sub3, sub3:i32), ?:f32:$sub4, sub4:i32), ?:f32:$sub5, sub5:i32), ?:f32:$sub6, sub6:i32), ?:f32:$sub7, sub7:i32), ?:f32:$sub8, sub8:i32), ?:f32:$sub9, sub9:i32), ?:f32:$sub10, sub10:i32), ?:f32:$sub11, sub11:i32), ?:f32:$sub12, sub12:i32), ?:f32:$sub13, sub13:i32), ?:f32:$sub14, sub14:i32), ?:f32:$sub15, sub15:i32)
/*34959*/     0, /*End of Scope*/
/*34960*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 70|128,17/*2246*/,  TARGET_VAL(AMDGPUISD::TEXTURE_FETCH),// ->37211
/*34965*/   OPC_MoveChild, 0,
/*34967*/   OPC_CheckType, MVT::i32,
/*34969*/   OPC_Scope, 94|128,1/*222*/, /*->35194*/ // 10 children in Scope
/*34972*/     OPC_CheckInteger, 0, 
/*34974*/     OPC_MoveParent,
/*34975*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*34976*/     OPC_CheckChild1Type, MVT::v4f32,
/*34978*/     OPC_RecordChild2, // #1 = $srcx
/*34979*/     OPC_MoveChild, 2,
/*34981*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*34984*/     OPC_CheckType, MVT::i32,
/*34986*/     OPC_MoveParent,
/*34987*/     OPC_RecordChild3, // #2 = $srcy
/*34988*/     OPC_MoveChild, 3,
/*34990*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*34993*/     OPC_CheckType, MVT::i32,
/*34995*/     OPC_MoveParent,
/*34996*/     OPC_RecordChild4, // #3 = $srcz
/*34997*/     OPC_MoveChild, 4,
/*34999*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35002*/     OPC_CheckType, MVT::i32,
/*35004*/     OPC_MoveParent,
/*35005*/     OPC_RecordChild5, // #4 = $srcw
/*35006*/     OPC_MoveChild, 5,
/*35008*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35011*/     OPC_CheckType, MVT::i32,
/*35013*/     OPC_MoveParent,
/*35014*/     OPC_RecordChild6, // #5 = $offsetx
/*35015*/     OPC_MoveChild, 6,
/*35017*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35020*/     OPC_CheckType, MVT::i32,
/*35022*/     OPC_MoveParent,
/*35023*/     OPC_RecordChild7, // #6 = $offsety
/*35024*/     OPC_MoveChild, 7,
/*35026*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35029*/     OPC_CheckType, MVT::i32,
/*35031*/     OPC_MoveParent,
/*35032*/     OPC_MoveChild, 8,
/*35034*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35037*/     OPC_RecordNode, // #7 = $offsetz
/*35038*/     OPC_CheckType, MVT::i32,
/*35040*/     OPC_MoveParent,
/*35041*/     OPC_MoveChild, 9,
/*35043*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35046*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*35047*/     OPC_CheckType, MVT::i32,
/*35049*/     OPC_MoveParent,
/*35050*/     OPC_MoveChild, 10,
/*35052*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35055*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*35056*/     OPC_CheckType, MVT::i32,
/*35058*/     OPC_MoveParent,
/*35059*/     OPC_MoveChild, 11,
/*35061*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35064*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*35065*/     OPC_CheckType, MVT::i32,
/*35067*/     OPC_MoveParent,
/*35068*/     OPC_MoveChild, 12,
/*35070*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35073*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*35074*/     OPC_CheckType, MVT::i32,
/*35076*/     OPC_MoveParent,
/*35077*/     OPC_MoveChild, 13,
/*35079*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35082*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*35083*/     OPC_CheckType, MVT::i32,
/*35085*/     OPC_MoveParent,
/*35086*/     OPC_MoveChild, 14,
/*35088*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35091*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*35092*/     OPC_CheckType, MVT::i32,
/*35094*/     OPC_MoveParent,
/*35095*/     OPC_MoveChild, 15,
/*35097*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35100*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*35101*/     OPC_CheckType, MVT::i32,
/*35103*/     OPC_MoveParent,
/*35104*/     OPC_MoveChild, 16,
/*35106*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35109*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*35110*/     OPC_CheckType, MVT::i32,
/*35112*/     OPC_MoveParent,
/*35113*/     OPC_MoveChild, 17,
/*35115*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35118*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*35119*/     OPC_CheckType, MVT::i32,
/*35121*/     OPC_MoveParent,
/*35122*/     OPC_MoveChild, 18,
/*35124*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35127*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*35128*/     OPC_CheckType, MVT::i32,
/*35130*/     OPC_MoveParent,
/*35131*/     OPC_CheckType, MVT::v4f32,
/*35133*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*35135*/     OPC_EmitConvertToTarget, 1,
/*35137*/     OPC_EmitConvertToTarget, 2,
/*35139*/     OPC_EmitConvertToTarget, 3,
/*35141*/     OPC_EmitConvertToTarget, 4,
/*35143*/     OPC_EmitConvertToTarget, 5,
/*35145*/     OPC_EmitConvertToTarget, 6,
/*35147*/     OPC_EmitConvertToTarget, 7,
/*35149*/     OPC_EmitConvertToTarget, 8,
/*35151*/     OPC_EmitConvertToTarget, 9,
/*35153*/     OPC_EmitConvertToTarget, 10,
/*35155*/     OPC_EmitConvertToTarget, 11,
/*35157*/     OPC_EmitConvertToTarget, 12,
/*35159*/     OPC_EmitConvertToTarget, 13,
/*35161*/     OPC_EmitConvertToTarget, 14,
/*35163*/     OPC_EmitConvertToTarget, 15,
/*35165*/     OPC_EmitConvertToTarget, 16,
/*35167*/     OPC_EmitConvertToTarget, 17,
/*35169*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_SAMPLE), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 0:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_SAMPLE:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*35194*/   /*Scope*/ 94|128,1/*222*/, /*->35418*/
/*35196*/     OPC_CheckInteger, 1, 
/*35198*/     OPC_MoveParent,
/*35199*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*35200*/     OPC_CheckChild1Type, MVT::v4f32,
/*35202*/     OPC_RecordChild2, // #1 = $srcx
/*35203*/     OPC_MoveChild, 2,
/*35205*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35208*/     OPC_CheckType, MVT::i32,
/*35210*/     OPC_MoveParent,
/*35211*/     OPC_RecordChild3, // #2 = $srcy
/*35212*/     OPC_MoveChild, 3,
/*35214*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35217*/     OPC_CheckType, MVT::i32,
/*35219*/     OPC_MoveParent,
/*35220*/     OPC_RecordChild4, // #3 = $srcz
/*35221*/     OPC_MoveChild, 4,
/*35223*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35226*/     OPC_CheckType, MVT::i32,
/*35228*/     OPC_MoveParent,
/*35229*/     OPC_RecordChild5, // #4 = $srcw
/*35230*/     OPC_MoveChild, 5,
/*35232*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35235*/     OPC_CheckType, MVT::i32,
/*35237*/     OPC_MoveParent,
/*35238*/     OPC_RecordChild6, // #5 = $offsetx
/*35239*/     OPC_MoveChild, 6,
/*35241*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35244*/     OPC_CheckType, MVT::i32,
/*35246*/     OPC_MoveParent,
/*35247*/     OPC_RecordChild7, // #6 = $offsety
/*35248*/     OPC_MoveChild, 7,
/*35250*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35253*/     OPC_CheckType, MVT::i32,
/*35255*/     OPC_MoveParent,
/*35256*/     OPC_MoveChild, 8,
/*35258*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35261*/     OPC_RecordNode, // #7 = $offsetz
/*35262*/     OPC_CheckType, MVT::i32,
/*35264*/     OPC_MoveParent,
/*35265*/     OPC_MoveChild, 9,
/*35267*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35270*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*35271*/     OPC_CheckType, MVT::i32,
/*35273*/     OPC_MoveParent,
/*35274*/     OPC_MoveChild, 10,
/*35276*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35279*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*35280*/     OPC_CheckType, MVT::i32,
/*35282*/     OPC_MoveParent,
/*35283*/     OPC_MoveChild, 11,
/*35285*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35288*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*35289*/     OPC_CheckType, MVT::i32,
/*35291*/     OPC_MoveParent,
/*35292*/     OPC_MoveChild, 12,
/*35294*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35297*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*35298*/     OPC_CheckType, MVT::i32,
/*35300*/     OPC_MoveParent,
/*35301*/     OPC_MoveChild, 13,
/*35303*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35306*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*35307*/     OPC_CheckType, MVT::i32,
/*35309*/     OPC_MoveParent,
/*35310*/     OPC_MoveChild, 14,
/*35312*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35315*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*35316*/     OPC_CheckType, MVT::i32,
/*35318*/     OPC_MoveParent,
/*35319*/     OPC_MoveChild, 15,
/*35321*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35324*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*35325*/     OPC_CheckType, MVT::i32,
/*35327*/     OPC_MoveParent,
/*35328*/     OPC_MoveChild, 16,
/*35330*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35333*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*35334*/     OPC_CheckType, MVT::i32,
/*35336*/     OPC_MoveParent,
/*35337*/     OPC_MoveChild, 17,
/*35339*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35342*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*35343*/     OPC_CheckType, MVT::i32,
/*35345*/     OPC_MoveParent,
/*35346*/     OPC_MoveChild, 18,
/*35348*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35351*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*35352*/     OPC_CheckType, MVT::i32,
/*35354*/     OPC_MoveParent,
/*35355*/     OPC_CheckType, MVT::v4f32,
/*35357*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*35359*/     OPC_EmitConvertToTarget, 1,
/*35361*/     OPC_EmitConvertToTarget, 2,
/*35363*/     OPC_EmitConvertToTarget, 3,
/*35365*/     OPC_EmitConvertToTarget, 4,
/*35367*/     OPC_EmitConvertToTarget, 5,
/*35369*/     OPC_EmitConvertToTarget, 6,
/*35371*/     OPC_EmitConvertToTarget, 7,
/*35373*/     OPC_EmitConvertToTarget, 8,
/*35375*/     OPC_EmitConvertToTarget, 9,
/*35377*/     OPC_EmitConvertToTarget, 10,
/*35379*/     OPC_EmitConvertToTarget, 11,
/*35381*/     OPC_EmitConvertToTarget, 12,
/*35383*/     OPC_EmitConvertToTarget, 13,
/*35385*/     OPC_EmitConvertToTarget, 14,
/*35387*/     OPC_EmitConvertToTarget, 15,
/*35389*/     OPC_EmitConvertToTarget, 16,
/*35391*/     OPC_EmitConvertToTarget, 17,
/*35393*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_SAMPLE_C), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 1:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_SAMPLE_C:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*35418*/   /*Scope*/ 94|128,1/*222*/, /*->35642*/
/*35420*/     OPC_CheckInteger, 2, 
/*35422*/     OPC_MoveParent,
/*35423*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*35424*/     OPC_CheckChild1Type, MVT::v4f32,
/*35426*/     OPC_RecordChild2, // #1 = $srcx
/*35427*/     OPC_MoveChild, 2,
/*35429*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35432*/     OPC_CheckType, MVT::i32,
/*35434*/     OPC_MoveParent,
/*35435*/     OPC_RecordChild3, // #2 = $srcy
/*35436*/     OPC_MoveChild, 3,
/*35438*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35441*/     OPC_CheckType, MVT::i32,
/*35443*/     OPC_MoveParent,
/*35444*/     OPC_RecordChild4, // #3 = $srcz
/*35445*/     OPC_MoveChild, 4,
/*35447*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35450*/     OPC_CheckType, MVT::i32,
/*35452*/     OPC_MoveParent,
/*35453*/     OPC_RecordChild5, // #4 = $srcw
/*35454*/     OPC_MoveChild, 5,
/*35456*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35459*/     OPC_CheckType, MVT::i32,
/*35461*/     OPC_MoveParent,
/*35462*/     OPC_RecordChild6, // #5 = $offsetx
/*35463*/     OPC_MoveChild, 6,
/*35465*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35468*/     OPC_CheckType, MVT::i32,
/*35470*/     OPC_MoveParent,
/*35471*/     OPC_RecordChild7, // #6 = $offsety
/*35472*/     OPC_MoveChild, 7,
/*35474*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35477*/     OPC_CheckType, MVT::i32,
/*35479*/     OPC_MoveParent,
/*35480*/     OPC_MoveChild, 8,
/*35482*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35485*/     OPC_RecordNode, // #7 = $offsetz
/*35486*/     OPC_CheckType, MVT::i32,
/*35488*/     OPC_MoveParent,
/*35489*/     OPC_MoveChild, 9,
/*35491*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35494*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*35495*/     OPC_CheckType, MVT::i32,
/*35497*/     OPC_MoveParent,
/*35498*/     OPC_MoveChild, 10,
/*35500*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35503*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*35504*/     OPC_CheckType, MVT::i32,
/*35506*/     OPC_MoveParent,
/*35507*/     OPC_MoveChild, 11,
/*35509*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35512*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*35513*/     OPC_CheckType, MVT::i32,
/*35515*/     OPC_MoveParent,
/*35516*/     OPC_MoveChild, 12,
/*35518*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35521*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*35522*/     OPC_CheckType, MVT::i32,
/*35524*/     OPC_MoveParent,
/*35525*/     OPC_MoveChild, 13,
/*35527*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35530*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*35531*/     OPC_CheckType, MVT::i32,
/*35533*/     OPC_MoveParent,
/*35534*/     OPC_MoveChild, 14,
/*35536*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35539*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*35540*/     OPC_CheckType, MVT::i32,
/*35542*/     OPC_MoveParent,
/*35543*/     OPC_MoveChild, 15,
/*35545*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35548*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*35549*/     OPC_CheckType, MVT::i32,
/*35551*/     OPC_MoveParent,
/*35552*/     OPC_MoveChild, 16,
/*35554*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35557*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*35558*/     OPC_CheckType, MVT::i32,
/*35560*/     OPC_MoveParent,
/*35561*/     OPC_MoveChild, 17,
/*35563*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35566*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*35567*/     OPC_CheckType, MVT::i32,
/*35569*/     OPC_MoveParent,
/*35570*/     OPC_MoveChild, 18,
/*35572*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35575*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*35576*/     OPC_CheckType, MVT::i32,
/*35578*/     OPC_MoveParent,
/*35579*/     OPC_CheckType, MVT::v4f32,
/*35581*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*35583*/     OPC_EmitConvertToTarget, 1,
/*35585*/     OPC_EmitConvertToTarget, 2,
/*35587*/     OPC_EmitConvertToTarget, 3,
/*35589*/     OPC_EmitConvertToTarget, 4,
/*35591*/     OPC_EmitConvertToTarget, 5,
/*35593*/     OPC_EmitConvertToTarget, 6,
/*35595*/     OPC_EmitConvertToTarget, 7,
/*35597*/     OPC_EmitConvertToTarget, 8,
/*35599*/     OPC_EmitConvertToTarget, 9,
/*35601*/     OPC_EmitConvertToTarget, 10,
/*35603*/     OPC_EmitConvertToTarget, 11,
/*35605*/     OPC_EmitConvertToTarget, 12,
/*35607*/     OPC_EmitConvertToTarget, 13,
/*35609*/     OPC_EmitConvertToTarget, 14,
/*35611*/     OPC_EmitConvertToTarget, 15,
/*35613*/     OPC_EmitConvertToTarget, 16,
/*35615*/     OPC_EmitConvertToTarget, 17,
/*35617*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_SAMPLE_L), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 2:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_SAMPLE_L:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*35642*/   /*Scope*/ 94|128,1/*222*/, /*->35866*/
/*35644*/     OPC_CheckInteger, 3, 
/*35646*/     OPC_MoveParent,
/*35647*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*35648*/     OPC_CheckChild1Type, MVT::v4f32,
/*35650*/     OPC_RecordChild2, // #1 = $srcx
/*35651*/     OPC_MoveChild, 2,
/*35653*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35656*/     OPC_CheckType, MVT::i32,
/*35658*/     OPC_MoveParent,
/*35659*/     OPC_RecordChild3, // #2 = $srcy
/*35660*/     OPC_MoveChild, 3,
/*35662*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35665*/     OPC_CheckType, MVT::i32,
/*35667*/     OPC_MoveParent,
/*35668*/     OPC_RecordChild4, // #3 = $srcz
/*35669*/     OPC_MoveChild, 4,
/*35671*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35674*/     OPC_CheckType, MVT::i32,
/*35676*/     OPC_MoveParent,
/*35677*/     OPC_RecordChild5, // #4 = $srcw
/*35678*/     OPC_MoveChild, 5,
/*35680*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35683*/     OPC_CheckType, MVT::i32,
/*35685*/     OPC_MoveParent,
/*35686*/     OPC_RecordChild6, // #5 = $offsetx
/*35687*/     OPC_MoveChild, 6,
/*35689*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35692*/     OPC_CheckType, MVT::i32,
/*35694*/     OPC_MoveParent,
/*35695*/     OPC_RecordChild7, // #6 = $offsety
/*35696*/     OPC_MoveChild, 7,
/*35698*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35701*/     OPC_CheckType, MVT::i32,
/*35703*/     OPC_MoveParent,
/*35704*/     OPC_MoveChild, 8,
/*35706*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35709*/     OPC_RecordNode, // #7 = $offsetz
/*35710*/     OPC_CheckType, MVT::i32,
/*35712*/     OPC_MoveParent,
/*35713*/     OPC_MoveChild, 9,
/*35715*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35718*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*35719*/     OPC_CheckType, MVT::i32,
/*35721*/     OPC_MoveParent,
/*35722*/     OPC_MoveChild, 10,
/*35724*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35727*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*35728*/     OPC_CheckType, MVT::i32,
/*35730*/     OPC_MoveParent,
/*35731*/     OPC_MoveChild, 11,
/*35733*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35736*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*35737*/     OPC_CheckType, MVT::i32,
/*35739*/     OPC_MoveParent,
/*35740*/     OPC_MoveChild, 12,
/*35742*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35745*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*35746*/     OPC_CheckType, MVT::i32,
/*35748*/     OPC_MoveParent,
/*35749*/     OPC_MoveChild, 13,
/*35751*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35754*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*35755*/     OPC_CheckType, MVT::i32,
/*35757*/     OPC_MoveParent,
/*35758*/     OPC_MoveChild, 14,
/*35760*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35763*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*35764*/     OPC_CheckType, MVT::i32,
/*35766*/     OPC_MoveParent,
/*35767*/     OPC_MoveChild, 15,
/*35769*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35772*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*35773*/     OPC_CheckType, MVT::i32,
/*35775*/     OPC_MoveParent,
/*35776*/     OPC_MoveChild, 16,
/*35778*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35781*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*35782*/     OPC_CheckType, MVT::i32,
/*35784*/     OPC_MoveParent,
/*35785*/     OPC_MoveChild, 17,
/*35787*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35790*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*35791*/     OPC_CheckType, MVT::i32,
/*35793*/     OPC_MoveParent,
/*35794*/     OPC_MoveChild, 18,
/*35796*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35799*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*35800*/     OPC_CheckType, MVT::i32,
/*35802*/     OPC_MoveParent,
/*35803*/     OPC_CheckType, MVT::v4f32,
/*35805*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*35807*/     OPC_EmitConvertToTarget, 1,
/*35809*/     OPC_EmitConvertToTarget, 2,
/*35811*/     OPC_EmitConvertToTarget, 3,
/*35813*/     OPC_EmitConvertToTarget, 4,
/*35815*/     OPC_EmitConvertToTarget, 5,
/*35817*/     OPC_EmitConvertToTarget, 6,
/*35819*/     OPC_EmitConvertToTarget, 7,
/*35821*/     OPC_EmitConvertToTarget, 8,
/*35823*/     OPC_EmitConvertToTarget, 9,
/*35825*/     OPC_EmitConvertToTarget, 10,
/*35827*/     OPC_EmitConvertToTarget, 11,
/*35829*/     OPC_EmitConvertToTarget, 12,
/*35831*/     OPC_EmitConvertToTarget, 13,
/*35833*/     OPC_EmitConvertToTarget, 14,
/*35835*/     OPC_EmitConvertToTarget, 15,
/*35837*/     OPC_EmitConvertToTarget, 16,
/*35839*/     OPC_EmitConvertToTarget, 17,
/*35841*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_SAMPLE_C_L), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 3:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_SAMPLE_C_L:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*35866*/   /*Scope*/ 94|128,1/*222*/, /*->36090*/
/*35868*/     OPC_CheckInteger, 4, 
/*35870*/     OPC_MoveParent,
/*35871*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*35872*/     OPC_CheckChild1Type, MVT::v4f32,
/*35874*/     OPC_RecordChild2, // #1 = $srcx
/*35875*/     OPC_MoveChild, 2,
/*35877*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35880*/     OPC_CheckType, MVT::i32,
/*35882*/     OPC_MoveParent,
/*35883*/     OPC_RecordChild3, // #2 = $srcy
/*35884*/     OPC_MoveChild, 3,
/*35886*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35889*/     OPC_CheckType, MVT::i32,
/*35891*/     OPC_MoveParent,
/*35892*/     OPC_RecordChild4, // #3 = $srcz
/*35893*/     OPC_MoveChild, 4,
/*35895*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35898*/     OPC_CheckType, MVT::i32,
/*35900*/     OPC_MoveParent,
/*35901*/     OPC_RecordChild5, // #4 = $srcw
/*35902*/     OPC_MoveChild, 5,
/*35904*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35907*/     OPC_CheckType, MVT::i32,
/*35909*/     OPC_MoveParent,
/*35910*/     OPC_RecordChild6, // #5 = $offsetx
/*35911*/     OPC_MoveChild, 6,
/*35913*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35916*/     OPC_CheckType, MVT::i32,
/*35918*/     OPC_MoveParent,
/*35919*/     OPC_RecordChild7, // #6 = $offsety
/*35920*/     OPC_MoveChild, 7,
/*35922*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35925*/     OPC_CheckType, MVT::i32,
/*35927*/     OPC_MoveParent,
/*35928*/     OPC_MoveChild, 8,
/*35930*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35933*/     OPC_RecordNode, // #7 = $offsetz
/*35934*/     OPC_CheckType, MVT::i32,
/*35936*/     OPC_MoveParent,
/*35937*/     OPC_MoveChild, 9,
/*35939*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35942*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*35943*/     OPC_CheckType, MVT::i32,
/*35945*/     OPC_MoveParent,
/*35946*/     OPC_MoveChild, 10,
/*35948*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35951*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*35952*/     OPC_CheckType, MVT::i32,
/*35954*/     OPC_MoveParent,
/*35955*/     OPC_MoveChild, 11,
/*35957*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35960*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*35961*/     OPC_CheckType, MVT::i32,
/*35963*/     OPC_MoveParent,
/*35964*/     OPC_MoveChild, 12,
/*35966*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35969*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*35970*/     OPC_CheckType, MVT::i32,
/*35972*/     OPC_MoveParent,
/*35973*/     OPC_MoveChild, 13,
/*35975*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35978*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*35979*/     OPC_CheckType, MVT::i32,
/*35981*/     OPC_MoveParent,
/*35982*/     OPC_MoveChild, 14,
/*35984*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35987*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*35988*/     OPC_CheckType, MVT::i32,
/*35990*/     OPC_MoveParent,
/*35991*/     OPC_MoveChild, 15,
/*35993*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35996*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*35997*/     OPC_CheckType, MVT::i32,
/*35999*/     OPC_MoveParent,
/*36000*/     OPC_MoveChild, 16,
/*36002*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36005*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*36006*/     OPC_CheckType, MVT::i32,
/*36008*/     OPC_MoveParent,
/*36009*/     OPC_MoveChild, 17,
/*36011*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36014*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*36015*/     OPC_CheckType, MVT::i32,
/*36017*/     OPC_MoveParent,
/*36018*/     OPC_MoveChild, 18,
/*36020*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36023*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*36024*/     OPC_CheckType, MVT::i32,
/*36026*/     OPC_MoveParent,
/*36027*/     OPC_CheckType, MVT::v4f32,
/*36029*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*36031*/     OPC_EmitConvertToTarget, 1,
/*36033*/     OPC_EmitConvertToTarget, 2,
/*36035*/     OPC_EmitConvertToTarget, 3,
/*36037*/     OPC_EmitConvertToTarget, 4,
/*36039*/     OPC_EmitConvertToTarget, 5,
/*36041*/     OPC_EmitConvertToTarget, 6,
/*36043*/     OPC_EmitConvertToTarget, 7,
/*36045*/     OPC_EmitConvertToTarget, 8,
/*36047*/     OPC_EmitConvertToTarget, 9,
/*36049*/     OPC_EmitConvertToTarget, 10,
/*36051*/     OPC_EmitConvertToTarget, 11,
/*36053*/     OPC_EmitConvertToTarget, 12,
/*36055*/     OPC_EmitConvertToTarget, 13,
/*36057*/     OPC_EmitConvertToTarget, 14,
/*36059*/     OPC_EmitConvertToTarget, 15,
/*36061*/     OPC_EmitConvertToTarget, 16,
/*36063*/     OPC_EmitConvertToTarget, 17,
/*36065*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_SAMPLE_LB), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 4:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_SAMPLE_LB:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*36090*/   /*Scope*/ 94|128,1/*222*/, /*->36314*/
/*36092*/     OPC_CheckInteger, 5, 
/*36094*/     OPC_MoveParent,
/*36095*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*36096*/     OPC_CheckChild1Type, MVT::v4f32,
/*36098*/     OPC_RecordChild2, // #1 = $srcx
/*36099*/     OPC_MoveChild, 2,
/*36101*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36104*/     OPC_CheckType, MVT::i32,
/*36106*/     OPC_MoveParent,
/*36107*/     OPC_RecordChild3, // #2 = $srcy
/*36108*/     OPC_MoveChild, 3,
/*36110*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36113*/     OPC_CheckType, MVT::i32,
/*36115*/     OPC_MoveParent,
/*36116*/     OPC_RecordChild4, // #3 = $srcz
/*36117*/     OPC_MoveChild, 4,
/*36119*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36122*/     OPC_CheckType, MVT::i32,
/*36124*/     OPC_MoveParent,
/*36125*/     OPC_RecordChild5, // #4 = $srcw
/*36126*/     OPC_MoveChild, 5,
/*36128*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36131*/     OPC_CheckType, MVT::i32,
/*36133*/     OPC_MoveParent,
/*36134*/     OPC_RecordChild6, // #5 = $offsetx
/*36135*/     OPC_MoveChild, 6,
/*36137*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36140*/     OPC_CheckType, MVT::i32,
/*36142*/     OPC_MoveParent,
/*36143*/     OPC_RecordChild7, // #6 = $offsety
/*36144*/     OPC_MoveChild, 7,
/*36146*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36149*/     OPC_CheckType, MVT::i32,
/*36151*/     OPC_MoveParent,
/*36152*/     OPC_MoveChild, 8,
/*36154*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36157*/     OPC_RecordNode, // #7 = $offsetz
/*36158*/     OPC_CheckType, MVT::i32,
/*36160*/     OPC_MoveParent,
/*36161*/     OPC_MoveChild, 9,
/*36163*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36166*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*36167*/     OPC_CheckType, MVT::i32,
/*36169*/     OPC_MoveParent,
/*36170*/     OPC_MoveChild, 10,
/*36172*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36175*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*36176*/     OPC_CheckType, MVT::i32,
/*36178*/     OPC_MoveParent,
/*36179*/     OPC_MoveChild, 11,
/*36181*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36184*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*36185*/     OPC_CheckType, MVT::i32,
/*36187*/     OPC_MoveParent,
/*36188*/     OPC_MoveChild, 12,
/*36190*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36193*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*36194*/     OPC_CheckType, MVT::i32,
/*36196*/     OPC_MoveParent,
/*36197*/     OPC_MoveChild, 13,
/*36199*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36202*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*36203*/     OPC_CheckType, MVT::i32,
/*36205*/     OPC_MoveParent,
/*36206*/     OPC_MoveChild, 14,
/*36208*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36211*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*36212*/     OPC_CheckType, MVT::i32,
/*36214*/     OPC_MoveParent,
/*36215*/     OPC_MoveChild, 15,
/*36217*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36220*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*36221*/     OPC_CheckType, MVT::i32,
/*36223*/     OPC_MoveParent,
/*36224*/     OPC_MoveChild, 16,
/*36226*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36229*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*36230*/     OPC_CheckType, MVT::i32,
/*36232*/     OPC_MoveParent,
/*36233*/     OPC_MoveChild, 17,
/*36235*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36238*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*36239*/     OPC_CheckType, MVT::i32,
/*36241*/     OPC_MoveParent,
/*36242*/     OPC_MoveChild, 18,
/*36244*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36247*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*36248*/     OPC_CheckType, MVT::i32,
/*36250*/     OPC_MoveParent,
/*36251*/     OPC_CheckType, MVT::v4f32,
/*36253*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*36255*/     OPC_EmitConvertToTarget, 1,
/*36257*/     OPC_EmitConvertToTarget, 2,
/*36259*/     OPC_EmitConvertToTarget, 3,
/*36261*/     OPC_EmitConvertToTarget, 4,
/*36263*/     OPC_EmitConvertToTarget, 5,
/*36265*/     OPC_EmitConvertToTarget, 6,
/*36267*/     OPC_EmitConvertToTarget, 7,
/*36269*/     OPC_EmitConvertToTarget, 8,
/*36271*/     OPC_EmitConvertToTarget, 9,
/*36273*/     OPC_EmitConvertToTarget, 10,
/*36275*/     OPC_EmitConvertToTarget, 11,
/*36277*/     OPC_EmitConvertToTarget, 12,
/*36279*/     OPC_EmitConvertToTarget, 13,
/*36281*/     OPC_EmitConvertToTarget, 14,
/*36283*/     OPC_EmitConvertToTarget, 15,
/*36285*/     OPC_EmitConvertToTarget, 16,
/*36287*/     OPC_EmitConvertToTarget, 17,
/*36289*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_SAMPLE_C_LB), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 5:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_SAMPLE_C_LB:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*36314*/   /*Scope*/ 94|128,1/*222*/, /*->36538*/
/*36316*/     OPC_CheckInteger, 6, 
/*36318*/     OPC_MoveParent,
/*36319*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*36320*/     OPC_CheckChild1Type, MVT::v4i32,
/*36322*/     OPC_RecordChild2, // #1 = $srcx
/*36323*/     OPC_MoveChild, 2,
/*36325*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36328*/     OPC_CheckType, MVT::i32,
/*36330*/     OPC_MoveParent,
/*36331*/     OPC_RecordChild3, // #2 = $srcy
/*36332*/     OPC_MoveChild, 3,
/*36334*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36337*/     OPC_CheckType, MVT::i32,
/*36339*/     OPC_MoveParent,
/*36340*/     OPC_RecordChild4, // #3 = $srcz
/*36341*/     OPC_MoveChild, 4,
/*36343*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36346*/     OPC_CheckType, MVT::i32,
/*36348*/     OPC_MoveParent,
/*36349*/     OPC_RecordChild5, // #4 = $srcw
/*36350*/     OPC_MoveChild, 5,
/*36352*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36355*/     OPC_CheckType, MVT::i32,
/*36357*/     OPC_MoveParent,
/*36358*/     OPC_RecordChild6, // #5 = $offsetx
/*36359*/     OPC_MoveChild, 6,
/*36361*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36364*/     OPC_CheckType, MVT::i32,
/*36366*/     OPC_MoveParent,
/*36367*/     OPC_RecordChild7, // #6 = $offsety
/*36368*/     OPC_MoveChild, 7,
/*36370*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36373*/     OPC_CheckType, MVT::i32,
/*36375*/     OPC_MoveParent,
/*36376*/     OPC_MoveChild, 8,
/*36378*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36381*/     OPC_RecordNode, // #7 = $offsetz
/*36382*/     OPC_CheckType, MVT::i32,
/*36384*/     OPC_MoveParent,
/*36385*/     OPC_MoveChild, 9,
/*36387*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36390*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*36391*/     OPC_CheckType, MVT::i32,
/*36393*/     OPC_MoveParent,
/*36394*/     OPC_MoveChild, 10,
/*36396*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36399*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*36400*/     OPC_CheckType, MVT::i32,
/*36402*/     OPC_MoveParent,
/*36403*/     OPC_MoveChild, 11,
/*36405*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36408*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*36409*/     OPC_CheckType, MVT::i32,
/*36411*/     OPC_MoveParent,
/*36412*/     OPC_MoveChild, 12,
/*36414*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36417*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*36418*/     OPC_CheckType, MVT::i32,
/*36420*/     OPC_MoveParent,
/*36421*/     OPC_MoveChild, 13,
/*36423*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36426*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*36427*/     OPC_CheckType, MVT::i32,
/*36429*/     OPC_MoveParent,
/*36430*/     OPC_MoveChild, 14,
/*36432*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36435*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*36436*/     OPC_CheckType, MVT::i32,
/*36438*/     OPC_MoveParent,
/*36439*/     OPC_MoveChild, 15,
/*36441*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36444*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*36445*/     OPC_CheckType, MVT::i32,
/*36447*/     OPC_MoveParent,
/*36448*/     OPC_MoveChild, 16,
/*36450*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36453*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*36454*/     OPC_CheckType, MVT::i32,
/*36456*/     OPC_MoveParent,
/*36457*/     OPC_MoveChild, 17,
/*36459*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36462*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*36463*/     OPC_CheckType, MVT::i32,
/*36465*/     OPC_MoveParent,
/*36466*/     OPC_MoveChild, 18,
/*36468*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36471*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*36472*/     OPC_CheckType, MVT::i32,
/*36474*/     OPC_MoveParent,
/*36475*/     OPC_CheckType, MVT::v4f32,
/*36477*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*36479*/     OPC_EmitConvertToTarget, 1,
/*36481*/     OPC_EmitConvertToTarget, 2,
/*36483*/     OPC_EmitConvertToTarget, 3,
/*36485*/     OPC_EmitConvertToTarget, 4,
/*36487*/     OPC_EmitConvertToTarget, 5,
/*36489*/     OPC_EmitConvertToTarget, 6,
/*36491*/     OPC_EmitConvertToTarget, 7,
/*36493*/     OPC_EmitConvertToTarget, 8,
/*36495*/     OPC_EmitConvertToTarget, 9,
/*36497*/     OPC_EmitConvertToTarget, 10,
/*36499*/     OPC_EmitConvertToTarget, 11,
/*36501*/     OPC_EmitConvertToTarget, 12,
/*36503*/     OPC_EmitConvertToTarget, 13,
/*36505*/     OPC_EmitConvertToTarget, 14,
/*36507*/     OPC_EmitConvertToTarget, 15,
/*36509*/     OPC_EmitConvertToTarget, 16,
/*36511*/     OPC_EmitConvertToTarget, 17,
/*36513*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_LD), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 6:i32, v4i32:v4i32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_LD:v4f32 R600_Reg128:v4i32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*36538*/   /*Scope*/ 94|128,1/*222*/, /*->36762*/
/*36540*/     OPC_CheckInteger, 7, 
/*36542*/     OPC_MoveParent,
/*36543*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*36544*/     OPC_CheckChild1Type, MVT::v4i32,
/*36546*/     OPC_RecordChild2, // #1 = $srcx
/*36547*/     OPC_MoveChild, 2,
/*36549*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36552*/     OPC_CheckType, MVT::i32,
/*36554*/     OPC_MoveParent,
/*36555*/     OPC_RecordChild3, // #2 = $srcy
/*36556*/     OPC_MoveChild, 3,
/*36558*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36561*/     OPC_CheckType, MVT::i32,
/*36563*/     OPC_MoveParent,
/*36564*/     OPC_RecordChild4, // #3 = $srcz
/*36565*/     OPC_MoveChild, 4,
/*36567*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36570*/     OPC_CheckType, MVT::i32,
/*36572*/     OPC_MoveParent,
/*36573*/     OPC_RecordChild5, // #4 = $srcw
/*36574*/     OPC_MoveChild, 5,
/*36576*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36579*/     OPC_CheckType, MVT::i32,
/*36581*/     OPC_MoveParent,
/*36582*/     OPC_RecordChild6, // #5 = $offsetx
/*36583*/     OPC_MoveChild, 6,
/*36585*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36588*/     OPC_CheckType, MVT::i32,
/*36590*/     OPC_MoveParent,
/*36591*/     OPC_RecordChild7, // #6 = $offsety
/*36592*/     OPC_MoveChild, 7,
/*36594*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36597*/     OPC_CheckType, MVT::i32,
/*36599*/     OPC_MoveParent,
/*36600*/     OPC_MoveChild, 8,
/*36602*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36605*/     OPC_RecordNode, // #7 = $offsetz
/*36606*/     OPC_CheckType, MVT::i32,
/*36608*/     OPC_MoveParent,
/*36609*/     OPC_MoveChild, 9,
/*36611*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36614*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*36615*/     OPC_CheckType, MVT::i32,
/*36617*/     OPC_MoveParent,
/*36618*/     OPC_MoveChild, 10,
/*36620*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36623*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*36624*/     OPC_CheckType, MVT::i32,
/*36626*/     OPC_MoveParent,
/*36627*/     OPC_MoveChild, 11,
/*36629*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36632*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*36633*/     OPC_CheckType, MVT::i32,
/*36635*/     OPC_MoveParent,
/*36636*/     OPC_MoveChild, 12,
/*36638*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36641*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*36642*/     OPC_CheckType, MVT::i32,
/*36644*/     OPC_MoveParent,
/*36645*/     OPC_MoveChild, 13,
/*36647*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36650*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*36651*/     OPC_CheckType, MVT::i32,
/*36653*/     OPC_MoveParent,
/*36654*/     OPC_MoveChild, 14,
/*36656*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36659*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*36660*/     OPC_CheckType, MVT::i32,
/*36662*/     OPC_MoveParent,
/*36663*/     OPC_MoveChild, 15,
/*36665*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36668*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*36669*/     OPC_CheckType, MVT::i32,
/*36671*/     OPC_MoveParent,
/*36672*/     OPC_MoveChild, 16,
/*36674*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36677*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*36678*/     OPC_CheckType, MVT::i32,
/*36680*/     OPC_MoveParent,
/*36681*/     OPC_MoveChild, 17,
/*36683*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36686*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*36687*/     OPC_CheckType, MVT::i32,
/*36689*/     OPC_MoveParent,
/*36690*/     OPC_MoveChild, 18,
/*36692*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36695*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*36696*/     OPC_CheckType, MVT::i32,
/*36698*/     OPC_MoveParent,
/*36699*/     OPC_CheckType, MVT::v4f32,
/*36701*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*36703*/     OPC_EmitConvertToTarget, 1,
/*36705*/     OPC_EmitConvertToTarget, 2,
/*36707*/     OPC_EmitConvertToTarget, 3,
/*36709*/     OPC_EmitConvertToTarget, 4,
/*36711*/     OPC_EmitConvertToTarget, 5,
/*36713*/     OPC_EmitConvertToTarget, 6,
/*36715*/     OPC_EmitConvertToTarget, 7,
/*36717*/     OPC_EmitConvertToTarget, 8,
/*36719*/     OPC_EmitConvertToTarget, 9,
/*36721*/     OPC_EmitConvertToTarget, 10,
/*36723*/     OPC_EmitConvertToTarget, 11,
/*36725*/     OPC_EmitConvertToTarget, 12,
/*36727*/     OPC_EmitConvertToTarget, 13,
/*36729*/     OPC_EmitConvertToTarget, 14,
/*36731*/     OPC_EmitConvertToTarget, 15,
/*36733*/     OPC_EmitConvertToTarget, 16,
/*36735*/     OPC_EmitConvertToTarget, 17,
/*36737*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_GET_TEXTURE_RESINFO), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 7:i32, v4i32:v4i32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_GET_TEXTURE_RESINFO:v4f32 R600_Reg128:v4i32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*36762*/   /*Scope*/ 94|128,1/*222*/, /*->36986*/
/*36764*/     OPC_CheckInteger, 8, 
/*36766*/     OPC_MoveParent,
/*36767*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*36768*/     OPC_CheckChild1Type, MVT::v4f32,
/*36770*/     OPC_RecordChild2, // #1 = $srcx
/*36771*/     OPC_MoveChild, 2,
/*36773*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36776*/     OPC_CheckType, MVT::i32,
/*36778*/     OPC_MoveParent,
/*36779*/     OPC_RecordChild3, // #2 = $srcy
/*36780*/     OPC_MoveChild, 3,
/*36782*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36785*/     OPC_CheckType, MVT::i32,
/*36787*/     OPC_MoveParent,
/*36788*/     OPC_RecordChild4, // #3 = $srcz
/*36789*/     OPC_MoveChild, 4,
/*36791*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36794*/     OPC_CheckType, MVT::i32,
/*36796*/     OPC_MoveParent,
/*36797*/     OPC_RecordChild5, // #4 = $srcw
/*36798*/     OPC_MoveChild, 5,
/*36800*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36803*/     OPC_CheckType, MVT::i32,
/*36805*/     OPC_MoveParent,
/*36806*/     OPC_RecordChild6, // #5 = $offsetx
/*36807*/     OPC_MoveChild, 6,
/*36809*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36812*/     OPC_CheckType, MVT::i32,
/*36814*/     OPC_MoveParent,
/*36815*/     OPC_RecordChild7, // #6 = $offsety
/*36816*/     OPC_MoveChild, 7,
/*36818*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36821*/     OPC_CheckType, MVT::i32,
/*36823*/     OPC_MoveParent,
/*36824*/     OPC_MoveChild, 8,
/*36826*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36829*/     OPC_RecordNode, // #7 = $offsetz
/*36830*/     OPC_CheckType, MVT::i32,
/*36832*/     OPC_MoveParent,
/*36833*/     OPC_MoveChild, 9,
/*36835*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36838*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*36839*/     OPC_CheckType, MVT::i32,
/*36841*/     OPC_MoveParent,
/*36842*/     OPC_MoveChild, 10,
/*36844*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36847*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*36848*/     OPC_CheckType, MVT::i32,
/*36850*/     OPC_MoveParent,
/*36851*/     OPC_MoveChild, 11,
/*36853*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36856*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*36857*/     OPC_CheckType, MVT::i32,
/*36859*/     OPC_MoveParent,
/*36860*/     OPC_MoveChild, 12,
/*36862*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36865*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*36866*/     OPC_CheckType, MVT::i32,
/*36868*/     OPC_MoveParent,
/*36869*/     OPC_MoveChild, 13,
/*36871*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36874*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*36875*/     OPC_CheckType, MVT::i32,
/*36877*/     OPC_MoveParent,
/*36878*/     OPC_MoveChild, 14,
/*36880*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36883*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*36884*/     OPC_CheckType, MVT::i32,
/*36886*/     OPC_MoveParent,
/*36887*/     OPC_MoveChild, 15,
/*36889*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36892*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*36893*/     OPC_CheckType, MVT::i32,
/*36895*/     OPC_MoveParent,
/*36896*/     OPC_MoveChild, 16,
/*36898*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36901*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*36902*/     OPC_CheckType, MVT::i32,
/*36904*/     OPC_MoveParent,
/*36905*/     OPC_MoveChild, 17,
/*36907*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36910*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*36911*/     OPC_CheckType, MVT::i32,
/*36913*/     OPC_MoveParent,
/*36914*/     OPC_MoveChild, 18,
/*36916*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36919*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*36920*/     OPC_CheckType, MVT::i32,
/*36922*/     OPC_MoveParent,
/*36923*/     OPC_CheckType, MVT::v4f32,
/*36925*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*36927*/     OPC_EmitConvertToTarget, 1,
/*36929*/     OPC_EmitConvertToTarget, 2,
/*36931*/     OPC_EmitConvertToTarget, 3,
/*36933*/     OPC_EmitConvertToTarget, 4,
/*36935*/     OPC_EmitConvertToTarget, 5,
/*36937*/     OPC_EmitConvertToTarget, 6,
/*36939*/     OPC_EmitConvertToTarget, 7,
/*36941*/     OPC_EmitConvertToTarget, 8,
/*36943*/     OPC_EmitConvertToTarget, 9,
/*36945*/     OPC_EmitConvertToTarget, 10,
/*36947*/     OPC_EmitConvertToTarget, 11,
/*36949*/     OPC_EmitConvertToTarget, 12,
/*36951*/     OPC_EmitConvertToTarget, 13,
/*36953*/     OPC_EmitConvertToTarget, 14,
/*36955*/     OPC_EmitConvertToTarget, 15,
/*36957*/     OPC_EmitConvertToTarget, 16,
/*36959*/     OPC_EmitConvertToTarget, 17,
/*36961*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_GET_GRADIENTS_H), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 8:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_GET_GRADIENTS_H:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*36986*/   /*Scope*/ 94|128,1/*222*/, /*->37210*/
/*36988*/     OPC_CheckInteger, 9, 
/*36990*/     OPC_MoveParent,
/*36991*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*36992*/     OPC_CheckChild1Type, MVT::v4f32,
/*36994*/     OPC_RecordChild2, // #1 = $srcx
/*36995*/     OPC_MoveChild, 2,
/*36997*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37000*/     OPC_CheckType, MVT::i32,
/*37002*/     OPC_MoveParent,
/*37003*/     OPC_RecordChild3, // #2 = $srcy
/*37004*/     OPC_MoveChild, 3,
/*37006*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37009*/     OPC_CheckType, MVT::i32,
/*37011*/     OPC_MoveParent,
/*37012*/     OPC_RecordChild4, // #3 = $srcz
/*37013*/     OPC_MoveChild, 4,
/*37015*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37018*/     OPC_CheckType, MVT::i32,
/*37020*/     OPC_MoveParent,
/*37021*/     OPC_RecordChild5, // #4 = $srcw
/*37022*/     OPC_MoveChild, 5,
/*37024*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37027*/     OPC_CheckType, MVT::i32,
/*37029*/     OPC_MoveParent,
/*37030*/     OPC_RecordChild6, // #5 = $offsetx
/*37031*/     OPC_MoveChild, 6,
/*37033*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37036*/     OPC_CheckType, MVT::i32,
/*37038*/     OPC_MoveParent,
/*37039*/     OPC_RecordChild7, // #6 = $offsety
/*37040*/     OPC_MoveChild, 7,
/*37042*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37045*/     OPC_CheckType, MVT::i32,
/*37047*/     OPC_MoveParent,
/*37048*/     OPC_MoveChild, 8,
/*37050*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37053*/     OPC_RecordNode, // #7 = $offsetz
/*37054*/     OPC_CheckType, MVT::i32,
/*37056*/     OPC_MoveParent,
/*37057*/     OPC_MoveChild, 9,
/*37059*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37062*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*37063*/     OPC_CheckType, MVT::i32,
/*37065*/     OPC_MoveParent,
/*37066*/     OPC_MoveChild, 10,
/*37068*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37071*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*37072*/     OPC_CheckType, MVT::i32,
/*37074*/     OPC_MoveParent,
/*37075*/     OPC_MoveChild, 11,
/*37077*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37080*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*37081*/     OPC_CheckType, MVT::i32,
/*37083*/     OPC_MoveParent,
/*37084*/     OPC_MoveChild, 12,
/*37086*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37089*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*37090*/     OPC_CheckType, MVT::i32,
/*37092*/     OPC_MoveParent,
/*37093*/     OPC_MoveChild, 13,
/*37095*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37098*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*37099*/     OPC_CheckType, MVT::i32,
/*37101*/     OPC_MoveParent,
/*37102*/     OPC_MoveChild, 14,
/*37104*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37107*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*37108*/     OPC_CheckType, MVT::i32,
/*37110*/     OPC_MoveParent,
/*37111*/     OPC_MoveChild, 15,
/*37113*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37116*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*37117*/     OPC_CheckType, MVT::i32,
/*37119*/     OPC_MoveParent,
/*37120*/     OPC_MoveChild, 16,
/*37122*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37125*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*37126*/     OPC_CheckType, MVT::i32,
/*37128*/     OPC_MoveParent,
/*37129*/     OPC_MoveChild, 17,
/*37131*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37134*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*37135*/     OPC_CheckType, MVT::i32,
/*37137*/     OPC_MoveParent,
/*37138*/     OPC_MoveChild, 18,
/*37140*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37143*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*37144*/     OPC_CheckType, MVT::i32,
/*37146*/     OPC_MoveParent,
/*37147*/     OPC_CheckType, MVT::v4f32,
/*37149*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*37151*/     OPC_EmitConvertToTarget, 1,
/*37153*/     OPC_EmitConvertToTarget, 2,
/*37155*/     OPC_EmitConvertToTarget, 3,
/*37157*/     OPC_EmitConvertToTarget, 4,
/*37159*/     OPC_EmitConvertToTarget, 5,
/*37161*/     OPC_EmitConvertToTarget, 6,
/*37163*/     OPC_EmitConvertToTarget, 7,
/*37165*/     OPC_EmitConvertToTarget, 8,
/*37167*/     OPC_EmitConvertToTarget, 9,
/*37169*/     OPC_EmitConvertToTarget, 10,
/*37171*/     OPC_EmitConvertToTarget, 11,
/*37173*/     OPC_EmitConvertToTarget, 12,
/*37175*/     OPC_EmitConvertToTarget, 13,
/*37177*/     OPC_EmitConvertToTarget, 14,
/*37179*/     OPC_EmitConvertToTarget, 15,
/*37181*/     OPC_EmitConvertToTarget, 16,
/*37183*/     OPC_EmitConvertToTarget, 17,
/*37185*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_GET_GRADIENTS_V), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 9:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_GET_GRADIENTS_V:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*37210*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 59,  TARGET_VAL(ISD::STORE),// ->37273
/*37214*/   OPC_RecordMemRef,
/*37215*/   OPC_RecordNode,   // #0 = 'st' chained node
/*37216*/   OPC_RecordChild1, // #1 = $rw_gpr
/*37217*/   OPC_Scope, 26, /*->37245*/ // 2 children in Scope
/*37219*/     OPC_CheckChild1Type, MVT::i32,
/*37221*/     OPC_RecordChild2, // #2 = $index_gpr
/*37222*/     OPC_CheckChild2Type, MVT::i32,
/*37224*/     OPC_CheckPredicate, 28, // Predicate_unindexedstore
/*37226*/     OPC_CheckPredicate, 29, // Predicate_store
/*37228*/     OPC_CheckPredicate, 30, // Predicate_global_store
/*37230*/     OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*37232*/     OPC_EmitMergeInputChains1_0,
/*37233*/     OPC_EmitInteger, MVT::i32, 0, 
/*37236*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RAT_WRITE_CACHELESS_32_eg), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
              // Src: (st i32:i32:$rw_gpr, i32:i32:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
              // Dst: (RAT_WRITE_CACHELESS_32_eg i32:i32:$rw_gpr, i32:i32:$index_gpr)
/*37245*/   /*Scope*/ 26, /*->37272*/
/*37246*/     OPC_CheckChild1Type, MVT::v4i32,
/*37248*/     OPC_RecordChild2, // #2 = $index_gpr
/*37249*/     OPC_CheckChild2Type, MVT::i32,
/*37251*/     OPC_CheckPredicate, 28, // Predicate_unindexedstore
/*37253*/     OPC_CheckPredicate, 29, // Predicate_store
/*37255*/     OPC_CheckPredicate, 30, // Predicate_global_store
/*37257*/     OPC_CheckPatternPredicate, 2, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX)
/*37259*/     OPC_EmitMergeInputChains1_0,
/*37260*/     OPC_EmitInteger, MVT::i32, 0, 
/*37263*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RAT_WRITE_CACHELESS_128_eg), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
              // Src: (st v4i32:v4i32:$rw_gpr, i32:i32:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
              // Dst: (RAT_WRITE_CACHELESS_128_eg v4i32:v4i32:$rw_gpr, i32:i32:$index_gpr)
/*37272*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(AMDGPUISD::BUFFER_STORE),// ->37322
/*37276*/   OPC_RecordNode,   // #0 = 'SIbuffer_store' chained node
/*37277*/   OPC_RecordChild1, // #1 = $vdata
/*37278*/   OPC_Scope, 20, /*->37300*/ // 2 children in Scope
/*37280*/     OPC_CheckChild1Type, MVT::i32,
/*37282*/     OPC_RecordChild2, // #2 = $srsrc
/*37283*/     OPC_CheckChild2Type, MVT::i128,
/*37285*/     OPC_RecordChild3, // #3 = $vaddr
/*37286*/     OPC_CheckChild3Type, MVT::i64,
/*37288*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*37290*/     OPC_EmitMergeInputChains1_0,
/*37291*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_DWORD), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
              // Src: (SIbuffer_store VReg_32:i32:$vdata, SReg_128:i128:$srsrc, VReg_64:i64:$vaddr) - Complexity = 3
              // Dst: (BUFFER_STORE_DWORD VReg_32:i32:$vdata, SReg_128:i128:$srsrc, VReg_64:i64:$vaddr)
/*37300*/   /*Scope*/ 20, /*->37321*/
/*37301*/     OPC_CheckChild1Type, MVT::i64,
/*37303*/     OPC_RecordChild2, // #2 = $srsrc
/*37304*/     OPC_CheckChild2Type, MVT::i128,
/*37306*/     OPC_RecordChild3, // #3 = $vaddr
/*37307*/     OPC_CheckChild3Type, MVT::i64,
/*37309*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*37311*/     OPC_EmitMergeInputChains1_0,
/*37312*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_DWORDX2), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
              // Src: (SIbuffer_store VReg_64:i64:$vdata, SReg_128:i128:$srsrc, VReg_64:i64:$vaddr) - Complexity = 3
              // Dst: (BUFFER_STORE_DWORDX2 VReg_64:i64:$vdata, SReg_128:i128:$srsrc, VReg_64:i64:$vaddr)
/*37321*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 24,  TARGET_VAL(AMDGPUISD::RET_FLAG),// ->37349
/*37325*/   OPC_RecordNode,   // #0 = 'IL_retflag' chained node
/*37326*/   OPC_CaptureGlueInput,
/*37327*/   OPC_Scope, 9, /*->37338*/ // 2 children in Scope
/*37329*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*37331*/     OPC_EmitMergeInputChains1_0,
/*37332*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_ENDPGM), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (IL_retflag) - Complexity = 3
              // Dst: (S_ENDPGM)
/*37338*/   /*Scope*/ 9, /*->37348*/
/*37339*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*37341*/     OPC_EmitMergeInputChains1_0,
/*37342*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RETURN), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (IL_retflag) - Complexity = 3
              // Dst: (RETURN)
/*37348*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::BR),// ->37384
/*37352*/   OPC_RecordNode,   // #0 = 'br' chained node
/*37353*/   OPC_RecordChild1, // #1 = $target
/*37354*/   OPC_MoveChild, 1,
/*37356*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*37359*/   OPC_MoveParent,
/*37360*/   OPC_Scope, 10, /*->37372*/ // 2 children in Scope
/*37362*/     OPC_CheckPatternPredicate, 0, // (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX)
/*37364*/     OPC_EmitMergeInputChains1_0,
/*37365*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_BRANCH), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$target) - Complexity = 3
              // Dst: (S_BRANCH (bb:Other):$target)
/*37372*/   /*Scope*/ 10, /*->37383*/
/*37373*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*37375*/     OPC_EmitMergeInputChains1_0,
/*37376*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BRANCH), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$target) - Complexity = 3
              // Dst: (BRANCH (bb:Other):$target)
/*37383*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 39,  TARGET_VAL(AMDGPUISD::BRANCH_COND),// ->37426
/*37387*/   OPC_RecordNode,   // #0 = 'IL_brcond' chained node
/*37388*/   OPC_RecordChild1, // #1 = $target
/*37389*/   OPC_MoveChild, 1,
/*37391*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*37394*/   OPC_MoveParent,
/*37395*/   OPC_RecordChild2, // #2 = $src0
/*37396*/   OPC_Scope, 13, /*->37411*/ // 2 children in Scope
/*37398*/     OPC_CheckChild2Type, MVT::i32,
/*37400*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*37402*/     OPC_EmitMergeInputChains1_0,
/*37403*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BRANCH_COND_i32), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (IL_brcond (bb:Other):$target, GPRI32:i32:$src0) - Complexity = 3
              // Dst: (BRANCH_COND_i32 (bb:Other):$target, GPRI32:i32:$src0)
/*37411*/   /*Scope*/ 13, /*->37425*/
/*37412*/     OPC_CheckChild2Type, MVT::f32,
/*37414*/     OPC_CheckPatternPredicate, 3, // (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX)
/*37416*/     OPC_EmitMergeInputChains1_0,
/*37417*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BRANCH_COND_f32), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (IL_brcond (bb:Other):$target, GPRF32:f32:$src0) - Complexity = 3
              // Dst: (BRANCH_COND_f32 (bb:Other):$target, GPRF32:f32:$src0)
/*37425*/   0, /*End of Scope*/
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 37428 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 208
  // #OPC_RecordNode                     = 142
  // #OPC_RecordChild                    = 434
  // #OPC_RecordMemRef                   = 2
  // #OPC_CaptureGlueInput               = 1
  // #OPC_MoveChild                      = 421
  // #OPC_MoveParent                     = 736
  // #OPC_CheckSame                      = 84
  // #OPC_CheckPatternPredicate          = 588
  // #OPC_CheckPredicate                 = 144
  // #OPC_CheckOpcode                    = 314
  // #OPC_SwitchOpcode                   = 1
  // #OPC_CheckType                      = 482
  // #OPC_SwitchType                     = 32
  // #OPC_CheckChildType                 = 117
  // #OPC_CheckInteger                   = 163
  // #OPC_CheckCondCode                  = 19
  // #OPC_CheckValueType                 = 0
  // #OPC_CheckComplexPat                = 13
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 3878
  // #OPC_EmitStringInteger              = 233
  // #OPC_EmitRegister                   = 213
  // #OPC_EmitConvertToTarget            = 249
  // #OPC_EmitMergeInputChains           = 65
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 217
  // #OPC_EmitNodeXForm                  = 8
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 9
  // #OPC_MorphNodeTo                    = 586

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD7XXX);
  case 1: return (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX);
  case 2: return (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD5XXX|| Subtarget.device()->getGeneration() ==AMDGPUDeviceInfo::HD6XXX);
  case 3: return (Subtarget.device()->getGeneration() <= AMDGPUDeviceInfo::HD6XXX);
  case 4: return (Subtarget.device()->getGeneration() >= AMDGPUDeviceInfo::HD5XXX && Subtarget.device()->getGeneration() < AMDGPUDeviceInfo::HD7XXX && Subtarget.device()->getDeviceFlag() != OCL_DEVICE_CAYMAN);
  case 5: return (Subtarget.device()->getDeviceFlag() == OCL_DEVICE_CAYMAN);
  case 6: return (Subtarget.device()->getGeneration() == AMDGPUDeviceInfo::HD4XXX &&Subtarget.device()->getDeviceFlag()>= OCL_DEVICE_RV710);
  }
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_legalshift32
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return Imm >=0 && Imm < 32;
  }
  case 1: { // Predicate_bfemask
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
return isMask_32(N->getZExtValue());
  }
  case 2: { // Predicate_COND_EQ
    CondCodeSDNode*N = cast<CondCodeSDNode>(Node);
switch(N->get()){{default: return false;
                     case ISD::SETOEQ: case ISD::SETUEQ:
                     case ISD::SETEQ: return true;}}
  }
  case 3: { // Predicate_COND_GT
    CondCodeSDNode*N = cast<CondCodeSDNode>(Node);
switch(N->get()){{default: return false;
                     case ISD::SETOGT: case ISD::SETUGT:
                     case ISD::SETGT: return true;}}
  }
  case 4: { // Predicate_COND_GE
    CondCodeSDNode*N = cast<CondCodeSDNode>(Node);
switch(N->get()){{default: return false;
                     case ISD::SETOGE: case ISD::SETUGE:
                     case ISD::SETGE: return true;}}
  }
  case 5: { // Predicate_COND_NE
    CondCodeSDNode*N = cast<CondCodeSDNode>(Node);
switch(N->get()){{default: return false;
                     case ISD::SETONE: case ISD::SETUNE:
                     case ISD::SETNE: return true;}}
  }
  case 6: { // Predicate_COND_LT
    CondCodeSDNode*N = cast<CondCodeSDNode>(Node);
switch(N->get()){{default: return false;
                     case ISD::SETOLT: case ISD::SETULT:
                     case ISD::SETLT: return true;}}
  }
  case 7: { // Predicate_COND_LE
    CondCodeSDNode*N = cast<CondCodeSDNode>(Node);
switch(N->get()){{default: return false;
                     case ISD::SETOLE: case ISD::SETULE:
                     case ISD::SETLE: return true;}}
  }
  case 8: { // Predicate_FP_ONE
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);
return N->isExactlyValue(1.0);
  }
  case 9: { // Predicate_FP_ZERO
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);
return N->getValueAPF().isZero();
  }
  case 10: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 11: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 12: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 13: { // Predicate_load_param_zexti8
    SDNode *N = Node;
 return isParamLoad(dyn_cast<LoadSDNode>(N)); 
  }
  case 14: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 15: { // Predicate_load_param_zexti16
    SDNode *N = Node;
 return isParamLoad(dyn_cast<LoadSDNode>(N)); 
  }
  case 16: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 17: { // Predicate_load_param
    SDNode *N = Node;
 return isParamLoad(dyn_cast<LoadSDNode>(N)); 
  }
  case 18: { // Predicate_zextloadi8_global
    SDNode *N = Node;

    return isGlobalLoad(dyn_cast<LoadSDNode>(N));

  }
  case 19: { // Predicate_global_load
    SDNode *N = Node;

    return isGlobalLoad(dyn_cast<LoadSDNode>(N));

  }
  case 20: { // Predicate_constant_load
    SDNode *N = Node;

    return isConstantLoad(dyn_cast<LoadSDNode>(N), -1);

  }
  case 21: { // Predicate_IMM8bitDWORD
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();

    return (Imm & ~0x3FC) == 0;
  
  }
  case 22: { // Predicate_TEX_ARRAY
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
uint32_t TType = (uint32_t)N->getZExtValue();
    return TType == 9 || TType == 10 || TType == 15 || TType == 16;
  
  }
  case 23: { // Predicate_TEX_SHADOW
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
uint32_t TType = (uint32_t)N->getZExtValue();
    return (TType >= 6 && TType <= 8) || (TType >= 11 && TType <= 13);
  
  }
  case 24: { // Predicate_IMM12bit
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<12>(Imm);
  }
  case 25: { // Predicate_TEX_RECT
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
uint32_t TType = (uint32_t)N->getZExtValue();
    return TType == 5;
  
  }
  case 26: { // Predicate_TEX_SHADOW_ARRAY
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
uint32_t TType = (uint32_t)N->getZExtValue();
    return TType == 11 || TType == 12 || TType == 17;
  
  }
  case 27: { // Predicate_anonymous.val.372
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return ((const SITargetLowering &)TLI).analyzeImmediate(N) == 0;

  }
  case 28: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 29: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 30: { // Predicate_global_store
    SDNode *N = Node;

        return isGlobalStore(dyn_cast<StoreSDNode>(N));

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
    return SelectADDRIndirect(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectADDRVTX_READ(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+1);
    return SelectGlobalValueConstantOffset(N, Result[NextRes+0].first);
  case 3:
    Result.resize(NextRes+2);
    return SelectGlobalValueVariableOffset(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // anonymous.val.371
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

    return CurDAG->getTargetConstant(
      N->getZExtValue() >> 2, MVT::i32);
  
  }
  case 1: {  // LO32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(N->getZExtValue() & 0xffffffff, MVT::i32);

  }
  case 2: {  // HI32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(N->getZExtValue() >> 32, MVT::i32);

  }
  }
}

