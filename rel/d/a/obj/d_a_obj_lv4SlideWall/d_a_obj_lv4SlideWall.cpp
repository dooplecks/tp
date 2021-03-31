// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_lv4SlideWall
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall.h"

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
	/* 80C61E68 */ // True False
~mDoHIO_entry_c();
};

struct fopAc_ac_c {
};

struct daSldWall_c {
	/* 80C61EB0 */ // True False
void setBaseMtx();
	/* 80C61F4C */ // True False
void CreateHeap();
	/* 80C61FB8 */ // True False
void create();
	/* 80C620E4 */ // True False
//  f32 (** )[3][4] False
// 	 f32 False
// 	 ** False
// 		 * False
// 			  False
void Execute(f32 (** )[3][4]);
	/* 80C62134 */ // True False
void moveWall();
	/* 80C62238 */ // True False
void init_modeWait();
	/* 80C62244 */ // True False
//  void False
void modeWait();
	/* 80C62248 */ // True False
void init_modeMoveOpen();
	/* 80C62254 */ // True False
void modeMoveOpen();
	/* 80C62314 */ // True False
void init_modeMoveClose();
	/* 80C62320 */ // True False
void modeMoveClose();
	/* 80C623E0 */ // True False
void setSe();
	/* 80C6249C */ // True False
void Draw();
	/* 80C62540 */ // True False
void Delete();
};

struct daSldWall_HIO_c {
	/* 80C61E2C */ // True False
daSldWall_HIO_c();
	/* 80C625FC */ // True False
~daSldWall_HIO_c();
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
//  daSldWall_c* False
// 	 daSldWall_c False
static void daSldWall_Draw(daSldWall_c*);
// True False
//  daSldWall_c* False
// 	 daSldWall_c False
static void daSldWall_Execute(daSldWall_c*);
// True False
//  daSldWall_c* False
// 	 daSldWall_c False
static void daSldWall_Delete(daSldWall_c*);
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
static void daSldWall_Create(fopAc_ac_c*);

// True False
extern "C" void __ct__15daSldWall_HIO_cFv();
// True False
extern "C" void __dt__14mDoHIO_entry_cFv();
// True False
extern "C" void setBaseMtx__11daSldWall_cFv();
// True False
extern "C" void CreateHeap__11daSldWall_cFv();
// True False
extern "C" void create__11daSldWall_cFv();
// True False
//  f32 (** )[3][4] False
// 	 f32 False
// 	 ** False
// 		 * False
// 			  False
extern "C" void Execute__11daSldWall_cFPPA3_A4_f();
// True False
extern "C" void moveWall__11daSldWall_cFv();
// True False
extern "C" void init_modeWait__11daSldWall_cFv();
// True False
//  void False
extern "C" void modeWait__11daSldWall_cFv();
// True False
extern "C" void init_modeMoveOpen__11daSldWall_cFv();
// True False
extern "C" void modeMoveOpen__11daSldWall_cFv();
// True False
extern "C" void init_modeMoveClose__11daSldWall_cFv();
// True False
extern "C" void modeMoveClose__11daSldWall_cFv();
// True False
extern "C" void setSe__11daSldWall_cFv();
// True False
extern "C" void Draw__11daSldWall_cFv();
// True False
extern "C" void Delete__11daSldWall_cFv();
// True False
//  daSldWall_c* False
// 	 daSldWall_c False
extern "C" static void daSldWall_Draw__FP11daSldWall_c();
// True False
//  daSldWall_c* False
// 	 daSldWall_c False
extern "C" static void daSldWall_Execute__FP11daSldWall_c();
// True False
//  daSldWall_c* False
// 	 daSldWall_c False
extern "C" static void daSldWall_Delete__FP11daSldWall_c();
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" static void daSldWall_Create__FP10fopAc_ac_c();
// True False
extern "C" void __dt__15daSldWall_HIO_cFv();
// False False
extern "C" void __sinit_d_a_obj_lv4SlideWall_cpp();
extern "C" extern u32 const lit_3763;
extern "C" extern u32 const lit_3764;
extern "C" extern u32 const lit_3765;
extern "C" extern u32 const lit_3766;
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* lit_3720[3];
extern "C" extern void* lit_3721[3];
extern "C" extern void* lit_3722[3];
extern "C" extern u8 data_80C62714[36];
extern "C" extern void* g_profile_Obj_Lv4SlideWall[12];
extern "C" extern void* __vt__11daSldWall_c[10];
extern "C" extern void* __vt__15daSldWall_HIO_c[3];
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
/* 80C626A8-80C626AC 0004+00 s=4 e=0 z=0  None .rodata    @3627                                                        */
SECTION_RODATA static u32 const lit_3627 = 0x44610000;

/* 80C626AC-80C626B0 0004+00 s=1 e=0 z=0  None .rodata    @3628                                                        */
SECTION_RODATA static u32 const lit_3628 = 0x40800000;

/* 80C626D0-80C626DC 000C+00 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc                                            */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C626DC-80C626F0 0004+10 s=0 e=0 z=0  None .data      @1787                                                        */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
	0x02000201,
	/* padding */
	0x40080000, 0x00000000, 0x3FE00000, 0x00000000,
};

