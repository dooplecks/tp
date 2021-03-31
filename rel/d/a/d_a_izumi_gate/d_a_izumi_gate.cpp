// 
// Generated By: dol2asm
// Translation Unit: d_a_izumi_gate
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/d_a_izumi_gate/d_a_izumi_gate.h"

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

struct fopAc_ac_c {
};

struct daIzumiGate_c {
	/* 80849098 */ // True False
void initBaseMtx();
	/* 808490B8 */ // True False
void setBaseMtx();
	/* 80849260 */ // True False
void CreateHeap();
	/* 808492D8 */ // True False
void Create();
	/* 808492FC */ // True False
//  f32 (** )[3][4] False
// 	 f32 False
// 	 ** False
// 		 * False
// 			  False
void Execute(f32 (** )[3][4]);
	/* 80849328 */ // True False
void Draw();
	/* 808493CC */ // True False
void Delete();
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
	/* 8003C6B8 */ // False False
//  char const* False
// 	 char const False
// 		 char False
//  char const* False
// 	 char const False
// 		 char False
void getObjectResName2Index(char const*, char const*);
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

struct J3DModel {
};

// 
// Forward References:
// 

// True False
//  daIzumiGate_c* False
// 	 daIzumiGate_c False
static void daIzumiGate_Draw(daIzumiGate_c*);
// True False
//  daIzumiGate_c* False
// 	 daIzumiGate_c False
static void daIzumiGate_Execute(daIzumiGate_c*);
// True False
//  bool False
//  daIzumiGate_c* False
// 	 daIzumiGate_c False
static bool daIzumiGate_IsDelete(daIzumiGate_c*);
// True False
//  daIzumiGate_c* False
// 	 daIzumiGate_c False
static void daIzumiGate_Delete(daIzumiGate_c*);
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
static void daIzumiGate_Create(fopAc_ac_c*);

// True False
extern "C" void initBaseMtx__13daIzumiGate_cFv();
// True False
extern "C" void setBaseMtx__13daIzumiGate_cFv();
// True False
//  daIzumiGate_c* False
// 	 daIzumiGate_c False
extern "C" static void daIzumiGate_Draw__FP13daIzumiGate_c();
// True False
//  daIzumiGate_c* False
// 	 daIzumiGate_c False
extern "C" static void daIzumiGate_Execute__FP13daIzumiGate_c();
// True False
//  bool False
//  daIzumiGate_c* False
// 	 daIzumiGate_c False
extern "C" static bool daIzumiGate_IsDelete__FP13daIzumiGate_c();
// True False
//  daIzumiGate_c* False
// 	 daIzumiGate_c False
extern "C" static void daIzumiGate_Delete__FP13daIzumiGate_c();
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" static void daIzumiGate_Create__FP10fopAc_ac_c();
// True False
extern "C" void CreateHeap__13daIzumiGate_cFv();
// True False
extern "C" void Create__13daIzumiGate_cFv();
// True False
//  f32 (** )[3][4] False
// 	 f32 False
// 	 ** False
// 		 * False
// 			  False
extern "C" void Execute__13daIzumiGate_cFPPA3_A4_f();
// True False
extern "C" void Draw__13daIzumiGate_cFv();
// True False
extern "C" void Delete__13daIzumiGate_cFv();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Izumi_Gate[12];
extern "C" extern void* __vt__13daIzumiGate_c[10];

// 
// External References:
// 

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
//  cXyz const& False
// 	 cXyz const False
// 		 cXyz False
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
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
//  char const* False
// 	 char const False
// 		 char False
//  dRes_info_c* False
// 	 dRes_info_c False
//  int False
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
// False False
//  char const* False
// 	 char const False
// 		 char False
//  char const* False
// 	 char const False
// 		 char False
extern "C" void getObjectResName2Index__14dRes_control_cFPCcPCc();
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
extern "C" void PSMTXCopy();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];

// 
// Declarations:
// 

/* 80849098-808490B8 0020+00 s=1 e=0 z=0  None .text      initBaseMtx__13daIzumiGate_cFv                               */
//	808490A4: 808490B8 (setBaseMtx__13daIzumiGate_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daIzumiGate_c::initBaseMtx() {
	nofralloc
#include "asm/rel/d/a/d_a_izumi_gate/d_a_izumi_gate/initBaseMtx__13daIzumiGate_cFv.s"
}
#pragma pop


