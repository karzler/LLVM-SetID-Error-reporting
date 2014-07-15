/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Register Enum Values                                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_ENUM
#undef GET_REGINFO_ENUM
namespace llvm {

class MCRegisterClass;
extern const MCRegisterClass SystemZMCRegisterClasses[];

namespace SystemZ {
enum {
  NoRegister,
  CC = 1,
  F0D = 2,
  F0Q = 3,
  F0S = 4,
  F1D = 5,
  F1Q = 6,
  F1S = 7,
  F2D = 8,
  F2S = 9,
  F3D = 10,
  F3S = 11,
  F4D = 12,
  F4Q = 13,
  F4S = 14,
  F5D = 15,
  F5Q = 16,
  F5S = 17,
  F6D = 18,
  F6S = 19,
  F7D = 20,
  F7S = 21,
  F8D = 22,
  F8Q = 23,
  F8S = 24,
  F9D = 25,
  F9Q = 26,
  F9S = 27,
  F10D = 28,
  F10S = 29,
  F11D = 30,
  F11S = 31,
  F12D = 32,
  F12Q = 33,
  F12S = 34,
  F13D = 35,
  F13Q = 36,
  F13S = 37,
  F14D = 38,
  F14S = 39,
  F15D = 40,
  F15S = 41,
  R0D = 42,
  R0Q = 43,
  R0W = 44,
  R1D = 45,
  R1W = 46,
  R2D = 47,
  R2Q = 48,
  R2W = 49,
  R3D = 50,
  R3W = 51,
  R4D = 52,
  R4Q = 53,
  R4W = 54,
  R5D = 55,
  R5W = 56,
  R6D = 57,
  R6Q = 58,
  R6W = 59,
  R7D = 60,
  R7W = 61,
  R8D = 62,
  R8Q = 63,
  R8W = 64,
  R9D = 65,
  R9W = 66,
  R10D = 67,
  R10Q = 68,
  R10W = 69,
  R11D = 70,
  R11W = 71,
  R12D = 72,
  R12Q = 73,
  R12W = 74,
  R13D = 75,
  R13W = 76,
  R14D = 77,
  R14Q = 78,
  R14W = 79,
  R15D = 80,
  R15W = 81,
  NUM_TARGET_REGS 	// 82
};
}

// Register classes
namespace SystemZ {
enum {
  FP32BitRegClassID = 0,
  GR32BitRegClassID = 1,
  ADDR32BitRegClassID = 2,
  FP64BitRegClassID = 3,
  GR64BitRegClassID = 4,
  ADDR64BitRegClassID = 5,
  FP128BitRegClassID = 6,
  GR128BitRegClassID = 7,
  ADDR128BitRegClassID = 8
  };
}

// Subregister indices
namespace SystemZ {
enum {
  NoSubRegister,
  subreg_32bit,	// 1
  subreg_high,	// 2
  subreg_low,	// 3
  subreg_low32,	// 4
  NUM_TARGET_SUBREGS
};
}
} // End llvm namespace 
#endif // GET_REGINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*MC Register Information                                                     *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_MC_DESC
#undef GET_REGINFO_MC_DESC
namespace llvm {

extern const MCPhysReg SystemZRegDiffLists[] = {
  /* 0 */ 65535, 2, 1, 1, 0,
  /* 5 */ 65535, 2, 3, 1, 0,
  /* 10 */ 65535, 2, 4, 1, 0,
  /* 15 */ 5, 1, 0,
  /* 18 */ 7, 1, 0,
  /* 21 */ 9, 1, 0,
  /* 24 */ 11, 1, 0,
  /* 27 */ 13, 1, 0,
  /* 30 */ 15, 1, 0,
  /* 33 */ 17, 1, 0,
  /* 36 */ 19, 1, 0,
  /* 39 */ 21, 1, 0,
  /* 42 */ 23, 1, 0,
  /* 45 */ 25, 1, 0,
  /* 48 */ 27, 1, 0,
  /* 51 */ 29, 1, 0,
  /* 54 */ 31, 1, 0,
  /* 57 */ 65534, 1, 0,
  /* 60 */ 2, 0,
  /* 62 */ 3, 0,
  /* 64 */ 4, 0,
  /* 66 */ 6, 0,
  /* 68 */ 7, 0,
  /* 70 */ 8, 0,
  /* 72 */ 10, 0,
  /* 74 */ 11, 0,
  /* 76 */ 12, 0,
  /* 78 */ 14, 0,
  /* 80 */ 15, 0,
  /* 82 */ 16, 0,
  /* 84 */ 18, 0,
  /* 86 */ 20, 0,
  /* 88 */ 22, 0,
  /* 90 */ 24, 0,
  /* 92 */ 26, 0,
  /* 94 */ 28, 0,
  /* 96 */ 30, 0,
  /* 98 */ 32, 0,
  /* 100 */ 65481, 0,
  /* 102 */ 65488, 0,
  /* 104 */ 65490, 0,
  /* 106 */ 65491, 0,
  /* 108 */ 65493, 0,
  /* 110 */ 65494, 0,
  /* 112 */ 65496, 0,
  /* 114 */ 65497, 0,
  /* 116 */ 65499, 0,
  /* 118 */ 65500, 0,
  /* 120 */ 65502, 0,
  /* 122 */ 65503, 0,
  /* 124 */ 65505, 0,
  /* 126 */ 65506, 0,
  /* 128 */ 65508, 0,
  /* 130 */ 65509, 0,
  /* 132 */ 65511, 0,
  /* 134 */ 65513, 0,
  /* 136 */ 65517, 0,
  /* 138 */ 65523, 0,
  /* 140 */ 65529, 0,
  /* 142 */ 65535, 65531, 0,
  /* 145 */ 65535, 65532, 0,
  /* 148 */ 65535, 65534, 0,
  /* 151 */ 65535, 0,
};

extern const uint16_t SystemZSubRegIdxLists[] = {
  /* 0 */ 1, 0,
  /* 2 */ 2, 1, 3, 4, 0,
};

extern const MCRegisterInfo::SubRegCoveredBits SystemZSubRegIdxRanges[] = {
  { 65535, 65535 },
  { 0, 65535 },	// subreg_32bit
  { 0, 65535 },	// subreg_high
  { 0, 65535 },	// subreg_low
  { 0, 65535 },	// subreg_low32
};

extern const char SystemZRegStrings[] = {
  /* 0 */ 'C', 'C', 0,
  /* 3 */ 'F', '1', '0', 'D', 0,
  /* 8 */ 'R', '1', '0', 'D', 0,
  /* 13 */ 'F', '0', 'D', 0,
  /* 17 */ 'R', '0', 'D', 0,
  /* 21 */ 'F', '1', '1', 'D', 0,
  /* 26 */ 'R', '1', '1', 'D', 0,
  /* 31 */ 'F', '1', 'D', 0,
  /* 35 */ 'R', '1', 'D', 0,
  /* 39 */ 'F', '1', '2', 'D', 0,
  /* 44 */ 'R', '1', '2', 'D', 0,
  /* 49 */ 'F', '2', 'D', 0,
  /* 53 */ 'R', '2', 'D', 0,
  /* 57 */ 'F', '1', '3', 'D', 0,
  /* 62 */ 'R', '1', '3', 'D', 0,
  /* 67 */ 'F', '3', 'D', 0,
  /* 71 */ 'R', '3', 'D', 0,
  /* 75 */ 'F', '1', '4', 'D', 0,
  /* 80 */ 'R', '1', '4', 'D', 0,
  /* 85 */ 'F', '4', 'D', 0,
  /* 89 */ 'R', '4', 'D', 0,
  /* 93 */ 'F', '1', '5', 'D', 0,
  /* 98 */ 'R', '1', '5', 'D', 0,
  /* 103 */ 'F', '5', 'D', 0,
  /* 107 */ 'R', '5', 'D', 0,
  /* 111 */ 'F', '6', 'D', 0,
  /* 115 */ 'R', '6', 'D', 0,
  /* 119 */ 'F', '7', 'D', 0,
  /* 123 */ 'R', '7', 'D', 0,
  /* 127 */ 'F', '8', 'D', 0,
  /* 131 */ 'R', '8', 'D', 0,
  /* 135 */ 'F', '9', 'D', 0,
  /* 139 */ 'R', '9', 'D', 0,
  /* 143 */ 'R', '1', '0', 'Q', 0,
  /* 148 */ 'F', '0', 'Q', 0,
  /* 152 */ 'R', '0', 'Q', 0,
  /* 156 */ 'F', '1', 'Q', 0,
  /* 160 */ 'F', '1', '2', 'Q', 0,
  /* 165 */ 'R', '1', '2', 'Q', 0,
  /* 170 */ 'R', '2', 'Q', 0,
  /* 174 */ 'F', '1', '3', 'Q', 0,
  /* 179 */ 'R', '1', '4', 'Q', 0,
  /* 184 */ 'F', '4', 'Q', 0,
  /* 188 */ 'R', '4', 'Q', 0,
  /* 192 */ 'F', '5', 'Q', 0,
  /* 196 */ 'R', '6', 'Q', 0,
  /* 200 */ 'F', '8', 'Q', 0,
  /* 204 */ 'R', '8', 'Q', 0,
  /* 208 */ 'F', '9', 'Q', 0,
  /* 212 */ 'F', '1', '0', 'S', 0,
  /* 217 */ 'F', '0', 'S', 0,
  /* 221 */ 'F', '1', '1', 'S', 0,
  /* 226 */ 'F', '1', 'S', 0,
  /* 230 */ 'F', '1', '2', 'S', 0,
  /* 235 */ 'F', '2', 'S', 0,
  /* 239 */ 'F', '1', '3', 'S', 0,
  /* 244 */ 'F', '3', 'S', 0,
  /* 248 */ 'F', '1', '4', 'S', 0,
  /* 253 */ 'F', '4', 'S', 0,
  /* 257 */ 'F', '1', '5', 'S', 0,
  /* 262 */ 'F', '5', 'S', 0,
  /* 266 */ 'F', '6', 'S', 0,
  /* 270 */ 'F', '7', 'S', 0,
  /* 274 */ 'F', '8', 'S', 0,
  /* 278 */ 'F', '9', 'S', 0,
  /* 282 */ 'R', '1', '0', 'W', 0,
  /* 287 */ 'R', '0', 'W', 0,
  /* 291 */ 'R', '1', '1', 'W', 0,
  /* 296 */ 'R', '1', 'W', 0,
  /* 300 */ 'R', '1', '2', 'W', 0,
  /* 305 */ 'R', '2', 'W', 0,
  /* 309 */ 'R', '1', '3', 'W', 0,
  /* 314 */ 'R', '3', 'W', 0,
  /* 318 */ 'R', '1', '4', 'W', 0,
  /* 323 */ 'R', '4', 'W', 0,
  /* 327 */ 'R', '1', '5', 'W', 0,
  /* 332 */ 'R', '5', 'W', 0,
  /* 336 */ 'R', '6', 'W', 0,
  /* 340 */ 'R', '7', 'W', 0,
  /* 344 */ 'R', '8', 'W', 0,
  /* 348 */ 'R', '9', 'W', 0,
};

extern const MCRegisterDesc SystemZRegDesc[] = { // Descriptors
  { 2, 0, 0, 0, 0 },
  { 0, 4, 4, 1, 2417 },
  { 13, 60, 3, 0, 2417 },
  { 148, 10, 4, 2, 32 },
  { 217, 4, 57, 1, 2242 },
  { 31, 60, 3, 0, 2242 },
  { 156, 5, 4, 2, 112 },
  { 226, 4, 57, 1, 992 },
  { 49, 3, 143, 0, 960 },
  { 235, 4, 142, 1, 960 },
  { 67, 3, 146, 0, 1024 },
  { 244, 4, 145, 1, 1024 },
  { 85, 60, 3, 0, 2241 },
  { 184, 10, 4, 2, 240 },
  { 253, 4, 57, 1, 2146 },
  { 103, 60, 3, 0, 2146 },
  { 192, 5, 4, 2, 288 },
  { 262, 4, 57, 1, 1088 },
  { 111, 3, 143, 0, 1056 },
  { 266, 4, 142, 1, 1056 },
  { 119, 3, 146, 0, 1120 },
  { 270, 4, 145, 1, 1120 },
  { 127, 60, 3, 0, 2209 },
  { 200, 10, 4, 2, 336 },
  { 274, 4, 57, 1, 1826 },
  { 135, 60, 3, 0, 1826 },
  { 208, 5, 4, 2, 384 },
  { 278, 4, 57, 1, 1184 },
  { 3, 3, 143, 0, 1152 },
  { 212, 4, 142, 1, 1152 },
  { 21, 3, 146, 0, 1216 },
  { 221, 4, 145, 1, 1216 },
  { 39, 60, 3, 0, 2177 },
  { 160, 10, 4, 2, 432 },
  { 230, 4, 57, 1, 1602 },
  { 57, 60, 3, 0, 1602 },
  { 174, 5, 4, 2, 480 },
  { 239, 4, 57, 1, 1280 },
  { 75, 3, 143, 0, 1248 },
  { 248, 4, 142, 1, 1248 },
  { 93, 3, 146, 0, 1312 },
  { 257, 4, 145, 1, 1312 },
  { 17, 60, 3, 0, 2113 },
  { 152, 0, 4, 2, 528 },
  { 287, 4, 57, 1, 2081 },
  { 35, 3, 149, 0, 1344 },
  { 296, 4, 148, 1, 1344 },
  { 53, 60, 3, 0, 2049 },
  { 170, 0, 4, 2, 576 },
  { 305, 4, 57, 1, 2017 },
  { 71, 3, 149, 0, 1376 },
  { 314, 4, 148, 1, 1376 },
  { 89, 60, 3, 0, 1985 },
  { 188, 0, 4, 2, 624 },
  { 323, 4, 57, 1, 1953 },
  { 107, 3, 149, 0, 1408 },
  { 332, 4, 148, 1, 1408 },
  { 115, 60, 3, 0, 1921 },
  { 196, 0, 4, 2, 672 },
  { 336, 4, 57, 1, 1889 },
  { 123, 3, 149, 0, 1440 },
  { 340, 4, 148, 1, 1440 },
  { 131, 60, 3, 0, 1857 },
  { 204, 0, 4, 2, 720 },
  { 344, 4, 57, 1, 1825 },
  { 139, 3, 149, 0, 1472 },
  { 348, 4, 148, 1, 1472 },
  { 8, 60, 3, 0, 1793 },
  { 143, 0, 4, 2, 768 },
  { 282, 4, 57, 1, 1761 },
  { 26, 3, 149, 0, 1504 },
  { 291, 4, 148, 1, 1504 },
  { 44, 60, 3, 0, 1729 },
  { 165, 0, 4, 2, 816 },
  { 300, 4, 57, 1, 1697 },
  { 62, 3, 149, 0, 1536 },
  { 309, 4, 148, 1, 1536 },
  { 80, 60, 3, 0, 1665 },
  { 179, 0, 4, 2, 864 },
  { 318, 4, 57, 1, 1633 },
  { 98, 3, 149, 0, 1568 },
  { 327, 4, 148, 1, 1568 },
};

extern const uint16_t SystemZRegUnitRoots[][2] = {
  { SystemZ::CC },
  { SystemZ::F0S },
  { SystemZ::F2S },
  { SystemZ::F1S },
  { SystemZ::F3S },
  { SystemZ::F4S },
  { SystemZ::F6S },
  { SystemZ::F5S },
  { SystemZ::F7S },
  { SystemZ::F8S },
  { SystemZ::F10S },
  { SystemZ::F9S },
  { SystemZ::F11S },
  { SystemZ::F12S },
  { SystemZ::F14S },
  { SystemZ::F13S },
  { SystemZ::F15S },
  { SystemZ::R0W },
  { SystemZ::R1W },
  { SystemZ::R2W },
  { SystemZ::R3W },
  { SystemZ::R4W },
  { SystemZ::R5W },
  { SystemZ::R6W },
  { SystemZ::R7W },
  { SystemZ::R8W },
  { SystemZ::R9W },
  { SystemZ::R10W },
  { SystemZ::R11W },
  { SystemZ::R12W },
  { SystemZ::R13W },
  { SystemZ::R14W },
  { SystemZ::R15W },
};

namespace {     // Register classes...
  // FP32Bit Register Class...
  const uint16_t FP32Bit[] = {
    SystemZ::F0S, SystemZ::F1S, SystemZ::F2S, SystemZ::F3S, SystemZ::F4S, SystemZ::F5S, SystemZ::F6S, SystemZ::F7S, SystemZ::F8S, SystemZ::F9S, SystemZ::F10S, SystemZ::F11S, SystemZ::F12S, SystemZ::F13S, SystemZ::F14S, SystemZ::F15S, 
  };

