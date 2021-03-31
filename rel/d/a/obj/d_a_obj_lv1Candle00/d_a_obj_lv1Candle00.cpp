// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_lv1Candle00
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct mDoHIO_entry_c {
	/* 80C55D38 */ // True False
~mDoHIO_entry_c();
};

struct fopAc_ac_c {
	/* 80018B64 */ // False False
fopAc_ac_c();
};

struct daLv1Cdl00_c {
	/* 80C55D80 */ // True False
void setBaseMtx();
	/* 80C55E08 */ // True False
void CreateHeap();
	/* 80C55E74 */ // True False
void create();
	/* 80C561A0 */ // True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
void createHeapCallBack(fopAc_ac_c*);
	/* 80C561C0 */ // True False
void lightInit();
	/* 80C56268 */ // True False
void setLight();
	/* 80C562A0 */ // True False
void cutLight();
	/* 80C562D8 */ // True False
void pointLightProc();
	/* 80C56388 */ // True False
void Execute();
	/* 80C567EC */ // True False
void Draw();
	/* 80C56890 */ // True False
void Delete();
};

struct daLv1Cdl00_HIO_c {
	/* 80C55D0C */ // True False
daLv1Cdl00_HIO_c();
	/* 80C56970 */ // True False
~daLv1Cdl00_HIO_c();
};