/* 808490B8-8084910C 0054+00 s=2 e=0 z=0  None .text      setBaseMtx__13daIzumiGate_cFv                                */
//	808490D0: 8000CD64 (transS__14mDoMtx_stack_cFRC4cXyz)
//	808490D4: 803DD470 (now__14mDoMtx_stack_c)
//	808490D8: 803DD470 (now__14mDoMtx_stack_c)
//	808490E0: 803464B0 (PSMTXCopy)
//	808490E4: 803DD470 (now__14mDoMtx_stack_c)
//	808490E8: 803DD470 (now__14mDoMtx_stack_c)
//	808490F4: 803464B0 (PSMTXCopy)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daIzumiGate_c::setBaseMtx() {
	nofralloc
#include "asm/rel/d/a/d_a_izumi_gate/d_a_izumi_gate/setBaseMtx__13daIzumiGate_cFv.s"
}
#pragma pop


/* 8084910C-80849138 002C+00 s=1 e=0 z=0  None .text      daIzumiGate_Draw__FP13daIzumiGate_c                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daIzumiGate_c* False
// 	 daIzumiGate_c False
asm static void daIzumiGate_Draw(daIzumiGate_c* param_0) {
	nofralloc
#include "asm/rel/d/a/d_a_izumi_gate/d_a_izumi_gate/daIzumiGate_Draw__FP13daIzumiGate_c.s"
}
#pragma pop


/* 80849138-80849158 0020+00 s=1 e=0 z=0  None .text      daIzumiGate_Execute__FP13daIzumiGate_c                       */
//	80849144: 80078950 (MoveBGExecute__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daIzumiGate_c* False
// 	 daIzumiGate_c False
asm static void daIzumiGate_Execute(daIzumiGate_c* param_0) {
	nofralloc
#include "asm/rel/d/a/d_a_izumi_gate/d_a_izumi_gate/daIzumiGate_Execute__FP13daIzumiGate_c.s"
}
#pragma pop


/* 80849158-80849160 0008+00 s=1 e=0 z=0  None .text      daIzumiGate_IsDelete__FP13daIzumiGate_c                      */
// True False
//  bool False
//  daIzumiGate_c* False
// 	 daIzumiGate_c False
static bool daIzumiGate_IsDelete(daIzumiGate_c* param_0) {
	return true;
}


/* 80849160-80849184 0024+00 s=1 e=0 z=0  None .text      daIzumiGate_Delete__FP13daIzumiGate_c                        */
//	8084916C: 800788DC (MoveBGDelete__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daIzumiGate_c* False
// 	 daIzumiGate_c False
asm static void daIzumiGate_Delete(daIzumiGate_c* param_0) {
	nofralloc
#include "asm/rel/d/a/d_a_izumi_gate/d_a_izumi_gate/daIzumiGate_Delete__FP13daIzumiGate_c.s"
}
#pragma pop


/* ############################################################################################## */
/* 80849408-80849438 002E+02 s=3 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80849408 = "M_IzmGate";
SECTION_DEAD char const* const stringBase_80849412 = "M_IzumiGate_b.dzb";
SECTION_DEAD char const* const stringBase_80849424 = "M_IzumiGate_b.bmd";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_80849436 = "\0";
#pragma pop

/* 80849438-8084943C 0004+00 s=3 e=0 z=0  None .data      l_arcName                                                    */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 8084943C-8084945C 0020+00 s=1 e=0 z=0  None .data      l_daIzumiGate_Method                                         */
SECTION_DATA static void* l_daIzumiGate_Method[8] = {
	(void*)daIzumiGate_Create__FP10fopAc_ac_c,
	(void*)daIzumiGate_Delete__FP13daIzumiGate_c,
	(void*)daIzumiGate_Execute__FP13daIzumiGate_c,
	(void*)daIzumiGate_IsDelete__FP13daIzumiGate_c,
	(void*)daIzumiGate_Draw__FP13daIzumiGate_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 8084945C-8084948C 0030+00 s=0 e=0 z=1  None .data      g_profile_Izumi_Gate                                         */
SECTION_DATA void* g_profile_Izumi_Gate[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0007FFFD,
	(void*)0x01570000,
	(void*)&g_fpcLf_Method,
	(void*)0x000005AC,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x00260000,
	(void*)&l_daIzumiGate_Method,
	(void*)0x00040000,
	(void*)0x000E0000,
};

/* 8084948C-808494B4 0028+00 s=1 e=0 z=0  None .data      __vt__13daIzumiGate_c                                        */
SECTION_DATA void* __vt__13daIzumiGate_c[10] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)CreateHeap__13daIzumiGate_cFv,
	(void*)Create__13daIzumiGate_cFv,
	(void*)Execute__13daIzumiGate_cFPPA3_A4_f,
	(void*)Draw__13daIzumiGate_cFv,
	(void*)Delete__13daIzumiGate_cFv,
	(void*)IsDelete__16dBgS_MoveBgActorFv,
	(void*)ToFore__16dBgS_MoveBgActorFv,
	(void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80849184-80849260 00DC+00 s=1 e=0 z=0  None .text      daIzumiGate_Create__FP10fopAc_ac_c                           */
//	808491AC: 80078624 (__ct__16dBgS_MoveBgActorFv)
//	808491B0: 8084948C (__vt__13daIzumiGate_c)
//	808491B4: 8084948C (__vt__13daIzumiGate_c)
//	808491CC: 80849438 (l_arcName)
//	808491D0: 80849438 (l_arcName)
//	808491D8: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	808491E4: 804061C0 (g_dComIfG_gameInfo)
//	808491E8: 804061C0 (g_dComIfG_gameInfo)
//	808491F0: 80849438 (l_arcName)
//	808491F4: 80849438 (l_arcName)
//	808491FC: 80849408 (stringBase0)
//	80849200: 80849408 (stringBase0)
//	8084920C: 8003C6B8 (getObjectResName2Index__14dRes_control_cFPCcPCc)
//	80849218: 80849438 (l_arcName)
//	8084921C: 80849438 (l_arcName)
//	80849224: 80075AD8 (dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz)
//	80849228: 80075AD8 (dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz)
//	80849234: 800787BC (MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
asm static void daIzumiGate_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/d_a_izumi_gate/d_a_izumi_gate/daIzumiGate_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80849260-808492D8 0078+00 s=1 e=0 z=0  None .text      CreateHeap__13daIzumiGate_cFv                                */
//	80849274: 80849438 (l_arcName)
//	80849278: 80849438 (l_arcName)
//	80849280: 80849408 (stringBase0)
//	80849284: 80849408 (stringBase0)
//	8084928C: 804061C0 (g_dComIfG_gameInfo)
//	80849290: 804061C0 (g_dComIfG_gameInfo)
//	808492A0: 8003C37C (getRes__14dRes_control_cFPCcPCcP11dRes_info_ci)
//	808492B0: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daIzumiGate_c::CreateHeap() {
	nofralloc
#include "asm/rel/d/a/d_a_izumi_gate/d_a_izumi_gate/CreateHeap__13daIzumiGate_cFv.s"
}
#pragma pop


