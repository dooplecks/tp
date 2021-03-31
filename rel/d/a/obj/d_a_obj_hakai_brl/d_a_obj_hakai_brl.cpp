// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_hakai_brl
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct fopAc_ac_c {
	/* 80018B64 */ // False False
fopAc_ac_c();
	/* 80018C8C */ // False False
~fopAc_ac_c();
};

struct daObjHBarrel_c {
	/* 80C16758 */ // True False
daObjHBarrel_c();
	/* 80C16918 */ // True False
~daObjHBarrel_c();
	/* 80C16A98 */ // True False
void createHeap();
	/* 80C16B08 */ // True False
void create();
	/* 80C16BF8 */ // True False
void Delete();
	/* 80C16C44 */ // True False
void draw();
	/* 80C16CA8 */ // True False
void execute();
	/* 80C16D50 */ // True False
void init();
	/* 80C16DEC */ // True False
void setModelMtx();
	/* 80C16E50 */ // True False
void hitAction();
	/* 80C17090 */ // True False
void callEmt();
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
	/* 8003C37C */ // False False
//  char const* False
// 	 char const False
// 		 char False
//  char const* False
// 	 char const False
// 		 char False
//  dRes_info_c* False
// 	 dRes_info_c False
//  int False
void getRes(char const*, char const*, dRes_info_c*, int);
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

struct JPABaseEmitter {
};

struct dPa_modelEcallBack {
	/* 8004AC00 */ // False False
//  JPABaseEmitter* False
// 	 JPABaseEmitter False
//  J3DModelData* False
// 	 J3DModelData False
//  dKy_tevstr_c const& False
// 	 dKy_tevstr_c const False
// 		 dKy_tevstr_c False
//  u8 False
//  void* False
// 	 void False
//  u8 False
//  u8 False
void setModel(JPABaseEmitter*, J3DModelData*, dKy_tevstr_c const&, u8, void*, u8, u8);
};

struct dPa_levelEcallBack {
};

struct csXyz {
};

struct _GXColor {
};

struct dPa_control_c {
	/* 8004C218 */ // False False
//  u16 False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  csXyz const* False
// 	 csXyz const False
// 		 csXyz False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  u32 False
void setHitMark(u16, fopAc_ac_c*, cXyz const*, csXyz const*, cXyz const*, u32);
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
	/* 80C168BC */ // True False
~dCcD_GStts();
};

struct dCcD_GObjInf {
	/* 80083A28 */ // False False
dCcD_GObjInf();
	/* 800840E4 */ // False False
~dCcD_GObjInf();
	/* 80084460 */ // False False
void ChkTgHit();
	/* 800844F8 */ // False False
void GetTgHitObj();
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
	/* 80C1682C */ // True False
~cM3dGCyl();
};

struct cM3dGAab {
	/* 80C16874 */ // True False
~cM3dGAab();
};

struct cCcD_Obj {
};

struct cCcS {
	/* 80264BA8 */ // False False
//  cCcD_Obj* False
// 	 cCcD_Obj False
void Set(cCcD_Obj*);
};

struct cCcD_GStts {
	/* 80C172AC */ // True False
~cCcD_GStts();
};

struct Z2SoundObjSimple {
	/* 802BE844 */ // False False
Z2SoundObjSimple();
};

struct Z2SoundObjBase {
	/* 802BDF48 */ // False False
~Z2SoundObjBase();
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
};

struct J3DModel {
};

// 
// Forward References:
// 

// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
static void daObjHBarrel_c_createHeap(fopAc_ac_c*);
// True False
//  daObjHBarrel_c* False
// 	 daObjHBarrel_c False
static void daObjHBarrel_create(daObjHBarrel_c*);
// True False
//  daObjHBarrel_c* False
// 	 daObjHBarrel_c False
static void daObjHBarrel_Delete(daObjHBarrel_c*);
// True False
//  daObjHBarrel_c* False
// 	 daObjHBarrel_c False
static void daObjHBarrel_execute(daObjHBarrel_c*);
// True False
//  daObjHBarrel_c* False
// 	 daObjHBarrel_c False
static void daObjHBarrel_draw(daObjHBarrel_c*);

// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" static void daObjHBarrel_c_createHeap__FP10fopAc_ac_c();
// True False
extern "C" void __ct__14daObjHBarrel_cFv();
// True False
extern "C" void __dt__8cM3dGCylFv();
// True False
extern "C" void __dt__8cM3dGAabFv();
// True False
extern "C" void __dt__10dCcD_GSttsFv();
// True False
extern "C" void __dt__14daObjHBarrel_cFv();
// True False
extern "C" void createHeap__14daObjHBarrel_cFv();
// True False
extern "C" void create__14daObjHBarrel_cFv();
// True False
extern "C" void Delete__14daObjHBarrel_cFv();
// True False
extern "C" void draw__14daObjHBarrel_cFv();
// True False
extern "C" void execute__14daObjHBarrel_cFv();
// True False
extern "C" void init__14daObjHBarrel_cFv();
// True False
extern "C" void setModelMtx__14daObjHBarrel_cFv();
// True False
extern "C" void hitAction__14daObjHBarrel_cFv();
// True False
extern "C" void callEmt__14daObjHBarrel_cFv();
// True False
//  daObjHBarrel_c* False
// 	 daObjHBarrel_c False
extern "C" static void daObjHBarrel_create__FP14daObjHBarrel_c();
// True False
//  daObjHBarrel_c* False
// 	 daObjHBarrel_c False
extern "C" static void daObjHBarrel_Delete__FP14daObjHBarrel_c();
// True False
//  daObjHBarrel_c* False
// 	 daObjHBarrel_c False
extern "C" static void daObjHBarrel_execute__FP14daObjHBarrel_c();
// True False
//  daObjHBarrel_c* False
// 	 daObjHBarrel_c False
extern "C" static void daObjHBarrel_draw__FP14daObjHBarrel_c();
// True False
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" extern u32 const lit_3826;
extern "C" extern u32 const lit_3827;
extern "C" extern u8 const data_80C17350[6 + 2 /* padding */];
extern "C" extern u32 const lit_3953;
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_HBarrel[12];
extern "C" extern void* __vt__14daObjHBarrel_c[3];
extern "C" extern void* __vt__10cCcD_GStts[3];
extern "C" extern void* __vt__10dCcD_GStts[3];
extern "C" extern void* __vt__8cM3dGCyl[3];
extern "C" extern void* __vt__8cM3dGAab[3];

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
void mDoExt_modelUpdate(J3DModel*);
// False False
//  J3DModelData* False
// 	 J3DModelData False
//  u32 False
//  u32 False
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
// False False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
void fopAcM_delete(fopAc_ac_c*);
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
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  int False
//  int False
//  int False
//  csXyz const* False
// 	 csXyz const False
// 		 csXyz False
//  int False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  f32* False
// 	 f32 False
//  f32* False
// 	 f32 False
//  bool False
void fopAcM_createItemFromTable(cXyz const*, int, int, int, csXyz const*, int, cXyz const*, f32*, f32*, bool);
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
extern "C" void mDoExt_modelUpdate__FP8J3DModel();
// False False
//  J3DModelData* False
// 	 J3DModelData False
//  u32 False
//  u32 False
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
// False False
extern "C" void __ct__10fopAc_ac_cFv();
// False False
extern "C" void __dt__10fopAc_ac_cFv();
// False False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
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
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  int False
//  int False
//  int False
//  csXyz const* False
// 	 csXyz const False
// 		 csXyz False
//  int False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  f32* False
// 	 f32 False
//  f32* False
// 	 f32 False
//  bool False
extern "C" void fopAcM_createItemFromTable__FPC4cXyziiiPC5csXyziPC4cXyzPfPfb();
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
//  char const* False
// 	 char const False
// 		 char False
//  s32 False
//  dRes_info_c* False
// 	 dRes_info_c False
//  int False
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
// False False
//  char const* False
// 	 char const False
// 		 char False
//  char const* False
// 	 char const False
// 		 char False
//  dRes_info_c* False
// 	 dRes_info_c False
//  int False
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
// False False
//  JPABaseEmitter* False
// 	 JPABaseEmitter False
//  J3DModelData* False
// 	 J3DModelData False
//  dKy_tevstr_c const& False
// 	 dKy_tevstr_c const False
// 		 dKy_tevstr_c False
//  u8 False
//  void* False
// 	 void False
//  u8 False
//  u8 False
extern "C" void setModel__18dPa_modelEcallBackFP14JPABaseEmitterP12J3DModelDataRC12dKy_tevstr_cUcPvUcUc();
// False False
//  u16 False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  csXyz const* False
// 	 csXyz const False
// 		 csXyz False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  u32 False
extern "C" void setHitMark__13dPa_control_cFUsP10fopAc_ac_cPC4cXyzPC5csXyzPC4cXyzUl();
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
extern "C" void __dt__12dCcD_GObjInfFv();
// False False
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
// False False
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
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
extern "C" void __dt__14Z2SoundObjBaseFv();
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
extern "C" void _savegpr_27();
// False False
extern "C" void _restgpr_27();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern void* __vt__16Z2SoundObjSimple[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 mEcallback__18dPa_modelEcallBack[4];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

// 
// Declarations:
// 

/* 80C16738-80C16758 0020+00 s=1 e=0 z=0  None .text      daObjHBarrel_c_createHeap__FP10fopAc_ac_c                    */
//	80C16744: 80C16A98 (createHeap__14daObjHBarrel_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
asm static void daObjHBarrel_c_createHeap(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/daObjHBarrel_c_createHeap__FP10fopAc_ac_c.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C172FC-80C17340 0044+00 s=2 e=0 z=0  None .rodata    s_CcDCyl__14daObjHBarrel_c                                   */
SECTION_RODATA static u8 const s_CcDCyl__14daObjHBarrel_c[68] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D,
	0xD8, 0xFA, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};

/* 80C17340-80C17344 0004+00 s=0 e=0 z=0  None .rodata    @3826                                                        */
SECTION_RODATA u32 const lit_3826 = 0x432A0000;

/* 80C17344-80C17348 0004+00 s=0 e=0 z=0  None .rodata    @3827                                                        */
SECTION_RODATA u32 const lit_3827 = 0x42B40000;

/* 80C17348-80C1734C 0004+00 s=1 e=0 z=0  None .rodata    @3916                                                        */
SECTION_RODATA static u32 const lit_3916 = 0x3F800000;

/* 80C1734C-80C17350 0004+00 s=1 e=0 z=0  None .rodata    @3917                                                        */
SECTION_RODATA static u32 const lit_3917 = 0xBF800000;

/* 80C17350-80C17358 0006+02 s=0 e=0 z=0  None .rodata    PARTICLE_NAME$3924                                           */
SECTION_RODATA u8 const data_80C17350[6 + 2 /* padding */] = {
	0x82, 0xAB, 0x82, 0xAC, 0x82, 0xAD,
	/* padding */
	0x00, 0x00,
};

/* 80C17358-80C1735C 0004+00 s=0 e=0 z=0  None .rodata    @3953                                                        */
SECTION_RODATA u32 const lit_3953 = 0x3F900000;

/* 80C1735C-80C1737C 0020+00 s=2 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80C1735C = "HBarrel";
SECTION_DEAD char const* const stringBase_80C17364 = "Always";
SECTION_DEAD char const* const stringBase_80C1736B = "BreakWoodBox.bmd";
#pragma pop

/* 80C1737C-80C17380 0004+00 s=3 e=0 z=0  None .data      l_arcName                                                    */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80C17380-80C173A0 0020+00 s=1 e=0 z=0  None .data      daObjHBarrel_METHODS                                         */
SECTION_DATA static void* daObjHBarrel_METHODS[8] = {
	(void*)daObjHBarrel_create__FP14daObjHBarrel_c,
	(void*)daObjHBarrel_Delete__FP14daObjHBarrel_c,
	(void*)daObjHBarrel_execute__FP14daObjHBarrel_c,
	(void*)NULL,
	(void*)daObjHBarrel_draw__FP14daObjHBarrel_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80C173A0-80C173D0 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_HBarrel                                        */
SECTION_DATA void* g_profile_Obj_HBarrel[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0007FFFD,
	(void*)0x01A30000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000710,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x02E90000,
	(void*)&daObjHBarrel_METHODS,
	(void*)0x00040180,
	(void*)0x030E0000,
};

/* 80C173D0-80C173DC 000C+00 s=2 e=0 z=0  None .data      __vt__14daObjHBarrel_c                                       */
SECTION_DATA void* __vt__14daObjHBarrel_c[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__14daObjHBarrel_cFv,
};

/* 80C173DC-80C173E8 000C+00 s=3 e=0 z=0  None .data      __vt__10cCcD_GStts                                           */
SECTION_DATA void* __vt__10cCcD_GStts[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__10cCcD_GSttsFv,
};

/* 80C173E8-80C173F4 000C+00 s=2 e=0 z=0  None .data      __vt__10dCcD_GStts                                           */
SECTION_DATA void* __vt__10dCcD_GStts[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__10dCcD_GSttsFv,
};

/* 80C173F4-80C17400 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGCyl                                              */
SECTION_DATA void* __vt__8cM3dGCyl[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__8cM3dGCylFv,
};

/* 80C17400-80C1740C 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGAab                                              */
SECTION_DATA void* __vt__8cM3dGAab[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__8cM3dGAabFv,
};

/* 80C16758-80C1682C 00D4+00 s=2 e=0 z=0  None .text      __ct__14daObjHBarrel_cFv                                     */
//	80C16770: 80018B64 (__ct__10fopAc_ac_cFv)
//	80C16774: 80C173D0 (__vt__14daObjHBarrel_c)
//	80C16778: 80C173D0 (__vt__14daObjHBarrel_c)
//	80C16780: 803C3728 (__vt__9cCcD_Stts)
//	80C16784: 803C3728 (__vt__9cCcD_Stts)
//	80C16790: 80083760 (__ct__10dCcD_GSttsFv)
//	80C16794: 803AC2E4 (__vt__9dCcD_Stts)
//	80C16798: 803AC2E4 (__vt__9dCcD_Stts)
//	80C167B0: 80083A28 (__ct__12dCcD_GObjInfFv)
//	80C167B4: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80C167B8: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80C167C0: 80C17400 (__vt__8cM3dGAab)
//	80C167C4: 80C17400 (__vt__8cM3dGAab)
//	80C167CC: 80C173F4 (__vt__8cM3dGCyl)
//	80C167D0: 80C173F4 (__vt__8cM3dGCyl)
//	80C167D8: 803C35A4 (__vt__12cCcD_CylAttr)
//	80C167DC: 803C35A4 (__vt__12cCcD_CylAttr)
//	80C167EC: 803AC050 (__vt__8dCcD_Cyl)
//	80C167F0: 803AC050 (__vt__8dCcD_Cyl)
//	80C1680C: 802BE844 (__ct__16Z2SoundObjSimpleFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm daObjHBarrel_c::daObjHBarrel_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/__ct__14daObjHBarrel_cFv.s"
}
#pragma pop


/* 80C1682C-80C16874 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv                                            */
//	80C16844: 80C173F4 (__vt__8cM3dGCyl)
//	80C16848: 80C173F4 (__vt__8cM3dGCyl)
//	80C16858: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm cM3dGCyl::~cM3dGCyl() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/__dt__8cM3dGCylFv.s"
}
#pragma pop


/* 80C16874-80C168BC 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv                                            */
//	80C1688C: 80C17400 (__vt__8cM3dGAab)
//	80C16890: 80C17400 (__vt__8cM3dGAab)
//	80C168A0: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm cM3dGAab::~cM3dGAab() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/__dt__8cM3dGAabFv.s"
}
#pragma pop


