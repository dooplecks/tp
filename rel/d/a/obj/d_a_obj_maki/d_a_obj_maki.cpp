// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_maki
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_maki/d_a_obj_maki.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct obj_maki_class {
};

struct J3DAnmTevRegKey {
};

struct J3DMaterialTable {
};

struct mDoExt_brkAnm {
	/* 8000D70C */ // False False
//  J3DMaterialTable* False
// 	 J3DMaterialTable False
//  J3DAnmTevRegKey* False
// 	 J3DAnmTevRegKey False
//  int False
//  int False
//  f32 False
//  s16 False
//  s16 False
void init(J3DMaterialTable*, J3DAnmTevRegKey*, int, int, f32, s16, s16);
	/* 8000D7A8 */ // False False
//  J3DMaterialTable* False
// 	 J3DMaterialTable False
//  f32 False
void entry(J3DMaterialTable*, f32);
};

struct mDoExt_baseAnm {
	/* 8000D428 */ // False False
void play();
};

struct fopAc_ac_c {
	/* 80018B64 */ // False False
fopAc_ac_c();
};

struct daObj_Maki_HIO_c {
	/* 80C8FE0C */ // True False
daObj_Maki_HIO_c();
	/* 80C9089C */ // True False
~daObj_Maki_HIO_c();
};

struct dSv_info_c {
	/* 80035200 */ // False False
//  int False
//  int False
void onSwitch(int, int);
	/* 80035360 */ // False False
//  int False
//  int False
void isSwitch(int, int) const;
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

struct dPa_levelEcallBack {
};

struct csXyz {
};

struct _GXColor {
};

struct dPa_control_c {
	/* 8004CA90 */ // False False
//  u8 False
//  u16 False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  dKy_tevstr_c const* False
// 	 dKy_tevstr_c const False
// 		 dKy_tevstr_c False
//  csXyz const* False
// 	 csXyz const False
// 		 csXyz False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  u8 False
//  dPa_levelEcallBack* False
// 	 dPa_levelEcallBack False
//  s8 False
//  _GXColor const* False
// 	 _GXColor const False
// 		 _GXColor False
//  _GXColor const* False
// 	 _GXColor const False
// 		 _GXColor False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  f32 False
void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*, cXyz const*, f32);
	/* 8004D4CC */ // False False
//  u32 False
//  u8 False
//  u16 False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  dKy_tevstr_c const* False
// 	 dKy_tevstr_c const False
// 		 dKy_tevstr_c False
//  csXyz const* False
// 	 csXyz const False
// 		 csXyz False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  u8 False
//  dPa_levelEcallBack* False
// 	 dPa_levelEcallBack False
//  s8 False
//  _GXColor const* False
// 	 _GXColor const False
// 		 _GXColor False
//  _GXColor const* False
// 	 _GXColor const False
// 		 _GXColor False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  f32 False
void set(u32, u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*, cXyz const*, f32);
};

struct dCcD_Stts {
	/* 80083860 */ // False False
//  int False
//  int False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcSph {
};

struct dCcD_Sph {
	/* 80084A34 */ // False False
//  dCcD_SrcSph const& False
// 	 dCcD_SrcSph const False
// 		 dCcD_SrcSph False
void Set(dCcD_SrcSph const&);
};

struct dCcD_GStts {
	/* 80083760 */ // False False
dCcD_GStts();
};

struct dCcD_GObjInf {
	/* 80083A28 */ // False False
dCcD_GObjInf();
	/* 800842C0 */ // False False
void ChkAtHit();
	/* 80084460 */ // False False
void ChkTgHit();
	/* 80084658 */ // False False
void ChkCoHit();
	/* 800846F0 */ // False False
void GetCoHitObj();
};

struct cM3dGSph {
	/* 8026F648 */ // False False
//  cXyz const& False
// 	 cXyz const False
// 		 cXyz False
void SetC(cXyz const&);
	/* 8026F708 */ // False False
//  f32 False
void SetR(f32);
	/* 80C9080C */ // True False
~cM3dGSph();
};

