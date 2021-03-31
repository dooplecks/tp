// 
// Generated By: dol2asm
// Translation Unit: d_a_kytag07
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/kytag/d_a_kytag07/d_a_kytag07.h"

// 
// Types:
// 

struct kytag07_class {
};

struct fopAc_ac_c {
	/* 80018B64 */ // False False
fopAc_ac_c();
};

struct LIGHT_INFLUENCE {
};

// 
// Forward References:
// 

// True False
//  bool False
//  kytag07_class* False
// 	 kytag07_class False
static bool daKytag07_Draw(kytag07_class*);
// True False
//  kytag07_class* False
// 	 kytag07_class False
static void daKytag07_Execute(kytag07_class*);
// True False
//  kytag07_class* False
// 	 kytag07_class False
static void daKytag07_IsDelete(kytag07_class*);
// True False
//  kytag07_class* False
// 	 kytag07_class False
static void daKytag07_Delete(kytag07_class*);
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
static void daKytag07_Create(fopAc_ac_c*);

// True False
//  bool False
//  kytag07_class* False
// 	 kytag07_class False
extern "C" static bool daKytag07_Draw__FP13kytag07_class();
// True False
//  kytag07_class* False
// 	 kytag07_class False
extern "C" static void daKytag07_Execute__FP13kytag07_class();
// True False
//  kytag07_class* False
// 	 kytag07_class False
extern "C" static void daKytag07_IsDelete__FP13kytag07_class();
// True False
//  kytag07_class* False
// 	 kytag07_class False
extern "C" static void daKytag07_Delete__FP13kytag07_class();
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" static void daKytag07_Create__FP10fopAc_ac_c();
extern "C" extern u32 const lit_3755;
extern "C" extern u32 const lit_3756;
extern "C" extern u8 const lit_3757[4];
extern "C" extern u32 const lit_3758;
extern "C" extern u32 const lit_3759;
extern "C" extern u32 const lit_3760;
extern "C" extern u32 const lit_3807;
extern "C" extern void* g_profile_KYTAG07[12];

// 
// External References:
// 

// False False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
void fopAcM_delete(fopAc_ac_c*);
// False False
void fopOvlpM_IsDoingReq();
// False False
//  LIGHT_INFLUENCE* False
// 	 LIGHT_INFLUENCE False
void dKy_plight_priority_set(LIGHT_INFLUENCE*);
// False False
//  LIGHT_INFLUENCE* False
// 	 LIGHT_INFLUENCE False
void dKy_plight_cut(LIGHT_INFLUENCE*);
// False False
//  f32* False
// 	 f32 False
//  f32 False
//  f32 False
//  f32 False
//  f32 False
void cLib_addCalc(f32*, f32, f32, f32, f32);

// False False
extern "C" void __ct__10fopAc_ac_cFv();
// False False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
// False False
extern "C" void fopOvlpM_IsDoingReq__Fv();
// False False
//  LIGHT_INFLUENCE* False
// 	 LIGHT_INFLUENCE False
extern "C" void dKy_plight_priority_set__FP15LIGHT_INFLUENCE();
// False False
//  LIGHT_INFLUENCE* False
// 	 LIGHT_INFLUENCE False
extern "C" void dKy_plight_cut__FP15LIGHT_INFLUENCE();
// False False
//  f32* False
// 	 f32 False
//  f32 False
//  f32 False
//  f32 False
//  f32 False
extern "C" void cLib_addCalc__FPfffff();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 struct_80450D64[4];

// 
// Declarations:
// 

/* 8085A278-8085A280 0008+00 s=1 e=0 z=0  None .text      daKytag07_Draw__FP13kytag07_class                            */
// True False
//  bool False
//  kytag07_class* False
// 	 kytag07_class False
static bool daKytag07_Draw(kytag07_class* param_0) {
	return true;
}


/* ############################################################################################## */
/* 8085A484-8085A488 0004+00 s=2 e=0 z=0  None .rodata    @3754                                                        */
SECTION_RODATA static u32 const lit_3754 = 0x3DCCCCCD;

/* 8085A280-8085A334 00B4+00 s=1 e=0 z=0  None .text      daKytag07_Execute__FP13kytag07_class                         */
//	8085A298: 8085A484 (lit_3754)
//	8085A29C: 8085A484 (lit_3754)
//	8085A2C0: 8026F97C (cLib_addCalc__FPfffff)
//	8085A2D0: 80450D64 (struct_80450D64)
//	8085A2D4: 80450D64 (struct_80450D64)
//	8085A2F8: 8026F97C (cLib_addCalc__FPfffff)
//	8085A314: 80019C7C (fopAcM_delete__FP10fopAc_ac_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  kytag07_class* False
// 	 kytag07_class False
asm static void daKytag07_Execute(kytag07_class* param_0) {
	nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag07/d_a_kytag07/daKytag07_Execute__FP13kytag07_class.s"
}
#pragma pop


