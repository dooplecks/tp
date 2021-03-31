// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_lv6elevta
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_lv6elevta/d_a_obj_lv6elevta.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct fopAc_ac_c {
	/* 80018C8C */ // False False
~fopAc_ac_c();
};

struct daObjLv6ElevtA_c {
	/* 80C82D38 */ // True False
void create1st();
	/* 80C82DC8 */ // True False
void setMtx();
	/* 80C82E38 */ // True False
void CreateHeap();
	/* 80C82EA8 */ // True False
void Create();
	/* 80C83028 */ // True False
void eventStart();
	/* 80C830BC */ // True False
//  void* False
// 	 void False
void moveAngle(void*);
	/* 80C8321C */ // True False
//  f32 (** )[3][4] False
// 	 f32 False
// 	 ** False
// 		 * False
// 			  False
void Execute(f32 (** )[3][4]);
	/* 80C83538 */ // True False
void Draw();
	/* 80C835DC */ // True False
void Delete();
	/* 80C83764 */ // True False
~daObjLv6ElevtA_c();
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

struct dEvLib_callback_c {
	/* 8004886C */ // False False
void eventUpdate();
	/* 80048940 */ // False False
//  int False
//  int False
//  int False
void orderEvent(int, int, int);
	/* 80C83704 */ // True False
~dEvLib_callback_c();
	/* 80C8374C */ // True False
//  bool False
bool eventStart();
	/* 80C83754 */ // True False
//  bool False
bool eventRun();
	/* 80C8375C */ // True False
//  bool False
bool eventEnd();
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

// True False
//  void* False
// 	 void False
//  void* False
// 	 void False
static void searchObjLv6SwTurn(void*, void*);
// True False
//  daObjLv6ElevtA_c* False
// 	 daObjLv6ElevtA_c False
static void daObjLv6ElevtA_create1st(daObjLv6ElevtA_c*);
// True False
//  daObjLv6ElevtA_c* False
// 	 daObjLv6ElevtA_c False
static void daObjLv6ElevtA_MoveBGDelete(daObjLv6ElevtA_c*);
// True False
//  daObjLv6ElevtA_c* False
// 	 daObjLv6ElevtA_c False
static void daObjLv6ElevtA_MoveBGExecute(daObjLv6ElevtA_c*);
// True False
//  daObjLv6ElevtA_c* False
// 	 daObjLv6ElevtA_c False
static void daObjLv6ElevtA_MoveBGDraw(daObjLv6ElevtA_c*);

// True False
extern "C" void create1st__16daObjLv6ElevtA_cFv();
// True False
extern "C" void setMtx__16daObjLv6ElevtA_cFv();
// True False
extern "C" void CreateHeap__16daObjLv6ElevtA_cFv();
// True False
extern "C" void Create__16daObjLv6ElevtA_cFv();
// True False
//  void* False
// 	 void False
//  void* False
// 	 void False
extern "C" static void searchObjLv6SwTurn__FPvPv();
// True False
extern "C" void eventStart__16daObjLv6ElevtA_cFv();
// True False
//  void* False
// 	 void False
extern "C" void moveAngle__16daObjLv6ElevtA_cFPv();
// True False
//  f32 (** )[3][4] False
// 	 f32 False
// 	 ** False
// 		 * False
// 			  False
extern "C" void Execute__16daObjLv6ElevtA_cFPPA3_A4_f();
// True False
extern "C" void Draw__16daObjLv6ElevtA_cFv();
// True False
extern "C" void Delete__16daObjLv6ElevtA_cFv();
// True False
//  daObjLv6ElevtA_c* False
// 	 daObjLv6ElevtA_c False
extern "C" static void daObjLv6ElevtA_create1st__FP16daObjLv6ElevtA_c();
// True False
//  daObjLv6ElevtA_c* False
// 	 daObjLv6ElevtA_c False
extern "C" static void daObjLv6ElevtA_MoveBGDelete__FP16daObjLv6ElevtA_c();
// True False
//  daObjLv6ElevtA_c* False
// 	 daObjLv6ElevtA_c False
extern "C" static void daObjLv6ElevtA_MoveBGExecute__FP16daObjLv6ElevtA_c();
// True False
//  daObjLv6ElevtA_c* False
// 	 daObjLv6ElevtA_c False
extern "C" static void daObjLv6ElevtA_MoveBGDraw__FP16daObjLv6ElevtA_c();
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
extern "C" void __dt__16daObjLv6ElevtA_cFv();
// True False
extern "C" static void func_80C837F8();
// True False
extern "C" static void func_80C83800();
extern "C" extern u32 const lit_3752;
extern "C" extern u32 const lit_3753;
extern "C" extern u32 const lit_3754;
extern "C" extern u8 const lit_3758[8];
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_Lv6ElevtA[12];
extern "C" extern void* __vt__17dEvLib_callback_c[6];
extern "C" extern void* __vt__16daObjLv6ElevtA_c[18];

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
extern "C" void eventUpdate__17dEvLib_callback_cFv();
// False False
//  int False
//  int False
//  int False
extern "C" void orderEvent__17dEvLib_callback_cFiii();
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
extern "C" void _savegpr_29();
// False False
extern "C" void _restgpr_29();
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
/* 80C83810-80C83828 0018+00 s=2 e=0 z=0  None .rodata    l_cull_box                                                   */
SECTION_RODATA static u8 const l_cull_box[24] = {
	0xC3, 0xC4, 0x90, 0xA4, 0xC5, 0x3B, 0x80, 0x00, 0xC4, 0x3B, 0x80, 0x00, 0x43, 0xC4, 0x90, 0xA4,
	0x43, 0x16, 0x00, 0x00, 0x43, 0xC4, 0x90, 0xA4,
};

/* 80C83828-80C8382C 0004+00 s=0 e=0 z=0  None .rodata    @3752                                                        */
SECTION_RODATA u32 const lit_3752 = 0x44BB8000;

/* 80C8382C-80C83830 0004+00 s=0 e=0 z=0  None .rodata    @3753                                                        */
SECTION_RODATA u32 const lit_3753 = 0x467FFC00;

/* 80C83830-80C83834 0004+00 s=0 e=0 z=0  None .rodata    @3754                                                        */
SECTION_RODATA u32 const lit_3754 = 0x44480000;

/* 80C83834-80C83838 0004+00 s=1 e=0 z=0  None .rodata    @3755                                                        */
SECTION_RODATA static u32 const lit_3755 = 0x3F800000;

/* 80C83838-80C83840 0004+04 s=1 e=0 z=0  None .rodata    @3756                                                        */
SECTION_RODATA static u32 const lit_3756[1 + 1 /* padding */] = {
	0xBF800000,
	/* padding */
	0x00000000,
};

/* 80C83840-80C83848 0008+00 s=0 e=0 z=0  None .rodata    @3758                                                        */
SECTION_RODATA u8 const lit_3758[8] = {
	0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80C83848-80C83852 000A+00 s=1 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80C83848 = "Lv6ElevtA";
#pragma pop

/* 80C83854-80C83858 0004+00 s=3 e=0 z=0  None .data      l_arcName                                                    */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80C82D38-80C82DC8 0090+00 s=1 e=0 z=0  None .text      create1st__16daObjLv6ElevtA_cFv                              */
//	80C82D54: 80C83854 (l_arcName)
//	80C82D58: 80C83854 (l_arcName)
//	80C82D60: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80C82D74: 80C82DC8 (setMtx__16daObjLv6ElevtA_cFv)
//	80C82D7C: 80C83854 (l_arcName)
//	80C82D80: 80C83854 (l_arcName)
//	80C82D8C: 80075AD8 (dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz)
//	80C82D90: 80075AD8 (dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz)
//	80C82D9C: 800787BC (MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjLv6ElevtA_c::create1st() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6elevta/d_a_obj_lv6elevta/create1st__16daObjLv6ElevtA_cFv.s"
}
#pragma pop


/* 80C82DC8-80C82E38 0070+00 s=2 e=0 z=0  None .text      setMtx__16daObjLv6ElevtA_cFv                                 */
//	80C82DDC: 803DD470 (now__14mDoMtx_stack_c)
//	80C82DE0: 803DD470 (now__14mDoMtx_stack_c)
//	80C82DF0: 803468E8 (PSMTXTrans)
//	80C82DF4: 803DD470 (now__14mDoMtx_stack_c)
//	80C82DF8: 803DD470 (now__14mDoMtx_stack_c)
//	80C82E00: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80C82E04: 803DD470 (now__14mDoMtx_stack_c)
//	80C82E08: 803DD470 (now__14mDoMtx_stack_c)
//	80C82E10: 803464B0 (PSMTXCopy)
//	80C82E14: 803DD470 (now__14mDoMtx_stack_c)
//	80C82E18: 803DD470 (now__14mDoMtx_stack_c)
//	80C82E20: 803464B0 (PSMTXCopy)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjLv6ElevtA_c::setMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6elevta/d_a_obj_lv6elevta/setMtx__16daObjLv6ElevtA_cFv.s"
}
#pragma pop


/* 80C82E38-80C82EA8 0070+00 s=1 e=0 z=0  None .text      CreateHeap__16daObjLv6ElevtA_cFv                             */
//	80C82E4C: 80C83854 (l_arcName)
//	80C82E50: 80C83854 (l_arcName)
//	80C82E5C: 804061C0 (g_dComIfG_gameInfo)
//	80C82E60: 804061C0 (g_dComIfG_gameInfo)
//	80C82E70: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80C82E80: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjLv6ElevtA_c::CreateHeap() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6elevta/d_a_obj_lv6elevta/CreateHeap__16daObjLv6ElevtA_cFv.s"
}
#pragma pop