struct cM3dGAab {
	/* 80C90854 */ // True False
~cM3dGAab();
};

struct cCcD_Obj {
	/* 80263A48 */ // False False
void GetAc();
};

struct cCcS {
	/* 80264BA8 */ // False False
//  cCcD_Obj* False
// 	 cCcD_Obj False
void Set(cCcD_Obj*);
};

struct Vec {
};

struct JAISoundID {
};

struct Z2SeMgr {
	/* 802AB984 */ // False False
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
void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
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

struct LIGHT_INFLUENCE {
};

struct J3DModel {
};

struct J3DFrameCtrl {
	/* 803283FC */ // False False
//  s16 False
void init(s16);
	/* 80C90544 */ // True False
~J3DFrameCtrl();
};

// 
// Forward References:
// 

// True False
//  obj_maki_class* False
// 	 obj_maki_class False
static void daObj_Maki_Draw(obj_maki_class*);
// True False
//  obj_maki_class* False
// 	 obj_maki_class False
static void daObj_Maki_Execute(obj_maki_class*);
// True False
//  bool False
//  obj_maki_class* False
// 	 obj_maki_class False
static bool daObj_Maki_IsDelete(obj_maki_class*);
// True False
//  obj_maki_class* False
// 	 obj_maki_class False
static void daObj_Maki_Delete(obj_maki_class*);
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
static void useHeapInit(fopAc_ac_c*);
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
static void daObj_Maki_Create(fopAc_ac_c*);

// True False
extern "C" void __ct__16daObj_Maki_HIO_cFv();
// True False
//  obj_maki_class* False
// 	 obj_maki_class False
extern "C" static void daObj_Maki_Draw__FP14obj_maki_class();
// True False
//  obj_maki_class* False
// 	 obj_maki_class False
extern "C" static void daObj_Maki_Execute__FP14obj_maki_class();
// True False
//  bool False
//  obj_maki_class* False
// 	 obj_maki_class False
extern "C" static bool daObj_Maki_IsDelete__FP14obj_maki_class();
// True False
//  obj_maki_class* False
// 	 obj_maki_class False
extern "C" static void daObj_Maki_Delete__FP14obj_maki_class();
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" static void useHeapInit__FP10fopAc_ac_c();
// True False
extern "C" void __dt__12J3DFrameCtrlFv();
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" static void daObj_Maki_Create__FP10fopAc_ac_c();
// True False
extern "C" void __dt__8cM3dGSphFv();
// True False
extern "C" void __dt__8cM3dGAabFv();
// True False
extern "C" void __dt__16daObj_Maki_HIO_cFv();
// False False
extern "C" void __sinit_d_a_obj_maki_cpp();
extern "C" extern u32 const lit_3929;
extern "C" extern u32 const lit_3930;
extern "C" extern u32 const lit_3931;
extern "C" extern u32 const lit_3932;
extern "C" extern u8 const lit_3934[4];
extern "C" extern u32 const lit_3935;
extern "C" extern u32 const lit_4075;
extern "C" extern u32 const lit_4076;
extern "C" extern u32 const lit_4077;
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_OBJ_MAKI[12];
extern "C" extern void* __vt__8cM3dGSph[3];
extern "C" extern void* __vt__8cM3dGAab[3];
extern "C" extern void* __vt__12J3DFrameCtrl[3];
extern "C" extern void* __vt__16daObj_Maki_HIO_c[3];

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
//  int (*)(fopAc_ac_c*) False
// 	 * False
// 		  False
// 	 int False
// 	 fopAc_ac_c* False
// 		 fopAc_ac_c False
//  u32 False
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
// False False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  f32 False
//  f32 False
//  f32 False
void fopAcM_SetMin(fopAc_ac_c*, f32, f32, f32);
// False False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  f32 False
//  f32 False
//  f32 False
void fopAcM_SetMax(fopAc_ac_c*, f32, f32, f32);
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
//  int False
void dComIfGp_getReverb(int);
// False False
//  LIGHT_INFLUENCE* False
// 	 LIGHT_INFLUENCE False
void dKy_plight_set(LIGHT_INFLUENCE*);
// False False
//  LIGHT_INFLUENCE* False
// 	 LIGHT_INFLUENCE False
void dKy_plight_cut(LIGHT_INFLUENCE*);
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
extern "C" void mDoMtx_YrotM__FPA4_fs();
// False False
extern "C" void play__14mDoExt_baseAnmFv();
// False False
//  J3DMaterialTable* False
// 	 J3DMaterialTable False
//  J3DAnmTevRegKey* False
// 	 J3DAnmTevRegKey False
//  int False
//  int False
//  f32 False
//  s16 False
//  s16 False
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
// False False
//  J3DMaterialTable* False
// 	 J3DMaterialTable False
//  f32 False
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
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
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  f32 False
//  f32 False
//  f32 False
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
// False False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  f32 False
//  f32 False
//  f32 False
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
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
//  int False
extern "C" void dComIfGp_getReverb__Fi();
// False False
//  int False
//  int False
extern "C" void onSwitch__10dSv_info_cFii();
// False False
//  int False
//  int False
extern "C" void isSwitch__10dSv_info_cCFii();
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
//  u8 False
//  u16 False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  dKy_tevstr_c const* False
// 	 dKy_tevstr_c const False
// 		 dKy_tevstr_c False
//  csXyz const* False
// 	 csXyz const False
// 		 csXyz False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  u8 False
//  dPa_levelEcallBack* False
// 	 dPa_levelEcallBack False
//  s8 False
//  _GXColor const* False
// 	 _GXColor const False
// 		 _GXColor False
//  _GXColor const* False
// 	 _GXColor const False
// 		 _GXColor False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  f32 False
extern "C" void set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
// False False
//  u32 False
//  u8 False
//  u16 False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  dKy_tevstr_c const* False
// 	 dKy_tevstr_c const False
// 		 dKy_tevstr_c False
//  csXyz const* False
// 	 csXyz const False
// 		 csXyz False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  u8 False
//  dPa_levelEcallBack* False
// 	 dPa_levelEcallBack False
//  s8 False
//  _GXColor const* False
// 	 _GXColor const False
// 		 _GXColor False
//  _GXColor const* False
// 	 _GXColor const False
// 		 _GXColor False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  f32 False
extern "C" void set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
// False False
extern "C" void __ct__10dCcD_GSttsFv();
// False False
//  int False
//  int False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
// False False
extern "C" void __ct__12dCcD_GObjInfFv();
// False False
extern "C" void ChkAtHit__12dCcD_GObjInfFv();
// False False
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
// False False
extern "C" void ChkCoHit__12dCcD_GObjInfFv();
// False False
extern "C" void GetCoHitObj__12dCcD_GObjInfFv();
// False False
//  dCcD_SrcSph const& False
// 	 dCcD_SrcSph const False
// 		 dCcD_SrcSph False
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
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
//  LIGHT_INFLUENCE* False
// 	 LIGHT_INFLUENCE False
extern "C" void dKy_plight_set__FP15LIGHT_INFLUENCE();
// False False
//  LIGHT_INFLUENCE* False
// 	 LIGHT_INFLUENCE False
extern "C" void dKy_plight_cut__FP15LIGHT_INFLUENCE();
// False False
extern "C" void GetAc__8cCcD_ObjFv();
// False False
//  cCcD_Obj* False
// 	 cCcD_Obj False
extern "C" void Set__4cCcSFP8cCcD_Obj();
// False False
//  cXyz const& False
// 	 cXyz const False
// 		 cXyz False
extern "C" void SetC__8cM3dGSphFRC4cXyz();
// False False
//  f32 False
extern "C" void SetR__8cM3dGSphFf();
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
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
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
//  s16 False
extern "C" void init__12J3DFrameCtrlFs();
// False False
extern "C" void PSMTXCopy();
// False False
extern "C" void PSMTXTrans();
// False False
extern "C" void _savegpr_23();
// False False
extern "C" void _savegpr_29();
// False False
extern "C" void _restgpr_23();
// False False
extern "C" void _restgpr_29();
// False False
extern "C" void strcmp();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
// False False
extern "C" void __register_global_object();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80C90974-80C90980 000A+02 s=1 e=0 z=0  None .data      eff_id$3814                                                  */
SECTION_DATA static u8 eff_id_3814[10 + 2 /* padding */] = {
	0x82, 0x04, 0x82, 0x05, 0x82, 0x06, 0x82, 0x07, 0x82, 0x08,
	/* padding */
	0x00, 0x00,
};

/* 80C90980-80C90984 0004+00 s=1 e=0 z=0  None .data      eff_id$3833                                                  */
SECTION_DATA static u8 eff_id_3833[4] = {
	0x82, 0x09, 0x82, 0x0A,
};

/* 80C90984-80C909C4 0040+00 s=1 e=0 z=0  None .data      cc_sph_src$4010                                              */
SECTION_DATA static u8 cc_sph_src[64] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D,
	0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x75, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x09, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};

