// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_kita
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_kita/d_a_obj_kita.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct obj_kita_class {
};

struct mDoMtx_stack_c {
	/* 8000CD9C */ // False False
//  f32 False
//  f32 False
//  f32 False
void transM(f32, f32, f32);
	/* 8000CE38 */ // False False
//  f32 False
//  f32 False
//  f32 False
void scaleM(f32, f32, f32);
};

struct kita_s {
	/* 80C45E44 */ // True False
~kita_s();
	/* 80C45E80 */ // True False
kita_s();
};

struct fopAc_ac_c {
	/* 80018B64 */ // False False
fopAc_ac_c();
};

struct daObj_Kita_HIO_c {
	/* 80C4534C */ // True False
daObj_Kita_HIO_c();
	/* 80C45E84 */ // True False
~daObj_Kita_HIO_c();
};

struct Vec {
};

struct cXyz {
	/* 80266AE4 */ // False False
//  Vec const& False
// 	 Vec const False
// 		 Vec False
void operator+(Vec const&) const;
};

struct dKy_tevstr_c {
};

struct J3DModelData {
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

struct dBgW_Base {
};

struct dBgW {
	/* 8007B970 */ // False False
dBgW();
	/* 8007B9C0 */ // False False
void Move();
};

struct dBgS {
	/* 80074A08 */ // False False
//  dBgW_Base* False
// 	 dBgW_Base False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct csXyz {
};

struct cBgD_t {
};

struct cBgW {
	/* 80079F38 */ // False False
//  cBgD_t* False
// 	 cBgD_t False
//  u32 False
//  f32 (* )[3][4] False
// 	 f32 False
// 	 * False
// 		  False
void Set(cBgD_t*, u32, f32 (* )[3][4]);
};

struct cBgS_PolyInfo {
};

struct cBgS {
	/* 80074250 */ // False False
//  dBgW_Base* False
// 	 dBgW_Base False
void Release(dBgW_Base*);
};

struct JAISoundID {
};

struct Z2SeMgr {
	/* 802AC50C */ // False False
//  JAISoundID False
//  Vec const* False
// 	 Vec const False
// 		 Vec False
//  u32 False
//  s8 False
//  f32 False
//  f32 False
//  f32 False
//  f32 False
//  u8 False
void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {
};

// 
// Forward References:
// 

// True False
//  obj_kita_class* False
// 	 obj_kita_class False
static void daObj_Kita_Draw(obj_kita_class*);
// True False
//  dBgW* False
// 	 dBgW False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
static void ride_call_back(dBgW*, fopAc_ac_c*, fopAc_ac_c*);
// True False
//  obj_kita_class* False
// 	 obj_kita_class False
static void ita_control(obj_kita_class*);
// True False
//  obj_kita_class* False
// 	 obj_kita_class False
static void action(obj_kita_class*);
// True False
//  obj_kita_class* False
// 	 obj_kita_class False
static void daObj_Kita_Execute(obj_kita_class*);
// True False
//  bool False
//  obj_kita_class* False
// 	 obj_kita_class False
static bool daObj_Kita_IsDelete(obj_kita_class*);
// True False
//  obj_kita_class* False
// 	 obj_kita_class False
static void daObj_Kita_Delete(obj_kita_class*);
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
static void useHeapInit(fopAc_ac_c*);
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
static void daObj_Kita_Create(fopAc_ac_c*);

// True False
extern "C" void __ct__16daObj_Kita_HIO_cFv();
// True False
//  obj_kita_class* False
// 	 obj_kita_class False
extern "C" static void daObj_Kita_Draw__FP14obj_kita_class();
// True False
//  dBgW* False
// 	 dBgW False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" static void ride_call_back__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c();
// True False
//  obj_kita_class* False
// 	 obj_kita_class False
extern "C" static void ita_control__FP14obj_kita_class();
// True False
//  obj_kita_class* False
// 	 obj_kita_class False
extern "C" static void action__FP14obj_kita_class();
// True False
//  obj_kita_class* False
// 	 obj_kita_class False
extern "C" static void daObj_Kita_Execute__FP14obj_kita_class();
// True False
//  bool False
//  obj_kita_class* False
// 	 obj_kita_class False
extern "C" static bool daObj_Kita_IsDelete__FP14obj_kita_class();
// True False
//  obj_kita_class* False
// 	 obj_kita_class False
extern "C" static void daObj_Kita_Delete__FP14obj_kita_class();
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" static void useHeapInit__FP10fopAc_ac_c();
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" static void daObj_Kita_Create__FP10fopAc_ac_c();
// True False
extern "C" void __dt__6kita_sFv();
// True False
extern "C" void __ct__6kita_sFv();
// True False
extern "C" void __dt__16daObj_Kita_HIO_cFv();
// False False
extern "C" void __sinit_d_a_obj_kita_cpp();
extern "C" extern u32 const lit_3770;
extern "C" extern u32 const lit_3771;
extern "C" extern u32 const lit_3772;
extern "C" extern u32 const lit_3897;
extern "C" extern u32 const lit_3898;
extern "C" extern u32 const lit_3899;
extern "C" extern u32 const lit_3900;
extern "C" extern u32 const lit_3901;
extern "C" extern u32 const lit_3902;
extern "C" extern u8 const lit_3903[4];
extern "C" extern u32 const lit_3904;
extern "C" extern u32 const lit_3905;
extern "C" extern u32 const lit_3906;
extern "C" extern u32 const lit_3907;
extern "C" extern u32 const lit_3908;
extern "C" extern u32 const lit_3909;
extern "C" extern u32 const lit_3910;
extern "C" extern u8 const lit_3913[8];
extern "C" extern u32 const lit_3955;
extern "C" extern u32 const lit_3956;
extern "C" extern u32 const lit_4083;
extern "C" extern u32 const lit_4084;
extern "C" extern u32 const lit_4085;
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_OBJ_KITA[12];
extern "C" extern void* __vt__16daObj_Kita_HIO_c[3];

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
void mDoMtx_YrotS(f32 (* )[4], s16);
// False False
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
//  s16 False
void mDoMtx_YrotM(f32 (* )[4], s16);
// False False
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
//  s16 False
void mDoMtx_ZrotM(f32 (* )[4], s16);
// False False
//  J3DModel* False
// 	 J3DModel False
void mDoExt_modelUpdateDL(J3DModel*);
// False False
//  J3DModelData* False
// 	 J3DModelData False
//  u32 False
//  u32 False
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
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
void dKyw_get_wind_vec();
// False False
void dKyw_get_wind_pow();
// False False
//  dBgW* False
// 	 dBgW False
//  void* False
// 	 void False
//  cBgS_PolyInfo const& False
// 	 cBgS_PolyInfo const False
// 		 cBgS_PolyInfo False
//  bool False
//  cXyz* False
// 	 cXyz False
//  csXyz* False
// 	 csXyz False
//  csXyz* False
// 	 csXyz False
void dBgS_MoveBGProc_Typical(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
// False False
//  f32 False
//  f32 False
void cM_atan2s(f32, f32);
// False False
//  f32 False
void cM_rndF(f32);
// False False
//  f32 False
void cM_rndFX(f32);
// False False
//  f32* False
// 	 f32 False
//  f32 False
//  f32 False
//  f32 False
void cLib_addCalc2(f32*, f32, f32, f32);
// False False
//  s16* False
// 	 s16 False
//  s16 False
//  s16 False
//  s16 False
void cLib_addCalcAngleS2(s16*, s16, s16, s16);
// False False
//  cXyz* False
// 	 cXyz False
//  cXyz* False
// 	 cXyz False
void MtxPosition(cXyz*, cXyz*);
// False False
//  void* False
// 	 void False
//  u32 False
void* operator new(u32);
// False False
//  void False
//  void* False
// 	 void False
void operator delete(void*);

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
extern "C" void mDoMtx_YrotS__FPA4_fs();
// False False
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
//  s16 False
extern "C" void mDoMtx_YrotM__FPA4_fs();
// False False
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
//  s16 False
extern "C" void mDoMtx_ZrotM__FPA4_fs();
// False False
//  f32 False
//  f32 False
//  f32 False
extern "C" void transM__14mDoMtx_stack_cFfff();
// False False
//  f32 False
//  f32 False
//  f32 False
extern "C" void scaleM__14mDoMtx_stack_cFfff();
// False False
//  J3DModel* False
// 	 J3DModel False
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
// False False
//  J3DModelData* False
// 	 J3DModelData False
//  u32 False
//  u32 False
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
// False False
extern "C" void __ct__10fopAc_ac_cFv();
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
extern "C" void dKyw_get_wind_vec__Fv();
// False False
extern "C" void dKyw_get_wind_pow__Fv();
// False False
//  dBgW_Base* False
// 	 dBgW_Base False
extern "C" void Release__4cBgSFP9dBgW_Base();
// False False
//  dBgW_Base* False
// 	 dBgW_Base False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
// False False
//  dBgW* False
// 	 dBgW False
//  void* False
// 	 void False
//  cBgS_PolyInfo const& False
// 	 cBgS_PolyInfo const False
// 		 cBgS_PolyInfo False
//  bool False
//  cXyz* False
// 	 cXyz False
//  csXyz* False
// 	 csXyz False
//  csXyz* False
// 	 csXyz False
extern "C" void dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
// False False
//  cBgD_t* False
// 	 cBgD_t False
//  u32 False
//  f32 (* )[3][4] False
// 	 f32 False
// 	 * False
// 		  False
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
// False False
extern "C" void __ct__4dBgWFv();
// False False
extern "C" void Move__4dBgWFv();
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
//  Vec const& False
// 	 Vec const False
// 		 Vec False
extern "C" void __pl__4cXyzCFRC3Vec();
// False False
//  f32 False
//  f32 False
extern "C" void cM_atan2s__Fff();
// False False
//  f32 False
extern "C" void cM_rndF__Ff();
// False False
//  f32 False
extern "C" void cM_rndFX__Ff();
// False False
//  f32* False
// 	 f32 False
//  f32 False
//  f32 False
//  f32 False
extern "C" void cLib_addCalc2__FPffff();
// False False
//  s16* False
// 	 s16 False
//  s16 False
//  s16 False
//  s16 False
extern "C" void cLib_addCalcAngleS2__FPssss();
// False False
//  cXyz* False
// 	 cXyz False
//  cXyz* False
// 	 cXyz False
extern "C" void MtxPosition__FP4cXyzP4cXyz();
// False False
//  JAISoundID False
//  Vec const* False
// 	 Vec const False
// 		 Vec False
//  u32 False
//  s8 False
//  f32 False
//  f32 False
//  f32 False
//  f32 False
//  u8 False
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
// False False
//  void* False
// 	 void False
//  u32 False
extern "C" void* __nw__FUl();
// False False
//  void False
//  void* False
// 	 void False
extern "C" void __dl__FPv();
// False False
extern "C" void PSMTXCopy();
// False False
extern "C" void PSMTXTrans();
// False False
extern "C" void __construct_array();
// False False
extern "C" void _savegpr_21();
// False False
extern "C" void _savegpr_23();
// False False
extern "C" void _savegpr_25();
// False False
extern "C" void _savegpr_27();
// False False
extern "C" void _savegpr_28();
// False False
extern "C" void _restgpr_21();
// False False
extern "C" void _restgpr_23();
// False False
extern "C" void _restgpr_25();
// False False
extern "C" void _restgpr_27();
// False False
extern "C" void _restgpr_28();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
// False False
extern "C" void __register_global_object();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80C45F1C-80C45F20 0004+00 s=4 e=0 z=0  None .rodata    @3769                                                        */
SECTION_RODATA static u32 const lit_3769 = 0x3F99999A;

/* 80C45F8C-80C45FAC 0020+00 s=1 e=0 z=0  None .data      l_daObj_Kita_Method                                          */
SECTION_DATA static void* l_daObj_Kita_Method[8] = {
	(void*)daObj_Kita_Create__FP10fopAc_ac_c,
	(void*)daObj_Kita_Delete__FP14obj_kita_class,
	(void*)daObj_Kita_Execute__FP14obj_kita_class,
	(void*)daObj_Kita_IsDelete__FP14obj_kita_class,
	(void*)daObj_Kita_Draw__FP14obj_kita_class,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80C45FAC-80C45FDC 0030+00 s=0 e=0 z=1  None .data      g_profile_OBJ_KITA                                           */
SECTION_DATA void* g_profile_OBJ_KITA[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0007FFFD,
	(void*)0x01120000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000D78,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x02C30000,
	(void*)&l_daObj_Kita_Method,
	(void*)0x00040000,
	(void*)0x000E0000,
};

/* 80C45FDC-80C45FE8 000C+00 s=2 e=0 z=0  None .data      __vt__16daObj_Kita_HIO_c                                     */
SECTION_DATA void* __vt__16daObj_Kita_HIO_c[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__16daObj_Kita_HIO_cFv,
};

/* 80C4534C-80C4538C 0040+00 s=1 e=0 z=0  None .text      __ct__16daObj_Kita_HIO_cFv                                   */
//	80C4534C: 80C45F1C (lit_3769)
//	80C45350: 80C45F1C (lit_3769)
//	80C45354: 80C45FDC (__vt__16daObj_Kita_HIO_c)
//	80C45358: 80C45FDC (__vt__16daObj_Kita_HIO_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm daObj_Kita_HIO_c::daObj_Kita_HIO_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kita/d_a_obj_kita/__ct__16daObj_Kita_HIO_cFv.s"
}
#pragma pop


/* 80C4538C-80C45424 0098+00 s=1 e=0 z=0  None .text      daObj_Kita_Draw__FP14obj_kita_class                          */
//	80C4539C: 803621D4 (_savegpr_27)
//	80C453A4: 8042CA54 (g_env_light)
//	80C453A8: 8042CA54 (g_env_light)
//	80C453B8: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80C453C4: 8042CA54 (g_env_light)
//	80C453C8: 8042CA54 (g_env_light)
//	80C453E4: 801A4DA0 (setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c)
//	80C453EC: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
//	80C45410: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  obj_kita_class* False
// 	 obj_kita_class False
asm static void daObj_Kita_Draw(obj_kita_class* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kita/d_a_obj_kita/daObj_Kita_Draw__FP14obj_kita_class.s"
}
#pragma pop


/* 80C45424-80C45430 000C+00 s=1 e=0 z=0  None .text      ride_call_back__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  dBgW* False
// 	 dBgW False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
asm static void ride_call_back(dBgW* param_0, fopAc_ac_c* param_1, fopAc_ac_c* param_2) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kita/d_a_obj_kita/ride_call_back__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C45FF0-80C45FF4 0004+00 s=2 e=0 z=0  None .bss       None                                                         */
static u8 data_80C45FF0[4];

/* 80C45FF4-80C46000 000C+00 s=1 e=0 z=0  None .bss       @3764                                                        */
static u8 lit_3764[12];

/* 80C46000-80C46018 0018+00 s=4 e=0 z=0  None .bss       l_HIO                                                        */
static u8 l_HIO[24];

/* 80C45430-80C458D8 04A8+00 s=1 e=0 z=0  None .text      ita_control__FP14obj_kita_class                              */
//	80C45480: 803621C4 (_savegpr_23)
//	80C45488: 80C45F1C (lit_3769)
//	80C4548C: 80C45F1C (lit_3769)
//	80C454BC: 8005AAF0 (dKyw_get_wind_pow__Fv)
//	80C454DC: 8026FA3C (cLib_addCalc2__FPffff)
//	80C45510: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C45514: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C45550: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80C45554: 8005AAE0 (dKyw_get_wind_vec__Fv)
//	80C4556C: 80267674 (cM_atan2s__Fff)
//	80C45574: 80450768 (calc_mtx)
//	80C45578: 80450768 (calc_mtx)
//	80C45584: 8000C3DC (mDoMtx_YrotS__FPA4_fs)
//	80C455A0: 80270EEC (MtxPosition__FP4cXyzP4cXyz)
//	80C455B0: 80C46000 (l_HIO)
//	80C455B4: 80C46000 (l_HIO)
//	80C455F8: 80439A20 (sincosTable___5JMath)
//	80C455FC: 80439A20 (sincosTable___5JMath)
//	80C4565C: 8026798C (cM_rndFX__Ff)
//	80C4567C: 8026798C (cM_rndFX__Ff)
//	80C456C0: 80C46000 (l_HIO)
//	80C456C4: 80C46000 (l_HIO)
//	80C456C8: 80439A20 (sincosTable___5JMath)
//	80C456CC: 80439A20 (sincosTable___5JMath)
//	80C456E0: 80450768 (calc_mtx)
//	80C456E4: 80450768 (calc_mtx)
//	80C457A0: 80267674 (cM_atan2s__Fff)
//	80C457C8: 80267674 (cM_atan2s__Fff)
//	80C4581C: 80270608 (cLib_addCalcAngleS2__FPssss)
//	80C45828: 8000C3DC (mDoMtx_YrotS__FPA4_fs)
//	80C45834: 8000C39C (mDoMtx_XrotM__FPA4_fs)
//	80C45840: 80270EEC (MtxPosition__FP4cXyzP4cXyz)
//	80C45850: 80266AE4 (__pl__4cXyzCFRC3Vec)
//	80C458C4: 80362210 (_restgpr_23)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  obj_kita_class* False
// 	 obj_kita_class False
asm static void ita_control(obj_kita_class* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kita/d_a_obj_kita/ita_control__FP14obj_kita_class.s"
}
#pragma pop


/* 80C458D8-80C45A10 0138+00 s=1 e=0 z=0  None .text      action__FP14obj_kita_class                                   */
//	80C458E8: 803621BC (_savegpr_21)
//	80C458F0: 80C45F1C (lit_3769)
//	80C458F4: 80C45F1C (lit_3769)
//	80C45904: 80C45430 (ita_control__FP14obj_kita_class)
//	80C45910: 80C46000 (l_HIO)
//	80C45914: 80C46000 (l_HIO)
//	80C45918: 803DD470 (now__14mDoMtx_stack_c)
//	80C4591C: 803DD470 (now__14mDoMtx_stack_c)
//	80C45948: 803468E8 (PSMTXTrans)
//	80C45954: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80C45960: 8000C39C (mDoMtx_XrotM__FPA4_fs)
//	80C4596C: 8000C4CC (mDoMtx_ZrotM__FPA4_fs)
//	80C45980: 8000CE38 (scaleM__14mDoMtx_stack_cFfff)
//	80C45990: 803DD470 (now__14mDoMtx_stack_c)
//	80C45994: 803DD470 (now__14mDoMtx_stack_c)
//	80C45998: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80C459A8: 8000CD9C (transM__14mDoMtx_stack_cFfff)
//	80C459B8: 803464B0 (PSMTXCopy)
//	80C459C8: 8000CE38 (scaleM__14mDoMtx_stack_cFfff)
//	80C459D4: 803464B0 (PSMTXCopy)
//	80C459DC: 8007B9C0 (Move__4dBgWFv)
//	80C459FC: 80362208 (_restgpr_21)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  obj_kita_class* False
// 	 obj_kita_class False
asm static void action(obj_kita_class* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kita/d_a_obj_kita/action__FP14obj_kita_class.s"
}
#pragma pop


/* 80C45A10-80C45A6C 005C+00 s=2 e=0 z=0  None .text      daObj_Kita_Execute__FP14obj_kita_class                       */
//	80C45A54: 80C458D8 (action__FP14obj_kita_class)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  obj_kita_class* False
// 	 obj_kita_class False
asm static void daObj_Kita_Execute(obj_kita_class* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kita/d_a_obj_kita/daObj_Kita_Execute__FP14obj_kita_class.s"
}
#pragma pop


/* 80C45A6C-80C45A74 0008+00 s=1 e=0 z=0  None .text      daObj_Kita_IsDelete__FP14obj_kita_class                      */
// True False
//  bool False
//  obj_kita_class* False
// 	 obj_kita_class False
static bool daObj_Kita_IsDelete(obj_kita_class* param_0) {
	return true;
}


/* ############################################################################################## */
/* 80C45F20-80C45F24 0004+00 s=0 e=0 z=0  None .rodata    @3770                                                        */
SECTION_RODATA u32 const lit_3770 = 0x3F666666;

/* 80C45F24-80C45F28 0004+00 s=0 e=0 z=0  None .rodata    @3771                                                        */
SECTION_RODATA u32 const lit_3771 = 0x43480000;

/* 80C45F28-80C45F2C 0004+00 s=0 e=0 z=0  None .rodata    @3772                                                        */
SECTION_RODATA u32 const lit_3772 = 0x3F19999A;

/* 80C45F2C-80C45F30 0004+00 s=0 e=0 z=0  None .rodata    @3897                                                        */
SECTION_RODATA u32 const lit_3897 = 0x40A00000;

/* 80C45F30-80C45F34 0004+00 s=0 e=0 z=0  None .rodata    @3898                                                        */
SECTION_RODATA u32 const lit_3898 = 0x43FA0000;

/* 80C45F34-80C45F38 0004+00 s=0 e=0 z=0  None .rodata    @3899                                                        */
SECTION_RODATA u32 const lit_3899 = 0x3F800000;

/* 80C45F38-80C45F3C 0004+00 s=0 e=0 z=0  None .rodata    @3900                                                        */
SECTION_RODATA u32 const lit_3900 = 0x41200000;

/* 80C45F3C-80C45F40 0004+00 s=0 e=0 z=0  None .rodata    @3901                                                        */
SECTION_RODATA u32 const lit_3901 = 0x40600000;

/* 80C45F40-80C45F44 0004+00 s=0 e=0 z=0  None .rodata    @3902                                                        */
SECTION_RODATA u32 const lit_3902 = 0xBF800000;

/* 80C45F44-80C45F48 0004+00 s=0 e=0 z=0  None .rodata    @3903                                                        */
SECTION_RODATA u8 const lit_3903[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80C45F48-80C45F4C 0004+00 s=0 e=0 z=0  None .rodata    @3904                                                        */
SECTION_RODATA u32 const lit_3904 = 0x460CA000;

/* 80C45F4C-80C45F50 0004+00 s=0 e=0 z=0  None .rodata    @3905                                                        */
SECTION_RODATA u32 const lit_3905 = 0x453B8000;

/* 80C45F50-80C45F54 0004+00 s=0 e=0 z=0  None .rodata    @3906                                                        */
SECTION_RODATA u32 const lit_3906 = 0x45DAC000;

/* 80C45F54-80C45F58 0004+00 s=0 e=0 z=0  None .rodata    @3907                                                        */
SECTION_RODATA u32 const lit_3907 = 0x447A0000;

/* 80C45F58-80C45F5C 0004+00 s=0 e=0 z=0  None .rodata    @3908                                                        */
SECTION_RODATA u32 const lit_3908 = 0x3D99999A;

/* 80C45F5C-80C45F60 0004+00 s=0 e=0 z=0  None .rodata    @3909                                                        */
SECTION_RODATA u32 const lit_3909 = 0xC2200000;

/* 80C45F60-80C45F64 0004+00 s=0 e=0 z=0  None .rodata    @3910                                                        */
SECTION_RODATA u32 const lit_3910 = 0x40400000;

/* 80C45F64-80C45F6C 0008+00 s=0 e=0 z=0  None .rodata    @3913                                                        */
SECTION_RODATA u8 const lit_3913[8] = {
	0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80C45F6C-80C45F70 0004+00 s=0 e=0 z=0  None .rodata    @3955                                                        */
SECTION_RODATA u32 const lit_3955 = 0xC3480000;

/* 80C45F70-80C45F74 0004+00 s=0 e=0 z=0  None .rodata    @3956                                                        */
SECTION_RODATA u32 const lit_3956 = 0x3F933333;

/* 80C45F74-80C45F78 0004+00 s=0 e=0 z=0  None .rodata    @4083                                                        */
SECTION_RODATA u32 const lit_4083 = 0x3F000000;

/* 80C45F78-80C45F7C 0004+00 s=0 e=0 z=0  None .rodata    @4084                                                        */
SECTION_RODATA u32 const lit_4084 = 0x3D4CCCCD;

/* 80C45F7C-80C45F80 0004+00 s=0 e=0 z=0  None .rodata    @4085                                                        */
SECTION_RODATA u32 const lit_4085 = 0x477FFF00;

/* 80C45F80-80C45F89 0009+00 s=3 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80C45F80 = "Obj_kita";
#pragma pop

/* 80C45A74-80C45B10 009C+00 s=1 e=0 z=0  None .text      daObj_Kita_Delete__FP14obj_kita_class                        */
//	80C45A84: 803621D8 (_savegpr_28)
//	80C45A90: 80C45F80 (stringBase0)
//	80C45A94: 80C45F80 (stringBase0)
//	80C45A98: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
//	80C45AAC: 80C45FF0 (data_80C45FF0)
//	80C45AB0: 80C45FF0 (data_80C45FF0)
//	80C45ABC: 804061C0 (g_dComIfG_gameInfo)
//	80C45AC0: 804061C0 (g_dComIfG_gameInfo)
//	80C45AD8: 80074250 (Release__4cBgSFP9dBgW_Base)
//	80C45AFC: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  obj_kita_class* False
// 	 obj_kita_class False
asm static void daObj_Kita_Delete(obj_kita_class* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kita/d_a_obj_kita/daObj_Kita_Delete__FP14obj_kita_class.s"
}
#pragma pop


/* 80C45B10-80C45C4C 013C+00 s=1 e=0 z=0  None .text      useHeapInit__FP10fopAc_ac_c                                  */
//	80C45B20: 803621C4 (_savegpr_23)
//	80C45B30: 804061C0 (g_dComIfG_gameInfo)
//	80C45B34: 804061C0 (g_dComIfG_gameInfo)
//	80C45B3C: 80C45F80 (stringBase0)
//	80C45B40: 80C45F80 (stringBase0)
//	80C45B48: 80075A24 (dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz)
//	80C45B4C: 80075A24 (dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz)
//	80C45B50: 80C45424 (ride_call_back__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c)
//	80C45B54: 80C45424 (ride_call_back__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c)
//	80C45B70: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80C45B7C: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
//	80C45BA0: 802CEC4C (__nw__FUl)
//	80C45BAC: 8007B970 (__ct__4dBgWFv)
//	80C45BDC: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80C45BF0: 80079F38 (Set__4cBgWFP6cBgD_tUlPA3_A4_f)
//	80C45C38: 80362210 (_restgpr_23)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
asm static void useHeapInit(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kita/d_a_obj_kita/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80C45C4C-80C45E44 01F8+00 s=1 e=0 z=0  None .text      daObj_Kita_Create__FP10fopAc_ac_c                            */
//	80C45C6C: 803621CC (_savegpr_25)
//	80C45C74: 80C45F1C (lit_3769)
//	80C45C78: 80C45F1C (lit_3769)
//	80C45C94: 80018B64 (__ct__10fopAc_ac_cFv)
//	80C45C9C: 80C45E80 (__ct__6kita_sFv)
//	80C45CA0: 80C45E80 (__ct__6kita_sFv)
//	80C45CA4: 80C45E44 (__dt__6kita_sFv)
//	80C45CA8: 80C45E44 (__dt__6kita_sFv)
//	80C45CB4: 80361D60 (__construct_array)
//	80C45CC8: 80C45F80 (stringBase0)
//	80C45CCC: 80C45F80 (stringBase0)
//	80C45CD0: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80C45D28: 80C45B10 (useHeapInit__FP10fopAc_ac_c)
//	80C45D2C: 80C45B10 (useHeapInit__FP10fopAc_ac_c)
//	80C45D34: 8001A4B0 (fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl)
//	80C45D50: 804061C0 (g_dComIfG_gameInfo)
//	80C45D54: 804061C0 (g_dComIfG_gameInfo)
//	80C45D78: 80074A08 (Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c)
//	80C45D90: 80267954 (cM_rndF__Ff)
//	80C45DA8: 8026798C (cM_rndFX__Ff)
//	80C45DCC: 80C45FF0 (data_80C45FF0)
//	80C45DD0: 80C45FF0 (data_80C45FF0)
//	80C45DEC: 80C46000 (l_HIO)
//	80C45DF0: 80C46000 (l_HIO)
//	80C45DFC: 80267954 (cM_rndF__Ff)
//	80C45E14: 80C45A10 (daObj_Kita_Execute__FP14obj_kita_class)
//	80C45E30: 80362218 (_restgpr_25)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
asm static void daObj_Kita_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kita/d_a_obj_kita/daObj_Kita_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80C45E44-80C45E80 003C+00 s=1 e=0 z=0  None .text      __dt__6kita_sFv                                              */
//	80C45E64: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm kita_s::~kita_s() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kita/d_a_obj_kita/__dt__6kita_sFv.s"
}
#pragma pop


/* 80C45E80-80C45E84 0004+00 s=1 e=0 z=0  None .text      __ct__6kita_sFv                                              */
// True False
kita_s::kita_s() {
	/* empty function */
}


/* 80C45E84-80C45ECC 0048+00 s=2 e=0 z=0  None .text      __dt__16daObj_Kita_HIO_cFv                                   */
//	80C45E9C: 80C45FDC (__vt__16daObj_Kita_HIO_c)
//	80C45EA0: 80C45FDC (__vt__16daObj_Kita_HIO_c)
//	80C45EB0: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm daObj_Kita_HIO_c::~daObj_Kita_HIO_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kita/d_a_obj_kita/__dt__16daObj_Kita_HIO_cFv.s"
}
#pragma pop


/* 80C45ECC-80C45F08 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_kita_cpp                                     */
//	80C45ED8: 80C46000 (l_HIO)
//	80C45EDC: 80C46000 (l_HIO)
//	80C45EE0: 80C4534C (__ct__16daObj_Kita_HIO_cFv)
//	80C45EE4: 80C45E84 (__dt__16daObj_Kita_HIO_cFv)
//	80C45EE8: 80C45E84 (__dt__16daObj_Kita_HIO_cFv)
//	80C45EEC: 80C45FF4 (lit_3764)
//	80C45EF0: 80C45FF4 (lit_3764)
//	80C45EF4: 80C452D8 (__register_global_object)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __sinit_d_a_obj_kita_cpp() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kita/d_a_obj_kita/__sinit_d_a_obj_kita_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
#pragma section ".ctors$15"
__declspec(section ".ctors$15") void* const _ctors_80C45ECC = (void*)__sinit_d_a_obj_kita_cpp;
#pragma pop