/* 80C626F0-80C626FC 000C+00 s=0 e=0 z=0  None .data      @3720                                                        */
SECTION_DATA void* lit_3720[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeWait__11daSldWall_cFv,
};

/* 80C626FC-80C62708 000C+00 s=0 e=0 z=0  None .data      @3721                                                        */
SECTION_DATA void* lit_3721[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeMoveOpen__11daSldWall_cFv,
};

/* 80C62708-80C62714 000C+00 s=0 e=0 z=0  None .data      @3722                                                        */
SECTION_DATA void* lit_3722[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeMoveClose__11daSldWall_cFv,
};

/* 80C62714-80C62738 0024+00 s=0 e=0 z=0  None .data      mode_proc$3719                                               */
SECTION_DATA u8 data_80C62714[36] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};

/* 80C62738-80C62758 0020+00 s=1 e=0 z=0  None .data      l_daSldWall_Method                                           */
SECTION_DATA static void* l_daSldWall_Method[8] = {
	(void*)daSldWall_Create__FP10fopAc_ac_c,
	(void*)daSldWall_Delete__FP11daSldWall_c,
	(void*)daSldWall_Execute__FP11daSldWall_c,
	(void*)NULL,
	(void*)daSldWall_Draw__FP11daSldWall_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80C62758-80C62788 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Lv4SlideWall                                   */
SECTION_DATA void* g_profile_Obj_Lv4SlideWall[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0003FFFD,
	(void*)0x009E0000,
	(void*)&g_fpcLf_Method,
	(void*)0x000005B4,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x027F0000,
	(void*)&l_daSldWall_Method,
	(void*)0x00040000,
	(void*)0x000E0000,
};

/* 80C62788-80C627B0 0028+00 s=1 e=0 z=0  None .data      __vt__11daSldWall_c                                          */
SECTION_DATA void* __vt__11daSldWall_c[10] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)CreateHeap__11daSldWall_cFv,
	(void*)Create__16dBgS_MoveBgActorFv,
	(void*)Execute__11daSldWall_cFPPA3_A4_f,
	(void*)Draw__11daSldWall_cFv,
	(void*)Delete__11daSldWall_cFv,
	(void*)IsDelete__16dBgS_MoveBgActorFv,
	(void*)ToFore__16dBgS_MoveBgActorFv,
	(void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C627B0-80C627BC 000C+00 s=2 e=0 z=0  None .data      __vt__15daSldWall_HIO_c                                      */
SECTION_DATA void* __vt__15daSldWall_HIO_c[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__15daSldWall_HIO_cFv,
};

/* 80C627BC-80C627C8 000C+00 s=3 e=0 z=0  None .data      __vt__14mDoHIO_entry_c                                       */
SECTION_DATA void* __vt__14mDoHIO_entry_c[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__14mDoHIO_entry_cFv,
};

/* 80C61E2C-80C61E68 003C+00 s=1 e=0 z=0  None .text      __ct__15daSldWall_HIO_cFv                                    */
//	80C61E2C: 80C627BC (__vt__14mDoHIO_entry_c)
//	80C61E30: 80C627BC (__vt__14mDoHIO_entry_c)
//	80C61E38: 80C627B0 (__vt__15daSldWall_HIO_c)
//	80C61E3C: 80C627B0 (__vt__15daSldWall_HIO_c)
//	80C61E44: 80C626A8 (lit_3627)
//	80C61E48: 80C626A8 (lit_3627)
//	80C61E50: 80C626AC (lit_3628)
//	80C61E54: 80C626AC (lit_3628)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm daSldWall_HIO_c::daSldWall_HIO_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/__ct__15daSldWall_HIO_cFv.s"
}
#pragma pop


