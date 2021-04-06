//
// Generated By: dol2asm
// Translation Unit: m_Do/m_Do_mtx
//

#include "m_Do/m_Do_mtx.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct csXyz {};

struct Quaternion {};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
    /* 80266CBC */ void outprod(Vec const&) const;
    /* 80266EF4 */ void normalize();
    /* 80266FDC */ void normalizeRS();
};

struct mDoMtx_stack_c {
    /* 8000CCC8 */ void push();
    /* 8000CD14 */ void pop();
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CDD4 */ void transM(cXyz const&);
    /* 8000CD9C */ void transM(f32, f32, f32);
    /* 8000CE00 */ void scaleS(cXyz const&);
    /* 8000CE70 */ void scaleM(cXyz const&);
    /* 8000CE38 */ void scaleM(f32, f32, f32);
    /* 8000CE9C */ void XYZrotS(csXyz const&);
    /* 8000CED4 */ void XYZrotM(csXyz const&);
    /* 8000CF0C */ void ZXYrotS(csXyz const&);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);
    /* 8000CF7C */ void quatM(Quaternion const*);
    /* 8000D070 */ ~mDoMtx_stack_c();
};

struct mDoMtx_quatStack_c {
    /* 8000D034 */ ~mDoMtx_quatStack_c();
};

//
// Forward References:
//

extern "C" static void mDoMtx_XYZrotS__FPA4_fsss();
extern "C" void mDoMtx_XYZrotM__FPA4_fsss();
extern "C" void mDoMtx_ZXYrotS__FPA4_fsss();
extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoMtx_XrotS__FPA4_fs();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotS__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void mDoMtx_lookAt__FPA4_fPC3VecPC3Vecs();
extern "C" void mDoMtx_lookAt__FPA4_fPC3VecPC3VecPC3Vecs();
extern "C" void mDoMtx_concatProjView__FPA4_CfPA4_CfPA4_f();
extern "C" void mDoMtx_inverseTranspose__FPA4_CfPA4_f();
extern "C" void mDoMtx_QuatConcat__FPC10QuaternionPC10QuaternionP10Quaternion();
extern "C" void mDoMtx_MtxToRot__FPA4_CfP5csXyz();
extern "C" void push__14mDoMtx_stack_cFv();
extern "C" void pop__14mDoMtx_stack_cFv();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void transM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void scaleS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void XYZrotS__14mDoMtx_stack_cFRC5csXyz();
extern "C" void XYZrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void ZXYrotS__14mDoMtx_stack_cFRC5csXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void quatM__14mDoMtx_stack_cFPC10Quaternion();
extern "C" void __sinit_m_Do_mtx_cpp();
extern "C" void __dt__18mDoMtx_quatStack_cFv();
extern "C" void __dt__14mDoMtx_stack_cFv();
extern "C" extern u8 g_mDoMtx_identity[48 + 24 /* padding */];

//
// External References:
//

extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void outprod__4cXyzCFRC3Vec();
extern "C" void normalize__4cXyzFv();
extern "C" void normalizeRS__4cXyzFv();
extern "C" void cM_atan2s__Fff();
extern "C" void __dl__FPv();
extern "C" void PSMTXIdentity();
extern "C" void PSMTXCopy();
extern "C" void PSMTXConcat();
extern "C" void PSMTXTrans();
extern "C" void PSMTXScale();
extern "C" void PSMTXQuat();
extern "C" void C_MTXLookAt();
extern "C" void PSVECDotProduct();
extern "C" void __register_global_object();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u32 __float_epsilon;
extern "C" extern f32 G_CM3D_F_ABS_MIN[1 + 1 /* padding */];

//
// Declarations:
//

/* 8000C0CC-8000C164 006A0C 0098+00 1/1 0/0 0/0 .text            mDoMtx_XYZrotS__FPA4_fsss */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void mDoMtx_XYZrotS(f32 (*param_0)[4], s16 param_1, s16 param_2, s16 param_3) {
    nofralloc
#include "asm/m_Do/m_Do_mtx/mDoMtx_XYZrotS__FPA4_fsss.s"
}
#pragma pop

/* 8000C164-8000C208 006AA4 00A4+00 1/1 8/8 13/13 .text            mDoMtx_XYZrotM__FPA4_fsss */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_XYZrotM(f32 (*param_0)[4], s16 param_1, s16 param_2, s16 param_3) {
    nofralloc
#include "asm/m_Do/m_Do_mtx/mDoMtx_XYZrotM__FPA4_fsss.s"
}
#pragma pop

/* 8000C208-8000C2A0 006B48 0098+00 1/1 10/10 37/37 .text            mDoMtx_ZXYrotS__FPA4_fsss */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_ZXYrotS(f32 (*param_0)[4], s16 param_1, s16 param_2, s16 param_3) {
    nofralloc
#include "asm/m_Do/m_Do_mtx/mDoMtx_ZXYrotS__FPA4_fsss.s"
}
#pragma pop

