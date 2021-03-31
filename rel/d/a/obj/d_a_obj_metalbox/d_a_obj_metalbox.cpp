// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_metalbox
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct fopAc_ac_c {
};

struct daObjMBox_c {
	/* 80592E98 */ // True False
void initBaseMtx();
	/* 80592ED4 */ // True False
void setBaseMtx();
	/* 80592F48 */ // True False
void Create();
	/* 80592FD4 */ // True False
void CreateHeap();
	/* 80593044 */ // True False
void create();
	/* 805932C4 */ // True False
//  f32 (** )[3][4] False
// 	 f32 False
// 	 ** False
// 		 * False
// 			  False
void Execute(f32 (** )[3][4]);
	/* 805932F0 */ // True False
void Draw();
	/* 80593394 */ // True False
void Delete();
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

struct dCcD_GStts {
	/* 80083760 */ // False False
dCcD_GStts();
};

struct dCcD_GObjInf {
	/* 80083A28 */ // False False
dCcD_GObjInf();
};

struct dBgW {
};

struct dBgS_PolyPassChk {
	/* 80078E68 */ // False False
void SetObj();
};

struct dBgS_ObjAcch {
	/* 80593254 */ // True False
~dBgS_ObjAcch();
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

struct dBgS_AcchCir {
	/* 80075EAC */ // False False
dBgS_AcchCir();
	/* 80075F58 */ // False False
//  f32 False
//  f32 False
void SetWall(f32, f32);
};

struct dBgS_Acch {
	/* 80075F94 */ // False False
~dBgS_Acch();
	/* 800760A0 */ // False False
dBgS_Acch();
	/* 80076248 */ // False False
//  cXyz* False
// 	 cXyz False
//  cXyz* False
// 	 cXyz False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  int False
//  dBgS_AcchCir* False
// 	 dBgS_AcchCir False
//  cXyz* False
// 	 cXyz False
//  csXyz* False
// 	 csXyz False
//  csXyz* False
// 	 csXyz False
void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
};

struct cM3dGCyl {
	/* 805931C4 */ // True False
~cM3dGCyl();
};

struct cM3dGAab {
	/* 8059320C */ // True False
~cM3dGAab();
};

struct J3DModel {
};

// 
// Forward References:
// 

// True False
//  daObjMBox_c* False
// 	 daObjMBox_c False
static void daObjMBox_Draw(daObjMBox_c*);
// True False
//  daObjMBox_c* False
// 	 daObjMBox_c False
static void daObjMBox_Execute(daObjMBox_c*);
// True False
//  daObjMBox_c* False
// 	 daObjMBox_c False
static void daObjMBox_Delete(daObjMBox_c*);
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
static void daObjMBox_Create(fopAc_ac_c*);

// True False
extern "C" void initBaseMtx__11daObjMBox_cFv();
// True False
extern "C" void setBaseMtx__11daObjMBox_cFv();
// True False
extern "C" void Create__11daObjMBox_cFv();
// True False
extern "C" void CreateHeap__11daObjMBox_cFv();
// True False
extern "C" void create__11daObjMBox_cFv();
// True False
extern "C" void __dt__8cM3dGCylFv();
// True False
extern "C" void __dt__8cM3dGAabFv();
// True False
extern "C" void __dt__12dBgS_ObjAcchFv();
// True False
//  f32 (** )[3][4] False
// 	 f32 False
// 	 ** False
// 		 * False
// 			  False
extern "C" void Execute__11daObjMBox_cFPPA3_A4_f();
// True False
extern "C" void Draw__11daObjMBox_cFv();
// True False
extern "C" void Delete__11daObjMBox_cFv();
// True False
//  daObjMBox_c* False
// 	 daObjMBox_c False
extern "C" static void daObjMBox_Draw__FP11daObjMBox_c();
// True False
//  daObjMBox_c* False
// 	 daObjMBox_c False
extern "C" static void daObjMBox_Execute__FP11daObjMBox_c();
// True False
//  daObjMBox_c* False
// 	 daObjMBox_c False
extern "C" static void daObjMBox_Delete__FP11daObjMBox_c();
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" static void daObjMBox_Create__FP10fopAc_ac_c();
// True False
extern "C" static void func_80593454();
// True False
extern "C" static void func_8059345C();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_MetalBox[12];
extern "C" extern void* __vt__8cM3dGCyl[3];
extern "C" extern void* __vt__8cM3dGAab[3];
extern "C" extern void* __vt__12dBgS_ObjAcch[9];
extern "C" extern void* __vt__11daObjMBox_c[10];

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
extern "C" void __ct__12dBgS_AcchCirFv();
// False False
//  f32 False
//  f32 False
extern "C" void SetWall__12dBgS_AcchCirFff();
// False False
extern "C" void __dt__9dBgS_AcchFv();
// False False
extern "C" void __ct__9dBgS_AcchFv();
// False False
//  cXyz* False
// 	 cXyz False
//  cXyz* False
// 	 cXyz False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  int False
//  dBgS_AcchCir* False
// 	 dBgS_AcchCir False
//  cXyz* False
// 	 cXyz False
//  csXyz* False
// 	 csXyz False
//  csXyz* False
// 	 csXyz False
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
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
extern "C" void SetObj__16dBgS_PolyPassChkFv();
// False False
extern "C" void __ct__10dCcD_GSttsFv();
// False False
extern "C" void __ct__12dCcD_GObjInfFv();
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

// 
// Declarations:
// 

/* 80592E98-80592ED4 003C+00 s=1 e=0 z=0  None .text      initBaseMtx__11daObjMBox_cFv                                 */
//	80592EC0: 80592ED4 (setBaseMtx__11daObjMBox_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjMBox_c::initBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/initBaseMtx__11daObjMBox_cFv.s"
}
#pragma pop


/* 80592ED4-80592F48 0074+00 s=2 e=0 z=0  None .text      setBaseMtx__11daObjMBox_cFv                                  */
//	80592EE8: 803DD470 (now__14mDoMtx_stack_c)
//	80592EEC: 803DD470 (now__14mDoMtx_stack_c)
//	80592EFC: 803468E8 (PSMTXTrans)
//	80592F00: 803DD470 (now__14mDoMtx_stack_c)
//	80592F04: 803DD470 (now__14mDoMtx_stack_c)
//	80592F0C: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80592F10: 803DD470 (now__14mDoMtx_stack_c)
//	80592F14: 803DD470 (now__14mDoMtx_stack_c)
//	80592F20: 803464B0 (PSMTXCopy)
//	80592F24: 803DD470 (now__14mDoMtx_stack_c)
//	80592F28: 803DD470 (now__14mDoMtx_stack_c)
//	80592F30: 803464B0 (PSMTXCopy)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjMBox_c::setBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/setBaseMtx__11daObjMBox_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 8059346C-80593470 0004+00 s=1 e=0 z=0  None .rodata    @3655                                                        */
SECTION_RODATA static u32 const lit_3655 = 0x41F00000;

/* 80592F48-80592FD4 008C+00 s=1 e=0 z=0  None .text      Create__11daObjMBox_cFv                                      */
//	80592F5C: 80592E98 (initBaseMtx__11daObjMBox_cFv)
//	80592F70: 8059346C (lit_3655)
//	80592F74: 8059346C (lit_3655)
//	80592F7C: 80075F58 (SetWall__12dBgS_AcchCirFff)
//	80592FA8: 80076248 (Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz)
//	80592FB8: 8001A578 (fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjMBox_c::Create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/Create__11daObjMBox_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80593470-8059347A 000A+00 s=1 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80593470 = "L_mbox_00";
#pragma pop

/* 8059347C-80593480 0004+00 s=3 e=0 z=0  None .data      l_arcName                                                    */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80592FD4-80593044 0070+00 s=1 e=0 z=0  None .text      CreateHeap__11daObjMBox_cFv                                  */
//	80592FE8: 8059347C (l_arcName)
//	80592FEC: 8059347C (l_arcName)
//	80592FF8: 804061C0 (g_dComIfG_gameInfo)
//	80592FFC: 804061C0 (g_dComIfG_gameInfo)
//	8059300C: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	8059301C: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjMBox_c::CreateHeap() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/CreateHeap__11daObjMBox_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80593480-805934A0 0020+00 s=1 e=0 z=0  None .data      l_daObjMBox_Method                                           */
SECTION_DATA static void* l_daObjMBox_Method[8] = {
	(void*)daObjMBox_Create__FP10fopAc_ac_c,
	(void*)daObjMBox_Delete__FP11daObjMBox_c,
	(void*)daObjMBox_Execute__FP11daObjMBox_c,
	(void*)NULL,
	(void*)daObjMBox_Draw__FP11daObjMBox_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 805934A0-805934D0 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_MetalBox                                       */
SECTION_DATA void* g_profile_Obj_MetalBox[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0003FFFD,
	(void*)0x00790000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000944,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x01F20000,
	(void*)&l_daObjMBox_Method,
	(void*)0x00040100,
	(void*)0x000E0000,
};

/* 805934D0-805934DC 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGCyl                                              */
SECTION_DATA void* __vt__8cM3dGCyl[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__8cM3dGCylFv,
};

/* 805934DC-805934E8 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab                                              */
SECTION_DATA void* __vt__8cM3dGAab[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__8cM3dGAabFv,
};

/* 805934E8-8059350C 0024+00 s=2 e=0 z=0  None .data      __vt__12dBgS_ObjAcch                                         */
SECTION_DATA void* __vt__12dBgS_ObjAcch[9] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__12dBgS_ObjAcchFv,
	(void*)NULL,
	(void*)NULL,
	(void*)func_8059345C,
	(void*)NULL,
	(void*)NULL,
	(void*)func_80593454,
};

/* 8059350C-80593534 0028+00 s=1 e=0 z=0  None .data      __vt__11daObjMBox_c                                          */
SECTION_DATA void* __vt__11daObjMBox_c[10] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)CreateHeap__11daObjMBox_cFv,
	(void*)Create__11daObjMBox_cFv,
	(void*)Execute__11daObjMBox_cFPPA3_A4_f,
	(void*)Draw__11daObjMBox_cFv,
	(void*)Delete__11daObjMBox_cFv,
	(void*)IsDelete__16dBgS_MoveBgActorFv,
	(void*)ToFore__16dBgS_MoveBgActorFv,
	(void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80593044-805931C4 0180+00 s=1 e=0 z=0  None .text      create__11daObjMBox_cFv                                      */
//	80593054: 803621DC (_savegpr_29)
//	80593074: 80078624 (__ct__16dBgS_MoveBgActorFv)
//	80593078: 8059350C (__vt__11daObjMBox_c)
//	8059307C: 8059350C (__vt__11daObjMBox_c)
//	8059308C: 800760A0 (__ct__9dBgS_AcchFv)
//	80593090: 805934E8 (__vt__12dBgS_ObjAcch)
//	80593094: 805934E8 (__vt__12dBgS_ObjAcch)
//	805930B0: 80078E68 (SetObj__16dBgS_PolyPassChkFv)
//	805930B8: 80075EAC (__ct__12dBgS_AcchCirFv)
//	805930BC: 803C3728 (__vt__9cCcD_Stts)
//	805930C0: 803C3728 (__vt__9cCcD_Stts)
//	805930CC: 80083760 (__ct__10dCcD_GSttsFv)
//	805930D0: 803AC2E4 (__vt__9dCcD_Stts)
//	805930D4: 803AC2E4 (__vt__9dCcD_Stts)
//	805930EC: 80083A28 (__ct__12dCcD_GObjInfFv)
//	805930F0: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	805930F4: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	805930FC: 805934DC (__vt__8cM3dGAab)
//	80593100: 805934DC (__vt__8cM3dGAab)
//	80593108: 805934D0 (__vt__8cM3dGCyl)
//	8059310C: 805934D0 (__vt__8cM3dGCyl)
//	80593114: 803C35A4 (__vt__12cCcD_CylAttr)
//	80593118: 803C35A4 (__vt__12cCcD_CylAttr)
//	80593128: 803AC050 (__vt__8dCcD_Cyl)
//	8059312C: 803AC050 (__vt__8dCcD_Cyl)
//	80593154: 8059347C (l_arcName)
//	80593158: 8059347C (l_arcName)
//	80593160: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80593174: 8059347C (l_arcName)
//	80593178: 8059347C (l_arcName)
//	80593184: 80075AD8 (dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz)
//	80593188: 80075AD8 (dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz)
//	80593194: 800787BC (MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f)
//	805931B0: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjMBox_c::create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/func_80593044.s"
}
#pragma pop


