//
// Generated By: dol2asm
// Translation Unit: J3DUClipper
//

#include "JSystem/J3DU/J3DUClipper.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct Vec {};

struct J3DUClipper {
    /* 80273778 */ void init();
    /* 8027378C */ void calcViewFrustum();
    /* 802738FC */ void clip(f32 const (*)[4], Vec, f32) const;
    /* 80273A44 */ void clip(f32 const (*)[4], Vec*, Vec*) const;
};

//
// Forward References:
//

extern "C" void init__11J3DUClipperFv();
extern "C" void calcViewFrustum__11J3DUClipperFv();
extern "C" void clip__11J3DUClipperCFPA4_Cf3Vecf();
extern "C" void clip__11J3DUClipperCFPA4_CfP3VecP3Vec();
extern "C" extern char const* const J3DUClipper__stringBase0;

//
// External References:
//

extern "C" void PSMTXMultVec();
extern "C" void PSVECNormalize();
extern "C" void PSVECCrossProduct();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" void tan();

//
// Declarations:
//

/* ############################################################################################## */
/* 80455278-8045527C 003878 0004+00 1/1 0/0 0/0 .sdata2          @893 */
SECTION_SDATA2 static f32 lit_893 = 1.0f;

/* 8045527C-80455280 00387C 0004+00 1/1 0/0 0/0 .sdata2          @894 */
SECTION_SDATA2 static f32 lit_894 = 100000.0f;

/* 80273778-8027378C 26E0B8 0014+00 0/0 1/1 0/0 .text            init__11J3DUClipperFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DUClipper::init() {
    nofralloc
#include "asm/JSystem/J3DU/J3DUClipper/init__11J3DUClipperFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039A948-8039A954 026FA8 000C+00 1/1 0/0 0/0 .rodata          @898 */
SECTION_RODATA static u8 const lit_898[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_8039A948 = (void*)(&lit_898);

/* 8039A954-8039A960 026FB4 000C+00 0/1 0/0 0/0 .rodata          @899 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_899[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_8039A954 = (void*)(&lit_899);
#pragma pop

/* 8039A960-8039A96C 026FC0 000C+00 0/1 0/0 0/0 .rodata          @900 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_900[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_8039A960 = (void*)(&lit_900);
#pragma pop

/* 8039A96C-8039A978 026FCC 000C+00 0/1 0/0 0/0 .rodata          @901 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_901[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_8039A96C = (void*)(&lit_901);
#pragma pop

/* 8039A978-8039A984 026FD8 000C+00 0/1 0/0 0/0 .rodata          @902 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_902[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_8039A978 = (void*)(&lit_902);
#pragma pop

/* 80455280-80455284 003880 0004+00 1/1 0/0 0/0 .sdata2          @913 */
SECTION_SDATA2 static f32 lit_913 = 0.01745329238474369f;

/* 80455284-80455288 003884 0004+00 1/1 0/0 0/0 .sdata2          @914 */
SECTION_SDATA2 static f32 lit_914 = 0.5f;

/* 8027378C-802738FC 26E0CC 0170+00 0/0 3/3 4/4 .text            calcViewFrustum__11J3DUClipperFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DUClipper::calcViewFrustum() {
    nofralloc
#include "asm/JSystem/J3DU/J3DUClipper/calcViewFrustum__11J3DUClipperFv.s"
}
#pragma pop

/* 802738FC-80273A44 26E23C 0148+00 0/0 3/3 2/2 .text            clip__11J3DUClipperCFPA4_Cf3Vecf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DUClipper::clip(f32 const (*param_0)[4], Vec param_1, f32 param_2) const {
    nofralloc
#include "asm/JSystem/J3DU/J3DUClipper/clip__11J3DUClipperCFPA4_Cf3Vecf.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455288-80455290 003888 0004+04 1/1 0/0 0/0 .sdata2          @991 */
SECTION_SDATA2 static f32 lit_991[1 + 1 /* padding */] = {
    0.0f,
    /* padding */
    0.0f,
};

/* 80273A44-80273E08 26E384 03C4+00 0/0 3/3 2/2 .text clip__11J3DUClipperCFPA4_CfP3VecP3Vec */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DUClipper::clip(f32 const (*param_0)[4], Vec* param_1, Vec* param_2) const {
    nofralloc
#include "asm/JSystem/J3DU/J3DUClipper/clip__11J3DUClipperCFPA4_CfP3VecP3Vec.s"
}
#pragma pop

/* 8039A984-8039A9F0 026FE4 0065+07 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_8039A984 = " J3DUClipper::mFovy = %f";
SECTION_DEAD static char const* const stringBase_8039A99D = " J3DUClipper::mAspect = %f";
SECTION_DEAD static char const* const stringBase_8039A9B8 = " J3DUClipper::mNear = %f";
SECTION_DEAD static char const* const stringBase_8039A9D1 = " J3DUClipper::mFar = %f";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_8039A9E9 = "\0\0\0\0\0\0";
#pragma pop