struct dSv_info_c {
	/* 80035200 */ // False False
//  int False
//  int False
void onSwitch(int, int);
	/* 800352B0 */ // False False
//  int False
//  int False
void offSwitch(int, int);
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

struct _GXColor {
};

struct dPa_control_c {
	/* 8004D1B8 */ // False False
//  u16 False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  dKy_tevstr_c const* False
// 	 dKy_tevstr_c const False
// 		 dKy_tevstr_c False
//  u8 False
//  _GXColor const& False
// 	 _GXColor const False
// 		 _GXColor False
//  _GXColor const& False
// 	 _GXColor const False
// 		 _GXColor False
//  int False
//  f32 False
void setSimple(u16, cXyz const*, dKy_tevstr_c const*, u8, _GXColor const&, _GXColor const&, int, f32);
};

struct dCcD_Stts {
	/* 80083860 */ // False False
//  int False
//  int False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {
};

struct dCcD_GStts {
	/* 80083760 */ // False False
dCcD_GStts();
};

struct dCcD_GObjInf {
	/* 80083A28 */ // False False
dCcD_GObjInf();
	/* 80084460 */ // False False
void ChkTgHit();
	/* 800844F8 */ // False False
void GetTgHitObj();
	/* 80084548 */ // False False
void GetTgHitGObj();
	/* 8008457C */ // False False
void GetTgHitObjSe();
	/* 800845B0 */ // False False
//  u8 False
//  int False
void getHitSeID(u8, int);
};

struct dCcD_Cyl {
	/* 800848B4 */ // False False
//  dCcD_SrcCyl const& False
// 	 dCcD_SrcCyl const False
// 		 dCcD_SrcCyl False
void Set(dCcD_SrcCyl const&);
};

struct cM3dGCyl {
	/* 8026F1DC */ // False False
//  cXyz const& False
// 	 cXyz const False
// 		 cXyz False
void SetC(cXyz const&);
	/* 8026F1F8 */ // False False
//  f32 False
void SetH(f32);
	/* 8026F200 */ // False False
//  f32 False
void SetR(f32);
	/* 80C56110 */ // True False
~cM3dGCyl();
};

struct cM3dGAab {
	/* 80C56158 */ // True False
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

struct Z2SoundObjSimple {
	/* 802BE844 */ // False False
Z2SoundObjSimple();
};

struct Z2SoundObjBase {
	/* 802BDFF8 */ // False False
void deleteObject();
	/* 802BE4A4 */ // False False
//  u32 False
//  u32 False
//  Z2SoundObjBase* False
// 	 Z2SoundObjBase False
void startCollisionSE(u32, u32, Z2SoundObjBase*);
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

// 
// Forward References:
// 

// True False
//  daLv1Cdl00_c* False
// 	 daLv1Cdl00_c False
static void daLv1Cdl00_Draw(daLv1Cdl00_c*);
// True False
//  daLv1Cdl00_c* False
// 	 daLv1Cdl00_c False
static void daLv1Cdl00_Execute(daLv1Cdl00_c*);
// True False
//  daLv1Cdl00_c* False
// 	 daLv1Cdl00_c False
static void daLv1Cdl00_Delete(daLv1Cdl00_c*);
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
static void daLv1Cdl00_Create(fopAc_ac_c*);

// True False
extern "C" void __ct__16daLv1Cdl00_HIO_cFv();
// True False
extern "C" void __dt__14mDoHIO_entry_cFv();
// True False
extern "C" void setBaseMtx__12daLv1Cdl00_cFv();
// True False
extern "C" void CreateHeap__12daLv1Cdl00_cFv();
// True False
extern "C" void create__12daLv1Cdl00_cFv();
// True False
extern "C" void __dt__8cM3dGCylFv();
// True False
extern "C" void __dt__8cM3dGAabFv();
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" void createHeapCallBack__12daLv1Cdl00_cFP10fopAc_ac_c();
// True False
extern "C" void lightInit__12daLv1Cdl00_cFv();
// True False
extern "C" void setLight__12daLv1Cdl00_cFv();
// True False
extern "C" void cutLight__12daLv1Cdl00_cFv();
// True False
extern "C" void pointLightProc__12daLv1Cdl00_cFv();
// True False
extern "C" void Execute__12daLv1Cdl00_cFv();
// True False
extern "C" void Draw__12daLv1Cdl00_cFv();
// True False
extern "C" void Delete__12daLv1Cdl00_cFv();
// True False
//  daLv1Cdl00_c* False
// 	 daLv1Cdl00_c False
extern "C" static void daLv1Cdl00_Draw__FP12daLv1Cdl00_c();
// True False
//  daLv1Cdl00_c* False
// 	 daLv1Cdl00_c False
extern "C" static void daLv1Cdl00_Execute__FP12daLv1Cdl00_c();
// True False
//  daLv1Cdl00_c* False
// 	 daLv1Cdl00_c False
extern "C" static void daLv1Cdl00_Delete__FP12daLv1Cdl00_c();
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" static void daLv1Cdl00_Create__FP10fopAc_ac_c();
// True False
extern "C" void __dt__16daLv1Cdl00_HIO_cFv();
// False False
extern "C" void __sinit_d_a_obj_lv1Candle00_cpp();
extern "C" extern u32 const lit_3847;
extern "C" extern u32 const lit_3848;
extern "C" extern u32 const lit_3849;
extern "C" extern u8 const lit_3850[4];
extern "C" extern u32 const lit_3872;
extern "C" extern u32 const lit_3880;
extern "C" extern u32 const lit_3881;
extern "C" extern u32 const lit_3882;
extern "C" extern u32 const lit_3883;
extern "C" extern u32 const lit_4006;
extern "C" extern u32 const lit_4007;
extern "C" extern u32 const lit_4008;
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_Lv1Cdl00[12];
extern "C" extern void* __vt__8cM3dGCyl[3];
extern "C" extern void* __vt__8cM3dGAab[3];
extern "C" extern void* __vt__16daLv1Cdl00_HIO_c[3];
extern "C" extern void* __vt__14mDoHIO_entry_c[3];

// 
// External References:
// 

// False False
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
//  s16 False
//  s16 False
//  s16 False
void mDoMtx_ZXYrotM(f32 (* )[4], s16, s16, s16);
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
//  J3DModelData* False
// 	 J3DModelData False
void fopAcM_setCullSizeBox2(fopAc_ac_c*, J3DModelData*);
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
//  cXyz* False
// 	 cXyz False
//  _GXColor* False
// 	 _GXColor False
//  f32 False
//  u8 False
void dKy_BossLight_set(cXyz*, _GXColor*, f32, u8);
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
//  s16 False
//  s16 False
extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
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
//  J3DModelData* False
// 	 J3DModelData False
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
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
extern "C" void offSwitch__10dSv_info_cFii();
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
//  u16 False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  dKy_tevstr_c const* False
// 	 dKy_tevstr_c const False
// 		 dKy_tevstr_c False
//  u8 False
//  _GXColor const& False
// 	 _GXColor const False
// 		 _GXColor False
//  _GXColor const& False
// 	 _GXColor const False
// 		 _GXColor False
//  int False
//  f32 False
extern "C" void setSimple__13dPa_control_cFUsPC4cXyzPC12dKy_tevstr_cUcRC8_GXColorRC8_GXColorif();
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
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
// False False
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
// False False
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
// False False
extern "C" void GetTgHitObjSe__12dCcD_GObjInfFv();
// False False
//  u8 False
//  int False
extern "C" void getHitSeID__12dCcD_GObjInfFUci();
// False False
//  dCcD_SrcCyl const& False
// 	 dCcD_SrcCyl const False
// 		 dCcD_SrcCyl False
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
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
//  cXyz* False
// 	 cXyz False
//  _GXColor* False
// 	 _GXColor False
//  f32 False
//  u8 False
extern "C" void dKy_BossLight_set__FP4cXyzP8_GXColorfUc();
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
extern "C" void SetC__8cM3dGCylFRC4cXyz();
// False False
//  f32 False
extern "C" void SetH__8cM3dGCylFf();
// False False
//  f32 False
extern "C" void SetR__8cM3dGCylFf();
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
extern "C" void deleteObject__14Z2SoundObjBaseFv();
// False False
//  u32 False
//  u32 False
//  Z2SoundObjBase* False
// 	 Z2SoundObjBase False
extern "C" void startCollisionSE__14Z2SoundObjBaseFUlUlP14Z2SoundObjBase();
// False False
extern "C" void __ct__16Z2SoundObjSimpleFv();
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
extern "C" void _savegpr_29();
// False False
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u32 g_whiteColor;
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
// False False
extern "C" void __register_global_object();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80C56AC0-80C56B04 0044+00 s=2 e=0 z=0  None .data      mCcDCyl__12daLv1Cdl00_c                                      */
SECTION_DATA static u8 mCcDCyl__12daLv1Cdl00_c[68] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};

/* 80C56B04-80C56B24 0020+00 s=1 e=0 z=0  None .data      l_daLv1Cdl00_Method                                          */
SECTION_DATA static void* l_daLv1Cdl00_Method[8] = {
	(void*)daLv1Cdl00_Create__FP10fopAc_ac_c,
	(void*)daLv1Cdl00_Delete__FP12daLv1Cdl00_c,
	(void*)daLv1Cdl00_Execute__FP12daLv1Cdl00_c,
	(void*)NULL,
	(void*)daLv1Cdl00_Draw__FP12daLv1Cdl00_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80C56B24-80C56B54 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Lv1Cdl00                                       */
SECTION_DATA void* g_profile_Obj_Lv1Cdl00[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0003FFFD,
	(void*)0x00390000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000754,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x01EE0000,
	(void*)&l_daLv1Cdl00_Method,
	(void*)0x00060000,
	(void*)0x000E0000,
};

/* 80C56B54-80C56B60 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGCyl                                              */
SECTION_DATA void* __vt__8cM3dGCyl[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__8cM3dGCylFv,
};

/* 80C56B60-80C56B6C 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab                                              */
SECTION_DATA void* __vt__8cM3dGAab[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__8cM3dGAabFv,
};

/* 80C56B6C-80C56B78 000C+00 s=2 e=0 z=0  None .data      __vt__16daLv1Cdl00_HIO_c                                     */
SECTION_DATA void* __vt__16daLv1Cdl00_HIO_c[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__16daLv1Cdl00_HIO_cFv,
};

/* 80C56B78-80C56B84 000C+00 s=3 e=0 z=0  None .data      __vt__14mDoHIO_entry_c                                       */
SECTION_DATA void* __vt__14mDoHIO_entry_c[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__14mDoHIO_entry_cFv,
};

/* 80C55D0C-80C55D38 002C+00 s=1 e=0 z=0  None .text      __ct__16daLv1Cdl00_HIO_cFv                                   */
//	80C55D0C: 80C56B78 (__vt__14mDoHIO_entry_c)
//	80C55D10: 80C56B78 (__vt__14mDoHIO_entry_c)
//	80C55D18: 80C56B6C (__vt__16daLv1Cdl00_HIO_c)
//	80C55D1C: 80C56B6C (__vt__16daLv1Cdl00_HIO_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm daLv1Cdl00_HIO_c::daLv1Cdl00_HIO_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/__ct__16daLv1Cdl00_HIO_cFv.s"
}
#pragma pop


/* 80C55D38-80C55D80 0048+00 s=1 e=0 z=0  None .text      __dt__14mDoHIO_entry_cFv                                     */
//	80C55D50: 80C56B78 (__vt__14mDoHIO_entry_c)
//	80C55D54: 80C56B78 (__vt__14mDoHIO_entry_c)
//	80C55D64: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop


/* 80C55D80-80C55E08 0088+00 s=2 e=0 z=0  None .text      setBaseMtx__12daLv1Cdl00_cFv                                 */
//	80C55D94: 803DD470 (now__14mDoMtx_stack_c)
//	80C55D98: 803DD470 (now__14mDoMtx_stack_c)
//	80C55DA8: 803468E8 (PSMTXTrans)
//	80C55DAC: 803DD470 (now__14mDoMtx_stack_c)
//	80C55DB0: 803DD470 (now__14mDoMtx_stack_c)
//	80C55DC0: 8000C2A0 (mDoMtx_ZXYrotM__FPA4_fsss)
//	80C55DE0: 803DD470 (now__14mDoMtx_stack_c)
//	80C55DE4: 803DD470 (now__14mDoMtx_stack_c)
//	80C55DF0: 803464B0 (PSMTXCopy)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daLv1Cdl00_c::setBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/setBaseMtx__12daLv1Cdl00_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C56A50-80C56A80 0030+00 s=4 e=0 z=0  None .rodata    mCcDObjInfo__12daLv1Cdl00_c                                  */
SECTION_RODATA static u8 const mCcDObjInfo__12daLv1Cdl00_c[48] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13,
	0xD8, 0xFB, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x79, 0x01, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00,
};

/* 80C56A80-80C56A84 0004+00 s=1 e=0 z=0  None .rodata    @3753                                                        */
SECTION_RODATA static u32 const lit_3753 = 0x42F00000;

/* 80C56A84-80C56A88 0004+00 s=0 e=0 z=0  None .rodata    @3847                                                        */
SECTION_RODATA u32 const lit_3847 = 0x41200000;

/* 80C56A88-80C56A8C 0004+00 s=0 e=0 z=0  None .rodata    @3848                                                        */
SECTION_RODATA u32 const lit_3848 = 0x43FA0000;

/* 80C56A8C-80C56A90 0004+00 s=0 e=0 z=0  None .rodata    @3849                                                        */
SECTION_RODATA u32 const lit_3849 = 0x3F800000;

/* 80C56A90-80C56A94 0004+00 s=0 e=0 z=0  None .rodata    @3850                                                        */
SECTION_RODATA u8 const lit_3850[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80C56A94-80C56A98 0004+00 s=0 e=0 z=0  None .rodata    @3872                                                        */
SECTION_RODATA u32 const lit_3872 = 0xBC6642FF;

/* 80C56A98-80C56A9C 0004+00 s=0 e=0 z=0  None .rodata    @3880                                                        */
SECTION_RODATA u32 const lit_3880 = 0x3F000000;

/* 80C56A9C-80C56AA0 0004+00 s=0 e=0 z=0  None .rodata    @3881                                                        */
SECTION_RODATA u32 const lit_3881 = 0x3DCCCCCD;

/* 80C56AA0-80C56AA4 0004+00 s=0 e=0 z=0  None .rodata    @3882                                                        */
SECTION_RODATA u32 const lit_3882 = 0x38D1B717;

/* 80C56AA4-80C56AA8 0004+00 s=0 e=0 z=0  None .rodata    @3883                                                        */
SECTION_RODATA u32 const lit_3883 = 0x358637BD;

/* 80C56AA8-80C56AAC 0004+00 s=0 e=0 z=0  None .rodata    @4006                                                        */
SECTION_RODATA u32 const lit_4006 = 0xBF800000;

/* 80C56AAC-80C56AB0 0004+00 s=0 e=0 z=0  None .rodata    @4007                                                        */
SECTION_RODATA u32 const lit_4007 = 0x41C80000;

/* 80C56AB0-80C56AB4 0004+00 s=0 e=0 z=0  None .rodata    @4008                                                        */
SECTION_RODATA u32 const lit_4008 = 0x43020000;

/* 80C56AB4-80C56ABD 0009+00 s=3 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80C56AB4 = "lv1cdl00";
#pragma pop

/* 80C55E08-80C55E74 006C+00 s=1 e=0 z=0  None .text      CreateHeap__12daLv1Cdl00_cFv                                 */
//	80C55E1C: 80C56AB4 (stringBase0)
//	80C55E20: 80C56AB4 (stringBase0)
//	80C55E28: 804061C0 (g_dComIfG_gameInfo)
//	80C55E2C: 804061C0 (g_dComIfG_gameInfo)
//	80C55E3C: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80C55E4C: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daLv1Cdl00_c::CreateHeap() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/CreateHeap__12daLv1Cdl00_cFv.s"
}
#pragma pop


/* 80C55E74-80C56110 029C+00 s=1 e=0 z=0  None .text      create__12daLv1Cdl00_cFv                                     */
//	80C55E84: 803621DC (_savegpr_29)
//	80C55EA4: 80018B64 (__ct__10fopAc_ac_cFv)
//	80C55EA8: 803C3728 (__vt__9cCcD_Stts)
//	80C55EAC: 803C3728 (__vt__9cCcD_Stts)
//	80C55EB8: 80083760 (__ct__10dCcD_GSttsFv)
//	80C55EBC: 803AC2E4 (__vt__9dCcD_Stts)
//	80C55EC0: 803AC2E4 (__vt__9dCcD_Stts)
//	80C55ED8: 80083A28 (__ct__12dCcD_GObjInfFv)
//	80C55EDC: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80C55EE0: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80C55EE8: 80C56B60 (__vt__8cM3dGAab)
//	80C55EEC: 80C56B60 (__vt__8cM3dGAab)
//	80C55EF4: 80C56B54 (__vt__8cM3dGCyl)
//	80C55EF8: 80C56B54 (__vt__8cM3dGCyl)
//	80C55F00: 803C35A4 (__vt__12cCcD_CylAttr)
//	80C55F04: 803C35A4 (__vt__12cCcD_CylAttr)
//	80C55F14: 803AC050 (__vt__8dCcD_Cyl)
//	80C55F18: 803AC050 (__vt__8dCcD_Cyl)
//	80C55F34: 802BE844 (__ct__16Z2SoundObjSimpleFv)
//	80C55F48: 80C56AB4 (stringBase0)
//	80C55F4C: 80C56AB4 (stringBase0)
//	80C55F50: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80C55F64: 80C561A0 (createHeapCallBack__12daLv1Cdl00_cFP10fopAc_ac_c)
//	80C55F68: 80C561A0 (createHeapCallBack__12daLv1Cdl00_cFP10fopAc_ac_c)
//	80C55F70: 8001A4B0 (fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl)
//	80C55F88: 80C55D80 (setBaseMtx__12daLv1Cdl00_cFv)
//	80C55FA4: 8001A578 (fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData)
//	80C55FB8: 80083860 (Init__9dCcD_SttsFiiP10fopAc_ac_c)
//	80C55FC0: 80C56AC0 (mCcDCyl__12daLv1Cdl00_c)
//	80C55FC4: 80C56AC0 (mCcDCyl__12daLv1Cdl00_c)
//	80C55FC8: 800848B4 (Set__8dCcD_CylFRC11dCcD_SrcCyl)
//	80C55FDC: 80C56A80 (lit_3753)
//	80C55FE0: 80C56A80 (lit_3753)
//	80C5601C: 80C561C0 (lightInit__12daLv1Cdl00_cFv)
//	80C56058: 804061C0 (g_dComIfG_gameInfo)
//	80C5605C: 804061C0 (g_dComIfG_gameInfo)
//	80C56070: 80035360 (isSwitch__10dSv_info_cCFii)
//	80C560A8: 80C56268 (setLight__12daLv1Cdl00_cFv)
//	80C560CC: 80C56268 (setLight__12daLv1Cdl00_cFv)
//	80C560FC: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daLv1Cdl00_c::create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/create__12daLv1Cdl00_cFv.s"
}
#pragma pop


