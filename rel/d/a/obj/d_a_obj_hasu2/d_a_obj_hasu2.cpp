// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_hasu2
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_hasu2/d_a_obj_hasu2.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct nObjMHasu {
	struct daObjMHasu_c {
		/* 80C182DC */ // True False
daObjMHasu_c();
		/* 80C18340 */ // True False
void create1st();
		/* 80C183D0 */ // True False
void setMtx();
		/* 80C18440 */ // True False
void CreateHeap();
		/* 80C184B0 */ // True False
void Create();
		/* 80C185A4 */ // True False
//  f32 (** )[3][4] False
// 	 f32 False
// 	 ** False
// 		 * False
// 			  False
void Execute(f32 (** )[3][4]);
		/* 80C18600 */ // True False
void Draw();
		/* 80C186A4 */ // True False
void Delete();
		/* 80C186E0 */ // True False
void upDownHasu();
		/* 80C18888 */ // True False
//  u8 False
void updateCount(u8);
		/* 80C188A0 */ // True False
//  f32 False
void setHasuCount(f32);
		/* 80C189E0 */ // True False
~daObjMHasu_c();
	};

};

struct fopAc_ac_c {
	/* 80018C8C */ // False False
~fopAc_ac_c();
};

struct cXyz {
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

struct dBgW {
};

struct csXyz {
};

struct cBgS_PolyInfo {
};

struct dBgS_MoveBgActor {
	/* 80078624 */ // False False
dBgS_MoveBgActor();
	/* 800786B0 */ // False False
//  bool False
bool IsDelete();
	/* 800786B8 */ // False False
//  bool False
bool ToFore();
	/* 800786C0 */ // False False
//  bool False
bool ToBack();
	/* 800787BC */ // False False
//  char const* False
// 	 char const False
// 		 char False
//  int False
//  void (*)(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*) False
// 	 * False
// 		  False
// 	 void False
// 	 dBgW* False
// 		 dBgW False
// 	 void* False
// 		 void False
// 	 cBgS_PolyInfo const& False
// 		 cBgS_PolyInfo const False
// 			 cBgS_PolyInfo False
// 	 bool False
// 	 cXyz* False
// 		 cXyz False
// 	 csXyz* False
// 		 csXyz False
// 	 csXyz* False
// 		 csXyz False
//  u32 False
//  f32 (* )[3][4] False
// 	 f32 False
// 	 * False
// 		  False
void MoveBGCreate(char const*, int, void (*)(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*), u32, f32 (* )[3][4]);
	/* 800788DC */ // False False
void MoveBGDelete();
	/* 80078950 */ // False False
void MoveBGExecute();
};

struct Vec {
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
//  dBgW* False
// 	 dBgW False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
static void rideCallBack(dBgW*, fopAc_ac_c*, fopAc_ac_c*);
// True False
//  nObjMHasu::daObjMHasu_c* False
// 	 nObjMHasu::daObjMHasu_c False
static void daObjMHasu_create1st(nObjMHasu::daObjMHasu_c*);
// True False
//  nObjMHasu::daObjMHasu_c* False
// 	 nObjMHasu::daObjMHasu_c False
static void daObjMHasu_MoveBGDelete(nObjMHasu::daObjMHasu_c*);
// True False
//  nObjMHasu::daObjMHasu_c* False
// 	 nObjMHasu::daObjMHasu_c False
static void daObjMHasu_MoveBGExecute(nObjMHasu::daObjMHasu_c*);
// True False
//  nObjMHasu::daObjMHasu_c* False
// 	 nObjMHasu::daObjMHasu_c False
static void daObjMHasu_MoveBGDraw(nObjMHasu::daObjMHasu_c*);

// True False
//  dBgW* False
// 	 dBgW False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" static void rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c();
// True False
extern "C" void __ct__Q29nObjMHasu12daObjMHasu_cFv();
// True False
extern "C" void create1st__Q29nObjMHasu12daObjMHasu_cFv();
// True False
extern "C" void setMtx__Q29nObjMHasu12daObjMHasu_cFv();
// True False
extern "C" void CreateHeap__Q29nObjMHasu12daObjMHasu_cFv();
// True False
extern "C" void Create__Q29nObjMHasu12daObjMHasu_cFv();
// True False
//  f32 (** )[3][4] False
// 	 f32 False
// 	 ** False
// 		 * False
// 			  False
extern "C" void Execute__Q29nObjMHasu12daObjMHasu_cFPPA3_A4_f();
// True False
extern "C" void Draw__Q29nObjMHasu12daObjMHasu_cFv();
// True False
extern "C" void Delete__Q29nObjMHasu12daObjMHasu_cFv();
// True False
extern "C" void upDownHasu__Q29nObjMHasu12daObjMHasu_cFv();
// True False
//  u8 False
extern "C" void updateCount__Q29nObjMHasu12daObjMHasu_cFUc();
// True False
//  f32 False
extern "C" void setHasuCount__Q29nObjMHasu12daObjMHasu_cFf();
// True False
//  nObjMHasu::daObjMHasu_c* False
// 	 nObjMHasu::daObjMHasu_c False
extern "C" static void daObjMHasu_create1st__FPQ29nObjMHasu12daObjMHasu_c();
// True False
//  nObjMHasu::daObjMHasu_c* False
// 	 nObjMHasu::daObjMHasu_c False
extern "C" static void daObjMHasu_MoveBGDelete__FPQ29nObjMHasu12daObjMHasu_c();
// True False
//  nObjMHasu::daObjMHasu_c* False
// 	 nObjMHasu::daObjMHasu_c False
extern "C" static void daObjMHasu_MoveBGExecute__FPQ29nObjMHasu12daObjMHasu_c();
// True False
//  nObjMHasu::daObjMHasu_c* False
// 	 nObjMHasu::daObjMHasu_c False
extern "C" static void daObjMHasu_MoveBGDraw__FPQ29nObjMHasu12daObjMHasu_c();
// True False
extern "C" void __dt__Q29nObjMHasu12daObjMHasu_cFv();
extern "C" extern u32 const lit_3634;
extern "C" extern u32 const lit_3635;
extern "C" extern u32 const lit_3636;
extern "C" extern u32 const lit_3685;
extern "C" extern u32 const lit_3686;
extern "C" extern u32 const lit_3687;
extern "C" extern u32 const lit_3757;
extern "C" extern u32 const lit_3758;
extern "C" extern u32 const lit_3759;
extern "C" extern u8 const lit_3760[4];
extern "C" extern u32 const lit_3782;
extern "C" extern u32 const lit_3783;
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_MHasu[12];
extern "C" extern void* __vt__Q29nObjMHasu12daObjMHasu_c[11];

// 
// External References:
// 

// False False
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
//  s16 False
void mDoMtx_YrotM(f32 (* )[4], s16);
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
//  f32 False
//  f32 False
//  f32 False
//  f32 False
//  f32 False
//  f32 False
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
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
void dBgS_MoveBGProc_TypicalRotY(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
// False False
void cM_rnd();
// False False
//  f32 False
void cM_rndF(f32);
// False False
//  f32* False
// 	 f32 False
//  f32 False
//  f32 False
//  f32 False
//  f32 False
void cLib_addCalc(f32*, f32, f32, f32, f32);
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
extern "C" void mDoMtx_YrotM__FPA4_fs();
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
extern "C" void __dt__10fopAc_ac_cFv();
// False False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  f32 False
//  f32 False
//  f32 False
//  f32 False
//  f32 False
//  f32 False
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
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
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
// False False
extern "C" void __ct__16dBgS_MoveBgActorFv();
// False False
//  bool False
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
// False False
//  bool False
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
// False False
//  bool False
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
// False False
//  char const* False
// 	 char const False
// 		 char False
//  int False
//  void (*)(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*) False
// 	 * False
// 		  False
// 	 void False
// 	 dBgW* False
// 		 dBgW False
// 	 void* False
// 		 void False
// 	 cBgS_PolyInfo const& False
// 		 cBgS_PolyInfo const False
// 			 cBgS_PolyInfo False
// 	 bool False
// 	 cXyz* False
// 		 cXyz False
// 	 csXyz* False
// 		 csXyz False
// 	 csXyz* False
// 		 csXyz False
//  u32 False
//  f32 (* )[3][4] False
// 	 f32 False
// 	 * False
// 		  False
extern "C" void MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
// False False
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
// False False
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
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
extern "C" void cM_rnd__Fv();
// False False
//  f32 False
extern "C" void cM_rndF__Ff();
// False False
//  f32* False
// 	 f32 False
//  f32 False
//  f32 False
//  f32 False
//  f32 False
extern "C" void cLib_addCalc__FPfffff();
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
//  void False
//  void* False
// 	 void False
extern "C" void __dl__FPv();
// False False
extern "C" void PSMTXCopy();
// False False
extern "C" void PSMTXTrans();
// False False
extern "C" void __cvt_fp2unsigned();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__16dBgS_MoveBgActor[10];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

// 
// Declarations:
// 

/* 80C18298-80C182DC 0044+00 s=1 e=0 z=0  None .text      rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c              */
//	80C182C8: 80C188A0 (setHasuCount__Q29nObjMHasu12daObjMHasu_cFf)
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
asm static void rideCallBack(dBgW* param_0, fopAc_ac_c* param_1, fopAc_ac_c* param_2) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hasu2/d_a_obj_hasu2/rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C18A58-80C18A70 0018+00 s=4 e=0 z=0  None .rodata    l_cull_box                                                   */
SECTION_RODATA static u8 const l_cull_box[24] = {
	0xC2, 0xF6, 0x00, 0x00, 0xC3, 0x2F, 0x00, 0x00, 0xC3, 0x0E, 0x00, 0x00, 0x43, 0x05, 0x00, 0x00,
	0x41, 0xE8, 0x00, 0x00, 0x42, 0xFE, 0x00, 0x00,
};

/* 80C18A70-80C18A74 0004+00 s=0 e=0 z=0  None .rodata    @3634                                                        */
SECTION_RODATA u32 const lit_3634 = 0x41CC0000;

/* 80C18A74-80C18A78 0004+00 s=0 e=0 z=0  None .rodata    @3635                                                        */
SECTION_RODATA u32 const lit_3635 = 0x40D00000;

/* 80C18A78-80C18A7C 0004+00 s=0 e=0 z=0  None .rodata    @3636                                                        */
SECTION_RODATA u32 const lit_3636 = 0x40B00000;

/* 80C18A7C-80C18A80 0004+00 s=0 e=0 z=0  None .rodata    @3685                                                        */
SECTION_RODATA u32 const lit_3685 = 0x3F000000;

/* 80C18A80-80C18A84 0004+00 s=0 e=0 z=0  None .rodata    @3686                                                        */
SECTION_RODATA u32 const lit_3686 = 0x3EB33333;

/* 80C18A84-80C18A88 0004+00 s=0 e=0 z=0  None .rodata    @3687                                                        */
SECTION_RODATA u32 const lit_3687 = 0x3E4CCCCD;

/* 80C18A88-80C18A8C 0004+00 s=0 e=0 z=0  None .rodata    @3757                                                        */
SECTION_RODATA u32 const lit_3757 = 0x40C00000;

/* 80C18A8C-80C18A90 0004+00 s=0 e=0 z=0  None .rodata    @3758                                                        */
SECTION_RODATA u32 const lit_3758 = 0x3F800000;

/* 80C18A90-80C18A94 0004+00 s=0 e=0 z=0  None .rodata    @3759                                                        */
SECTION_RODATA u32 const lit_3759 = 0xBF800000;

/* 80C18A94-80C18A98 0004+00 s=0 e=0 z=0  None .rodata    @3760                                                        */
SECTION_RODATA u8 const lit_3760[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80C18A98-80C18A9C 0004+00 s=0 e=0 z=0  None .rodata    @3782                                                        */
SECTION_RODATA u32 const lit_3782 = 0x3FC00000;

/* 80C18A9C-80C18AA0 0004+00 s=0 e=0 z=0  None .rodata    @3783                                                        */
SECTION_RODATA u32 const lit_3783 = 0x41200000;

/* 80C18AA0-80C18AA7 0007+00 s=1 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80C18AA0 = "M_Hasu";
#pragma pop

/* 80C18AA8-80C18AAC 0004+00 s=3 e=0 z=0  None .data      l_arcName                                                    */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80C18AAC-80C18ACC 0020+00 s=1 e=0 z=0  None .data      daObjMHasu_METHODS                                           */
SECTION_DATA static void* daObjMHasu_METHODS[8] = {
	(void*)daObjMHasu_create1st__FPQ29nObjMHasu12daObjMHasu_c,
	(void*)daObjMHasu_MoveBGDelete__FPQ29nObjMHasu12daObjMHasu_c,
	(void*)daObjMHasu_MoveBGExecute__FPQ29nObjMHasu12daObjMHasu_c,
	(void*)NULL,
	(void*)daObjMHasu_MoveBGDraw__FPQ29nObjMHasu12daObjMHasu_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80C18ACC-80C18AFC 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_MHasu                                          */
SECTION_DATA void* g_profile_Obj_MHasu[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0003FFFD,
	(void*)0x00CB0000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000634,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x029A0000,
	(void*)&daObjMHasu_METHODS,
	(void*)0x00040100,
	(void*)0x000E0000,
};

/* 80C18AFC-80C18B28 002C+00 s=2 e=0 z=0  None .data      __vt__Q29nObjMHasu12daObjMHasu_c                             */
SECTION_DATA void* __vt__Q29nObjMHasu12daObjMHasu_c[11] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)CreateHeap__Q29nObjMHasu12daObjMHasu_cFv,
	(void*)Create__Q29nObjMHasu12daObjMHasu_cFv,
	(void*)Execute__Q29nObjMHasu12daObjMHasu_cFPPA3_A4_f,
	(void*)Draw__Q29nObjMHasu12daObjMHasu_cFv,
	(void*)Delete__Q29nObjMHasu12daObjMHasu_cFv,
	(void*)IsDelete__16dBgS_MoveBgActorFv,
	(void*)ToFore__16dBgS_MoveBgActorFv,
	(void*)ToBack__16dBgS_MoveBgActorFv,
	(void*)__dt__Q29nObjMHasu12daObjMHasu_cFv,
};

/* 80C182DC-80C18340 0064+00 s=1 e=0 z=0  None .text      __ct__Q29nObjMHasu12daObjMHasu_cFv                           */
//	80C182F4: 80C18A58 (l_cull_box)
//	80C182F8: 80C18A58 (l_cull_box)
//	80C182FC: 80078624 (__ct__16dBgS_MoveBgActorFv)
//	80C18300: 80C18AFC (__vt__Q29nObjMHasu12daObjMHasu_c)
//	80C18304: 80C18AFC (__vt__Q29nObjMHasu12daObjMHasu_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm nObjMHasu::daObjMHasu_c::daObjMHasu_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hasu2/d_a_obj_hasu2/__ct__Q29nObjMHasu12daObjMHasu_cFv.s"
}
#pragma pop


/* 80C18340-80C183D0 0090+00 s=1 e=0 z=0  None .text      create1st__Q29nObjMHasu12daObjMHasu_cFv                      */
//	80C1835C: 80C18AA8 (l_arcName)
//	80C18360: 80C18AA8 (l_arcName)
//	80C18368: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80C1837C: 80C183D0 (setMtx__Q29nObjMHasu12daObjMHasu_cFv)
//	80C18384: 80C18AA8 (l_arcName)
//	80C18388: 80C18AA8 (l_arcName)
//	80C18394: 80075AD8 (dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz)
//	80C18398: 80075AD8 (dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz)
//	80C183A4: 800787BC (MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void nObjMHasu::daObjMHasu_c::create1st() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hasu2/d_a_obj_hasu2/create1st__Q29nObjMHasu12daObjMHasu_cFv.s"
}
#pragma pop


/* 80C183D0-80C18440 0070+00 s=2 e=0 z=0  None .text      setMtx__Q29nObjMHasu12daObjMHasu_cFv                         */
//	80C183E4: 803DD470 (now__14mDoMtx_stack_c)
//	80C183E8: 803DD470 (now__14mDoMtx_stack_c)
//	80C183F8: 803468E8 (PSMTXTrans)
//	80C183FC: 803DD470 (now__14mDoMtx_stack_c)
//	80C18400: 803DD470 (now__14mDoMtx_stack_c)
//	80C18408: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80C1840C: 803DD470 (now__14mDoMtx_stack_c)
//	80C18410: 803DD470 (now__14mDoMtx_stack_c)
//	80C18418: 803464B0 (PSMTXCopy)
//	80C1841C: 803DD470 (now__14mDoMtx_stack_c)
//	80C18420: 803DD470 (now__14mDoMtx_stack_c)
//	80C18428: 803464B0 (PSMTXCopy)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void nObjMHasu::daObjMHasu_c::setMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hasu2/d_a_obj_hasu2/setMtx__Q29nObjMHasu12daObjMHasu_cFv.s"
}
#pragma pop


