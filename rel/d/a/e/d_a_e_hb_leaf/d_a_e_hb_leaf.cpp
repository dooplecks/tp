// 
// Generated By: dol2asm
// Translation Unit: d_a_e_hb_leaf
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/e/d_a_e_hb_leaf/d_a_e_hb_leaf.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct mDoExt_McaMorfCallBack2_c {
};

struct mDoExt_McaMorfCallBack1_c {
};

struct J3DAnmTransform {
};

struct J3DModelData {
};

struct mDoExt_McaMorf {
	/* 8000FC4C */ // False False
//  J3DModelData* False
// 	 J3DModelData False
//  mDoExt_McaMorfCallBack1_c* False
// 	 mDoExt_McaMorfCallBack1_c False
//  mDoExt_McaMorfCallBack2_c* False
// 	 mDoExt_McaMorfCallBack2_c False
//  J3DAnmTransform* False
// 	 J3DAnmTransform False
//  int False
//  f32 False
//  int False
//  int False
//  int False
//  void* False
// 	 void False
//  u32 False
//  u32 False
mDoExt_McaMorf(J3DModelData*, mDoExt_McaMorfCallBack1_c*, mDoExt_McaMorfCallBack2_c*, J3DAnmTransform*, int, f32, int, int, int, void*, u32, u32);
	/* 80010680 */ // False False
void entryDL();
	/* 800106AC */ // False False
void modelCalc();
};

struct fopAc_ac_c {
	/* 80018B64 */ // False False
fopAc_ac_c();
};

struct e_hb_leaf_class {
};

struct cXyz {
};

struct dKy_tevstr_c {
};

struct dScnKy_env_light_c {
	/* 801A37C4 */ // False False
//  int False
//  cXyz* False
// 	 cXyz False
//  dKy_tevstr_c* False
// 	 dKy_tevstr_c False
void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
	/* 801A4DA0 */ // False False
//  J3DModelData* False
// 	 J3DModelData False
//  dKy_tevstr_c* False
// 	 dKy_tevstr_c False
void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {
};

struct dRes_control_c {
	/* 8003C2EC */ // False False
//  char const* False
// 	 char const False
// 		 char False
//  s32 False
//  dRes_info_c* False
// 	 dRes_info_c False
//  int False
void getRes(char const*, s32, dRes_info_c*, int);
};

// 
// Forward References:
// 

// True False
//  e_hb_leaf_class* False
// 	 e_hb_leaf_class False
static void daE_HB_LEAF_Draw(e_hb_leaf_class*);
// True False
//  e_hb_leaf_class* False
// 	 e_hb_leaf_class False
static void daE_HB_LEAF_Execute(e_hb_leaf_class*);
// True False
//  bool False
//  e_hb_leaf_class* False
// 	 e_hb_leaf_class False
static bool daE_HB_LEAF_IsDelete(e_hb_leaf_class*);
// True False
//  e_hb_leaf_class* False
// 	 e_hb_leaf_class False
static void daE_HB_LEAF_Delete(e_hb_leaf_class*);
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
static void useHeapInit(fopAc_ac_c*);
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
static void daE_HB_LEAF_Create(fopAc_ac_c*);

// True False
//  e_hb_leaf_class* False
// 	 e_hb_leaf_class False
extern "C" static void daE_HB_LEAF_Draw__FP15e_hb_leaf_class();
// True False
//  e_hb_leaf_class* False
// 	 e_hb_leaf_class False
extern "C" static void daE_HB_LEAF_Execute__FP15e_hb_leaf_class();
// True False
//  bool False
//  e_hb_leaf_class* False
// 	 e_hb_leaf_class False
extern "C" static bool daE_HB_LEAF_IsDelete__FP15e_hb_leaf_class();
// True False
//  e_hb_leaf_class* False
// 	 e_hb_leaf_class False
extern "C" static void daE_HB_LEAF_Delete__FP15e_hb_leaf_class();
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" static void useHeapInit__FP10fopAc_ac_c();
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" static void daE_HB_LEAF_Create__FP10fopAc_ac_c();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_E_HB_LEAF[12];

// 
// External References:
// 

// False False
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
//  s16 False
void mDoMtx_XrotM(f32 (* )[4], s16);
// False False
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
//  s16 False
void mDoMtx_YrotM(f32 (* )[4], s16);
// False False
//  void* (*)(void*, void*) False
// 	 * False
// 		  False
// 	 void* False
// 		 void False
// 	 void* False
// 		 void False
// 	 void* False
// 		 void False
//  void* False
// 	 void False
void fopAcIt_Judge(void* (*)(void*, void*), void*);
// False False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  int (*)(fopAc_ac_c*) False
// 	 * False
// 		  False
// 	 int False
// 	 fopAc_ac_c* False
// 		 fopAc_ac_c False
//  u32 False
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
// False False
//  void* False
// 	 void False
//  void* False
// 	 void False
void fpcSch_JudgeByID(void*, void*);
// False False
//  request_of_phase_process_class* False
// 	 request_of_phase_process_class False
//  char const* False
// 	 char const False
// 		 char False
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
// False False
//  request_of_phase_process_class* False
// 	 request_of_phase_process_class False
//  char const* False
// 	 char const False
// 		 char False
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
// False False
//  void* False
// 	 void False
//  u32 False
void* operator new(u32);

// False False
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
//  s16 False
extern "C" void mDoMtx_XrotM__FPA4_fs();
// False False
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
//  s16 False
extern "C" void mDoMtx_YrotM__FPA4_fs();
// False False
//  J3DModelData* False
// 	 J3DModelData False
//  mDoExt_McaMorfCallBack1_c* False
// 	 mDoExt_McaMorfCallBack1_c False
//  mDoExt_McaMorfCallBack2_c* False
// 	 mDoExt_McaMorfCallBack2_c False
//  J3DAnmTransform* False
// 	 J3DAnmTransform False
//  int False
//  f32 False
//  int False
//  int False
//  int False
//  void* False
// 	 void False
//  u32 False
//  u32 False
extern "C" void __ct__14mDoExt_McaMorfFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiiPvUlUl();
// False False
extern "C" void entryDL__14mDoExt_McaMorfFv();
// False False
extern "C" void modelCalc__14mDoExt_McaMorfFv();
// False False
extern "C" void __ct__10fopAc_ac_cFv();
// False False
//  void* (*)(void*, void*) False
// 	 * False
// 		  False
// 	 void* False
// 		 void False
// 	 void* False
// 		 void False
// 	 void* False
// 		 void False
//  void* False
// 	 void False
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
// False False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  int (*)(fopAc_ac_c*) False
// 	 * False
// 		  False
// 	 int False
// 	 fopAc_ac_c* False
// 		 fopAc_ac_c False
//  u32 False
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
// False False
//  void* False
// 	 void False
//  void* False
// 	 void False
extern "C" void fpcSch_JudgeByID__FPvPv();
// False False
//  request_of_phase_process_class* False
// 	 request_of_phase_process_class False
//  char const* False
// 	 char const False
// 		 char False
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
// False False
//  request_of_phase_process_class* False
// 	 request_of_phase_process_class False
//  char const* False
// 	 char const False
// 		 char False
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
// False False
//  char const* False
// 	 char const False
// 		 char False
//  s32 False
//  dRes_info_c* False
// 	 dRes_info_c False
//  int False
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
// False False
//  int False
//  cXyz* False
// 	 cXyz False
//  dKy_tevstr_c* False
// 	 dKy_tevstr_c False
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
// False False
//  J3DModelData* False
// 	 J3DModelData False
//  dKy_tevstr_c* False
// 	 dKy_tevstr_c False
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
// False False
//  void* False
// 	 void False
//  u32 False
extern "C" void* __nw__FUl();
// False False
extern "C" void PSMTXCopy();
// False False
extern "C" void PSMTXTrans();
// False False
extern "C" void _savegpr_28();
// False False
extern "C" void _restgpr_28();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];