/* 805931C4-8059320C 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv                                            */
//	805931DC: 805934D0 (__vt__8cM3dGCyl)
//	805931E0: 805934D0 (__vt__8cM3dGCyl)
//	805931F0: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm cM3dGCyl::~cM3dGCyl() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/__dt__8cM3dGCylFv.s"
}
#pragma pop


/* 8059320C-80593254 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv                                            */
//	80593224: 805934DC (__vt__8cM3dGAab)
//	80593228: 805934DC (__vt__8cM3dGAab)
//	80593238: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm cM3dGAab::~cM3dGAab() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/__dt__8cM3dGAabFv.s"
}
#pragma pop


/* 80593254-805932C4 0070+00 s=3 e=0 z=0  None .text      __dt__12dBgS_ObjAcchFv                                       */
//	80593274: 805934E8 (__vt__12dBgS_ObjAcch)
//	80593278: 805934E8 (__vt__12dBgS_ObjAcch)
//	80593294: 80075F94 (__dt__9dBgS_AcchFv)
//	805932A4: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop


/* 805932C4-805932F0 002C+00 s=1 e=0 z=0  None .text      Execute__11daObjMBox_cFPPA3_A4_f                             */
//	805932D8: 80592ED4 (setBaseMtx__11daObjMBox_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  f32 (** )[3][4] False
// 	 f32 False
// 	 ** False
// 		 * False
// 			  False
asm void daObjMBox_c::Execute(f32 (** param_0)[3][4]) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/Execute__11daObjMBox_cFPPA3_A4_f.s"
}
#pragma pop


