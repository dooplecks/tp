// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_bsGate
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate.h"

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

struct mDoHIO_entry_c {
	/* 80BC28C8 */ // True False
~mDoHIO_entry_c();
};

struct fopAc_ac_c {
};

struct daBsGate_c {
	/* 80BC2910 */ // True False
void setBaseMtx();
	/* 80BC29AC */ // True False
void CreateHeap();
	/* 80BC2A18 */ // True False
void create();
	/* 80BC2B6C */ // True False
//  f32 (** )[3][4] False
// 	 f32 False
// 	 ** False
// 		 * False
// 			  False
void Execute(f32 (** )[3][4]);
	/* 80BC2BBC */ // True False
void moveGate();
	/* 80BC2CC4 */ // True False
void init_modeWait();
	/* 80BC2CD0 */ // True False
//  void False
void modeWait();
	/* 80BC2CD4 */ // True False
void init_modeOpen();
	/* 80BC2CE0 */ // True False
void modeOpen();
	/* 80BC2E34 */ // True False
void init_modeClose();
	/* 80BC2E40 */ // True False
void modeClose();
	/* 80BC2F94 */ // True False
void Draw();
	/* 80BC3038 */ // True False
void Delete();
};

struct daBsGate_HIO_c {
	/* 80BC288C */ // True False
daBsGate_HIO_c();
	/* 80BC30F4 */ // True False
~daBsGate_HIO_c();
};

struct cXyz {
};

struct dVibration_c {
	/* 8006FA24 */ // False False
//  int False
//  int False
//  cXyz False
void StartShock(int, int, cXyz);
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

struct dBgW {
};

struct csXyz {
};

struct cBgS_PolyInfo {
};

struct dBgS_MoveBgActor {
	/* 80078624 */ // False False
dBgS_MoveBgActor();
	/* 80078690 */ // False False
//  bool False
bool Create();
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
//  daBsGate_c* False
// 	 daBsGate_c False
static void daBsGate_Draw(daBsGate_c*);
// True False
//  daBsGate_c* False
// 	 daBsGate_c False
static void daBsGate_Execute(daBsGate_c*);
// True False
//  daBsGate_c* False
// 	 daBsGate_c False
static void daBsGate_Delete(daBsGate_c*);
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
static void daBsGate_Create(fopAc_ac_c*);

// True False
extern "C" void __ct__14daBsGate_HIO_cFv();
// True False
extern "C" void __dt__14mDoHIO_entry_cFv();
// True False
extern "C" void setBaseMtx__10daBsGate_cFv();
// True False
extern "C" void CreateHeap__10daBsGate_cFv();
// True False
extern "C" void create__10daBsGate_cFv();
// True False
//  f32 (** )[3][4] False
// 	 f32 False
// 	 ** False
// 		 * False
// 			  False
extern "C" void Execute__10daBsGate_cFPPA3_A4_f();
// True False
extern "C" void moveGate__10daBsGate_cFv();
// True False
extern "C" void init_modeWait__10daBsGate_cFv();
// True False
//  void False
extern "C" void modeWait__10daBsGate_cFv();
// True False
extern "C" void init_modeOpen__10daBsGate_cFv();
// True False
extern "C" void modeOpen__10daBsGate_cFv();
// True False
extern "C" void init_modeClose__10daBsGate_cFv();
// True False
extern "C" void modeClose__10daBsGate_cFv();
// True False
extern "C" void Draw__10daBsGate_cFv();
// True False
extern "C" void Delete__10daBsGate_cFv();
// True False
//  daBsGate_c* False
// 	 daBsGate_c False
extern "C" static void daBsGate_Draw__FP10daBsGate_c();
// True False
//  daBsGate_c* False
// 	 daBsGate_c False
extern "C" static void daBsGate_Execute__FP10daBsGate_c();
// True False
//  daBsGate_c* False
// 	 daBsGate_c False
extern "C" static void daBsGate_Delete__FP10daBsGate_c();
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" static void daBsGate_Create__FP10fopAc_ac_c();
// True False
extern "C" void __dt__14daBsGate_HIO_cFv();
// False False
extern "C" void __sinit_d_a_obj_bsGate_cpp();
extern "C" extern u32 const lit_3783;
extern "C" extern u32 const lit_3784;
extern "C" extern u32 const lit_3785;
extern "C" extern u32 const lit_3786;
extern "C" extern u32 const lit_3820;
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* lit_3724[3];
extern "C" extern void* lit_3725[3];
extern "C" extern void* lit_3726[3];
extern "C" extern u8 data_80BC3210[36];
extern "C" extern void* g_profile_Obj_BsGate[12];
extern "C" extern void* __vt__10daBsGate_c[10];
extern "C" extern void* __vt__14daBsGate_HIO_c[3];
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
//  int False
//  int False
//  cXyz False
extern "C" void StartShock__12dVibration_cFii4cXyz();
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
extern "C" bool Create__16dBgS_MoveBgActorFv();
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
//  void False
//  void* False
// 	 void False
extern "C" void __dl__FPv();
// False False
extern "C" void PSMTXCopy();
// False False
extern "C" void PSMTXTrans();
// False False
extern "C" void __ptmf_scall();
// False False
extern "C" void _savegpr_29();
// False False
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
// False False
extern "C" void __register_global_object();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80BC31A0-80BC31A4 0004+00 s=3 e=0 z=0  None .rodata    @3625                                                        */
SECTION_RODATA static u32 const lit_3625 = 0x40000000;

/* 80BC31A4-80BC31A8 0004+00 s=1 e=0 z=0  None .rodata    @3626                                                        */
SECTION_RODATA static u32 const lit_3626 = 0x41400000;

/* 80BC31CC-80BC31D8 000C+00 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc                                            */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BC31D8-80BC31EC 0004+10 s=0 e=0 z=0  None .data      @1787                                                        */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
	0x02000201,
	/* padding */
	0x40080000, 0x00000000, 0x3FE00000, 0x00000000,
};

/* 80BC31EC-80BC31F8 000C+00 s=0 e=0 z=0  None .data      @3724                                                        */
SECTION_DATA void* lit_3724[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeWait__10daBsGate_cFv,
};

/* 80BC31F8-80BC3204 000C+00 s=0 e=0 z=0  None .data      @3725                                                        */
SECTION_DATA void* lit_3725[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeOpen__10daBsGate_cFv,
};

/* 80BC3204-80BC3210 000C+00 s=0 e=0 z=0  None .data      @3726                                                        */
SECTION_DATA void* lit_3726[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeClose__10daBsGate_cFv,
};

/* 80BC3210-80BC3234 0024+00 s=0 e=0 z=0  None .data      mode_proc$3723                                               */
SECTION_DATA u8 data_80BC3210[36] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};