/* 80C82EA8-80C82FA4 00FC+00 s=1 e=0 z=0  None .text      Create__16daObjLv6ElevtA_cFv                                 */
//	80C82EC8: 803464B0 (PSMTXCopy)
//	80C82ED8: 80C83810 (l_cull_box)
//	80C82EDC: 80C83810 (l_cull_box)
//	80C82EF4: 8001A548 (fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff)
//	80C82F20: 804061C0 (g_dComIfG_gameInfo)
//	80C82F24: 804061C0 (g_dComIfG_gameInfo)
//	80C82F30: 80035360 (isSwitch__10dSv_info_cCFii)
//	80C82F50: 804061C0 (g_dComIfG_gameInfo)
//	80C82F54: 804061C0 (g_dComIfG_gameInfo)
//	80C82F60: 80035360 (isSwitch__10dSv_info_cCFii)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjLv6ElevtA_c::Create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6elevta/d_a_obj_lv6elevta/Create__16daObjLv6ElevtA_cFv.s"
}
#pragma pop


/* 80C82FA4-80C83028 0084+00 s=1 e=0 z=0  None .text      searchObjLv6SwTurn__FPvPv                                    */
//	80C82FC4: 80018CE0 (fopAc_IsActor__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  void* False
// 	 void False
//  void* False
// 	 void False
asm static void searchObjLv6SwTurn(void* param_0, void* param_1) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6elevta/d_a_obj_lv6elevta/searchObjLv6SwTurn__FPvPv.s"
}
#pragma pop


