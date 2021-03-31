// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_sekidoor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_sekidoor/d_a_obj_sekidoor.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct fopAc_ac_c {
};

struct daObj_SekiDoor_c {
	/* 80CCD02C */ // True False
void create();
	/* 80CCD154 */ // True False
void CreateHeap();
	/* 80CCD1F0 */ // True False
void Create();
	/* 80CCD23C */ // True False
void Delete();
	/* 80CCD290 */ // True False
//  f32 (** )[3][4] False
// 	 f32 False
// 	 ** False
// 		 * False
// 			  False
void Execute(f32 (** )[3][4]);
	/* 80CCD538 */ // True False
void Draw();
	/* 80CCD5DC */ // False False
void evtSkip();
	/* 80CCD64C */ // True False
void setPrtcls();
	/* 80CCD810 */ // True False
void initBaseMtx();
	/* 80CCD84C */ // True False
void setBaseMtx();
};

struct daObj_SekiDoor_Param_c {
	/* 80CCD9AC */ // True False
~daObj_SekiDoor_Param_c();
};

struct cXyz {
};

struct dVibration_c {
	/* 8006FA24 */ // False False
//  int False
//  int False
//  cXyz False
void StartShock(int, int, cXyz);
	/* 8006FD94 */ // False False
//  int False
void StopQuake(int);
};