/* 80C61E68-80C61EB0 0048+00 s=1 e=0 z=0  None .text      __dt__14mDoHIO_entry_cFv                                     */
//	80C61E80: 80C627BC (__vt__14mDoHIO_entry_c)
//	80C61E84: 80C627BC (__vt__14mDoHIO_entry_c)
//	80C61E94: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C626B0-80C626B4 0004+00 s=2 e=0 z=0  None .rodata    @3649                                                        */
SECTION_RODATA static u8 const lit_3649[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80C61EB0-80C61F4C 009C+00 s=2 e=0 z=0  None .text      setBaseMtx__11daSldWall_cFv                                  */
//	80C61EC4: 803DD470 (now__14mDoMtx_stack_c)
//	80C61EC8: 803DD470 (now__14mDoMtx_stack_c)
//	80C61ED8: 803468E8 (PSMTXTrans)
//	80C61EDC: 803DD470 (now__14mDoMtx_stack_c)
//	80C61EE0: 803DD470 (now__14mDoMtx_stack_c)
//	80C61EF0: 8000C2A0 (mDoMtx_ZXYrotM__FPA4_fsss)
//	80C61EF8: 80C626B0 (lit_3649)
//	80C61EFC: 80C626B0 (lit_3649)
//	80C61F04: 8000CD9C (transM__14mDoMtx_stack_cFfff)
//	80C61F24: 803DD470 (now__14mDoMtx_stack_c)
//	80C61F28: 803DD470 (now__14mDoMtx_stack_c)
//	80C61F34: 803464B0 (PSMTXCopy)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daSldWall_c::setBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/setBaseMtx__11daSldWall_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C626B4-80C626B8 0004+00 s=0 e=0 z=0  None .rodata    @3763                                                        */
SECTION_RODATA u32 const lit_3763 = 0x3F800000;

/* 80C626B8-80C626BC 0004+00 s=0 e=0 z=0  None .rodata    @3764                                                        */
SECTION_RODATA u32 const lit_3764 = 0xBF800000;

/* 80C626BC-80C626C0 0004+00 s=0 e=0 z=0  None .rodata    @3765                                                        */
SECTION_RODATA u32 const lit_3765 = 0x3E4CCCCD;

/* 80C626C0-80C626C4 0004+00 s=0 e=0 z=0  None .rodata    @3766                                                        */
SECTION_RODATA u32 const lit_3766 = 0x3F000000;

/* 80C626C4-80C626CE 000A+00 s=3 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80C626C4 = "L4SldWall";
#pragma pop

/* 80C61F4C-80C61FB8 006C+00 s=1 e=0 z=0  None .text      CreateHeap__11daSldWall_cFv                                  */
//	80C61F60: 80C626C4 (stringBase0)
//	80C61F64: 80C626C4 (stringBase0)
//	80C61F6C: 804061C0 (g_dComIfG_gameInfo)
//	80C61F70: 804061C0 (g_dComIfG_gameInfo)
//	80C61F80: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80C61F90: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daSldWall_c::CreateHeap() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/CreateHeap__11daSldWall_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C627D0-80C627DC 000C+00 s=1 e=0 z=0  None .bss       @3621                                                        */
static u8 lit_3621[12];

/* 80C627DC-80C627EC 0010+00 s=5 e=0 z=0  None .bss       l_HIO                                                        */
static u8 l_HIO[16];

/* 80C61FB8-80C620E4 012C+00 s=1 e=0 z=0  None .text      create__11daSldWall_cFv                                      */
//	80C61FE4: 80078624 (__ct__16dBgS_MoveBgActorFv)
//	80C61FE8: 80C62788 (__vt__11daSldWall_c)
//	80C61FEC: 80C62788 (__vt__11daSldWall_c)
//	80C62004: 80C626C4 (stringBase0)
//	80C62008: 80C626C4 (stringBase0)
//	80C6200C: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80C62020: 80C626C4 (stringBase0)
//	80C62024: 80C626C4 (stringBase0)
//	80C6202C: 80075AD8 (dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz)
//	80C62030: 80075AD8 (dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz)
//	80C6203C: 800787BC (MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f)
//	80C62068: 8001A578 (fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData)
//	80C62074: 804061C0 (g_dComIfG_gameInfo)
//	80C62078: 804061C0 (g_dComIfG_gameInfo)
//	80C62088: 80035360 (isSwitch__10dSv_info_cCFii)
//	80C62090: 80C626B0 (lit_3649)
//	80C62094: 80C626B0 (lit_3649)
//	80C620A8: 80C627DC (l_HIO)
//	80C620AC: 80C627DC (l_HIO)
//	80C620BC: 80C62238 (init_modeWait__11daSldWall_cFv)
//	80C620C4: 80C61EB0 (setBaseMtx__11daSldWall_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daSldWall_c::create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/create__11daSldWall_cFv.s"
}
#pragma pop


