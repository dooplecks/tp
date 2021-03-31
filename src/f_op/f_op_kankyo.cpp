// 
// Generated By: dol2asm
// Translation Unit: f_op/f_op_kankyo
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "f_op/f_op_kankyo.h"

// 
// Types:
// 

struct process_method_class {
};

struct leafdraw_method_class {
};

struct leafdraw_class {
};

struct create_tag_class {
};

// 
// Forward References:
// 

// True False
//  void* False
// 	 void False
static void fopKy_Draw(void*);
// True False
//  void* False
// 	 void False
static void fopKy_Execute(void*);
// True False
//  void* False
// 	 void False
static void fopKy_IsDelete(void*);
// True False
//  void* False
// 	 void False
static void fopKy_Delete(void*);
// True False
//  void* False
// 	 void False
static void fopKy_Create(void*);

// True False
//  void* False
// 	 void False
extern "C" static void fopKy_Draw__FPv();
// True False
//  void* False
// 	 void False
extern "C" static void fopKy_Execute__FPv();
// True False
//  void* False
// 	 void False
extern "C" static void fopKy_IsDelete__FPv();
// True False
//  void* False
// 	 void False
extern "C" static void fopKy_Delete__FPv();
// True False
//  void* False
// 	 void False
extern "C" static void fopKy_Create__FPv();
extern "C" extern void* g_fopKy_Method[5 + 1 /* padding */];

// 
// External References:
// 

// False False
//  create_tag_class* False
// 	 create_tag_class False
//  int False
void fopDwTg_ToDrawQ(create_tag_class*, int);
// False False
//  create_tag_class* False
// 	 create_tag_class False
void fopDwTg_DrawQTo(create_tag_class*);
// False False
//  create_tag_class* False
// 	 create_tag_class False
//  void* False
// 	 void False
void fopDwTg_Init(create_tag_class*, void*);
// False False
//  int* False
// 	 int False
void fpcBs_MakeOfType(int*);
// False False
//  leafdraw_class const* False
// 	 leafdraw_class const False
// 		 leafdraw_class False
void fpcLf_GetPriority(leafdraw_class const*);
// False False
//  leafdraw_method_class* False
// 	 leafdraw_method_class False
//  void* False
// 	 void False
void fpcLf_DrawMethod(leafdraw_method_class*, void*);
// False False
//  process_method_class* False
// 	 process_method_class False
//  void* False
// 	 void False
void fpcMtd_Execute(process_method_class*, void*);
// False False
//  process_method_class* False
// 	 process_method_class False
//  void* False
// 	 void False
void fpcMtd_IsDelete(process_method_class*, void*);
// False False
//  process_method_class* False
// 	 process_method_class False
//  void* False
// 	 void False
void fpcMtd_Delete(process_method_class*, void*);
// False False
//  process_method_class* False
// 	 process_method_class False
//  void* False
// 	 void False
void fpcMtd_Create(process_method_class*, void*);

// False False
//  create_tag_class* False
// 	 create_tag_class False
//  int False
extern "C" void fopDwTg_ToDrawQ__FP16create_tag_classi();
// False False
//  create_tag_class* False
// 	 create_tag_class False
extern "C" void fopDwTg_DrawQTo__FP16create_tag_class();
// False False
//  create_tag_class* False
// 	 create_tag_class False
//  void* False
// 	 void False
extern "C" void fopDwTg_Init__FP16create_tag_classPv();
// False False
//  int* False
// 	 int False
extern "C" void fpcBs_MakeOfType__FPi();
// False False
//  leafdraw_class const* False
// 	 leafdraw_class const False
// 		 leafdraw_class False
extern "C" void fpcLf_GetPriority__FPC14leafdraw_class();
// False False
//  leafdraw_method_class* False
// 	 leafdraw_method_class False
//  void* False
// 	 void False
extern "C" void fpcLf_DrawMethod__FP21leafdraw_method_classPv();
// False False
//  process_method_class* False
// 	 process_method_class False
//  void* False
// 	 void False
extern "C" void fpcMtd_Execute__FP20process_method_classPv();
// False False
//  process_method_class* False
// 	 process_method_class False
//  void* False
// 	 void False
extern "C" void fpcMtd_IsDelete__FP20process_method_classPv();
// False False
//  process_method_class* False
// 	 process_method_class False
//  void* False
// 	 void False
extern "C" void fpcMtd_Delete__FP20process_method_classPv();
// False False
//  process_method_class* False
// 	 process_method_class False
//  void* False
// 	 void False
extern "C" void fpcMtd_Create__FP20process_method_classPv();
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 struct_80451124[4];

