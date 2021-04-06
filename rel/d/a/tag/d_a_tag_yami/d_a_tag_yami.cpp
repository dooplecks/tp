//
// Generated By: dol2asm
// Translation Unit: d_a_tag_yami
//

#include "rel/d/a/tag/d_a_tag_yami/d_a_tag_yami.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct csXyz {
    /* 802673F4 */ csXyz(s16, s16, s16);
};

struct mDoMtx_stack_c {
    /* 8000CF0C */ void ZXYrotS(csXyz const&);
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct Vec {};

struct cXyz {
    /* 80266AE4 */ void operator+(Vec const&) const;
    /* 80266B34 */ void operator-(Vec const&) const;
};

struct daTagYami_c {
    /* 80D659F8 */ void create();
    /* 80D65C24 */ void Execute();
    /* 80D65C60 */ void calcCoC(cXyz&);
    /* 80D65D08 */ void col_set();
    /* 80D65D0C */ void chk_CoHit();
    /* 80D65D60 */ void getPlDist();
    /* 80D65EEC */ void onMidnaTagSw();
    /* 80D65F24 */ void offMidnaTagSw2();
    /* 80D66100 */ void setCoC(cXyz);
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 800352B0 */ void offSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dSv_event_c {
    /* 800349BC */ void isEventBit(u16) const;
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80D6611C */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct cM3dGCyl {
    /* 80D66178 */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 80D661C0 */ ~cM3dGAab();
};

struct cCcD_GStts {
    /* 80D660B8 */ ~cCcD_GStts();
};

//
// Forward References:
//

extern "C" void create__11daTagYami_cFv();
extern "C" void Execute__11daTagYami_cFv();
extern "C" void calcCoC__11daTagYami_cFR4cXyz();
extern "C" void col_set__11daTagYami_cFv();
extern "C" void chk_CoHit__11daTagYami_cFv();
extern "C" void getPlDist__11daTagYami_cFv();
extern "C" void onMidnaTagSw__11daTagYami_cFv();
extern "C" void offMidnaTagSw2__11daTagYami_cFv();
extern "C" static void daTagYami_Create__FP10fopAc_ac_c();
extern "C" static void daTagYami_Execute__FP10fopAc_ac_c();
extern "C" static void daTagYami_Delete__FP11daTagYami_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void setCoC__11daTagYami_cF4cXyz();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();

//
// External References:
//

extern "C" void ZXYrotS__14mDoMtx_stack_cFRC5csXyz();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ct__5csXyzFsss();
extern "C" void __dl__FPv();
extern "C" void PSMTXMultVec();
extern "C" void PSVECSquareMag();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u32 __float_nan;

//
// Declarations:
//

/* ############################################################################################## */
/* 80D66210-80D66254 000000 0044+00 2/2 0/0 0/0 .rodata          l_sph_src */
SECTION_RODATA static u8 const l_sph_src[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80D66210 = (void*)(&l_sph_src);

/* 80D66254-80D66258 000044 0004+00 0/1 0/0 0/0 .rodata          @3726 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3726 = 0x442F0000;
SECTION_DEAD void* const cg_80D66254 = (void*)(&lit_3726);
#pragma pop

/* 80D66258-80D6625C 000048 0004+00 0/1 0/0 0/0 .rodata          @3727 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3727 = 0x43960000;
SECTION_DEAD void* const cg_80D66258 = (void*)(&lit_3727);
#pragma pop

/* 80D66280-80D662A0 -00001 0020+00 1/0 0/0 0/0 .data            l_daTagYami_Method */
SECTION_DATA static void* l_daTagYami_Method[8] = {
    (void*)daTagYami_Create__FP10fopAc_ac_c,
    (void*)daTagYami_Delete__FP11daTagYami_c,
    (void*)daTagYami_Execute__FP10fopAc_ac_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D662A0-80D662D0 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_TAG_YAMI */
SECTION_DATA extern void* g_profile_TAG_YAMI[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00230000, (void*)&g_fpcLf_Method,
    (void*)0x00000704, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00150000, (void*)&l_daTagYami_Method,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 80D662D0-80D662DC 000050 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80D662DC-80D662E8 00005C 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80D662E8-80D662F4 000068 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80D662F4-80D66300 000074 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80D659F8-80D65C24 000078 022C+00 1/1 0/0 0/0 .text            create__11daTagYami_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagYami_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_yami/d_a_tag_yami/create__11daTagYami_cFv.s"
}
#pragma pop

/* 80D65C24-80D65C60 0002A4 003C+00 1/1 0/0 0/0 .text            Execute__11daTagYami_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagYami_c::Execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_yami/d_a_tag_yami/Execute__11daTagYami_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D6625C-80D66260 00004C 0004+00 1/2 0/0 0/0 .rodata          @3820 */
SECTION_RODATA static u8 const lit_3820[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
SECTION_DEAD void* const cg_80D6625C = (void*)(&lit_3820);

/* 80D66260-80D66268 000050 0004+04 1/1 0/0 0/0 .rodata          @3821 */
SECTION_RODATA static u32 const lit_3821[1 + 1 /* padding */] = {
    0x43D70000,
    /* padding */
    0x00000000,
};
SECTION_DEAD void* const cg_80D66260 = (void*)(&lit_3821);

/* 80D65C60-80D65D08 0002E0 00A8+00 1/1 0/0 0/0 .text            calcCoC__11daTagYami_cFR4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagYami_c::calcCoC(cXyz& param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_yami/d_a_tag_yami/calcCoC__11daTagYami_cFR4cXyz.s"
}
#pragma pop

/* 80D65D08-80D65D0C 000388 0004+00 1/1 0/0 0/0 .text            col_set__11daTagYami_cFv */
void daTagYami_c::col_set() {
    /* empty function */
}

/* 80D65D0C-80D65D60 00038C 0054+00 1/1 0/0 0/0 .text            chk_CoHit__11daTagYami_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagYami_c::chk_CoHit() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_yami/d_a_tag_yami/chk_CoHit__11daTagYami_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D66268-80D66270 000058 0008+00 0/1 0/0 0/0 .rodata          @3889 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3889[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80D66268 = (void*)(&lit_3889);
#pragma pop

/* 80D66270-80D66278 000060 0008+00 0/1 0/0 0/0 .rodata          @3890 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3890[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80D66270 = (void*)(&lit_3890);
#pragma pop

/* 80D66278-80D66280 000068 0008+00 0/1 0/0 0/0 .rodata          @3891 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3891[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80D66278 = (void*)(&lit_3891);
#pragma pop

/* 80D65D60-80D65EEC 0003E0 018C+00 1/1 0/0 0/0 .text            getPlDist__11daTagYami_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagYami_c::getPlDist() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_yami/d_a_tag_yami/getPlDist__11daTagYami_cFv.s"
}
#pragma pop

/* 80D65EEC-80D65F24 00056C 0038+00 0/0 0/0 1/1 .text            onMidnaTagSw__11daTagYami_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagYami_c::onMidnaTagSw() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_yami/d_a_tag_yami/onMidnaTagSw__11daTagYami_cFv.s"
}
#pragma pop

/* 80D65F24-80D65F5C 0005A4 0038+00 0/0 0/0 1/1 .text            offMidnaTagSw2__11daTagYami_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagYami_c::offMidnaTagSw2() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_yami/d_a_tag_yami/offMidnaTagSw2__11daTagYami_cFv.s"
}
#pragma pop

/* 80D65F5C-80D65F7C 0005DC 0020+00 1/0 0/0 0/0 .text            daTagYami_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagYami_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_yami/d_a_tag_yami/daTagYami_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D65F7C-80D65F9C 0005FC 0020+00 1/0 0/0 0/0 .text            daTagYami_Execute__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagYami_Execute(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_yami/d_a_tag_yami/daTagYami_Execute__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D65F9C-80D660B8 00061C 011C+00 1/0 0/0 0/0 .text            daTagYami_Delete__FP11daTagYami_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagYami_Delete(daTagYami_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_yami/d_a_tag_yami/daTagYami_Delete__FP11daTagYami_c.s"
}
#pragma pop

/* 80D660B8-80D66100 000738 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_yami/d_a_tag_yami/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80D66100-80D6611C 000780 001C+00 1/1 0/0 0/0 .text            setCoC__11daTagYami_cF4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagYami_c::setCoC(cXyz param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_yami/d_a_tag_yami/setCoC__11daTagYami_cF4cXyz.s"
}
#pragma pop

/* 80D6611C-80D66178 00079C 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_yami/d_a_tag_yami/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80D66178-80D661C0 0007F8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_yami/d_a_tag_yami/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80D661C0-80D66208 000840 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_yami/d_a_tag_yami/__dt__8cM3dGAabFv.s"
}
#pragma pop
