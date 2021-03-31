// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_window
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_window/d_a_obj_window.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct cXyz {
};

struct mDoMtx_stack_c {
	/* 8000CD64 */ // False False
//  cXyz const& False
// 	 cXyz const False
// 		 cXyz False
void transS(cXyz const&);
};

struct J3DAnmTransform {
};

struct J3DModelData {
};

struct mDoExt_bckAnm {
	/* 8000D7DC */ // False False
//  J3DAnmTransform* False
// 	 J3DAnmTransform False
//  int False
//  int False
//  f32 False
//  s16 False
//  s16 False
//  bool False
void init(J3DAnmTransform*, int, int, f32, s16, s16, bool);
	/* 8000D9CC */ // False False
//  J3DModelData* False
// 	 J3DModelData False
//  f32 False
void entry(J3DModelData*, f32);
};

struct mDoExt_baseAnm {
	/* 8000D428 */ // False False
void play();
};

struct fopAc_ac_c {
};

struct daObjWindow_c {
	/* 80D38758 */ // True False
void initBaseMtx();
	/* 80D387B8 */ // True False
void setBaseMtx();
	/* 80D38840 */ // True False
void Create();
	/* 80D388F0 */ // True False
void CreateHeap();
	/* 80D38A68 */ // True False
void create1st();
	/* 80D38B04 */ // True False
//  f32 (** )[3][4] False
// 	 f32 False
// 	 ** False
// 		 * False
// 			  False
void Execute(f32 (** )[3][4]);
	/* 80D38F28 */ // True False
void Draw();
	/* 80D39000 */ // True False
void Delete();
};

struct dKy_tevstr_c {
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
};