/* 80C56110-80C56158 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv                                            */
//	80C56128: 80C56B54 (__vt__8cM3dGCyl)
//	80C5612C: 80C56B54 (__vt__8cM3dGCyl)
//	80C5613C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm cM3dGCyl::~cM3dGCyl() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/__dt__8cM3dGCylFv.s"
}
#pragma pop


/* 80C56158-80C561A0 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv                                            */
//	80C56170: 80C56B60 (__vt__8cM3dGAab)
//	80C56174: 80C56B60 (__vt__8cM3dGAab)
//	80C56184: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm cM3dGAab::~cM3dGAab() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/__dt__8cM3dGAabFv.s"
}
#pragma pop


/* 80C561A0-80C561C0 0020+00 s=1 e=0 z=0  None .text      createHeapCallBack__12daLv1Cdl00_cFP10fopAc_ac_c             */
//	80C561AC: 80C55E08 (CreateHeap__12daLv1Cdl00_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
asm void daLv1Cdl00_c::createHeapCallBack(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/createHeapCallBack__12daLv1Cdl00_cFP10fopAc_ac_c.s"
}
#pragma pop


/* 80C561C0-80C56268 00A8+00 s=1 e=0 z=0  None .text      lightInit__12daLv1Cdl00_cFv                                  */
//	80C561C0: 80C56A50 (mCcDObjInfo__12daLv1Cdl00_c)
//	80C561C4: 80C56A50 (mCcDObjInfo__12daLv1Cdl00_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daLv1Cdl00_c::lightInit() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/lightInit__12daLv1Cdl00_cFv.s"
}
#pragma pop