// 
// Declarations:
// 

/* 806DFF58-806DFFC0 0068+00 s=1 e=0 z=0  None .text      daE_HB_LEAF_Draw__FP15e_hb_leaf_class                        */
//	806DFF6C: 8042CA54 (g_env_light)
//	806DFF70: 8042CA54 (g_env_light)
//	806DFF80: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	806DFF8C: 8042CA54 (g_env_light)
//	806DFF90: 8042CA54 (g_env_light)
//	806DFF9C: 801A4DA0 (setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c)
//	806DFFA4: 80010680 (entryDL__14mDoExt_McaMorfFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  e_hb_leaf_class* False
// 	 e_hb_leaf_class False
asm static void daE_HB_LEAF_Draw(e_hb_leaf_class* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_hb_leaf/d_a_e_hb_leaf/daE_HB_LEAF_Draw__FP15e_hb_leaf_class.s"
}
#pragma pop


/* 806DFFC0-806E00A0 00E0+00 s=2 e=0 z=0  None .text      daE_HB_LEAF_Execute__FP15e_hb_leaf_class                     */
//	806DFFD4: 803DD470 (now__14mDoMtx_stack_c)
//	806DFFD8: 803DD470 (now__14mDoMtx_stack_c)
//	806DFFE8: 803468E8 (PSMTXTrans)
//	806DFFEC: 803DD470 (now__14mDoMtx_stack_c)
//	806DFFF0: 803DD470 (now__14mDoMtx_stack_c)
//	806DFFF8: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	806DFFFC: 803DD470 (now__14mDoMtx_stack_c)
//	806E0000: 803DD470 (now__14mDoMtx_stack_c)
//	806E0008: 8000C39C (mDoMtx_XrotM__FPA4_fs)
//	806E0014: 803DD470 (now__14mDoMtx_stack_c)
//	806E0018: 803DD470 (now__14mDoMtx_stack_c)
//	806E0020: 803464B0 (PSMTXCopy)
//	806E0028: 800106AC (modelCalc__14mDoExt_McaMorfFv)
//	806E0034: 80023590 (fpcSch_JudgeByID__FPvPv)
//	806E0038: 80023590 (fpcSch_JudgeByID__FPvPv)
//	806E0040: 800197F8 (fopAcIt_Judge__FPFPvPv_PvPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  e_hb_leaf_class* False
// 	 e_hb_leaf_class False
asm static void daE_HB_LEAF_Execute(e_hb_leaf_class* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_hb_leaf/d_a_e_hb_leaf/daE_HB_LEAF_Execute__FP15e_hb_leaf_class.s"
}
#pragma pop