struct dCcD_Cyl {
	/* 800848B4 */ // False False
//  dCcD_SrcCyl const& False
// 	 dCcD_SrcCyl const False
// 		 dCcD_SrcCyl False
void Set(dCcD_SrcCyl const&);
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

struct cM3dGCyl {
	/* 8026F1DC */ // False False
//  cXyz const& False
// 	 cXyz const False
// 		 cXyz False
void SetC(cXyz const&);
	/* 8026F200 */ // False False
//  f32 False
void SetR(f32);
	/* 80D39128 */ // True False
~cM3dGCyl();
};

struct cM3dGAab {
	/* 80D39170 */ // True False
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

struct J3DFrameCtrl {
	/* 803283FC */ // False False
//  s16 False
void init(s16);
	/* 80D38A20 */ // True False
~J3DFrameCtrl();
};

// 
// Forward References:
// 

// True False
//  daObjWindow_c* False
// 	 daObjWindow_c False
static void daObjWindow_create1st(daObjWindow_c*);
// True False
//  daObjWindow_c* False
// 	 daObjWindow_c False
static void daObjWindow_MoveBGDelete(daObjWindow_c*);
// True False
//  daObjWindow_c* False
// 	 daObjWindow_c False
static void daObjWindow_MoveBGExecute(daObjWindow_c*);
// True False
//  daObjWindow_c* False
// 	 daObjWindow_c False
static void daObjWindow_MoveBGDraw(daObjWindow_c*);

// True False
extern "C" void initBaseMtx__13daObjWindow_cFv();
// True False
extern "C" void setBaseMtx__13daObjWindow_cFv();
// True False
extern "C" void Create__13daObjWindow_cFv();
// True False
extern "C" void CreateHeap__13daObjWindow_cFv();
// True False
extern "C" void __dt__12J3DFrameCtrlFv();
// True False
extern "C" void create1st__13daObjWindow_cFv();
// True False
//  f32 (** )[3][4] False
// 	 f32 False
// 	 ** False
// 		 * False
// 			  False
extern "C" void Execute__13daObjWindow_cFPPA3_A4_f();
// True False
extern "C" void Draw__13daObjWindow_cFv();
// True False
extern "C" void Delete__13daObjWindow_cFv();
// True False
//  daObjWindow_c* False
// 	 daObjWindow_c False
extern "C" static void daObjWindow_create1st__FP13daObjWindow_c();
// True False
extern "C" void __dt__8cM3dGCylFv();
// True False
extern "C" void __dt__8cM3dGAabFv();
// True False
//  daObjWindow_c* False
// 	 daObjWindow_c False
extern "C" static void daObjWindow_MoveBGDelete__FP13daObjWindow_c();
// True False
//  daObjWindow_c* False
// 	 daObjWindow_c False
extern "C" static void daObjWindow_MoveBGExecute__FP13daObjWindow_c();
// True False
//  daObjWindow_c* False
// 	 daObjWindow_c False
extern "C" static void daObjWindow_MoveBGDraw__FP13daObjWindow_c();
extern "C" extern u32 const lit_3661;
extern "C" extern u32 const lit_3662;
extern "C" extern u32 const lit_3663;
extern "C" extern u8 const lit_3664[4];
extern "C" extern u32 const lit_3821;
extern "C" extern u32 const lit_3822;
extern "C" extern u32 const lit_3823;
extern "C" extern u32 const lit_3824;
extern "C" extern u32 const lit_3825;
extern "C" extern u32 const lit_3826;
extern "C" extern u32 const lit_3827;
extern "C" extern u32 const lit_3828;
extern "C" extern u32 const lit_3829;
extern "C" extern u32 const lit_3830;
extern "C" extern u32 const lit_3831;
extern "C" extern u32 const lit_3832;
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_Window[12];
extern "C" extern void* __vt__8cM3dGCyl[3];
extern "C" extern void* __vt__8cM3dGAab[3];
extern "C" extern void* __vt__12J3DFrameCtrl[3];
extern "C" extern void* __vt__13daObjWindow_c[10];

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
//  int False
void dComIfGp_getReverb(int);
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
//  cXyz const& False
// 	 cXyz const False
// 		 cXyz False
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
// False False
extern "C" void play__14mDoExt_baseAnmFv();
// False False
//  J3DAnmTransform* False
// 	 J3DAnmTransform False
//  int False
//  int False
//  f32 False
//  s16 False
//  s16 False
//  bool False
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
// False False
//  J3DModelData* False
// 	 J3DModelData False
//  f32 False
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
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
extern "C" void PSMTXMultVec();
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
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

// 
// Declarations:
// 

/* 80D38758-80D387B8 0060+00 s=1 e=0 z=0  None .text      initBaseMtx__13daObjWindow_cFv                               */
//	80D387A0: 80D387B8 (setBaseMtx__13daObjWindow_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjWindow_c::initBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/initBaseMtx__13daObjWindow_cFv.s"
}
#pragma pop


/* 80D387B8-80D38840 0088+00 s=2 e=0 z=0  None .text      setBaseMtx__13daObjWindow_cFv                                */
//	80D387D0: 8000CD64 (transS__14mDoMtx_stack_cFRC4cXyz)
//	80D387D4: 803DD470 (now__14mDoMtx_stack_c)
//	80D387D8: 803DD470 (now__14mDoMtx_stack_c)
//	80D387E0: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80D387E4: 803DD470 (now__14mDoMtx_stack_c)
//	80D387E8: 803DD470 (now__14mDoMtx_stack_c)
//	80D387F4: 803464B0 (PSMTXCopy)
//	80D38814: 803464B0 (PSMTXCopy)
//	80D38828: 803464B0 (PSMTXCopy)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjWindow_c::setBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/setBaseMtx__13daObjWindow_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80D3922C-80D39238 000C+00 s=3 e=0 z=0  None .rodata    l_bck                                                        */
SECTION_RODATA static u8 const l_bck[12] = {
	0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x06, 0xFF, 0xFF, 0xFF, 0xFF,
};

/* 80D39238-80D3923C 0004+00 s=0 e=0 z=0  None .rodata    @3661                                                        */
SECTION_RODATA u32 const lit_3661 = 0xC37A0000;

/* 80D3923C-80D39240 0004+00 s=0 e=0 z=0  None .rodata    @3662                                                        */
SECTION_RODATA u32 const lit_3662 = 0x44160000;

/* 80D39240-80D39244 0004+00 s=0 e=0 z=0  None .rodata    @3663                                                        */
SECTION_RODATA u32 const lit_3663 = 0x437A0000;

/* 80D39244-80D39248 0004+00 s=0 e=0 z=0  None .rodata    @3664                                                        */
SECTION_RODATA u8 const lit_3664[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80D39248-80D3924C 0004+00 s=1 e=0 z=0  None .rodata    @3696                                                        */
SECTION_RODATA static u32 const lit_3696 = 0x3F800000;

/* 80D3924C-80D39250 0004+00 s=0 e=0 z=0  None .rodata    @3821                                                        */
SECTION_RODATA u32 const lit_3821 = 0x43240000;

/* 80D39250-80D39254 0004+00 s=0 e=0 z=0  None .rodata    @3822                                                        */
SECTION_RODATA u32 const lit_3822 = 0x443D4000;

/* 80D39254-80D39258 0004+00 s=0 e=0 z=0  None .rodata    @3823                                                        */
SECTION_RODATA u32 const lit_3823 = 0xBF800000;

/* 80D39258-80D3925C 0004+00 s=0 e=0 z=0  None .rodata    @3824                                                        */
SECTION_RODATA u32 const lit_3824 = 0x42FA0000;

/* 80D3925C-80D39260 0004+00 s=0 e=0 z=0  None .rodata    @3825                                                        */
SECTION_RODATA u32 const lit_3825 = 0x43840000;

/* 80D39260-80D39264 0004+00 s=0 e=0 z=0  None .rodata    @3826                                                        */
SECTION_RODATA u32 const lit_3826 = 0x43B60000;

/* 80D39264-80D39268 0004+00 s=0 e=0 z=0  None .rodata    @3827                                                        */
SECTION_RODATA u32 const lit_3827 = 0x43E80000;

/* 80D39268-80D3926C 0004+00 s=0 e=0 z=0  None .rodata    @3828                                                        */
SECTION_RODATA u32 const lit_3828 = 0x44080000;

/* 80D3926C-80D39270 0004+00 s=0 e=0 z=0  None .rodata    @3829                                                        */
SECTION_RODATA u32 const lit_3829 = 0x44328000;

/* 80D39270-80D39274 0004+00 s=0 e=0 z=0  None .rodata    @3830                                                        */
SECTION_RODATA u32 const lit_3830 = 0x444F4000;

/* 80D39274-80D39278 0004+00 s=0 e=0 z=0  None .rodata    @3831                                                        */
SECTION_RODATA u32 const lit_3831 = 0xC2480000;

/* 80D39278-80D3927C 0004+00 s=0 e=0 z=0  None .rodata    @3832                                                        */
SECTION_RODATA u32 const lit_3832 = 0x42A00000;

/* 80D3927C-80D39284 0008+00 s=1 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80D3927C = "J_KazeD";
#pragma pop

/* 80D39284-80D39288 0004+00 s=3 e=0 z=0  None .data      l_arcName                                                    */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80D39288-80D392CC 0044+00 s=1 e=0 z=0  None .data      l_cyl_src                                                    */
SECTION_DATA static u8 l_cyl_src[68] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
	0x43, 0xC8, 0x00, 0x00,
};

/* 80D38840-80D388F0 00B0+00 s=1 e=0 z=0  None .text      Create__13daObjWindow_cFv                                    */
//	80D38858: 80D3922C (l_bck)
//	80D3885C: 80D3922C (l_bck)
//	80D38860: 80D38758 (initBaseMtx__13daObjWindow_cFv)
//	80D3888C: 8001A548 (fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff)
//	80D388AC: 80083860 (Init__9dCcD_SttsFiiP10fopAc_ac_c)
//	80D388B4: 80D39288 (l_cyl_src)
//	80D388B8: 80D39288 (l_cyl_src)
//	80D388BC: 800848B4 (Set__8dCcD_CylFRC11dCcD_SrcCyl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjWindow_c::Create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/Create__13daObjWindow_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80D392CC-80D392EC 0020+00 s=1 e=0 z=0  None .data      daObjWindow_METHODS                                          */
SECTION_DATA static void* daObjWindow_METHODS[8] = {
	(void*)daObjWindow_create1st__FP13daObjWindow_c,
	(void*)daObjWindow_MoveBGDelete__FP13daObjWindow_c,
	(void*)daObjWindow_MoveBGExecute__FP13daObjWindow_c,
	(void*)NULL,
	(void*)daObjWindow_MoveBGDraw__FP13daObjWindow_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80D392EC-80D3931C 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Window                                         */
SECTION_DATA void* g_profile_Obj_Window[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0003FFFD,
	(void*)0x00780000,
	(void*)&g_fpcLf_Method,
	(void*)0x0000072C,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x01EB0000,
	(void*)&daObjWindow_METHODS,
	(void*)0x00040100,
	(void*)0x000E0000,
};

/* 80D3931C-80D39328 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGCyl                                              */
SECTION_DATA void* __vt__8cM3dGCyl[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__8cM3dGCylFv,
};

/* 80D39328-80D39334 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab                                              */
SECTION_DATA void* __vt__8cM3dGAab[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__8cM3dGAabFv,
};

/* 80D39334-80D39340 000C+00 s=2 e=0 z=0  None .data      __vt__12J3DFrameCtrl                                         */
SECTION_DATA void* __vt__12J3DFrameCtrl[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__12J3DFrameCtrlFv,
};

/* 80D388F0-80D38A20 0130+00 s=1 e=0 z=0  None .text      CreateHeap__13daObjWindow_cFv                                */
//	80D38900: 803621DC (_savegpr_29)
//	80D38908: 80D39284 (l_arcName)
//	80D3890C: 80D39284 (l_arcName)
//	80D38918: 804061C0 (g_dComIfG_gameInfo)
//	80D3891C: 804061C0 (g_dComIfG_gameInfo)
//	80D38930: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80D38940: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
//	80D38964: 80D3922C (l_bck)
//	80D38968: 80D3922C (l_bck)
//	80D38978: 80D39284 (l_arcName)
//	80D3897C: 80D39284 (l_arcName)
//	80D3898C: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80D38998: 802CEC4C (__nw__FUl)
//	80D389A4: 80D39334 (__vt__12J3DFrameCtrl)
//	80D389A8: 80D39334 (__vt__12J3DFrameCtrl)
//	80D389B4: 803283FC (init__12J3DFrameCtrlFs)
//	80D389DC: 80D39248 (lit_3696)
//	80D389E0: 80D39248 (lit_3696)
//	80D389F0: 8000D7DC (init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb)
//	80D38A0C: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjWindow_c::CreateHeap() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/CreateHeap__13daObjWindow_cFv.s"
}
#pragma pop


/* 80D38A20-80D38A68 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv                                       */
//	80D38A38: 80D39334 (__vt__12J3DFrameCtrl)
//	80D38A3C: 80D39334 (__vt__12J3DFrameCtrl)
//	80D38A4C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm J3DFrameCtrl::~J3DFrameCtrl() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop


/* 80D38A68-80D38B04 009C+00 s=1 e=0 z=0  None .text      create1st__13daObjWindow_cFv                                 */
//	80D38A9C: 80D39284 (l_arcName)
//	80D38AA0: 80D39284 (l_arcName)
//	80D38AA8: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80D38ABC: 80D39284 (l_arcName)
//	80D38AC0: 80D39284 (l_arcName)
//	80D38AD8: 800787BC (MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjWindow_c::create1st() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/create1st__13daObjWindow_cFv.s"
}
#pragma pop