/* 80BC3234-80BC3254 0020+00 s=1 e=0 z=0  None .data      l_daBsGate_Method                                            */
SECTION_DATA static void* l_daBsGate_Method[8] = {
	(void*)daBsGate_Create__FP10fopAc_ac_c,
	(void*)daBsGate_Delete__FP10daBsGate_c,
	(void*)daBsGate_Execute__FP10daBsGate_c,
	(void*)NULL,
	(void*)daBsGate_Draw__FP10daBsGate_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80BC3254-80BC3284 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_BsGate                                         */
SECTION_DATA void* g_profile_Obj_BsGate[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0003FFFD,
	(void*)0x00460000,
	(void*)&g_fpcLf_Method,
	(void*)0x000005B8,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x02060000,
	(void*)&l_daBsGate_Method,
	(void*)0x00040000,
	(void*)0x000E0000,
};

/* 80BC3284-80BC32AC 0028+00 s=1 e=0 z=0  None .data      __vt__10daBsGate_c                                           */
SECTION_DATA void* __vt__10daBsGate_c[10] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)CreateHeap__10daBsGate_cFv,
	(void*)Create__16dBgS_MoveBgActorFv,
	(void*)Execute__10daBsGate_cFPPA3_A4_f,
	(void*)Draw__10daBsGate_cFv,
	(void*)Delete__10daBsGate_cFv,
	(void*)IsDelete__16dBgS_MoveBgActorFv,
	(void*)ToFore__16dBgS_MoveBgActorFv,
	(void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80BC32AC-80BC32B8 000C+00 s=2 e=0 z=0  None .data      __vt__14daBsGate_HIO_c                                       */
SECTION_DATA void* __vt__14daBsGate_HIO_c[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__14daBsGate_HIO_cFv,
};

/* 80BC32B8-80BC32C4 000C+00 s=3 e=0 z=0  None .data      __vt__14mDoHIO_entry_c                                       */
SECTION_DATA void* __vt__14mDoHIO_entry_c[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__14mDoHIO_entry_cFv,
};

/* 80BC288C-80BC28C8 003C+00 s=1 e=0 z=0  None .text      __ct__14daBsGate_HIO_cFv                                     */
//	80BC288C: 80BC32B8 (__vt__14mDoHIO_entry_c)
//	80BC2890: 80BC32B8 (__vt__14mDoHIO_entry_c)
//	80BC2898: 80BC32AC (__vt__14daBsGate_HIO_c)
//	80BC289C: 80BC32AC (__vt__14daBsGate_HIO_c)
//	80BC28A4: 80BC31A0 (lit_3625)
//	80BC28A8: 80BC31A0 (lit_3625)
//	80BC28B0: 80BC31A4 (lit_3626)
//	80BC28B4: 80BC31A4 (lit_3626)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm daBsGate_HIO_c::daBsGate_HIO_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/__ct__14daBsGate_HIO_cFv.s"
}
#pragma pop