struct dSv_info_c {
	/* 80035360 */ // False False
//  int False
//  int False
void isSwitch(int, int) const;
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
	struct level_c {
		/* 8004B918 */ // False False
//  u32 False
void getEmitter(u32);
	};

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

struct dBgW {
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

struct J3DModel {
};

// 
// Forward References:
// 

// False False
void dComIfGp_event_runCheck();
// True False
//  void* False
// 	 void False
static void daObj_SekiDoor_Create(void*);
// True False
//  void* False
// 	 void False
static void daObj_SekiDoor_Delete(void*);
// True False
//  void* False
// 	 void False
static void daObj_SekiDoor_Execute(void*);
// True False
//  void* False
// 	 void False
static void daObj_SekiDoor_Draw(void*);
// True False
//  bool False
//  void* False
// 	 void False
static bool daObj_SekiDoor_IsDelete(void*);

// True False
extern "C" void create__16daObj_SekiDoor_cFv();
// True False
extern "C" void CreateHeap__16daObj_SekiDoor_cFv();
// True False
extern "C" void Create__16daObj_SekiDoor_cFv();
// True False
extern "C" void Delete__16daObj_SekiDoor_cFv();
// True False
//  f32 (** )[3][4] False
// 	 f32 False
// 	 ** False
// 		 * False
// 			  False
extern "C" void Execute__16daObj_SekiDoor_cFPPA3_A4_f();
// False False
extern "C" void dComIfGp_event_runCheck__Fv();
// True False
extern "C" void Draw__16daObj_SekiDoor_cFv();
// False False
extern "C" void evtSkip__16daObj_SekiDoor_cFv();
// True False
extern "C" void setPrtcls__16daObj_SekiDoor_cFv();
// True False
extern "C" void initBaseMtx__16daObj_SekiDoor_cFv();
// True False
extern "C" void setBaseMtx__16daObj_SekiDoor_cFv();
// True False
//  void* False
// 	 void False
extern "C" static void daObj_SekiDoor_Create__FPv();
// True False
//  void* False
// 	 void False
extern "C" static void daObj_SekiDoor_Delete__FPv();
// True False
//  void* False
// 	 void False
extern "C" static void daObj_SekiDoor_Execute__FPv();
// True False
//  void* False
// 	 void False
extern "C" static void daObj_SekiDoor_Draw__FPv();
// True False
//  bool False
//  void* False
// 	 void False
extern "C" static bool daObj_SekiDoor_IsDelete__FPv();
// False False
extern "C" void __sinit_d_a_obj_sekidoor_cpp();
// True False
extern "C" void __dt__22daObj_SekiDoor_Param_cFv();
extern "C" extern u32 const lit_3957;
extern "C" extern u32 const lit_3958;
extern "C" extern u32 const lit_3959;
extern "C" extern u8 const lit_3960[4];
extern "C" extern u8 const lit_3962[8];
extern "C" extern u8 const data_80CCDA28[8];
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern u8 l_dzbData[8];
extern "C" extern void* g_profile_OBJ_SEKIDOOR[12];
extern "C" extern void* __vt__16daObj_SekiDoor_c[10];
extern "C" extern void* __vt__22daObj_SekiDoor_Param_c[3];

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
void fopAcM_delete(fopAc_ac_c*);
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
//  s16* False
// 	 s16 False
//  s16 False
//  s16 False
void cLib_chaseS(s16*, s16, s16);
// False False
//  f32* False
// 	 f32 False
//  f32 False
//  f32 False
void cLib_chaseF(f32*, f32, f32);
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
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
//  s16 False
extern "C" void mDoMtx_ZrotM__FPA4_fs();
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
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
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
//  u32 False
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
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
//  int False
//  int False
//  cXyz False
extern "C" void StartShock__12dVibration_cFii4cXyz();
// False False
//  int False
extern "C" void StopQuake__12dVibration_cFi();
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
//  s16* False
// 	 s16 False
//  s16 False
//  s16 False
extern "C" void cLib_chaseS__FPsss();
// False False
//  f32* False
// 	 f32 False
//  f32 False
//  f32 False
extern "C" void cLib_chaseF__FPfff();
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
//  void False
//  void* False
// 	 void False
extern "C" void __dl__FPv();
// False False
extern "C" void PSMTXCopy();
// False False
extern "C" void PSMTXTrans();
// False False
extern "C" void _savegpr_24();
// False False
extern "C" void _restgpr_24();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern f32 G_CM3D_F_ABS_MIN[1 + 1 /* padding */];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
// False False
extern "C" void __register_global_object();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80CCDA08-80CCDA0C 0001+03 s=2 e=0 z=0  None .rodata    m__22daObj_SekiDoor_Param_c                                  */
SECTION_RODATA static u8 const m__22daObj_SekiDoor_Param_c[1 + 3 /* padding */] = {
	0x00,
	/* padding */
	0x00, 0x00, 0x00,
};

/* 80CCDA0C-80CCDA10 0004+00 s=1 e=0 z=0  None .rodata    @3956                                                        */
SECTION_RODATA static u32 const lit_3956 = 0x43E60000;

/* 80CCDA10-80CCDA14 0004+00 s=0 e=0 z=0  None .rodata    @3957                                                        */
SECTION_RODATA u32 const lit_3957 = 0x40800000;

/* 80CCDA14-80CCDA18 0004+00 s=0 e=0 z=0  None .rodata    @3958                                                        */
SECTION_RODATA u32 const lit_3958 = 0x3F800000;

/* 80CCDA18-80CCDA1C 0004+00 s=0 e=0 z=0  None .rodata    @3959                                                        */
SECTION_RODATA u32 const lit_3959 = 0xBF800000;

/* 80CCDA1C-80CCDA20 0004+00 s=0 e=0 z=0  None .rodata    @3960                                                        */
SECTION_RODATA u8 const lit_3960[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80CCDA20-80CCDA28 0008+00 s=0 e=0 z=0  None .rodata    @3962                                                        */
SECTION_RODATA u8 const lit_3962[8] = {
	0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80CCDA28-80CCDA30 0008+00 s=0 e=0 z=0  None .rodata    id$4006                                                      */
SECTION_RODATA u8 const data_80CCDA28[8] = {
	0x8B, 0x85, 0x8B, 0x86, 0x8B, 0x87, 0x8B, 0x88,
};

/* 80CCDA30-80CCDA3C 000C+00 s=1 e=0 z=0  None .rodata    None                                                         */
SECTION_RODATA static u8 const struct_80CCDA30[12] = {
	/* 80CCDA30 0001 stringBase_80CCDA30 @stringBase0 */
	0x00,
	/* 80CCDA31 000B data_80CCDA31 None */
	0x53, 0x65, 0x6B, 0x69, 0x44, 0x6F, 0x6F, 0x72, 0x00, 0x00, 0x00,
};

/* 80CCDA3C-80CCDA48 000C+00 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc                                            */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CCDA48-80CCDA5C 0004+10 s=0 e=0 z=0  None .data      @1787                                                        */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
	0x02000201,
	/* padding */
	0x40080000, 0x00000000, 0x3FE00000, 0x00000000,
};

/* 80CCDA5C-80CCDA64 0008+00 s=2 e=0 z=0  None .data      l_bmdData                                                    */
SECTION_DATA static u8 l_bmdData[8] = {
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01,
};

/* 80CCDA64-80CCDA6C 0008+00 s=0 e=0 z=0  None .data      l_dzbData                                                    */
SECTION_DATA u8 l_dzbData[8] = {
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x01,
};

/* 80CCDA6C-80CCDA74 0008+00 s=2 e=0 z=0  None .data      l_resNameList                                                */
SECTION_DATA static void* l_resNameList[2] = {
	(void*)(((char*)&struct_80CCDA30)+0x0) /* @stringBase0 */,
	(void*)(((char*)&struct_80CCDA30)+0x1) /* None */,
};

/* 80CCDA74-80CCDA94 0020+00 s=1 e=0 z=0  None .data      daObj_SekiDoor_MethodTable                                   */
SECTION_DATA static void* daObj_SekiDoor_MethodTable[8] = {
	(void*)daObj_SekiDoor_Create__FPv,
	(void*)daObj_SekiDoor_Delete__FPv,
	(void*)daObj_SekiDoor_Execute__FPv,
	(void*)daObj_SekiDoor_IsDelete__FPv,
	(void*)daObj_SekiDoor_Draw__FPv,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80CCDA94-80CCDAC4 0030+00 s=0 e=0 z=1  None .data      g_profile_OBJ_SEKIDOOR                                       */
SECTION_DATA void* g_profile_OBJ_SEKIDOOR[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0007FFFD,
	(void*)0x01320000,
	(void*)&g_fpcLf_Method,
	(void*)0x000005D8,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x00570000,
	(void*)&daObj_SekiDoor_MethodTable,
	(void*)0x00044000,
	(void*)0x000E0000,
};

/* 80CCDAC4-80CCDAEC 0028+00 s=1 e=0 z=0  None .data      __vt__16daObj_SekiDoor_c                                     */
SECTION_DATA void* __vt__16daObj_SekiDoor_c[10] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)CreateHeap__16daObj_SekiDoor_cFv,
	(void*)Create__16daObj_SekiDoor_cFv,
	(void*)Execute__16daObj_SekiDoor_cFPPA3_A4_f,
	(void*)Draw__16daObj_SekiDoor_cFv,
	(void*)Delete__16daObj_SekiDoor_cFv,
	(void*)IsDelete__16dBgS_MoveBgActorFv,
	(void*)ToFore__16dBgS_MoveBgActorFv,
	(void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80CCD02C-80CCD154 0128+00 s=1 e=0 z=0  None .text      create__16daObj_SekiDoor_cFv                                 */
//	80CCD044: 80CCDA3C (cNullVec__6Z2Calc)
//	80CCD048: 80CCDA3C (cNullVec__6Z2Calc)
//	80CCD060: 80078624 (__ct__16dBgS_MoveBgActorFv)
//	80CCD064: 80CCDAC4 (__vt__16daObj_SekiDoor_c)
//	80CCD068: 80CCDAC4 (__vt__16daObj_SekiDoor_c)
//	80CCD0A8: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80CCD0C8: 804061C0 (g_dComIfG_gameInfo)
//	80CCD0CC: 804061C0 (g_dComIfG_gameInfo)
//	80CCD0D8: 80035360 (isSwitch__10dSv_info_cCFii)
//	80CCD114: 80075AD8 (dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz)
//	80CCD118: 80075AD8 (dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz)
//	80CCD124: 800787BC (MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObj_SekiDoor_c::create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sekidoor/d_a_obj_sekidoor/create__16daObj_SekiDoor_cFv.s"
}
#pragma pop


/* 80CCD154-80CCD1F0 009C+00 s=1 e=0 z=0  None .text      CreateHeap__16daObj_SekiDoor_cFv                             */
//	80CCD170: 80CCDA5C (l_bmdData)
//	80CCD174: 80CCDA5C (l_bmdData)
//	80CCD184: 80CCDA6C (l_resNameList)
//	80CCD188: 80CCDA6C (l_resNameList)
//	80CCD194: 804061C0 (g_dComIfG_gameInfo)
//	80CCD198: 804061C0 (g_dComIfG_gameInfo)
//	80CCD1A8: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80CCD1C8: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObj_SekiDoor_c::CreateHeap() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sekidoor/d_a_obj_sekidoor/CreateHeap__16daObj_SekiDoor_cFv.s"
}
#pragma pop


/* 80CCD1F0-80CCD23C 004C+00 s=1 e=0 z=0  None .text      Create__16daObj_SekiDoor_cFv                                 */
//	80CCD204: 80CCD810 (initBaseMtx__16daObj_SekiDoor_cFv)
//	80CCD220: 8001A578 (fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObj_SekiDoor_c::Create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sekidoor/d_a_obj_sekidoor/func_80CCD1F0.s"
}
#pragma pop


/* 80CCD23C-80CCD290 0054+00 s=1 e=0 z=0  None .text      Delete__16daObj_SekiDoor_cFv                                 */
//	80CCD250: 80CCDA5C (l_bmdData)
//	80CCD254: 80CCDA5C (l_bmdData)
//	80CCD26C: 80CCDA6C (l_resNameList)
//	80CCD270: 80CCDA6C (l_resNameList)
//	80CCD278: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObj_SekiDoor_c::Delete() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sekidoor/d_a_obj_sekidoor/Delete__16daObj_SekiDoor_cFv.s"
}
#pragma pop