/* 80D38B04-80D38F28 0424+00 s=1 e=0 z=0  None .text      Execute__13daObjWindow_cFPPA3_A4_f                           */
//	80D38B1C: 803621DC (_savegpr_29)
//	80D38B28: 80D3922C (l_bck)
//	80D38B2C: 80D3922C (l_bck)
//	80D38B3C: 8000D428 (play__14mDoExt_baseAnmFv)
//	80D38B68: 8002D06C (dComIfGp_getReverb__Fi)
//	80D38B7C: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D38B80: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D38BA8: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80D38BC0: 8002D06C (dComIfGp_getReverb__Fi)
//	80D38BD4: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D38BD8: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D38C00: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80D38C1C: 8002D06C (dComIfGp_getReverb__Fi)
//	80D38C30: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D38C34: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D38C5C: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80D38C78: 8002D06C (dComIfGp_getReverb__Fi)
//	80D38C8C: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D38C90: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D38CB8: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80D38CD4: 8002D06C (dComIfGp_getReverb__Fi)
//	80D38CE8: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D38CEC: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D38D14: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80D38D30: 8002D06C (dComIfGp_getReverb__Fi)
//	80D38D44: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D38D48: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D38D70: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80D38D8C: 8002D06C (dComIfGp_getReverb__Fi)
//	80D38DA0: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D38DA4: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D38DCC: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80D38DE8: 8002D06C (dComIfGp_getReverb__Fi)
//	80D38DFC: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D38E00: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D38E28: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80D38E38: 8002D06C (dComIfGp_getReverb__Fi)
//	80D38E4C: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D38E50: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D38E78: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80D38E88: 80D387B8 (setBaseMtx__13daObjWindow_cFv)
//	80D38EB0: 8000CD64 (transS__14mDoMtx_stack_cFRC4cXyz)
//	80D38EB4: 803DD470 (now__14mDoMtx_stack_c)
//	80D38EB8: 803DD470 (now__14mDoMtx_stack_c)
//	80D38EC0: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80D38EC4: 803DD470 (now__14mDoMtx_stack_c)
//	80D38EC8: 803DD470 (now__14mDoMtx_stack_c)
//	80D38ED4: 80346D6C (PSMTXMultVec)
//	80D38EE0: 8026F1DC (SetC__8cM3dGCylFRC4cXyz)
//	80D38EEC: 8026F200 (SetR__8cM3dGCylFf)
//	80D38EF0: 804061C0 (g_dComIfG_gameInfo)
//	80D38EF4: 804061C0 (g_dComIfG_gameInfo)
//	80D38F00: 80264BA8 (Set__4cCcSFP8cCcD_Obj)
//	80D38F14: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  f32 (** )[3][4] False
// 	 f32 False
// 	 ** False
// 		 * False
// 			  False
asm void daObjWindow_c::Execute(f32 (** param_0)[3][4]) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/Execute__13daObjWindow_cFPPA3_A4_f.s"
}
#pragma pop