  // FP32Bit Bit set.
  const uint8_t FP32BitBits[] = {
    0x90, 0x4a, 0x2a, 0xa9, 0xa4, 0x02, 
  };

  // GR32Bit Register Class...
  const uint16_t GR32Bit[] = {
    SystemZ::R0W, SystemZ::R1W, SystemZ::R2W, SystemZ::R3W, SystemZ::R4W, SystemZ::R5W, SystemZ::R15W, SystemZ::R14W, SystemZ::R13W, SystemZ::R12W, SystemZ::R11W, SystemZ::R10W, SystemZ::R9W, SystemZ::R8W, SystemZ::R7W, SystemZ::R6W, 
  };

  // GR32Bit Bit set.
  const uint8_t GR32BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x4a, 0x29, 0xa5, 0x94, 0x02, 
  };

  // ADDR32Bit Register Class...
  const uint16_t ADDR32Bit[] = {
    SystemZ::R1W, SystemZ::R2W, SystemZ::R3W, SystemZ::R4W, SystemZ::R5W, SystemZ::R15W, SystemZ::R14W, SystemZ::R13W, SystemZ::R12W, SystemZ::R11W, SystemZ::R10W, SystemZ::R9W, SystemZ::R8W, SystemZ::R7W, SystemZ::R6W, 
  };