/* 80BC28C8-80BC2910 0048+00 s=1 e=0 z=0  None .text      __dt__14mDoHIO_entry_cFv                                     */
//	80BC28E0: 80BC32B8 (__vt__14mDoHIO_entry_c)
//	80BC28E4: 80BC32B8 (__vt__14mDoHIO_entry_c)
//	80BC28F4: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80BC31A8-80BC31AC 0004+00 s=2 e=0 z=0  None .rodata    @3647                                                        */
SECTION_RODATA static u8 const lit_3647[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80BC2910-80BC29AC 009C+00 s=2 e=0 z=0  None .text      setBaseMtx__10daBsGate_cFv                                   */
//	80BC2924: 803DD470 (now__14mDoMtx_stack_c)
//	80BC2928: 803DD470 (now__14mDoMtx_stack_c)
//	80BC2938: 803468E8 (PSMTXTrans)
//	80BC293C: 803DD470 (now__14mDoMtx_stack_c)
//	80BC2940: 803DD470 (now__14mDoMtx_stack_c)
//	80BC2950: 8000C2A0 (mDoMtx_ZXYrotM__FPA4_fsss)
//	80BC2958: 80BC31A8 (lit_3647)
//	80BC295C: 80BC31A8 (lit_3647)
//	80BC2964: 8000CD9C (transM__14mDoMtx_stack_cFfff)
//	80BC2984: 803DD470 (now__14mDoMtx_stack_c)
//	80BC2988: 803DD470 (now__14mDoMtx_stack_c)
//	80BC2994: 803464B0 (PSMTXCopy)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daBsGate_c::setBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/setBaseMtx__10daBsGate_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80BC31AC-80BC31B0 0004+00 s=1 e=0 z=0  None .rodata    @3710                                                        */
SECTION_RODATA static u32 const lit_3710 = 0xC37A0000;

/* 80BC31B0-80BC31B4 0004+00 s=0 e=0 z=0  None .rodata    @3783                                                        */
SECTION_RODATA u32 const lit_3783 = 0x3F800000;

/* 80BC31B4-80BC31B8 0004+00 s=0 e=0 z=0  None .rodata    @3784                                                        */
SECTION_RODATA u32 const lit_3784 = 0xBF800000;

/* 80BC31B8-80BC31BC 0004+00 s=0 e=0 z=0  None .rodata    @3785                                                        */
SECTION_RODATA u32 const lit_3785 = 0x3E4CCCCD;

/* 80BC31BC-80BC31C0 0004+00 s=0 e=0 z=0  None .rodata    @3786                                                        */
SECTION_RODATA u32 const lit_3786 = 0x3F000000;

/* 80BC31C0-80BC31C4 0004+00 s=0 e=0 z=0  None .rodata    @3820                                                        */
SECTION_RODATA u32 const lit_3820 = 0x3ECCCCCD;

/* 80BC31C4-80BC31CC 0008+00 s=3 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80BC31C4 = "S_Zgate";
#pragma pop

/* 80BC29AC-80BC2A18 006C+00 s=1 e=0 z=0  None .text      CreateHeap__10daBsGate_cFv                                   */
//	80BC29C0: 80BC31C4 (stringBase0)
//	80BC29C4: 80BC31C4 (stringBase0)
//	80BC29CC: 804061C0 (g_dComIfG_gameInfo)
//	80BC29D0: 804061C0 (g_dComIfG_gameInfo)
//	80BC29E0: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80BC29F0: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daBsGate_c::CreateHeap() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/CreateHeap__10daBsGate_cFv.s"
}
#pragma pop


