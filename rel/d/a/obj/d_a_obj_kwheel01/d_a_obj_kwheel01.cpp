// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_kwheel01
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct mDoMtx_stack_c {
	/* 8000CD9C */ // False False
//  f32 False
//  f32 False
//  f32 False
void transM(f32, f32, f32);
};

struct fopAc_ac_c {
	/* 80018C8C */ // False False
~fopAc_ac_c();
};

struct daObjKWheel01_c {
	/* 80C4EA78 */ // True False
void create1st();
	/* 80C4EC54 */ // True False
void setMtx();
	/* 80C4EDCC */ // True False
void CreateHeap();
	/* 80C4EF38 */ // True False
void Create();
	/* 80C4F048 */ // True False
//  f32 (** )[3][4] False
// 	 f32 False
// 	 ** False
// 		 * False
// 			  False
void Execute(f32 (** )[3][4]);
	/* 80C4F344 */ // True False
void Draw();
	/* 80C4F3E8 */ // True False
void Delete();
	/* 80C4F498 */ // True False
void eventStart();
	/* 80C4F60C */ // True False
~daObjKWheel01_c();
};

struct dSv_info_c {
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

struct dEvent_manager_c {
	/* 80047698 */ // False False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  u8 False
void getEventIdx(fopAc_ac_c*, u8);
};

struct dEvLib_callback_c {
	/* 8004886C */ // False False
void eventUpdate();
	/* 800488A4 */ // False False
//  int False
//  int False
//  int False
void setEvent(int, int, int);
	/* 80C4F5AC */ // True False
~dEvLib_callback_c();
	/* 80C4F5F4 */ // True False
//  bool False
bool eventStart();
	/* 80C4F5FC */ // True False
//  bool False
bool eventRun();
	/* 80C4F604 */ // True False
//  bool False
bool eventEnd();
};

struct dBgW_Base {
};

struct dBgW {
	/* 8007B970 */ // False False
dBgW();
	/* 8007B9C0 */ // False False
void Move();
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

struct dBgS {
	/* 80074A08 */ // False False
//  dBgW_Base* False
// 	 dBgW_Base False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct cBgW_BgId {
	/* 802681D4 */ // False False
void ChkUsed() const;
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

struct cBgS {
	/* 80074250 */ // False False
//  dBgW_Base* False
// 	 dBgW_Base False
void Release(dBgW_Base*);
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
//  void* False
// 	 void False
//  void* False
// 	 void False
static void searchKWheel00(void*, void*);
// True False
//  daObjKWheel01_c* False
// 	 daObjKWheel01_c False
static void daObjKWheel01_create1st(daObjKWheel01_c*);
// True False
//  daObjKWheel01_c* False
// 	 daObjKWheel01_c False
static void daObjKWheel01_MoveBGDelete(daObjKWheel01_c*);
// True False
//  daObjKWheel01_c* False
// 	 daObjKWheel01_c False
static void daObjKWheel01_MoveBGExecute(daObjKWheel01_c*);
// True False
//  daObjKWheel01_c* False
// 	 daObjKWheel01_c False
static void daObjKWheel01_MoveBGDraw(daObjKWheel01_c*);

// True False
extern "C" void create1st__15daObjKWheel01_cFv();
// True False
extern "C" void setMtx__15daObjKWheel01_cFv();
// True False
extern "C" void CreateHeap__15daObjKWheel01_cFv();
// True False
extern "C" void Create__15daObjKWheel01_cFv();
// True False
//  void* False
// 	 void False
//  void* False
// 	 void False
extern "C" static void searchKWheel00__FPvPv();
// True False
//  f32 (** )[3][4] False
// 	 f32 False
// 	 ** False
// 		 * False
// 			  False
extern "C" void Execute__15daObjKWheel01_cFPPA3_A4_f();
// True False
extern "C" void Draw__15daObjKWheel01_cFv();
// True False
extern "C" void Delete__15daObjKWheel01_cFv();
// True False
extern "C" void eventStart__15daObjKWheel01_cFv();
// True False
//  daObjKWheel01_c* False
// 	 daObjKWheel01_c False
extern "C" static void daObjKWheel01_create1st__FP15daObjKWheel01_c();
// True False
//  daObjKWheel01_c* False
// 	 daObjKWheel01_c False
extern "C" static void daObjKWheel01_MoveBGDelete__FP15daObjKWheel01_c();
// True False
//  daObjKWheel01_c* False
// 	 daObjKWheel01_c False
extern "C" static void daObjKWheel01_MoveBGExecute__FP15daObjKWheel01_c();
// True False
//  daObjKWheel01_c* False
// 	 daObjKWheel01_c False
extern "C" static void daObjKWheel01_MoveBGDraw__FP15daObjKWheel01_c();
// True False
extern "C" void __dt__17dEvLib_callback_cFv();
// True False
//  bool False
extern "C" bool eventStart__17dEvLib_callback_cFv();
// True False
//  bool False
extern "C" bool eventRun__17dEvLib_callback_cFv();
// True False
//  bool False
extern "C" bool eventEnd__17dEvLib_callback_cFv();
// True False
extern "C" void __dt__15daObjKWheel01_cFv();
// True False
extern "C" static void func_80C4F6A0();
// True False
extern "C" static void func_80C4F6A8();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_KWheel01[12];
extern "C" extern void* __vt__17dEvLib_callback_c[6];
extern "C" extern void* __vt__15daObjKWheel01_c[18];

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
//  void* False
// 	 void False
void fopAc_IsActor(void*);
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
//  s16 False
//  u32 False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  int False
//  csXyz const* False
// 	 csXyz const False
// 		 csXyz False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  s8 False
void fopAcM_create(s16, u32, cXyz const*, int, csXyz const*, cXyz const*, s8);
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
//  f32 False
void cM_rndFX(f32);
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
//  f32 False
//  f32 False
//  f32 False
extern "C" void transM__14mDoMtx_stack_cFfff();
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
//  void* False
// 	 void False
extern "C" void fopAc_IsActor__FPv();
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
//  s16 False
//  u32 False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  int False
//  csXyz const* False
// 	 csXyz const False
// 		 csXyz False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  s8 False
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
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
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  u8 False
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cUc();
// False False
extern "C" void eventUpdate__17dEvLib_callback_cFv();
// False False
//  int False
//  int False
//  int False
extern "C" void setEvent__17dEvLib_callback_cFiii();
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
//  f32 False
extern "C" void cM_rndFX__Ff();
// False False
extern "C" void ChkUsed__9cBgW_BgIdCFv();
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
extern "C" void PSMTXMultVec();
// False False
extern "C" void _savegpr_25();
// False False
extern "C" void _savegpr_26();
// False False
extern "C" void _savegpr_27();
// False False
extern "C" void _savegpr_28();
// False False
extern "C" void _restgpr_25();
// False False
extern "C" void _restgpr_26();
// False False
extern "C" void _restgpr_27();
// False False
extern "C" void _restgpr_28();
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

/* ############################################################################################## */
/* 80C4F6B8-80C4F6C4 000C+00 s=2 e=0 z=0  None .rodata    l_dzbidx                                                     */
SECTION_RODATA static u8 const l_dzbidx[12] = {
	0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0A,
};

/* 80C4F6C4-80C4F6CC 0008+00 s=1 e=0 z=0  None .rodata    l_bmdidx                                                     */
SECTION_RODATA static u8 const l_bmdidx[8] = {
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05,
};

/* 80C4F6CC-80C4F6E4 0018+00 s=1 e=0 z=0  None .rodata    l_cull_box                                                   */
SECTION_RODATA static u8 const l_cull_box[24] = {
	0xC4, 0x9D, 0x80, 0x00, 0xC5, 0x3E, 0xA0, 0x00, 0xC4, 0x9D, 0x80, 0x00, 0x44, 0x9D, 0x80, 0x00,
	0x45, 0x2F, 0x00, 0x00, 0x44, 0x9D, 0x80, 0x00,
};

/* 80C4F6E4-80C4F6E8 0004+00 s=2 e=0 z=0  None .rodata    @3717                                                        */
SECTION_RODATA static u32 const lit_3717 = 0x3F800000;

/* 80C4F6E8-80C4F6EC 0004+00 s=1 e=0 z=0  None .rodata    @3888                                                        */
SECTION_RODATA static u32 const lit_3888 = 0xBF800000;

/* 80C4F6EC-80C4F6F6 000A+00 s=1 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80C4F6EC = "K_Wheel01";
#pragma pop

/* 80C4F6F8-80C4F6FC 0004+00 s=3 e=0 z=0  None .data      l_arcName                                                    */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80C4F6FC-80C4F72C 0030+00 s=3 e=0 z=0  None .data      l_pos                                                        */
SECTION_DATA static u8 l_pos[48] = {
	0x44, 0x68, 0x80, 0x00, 0xC3, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xC3, 0x25, 0x00, 0x00, 0x44, 0x68, 0x80, 0x00, 0xC4, 0x68, 0x80, 0x00, 0xC3, 0x25, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3, 0x25, 0x00, 0x00, 0xC4, 0x68, 0x80, 0x00,
};

/* 80C4EA78-80C4EC54 01DC+00 s=1 e=0 z=0  None .text      create1st__15daObjKWheel01_cFv                               */
//	80C4EA88: 803621D0 (_savegpr_26)
//	80C4EAAC: 80C4EC54 (setMtx__15daObjKWheel01_cFv)
//	80C4EAE4: 80C4F6FC (l_pos)
//	80C4EAE8: 80C4F6FC (l_pos)
//	80C4EAF4: 80346D6C (PSMTXMultVec)
//	80C4EB18: 80019D98 (fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc)
//	80C4EB50: 80C4F6F8 (l_arcName)
//	80C4EB54: 80C4F6F8 (l_arcName)
//	80C4EB5C: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80C4EB78: 80C4EC54 (setMtx__15daObjKWheel01_cFv)
//	80C4EB80: 80C4F6F8 (l_arcName)
//	80C4EB84: 80C4F6F8 (l_arcName)
//	80C4EB98: 80C4F6B8 (l_dzbidx)
//	80C4EB9C: 80C4F6B8 (l_dzbidx)
//	80C4EBA8: 80C4F6B8 (l_dzbidx)
//	80C4EBAC: 80C4F6B8 (l_dzbidx)
//	80C4EBB4: 80075AD8 (dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz)
//	80C4EBB8: 80075AD8 (dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz)
//	80C4EBC4: 800787BC (MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f)
//	80C4EBE0: 804061C0 (g_dComIfG_gameInfo)
//	80C4EBE4: 804061C0 (g_dComIfG_gameInfo)
//	80C4EC14: 80074A08 (Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c)
//	80C4EC40: 8036221C (_restgpr_26)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjKWheel01_c::create1st() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/create1st__15daObjKWheel01_cFv.s"
}
#pragma pop


/* 80C4EC54-80C4EDCC 0178+00 s=2 e=0 z=0  None .text      setMtx__15daObjKWheel01_cFv                                  */
//	80C4EC74: 803621D8 (_savegpr_28)
//	80C4EC7C: 803DD470 (now__14mDoMtx_stack_c)
//	80C4EC80: 803DD470 (now__14mDoMtx_stack_c)
//	80C4EC90: 803468E8 (PSMTXTrans)
//	80C4EC94: 803DD470 (now__14mDoMtx_stack_c)
//	80C4EC98: 803DD470 (now__14mDoMtx_stack_c)
//	80C4ECA0: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80C4ECA4: 803DD470 (now__14mDoMtx_stack_c)
//	80C4ECA8: 803DD470 (now__14mDoMtx_stack_c)
//	80C4ECB0: 803464B0 (PSMTXCopy)
//	80C4ECB4: 803DD470 (now__14mDoMtx_stack_c)
//	80C4ECB8: 803DD470 (now__14mDoMtx_stack_c)
//	80C4ECC0: 803464B0 (PSMTXCopy)
//	80C4ECD4: 803DD470 (now__14mDoMtx_stack_c)
//	80C4ECD8: 803DD470 (now__14mDoMtx_stack_c)
//	80C4ECDC: 803464B0 (PSMTXCopy)
//	80C4ECE0: 80C4F6E4 (lit_3717)
//	80C4ECE4: 80C4F6E4 (lit_3717)
//	80C4ECE8: 8026798C (cM_rndFX__Ff)
//	80C4ECF0: 80C4F6E4 (lit_3717)
//	80C4ECF4: 80C4F6E4 (lit_3717)
//	80C4ECF8: 8026798C (cM_rndFX__Ff)
//	80C4ED00: 80C4F6E4 (lit_3717)
//	80C4ED04: 80C4F6E4 (lit_3717)
//	80C4ED08: 8026798C (cM_rndFX__Ff)
//	80C4ED14: 8000CD9C (transM__14mDoMtx_stack_cFfff)
//	80C4ED18: 803DD470 (now__14mDoMtx_stack_c)
//	80C4ED1C: 803DD470 (now__14mDoMtx_stack_c)
//	80C4ED24: 803464B0 (PSMTXCopy)
//	80C4ED50: 80C4F6FC (l_pos)
//	80C4ED54: 80C4F6FC (l_pos)
//	80C4ED60: 80346D6C (PSMTXMultVec)
//	80C4ED64: 803DD470 (now__14mDoMtx_stack_c)
//	80C4ED68: 803DD470 (now__14mDoMtx_stack_c)
//	80C4ED78: 803468E8 (PSMTXTrans)
//	80C4ED7C: 803DD470 (now__14mDoMtx_stack_c)
//	80C4ED80: 803DD470 (now__14mDoMtx_stack_c)
//	80C4ED8C: 803464B0 (PSMTXCopy)
//	80C4EDB8: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjKWheel01_c::setMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/setMtx__15daObjKWheel01_cFv.s"
}
#pragma pop


/* 80C4EDCC-80C4EF38 016C+00 s=1 e=0 z=0  None .text      CreateHeap__15daObjKWheel01_cFv                              */
//	80C4EDDC: 803621CC (_savegpr_25)
//	80C4EDE4: 80C4F6F8 (l_arcName)
//	80C4EDE8: 80C4F6F8 (l_arcName)
//	80C4EDF8: 80C4F6C4 (l_bmdidx)
//	80C4EDFC: 80C4F6C4 (l_bmdidx)
//	80C4EE04: 804061C0 (g_dComIfG_gameInfo)
//	80C4EE08: 804061C0 (g_dComIfG_gameInfo)
//	80C4EE1C: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80C4EE2C: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
//	80C4EE54: 80C4F6B8 (l_dzbidx)
//	80C4EE58: 80C4F6B8 (l_dzbidx)
//	80C4EE88: 802CEC4C (__nw__FUl)
//	80C4EE94: 8007B970 (__ct__4dBgWFv)
//	80C4EEB8: 80C4F6F8 (l_arcName)
//	80C4EEBC: 80C4F6F8 (l_arcName)
//	80C4EED0: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80C4EEE8: 80079F38 (Set__4cBgWFP6cBgD_tUlPA3_A4_f)
//	80C4EF24: 80362218 (_restgpr_25)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjKWheel01_c::CreateHeap() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/CreateHeap__15daObjKWheel01_cFv.s"
}
#pragma pop


/* 80C4EF38-80C4EFEC 00B4+00 s=1 e=0 z=0  None .text      Create__15daObjKWheel01_cFv                                  */
//	80C4EF58: 803464B0 (PSMTXCopy)
//	80C4EF74: 804061C0 (g_dComIfG_gameInfo)
//	80C4EF78: 804061C0 (g_dComIfG_gameInfo)
//	80C4EF84: 80035360 (isSwitch__10dSv_info_cCFii)
//	80C4EFB4: 80C4F6CC (l_cull_box)
//	80C4EFB8: 80C4F6CC (l_cull_box)
//	80C4EFD0: 8001A548 (fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjKWheel01_c::Create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/Create__15daObjKWheel01_cFv.s"
}
#pragma pop