/* 80C18440-80C184B0 0070+00 s=1 e=0 z=0  None .text      CreateHeap__Q29nObjMHasu12daObjMHasu_cFv                     */
//	80C18454: 80C18AA8 (l_arcName)
//	80C18458: 80C18AA8 (l_arcName)
//	80C18464: 804061C0 (g_dComIfG_gameInfo)
//	80C18468: 804061C0 (g_dComIfG_gameInfo)
//	80C18478: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80C18488: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void nObjMHasu::daObjMHasu_c::CreateHeap() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hasu2/d_a_obj_hasu2/CreateHeap__Q29nObjMHasu12daObjMHasu_cFv.s"
}
#pragma pop


/* 80C184B0-80C185A4 00F4+00 s=1 e=0 z=0  None .text      Create__Q29nObjMHasu12daObjMHasu_cFv                         */
//	80C184C8: 80C18A58 (l_cull_box)
//	80C184CC: 80C18A58 (l_cull_box)
//	80C184DC: 803464B0 (PSMTXCopy)
//	80C18508: 8001A548 (fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff)
//	80C1850C: 80C18298 (rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c)
//	80C18510: 80C18298 (rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c)
//	80C1852C: 8026786C (cM_rnd__Fv)
//	80C18570: 80267954 (cM_rndF__Ff)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void nObjMHasu::daObjMHasu_c::Create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hasu2/d_a_obj_hasu2/Create__Q29nObjMHasu12daObjMHasu_cFv.s"
}
#pragma pop