/* 80C168BC-80C16918 005C+00 s=1 e=0 z=0  None .text      __dt__10dCcD_GSttsFv                                         */
//	80C168D4: 80C173E8 (__vt__10dCcD_GStts)
//	80C168D8: 80C173E8 (__vt__10dCcD_GStts)
//	80C168E4: 80C173DC (__vt__10cCcD_GStts)
//	80C168E8: 80C173DC (__vt__10cCcD_GStts)
//	80C168FC: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm dCcD_GStts::~dCcD_GStts() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/__dt__10dCcD_GSttsFv.s"
}
#pragma pop


/* 80C16918-80C16A98 0180+00 s=1 e=0 z=0  None .text      __dt__14daObjHBarrel_cFv                                     */
//	80C16938: 80C173D0 (__vt__14daObjHBarrel_c)
//	80C1693C: 80C173D0 (__vt__14daObjHBarrel_c)
//	80C16950: 80C1737C (l_arcName)
//	80C16954: 80C1737C (l_arcName)
//	80C1695C: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
//	80C16968: 803CAD10 (__vt__16Z2SoundObjSimple)
//	80C1696C: 803CAD10 (__vt__16Z2SoundObjSimple)
//	80C1697C: 802BDF48 (__dt__14Z2SoundObjBaseFv)
//	80C16988: 803AC050 (__vt__8dCcD_Cyl)
//	80C1698C: 803AC050 (__vt__8dCcD_Cyl)
//	80C169AC: 803C35A4 (__vt__12cCcD_CylAttr)
//	80C169B0: 803C35A4 (__vt__12cCcD_CylAttr)
//	80C169C8: 80C173F4 (__vt__8cM3dGCyl)
//	80C169CC: 80C173F4 (__vt__8cM3dGCyl)
//	80C169DC: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80C169E0: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80C169F0: 80C17400 (__vt__8cM3dGAab)
//	80C169F4: 80C17400 (__vt__8cM3dGAab)
//	80C16A04: 800840E4 (__dt__12dCcD_GObjInfFv)
//	80C16A10: 803AC2E4 (__vt__9dCcD_Stts)
//	80C16A14: 803AC2E4 (__vt__9dCcD_Stts)
//	80C16A2C: 80C173E8 (__vt__10dCcD_GStts)
//	80C16A30: 80C173E8 (__vt__10dCcD_GStts)
//	80C16A40: 80C173DC (__vt__10cCcD_GStts)
//	80C16A44: 80C173DC (__vt__10cCcD_GStts)
//	80C16A54: 803C3728 (__vt__9cCcD_Stts)
//	80C16A58: 803C3728 (__vt__9cCcD_Stts)
//	80C16A68: 80018C8C (__dt__10fopAc_ac_cFv)
//	80C16A78: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm daObjHBarrel_c::~daObjHBarrel_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/__dt__14daObjHBarrel_cFv.s"
}
#pragma pop