/* 80C620E4-80C62134 0050+00 s=1 e=0 z=0  None .text      Execute__11daSldWall_cFPPA3_A4_f                             */
//	80C62100: 80C62134 (moveWall__11daSldWall_cFv)
//	80C62114: 80C61EB0 (setBaseMtx__11daSldWall_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  f32 (** )[3][4] False
// 	 f32 False
// 	 ** False
// 		 * False
// 			  False
asm void daSldWall_c::Execute(f32 (** param_0)[3][4]) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/Execute__11daSldWall_cFPPA3_A4_f.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C627EC-80C627F0 0004+00 s=1 e=0 z=0  None .bss       None                                                         */
static u8 data_80C627EC[4];

/* 80C62134-80C62238 0104+00 s=1 e=0 z=0  None .text      moveWall__11daSldWall_cFv                                    */
//	80C62144: 803621DC (_savegpr_29)
//	80C6214C: 80C626D0 (cNullVec__6Z2Calc)
//	80C62150: 80C626D0 (cNullVec__6Z2Calc)
//	80C62154: 80C627EC (data_80C627EC)
//	80C62158: 80C627EC (data_80C627EC)
//	80C621C0: 804061C0 (g_dComIfG_gameInfo)
//	80C621C4: 804061C0 (g_dComIfG_gameInfo)
//	80C621D4: 80035360 (isSwitch__10dSv_info_cCFii)
//	80C621F4: 80C62248 (init_modeMoveOpen__11daSldWall_cFv)
//	80C62200: 80C62314 (init_modeMoveClose__11daSldWall_cFv)
//	80C62218: 80362084 (__ptmf_scall)
//	80C62224: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daSldWall_c::moveWall() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/moveWall__11daSldWall_cFv.s"
}
#pragma pop