/* 80C185A4-80C18600 005C+00 s=1 e=0 z=0  None .text      Execute__Q29nObjMHasu12daObjMHasu_cFPPA3_A4_f                */
//	80C185C0: 80C183D0 (setMtx__Q29nObjMHasu12daObjMHasu_cFv)
//	80C185D0: 803464B0 (PSMTXCopy)
//	80C185E0: 80C186E0 (upDownHasu__Q29nObjMHasu12daObjMHasu_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  f32 (** )[3][4] False
// 	 f32 False
// 	 ** False
// 		 * False
// 			  False
asm void nObjMHasu::daObjMHasu_c::Execute(f32 (** param_0)[3][4]) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hasu2/d_a_obj_hasu2/Execute__Q29nObjMHasu12daObjMHasu_cFPPA3_A4_f.s"
}
#pragma pop


/* 80C18600-80C186A4 00A4+00 s=1 e=0 z=0  None .text      Draw__Q29nObjMHasu12daObjMHasu_cFv                           */
//	80C18618: 8042CA54 (g_env_light)
//	80C1861C: 8042CA54 (g_env_light)
//	80C1862C: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80C18630: 8042CA54 (g_env_light)
//	80C18634: 8042CA54 (g_env_light)
//	80C18644: 801A4DA0 (setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c)
//	80C18648: 804061C0 (g_dComIfG_gameInfo)
//	80C1864C: 804061C0 (g_dComIfG_gameInfo)
//	80C18654: 80434AC8 (j3dSys)
//	80C18658: 80434AC8 (j3dSys)
//	80C1866C: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
//	80C18670: 804061C0 (g_dComIfG_gameInfo)
//	80C18674: 804061C0 (g_dComIfG_gameInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void nObjMHasu::daObjMHasu_c::Draw() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hasu2/d_a_obj_hasu2/Draw__Q29nObjMHasu12daObjMHasu_cFv.s"
}
#pragma pop