/* 8000C2A0-8000C344 006BE0 00A4+00 1/1 19/19 149/149 .text            mDoMtx_ZXYrotM__FPA4_fsss */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_ZXYrotM(f32 (*param_0)[4], s16 param_1, s16 param_2, s16 param_3) {
    nofralloc
#include "asm/m_Do/m_Do_mtx/mDoMtx_ZXYrotM__FPA4_fsss.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451B08-80451B0C 000108 0004+00 6/6 0/0 0/0 .sdata2          @3676 */
SECTION_SDATA2 static f32 lit_3676 = 1.0f;

/* 80451B0C-80451B10 00010C 0004+00 7/7 0/0 0/0 .sdata2          @3677 */
SECTION_SDATA2 static u8 lit_3677[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8000C344-8000C39C 006C84 0058+00 5/5 7/7 38/38 .text            mDoMtx_XrotS__FPA4_fs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_XrotS(f32 (*param_0)[4], s16 param_1) {
    nofralloc
#include "asm/m_Do/m_Do_mtx/mDoMtx_XrotS__FPA4_fs.s"
}
#pragma pop

/* 8000C39C-8000C3DC 006CDC 0040+00 0/0 11/11 425/425 .text            mDoMtx_XrotM__FPA4_fs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_XrotM(f32 (*param_0)[4], s16 param_1) {
    nofralloc
#include "asm/m_Do/m_Do_mtx/mDoMtx_XrotM__FPA4_fs.s"
}
#pragma pop

/* 8000C3DC-8000C434 006D1C 0058+00 5/5 24/24 809/809 .text            mDoMtx_YrotS__FPA4_fs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_YrotS(f32 (*param_0)[4], s16 param_1) {
    nofralloc
#include "asm/m_Do/m_Do_mtx/mDoMtx_YrotS__FPA4_fs.s"
}
#pragma pop

/* 8000C434-8000C474 006D74 0040+00 0/0 44/44 775/775 .text            mDoMtx_YrotM__FPA4_fs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_YrotM(f32 (*param_0)[4], s16 param_1) {
    nofralloc
#include "asm/m_Do/m_Do_mtx/mDoMtx_YrotM__FPA4_fs.s"
}
#pragma pop

/* 8000C474-8000C4CC 006DB4 0058+00 7/7 1/1 6/6 .text            mDoMtx_ZrotS__FPA4_fs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_ZrotS(f32 (*param_0)[4], s16 param_1) {
    nofralloc
#include "asm/m_Do/m_Do_mtx/mDoMtx_ZrotS__FPA4_fs.s"
}
#pragma pop

/* 8000C4CC-8000C50C 006E0C 0040+00 0/0 9/9 302/302 .text            mDoMtx_ZrotM__FPA4_fs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_ZrotM(f32 (*param_0)[4], s16 param_1) {
    nofralloc
#include "asm/m_Do/m_Do_mtx/mDoMtx_ZrotM__FPA4_fs.s"
}
#pragma pop

/* 8000C50C-8000C710 006E4C 0204+00 0/0 3/3 0/0 .text            mDoMtx_lookAt__FPA4_fPC3VecPC3Vecs
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_lookAt(f32 (*param_0)[4], Vec const* param_1, Vec const* param_2, s16 param_3) {
    nofralloc
#include "asm/m_Do/m_Do_mtx/mDoMtx_lookAt__FPA4_fPC3VecPC3Vecs.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451B10-80451B18 000110 0004+04 1/1 0/0 0/0 .sdata2          @3840 */
SECTION_SDATA2 static f32 lit_3840[1 + 1 /* padding */] = {
    32.0f,
    /* padding */
    0.0f,
};

/* 8000C710-8000C8D0 007050 01C0+00 0/0 10/10 1/1 .text mDoMtx_lookAt__FPA4_fPC3VecPC3VecPC3Vecs
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_lookAt(f32 (*param_0)[4], Vec const* param_1, Vec const* param_2,
                       Vec const* param_3, s16 param_4) {
    nofralloc
#include "asm/m_Do/m_Do_mtx/mDoMtx_lookAt__FPA4_fPC3VecPC3VecPC3Vecs.s"
}
#pragma pop

/* 8000C8D0-8000C9B0 007210 00E0+00 0/0 2/2 0/0 .text mDoMtx_concatProjView__FPA4_CfPA4_CfPA4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_concatProjView(f32 const (*param_0)[4], f32 const (*param_1)[4],
                               f32 (*param_2)[4]) {
    nofralloc
#include "asm/m_Do/m_Do_mtx/mDoMtx_concatProjView__FPA4_CfPA4_CfPA4_f.s"
}
#pragma pop

/* 8000C9B0-8000CB5C 0072F0 01AC+00 0/0 1/1 1/1 .text mDoMtx_inverseTranspose__FPA4_CfPA4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_inverseTranspose(f32 const (*param_0)[4], f32 (*param_1)[4]) {
    nofralloc
#include "asm/m_Do/m_Do_mtx/mDoMtx_inverseTranspose__FPA4_CfPA4_f.s"
}
#pragma pop

/* 8000CB5C-8000CC00 00749C 00A4+00 0/0 2/2 2/2 .text
 * mDoMtx_QuatConcat__FPC10QuaternionPC10QuaternionP10Quaternion */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_QuatConcat(Quaternion const* param_0, Quaternion const* param_1,
                           Quaternion* param_2) {
    nofralloc
#include "asm/m_Do/m_Do_mtx/mDoMtx_QuatConcat__FPC10QuaternionPC10QuaternionP10Quaternion.s"
}
#pragma pop

/* 8000CC00-8000CCC8 007540 00C8+00 0/0 11/11 26/26 .text            mDoMtx_MtxToRot__FPA4_CfP5csXyz
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_MtxToRot(f32 const (*param_0)[4], csXyz* param_1) {
    nofralloc
#include "asm/m_Do/m_Do_mtx/mDoMtx_MtxToRot__FPA4_CfP5csXyz.s"
}
#pragma pop

/* ############################################################################################## */
/* 803DD470-803DD4A0 00A190 0030+00 12/12 142/142 1820/1820 .bss             now__14mDoMtx_stack_c
 */
extern u8 now__14mDoMtx_stack_c[48];
u8 now__14mDoMtx_stack_c[48];

/* 803DD4A0-803DD7A0 00A1C0 0300+00 2/2 0/0 0/0 .bss             buffer__14mDoMtx_stack_c */
static u8 buffer__14mDoMtx_stack_c[768];

/* 803DD7A0-803DD7AC 00A4C0 000C+00 1/1 0/0 0/0 .bss             @4048 */
static u8 lit_4048[12];

/* 804505A8-804505AC -00001 0004+00 3/3 0/0 0/0 .sdata           next__14mDoMtx_stack_c */
SECTION_SDATA static void* next__14mDoMtx_stack_c = (void*)&buffer__14mDoMtx_stack_c;

/* 804505AC-804505B0 -00001 0004+00 2/2 0/0 0/0 .sdata           end__14mDoMtx_stack_c */
SECTION_SDATA static void* end__14mDoMtx_stack_c = (void*)&lit_4048;

/* 8000CCC8-8000CD14 007608 004C+00 0/0 0/0 24/24 .text            push__14mDoMtx_stack_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_stack_c::push() {
    nofralloc
#include "asm/m_Do/m_Do_mtx/push__14mDoMtx_stack_cFv.s"
}
#pragma pop

/* 8000CD14-8000CD64 007654 0050+00 0/0 0/0 24/24 .text            pop__14mDoMtx_stack_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_stack_c::pop() {
    nofralloc
#include "asm/m_Do/m_Do_mtx/pop__14mDoMtx_stack_cFv.s"
}
#pragma pop

/* 8000CD64-8000CD9C 0076A4 0038+00 0/0 50/50 484/484 .text transS__14mDoMtx_stack_cFRC4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_stack_c::transS(cXyz const& param_0) {
    nofralloc
#include "asm/m_Do/m_Do_mtx/transS__14mDoMtx_stack_cFRC4cXyz.s"
}
#pragma pop

/* 8000CD9C-8000CDD4 0076DC 0038+00 1/1 29/29 285/285 .text            transM__14mDoMtx_stack_cFfff
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_stack_c::transM(f32 param_0, f32 param_1, f32 param_2) {
    nofralloc
#include "asm/m_Do/m_Do_mtx/transM__14mDoMtx_stack_cFfff.s"
}
#pragma pop

/* 8000CDD4-8000CE00 007714 002C+00 0/0 3/3 40/40 .text            transM__14mDoMtx_stack_cFRC4cXyz
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_stack_c::transM(cXyz const& param_0) {
    nofralloc
#include "asm/m_Do/m_Do_mtx/transM__14mDoMtx_stack_cFRC4cXyz.s"
}
#pragma pop

/* 8000CE00-8000CE38 007740 0038+00 0/0 0/0 2/2 .text            scaleS__14mDoMtx_stack_cFRC4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_stack_c::scaleS(cXyz const& param_0) {
    nofralloc
#include "asm/m_Do/m_Do_mtx/scaleS__14mDoMtx_stack_cFRC4cXyz.s"
}
#pragma pop

/* 8000CE38-8000CE70 007778 0038+00 1/1 13/13 219/219 .text            scaleM__14mDoMtx_stack_cFfff
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_stack_c::scaleM(f32 param_0, f32 param_1, f32 param_2) {
    nofralloc
#include "asm/m_Do/m_Do_mtx/scaleM__14mDoMtx_stack_cFfff.s"
}
#pragma pop

/* 8000CE70-8000CE9C 0077B0 002C+00 0/0 7/7 79/79 .text            scaleM__14mDoMtx_stack_cFRC4cXyz
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_stack_c::scaleM(cXyz const& param_0) {
    nofralloc
#include "asm/m_Do/m_Do_mtx/scaleM__14mDoMtx_stack_cFRC4cXyz.s"
}
#pragma pop

/* 8000CE9C-8000CED4 0077DC 0038+00 0/0 3/3 0/0 .text            XYZrotS__14mDoMtx_stack_cFRC5csXyz
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_stack_c::XYZrotS(csXyz const& param_0) {
    nofralloc
#include "asm/m_Do/m_Do_mtx/XYZrotS__14mDoMtx_stack_cFRC5csXyz.s"
}
#pragma pop

/* 8000CED4-8000CF0C 007814 0038+00 0/0 1/1 4/4 .text            XYZrotM__14mDoMtx_stack_cFRC5csXyz
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_stack_c::XYZrotM(csXyz const& param_0) {
    nofralloc
#include "asm/m_Do/m_Do_mtx/XYZrotM__14mDoMtx_stack_cFRC5csXyz.s"
}
#pragma pop

/* 8000CF0C-8000CF44 00784C 0038+00 0/0 5/5 43/43 .text ZXYrotS__14mDoMtx_stack_cFRC5csXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_stack_c::ZXYrotS(csXyz const& param_0) {
    nofralloc
#include "asm/m_Do/m_Do_mtx/ZXYrotS__14mDoMtx_stack_cFRC5csXyz.s"
}
#pragma pop

/* 8000CF44-8000CF7C 007884 0038+00 0/0 24/24 250/250 .text ZXYrotM__14mDoMtx_stack_cFRC5csXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_stack_c::ZXYrotM(csXyz const& param_0) {
    nofralloc
#include "asm/m_Do/m_Do_mtx/ZXYrotM__14mDoMtx_stack_cFRC5csXyz.s"
}
#pragma pop

/* 8000CF7C-8000CFB8 0078BC 003C+00 0/0 1/1 6/6 .text quatM__14mDoMtx_stack_cFPC10Quaternion */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_stack_c::quatM(Quaternion const* param_0) {
    nofralloc
#include "asm/m_Do/m_Do_mtx/quatM__14mDoMtx_stack_cFPC10Quaternion.s"
}
#pragma pop

/* ############################################################################################## */
/* 803DD7AC-803DD7B8 00A4CC 000C+00 0/1 0/0 0/0 .bss             @4078 */
#pragma push
#pragma force_active on
static u8 lit_4078[12];
#pragma pop

/* 803DD7B8-803DD8D8 00A4D8 011C+04 0/1 0/0 0/0 .bss             mDoMtx_quatStack */
#pragma push
#pragma force_active on
static u8 mDoMtx_quatStack[284 + 4 /* padding */];
#pragma pop

/* 80450C18-80450C20 000118 0001+07 1/1 0/0 0/0 .sbss            mDoMtx_stack */
static u8 mDoMtx_stack[1 + 7 /* padding */];

/* 8000CFB8-8000D034 0078F8 007C+00 0/0 1/0 0/0 .text            __sinit_m_Do_mtx_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_m_Do_mtx_cpp() {
    nofralloc
#include "asm/m_Do/m_Do_mtx/__sinit_m_Do_mtx_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_8000CFB8 = (void*)__sinit_m_Do_mtx_cpp;
#pragma pop

/* 8000D034-8000D070 007974 003C+00 1/1 0/0 0/0 .text            __dt__18mDoMtx_quatStack_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoMtx_quatStack_c::~mDoMtx_quatStack_c() {
    nofralloc
#include "asm/m_Do/m_Do_mtx/__dt__18mDoMtx_quatStack_cFv.s"
}
#pragma pop

/* 8000D070-8000D0AC 0079B0 003C+00 1/1 0/0 0/0 .text            __dt__14mDoMtx_stack_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoMtx_stack_c::~mDoMtx_stack_c() {
    nofralloc
#include "asm/m_Do/m_Do_mtx/__dt__14mDoMtx_stack_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A2FD8-803A3020 0000F8 0030+18 0/0 23/23 4/4 .data            g_mDoMtx_identity */
SECTION_DATA extern u8 g_mDoMtx_identity[48 + 24 /* padding */] = {
    0x3F,
    0x80,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x3F,
    0x80,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x3F,
    0x80,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
};