/* 80C83028-80C830BC 0094+00 s=2 e=0 z=0  None .text      eventStart__16daObjLv6ElevtA_cFv                             */
//	80C83044: 804061C0 (g_dComIfG_gameInfo)
//	80C83048: 804061C0 (g_dComIfG_gameInfo)
//	80C83054: 80035360 (isSwitch__10dSv_info_cCFii)
//	80C83074: 804061C0 (g_dComIfG_gameInfo)
//	80C83078: 804061C0 (g_dComIfG_gameInfo)
//	80C83084: 80035360 (isSwitch__10dSv_info_cCFii)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjLv6ElevtA_c::eventStart() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6elevta/d_a_obj_lv6elevta/eventStart__16daObjLv6ElevtA_cFv.s"
}
#pragma pop


/* 80C830BC-80C8321C 0160+00 s=1 e=0 z=0  None .text      moveAngle__16daObjLv6ElevtA_cFPv                             */
//	80C830CC: 80C83810 (l_cull_box)
//	80C830D0: 80C83810 (l_cull_box)
//	80C831D8: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C831DC: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C83208: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  void* False
// 	 void False
asm void daObjLv6ElevtA_c::moveAngle(void* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6elevta/d_a_obj_lv6elevta/moveAngle__16daObjLv6ElevtA_cFPv.s"
}
#pragma pop