/* 80C186A4-80C186E0 003C+00 s=1 e=0 z=0  None .text      Delete__Q29nObjMHasu12daObjMHasu_cFv                         */
//	80C186BC: 80C18AA8 (l_arcName)
//	80C186C0: 80C18AA8 (l_arcName)
//	80C186C8: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void nObjMHasu::daObjMHasu_c::Delete() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hasu2/d_a_obj_hasu2/Delete__Q29nObjMHasu12daObjMHasu_cFv.s"
}
#pragma pop


/* 80C186E0-80C18888 01A8+00 s=1 e=0 z=0  None .text      upDownHasu__Q29nObjMHasu12daObjMHasu_cFv                     */
//	80C18708: 80C18A58 (l_cull_box)
//	80C1870C: 80C18A58 (l_cull_box)
//	80C187D8: 803620AC (__cvt_fp2unsigned)
//	80C187E0: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C187E4: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C1880C: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80C18824: 8026F97C (cLib_addCalc__FPfffff)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void nObjMHasu::daObjMHasu_c::upDownHasu() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hasu2/d_a_obj_hasu2/upDownHasu__Q29nObjMHasu12daObjMHasu_cFv.s"
}
#pragma pop


/* 80C18888-80C188A0 0018+00 s=1 e=0 z=0  None .text      updateCount__Q29nObjMHasu12daObjMHasu_cFUc                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  u8 False
asm void nObjMHasu::daObjMHasu_c::updateCount(u8 param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hasu2/d_a_obj_hasu2/updateCount__Q29nObjMHasu12daObjMHasu_cFUc.s"
}
#pragma pop


/* 80C188A0-80C18920 0080+00 s=1 e=0 z=0  None .text      setHasuCount__Q29nObjMHasu12daObjMHasu_cFf                   */
//	80C188AC: 80C18A58 (l_cull_box)
//	80C188B0: 80C18A58 (l_cull_box)
//	80C188E8: 80C18888 (updateCount__Q29nObjMHasu12daObjMHasu_cFUc)
//	80C18900: 80C18888 (updateCount__Q29nObjMHasu12daObjMHasu_cFUc)
//	80C1890C: 80C18888 (updateCount__Q29nObjMHasu12daObjMHasu_cFUc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  f32 False
asm void nObjMHasu::daObjMHasu_c::setHasuCount(f32 param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hasu2/d_a_obj_hasu2/setHasuCount__Q29nObjMHasu12daObjMHasu_cFf.s"
}
#pragma pop