/* 80C4EFEC-80C4F048 005C+00 s=1 e=0 z=0  None .text      searchKWheel00__FPvPv                                        */
//	80C4F004: 80018CE0 (fopAc_IsActor__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  void* False
// 	 void False
//  void* False
// 	 void False
asm static void searchKWheel00(void* param_0, void* param_1) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/searchKWheel00__FPvPv.s"
}
#pragma pop


/* 80C4F048-80C4F344 02FC+00 s=1 e=0 z=0  None .text      Execute__15daObjKWheel01_cFPPA3_A4_f                         */
//	80C4F058: 803621D4 (_savegpr_27)
//	80C4F068: 8004886C (eventUpdate__17dEvLib_callback_cFv)
//	80C4F07C: 80C4EFEC (searchKWheel00__FPvPv)
//	80C4F080: 80C4EFEC (searchKWheel00__FPvPv)
//	80C4F088: 800197F8 (fopAcIt_Judge__FPFPvPv_PvPv)
//	80C4F104: 804061C0 (g_dComIfG_gameInfo)
//	80C4F108: 804061C0 (g_dComIfG_gameInfo)
//	80C4F114: 80035360 (isSwitch__10dSv_info_cCFii)
//	80C4F130: 804061C0 (g_dComIfG_gameInfo)
//	80C4F134: 804061C0 (g_dComIfG_gameInfo)
//	80C4F140: 80047698 (getEventIdx__16dEvent_manager_cFP10fopAc_ac_cUc)
//	80C4F158: 800488A4 (setEvent__17dEvLib_callback_cFiii)
//	80C4F1C8: 80C4EC54 (setMtx__15daObjKWheel01_cFv)
//	80C4F1D8: 803464B0 (PSMTXCopy)
//	80C4F214: 80023590 (fpcSch_JudgeByID__FPvPv)
//	80C4F218: 80023590 (fpcSch_JudgeByID__FPvPv)
//	80C4F220: 800197F8 (fopAcIt_Judge__FPFPvPv_PvPv)
//	80C4F230: 80C4F6FC (l_pos)
//	80C4F234: 80C4F6FC (l_pos)
//	80C4F240: 80346D6C (PSMTXMultVec)
//	80C4F2C0: 8007B9C0 (Move__4dBgWFv)
//	80C4F2EC: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C4F2F0: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C4F308: 80C4F6E4 (lit_3717)
//	80C4F30C: 80C4F6E4 (lit_3717)
//	80C4F314: 80C4F6E8 (lit_3888)
//	80C4F318: 80C4F6E8 (lit_3888)
//	80C4F324: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80C4F330: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  f32 (** )[3][4] False
// 	 f32 False
// 	 ** False
// 		 * False
// 			  False
asm void daObjKWheel01_c::Execute(f32 (** param_0)[3][4]) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/Execute__15daObjKWheel01_cFPPA3_A4_f.s"
}
#pragma pop