/* 80C56268-80C562A0 0038+00 s=2 e=0 z=0  None .text      setLight__12daLv1Cdl00_cFv                                   */
//	80C5628C: 801A7790 (dKy_plight_set__FP15LIGHT_INFLUENCE)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daLv1Cdl00_c::setLight() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/setLight__12daLv1Cdl00_cFv.s"
}
#pragma pop


/* 80C562A0-80C562D8 0038+00 s=1 e=0 z=0  None .text      cutLight__12daLv1Cdl00_cFv                                   */
//	80C562C4: 801A792C (dKy_plight_cut__FP15LIGHT_INFLUENCE)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daLv1Cdl00_c::cutLight() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/cutLight__12daLv1Cdl00_cFv.s"
}
#pragma pop


/* 80C562D8-80C56388 00B0+00 s=1 e=0 z=0  None .text      pointLightProc__12daLv1Cdl00_cFv                             */
//	80C562F0: 80C56A50 (mCcDObjInfo__12daLv1Cdl00_c)
//	80C562F4: 80C56A50 (mCcDObjInfo__12daLv1Cdl00_c)
//	80C5632C: 8026F97C (cLib_addCalc__FPfffff)
//	80C56348: 8026F97C (cLib_addCalc__FPfffff)
//	80C5636C: 801A9D60 (dKy_BossLight_set__FP4cXyzP8_GXColorfUc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daLv1Cdl00_c::pointLightProc() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/pointLightProc__12daLv1Cdl00_cFv.s"
}
#pragma pop