  // ADDR32Bit Bit set.
  const uint8_t ADDR32BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x4a, 0x29, 0xa5, 0x94, 0x02, 
  };

  // FP64Bit Register Class...
  const uint16_t FP64Bit[] = {
    SystemZ::F0D, SystemZ::F1D, SystemZ::F2D, SystemZ::F3D, SystemZ::F4D, SystemZ::F5D, SystemZ::F6D, SystemZ::F7D, SystemZ::F8D, SystemZ::F9D, SystemZ::F10D, SystemZ::F11D, SystemZ::F12D, SystemZ::F13D, SystemZ::F14D, SystemZ::F15D, 
  };

  // FP64Bit Bit set.
  const uint8_t FP64BitBits[] = {
    0x24, 0x95, 0x54, 0x52, 0x49, 0x01, 
  };

  // GR64Bit Register Class...
  const uint16_t GR64Bit[] = {
    SystemZ::R0D, SystemZ::R1D, SystemZ::R2D, SystemZ::R3D, SystemZ::R4D, SystemZ::R5D, SystemZ::R15D, SystemZ::R14D, SystemZ::R13D, SystemZ::R12D, SystemZ::R11D, SystemZ::R10D, SystemZ::R9D, SystemZ::R8D, SystemZ::R7D, SystemZ::R6D, 
  };

  // GR64Bit Bit set.
  const uint8_t GR64BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0xa4, 0x94, 0x52, 0x4a, 0x29, 0x01, 
  };

  // ADDR64Bit Register Class...
  const uint16_t ADDR64Bit[] = {
    SystemZ::R1D, SystemZ::R2D, SystemZ::R3D, SystemZ::R4D, SystemZ::R5D, SystemZ::R15D, SystemZ::R14D, SystemZ::R13D, SystemZ::R12D, SystemZ::R11D, SystemZ::R10D, SystemZ::R9D, SystemZ::R8D, SystemZ::R7D, SystemZ::R6D, 
  };

  // ADDR64Bit Bit set.
  const uint8_t ADDR64BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x94, 0x52, 0x4a, 0x29, 0x01, 
  };

  // FP128Bit Register Class...
  const uint16_t FP128Bit[] = {
    SystemZ::F0Q, SystemZ::F1Q, SystemZ::F4Q, SystemZ::F5Q, SystemZ::F8Q, SystemZ::F9Q, SystemZ::F12Q, SystemZ::F13Q, 
  };

  // FP128Bit Bit set.
  const uint8_t FP128BitBits[] = {
    0x48, 0x20, 0x81, 0x04, 0x12, 
  };

  // GR128Bit Register Class...
  const uint16_t GR128Bit[] = {
    SystemZ::R0Q, SystemZ::R2Q, SystemZ::R4Q, SystemZ::R12Q, SystemZ::R10Q, SystemZ::R8Q, SystemZ::R6Q, SystemZ::R14Q, 
  };

  // GR128Bit Bit set.
  const uint8_t GR128BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x21, 0x84, 0x10, 0x42, 
  };

  // ADDR128Bit Register Class...
  const uint16_t ADDR128Bit[] = {
    SystemZ::R2Q, SystemZ::R4Q, SystemZ::R12Q, SystemZ::R10Q, SystemZ::R8Q, SystemZ::R6Q, SystemZ::R14Q, 
  };

  // ADDR128Bit Bit set.
  const uint8_t ADDR128BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x84, 0x10, 0x42, 
  };

}