/* 80C4F344-80C4F3E8 00A4+00 s=1 e=0 z=0  None .text      Draw__15daObjKWheel01_cFv                                    */
//	80C4F35C: 8042CA54 (g_env_light)
//	80C4F360: 8042CA54 (g_env_light)
//	80C4F370: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80C4F374: 8042CA54 (g_env_light)
//	80C4F378: 8042CA54 (g_env_light)
//	80C4F388: 801A4DA0 (setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c)
//	80C4F38C: 804061C0 (g_dComIfG_gameInfo)
//	80C4F390: 804061C0 (g_dComIfG_gameInfo)
//	80C4F398: 80434AC8 (j3dSys)
//	80C4F39C: 80434AC8 (j3dSys)
//	80C4F3B0: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
//	80C4F3B4: 804061C0 (g_dComIfG_gameInfo)
//	80C4F3B8: 804061C0 (g_dComIfG_gameInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjKWheel01_c::Draw() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/Draw__15daObjKWheel01_cFv.s"
}
#pragma pop


/* 80C4F3E8-80C4F498 00B0+00 s=1 e=0 z=0  None .text      Delete__15daObjKWheel01_cFv                                  */
//	80C4F3F8: 803621D0 (_savegpr_26)
//	80C4F408: 80C4F6F8 (l_arcName)
//	80C4F40C: 80C4F6F8 (l_arcName)
//	80C4F414: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
//	80C4F420: 804061C0 (g_dComIfG_gameInfo)
//	80C4F424: 804061C0 (g_dComIfG_gameInfo)
//	80C4F454: 802681D4 (ChkUsed__9cBgW_BgIdCFv)
//	80C4F468: 80074250 (Release__4cBgSFP9dBgW_Base)
//	80C4F484: 8036221C (_restgpr_26)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjKWheel01_c::Delete() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/Delete__15daObjKWheel01_cFv.s"
}
#pragma pop