/* 80C56388-80C567EC 0464+00 s=1 e=0 z=0  None .text      Execute__12daLv1Cdl00_cFv                                    */
//	80C56398: 803621DC (_savegpr_29)
//	80C563A0: 80C56A50 (mCcDObjInfo__12daLv1Cdl00_c)
//	80C563A4: 80C56A50 (mCcDObjInfo__12daLv1Cdl00_c)
//	80C563A8: 804061C0 (g_dComIfG_gameInfo)
//	80C563AC: 804061C0 (g_dComIfG_gameInfo)
//	80C563C0: 80035360 (isSwitch__10dSv_info_cCFii)
//	80C563E4: 80C562A0 (cutLight__12daLv1Cdl00_cFv)
//	80C5640C: 80C56268 (setLight__12daLv1Cdl00_cFv)
//	80C5642C: 80C56268 (setLight__12daLv1Cdl00_cFv)
//	80C56440: 804061C0 (g_dComIfG_gameInfo)
//	80C56444: 804061C0 (g_dComIfG_gameInfo)
//	80C56460: 80450608 (g_whiteColor)
//	80C56464: 80450608 (g_whiteColor)
//	80C56474: 8004D1B8 (setSimple__13dPa_control_cFUsPC4cXyzPC12dKy_tevstr_cUcRC8_GXColorRC8_GXColorif)
//	80C56490: 80450608 (g_whiteColor)
//	80C56494: 80450608 (g_whiteColor)
//	80C564A4: 8004D1B8 (setSimple__13dPa_control_cFUsPC4cXyzPC12dKy_tevstr_cUcRC8_GXColorRC8_GXColorif)
//	80C564BC: 80450608 (g_whiteColor)
//	80C564C0: 80450608 (g_whiteColor)
//	80C564D0: 8004D1B8 (setSimple__13dPa_control_cFUsPC4cXyzPC12dKy_tevstr_cUcRC8_GXColorRC8_GXColorif)
//	80C564DC: 8002D06C (dComIfGp_getReverb__Fi)
//	80C564F0: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C564F4: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C5651C: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80C56524: 80C55D80 (setBaseMtx__12daLv1Cdl00_cFv)
//	80C5652C: 80084460 (ChkTgHit__12dCcD_GObjInfFv)
//	80C5653C: 80084548 (GetTgHitGObj__12dCcD_GObjInfFv)
//	80C56580: 804061C0 (g_dComIfG_gameInfo)
//	80C56584: 804061C0 (g_dComIfG_gameInfo)
//	80C56598: 80035200 (onSwitch__10dSv_info_cFii)
//	80C565A0: 804061C0 (g_dComIfG_gameInfo)
//	80C565A4: 804061C0 (g_dComIfG_gameInfo)
//	80C565B8: 800352B0 (offSwitch__10dSv_info_cFii)
//	80C565C4: 8002D06C (dComIfGp_getReverb__Fi)
//	80C565D8: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C565DC: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C56604: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80C5660C: 80C56268 (setLight__12daLv1Cdl00_cFv)
//	80C56650: 804061C0 (g_dComIfG_gameInfo)
//	80C56654: 804061C0 (g_dComIfG_gameInfo)
//	80C56668: 800352B0 (offSwitch__10dSv_info_cFii)
//	80C56670: 804061C0 (g_dComIfG_gameInfo)
//	80C56674: 804061C0 (g_dComIfG_gameInfo)
//	80C56688: 80035200 (onSwitch__10dSv_info_cFii)
//	80C56694: 8002D06C (dComIfGp_getReverb__Fi)
//	80C566A8: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C566AC: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C566D4: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80C566DC: 80C562A0 (cutLight__12daLv1Cdl00_cFv)
//	80C566E4: 800844F8 (GetTgHitObj__12dCcD_GObjInfFv)
//	80C566F4: 80263A48 (GetAc__8cCcD_ObjFv)
//	80C56708: 80084548 (GetTgHitGObj__12dCcD_GObjInfFv)
//	80C56734: 8008457C (GetTgHitObjSe__12dCcD_GObjInfFv)
//	80C5673C: 800845B0 (getHitSeID__12dCcD_GObjInfFUci)
//	80C56750: 802BE4A4 (startCollisionSE__14Z2SoundObjBaseFUlUlP14Z2SoundObjBase)
//	80C56770: 8002D06C (dComIfGp_getReverb__Fi)
//	80C56798: 8026F200 (SetR__8cM3dGCylFf)
//	80C567A4: 8026F1F8 (SetH__8cM3dGCylFf)
//	80C567B0: 8026F1DC (SetC__8cM3dGCylFRC4cXyz)
//	80C567B4: 804061C0 (g_dComIfG_gameInfo)
//	80C567B8: 804061C0 (g_dComIfG_gameInfo)
//	80C567C4: 80264BA8 (Set__4cCcSFP8cCcD_Obj)
//	80C567CC: 80C562D8 (pointLightProc__12daLv1Cdl00_cFv)
//	80C567D8: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daLv1Cdl00_c::Execute() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/Execute__12daLv1Cdl00_cFv.s"
}
#pragma pop