/* 80C909C4-80C909E4 0020+00 s=1 e=0 z=0  None .data      l_daObj_Maki_Method                                          */
SECTION_DATA static void* l_daObj_Maki_Method[8] = {
	(void*)daObj_Maki_Create__FP10fopAc_ac_c,
	(void*)daObj_Maki_Delete__FP14obj_maki_class,
	(void*)daObj_Maki_Execute__FP14obj_maki_class,
	(void*)daObj_Maki_IsDelete__FP14obj_maki_class,
	(void*)daObj_Maki_Draw__FP14obj_maki_class,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80C909E4-80C90A14 0030+00 s=0 e=0 z=1  None .data      g_profile_OBJ_MAKI                                           */
SECTION_DATA void* g_profile_OBJ_MAKI[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0003FFFD,
	(void*)0x002B0000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000730,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x00320000,
	(void*)&l_daObj_Maki_Method,
	(void*)0x00040100,
	(void*)0x000E0000,
};

/* 80C90A14-80C90A20 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGSph                                              */
SECTION_DATA void* __vt__8cM3dGSph[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__8cM3dGSphFv,
};

/* 80C90A20-80C90A2C 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab                                              */
SECTION_DATA void* __vt__8cM3dGAab[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__8cM3dGAabFv,
};

/* 80C90A2C-80C90A38 000C+00 s=2 e=0 z=0  None .data      __vt__12J3DFrameCtrl                                         */
SECTION_DATA void* __vt__12J3DFrameCtrl[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__12J3DFrameCtrlFv,
};

/* 80C90A38-80C90A44 000C+00 s=2 e=0 z=0  None .data      __vt__16daObj_Maki_HIO_c                                     */
SECTION_DATA void* __vt__16daObj_Maki_HIO_c[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__16daObj_Maki_HIO_cFv,
};

/* 80C8FE0C-80C8FE24 0018+00 s=1 e=0 z=0  None .text      __ct__16daObj_Maki_HIO_cFv                                   */
//	80C8FE0C: 80C90A38 (__vt__16daObj_Maki_HIO_c)
//	80C8FE10: 80C90A38 (__vt__16daObj_Maki_HIO_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm daObj_Maki_HIO_c::daObj_Maki_HIO_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_maki/d_a_obj_maki/__ct__16daObj_Maki_HIO_cFv.s"
}
#pragma pop