/* 80CCD290-80CCD51C 028C+00 s=1 e=0 z=0  None .text      Execute__16daObj_SekiDoor_cFPPA3_A4_f                        */
//	80CCD2A8: 80CCDA08 (m__22daObj_SekiDoor_Param_c)
//	80CCD2AC: 80CCDA08 (m__22daObj_SekiDoor_Param_c)
//	80CCD2DC: 80019C7C (fopAcM_delete__FP10fopAc_ac_c)
//	80CCD2F0: 80451180 (G_CM3D_F_ABS_MIN)
//	80CCD2F4: 80451180 (G_CM3D_F_ABS_MIN)
//	80CCD338: 80439A20 (sincosTable___5JMath)
//	80CCD33C: 80439A20 (sincosTable___5JMath)
//	80CCD380: 802706D0 (cLib_chaseS__FPsss)
//	80CCD38C: 804061C0 (g_dComIfG_gameInfo)
//	80CCD390: 804061C0 (g_dComIfG_gameInfo)
//	80CCD39C: 8006FD94 (StopQuake__12dVibration_cFi)
//	80CCD3F0: 80270740 (cLib_chaseF__FPfff)
//	80CCD410: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80CCD414: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80CCD440: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80CCD45C: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80CCD460: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80CCD48C: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80CCD4A4: 804061C0 (g_dComIfG_gameInfo)
//	80CCD4A8: 804061C0 (g_dComIfG_gameInfo)
//	80CCD4BC: 8006FA24 (StartShock__12dVibration_cFii4cXyz)
//	80CCD4F4: 80CCD84C (setBaseMtx__16daObj_SekiDoor_cFv)
//	80CCD4FC: 80CCD64C (setPrtcls__16daObj_SekiDoor_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  f32 (** )[3][4] False
// 	 f32 False
// 	 ** False
// 		 * False
// 			  False
asm void daObj_SekiDoor_c::Execute(f32 (** param_0)[3][4]) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sekidoor/d_a_obj_sekidoor/Execute__16daObj_SekiDoor_cFPPA3_A4_f.s"
}
#pragma pop


