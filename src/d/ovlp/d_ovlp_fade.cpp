// 
// Generated By: dol2asm
// Translation Unit: d/ovlp/d_ovlp_fade
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "d/ovlp/d_ovlp_fade.h"

// 
// Types:
// 

struct overlap_task_class {
};

struct overlap1_class {
};

struct JUTFader {
	struct EStatus {
	};

	/* 802E57D0 */ // False False
//  JUTFader::EStatus False
//  int False
void setStatus(JUTFader::EStatus, int);
};

// 
// Forward References:
// 

// True False
//  bool False
//  overlap1_class* False
// 	 overlap1_class False
static bool dOvlpFd_Draw(overlap1_class*);
// True False
//  int False
static void dOvlpFd_startFadeIn(int);
// True False
//  overlap1_class* False
// 	 overlap1_class False
static void dOvlpFd_FadeOut(overlap1_class*);
// True False
//  overlap1_class* False
// 	 overlap1_class False
static void dOvlpFd_Wait(overlap1_class*);
// True False
//  overlap1_class* False
// 	 overlap1_class False
static void dOvlpFd_FadeIn(overlap1_class*);
// True False
//  overlap1_class* False
// 	 overlap1_class False
static void dOvlpFd_Execute(overlap1_class*);
// True False
//  bool False
//  overlap1_class* False
// 	 overlap1_class False
static bool dOvlpFd_IsDelete(overlap1_class*);
// True False
//  bool False
//  overlap1_class* False
// 	 overlap1_class False
static bool dOvlpFd_Delete(overlap1_class*);
// True False
//  void* False
// 	 void False
static void dOvlpFd_Create(void*);

// True False
//  bool False
//  overlap1_class* False
// 	 overlap1_class False
extern "C" static bool dOvlpFd_Draw__FP14overlap1_class();
// True False
//  int False
extern "C" static void dOvlpFd_startFadeIn__Fi();
// True False
//  overlap1_class* False
// 	 overlap1_class False
extern "C" static void dOvlpFd_FadeOut__FP14overlap1_class();
// True False
//  overlap1_class* False
// 	 overlap1_class False
extern "C" static void dOvlpFd_Wait__FP14overlap1_class();
// True False
//  overlap1_class* False
// 	 overlap1_class False
extern "C" static void dOvlpFd_FadeIn__FP14overlap1_class();
// True False
//  overlap1_class* False
// 	 overlap1_class False
extern "C" static void dOvlpFd_Execute__FP14overlap1_class();
// True False
//  bool False
//  overlap1_class* False
// 	 overlap1_class False
extern "C" static bool dOvlpFd_IsDelete__FP14overlap1_class();
// True False
//  bool False
//  overlap1_class* False
// 	 overlap1_class False
extern "C" static bool dOvlpFd_Delete__FP14overlap1_class();
// True False
//  void* False
// 	 void False
extern "C" static void dOvlpFd_Create__FPv();
extern "C" extern void* g_profile_OVERLAP0[10];
extern "C" extern void* g_profile_OVERLAP1[10];
extern "C" extern void* g_profile_OVERLAP6[10];
extern "C" extern void* g_profile_OVERLAP7[10];
extern "C" extern void* g_profile_OVERLAP8[10];
extern "C" extern void* g_profile_OVERLAP9[10];
extern "C" extern void* g_profile_OVERLAP10[10];
extern "C" extern void* g_profile_OVERLAP11[10 + 1 /* padding */];

// 
// External References:
// 

// False False
//  u8 False
void mDoAud_setFadeOutStart(u8);
// False False
//  u8 False
void mDoAud_setFadeInStart(u8);
// False False
void fopOvlpM_SceneIsStart();
// False False
//  overlap_task_class* False
// 	 overlap_task_class False
void fopOvlpM_IsOutReq(overlap_task_class*);
// False False
//  overlap_task_class* False
// 	 overlap_task_class False
void fopOvlpM_Done(overlap_task_class*);

// False False
//  u8 False
extern "C" void mDoAud_setFadeOutStart__FUc();
// False False
//  u8 False
extern "C" void mDoAud_setFadeInStart__FUc();
// False False
extern "C" void fopOvlpM_SceneIsStart__Fv();
// False False
//  overlap_task_class* False
// 	 overlap_task_class False
extern "C" void fopOvlpM_IsOutReq__FP18overlap_task_class();
// False False
//  overlap_task_class* False
// 	 overlap_task_class False
extern "C" void fopOvlpM_Done__FP18overlap_task_class();
// False False
//  JUTFader::EStatus False
//  int False
extern "C" void setStatus__8JUTFaderFQ28JUTFader7EStatusi();
extern "C" extern void* g_fopOvlp_Method[5 + 1 /* padding */];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 sManager__10JFWDisplay[4];

// 
// Declarations:
// 

/* 8025217C-80252184 0008+00 s=1 e=0 z=0  None .text      dOvlpFd_Draw__FP14overlap1_class                             */
// True False
//  bool False
//  overlap1_class* False
// 	 overlap1_class False
static bool dOvlpFd_Draw(overlap1_class* param_0) {
	return true;
}