/* 80C567EC-80C56890 00A4+00 s=1 e=0 z=0  None .text      Draw__12daLv1Cdl00_cFv                                       */
//	80C56804: 8042CA54 (g_env_light)
//	80C56808: 8042CA54 (g_env_light)
//	80C56818: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80C5681C: 8042CA54 (g_env_light)
//	80C56820: 8042CA54 (g_env_light)
//	80C56830: 801A4DA0 (setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c)
//	80C56834: 804061C0 (g_dComIfG_gameInfo)
//	80C56838: 804061C0 (g_dComIfG_gameInfo)
//	80C56840: 80434AC8 (j3dSys)
//	80C56844: 80434AC8 (j3dSys)
//	80C56858: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
//	80C5685C: 804061C0 (g_dComIfG_gameInfo)
//	80C56860: 804061C0 (g_dComIfG_gameInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daLv1Cdl00_c::Draw() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/Draw__12daLv1Cdl00_cFv.s"
}
#pragma pop


/* 80C56890-80C568F0 0060+00 s=1 e=0 z=0  None .text      Delete__12daLv1Cdl00_cFv                                     */
//	80C568A8: 802BDFF8 (deleteObject__14Z2SoundObjBaseFv)
//	80C568B0: 80C56AB4 (stringBase0)
//	80C568B4: 80C56AB4 (stringBase0)
//	80C568B8: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
//	80C568D4: 801A792C (dKy_plight_cut__FP15LIGHT_INFLUENCE)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daLv1Cdl00_c::Delete() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/Delete__12daLv1Cdl00_cFv.s"
}
#pragma pop