extern const MCRegisterClass SystemZMCRegisterClasses[] = {
  { "FP32Bit", FP32Bit, FP32BitBits, 16, sizeof(FP32BitBits), SystemZ::FP32BitRegClassID, 4, 4, 1, 1 },
  { "GR32Bit", GR32Bit, GR32BitBits, 16, sizeof(GR32BitBits), SystemZ::GR32BitRegClassID, 4, 4, 1, 1 },
  { "ADDR32Bit", ADDR32Bit, ADDR32BitBits, 15, sizeof(ADDR32BitBits), SystemZ::ADDR32BitRegClassID, 4, 4, 1, 1 },
  { "FP64Bit", FP64Bit, FP64BitBits, 16, sizeof(FP64BitBits), SystemZ::FP64BitRegClassID, 8, 8, 1, 1 },
  { "GR64Bit", GR64Bit, GR64BitBits, 16, sizeof(GR64BitBits), SystemZ::GR64BitRegClassID, 8, 8, 1, 1 },
  { "ADDR64Bit", ADDR64Bit, ADDR64BitBits, 15, sizeof(ADDR64BitBits), SystemZ::ADDR64BitRegClassID, 8, 8, 1, 1 },
  { "FP128Bit", FP128Bit, FP128BitBits, 8, sizeof(FP128BitBits), SystemZ::FP128BitRegClassID, 16, 16, 1, 1 },
  { "GR128Bit", GR128Bit, GR128BitBits, 8, sizeof(GR128BitBits), SystemZ::GR128BitRegClassID, 16, 16, 1, 1 },
  { "ADDR128Bit", ADDR128Bit, ADDR128BitBits, 7, sizeof(ADDR128BitBits), SystemZ::ADDR128BitRegClassID, 16, 16, 1, 1 },
};