/* 80D38F28-80D39000 00D8+00 s=1 e=0 z=0  None .text      Draw__13daObjWindow_cFv                                      */
//	80D38F40: 8042CA54 (g_env_light)
//	80D38F44: 8042CA54 (g_env_light)
//	80D38F54: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80D38F58: 8042CA54 (g_env_light)
//	80D38F5C: 8042CA54 (g_env_light)
//	80D38F6C: 801A4DA0 (setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c)
//	80D38F70: 804061C0 (g_dComIfG_gameInfo)
//	80D38F74: 804061C0 (g_dComIfG_gameInfo)
//	80D38F7C: 80434AC8 (j3dSys)
//	80D38F80: 80434AC8 (j3dSys)
//	80D38FA8: 8000D9CC (entry__13mDoExt_bckAnmFP12J3DModelDataf)
//	80D38FB0: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
//	80D38FCC: 804061C0 (g_dComIfG_gameInfo)
//	80D38FD0: 804061C0 (g_dComIfG_gameInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjWindow_c::Draw() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/Draw__13daObjWindow_cFv.s"
}
#pragma pop


/* 80D39000-80D39034 0034+00 s=1 e=0 z=0  None .text      Delete__13daObjWindow_cFv                                    */
//	80D3900C: 80D39284 (l_arcName)
//	80D39010: 80D39284 (l_arcName)
//	80D3901C: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjWindow_c::Delete() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/Delete__13daObjWindow_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80D39340-80D39368 0028+00 s=1 e=0 z=0  None .data      __vt__13daObjWindow_c                                        */
SECTION_DATA void* __vt__13daObjWindow_c[10] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)CreateHeap__13daObjWindow_cFv,
	(void*)Create__13daObjWindow_cFv,
	(void*)Execute__13daObjWindow_cFPPA3_A4_f,
	(void*)Draw__13daObjWindow_cFv,
	(void*)Delete__13daObjWindow_cFv,
	(void*)IsDelete__16dBgS_MoveBgActorFv,
	(void*)ToFore__16dBgS_MoveBgActorFv,
	(void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80D39034-80D39128 00F4+00 s=1 e=0 z=0  None .text      daObjWindow_create1st__FP13daObjWindow_c                     */
//	80D39064: 80078624 (__ct__16dBgS_MoveBgActorFv)
//	80D39068: 80D39340 (__vt__13daObjWindow_c)
//	80D3906C: 80D39340 (__vt__13daObjWindow_c)
//	80D39074: 803C3728 (__vt__9cCcD_Stts)
//	80D39078: 803C3728 (__vt__9cCcD_Stts)
//	80D39084: 80083760 (__ct__10dCcD_GSttsFv)
//	80D39088: 803AC2E4 (__vt__9dCcD_Stts)
//	80D3908C: 803AC2E4 (__vt__9dCcD_Stts)
//	80D390A4: 80083A28 (__ct__12dCcD_GObjInfFv)
//	80D390A8: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80D390AC: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80D390B4: 80D39328 (__vt__8cM3dGAab)
//	80D390B8: 80D39328 (__vt__8cM3dGAab)
//	80D390C0: 80D3931C (__vt__8cM3dGCyl)
//	80D390C4: 80D3931C (__vt__8cM3dGCyl)
//	80D390CC: 803C35A4 (__vt__12cCcD_CylAttr)
//	80D390D0: 803C35A4 (__vt__12cCcD_CylAttr)
//	80D390E0: 803AC050 (__vt__8dCcD_Cyl)
//	80D390E4: 803AC050 (__vt__8dCcD_Cyl)
//	80D3910C: 80D38A68 (create1st__13daObjWindow_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daObjWindow_c* False
// 	 daObjWindow_c False
asm static void daObjWindow_create1st(daObjWindow_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/daObjWindow_create1st__FP13daObjWindow_c.s"
}
#pragma pop


/* 80D39128-80D39170 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv                                            */
//	80D39140: 80D3931C (__vt__8cM3dGCyl)
//	80D39144: 80D3931C (__vt__8cM3dGCyl)
//	80D39154: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm cM3dGCyl::~cM3dGCyl() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/__dt__8cM3dGCylFv.s"
}
#pragma pop