/* 805932F0-80593394 00A4+00 s=1 e=0 z=0  None .text      Draw__11daObjMBox_cFv                                        */
//	80593308: 8042CA54 (g_env_light)
//	8059330C: 8042CA54 (g_env_light)
//	8059331C: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80593320: 8042CA54 (g_env_light)
//	80593324: 8042CA54 (g_env_light)
//	80593334: 801A4DA0 (setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c)
//	80593338: 804061C0 (g_dComIfG_gameInfo)
//	8059333C: 804061C0 (g_dComIfG_gameInfo)
//	80593344: 80434AC8 (j3dSys)
//	80593348: 80434AC8 (j3dSys)
//	8059335C: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
//	80593360: 804061C0 (g_dComIfG_gameInfo)
//	80593364: 804061C0 (g_dComIfG_gameInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjMBox_c::Draw() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/Draw__11daObjMBox_cFv.s"
}
#pragma pop


/* 80593394-805933C8 0034+00 s=1 e=0 z=0  None .text      Delete__11daObjMBox_cFv                                      */
//	805933A0: 8059347C (l_arcName)
//	805933A4: 8059347C (l_arcName)
//	805933B0: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjMBox_c::Delete() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/Delete__11daObjMBox_cFv.s"
}
#pragma pop


/* 805933C8-805933F4 002C+00 s=1 e=0 z=0  None .text      daObjMBox_Draw__FP11daObjMBox_c                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daObjMBox_c* False
// 	 daObjMBox_c False
asm static void daObjMBox_Draw(daObjMBox_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/daObjMBox_Draw__FP11daObjMBox_c.s"
}
#pragma pop


/* 805933F4-80593414 0020+00 s=1 e=0 z=0  None .text      daObjMBox_Execute__FP11daObjMBox_c                           */
//	80593400: 80078950 (MoveBGExecute__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daObjMBox_c* False
// 	 daObjMBox_c False
asm static void daObjMBox_Execute(daObjMBox_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/daObjMBox_Execute__FP11daObjMBox_c.s"
}
#pragma pop


