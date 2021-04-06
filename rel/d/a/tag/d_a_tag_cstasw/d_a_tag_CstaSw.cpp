//
// Generated By: dol2asm
// Translation Unit: d_a_tag_CstaSw
//

#include "rel/d/a/tag/d_a_tag_cstasw/d_a_tag_CstaSw.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct mDoHIO_entry_c {
    /* 805A2050 */ ~mDoHIO_entry_c();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daTagCstaSw_c {
    /* 805A2098 */ void setBaseMtx();
    /* 805A20F0 */ void create();
    /* 805A2150 */ void searchSekizoAct(void*, void*);
    /* 805A21A0 */ void areaCheck();
    /* 805A2340 */ void Execute();
    /* 805A23F0 */ bool Draw();
    /* 805A23F8 */ bool Delete();
};

struct daTagCstaSw_HIO_c {
    /* 805A202C */ daTagCstaSw_HIO_c();
    /* 805A2480 */ ~daTagCstaSw_HIO_c();
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

extern "C" void __ct__17daTagCstaSw_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__13daTagCstaSw_cFv();
extern "C" void create__13daTagCstaSw_cFv();
extern "C" void searchSekizoAct__13daTagCstaSw_cFPvPv();
extern "C" void areaCheck__13daTagCstaSw_cFv();
extern "C" void Execute__13daTagCstaSw_cFv();
extern "C" bool Draw__13daTagCstaSw_cFv();
extern "C" bool Delete__13daTagCstaSw_cFv();
extern "C" static void daTagCstaSw_Draw__FP13daTagCstaSw_c();
extern "C" static void daTagCstaSw_Execute__FP13daTagCstaSw_c();
extern "C" static void daTagCstaSw_Delete__FP13daTagCstaSw_c();
extern "C" static void daTagCstaSw_Create__FP10fopAc_ac_c();
extern "C" void __dt__17daTagCstaSw_HIO_cFv();
extern "C" void __sinit_d_a_tag_CstaSw_cpp();

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
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u32 __float_nan;
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 805A2550-805A2570 -00001 0020+00 1/0 0/0 0/0 .data            l_daTagCstaSw_Method */
SECTION_DATA static void* l_daTagCstaSw_Method[8] = {
    (void*)daTagCstaSw_Create__FP10fopAc_ac_c,
    (void*)daTagCstaSw_Delete__FP13daTagCstaSw_c,
    (void*)daTagCstaSw_Execute__FP13daTagCstaSw_c,
    (void*)NULL,
    (void*)daTagCstaSw_Draw__FP13daTagCstaSw_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 805A2570-805A25A0 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Tag_CstaSw */
SECTION_DATA extern void* g_profile_Tag_CstaSw[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01900000, (void*)&g_fpcLf_Method,
    (void*)0x00000570, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02910000, (void*)&l_daTagCstaSw_Method,
    (void*)0x00044000, (void*)0x000E0000,
};

/* 805A25A0-805A25AC 000050 000C+00 2/2 0/0 0/0 .data            __vt__17daTagCstaSw_HIO_c */
SECTION_DATA extern void* __vt__17daTagCstaSw_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17daTagCstaSw_HIO_cFv,
};

/* 805A25AC-805A25B8 00005C 000C+00 3/3 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 805A202C-805A2050 0000EC 0024+00 1/1 0/0 0/0 .text            __ct__17daTagCstaSw_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTagCstaSw_HIO_c::daTagCstaSw_HIO_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_cstasw/d_a_tag_CstaSw/__ct__17daTagCstaSw_HIO_cFv.s"
}
#pragma pop

/* 805A2050-805A2098 000110 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_cstasw/d_a_tag_CstaSw/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 805A2098-805A20F0 000158 0058+00 1/1 0/0 0/0 .text            setBaseMtx__13daTagCstaSw_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagCstaSw_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_cstasw/d_a_tag_CstaSw/setBaseMtx__13daTagCstaSw_cFv.s"
}
#pragma pop

/* 805A20F0-805A2150 0001B0 0060+00 1/1 0/0 0/0 .text            create__13daTagCstaSw_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagCstaSw_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_cstasw/d_a_tag_CstaSw/create__13daTagCstaSw_cFv.s"
}
#pragma pop

/* 805A2150-805A21A0 000210 0050+00 1/1 0/0 0/0 .text searchSekizoAct__13daTagCstaSw_cFPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagCstaSw_c::searchSekizoAct(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_cstasw/d_a_tag_CstaSw/searchSekizoAct__13daTagCstaSw_cFPvPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805A252C-805A2534 000000 0004+04 1/1 0/0 0/0 .rodata          @3724 */
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
SECTION_DEAD void* const cg_805A252C = (void*)(&lit_3724);

/* 805A2534-805A253C 000008 0008+00 0/1 0/0 0/0 .rodata          @3725 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3725[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_805A2534 = (void*)(&lit_3725);
#pragma pop

/* 805A253C-805A2544 000010 0008+00 0/1 0/0 0/0 .rodata          @3726 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3726[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_805A253C = (void*)(&lit_3726);
#pragma pop

/* 805A2544-805A254C 000018 0008+00 0/1 0/0 0/0 .rodata          @3727 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3727[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_805A2544 = (void*)(&lit_3727);
#pragma pop

/* 805A254C-805A2550 000020 0004+00 0/1 0/0 0/0 .rodata          @3728 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3728 = 0x42C80000;
SECTION_DEAD void* const cg_805A254C = (void*)(&lit_3728);
#pragma pop

/* 805A21A0-805A2340 000260 01A0+00 1/1 0/0 0/0 .text            areaCheck__13daTagCstaSw_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagCstaSw_c::areaCheck() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_cstasw/d_a_tag_CstaSw/areaCheck__13daTagCstaSw_cFv.s"
}
#pragma pop

/* 805A2340-805A23F0 000400 00B0+00 1/1 0/0 0/0 .text            Execute__13daTagCstaSw_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagCstaSw_c::Execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_cstasw/d_a_tag_CstaSw/Execute__13daTagCstaSw_cFv.s"
}
#pragma pop

/* 805A23F0-805A23F8 0004B0 0008+00 1/1 0/0 0/0 .text            Draw__13daTagCstaSw_cFv */
bool daTagCstaSw_c::Draw() {
    return true;
}

/* 805A23F8-805A2400 0004B8 0008+00 1/1 0/0 0/0 .text            Delete__13daTagCstaSw_cFv */
bool daTagCstaSw_c::Delete() {
    return true;
}

/* 805A2400-805A2420 0004C0 0020+00 1/0 0/0 0/0 .text            daTagCstaSw_Draw__FP13daTagCstaSw_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagCstaSw_Draw(daTagCstaSw_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_cstasw/d_a_tag_CstaSw/daTagCstaSw_Draw__FP13daTagCstaSw_c.s"
}
#pragma pop

/* 805A2420-805A2440 0004E0 0020+00 1/0 0/0 0/0 .text daTagCstaSw_Execute__FP13daTagCstaSw_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagCstaSw_Execute(daTagCstaSw_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_cstasw/d_a_tag_CstaSw/daTagCstaSw_Execute__FP13daTagCstaSw_c.s"
}
#pragma pop

/* 805A2440-805A2460 000500 0020+00 1/0 0/0 0/0 .text daTagCstaSw_Delete__FP13daTagCstaSw_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagCstaSw_Delete(daTagCstaSw_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_cstasw/d_a_tag_CstaSw/daTagCstaSw_Delete__FP13daTagCstaSw_c.s"
}
#pragma pop

/* 805A2460-805A2480 000520 0020+00 1/0 0/0 0/0 .text            daTagCstaSw_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagCstaSw_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_cstasw/d_a_tag_CstaSw/daTagCstaSw_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 805A2480-805A24DC 000540 005C+00 2/1 0/0 0/0 .text            __dt__17daTagCstaSw_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTagCstaSw_HIO_c::~daTagCstaSw_HIO_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_cstasw/d_a_tag_CstaSw/__dt__17daTagCstaSw_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805A25C0-805A25CC 000008 000C+00 1/1 0/0 0/0 .bss             @3619 */
static u8 lit_3619[12];

/* 805A25CC-805A25D4 000014 0008+00 1/1 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[8];

/* 805A24DC-805A2518 00059C 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_tag_CstaSw_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_tag_CstaSw_cpp() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_cstasw/d_a_tag_CstaSw/__sinit_d_a_tag_CstaSw_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_805A24DC = (void*)__sinit_d_a_tag_CstaSw_cpp;
#pragma pop