/* 80C8FE24-80C8FEDC 00B8+00 s=1 e=0 z=0  None .text      daObj_Maki_Draw__FP14obj_maki_class                          */
//	80C8FE38: 8042CA54 (g_env_light)
//	80C8FE3C: 8042CA54 (g_env_light)
//	80C8FE4C: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80C8FE5C: 8042CA54 (g_env_light)
//	80C8FE60: 8042CA54 (g_env_light)
//	80C8FE70: 801A4DA0 (setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c)
//	80C8FE88: 8000D7A8 (entry__13mDoExt_brkAnmFP16J3DMaterialTablef)
//	80C8FE90: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
//	80C8FEA4: 8042CA54 (g_env_light)
//	80C8FEA8: 8042CA54 (g_env_light)
//	80C8FEB8: 801A4DA0 (setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c)
//	80C8FEC0: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  obj_maki_class* False
// 	 obj_maki_class False
asm static void daObj_Maki_Draw(obj_maki_class* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_maki/d_a_obj_maki/daObj_Maki_Draw__FP14obj_maki_class.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C90934-80C90938 0004+00 s=3 e=0 z=0  None .rodata    @3928                                                        */
SECTION_RODATA static u32 const lit_3928 = 0x3F800000;

/* 80C8FEDC-80C90378 049C+00 s=2 e=0 z=0  None .text      daObj_Maki_Execute__FP14obj_maki_class                       */
//	80C8FEEC: 803621C4 (_savegpr_23)
//	80C8FEF4: 80C90934 (lit_3928)
//	80C8FEF8: 80C90934 (lit_3928)
//	80C8FF54: 8000D428 (play__14mDoExt_baseAnmFv)
//	80C8FF64: 804061C0 (g_dComIfG_gameInfo)
//	80C8FF68: 804061C0 (g_dComIfG_gameInfo)
//	80C8FF6C: 80C90974 (eff_id_3814)
//	80C8FF70: 80C90974 (eff_id_3814)
//	80C8FFC0: 8004D4CC (set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80C8FFE4: 80084460 (ChkTgHit__12dCcD_GObjInfFv)
//	80C8FFF8: 80084658 (ChkCoHit__12dCcD_GObjInfFv)
//	80C90008: 800846F0 (GetCoHitObj__12dCcD_GObjInfFv)
//	80C9000C: 80263A48 (GetAc__8cCcD_ObjFv)
//	80C90030: 800842C0 (ChkAtHit__12dCcD_GObjInfFv)
//	80C9004C: 8002D06C (dComIfGp_getReverb__Fi)
//	80C90060: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C90064: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C9008C: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80C900B0: 804061C0 (g_dComIfG_gameInfo)
//	80C900B4: 804061C0 (g_dComIfG_gameInfo)
//	80C900C0: 80035200 (onSwitch__10dSv_info_cFii)
//	80C900CC: 80C90980 (eff_id_3833)
//	80C900D0: 80C90980 (eff_id_3833)
//	80C90114: 8004CA90 (set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80C90130: 8002D06C (dComIfGp_getReverb__Fi)
//	80C90144: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C90148: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C90170: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80C90180: 8002D06C (dComIfGp_getReverb__Fi)
//	80C90194: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C90198: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C901C0: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80C901E8: 8026F708 (SetR__8cM3dGSphFf)
//	80C901F8: 8026F708 (SetR__8cM3dGSphFf)
//	80C90204: 8026F648 (SetC__8cM3dGSphFRC4cXyz)
//	80C90208: 804061C0 (g_dComIfG_gameInfo)
//	80C9020C: 804061C0 (g_dComIfG_gameInfo)
//	80C90218: 80264BA8 (Set__4cCcSFP8cCcD_Obj)
//	80C90230: 801A792C (dKy_plight_cut__FP15LIGHT_INFLUENCE)
//	80C9025C: 804061C0 (g_dComIfG_gameInfo)
//	80C90260: 804061C0 (g_dComIfG_gameInfo)
//	80C902B0: 8004D4CC (set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80C902C0: 8002D06C (dComIfGp_getReverb__Fi)
//	80C902D4: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C902D8: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C90300: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80C90304: 803DD470 (now__14mDoMtx_stack_c)
//	80C90308: 803DD470 (now__14mDoMtx_stack_c)
//	80C90318: 803468E8 (PSMTXTrans)
//	80C9031C: 803DD470 (now__14mDoMtx_stack_c)
//	80C90320: 803DD470 (now__14mDoMtx_stack_c)
//	80C90328: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80C9032C: 803DD470 (now__14mDoMtx_stack_c)
//	80C90330: 803DD470 (now__14mDoMtx_stack_c)
//	80C90338: 803464B0 (PSMTXCopy)
//	80C90364: 80362210 (_restgpr_23)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  obj_maki_class* False
// 	 obj_maki_class False
asm static void daObj_Maki_Execute(obj_maki_class* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_maki/d_a_obj_maki/daObj_Maki_Execute__FP14obj_maki_class.s"
}
#pragma pop


/* 80C90378-80C90380 0008+00 s=1 e=0 z=0  None .text      daObj_Maki_IsDelete__FP14obj_maki_class                      */
// True False
//  bool False
//  obj_maki_class* False
// 	 obj_maki_class False
static bool daObj_Maki_IsDelete(obj_maki_class* param_0) {
	return true;
}


/* ############################################################################################## */
/* 80C90938-80C9093C 0004+00 s=0 e=0 z=0  None .rodata    @3929                                                        */
SECTION_RODATA u32 const lit_3929 = 0xBF800000;

/* 80C9093C-80C90940 0004+00 s=0 e=0 z=0  None .rodata    @3930                                                        */
SECTION_RODATA u32 const lit_3930 = 0xC3160000;

/* 80C90940-80C90944 0004+00 s=0 e=0 z=0  None .rodata    @3931                                                        */
SECTION_RODATA u32 const lit_3931 = 0x437A0000;

/* 80C90944-80C90948 0004+00 s=0 e=0 z=0  None .rodata    @3932                                                        */
SECTION_RODATA u32 const lit_3932 = 0x42480000;

/* 80C90948-80C9094C 0004+00 s=1 e=0 z=0  None .rodata    @3933                                                        */
SECTION_RODATA static u32 const lit_3933 = 0x3DCCCCCD;

/* 80C9094C-80C90950 0004+00 s=0 e=0 z=0  None .rodata    @3934                                                        */
SECTION_RODATA u8 const lit_3934[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80C90950-80C90954 0004+00 s=0 e=0 z=0  None .rodata    @3935                                                        */
SECTION_RODATA u32 const lit_3935 = 0x469C4000;

/* 80C90954-80C90958 0004+00 s=0 e=0 z=0  None .rodata    @4075                                                        */
SECTION_RODATA u32 const lit_4075 = 0xC3FA0000;

/* 80C90958-80C9095C 0004+00 s=0 e=0 z=0  None .rodata    @4076                                                        */
SECTION_RODATA u32 const lit_4076 = 0xC3480000;

/* 80C9095C-80C90960 0004+00 s=0 e=0 z=0  None .rodata    @4077                                                        */
SECTION_RODATA u32 const lit_4077 = 0x43FA0000;

/* 80C90960-80C90971 0011+00 s=3 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80C90960 = "Obj_maki";
SECTION_DEAD char const* const stringBase_80C90969 = "F_SP118";
#pragma pop

/* 80C90A50-80C90A54 0004+00 s=2 e=0 z=0  None .bss       None                                                         */
static u8 data_80C90A50[4];

/* 80C90380-80C903F0 0070+00 s=1 e=0 z=0  None .text      daObj_Maki_Delete__FP14obj_maki_class                        */
//	80C90398: 80C90960 (stringBase0)
//	80C9039C: 80C90960 (stringBase0)
//	80C903A0: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
//	80C903B4: 80C90A50 (data_80C90A50)
//	80C903B8: 80C90A50 (data_80C90A50)
//	80C903C0: 80C90948 (lit_3933)
//	80C903C4: 80C90948 (lit_3933)
//	80C903D4: 801A792C (dKy_plight_cut__FP15LIGHT_INFLUENCE)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  obj_maki_class* False
// 	 obj_maki_class False
asm static void daObj_Maki_Delete(obj_maki_class* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_maki/d_a_obj_maki/daObj_Maki_Delete__FP14obj_maki_class.s"
}
#pragma pop


/* 80C903F0-80C90544 0154+00 s=1 e=0 z=0  None .text      useHeapInit__FP10fopAc_ac_c                                  */
//	80C90400: 803621DC (_savegpr_29)
//	80C90408: 80C90960 (stringBase0)
//	80C9040C: 80C90960 (stringBase0)
//	80C90414: 804061C0 (g_dComIfG_gameInfo)
//	80C90418: 804061C0 (g_dComIfG_gameInfo)
//	80C9042C: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80C9043C: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
//	80C9045C: 802CEC4C (__nw__FUl)
//	80C90468: 80C90A2C (__vt__12J3DFrameCtrl)
//	80C9046C: 80C90A2C (__vt__12J3DFrameCtrl)
//	80C90478: 803283FC (init__12J3DFrameCtrlFs)
//	80C9049C: 80C90960 (stringBase0)
//	80C904A0: 80C90960 (stringBase0)
//	80C904B0: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80C904D0: 80C90934 (lit_3928)
//	80C904D4: 80C90934 (lit_3928)
//	80C904E0: 8000D70C (init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss)
//	80C904F4: 80C90960 (stringBase0)
//	80C904F8: 80C90960 (stringBase0)
//	80C90508: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80C90518: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
//	80C90530: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
asm static void useHeapInit(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_maki/d_a_obj_maki/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80C90544-80C9058C 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv                                       */
//	80C9055C: 80C90A2C (__vt__12J3DFrameCtrl)
//	80C90560: 80C90A2C (__vt__12J3DFrameCtrl)
//	80C90570: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm J3DFrameCtrl::~J3DFrameCtrl() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_maki/d_a_obj_maki/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C90A54-80C90A60 000C+00 s=1 e=0 z=0  None .bss       @3764                                                        */
static u8 lit_3764[12];

/* 80C90A60-80C90A68 0008+00 s=2 e=0 z=0  None .bss       l_HIO                                                        */
static u8 l_HIO[8];

/* 80C9058C-80C9080C 0280+00 s=1 e=0 z=0  None .text      daObj_Maki_Create__FP10fopAc_ac_c                            */
//	80C9059C: 803621DC (_savegpr_29)
//	80C905A4: 80C90934 (lit_3928)
//	80C905A8: 80C90934 (lit_3928)
//	80C905C4: 80018B64 (__ct__10fopAc_ac_cFv)
//	80C905C8: 803C3728 (__vt__9cCcD_Stts)
//	80C905CC: 803C3728 (__vt__9cCcD_Stts)
//	80C905D8: 80083760 (__ct__10dCcD_GSttsFv)
//	80C905DC: 803AC2E4 (__vt__9dCcD_Stts)
//	80C905E0: 803AC2E4 (__vt__9dCcD_Stts)
//	80C905F8: 80083A28 (__ct__12dCcD_GObjInfFv)
//	80C905FC: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80C90600: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80C90608: 80C90A20 (__vt__8cM3dGAab)
//	80C9060C: 80C90A20 (__vt__8cM3dGAab)
//	80C90614: 80C90A14 (__vt__8cM3dGSph)
//	80C90618: 80C90A14 (__vt__8cM3dGSph)
//	80C90620: 803C3540 (__vt__12cCcD_SphAttr)
//	80C90624: 803C3540 (__vt__12cCcD_SphAttr)
//	80C90634: 803ABFC0 (__vt__8dCcD_Sph)
//	80C90638: 803ABFC0 (__vt__8dCcD_Sph)
//	80C90660: 80C90960 (stringBase0)
//	80C90664: 80C90960 (stringBase0)
//	80C90668: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80C90690: 804061C0 (g_dComIfG_gameInfo)
//	80C90694: 804061C0 (g_dComIfG_gameInfo)
//	80C906A0: 80035360 (isSwitch__10dSv_info_cCFii)
//	80C906B8: 80C903F0 (useHeapInit__FP10fopAc_ac_c)
//	80C906BC: 80C903F0 (useHeapInit__FP10fopAc_ac_c)
//	80C906C4: 8001A4B0 (fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl)
//	80C906D8: 80C90A50 (data_80C90A50)
//	80C906DC: 80C90A50 (data_80C90A50)
//	80C906F8: 80C90A60 (l_HIO)
//	80C906FC: 80C90A60 (l_HIO)
//	80C90714: 8001A528 (fopAcM_SetMin__FP10fopAc_ac_cfff)
//	80C90728: 8001A538 (fopAcM_SetMax__FP10fopAc_ac_cfff)
//	80C9073C: 80083860 (Init__9dCcD_SttsFiiP10fopAc_ac_c)
//	80C90744: 80C90984 (cc_sph_src)
//	80C90748: 80C90984 (cc_sph_src)
//	80C9074C: 80084A34 (Set__8dCcD_SphFRC11dCcD_SrcSph)
//	80C90770: 804061C0 (g_dComIfG_gameInfo)
//	80C90774: 804061C0 (g_dComIfG_gameInfo)
//	80C9077C: 80C90960 (stringBase0)
//	80C90780: 80C90960 (stringBase0)
//	80C90788: 80368994 (strcmp)
//	80C907E4: 801A7790 (dKy_plight_set__FP15LIGHT_INFLUENCE)
//	80C907EC: 80C8FEDC (daObj_Maki_Execute__FP14obj_maki_class)
//	80C907F8: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
asm static void daObj_Maki_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_maki/d_a_obj_maki/daObj_Maki_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80C9080C-80C90854 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGSphFv                                            */
//	80C90824: 80C90A14 (__vt__8cM3dGSph)
//	80C90828: 80C90A14 (__vt__8cM3dGSph)
//	80C90838: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm cM3dGSph::~cM3dGSph() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_maki/d_a_obj_maki/__dt__8cM3dGSphFv.s"
}
#pragma pop


/* 80C90854-80C9089C 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv                                            */
//	80C9086C: 80C90A20 (__vt__8cM3dGAab)
//	80C90870: 80C90A20 (__vt__8cM3dGAab)
//	80C90880: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm cM3dGAab::~cM3dGAab() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_maki/d_a_obj_maki/__dt__8cM3dGAabFv.s"
}
#pragma pop


/* 80C9089C-80C908E4 0048+00 s=2 e=0 z=0  None .text      __dt__16daObj_Maki_HIO_cFv                                   */
//	80C908B4: 80C90A38 (__vt__16daObj_Maki_HIO_c)
//	80C908B8: 80C90A38 (__vt__16daObj_Maki_HIO_c)
//	80C908C8: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm daObj_Maki_HIO_c::~daObj_Maki_HIO_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_maki/d_a_obj_maki/__dt__16daObj_Maki_HIO_cFv.s"
}
#pragma pop


/* 80C908E4-80C90920 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_maki_cpp                                     */
//	80C908F0: 80C90A60 (l_HIO)
//	80C908F4: 80C90A60 (l_HIO)
//	80C908F8: 80C8FE0C (__ct__16daObj_Maki_HIO_cFv)
//	80C908FC: 80C9089C (__dt__16daObj_Maki_HIO_cFv)
//	80C90900: 80C9089C (__dt__16daObj_Maki_HIO_cFv)
//	80C90904: 80C90A54 (lit_3764)
//	80C90908: 80C90A54 (lit_3764)
//	80C9090C: 80C8FD98 (__register_global_object)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __sinit_d_a_obj_maki_cpp() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_maki/d_a_obj_maki/__sinit_d_a_obj_maki_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
#pragma section ".ctors$15"
__declspec(section ".ctors$15") void* const _ctors_80C908E4 = (void*)__sinit_d_a_obj_maki_cpp;
#pragma pop