// 
// Declarations:
// 

/* 8001F284-8001F2C0 003C+00 s=1 e=0 z=0  None .text      fopKy_Draw__FPv                                              */
//	8001F294: 804061C0 (g_dComIfG_gameInfo)
//	8001F298: 804061C0 (g_dComIfG_gameInfo)
//	8001F2AC: 80021A24 (fpcLf_DrawMethod__FP21leafdraw_method_classPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  void* False
// 	 void False
asm static void fopKy_Draw(void* param_0) {
	nofralloc
#include "asm/f_op/f_op_kankyo/fopKy_Draw__FPv.s"
}
#pragma pop


/* 8001F2C0-8001F314 0054+00 s=1 e=0 z=0  None .text      fopKy_Execute__FPv                                           */
//	8001F2D0: 80451124 (struct_80451124)
//	8001F2DC: 804061C0 (g_dComIfG_gameInfo)
//	8001F2E0: 804061C0 (g_dComIfG_gameInfo)
//	8001F300: 80022460 (fpcMtd_Execute__FP20process_method_classPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  void* False
// 	 void False
asm static void fopKy_Execute(void* param_0) {
	nofralloc
#include "asm/f_op/f_op_kankyo/fopKy_Execute__FPv.s"
}
#pragma pop


/* 8001F314-8001F368 0054+00 s=1 e=0 z=0  None .text      fopKy_IsDelete__FPv                                          */
//	8001F334: 80022484 (fpcMtd_IsDelete__FP20process_method_classPv)
//	8001F348: 800204D4 (fopDwTg_DrawQTo__FP16create_tag_class)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  void* False
// 	 void False
asm static void fopKy_IsDelete(void* param_0) {
	nofralloc
#include "asm/f_op/f_op_kankyo/fopKy_IsDelete__FPv.s"
}
#pragma pop


/* 8001F368-8001F3B4 004C+00 s=1 e=0 z=0  None .text      fopKy_Delete__FPv                                            */
//	8001F388: 800224A8 (fpcMtd_Delete__FP20process_method_classPv)
//	8001F394: 800204D4 (fopDwTg_DrawQTo__FP16create_tag_class)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  void* False
// 	 void False
asm static void fopKy_Delete(void* param_0) {
	nofralloc
#include "asm/f_op/f_op_kankyo/fopKy_Delete__FPv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80450CE8-80450CF0 0004+04 s=1 e=0 z=0  None .sbss      fopKy_KANKYO_TYPE                                            */
static u8 fopKy_KANKYO_TYPE[4 + 4 /* padding */];

/* 8001F3B4-8001F488 00D4+00 s=1 e=0 z=0  None .text      fopKy_Create__FPv                                            */
//	8001F3DC: 80450CE8 (fopKy_KANKYO_TYPE)
//	8001F3E0: 8002065C (fpcBs_MakeOfType__FPi)
//	8001F3F8: 800204F4 (fopDwTg_Init__FP16create_tag_classPv)
//	8001F448: 800224CC (fpcMtd_Create__FP20process_method_classPv)
//	8001F45C: 80021A00 (fpcLf_GetPriority__FPC14leafdraw_class)
//	8001F468: 800204AC (fopDwTg_ToDrawQ__FP16create_tag_classi)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  void* False
// 	 void False
asm static void fopKy_Create(void* param_0) {
	nofralloc
#include "asm/f_op/f_op_kankyo/fopKy_Create__FPv.s"
}
#pragma pop


/* ############################################################################################## */
/* 803A3940-803A3958 0014+04 s=0 e=7 z=0  None .data      g_fopKy_Method                                               */
SECTION_DATA void* g_fopKy_Method[5 + 1 /* padding */] = {
	(void*)fopKy_Create__FPv,
	(void*)fopKy_Delete__FPv,
	(void*)fopKy_Execute__FPv,
	(void*)fopKy_IsDelete__FPv,
	(void*)fopKy_Draw__FPv,
	/* padding */
	NULL,
};