/* 80252184-802521F4 0070+00 s=1 e=0 z=0  None .text      dOvlpFd_startFadeIn__Fi                                      */
//	8025219C: 804511C0 (sManager__10JFWDisplay)
//	802521B0: 802E57D0 (setStatus__8JUTFaderFQ28JUTFader7EStatusi)
//	802521C0: 802E57D0 (setStatus__8JUTFaderFQ28JUTFader7EStatusi)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  int False
asm static void dOvlpFd_startFadeIn(int param_0) {
	nofralloc
#include "asm/d/ovlp/d_ovlp_fade/dOvlpFd_startFadeIn__Fi.s"
}
#pragma pop


/* 802521F4-802522C8 00D4+00 s=1 e=0 z=0  None .text      dOvlpFd_FadeOut__FP14overlap1_class                          */
//	80252220: 80007254 (mDoAud_setFadeInStart__FUc)
//	80252248: 80252184 (dOvlpFd_startFadeIn__Fi)
//	80252258: 80252184 (dOvlpFd_startFadeIn__Fi)
//	80252280: 80252184 (dOvlpFd_startFadeIn__Fi)
//	80252284: 8001E4C4 (fopOvlpM_SceneIsStart__Fv)
//	8025229C: 8001E51C (fopOvlpM_Done__FP18overlap_task_class)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  overlap1_class* False
// 	 overlap1_class False
asm static void dOvlpFd_FadeOut(overlap1_class* param_0) {
	nofralloc
#include "asm/d/ovlp/d_ovlp_fade/dOvlpFd_FadeOut__FP14overlap1_class.s"
}
#pragma pop


/* ############################################################################################## */
/* 804510E0-804510E8 0004+04 s=4 e=0 z=0  None .sbss      dOvlpFd_execute_f                                            */
static u8 dOvlpFd_execute_f[4 + 4 /* padding */];

/* 802522C8-80252300 0038+00 s=1 e=0 z=0  None .text      dOvlpFd_Wait__FP14overlap1_class                             */
//	802522D4: 8001E504 (fopOvlpM_IsOutReq__FP18overlap_task_class)
//	802522E0: 802521F4 (dOvlpFd_FadeOut__FP14overlap1_class)
//	802522E4: 802521F4 (dOvlpFd_FadeOut__FP14overlap1_class)
//	802522E8: 804510E0 (dOvlpFd_execute_f)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  overlap1_class* False
// 	 overlap1_class False
asm static void dOvlpFd_Wait(overlap1_class* param_0) {
	nofralloc
#include "asm/d/ovlp/d_ovlp_fade/dOvlpFd_Wait__FP14overlap1_class.s"
}
#pragma pop


/* 80252300-8025242C 012C+00 s=1 e=0 z=0  None .text      dOvlpFd_FadeIn__FP14overlap1_class                           */
//	8025233C: 804061C0 (g_dComIfG_gameInfo)
//	80252340: 804061C0 (g_dComIfG_gameInfo)
//	80252354: 804511C0 (sManager__10JFWDisplay)
//	802523C4: 80007224 (mDoAud_setFadeOutStart__FUc)
//	802523D8: 802522C8 (dOvlpFd_Wait__FP14overlap1_class)
//	802523DC: 802522C8 (dOvlpFd_Wait__FP14overlap1_class)
//	802523E0: 804510E0 (dOvlpFd_execute_f)
//	802523E4: 804511C0 (sManager__10JFWDisplay)
//	8025240C: 8001E51C (fopOvlpM_Done__FP18overlap_task_class)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  overlap1_class* False
// 	 overlap1_class False
asm static void dOvlpFd_FadeIn(overlap1_class* param_0) {
	nofralloc
#include "asm/d/ovlp/d_ovlp_fade/dOvlpFd_FadeIn__FP14overlap1_class.s"
}
#pragma pop


/* 8025242C-80252458 002C+00 s=1 e=0 z=0  None .text      dOvlpFd_Execute__FP14overlap1_class                          */
//	80252438: 804510E0 (dOvlpFd_execute_f)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  overlap1_class* False
// 	 overlap1_class False
asm static void dOvlpFd_Execute(overlap1_class* param_0) {
	nofralloc
#include "asm/d/ovlp/d_ovlp_fade/dOvlpFd_Execute__FP14overlap1_class.s"
}
#pragma pop


/* 80252458-80252460 0008+00 s=1 e=0 z=0  None .text      dOvlpFd_IsDelete__FP14overlap1_class                         */
// True False
//  bool False
//  overlap1_class* False
// 	 overlap1_class False
static bool dOvlpFd_IsDelete(overlap1_class* param_0) {
	return true;
}


/* 80252460-80252468 0008+00 s=1 e=0 z=0  None .text      dOvlpFd_Delete__FP14overlap1_class                           */
// True False
//  bool False
//  overlap1_class* False
// 	 overlap1_class False
static bool dOvlpFd_Delete(overlap1_class* param_0) {
	return true;
}