/* 80BC2A18-80BC2B6C 0154+00 s=1 e=0 z=0  None .text      create__10daBsGate_cFv                                       */
//	80BC2A44: 80078624 (__ct__16dBgS_MoveBgActorFv)
//	80BC2A48: 80BC3284 (__vt__10daBsGate_c)
//	80BC2A4C: 80BC3284 (__vt__10daBsGate_c)
//	80BC2A64: 80BC31C4 (stringBase0)
//	80BC2A68: 80BC31C4 (stringBase0)
//	80BC2A6C: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80BC2A80: 80BC31C4 (stringBase0)
//	80BC2A84: 80BC31C4 (stringBase0)
//	80BC2A8C: 80075AD8 (dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz)
//	80BC2A90: 80075AD8 (dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz)
//	80BC2A9C: 800787BC (MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f)
//	80BC2AC8: 8001A578 (fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData)
//	80BC2ACC: 804061C0 (g_dComIfG_gameInfo)
//	80BC2AD0: 804061C0 (g_dComIfG_gameInfo)
//	80BC2AE4: 80035360 (isSwitch__10dSv_info_cCFii)
//	80BC2AF8: 80BC31AC (lit_3710)
//	80BC2AFC: 80BC31AC (lit_3710)
//	80BC2B20: 80BC31A8 (lit_3647)
//	80BC2B24: 80BC31A8 (lit_3647)
//	80BC2B44: 80BC2CC4 (init_modeWait__10daBsGate_cFv)
//	80BC2B4C: 80BC2910 (setBaseMtx__10daBsGate_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daBsGate_c::create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/create__10daBsGate_cFv.s"
}
#pragma pop


/* 80BC2B6C-80BC2BBC 0050+00 s=1 e=0 z=0  None .text      Execute__10daBsGate_cFPPA3_A4_f                              */
//	80BC2B88: 80BC2BBC (moveGate__10daBsGate_cFv)
//	80BC2B9C: 80BC2910 (setBaseMtx__10daBsGate_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  f32 (** )[3][4] False
// 	 f32 False
// 	 ** False
// 		 * False
// 			  False
asm void daBsGate_c::Execute(f32 (** param_0)[3][4]) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/Execute__10daBsGate_cFPPA3_A4_f.s"
}
#pragma pop


/* ############################################################################################## */
/* 80BC32D0-80BC32DC 000C+00 s=1 e=0 z=0  None .bss       @3619                                                        */
static u8 lit_3619[12];

/* 80BC32DC-80BC32EC 0010+00 s=3 e=0 z=0  None .bss       l_HIO                                                        */
static u8 l_HIO[16];

/* 80BC32EC-80BC32F0 0004+00 s=1 e=0 z=0  None .bss       None                                                         */
static u8 data_80BC32EC[4];

/* 80BC2BBC-80BC2CC4 0108+00 s=1 e=0 z=0  None .text      moveGate__10daBsGate_cFv                                     */
//	80BC2BCC: 803621DC (_savegpr_29)
//	80BC2BD4: 80BC31CC (cNullVec__6Z2Calc)
//	80BC2BD8: 80BC31CC (cNullVec__6Z2Calc)
//	80BC2BDC: 80BC32EC (data_80BC32EC)
//	80BC2BE0: 80BC32EC (data_80BC32EC)
//	80BC2C48: 804061C0 (g_dComIfG_gameInfo)
//	80BC2C4C: 804061C0 (g_dComIfG_gameInfo)
//	80BC2C60: 80035360 (isSwitch__10dSv_info_cCFii)
//	80BC2C80: 80BC2CD4 (init_modeOpen__10daBsGate_cFv)
//	80BC2C8C: 80BC2E34 (init_modeClose__10daBsGate_cFv)
//	80BC2CA4: 80362084 (__ptmf_scall)
//	80BC2CB0: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daBsGate_c::moveGate() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/moveGate__10daBsGate_cFv.s"
}
#pragma pop