/* 806E00A0-806E00A8 0008+00 s=1 e=0 z=0  None .text      daE_HB_LEAF_IsDelete__FP15e_hb_leaf_class                    */
// True False
//  bool False
//  e_hb_leaf_class* False
// 	 e_hb_leaf_class False
static bool daE_HB_LEAF_IsDelete(e_hb_leaf_class* param_0) {
	return true;
}


/* ############################################################################################## */
/* 806E0290-806E0294 0004+00 s=1 e=0 z=0  None .rodata    @3690                                                        */
SECTION_RODATA static u32 const lit_3690 = 0x3F800000;

/* 806E0294-806E0299 0005+00 s=3 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_806E0294 = "E_HB";
#pragma pop

/* 806E00A8-806E00D8 0030+00 s=1 e=0 z=0  None .text      daE_HB_LEAF_Delete__FP15e_hb_leaf_class                      */
//	806E00B4: 806E0294 (stringBase0)
//	806E00B8: 806E0294 (stringBase0)
//	806E00C0: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  e_hb_leaf_class* False
// 	 e_hb_leaf_class False
asm static void daE_HB_LEAF_Delete(e_hb_leaf_class* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_hb_leaf/d_a_e_hb_leaf/daE_HB_LEAF_Delete__FP15e_hb_leaf_class.s"
}
#pragma pop


/* 806E00D8-806E01D8 0100+00 s=1 e=0 z=0  None .text      useHeapInit__FP10fopAc_ac_c                                  */
//	806E00E8: 803621D8 (_savegpr_28)
//	806E00F4: 802CEC4C (__nw__FUl)
//	806E0100: 806E0294 (stringBase0)
//	806E0104: 806E0294 (stringBase0)
//	806E010C: 804061C0 (g_dComIfG_gameInfo)
//	806E0110: 804061C0 (g_dComIfG_gameInfo)
//	806E0124: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	806E012C: 806E0294 (stringBase0)
//	806E0130: 806E0294 (stringBase0)
//	806E0140: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	806E0180: 806E0290 (lit_3690)
//	806E0184: 806E0290 (lit_3690)
//	806E0190: 8000FC4C (__ct__14mDoExt_McaMorfFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiiPvUlUl)
//	806E01C4: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
asm static void useHeapInit(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_hb_leaf/d_a_e_hb_leaf/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop


/* 806E01D8-806E0288 00B0+00 s=1 e=0 z=0  None .text      daE_HB_LEAF_Create__FP10fopAc_ac_c                           */
//	806E0204: 80018B64 (__ct__10fopAc_ac_cFv)
//	806E0218: 806E0294 (stringBase0)
//	806E021C: 806E0294 (stringBase0)
//	806E0220: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	806E0234: 806E00D8 (useHeapInit__FP10fopAc_ac_c)
//	806E0238: 806E00D8 (useHeapInit__FP10fopAc_ac_c)
//	806E0240: 8001A4B0 (fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl)
//	806E0268: 806DFFC0 (daE_HB_LEAF_Execute__FP15e_hb_leaf_class)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
asm static void daE_HB_LEAF_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_hb_leaf/d_a_e_hb_leaf/daE_HB_LEAF_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* ############################################################################################## */
/* 806E029C-806E02BC 0020+00 s=1 e=0 z=0  None .data      l_daE_HB_LEAF_Method                                         */
SECTION_DATA static void* l_daE_HB_LEAF_Method[8] = {
	(void*)daE_HB_LEAF_Create__FP10fopAc_ac_c,
	(void*)daE_HB_LEAF_Delete__FP15e_hb_leaf_class,
	(void*)daE_HB_LEAF_Execute__FP15e_hb_leaf_class,
	(void*)daE_HB_LEAF_IsDelete__FP15e_hb_leaf_class,
	(void*)daE_HB_LEAF_Draw__FP15e_hb_leaf_class,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 806E02BC-806E02EC 0030+00 s=0 e=0 z=1  None .data      g_profile_E_HB_LEAF                                          */
SECTION_DATA void* g_profile_E_HB_LEAF[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0007FFFD,
	(void*)0x01CA0000,
	(void*)&g_fpcLf_Method,
	(void*)0x000005C0,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x008D0000,
	(void*)&l_daE_HB_LEAF_Method,
	(void*)0x00040000,
	(void*)NULL,
};