/* 80252468-8025247C 0014+00 s=1 e=0 z=0  None .text      dOvlpFd_Create__FPv                                          */
//	80252468: 80252300 (dOvlpFd_FadeIn__FP14overlap1_class)
//	8025246C: 80252300 (dOvlpFd_FadeIn__FP14overlap1_class)
//	80252470: 804510E0 (dOvlpFd_execute_f)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  void* False
// 	 void False
asm static void dOvlpFd_Create(void* param_0) {
	nofralloc
#include "asm/d/ovlp/d_ovlp_fade/dOvlpFd_Create__FPv.s"
}
#pragma pop


/* ############################################################################################## */
/* 803C2B98-803C2BAC 0014+00 s=8 e=0 z=0  None .data      l_dOvlpFd_Method                                             */
SECTION_DATA static void* l_dOvlpFd_Method[5] = {
	(void*)dOvlpFd_Create__FPv,
	(void*)dOvlpFd_Delete__FP14overlap1_class,
	(void*)dOvlpFd_Execute__FP14overlap1_class,
	(void*)dOvlpFd_IsDelete__FP14overlap1_class,
	(void*)dOvlpFd_Draw__FP14overlap1_class,
};

/* 803C2BAC-803C2BD4 0028+00 s=0 e=0 z=1  None .data      g_profile_OVERLAP0                                           */
SECTION_DATA void* g_profile_OVERLAP0[10] = {
	(void*)NULL,
	(void*)0x0000FFFD,
	(void*)NULL,
	(void*)&g_fpcLf_Method,
	(void*)0x000000D8,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopOvlp_Method,
	(void*)0x03050000,
	(void*)&l_dOvlpFd_Method,
};

/* 803C2BD4-803C2BFC 0028+00 s=0 e=0 z=1  None .data      g_profile_OVERLAP1                                           */
SECTION_DATA void* g_profile_OVERLAP1[10] = {
	(void*)NULL,
	(void*)0x0000FFFD,
	(void*)0x00010000,
	(void*)&g_fpcLf_Method,
	(void*)0x000000D8,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopOvlp_Method,
	(void*)0x03060000,
	(void*)&l_dOvlpFd_Method,
};

/* 803C2BFC-803C2C24 0028+00 s=0 e=0 z=1  None .data      g_profile_OVERLAP6                                           */
SECTION_DATA void* g_profile_OVERLAP6[10] = {
	(void*)NULL,
	(void*)0x0000FFFD,
	(void*)0x00030000,
	(void*)&g_fpcLf_Method,
	(void*)0x000000D8,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopOvlp_Method,
	(void*)0x03090000,
	(void*)&l_dOvlpFd_Method,
};

/* 803C2C24-803C2C4C 0028+00 s=0 e=0 z=1  None .data      g_profile_OVERLAP7                                           */
SECTION_DATA void* g_profile_OVERLAP7[10] = {
	(void*)NULL,
	(void*)0x0000FFFD,
	(void*)0x00040000,
	(void*)&g_fpcLf_Method,
	(void*)0x000000D8,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopOvlp_Method,
	(void*)0x030A0000,
	(void*)&l_dOvlpFd_Method,
};

/* 803C2C4C-803C2C74 0028+00 s=0 e=0 z=1  None .data      g_profile_OVERLAP8                                           */
SECTION_DATA void* g_profile_OVERLAP8[10] = {
	(void*)NULL,
	(void*)0x0000FFFD,
	(void*)0x00050000,
	(void*)&g_fpcLf_Method,
	(void*)0x000000D8,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopOvlp_Method,
	(void*)0x030B0000,
	(void*)&l_dOvlpFd_Method,
};

/* 803C2C74-803C2C9C 0028+00 s=0 e=0 z=1  None .data      g_profile_OVERLAP9                                           */
SECTION_DATA void* g_profile_OVERLAP9[10] = {
	(void*)NULL,
	(void*)0x0000FFFD,
	(void*)0x00060000,
	(void*)&g_fpcLf_Method,
	(void*)0x000000D8,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopOvlp_Method,
	(void*)0x030C0000,
	(void*)&l_dOvlpFd_Method,
};

/* 803C2C9C-803C2CC4 0028+00 s=0 e=0 z=1  None .data      g_profile_OVERLAP10                                          */
SECTION_DATA void* g_profile_OVERLAP10[10] = {
	(void*)NULL,
	(void*)0x0000FFFD,
	(void*)0x00070000,
	(void*)&g_fpcLf_Method,
	(void*)0x000000D8,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopOvlp_Method,
	(void*)0x030D0000,
	(void*)&l_dOvlpFd_Method,
};

/* 803C2CC4-803C2CF0 0028+04 s=0 e=0 z=1  None .data      g_profile_OVERLAP11                                          */
SECTION_DATA void* g_profile_OVERLAP11[10 + 1 /* padding */] = {
	(void*)NULL,
	(void*)0x0000FFFD,
	(void*)0x00080000,
	(void*)&g_fpcLf_Method,
	(void*)0x000000D8,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopOvlp_Method,
	(void*)0x030E0000,
	(void*)&l_dOvlpFd_Method,
	/* padding */
	NULL,
};