/* 80C4F498-80C4F4C0 0028+00 s=2 e=0 z=0  None .text      eventStart__15daObjKWheel01_cFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjKWheel01_c::eventStart() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/eventStart__15daObjKWheel01_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C4F72C-80C4F74C 0020+00 s=1 e=0 z=0  None .data      daObjKWheel01_METHODS                                        */
SECTION_DATA static void* daObjKWheel01_METHODS[8] = {
	(void*)daObjKWheel01_create1st__FP15daObjKWheel01_c,
	(void*)daObjKWheel01_MoveBGDelete__FP15daObjKWheel01_c,
	(void*)daObjKWheel01_MoveBGExecute__FP15daObjKWheel01_c,
	(void*)NULL,
	(void*)daObjKWheel01_MoveBGDraw__FP15daObjKWheel01_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80C4F74C-80C4F77C 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_KWheel01                                       */
SECTION_DATA void* g_profile_Obj_KWheel01[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0003FFFD,
	(void*)0x00C80000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000704,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x02970000,
	(void*)&daObjKWheel01_METHODS,
	(void*)0x00040100,
	(void*)0x000E0000,
};

/* 80C4F77C-80C4F794 0018+00 s=3 e=0 z=0  None .data      __vt__17dEvLib_callback_c                                    */
SECTION_DATA void* __vt__17dEvLib_callback_c[6] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__17dEvLib_callback_cFv,
	(void*)eventStart__17dEvLib_callback_cFv,
	(void*)eventRun__17dEvLib_callback_cFv,
	(void*)eventEnd__17dEvLib_callback_cFv,
};