/* 80C568F0-80C56910 0020+00 s=1 e=0 z=0  None .text      daLv1Cdl00_Draw__FP12daLv1Cdl00_c                            */
//	80C568FC: 80C567EC (Draw__12daLv1Cdl00_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daLv1Cdl00_c* False
// 	 daLv1Cdl00_c False
asm static void daLv1Cdl00_Draw(daLv1Cdl00_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/daLv1Cdl00_Draw__FP12daLv1Cdl00_c.s"
}
#pragma pop


/* 80C56910-80C56930 0020+00 s=1 e=0 z=0  None .text      daLv1Cdl00_Execute__FP12daLv1Cdl00_c                         */
//	80C5691C: 80C56388 (Execute__12daLv1Cdl00_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daLv1Cdl00_c* False
// 	 daLv1Cdl00_c False
asm static void daLv1Cdl00_Execute(daLv1Cdl00_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/daLv1Cdl00_Execute__FP12daLv1Cdl00_c.s"
}
#pragma pop


/* 80C56930-80C56950 0020+00 s=1 e=0 z=0  None .text      daLv1Cdl00_Delete__FP12daLv1Cdl00_c                          */
//	80C5693C: 80C56890 (Delete__12daLv1Cdl00_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daLv1Cdl00_c* False
// 	 daLv1Cdl00_c False
asm static void daLv1Cdl00_Delete(daLv1Cdl00_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/daLv1Cdl00_Delete__FP12daLv1Cdl00_c.s"
}
#pragma pop