/* 80C16A98-80C16B08 0070+00 s=1 e=0 z=0  None .text      createHeap__14daObjHBarrel_cFv                               */
//	80C16AAC: 80C1737C (l_arcName)
//	80C16AB0: 80C1737C (l_arcName)
//	80C16ABC: 804061C0 (g_dComIfG_gameInfo)
//	80C16AC0: 804061C0 (g_dComIfG_gameInfo)
//	80C16AD0: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80C16AE0: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjHBarrel_c::createHeap() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/createHeap__14daObjHBarrel_cFv.s"
}
#pragma pop


/* 80C16B08-80C16BF8 00F0+00 s=1 e=0 z=0  None .text      create__14daObjHBarrel_cFv                                   */
//	80C16B34: 80C16758 (__ct__14daObjHBarrel_cFv)
//	80C16B54: 80C1737C (l_arcName)
//	80C16B58: 80C1737C (l_arcName)
//	80C16B60: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80C16B74: 80C16738 (daObjHBarrel_c_createHeap__FP10fopAc_ac_c)
//	80C16B78: 80C16738 (daObjHBarrel_c_createHeap__FP10fopAc_ac_c)
//	80C16B80: 8001A4B0 (fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl)
//	80C16B98: 80C16D50 (init__14daObjHBarrel_cFv)
//	80C16BA0: 80C16DEC (setModelMtx__14daObjHBarrel_cFv)
//	80C16BBC: 8001A578 (fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjHBarrel_c::create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/create__14daObjHBarrel_cFv.s"
}
#pragma pop