/* 80CCD51C-80CCD538 001C+00 s=0 e=0 z=0  None .text      dComIfGp_event_runCheck__Fv                                  */
//	80CCD51C: 804061C0 (g_dComIfG_gameInfo)
//	80CCD520: 804061C0 (g_dComIfG_gameInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dComIfGp_event_runCheck() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sekidoor/d_a_obj_sekidoor/dComIfGp_event_runCheck__Fv.s"
}
#pragma pop


/* 80CCD538-80CCD5DC 00A4+00 s=1 e=0 z=0  None .text      Draw__16daObj_SekiDoor_cFv                                   */
//	80CCD550: 8042CA54 (g_env_light)
//	80CCD554: 8042CA54 (g_env_light)
//	80CCD564: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80CCD568: 8042CA54 (g_env_light)
//	80CCD56C: 8042CA54 (g_env_light)
//	80CCD57C: 801A4DA0 (setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c)
//	80CCD580: 804061C0 (g_dComIfG_gameInfo)
//	80CCD584: 804061C0 (g_dComIfG_gameInfo)
//	80CCD58C: 80434AC8 (j3dSys)
//	80CCD590: 80434AC8 (j3dSys)
//	80CCD5A4: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
//	80CCD5A8: 804061C0 (g_dComIfG_gameInfo)
//	80CCD5AC: 804061C0 (g_dComIfG_gameInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObj_SekiDoor_c::Draw() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sekidoor/d_a_obj_sekidoor/Draw__16daObj_SekiDoor_cFv.s"
}
#pragma pop