/* 80BC2CC4-80BC2CD0 000C+00 s=3 e=0 z=0  None .text      init_modeWait__10daBsGate_cFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daBsGate_c::init_modeWait() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/init_modeWait__10daBsGate_cFv.s"
}
#pragma pop


/* 80BC2CD0-80BC2CD4 0004+00 s=1 e=0 z=0  None .text      modeWait__10daBsGate_cFv                                     */
// True False
//  void False
void daBsGate_c::modeWait() {
	/* empty function */
}


/* 80BC2CD4-80BC2CE0 000C+00 s=1 e=0 z=0  None .text      init_modeOpen__10daBsGate_cFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daBsGate_c::init_modeOpen() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/init_modeOpen__10daBsGate_cFv.s"
}
#pragma pop


/* 80BC2CE0-80BC2E34 0154+00 s=1 e=0 z=0  None .text      modeOpen__10daBsGate_cFv                                     */
//	80BC2CF8: 80BC31A0 (lit_3625)
//	80BC2CFC: 80BC31A0 (lit_3625)
//	80BC2D14: 8002D06C (dComIfGp_getReverb__Fi)
//	80BC2D28: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80BC2D2C: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80BC2D54: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80BC2D64: 80BC32DC (l_HIO)
//	80BC2D68: 80BC32DC (l_HIO)
//	80BC2D74: 8026F97C (cLib_addCalc__FPfffff)
//	80BC2D98: 8002D06C (dComIfGp_getReverb__Fi)
//	80BC2DAC: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80BC2DB0: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80BC2DD8: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80BC2DF0: 804061C0 (g_dComIfG_gameInfo)
//	80BC2DF4: 804061C0 (g_dComIfG_gameInfo)
//	80BC2DFC: 80BC32DC (l_HIO)
//	80BC2E00: 80BC32DC (l_HIO)
//	80BC2E10: 8006FA24 (StartShock__12dVibration_cFii4cXyz)
//	80BC2E18: 80BC2CC4 (init_modeWait__10daBsGate_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daBsGate_c::modeOpen() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/modeOpen__10daBsGate_cFv.s"
}
#pragma pop


/* 80BC2E34-80BC2E40 000C+00 s=1 e=0 z=0  None .text      init_modeClose__10daBsGate_cFv                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daBsGate_c::init_modeClose() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/init_modeClose__10daBsGate_cFv.s"
}
#pragma pop


/* 80BC2E40-80BC2F94 0154+00 s=1 e=0 z=0  None .text      modeClose__10daBsGate_cFv                                    */
//	80BC2E58: 80BC31A0 (lit_3625)
//	80BC2E5C: 80BC31A0 (lit_3625)
//	80BC2E74: 8002D06C (dComIfGp_getReverb__Fi)
//	80BC2E88: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80BC2E8C: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80BC2EB4: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80BC2EC4: 80BC32DC (l_HIO)
//	80BC2EC8: 80BC32DC (l_HIO)
//	80BC2ED4: 8026F97C (cLib_addCalc__FPfffff)
//	80BC2EF8: 8002D06C (dComIfGp_getReverb__Fi)
//	80BC2F0C: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80BC2F10: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80BC2F38: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80BC2F50: 804061C0 (g_dComIfG_gameInfo)
//	80BC2F54: 804061C0 (g_dComIfG_gameInfo)
//	80BC2F5C: 80BC32DC (l_HIO)
//	80BC2F60: 80BC32DC (l_HIO)
//	80BC2F70: 8006FA24 (StartShock__12dVibration_cFii4cXyz)
//	80BC2F78: 80BC2CC4 (init_modeWait__10daBsGate_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daBsGate_c::modeClose() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/modeClose__10daBsGate_cFv.s"
}
#pragma pop