/* 80C62238-80C62244 000C+00 s=3 e=0 z=0  None .text      init_modeWait__11daSldWall_cFv                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daSldWall_c::init_modeWait() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/init_modeWait__11daSldWall_cFv.s"
}
#pragma pop


/* 80C62244-80C62248 0004+00 s=1 e=0 z=0  None .text      modeWait__11daSldWall_cFv                                    */
// True False
//  void False
void daSldWall_c::modeWait() {
	/* empty function */
}


/* 80C62248-80C62254 000C+00 s=1 e=0 z=0  None .text      init_modeMoveOpen__11daSldWall_cFv                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daSldWall_c::init_modeMoveOpen() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/init_modeMoveOpen__11daSldWall_cFv.s"
}
#pragma pop


/* 80C62254-80C62314 00C0+00 s=1 e=0 z=0  None .text      modeMoveOpen__11daSldWall_cFv                                */
//	80C6226C: 80C626A8 (lit_3627)
//	80C62270: 80C626A8 (lit_3627)
//	80C6227C: 8002D06C (dComIfGp_getReverb__Fi)
//	80C62290: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C62294: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C622BC: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80C622C4: 80C627DC (l_HIO)
//	80C622C8: 80C627DC (l_HIO)
//	80C622DC: 8026F97C (cLib_addCalc__FPfffff)
//	80C622F0: 80C623E0 (setSe__11daSldWall_cFv)
//	80C622F8: 80C62238 (init_modeWait__11daSldWall_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daSldWall_c::modeMoveOpen() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/modeMoveOpen__11daSldWall_cFv.s"
}
#pragma pop


/* 80C62314-80C62320 000C+00 s=1 e=0 z=0  None .text      init_modeMoveClose__11daSldWall_cFv                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daSldWall_c::init_modeMoveClose() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/init_modeMoveClose__11daSldWall_cFv.s"
}
#pragma pop


/* 80C62320-80C623E0 00C0+00 s=1 e=0 z=0  None .text      modeMoveClose__11daSldWall_cFv                               */
//	80C62338: 80C626A8 (lit_3627)
//	80C6233C: 80C626A8 (lit_3627)
//	80C62348: 8002D06C (dComIfGp_getReverb__Fi)
//	80C6235C: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C62360: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C62388: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80C62398: 80C627DC (l_HIO)
//	80C6239C: 80C627DC (l_HIO)
//	80C623A8: 8026F97C (cLib_addCalc__FPfffff)
//	80C623BC: 80C623E0 (setSe__11daSldWall_cFv)
//	80C623C4: 80C62238 (init_modeWait__11daSldWall_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daSldWall_c::modeMoveClose() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/modeMoveClose__11daSldWall_cFv.s"
}
#pragma pop


/* 80C623E0-80C6249C 00BC+00 s=2 e=0 z=0  None .text      setSe__11daSldWall_cFv                                       */
//	80C623F8: 80C626A8 (lit_3627)
//	80C623FC: 80C626A8 (lit_3627)
//	80C62408: 8002D06C (dComIfGp_getReverb__Fi)
//	80C6241C: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C62420: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C62448: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80C62460: 804061C0 (g_dComIfG_gameInfo)
//	80C62464: 804061C0 (g_dComIfG_gameInfo)
//	80C6246C: 80C627DC (l_HIO)
//	80C62470: 80C627DC (l_HIO)
//	80C62480: 8006FA24 (StartShock__12dVibration_cFii4cXyz)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daSldWall_c::setSe() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/setSe__11daSldWall_cFv.s"
}
#pragma pop