/* 80D39170-80D391B8 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv                                            */
//	80D39188: 80D39328 (__vt__8cM3dGAab)
//	80D3918C: 80D39328 (__vt__8cM3dGAab)
//	80D3919C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm cM3dGAab::~cM3dGAab() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/__dt__8cM3dGAabFv.s"
}
#pragma pop


/* 80D391B8-80D391D8 0020+00 s=1 e=0 z=0  None .text      daObjWindow_MoveBGDelete__FP13daObjWindow_c                  */
//	80D391C4: 800788DC (MoveBGDelete__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daObjWindow_c* False
// 	 daObjWindow_c False
asm static void daObjWindow_MoveBGDelete(daObjWindow_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/daObjWindow_MoveBGDelete__FP13daObjWindow_c.s"
}
#pragma pop


/* 80D391D8-80D391F8 0020+00 s=1 e=0 z=0  None .text      daObjWindow_MoveBGExecute__FP13daObjWindow_c                 */
//	80D391E4: 80078950 (MoveBGExecute__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daObjWindow_c* False
// 	 daObjWindow_c False
asm static void daObjWindow_MoveBGExecute(daObjWindow_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/daObjWindow_MoveBGExecute__FP13daObjWindow_c.s"
}
#pragma pop


/* 80D391F8-80D39224 002C+00 s=1 e=0 z=0  None .text      daObjWindow_MoveBGDraw__FP13daObjWindow_c                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daObjWindow_c* False
// 	 daObjWindow_c False
asm static void daObjWindow_MoveBGDraw(daObjWindow_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/daObjWindow_MoveBGDraw__FP13daObjWindow_c.s"
}
#pragma pop