/* 80C18920-80C18974 0054+00 s=1 e=0 z=0  None .text      daObjMHasu_create1st__FPQ29nObjMHasu12daObjMHasu_c           */
//	80C18948: 80C182DC (__ct__Q29nObjMHasu12daObjMHasu_cFv)
//	80C1895C: 80C18340 (create1st__Q29nObjMHasu12daObjMHasu_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  nObjMHasu::daObjMHasu_c* False
// 	 nObjMHasu::daObjMHasu_c False
asm static void daObjMHasu_create1st(nObjMHasu::daObjMHasu_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hasu2/d_a_obj_hasu2/daObjMHasu_create1st__FPQ29nObjMHasu12daObjMHasu_c.s"
}
#pragma pop


/* 80C18974-80C18994 0020+00 s=1 e=0 z=0  None .text      daObjMHasu_MoveBGDelete__FPQ29nObjMHasu12daObjMHasu_c        */
//	80C18980: 800788DC (MoveBGDelete__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  nObjMHasu::daObjMHasu_c* False
// 	 nObjMHasu::daObjMHasu_c False
asm static void daObjMHasu_MoveBGDelete(nObjMHasu::daObjMHasu_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hasu2/d_a_obj_hasu2/daObjMHasu_MoveBGDelete__FPQ29nObjMHasu12daObjMHasu_c.s"
}
#pragma pop