/* 80CCD5DC-80CCD64C 0070+00 s=0 e=0 z=1  None .text      evtSkip__16daObj_SekiDoor_cFv                                */
//	80CCD5FC: 804061C0 (g_dComIfG_gameInfo)
//	80CCD600: 804061C0 (g_dComIfG_gameInfo)
//	80CCD60C: 8006FD94 (StopQuake__12dVibration_cFi)
//	80CCD620: 80CCDA0C (lit_3956)
//	80CCD624: 80CCDA0C (lit_3956)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void daObj_SekiDoor_c::evtSkip() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sekidoor/d_a_obj_sekidoor/evtSkip__16daObj_SekiDoor_cFv.s"
}
#pragma pop


/* 80CCD64C-80CCD810 01C4+00 s=1 e=0 z=0  None .text      setPrtcls__16daObj_SekiDoor_cFv                              */
//	80CCD65C: 803621C8 (_savegpr_24)
//	80CCD664: 80CCDA08 (m__22daObj_SekiDoor_Param_c)
//	80CCD668: 80CCDA08 (m__22daObj_SekiDoor_Param_c)
//	80CCD6C4: 804061C0 (g_dComIfG_gameInfo)
//	80CCD6C8: 804061C0 (g_dComIfG_gameInfo)
//	80CCD71C: 8004D4CC (set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80CCD754: 804061C0 (g_dComIfG_gameInfo)
//	80CCD758: 804061C0 (g_dComIfG_gameInfo)
//	80CCD7AC: 8004D4CC (set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80CCD7C0: 8004B918 (getEmitter__Q213dPa_control_c7level_cFUl)
//	80CCD7FC: 80362214 (_restgpr_24)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObj_SekiDoor_c::setPrtcls() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sekidoor/d_a_obj_sekidoor/setPrtcls__16daObj_SekiDoor_cFv.s"
}
#pragma pop


/* 80CCD810-80CCD84C 003C+00 s=1 e=0 z=0  None .text      initBaseMtx__16daObj_SekiDoor_cFv                            */
//	80CCD838: 80CCD84C (setBaseMtx__16daObj_SekiDoor_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObj_SekiDoor_c::initBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sekidoor/d_a_obj_sekidoor/initBaseMtx__16daObj_SekiDoor_cFv.s"
}
#pragma pop


/* 80CCD84C-80CCD8D8 008C+00 s=2 e=0 z=0  None .text      setBaseMtx__16daObj_SekiDoor_cFv                             */
//	80CCD860: 803DD470 (now__14mDoMtx_stack_c)
//	80CCD864: 803DD470 (now__14mDoMtx_stack_c)
//	80CCD87C: 803468E8 (PSMTXTrans)
//	80CCD880: 803DD470 (now__14mDoMtx_stack_c)
//	80CCD884: 803DD470 (now__14mDoMtx_stack_c)
//	80CCD88C: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80CCD890: 803DD470 (now__14mDoMtx_stack_c)
//	80CCD894: 803DD470 (now__14mDoMtx_stack_c)
//	80CCD89C: 8000C4CC (mDoMtx_ZrotM__FPA4_fs)
//	80CCD8A0: 803DD470 (now__14mDoMtx_stack_c)
//	80CCD8A4: 803DD470 (now__14mDoMtx_stack_c)
//	80CCD8B0: 803464B0 (PSMTXCopy)
//	80CCD8B4: 803DD470 (now__14mDoMtx_stack_c)
//	80CCD8B8: 803DD470 (now__14mDoMtx_stack_c)
//	80CCD8C0: 803464B0 (PSMTXCopy)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObj_SekiDoor_c::setBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sekidoor/d_a_obj_sekidoor/setBaseMtx__16daObj_SekiDoor_cFv.s"
}
#pragma pop


