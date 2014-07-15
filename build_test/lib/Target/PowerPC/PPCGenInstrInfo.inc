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

namespace PPC {
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
    ADD4	= 17,
    ADD4o	= 18,
    ADD8	= 19,
    ADD8TLS	= 20,
    ADD8o	= 21,
    ADDC	= 22,
    ADDC8	= 23,
    ADDC8o	= 24,
    ADDCo	= 25,
    ADDE	= 26,
    ADDE8	= 27,
    ADDE8o	= 28,
    ADDEo	= 29,
    ADDI	= 30,
    ADDI8	= 31,
    ADDIC	= 32,
    ADDIC8	= 33,
    ADDICo	= 34,
    ADDIS	= 35,
    ADDIS8	= 36,
    ADDISdtprelHA	= 37,
    ADDISgotTprelHA	= 38,
    ADDIStlsgdHA	= 39,
    ADDIStlsldHA	= 40,
    ADDIStocHA	= 41,
    ADDIdtprelL	= 42,
    ADDItlsgdL	= 43,
    ADDItlsldL	= 44,
    ADDItocL	= 45,
    ADDME	= 46,
    ADDME8	= 47,
    ADDME8o	= 48,
    ADDMEo	= 49,
    ADDZE	= 50,
    ADDZE8	= 51,
    ADDZE8o	= 52,
    ADDZEo	= 53,
    ADJCALLSTACKDOWN	= 54,
    ADJCALLSTACKUP	= 55,
    AND	= 56,
    AND8	= 57,
    AND8o	= 58,
    ANDC	= 59,
    ANDC8	= 60,
    ANDC8o	= 61,
    ANDCo	= 62,
    ANDISo	= 63,
    ANDISo8	= 64,
    ANDIo	= 65,
    ANDIo8	= 66,
    ANDo	= 67,
    ATOMIC_CMP_SWAP_I16	= 68,
    ATOMIC_CMP_SWAP_I32	= 69,
    ATOMIC_CMP_SWAP_I64	= 70,
    ATOMIC_CMP_SWAP_I8	= 71,
    ATOMIC_LOAD_ADD_I16	= 72,
    ATOMIC_LOAD_ADD_I32	= 73,
    ATOMIC_LOAD_ADD_I64	= 74,
    ATOMIC_LOAD_ADD_I8	= 75,
    ATOMIC_LOAD_AND_I16	= 76,
    ATOMIC_LOAD_AND_I32	= 77,
    ATOMIC_LOAD_AND_I64	= 78,
    ATOMIC_LOAD_AND_I8	= 79,
    ATOMIC_LOAD_NAND_I16	= 80,
    ATOMIC_LOAD_NAND_I32	= 81,
    ATOMIC_LOAD_NAND_I64	= 82,
    ATOMIC_LOAD_NAND_I8	= 83,
    ATOMIC_LOAD_OR_I16	= 84,
    ATOMIC_LOAD_OR_I32	= 85,
    ATOMIC_LOAD_OR_I64	= 86,
    ATOMIC_LOAD_OR_I8	= 87,
    ATOMIC_LOAD_SUB_I16	= 88,
    ATOMIC_LOAD_SUB_I32	= 89,
    ATOMIC_LOAD_SUB_I64	= 90,
    ATOMIC_LOAD_SUB_I8	= 91,
    ATOMIC_LOAD_XOR_I16	= 92,
    ATOMIC_LOAD_XOR_I32	= 93,
    ATOMIC_LOAD_XOR_I64	= 94,
    ATOMIC_LOAD_XOR_I8	= 95,
    ATOMIC_SWAP_I16	= 96,
    ATOMIC_SWAP_I32	= 97,
    ATOMIC_SWAP_I64	= 98,
    ATOMIC_SWAP_I8	= 99,
    B	= 100,
    BCC	= 101,
    BCCTR	= 102,
    BCCTR8	= 103,
    BCCTRL	= 104,
    BCCTRL8	= 105,
    BCLR	= 106,
    BCLalways	= 107,
    BCTR	= 108,
    BCTR8	= 109,
    BCTRL	= 110,
    BCTRL8	= 111,
    BDNZ	= 112,
    BDNZ8	= 113,
    BDNZLR	= 114,
    BDNZLR8	= 115,
    BDZ	= 116,
    BDZ8	= 117,
    BDZLR	= 118,
    BDZLR8	= 119,
    BL	= 120,
    BL8	= 121,
    BL8_NOP	= 122,
    BL8_NOP_TLSGD	= 123,
    BL8_NOP_TLSLD	= 124,
    BLA	= 125,
    BLA8	= 126,
    BLA8_NOP	= 127,
    BLR	= 128,
    CMPD	= 129,
    CMPDI	= 130,
    CMPLD	= 131,
    CMPLDI	= 132,
    CMPLW	= 133,
    CMPLWI	= 134,
    CMPW	= 135,
    CMPWI	= 136,
    CNTLZD	= 137,
    CNTLZDo	= 138,
    CNTLZW	= 139,
    CNTLZWo	= 140,
    CR6SET	= 141,
    CR6UNSET	= 142,
    CREQV	= 143,
    CROR	= 144,
    CRSET	= 145,
    CRUNSET	= 146,
    DCBA	= 147,
    DCBF	= 148,
    DCBI	= 149,
    DCBST	= 150,
    DCBT	= 151,
    DCBTST	= 152,
    DCBZ	= 153,
    DCBZL	= 154,
    DIVD	= 155,
    DIVDU	= 156,
    DIVDUo	= 157,
    DIVDo	= 158,
    DIVW	= 159,
    DIVWU	= 160,
    DIVWUo	= 161,
    DIVWo	= 162,
    DSS	= 163,
    DSSALL	= 164,
    DST	= 165,
    DST64	= 166,
    DSTST	= 167,
    DSTST64	= 168,
    DSTSTT	= 169,
    DSTSTT64	= 170,
    DSTT	= 171,
    DSTT64	= 172,
    DYNALLOC	= 173,
    DYNALLOC8	= 174,
    EH_SjLj_LongJmp32	= 175,
    EH_SjLj_LongJmp64	= 176,
    EH_SjLj_SetJmp32	= 177,
    EH_SjLj_SetJmp64	= 178,
    EH_SjLj_Setup	= 179,
    EQV	= 180,
    EQV8	= 181,
    EQV8o	= 182,
    EQVo	= 183,
    EXTSB	= 184,
    EXTSB8	= 185,
    EXTSB8o	= 186,
    EXTSBo	= 187,
    EXTSH	= 188,
    EXTSH8	= 189,
    EXTSH8o	= 190,
    EXTSHo	= 191,
    EXTSW	= 192,
    EXTSW_32_64	= 193,
    EXTSW_32_64o	= 194,
    EXTSWo	= 195,
    FABSD	= 196,
    FABSDo	= 197,
    FABSS	= 198,
    FABSSo	= 199,
    FADD	= 200,
    FADDS	= 201,
    FADDSo	= 202,
    FADDo	= 203,
    FADDrtz	= 204,
    FCFID	= 205,
    FCFIDS	= 206,
    FCFIDSo	= 207,
    FCFIDU	= 208,
    FCFIDUS	= 209,
    FCFIDUSo	= 210,
    FCFIDUo	= 211,
    FCFIDo	= 212,
    FCMPUD	= 213,
    FCMPUS	= 214,
    FCTIDUZ	= 215,
    FCTIDUZo	= 216,
    FCTIDZ	= 217,
    FCTIDZo	= 218,
    FCTIWUZ	= 219,
    FCTIWUZo	= 220,
    FCTIWZ	= 221,
    FCTIWZo	= 222,
    FDIV	= 223,
    FDIVS	= 224,
    FDIVSo	= 225,
    FDIVo	= 226,
    FMADD	= 227,
    FMADDS	= 228,
    FMADDSo	= 229,
    FMADDo	= 230,
    FMR	= 231,
    FMRo	= 232,
    FMSUB	= 233,
    FMSUBS	= 234,
    FMSUBSo	= 235,
    FMSUBo	= 236,
    FMUL	= 237,
    FMULS	= 238,
    FMULSo	= 239,
    FMULo	= 240,
    FNABSD	= 241,
    FNABSDo	= 242,
    FNABSS	= 243,
    FNABSSo	= 244,
    FNEGD	= 245,
    FNEGDo	= 246,
    FNEGS	= 247,
    FNEGSo	= 248,
    FNMADD	= 249,
    FNMADDS	= 250,
    FNMADDSo	= 251,
    FNMADDo	= 252,
    FNMSUB	= 253,
    FNMSUBS	= 254,
    FNMSUBSo	= 255,
    FNMSUBo	= 256,
    FRE	= 257,
    FRES	= 258,
    FRESo	= 259,
    FREo	= 260,
    FRIMD	= 261,
    FRIMDo	= 262,
    FRIMS	= 263,
    FRIMSo	= 264,
    FRIND	= 265,
    FRINDo	= 266,
    FRINDrint	= 267,
    FRINS	= 268,
    FRINSo	= 269,
    FRINSrint	= 270,
    FRIPD	= 271,
    FRIPDo	= 272,
    FRIPS	= 273,
    FRIPSo	= 274,
    FRIZD	= 275,
    FRIZDo	= 276,
    FRIZS	= 277,
    FRIZSo	= 278,
    FRSP	= 279,
    FRSPo	= 280,
    FRSQRTE	= 281,
    FRSQRTES	= 282,
    FRSQRTESo	= 283,
    FRSQRTEo	= 284,
    FSELD	= 285,
    FSELDo	= 286,
    FSELS	= 287,
    FSELSo	= 288,
    FSQRT	= 289,
    FSQRTS	= 290,
    FSQRTSo	= 291,
    FSQRTo	= 292,
    FSUB	= 293,
    FSUBS	= 294,
    FSUBSo	= 295,
    FSUBo	= 296,
    GETtlsADDR	= 297,
    GETtlsldADDR	= 298,
    ICBI	= 299,
    ISEL	= 300,
    ISEL8	= 301,
    ISYNC	= 302,
    LA	= 303,
    LBZ	= 304,
    LBZ8	= 305,
    LBZU	= 306,
    LBZU8	= 307,
    LBZUX	= 308,
    LBZUX8	= 309,
    LBZX	= 310,
    LBZX8	= 311,
    LD	= 312,
    LDARX	= 313,
    LDBRX	= 314,
    LDU	= 315,
    LDUX	= 316,
    LDX	= 317,
    LDgotTprelL	= 318,
    LDinto_toc	= 319,
    LDtoc	= 320,
    LDtocCPT	= 321,
    LDtocJTI	= 322,
    LDtocL	= 323,
    LDtoc_restore	= 324,
    LFD	= 325,
    LFDU	= 326,
    LFDUX	= 327,
    LFDX	= 328,
    LFIWAX	= 329,
    LFIWZX	= 330,
    LFS	= 331,
    LFSU	= 332,
    LFSUX	= 333,
    LFSX	= 334,
    LHA	= 335,
    LHA8	= 336,
    LHAU	= 337,
    LHAU8	= 338,
    LHAUX	= 339,
    LHAUX8	= 340,
    LHAX	= 341,
    LHAX8	= 342,
    LHBRX	= 343,
    LHZ	= 344,
    LHZ8	= 345,
    LHZU	= 346,
    LHZU8	= 347,
    LHZUX	= 348,
    LHZUX8	= 349,
    LHZX	= 350,
    LHZX8	= 351,
    LI	= 352,
    LI8	= 353,
    LIS	= 354,
    LIS8	= 355,
    LVEBX	= 356,
    LVEHX	= 357,
    LVEWX	= 358,
    LVSL	= 359,
    LVSR	= 360,
    LVX	= 361,
    LVXL	= 362,
    LWA	= 363,
    LWARX	= 364,
    LWAUX	= 365,
    LWAX	= 366,
    LWBRX	= 367,
    LWZ	= 368,
    LWZ8	= 369,
    LWZU	= 370,
    LWZU8	= 371,
    LWZUX	= 372,
    LWZUX8	= 373,
    LWZX	= 374,
    LWZX8	= 375,
    MCRF	= 376,
    MFCR	= 377,
    MFCR8	= 378,
    MFCR8pseud	= 379,
    MFCRpseud	= 380,
    MFCTR	= 381,
    MFCTR8	= 382,
    MFFS	= 383,
    MFLR	= 384,
    MFLR8	= 385,
    MFOCRF	= 386,
    MFTB8	= 387,
    MFVRSAVE	= 388,
    MFVRSAVEv	= 389,
    MFVSCR	= 390,
    MTCRF	= 391,
    MTCRF8	= 392,
    MTCTR	= 393,
    MTCTR8	= 394,
    MTCTR8loop	= 395,
    MTCTRloop	= 396,
    MTFSB0	= 397,
    MTFSB1	= 398,
    MTFSF	= 399,
    MTLR	= 400,
    MTLR8	= 401,
    MTVRSAVE	= 402,
    MTVRSAVEv	= 403,
    MTVSCR	= 404,
    MULHD	= 405,
    MULHDU	= 406,
    MULHDUo	= 407,
    MULHDo	= 408,
    MULHW	= 409,
    MULHWU	= 410,
    MULHWUo	= 411,
    MULHWo	= 412,
    MULLD	= 413,
    MULLDo	= 414,
    MULLI	= 415,
    MULLW	= 416,
    MULLWo	= 417,
    MovePCtoLR	= 418,
    MovePCtoLR8	= 419,
    NAND	= 420,
    NAND8	= 421,
    NAND8o	= 422,
    NANDo	= 423,
    NEG	= 424,
    NEG8	= 425,
    NEG8o	= 426,
    NEGo	= 427,
    NOP	= 428,
    NOR	= 429,
    NOR8	= 430,
    NOR8o	= 431,
    NORo	= 432,
    OR	= 433,
    OR8	= 434,
    OR8o	= 435,
    ORC	= 436,
    ORC8	= 437,
    ORC8o	= 438,
    ORCo	= 439,
    ORI	= 440,
    ORI8	= 441,
    ORIS	= 442,
    ORIS8	= 443,
    ORo	= 444,
    POPCNTD	= 445,
    POPCNTDo	= 446,
    POPCNTW	= 447,
    POPCNTWo	= 448,
    RESTORE_CR	= 449,
    RESTORE_VRSAVE	= 450,
    RLDCL	= 451,
    RLDCLo	= 452,
    RLDICL	= 453,
    RLDICLo	= 454,
    RLDICR	= 455,
    RLDICRo	= 456,
    RLDIMI	= 457,
    RLDIMIo	= 458,
    RLWIMI	= 459,
    RLWIMIo	= 460,
    RLWINM	= 461,
    RLWINM8	= 462,
    RLWINM8o	= 463,
    RLWINMo	= 464,
    RLWNM	= 465,
    RLWNMo	= 466,
    SC	= 467,
    SELECT_CC_F4	= 468,
    SELECT_CC_F8	= 469,
    SELECT_CC_I4	= 470,
    SELECT_CC_I8	= 471,
    SELECT_CC_VRRC	= 472,
    SLD	= 473,
    SLDI	= 474,
    SLDo	= 475,
    SLW	= 476,
    SLWI	= 477,
    SLWo	= 478,
    SPILL_CR	= 479,
    SPILL_VRSAVE	= 480,
    SRAD	= 481,
    SRADI	= 482,
    SRADIo	= 483,
    SRADo	= 484,
    SRAW	= 485,
    SRAWI	= 486,
    SRAWIo	= 487,
    SRAWo	= 488,
    SRD	= 489,
    SRDI	= 490,
    SRDo	= 491,
    SRW	= 492,
    SRWI	= 493,
    SRWo	= 494,
    STB	= 495,
    STB8	= 496,
    STBU	= 497,
    STBU8	= 498,
    STBUX	= 499,
    STBUX8	= 500,
    STBX	= 501,
    STBX8	= 502,
    STD	= 503,
    STDBRX	= 504,
    STDCX	= 505,
    STDU	= 506,
    STDUX	= 507,
    STDX	= 508,
    STFD	= 509,
    STFDU	= 510,
    STFDUX	= 511,
    STFDX	= 512,
    STFIWX	= 513,
    STFS	= 514,
    STFSU	= 515,
    STFSUX	= 516,
    STFSX	= 517,
    STH	= 518,
    STH8	= 519,
    STHBRX	= 520,
    STHU	= 521,
    STHU8	= 522,
    STHUX	= 523,
    STHUX8	= 524,
    STHX	= 525,
    STHX8	= 526,
    STVEBX	= 527,
    STVEHX	= 528,
    STVEWX	= 529,
    STVX	= 530,
    STVXL	= 531,
    STW	= 532,
    STW8	= 533,
    STWBRX	= 534,
    STWCX	= 535,
    STWU	= 536,
    STWU8	= 537,
    STWUX	= 538,
    STWUX8	= 539,
    STWX	= 540,
    STWX8	= 541,
    SUBF	= 542,
    SUBF8	= 543,
    SUBF8o	= 544,
    SUBFC	= 545,
    SUBFC8	= 546,
    SUBFC8o	= 547,
    SUBFCo	= 548,
    SUBFE	= 549,
    SUBFE8	= 550,
    SUBFE8o	= 551,
    SUBFEo	= 552,
    SUBFIC	= 553,
    SUBFIC8	= 554,
    SUBFME	= 555,
    SUBFME8	= 556,
    SUBFME8o	= 557,
    SUBFMEo	= 558,
    SUBFZE	= 559,
    SUBFZE8	= 560,
    SUBFZE8o	= 561,
    SUBFZEo	= 562,
    SUBFo	= 563,
    SYNC	= 564,
    TAILB	= 565,
    TAILB8	= 566,
    TAILBA	= 567,
    TAILBA8	= 568,
    TAILBCTR	= 569,
    TAILBCTR8	= 570,
    TCRETURNai	= 571,
    TCRETURNai8	= 572,
    TCRETURNdi	= 573,
    TCRETURNdi8	= 574,
    TCRETURNri	= 575,
    TCRETURNri8	= 576,
    TRAP	= 577,
    UPDATE_VRSAVE	= 578,
    VADDCUW	= 579,
    VADDFP	= 580,
    VADDSBS	= 581,
    VADDSHS	= 582,
    VADDSWS	= 583,
    VADDUBM	= 584,
    VADDUBS	= 585,
    VADDUHM	= 586,
    VADDUHS	= 587,
    VADDUWM	= 588,
    VADDUWS	= 589,
    VAND	= 590,
    VANDC	= 591,
    VAVGSB	= 592,
    VAVGSH	= 593,
    VAVGSW	= 594,
    VAVGUB	= 595,
    VAVGUH	= 596,
    VAVGUW	= 597,
    VCFSX	= 598,
    VCFSX_0	= 599,
    VCFUX	= 600,
    VCFUX_0	= 601,
    VCMPBFP	= 602,
    VCMPBFPo	= 603,
    VCMPEQFP	= 604,
    VCMPEQFPo	= 605,
    VCMPEQUB	= 606,
    VCMPEQUBo	= 607,
    VCMPEQUH	= 608,
    VCMPEQUHo	= 609,
    VCMPEQUW	= 610,
    VCMPEQUWo	= 611,
    VCMPGEFP	= 612,
    VCMPGEFPo	= 613,
    VCMPGTFP	= 614,
    VCMPGTFPo	= 615,
    VCMPGTSB	= 616,
    VCMPGTSBo	= 617,
    VCMPGTSH	= 618,
    VCMPGTSHo	= 619,
    VCMPGTSW	= 620,
    VCMPGTSWo	= 621,
    VCMPGTUB	= 622,
    VCMPGTUBo	= 623,
    VCMPGTUH	= 624,
    VCMPGTUHo	= 625,
    VCMPGTUW	= 626,
    VCMPGTUWo	= 627,
    VCTSXS	= 628,
    VCTSXS_0	= 629,
    VCTUXS	= 630,
    VCTUXS_0	= 631,
    VEXPTEFP	= 632,
    VLOGEFP	= 633,
    VMADDFP	= 634,
    VMAXFP	= 635,
    VMAXSB	= 636,
    VMAXSH	= 637,
    VMAXSW	= 638,
    VMAXUB	= 639,
    VMAXUH	= 640,
    VMAXUW	= 641,
    VMHADDSHS	= 642,
    VMHRADDSHS	= 643,
    VMINFP	= 644,
    VMINSB	= 645,
    VMINSH	= 646,
    VMINSW	= 647,
    VMINUB	= 648,
    VMINUH	= 649,
    VMINUW	= 650,
    VMLADDUHM	= 651,
    VMRGHB	= 652,
    VMRGHH	= 653,
    VMRGHW	= 654,
    VMRGLB	= 655,
    VMRGLH	= 656,
    VMRGLW	= 657,
    VMSUMMBM	= 658,
    VMSUMSHM	= 659,
    VMSUMSHS	= 660,
    VMSUMUBM	= 661,
    VMSUMUHM	= 662,
    VMSUMUHS	= 663,
    VMULESB	= 664,
    VMULESH	= 665,
    VMULEUB	= 666,
    VMULEUH	= 667,
    VMULOSB	= 668,
    VMULOSH	= 669,
    VMULOUB	= 670,
    VMULOUH	= 671,
    VNMSUBFP	= 672,
    VNOR	= 673,
    VOR	= 674,
    VPERM	= 675,
    VPKPX	= 676,
    VPKSHSS	= 677,
    VPKSHUS	= 678,
    VPKSWSS	= 679,
    VPKSWUS	= 680,
    VPKUHUM	= 681,
    VPKUHUS	= 682,
    VPKUWUM	= 683,
    VPKUWUS	= 684,
    VREFP	= 685,
    VRFIM	= 686,
    VRFIN	= 687,
    VRFIP	= 688,
    VRFIZ	= 689,
    VRLB	= 690,
    VRLH	= 691,
    VRLW	= 692,
    VRSQRTEFP	= 693,
    VSEL	= 694,
    VSL	= 695,
    VSLB	= 696,
    VSLDOI	= 697,
    VSLH	= 698,
    VSLO	= 699,
    VSLW	= 700,
    VSPLTB	= 701,
    VSPLTH	= 702,
    VSPLTISB	= 703,
    VSPLTISH	= 704,
    VSPLTISW	= 705,
    VSPLTW	= 706,
    VSR	= 707,
    VSRAB	= 708,
    VSRAH	= 709,
    VSRAW	= 710,
    VSRB	= 711,
    VSRH	= 712,
    VSRO	= 713,
    VSRW	= 714,
    VSUBCUW	= 715,
    VSUBFP	= 716,
    VSUBSBS	= 717,
    VSUBSHS	= 718,
    VSUBSWS	= 719,
    VSUBUBM	= 720,
    VSUBUBS	= 721,
    VSUBUHM	= 722,
    VSUBUHS	= 723,
    VSUBUWM	= 724,
    VSUBUWS	= 725,
    VSUM2SWS	= 726,
    VSUM4SBS	= 727,
    VSUM4SHS	= 728,
    VSUM4UBS	= 729,
    VSUMSWS	= 730,
    VUPKHPX	= 731,
    VUPKHSB	= 732,
    VUPKHSH	= 733,
    VUPKLPX	= 734,
    VUPKLSB	= 735,
    VUPKLSH	= 736,
    VXOR	= 737,
    V_SET0	= 738,
    V_SETALLONES	= 739,
    XOR	= 740,
    XOR8	= 741,
    XOR8o	= 742,
    XORI	= 743,
    XORI8	= 744,
    XORIS	= 745,
    XORIS8	= 746,
    XORo	= 747,
    INSTRUCTION_LIST_END = 748
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

static const uint16_t ImplicitList1[] = { PPC::CR0, 0 };
static const uint16_t ImplicitList2[] = { PPC::CARRY, 0 };
static const uint16_t ImplicitList3[] = { PPC::CARRY, PPC::CR0, 0 };
static const uint16_t ImplicitList4[] = { PPC::R1, 0 };
static const uint16_t ImplicitList5[] = { PPC::CTR, 0 };
static const uint16_t ImplicitList6[] = { PPC::CTR8, 0 };
static const uint16_t ImplicitList7[] = { PPC::CTR, PPC::RM, 0 };
static const uint16_t ImplicitList8[] = { PPC::LR, 0 };
static const uint16_t ImplicitList9[] = { PPC::CTR8, PPC::RM, 0 };
static const uint16_t ImplicitList10[] = { PPC::LR8, 0 };
static const uint16_t ImplicitList11[] = { PPC::LR, PPC::RM, 0 };
static const uint16_t ImplicitList12[] = { PPC::RM, 0 };
static const uint16_t ImplicitList13[] = { PPC::CTR, PPC::LR, PPC::RM, 0 };
static const uint16_t ImplicitList14[] = { PPC::CTR8, PPC::LR8, PPC::RM, 0 };
static const uint16_t ImplicitList15[] = { PPC::CR1EQ, 0 };
static const uint16_t ImplicitList16[] = { PPC::X1, 0 };
static const uint16_t ImplicitList17[] = { PPC::CR1, 0 };
static const uint16_t ImplicitList18[] = { PPC::CR6, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo52[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo53[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo62[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo66[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRSAVERCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { PPC::VRSAVERCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { PPC::VRSAVERCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo96[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo97[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo100[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo102[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { PPC::CTRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { PPC::CTRRC8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc PPCInsts[] = {
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
  { 17,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #17 = ADD4
  { 18,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #18 = ADD4o
  { 19,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #19 = ADD8
  { 20,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #20 = ADD8TLS
  { 21,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #21 = ADD8o
  { 22,	3,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList2, OperandInfo8 },  // Inst #22 = ADDC
  { 23,	3,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList2, OperandInfo9 },  // Inst #23 = ADDC8
  { 24,	3,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList3, OperandInfo9 },  // Inst #24 = ADDC8o
  { 25,	3,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList3, OperandInfo8 },  // Inst #25 = ADDCo
  { 26,	3,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo8 },  // Inst #26 = ADDE
  { 27,	3,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo9 },  // Inst #27 = ADDE8
  { 28,	3,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo9 },  // Inst #28 = ADDE8o
  { 29,	3,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo8 },  // Inst #29 = ADDEo
  { 30,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #30 = ADDI
  { 31,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo12 },  // Inst #31 = ADDI8
  { 32,	3,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList2, OperandInfo13 },  // Inst #32 = ADDIC
  { 33,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList2, OperandInfo10 },  // Inst #33 = ADDIC8
  { 34,	3,	1,	2,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, ImplicitList3, OperandInfo13 },  // Inst #34 = ADDICo
  { 35,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #35 = ADDIS
  { 36,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo12 },  // Inst #36 = ADDIS8
  { 37,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #37 = ADDISdtprelHA
  { 38,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #38 = ADDISgotTprelHA
  { 39,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #39 = ADDIStlsgdHA
  { 40,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #40 = ADDIStlsldHA
  { 41,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #41 = ADDIStocHA
  { 42,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #42 = ADDIdtprelL
  { 43,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #43 = ADDItlsgdL
  { 44,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #44 = ADDItlsldL
  { 45,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #45 = ADDItocL
  { 46,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo14 },  // Inst #46 = ADDME
  { 47,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo15 },  // Inst #47 = ADDME8
  { 48,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo15 },  // Inst #48 = ADDME8o
  { 49,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo14 },  // Inst #49 = ADDMEo
  { 50,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo14 },  // Inst #50 = ADDZE
  { 51,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo15 },  // Inst #51 = ADDZE8
  { 52,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo15 },  // Inst #52 = ADDZE8o
  { 53,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo14 },  // Inst #53 = ADDZEo
  { 54,	1,	0,	0,	0,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo5 },  // Inst #54 = ADJCALLSTACKDOWN
  { 55,	2,	0,	0,	0,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo7 },  // Inst #55 = ADJCALLSTACKUP
  { 56,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #56 = AND
  { 57,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #57 = AND8
  { 58,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #58 = AND8o
  { 59,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #59 = ANDC
  { 60,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #60 = ANDC8
  { 61,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #61 = ANDC8o
  { 62,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #62 = ANDCo
  { 63,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo13 },  // Inst #63 = ANDISo
  { 64,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #64 = ANDISo8
  { 65,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo13 },  // Inst #65 = ANDIo
  { 66,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #66 = ANDIo8
  { 67,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #67 = ANDo
  { 68,	5,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #68 = ATOMIC_CMP_SWAP_I16
  { 69,	5,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #69 = ATOMIC_CMP_SWAP_I32
  { 70,	5,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #70 = ATOMIC_CMP_SWAP_I64
  { 71,	5,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #71 = ATOMIC_CMP_SWAP_I8
  { 72,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #72 = ATOMIC_LOAD_ADD_I16
  { 73,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #73 = ATOMIC_LOAD_ADD_I32
  { 74,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #74 = ATOMIC_LOAD_ADD_I64
  { 75,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #75 = ATOMIC_LOAD_ADD_I8
  { 76,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #76 = ATOMIC_LOAD_AND_I16
  { 77,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #77 = ATOMIC_LOAD_AND_I32
  { 78,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #78 = ATOMIC_LOAD_AND_I64
  { 79,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #79 = ATOMIC_LOAD_AND_I8
  { 80,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #80 = ATOMIC_LOAD_NAND_I16
  { 81,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #81 = ATOMIC_LOAD_NAND_I32
  { 82,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #82 = ATOMIC_LOAD_NAND_I64
  { 83,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #83 = ATOMIC_LOAD_NAND_I8
  { 84,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #84 = ATOMIC_LOAD_OR_I16
  { 85,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #85 = ATOMIC_LOAD_OR_I32
  { 86,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #86 = ATOMIC_LOAD_OR_I64
  { 87,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #87 = ATOMIC_LOAD_OR_I8
  { 88,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #88 = ATOMIC_LOAD_SUB_I16
  { 89,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #89 = ATOMIC_LOAD_SUB_I32
  { 90,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #90 = ATOMIC_LOAD_SUB_I64
  { 91,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #91 = ATOMIC_LOAD_SUB_I8
  { 92,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #92 = ATOMIC_LOAD_XOR_I16
  { 93,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #93 = ATOMIC_LOAD_XOR_I32
  { 94,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #94 = ATOMIC_LOAD_XOR_I64
  { 95,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #95 = ATOMIC_LOAD_XOR_I8
  { 96,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #96 = ATOMIC_SWAP_I16
  { 97,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #97 = ATOMIC_SWAP_I32
  { 98,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #98 = ATOMIC_SWAP_I64
  { 99,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #99 = ATOMIC_SWAP_I8
  { 100,	1,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x38ULL, NULL, NULL, OperandInfo5 },  // Inst #100 = B
  { 101,	3,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, NULL, NULL, OperandInfo20 },  // Inst #101 = BCC
  { 102,	2,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, NULL, OperandInfo21 },  // Inst #102 = BCCTR
  { 103,	2,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList6, NULL, OperandInfo21 },  // Inst #103 = BCCTR8
  { 104,	2,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList8, OperandInfo21 },  // Inst #104 = BCCTRL
  { 105,	2,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList10, OperandInfo21 },  // Inst #105 = BCCTRL8
  { 106,	2,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, NULL, OperandInfo21 },  // Inst #106 = BCLR
  { 107,	1,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList12, ImplicitList8, OperandInfo5 },  // Inst #107 = BCLalways
  { 108,	0,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, NULL, 0 },  // Inst #108 = BCTR
  { 109,	0,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList6, NULL, 0 },  // Inst #109 = BCTR8
  { 110,	0,	0,	3,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList7, ImplicitList8, 0 },  // Inst #110 = BCTRL
  { 111,	0,	0,	3,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList9, ImplicitList10, 0 },  // Inst #111 = BCTRL8
  { 112,	1,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, ImplicitList5, OperandInfo5 },  // Inst #112 = BDNZ
  { 113,	1,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList6, ImplicitList6, OperandInfo5 },  // Inst #113 = BDNZ8
  { 114,	0,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList5, 0 },  // Inst #114 = BDNZLR
  { 115,	0,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList14, ImplicitList6, 0 },  // Inst #115 = BDNZLR8
  { 116,	1,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, ImplicitList5, OperandInfo5 },  // Inst #116 = BDZ
  { 117,	1,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList6, ImplicitList6, OperandInfo5 },  // Inst #117 = BDZ8
  { 118,	0,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList5, 0 },  // Inst #118 = BDZLR
  { 119,	0,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList14, ImplicitList6, 0 },  // Inst #119 = BDZLR8
  { 120,	1,	0,	3,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList12, ImplicitList8, OperandInfo5 },  // Inst #120 = BL
  { 121,	1,	0,	3,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList12, ImplicitList10, OperandInfo5 },  // Inst #121 = BL8
  { 122,	1,	0,	3,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList12, ImplicitList10, OperandInfo5 },  // Inst #122 = BL8_NOP
  { 123,	2,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList12, ImplicitList10, OperandInfo7 },  // Inst #123 = BL8_NOP_TLSGD
  { 124,	2,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList12, ImplicitList10, OperandInfo7 },  // Inst #124 = BL8_NOP_TLSLD
  { 125,	1,	0,	3,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList12, ImplicitList8, OperandInfo5 },  // Inst #125 = BLA
  { 126,	1,	0,	3,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList12, ImplicitList10, OperandInfo5 },  // Inst #126 = BLA8
  { 127,	1,	0,	3,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList12, ImplicitList10, OperandInfo5 },  // Inst #127 = BLA8_NOP
  { 128,	0,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x38ULL, ImplicitList11, NULL, 0 },  // Inst #128 = BLR
  { 129,	3,	1,	4,	0,	0|(1<<MCID::Compare), 0x8ULL, NULL, NULL, OperandInfo22 },  // Inst #129 = CMPD
  { 130,	3,	1,	4,	0,	0|(1<<MCID::Compare), 0x8ULL, NULL, NULL, OperandInfo23 },  // Inst #130 = CMPDI
  { 131,	3,	1,	4,	0,	0|(1<<MCID::Compare), 0x8ULL, NULL, NULL, OperandInfo22 },  // Inst #131 = CMPLD
  { 132,	3,	1,	4,	0,	0|(1<<MCID::Compare), 0x8ULL, NULL, NULL, OperandInfo23 },  // Inst #132 = CMPLDI
  { 133,	3,	1,	4,	0,	0|(1<<MCID::Compare), 0x8ULL, NULL, NULL, OperandInfo24 },  // Inst #133 = CMPLW
  { 134,	3,	1,	4,	0,	0|(1<<MCID::Compare), 0x8ULL, NULL, NULL, OperandInfo25 },  // Inst #134 = CMPLWI
  { 135,	3,	1,	4,	0,	0|(1<<MCID::Compare), 0x8ULL, NULL, NULL, OperandInfo24 },  // Inst #135 = CMPW
  { 136,	3,	1,	4,	0,	0|(1<<MCID::Compare), 0x8ULL, NULL, NULL, OperandInfo25 },  // Inst #136 = CMPWI
  { 137,	2,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo15 },  // Inst #137 = CNTLZD
  { 138,	2,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo15 },  // Inst #138 = CNTLZDo
  { 139,	2,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo14 },  // Inst #139 = CNTLZW
  { 140,	2,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo14 },  // Inst #140 = CNTLZWo
  { 141,	0,	0,	5,	0,	0, 0x0ULL, NULL, ImplicitList15, 0 },  // Inst #141 = CR6SET
  { 142,	0,	0,	5,	0,	0, 0x0ULL, NULL, ImplicitList15, 0 },  // Inst #142 = CR6UNSET
  { 143,	3,	1,	5,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #143 = CREQV
  { 144,	3,	1,	5,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #144 = CROR
  { 145,	1,	1,	5,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #145 = CRSET
  { 146,	1,	1,	5,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #146 = CRUNSET
  { 147,	2,	0,	6,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo28 },  // Inst #147 = DCBA
  { 148,	2,	0,	6,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo28 },  // Inst #148 = DCBF
  { 149,	2,	0,	6,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo28 },  // Inst #149 = DCBI
  { 150,	2,	0,	6,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo28 },  // Inst #150 = DCBST
  { 151,	2,	0,	6,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo28 },  // Inst #151 = DCBT
  { 152,	2,	0,	6,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo28 },  // Inst #152 = DCBTST
  { 153,	2,	0,	6,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo28 },  // Inst #153 = DCBZ
  { 154,	2,	0,	6,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo28 },  // Inst #154 = DCBZL
  { 155,	3,	1,	7,	0,	0, 0xdULL, NULL, NULL, OperandInfo9 },  // Inst #155 = DIVD
  { 156,	3,	1,	7,	0,	0, 0xdULL, NULL, NULL, OperandInfo9 },  // Inst #156 = DIVDU
  { 157,	3,	1,	7,	0,	0, 0xdULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #157 = DIVDUo
  { 158,	3,	1,	7,	0,	0, 0xdULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #158 = DIVDo
  { 159,	3,	1,	8,	0,	0, 0xdULL, NULL, NULL, OperandInfo8 },  // Inst #159 = DIVW
  { 160,	3,	1,	8,	0,	0, 0xdULL, NULL, NULL, OperandInfo8 },  // Inst #160 = DIVWU
  { 161,	3,	1,	8,	0,	0, 0xdULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #161 = DIVWUo
  { 162,	3,	1,	8,	0,	0, 0xdULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #162 = DIVWo
  { 163,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #163 = DSS
  { 164,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #164 = DSSALL
  { 165,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo30 },  // Inst #165 = DST
  { 166,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo31 },  // Inst #166 = DST64
  { 167,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo30 },  // Inst #167 = DSTST
  { 168,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo31 },  // Inst #168 = DSTST64
  { 169,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo30 },  // Inst #169 = DSTSTT
  { 170,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo31 },  // Inst #170 = DSTSTT64
  { 171,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo30 },  // Inst #171 = DSTT
  { 172,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo31 },  // Inst #172 = DSTT64
  { 173,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo32 },  // Inst #173 = DYNALLOC
  { 174,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList16, ImplicitList16, OperandInfo33 },  // Inst #174 = DYNALLOC8
  { 175,	1,	0,	0,	0,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #175 = EH_SjLj_LongJmp32
  { 176,	1,	0,	0,	0,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #176 = EH_SjLj_LongJmp64
  { 177,	2,	1,	0,	0,	0|(1<<MCID::Barrier)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo35 },  // Inst #177 = EH_SjLj_SetJmp32
  { 178,	2,	1,	0,	0,	0|(1<<MCID::Barrier)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo35 },  // Inst #178 = EH_SjLj_SetJmp64
  { 179,	1,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #179 = EH_SjLj_Setup
  { 180,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #180 = EQV
  { 181,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #181 = EQV8
  { 182,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #182 = EQV8o
  { 183,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #183 = EQVo
  { 184,	2,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo14 },  // Inst #184 = EXTSB
  { 185,	2,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo15 },  // Inst #185 = EXTSB8
  { 186,	2,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo15 },  // Inst #186 = EXTSB8o
  { 187,	2,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo14 },  // Inst #187 = EXTSBo
  { 188,	2,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo14 },  // Inst #188 = EXTSH
  { 189,	2,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo15 },  // Inst #189 = EXTSH8
  { 190,	2,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo15 },  // Inst #190 = EXTSH8o
  { 191,	2,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo14 },  // Inst #191 = EXTSHo
  { 192,	2,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo15 },  // Inst #192 = EXTSW
  { 193,	2,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo36 },  // Inst #193 = EXTSW_32_64
  { 194,	2,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo36 },  // Inst #194 = EXTSW_32_64o
  { 195,	2,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo15 },  // Inst #195 = EXTSWo
  { 196,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo37 },  // Inst #196 = FABSD
  { 197,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo37 },  // Inst #197 = FABSDo
  { 198,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo38 },  // Inst #198 = FABSS
  { 199,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo38 },  // Inst #199 = FABSSo
  { 200,	3,	1,	11,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo39 },  // Inst #200 = FADD
  { 201,	3,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo40 },  // Inst #201 = FADDS
  { 202,	3,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo40 },  // Inst #202 = FADDSo
  { 203,	3,	1,	11,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo39 },  // Inst #203 = FADDo
  { 204,	3,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList12, NULL, OperandInfo39 },  // Inst #204 = FADDrtz
  { 205,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo37 },  // Inst #205 = FCFID
  { 206,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo41 },  // Inst #206 = FCFIDS
  { 207,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo41 },  // Inst #207 = FCFIDSo
  { 208,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo37 },  // Inst #208 = FCFIDU
  { 209,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo41 },  // Inst #209 = FCFIDUS
  { 210,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo41 },  // Inst #210 = FCFIDUSo
  { 211,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo37 },  // Inst #211 = FCFIDUo
  { 212,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo37 },  // Inst #212 = FCFIDo
  { 213,	3,	1,	12,	0,	0|(1<<MCID::Compare), 0x18ULL, NULL, NULL, OperandInfo42 },  // Inst #213 = FCMPUD
  { 214,	3,	1,	12,	0,	0|(1<<MCID::Compare), 0x18ULL, NULL, NULL, OperandInfo43 },  // Inst #214 = FCMPUS
  { 215,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo37 },  // Inst #215 = FCTIDUZ
  { 216,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo37 },  // Inst #216 = FCTIDUZo
  { 217,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo37 },  // Inst #217 = FCTIDZ
  { 218,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo37 },  // Inst #218 = FCTIDZo
  { 219,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo37 },  // Inst #219 = FCTIWUZ
  { 220,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo37 },  // Inst #220 = FCTIWUZo
  { 221,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo37 },  // Inst #221 = FCTIWZ
  { 222,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo37 },  // Inst #222 = FCTIWZo
  { 223,	3,	1,	13,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo39 },  // Inst #223 = FDIV
  { 224,	3,	1,	14,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo40 },  // Inst #224 = FDIVS
  { 225,	3,	1,	14,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo40 },  // Inst #225 = FDIVSo
  { 226,	3,	1,	13,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo39 },  // Inst #226 = FDIVo
  { 227,	4,	1,	15,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo44 },  // Inst #227 = FMADD
  { 228,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo45 },  // Inst #228 = FMADDS
  { 229,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo45 },  // Inst #229 = FMADDSo
  { 230,	4,	1,	15,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo44 },  // Inst #230 = FMADDo
  { 231,	2,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo38 },  // Inst #231 = FMR
  { 232,	2,	1,	10,	0,	0, 0x0ULL, NULL, ImplicitList17, OperandInfo38 },  // Inst #232 = FMRo
  { 233,	4,	1,	15,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo44 },  // Inst #233 = FMSUB
  { 234,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo45 },  // Inst #234 = FMSUBS
  { 235,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo45 },  // Inst #235 = FMSUBSo
  { 236,	4,	1,	15,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo44 },  // Inst #236 = FMSUBo
  { 237,	3,	1,	15,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo39 },  // Inst #237 = FMUL
  { 238,	3,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo40 },  // Inst #238 = FMULS
  { 239,	3,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo40 },  // Inst #239 = FMULSo
  { 240,	3,	1,	15,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo39 },  // Inst #240 = FMULo
  { 241,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo37 },  // Inst #241 = FNABSD
  { 242,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo37 },  // Inst #242 = FNABSDo
  { 243,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo38 },  // Inst #243 = FNABSS
  { 244,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo38 },  // Inst #244 = FNABSSo
  { 245,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo37 },  // Inst #245 = FNEGD
  { 246,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo37 },  // Inst #246 = FNEGDo
  { 247,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo38 },  // Inst #247 = FNEGS
  { 248,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo38 },  // Inst #248 = FNEGSo
  { 249,	4,	1,	15,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo44 },  // Inst #249 = FNMADD
  { 250,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo45 },  // Inst #250 = FNMADDS
  { 251,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo45 },  // Inst #251 = FNMADDSo
  { 252,	4,	1,	15,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo44 },  // Inst #252 = FNMADDo
  { 253,	4,	1,	15,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo44 },  // Inst #253 = FNMSUB
  { 254,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo45 },  // Inst #254 = FNMSUBS
  { 255,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo45 },  // Inst #255 = FNMSUBSo
  { 256,	4,	1,	15,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo44 },  // Inst #256 = FNMSUBo
  { 257,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo37 },  // Inst #257 = FRE
  { 258,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo38 },  // Inst #258 = FRES
  { 259,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo38 },  // Inst #259 = FRESo
  { 260,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo37 },  // Inst #260 = FREo
  { 261,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo37 },  // Inst #261 = FRIMD
  { 262,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo37 },  // Inst #262 = FRIMDo
  { 263,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo38 },  // Inst #263 = FRIMS
  { 264,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo38 },  // Inst #264 = FRIMSo
  { 265,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo37 },  // Inst #265 = FRIND
  { 266,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo37 },  // Inst #266 = FRINDo
  { 267,	2,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x18ULL, ImplicitList12, ImplicitList12, OperandInfo37 },  // Inst #267 = FRINDrint
  { 268,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo38 },  // Inst #268 = FRINS
  { 269,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo38 },  // Inst #269 = FRINSo
  { 270,	2,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x18ULL, ImplicitList12, ImplicitList12, OperandInfo38 },  // Inst #270 = FRINSrint
  { 271,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo37 },  // Inst #271 = FRIPD
  { 272,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo37 },  // Inst #272 = FRIPDo
  { 273,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo38 },  // Inst #273 = FRIPS
  { 274,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo38 },  // Inst #274 = FRIPSo
  { 275,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo37 },  // Inst #275 = FRIZD
  { 276,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo37 },  // Inst #276 = FRIZDo
  { 277,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo38 },  // Inst #277 = FRIZS
  { 278,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo38 },  // Inst #278 = FRIZSo
  { 279,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo41 },  // Inst #279 = FRSP
  { 280,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo41 },  // Inst #280 = FRSPo
  { 281,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo37 },  // Inst #281 = FRSQRTE
  { 282,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo38 },  // Inst #282 = FRSQRTES
  { 283,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo38 },  // Inst #283 = FRSQRTESo
  { 284,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo37 },  // Inst #284 = FRSQRTEo
  { 285,	4,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo44 },  // Inst #285 = FSELD
  { 286,	4,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo44 },  // Inst #286 = FSELDo
  { 287,	4,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo46 },  // Inst #287 = FSELS
  { 288,	4,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo46 },  // Inst #288 = FSELSo
  { 289,	2,	1,	16,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo37 },  // Inst #289 = FSQRT
  { 290,	2,	1,	16,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo38 },  // Inst #290 = FSQRTS
  { 291,	2,	1,	16,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo38 },  // Inst #291 = FSQRTSo
  { 292,	2,	1,	16,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo37 },  // Inst #292 = FSQRTo
  { 293,	3,	1,	11,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo39 },  // Inst #293 = FSUB
  { 294,	3,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo40 },  // Inst #294 = FSUBS
  { 295,	3,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo40 },  // Inst #295 = FSUBSo
  { 296,	3,	1,	11,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo39 },  // Inst #296 = FSUBo
  { 297,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #297 = GETtlsADDR
  { 298,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #298 = GETtlsldADDR
  { 299,	2,	0,	17,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #299 = ICBI
  { 300,	4,	1,	2,	0,	0|(1<<MCID::Select), 0x8ULL, NULL, NULL, OperandInfo47 },  // Inst #300 = ISEL
  { 301,	4,	1,	2,	0,	0|(1<<MCID::Select), 0x8ULL, NULL, NULL, OperandInfo48 },  // Inst #301 = ISEL8
  { 302,	0,	0,	18,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #302 = ISYNC
  { 303,	3,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #303 = LA
  { 304,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo49 },  // Inst #304 = LBZ
  { 305,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #305 = LBZ8
  { 306,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo51 },  // Inst #306 = LBZU
  { 307,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo52 },  // Inst #307 = LBZU8
  { 308,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo53 },  // Inst #308 = LBZUX
  { 309,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo54 },  // Inst #309 = LBZUX8
  { 310,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo55 },  // Inst #310 = LBZX
  { 311,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo56 },  // Inst #311 = LBZX8
  { 312,	3,	1,	20,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #312 = LD
  { 313,	3,	1,	21,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo56 },  // Inst #313 = LDARX
  { 314,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo56 },  // Inst #314 = LDBRX
  { 315,	4,	2,	22,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo52 },  // Inst #315 = LDU
  { 316,	4,	2,	22,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo54 },  // Inst #316 = LDUX
  { 317,	3,	1,	20,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo56 },  // Inst #317 = LDX
  { 318,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo57 },  // Inst #318 = LDgotTprelL
  { 319,	1,	0,	20,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo58 },  // Inst #319 = LDinto_toc
  { 320,	3,	1,	0,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo59 },  // Inst #320 = LDtoc
  { 321,	3,	1,	0,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo59 },  // Inst #321 = LDtocCPT
  { 322,	3,	1,	0,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo59 },  // Inst #322 = LDtocJTI
  { 323,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo57 },  // Inst #323 = LDtocL
  { 324,	0,	0,	20,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, 0 },  // Inst #324 = LDtoc_restore
  { 325,	3,	1,	23,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo60 },  // Inst #325 = LFD
  { 326,	4,	2,	24,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo61 },  // Inst #326 = LFDU
  { 327,	4,	2,	24,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo62 },  // Inst #327 = LFDUX
  { 328,	3,	1,	23,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo63 },  // Inst #328 = LFDX
  { 329,	3,	1,	23,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo63 },  // Inst #329 = LFIWAX
  { 330,	3,	1,	23,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo63 },  // Inst #330 = LFIWZX
  { 331,	3,	1,	23,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo64 },  // Inst #331 = LFS
  { 332,	4,	2,	24,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #332 = LFSU
  { 333,	4,	2,	24,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo66 },  // Inst #333 = LFSUX
  { 334,	3,	1,	23,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo67 },  // Inst #334 = LFSX
  { 335,	3,	1,	25,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo49 },  // Inst #335 = LHA
  { 336,	3,	1,	25,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo50 },  // Inst #336 = LHA8
  { 337,	4,	2,	26,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo51 },  // Inst #337 = LHAU
  { 338,	4,	2,	26,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo52 },  // Inst #338 = LHAU8
  { 339,	4,	2,	26,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo53 },  // Inst #339 = LHAUX
  { 340,	4,	2,	26,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo54 },  // Inst #340 = LHAUX8
  { 341,	3,	1,	25,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo55 },  // Inst #341 = LHAX
  { 342,	3,	1,	25,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo56 },  // Inst #342 = LHAX8
  { 343,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo55 },  // Inst #343 = LHBRX
  { 344,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo49 },  // Inst #344 = LHZ
  { 345,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #345 = LHZ8
  { 346,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo51 },  // Inst #346 = LHZU
  { 347,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo52 },  // Inst #347 = LHZU8
  { 348,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo53 },  // Inst #348 = LHZUX
  { 349,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo54 },  // Inst #349 = LHZUX8
  { 350,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo55 },  // Inst #350 = LHZX
  { 351,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo56 },  // Inst #351 = LHZX8
  { 352,	2,	1,	1,	0,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, NULL, NULL, OperandInfo68 },  // Inst #352 = LI
  { 353,	2,	1,	1,	0,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, NULL, NULL, OperandInfo69 },  // Inst #353 = LI8
  { 354,	2,	1,	1,	0,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, NULL, NULL, OperandInfo68 },  // Inst #354 = LIS
  { 355,	2,	1,	1,	0,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, NULL, NULL, OperandInfo69 },  // Inst #355 = LIS8
  { 356,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo70 },  // Inst #356 = LVEBX
  { 357,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo70 },  // Inst #357 = LVEHX
  { 358,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo70 },  // Inst #358 = LVEWX
  { 359,	3,	1,	9,	0,	0, 0x10ULL, NULL, NULL, OperandInfo70 },  // Inst #359 = LVSL
  { 360,	3,	1,	9,	0,	0, 0x10ULL, NULL, NULL, OperandInfo70 },  // Inst #360 = LVSR
  { 361,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo70 },  // Inst #361 = LVX
  { 362,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo70 },  // Inst #362 = LVXL
  { 363,	3,	1,	27,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo50 },  // Inst #363 = LWA
  { 364,	3,	1,	28,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo55 },  // Inst #364 = LWARX
  { 365,	4,	2,	26,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo54 },  // Inst #365 = LWAUX
  { 366,	3,	1,	25,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo56 },  // Inst #366 = LWAX
  { 367,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo55 },  // Inst #367 = LWBRX
  { 368,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo49 },  // Inst #368 = LWZ
  { 369,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #369 = LWZ8
  { 370,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo51 },  // Inst #370 = LWZU
  { 371,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo52 },  // Inst #371 = LWZU8
  { 372,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo53 },  // Inst #372 = LWZUX
  { 373,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo54 },  // Inst #373 = LWZUX8
  { 374,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo55 },  // Inst #374 = LWZX
  { 375,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo56 },  // Inst #375 = LWZX8
  { 376,	2,	1,	29,	0,	0, 0x21ULL, NULL, NULL, OperandInfo71 },  // Inst #376 = MCRF
  { 377,	1,	1,	30,	0,	0, 0x20ULL, NULL, NULL, OperandInfo72 },  // Inst #377 = MFCR
  { 378,	1,	1,	30,	0,	0, 0x20ULL, NULL, NULL, OperandInfo58 },  // Inst #378 = MFCR8
  { 379,	2,	1,	30,	0,	0, 0x20ULL, NULL, NULL, OperandInfo69 },  // Inst #379 = MFCR8pseud
  { 380,	2,	1,	30,	0,	0, 0x20ULL, NULL, NULL, OperandInfo68 },  // Inst #380 = MFCRpseud
  { 381,	1,	1,	31,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList5, NULL, OperandInfo72 },  // Inst #381 = MFCTR
  { 382,	1,	1,	31,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList6, NULL, OperandInfo58 },  // Inst #382 = MFCTR8
  { 383,	1,	1,	32,	0,	0, 0x1aULL, ImplicitList12, NULL, OperandInfo73 },  // Inst #383 = MFFS
  { 384,	1,	1,	31,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList8, NULL, OperandInfo72 },  // Inst #384 = MFLR
  { 385,	1,	1,	31,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList10, NULL, OperandInfo58 },  // Inst #385 = MFLR8
  { 386,	2,	1,	30,	0,	0, 0x21ULL, NULL, NULL, OperandInfo68 },  // Inst #386 = MFOCRF
  { 387,	1,	1,	33,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, NULL, OperandInfo58 },  // Inst #387 = MFTB8
  { 388,	1,	1,	2,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, NULL, OperandInfo72 },  // Inst #388 = MFVRSAVE
  { 389,	2,	1,	2,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, NULL, OperandInfo74 },  // Inst #389 = MFVRSAVEv
  { 390,	1,	1,	34,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo75 },  // Inst #390 = MFVSCR
  { 391,	2,	1,	35,	0,	0, 0x20ULL, NULL, NULL, OperandInfo76 },  // Inst #391 = MTCRF
  { 392,	2,	1,	35,	0,	0, 0x20ULL, NULL, NULL, OperandInfo77 },  // Inst #392 = MTCRF8
  { 393,	1,	0,	36,	0,	0, 0x9ULL, NULL, ImplicitList5, OperandInfo72 },  // Inst #393 = MTCTR
  { 394,	1,	0,	36,	0,	0, 0x9ULL, NULL, ImplicitList6, OperandInfo58 },  // Inst #394 = MTCTR8
  { 395,	1,	0,	36,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, ImplicitList6, OperandInfo58 },  // Inst #395 = MTCTR8loop
  { 396,	1,	0,	36,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, ImplicitList5, OperandInfo72 },  // Inst #396 = MTCTRloop
  { 397,	1,	0,	37,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x1aULL, ImplicitList12, ImplicitList12, OperandInfo5 },  // Inst #397 = MTFSB0
  { 398,	1,	0,	37,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x1aULL, ImplicitList12, ImplicitList12, OperandInfo5 },  // Inst #398 = MTFSB1
  { 399,	2,	0,	37,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x1aULL, ImplicitList12, ImplicitList12, OperandInfo78 },  // Inst #399 = MTFSF
  { 400,	1,	0,	36,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, ImplicitList8, OperandInfo72 },  // Inst #400 = MTLR
  { 401,	1,	0,	36,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, ImplicitList10, OperandInfo58 },  // Inst #401 = MTLR8
  { 402,	1,	0,	2,	0,	0|(1<<MCID::UnmodeledSideEffects), 0xaULL, NULL, NULL, OperandInfo72 },  // Inst #402 = MTVRSAVE
  { 403,	2,	1,	2,	0,	0|(1<<MCID::UnmodeledSideEffects), 0xaULL, NULL, NULL, OperandInfo79 },  // Inst #403 = MTVRSAVEv
  { 404,	1,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo75 },  // Inst #404 = MTVSCR
  { 405,	3,	1,	38,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #405 = MULHD
  { 406,	3,	1,	39,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #406 = MULHDU
  { 407,	3,	1,	39,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #407 = MULHDUo
  { 408,	3,	1,	38,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #408 = MULHDo
  { 409,	3,	1,	38,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #409 = MULHW
  { 410,	3,	1,	39,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #410 = MULHWU
  { 411,	3,	1,	39,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #411 = MULHWUo
  { 412,	3,	1,	38,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #412 = MULHWo
  { 413,	3,	1,	40,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #413 = MULLD
  { 414,	3,	1,	40,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #414 = MULLDo
  { 415,	3,	1,	41,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #415 = MULLI
  { 416,	3,	1,	38,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #416 = MULLW
  { 417,	3,	1,	38,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #417 = MULLWo
  { 418,	0,	0,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, NULL, ImplicitList8, 0 },  // Inst #418 = MovePCtoLR
  { 419,	0,	0,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, NULL, ImplicitList10, 0 },  // Inst #419 = MovePCtoLR8
  { 420,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #420 = NAND
  { 421,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #421 = NAND8
  { 422,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #422 = NAND8o
  { 423,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #423 = NANDo
  { 424,	2,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo14 },  // Inst #424 = NEG
  { 425,	2,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo15 },  // Inst #425 = NEG8
  { 426,	2,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo15 },  // Inst #426 = NEG8o
  { 427,	2,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo14 },  // Inst #427 = NEGo
  { 428,	0,	0,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, 0 },  // Inst #428 = NOP
  { 429,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #429 = NOR
  { 430,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #430 = NOR8
  { 431,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #431 = NOR8o
  { 432,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #432 = NORo
  { 433,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #433 = OR
  { 434,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #434 = OR8
  { 435,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #435 = OR8o
  { 436,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #436 = ORC
  { 437,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #437 = ORC8
  { 438,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #438 = ORC8o
  { 439,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #439 = ORCo
  { 440,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #440 = ORI
  { 441,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #441 = ORI8
  { 442,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #442 = ORIS
  { 443,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #443 = ORIS8
  { 444,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #444 = ORo
  { 445,	2,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo15 },  // Inst #445 = POPCNTD
  { 446,	2,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo15 },  // Inst #446 = POPCNTDo
  { 447,	2,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo14 },  // Inst #447 = POPCNTW
  { 448,	2,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo14 },  // Inst #448 = POPCNTWo
  { 449,	3,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo80 },  // Inst #449 = RESTORE_CR
  { 450,	3,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo81 },  // Inst #450 = RESTORE_VRSAVE
  { 451,	4,	1,	42,	0,	0, 0x8ULL, NULL, NULL, OperandInfo82 },  // Inst #451 = RLDCL
  { 452,	4,	1,	42,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo82 },  // Inst #452 = RLDCLo
  { 453,	4,	1,	43,	0,	0, 0x8ULL, NULL, NULL, OperandInfo83 },  // Inst #453 = RLDICL
  { 454,	4,	1,	43,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo83 },  // Inst #454 = RLDICLo
  { 455,	4,	1,	43,	0,	0, 0x8ULL, NULL, NULL, OperandInfo83 },  // Inst #455 = RLDICR
  { 456,	4,	1,	43,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo83 },  // Inst #456 = RLDICRo
  { 457,	5,	1,	43,	0,	0|(1<<MCID::Commutable), 0x8ULL, NULL, NULL, OperandInfo84 },  // Inst #457 = RLDIMI
  { 458,	5,	1,	43,	0,	0|(1<<MCID::Commutable), 0x8ULL, NULL, ImplicitList1, OperandInfo84 },  // Inst #458 = RLDIMIo
  { 459,	6,	1,	44,	0,	0|(1<<MCID::Commutable), 0xcULL, NULL, NULL, OperandInfo85 },  // Inst #459 = RLWIMI
  { 460,	6,	1,	44,	0,	0|(1<<MCID::Commutable), 0xcULL, NULL, ImplicitList1, OperandInfo85 },  // Inst #460 = RLWIMIo
  { 461,	5,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo86 },  // Inst #461 = RLWINM
  { 462,	5,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo87 },  // Inst #462 = RLWINM8
  { 463,	5,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo87 },  // Inst #463 = RLWINM8o
  { 464,	5,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList1, OperandInfo86 },  // Inst #464 = RLWINMo
  { 465,	5,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo88 },  // Inst #465 = RLWNM
  { 466,	5,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo88 },  // Inst #466 = RLWNMo
  { 467,	1,	0,	3,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, NULL, NULL, OperandInfo2 },  // Inst #467 = SC
  { 468,	5,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo89 },  // Inst #468 = SELECT_CC_F4
  { 469,	5,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo90 },  // Inst #469 = SELECT_CC_F8
  { 470,	5,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo91 },  // Inst #470 = SELECT_CC_I4
  { 471,	5,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo92 },  // Inst #471 = SELECT_CC_I8
  { 472,	5,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo93 },  // Inst #472 = SELECT_CC_VRRC
  { 473,	3,	1,	42,	0,	0, 0x8ULL, NULL, NULL, OperandInfo94 },  // Inst #473 = SLD
  { 474,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #474 = SLDI
  { 475,	3,	1,	42,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo94 },  // Inst #475 = SLDo
  { 476,	3,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #476 = SLW
  { 477,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #477 = SLWI
  { 478,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #478 = SLWo
  { 479,	3,	0,	0,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo80 },  // Inst #479 = SPILL_CR
  { 480,	3,	0,	0,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo81 },  // Inst #480 = SPILL_VRSAVE
  { 481,	3,	1,	42,	0,	0, 0x8ULL, NULL, ImplicitList2, OperandInfo94 },  // Inst #481 = SRAD
  { 482,	3,	1,	43,	0,	0, 0x8ULL, NULL, ImplicitList2, OperandInfo10 },  // Inst #482 = SRADI
  { 483,	3,	1,	43,	0,	0, 0x8ULL, NULL, ImplicitList3, OperandInfo10 },  // Inst #483 = SRADIo
  { 484,	3,	1,	42,	0,	0, 0x8ULL, NULL, ImplicitList3, OperandInfo94 },  // Inst #484 = SRADo
  { 485,	3,	1,	45,	0,	0, 0x8ULL, NULL, ImplicitList2, OperandInfo8 },  // Inst #485 = SRAW
  { 486,	3,	1,	45,	0,	0, 0x8ULL, NULL, ImplicitList2, OperandInfo13 },  // Inst #486 = SRAWI
  { 487,	3,	1,	45,	0,	0, 0x8ULL, NULL, ImplicitList3, OperandInfo13 },  // Inst #487 = SRAWIo
  { 488,	3,	1,	45,	0,	0, 0x8ULL, NULL, ImplicitList3, OperandInfo8 },  // Inst #488 = SRAWo
  { 489,	3,	1,	42,	0,	0, 0x8ULL, NULL, NULL, OperandInfo94 },  // Inst #489 = SRD
  { 490,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #490 = SRDI
  { 491,	3,	1,	42,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo94 },  // Inst #491 = SRDo
  { 492,	3,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #492 = SRW
  { 493,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #493 = SRWI
  { 494,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #494 = SRWo
  { 495,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo49 },  // Inst #495 = STB
  { 496,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #496 = STB8
  { 497,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo95 },  // Inst #497 = STBU
  { 498,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo96 },  // Inst #498 = STBU8
  { 499,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo97 },  // Inst #499 = STBUX
  { 500,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo98 },  // Inst #500 = STBUX8
  { 501,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo55 },  // Inst #501 = STBX
  { 502,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo56 },  // Inst #502 = STBX8
  { 503,	3,	0,	47,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #503 = STD
  { 504,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo56 },  // Inst #504 = STDBRX
  { 505,	3,	0,	48,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, ImplicitList1, OperandInfo56 },  // Inst #505 = STDCX
  { 506,	4,	1,	49,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo96 },  // Inst #506 = STDU
  { 507,	4,	1,	49,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo98 },  // Inst #507 = STDUX
  { 508,	3,	0,	47,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo56 },  // Inst #508 = STDX
  { 509,	3,	0,	50,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo60 },  // Inst #509 = STFD
  { 510,	4,	1,	51,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo99 },  // Inst #510 = STFDU
  { 511,	4,	1,	51,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo100 },  // Inst #511 = STFDUX
  { 512,	3,	0,	50,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo63 },  // Inst #512 = STFDX
  { 513,	3,	0,	50,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo63 },  // Inst #513 = STFIWX
  { 514,	3,	0,	50,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo64 },  // Inst #514 = STFS
  { 515,	4,	1,	51,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo101 },  // Inst #515 = STFSU
  { 516,	4,	1,	51,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo102 },  // Inst #516 = STFSUX
  { 517,	3,	0,	50,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo67 },  // Inst #517 = STFSX
  { 518,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo49 },  // Inst #518 = STH
  { 519,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #519 = STH8
  { 520,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo55 },  // Inst #520 = STHBRX
  { 521,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo95 },  // Inst #521 = STHU
  { 522,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo96 },  // Inst #522 = STHU8
  { 523,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo97 },  // Inst #523 = STHUX
  { 524,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo98 },  // Inst #524 = STHUX8
  { 525,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo55 },  // Inst #525 = STHX
  { 526,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo56 },  // Inst #526 = STHX8
  { 527,	3,	0,	34,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo70 },  // Inst #527 = STVEBX
  { 528,	3,	0,	34,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo70 },  // Inst #528 = STVEHX
  { 529,	3,	0,	34,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo70 },  // Inst #529 = STVEWX
  { 530,	3,	0,	34,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo70 },  // Inst #530 = STVX
  { 531,	3,	0,	34,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo70 },  // Inst #531 = STVXL
  { 532,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo49 },  // Inst #532 = STW
  { 533,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #533 = STW8
  { 534,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo55 },  // Inst #534 = STWBRX
  { 535,	3,	0,	52,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, ImplicitList1, OperandInfo55 },  // Inst #535 = STWCX
  { 536,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo95 },  // Inst #536 = STWU
  { 537,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo96 },  // Inst #537 = STWU8
  { 538,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo97 },  // Inst #538 = STWUX
  { 539,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo98 },  // Inst #539 = STWUX8
  { 540,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo55 },  // Inst #540 = STWX
  { 541,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo56 },  // Inst #541 = STWX8
  { 542,	3,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #542 = SUBF
  { 543,	3,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #543 = SUBF8
  { 544,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #544 = SUBF8o
  { 545,	3,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList2, OperandInfo8 },  // Inst #545 = SUBFC
  { 546,	3,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList2, OperandInfo9 },  // Inst #546 = SUBFC8
  { 547,	3,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList2, OperandInfo9 },  // Inst #547 = SUBFC8o
  { 548,	3,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList3, OperandInfo8 },  // Inst #548 = SUBFCo
  { 549,	3,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo8 },  // Inst #549 = SUBFE
  { 550,	3,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo9 },  // Inst #550 = SUBFE8
  { 551,	3,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo9 },  // Inst #551 = SUBFE8o
  { 552,	3,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo8 },  // Inst #552 = SUBFEo
  { 553,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList2, OperandInfo13 },  // Inst #553 = SUBFIC
  { 554,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList2, OperandInfo10 },  // Inst #554 = SUBFIC8
  { 555,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo14 },  // Inst #555 = SUBFME
  { 556,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo15 },  // Inst #556 = SUBFME8
  { 557,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo15 },  // Inst #557 = SUBFME8o
  { 558,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo14 },  // Inst #558 = SUBFMEo
  { 559,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo14 },  // Inst #559 = SUBFZE
  { 560,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo15 },  // Inst #560 = SUBFZE8
  { 561,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo15 },  // Inst #561 = SUBFZE8o
  { 562,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo14 },  // Inst #562 = SUBFZEo
  { 563,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #563 = SUBFo
  { 564,	0,	0,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #564 = SYNC
  { 565,	1,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList12, NULL, OperandInfo5 },  // Inst #565 = TAILB
  { 566,	1,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList12, NULL, OperandInfo5 },  // Inst #566 = TAILB8
  { 567,	1,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList12, NULL, OperandInfo5 },  // Inst #567 = TAILBA
  { 568,	1,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList12, NULL, OperandInfo5 },  // Inst #568 = TAILBA8
  { 569,	0,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, NULL, 0 },  // Inst #569 = TAILBCTR
  { 570,	0,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, NULL, 0 },  // Inst #570 = TAILBCTR8
  { 571,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList12, NULL, OperandInfo103 },  // Inst #571 = TCRETURNai
  { 572,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList12, NULL, OperandInfo103 },  // Inst #572 = TCRETURNai8
  { 573,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList12, NULL, OperandInfo103 },  // Inst #573 = TCRETURNdi
  { 574,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList12, NULL, OperandInfo103 },  // Inst #574 = TCRETURNdi8
  { 575,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList12, NULL, OperandInfo104 },  // Inst #575 = TCRETURNri
  { 576,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList12, NULL, OperandInfo105 },  // Inst #576 = TCRETURNri8
  { 577,	0,	0,	9,	0,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #577 = TRAP
  { 578,	2,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #578 = UPDATE_VRSAVE
  { 579,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #579 = VADDCUW
  { 580,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #580 = VADDFP
  { 581,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #581 = VADDSBS
  { 582,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #582 = VADDSHS
  { 583,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #583 = VADDSWS
  { 584,	3,	1,	55,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #584 = VADDUBM
  { 585,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #585 = VADDUBS
  { 586,	3,	1,	55,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #586 = VADDUHM
  { 587,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #587 = VADDUHS
  { 588,	3,	1,	55,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #588 = VADDUWM
  { 589,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #589 = VADDUWS
  { 590,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #590 = VAND
  { 591,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #591 = VANDC
  { 592,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #592 = VAVGSB
  { 593,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #593 = VAVGSH
  { 594,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #594 = VAVGSW
  { 595,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #595 = VAVGUB
  { 596,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #596 = VAVGUH
  { 597,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #597 = VAVGUW
  { 598,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo107 },  // Inst #598 = VCFSX
  { 599,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #599 = VCFSX_0
  { 600,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo107 },  // Inst #600 = VCFUX
  { 601,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #601 = VCFUX_0
  { 602,	3,	1,	56,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #602 = VCMPBFP
  { 603,	3,	1,	56,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo106 },  // Inst #603 = VCMPBFPo
  { 604,	3,	1,	56,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #604 = VCMPEQFP
  { 605,	3,	1,	56,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo106 },  // Inst #605 = VCMPEQFPo
  { 606,	3,	1,	56,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #606 = VCMPEQUB
  { 607,	3,	1,	56,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo106 },  // Inst #607 = VCMPEQUBo
  { 608,	3,	1,	56,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #608 = VCMPEQUH
  { 609,	3,	1,	56,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo106 },  // Inst #609 = VCMPEQUHo
  { 610,	3,	1,	56,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #610 = VCMPEQUW
  { 611,	3,	1,	56,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo106 },  // Inst #611 = VCMPEQUWo
  { 612,	3,	1,	56,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #612 = VCMPGEFP
  { 613,	3,	1,	56,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo106 },  // Inst #613 = VCMPGEFPo
  { 614,	3,	1,	56,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #614 = VCMPGTFP
  { 615,	3,	1,	56,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo106 },  // Inst #615 = VCMPGTFPo
  { 616,	3,	1,	56,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #616 = VCMPGTSB
  { 617,	3,	1,	56,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo106 },  // Inst #617 = VCMPGTSBo
  { 618,	3,	1,	56,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #618 = VCMPGTSH
  { 619,	3,	1,	56,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo106 },  // Inst #619 = VCMPGTSHo
  { 620,	3,	1,	56,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #620 = VCMPGTSW
  { 621,	3,	1,	56,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo106 },  // Inst #621 = VCMPGTSWo
  { 622,	3,	1,	56,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #622 = VCMPGTUB
  { 623,	3,	1,	56,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo106 },  // Inst #623 = VCMPGTUBo
  { 624,	3,	1,	56,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #624 = VCMPGTUH
  { 625,	3,	1,	56,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo106 },  // Inst #625 = VCMPGTUHo
  { 626,	3,	1,	56,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #626 = VCMPGTUW
  { 627,	3,	1,	56,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo106 },  // Inst #627 = VCMPGTUWo
  { 628,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo107 },  // Inst #628 = VCTSXS
  { 629,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #629 = VCTSXS_0
  { 630,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo107 },  // Inst #630 = VCTUXS
  { 631,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #631 = VCTUXS_0
  { 632,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #632 = VEXPTEFP
  { 633,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #633 = VLOGEFP
  { 634,	4,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo109 },  // Inst #634 = VMADDFP
  { 635,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #635 = VMAXFP
  { 636,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #636 = VMAXSB
  { 637,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #637 = VMAXSH
  { 638,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #638 = VMAXSW
  { 639,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #639 = VMAXUB
  { 640,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #640 = VMAXUH
  { 641,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #641 = VMAXUW
  { 642,	4,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo109 },  // Inst #642 = VMHADDSHS
  { 643,	4,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo109 },  // Inst #643 = VMHRADDSHS
  { 644,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #644 = VMINFP
  { 645,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #645 = VMINSB
  { 646,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #646 = VMINSH
  { 647,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #647 = VMINSW
  { 648,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #648 = VMINUB
  { 649,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #649 = VMINUH
  { 650,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #650 = VMINUW
  { 651,	4,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo109 },  // Inst #651 = VMLADDUHM
  { 652,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #652 = VMRGHB
  { 653,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #653 = VMRGHH
  { 654,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #654 = VMRGHW
  { 655,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #655 = VMRGLB
  { 656,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #656 = VMRGLH
  { 657,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #657 = VMRGLW
  { 658,	4,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo109 },  // Inst #658 = VMSUMMBM
  { 659,	4,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo109 },  // Inst #659 = VMSUMSHM
  { 660,	4,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo109 },  // Inst #660 = VMSUMSHS
  { 661,	4,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo109 },  // Inst #661 = VMSUMUBM
  { 662,	4,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo109 },  // Inst #662 = VMSUMUHM
  { 663,	4,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo109 },  // Inst #663 = VMSUMUHS
  { 664,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #664 = VMULESB
  { 665,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #665 = VMULESH
  { 666,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #666 = VMULEUB
  { 667,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #667 = VMULEUH
  { 668,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #668 = VMULOSB
  { 669,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #669 = VMULOSH
  { 670,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #670 = VMULOUB
  { 671,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #671 = VMULOUH
  { 672,	4,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo109 },  // Inst #672 = VNMSUBFP
  { 673,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #673 = VNOR
  { 674,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #674 = VOR
  { 675,	4,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo109 },  // Inst #675 = VPERM
  { 676,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #676 = VPKPX
  { 677,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #677 = VPKSHSS
  { 678,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #678 = VPKSHUS
  { 679,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #679 = VPKSWSS
  { 680,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #680 = VPKSWUS
  { 681,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #681 = VPKUHUM
  { 682,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #682 = VPKUHUS
  { 683,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #683 = VPKUWUM
  { 684,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #684 = VPKUWUS
  { 685,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #685 = VREFP
  { 686,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #686 = VRFIM
  { 687,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #687 = VRFIN
  { 688,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #688 = VRFIP
  { 689,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #689 = VRFIZ
  { 690,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #690 = VRLB
  { 691,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #691 = VRLH
  { 692,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #692 = VRLW
  { 693,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #693 = VRSQRTEFP
  { 694,	4,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo109 },  // Inst #694 = VSEL
  { 695,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #695 = VSL
  { 696,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #696 = VSLB
  { 697,	4,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo110 },  // Inst #697 = VSLDOI
  { 698,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #698 = VSLH
  { 699,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #699 = VSLO
  { 700,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #700 = VSLW
  { 701,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo107 },  // Inst #701 = VSPLTB
  { 702,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo107 },  // Inst #702 = VSPLTH
  { 703,	2,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo111 },  // Inst #703 = VSPLTISB
  { 704,	2,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo111 },  // Inst #704 = VSPLTISH
  { 705,	2,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo111 },  // Inst #705 = VSPLTISW
  { 706,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo107 },  // Inst #706 = VSPLTW
  { 707,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #707 = VSR
  { 708,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #708 = VSRAB
  { 709,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #709 = VSRAH
  { 710,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #710 = VSRAW
  { 711,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #711 = VSRB
  { 712,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #712 = VSRH
  { 713,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #713 = VSRO
  { 714,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #714 = VSRW
  { 715,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #715 = VSUBCUW
  { 716,	3,	1,	55,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #716 = VSUBFP
  { 717,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #717 = VSUBSBS
  { 718,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #718 = VSUBSHS
  { 719,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #719 = VSUBSWS
  { 720,	3,	1,	55,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #720 = VSUBUBM
  { 721,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #721 = VSUBUBS
  { 722,	3,	1,	55,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #722 = VSUBUHM
  { 723,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #723 = VSUBUHS
  { 724,	3,	1,	55,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #724 = VSUBUWM
  { 725,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #725 = VSUBUWS
  { 726,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #726 = VSUM2SWS
  { 727,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #727 = VSUM4SBS
  { 728,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #728 = VSUM4SHS
  { 729,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #729 = VSUM4UBS
  { 730,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #730 = VSUMSWS
  { 731,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #731 = VUPKHPX
  { 732,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #732 = VUPKHSB
  { 733,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #733 = VUPKHSH
  { 734,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #734 = VUPKLPX
  { 735,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #735 = VUPKLSB
  { 736,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #736 = VUPKLSH
  { 737,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #737 = VXOR
  { 738,	1,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo75 },  // Inst #738 = V_SET0
  { 739,	1,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo75 },  // Inst #739 = V_SETALLONES
  { 740,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #740 = XOR
  { 741,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #741 = XOR8
  { 742,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #742 = XOR8o
  { 743,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #743 = XORI
  { 744,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #744 = XORI8
  { 745,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #745 = XORIS
  { 746,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #746 = XORIS8
  { 747,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #747 = XORo
};

extern const char PPCInstrNameData[] = {
  /* 0 */ 'M', 'T', 'F', 'S', 'B', '0', 0,
  /* 7 */ 'V', '_', 'S', 'E', 'T', '0', 0,
  /* 14 */ 'V', 'C', 'T', 'S', 'X', 'S', '_', '0', 0,
  /* 23 */ 'V', 'C', 'T', 'U', 'X', 'S', '_', '0', 0,
  /* 32 */ 'V', 'C', 'F', 'S', 'X', '_', '0', 0,
  /* 40 */ 'V', 'C', 'F', 'U', 'X', '_', '0', 0,
  /* 48 */ 'M', 'T', 'F', 'S', 'B', '1', 0,
  /* 55 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '3', '2', 0,
  /* 75 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '3', '2', 0,
  /* 95 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 116 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 136 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 152 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 172 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 192 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 211 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'L', 'o', 'n', 'g', 'J', 'm', 'p', '3', '2', 0,
  /* 229 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'S', 'e', 't', 'J', 'm', 'p', '3', '2', 0,
  /* 246 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '6', '4', 0,
  /* 266 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '6', '4', 0,
  /* 286 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 307 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 327 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 343 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 363 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 383 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 402 */ 'D', 'S', 'T', '6', '4', 0,
  /* 408 */ 'D', 'S', 'T', 'S', 'T', '6', '4', 0,
  /* 416 */ 'D', 'S', 'T', 'T', '6', '4', 0,
  /* 423 */ 'D', 'S', 'T', 'S', 'T', 'T', '6', '4', 0,
  /* 432 */ 'E', 'X', 'T', 'S', 'W', '_', '3', '2', '_', '6', '4', 0,
  /* 444 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'L', 'o', 'n', 'g', 'J', 'm', 'p', '6', '4', 0,
  /* 462 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'S', 'e', 't', 'J', 'm', 'p', '6', '4', 0,
  /* 479 */ 'A', 'D', 'D', '4', 0,
  /* 484 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', '4', 0,
  /* 497 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', '4', 0,
  /* 510 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '1', '6', 0,
  /* 530 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '1', '6', 0,
  /* 550 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 571 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 591 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 607 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 627 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 647 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 666 */ 'T', 'A', 'I', 'L', 'B', 'A', '8', 0,
  /* 674 */ 'L', 'H', 'A', '8', 0,
  /* 679 */ 'B', 'L', 'A', '8', 0,
  /* 684 */ 'T', 'A', 'I', 'L', 'B', '8', 0,
  /* 691 */ 'E', 'X', 'T', 'S', 'B', '8', 0,
  /* 698 */ 'M', 'F', 'T', 'B', '8', 0,
  /* 704 */ 'S', 'T', 'B', '8', 0,
  /* 709 */ 'A', 'D', 'D', 'C', '8', 0,
  /* 715 */ 'A', 'N', 'D', 'C', '8', 0,
  /* 721 */ 'S', 'U', 'B', 'F', 'C', '8', 0,
  /* 728 */ 'A', 'D', 'D', 'I', 'C', '8', 0,
  /* 735 */ 'S', 'U', 'B', 'F', 'I', 'C', '8', 0,
  /* 743 */ 'D', 'Y', 'N', 'A', 'L', 'L', 'O', 'C', '8', 0,
  /* 753 */ 'O', 'R', 'C', '8', 0,
  /* 758 */ 'A', 'D', 'D', '8', 0,
  /* 763 */ 'N', 'A', 'N', 'D', '8', 0,
  /* 769 */ 'A', 'D', 'D', 'E', '8', 0,
  /* 775 */ 'S', 'U', 'B', 'F', 'E', '8', 0,
  /* 782 */ 'A', 'D', 'D', 'M', 'E', '8', 0,
  /* 789 */ 'S', 'U', 'B', 'F', 'M', 'E', '8', 0,
  /* 797 */ 'A', 'D', 'D', 'Z', 'E', '8', 0,
  /* 804 */ 'S', 'U', 'B', 'F', 'Z', 'E', '8', 0,
  /* 812 */ 'S', 'U', 'B', 'F', '8', 0,
  /* 818 */ 'M', 'T', 'C', 'R', 'F', '8', 0,
  /* 825 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', '8', 0,
  /* 838 */ 'N', 'E', 'G', '8', 0,
  /* 843 */ 'E', 'X', 'T', 'S', 'H', '8', 0,
  /* 850 */ 'S', 'T', 'H', '8', 0,
  /* 855 */ 'A', 'D', 'D', 'I', '8', 0,
  /* 861 */ 'L', 'I', '8', 0,
  /* 865 */ 'X', 'O', 'R', 'I', '8', 0,
  /* 871 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '8', 0,
  /* 890 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', '8', 0,
  /* 903 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '8', 0,
  /* 922 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 942 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 961 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 976 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 995 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '8', 0,
  /* 1014 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '8', 0,
  /* 1032 */ 'B', 'L', '8', 0,
  /* 1036 */ 'I', 'S', 'E', 'L', '8', 0,
  /* 1042 */ 'B', 'C', 'T', 'R', 'L', '8', 0,
  /* 1049 */ 'B', 'C', 'C', 'T', 'R', 'L', '8', 0,
  /* 1057 */ 'R', 'L', 'W', 'I', 'N', 'M', '8', 0,
  /* 1065 */ 'M', 'F', 'C', 'R', '8', 0,
  /* 1071 */ 'M', 'F', 'L', 'R', '8', 0,
  /* 1077 */ 'M', 'T', 'L', 'R', '8', 0,
  /* 1083 */ 'B', 'D', 'Z', 'L', 'R', '8', 0,
  /* 1090 */ 'B', 'D', 'N', 'Z', 'L', 'R', '8', 0,
  /* 1098 */ 'M', 'o', 'v', 'e', 'P', 'C', 't', 'o', 'L', 'R', '8', 0,
  /* 1110 */ 'N', 'O', 'R', '8', 0,
  /* 1115 */ 'X', 'O', 'R', '8', 0,
  /* 1120 */ 'T', 'A', 'I', 'L', 'B', 'C', 'T', 'R', '8', 0,
  /* 1130 */ 'B', 'C', 'C', 'T', 'R', '8', 0,
  /* 1137 */ 'M', 'F', 'C', 'T', 'R', '8', 0,
  /* 1144 */ 'M', 'T', 'C', 'T', 'R', '8', 0,
  /* 1151 */ 'A', 'D', 'D', 'I', 'S', '8', 0,
  /* 1158 */ 'L', 'I', 'S', '8', 0,
  /* 1163 */ 'X', 'O', 'R', 'I', 'S', '8', 0,
  /* 1170 */ 'L', 'H', 'A', 'U', '8', 0,
  /* 1176 */ 'S', 'T', 'B', 'U', '8', 0,
  /* 1182 */ 'S', 'T', 'H', 'U', '8', 0,
  /* 1188 */ 'S', 'T', 'W', 'U', '8', 0,
  /* 1194 */ 'L', 'B', 'Z', 'U', '8', 0,
  /* 1200 */ 'L', 'H', 'Z', 'U', '8', 0,
  /* 1206 */ 'L', 'W', 'Z', 'U', '8', 0,
  /* 1212 */ 'E', 'Q', 'V', '8', 0,
  /* 1217 */ 'S', 'T', 'W', '8', 0,
  /* 1222 */ 'L', 'H', 'A', 'X', '8', 0,
  /* 1228 */ 'S', 'T', 'B', 'X', '8', 0,
  /* 1234 */ 'S', 'T', 'H', 'X', '8', 0,
  /* 1240 */ 'L', 'H', 'A', 'U', 'X', '8', 0,
  /* 1247 */ 'S', 'T', 'B', 'U', 'X', '8', 0,
  /* 1254 */ 'S', 'T', 'H', 'U', 'X', '8', 0,
  /* 1261 */ 'S', 'T', 'W', 'U', 'X', '8', 0,
  /* 1268 */ 'L', 'B', 'Z', 'U', 'X', '8', 0,
  /* 1275 */ 'L', 'H', 'Z', 'U', 'X', '8', 0,
  /* 1282 */ 'L', 'W', 'Z', 'U', 'X', '8', 0,
  /* 1289 */ 'S', 'T', 'W', 'X', '8', 0,
  /* 1295 */ 'L', 'B', 'Z', 'X', '8', 0,
  /* 1301 */ 'L', 'H', 'Z', 'X', '8', 0,
  /* 1307 */ 'L', 'W', 'Z', 'X', '8', 0,
  /* 1313 */ 'L', 'B', 'Z', '8', 0,
  /* 1318 */ 'B', 'D', 'Z', '8', 0,
  /* 1323 */ 'L', 'H', 'Z', '8', 0,
  /* 1328 */ 'B', 'D', 'N', 'Z', '8', 0,
  /* 1334 */ 'L', 'W', 'Z', '8', 0,
  /* 1339 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'a', 'i', '8', 0,
  /* 1351 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'd', 'i', '8', 0,
  /* 1363 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'r', 'i', '8', 0,
  /* 1375 */ 'A', 'N', 'D', 'I', 'o', '8', 0,
  /* 1382 */ 'A', 'N', 'D', 'I', 'S', 'o', '8', 0,
  /* 1390 */ 'D', 'C', 'B', 'A', 0,
  /* 1395 */ 'T', 'A', 'I', 'L', 'B', 'A', 0,
  /* 1402 */ 'L', 'H', 'A', 0,
  /* 1406 */ 'A', 'D', 'D', 'I', 'S', 't', 'o', 'c', 'H', 'A', 0,
  /* 1417 */ 'A', 'D', 'D', 'I', 'S', 't', 'l', 's', 'g', 'd', 'H', 'A', 0,
  /* 1430 */ 'A', 'D', 'D', 'I', 'S', 't', 'l', 's', 'l', 'd', 'H', 'A', 0,
  /* 1443 */ 'A', 'D', 'D', 'I', 'S', 'g', 'o', 't', 'T', 'p', 'r', 'e', 'l', 'H', 'A', 0,
  /* 1459 */ 'A', 'D', 'D', 'I', 'S', 'd', 't', 'p', 'r', 'e', 'l', 'H', 'A', 0,
  /* 1473 */ 'B', 'L', 'A', 0,
  /* 1477 */ 'L', 'W', 'A', 0,
  /* 1481 */ 'V', 'S', 'R', 'A', 'B', 0,
  /* 1487 */ 'V', 'M', 'R', 'G', 'H', 'B', 0,
  /* 1494 */ 'V', 'M', 'R', 'G', 'L', 'B', 0,
  /* 1501 */ 'T', 'A', 'I', 'L', 'B', 0,
  /* 1507 */ 'V', 'R', 'L', 'B', 0,
  /* 1512 */ 'V', 'S', 'L', 'B', 0,
  /* 1517 */ 'V', 'S', 'R', 'B', 0,
  /* 1522 */ 'V', 'M', 'U', 'L', 'E', 'S', 'B', 0,
  /* 1530 */ 'V', 'A', 'V', 'G', 'S', 'B', 0,
  /* 1537 */ 'V', 'U', 'P', 'K', 'H', 'S', 'B', 0,
  /* 1545 */ 'V', 'S', 'P', 'L', 'T', 'I', 'S', 'B', 0,
  /* 1554 */ 'V', 'U', 'P', 'K', 'L', 'S', 'B', 0,
  /* 1562 */ 'V', 'M', 'I', 'N', 'S', 'B', 0,
  /* 1569 */ 'V', 'M', 'U', 'L', 'O', 'S', 'B', 0,
  /* 1577 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'B', 0,
  /* 1586 */ 'E', 'X', 'T', 'S', 'B', 0,
  /* 1592 */ 'V', 'M', 'A', 'X', 'S', 'B', 0,
  /* 1599 */ 'V', 'S', 'P', 'L', 'T', 'B', 0,
  /* 1606 */ 'S', 'T', 'B', 0,
  /* 1610 */ 'V', 'M', 'U', 'L', 'E', 'U', 'B', 0,
  /* 1618 */ 'V', 'A', 'V', 'G', 'U', 'B', 0,
  /* 1625 */ 'V', 'M', 'I', 'N', 'U', 'B', 0,
  /* 1632 */ 'V', 'M', 'U', 'L', 'O', 'U', 'B', 0,
  /* 1640 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'B', 0,
  /* 1649 */ 'F', 'S', 'U', 'B', 0,
  /* 1654 */ 'F', 'M', 'S', 'U', 'B', 0,
  /* 1660 */ 'F', 'N', 'M', 'S', 'U', 'B', 0,
  /* 1667 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'B', 0,
  /* 1676 */ 'V', 'M', 'A', 'X', 'U', 'B', 0,
  /* 1683 */ 'B', 'C', 'C', 0,
  /* 1687 */ 'A', 'D', 'D', 'C', 0,
  /* 1692 */ 'V', 'A', 'N', 'D', 'C', 0,
  /* 1698 */ 'S', 'U', 'B', 'F', 'C', 0,
  /* 1704 */ 'A', 'D', 'D', 'I', 'C', 0,
  /* 1710 */ 'S', 'U', 'B', 'F', 'I', 'C', 0,
  /* 1717 */ 'I', 'S', 'Y', 'N', 'C', 0,
  /* 1723 */ 'D', 'Y', 'N', 'A', 'L', 'L', 'O', 'C', 0,
  /* 1732 */ 'O', 'R', 'C', 0,
  /* 1736 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'V', 'R', 'R', 'C', 0,
  /* 1751 */ 'S', 'C', 0,
  /* 1754 */ 'S', 'R', 'A', 'D', 0,
  /* 1759 */ 'F', 'A', 'D', 'D', 0,
  /* 1764 */ 'F', 'M', 'A', 'D', 'D', 0,
  /* 1770 */ 'F', 'N', 'M', 'A', 'D', 'D', 0,
  /* 1777 */ 'L', 'F', 'D', 0,
  /* 1781 */ 'S', 'T', 'F', 'D', 0,
  /* 1786 */ 'F', 'N', 'E', 'G', 'D', 0,
  /* 1792 */ 'B', 'L', '8', '_', 'N', 'O', 'P', '_', 'T', 'L', 'S', 'G', 'D', 0,
  /* 1806 */ 'M', 'U', 'L', 'H', 'D', 0,
  /* 1812 */ 'F', 'C', 'F', 'I', 'D', 0,
  /* 1818 */ 'F', 'S', 'E', 'L', 'D', 0,
  /* 1824 */ 'M', 'U', 'L', 'L', 'D', 0,
  /* 1830 */ 'C', 'M', 'P', 'L', 'D', 0,
  /* 1836 */ 'B', 'L', '8', '_', 'N', 'O', 'P', '_', 'T', 'L', 'S', 'L', 'D', 0,
  /* 1850 */ 'F', 'R', 'I', 'M', 'D', 0,
  /* 1856 */ 'N', 'A', 'N', 'D', 0,
  /* 1861 */ 'V', 'A', 'N', 'D', 0,
  /* 1866 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 1879 */ 'F', 'R', 'I', 'N', 'D', 0,
  /* 1885 */ 'F', 'R', 'I', 'P', 'D', 0,
  /* 1891 */ 'C', 'M', 'P', 'D', 0,
  /* 1896 */ 'S', 'R', 'D', 0,
  /* 1900 */ 'F', 'A', 'B', 'S', 'D', 0,
  /* 1906 */ 'F', 'N', 'A', 'B', 'S', 'D', 0,
  /* 1913 */ 'P', 'O', 'P', 'C', 'N', 'T', 'D', 0,
  /* 1921 */ 'S', 'T', 'D', 0,
  /* 1925 */ 'F', 'C', 'M', 'P', 'U', 'D', 0,
  /* 1932 */ 'D', 'I', 'V', 'D', 0,
  /* 1937 */ 'F', 'R', 'I', 'Z', 'D', 0,
  /* 1943 */ 'C', 'N', 'T', 'L', 'Z', 'D', 0,
  /* 1950 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 1963 */ 'A', 'D', 'D', 'E', 0,
  /* 1968 */ 'S', 'U', 'B', 'F', 'E', 0,
  /* 1974 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 1981 */ 'A', 'D', 'D', 'M', 'E', 0,
  /* 1987 */ 'S', 'U', 'B', 'F', 'M', 'E', 0,
  /* 1994 */ 'F', 'R', 'E', 0,
  /* 1998 */ 'F', 'R', 'S', 'Q', 'R', 'T', 'E', 0,
  /* 2006 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 2016 */ 'M', 'F', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 2025 */ 'M', 'T', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 2034 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', '_', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 2049 */ 'U', 'P', 'D', 'A', 'T', 'E', '_', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 2063 */ 'S', 'P', 'I', 'L', 'L', '_', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 2076 */ 'A', 'D', 'D', 'Z', 'E', 0,
  /* 2082 */ 'S', 'U', 'B', 'F', 'Z', 'E', 0,
  /* 2089 */ 'D', 'C', 'B', 'F', 0,
  /* 2094 */ 'S', 'U', 'B', 'F', 0,
  /* 2099 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 2112 */ 'M', 'C', 'R', 'F', 0,
  /* 2117 */ 'M', 'F', 'O', 'C', 'R', 'F', 0,
  /* 2124 */ 'M', 'T', 'C', 'R', 'F', 0,
  /* 2130 */ 'M', 'T', 'F', 'S', 'F', 0,
  /* 2136 */ 'N', 'E', 'G', 0,
  /* 2140 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 2155 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 2169 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 2183 */ 'V', 'S', 'R', 'A', 'H', 0,
  /* 2189 */ 'V', 'M', 'R', 'G', 'H', 'H', 0,
  /* 2196 */ 'V', 'M', 'R', 'G', 'L', 'H', 0,
  /* 2203 */ 'V', 'R', 'L', 'H', 0,
  /* 2208 */ 'V', 'S', 'L', 'H', 0,
  /* 2213 */ 'V', 'S', 'R', 'H', 0,
  /* 2218 */ 'V', 'M', 'U', 'L', 'E', 'S', 'H', 0,
  /* 2226 */ 'V', 'A', 'V', 'G', 'S', 'H', 0,
  /* 2233 */ 'V', 'U', 'P', 'K', 'H', 'S', 'H', 0,
  /* 2241 */ 'V', 'S', 'P', 'L', 'T', 'I', 'S', 'H', 0,
  /* 2250 */ 'V', 'U', 'P', 'K', 'L', 'S', 'H', 0,
  /* 2258 */ 'V', 'M', 'I', 'N', 'S', 'H', 0,
  /* 2265 */ 'V', 'M', 'U', 'L', 'O', 'S', 'H', 0,
  /* 2273 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'H', 0,
  /* 2282 */ 'E', 'X', 'T', 'S', 'H', 0,
  /* 2288 */ 'V', 'M', 'A', 'X', 'S', 'H', 0,
  /* 2295 */ 'V', 'S', 'P', 'L', 'T', 'H', 0,
  /* 2302 */ 'S', 'T', 'H', 0,
  /* 2306 */ 'V', 'M', 'U', 'L', 'E', 'U', 'H', 0,
  /* 2314 */ 'V', 'A', 'V', 'G', 'U', 'H', 0,
  /* 2321 */ 'V', 'M', 'I', 'N', 'U', 'H', 0,
  /* 2328 */ 'V', 'M', 'U', 'L', 'O', 'U', 'H', 0,
  /* 2336 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'H', 0,
  /* 2345 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'H', 0,
  /* 2354 */ 'V', 'M', 'A', 'X', 'U', 'H', 0,
  /* 2361 */ 'D', 'C', 'B', 'I', 0,
  /* 2366 */ 'I', 'C', 'B', 'I', 0,
  /* 2371 */ 'S', 'R', 'A', 'D', 'I', 0,
  /* 2377 */ 'A', 'D', 'D', 'I', 0,
  /* 2382 */ 'C', 'M', 'P', 'L', 'D', 'I', 0,
  /* 2389 */ 'S', 'L', 'D', 'I', 0,
  /* 2394 */ 'C', 'M', 'P', 'D', 'I', 0,
  /* 2400 */ 'S', 'R', 'D', 'I', 0,
  /* 2405 */ 'P', 'H', 'I', 0,
  /* 2409 */ 'M', 'U', 'L', 'L', 'I', 0,
  /* 2415 */ 'R', 'L', 'D', 'I', 'M', 'I', 0,
  /* 2422 */ 'R', 'L', 'W', 'I', 'M', 'I', 0,
  /* 2429 */ 'V', 'S', 'L', 'D', 'O', 'I', 0,
  /* 2436 */ 'X', 'O', 'R', 'I', 0,
  /* 2441 */ 'L', 'D', 't', 'o', 'c', 'J', 'T', 'I', 0,
  /* 2450 */ 'S', 'R', 'A', 'W', 'I', 0,
  /* 2456 */ 'C', 'M', 'P', 'L', 'W', 'I', 0,
  /* 2463 */ 'S', 'L', 'W', 'I', 0,
  /* 2468 */ 'C', 'M', 'P', 'W', 'I', 0,
  /* 2474 */ 'S', 'R', 'W', 'I', 0,
  /* 2479 */ 'B', 'L', 0,
  /* 2482 */ 'R', 'L', 'D', 'C', 'L', 0,
  /* 2488 */ 'R', 'L', 'D', 'I', 'C', 'L', 0,
  /* 2495 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2504 */ 'P', 'R', 'O', 'L', 'O', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2517 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2526 */ 'I', 'S', 'E', 'L', 0,
  /* 2531 */ 'V', 'S', 'E', 'L', 0,
  /* 2536 */ 'D', 'S', 'S', 'A', 'L', 'L', 0,
  /* 2543 */ 'K', 'I', 'L', 'L', 0,
  /* 2548 */ 'B', 'C', 'T', 'R', 'L', 0,
  /* 2554 */ 'B', 'C', 'C', 'T', 'R', 'L', 0,
  /* 2561 */ 'L', 'V', 'S', 'L', 0,
  /* 2566 */ 'F', 'M', 'U', 'L', 0,
  /* 2571 */ 'L', 'V', 'X', 'L', 0,
  /* 2576 */ 'S', 'T', 'V', 'X', 'L', 0,
  /* 2582 */ 'D', 'C', 'B', 'Z', 'L', 0,
  /* 2588 */ 'L', 'D', 't', 'o', 'c', 'L', 0,
  /* 2595 */ 'A', 'D', 'D', 'I', 't', 'o', 'c', 'L', 0,
  /* 2604 */ 'A', 'D', 'D', 'I', 't', 'l', 's', 'g', 'd', 'L', 0,
  /* 2615 */ 'A', 'D', 'D', 'I', 't', 'l', 's', 'l', 'd', 'L', 0,
  /* 2626 */ 'L', 'D', 'g', 'o', 't', 'T', 'p', 'r', 'e', 'l', 'L', 0,
  /* 2638 */ 'A', 'D', 'D', 'I', 'd', 't', 'p', 'r', 'e', 'l', 'L', 0,
  /* 2650 */ 'V', 'M', 'S', 'U', 'M', 'M', 'B', 'M', 0,
  /* 2659 */ 'V', 'S', 'U', 'B', 'U', 'B', 'M', 0,
  /* 2667 */ 'V', 'A', 'D', 'D', 'U', 'B', 'M', 0,
  /* 2675 */ 'V', 'M', 'S', 'U', 'M', 'U', 'B', 'M', 0,
  /* 2684 */ 'V', 'M', 'S', 'U', 'M', 'S', 'H', 'M', 0,
  /* 2693 */ 'V', 'S', 'U', 'B', 'U', 'H', 'M', 0,
  /* 2701 */ 'V', 'M', 'L', 'A', 'D', 'D', 'U', 'H', 'M', 0,
  /* 2711 */ 'V', 'A', 'D', 'D', 'U', 'H', 'M', 0,
  /* 2719 */ 'V', 'M', 'S', 'U', 'M', 'U', 'H', 'M', 0,
  /* 2728 */ 'V', 'R', 'F', 'I', 'M', 0,
  /* 2734 */ 'R', 'L', 'W', 'I', 'N', 'M', 0,
  /* 2741 */ 'R', 'L', 'W', 'N', 'M', 0,
  /* 2747 */ 'V', 'P', 'E', 'R', 'M', 0,
  /* 2753 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 2763 */ 'V', 'P', 'K', 'U', 'H', 'U', 'M', 0,
  /* 2771 */ 'V', 'P', 'K', 'U', 'W', 'U', 'M', 0,
  /* 2779 */ 'V', 'S', 'U', 'B', 'U', 'W', 'M', 0,
  /* 2787 */ 'V', 'A', 'D', 'D', 'U', 'W', 'M', 0,
  /* 2795 */ 'V', 'R', 'F', 'I', 'N', 0,
  /* 2801 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 2818 */ 'V', 'S', 'L', 'O', 0,
  /* 2823 */ 'V', 'S', 'R', 'O', 0,
  /* 2828 */ 'T', 'R', 'A', 'P', 0,
  /* 2833 */ 'V', 'C', 'M', 'P', 'B', 'F', 'P', 0,
  /* 2841 */ 'V', 'N', 'M', 'S', 'U', 'B', 'F', 'P', 0,
  /* 2850 */ 'V', 'S', 'U', 'B', 'F', 'P', 0,
  /* 2857 */ 'V', 'M', 'A', 'D', 'D', 'F', 'P', 0,
  /* 2865 */ 'V', 'A', 'D', 'D', 'F', 'P', 0,
  /* 2872 */ 'V', 'L', 'O', 'G', 'E', 'F', 'P', 0,
  /* 2880 */ 'V', 'C', 'M', 'P', 'G', 'E', 'F', 'P', 0,
  /* 2889 */ 'V', 'R', 'E', 'F', 'P', 0,
  /* 2895 */ 'V', 'E', 'X', 'P', 'T', 'E', 'F', 'P', 0,
  /* 2904 */ 'V', 'R', 'S', 'Q', 'R', 'T', 'E', 'F', 'P', 0,
  /* 2914 */ 'V', 'M', 'I', 'N', 'F', 'P', 0,
  /* 2921 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'F', 'P', 0,
  /* 2930 */ 'V', 'C', 'M', 'P', 'G', 'T', 'F', 'P', 0,
  /* 2939 */ 'V', 'M', 'A', 'X', 'F', 'P', 0,
  /* 2946 */ 'V', 'R', 'F', 'I', 'P', 0,
  /* 2952 */ 'B', 'L', 'A', '8', '_', 'N', 'O', 'P', 0,
  /* 2961 */ 'B', 'L', '8', '_', 'N', 'O', 'P', 0,
  /* 2969 */ 'F', 'R', 'S', 'P', 0,
  /* 2974 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 2989 */ 'M', 'F', 'C', 'R', 0,
  /* 2994 */ 'R', 'L', 'D', 'I', 'C', 'R', 0,
  /* 3001 */ 'M', 'F', 'V', 'S', 'C', 'R', 0,
  /* 3008 */ 'M', 'T', 'V', 'S', 'C', 'R', 0,
  /* 3015 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', '_', 'C', 'R', 0,
  /* 3026 */ 'S', 'P', 'I', 'L', 'L', '_', 'C', 'R', 0,
  /* 3035 */ 'G', 'E', 'T', 't', 'l', 's', 'l', 'd', 'A', 'D', 'D', 'R', 0,
  /* 3048 */ 'G', 'E', 'T', 't', 'l', 's', 'A', 'D', 'D', 'R', 0,
  /* 3059 */ 'B', 'L', 'R', 0,
  /* 3063 */ 'B', 'C', 'L', 'R', 0,
  /* 3068 */ 'M', 'F', 'L', 'R', 0,
  /* 3073 */ 'M', 'T', 'L', 'R', 0,
  /* 3078 */ 'B', 'D', 'Z', 'L', 'R', 0,
  /* 3084 */ 'B', 'D', 'N', 'Z', 'L', 'R', 0,
  /* 3091 */ 'M', 'o', 'v', 'e', 'P', 'C', 't', 'o', 'L', 'R', 0,
  /* 3102 */ 'F', 'M', 'R', 0,
  /* 3106 */ 'V', 'N', 'O', 'R', 0,
  /* 3111 */ 'C', 'R', 'O', 'R', 0,
  /* 3116 */ 'V', 'O', 'R', 0,
  /* 3120 */ 'V', 'X', 'O', 'R', 0,
  /* 3125 */ 'L', 'V', 'S', 'R', 0,
  /* 3130 */ 'T', 'A', 'I', 'L', 'B', 'C', 'T', 'R', 0,
  /* 3139 */ 'B', 'C', 'C', 'T', 'R', 0,
  /* 3145 */ 'M', 'F', 'C', 'T', 'R', 0,
  /* 3151 */ 'M', 'T', 'C', 'T', 'R', 0,
  /* 3157 */ 'V', 'S', 'U', 'M', '4', 'S', 'B', 'S', 0,
  /* 3166 */ 'V', 'S', 'U', 'B', 'S', 'B', 'S', 0,
  /* 3174 */ 'V', 'A', 'D', 'D', 'S', 'B', 'S', 0,
  /* 3182 */ 'V', 'S', 'U', 'M', '4', 'U', 'B', 'S', 0,
  /* 3191 */ 'V', 'S', 'U', 'B', 'U', 'B', 'S', 0,
  /* 3199 */ 'V', 'A', 'D', 'D', 'U', 'B', 'S', 0,
  /* 3207 */ 'F', 'S', 'U', 'B', 'S', 0,
  /* 3213 */ 'F', 'M', 'S', 'U', 'B', 'S', 0,
  /* 3220 */ 'F', 'N', 'M', 'S', 'U', 'B', 'S', 0,
  /* 3228 */ 'F', 'A', 'D', 'D', 'S', 0,
  /* 3234 */ 'F', 'M', 'A', 'D', 'D', 'S', 0,
  /* 3241 */ 'F', 'N', 'M', 'A', 'D', 'D', 'S', 0,
  /* 3249 */ 'F', 'C', 'F', 'I', 'D', 'S', 0,
  /* 3256 */ 'V', '_', 'S', 'E', 'T', 'A', 'L', 'L', 'O', 'N', 'E', 'S', 0,
  /* 3269 */ 'F', 'R', 'E', 'S', 0,
  /* 3274 */ 'F', 'R', 'S', 'Q', 'R', 'T', 'E', 'S', 0,
  /* 3283 */ 'M', 'F', 'F', 'S', 0,
  /* 3288 */ 'L', 'F', 'S', 0,
  /* 3292 */ 'S', 'T', 'F', 'S', 0,
  /* 3297 */ 'F', 'N', 'E', 'G', 'S', 0,
  /* 3303 */ 'V', 'S', 'U', 'M', '4', 'S', 'H', 'S', 0,
  /* 3312 */ 'V', 'S', 'U', 'B', 'S', 'H', 'S', 0,
  /* 3320 */ 'V', 'M', 'H', 'A', 'D', 'D', 'S', 'H', 'S', 0,
  /* 3330 */ 'V', 'M', 'H', 'R', 'A', 'D', 'D', 'S', 'H', 'S', 0,
  /* 3341 */ 'V', 'A', 'D', 'D', 'S', 'H', 'S', 0,
  /* 3349 */ 'V', 'M', 'S', 'U', 'M', 'S', 'H', 'S', 0,
  /* 3358 */ 'V', 'S', 'U', 'B', 'U', 'H', 'S', 0,
  /* 3366 */ 'V', 'A', 'D', 'D', 'U', 'H', 'S', 0,
  /* 3374 */ 'V', 'M', 'S', 'U', 'M', 'U', 'H', 'S', 0,
  /* 3383 */ 'A', 'D', 'D', 'I', 'S', 0,
  /* 3389 */ 'L', 'I', 'S', 0,
  /* 3393 */ 'X', 'O', 'R', 'I', 'S', 0,
  /* 3399 */ 'F', 'S', 'E', 'L', 'S', 0,
  /* 3405 */ 'A', 'D', 'D', '8', 'T', 'L', 'S', 0,
  /* 3413 */ 'F', 'M', 'U', 'L', 'S', 0,
  /* 3419 */ 'F', 'R', 'I', 'M', 'S', 0,
  /* 3425 */ 'F', 'R', 'I', 'N', 'S', 0,
  /* 3431 */ 'F', 'R', 'I', 'P', 'S', 0,
  /* 3437 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 3454 */ 'F', 'A', 'B', 'S', 'S', 0,
  /* 3460 */ 'F', 'N', 'A', 'B', 'S', 'S', 0,
  /* 3467 */ 'D', 'S', 'S', 0,
  /* 3471 */ 'V', 'P', 'K', 'S', 'H', 'S', 'S', 0,
  /* 3479 */ 'V', 'P', 'K', 'S', 'W', 'S', 'S', 0,
  /* 3487 */ 'F', 'S', 'Q', 'R', 'T', 'S', 0,
  /* 3494 */ 'F', 'C', 'F', 'I', 'D', 'U', 'S', 0,
  /* 3502 */ 'V', 'P', 'K', 'S', 'H', 'U', 'S', 0,
  /* 3510 */ 'V', 'P', 'K', 'U', 'H', 'U', 'S', 0,
  /* 3518 */ 'F', 'C', 'M', 'P', 'U', 'S', 0,
  /* 3525 */ 'V', 'P', 'K', 'S', 'W', 'U', 'S', 0,
  /* 3533 */ 'V', 'P', 'K', 'U', 'W', 'U', 'S', 0,
  /* 3541 */ 'F', 'D', 'I', 'V', 'S', 0,
  /* 3547 */ 'V', 'S', 'U', 'M', '2', 'S', 'W', 'S', 0,
  /* 3556 */ 'V', 'S', 'U', 'B', 'S', 'W', 'S', 0,
  /* 3564 */ 'V', 'A', 'D', 'D', 'S', 'W', 'S', 0,
  /* 3572 */ 'V', 'S', 'U', 'M', 'S', 'W', 'S', 0,
  /* 3580 */ 'V', 'S', 'U', 'B', 'U', 'W', 'S', 0,
  /* 3588 */ 'V', 'A', 'D', 'D', 'U', 'W', 'S', 0,
  /* 3596 */ 'V', 'C', 'T', 'S', 'X', 'S', 0,
  /* 3603 */ 'V', 'C', 'T', 'U', 'X', 'S', 0,
  /* 3610 */ 'F', 'R', 'I', 'Z', 'S', 0,
  /* 3616 */ 'D', 'C', 'B', 'T', 0,
  /* 3621 */ 'C', 'R', '6', 'S', 'E', 'T', 0,
  /* 3628 */ 'C', 'R', '6', 'U', 'N', 'S', 'E', 'T', 0,
  /* 3637 */ 'C', 'R', 'U', 'N', 'S', 'E', 'T', 0,
  /* 3645 */ 'C', 'R', 'S', 'E', 'T', 0,
  /* 3651 */ 'L', 'D', 't', 'o', 'c', 'C', 'P', 'T', 0,
  /* 3660 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 3675 */ 'F', 'S', 'Q', 'R', 'T', 0,
  /* 3681 */ 'D', 'C', 'B', 'S', 'T', 0,
  /* 3687 */ 'D', 'S', 'T', 0,
  /* 3691 */ 'D', 'C', 'B', 'T', 'S', 'T', 0,
  /* 3698 */ 'D', 'S', 'T', 'S', 'T', 0,
  /* 3704 */ 'D', 'S', 'T', 'T', 0,
  /* 3709 */ 'D', 'S', 'T', 'S', 'T', 'T', 0,
  /* 3716 */ 'L', 'H', 'A', 'U', 0,
  /* 3721 */ 'S', 'T', 'B', 'U', 0,
  /* 3726 */ 'L', 'F', 'D', 'U', 0,
  /* 3731 */ 'S', 'T', 'F', 'D', 'U', 0,
  /* 3737 */ 'M', 'U', 'L', 'H', 'D', 'U', 0,
  /* 3744 */ 'F', 'C', 'F', 'I', 'D', 'U', 0,
  /* 3751 */ 'L', 'D', 'U', 0,
  /* 3755 */ 'S', 'T', 'D', 'U', 0,
  /* 3760 */ 'D', 'I', 'V', 'D', 'U', 0,
  /* 3766 */ 'S', 'T', 'H', 'U', 0,
  /* 3771 */ 'L', 'F', 'S', 'U', 0,
  /* 3776 */ 'S', 'T', 'F', 'S', 'U', 0,
  /* 3782 */ 'M', 'U', 'L', 'H', 'W', 'U', 0,
  /* 3789 */ 'S', 'T', 'W', 'U', 0,
  /* 3794 */ 'D', 'I', 'V', 'W', 'U', 0,
  /* 3800 */ 'L', 'B', 'Z', 'U', 0,
  /* 3805 */ 'L', 'H', 'Z', 'U', 0,
  /* 3810 */ 'L', 'W', 'Z', 'U', 0,
  /* 3815 */ 'F', 'D', 'I', 'V', 0,
  /* 3820 */ 'C', 'R', 'E', 'Q', 'V', 0,
  /* 3826 */ 'V', 'S', 'R', 'A', 'W', 0,
  /* 3832 */ 'V', 'M', 'R', 'G', 'H', 'W', 0,
  /* 3839 */ 'M', 'U', 'L', 'H', 'W', 0,
  /* 3845 */ 'V', 'M', 'R', 'G', 'L', 'W', 0,
  /* 3852 */ 'M', 'U', 'L', 'L', 'W', 0,
  /* 3858 */ 'C', 'M', 'P', 'L', 'W', 0,
  /* 3864 */ 'V', 'R', 'L', 'W', 0,
  /* 3869 */ 'V', 'S', 'L', 'W', 0,
  /* 3874 */ 'C', 'M', 'P', 'W', 0,
  /* 3879 */ 'V', 'S', 'R', 'W', 0,
  /* 3884 */ 'V', 'A', 'V', 'G', 'S', 'W', 0,
  /* 3891 */ 'V', 'S', 'P', 'L', 'T', 'I', 'S', 'W', 0,
  /* 3900 */ 'V', 'M', 'I', 'N', 'S', 'W', 0,
  /* 3907 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'W', 0,
  /* 3916 */ 'E', 'X', 'T', 'S', 'W', 0,
  /* 3922 */ 'V', 'M', 'A', 'X', 'S', 'W', 0,
  /* 3929 */ 'V', 'S', 'P', 'L', 'T', 'W', 0,
  /* 3936 */ 'P', 'O', 'P', 'C', 'N', 'T', 'W', 0,
  /* 3944 */ 'S', 'T', 'W', 0,
  /* 3948 */ 'V', 'S', 'U', 'B', 'C', 'U', 'W', 0,
  /* 3956 */ 'V', 'A', 'D', 'D', 'C', 'U', 'W', 0,
  /* 3964 */ 'V', 'A', 'V', 'G', 'U', 'W', 0,
  /* 3971 */ 'V', 'M', 'I', 'N', 'U', 'W', 0,
  /* 3978 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'W', 0,
  /* 3987 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'W', 0,
  /* 3996 */ 'V', 'M', 'A', 'X', 'U', 'W', 0,
  /* 4003 */ 'D', 'I', 'V', 'W', 0,
  /* 4008 */ 'C', 'N', 'T', 'L', 'Z', 'W', 0,
  /* 4015 */ 'L', 'H', 'A', 'X', 0,
  /* 4020 */ 'L', 'F', 'I', 'W', 'A', 'X', 0,
  /* 4027 */ 'L', 'W', 'A', 'X', 0,
  /* 4032 */ 'L', 'V', 'E', 'B', 'X', 0,
  /* 4038 */ 'S', 'T', 'V', 'E', 'B', 'X', 0,
  /* 4045 */ 'S', 'T', 'B', 'X', 0,
  /* 4050 */ 'S', 'T', 'D', 'C', 'X', 0,
  /* 4056 */ 'S', 'T', 'W', 'C', 'X', 0,
  /* 4062 */ 'L', 'F', 'D', 'X', 0,
  /* 4067 */ 'S', 'T', 'F', 'D', 'X', 0,
  /* 4073 */ 'L', 'D', 'X', 0,
  /* 4077 */ 'S', 'T', 'D', 'X', 0,
  /* 4082 */ 'L', 'V', 'E', 'H', 'X', 0,
  /* 4088 */ 'S', 'T', 'V', 'E', 'H', 'X', 0,
  /* 4095 */ 'S', 'T', 'H', 'X', 0,
  /* 4100 */ 'V', 'U', 'P', 'K', 'H', 'P', 'X', 0,
  /* 4108 */ 'V', 'P', 'K', 'P', 'X', 0,
  /* 4114 */ 'V', 'U', 'P', 'K', 'L', 'P', 'X', 0,
  /* 4122 */ 'L', 'D', 'A', 'R', 'X', 0,
  /* 4128 */ 'L', 'W', 'A', 'R', 'X', 0,
  /* 4134 */ 'L', 'D', 'B', 'R', 'X', 0,
  /* 4140 */ 'S', 'T', 'D', 'B', 'R', 'X', 0,
  /* 4147 */ 'L', 'H', 'B', 'R', 'X', 0,
  /* 4153 */ 'S', 'T', 'H', 'B', 'R', 'X', 0,
  /* 4160 */ 'L', 'W', 'B', 'R', 'X', 0,
  /* 4166 */ 'S', 'T', 'W', 'B', 'R', 'X', 0,
  /* 4173 */ 'V', 'C', 'F', 'S', 'X', 0,
  /* 4179 */ 'L', 'F', 'S', 'X', 0,
  /* 4184 */ 'S', 'T', 'F', 'S', 'X', 0,
  /* 4190 */ 'L', 'H', 'A', 'U', 'X', 0,
  /* 4196 */ 'L', 'W', 'A', 'U', 'X', 0,
  /* 4202 */ 'S', 'T', 'B', 'U', 'X', 0,
  /* 4208 */ 'L', 'F', 'D', 'U', 'X', 0,
  /* 4214 */ 'S', 'T', 'F', 'D', 'U', 'X', 0,
  /* 4221 */ 'L', 'D', 'U', 'X', 0,
  /* 4226 */ 'S', 'T', 'D', 'U', 'X', 0,
  /* 4232 */ 'V', 'C', 'F', 'U', 'X', 0,
  /* 4238 */ 'S', 'T', 'H', 'U', 'X', 0,
  /* 4244 */ 'L', 'F', 'S', 'U', 'X', 0,
  /* 4250 */ 'S', 'T', 'F', 'S', 'U', 'X', 0,
  /* 4257 */ 'S', 'T', 'W', 'U', 'X', 0,
  /* 4263 */ 'L', 'B', 'Z', 'U', 'X', 0,
  /* 4269 */ 'L', 'H', 'Z', 'U', 'X', 0,
  /* 4275 */ 'L', 'W', 'Z', 'U', 'X', 0,
  /* 4281 */ 'L', 'V', 'X', 0,
  /* 4285 */ 'S', 'T', 'V', 'X', 0,
  /* 4290 */ 'L', 'V', 'E', 'W', 'X', 0,
  /* 4296 */ 'S', 'T', 'V', 'E', 'W', 'X', 0,
  /* 4303 */ 'S', 'T', 'F', 'I', 'W', 'X', 0,
  /* 4310 */ 'S', 'T', 'W', 'X', 0,
  /* 4315 */ 'L', 'B', 'Z', 'X', 0,
  /* 4320 */ 'L', 'H', 'Z', 'X', 0,
  /* 4325 */ 'L', 'F', 'I', 'W', 'Z', 'X', 0,
  /* 4332 */ 'L', 'W', 'Z', 'X', 0,
  /* 4337 */ 'C', 'O', 'P', 'Y', 0,
  /* 4342 */ 'D', 'C', 'B', 'Z', 0,
  /* 4347 */ 'L', 'B', 'Z', 0,
  /* 4351 */ 'B', 'D', 'Z', 0,
  /* 4355 */ 'F', 'C', 'T', 'I', 'D', 'Z', 0,
  /* 4362 */ 'L', 'H', 'Z', 0,
  /* 4366 */ 'V', 'R', 'F', 'I', 'Z', 0,
  /* 4372 */ 'B', 'D', 'N', 'Z', 0,
  /* 4377 */ 'F', 'C', 'T', 'I', 'D', 'U', 'Z', 0,
  /* 4385 */ 'F', 'C', 'T', 'I', 'W', 'U', 'Z', 0,
  /* 4393 */ 'F', 'C', 'T', 'I', 'W', 'Z', 0,
  /* 4400 */ 'L', 'W', 'Z', 0,
  /* 4404 */ 'L', 'D', 't', 'o', 'c', 0,
  /* 4410 */ 'L', 'D', 'i', 'n', 't', 'o', '_', 't', 'o', 'c', 0,
  /* 4421 */ 'M', 'F', 'C', 'R', '8', 'p', 's', 'e', 'u', 'd', 0,
  /* 4432 */ 'M', 'F', 'C', 'R', 'p', 's', 'e', 'u', 'd', 0,
  /* 4442 */ 'L', 'D', 't', 'o', 'c', '_', 'r', 'e', 's', 't', 'o', 'r', 'e', 0,
  /* 4456 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'a', 'i', 0,
  /* 4467 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'd', 'i', 0,
  /* 4478 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'r', 'i', 0,
  /* 4489 */ 'E', 'X', 'T', 'S', 'W', '_', '3', '2', '_', '6', '4', 'o', 0,
  /* 4502 */ 'A', 'D', 'D', '4', 'o', 0,
  /* 4508 */ 'E', 'X', 'T', 'S', 'B', '8', 'o', 0,
  /* 4516 */ 'A', 'D', 'D', 'C', '8', 'o', 0,
  /* 4523 */ 'A', 'N', 'D', 'C', '8', 'o', 0,
  /* 4530 */ 'S', 'U', 'B', 'F', 'C', '8', 'o', 0,
  /* 4538 */ 'O', 'R', 'C', '8', 'o', 0,
  /* 4544 */ 'A', 'D', 'D', '8', 'o', 0,
  /* 4550 */ 'N', 'A', 'N', 'D', '8', 'o', 0,
  /* 4557 */ 'A', 'D', 'D', 'E', '8', 'o', 0,
  /* 4564 */ 'S', 'U', 'B', 'F', 'E', '8', 'o', 0,
  /* 4572 */ 'A', 'D', 'D', 'M', 'E', '8', 'o', 0,
  /* 4580 */ 'S', 'U', 'B', 'F', 'M', 'E', '8', 'o', 0,
  /* 4589 */ 'A', 'D', 'D', 'Z', 'E', '8', 'o', 0,
  /* 4597 */ 'S', 'U', 'B', 'F', 'Z', 'E', '8', 'o', 0,
  /* 4606 */ 'S', 'U', 'B', 'F', '8', 'o', 0,
  /* 4613 */ 'N', 'E', 'G', '8', 'o', 0,
  /* 4619 */ 'E', 'X', 'T', 'S', 'H', '8', 'o', 0,
  /* 4627 */ 'R', 'L', 'W', 'I', 'N', 'M', '8', 'o', 0,
  /* 4636 */ 'N', 'O', 'R', '8', 'o', 0,
  /* 4642 */ 'X', 'O', 'R', '8', 'o', 0,
  /* 4648 */ 'E', 'Q', 'V', '8', 'o', 0,
  /* 4654 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'B', 'o', 0,
  /* 4664 */ 'E', 'X', 'T', 'S', 'B', 'o', 0,
  /* 4671 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'B', 'o', 0,
  /* 4681 */ 'F', 'S', 'U', 'B', 'o', 0,
  /* 4687 */ 'F', 'M', 'S', 'U', 'B', 'o', 0,
  /* 4694 */ 'F', 'N', 'M', 'S', 'U', 'B', 'o', 0,
  /* 4702 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'B', 'o', 0,
  /* 4712 */ 'A', 'D', 'D', 'C', 'o', 0,
  /* 4718 */ 'A', 'N', 'D', 'C', 'o', 0,
  /* 4724 */ 'S', 'U', 'B', 'F', 'C', 'o', 0,
  /* 4731 */ 'A', 'D', 'D', 'I', 'C', 'o', 0,
  /* 4738 */ 'O', 'R', 'C', 'o', 0,
  /* 4743 */ 'S', 'R', 'A', 'D', 'o', 0,
  /* 4749 */ 'F', 'A', 'D', 'D', 'o', 0,
  /* 4755 */ 'F', 'M', 'A', 'D', 'D', 'o', 0,
  /* 4762 */ 'F', 'N', 'M', 'A', 'D', 'D', 'o', 0,
  /* 4770 */ 'F', 'N', 'E', 'G', 'D', 'o', 0,
  /* 4777 */ 'M', 'U', 'L', 'H', 'D', 'o', 0,
  /* 4784 */ 'F', 'C', 'F', 'I', 'D', 'o', 0,
  /* 4791 */ 'F', 'S', 'E', 'L', 'D', 'o', 0,
  /* 4798 */ 'M', 'U', 'L', 'L', 'D', 'o', 0,
  /* 4805 */ 'S', 'L', 'D', 'o', 0,
  /* 4810 */ 'F', 'R', 'I', 'M', 'D', 'o', 0,
  /* 4817 */ 'N', 'A', 'N', 'D', 'o', 0,
  /* 4823 */ 'F', 'R', 'I', 'N', 'D', 'o', 0,
  /* 4830 */ 'F', 'R', 'I', 'P', 'D', 'o', 0,
  /* 4837 */ 'S', 'R', 'D', 'o', 0,
  /* 4842 */ 'F', 'A', 'B', 'S', 'D', 'o', 0,
  /* 4849 */ 'F', 'N', 'A', 'B', 'S', 'D', 'o', 0,
  /* 4857 */ 'P', 'O', 'P', 'C', 'N', 'T', 'D', 'o', 0,
  /* 4866 */ 'D', 'I', 'V', 'D', 'o', 0,
  /* 4872 */ 'F', 'R', 'I', 'Z', 'D', 'o', 0,
  /* 4879 */ 'C', 'N', 'T', 'L', 'Z', 'D', 'o', 0,
  /* 4887 */ 'A', 'D', 'D', 'E', 'o', 0,
  /* 4893 */ 'S', 'U', 'B', 'F', 'E', 'o', 0,
  /* 4900 */ 'A', 'D', 'D', 'M', 'E', 'o', 0,
  /* 4907 */ 'S', 'U', 'B', 'F', 'M', 'E', 'o', 0,
  /* 4915 */ 'F', 'R', 'E', 'o', 0,
  /* 4920 */ 'F', 'R', 'S', 'Q', 'R', 'T', 'E', 'o', 0,
  /* 4929 */ 'A', 'D', 'D', 'Z', 'E', 'o', 0,
  /* 4936 */ 'S', 'U', 'B', 'F', 'Z', 'E', 'o', 0,
  /* 4944 */ 'S', 'U', 'B', 'F', 'o', 0,
  /* 4950 */ 'N', 'E', 'G', 'o', 0,
  /* 4955 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'H', 'o', 0,
  /* 4965 */ 'E', 'X', 'T', 'S', 'H', 'o', 0,
  /* 4972 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'H', 'o', 0,
  /* 4982 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'H', 'o', 0,
  /* 4992 */ 'S', 'R', 'A', 'D', 'I', 'o', 0,
  /* 4999 */ 'A', 'N', 'D', 'I', 'o', 0,
  /* 5005 */ 'R', 'L', 'D', 'I', 'M', 'I', 'o', 0,
  /* 5013 */ 'R', 'L', 'W', 'I', 'M', 'I', 'o', 0,
  /* 5021 */ 'S', 'R', 'A', 'W', 'I', 'o', 0,
  /* 5028 */ 'R', 'L', 'D', 'C', 'L', 'o', 0,
  /* 5035 */ 'R', 'L', 'D', 'I', 'C', 'L', 'o', 0,
  /* 5043 */ 'F', 'M', 'U', 'L', 'o', 0,
  /* 5049 */ 'R', 'L', 'W', 'I', 'N', 'M', 'o', 0,
  /* 5057 */ 'R', 'L', 'W', 'N', 'M', 'o', 0,
  /* 5064 */ 'V', 'C', 'M', 'P', 'B', 'F', 'P', 'o', 0,
  /* 5073 */ 'V', 'C', 'M', 'P', 'G', 'E', 'F', 'P', 'o', 0,
  /* 5083 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'F', 'P', 'o', 0,
  /* 5093 */ 'V', 'C', 'M', 'P', 'G', 'T', 'F', 'P', 'o', 0,
  /* 5103 */ 'F', 'R', 'S', 'P', 'o', 0,
  /* 5109 */ 'R', 'L', 'D', 'I', 'C', 'R', 'o', 0,
  /* 5117 */ 'F', 'M', 'R', 'o', 0,
  /* 5122 */ 'N', 'O', 'R', 'o', 0,
  /* 5127 */ 'X', 'O', 'R', 'o', 0,
  /* 5132 */ 'F', 'S', 'U', 'B', 'S', 'o', 0,
  /* 5139 */ 'F', 'M', 'S', 'U', 'B', 'S', 'o', 0,
  /* 5147 */ 'F', 'N', 'M', 'S', 'U', 'B', 'S', 'o', 0,
  /* 5156 */ 'F', 'A', 'D', 'D', 'S', 'o', 0,
  /* 5163 */ 'F', 'M', 'A', 'D', 'D', 'S', 'o', 0,
  /* 5171 */ 'F', 'N', 'M', 'A', 'D', 'D', 'S', 'o', 0,
  /* 5180 */ 'F', 'C', 'F', 'I', 'D', 'S', 'o', 0,
  /* 5188 */ 'F', 'R', 'E', 'S', 'o', 0,
  /* 5194 */ 'F', 'R', 'S', 'Q', 'R', 'T', 'E', 'S', 'o', 0,
  /* 5204 */ 'F', 'N', 'E', 'G', 'S', 'o', 0,
  /* 5211 */ 'A', 'N', 'D', 'I', 'S', 'o', 0,
  /* 5218 */ 'F', 'S', 'E', 'L', 'S', 'o', 0,
  /* 5225 */ 'F', 'M', 'U', 'L', 'S', 'o', 0,
  /* 5232 */ 'F', 'R', 'I', 'M', 'S', 'o', 0,
  /* 5239 */ 'F', 'R', 'I', 'N', 'S', 'o', 0,
  /* 5246 */ 'F', 'R', 'I', 'P', 'S', 'o', 0,
  /* 5253 */ 'F', 'A', 'B', 'S', 'S', 'o', 0,
  /* 5260 */ 'F', 'N', 'A', 'B', 'S', 'S', 'o', 0,
  /* 5268 */ 'F', 'S', 'Q', 'R', 'T', 'S', 'o', 0,
  /* 5276 */ 'F', 'C', 'F', 'I', 'D', 'U', 'S', 'o', 0,
  /* 5285 */ 'F', 'D', 'I', 'V', 'S', 'o', 0,
  /* 5292 */ 'F', 'R', 'I', 'Z', 'S', 'o', 0,
  /* 5299 */ 'F', 'S', 'Q', 'R', 'T', 'o', 0,
  /* 5306 */ 'M', 'U', 'L', 'H', 'D', 'U', 'o', 0,
  /* 5314 */ 'F', 'C', 'F', 'I', 'D', 'U', 'o', 0,
  /* 5322 */ 'D', 'I', 'V', 'D', 'U', 'o', 0,
  /* 5329 */ 'M', 'U', 'L', 'H', 'W', 'U', 'o', 0,
  /* 5337 */ 'D', 'I', 'V', 'W', 'U', 'o', 0,
  /* 5344 */ 'F', 'D', 'I', 'V', 'o', 0,
  /* 5350 */ 'E', 'Q', 'V', 'o', 0,
  /* 5355 */ 'S', 'R', 'A', 'W', 'o', 0,
  /* 5361 */ 'M', 'U', 'L', 'H', 'W', 'o', 0,
  /* 5368 */ 'M', 'U', 'L', 'L', 'W', 'o', 0,
  /* 5375 */ 'S', 'L', 'W', 'o', 0,
  /* 5380 */ 'S', 'R', 'W', 'o', 0,
  /* 5385 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'W', 'o', 0,
  /* 5395 */ 'E', 'X', 'T', 'S', 'W', 'o', 0,
  /* 5402 */ 'P', 'O', 'P', 'C', 'N', 'T', 'W', 'o', 0,
  /* 5411 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'W', 'o', 0,
  /* 5421 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'W', 'o', 0,
  /* 5431 */ 'D', 'I', 'V', 'W', 'o', 0,
  /* 5437 */ 'C', 'N', 'T', 'L', 'Z', 'W', 'o', 0,
  /* 5445 */ 'F', 'C', 'T', 'I', 'D', 'Z', 'o', 0,
  /* 5453 */ 'F', 'C', 'T', 'I', 'D', 'U', 'Z', 'o', 0,
  /* 5462 */ 'F', 'C', 'T', 'I', 'W', 'U', 'Z', 'o', 0,
  /* 5471 */ 'F', 'C', 'T', 'I', 'W', 'Z', 'o', 0,
  /* 5479 */ 'M', 'T', 'C', 'T', 'R', '8', 'l', 'o', 'o', 'p', 0,
  /* 5490 */ 'M', 'T', 'C', 'T', 'R', 'l', 'o', 'o', 'p', 0,
  /* 5500 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'S', 'e', 't', 'u', 'p', 0,
  /* 5514 */ 'B', 'C', 'L', 'a', 'l', 'w', 'a', 'y', 's', 0,
  /* 5524 */ 'F', 'R', 'I', 'N', 'D', 'r', 'i', 'n', 't', 0,
  /* 5534 */ 'F', 'R', 'I', 'N', 'S', 'r', 'i', 'n', 't', 0,
  /* 5544 */ 'M', 'F', 'V', 'R', 'S', 'A', 'V', 'E', 'v', 0,
  /* 5554 */ 'M', 'T', 'V', 'R', 'S', 'A', 'V', 'E', 'v', 0,
  /* 5564 */ 'F', 'A', 'D', 'D', 'r', 't', 'z', 0,
};

extern const unsigned PPCInstrNameIndices[] = {
    2405U, 2753U, 2504U, 2517U, 2495U, 2543U, 2140U, 2155U, 
    2099U, 2169U, 3437U, 2006U, 1950U, 4337U, 1974U, 3660U, 
    1866U, 479U, 4502U, 758U, 3405U, 4544U, 1687U, 709U, 
    4516U, 4712U, 1963U, 769U, 4557U, 4887U, 2377U, 855U, 
    1704U, 728U, 4731U, 3383U, 1151U, 1459U, 1443U, 1417U, 
    1430U, 1406U, 2638U, 2604U, 2615U, 2595U, 1981U, 782U, 
    4572U, 4900U, 2076U, 797U, 4589U, 4929U, 2801U, 2974U, 
    1857U, 764U, 4551U, 1693U, 715U, 4523U, 4718U, 5211U, 
    1382U, 4999U, 1375U, 4818U, 607U, 152U, 343U, 976U, 
    530U, 75U, 266U, 903U, 571U, 116U, 307U, 942U, 
    550U, 95U, 286U, 922U, 647U, 192U, 383U, 1014U, 
    510U, 55U, 246U, 871U, 627U, 172U, 363U, 995U, 
    591U, 136U, 327U, 961U, 1485U, 1683U, 3139U, 1130U, 
    2554U, 1049U, 3063U, 5514U, 3134U, 1124U, 2548U, 1042U, 
    4372U, 1328U, 3084U, 1090U, 4351U, 1318U, 3078U, 1083U, 
    2479U, 1032U, 2961U, 1792U, 1836U, 1473U, 679U, 2952U, 
    3059U, 1891U, 2394U, 1830U, 2382U, 3858U, 2456U, 3874U, 
    2468U, 1943U, 4879U, 4008U, 5437U, 3621U, 3628U, 3820U, 
    3111U, 3645U, 3637U, 1390U, 2089U, 2361U, 3681U, 3616U, 
    3691U, 4342U, 2582U, 1932U, 3760U, 5322U, 4866U, 4003U, 
    3794U, 5337U, 5431U, 3467U, 2536U, 3687U, 402U, 3698U, 
    408U, 3709U, 423U, 3704U, 416U, 1723U, 743U, 211U, 
    444U, 229U, 462U, 5500U, 3822U, 1212U, 4648U, 5350U, 
    1586U, 691U, 4508U, 4664U, 2282U, 843U, 4619U, 4965U, 
    3916U, 432U, 4489U, 5395U, 1900U, 4842U, 3454U, 5253U, 
    1759U, 3228U, 5156U, 4749U, 5564U, 1812U, 3249U, 5180U, 
    3744U, 3494U, 5276U, 5314U, 4784U, 1925U, 3518U, 4377U, 
    5453U, 4355U, 5445U, 4385U, 5462U, 4393U, 5471U, 3815U, 
    3541U, 5285U, 5344U, 1764U, 3234U, 5163U, 4755U, 3102U, 
    5117U, 1654U, 3213U, 5139U, 4687U, 2566U, 3413U, 5225U, 
    5043U, 1906U, 4849U, 3460U, 5260U, 1786U, 4770U, 3297U, 
    5204U, 1770U, 3241U, 5171U, 4762U, 1660U, 3220U, 5147U, 
    4694U, 1994U, 3269U, 5188U, 4915U, 1850U, 4810U, 3419U, 
    5232U, 1879U, 4823U, 5524U, 3425U, 5239U, 5534U, 1885U, 
    4830U, 3431U, 5246U, 1937U, 4872U, 3610U, 5292U, 2969U, 
    5103U, 1998U, 3274U, 5194U, 4920U, 1818U, 4791U, 3399U, 
    5218U, 3675U, 3487U, 5268U, 5299U, 1649U, 3207U, 5132U, 
    4681U, 3048U, 3035U, 2366U, 2526U, 1036U, 1717U, 1474U, 
    4347U, 1313U, 3800U, 1194U, 4263U, 1268U, 4315U, 1295U, 
    1821U, 4122U, 4134U, 3751U, 4221U, 4073U, 2626U, 4410U, 
    4404U, 3651U, 2441U, 2588U, 4442U, 1777U, 3726U, 4208U, 
    4062U, 4020U, 4325U, 3288U, 3771U, 4244U, 4179U, 1402U, 
    674U, 3716U, 1170U, 4190U, 1240U, 4015U, 1222U, 4147U, 
    4362U, 1323U, 3805U, 1200U, 4269U, 1275U, 4320U, 1301U, 
    2412U, 861U, 3389U, 1158U, 4032U, 4082U, 4290U, 2561U, 
    3125U, 4281U, 2571U, 1477U, 4128U, 4196U, 4027U, 4160U, 
    4400U, 1334U, 3810U, 1206U, 4275U, 1282U, 4332U, 1307U, 
    2112U, 2989U, 1065U, 4421U, 4432U, 3145U, 1137U, 3283U, 
    3068U, 1071U, 2117U, 698U, 2016U, 5544U, 3001U, 2124U, 
    818U, 3151U, 1144U, 5479U, 5490U, 0U, 48U, 2130U, 
    3073U, 1077U, 2025U, 5554U, 3008U, 1806U, 3737U, 5306U, 
    4777U, 3839U, 3782U, 5329U, 5361U, 1824U, 4798U, 2409U, 
    3852U, 5368U, 3091U, 1098U, 1856U, 763U, 4550U, 4817U, 
    2136U, 838U, 4613U, 4950U, 2957U, 3107U, 1110U, 4636U, 
    5122U, 3108U, 1111U, 4637U, 1732U, 753U, 4538U, 4738U, 
    2437U, 866U, 3394U, 1164U, 5123U, 1913U, 4857U, 3936U, 
    5402U, 3015U, 2034U, 2482U, 5028U, 2488U, 5035U, 2994U, 
    5109U, 2415U, 5005U, 2422U, 5013U, 2734U, 1057U, 4627U, 
    5049U, 2741U, 5057U, 1751U, 484U, 825U, 497U, 890U, 
    1736U, 1846U, 2389U, 4805U, 3870U, 2463U, 5375U, 3026U, 
    2063U, 1754U, 2371U, 4992U, 4743U, 3827U, 2450U, 5021U, 
    5355U, 1896U, 2400U, 4837U, 3880U, 2474U, 5380U, 1606U, 
    704U, 3721U, 1176U, 4202U, 1247U, 4045U, 1228U, 1921U, 
    4140U, 4050U, 3755U, 4226U, 4077U, 1781U, 3731U, 4214U, 
    4067U, 4303U, 3292U, 3776U, 4250U, 4184U, 2302U, 850U, 
    4153U, 3766U, 1182U, 4238U, 1254U, 4095U, 1234U, 4038U, 
    4088U, 4296U, 4285U, 2576U, 3944U, 1217U, 4166U, 4056U, 
    3789U, 1188U, 4257U, 1261U, 4310U, 1289U, 2094U, 812U, 
    4606U, 1698U, 721U, 4530U, 4724U, 1968U, 775U, 4564U, 
    4893U, 1710U, 735U, 1987U, 789U, 4580U, 4907U, 2082U, 
    804U, 4597U, 4936U, 4944U, 1718U, 1501U, 684U, 1395U, 
    666U, 3130U, 1120U, 4456U, 1339U, 4467U, 1351U, 4478U, 
    1363U, 2828U, 2049U, 3956U, 2865U, 3174U, 3341U, 3564U, 
    2667U, 3199U, 2711U, 3366U, 2787U, 3588U, 1861U, 1692U, 
    1530U, 2226U, 3884U, 1618U, 2314U, 3964U, 4173U, 32U, 
    4232U, 40U, 2833U, 5064U, 2921U, 5083U, 1640U, 4671U, 
    2336U, 4972U, 3978U, 5411U, 2880U, 5073U, 2930U, 5093U, 
    1577U, 4654U, 2273U, 4955U, 3907U, 5385U, 1667U, 4702U, 
    2345U, 4982U, 3987U, 5421U, 3596U, 14U, 3603U, 23U, 
    2895U, 2872U, 2857U, 2939U, 1592U, 2288U, 3922U, 1676U, 
    2354U, 3996U, 3320U, 3330U, 2914U, 1562U, 2258U, 3900U, 
    1625U, 2321U, 3971U, 2701U, 1487U, 2189U, 3832U, 1494U, 
    2196U, 3845U, 2650U, 2684U, 3349U, 2675U, 2719U, 3374U, 
    1522U, 2218U, 1610U, 2306U, 1569U, 2265U, 1632U, 2328U, 
    2841U, 3106U, 3116U, 2747U, 4108U, 3471U, 3502U, 3479U, 
    3525U, 2763U, 3510U, 2771U, 3533U, 2889U, 2728U, 2795U, 
    2946U, 4366U, 1507U, 2203U, 3864U, 2904U, 2531U, 2562U, 
    1512U, 2429U, 2208U, 2818U, 3869U, 1599U, 2295U, 1545U, 
    2241U, 3891U, 3929U, 3126U, 1481U, 2183U, 3826U, 1517U, 
    2213U, 2823U, 3879U, 3948U, 2850U, 3166U, 3312U, 3556U, 
    2659U, 3191U, 2693U, 3358U, 2779U, 3580U, 3547U, 3157U, 
    3303U, 3182U, 3572U, 4100U, 1537U, 2233U, 4114U, 1554U, 
    2250U, 3120U, 7U, 3256U, 3121U, 1115U, 4642U, 2436U, 
    865U, 3393U, 1163U, 5127U, 
};

static inline void InitPPCMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(PPCInsts, PPCInstrNameIndices, PPCInstrNameData, 748);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct PPCGenInstrInfo : public TargetInstrInfo {
  explicit PPCGenInstrInfo(int SO = -1, int DO = -1);
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR
#undef GET_INSTRINFO_CTOR
namespace llvm {
extern const MCInstrDesc PPCInsts[];
extern const unsigned PPCInstrNameIndices[];
extern const char PPCInstrNameData[];
PPCGenInstrInfo::PPCGenInstrInfo(int SO, int DO)
  : TargetInstrInfo(SO, DO) {
  InitMCInstrInfo(PPCInsts, PPCInstrNameIndices, PPCInstrNameData, 748);
}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR

#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace PPC {

enum RC {
	RC_0,
	RC_1
};

// getNonRecordFormOpcode
int getNonRecordFormOpcode(uint16_t Opcode) {
static const uint16_t getNonRecordFormOpcodeTable[][2] = {
  { PPC::ADD4o, PPC::ADD4 },
  { PPC::ADD8o, PPC::ADD8 },
  { PPC::ADDC8o, PPC::ADDC8 },
  { PPC::ADDCo, PPC::ADDC },
  { PPC::ADDE8o, PPC::ADDE8 },
  { PPC::ADDEo, PPC::ADDE },
  { PPC::ADDICo, PPC::ADDIC },
  { PPC::ADDME8o, PPC::ADDME8 },
  { PPC::ADDMEo, PPC::ADDME },
  { PPC::ADDZE8o, PPC::ADDZE8 },
  { PPC::ADDZEo, PPC::ADDZE },
  { PPC::AND8o, PPC::AND8 },
  { PPC::ANDC8o, PPC::ANDC8 },
  { PPC::ANDCo, PPC::ANDC },
  { PPC::ANDo, PPC::AND },
  { PPC::CNTLZDo, PPC::CNTLZD },
  { PPC::CNTLZWo, PPC::CNTLZW },
  { PPC::DIVDUo, PPC::DIVDU },
  { PPC::DIVDo, PPC::DIVD },
  { PPC::DIVWUo, PPC::DIVWU },
  { PPC::DIVWo, PPC::DIVW },
  { PPC::EQV8o, PPC::EQV8 },
  { PPC::EQVo, PPC::EQV },
  { PPC::EXTSB8o, PPC::EXTSB8 },
  { PPC::EXTSBo, PPC::EXTSB },
  { PPC::EXTSH8o, PPC::EXTSH8 },
  { PPC::EXTSHo, PPC::EXTSH },
  { PPC::EXTSW_32_64o, PPC::EXTSW_32_64 },
  { PPC::EXTSWo, PPC::EXTSW },
  { PPC::FABSDo, PPC::FABSD },
  { PPC::FABSSo, PPC::FABSS },
  { PPC::FADDSo, PPC::FADDS },
  { PPC::FADDo, PPC::FADD },
  { PPC::FCFIDSo, PPC::FCFIDS },
  { PPC::FCFIDUSo, PPC::FCFIDUS },
  { PPC::FCFIDUo, PPC::FCFIDU },
  { PPC::FCFIDo, PPC::FCFID },
  { PPC::FCTIDUZo, PPC::FCTIDUZ },
  { PPC::FCTIDZo, PPC::FCTIDZ },
  { PPC::FCTIWUZo, PPC::FCTIWUZ },
  { PPC::FCTIWZo, PPC::FCTIWZ },
  { PPC::FDIVSo, PPC::FDIVS },
  { PPC::FDIVo, PPC::FDIV },
  { PPC::FMADDSo, PPC::FMADDS },
  { PPC::FMADDo, PPC::FMADD },
  { PPC::FMRo, PPC::FMR },
  { PPC::FMSUBSo, PPC::FMSUBS },
  { PPC::FMSUBo, PPC::FMSUB },
  { PPC::FMULSo, PPC::FMULS },
  { PPC::FMULo, PPC::FMUL },
  { PPC::FNABSDo, PPC::FNABSD },
  { PPC::FNABSSo, PPC::FNABSS },
  { PPC::FNEGDo, PPC::FNEGD },
  { PPC::FNEGSo, PPC::FNEGS },
  { PPC::FNMADDSo, PPC::FNMADDS },
  { PPC::FNMADDo, PPC::FNMADD },
  { PPC::FNMSUBSo, PPC::FNMSUBS },
  { PPC::FNMSUBo, PPC::FNMSUB },
  { PPC::FRESo, PPC::FRES },
  { PPC::FREo, PPC::FRE },
  { PPC::FRIMDo, PPC::FRIMD },
  { PPC::FRIMSo, PPC::FRIMS },
  { PPC::FRINDo, PPC::FRIND },
  { PPC::FRINSo, PPC::FRINS },
  { PPC::FRIPDo, PPC::FRIPD },
  { PPC::FRIPSo, PPC::FRIPS },
  { PPC::FRIZDo, PPC::FRIZD },
  { PPC::FRIZSo, PPC::FRIZS },
  { PPC::FRSPo, PPC::FRSP },
  { PPC::FRSQRTESo, PPC::FRSQRTES },
  { PPC::FRSQRTEo, PPC::FRSQRTE },
  { PPC::FSELDo, PPC::FSELD },
  { PPC::FSELSo, PPC::FSELS },
  { PPC::FSQRTSo, PPC::FSQRTS },
  { PPC::FSQRTo, PPC::FSQRT },
  { PPC::FSUBSo, PPC::FSUBS },
  { PPC::FSUBo, PPC::FSUB },
  { PPC::MULHDUo, PPC::MULHDU },
  { PPC::MULHDo, PPC::MULHD },
  { PPC::MULHWUo, PPC::MULHWU },
  { PPC::MULHWo, PPC::MULHW },
  { PPC::MULLDo, PPC::MULLD },
  { PPC::MULLWo, PPC::MULLW },
  { PPC::NAND8o, PPC::NAND8 },
  { PPC::NANDo, PPC::NAND },
  { PPC::NEG8o, PPC::NEG8 },
  { PPC::NEGo, PPC::NEG },
  { PPC::NOR8o, PPC::NOR8 },
  { PPC::NORo, PPC::NOR },
  { PPC::OR8o, PPC::OR8 },
  { PPC::ORC8o, PPC::ORC8 },
  { PPC::ORCo, PPC::ORC },
  { PPC::ORo, PPC::OR },
  { PPC::POPCNTDo, PPC::POPCNTD },
  { PPC::POPCNTWo, PPC::POPCNTW },
  { PPC::RLDCLo, PPC::RLDCL },
  { PPC::RLDICLo, PPC::RLDICL },
  { PPC::RLDICRo, PPC::RLDICR },
  { PPC::RLDIMIo, PPC::RLDIMI },
  { PPC::RLWIMIo, PPC::RLWIMI },
  { PPC::RLWINM8o, PPC::RLWINM8 },
  { PPC::RLWINMo, PPC::RLWINM },
  { PPC::RLWNMo, PPC::RLWNM },
  { PPC::SLDo, PPC::SLD },
  { PPC::SLWo, PPC::SLW },
  { PPC::SRADIo, PPC::SRADI },
  { PPC::SRADo, PPC::SRAD },
  { PPC::SRAWIo, PPC::SRAWI },
  { PPC::SRAWo, PPC::SRAW },
  { PPC::SRDo, PPC::SRD },
  { PPC::SRWo, PPC::SRW },
  { PPC::SUBF8o, PPC::SUBF8 },
  { PPC::SUBFC8o, PPC::SUBFC8 },
  { PPC::SUBFCo, PPC::SUBFC },
  { PPC::SUBFE8o, PPC::SUBFE8 },
  { PPC::SUBFEo, PPC::SUBFE },
  { PPC::SUBFME8o, PPC::SUBFME8 },
  { PPC::SUBFMEo, PPC::SUBFME },
  { PPC::SUBFZE8o, PPC::SUBFZE8 },
  { PPC::SUBFZEo, PPC::SUBFZE },
  { PPC::SUBFo, PPC::SUBF },
  { PPC::XOR8o, PPC::XOR8 },
  { PPC::XORo, PPC::XOR },
}; // End of getNonRecordFormOpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 123;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getNonRecordFormOpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getNonRecordFormOpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getNonRecordFormOpcodeTable[mid][1];
}

// getRecordFormOpcode
int getRecordFormOpcode(uint16_t Opcode) {
static const uint16_t getRecordFormOpcodeTable[][2] = {
  { PPC::ADD4, PPC::ADD4o },
  { PPC::ADD8, PPC::ADD8o },
  { PPC::ADDC, PPC::ADDCo },
  { PPC::ADDC8, PPC::ADDC8o },
  { PPC::ADDE, PPC::ADDEo },
  { PPC::ADDE8, PPC::ADDE8o },
  { PPC::ADDIC, PPC::ADDICo },
  { PPC::ADDME, PPC::ADDMEo },
  { PPC::ADDME8, PPC::ADDME8o },
  { PPC::ADDZE, PPC::ADDZEo },
  { PPC::ADDZE8, PPC::ADDZE8o },
  { PPC::AND, PPC::ANDo },
  { PPC::AND8, PPC::AND8o },
  { PPC::ANDC, PPC::ANDCo },
  { PPC::ANDC8, PPC::ANDC8o },
  { PPC::CNTLZD, PPC::CNTLZDo },
  { PPC::CNTLZW, PPC::CNTLZWo },
  { PPC::DIVD, PPC::DIVDo },
  { PPC::DIVDU, PPC::DIVDUo },
  { PPC::DIVW, PPC::DIVWo },
  { PPC::DIVWU, PPC::DIVWUo },
  { PPC::EQV, PPC::EQVo },
  { PPC::EQV8, PPC::EQV8o },
  { PPC::EXTSB, PPC::EXTSBo },
  { PPC::EXTSB8, PPC::EXTSB8o },
  { PPC::EXTSH, PPC::EXTSHo },
  { PPC::EXTSH8, PPC::EXTSH8o },
  { PPC::EXTSW, PPC::EXTSWo },
  { PPC::EXTSW_32_64, PPC::EXTSW_32_64o },
  { PPC::FABSD, PPC::FABSDo },
  { PPC::FABSS, PPC::FABSSo },
  { PPC::FADD, PPC::FADDo },
  { PPC::FADDS, PPC::FADDSo },
  { PPC::FCFID, PPC::FCFIDo },
  { PPC::FCFIDS, PPC::FCFIDSo },
  { PPC::FCFIDU, PPC::FCFIDUo },
  { PPC::FCFIDUS, PPC::FCFIDUSo },
  { PPC::FCTIDUZ, PPC::FCTIDUZo },
  { PPC::FCTIDZ, PPC::FCTIDZo },
  { PPC::FCTIWUZ, PPC::FCTIWUZo },
  { PPC::FCTIWZ, PPC::FCTIWZo },
  { PPC::FDIV, PPC::FDIVo },
  { PPC::FDIVS, PPC::FDIVSo },
  { PPC::FMADD, PPC::FMADDo },
  { PPC::FMADDS, PPC::FMADDSo },
  { PPC::FMR, PPC::FMRo },
  { PPC::FMSUB, PPC::FMSUBo },
  { PPC::FMSUBS, PPC::FMSUBSo },
  { PPC::FMUL, PPC::FMULo },
  { PPC::FMULS, PPC::FMULSo },
  { PPC::FNABSD, PPC::FNABSDo },
  { PPC::FNABSS, PPC::FNABSSo },
  { PPC::FNEGD, PPC::FNEGDo },
  { PPC::FNEGS, PPC::FNEGSo },
  { PPC::FNMADD, PPC::FNMADDo },
  { PPC::FNMADDS, PPC::FNMADDSo },
  { PPC::FNMSUB, PPC::FNMSUBo },
  { PPC::FNMSUBS, PPC::FNMSUBSo },
  { PPC::FRE, PPC::FREo },
  { PPC::FRES, PPC::FRESo },
  { PPC::FRIMD, PPC::FRIMDo },
  { PPC::FRIMS, PPC::FRIMSo },
  { PPC::FRIND, PPC::FRINDo },
  { PPC::FRINS, PPC::FRINSo },
  { PPC::FRIPD, PPC::FRIPDo },
  { PPC::FRIPS, PPC::FRIPSo },
  { PPC::FRIZD, PPC::FRIZDo },
  { PPC::FRIZS, PPC::FRIZSo },
  { PPC::FRSP, PPC::FRSPo },
  { PPC::FRSQRTE, PPC::FRSQRTEo },
  { PPC::FRSQRTES, PPC::FRSQRTESo },
  { PPC::FSELD, PPC::FSELDo },
  { PPC::FSELS, PPC::FSELSo },
  { PPC::FSQRT, PPC::FSQRTo },
  { PPC::FSQRTS, PPC::FSQRTSo },
  { PPC::FSUB, PPC::FSUBo },
  { PPC::FSUBS, PPC::FSUBSo },
  { PPC::MULHD, PPC::MULHDo },
  { PPC::MULHDU, PPC::MULHDUo },
  { PPC::MULHW, PPC::MULHWo },
  { PPC::MULHWU, PPC::MULHWUo },
  { PPC::MULLD, PPC::MULLDo },
  { PPC::MULLW, PPC::MULLWo },
  { PPC::NAND, PPC::NANDo },
  { PPC::NAND8, PPC::NAND8o },
  { PPC::NEG, PPC::NEGo },
  { PPC::NEG8, PPC::NEG8o },
  { PPC::NOR, PPC::NORo },
  { PPC::NOR8, PPC::NOR8o },
  { PPC::OR, PPC::ORo },
  { PPC::OR8, PPC::OR8o },
  { PPC::ORC, PPC::ORCo },
  { PPC::ORC8, PPC::ORC8o },
  { PPC::POPCNTD, PPC::POPCNTDo },
  { PPC::POPCNTW, PPC::POPCNTWo },
  { PPC::RLDCL, PPC::RLDCLo },
  { PPC::RLDICL, PPC::RLDICLo },
  { PPC::RLDICR, PPC::RLDICRo },
  { PPC::RLDIMI, PPC::RLDIMIo },
  { PPC::RLWIMI, PPC::RLWIMIo },
  { PPC::RLWINM, PPC::RLWINMo },
  { PPC::RLWINM8, PPC::RLWINM8o },
  { PPC::RLWNM, PPC::RLWNMo },
  { PPC::SLD, PPC::SLDo },
  { PPC::SLW, PPC::SLWo },
  { PPC::SRAD, PPC::SRADo },
  { PPC::SRADI, PPC::SRADIo },
  { PPC::SRAW, PPC::SRAWo },
  { PPC::SRAWI, PPC::SRAWIo },
  { PPC::SRD, PPC::SRDo },
  { PPC::SRW, PPC::SRWo },
  { PPC::SUBF, PPC::SUBFo },
  { PPC::SUBF8, PPC::SUBF8o },
  { PPC::SUBFC, PPC::SUBFCo },
  { PPC::SUBFC8, PPC::SUBFC8o },
  { PPC::SUBFE, PPC::SUBFEo },
  { PPC::SUBFE8, PPC::SUBFE8o },
  { PPC::SUBFME, PPC::SUBFMEo },
  { PPC::SUBFME8, PPC::SUBFME8o },
  { PPC::SUBFZE, PPC::SUBFZEo },
  { PPC::SUBFZE8, PPC::SUBFZE8o },
  { PPC::XOR, PPC::XORo },
  { PPC::XOR8, PPC::XOR8o },
}; // End of getRecordFormOpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 123;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getRecordFormOpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getRecordFormOpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getRecordFormOpcodeTable[mid][1];
}

} // End PPC namespace
} // End llvm namespace
#endif // GET_INSTRMAP_INFO

