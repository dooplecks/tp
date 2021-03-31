// 
// Generated By: dol2asm
// Translation Unit: d_a_tag_assistance
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/tag/d_a_tag_assistance/d_a_tag_assistance.h"

// 
// Types:
// 

struct fopAc_ac_c {
	/* 80018B64 */ // False False
fopAc_ac_c();
	/* 80018C8C */ // False False
~fopAc_ac_c();
};

struct daTagAssist_c {
};

// 
// Forward References:
// 

// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
static void daTagAssist_Create(fopAc_ac_c*);
// True False
//  daTagAssist_c* False
// 	 daTagAssist_c False
static void daTagAssist_Execute(daTagAssist_c*);
// True False
//  bool False
//  daTagAssist_c* False
// 	 daTagAssist_c False
static bool daTagAssist_IsDelete(daTagAssist_c*);
// True False
//  daTagAssist_c* False
// 	 daTagAssist_c False
static void daTagAssist_Delete(daTagAssist_c*);

// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" static void daTagAssist_Create__FP10fopAc_ac_c();
// True False
//  daTagAssist_c* False
// 	 daTagAssist_c False
extern "C" static void daTagAssist_Execute__FP13daTagAssist_c();
// True False
//  bool False
//  daTagAssist_c* False
// 	 daTagAssist_c False
extern "C" static bool daTagAssist_IsDelete__FP13daTagAssist_c();
// True False
//  daTagAssist_c* False
// 	 daTagAssist_c False
extern "C" static void daTagAssist_Delete__FP13daTagAssist_c();
extern "C" extern void* g_profile_Tag_Assist[12];

// 
// External References:
// 

// False False
//  fopAc_ac_c const* False
// 	 fopAc_ac_c const False
// 		 fopAc_ac_c False
//  fopAc_ac_c const* False
// 	 fopAc_ac_c const False
// 		 fopAc_ac_c False
void fopAcM_searchActorDistanceXZ(fopAc_ac_c const*, fopAc_ac_c const*);

// False False
extern "C" void __ct__10fopAc_ac_cFv();
// False False
extern "C" void __dt__10fopAc_ac_cFv();
// False False
//  fopAc_ac_c const* False
// 	 fopAc_ac_c const False
// 		 fopAc_ac_c False
//  fopAc_ac_c const* False
// 	 fopAc_ac_c const False
// 		 fopAc_ac_c False
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

// 
// Declarations:
// 

/* 80D55E38-80D55E98 0060+00 s=1 e=0 z=0  None .text      daTagAssist_Create__FP10fopAc_ac_c                           */
//	80D55E60: 80018B64 (__ct__10fopAc_ac_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
asm static void daTagAssist_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_assistance/d_a_tag_assistance/daTagAssist_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80D55E98-80D55EC8 0030+00 s=1 e=0 z=0  None .text      daTagAssist_Execute__FP13daTagAssist_c                       */
//	80D55EA4: 804061C0 (g_dComIfG_gameInfo)
//	80D55EA8: 804061C0 (g_dComIfG_gameInfo)
//	80D55EB0: 8001A964 (fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daTagAssist_c* False
// 	 daTagAssist_c False
asm static void daTagAssist_Execute(daTagAssist_c* param_0) {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_assistance/d_a_tag_assistance/daTagAssist_Execute__FP13daTagAssist_c.s"
}
#pragma pop


/* 80D55EC8-80D55ED0 0008+00 s=1 e=0 z=0  None .text      daTagAssist_IsDelete__FP13daTagAssist_c                      */
// True False
//  bool False
//  daTagAssist_c* False
// 	 daTagAssist_c False
static bool daTagAssist_IsDelete(daTagAssist_c* param_0) {
	return true;
}


/* 80D55ED0-80D55F00 0030+00 s=1 e=0 z=0  None .text      daTagAssist_Delete__FP13daTagAssist_c                        */
//	80D55EE8: 80018C8C (__dt__10fopAc_ac_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daTagAssist_c* False
// 	 daTagAssist_c False
asm static void daTagAssist_Delete(daTagAssist_c* param_0) {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_assistance/d_a_tag_assistance/daTagAssist_Delete__FP13daTagAssist_c.s"
}
#pragma pop


/* ############################################################################################## */
/* 80D55F08-80D55F28 0020+00 s=1 e=0 z=0  None .data      l_daTagAssist_Method                                         */
SECTION_DATA static void* l_daTagAssist_Method[8] = {
	(void*)daTagAssist_Create__FP10fopAc_ac_c,
	(void*)daTagAssist_Delete__FP13daTagAssist_c,
	(void*)daTagAssist_Execute__FP13daTagAssist_c,
	(void*)daTagAssist_IsDelete__FP13daTagAssist_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80D55F28-80D55F58 0030+00 s=0 e=0 z=1  None .data      g_profile_Tag_Assist                                         */
SECTION_DATA void* g_profile_Tag_Assist[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0007FFFD,
	(void*)0x02CD0000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000574,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x010A0000,
	(void*)&l_daTagAssist_Method,
	(void*)0x00040000,
	(void*)0x000E0000,
};