/* 80CCD8D8-80CCD8F8 0020+00 s=1 e=0 z=0  None .text      daObj_SekiDoor_Create__FPv                                   */
//	80CCD8E4: 80CCD02C (create__16daObj_SekiDoor_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  void* False
// 	 void False
asm static void daObj_SekiDoor_Create(void* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sekidoor/d_a_obj_sekidoor/daObj_SekiDoor_Create__FPv.s"
}
#pragma pop


/* 80CCD8F8-80CCD918 0020+00 s=1 e=0 z=0  None .text      daObj_SekiDoor_Delete__FPv                                   */
//	80CCD904: 800788DC (MoveBGDelete__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  void* False
// 	 void False
asm static void daObj_SekiDoor_Delete(void* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sekidoor/d_a_obj_sekidoor/daObj_SekiDoor_Delete__FPv.s"
}
#pragma pop


/* 80CCD918-80CCD938 0020+00 s=1 e=0 z=0  None .text      daObj_SekiDoor_Execute__FPv                                  */
//	80CCD924: 80078950 (MoveBGExecute__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  void* False
// 	 void False
asm static void daObj_SekiDoor_Execute(void* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sekidoor/d_a_obj_sekidoor/daObj_SekiDoor_Execute__FPv.s"
}
#pragma pop


/* 80CCD938-80CCD964 002C+00 s=1 e=0 z=0  None .text      daObj_SekiDoor_Draw__FPv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  void* False
// 	 void False
asm static void daObj_SekiDoor_Draw(void* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sekidoor/d_a_obj_sekidoor/daObj_SekiDoor_Draw__FPv.s"
}
#pragma pop


/* 80CCD964-80CCD96C 0008+00 s=1 e=0 z=0  None .text      daObj_SekiDoor_IsDelete__FPv                                 */
// True False
//  bool False
//  void* False
// 	 void False
static bool daObj_SekiDoor_IsDelete(void* param_0) {
	return true;
}


/* ############################################################################################## */
/* 80CCDAEC-80CCDAF8 000C+00 s=2 e=0 z=0  None .data      __vt__22daObj_SekiDoor_Param_c                               */
SECTION_DATA void* __vt__22daObj_SekiDoor_Param_c[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__22daObj_SekiDoor_Param_cFv,
};

/* 80CCDB00-80CCDB0C 000C+00 s=1 e=0 z=0  None .bss       @3803                                                        */
static u8 lit_3803[12];

/* 80CCDB0C-80CCDB10 0004+00 s=1 e=0 z=0  None .bss       l_HIO                                                        */
static u8 l_HIO[4];

/* 80CCD96C-80CCD9AC 0040+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_sekidoor_cpp                                 */
//	80CCD978: 80CCDAEC (__vt__22daObj_SekiDoor_Param_c)
//	80CCD97C: 80CCDAEC (__vt__22daObj_SekiDoor_Param_c)
//	80CCD980: 80CCDB0C (l_HIO)
//	80CCD984: 80CCDB0C (l_HIO)
//	80CCD988: 80CCD9AC (__dt__22daObj_SekiDoor_Param_cFv)
//	80CCD98C: 80CCD9AC (__dt__22daObj_SekiDoor_Param_cFv)
//	80CCD990: 80CCDB00 (lit_3803)
//	80CCD994: 80CCDB00 (lit_3803)
//	80CCD998: 80CCCFB8 (__register_global_object)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __sinit_d_a_obj_sekidoor_cpp() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sekidoor/d_a_obj_sekidoor/__sinit_d_a_obj_sekidoor_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
#pragma section ".ctors$15"
__declspec(section ".ctors$15") void* const _ctors_80CCD96C = (void*)__sinit_d_a_obj_sekidoor_cpp;
#pragma pop


/* 80CCD9AC-80CCD9F4 0048+00 s=2 e=0 z=0  None .text      __dt__22daObj_SekiDoor_Param_cFv                             */
//	80CCD9C4: 80CCDAEC (__vt__22daObj_SekiDoor_Param_c)
//	80CCD9C8: 80CCDAEC (__vt__22daObj_SekiDoor_Param_c)
//	80CCD9D8: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm daObj_SekiDoor_Param_c::~daObj_SekiDoor_Param_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sekidoor/d_a_obj_sekidoor/__dt__22daObj_SekiDoor_Param_cFv.s"
}
#pragma pop


