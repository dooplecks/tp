//
// Generated By: dol2asm
// Translation Unit: d_a_tag_lv6CstaSw
//

#include "rel/d/a/tag/d_a_tag_lv6CstaSw/d_a_tag_lv6CstaSw.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct mDoMtx_stack_c {
    static u8 now[48];
};

struct mDoHIO_entry_c {
    /* 80D5B310 */ ~mDoHIO_entry_c();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daLv6CstaSw_c {
    /* 80D5B358 */ void setBaseMtx();
    /* 80D5B3B0 */ void create();
    /* 80D5B410 */ void searchSekizoAct(void*, void*);
    /* 80D5B460 */ void areaCheck();
    /* 80D5B600 */ void Execute();
    /* 80D5B6B0 */ bool Draw();
    /* 80D5B6B8 */ bool Delete();
};

struct daLv6CstaSw_HIO_c {
    /* 80D5B2EC */ daLv6CstaSw_HIO_c();
    /* 80D5B740 */ ~daLv6CstaSw_HIO_c();
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 800352B0 */ void offSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
};

//
// Forward References:
//

extern "C" void __ct__17daLv6CstaSw_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__13daLv6CstaSw_cFv();
extern "C" void create__13daLv6CstaSw_cFv();
extern "C" void searchSekizoAct__13daLv6CstaSw_cFPvPv();
extern "C" void areaCheck__13daLv6CstaSw_cFv();
extern "C" void Execute__13daLv6CstaSw_cFv();
extern "C" bool Draw__13daLv6CstaSw_cFv();
extern "C" bool Delete__13daLv6CstaSw_cFv();
extern "C" static void daLv6CstaSw_Draw__FP13daLv6CstaSw_c();
extern "C" static void daLv6CstaSw_Execute__FP13daLv6CstaSw_c();
extern "C" static void daLv6CstaSw_Delete__FP13daLv6CstaSw_c();
extern "C" static void daLv6CstaSw_Create__FP10fopAc_ac_c();
extern "C" void __dt__17daLv6CstaSw_HIO_cFv();
extern "C" void __sinit_d_a_tag_lv6CstaSw_cpp();

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __dl__FPv();
extern "C" void PSMTXTrans();
extern "C" void PSVECSquareMag();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u32 __float_nan;
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80D5B810-80D5B830 -00001 0020+00 1/0 0/0 0/0 .data            l_daLv6CstaSw_Method */
SECTION_DATA static void* l_daLv6CstaSw_Method[8] = {
    (void*)daLv6CstaSw_Create__FP10fopAc_ac_c,
    (void*)daLv6CstaSw_Delete__FP13daLv6CstaSw_c,
    (void*)daLv6CstaSw_Execute__FP13daLv6CstaSw_c,
    (void*)NULL,
    (void*)daLv6CstaSw_Draw__FP13daLv6CstaSw_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D5B830-80D5B860 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Tag_Lv6CstaSw */
SECTION_DATA extern void* g_profile_Tag_Lv6CstaSw[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01910000, (void*)&g_fpcLf_Method,
    (void*)0x00000570, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02920000, (void*)&l_daLv6CstaSw_Method,
    (void*)0x00044000, (void*)0x000E0000,
};

/* 80D5B860-80D5B86C 000050 000C+00 2/2 0/0 0/0 .data            __vt__17daLv6CstaSw_HIO_c */
SECTION_DATA extern void* __vt__17daLv6CstaSw_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17daLv6CstaSw_HIO_cFv,
};

/* 80D5B86C-80D5B878 00005C 000C+00 3/3 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80D5B2EC-80D5B310 0000EC 0024+00 1/1 0/0 0/0 .text            __ct__17daLv6CstaSw_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daLv6CstaSw_HIO_c::daLv6CstaSw_HIO_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lv6CstaSw/d_a_tag_lv6CstaSw/__ct__17daLv6CstaSw_HIO_cFv.s"
}
#pragma pop

/* 80D5B310-80D5B358 000110 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lv6CstaSw/d_a_tag_lv6CstaSw/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 80D5B358-80D5B3B0 000158 0058+00 1/1 0/0 0/0 .text            setBaseMtx__13daLv6CstaSw_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6CstaSw_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lv6CstaSw/d_a_tag_lv6CstaSw/setBaseMtx__13daLv6CstaSw_cFv.s"
}
#pragma pop

/* 80D5B3B0-80D5B410 0001B0 0060+00 1/1 0/0 0/0 .text            create__13daLv6CstaSw_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6CstaSw_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lv6CstaSw/d_a_tag_lv6CstaSw/create__13daLv6CstaSw_cFv.s"
}
#pragma pop

/* 80D5B410-80D5B460 000210 0050+00 1/1 0/0 0/0 .text searchSekizoAct__13daLv6CstaSw_cFPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6CstaSw_c::searchSekizoAct(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lv6CstaSw/d_a_tag_lv6CstaSw/searchSekizoAct__13daLv6CstaSw_cFPvPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D5B7EC-80D5B7F4 000000 0004+04 1/1 0/0 0/0 .rodata          @3724 */
SECTION_RODATA static u8 const lit_3724[4 + 4 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80D5B7EC, &lit_3724);

/* 80D5B7F4-80D5B7FC 000008 0008+00 0/1 0/0 0/0 .rodata          @3725 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3725[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D5B7F4, &lit_3725);
#pragma pop

/* 80D5B7FC-80D5B804 000010 0008+00 0/1 0/0 0/0 .rodata          @3726 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3726[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D5B7FC, &lit_3726);
#pragma pop

/* 80D5B804-80D5B80C 000018 0008+00 0/1 0/0 0/0 .rodata          @3727 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3727[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D5B804, &lit_3727);
#pragma pop

/* 80D5B80C-80D5B810 000020 0004+00 0/1 0/0 0/0 .rodata          @3728 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3728 = 100.0f;
COMPILER_STRIP_GATE(0x80D5B80C, &lit_3728);
#pragma pop

/* 80D5B460-80D5B600 000260 01A0+00 1/1 0/0 0/0 .text            areaCheck__13daLv6CstaSw_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6CstaSw_c::areaCheck() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lv6CstaSw/d_a_tag_lv6CstaSw/areaCheck__13daLv6CstaSw_cFv.s"
}
#pragma pop

/* 80D5B600-80D5B6B0 000400 00B0+00 1/1 0/0 0/0 .text            Execute__13daLv6CstaSw_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6CstaSw_c::Execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lv6CstaSw/d_a_tag_lv6CstaSw/Execute__13daLv6CstaSw_cFv.s"
}
#pragma pop

/* 80D5B6B0-80D5B6B8 0004B0 0008+00 1/1 0/0 0/0 .text            Draw__13daLv6CstaSw_cFv */
bool daLv6CstaSw_c::Draw() {
    return true;
}

/* 80D5B6B8-80D5B6C0 0004B8 0008+00 1/1 0/0 0/0 .text            Delete__13daLv6CstaSw_cFv */
bool daLv6CstaSw_c::Delete() {
    return true;
}

/* 80D5B6C0-80D5B6E0 0004C0 0020+00 1/0 0/0 0/0 .text            daLv6CstaSw_Draw__FP13daLv6CstaSw_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daLv6CstaSw_Draw(daLv6CstaSw_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lv6CstaSw/d_a_tag_lv6CstaSw/daLv6CstaSw_Draw__FP13daLv6CstaSw_c.s"
}
#pragma pop

/* 80D5B6E0-80D5B700 0004E0 0020+00 1/0 0/0 0/0 .text daLv6CstaSw_Execute__FP13daLv6CstaSw_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daLv6CstaSw_Execute(daLv6CstaSw_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lv6CstaSw/d_a_tag_lv6CstaSw/daLv6CstaSw_Execute__FP13daLv6CstaSw_c.s"
}
#pragma pop

/* 80D5B700-80D5B720 000500 0020+00 1/0 0/0 0/0 .text daLv6CstaSw_Delete__FP13daLv6CstaSw_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daLv6CstaSw_Delete(daLv6CstaSw_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lv6CstaSw/d_a_tag_lv6CstaSw/daLv6CstaSw_Delete__FP13daLv6CstaSw_c.s"
}
#pragma pop

/* 80D5B720-80D5B740 000520 0020+00 1/0 0/0 0/0 .text            daLv6CstaSw_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daLv6CstaSw_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lv6CstaSw/d_a_tag_lv6CstaSw/daLv6CstaSw_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D5B740-80D5B79C 000540 005C+00 2/1 0/0 0/0 .text            __dt__17daLv6CstaSw_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daLv6CstaSw_HIO_c::~daLv6CstaSw_HIO_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lv6CstaSw/d_a_tag_lv6CstaSw/__dt__17daLv6CstaSw_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D5B880-80D5B88C 000008 000C+00 1/1 0/0 0/0 .bss             @3619 */
static u8 lit_3619[12];

/* 80D5B88C-80D5B894 000014 0008+00 1/1 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[8];

/* 80D5B79C-80D5B7D8 00059C 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_tag_lv6CstaSw_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_tag_lv6CstaSw_cpp() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lv6CstaSw/d_a_tag_lv6CstaSw/__sinit_d_a_tag_lv6CstaSw_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80D5B79C, __sinit_d_a_tag_lv6CstaSw_cpp);
#pragma pop