/* 80BC2F94-80BC3038 00A4+00 s=1 e=0 z=0  None .text      Draw__10daBsGate_cFv                                         */
//	80BC2FAC: 8042CA54 (g_env_light)
//	80BC2FB0: 8042CA54 (g_env_light)
//	80BC2FC0: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80BC2FC4: 8042CA54 (g_env_light)
//	80BC2FC8: 8042CA54 (g_env_light)
//	80BC2FD8: 801A4DA0 (setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c)
//	80BC2FDC: 804061C0 (g_dComIfG_gameInfo)
//	80BC2FE0: 804061C0 (g_dComIfG_gameInfo)
//	80BC2FE8: 80434AC8 (j3dSys)
//	80BC2FEC: 80434AC8 (j3dSys)
//	80BC3000: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
//	80BC3004: 804061C0 (g_dComIfG_gameInfo)
//	80BC3008: 804061C0 (g_dComIfG_gameInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daBsGate_c::Draw() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/Draw__10daBsGate_cFv.s"
}
#pragma pop


/* 80BC3038-80BC3068 0030+00 s=1 e=0 z=0  None .text      Delete__10daBsGate_cFv                                       */
//	80BC3044: 80BC31C4 (stringBase0)
//	80BC3048: 80BC31C4 (stringBase0)
//	80BC3050: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daBsGate_c::Delete() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/Delete__10daBsGate_cFv.s"
}
#pragma pop


/* 80BC3068-80BC3094 002C+00 s=1 e=0 z=0  None .text      daBsGate_Draw__FP10daBsGate_c                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daBsGate_c* False
// 	 daBsGate_c False
asm static void daBsGate_Draw(daBsGate_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/daBsGate_Draw__FP10daBsGate_c.s"
}
#pragma pop


/* 80BC3094-80BC30B4 0020+00 s=1 e=0 z=0  None .text      daBsGate_Execute__FP10daBsGate_c                             */
//	80BC30A0: 80078950 (MoveBGExecute__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daBsGate_c* False
// 	 daBsGate_c False
asm static void daBsGate_Execute(daBsGate_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/daBsGate_Execute__FP10daBsGate_c.s"
}
#pragma pop


/* 80BC30B4-80BC30D4 0020+00 s=1 e=0 z=0  None .text      daBsGate_Delete__FP10daBsGate_c                              */
//	80BC30C0: 800788DC (MoveBGDelete__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daBsGate_c* False
// 	 daBsGate_c False
asm static void daBsGate_Delete(daBsGate_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/daBsGate_Delete__FP10daBsGate_c.s"
}
#pragma pop


/* 80BC30D4-80BC30F4 0020+00 s=1 e=0 z=0  None .text      daBsGate_Create__FP10fopAc_ac_c                              */
//	80BC30E0: 80BC2A18 (create__10daBsGate_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
asm static void daBsGate_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/daBsGate_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80BC30F4-80BC3150 005C+00 s=2 e=0 z=0  None .text      __dt__14daBsGate_HIO_cFv                                     */
//	80BC310C: 80BC32AC (__vt__14daBsGate_HIO_c)
//	80BC3110: 80BC32AC (__vt__14daBsGate_HIO_c)
//	80BC311C: 80BC32B8 (__vt__14mDoHIO_entry_c)
//	80BC3120: 80BC32B8 (__vt__14mDoHIO_entry_c)
//	80BC3134: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm daBsGate_HIO_c::~daBsGate_HIO_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/__dt__14daBsGate_HIO_cFv.s"
}
#pragma pop


/* 80BC3150-80BC318C 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_bsGate_cpp                                   */
//	80BC315C: 80BC32DC (l_HIO)
//	80BC3160: 80BC32DC (l_HIO)
//	80BC3164: 80BC288C (__ct__14daBsGate_HIO_cFv)
//	80BC3168: 80BC30F4 (__dt__14daBsGate_HIO_cFv)
//	80BC316C: 80BC30F4 (__dt__14daBsGate_HIO_cFv)
//	80BC3170: 80BC32D0 (lit_3619)
//	80BC3174: 80BC32D0 (lit_3619)
//	80BC3178: 80BC2818 (__register_global_object)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __sinit_d_a_obj_bsGate_cpp() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bsGate/d_a_obj_bsGate/__sinit_d_a_obj_bsGate_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
#pragma section ".ctors$15"
__declspec(section ".ctors$15") void* const _ctors_80BC3150 = (void*)__sinit_d_a_obj_bsGate_cpp;
#pragma pop


