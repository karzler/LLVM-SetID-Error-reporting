/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* * SystemZ Disassembler                                                     *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/MC/MCInst.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/LEB128.h"
#include "llvm/Support/raw_ostream.h"
#include <assert.h>

namespace llvm {

// Helper function for extracting fields from encoded instructions.
template<typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits) {
    assert(startBit + numBits <= (sizeof(InsnType)*8) &&
           "Instruction field out of bounds!");
    InsnType fieldMask;
    if (numBits == sizeof(InsnType)*8)
      fieldMask = (InsnType)(-1LL);
    else
      fieldMask = (((InsnType)1 << numBits) - 1) << startBit;
    return (insn & fieldMask) >> startBit;
}

static const uint8_t DecoderTable16[] = {
/* 0 */       MCD::OPC_ExtractField, 8, 8,  // Inst{15-8} ...
/* 3 */       MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 17
/* 7 */       MCD::OPC_CheckField, 4, 4, 15, 113, 0, // Skip to: 126
/* 13 */      MCD::OPC_Decode, 213, 1, 0, // Opcode: BR
/* 17 */      MCD::OPC_FilterValue, 13, 3, 0, // Skip to: 24
/* 21 */      MCD::OPC_Decode, 127, 1, // Opcode: AsmBASR
/* 24 */      MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 32
/* 28 */      MCD::OPC_Decode, 203, 2, 2, // Opcode: LCR
/* 32 */      MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 40
/* 36 */      MCD::OPC_Decode, 201, 3, 3, // Opcode: NR
/* 40 */      MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 48
/* 44 */      MCD::OPC_Decode, 142, 2, 2, // Opcode: CLR
/* 48 */      MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 56
/* 52 */      MCD::OPC_Decode, 217, 3, 3, // Opcode: OR
/* 56 */      MCD::OPC_FilterValue, 23, 4, 0, // Skip to: 64
/* 60 */      MCD::OPC_Decode, 174, 4, 3, // Opcode: XR
/* 64 */      MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 72
/* 68 */      MCD::OPC_Decode, 134, 3, 2, // Opcode: LR
/* 72 */      MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 80
/* 76 */      MCD::OPC_Decode, 149, 2, 2, // Opcode: CR
/* 80 */      MCD::OPC_FilterValue, 26, 3, 0, // Skip to: 87
/* 84 */      MCD::OPC_Decode, 50, 3, // Opcode: AR
/* 87 */      MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 95
/* 91 */      MCD::OPC_Decode, 255, 3, 3, // Opcode: SR
/* 95 */      MCD::OPC_FilterValue, 30, 3, 0, // Skip to: 102
/* 99 */      MCD::OPC_Decode, 48, 3, // Opcode: ALR
/* 102 */     MCD::OPC_FilterValue, 31, 4, 0, // Skip to: 110
/* 106 */     MCD::OPC_Decode, 248, 3, 3, // Opcode: SLR
/* 110 */     MCD::OPC_FilterValue, 40, 4, 0, // Skip to: 118
/* 114 */     MCD::OPC_Decode, 209, 2, 4, // Opcode: LDR
/* 118 */     MCD::OPC_FilterValue, 56, 4, 0, // Skip to: 126
/* 122 */     MCD::OPC_Decode, 214, 2, 5, // Opcode: LER
/* 126 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 24, 8,  // Inst{31-24} ...
/* 3 */       MCD::OPC_FilterValue, 64, 4, 0, // Skip to: 11
/* 7 */       MCD::OPC_Decode, 146, 4, 6, // Opcode: STH
/* 11 */      MCD::OPC_FilterValue, 65, 4, 0, // Skip to: 19
/* 15 */      MCD::OPC_Decode, 194, 2, 6, // Opcode: LA
/* 19 */      MCD::OPC_FilterValue, 66, 4, 0, // Skip to: 27
/* 23 */      MCD::OPC_Decode, 136, 4, 6, // Opcode: STC
/* 27 */      MCD::OPC_FilterValue, 67, 4, 0, // Skip to: 35
/* 31 */      MCD::OPC_Decode, 177, 2, 7, // Opcode: IC
/* 35 */      MCD::OPC_FilterValue, 72, 4, 0, // Skip to: 43
/* 39 */      MCD::OPC_Decode, 231, 2, 8, // Opcode: LH
/* 43 */      MCD::OPC_FilterValue, 73, 4, 0, // Skip to: 51
/* 47 */      MCD::OPC_Decode, 247, 1, 8, // Opcode: CH
/* 51 */      MCD::OPC_FilterValue, 74, 3, 0, // Skip to: 58
/* 55 */      MCD::OPC_Decode, 34, 9, // Opcode: AH
/* 58 */      MCD::OPC_FilterValue, 75, 4, 0, // Skip to: 66
/* 62 */      MCD::OPC_Decode, 233, 3, 9, // Opcode: SH
/* 66 */      MCD::OPC_FilterValue, 76, 4, 0, // Skip to: 74
/* 70 */      MCD::OPC_Decode, 161, 3, 9, // Opcode: MH
/* 74 */      MCD::OPC_FilterValue, 80, 4, 0, // Skip to: 82
/* 78 */      MCD::OPC_Decode, 132, 4, 6, // Opcode: ST
/* 82 */      MCD::OPC_FilterValue, 84, 4, 0, // Skip to: 90
/* 86 */      MCD::OPC_Decode, 187, 3, 9, // Opcode: N
/* 90 */      MCD::OPC_FilterValue, 85, 4, 0, // Skip to: 98
/* 94 */      MCD::OPC_Decode, 254, 1, 8, // Opcode: CL
/* 98 */      MCD::OPC_FilterValue, 86, 4, 0, // Skip to: 106
/* 102 */     MCD::OPC_Decode, 203, 3, 9, // Opcode: O
/* 106 */     MCD::OPC_FilterValue, 87, 4, 0, // Skip to: 114
/* 110 */     MCD::OPC_Decode, 166, 4, 9, // Opcode: X
/* 114 */     MCD::OPC_FilterValue, 88, 4, 0, // Skip to: 122
/* 118 */     MCD::OPC_Decode, 192, 2, 8, // Opcode: L
/* 122 */     MCD::OPC_FilterValue, 89, 4, 0, // Skip to: 130
/* 126 */     MCD::OPC_Decode, 218, 1, 8, // Opcode: C
/* 130 */     MCD::OPC_FilterValue, 90, 3, 0, // Skip to: 137
/* 134 */     MCD::OPC_Decode, 17, 9, // Opcode: A
/* 137 */     MCD::OPC_FilterValue, 91, 4, 0, // Skip to: 145
/* 141 */     MCD::OPC_Decode, 224, 3, 9, // Opcode: S
/* 145 */     MCD::OPC_FilterValue, 94, 3, 0, // Skip to: 152
/* 149 */     MCD::OPC_Decode, 37, 9, // Opcode: AL
/* 152 */     MCD::OPC_FilterValue, 95, 4, 0, // Skip to: 160
/* 156 */     MCD::OPC_Decode, 235, 3, 9, // Opcode: SL
/* 160 */     MCD::OPC_FilterValue, 96, 4, 0, // Skip to: 168
/* 164 */     MCD::OPC_Decode, 140, 4, 10, // Opcode: STD
/* 168 */     MCD::OPC_FilterValue, 104, 4, 0, // Skip to: 176
/* 172 */     MCD::OPC_Decode, 205, 2, 10, // Opcode: LD
/* 176 */     MCD::OPC_FilterValue, 112, 4, 0, // Skip to: 184
/* 180 */     MCD::OPC_Decode, 142, 4, 11, // Opcode: STE
/* 184 */     MCD::OPC_FilterValue, 113, 4, 0, // Skip to: 192
/* 188 */     MCD::OPC_Decode, 166, 3, 9, // Opcode: MS
/* 192 */     MCD::OPC_FilterValue, 120, 4, 0, // Skip to: 200
/* 196 */     MCD::OPC_Decode, 212, 2, 11, // Opcode: LE
/* 200 */     MCD::OPC_FilterValue, 136, 1, 10, 0, // Skip to: 215
/* 205 */     MCD::OPC_CheckField, 16, 4, 0, 211, 6, // Skip to: 1958
/* 211 */     MCD::OPC_Decode, 130, 4, 12, // Opcode: SRL
/* 215 */     MCD::OPC_FilterValue, 137, 1, 10, 0, // Skip to: 230
/* 220 */     MCD::OPC_CheckField, 16, 4, 0, 196, 6, // Skip to: 1958
/* 226 */     MCD::OPC_Decode, 246, 3, 12, // Opcode: SLL
/* 230 */     MCD::OPC_FilterValue, 138, 1, 10, 0, // Skip to: 245
/* 235 */     MCD::OPC_CheckField, 16, 4, 0, 181, 6, // Skip to: 1958
/* 241 */     MCD::OPC_Decode, 128, 4, 12, // Opcode: SRA
/* 245 */     MCD::OPC_FilterValue, 146, 1, 4, 0, // Skip to: 254
/* 250 */     MCD::OPC_Decode, 182, 3, 13, // Opcode: MVI
/* 254 */     MCD::OPC_FilterValue, 148, 1, 4, 0, // Skip to: 263
/* 259 */     MCD::OPC_Decode, 190, 3, 13, // Opcode: NI
/* 263 */     MCD::OPC_FilterValue, 149, 1, 4, 0, // Skip to: 272
/* 268 */     MCD::OPC_Decode, 140, 2, 13, // Opcode: CLI
/* 272 */     MCD::OPC_FilterValue, 150, 1, 4, 0, // Skip to: 281
/* 277 */     MCD::OPC_Decode, 206, 3, 13, // Opcode: OI
/* 281 */     MCD::OPC_FilterValue, 151, 1, 4, 0, // Skip to: 290
/* 286 */     MCD::OPC_Decode, 169, 4, 13, // Opcode: XI
/* 290 */     MCD::OPC_FilterValue, 165, 1, 131, 0, // Skip to: 426
/* 295 */     MCD::OPC_ExtractField, 16, 4,  // Inst{19-16} ...
/* 298 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 306
/* 302 */     MCD::OPC_Decode, 182, 2, 14, // Opcode: IIHH
/* 306 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 314
/* 310 */     MCD::OPC_Decode, 183, 2, 14, // Opcode: IIHL
/* 314 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 322
/* 318 */     MCD::OPC_Decode, 186, 2, 14, // Opcode: IILH
/* 322 */     MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 330
/* 326 */     MCD::OPC_Decode, 188, 2, 14, // Opcode: IILL
/* 330 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 338
/* 334 */     MCD::OPC_Decode, 192, 3, 14, // Opcode: NIHH
/* 338 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 346
/* 342 */     MCD::OPC_Decode, 193, 3, 14, // Opcode: NIHL
/* 346 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 354
/* 350 */     MCD::OPC_Decode, 196, 3, 14, // Opcode: NILH
/* 354 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 362
/* 358 */     MCD::OPC_Decode, 198, 3, 14, // Opcode: NILL
/* 362 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 370
/* 366 */     MCD::OPC_Decode, 208, 3, 14, // Opcode: OIHH
/* 370 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 378
/* 374 */     MCD::OPC_Decode, 209, 3, 14, // Opcode: OIHL
/* 378 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 386
/* 382 */     MCD::OPC_Decode, 212, 3, 14, // Opcode: OILH
/* 386 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 394
/* 390 */     MCD::OPC_Decode, 214, 3, 14, // Opcode: OILL
/* 394 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 402
/* 398 */     MCD::OPC_Decode, 250, 2, 15, // Opcode: LLIHH
/* 402 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 410
/* 406 */     MCD::OPC_Decode, 251, 2, 15, // Opcode: LLIHL
/* 410 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 418
/* 414 */     MCD::OPC_Decode, 253, 2, 15, // Opcode: LLILH
/* 418 */     MCD::OPC_FilterValue, 15, 0, 6, // Skip to: 1958
/* 422 */     MCD::OPC_Decode, 254, 2, 15, // Opcode: LLILL
/* 426 */     MCD::OPC_FilterValue, 167, 1, 204, 0, // Skip to: 635
/* 431 */     MCD::OPC_ExtractField, 16, 4,  // Inst{19-16} ...
/* 434 */     MCD::OPC_FilterValue, 4, 127, 0, // Skip to: 565
/* 438 */     MCD::OPC_ExtractField, 20, 4,  // Inst{23-20} ...
/* 441 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 449
/* 445 */     MCD::OPC_Decode, 210, 1, 16, // Opcode: AsmJO
/* 449 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 457
/* 453 */     MCD::OPC_Decode, 146, 1, 16, // Opcode: AsmJH
/* 457 */     MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 465
/* 461 */     MCD::OPC_Decode, 203, 1, 16, // Opcode: AsmJNLE
/* 465 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 473
/* 469 */     MCD::OPC_Decode, 166, 1, 16, // Opcode: AsmJL
/* 473 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 481
/* 477 */     MCD::OPC_Decode, 199, 1, 16, // Opcode: AsmJNHE
/* 481 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 489
/* 485 */     MCD::OPC_Decode, 185, 1, 16, // Opcode: AsmJLH
/* 489 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 497
/* 493 */     MCD::OPC_Decode, 196, 1, 16, // Opcode: AsmJNE
/* 497 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 505
/* 501 */     MCD::OPC_Decode, 136, 1, 16, // Opcode: AsmJE
/* 505 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 513
/* 509 */     MCD::OPC_Decode, 205, 1, 16, // Opcode: AsmJNLH
/* 513 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 521
/* 517 */     MCD::OPC_Decode, 155, 1, 16, // Opcode: AsmJHE
/* 521 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 529
/* 525 */     MCD::OPC_Decode, 202, 1, 16, // Opcode: AsmJNL
/* 529 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 537
/* 533 */     MCD::OPC_Decode, 175, 1, 16, // Opcode: AsmJLE
/* 537 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 545
/* 541 */     MCD::OPC_Decode, 198, 1, 16, // Opcode: AsmJNH
/* 545 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 553
/* 549 */     MCD::OPC_Decode, 208, 1, 16, // Opcode: AsmJNO
/* 553 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 561
/* 557 */     MCD::OPC_Decode, 190, 2, 16, // Opcode: J
/* 561 */     MCD::OPC_Decode, 130, 1, 17, // Opcode: AsmBRC
/* 565 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 573
/* 569 */     MCD::OPC_Decode, 128, 1, 18, // Opcode: AsmBRAS
/* 573 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 581
/* 577 */     MCD::OPC_Decode, 232, 2, 19, // Opcode: LHI
/* 581 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 589
/* 585 */     MCD::OPC_Decode, 226, 2, 20, // Opcode: LGHI
/* 589 */     MCD::OPC_FilterValue, 10, 3, 0, // Skip to: 596
/* 593 */     MCD::OPC_Decode, 35, 21, // Opcode: AHI
/* 596 */     MCD::OPC_FilterValue, 11, 3, 0, // Skip to: 603
/* 600 */     MCD::OPC_Decode, 31, 22, // Opcode: AGHI
/* 603 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 611
/* 607 */     MCD::OPC_Decode, 162, 3, 21, // Opcode: MHI
/* 611 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 619
/* 615 */     MCD::OPC_Decode, 160, 3, 22, // Opcode: MGHI
/* 619 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 627
/* 623 */     MCD::OPC_Decode, 249, 1, 19, // Opcode: CHI
/* 627 */     MCD::OPC_FilterValue, 15, 47, 5, // Skip to: 1958
/* 631 */     MCD::OPC_Decode, 239, 1, 20, // Opcode: CGHI
/* 635 */     MCD::OPC_FilterValue, 178, 1, 23, 0, // Skip to: 663
/* 640 */     MCD::OPC_ExtractField, 8, 16,  // Inst{23-8} ...
/* 643 */     MCD::OPC_FilterValue, 128, 158, 1, 4, 0, // Skip to: 653
/* 649 */     MCD::OPC_Decode, 172, 2, 23, // Opcode: EAR
/* 653 */     MCD::OPC_FilterValue, 128, 164, 1, 19, 5, // Skip to: 1958
/* 659 */     MCD::OPC_Decode, 177, 3, 3, // Opcode: MSR
/* 663 */     MCD::OPC_FilterValue, 179, 1, 118, 3, // Skip to: 1554
/* 668 */     MCD::OPC_ExtractField, 16, 8,  // Inst{23-16} ...
/* 671 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 685
/* 675 */     MCD::OPC_CheckField, 8, 8, 0, 253, 4, // Skip to: 1958
/* 681 */     MCD::OPC_Decode, 132, 3, 5, // Opcode: LPEBR
/* 685 */     MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 699
/* 689 */     MCD::OPC_CheckField, 8, 8, 0, 239, 4, // Skip to: 1958
/* 695 */     MCD::OPC_Decode, 129, 3, 5, // Opcode: LNEBR
/* 699 */     MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 713
/* 703 */     MCD::OPC_CheckField, 8, 8, 0, 225, 4, // Skip to: 1958
/* 709 */     MCD::OPC_Decode, 200, 2, 5, // Opcode: LCEBR
/* 713 */     MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 727
/* 717 */     MCD::OPC_CheckField, 8, 8, 0, 211, 4, // Skip to: 1958
/* 723 */     MCD::OPC_Decode, 207, 2, 24, // Opcode: LDEBR
/* 727 */     MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 741
/* 731 */     MCD::OPC_CheckField, 8, 8, 0, 197, 4, // Skip to: 1958
/* 737 */     MCD::OPC_Decode, 142, 3, 25, // Opcode: LXDBR
/* 741 */     MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 755
/* 745 */     MCD::OPC_CheckField, 8, 8, 0, 183, 4, // Skip to: 1958
/* 751 */     MCD::OPC_Decode, 144, 3, 26, // Opcode: LXEBR
/* 755 */     MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 769
/* 759 */     MCD::OPC_CheckField, 8, 8, 0, 169, 4, // Skip to: 1958
/* 765 */     MCD::OPC_Decode, 186, 3, 27, // Opcode: MXDBR
/* 769 */     MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 783
/* 773 */     MCD::OPC_CheckField, 8, 8, 0, 155, 4, // Skip to: 1958
/* 779 */     MCD::OPC_Decode, 224, 1, 5, // Opcode: CEBR
/* 783 */     MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 796
/* 787 */     MCD::OPC_CheckField, 8, 8, 0, 141, 4, // Skip to: 1958
/* 793 */     MCD::OPC_Decode, 24, 28, // Opcode: AEBR
/* 796 */     MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 810
/* 800 */     MCD::OPC_CheckField, 8, 8, 0, 128, 4, // Skip to: 1958
/* 806 */     MCD::OPC_Decode, 228, 3, 28, // Opcode: SEBR
/* 810 */     MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 824
/* 814 */     MCD::OPC_CheckField, 8, 8, 0, 114, 4, // Skip to: 1958
/* 820 */     MCD::OPC_Decode, 157, 3, 29, // Opcode: MDEBR
/* 824 */     MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 838
/* 828 */     MCD::OPC_CheckField, 8, 8, 0, 100, 4, // Skip to: 1958
/* 834 */     MCD::OPC_Decode, 162, 2, 28, // Opcode: DEBR
/* 838 */     MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 852
/* 842 */     MCD::OPC_CheckField, 8, 4, 0, 86, 4, // Skip to: 1958
/* 848 */     MCD::OPC_Decode, 153, 3, 30, // Opcode: MAEBR
/* 852 */     MCD::OPC_FilterValue, 15, 10, 0, // Skip to: 866
/* 856 */     MCD::OPC_CheckField, 8, 4, 0, 72, 4, // Skip to: 1958
/* 862 */     MCD::OPC_Decode, 170, 3, 30, // Opcode: MSEBR
/* 866 */     MCD::OPC_FilterValue, 16, 10, 0, // Skip to: 880
/* 870 */     MCD::OPC_CheckField, 8, 8, 0, 58, 4, // Skip to: 1958
/* 876 */     MCD::OPC_Decode, 131, 3, 4, // Opcode: LPDBR
/* 880 */     MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 894
/* 884 */     MCD::OPC_CheckField, 8, 8, 0, 44, 4, // Skip to: 1958
/* 890 */     MCD::OPC_Decode, 128, 3, 4, // Opcode: LNDBR
/* 894 */     MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 908
/* 898 */     MCD::OPC_CheckField, 8, 8, 0, 30, 4, // Skip to: 1958
/* 904 */     MCD::OPC_Decode, 199, 2, 4, // Opcode: LCDBR
/* 908 */     MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 922
/* 912 */     MCD::OPC_CheckField, 8, 8, 0, 16, 4, // Skip to: 1958
/* 918 */     MCD::OPC_Decode, 253, 3, 5, // Opcode: SQEBR
/* 922 */     MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 936
/* 926 */     MCD::OPC_CheckField, 8, 8, 0, 2, 4, // Skip to: 1958
/* 932 */     MCD::OPC_Decode, 251, 3, 4, // Opcode: SQDBR
/* 936 */     MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 950
/* 940 */     MCD::OPC_CheckField, 8, 8, 0, 244, 3, // Skip to: 1958
/* 946 */     MCD::OPC_Decode, 254, 3, 31, // Opcode: SQXBR
/* 950 */     MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 964
/* 954 */     MCD::OPC_CheckField, 8, 8, 0, 230, 3, // Skip to: 1958
/* 960 */     MCD::OPC_Decode, 159, 3, 28, // Opcode: MEEBR
/* 964 */     MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 978
/* 968 */     MCD::OPC_CheckField, 8, 8, 0, 216, 3, // Skip to: 1958
/* 974 */     MCD::OPC_Decode, 220, 1, 4, // Opcode: CDBR
/* 978 */     MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 991
/* 982 */     MCD::OPC_CheckField, 8, 8, 0, 202, 3, // Skip to: 1958
/* 988 */     MCD::OPC_Decode, 19, 32, // Opcode: ADBR
/* 991 */     MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 1005
/* 995 */     MCD::OPC_CheckField, 8, 8, 0, 189, 3, // Skip to: 1958
/* 1001 */    MCD::OPC_Decode, 226, 3, 32, // Opcode: SDBR
/* 1005 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 1019
/* 1009 */    MCD::OPC_CheckField, 8, 8, 0, 175, 3, // Skip to: 1958
/* 1015 */    MCD::OPC_Decode, 155, 3, 32, // Opcode: MDBR
/* 1019 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 1033
/* 1023 */    MCD::OPC_CheckField, 8, 8, 0, 161, 3, // Skip to: 1958
/* 1029 */    MCD::OPC_Decode, 160, 2, 32, // Opcode: DDBR
/* 1033 */    MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 1047
/* 1037 */    MCD::OPC_CheckField, 8, 4, 0, 147, 3, // Skip to: 1958
/* 1043 */    MCD::OPC_Decode, 151, 3, 33, // Opcode: MADBR
/* 1047 */    MCD::OPC_FilterValue, 31, 10, 0, // Skip to: 1061
/* 1051 */    MCD::OPC_CheckField, 8, 4, 0, 133, 3, // Skip to: 1958
/* 1057 */    MCD::OPC_Decode, 168, 3, 33, // Opcode: MSDBR
/* 1061 */    MCD::OPC_FilterValue, 64, 10, 0, // Skip to: 1075
/* 1065 */    MCD::OPC_CheckField, 8, 8, 0, 119, 3, // Skip to: 1958
/* 1071 */    MCD::OPC_Decode, 133, 3, 31, // Opcode: LPXBR
/* 1075 */    MCD::OPC_FilterValue, 65, 10, 0, // Skip to: 1089
/* 1079 */    MCD::OPC_CheckField, 8, 8, 0, 105, 3, // Skip to: 1958
/* 1085 */    MCD::OPC_Decode, 130, 3, 31, // Opcode: LNXBR
/* 1089 */    MCD::OPC_FilterValue, 67, 10, 0, // Skip to: 1103
/* 1093 */    MCD::OPC_CheckField, 8, 8, 0, 91, 3, // Skip to: 1958
/* 1099 */    MCD::OPC_Decode, 204, 2, 31, // Opcode: LCXBR
/* 1103 */    MCD::OPC_FilterValue, 68, 10, 0, // Skip to: 1117
/* 1107 */    MCD::OPC_CheckField, 8, 8, 0, 77, 3, // Skip to: 1958
/* 1113 */    MCD::OPC_Decode, 213, 2, 34, // Opcode: LEDBR
/* 1117 */    MCD::OPC_FilterValue, 69, 10, 0, // Skip to: 1131
/* 1121 */    MCD::OPC_CheckField, 8, 8, 0, 63, 3, // Skip to: 1958
/* 1127 */    MCD::OPC_Decode, 210, 2, 31, // Opcode: LDXBR
/* 1131 */    MCD::OPC_FilterValue, 70, 10, 0, // Skip to: 1145
/* 1135 */    MCD::OPC_CheckField, 8, 8, 0, 49, 3, // Skip to: 1958
/* 1141 */    MCD::OPC_Decode, 215, 2, 31, // Opcode: LEXBR
/* 1145 */    MCD::OPC_FilterValue, 71, 10, 0, // Skip to: 1159
/* 1149 */    MCD::OPC_CheckField, 8, 4, 0, 35, 3, // Skip to: 1958
/* 1155 */    MCD::OPC_Decode, 175, 2, 35, // Opcode: FIXBR
/* 1159 */    MCD::OPC_FilterValue, 73, 10, 0, // Skip to: 1173
/* 1163 */    MCD::OPC_CheckField, 8, 8, 0, 21, 3, // Skip to: 1958
/* 1169 */    MCD::OPC_Decode, 155, 2, 31, // Opcode: CXBR
/* 1173 */    MCD::OPC_FilterValue, 74, 9, 0, // Skip to: 1186
/* 1177 */    MCD::OPC_CheckField, 8, 8, 0, 7, 3, // Skip to: 1958
/* 1183 */    MCD::OPC_Decode, 125, 36, // Opcode: AXBR
/* 1186 */    MCD::OPC_FilterValue, 75, 10, 0, // Skip to: 1200
/* 1190 */    MCD::OPC_CheckField, 8, 8, 0, 250, 2, // Skip to: 1958
/* 1196 */    MCD::OPC_Decode, 159, 4, 36, // Opcode: SXBR
/* 1200 */    MCD::OPC_FilterValue, 76, 10, 0, // Skip to: 1214
/* 1204 */    MCD::OPC_CheckField, 8, 8, 0, 236, 2, // Skip to: 1958
/* 1210 */    MCD::OPC_Decode, 184, 3, 36, // Opcode: MXBR
/* 1214 */    MCD::OPC_FilterValue, 77, 10, 0, // Skip to: 1228
/* 1218 */    MCD::OPC_CheckField, 8, 8, 0, 222, 2, // Skip to: 1958
/* 1224 */    MCD::OPC_Decode, 171, 2, 36, // Opcode: DXBR
/* 1228 */    MCD::OPC_FilterValue, 87, 10, 0, // Skip to: 1242
/* 1232 */    MCD::OPC_CheckField, 8, 4, 0, 208, 2, // Skip to: 1958
/* 1238 */    MCD::OPC_Decode, 174, 2, 37, // Opcode: FIEBR
/* 1242 */    MCD::OPC_FilterValue, 95, 10, 0, // Skip to: 1256
/* 1246 */    MCD::OPC_CheckField, 8, 4, 0, 194, 2, // Skip to: 1958
/* 1252 */    MCD::OPC_Decode, 173, 2, 38, // Opcode: FIDBR
/* 1256 */    MCD::OPC_FilterValue, 101, 10, 0, // Skip to: 1270
/* 1260 */    MCD::OPC_CheckField, 8, 8, 0, 180, 2, // Skip to: 1958
/* 1266 */    MCD::OPC_Decode, 145, 3, 31, // Opcode: LXR
/* 1270 */    MCD::OPC_FilterValue, 114, 10, 0, // Skip to: 1284
/* 1274 */    MCD::OPC_CheckField, 8, 4, 0, 166, 2, // Skip to: 1958
/* 1280 */    MCD::OPC_Decode, 145, 2, 39, // Opcode: CPSDRdd
/* 1284 */    MCD::OPC_FilterValue, 116, 16, 0, // Skip to: 1304
/* 1288 */    MCD::OPC_CheckField, 8, 8, 0, 152, 2, // Skip to: 1958
/* 1294 */    MCD::OPC_CheckField, 0, 4, 0, 146, 2, // Skip to: 1958
/* 1300 */    MCD::OPC_Decode, 148, 3, 40, // Opcode: LZER
/* 1304 */    MCD::OPC_FilterValue, 117, 16, 0, // Skip to: 1324
/* 1308 */    MCD::OPC_CheckField, 8, 8, 0, 132, 2, // Skip to: 1958
/* 1314 */    MCD::OPC_CheckField, 0, 4, 0, 126, 2, // Skip to: 1958
/* 1320 */    MCD::OPC_Decode, 147, 3, 41, // Opcode: LZDR
/* 1324 */    MCD::OPC_FilterValue, 118, 16, 0, // Skip to: 1344
/* 1328 */    MCD::OPC_CheckField, 8, 8, 0, 112, 2, // Skip to: 1958
/* 1334 */    MCD::OPC_CheckField, 0, 4, 0, 106, 2, // Skip to: 1958
/* 1340 */    MCD::OPC_Decode, 149, 3, 42, // Opcode: LZXR
/* 1344 */    MCD::OPC_FilterValue, 148, 1, 10, 0, // Skip to: 1359
/* 1349 */    MCD::OPC_CheckField, 8, 8, 0, 91, 2, // Skip to: 1958
/* 1355 */    MCD::OPC_Decode, 225, 1, 43, // Opcode: CEFBR
/* 1359 */    MCD::OPC_FilterValue, 149, 1, 10, 0, // Skip to: 1374
/* 1364 */    MCD::OPC_CheckField, 8, 8, 0, 76, 2, // Skip to: 1958
/* 1370 */    MCD::OPC_Decode, 221, 1, 44, // Opcode: CDFBR
/* 1374 */    MCD::OPC_FilterValue, 150, 1, 10, 0, // Skip to: 1389
/* 1379 */    MCD::OPC_CheckField, 8, 8, 0, 61, 2, // Skip to: 1958
/* 1385 */    MCD::OPC_Decode, 156, 2, 45, // Opcode: CXFBR
/* 1389 */    MCD::OPC_FilterValue, 152, 1, 10, 0, // Skip to: 1404
/* 1394 */    MCD::OPC_CheckField, 8, 4, 0, 46, 2, // Skip to: 1958
/* 1400 */    MCD::OPC_Decode, 228, 1, 46, // Opcode: CFEBR
/* 1404 */    MCD::OPC_FilterValue, 153, 1, 10, 0, // Skip to: 1419
/* 1409 */    MCD::OPC_CheckField, 8, 4, 0, 31, 2, // Skip to: 1958
/* 1415 */    MCD::OPC_Decode, 227, 1, 47, // Opcode: CFDBR
/* 1419 */    MCD::OPC_FilterValue, 154, 1, 10, 0, // Skip to: 1434
/* 1424 */    MCD::OPC_CheckField, 8, 4, 0, 16, 2, // Skip to: 1958
/* 1430 */    MCD::OPC_Decode, 230, 1, 48, // Opcode: CFXBR
/* 1434 */    MCD::OPC_FilterValue, 164, 1, 10, 0, // Skip to: 1449
/* 1439 */    MCD::OPC_CheckField, 8, 8, 0, 1, 2, // Skip to: 1958
/* 1445 */    MCD::OPC_Decode, 226, 1, 49, // Opcode: CEGBR
/* 1449 */    MCD::OPC_FilterValue, 165, 1, 10, 0, // Skip to: 1464
/* 1454 */    MCD::OPC_CheckField, 8, 8, 0, 242, 1, // Skip to: 1958
/* 1460 */    MCD::OPC_Decode, 222, 1, 50, // Opcode: CDGBR
/* 1464 */    MCD::OPC_FilterValue, 166, 1, 10, 0, // Skip to: 1479
/* 1469 */    MCD::OPC_CheckField, 8, 8, 0, 227, 1, // Skip to: 1958
/* 1475 */    MCD::OPC_Decode, 157, 2, 51, // Opcode: CXGBR
/* 1479 */    MCD::OPC_FilterValue, 168, 1, 10, 0, // Skip to: 1494
/* 1484 */    MCD::OPC_CheckField, 8, 4, 0, 212, 1, // Skip to: 1958
/* 1490 */    MCD::OPC_Decode, 233, 1, 52, // Opcode: CGEBR
/* 1494 */    MCD::OPC_FilterValue, 169, 1, 10, 0, // Skip to: 1509
/* 1499 */    MCD::OPC_CheckField, 8, 4, 0, 197, 1, // Skip to: 1958
/* 1505 */    MCD::OPC_Decode, 232, 1, 53, // Opcode: CGDBR
/* 1509 */    MCD::OPC_FilterValue, 170, 1, 10, 0, // Skip to: 1524
/* 1514 */    MCD::OPC_CheckField, 8, 4, 0, 182, 1, // Skip to: 1958
/* 1520 */    MCD::OPC_Decode, 246, 1, 54, // Opcode: CGXBR
/* 1524 */    MCD::OPC_FilterValue, 193, 1, 10, 0, // Skip to: 1539
/* 1529 */    MCD::OPC_CheckField, 8, 8, 0, 167, 1, // Skip to: 1958
/* 1535 */    MCD::OPC_Decode, 208, 2, 50, // Opcode: LDGR
/* 1539 */    MCD::OPC_FilterValue, 205, 1, 158, 1, // Skip to: 1958
/* 1544 */    MCD::OPC_CheckField, 8, 8, 0, 152, 1, // Skip to: 1958
/* 1550 */    MCD::OPC_Decode, 220, 2, 55, // Opcode: LGDR
/* 1554 */    MCD::OPC_FilterValue, 185, 1, 134, 1, // Skip to: 1949
/* 1559 */    MCD::OPC_ExtractField, 8, 16,  // Inst{23-8} ...
/* 1562 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 1571
/* 1567 */    MCD::OPC_Decode, 202, 2, 56, // Opcode: LCGR
/* 1571 */    MCD::OPC_FilterValue, 128, 8, 4, 0, // Skip to: 1580
/* 1576 */    MCD::OPC_Decode, 229, 2, 56, // Opcode: LGR
/* 1580 */    MCD::OPC_FilterValue, 128, 12, 4, 0, // Skip to: 1589
/* 1585 */    MCD::OPC_Decode, 219, 2, 56, // Opcode: LGBR
/* 1589 */    MCD::OPC_FilterValue, 128, 14, 4, 0, // Skip to: 1598
/* 1594 */    MCD::OPC_Decode, 227, 2, 56, // Opcode: LGHR
/* 1598 */    MCD::OPC_FilterValue, 128, 16, 3, 0, // Skip to: 1606
/* 1603 */    MCD::OPC_Decode, 32, 57, // Opcode: AGR
/* 1606 */    MCD::OPC_FilterValue, 128, 18, 4, 0, // Skip to: 1615
/* 1611 */    MCD::OPC_Decode, 232, 3, 57, // Opcode: SGR
/* 1615 */    MCD::OPC_FilterValue, 128, 20, 3, 0, // Skip to: 1623
/* 1620 */    MCD::OPC_Decode, 47, 57, // Opcode: ALGR
/* 1623 */    MCD::OPC_FilterValue, 128, 22, 4, 0, // Skip to: 1632
/* 1628 */    MCD::OPC_Decode, 245, 3, 57, // Opcode: SLGR
/* 1632 */    MCD::OPC_FilterValue, 128, 24, 4, 0, // Skip to: 1641
/* 1637 */    MCD::OPC_Decode, 176, 3, 57, // Opcode: MSGR
/* 1641 */    MCD::OPC_FilterValue, 128, 26, 4, 0, // Skip to: 1650
/* 1646 */    MCD::OPC_Decode, 170, 2, 58, // Opcode: DSGR
/* 1650 */    MCD::OPC_FilterValue, 128, 30, 4, 0, // Skip to: 1659
/* 1655 */    MCD::OPC_Decode, 138, 3, 56, // Opcode: LRVGR
/* 1659 */    MCD::OPC_FilterValue, 128, 38, 4, 0, // Skip to: 1668
/* 1664 */    MCD::OPC_Decode, 201, 2, 59, // Opcode: LCGFR
/* 1668 */    MCD::OPC_FilterValue, 128, 40, 4, 0, // Skip to: 1677
/* 1673 */    MCD::OPC_Decode, 223, 2, 59, // Opcode: LGFR
/* 1677 */    MCD::OPC_FilterValue, 128, 44, 4, 0, // Skip to: 1686
/* 1682 */    MCD::OPC_Decode, 241, 2, 59, // Opcode: LLGFR
/* 1686 */    MCD::OPC_FilterValue, 128, 48, 3, 0, // Skip to: 1694
/* 1691 */    MCD::OPC_Decode, 30, 60, // Opcode: AGFR
/* 1694 */    MCD::OPC_FilterValue, 128, 50, 4, 0, // Skip to: 1703
/* 1699 */    MCD::OPC_Decode, 231, 3, 60, // Opcode: SGFR
/* 1703 */    MCD::OPC_FilterValue, 128, 52, 3, 0, // Skip to: 1711
/* 1708 */    MCD::OPC_Decode, 46, 60, // Opcode: ALGFR
/* 1711 */    MCD::OPC_FilterValue, 128, 54, 4, 0, // Skip to: 1720
/* 1716 */    MCD::OPC_Decode, 244, 3, 60, // Opcode: SLGFR
/* 1720 */    MCD::OPC_FilterValue, 128, 56, 4, 0, // Skip to: 1729
/* 1725 */    MCD::OPC_Decode, 175, 3, 60, // Opcode: MSGFR
/* 1729 */    MCD::OPC_FilterValue, 128, 58, 4, 0, // Skip to: 1738
/* 1734 */    MCD::OPC_Decode, 169, 2, 61, // Opcode: DSGFR
/* 1738 */    MCD::OPC_FilterValue, 128, 62, 4, 0, // Skip to: 1747
/* 1743 */    MCD::OPC_Decode, 139, 3, 2, // Opcode: LRVR
/* 1747 */    MCD::OPC_FilterValue, 128, 64, 4, 0, // Skip to: 1756
/* 1752 */    MCD::OPC_Decode, 243, 1, 56, // Opcode: CGR
/* 1756 */    MCD::OPC_FilterValue, 128, 66, 4, 0, // Skip to: 1765
/* 1761 */    MCD::OPC_Decode, 136, 2, 56, // Opcode: CLGR
/* 1765 */    MCD::OPC_FilterValue, 128, 76, 4, 0, // Skip to: 1774
/* 1770 */    MCD::OPC_Decode, 198, 2, 2, // Opcode: LBR
/* 1774 */    MCD::OPC_FilterValue, 128, 78, 4, 0, // Skip to: 1783
/* 1779 */    MCD::OPC_Decode, 233, 2, 2, // Opcode: LHR
/* 1783 */    MCD::OPC_FilterValue, 128, 96, 4, 0, // Skip to: 1792
/* 1788 */    MCD::OPC_Decode, 236, 1, 59, // Opcode: CGFR
/* 1792 */    MCD::OPC_FilterValue, 128, 98, 4, 0, // Skip to: 1801
/* 1797 */    MCD::OPC_Decode, 132, 2, 59, // Opcode: CLGFR
/* 1801 */    MCD::OPC_FilterValue, 128, 128, 2, 4, 0, // Skip to: 1811
/* 1807 */    MCD::OPC_Decode, 189, 3, 57, // Opcode: NGR
/* 1811 */    MCD::OPC_FilterValue, 128, 130, 2, 4, 0, // Skip to: 1821
/* 1817 */    MCD::OPC_Decode, 205, 3, 57, // Opcode: OGR
/* 1821 */    MCD::OPC_FilterValue, 128, 132, 2, 4, 0, // Skip to: 1831
/* 1827 */    MCD::OPC_Decode, 168, 4, 57, // Opcode: XGR
/* 1831 */    MCD::OPC_FilterValue, 128, 134, 2, 4, 0, // Skip to: 1841
/* 1837 */    MCD::OPC_Decode, 176, 2, 62, // Opcode: FLOGR
/* 1841 */    MCD::OPC_FilterValue, 128, 136, 2, 4, 0, // Skip to: 1851
/* 1847 */    MCD::OPC_Decode, 239, 2, 56, // Opcode: LLGCR
/* 1851 */    MCD::OPC_FilterValue, 128, 138, 2, 4, 0, // Skip to: 1861
/* 1857 */    MCD::OPC_Decode, 244, 2, 56, // Opcode: LLGHR
/* 1861 */    MCD::OPC_FilterValue, 128, 140, 2, 4, 0, // Skip to: 1871
/* 1867 */    MCD::OPC_Decode, 165, 3, 58, // Opcode: MLGR
/* 1871 */    MCD::OPC_FilterValue, 128, 142, 2, 4, 0, // Skip to: 1881
/* 1877 */    MCD::OPC_Decode, 165, 2, 58, // Opcode: DLGR
/* 1881 */    MCD::OPC_FilterValue, 128, 144, 2, 3, 0, // Skip to: 1890
/* 1887 */    MCD::OPC_Decode, 40, 57, // Opcode: ALCGR
/* 1890 */    MCD::OPC_FilterValue, 128, 146, 2, 4, 0, // Skip to: 1900
/* 1896 */    MCD::OPC_Decode, 241, 3, 57, // Opcode: SLGBR
/* 1900 */    MCD::OPC_FilterValue, 128, 168, 2, 4, 0, // Skip to: 1910
/* 1906 */    MCD::OPC_Decode, 237, 2, 2, // Opcode: LLCR
/* 1910 */    MCD::OPC_FilterValue, 128, 170, 2, 4, 0, // Skip to: 1920
/* 1916 */    MCD::OPC_Decode, 247, 2, 2, // Opcode: LLHR
/* 1920 */    MCD::OPC_FilterValue, 128, 174, 2, 4, 0, // Skip to: 1930
/* 1926 */    MCD::OPC_Decode, 166, 2, 61, // Opcode: DLR
/* 1930 */    MCD::OPC_FilterValue, 128, 176, 2, 3, 0, // Skip to: 1939
/* 1936 */    MCD::OPC_Decode, 41, 3, // Opcode: ALCR
/* 1939 */    MCD::OPC_FilterValue, 128, 178, 2, 13, 0, // Skip to: 1958
/* 1945 */    MCD::OPC_Decode, 238, 3, 3, // Opcode: SLBR
/* 1949 */    MCD::OPC_FilterValue, 186, 1, 4, 0, // Skip to: 1958
/* 1954 */    MCD::OPC_Decode, 152, 2, 63, // Opcode: CS
/* 1958 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable48[] = {
/* 0 */       MCD::OPC_ExtractField, 40, 8,  // Inst{47-40} ...
/* 3 */       MCD::OPC_FilterValue, 192, 1, 238, 0, // Skip to: 246
/* 8 */       MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 11 */      MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 19
/* 15 */      MCD::OPC_Decode, 195, 2, 64, // Opcode: LARL
/* 19 */      MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 27
/* 23 */      MCD::OPC_Decode, 222, 2, 65, // Opcode: LGFI
/* 27 */      MCD::OPC_FilterValue, 4, 127, 0, // Skip to: 158
/* 31 */      MCD::OPC_ExtractField, 36, 4,  // Inst{39-36} ...
/* 34 */      MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 42
/* 38 */      MCD::OPC_Decode, 211, 1, 66, // Opcode: AsmJOL
/* 42 */      MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 50
/* 46 */      MCD::OPC_Decode, 165, 1, 66, // Opcode: AsmJHL
/* 50 */      MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 58
/* 54 */      MCD::OPC_Decode, 204, 1, 66, // Opcode: AsmJNLEL
/* 58 */      MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 66
/* 62 */      MCD::OPC_Decode, 195, 1, 66, // Opcode: AsmJLL
/* 66 */      MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 74
/* 70 */      MCD::OPC_Decode, 200, 1, 66, // Opcode: AsmJNHEL
/* 74 */      MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 82
/* 78 */      MCD::OPC_Decode, 194, 1, 66, // Opcode: AsmJLHL
/* 82 */      MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 90
/* 86 */      MCD::OPC_Decode, 197, 1, 66, // Opcode: AsmJNEL
/* 90 */      MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 98
/* 94 */      MCD::OPC_Decode, 145, 1, 66, // Opcode: AsmJEL
/* 98 */      MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 106
/* 102 */     MCD::OPC_Decode, 206, 1, 66, // Opcode: AsmJNLHL
/* 106 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 114
/* 110 */     MCD::OPC_Decode, 164, 1, 66, // Opcode: AsmJHEL
/* 114 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 122
/* 118 */     MCD::OPC_Decode, 207, 1, 66, // Opcode: AsmJNLL
/* 122 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 130
/* 126 */     MCD::OPC_Decode, 184, 1, 66, // Opcode: AsmJLEL
/* 130 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 138
/* 134 */     MCD::OPC_Decode, 201, 1, 66, // Opcode: AsmJNHL
/* 138 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 146
/* 142 */     MCD::OPC_Decode, 209, 1, 66, // Opcode: AsmJNOL
/* 146 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 154
/* 150 */     MCD::OPC_Decode, 191, 2, 66, // Opcode: JG
/* 154 */     MCD::OPC_Decode, 131, 1, 67, // Opcode: AsmBRCL
/* 158 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 166
/* 162 */     MCD::OPC_Decode, 129, 1, 64, // Opcode: AsmBRASL
/* 166 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 174
/* 170 */     MCD::OPC_Decode, 170, 4, 68, // Opcode: XIHF
/* 174 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 182
/* 178 */     MCD::OPC_Decode, 171, 4, 68, // Opcode: XILF
/* 182 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 190
/* 186 */     MCD::OPC_Decode, 181, 2, 68, // Opcode: IIHF
/* 190 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 198
/* 194 */     MCD::OPC_Decode, 184, 2, 68, // Opcode: IILF
/* 198 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 206
/* 202 */     MCD::OPC_Decode, 191, 3, 68, // Opcode: NIHF
/* 206 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 214
/* 210 */     MCD::OPC_Decode, 194, 3, 68, // Opcode: NILF
/* 214 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 222
/* 218 */     MCD::OPC_Decode, 207, 3, 68, // Opcode: OIHF
/* 222 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 230
/* 226 */     MCD::OPC_Decode, 210, 3, 68, // Opcode: OILF
/* 230 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 238
/* 234 */     MCD::OPC_Decode, 249, 2, 69, // Opcode: LLIHF
/* 238 */     MCD::OPC_FilterValue, 15, 81, 6, // Skip to: 1859
/* 242 */     MCD::OPC_Decode, 252, 2, 69, // Opcode: LLILF
/* 246 */     MCD::OPC_FilterValue, 194, 1, 95, 0, // Skip to: 346
/* 251 */     MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 254 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 262
/* 258 */     MCD::OPC_Decode, 174, 3, 70, // Opcode: MSGFI
/* 262 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 270
/* 266 */     MCD::OPC_Decode, 171, 3, 71, // Opcode: MSFI
/* 270 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 278
/* 274 */     MCD::OPC_Decode, 243, 3, 68, // Opcode: SLGFI
/* 278 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 286
/* 282 */     MCD::OPC_Decode, 239, 3, 72, // Opcode: SLFI
/* 286 */     MCD::OPC_FilterValue, 8, 3, 0, // Skip to: 293
/* 290 */     MCD::OPC_Decode, 29, 70, // Opcode: AGFI
/* 293 */     MCD::OPC_FilterValue, 9, 3, 0, // Skip to: 300
/* 297 */     MCD::OPC_Decode, 26, 71, // Opcode: AFI
/* 300 */     MCD::OPC_FilterValue, 10, 3, 0, // Skip to: 307
/* 304 */     MCD::OPC_Decode, 45, 68, // Opcode: ALGFI
/* 307 */     MCD::OPC_FilterValue, 11, 3, 0, // Skip to: 314
/* 311 */     MCD::OPC_Decode, 42, 72, // Opcode: ALFI
/* 314 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 322
/* 318 */     MCD::OPC_Decode, 235, 1, 65, // Opcode: CGFI
/* 322 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 330
/* 326 */     MCD::OPC_Decode, 229, 1, 73, // Opcode: CFI
/* 330 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 338
/* 334 */     MCD::OPC_Decode, 131, 2, 69, // Opcode: CLGFI
/* 338 */     MCD::OPC_FilterValue, 15, 237, 5, // Skip to: 1859
/* 342 */     MCD::OPC_Decode, 128, 2, 74, // Opcode: CLFI
/* 346 */     MCD::OPC_FilterValue, 196, 1, 91, 0, // Skip to: 442
/* 351 */     MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 354 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 362
/* 358 */     MCD::OPC_Decode, 248, 2, 75, // Opcode: LLHRL
/* 362 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 370
/* 366 */     MCD::OPC_Decode, 228, 2, 64, // Opcode: LGHRL
/* 370 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 378
/* 374 */     MCD::OPC_Decode, 234, 2, 75, // Opcode: LHRL
/* 378 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 386
/* 382 */     MCD::OPC_Decode, 245, 2, 64, // Opcode: LLGHRL
/* 386 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 394
/* 390 */     MCD::OPC_Decode, 149, 4, 64, // Opcode: STHRL
/* 394 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 402
/* 398 */     MCD::OPC_Decode, 230, 2, 64, // Opcode: LGRL
/* 402 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 410
/* 406 */     MCD::OPC_Decode, 145, 4, 64, // Opcode: STGRL
/* 410 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 418
/* 414 */     MCD::OPC_Decode, 224, 2, 64, // Opcode: LGFRL
/* 418 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 426
/* 422 */     MCD::OPC_Decode, 135, 3, 75, // Opcode: LRL
/* 426 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 434
/* 430 */     MCD::OPC_Decode, 242, 2, 64, // Opcode: LLGFRL
/* 434 */     MCD::OPC_FilterValue, 15, 141, 5, // Skip to: 1859
/* 438 */     MCD::OPC_Decode, 153, 4, 64, // Opcode: STRL
/* 442 */     MCD::OPC_FilterValue, 198, 1, 83, 0, // Skip to: 530
/* 447 */     MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 450 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 458
/* 454 */     MCD::OPC_Decode, 240, 1, 64, // Opcode: CGHRL
/* 458 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 466
/* 462 */     MCD::OPC_Decode, 250, 1, 75, // Opcode: CHRL
/* 466 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 474
/* 470 */     MCD::OPC_Decode, 134, 2, 64, // Opcode: CLGHRL
/* 474 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 482
/* 478 */     MCD::OPC_Decode, 139, 2, 75, // Opcode: CLHRL
/* 482 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 490
/* 486 */     MCD::OPC_Decode, 245, 1, 64, // Opcode: CGRL
/* 490 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 498
/* 494 */     MCD::OPC_Decode, 137, 2, 64, // Opcode: CLGRL
/* 498 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 506
/* 502 */     MCD::OPC_Decode, 237, 1, 64, // Opcode: CGFRL
/* 506 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 514
/* 510 */     MCD::OPC_Decode, 151, 2, 75, // Opcode: CRL
/* 514 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 522
/* 518 */     MCD::OPC_Decode, 133, 2, 64, // Opcode: CLGFRL
/* 522 */     MCD::OPC_FilterValue, 15, 53, 5, // Skip to: 1859
/* 526 */     MCD::OPC_Decode, 143, 2, 75, // Opcode: CLRL
/* 530 */     MCD::OPC_FilterValue, 227, 1, 0, 2, // Skip to: 1047
/* 535 */     MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 538 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 546
/* 542 */     MCD::OPC_Decode, 217, 2, 76, // Opcode: LG
/* 546 */     MCD::OPC_FilterValue, 8, 3, 0, // Skip to: 553
/* 550 */     MCD::OPC_Decode, 27, 77, // Opcode: AG
/* 553 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 561
/* 557 */     MCD::OPC_Decode, 229, 3, 77, // Opcode: SG
/* 561 */     MCD::OPC_FilterValue, 10, 3, 0, // Skip to: 568
/* 565 */     MCD::OPC_Decode, 43, 77, // Opcode: ALG
/* 568 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 576
/* 572 */     MCD::OPC_Decode, 240, 3, 77, // Opcode: SLG
/* 576 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 584
/* 580 */     MCD::OPC_Decode, 172, 3, 77, // Opcode: MSG
/* 584 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 592
/* 588 */     MCD::OPC_Decode, 167, 2, 78, // Opcode: DSG
/* 592 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 600
/* 596 */     MCD::OPC_Decode, 137, 3, 76, // Opcode: LRVG
/* 600 */     MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 608
/* 604 */     MCD::OPC_Decode, 221, 2, 76, // Opcode: LGF
/* 608 */     MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 616
/* 612 */     MCD::OPC_Decode, 225, 2, 76, // Opcode: LGH
/* 616 */     MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 624
/* 620 */     MCD::OPC_Decode, 240, 2, 76, // Opcode: LLGF
/* 624 */     MCD::OPC_FilterValue, 24, 3, 0, // Skip to: 631
/* 628 */     MCD::OPC_Decode, 28, 77, // Opcode: AGF
/* 631 */     MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 639
/* 635 */     MCD::OPC_Decode, 230, 3, 77, // Opcode: SGF
/* 639 */     MCD::OPC_FilterValue, 26, 3, 0, // Skip to: 646
/* 643 */     MCD::OPC_Decode, 44, 77, // Opcode: ALGF
/* 646 */     MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 654
/* 650 */     MCD::OPC_Decode, 242, 3, 77, // Opcode: SLGF
/* 654 */     MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 662
/* 658 */     MCD::OPC_Decode, 173, 3, 77, // Opcode: MSGF
/* 662 */     MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 670
/* 666 */     MCD::OPC_Decode, 168, 2, 78, // Opcode: DSGF
/* 670 */     MCD::OPC_FilterValue, 30, 4, 0, // Skip to: 678
/* 674 */     MCD::OPC_Decode, 136, 3, 79, // Opcode: LRV
/* 678 */     MCD::OPC_FilterValue, 32, 4, 0, // Skip to: 686
/* 682 */     MCD::OPC_Decode, 231, 1, 76, // Opcode: CG
/* 686 */     MCD::OPC_FilterValue, 33, 4, 0, // Skip to: 694
/* 690 */     MCD::OPC_Decode, 129, 2, 76, // Opcode: CLG
/* 694 */     MCD::OPC_FilterValue, 36, 4, 0, // Skip to: 702
/* 698 */     MCD::OPC_Decode, 144, 4, 76, // Opcode: STG
/* 702 */     MCD::OPC_FilterValue, 47, 4, 0, // Skip to: 710
/* 706 */     MCD::OPC_Decode, 156, 4, 76, // Opcode: STRVG
/* 710 */     MCD::OPC_FilterValue, 48, 4, 0, // Skip to: 718
/* 714 */     MCD::OPC_Decode, 234, 1, 76, // Opcode: CGF
/* 718 */     MCD::OPC_FilterValue, 49, 4, 0, // Skip to: 726
/* 722 */     MCD::OPC_Decode, 130, 2, 76, // Opcode: CLGF
/* 726 */     MCD::OPC_FilterValue, 52, 4, 0, // Skip to: 734
/* 730 */     MCD::OPC_Decode, 238, 1, 76, // Opcode: CGH
/* 734 */     MCD::OPC_FilterValue, 62, 4, 0, // Skip to: 742
/* 738 */     MCD::OPC_Decode, 155, 4, 79, // Opcode: STRV
/* 742 */     MCD::OPC_FilterValue, 80, 4, 0, // Skip to: 750
/* 746 */     MCD::OPC_Decode, 158, 4, 76, // Opcode: STY
/* 750 */     MCD::OPC_FilterValue, 81, 4, 0, // Skip to: 758
/* 754 */     MCD::OPC_Decode, 178, 3, 80, // Opcode: MSY
/* 758 */     MCD::OPC_FilterValue, 84, 4, 0, // Skip to: 766
/* 762 */     MCD::OPC_Decode, 202, 3, 80, // Opcode: NY
/* 766 */     MCD::OPC_FilterValue, 85, 4, 0, // Skip to: 774
/* 770 */     MCD::OPC_Decode, 144, 2, 79, // Opcode: CLY
/* 774 */     MCD::OPC_FilterValue, 86, 4, 0, // Skip to: 782
/* 778 */     MCD::OPC_Decode, 218, 3, 80, // Opcode: OY
/* 782 */     MCD::OPC_FilterValue, 87, 4, 0, // Skip to: 790
/* 786 */     MCD::OPC_Decode, 175, 4, 80, // Opcode: XY
/* 790 */     MCD::OPC_FilterValue, 88, 4, 0, // Skip to: 798
/* 794 */     MCD::OPC_Decode, 146, 3, 79, // Opcode: LY
/* 798 */     MCD::OPC_FilterValue, 89, 4, 0, // Skip to: 806
/* 802 */     MCD::OPC_Decode, 158, 2, 79, // Opcode: CY
/* 806 */     MCD::OPC_FilterValue, 90, 3, 0, // Skip to: 813
/* 810 */     MCD::OPC_Decode, 126, 80, // Opcode: AY
/* 813 */     MCD::OPC_FilterValue, 91, 4, 0, // Skip to: 821
/* 817 */     MCD::OPC_Decode, 160, 4, 80, // Opcode: SY
/* 821 */     MCD::OPC_FilterValue, 94, 3, 0, // Skip to: 828
/* 825 */     MCD::OPC_Decode, 49, 80, // Opcode: ALY
/* 828 */     MCD::OPC_FilterValue, 95, 4, 0, // Skip to: 836
/* 832 */     MCD::OPC_Decode, 249, 3, 80, // Opcode: SLY
/* 836 */     MCD::OPC_FilterValue, 112, 4, 0, // Skip to: 844
/* 840 */     MCD::OPC_Decode, 151, 4, 76, // Opcode: STHY
/* 844 */     MCD::OPC_FilterValue, 113, 4, 0, // Skip to: 852
/* 848 */     MCD::OPC_Decode, 196, 2, 76, // Opcode: LAY
/* 852 */     MCD::OPC_FilterValue, 114, 4, 0, // Skip to: 860
/* 856 */     MCD::OPC_Decode, 139, 4, 76, // Opcode: STCY
/* 860 */     MCD::OPC_FilterValue, 115, 4, 0, // Skip to: 868
/* 864 */     MCD::OPC_Decode, 180, 2, 77, // Opcode: ICY
/* 868 */     MCD::OPC_FilterValue, 118, 4, 0, // Skip to: 876
/* 872 */     MCD::OPC_Decode, 197, 2, 79, // Opcode: LB
/* 876 */     MCD::OPC_FilterValue, 119, 4, 0, // Skip to: 884
/* 880 */     MCD::OPC_Decode, 218, 2, 76, // Opcode: LGB
/* 884 */     MCD::OPC_FilterValue, 120, 4, 0, // Skip to: 892
/* 888 */     MCD::OPC_Decode, 235, 2, 79, // Opcode: LHY
/* 892 */     MCD::OPC_FilterValue, 121, 4, 0, // Skip to: 900
/* 896 */     MCD::OPC_Decode, 252, 1, 79, // Opcode: CHY
/* 900 */     MCD::OPC_FilterValue, 122, 3, 0, // Skip to: 907
/* 904 */     MCD::OPC_Decode, 36, 80, // Opcode: AHY
/* 907 */     MCD::OPC_FilterValue, 123, 4, 0, // Skip to: 915
/* 911 */     MCD::OPC_Decode, 234, 3, 80, // Opcode: SHY
/* 915 */     MCD::OPC_FilterValue, 124, 4, 0, // Skip to: 923
/* 919 */     MCD::OPC_Decode, 163, 3, 80, // Opcode: MHY
/* 923 */     MCD::OPC_FilterValue, 128, 1, 4, 0, // Skip to: 932
/* 928 */     MCD::OPC_Decode, 188, 3, 77, // Opcode: NG
/* 932 */     MCD::OPC_FilterValue, 129, 1, 4, 0, // Skip to: 941
/* 937 */     MCD::OPC_Decode, 204, 3, 77, // Opcode: OG
/* 941 */     MCD::OPC_FilterValue, 130, 1, 4, 0, // Skip to: 950
/* 946 */     MCD::OPC_Decode, 167, 4, 77, // Opcode: XG
/* 950 */     MCD::OPC_FilterValue, 134, 1, 4, 0, // Skip to: 959
/* 955 */     MCD::OPC_Decode, 164, 3, 78, // Opcode: MLG
/* 959 */     MCD::OPC_FilterValue, 135, 1, 4, 0, // Skip to: 968
/* 964 */     MCD::OPC_Decode, 164, 2, 78, // Opcode: DLG
/* 968 */     MCD::OPC_FilterValue, 136, 1, 3, 0, // Skip to: 976
/* 973 */     MCD::OPC_Decode, 39, 77, // Opcode: ALCG
/* 976 */     MCD::OPC_FilterValue, 137, 1, 4, 0, // Skip to: 985
/* 981 */     MCD::OPC_Decode, 237, 3, 77, // Opcode: SLBG
/* 985 */     MCD::OPC_FilterValue, 144, 1, 4, 0, // Skip to: 994
/* 990 */     MCD::OPC_Decode, 238, 2, 76, // Opcode: LLGC
/* 994 */     MCD::OPC_FilterValue, 145, 1, 4, 0, // Skip to: 1003
/* 999 */     MCD::OPC_Decode, 243, 2, 76, // Opcode: LLGH
/* 1003 */    MCD::OPC_FilterValue, 148, 1, 4, 0, // Skip to: 1012
/* 1008 */    MCD::OPC_Decode, 236, 2, 79, // Opcode: LLC
/* 1012 */    MCD::OPC_FilterValue, 149, 1, 4, 0, // Skip to: 1021
/* 1017 */    MCD::OPC_Decode, 246, 2, 79, // Opcode: LLH
/* 1021 */    MCD::OPC_FilterValue, 151, 1, 4, 0, // Skip to: 1030
/* 1026 */    MCD::OPC_Decode, 163, 2, 78, // Opcode: DL
/* 1030 */    MCD::OPC_FilterValue, 152, 1, 3, 0, // Skip to: 1038
/* 1035 */    MCD::OPC_Decode, 38, 80, // Opcode: ALC
/* 1038 */    MCD::OPC_FilterValue, 153, 1, 48, 3, // Skip to: 1859
/* 1043 */    MCD::OPC_Decode, 236, 3, 80, // Opcode: SLB
/* 1047 */    MCD::OPC_FilterValue, 229, 1, 75, 0, // Skip to: 1127
/* 1052 */    MCD::OPC_ExtractField, 32, 8,  // Inst{39-32} ...
/* 1055 */    MCD::OPC_FilterValue, 68, 4, 0, // Skip to: 1063
/* 1059 */    MCD::OPC_Decode, 180, 3, 81, // Opcode: MVHHI
/* 1063 */    MCD::OPC_FilterValue, 72, 4, 0, // Skip to: 1071
/* 1067 */    MCD::OPC_Decode, 179, 3, 81, // Opcode: MVGHI
/* 1071 */    MCD::OPC_FilterValue, 76, 4, 0, // Skip to: 1079
/* 1075 */    MCD::OPC_Decode, 181, 3, 81, // Opcode: MVHI
/* 1079 */    MCD::OPC_FilterValue, 84, 4, 0, // Skip to: 1087
/* 1083 */    MCD::OPC_Decode, 248, 1, 81, // Opcode: CHHSI
/* 1087 */    MCD::OPC_FilterValue, 85, 4, 0, // Skip to: 1095
/* 1091 */    MCD::OPC_Decode, 138, 2, 82, // Opcode: CLHHSI
/* 1095 */    MCD::OPC_FilterValue, 88, 4, 0, // Skip to: 1103
/* 1099 */    MCD::OPC_Decode, 241, 1, 81, // Opcode: CGHSI
/* 1103 */    MCD::OPC_FilterValue, 89, 4, 0, // Skip to: 1111
/* 1107 */    MCD::OPC_Decode, 135, 2, 82, // Opcode: CLGHSI
/* 1111 */    MCD::OPC_FilterValue, 92, 4, 0, // Skip to: 1119
/* 1115 */    MCD::OPC_Decode, 251, 1, 81, // Opcode: CHSI
/* 1119 */    MCD::OPC_FilterValue, 93, 224, 2, // Skip to: 1859
/* 1123 */    MCD::OPC_Decode, 255, 1, 82, // Opcode: CLFHSI
/* 1127 */    MCD::OPC_FilterValue, 235, 1, 129, 0, // Skip to: 1261
/* 1132 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 1135 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1143
/* 1139 */    MCD::OPC_Decode, 255, 2, 83, // Opcode: LMG
/* 1143 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1151
/* 1147 */    MCD::OPC_Decode, 129, 4, 84, // Opcode: SRAG
/* 1151 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1159
/* 1155 */    MCD::OPC_Decode, 131, 4, 84, // Opcode: SRLG
/* 1159 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 1167
/* 1163 */    MCD::OPC_Decode, 247, 3, 84, // Opcode: SLLG
/* 1167 */    MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 1175
/* 1171 */    MCD::OPC_Decode, 154, 2, 85, // Opcode: CSY
/* 1175 */    MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 1183
/* 1179 */    MCD::OPC_Decode, 223, 3, 84, // Opcode: RLLG
/* 1183 */    MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 1191
/* 1187 */    MCD::OPC_Decode, 222, 3, 86, // Opcode: RLL
/* 1191 */    MCD::OPC_FilterValue, 36, 4, 0, // Skip to: 1199
/* 1195 */    MCD::OPC_Decode, 152, 4, 83, // Opcode: STMG
/* 1199 */    MCD::OPC_FilterValue, 48, 4, 0, // Skip to: 1207
/* 1203 */    MCD::OPC_Decode, 153, 2, 87, // Opcode: CSG
/* 1207 */    MCD::OPC_FilterValue, 82, 4, 0, // Skip to: 1215
/* 1211 */    MCD::OPC_Decode, 183, 3, 88, // Opcode: MVIY
/* 1215 */    MCD::OPC_FilterValue, 84, 4, 0, // Skip to: 1223
/* 1219 */    MCD::OPC_Decode, 200, 3, 88, // Opcode: NIY
/* 1223 */    MCD::OPC_FilterValue, 85, 4, 0, // Skip to: 1231
/* 1227 */    MCD::OPC_Decode, 141, 2, 88, // Opcode: CLIY
/* 1231 */    MCD::OPC_FilterValue, 86, 4, 0, // Skip to: 1239
/* 1235 */    MCD::OPC_Decode, 216, 3, 88, // Opcode: OIY
/* 1239 */    MCD::OPC_FilterValue, 87, 4, 0, // Skip to: 1247
/* 1243 */    MCD::OPC_Decode, 173, 4, 88, // Opcode: XIY
/* 1247 */    MCD::OPC_FilterValue, 106, 3, 0, // Skip to: 1254
/* 1251 */    MCD::OPC_Decode, 51, 89, // Opcode: ASI
/* 1254 */    MCD::OPC_FilterValue, 122, 89, 2, // Skip to: 1859
/* 1258 */    MCD::OPC_Decode, 33, 89, // Opcode: AGSI
/* 1261 */    MCD::OPC_FilterValue, 236, 1, 5, 1, // Skip to: 1527
/* 1266 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 1269 */    MCD::OPC_FilterValue, 85, 4, 0, // Skip to: 1277
/* 1273 */    MCD::OPC_Decode, 220, 3, 90, // Opcode: RISBG
/* 1277 */    MCD::OPC_FilterValue, 100, 62, 0, // Skip to: 1343
/* 1281 */    MCD::OPC_ExtractField, 8, 4,  // Inst{11-8} ...
/* 1284 */    MCD::OPC_FilterValue, 0, 59, 2, // Skip to: 1859
/* 1288 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 1291 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1299
/* 1295 */    MCD::OPC_Decode, 152, 1, 91, // Opcode: AsmJHCGR
/* 1299 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1307
/* 1303 */    MCD::OPC_Decode, 172, 1, 91, // Opcode: AsmJLCGR
/* 1307 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1315
/* 1311 */    MCD::OPC_Decode, 191, 1, 91, // Opcode: AsmJLHCGR
/* 1315 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1323
/* 1319 */    MCD::OPC_Decode, 142, 1, 91, // Opcode: AsmJECGR
/* 1323 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1331
/* 1327 */    MCD::OPC_Decode, 161, 1, 91, // Opcode: AsmJHECGR
/* 1331 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1339
/* 1335 */    MCD::OPC_Decode, 181, 1, 91, // Opcode: AsmJLECGR
/* 1339 */    MCD::OPC_Decode, 133, 1, 92, // Opcode: AsmCGRJ
/* 1343 */    MCD::OPC_FilterValue, 118, 62, 0, // Skip to: 1409
/* 1347 */    MCD::OPC_ExtractField, 8, 4,  // Inst{11-8} ...
/* 1350 */    MCD::OPC_FilterValue, 0, 249, 1, // Skip to: 1859
/* 1354 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 1357 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1365
/* 1361 */    MCD::OPC_Decode, 154, 1, 93, // Opcode: AsmJHCR
/* 1365 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1373
/* 1369 */    MCD::OPC_Decode, 174, 1, 93, // Opcode: AsmJLCR
/* 1373 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1381
/* 1377 */    MCD::OPC_Decode, 193, 1, 93, // Opcode: AsmJLHCR
/* 1381 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1389
/* 1385 */    MCD::OPC_Decode, 144, 1, 93, // Opcode: AsmJECR
/* 1389 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1397
/* 1393 */    MCD::OPC_Decode, 163, 1, 93, // Opcode: AsmJHECR
/* 1397 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1405
/* 1401 */    MCD::OPC_Decode, 183, 1, 93, // Opcode: AsmJLECR
/* 1405 */    MCD::OPC_Decode, 135, 1, 94, // Opcode: AsmCRJ
/* 1409 */    MCD::OPC_FilterValue, 124, 55, 0, // Skip to: 1468
/* 1413 */    MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 1416 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1424
/* 1420 */    MCD::OPC_Decode, 151, 1, 95, // Opcode: AsmJHCGI
/* 1424 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1432
/* 1428 */    MCD::OPC_Decode, 171, 1, 95, // Opcode: AsmJLCGI
/* 1432 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1440
/* 1436 */    MCD::OPC_Decode, 190, 1, 95, // Opcode: AsmJLHCGI
/* 1440 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1448
/* 1444 */    MCD::OPC_Decode, 141, 1, 95, // Opcode: AsmJECGI
/* 1448 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1456
/* 1452 */    MCD::OPC_Decode, 160, 1, 95, // Opcode: AsmJHECGI
/* 1456 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1464
/* 1460 */    MCD::OPC_Decode, 180, 1, 95, // Opcode: AsmJLECGI
/* 1464 */    MCD::OPC_Decode, 132, 1, 96, // Opcode: AsmCGIJ
/* 1468 */    MCD::OPC_FilterValue, 126, 131, 1, // Skip to: 1859
/* 1472 */    MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 1475 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1483
/* 1479 */    MCD::OPC_Decode, 153, 1, 97, // Opcode: AsmJHCI
/* 1483 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1491
/* 1487 */    MCD::OPC_Decode, 173, 1, 97, // Opcode: AsmJLCI
/* 1491 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1499
/* 1495 */    MCD::OPC_Decode, 192, 1, 97, // Opcode: AsmJLHCI
/* 1499 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1507
/* 1503 */    MCD::OPC_Decode, 143, 1, 97, // Opcode: AsmJECI
/* 1507 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1515
/* 1511 */    MCD::OPC_Decode, 162, 1, 97, // Opcode: AsmJHECI
/* 1515 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1523
/* 1519 */    MCD::OPC_Decode, 182, 1, 97, // Opcode: AsmJLECI
/* 1523 */    MCD::OPC_Decode, 134, 1, 98, // Opcode: AsmCIJ
/* 1527 */    MCD::OPC_FilterValue, 237, 1, 71, 1, // Skip to: 1859
/* 1532 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 1535 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 1549
/* 1539 */    MCD::OPC_CheckField, 8, 8, 0, 58, 1, // Skip to: 1859
/* 1545 */    MCD::OPC_Decode, 206, 2, 99, // Opcode: LDEB
/* 1549 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 1563
/* 1553 */    MCD::OPC_CheckField, 8, 8, 0, 44, 1, // Skip to: 1859
/* 1559 */    MCD::OPC_Decode, 141, 3, 100, // Opcode: LXDB
/* 1563 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 1577
/* 1567 */    MCD::OPC_CheckField, 8, 8, 0, 30, 1, // Skip to: 1859
/* 1573 */    MCD::OPC_Decode, 143, 3, 100, // Opcode: LXEB
/* 1577 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 1591
/* 1581 */    MCD::OPC_CheckField, 8, 8, 0, 16, 1, // Skip to: 1859
/* 1587 */    MCD::OPC_Decode, 185, 3, 101, // Opcode: MXDB
/* 1591 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 1605
/* 1595 */    MCD::OPC_CheckField, 8, 8, 0, 2, 1, // Skip to: 1859
/* 1601 */    MCD::OPC_Decode, 223, 1, 102, // Opcode: CEB
/* 1605 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1618
/* 1609 */    MCD::OPC_CheckField, 8, 8, 0, 244, 0, // Skip to: 1859
/* 1615 */    MCD::OPC_Decode, 23, 103, // Opcode: AEB
/* 1618 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 1632
/* 1622 */    MCD::OPC_CheckField, 8, 8, 0, 231, 0, // Skip to: 1859
/* 1628 */    MCD::OPC_Decode, 227, 3, 103, // Opcode: SEB
/* 1632 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 1646
/* 1636 */    MCD::OPC_CheckField, 8, 8, 0, 217, 0, // Skip to: 1859
/* 1642 */    MCD::OPC_Decode, 156, 3, 104, // Opcode: MDEB
/* 1646 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 1660
/* 1650 */    MCD::OPC_CheckField, 8, 8, 0, 203, 0, // Skip to: 1859
/* 1656 */    MCD::OPC_Decode, 161, 2, 103, // Opcode: DEB
/* 1660 */    MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 1674
/* 1664 */    MCD::OPC_CheckField, 8, 4, 0, 189, 0, // Skip to: 1859
/* 1670 */    MCD::OPC_Decode, 152, 3, 105, // Opcode: MAEB
/* 1674 */    MCD::OPC_FilterValue, 15, 10, 0, // Skip to: 1688
/* 1678 */    MCD::OPC_CheckField, 8, 4, 0, 175, 0, // Skip to: 1859
/* 1684 */    MCD::OPC_Decode, 169, 3, 105, // Opcode: MSEB
/* 1688 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 1702
/* 1692 */    MCD::OPC_CheckField, 8, 8, 0, 161, 0, // Skip to: 1859
/* 1698 */    MCD::OPC_Decode, 252, 3, 102, // Opcode: SQEB
/* 1702 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 1716
/* 1706 */    MCD::OPC_CheckField, 8, 8, 0, 147, 0, // Skip to: 1859
/* 1712 */    MCD::OPC_Decode, 250, 3, 99, // Opcode: SQDB
/* 1716 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 1730
/* 1720 */    MCD::OPC_CheckField, 8, 8, 0, 133, 0, // Skip to: 1859
/* 1726 */    MCD::OPC_Decode, 158, 3, 103, // Opcode: MEEB
/* 1730 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 1744
/* 1734 */    MCD::OPC_CheckField, 8, 8, 0, 119, 0, // Skip to: 1859
/* 1740 */    MCD::OPC_Decode, 219, 1, 99, // Opcode: CDB
/* 1744 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 1757
/* 1748 */    MCD::OPC_CheckField, 8, 8, 0, 105, 0, // Skip to: 1859
/* 1754 */    MCD::OPC_Decode, 18, 104, // Opcode: ADB
/* 1757 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 1771
/* 1761 */    MCD::OPC_CheckField, 8, 8, 0, 92, 0, // Skip to: 1859
/* 1767 */    MCD::OPC_Decode, 225, 3, 104, // Opcode: SDB
/* 1771 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 1785
/* 1775 */    MCD::OPC_CheckField, 8, 8, 0, 78, 0, // Skip to: 1859
/* 1781 */    MCD::OPC_Decode, 154, 3, 104, // Opcode: MDB
/* 1785 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 1799
/* 1789 */    MCD::OPC_CheckField, 8, 8, 0, 64, 0, // Skip to: 1859
/* 1795 */    MCD::OPC_Decode, 159, 2, 104, // Opcode: DDB
/* 1799 */    MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 1813
/* 1803 */    MCD::OPC_CheckField, 8, 4, 0, 50, 0, // Skip to: 1859
/* 1809 */    MCD::OPC_Decode, 150, 3, 106, // Opcode: MADB
/* 1813 */    MCD::OPC_FilterValue, 31, 10, 0, // Skip to: 1827
/* 1817 */    MCD::OPC_CheckField, 8, 4, 0, 36, 0, // Skip to: 1859
/* 1823 */    MCD::OPC_Decode, 167, 3, 106, // Opcode: MSDB
/* 1827 */    MCD::OPC_FilterValue, 100, 4, 0, // Skip to: 1835
/* 1831 */    MCD::OPC_Decode, 216, 2, 107, // Opcode: LEY
/* 1835 */    MCD::OPC_FilterValue, 101, 4, 0, // Skip to: 1843
/* 1839 */    MCD::OPC_Decode, 211, 2, 108, // Opcode: LDY
/* 1843 */    MCD::OPC_FilterValue, 102, 4, 0, // Skip to: 1851
/* 1847 */    MCD::OPC_Decode, 143, 4, 107, // Opcode: STEY
/* 1851 */    MCD::OPC_FilterValue, 103, 4, 0, // Skip to: 1859
/* 1855 */    MCD::OPC_Decode, 141, 4, 108, // Opcode: STDY
/* 1859 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, uint64_t Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  }
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder) {
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeADDR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeADDR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeBDAddr32Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeBDAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 8);
    if (decodeU8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeU16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeU16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (decodeAccessRegOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeBDAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodePC32DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeS32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodePC32DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodePC32DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeU32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeU32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeS32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeS32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeU32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeS32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeU32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodePC32DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 79:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodeBDAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodeBDAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeU16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr32Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 86:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr32Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 8);
    if (decodeU8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 8);
    if (decodeS8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 90:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 24, 8);
    if (decodeU6ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 8);
    if (decodeU6ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeU6ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 91:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 92:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 93:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 94:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 95:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeS8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 96:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeS8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 97:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeS8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 98:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeS8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 99:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 100:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 101:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 102:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 103:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 104:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 105:
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 106:
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 107:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 108:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  }
}

template<typename InsnType>
static DecodeStatus decodeInstruction(const uint8_t DecodeTable[], MCInst &MI,
                                      InsnType insn, uint64_t Address,
                                      const void *DisAsm,
                                      const MCSubtargetInfo &STI) {
  uint64_t Bits = STI.getFeatureBits();

  const uint8_t *Ptr = DecodeTable;
  uint32_t CurFieldValue = 0;
  DecodeStatus S = MCDisassembler::Success;
  for (;;) {
    ptrdiff_t Loc = Ptr - DecodeTable;
    switch (*Ptr) {
    default:
      errs() << Loc << ": Unexpected decode table opcode!\n";
      return MCDisassembler::Fail;
    case MCD::OPC_ExtractField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      ++Ptr;
      CurFieldValue = fieldFromInstruction(insn, Start, Len);
      DEBUG(dbgs() << Loc << ": OPC_ExtractField(" << Start << ", "
                   << Len << "): " << CurFieldValue << "\n");
      break;
    }
    case MCD::OPC_FilterValue: {
      // Decode the field value.
      unsigned Len;
      InsnType Val = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the filter operation.
      if (Val != CurFieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_FilterValue(" << Val << ", " << NumToSkip
                   << "): " << ((Val != CurFieldValue) ? "FAIL:" : "PASS:")
                   << " continuing at " << (Ptr - DecodeTable) << "\n");

      break;
    }
    case MCD::OPC_CheckField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      InsnType FieldValue = fieldFromInstruction(insn, Start, Len);
      // Decode the field value.
      uint32_t ExpectedValue = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // If the actual and expected values don't match, skip.
      if (ExpectedValue != FieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_CheckField(" << Start << ", "
                   << Len << ", " << ExpectedValue << ", " << NumToSkip
                   << "): FieldValue = " << FieldValue << ", ExpectedValue = "
                   << ExpectedValue << ": "
                   << ((ExpectedValue == FieldValue) ? "PASS\n" : "FAIL\n"));
      break;
    }
    case MCD::OPC_CheckPredicate: {
      unsigned Len;
      // Decode the Predicate Index value.
      unsigned PIdx = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      // Check the predicate.
      bool Pred;
      if (!(Pred = checkDecoderPredicate(PIdx, Bits)))
        Ptr += NumToSkip;
      (void)Pred;
      DEBUG(dbgs() << Loc << ": OPC_CheckPredicate(" << PIdx << "): "
            << (Pred ? "PASS\n" : "FAIL\n"));

      break;
    }
    case MCD::OPC_Decode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      DEBUG(dbgs() << Loc << ": OPC_Decode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << "\n" );
      DEBUG(dbgs() << "----- DECODE SUCCESSFUL -----\n");

      MI.setOpcode(Opc);
      return decodeToMCInst(S, DecodeIdx, insn, MI, Address, DisAsm);
    }
    case MCD::OPC_SoftFail: {
      // Decode the mask values.
      unsigned Len;
      InsnType PositiveMask = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      InsnType NegativeMask = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      bool Fail = (insn & PositiveMask) || (~insn & NegativeMask);
      if (Fail)
        S = MCDisassembler::SoftFail;
      DEBUG(dbgs() << Loc << ": OPC_SoftFail: " << (Fail ? "FAIL\n":"PASS\n"));
      break;
    }
    case MCD::OPC_Fail: {
      DEBUG(dbgs() << Loc << ": OPC_Fail\n");
      return MCDisassembler::Fail;
    }
    }
  }
  llvm_unreachable("bogosity detected in disassembler state machine!");
}


} // End llvm namespace