/* 80C18994-80C189B4 0020+00 s=1 e=0 z=0  None .text      daObjMHasu_MoveBGExecute__FPQ29nObjMHasu12daObjMHasu_c       */
//	80C189A0: 80078950 (MoveBGExecute__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  nObjMHasu::daObjMHasu_c* False
// 	 nObjMHasu::daObjMHasu_c False
asm static void daObjMHasu_MoveBGExecute(nObjMHasu::daObjMHasu_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hasu2/d_a_obj_hasu2/daObjMHasu_MoveBGExecute__FPQ29nObjMHasu12daObjMHasu_c.s"
}
#pragma pop


/* 80C189B4-80C189E0 002C+00 s=1 e=0 z=0  None .text      daObjMHasu_MoveBGDraw__FPQ29nObjMHasu12daObjMHasu_c          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  nObjMHasu::daObjMHasu_c* False
// 	 nObjMHasu::daObjMHasu_c False
asm static void daObjMHasu_MoveBGDraw(nObjMHasu::daObjMHasu_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hasu2/d_a_obj_hasu2/daObjMHasu_MoveBGDraw__FPQ29nObjMHasu12daObjMHasu_c.s"
}
#pragma pop


/* 80C189E0-80C18A50 0070+00 s=1 e=0 z=0  None .text      __dt__Q29nObjMHasu12daObjMHasu_cFv                           */
//	80C18A00: 80C18AFC (__vt__Q29nObjMHasu12daObjMHasu_c)
//	80C18A04: 80C18AFC (__vt__Q29nObjMHasu12daObjMHasu_c)
//	80C18A10: 803AB9A0 (__vt__16dBgS_MoveBgActor)
//	80C18A14: 803AB9A0 (__vt__16dBgS_MoveBgActor)
//	80C18A20: 80018C8C (__dt__10fopAc_ac_cFv)
//	80C18A30: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm nObjMHasu::daObjMHasu_c::~daObjMHasu_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hasu2/d_a_obj_hasu2/__dt__Q29nObjMHasu12daObjMHasu_cFv.s"
}
#pragma pop