/* 808492D8-808492FC 0024+00 s=1 e=0 z=0  None .text      Create__13daIzumiGate_cFv                                    */
//	808492E4: 80849098 (initBaseMtx__13daIzumiGate_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daIzumiGate_c::Create() {
	nofralloc
#include "asm/rel/d/a/d_a_izumi_gate/d_a_izumi_gate/Create__13daIzumiGate_cFv.s"
}
#pragma pop


/* 808492FC-80849328 002C+00 s=1 e=0 z=0  None .text      Execute__13daIzumiGate_cFPPA3_A4_f                           */
//	80849310: 808490B8 (setBaseMtx__13daIzumiGate_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  f32 (** )[3][4] False
// 	 f32 False
// 	 ** False
// 		 * False
// 			  False
asm void daIzumiGate_c::Execute(f32 (** param_0)[3][4]) {
	nofralloc
#include "asm/rel/d/a/d_a_izumi_gate/d_a_izumi_gate/Execute__13daIzumiGate_cFPPA3_A4_f.s"
}
#pragma pop


/* 80849328-808493CC 00A4+00 s=1 e=0 z=0  None .text      Draw__13daIzumiGate_cFv                                      */
//	80849340: 8042CA54 (g_env_light)
//	80849344: 8042CA54 (g_env_light)
//	80849354: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80849358: 8042CA54 (g_env_light)
//	8084935C: 8042CA54 (g_env_light)
//	8084936C: 801A4DA0 (setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c)
//	80849370: 804061C0 (g_dComIfG_gameInfo)
//	80849374: 804061C0 (g_dComIfG_gameInfo)
//	8084937C: 80434AC8 (j3dSys)
//	80849380: 80434AC8 (j3dSys)
//	80849394: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
//	80849398: 804061C0 (g_dComIfG_gameInfo)
//	8084939C: 804061C0 (g_dComIfG_gameInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daIzumiGate_c::Draw() {
	nofralloc
#include "asm/rel/d/a/d_a_izumi_gate/d_a_izumi_gate/Draw__13daIzumiGate_cFv.s"
}
#pragma pop


/* 808493CC-80849400 0034+00 s=1 e=0 z=0  None .text      Delete__13daIzumiGate_cFv                                    */
//	808493D8: 80849438 (l_arcName)
//	808493DC: 80849438 (l_arcName)
//	808493E8: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daIzumiGate_c::Delete() {
	nofralloc
#include "asm/rel/d/a/d_a_izumi_gate/d_a_izumi_gate/Delete__13daIzumiGate_cFv.s"
}
#pragma pop


