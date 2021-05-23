//
// Generated By: dol2asm
// Translation Unit: Math/Double_precision/e_exp
//

#include "MSL_C.PPCEABI.bare.H/Math/Double_precision/e_exp.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __ieee754_exp();

//
// External References:
//

//
// Declarations:
//

/* ############################################################################################## */
/* 803A2340-803A2350 02E9A0 0010+00 1/1 0/0 0/0 .rodata          halF */
SECTION_RODATA static u8 const halF[16] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xBF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x803A2340, &halF);

/* 803A2350-803A2360 02E9B0 0010+00 0/1 0/0 0/0 .rodata          ln2HI */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const ln2HI[16] = {
    0x3F, 0xE6, 0x2E, 0x42, 0xFE, 0xE0, 0x00, 0x00, 0xBF, 0xE6, 0x2E, 0x42, 0xFE, 0xE0, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x803A2350, &ln2HI);
#pragma pop

/* 803A2360-803A2370 02E9C0 0010+00 0/1 0/0 0/0 .rodata          ln2LO */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const ln2LO[16] = {
    0x3D, 0xEA, 0x39, 0xEF, 0x35, 0x79, 0x3C, 0x76, 0xBD, 0xEA, 0x39, 0xEF, 0x35, 0x79, 0x3C, 0x76,
};
COMPILER_STRIP_GATE(0x803A2360, &ln2LO);
#pragma pop

/* 804567E0-804567E8 004DE0 0008+00 1/1 0/0 0/0 .sdata2          @115 */
SECTION_SDATA2 static u8 lit_115[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 804567E8-804567F0 004DE8 0008+00 1/1 0/0 0/0 .sdata2          @116 */
SECTION_SDATA2 static f64 lit_116 = 709.782712893384;

/* 804567F0-804567F8 004DF0 0008+00 1/1 0/0 0/0 .sdata2          @117 */
SECTION_SDATA2 static f64 lit_117 = DOUBLE_INF;

/* 804567F8-80456800 004DF8 0008+00 1/1 0/0 0/0 .sdata2          @118 */
SECTION_SDATA2 static f64 lit_118 = -745.1332191019411;

/* 80456800-80456808 004E00 0008+00 1/1 0/0 0/0 .sdata2          @119 */
SECTION_SDATA2 static f64 lit_119 = 1.4426950408889634;

/* 80456808-80456810 004E08 0008+00 1/1 0/0 0/0 .sdata2          @120 */
SECTION_SDATA2 static f64 lit_120 = 1e+300;

/* 80456810-80456818 004E10 0008+00 1/1 0/0 0/0 .sdata2          @121 */
SECTION_SDATA2 static f64 lit_121 = 1.0;

/* 80456818-80456820 004E18 0008+00 1/1 0/0 0/0 .sdata2          @122 */
SECTION_SDATA2 static f64 lit_122 = 0.16666666666666602;

/* 80456820-80456828 004E20 0008+00 1/1 0/0 0/0 .sdata2          @123 */
SECTION_SDATA2 static f64 lit_123 = -0.0027777777777015593;

/* 80456828-80456830 004E28 0008+00 1/1 0/0 0/0 .sdata2          @124 */
SECTION_SDATA2 static f64 lit_124 = 6.613756321437934e-05;

/* 80456830-80456838 004E30 0008+00 1/1 0/0 0/0 .sdata2          @125 */
SECTION_SDATA2 static f64 lit_125 = -1.6533902205465252e-06;

/* 80456838-80456840 004E38 0008+00 1/1 0/0 0/0 .sdata2          @126 */
SECTION_SDATA2 static f64 lit_126 = 4.1381367970572385e-08;

/* 80456840-80456848 004E40 0008+00 1/1 0/0 0/0 .sdata2          @127 */
SECTION_SDATA2 static f64 lit_127 = 2.0;

/* 80456848-80456850 004E48 0008+00 1/1 0/0 0/0 .sdata2          @128 */
SECTION_SDATA2 static f64 lit_128 = 9.332636185032189e-302;

/* 80456850-80456858 004E50 0008+00 1/1 0/0 0/0 .sdata2          @131 */
SECTION_SDATA2 static f64 lit_131 = 4503601774854144.0 /* cast s32 to float */;

/* 80369978-80369B9C 3642B8 0224+00 0/0 1/1 0/0 .text            __ieee754_exp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __ieee754_exp() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/Math/Double_precision/e_exp/__ieee754_exp.s"
}
#pragma pop