/* 80C16BF8-80C16C44 004C+00 s=1 e=0 z=0  None .text      Delete__14daObjHBarrel_cFv                                   */
//	80C16C10: 802BDFF8 (deleteObject__14Z2SoundObjBaseFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjHBarrel_c::Delete() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/Delete__14daObjHBarrel_cFv.s"
}
#pragma pop


/* 80C16C44-80C16CA8 0064+00 s=1 e=0 z=0  None .text      draw__14daObjHBarrel_cFv                                     */
//	80C16C58: 8042CA54 (g_env_light)
//	80C16C5C: 8042CA54 (g_env_light)
//	80C16C6C: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80C16C70: 8042CA54 (g_env_light)
//	80C16C74: 8042CA54 (g_env_light)
//	80C16C84: 801A4DA0 (setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c)
//	80C16C8C: 8000DC2C (mDoExt_modelUpdate__FP8J3DModel)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjHBarrel_c::draw() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/draw__14daObjHBarrel_cFv.s"
}
#pragma pop


/* 80C16CA8-80C16D50 00A8+00 s=1 e=0 z=0  None .text      execute__14daObjHBarrel_cFv                                  */
//	80C16CBC: 804061C0 (g_dComIfG_gameInfo)
//	80C16CC0: 804061C0 (g_dComIfG_gameInfo)
//	80C16CF0: 80C16E50 (hitAction__14daObjHBarrel_cFv)
//	80C16CF8: 80C16DEC (setModelMtx__14daObjHBarrel_cFv)
//	80C16D04: 8002D06C (dComIfGp_getReverb__Fi)
//	80C16D24: 804061C0 (g_dComIfG_gameInfo)
//	80C16D28: 804061C0 (g_dComIfG_gameInfo)
//	80C16D34: 80264BA8 (Set__4cCcSFP8cCcD_Obj)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjHBarrel_c::execute() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/execute__14daObjHBarrel_cFv.s"
}
#pragma pop