/* ############################################################################################## */
/* 8085A488-8085A48C 0004+00 s=0 e=0 z=0  None .rodata    @3755                                                        */
SECTION_RODATA u32 const lit_3755 = 0x447A0000;

/* 8085A48C-8085A490 0004+00 s=0 e=0 z=0  None .rodata    @3756                                                        */
SECTION_RODATA u32 const lit_3756 = 0x3A83126F;

/* 8085A490-8085A494 0004+00 s=0 e=0 z=0  None .rodata    @3757                                                        */
SECTION_RODATA u8 const lit_3757[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 8085A494-8085A498 0004+00 s=0 e=0 z=0  None .rodata    @3758                                                        */
SECTION_RODATA u32 const lit_3758 = 0x3E800000;

/* 8085A498-8085A49C 0004+00 s=0 e=0 z=0  None .rodata    @3759                                                        */
SECTION_RODATA u32 const lit_3759 = 0x461C4000;

/* 8085A49C-8085A4A0 0004+00 s=0 e=0 z=0  None .rodata    @3760                                                        */
SECTION_RODATA u32 const lit_3760 = 0x3F800000;

/* 8085A4A0-8085A4A4 0004+00 s=1 e=0 z=0  None .rodata    @3761                                                        */
SECTION_RODATA static u32 const lit_3761 = 0x3C23D70A;

/* 8085A334-8085A388 0054+00 s=1 e=0 z=0  None .text      daKytag07_IsDelete__FP13kytag07_class                        */
//	8085A34C: 8085A4A0 (lit_3761)
//	8085A350: 8085A4A0 (lit_3761)
//	8085A368: 8001E5A8 (fopOvlpM_IsDoingReq__Fv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  kytag07_class* False
// 	 kytag07_class False
asm static void daKytag07_IsDelete(kytag07_class* param_0) {
	nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag07/d_a_kytag07/daKytag07_IsDelete__FP13kytag07_class.s"
}
#pragma pop


/* 8085A388-8085A3B0 0028+00 s=1 e=0 z=0  None .text      daKytag07_Delete__FP13kytag07_class                          */
//	8085A398: 801A792C (dKy_plight_cut__FP15LIGHT_INFLUENCE)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  kytag07_class* False
// 	 kytag07_class False
asm static void daKytag07_Delete(kytag07_class* param_0) {
	nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag07/d_a_kytag07/daKytag07_Delete__FP13kytag07_class.s"
}
#pragma pop


/* 8085A3B0-8085A47C 00CC+00 s=1 e=0 z=0  None .text      daKytag07_Create__FP10fopAc_ac_c                             */
//	8085A3C8: 8085A484 (lit_3754)
//	8085A3CC: 8085A484 (lit_3754)
//	8085A3E4: 80018B64 (__ct__10fopAc_ac_cFv)
//	8085A45C: 801A789C (dKy_plight_priority_set__FP15LIGHT_INFLUENCE)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
asm static void daKytag07_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag07/d_a_kytag07/daKytag07_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* ############################################################################################## */
/* 8085A4A4-8085A4A8 0004+00 s=0 e=0 z=0  None .rodata    @3807                                                        */
SECTION_RODATA u32 const lit_3807 = 0x2EDBE6FF;

/* 8085A4A8-8085A4C8 0020+00 s=1 e=0 z=0  None .data      l_daKytag07_Method                                           */
SECTION_DATA static void* l_daKytag07_Method[8] = {
	(void*)daKytag07_Create__FP10fopAc_ac_c,
	(void*)daKytag07_Delete__FP13kytag07_class,
	(void*)daKytag07_Execute__FP13kytag07_class,
	(void*)daKytag07_IsDelete__FP13kytag07_class,
	(void*)daKytag07_Draw__FP13kytag07_class,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 8085A4C8-8085A4F8 0030+00 s=0 e=0 z=1  None .data      g_profile_KYTAG07                                            */
SECTION_DATA void* g_profile_KYTAG07[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0007FFFD,
	(void*)0x02B10000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000590,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x00650000,
	(void*)&l_daKytag07_Method,
	(void*)0x00044000,
	(void*)NULL,
};