/* 80C8321C-80C83538 031C+00 s=1 e=0 z=0  None .text      Execute__16daObjLv6ElevtA_cFPPA3_A4_f                        */
//	80C8322C: 803621DC (_savegpr_29)
//	80C83238: 80C82FA4 (searchObjLv6SwTurn__FPvPv)
//	80C8323C: 80C82FA4 (searchObjLv6SwTurn__FPvPv)
//	80C83244: 800197F8 (fopAcIt_Judge__FPFPvPv_PvPv)
//	80C83278: 80C82DC8 (setMtx__16daObjLv6ElevtA_cFv)
//	80C83288: 803464B0 (PSMTXCopy)
//	80C832A0: 8004886C (eventUpdate__17dEvLib_callback_cFv)
//	80C832B4: 804061C0 (g_dComIfG_gameInfo)
//	80C832B8: 804061C0 (g_dComIfG_gameInfo)
//	80C832C4: 80035360 (isSwitch__10dSv_info_cCFii)
//	80C832F8: 80048940 (orderEvent__17dEvLib_callback_cFiii)
//	80C83314: 804061C0 (g_dComIfG_gameInfo)
//	80C83318: 804061C0 (g_dComIfG_gameInfo)
//	80C83324: 80035360 (isSwitch__10dSv_info_cCFii)
//	80C83358: 80048940 (orderEvent__17dEvLib_callback_cFiii)
//	80C83394: 80048940 (orderEvent__17dEvLib_callback_cFiii)
//	80C833E0: 80C830BC (moveAngle__16daObjLv6ElevtA_cFPv)
//	80C83420: 80C830BC (moveAngle__16daObjLv6ElevtA_cFPv)
//	80C83464: 80C830BC (moveAngle__16daObjLv6ElevtA_cFPv)
//	80C83498: 80C830BC (moveAngle__16daObjLv6ElevtA_cFPv)
//	80C834B8: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C834BC: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C834D4: 80C83834 (lit_3755)
//	80C834D8: 80C83834 (lit_3755)
//	80C834E0: 80C83838 (lit_3756)
//	80C834E4: 80C83838 (lit_3756)
//	80C834F0: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80C83500: 80C82DC8 (setMtx__16daObjLv6ElevtA_cFv)
//	80C83510: 803464B0 (PSMTXCopy)
//	80C83524: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  f32 (** )[3][4] False
// 	 f32 False
// 	 ** False
// 		 * False
// 			  False
asm void daObjLv6ElevtA_c::Execute(f32 (** param_0)[3][4]) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6elevta/d_a_obj_lv6elevta/Execute__16daObjLv6ElevtA_cFPPA3_A4_f.s"
}
#pragma pop


/* 80C83538-80C835DC 00A4+00 s=1 e=0 z=0  None .text      Draw__16daObjLv6ElevtA_cFv                                   */
//	80C83550: 8042CA54 (g_env_light)
//	80C83554: 8042CA54 (g_env_light)
//	80C83564: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80C83568: 8042CA54 (g_env_light)
//	80C8356C: 8042CA54 (g_env_light)
//	80C8357C: 801A4DA0 (setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c)
//	80C83580: 804061C0 (g_dComIfG_gameInfo)
//	80C83584: 804061C0 (g_dComIfG_gameInfo)
//	80C8358C: 80434AC8 (j3dSys)
//	80C83590: 80434AC8 (j3dSys)
//	80C835A4: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
//	80C835A8: 804061C0 (g_dComIfG_gameInfo)
//	80C835AC: 804061C0 (g_dComIfG_gameInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjLv6ElevtA_c::Draw() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6elevta/d_a_obj_lv6elevta/Draw__16daObjLv6ElevtA_cFv.s"
}
#pragma pop