/* 80C16D50-80C16DEC 009C+00 s=1 e=0 z=0  None .text      init__14daObjHBarrel_cFv                                     */
//	80C16D68: 80C172FC (s_CcDCyl__14daObjHBarrel_c)
//	80C16D6C: 80C172FC (s_CcDCyl__14daObjHBarrel_c)
//	80C16D80: 80083860 (Init__9dCcD_SttsFiiP10fopAc_ac_c)
//	80C16D8C: 800848B4 (Set__8dCcD_CylFRC11dCcD_SrcCyl)
//	80C16DB8: 8026F1DC (SetC__8cM3dGCylFRC4cXyz)
//	80C16DC4: 8026F1F8 (SetH__8cM3dGCylFf)
//	80C16DD0: 8026F200 (SetR__8cM3dGCylFf)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjHBarrel_c::init() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/init__14daObjHBarrel_cFv.s"
}
#pragma pop


/* 80C16DEC-80C16E50 0064+00 s=2 e=0 z=0  None .text      setModelMtx__14daObjHBarrel_cFv                              */
//	80C16E00: 803DD470 (now__14mDoMtx_stack_c)
//	80C16E04: 803DD470 (now__14mDoMtx_stack_c)
//	80C16E14: 803468E8 (PSMTXTrans)
//	80C16E18: 803DD470 (now__14mDoMtx_stack_c)
//	80C16E1C: 803DD470 (now__14mDoMtx_stack_c)
//	80C16E24: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80C16E28: 803DD470 (now__14mDoMtx_stack_c)
//	80C16E2C: 803DD470 (now__14mDoMtx_stack_c)
//	80C16E38: 803464B0 (PSMTXCopy)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjHBarrel_c::setModelMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/setModelMtx__14daObjHBarrel_cFv.s"
}
#pragma pop