/* 80C4F794-80C4F7DC 0048+00 s=2 e=0 z=0  None .data      __vt__15daObjKWheel01_c                                      */
SECTION_DATA void* __vt__15daObjKWheel01_c[18] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)CreateHeap__15daObjKWheel01_cFv,
	(void*)Create__15daObjKWheel01_cFv,
	(void*)Execute__15daObjKWheel01_cFPPA3_A4_f,
	(void*)Draw__15daObjKWheel01_cFv,
	(void*)Delete__15daObjKWheel01_cFv,
	(void*)IsDelete__16dBgS_MoveBgActorFv,
	(void*)ToFore__16dBgS_MoveBgActorFv,
	(void*)ToBack__16dBgS_MoveBgActorFv,
	(void*)NULL,
	(void*)NULL,
	(void*)func_80C4F6A8,
	(void*)func_80C4F6A0,
	(void*)eventRun__17dEvLib_callback_cFv,
	(void*)eventEnd__17dEvLib_callback_cFv,
	(void*)__dt__15daObjKWheel01_cFv,
	(void*)eventStart__15daObjKWheel01_cFv,
};

/* 80C4F4C0-80C4F540 0080+00 s=1 e=0 z=0  None .text      daObjKWheel01_create1st__FP15daObjKWheel01_c                 */
//	80C4F4E8: 80078624 (__ct__16dBgS_MoveBgActorFv)
//	80C4F4EC: 80C4F77C (__vt__17dEvLib_callback_c)
//	80C4F4F0: 80C4F77C (__vt__17dEvLib_callback_c)
//	80C4F504: 80C4F794 (__vt__15daObjKWheel01_c)
//	80C4F508: 80C4F794 (__vt__15daObjKWheel01_c)
//	80C4F528: 80C4EA78 (create1st__15daObjKWheel01_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daObjKWheel01_c* False
// 	 daObjKWheel01_c False
asm static void daObjKWheel01_create1st(daObjKWheel01_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/daObjKWheel01_create1st__FP15daObjKWheel01_c.s"
}
#pragma pop