/* 80C56950-80C56970 0020+00 s=1 e=0 z=0  None .text      daLv1Cdl00_Create__FP10fopAc_ac_c                            */
//	80C5695C: 80C55E74 (create__12daLv1Cdl00_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
asm static void daLv1Cdl00_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/daLv1Cdl00_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80C56970-80C569CC 005C+00 s=2 e=0 z=0  None .text      __dt__16daLv1Cdl00_HIO_cFv                                   */
//	80C56988: 80C56B6C (__vt__16daLv1Cdl00_HIO_c)
//	80C5698C: 80C56B6C (__vt__16daLv1Cdl00_HIO_c)
//	80C56998: 80C56B78 (__vt__14mDoHIO_entry_c)
//	80C5699C: 80C56B78 (__vt__14mDoHIO_entry_c)
//	80C569B0: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm daLv1Cdl00_HIO_c::~daLv1Cdl00_HIO_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/__dt__16daLv1Cdl00_HIO_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C56B90-80C56B9C 000C+00 s=1 e=0 z=0  None .bss       @3620                                                        */
static u8 lit_3620[12];

/* 80C56B9C-80C56BA4 0008+00 s=1 e=0 z=0  None .bss       l_HIO                                                        */
static u8 l_HIO[8];

/* 80C569CC-80C56A3C 0070+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_lv1Candle00_cpp                              */
//	80C569D8: 80C56B9C (l_HIO)
//	80C569DC: 80C56B9C (l_HIO)
//	80C569E0: 80C55D0C (__ct__16daLv1Cdl00_HIO_cFv)
//	80C569E4: 80C56970 (__dt__16daLv1Cdl00_HIO_cFv)
//	80C569E8: 80C56970 (__dt__16daLv1Cdl00_HIO_cFv)
//	80C569EC: 80C56B90 (lit_3620)
//	80C569F0: 80C56B90 (lit_3620)
//	80C569F4: 80C55C98 (__register_global_object)
//	80C569F8: 80C56AC0 (mCcDCyl__12daLv1Cdl00_c)
//	80C569FC: 80C56AC0 (mCcDCyl__12daLv1Cdl00_c)
//	80C56A04: 80C56A50 (mCcDObjInfo__12daLv1Cdl00_c)
//	80C56A08: 80C56A50 (mCcDObjInfo__12daLv1Cdl00_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __sinit_d_a_obj_lv1Candle00_cpp() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/__sinit_d_a_obj_lv1Candle00_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
#pragma section ".ctors$15"
__declspec(section ".ctors$15") void* const _ctors_80C569CC = (void*)__sinit_d_a_obj_lv1Candle00_cpp;
#pragma pop