/* 80C16E50-80C17090 0240+00 s=1 e=0 z=0  None .text      hitAction__14daObjHBarrel_cFv                                */
//	80C16E6C: 80084460 (ChkTgHit__12dCcD_GObjInfFv)
//	80C16E7C: 800844F8 (GetTgHitObj__12dCcD_GObjInfFv)
//	80C16E8C: 8008457C (GetTgHitObjSe__12dCcD_GObjInfFv)
//	80C16E94: 800845B0 (getHitSeID__12dCcD_GObjInfFUci)
//	80C16EA8: 802BE4A4 (startCollisionSE__14Z2SoundObjBaseFUlUlP14Z2SoundObjBase)
//	80C16EC4: 804061C0 (g_dComIfG_gameInfo)
//	80C16EC8: 804061C0 (g_dComIfG_gameInfo)
//	80C16EE4: 8004C218 (setHitMark__13dPa_control_cFUsP10fopAc_ac_cPC4cXyzPC5csXyzPC4cXyzUl)
//	80C16EEC: 80C17090 (callEmt__14daObjHBarrel_cFv)
//	80C16EF8: 8002D06C (dComIfGp_getReverb__Fi)
//	80C16F0C: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C16F10: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C16F24: 80C17348 (lit_3916)
//	80C16F28: 80C17348 (lit_3916)
//	80C16F30: 80C1734C (lit_3917)
//	80C16F34: 80C1734C (lit_3917)
//	80C16F40: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80C16F78: 8001BF64 (fopAcM_createItemFromTable__FPC4cXyziiiPC5csXyziPC4cXyzPfPfb)
//	80C16F80: 80019C7C (fopAcM_delete__FP10fopAc_ac_c)
//	80C16F98: 80C17348 (lit_3916)
//	80C16F9C: 80C17348 (lit_3916)
//	80C16FBC: 804061C0 (g_dComIfG_gameInfo)
//	80C16FC0: 804061C0 (g_dComIfG_gameInfo)
//	80C16FEC: 804061C0 (g_dComIfG_gameInfo)
//	80C16FF0: 804061C0 (g_dComIfG_gameInfo)
//	80C1702C: 80C17348 (lit_3916)
//	80C17030: 80C17348 (lit_3916)
//	80C17034: 8004CA90 (set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80C17040: 804061C0 (g_dComIfG_gameInfo)
//	80C17044: 804061C0 (g_dComIfG_gameInfo)
//	80C17060: 8004C218 (setHitMark__13dPa_control_cFUsP10fopAc_ac_cPC4cXyzPC5csXyzPC4cXyzUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjHBarrel_c::hitAction() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/hitAction__14daObjHBarrel_cFv.s"
}
#pragma pop