/* 80C4F540-80C4F560 0020+00 s=1 e=0 z=0  None .text      daObjKWheel01_MoveBGDelete__FP15daObjKWheel01_c              */
//	80C4F54C: 800788DC (MoveBGDelete__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daObjKWheel01_c* False
// 	 daObjKWheel01_c False
asm static void daObjKWheel01_MoveBGDelete(daObjKWheel01_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/daObjKWheel01_MoveBGDelete__FP15daObjKWheel01_c.s"
}
#pragma pop


/* 80C4F560-80C4F580 0020+00 s=1 e=0 z=0  None .text      daObjKWheel01_MoveBGExecute__FP15daObjKWheel01_c             */
//	80C4F56C: 80078950 (MoveBGExecute__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daObjKWheel01_c* False
// 	 daObjKWheel01_c False
asm static void daObjKWheel01_MoveBGExecute(daObjKWheel01_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/daObjKWheel01_MoveBGExecute__FP15daObjKWheel01_c.s"
}
#pragma pop


/* 80C4F580-80C4F5AC 002C+00 s=1 e=0 z=0  None .text      daObjKWheel01_MoveBGDraw__FP15daObjKWheel01_c                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daObjKWheel01_c* False
// 	 daObjKWheel01_c False
asm static void daObjKWheel01_MoveBGDraw(daObjKWheel01_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/daObjKWheel01_MoveBGDraw__FP15daObjKWheel01_c.s"
}
#pragma pop


/* 80C4F5AC-80C4F5F4 0048+00 s=1 e=0 z=0  None .text      __dt__17dEvLib_callback_cFv                                  */
//	80C4F5C4: 80C4F77C (__vt__17dEvLib_callback_c)
//	80C4F5C8: 80C4F77C (__vt__17dEvLib_callback_c)
//	80C4F5D8: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm dEvLib_callback_c::~dEvLib_callback_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/__dt__17dEvLib_callback_cFv.s"
}
#pragma pop