/* 80C6249C-80C62540 00A4+00 s=1 e=0 z=0  None .text      Draw__11daSldWall_cFv                                        */
//	80C624B4: 8042CA54 (g_env_light)
//	80C624B8: 8042CA54 (g_env_light)
//	80C624C8: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80C624CC: 8042CA54 (g_env_light)
//	80C624D0: 8042CA54 (g_env_light)
//	80C624E0: 801A4DA0 (setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c)
//	80C624E4: 804061C0 (g_dComIfG_gameInfo)
//	80C624E8: 804061C0 (g_dComIfG_gameInfo)
//	80C624F0: 80434AC8 (j3dSys)
//	80C624F4: 80434AC8 (j3dSys)
//	80C62508: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
//	80C6250C: 804061C0 (g_dComIfG_gameInfo)
//	80C62510: 804061C0 (g_dComIfG_gameInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daSldWall_c::Draw() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/Draw__11daSldWall_cFv.s"
}
#pragma pop


/* 80C62540-80C62570 0030+00 s=1 e=0 z=0  None .text      Delete__11daSldWall_cFv                                      */
//	80C6254C: 80C626C4 (stringBase0)
//	80C62550: 80C626C4 (stringBase0)
//	80C62558: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daSldWall_c::Delete() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/Delete__11daSldWall_cFv.s"
}
#pragma pop


/* 80C62570-80C6259C 002C+00 s=1 e=0 z=0  None .text      daSldWall_Draw__FP11daSldWall_c                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daSldWall_c* False
// 	 daSldWall_c False
asm static void daSldWall_Draw(daSldWall_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/daSldWall_Draw__FP11daSldWall_c.s"
}
#pragma pop


/* 80C6259C-80C625BC 0020+00 s=1 e=0 z=0  None .text      daSldWall_Execute__FP11daSldWall_c                           */
//	80C625A8: 80078950 (MoveBGExecute__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daSldWall_c* False
// 	 daSldWall_c False
asm static void daSldWall_Execute(daSldWall_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/daSldWall_Execute__FP11daSldWall_c.s"
}
#pragma pop


/* 80C625BC-80C625DC 0020+00 s=1 e=0 z=0  None .text      daSldWall_Delete__FP11daSldWall_c                            */
//	80C625C8: 800788DC (MoveBGDelete__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daSldWall_c* False
// 	 daSldWall_c False
asm static void daSldWall_Delete(daSldWall_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/daSldWall_Delete__FP11daSldWall_c.s"
}
#pragma pop


/* 80C625DC-80C625FC 0020+00 s=1 e=0 z=0  None .text      daSldWall_Create__FP10fopAc_ac_c                             */
//	80C625E8: 80C61FB8 (create__11daSldWall_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
asm static void daSldWall_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/daSldWall_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80C625FC-80C62658 005C+00 s=2 e=0 z=0  None .text      __dt__15daSldWall_HIO_cFv                                    */
//	80C62614: 80C627B0 (__vt__15daSldWall_HIO_c)
//	80C62618: 80C627B0 (__vt__15daSldWall_HIO_c)
//	80C62624: 80C627BC (__vt__14mDoHIO_entry_c)
//	80C62628: 80C627BC (__vt__14mDoHIO_entry_c)
//	80C6263C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm daSldWall_HIO_c::~daSldWall_HIO_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/__dt__15daSldWall_HIO_cFv.s"
}
#pragma pop


/* 80C62658-80C62694 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_lv4SlideWall_cpp                             */
//	80C62664: 80C627DC (l_HIO)
//	80C62668: 80C627DC (l_HIO)
//	80C6266C: 80C61E2C (__ct__15daSldWall_HIO_cFv)
//	80C62670: 80C625FC (__dt__15daSldWall_HIO_cFv)
//	80C62674: 80C625FC (__dt__15daSldWall_HIO_cFv)
//	80C62678: 80C627D0 (lit_3621)
//	80C6267C: 80C627D0 (lit_3621)
//	80C62680: 80C61DB8 (__register_global_object)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __sinit_d_a_obj_lv4SlideWall_cpp() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/__sinit_d_a_obj_lv4SlideWall_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
#pragma section ".ctors$15"
__declspec(section ".ctors$15") void* const _ctors_80C62658 = (void*)__sinit_d_a_obj_lv4SlideWall_cpp;
#pragma pop