/* 80C17090-80C171F8 0168+00 s=1 e=0 z=0  None .text      callEmt__14daObjHBarrel_cFv                                  */
//	80C170A0: 803621D4 (_savegpr_27)
//	80C170A8: 80C172FC (s_CcDCyl__14daObjHBarrel_c)
//	80C170AC: 80C172FC (s_CcDCyl__14daObjHBarrel_c)
//	80C170D8: 80C1735C (stringBase0)
//	80C170DC: 80C1735C (stringBase0)
//	80C170E8: 804061C0 (g_dComIfG_gameInfo)
//	80C170EC: 804061C0 (g_dComIfG_gameInfo)
//	80C170FC: 8003C37C (getRes__14dRes_control_cFPCcPCcP11dRes_info_ci)
//	80C1710C: 804061C0 (g_dComIfG_gameInfo)
//	80C17110: 804061C0 (g_dComIfG_gameInfo)
//	80C17118: 80450E90 (mEcallback__18dPa_modelEcallBack)
//	80C1711C: 80450E90 (mEcallback__18dPa_modelEcallBack)
//	80C17160: 8004CA90 (set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80C1717C: 8004AC00 (setModel__18dPa_modelEcallBackFP14JPABaseEmitterP12J3DModelDataRC12dKy_tevstr_cUcPvUcUc)
//	80C171CC: 8004CA90 (set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80C171E4: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjHBarrel_c::callEmt() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/callEmt__14daObjHBarrel_cFv.s"
}
#pragma pop


/* 80C171F8-80C1724C 0054+00 s=1 e=0 z=0  None .text      daObjHBarrel_create__FP14daObjHBarrel_c                      */
//	80C17220: 80C16758 (__ct__14daObjHBarrel_cFv)
//	80C17234: 80C16B08 (create__14daObjHBarrel_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daObjHBarrel_c* False
// 	 daObjHBarrel_c False
asm static void daObjHBarrel_create(daObjHBarrel_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/daObjHBarrel_create__FP14daObjHBarrel_c.s"
}
#pragma pop


/* 80C1724C-80C1726C 0020+00 s=1 e=0 z=0  None .text      daObjHBarrel_Delete__FP14daObjHBarrel_c                      */
//	80C17258: 80C16BF8 (Delete__14daObjHBarrel_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daObjHBarrel_c* False
// 	 daObjHBarrel_c False
asm static void daObjHBarrel_Delete(daObjHBarrel_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/daObjHBarrel_Delete__FP14daObjHBarrel_c.s"
}
#pragma pop


/* 80C1726C-80C1728C 0020+00 s=1 e=0 z=0  None .text      daObjHBarrel_execute__FP14daObjHBarrel_c                     */
//	80C17278: 80C16CA8 (execute__14daObjHBarrel_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daObjHBarrel_c* False
// 	 daObjHBarrel_c False
asm static void daObjHBarrel_execute(daObjHBarrel_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/daObjHBarrel_execute__FP14daObjHBarrel_c.s"
}
#pragma pop


/* 80C1728C-80C172AC 0020+00 s=1 e=0 z=0  None .text      daObjHBarrel_draw__FP14daObjHBarrel_c                        */
//	80C17298: 80C16C44 (draw__14daObjHBarrel_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daObjHBarrel_c* False
// 	 daObjHBarrel_c False
asm static void daObjHBarrel_draw(daObjHBarrel_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/daObjHBarrel_draw__FP14daObjHBarrel_c.s"
}
#pragma pop


/* 80C172AC-80C172F4 0048+00 s=1 e=0 z=0  None .text      __dt__10cCcD_GSttsFv                                         */
//	80C172C4: 80C173DC (__vt__10cCcD_GStts)
//	80C172C8: 80C173DC (__vt__10cCcD_GStts)
//	80C172D8: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm cCcD_GStts::~cCcD_GStts() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/__dt__10cCcD_GSttsFv.s"
}
#pragma pop