/* 80C835DC-80C83618 003C+00 s=1 e=0 z=0  None .text      Delete__16daObjLv6ElevtA_cFv                                 */
//	80C835F4: 80C83854 (l_arcName)
//	80C835F8: 80C83854 (l_arcName)
//	80C83600: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjLv6ElevtA_c::Delete() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6elevta/d_a_obj_lv6elevta/Delete__16daObjLv6ElevtA_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C83858-80C83878 0020+00 s=1 e=0 z=0  None .data      daObjLv6ElevtA_METHODS                                       */
SECTION_DATA static void* daObjLv6ElevtA_METHODS[8] = {
	(void*)daObjLv6ElevtA_create1st__FP16daObjLv6ElevtA_c,
	(void*)daObjLv6ElevtA_MoveBGDelete__FP16daObjLv6ElevtA_c,
	(void*)daObjLv6ElevtA_MoveBGExecute__FP16daObjLv6ElevtA_c,
	(void*)NULL,
	(void*)daObjLv6ElevtA_MoveBGDraw__FP16daObjLv6ElevtA_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80C83878-80C838A8 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Lv6ElevtA                                      */
SECTION_DATA void* g_profile_Obj_Lv6ElevtA[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0002FFFD,
	(void*)0x001B0000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000628,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x029D0000,
	(void*)&daObjLv6ElevtA_METHODS,
	(void*)0x00040100,
	(void*)0x000E0000,
};

/* 80C838A8-80C838C0 0018+00 s=3 e=0 z=0  None .data      __vt__17dEvLib_callback_c                                    */
SECTION_DATA void* __vt__17dEvLib_callback_c[6] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__17dEvLib_callback_cFv,
	(void*)eventStart__17dEvLib_callback_cFv,
	(void*)eventRun__17dEvLib_callback_cFv,
	(void*)eventEnd__17dEvLib_callback_cFv,
};

/* 80C838C0-80C83908 0048+00 s=2 e=0 z=0  None .data      __vt__16daObjLv6ElevtA_c                                     */
SECTION_DATA void* __vt__16daObjLv6ElevtA_c[18] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)CreateHeap__16daObjLv6ElevtA_cFv,
	(void*)Create__16daObjLv6ElevtA_cFv,
	(void*)Execute__16daObjLv6ElevtA_cFPPA3_A4_f,
	(void*)Draw__16daObjLv6ElevtA_cFv,
	(void*)Delete__16daObjLv6ElevtA_cFv,
	(void*)IsDelete__16dBgS_MoveBgActorFv,
	(void*)ToFore__16dBgS_MoveBgActorFv,
	(void*)ToBack__16dBgS_MoveBgActorFv,
	(void*)NULL,
	(void*)NULL,
	(void*)func_80C83800,
	(void*)func_80C837F8,
	(void*)eventRun__17dEvLib_callback_cFv,
	(void*)eventEnd__17dEvLib_callback_cFv,
	(void*)__dt__16daObjLv6ElevtA_cFv,
	(void*)eventStart__16daObjLv6ElevtA_cFv,
};

/* 80C83618-80C83698 0080+00 s=1 e=0 z=0  None .text      daObjLv6ElevtA_create1st__FP16daObjLv6ElevtA_c               */
//	80C83640: 80078624 (__ct__16dBgS_MoveBgActorFv)
//	80C83644: 80C838A8 (__vt__17dEvLib_callback_c)
//	80C83648: 80C838A8 (__vt__17dEvLib_callback_c)
//	80C8365C: 80C838C0 (__vt__16daObjLv6ElevtA_c)
//	80C83660: 80C838C0 (__vt__16daObjLv6ElevtA_c)
//	80C83680: 80C82D38 (create1st__16daObjLv6ElevtA_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daObjLv6ElevtA_c* False
// 	 daObjLv6ElevtA_c False
asm static void daObjLv6ElevtA_create1st(daObjLv6ElevtA_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6elevta/d_a_obj_lv6elevta/daObjLv6ElevtA_create1st__FP16daObjLv6ElevtA_c.s"
}
#pragma pop


/* 80C83698-80C836B8 0020+00 s=1 e=0 z=0  None .text      daObjLv6ElevtA_MoveBGDelete__FP16daObjLv6ElevtA_c            */
//	80C836A4: 800788DC (MoveBGDelete__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daObjLv6ElevtA_c* False
// 	 daObjLv6ElevtA_c False
asm static void daObjLv6ElevtA_MoveBGDelete(daObjLv6ElevtA_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6elevta/d_a_obj_lv6elevta/daObjLv6ElevtA_MoveBGDelete__FP16daObjLv6ElevtA_c.s"
}
#pragma pop


