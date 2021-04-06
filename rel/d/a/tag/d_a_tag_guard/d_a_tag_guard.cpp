//
// Generated By: dol2asm
// Translation Unit: d_a_tag_guard
//

#include "rel/d/a/tag/d_a_tag_guard/d_a_tag_guard.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct Vec {};

struct daTagGuard_c {
    /* 80D597F8 */ void getAppearPoint(Vec*);
    /* 80D5985C */ void createGuard(u32);
};

struct dPath {};

struct csXyz {};

struct cXyz {};

//
// Forward References:
//

extern "C" void getAppearPoint__12daTagGuard_cFP3Vec();
extern "C" void createGuard__12daTagGuard_cFUl();
extern "C" static void daTagGuard_Create__FP10fopAc_ac_c();
extern "C" static void daTagGuard_Delete__FP12daTagGuard_c();
extern "C" extern void* g_profile_TAG_GUARD[12];

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_createChild__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i();
extern "C" void dPath_GetPnt__FPC5dPathi();
extern "C" void dPath_GetRoomPath__Fii();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];

//
// Declarations:
//

/* 80D597F8-80D5985C 000078 0064+00 0/0 0/0 1/1 .text getAppearPoint__12daTagGuard_cFP3Vec */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagGuard_c::getAppearPoint(Vec* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_guard/d_a_tag_guard/getAppearPoint__12daTagGuard_cFP3Vec.s"
}
#pragma pop

/* 80D5985C-80D59928 0000DC 00CC+00 0/0 0/0 1/1 .text            createGuard__12daTagGuard_cFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagGuard_c::createGuard(u32 param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_guard/d_a_tag_guard/createGuard__12daTagGuard_cFUl.s"
}
#pragma pop

/* 80D59928-80D599E0 0001A8 00B8+00 1/0 0/0 0/0 .text            daTagGuard_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagGuard_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_guard/d_a_tag_guard/daTagGuard_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D599E0-80D59A10 000260 0030+00 1/0 0/0 0/0 .text            daTagGuard_Delete__FP12daTagGuard_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagGuard_Delete(daTagGuard_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_guard/d_a_tag_guard/daTagGuard_Delete__FP12daTagGuard_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D59A18-80D59A38 -00001 0020+00 1/0 0/0 0/0 .data            l_daTagGuard_Method */
SECTION_DATA static void* l_daTagGuard_Method[8] = {
    (void*)daTagGuard_Create__FP10fopAc_ac_c,
    (void*)daTagGuard_Delete__FP12daTagGuard_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D59A38-80D59A68 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_TAG_GUARD */
SECTION_DATA extern void* g_profile_TAG_GUARD[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02960000, (void*)&g_fpcLf_Method,
    (void*)0x0000056C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01980000, (void*)&l_daTagGuard_Method,
    (void*)0x00040000, (void*)0x000E0000,
};
