// 
// Generated By: dol2asm
// Translation Unit: d_a_tag_escape
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/tag/d_a_tag_escape/d_a_tag_escape.h"

// 
// Types:
// 

struct fopAc_ac_c {
	/* 80018B64 */ // False False
fopAc_ac_c();
	/* 80018C8C */ // False False
~fopAc_ac_c();
};

struct daTagEscape_c {
};

// 
// Forward References:
// 

// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
static void daTagEscape_Create(fopAc_ac_c*);
// True False
//  daTagEscape_c* False
// 	 daTagEscape_c False
static void daTagEscape_Delete(daTagEscape_c*);

// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" static void daTagEscape_Create__FP10fopAc_ac_c();
// True False
//  daTagEscape_c* False
// 	 daTagEscape_c False
extern "C" static void daTagEscape_Delete__FP13daTagEscape_c();
extern "C" extern void* g_profile_Tag_Escape[12];

// 
// External References:
// 


// False False
extern "C" void __ct__10fopAc_ac_cFv();
// False False
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];

// 
// Declarations:
// 

/* 80D587D8-80D58828 0050+00 s=1 e=0 z=0  None .text      daTagEscape_Create__FP10fopAc_ac_c                           */
//	80D58800: 80018B64 (__ct__10fopAc_ac_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
asm static void daTagEscape_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_escape/d_a_tag_escape/daTagEscape_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80D58828-80D58858 0030+00 s=1 e=0 z=0  None .text      daTagEscape_Delete__FP13daTagEscape_c                        */
//	80D58840: 80018C8C (__dt__10fopAc_ac_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daTagEscape_c* False
// 	 daTagEscape_c False
asm static void daTagEscape_Delete(daTagEscape_c* param_0) {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_escape/d_a_tag_escape/daTagEscape_Delete__FP13daTagEscape_c.s"
}
#pragma pop


/* ############################################################################################## */
/* 80D58860-80D58880 0020+00 s=1 e=0 z=0  None .data      l_daTagEscape_Method                                         */
SECTION_DATA static void* l_daTagEscape_Method[8] = {
	(void*)daTagEscape_Create__FP10fopAc_ac_c,
	(void*)daTagEscape_Delete__FP13daTagEscape_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80D58880-80D588B0 0030+00 s=0 e=0 z=1  None .data      g_profile_Tag_Escape                                         */
SECTION_DATA void* g_profile_Tag_Escape[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0007FFFD,
	(void*)0x028A0000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000568,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x018D0000,
	(void*)&l_daTagEscape_Method,
	(void*)0x00040000,
	(void*)0x000E0000,
};

