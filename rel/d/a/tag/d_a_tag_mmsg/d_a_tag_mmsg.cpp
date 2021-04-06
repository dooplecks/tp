//
// Generated By: dol2asm
// Translation Unit: d_a_tag_mmsg
//

#include "rel/d/a/tag/d_a_tag_mmsg/d_a_tag_mmsg.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daTagMmsg_c {
    /* 80D5B918 */ void create();
    /* 80D5BAB4 */ ~daTagMmsg_c();
    /* 80D5BB30 */ void execute();
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dSv_event_c {
    /* 800349BC */ void isEventBit(u16) const;
};

//
// Forward References:
//

extern "C" void create__11daTagMmsg_cFv();
extern "C" static void daTagMmsg_Create__FP10fopAc_ac_c();
extern "C" void __dt__11daTagMmsg_cFv();
extern "C" static void daTagMmsg_Delete__FP11daTagMmsg_c();
extern "C" void execute__11daTagMmsg_cFv();
extern "C" static void daTagMmsg_Execute__FP11daTagMmsg_c();
extern "C" static bool daTagMmsg_Draw__FP11daTagMmsg_c();
extern "C" extern void* g_profile_Tag_Mmsg[12];

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ2__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void dComIfGp_getRoomCamera__Fi();
extern "C" void dComIfGp_getRoomArrow__Fi();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void __dl__FPv();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 m_midnaActor__9daPy_py_c[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80D5BD38-80D5BD3C 000000 0004+00 1/1 0/0 0/0 .rodata          @3702 */
SECTION_RODATA static u32 const lit_3702 = 0x41200000;
SECTION_DEAD void* const cg_80D5BD38 = (void*)(&lit_3702);

/* 80D5BD3C-80D5BD40 000004 0004+00 0/1 0/0 0/0 .rodata          @3703 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3703 = 0x461C4000;
SECTION_DEAD void* const cg_80D5BD3C = (void*)(&lit_3703);
#pragma pop

/* 80D5BD40-80D5BD44 000008 0004+00 0/1 0/0 0/0 .rodata          @3704 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3704 = 0x42C80000;
SECTION_DEAD void* const cg_80D5BD40 = (void*)(&lit_3704);
#pragma pop

/* 80D5B918-80D5BA94 000078 017C+00 1/1 0/0 0/0 .text            create__11daTagMmsg_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagMmsg_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_mmsg/d_a_tag_mmsg/create__11daTagMmsg_cFv.s"
}
#pragma pop

/* 80D5BA94-80D5BAB4 0001F4 0020+00 1/0 0/0 0/0 .text            daTagMmsg_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagMmsg_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_mmsg/d_a_tag_mmsg/daTagMmsg_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D5BAB4-80D5BB08 000214 0054+00 1/1 0/0 0/0 .text            __dt__11daTagMmsg_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTagMmsg_c::~daTagMmsg_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_mmsg/d_a_tag_mmsg/__dt__11daTagMmsg_cFv.s"
}
#pragma pop

/* 80D5BB08-80D5BB30 000268 0028+00 1/0 0/0 0/0 .text            daTagMmsg_Delete__FP11daTagMmsg_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagMmsg_Delete(daTagMmsg_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_mmsg/d_a_tag_mmsg/daTagMmsg_Delete__FP11daTagMmsg_c.s"
}
#pragma pop

/* 80D5BB30-80D5BD08 000290 01D8+00 1/1 0/0 0/0 .text            execute__11daTagMmsg_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagMmsg_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_mmsg/d_a_tag_mmsg/execute__11daTagMmsg_cFv.s"
}
#pragma pop

/* 80D5BD08-80D5BD28 000468 0020+00 1/0 0/0 0/0 .text            daTagMmsg_Execute__FP11daTagMmsg_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagMmsg_Execute(daTagMmsg_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_mmsg/d_a_tag_mmsg/daTagMmsg_Execute__FP11daTagMmsg_c.s"
}
#pragma pop

/* 80D5BD28-80D5BD30 000488 0008+00 1/0 0/0 0/0 .text            daTagMmsg_Draw__FP11daTagMmsg_c */
static bool daTagMmsg_Draw(daTagMmsg_c* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80D5BD44-80D5BD64 -00001 0020+00 1/0 0/0 0/0 .data            l_daTagMmsg_Method */
SECTION_DATA static void* l_daTagMmsg_Method[8] = {
    (void*)daTagMmsg_Create__FP10fopAc_ac_c,
    (void*)daTagMmsg_Delete__FP11daTagMmsg_c,
    (void*)daTagMmsg_Execute__FP11daTagMmsg_c,
    (void*)NULL,
    (void*)daTagMmsg_Draw__FP11daTagMmsg_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D5BD64-80D5BD94 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Tag_Mmsg */
SECTION_DATA extern void* g_profile_Tag_Mmsg[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02C20000, (void*)&g_fpcLf_Method,
    (void*)0x0000057C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00FF0000, (void*)&l_daTagMmsg_Method,
    (void*)0x00044000, (void*)0x030E0000,
};