/* 80C836B8-80C836D8 0020+00 s=1 e=0 z=0  None .text      daObjLv6ElevtA_MoveBGExecute__FP16daObjLv6ElevtA_c           */
//	80C836C4: 80078950 (MoveBGExecute__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daObjLv6ElevtA_c* False
// 	 daObjLv6ElevtA_c False
asm static void daObjLv6ElevtA_MoveBGExecute(daObjLv6ElevtA_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6elevta/d_a_obj_lv6elevta/daObjLv6ElevtA_MoveBGExecute__FP16daObjLv6ElevtA_c.s"
}
#pragma pop


/* 80C836D8-80C83704 002C+00 s=1 e=0 z=0  None .text      daObjLv6ElevtA_MoveBGDraw__FP16daObjLv6ElevtA_c              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daObjLv6ElevtA_c* False
// 	 daObjLv6ElevtA_c False
asm static void daObjLv6ElevtA_MoveBGDraw(daObjLv6ElevtA_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6elevta/d_a_obj_lv6elevta/daObjLv6ElevtA_MoveBGDraw__FP16daObjLv6ElevtA_c.s"
}
#pragma pop


/* 80C83704-80C8374C 0048+00 s=1 e=0 z=0  None .text      __dt__17dEvLib_callback_cFv                                  */
//	80C8371C: 80C838A8 (__vt__17dEvLib_callback_c)
//	80C83720: 80C838A8 (__vt__17dEvLib_callback_c)
//	80C83730: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm dEvLib_callback_c::~dEvLib_callback_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6elevta/d_a_obj_lv6elevta/__dt__17dEvLib_callback_cFv.s"
}
#pragma pop


/* 80C8374C-80C83754 0008+00 s=1 e=0 z=0  None .text      eventStart__17dEvLib_callback_cFv                            */
// True False
//  bool False
bool dEvLib_callback_c::eventStart() {
	return true;
}


/* 80C83754-80C8375C 0008+00 s=2 e=0 z=0  None .text      eventRun__17dEvLib_callback_cFv                              */
// True False
//  bool False
bool dEvLib_callback_c::eventRun() {
	return true;
}


/* 80C8375C-80C83764 0008+00 s=2 e=0 z=0  None .text      eventEnd__17dEvLib_callback_cFv                              */
// True False
//  bool False
bool dEvLib_callback_c::eventEnd() {
	return true;
}


/* 80C83764-80C837F8 0094+00 s=2 e=0 z=0  None .text      __dt__16daObjLv6ElevtA_cFv                                   */
//	80C83784: 80C838C0 (__vt__16daObjLv6ElevtA_c)
//	80C83788: 80C838C0 (__vt__16daObjLv6ElevtA_c)
//	80C837A0: 80C838A8 (__vt__17dEvLib_callback_c)
//	80C837A4: 80C838A8 (__vt__17dEvLib_callback_c)
//	80C837B4: 803AB9A0 (__vt__16dBgS_MoveBgActor)
//	80C837B8: 803AB9A0 (__vt__16dBgS_MoveBgActor)
//	80C837C8: 80018C8C (__dt__10fopAc_ac_cFv)
//	80C837D8: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm daObjLv6ElevtA_c::~daObjLv6ElevtA_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6elevta/d_a_obj_lv6elevta/__dt__16daObjLv6ElevtA_cFv.s"
}
#pragma pop


/* 80C837F8-80C83800 0008+00 s=1 e=0 z=0  None .text      @1448@eventStart__16daObjLv6ElevtA_cFv                       */
//	80C837FC: 80C83028 (eventStart__16daObjLv6ElevtA_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void func_80C837F8() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6elevta/d_a_obj_lv6elevta/func_80C837F8.s"
}
#pragma pop


/* 80C83800-80C83808 0008+00 s=1 e=0 z=0  None .text      @1448@__dt__16daObjLv6ElevtA_cFv                             */
//	80C83804: 80C83764 (__dt__16daObjLv6ElevtA_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void func_80C83800() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6elevta/d_a_obj_lv6elevta/func_80C83800.s"
}
#pragma pop