/* 80593414-80593434 0020+00 s=1 e=0 z=0  None .text      daObjMBox_Delete__FP11daObjMBox_c                            */
//	80593420: 800788DC (MoveBGDelete__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daObjMBox_c* False
// 	 daObjMBox_c False
asm static void daObjMBox_Delete(daObjMBox_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/daObjMBox_Delete__FP11daObjMBox_c.s"
}
#pragma pop


/* 80593434-80593454 0020+00 s=1 e=0 z=0  None .text      daObjMBox_Create__FP10fopAc_ac_c                             */
//	80593440: 80593044 (create__11daObjMBox_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
asm static void daObjMBox_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/daObjMBox_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80593454-8059345C 0008+00 s=1 e=0 z=0  None .text      @36@__dt__12dBgS_ObjAcchFv                                   */
//	80593458: 80593254 (__dt__12dBgS_ObjAcchFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void func_80593454() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/func_80593454.s"
}
#pragma pop


/* 8059345C-80593464 0008+00 s=1 e=0 z=0  None .text      @20@__dt__12dBgS_ObjAcchFv                                   */
//	80593460: 80593254 (__dt__12dBgS_ObjAcchFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void func_8059345C() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_metalbox/d_a_obj_metalbox/func_8059345C.s"
}
#pragma pop