/* 80C4F5F4-80C4F5FC 0008+00 s=1 e=0 z=0  None .text      eventStart__17dEvLib_callback_cFv                            */
// True False
//  bool False
bool dEvLib_callback_c::eventStart() {
	return true;
}


/* 80C4F5FC-80C4F604 0008+00 s=2 e=0 z=0  None .text      eventRun__17dEvLib_callback_cFv                              */
// True False
//  bool False
bool dEvLib_callback_c::eventRun() {
	return true;
}


/* 80C4F604-80C4F60C 0008+00 s=2 e=0 z=0  None .text      eventEnd__17dEvLib_callback_cFv                              */
// True False
//  bool False
bool dEvLib_callback_c::eventEnd() {
	return true;
}


/* 80C4F60C-80C4F6A0 0094+00 s=2 e=0 z=0  None .text      __dt__15daObjKWheel01_cFv                                    */
//	80C4F62C: 80C4F794 (__vt__15daObjKWheel01_c)
//	80C4F630: 80C4F794 (__vt__15daObjKWheel01_c)
//	80C4F648: 80C4F77C (__vt__17dEvLib_callback_c)
//	80C4F64C: 80C4F77C (__vt__17dEvLib_callback_c)
//	80C4F65C: 803AB9A0 (__vt__16dBgS_MoveBgActor)
//	80C4F660: 803AB9A0 (__vt__16dBgS_MoveBgActor)
//	80C4F670: 80018C8C (__dt__10fopAc_ac_cFv)
//	80C4F680: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm daObjKWheel01_c::~daObjKWheel01_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/__dt__15daObjKWheel01_cFv.s"
}
#pragma pop


/* 80C4F6A0-80C4F6A8 0008+00 s=1 e=0 z=0  None .text      @1448@eventStart__15daObjKWheel01_cFv                        */
//	80C4F6A4: 80C4F498 (eventStart__15daObjKWheel01_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void func_80C4F6A0() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/func_80C4F6A0.s"
}
#pragma pop


/* 80C4F6A8-80C4F6B0 0008+00 s=1 e=0 z=0  None .text      @1448@__dt__15daObjKWheel01_cFv                              */
//	80C4F6AC: 80C4F60C (__dt__15daObjKWheel01_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void func_80C4F6A8() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/func_80C4F6A8.s"
}
#pragma pop