// SystemZ Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair SystemZDwarfFlavour0Dwarf2L[] = {
  { 0U, SystemZ::R0D },
  { 1U, SystemZ::R1D },
  { 2U, SystemZ::R2D },
  { 3U, SystemZ::R3D },
  { 4U, SystemZ::R4D },
  { 5U, SystemZ::R5D },
  { 6U, SystemZ::R6D },
  { 7U, SystemZ::R7D },
  { 8U, SystemZ::R8D },
  { 9U, SystemZ::R9D },
  { 10U, SystemZ::R10D },
  { 11U, SystemZ::R11D },
  { 12U, SystemZ::R12D },
  { 13U, SystemZ::R13D },
  { 14U, SystemZ::R14D },
  { 15U, SystemZ::R15D },
  { 16U, SystemZ::F0D },
  { 17U, SystemZ::F1D },
  { 18U, SystemZ::F2D },
  { 19U, SystemZ::F3D },
  { 20U, SystemZ::F4D },
  { 21U, SystemZ::F5D },
  { 22U, SystemZ::F6D },
  { 23U, SystemZ::F7D },
  { 24U, SystemZ::F8D },
  { 25U, SystemZ::F9D },
  { 26U, SystemZ::F10D },
  { 27U, SystemZ::F11D },
  { 28U, SystemZ::F12D },
  { 29U, SystemZ::F13D },
  { 30U, SystemZ::F14D },
  { 31U, SystemZ::F15D },
};
extern const unsigned SystemZDwarfFlavour0Dwarf2LSize = sizeof(SystemZDwarfFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair SystemZEHFlavour0Dwarf2L[] = {
  { 0U, SystemZ::R0D },
  { 1U, SystemZ::R1D },
  { 2U, SystemZ::R2D },
  { 3U, SystemZ::R3D },
  { 4U, SystemZ::R4D },
  { 5U, SystemZ::R5D },
  { 6U, SystemZ::R6D },
  { 7U, SystemZ::R7D },
  { 8U, SystemZ::R8D },
  { 9U, SystemZ::R9D },
  { 10U, SystemZ::R10D },
  { 11U, SystemZ::R11D },
  { 12U, SystemZ::R12D },
  { 13U, SystemZ::R13D },
  { 14U, SystemZ::R14D },
  { 15U, SystemZ::R15D },
  { 16U, SystemZ::F0D },
  { 17U, SystemZ::F1D },
  { 18U, SystemZ::F2D },
  { 19U, SystemZ::F3D },
  { 20U, SystemZ::F4D },
  { 21U, SystemZ::F5D },
  { 22U, SystemZ::F6D },
  { 23U, SystemZ::F7D },
  { 24U, SystemZ::F8D },
  { 25U, SystemZ::F9D },
  { 26U, SystemZ::F10D },
  { 27U, SystemZ::F11D },
  { 28U, SystemZ::F12D },
  { 29U, SystemZ::F13D },
  { 30U, SystemZ::F14D },
  { 31U, SystemZ::F15D },
};
extern const unsigned SystemZEHFlavour0Dwarf2LSize = sizeof(SystemZEHFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair SystemZDwarfFlavour0L2Dwarf[] = {
  { SystemZ::F0D, 16U },
  { SystemZ::F1D, 17U },
  { SystemZ::F2D, 18U },
  { SystemZ::F3D, 19U },
  { SystemZ::F4D, 20U },
  { SystemZ::F5D, 21U },
  { SystemZ::F6D, 22U },
  { SystemZ::F7D, 23U },
  { SystemZ::F8D, 24U },
  { SystemZ::F9D, 25U },
  { SystemZ::F10D, 26U },
  { SystemZ::F11D, 27U },
  { SystemZ::F12D, 28U },
  { SystemZ::F13D, 29U },
  { SystemZ::F14D, 30U },
  { SystemZ::F15D, 31U },
  { SystemZ::R0D, 0U },
  { SystemZ::R1D, 1U },
  { SystemZ::R2D, 2U },
  { SystemZ::R3D, 3U },
  { SystemZ::R4D, 4U },
  { SystemZ::R5D, 5U },
  { SystemZ::R6D, 6U },
  { SystemZ::R7D, 7U },
  { SystemZ::R8D, 8U },
  { SystemZ::R9D, 9U },
  { SystemZ::R10D, 10U },
  { SystemZ::R11D, 11U },
  { SystemZ::R12D, 12U },
  { SystemZ::R13D, 13U },
  { SystemZ::R14D, 14U },
  { SystemZ::R15D, 15U },
};
extern const unsigned SystemZDwarfFlavour0L2DwarfSize = sizeof(SystemZDwarfFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair SystemZEHFlavour0L2Dwarf[] = {
  { SystemZ::F0D, 16U },
  { SystemZ::F1D, 17U },
  { SystemZ::F2D, 18U },
  { SystemZ::F3D, 19U },
  { SystemZ::F4D, 20U },
  { SystemZ::F5D, 21U },
  { SystemZ::F6D, 22U },
  { SystemZ::F7D, 23U },
  { SystemZ::F8D, 24U },
  { SystemZ::F9D, 25U },
  { SystemZ::F10D, 26U },
  { SystemZ::F11D, 27U },
  { SystemZ::F12D, 28U },
  { SystemZ::F13D, 29U },
  { SystemZ::F14D, 30U },
  { SystemZ::F15D, 31U },
  { SystemZ::R0D, 0U },
  { SystemZ::R1D, 1U },
  { SystemZ::R2D, 2U },
  { SystemZ::R3D, 3U },
  { SystemZ::R4D, 4U },
  { SystemZ::R5D, 5U },
  { SystemZ::R6D, 6U },
  { SystemZ::R7D, 7U },
  { SystemZ::R8D, 8U },
  { SystemZ::R9D, 9U },
  { SystemZ::R10D, 10U },
  { SystemZ::R11D, 11U },
  { SystemZ::R12D, 12U },
  { SystemZ::R13D, 13U },
  { SystemZ::R14D, 14U },
  { SystemZ::R15D, 15U },
};
extern const unsigned SystemZEHFlavour0L2DwarfSize = sizeof(SystemZEHFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const uint16_t SystemZRegEncodingTable[] = {
  0,
  0,
  0,
  0,
  0,
  1,
  1,
  1,
  2,
  2,
  3,
  3,
  4,
  4,
  4,
  5,
  5,
  5,
  6,
  6,
  7,
  7,
  8,
  8,
  8,
  9,
  9,
  9,
  10,
  10,
  11,
  11,
  12,
  12,
  12,
  13,
  13,
  13,
  14,
  14,
  15,
  15,
  0,
  0,
  0,
  1,
  1,
  2,
  2,
  2,
  3,
  3,
  4,
  4,
  4,
  5,
  5,
  6,
  6,
  6,
  7,
  7,
  8,
  8,
  8,
  9,
  9,
  10,
  10,
  10,
  11,
  11,
  12,
  12,
  12,
  13,
  13,
  14,
  14,
  14,
  15,
  15,
};
static inline void InitSystemZMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(SystemZRegDesc, 82, RA, PC, SystemZMCRegisterClasses, 9, SystemZRegUnitRoots, 33, SystemZRegDiffLists, SystemZRegStrings, SystemZSubRegIdxLists, 5,
SystemZSubRegIdxRanges,   SystemZRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(SystemZDwarfFlavour0Dwarf2L, SystemZDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(SystemZEHFlavour0Dwarf2L, SystemZEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(SystemZDwarfFlavour0L2Dwarf, SystemZDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(SystemZEHFlavour0L2Dwarf, SystemZEHFlavour0L2DwarfSize, true);
    break;
  }
}

} // End llvm namespace 
#endif // GET_REGINFO_MC_DESC

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Register Information Header Fragment                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_HEADER
#undef GET_REGINFO_HEADER
#include "llvm/Target/TargetRegisterInfo.h"

namespace llvm {

struct SystemZGenRegisterInfo : public TargetRegisterInfo {
  explicit SystemZGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0, unsigned PC = 0);
  virtual bool needsStackRealignment(const MachineFunction &) const
     { return false; }
  virtual unsigned composeSubRegIndicesImpl(unsigned, unsigned) const;
  virtual const TargetRegisterClass *getSubClassWithSubReg(const TargetRegisterClass*, unsigned) const;
  virtual const RegClassWeight &getRegClassWeight(const TargetRegisterClass *RC) const;
  virtual unsigned getRegUnitWeight(unsigned RegUnit) const;
  virtual unsigned getNumRegPressureSets() const;
  virtual const char *getRegPressureSetName(unsigned Idx) const;
  virtual unsigned getRegPressureSetLimit(unsigned Idx) const;
  virtual const int *getRegClassPressureSets(const TargetRegisterClass *RC) const;
  virtual const int *getRegUnitPressureSets(unsigned RegUnit) const;
};

namespace SystemZ { // Register classes
  extern const TargetRegisterClass FP32BitRegClass;
  extern const TargetRegisterClass GR32BitRegClass;
  extern const TargetRegisterClass ADDR32BitRegClass;
  extern const TargetRegisterClass FP64BitRegClass;
  extern const TargetRegisterClass GR64BitRegClass;
  extern const TargetRegisterClass ADDR64BitRegClass;
  extern const TargetRegisterClass FP128BitRegClass;
  extern const TargetRegisterClass GR128BitRegClass;
  extern const TargetRegisterClass ADDR128BitRegClass;
} // end of namespace SystemZ

} // End llvm namespace 
#endif // GET_REGINFO_HEADER

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Register and Register Classes Information                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_TARGET_DESC
#undef GET_REGINFO_TARGET_DESC
namespace llvm {

extern const MCRegisterClass SystemZMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i32, MVT::Other,
  /* 2 */ MVT::i64, MVT::Other,
  /* 4 */ MVT::f32, MVT::Other,
  /* 6 */ MVT::f64, MVT::Other,
  /* 8 */ MVT::f128, MVT::Other,
  /* 10 */ MVT::Untyped, MVT::Other,
};

static const char *const SubRegIndexNameTable[] = { "subreg_32bit", "subreg_high", "subreg_low", "subreg_low32" };


static const unsigned SubRegIndexLaneMaskTable[] = {
  ~0u,
  0x00000001, // subreg_32bit
  0x00000001, // subreg_high
  0x00000002, // subreg_low
  0x00000002, // subreg_low32
 };



static const TargetRegisterClass *const NullRegClasses[] = { NULL };

static const uint32_t FP32BitSubClassMask[] = {
  0x00000001, 
  0x00000048, // subreg_32bit
  0x00000040, // subreg_low32
};

static const uint32_t GR32BitSubClassMask[] = {
  0x00000006, 
  0x000001b0, // subreg_32bit
  0x00000180, // subreg_low32
};

static const uint32_t ADDR32BitSubClassMask[] = {
  0x00000004, 
  0x00000120, // subreg_32bit
  0x00000180, // subreg_low32
};

static const uint32_t FP64BitSubClassMask[] = {
  0x00000008, 
  0x00000040, // subreg_high
  0x00000040, // subreg_low
};

static const uint32_t GR64BitSubClassMask[] = {
  0x00000030, 
  0x00000180, // subreg_high
  0x00000180, // subreg_low
};

static const uint32_t ADDR64BitSubClassMask[] = {
  0x00000020, 
  0x00000100, // subreg_high
  0x00000180, // subreg_low
};

static const uint32_t FP128BitSubClassMask[] = {
  0x00000040, 
};

static const uint32_t GR128BitSubClassMask[] = {
  0x00000180, 
};

static const uint32_t ADDR128BitSubClassMask[] = {
  0x00000100, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 2, 3, 0,
  /* 3 */ 1, 4, 0,
};

static const TargetRegisterClass *const ADDR32BitSuperclasses[] = {
  &SystemZ::GR32BitRegClass,
  NULL
};

static const TargetRegisterClass *const ADDR64BitSuperclasses[] = {
  &SystemZ::GR64BitRegClass,
  NULL
};

static const TargetRegisterClass *const ADDR128BitSuperclasses[] = {
  &SystemZ::GR128BitRegClass,
  NULL
};

namespace SystemZ {   // Register class instances
  extern const TargetRegisterClass FP32BitRegClass = {
    &SystemZMCRegisterClasses[FP32BitRegClassID],
    VTLists + 4,
    FP32BitSubClassMask,
    SuperRegIdxSeqs + 3,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass GR32BitRegClass = {
    &SystemZMCRegisterClasses[GR32BitRegClassID],
    VTLists + 0,
    GR32BitSubClassMask,
    SuperRegIdxSeqs + 3,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass ADDR32BitRegClass = {
    &SystemZMCRegisterClasses[ADDR32BitRegClassID],
    VTLists + 0,
    ADDR32BitSubClassMask,
    SuperRegIdxSeqs + 3,
    ADDR32BitSuperclasses,
    0
  };

  extern const TargetRegisterClass FP64BitRegClass = {
    &SystemZMCRegisterClasses[FP64BitRegClassID],
    VTLists + 6,
    FP64BitSubClassMask,
    SuperRegIdxSeqs + 0,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass GR64BitRegClass = {
    &SystemZMCRegisterClasses[GR64BitRegClassID],
    VTLists + 2,
    GR64BitSubClassMask,
    SuperRegIdxSeqs + 0,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass ADDR64BitRegClass = {
    &SystemZMCRegisterClasses[ADDR64BitRegClassID],
    VTLists + 2,
    ADDR64BitSubClassMask,
    SuperRegIdxSeqs + 0,
    ADDR64BitSuperclasses,
    0
  };

  extern const TargetRegisterClass FP128BitRegClass = {
    &SystemZMCRegisterClasses[FP128BitRegClassID],
    VTLists + 8,
    FP128BitSubClassMask,
    SuperRegIdxSeqs + 2,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass GR128BitRegClass = {
    &SystemZMCRegisterClasses[GR128BitRegClassID],
    VTLists + 10,
    GR128BitSubClassMask,
    SuperRegIdxSeqs + 2,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass ADDR128BitRegClass = {
    &SystemZMCRegisterClasses[ADDR128BitRegClassID],
    VTLists + 10,
    ADDR128BitSubClassMask,
    SuperRegIdxSeqs + 2,
    ADDR128BitSuperclasses,
    0
  };

}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &SystemZ::FP32BitRegClass,
    &SystemZ::GR32BitRegClass,
    &SystemZ::ADDR32BitRegClass,
    &SystemZ::FP64BitRegClass,
    &SystemZ::GR64BitRegClass,
    &SystemZ::ADDR64BitRegClass,
    &SystemZ::FP128BitRegClass,
    &SystemZ::GR128BitRegClass,
    &SystemZ::ADDR128BitRegClass,
  };
}

static const TargetRegisterInfoDesc SystemZRegInfoDesc[] = { // Extra Descriptors
  { 0, 0 },
  { 0, 0 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
};
unsigned SystemZGenRegisterInfo::composeSubRegIndicesImpl(unsigned IdxA, unsigned IdxB) const {
  static const uint8_t RowMap[4] = {
    0, 0, 1, 0, 
  };
  static const uint8_t Rows[2][4] = {
    { 1, 0, 0, 0, },
    { 4, 0, 0, 0, },
  };

  --IdxA; assert(IdxA < 4);
  --IdxB; assert(IdxB < 4);
  return Rows[RowMap[IdxA]][IdxB];
}

const TargetRegisterClass *SystemZGenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[9][4] = {
    {	// FP32Bit
      0,	// subreg_32bit
      0,	// subreg_high
      0,	// subreg_low
      0,	// subreg_low32
    },
    {	// GR32Bit
      0,	// subreg_32bit
      0,	// subreg_high
      0,	// subreg_low
      0,	// subreg_low32
    },
    {	// ADDR32Bit
      0,	// subreg_32bit
      0,	// subreg_high
      0,	// subreg_low
      0,	// subreg_low32
    },
    {	// FP64Bit
      4,	// subreg_32bit -> FP64Bit
      0,	// subreg_high
      0,	// subreg_low
      0,	// subreg_low32
    },
    {	// GR64Bit
      5,	// subreg_32bit -> GR64Bit
      0,	// subreg_high
      0,	// subreg_low
      0,	// subreg_low32
    },
    {	// ADDR64Bit
      6,	// subreg_32bit -> ADDR64Bit
      0,	// subreg_high
      0,	// subreg_low
      0,	// subreg_low32
    },
    {	// FP128Bit
      7,	// subreg_32bit -> FP128Bit
      7,	// subreg_high -> FP128Bit
      7,	// subreg_low -> FP128Bit
      7,	// subreg_low32 -> FP128Bit
    },
    {	// GR128Bit
      8,	// subreg_32bit -> GR128Bit
      8,	// subreg_high -> GR128Bit
      8,	// subreg_low -> GR128Bit
      8,	// subreg_low32 -> GR128Bit
    },
    {	// ADDR128Bit
      9,	// subreg_32bit -> ADDR128Bit
      9,	// subreg_high -> ADDR128Bit
      9,	// subreg_low -> ADDR128Bit
      9,	// subreg_low32 -> ADDR128Bit
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 4 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : 0;
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &SystemZGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 16},  	// FP32Bit
    {1, 16},  	// GR32Bit
    {1, 15},  	// ADDR32Bit
    {1, 16},  	// FP64Bit
    {1, 16},  	// GR64Bit
    {1, 15},  	// ADDR64Bit
    {2, 16},  	// FP128Bit
    {2, 16},  	// GR128Bit
    {2, 14},  	// ADDR128Bit
    {0, 0} };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned SystemZGenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 33 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned SystemZGenRegisterInfo::getNumRegPressureSets() const {
  return 2;
}

// Get the name of this register unit pressure set.
const char *SystemZGenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *PressureNameTable[] = {
    "FP32Bit",
    "GR32Bit",
    0 };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned SystemZGenRegisterInfo::
getRegPressureSetLimit(unsigned Idx) const {
  static const unsigned PressureLimitTable[] = {
    16,  	// 0: FP32Bit
    16,  	// 1: GR32Bit
    0 };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
    0,  -1,  	// #0 FP32Bit
    1,  -1,  	// #2 GR32Bit
    1,  -1,  	// #4 ADDR32Bit
    0,  -1,  	// #6 FP64Bit
    1,  -1,  	// #8 GR64Bit
    1,  -1,  	// #10 ADDR64Bit
    0,  -1,  	// #12 FP128Bit
    1,  -1,  	// #14 GR128Bit
    1,  -1,  	// #16 ADDR128Bit
    -1,  	// #18 inferred
    -1 };

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* SystemZGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const unsigned RCSetStartTable[] = {
    0,2,4,6,8,10,12,14,16,0 };
  unsigned SetListStart = RCSetStartTable[RC->getID()];
  return &RCSetsTable[SetListStart];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int* SystemZGenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 33 && "invalid register unit");
  static const unsigned RUSetStartTable[] = {
    18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0 };
  unsigned SetListStart = RUSetStartTable[RegUnit];
  return &RCSetsTable[SetListStart];
}

extern const MCRegisterDesc SystemZRegDesc[];
extern const MCPhysReg SystemZRegDiffLists[];
extern const char SystemZRegStrings[];
extern const uint16_t SystemZRegUnitRoots[][2];
extern const uint16_t SystemZSubRegIdxLists[];
extern const MCRegisterInfo::SubRegCoveredBits SystemZSubRegIdxRanges[];
extern const uint16_t SystemZRegEncodingTable[];
// SystemZ Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair SystemZDwarfFlavour0Dwarf2L[];
extern const unsigned SystemZDwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair SystemZEHFlavour0Dwarf2L[];
extern const unsigned SystemZEHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair SystemZDwarfFlavour0L2Dwarf[];
extern const unsigned SystemZDwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair SystemZEHFlavour0L2Dwarf[];
extern const unsigned SystemZEHFlavour0L2DwarfSize;

SystemZGenRegisterInfo::
SystemZGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour, unsigned PC)
  : TargetRegisterInfo(SystemZRegInfoDesc, RegisterClasses, RegisterClasses+9,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable, 0xfffffffc) {
  InitMCRegisterInfo(SystemZRegDesc, 82, RA, PC,
                     SystemZMCRegisterClasses, 9,
                     SystemZRegUnitRoots,
                     33,
                     SystemZRegDiffLists,
                     SystemZRegStrings,
                     SystemZSubRegIdxLists,
                     5,
                     SystemZSubRegIdxRanges,
                     SystemZRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(SystemZDwarfFlavour0Dwarf2L, SystemZDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(SystemZEHFlavour0Dwarf2L, SystemZEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(SystemZDwarfFlavour0L2Dwarf, SystemZDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(SystemZEHFlavour0L2Dwarf, SystemZEHFlavour0L2DwarfSize, true);
    break;
  }
}



} // End llvm namespace 
#endif // GET_REGINFO_TARGET_DESC

