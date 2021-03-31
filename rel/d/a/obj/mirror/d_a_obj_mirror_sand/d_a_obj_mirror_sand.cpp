// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_mirror_sand
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/mirror/d_a_obj_mirror_sand/d_a_obj_mirror_sand.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct cXyz {
};

struct csXyz {
};

struct mDoMtx_stack_c {
	/* 8000CD64 */ // False False
//  cXyz const& False
// 	 cXyz const False
// 		 cXyz False
void transS(cXyz const&);
	/* 8000CF44 */ // False False
//  csXyz const& False
// 	 csXyz const False
// 		 csXyz False
void ZXYrotM(csXyz const&);
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
	/* 80018B64 */ // False False
fopAc_ac_c();
	/* 80018C8C */ // False False
~fopAc_ac_c();
};

struct daObjMirrorSand_c {
	/* 80C98508 */ // True False
void initBaseMtx();
	/* 80C98534 */ // True False
void setBaseMtx();
};

struct dSv_info_c {
	/* 80035360 */ // False False
//  int False
//  int False
void isSwitch(int, int) const;
};

struct dSv_event_c {
	/* 800349BC */ // False False
//  u16 False
void isEventBit(u16) const;
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

struct dBgW_Base {
};

struct dBgW {
	/* 8007B970 */ // False False
dBgW();
	/* 8007B9C0 */ // False False
void Move();
	/* 80C987B8 */ // True False
~dBgW();
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
	/* 8007933C */ // False False
~cBgW();
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

struct J3DModel {
};

struct J3DFrameCtrl {
	/* 803283FC */ // False False
//  s16 False
void init(s16);
	/* 80C984C0 */ // True False
~J3DFrameCtrl();
};

// 
// Forward References:
// 

// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
static void createSolidHeap(fopAc_ac_c*);
// True False
//  daObjMirrorSand_c* False
// 	 daObjMirrorSand_c False
static void daObjMirrorSand_Draw(daObjMirrorSand_c*);
// True False
//  daObjMirrorSand_c* False
// 	 daObjMirrorSand_c False
static void daObjMirrorSand_Execute(daObjMirrorSand_c*);
// True False
//  bool False
//  daObjMirrorSand_c* False
// 	 daObjMirrorSand_c False
static bool daObjMirrorSand_IsDelete(daObjMirrorSand_c*);
// True False
//  daObjMirrorSand_c* False
// 	 daObjMirrorSand_c False
static void daObjMirrorSand_Delete(daObjMirrorSand_c*);
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
static void daObjMirrorSand_Create(fopAc_ac_c*);

// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" static void createSolidHeap__FP10fopAc_ac_c();
// True False
extern "C" void __dt__12J3DFrameCtrlFv();
// True False
extern "C" void initBaseMtx__17daObjMirrorSand_cFv();
// True False
extern "C" void setBaseMtx__17daObjMirrorSand_cFv();
// True False
//  daObjMirrorSand_c* False
// 	 daObjMirrorSand_c False
extern "C" static void daObjMirrorSand_Draw__FP17daObjMirrorSand_c();
// True False
//  daObjMirrorSand_c* False
// 	 daObjMirrorSand_c False
extern "C" static void daObjMirrorSand_Execute__FP17daObjMirrorSand_c();
// True False
//  bool False
//  daObjMirrorSand_c* False
// 	 daObjMirrorSand_c False
extern "C" static bool daObjMirrorSand_IsDelete__FP17daObjMirrorSand_c();
// True False
//  daObjMirrorSand_c* False
// 	 daObjMirrorSand_c False
extern "C" static void daObjMirrorSand_Delete__FP17daObjMirrorSand_c();
// True False
extern "C" void __dt__4dBgWFv();
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" static void daObjMirrorSand_Create__FP10fopAc_ac_c();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_MirrorSand[12];
extern "C" extern void* __vt__12J3DFrameCtrl[3];

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
//  cXyz const& False
// 	 cXyz const False
// 		 cXyz False
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
// False False
//  csXyz const& False
// 	 csXyz const False
// 		 csXyz False
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
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
extern "C" void __ct__10fopAc_ac_cFv();
// False False
extern "C" void __dt__10fopAc_ac_cFv();
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
//  u16 False
extern "C" void isEventBit__11dSv_event_cCFUs();
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
extern "C" void __dt__4cBgWFv();
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
extern "C" void ChkUsed__9cBgW_BgIdCFv();
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
extern "C" void __destroy_arr();
// False False
extern "C" void __construct_array();
// False False
extern "C" void _savegpr_27();
// False False
extern "C" void _savegpr_28();
// False False
extern "C" void _restgpr_27();
// False False
extern "C" void _restgpr_28();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern void* __vt__4dBgW[65];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80C989D8-80C989DC 0004+00 s=1 e=0 z=0  None .rodata    @3729                                                        */
SECTION_RODATA static u32 const lit_3729 = 0x3F800000;

/* 80C989DC-80C989E0 0004+00 s=3 e=0 z=0  None .rodata    @3730                                                        */
SECTION_RODATA static u8 const lit_3730[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80C989E0-80C989E8 0008+00 s=1 e=0 z=0  None .rodata    @3732                                                        */
SECTION_RODATA static u8 const lit_3732[8] = {
	0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80C989E8-80C989F0 0008+00 s=1 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80C989E8 = "MR-Sand";
#pragma pop

/* 80C989F0-80C989F4 0004+00 s=3 e=0 z=0  None .data      l_arcName                                                    */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80C989F4-80C98A14 0020+00 s=1 e=0 z=0  None .data      l_daObjMirrorSand_Method                                     */
SECTION_DATA static void* l_daObjMirrorSand_Method[8] = {
	(void*)daObjMirrorSand_Create__FP10fopAc_ac_c,
	(void*)daObjMirrorSand_Delete__FP17daObjMirrorSand_c,
	(void*)daObjMirrorSand_Execute__FP17daObjMirrorSand_c,
	(void*)daObjMirrorSand_IsDelete__FP17daObjMirrorSand_c,
	(void*)daObjMirrorSand_Draw__FP17daObjMirrorSand_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80C98A14-80C98A44 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_MirrorSand                                     */
SECTION_DATA void* g_profile_Obj_MirrorSand[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0003FFFD,
	(void*)0x00AF0000,
	(void*)&g_fpcLf_Method,
	(void*)0x0000072C,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x02A70000,
	(void*)&l_daObjMirrorSand_Method,
	(void*)0x00040000,
	(void*)0x000E0000,
};

/* 80C98A44-80C98A50 000C+00 s=2 e=0 z=0  None .data      __vt__12J3DFrameCtrl                                         */
SECTION_DATA void* __vt__12J3DFrameCtrl[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__12J3DFrameCtrlFv,
};

/* 80C981D8-80C984C0 02E8+00 s=1 e=0 z=0  None .text      createSolidHeap__FP10fopAc_ac_c                              */
//	80C981E8: 803621D4 (_savegpr_27)
//	80C981F0: 80C989F0 (l_arcName)
//	80C981F4: 80C989F0 (l_arcName)
//	80C98200: 804061C0 (g_dComIfG_gameInfo)
//	80C98204: 804061C0 (g_dComIfG_gameInfo)
//	80C98218: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80C98228: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
//	80C98244: 80C989F0 (l_arcName)
//	80C98248: 80C989F0 (l_arcName)
//	80C9825C: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80C98268: 802CEC4C (__nw__FUl)
//	80C98274: 80C98A44 (__vt__12J3DFrameCtrl)
//	80C98278: 80C98A44 (__vt__12J3DFrameCtrl)
//	80C98284: 803283FC (init__12J3DFrameCtrlFs)
//	80C9829C: 804061C0 (g_dComIfG_gameInfo)
//	80C982A0: 804061C0 (g_dComIfG_gameInfo)
//	80C982B4: 80035360 (isSwitch__10dSv_info_cCFii)
//	80C982C0: 804061C0 (g_dComIfG_gameInfo)
//	80C982C4: 804061C0 (g_dComIfG_gameInfo)
//	80C982CC: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	80C982D0: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	80C982D8: 800349BC (isEventBit__11dSv_event_cCFUs)
//	80C982F0: 804061C0 (g_dComIfG_gameInfo)
//	80C982F4: 804061C0 (g_dComIfG_gameInfo)
//	80C982FC: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	80C98300: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	80C98308: 800349BC (isEventBit__11dSv_event_cCFUs)
//	80C98320: 80C989D8 (lit_3729)
//	80C98324: 80C989D8 (lit_3729)
//	80C9832C: 80C989DC (lit_3730)
//	80C98330: 80C989DC (lit_3730)
//	80C98358: 8000D7DC (init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb)
//	80C98374: 804061C0 (g_dComIfG_gameInfo)
//	80C98378: 804061C0 (g_dComIfG_gameInfo)
//	80C9838C: 80035360 (isSwitch__10dSv_info_cCFii)
//	80C98398: 804061C0 (g_dComIfG_gameInfo)
//	80C9839C: 804061C0 (g_dComIfG_gameInfo)
//	80C983A4: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	80C983A8: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	80C983B0: 800349BC (isEventBit__11dSv_event_cCFUs)
//	80C983C8: 804061C0 (g_dComIfG_gameInfo)
//	80C983CC: 804061C0 (g_dComIfG_gameInfo)
//	80C983D4: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	80C983D8: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	80C983E0: 800349BC (isEventBit__11dSv_event_cCFUs)
//	80C983FC: 80C989E0 (lit_3732)
//	80C98400: 80C989E0 (lit_3732)
//	80C98424: 80C989F0 (l_arcName)
//	80C98428: 80C989F0 (l_arcName)
//	80C9843C: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80C98450: 80079F38 (Set__4cBgWFP6cBgD_tUlPA3_A4_f)
//	80C98464: 80C989F0 (l_arcName)
//	80C98468: 80C989F0 (l_arcName)
//	80C9847C: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80C98490: 80079F38 (Set__4cBgWFP6cBgD_tUlPA3_A4_f)
//	80C984AC: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
asm static void createSolidHeap(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_sand/d_a_obj_mirror_sand/createSolidHeap__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80C984C0-80C98508 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv                                       */
//	80C984D8: 80C98A44 (__vt__12J3DFrameCtrl)
//	80C984DC: 80C98A44 (__vt__12J3DFrameCtrl)
//	80C984EC: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm J3DFrameCtrl::~J3DFrameCtrl() {
	nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_sand/d_a_obj_mirror_sand/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop


/* 80C98508-80C98534 002C+00 s=1 e=0 z=0  None .text      initBaseMtx__17daObjMirrorSand_cFv                           */
//	80C98520: 80C98534 (setBaseMtx__17daObjMirrorSand_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjMirrorSand_c::initBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_sand/d_a_obj_mirror_sand/initBaseMtx__17daObjMirrorSand_cFv.s"
}
#pragma pop


/* 80C98534-80C98598 0064+00 s=1 e=0 z=0  None .text      setBaseMtx__17daObjMirrorSand_cFv                            */
//	80C9854C: 8000CD64 (transS__14mDoMtx_stack_cFRC4cXyz)
//	80C98554: 8000CF44 (ZXYrotM__14mDoMtx_stack_cFRC5csXyz)
//	80C98558: 803DD470 (now__14mDoMtx_stack_c)
//	80C9855C: 803DD470 (now__14mDoMtx_stack_c)
//	80C98568: 803464B0 (PSMTXCopy)
//	80C9856C: 803DD470 (now__14mDoMtx_stack_c)
//	80C98570: 803DD470 (now__14mDoMtx_stack_c)
//	80C98578: 803464B0 (PSMTXCopy)
//	80C98580: 8007B9C0 (Move__4dBgWFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjMirrorSand_c::setBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_sand/d_a_obj_mirror_sand/setBaseMtx__17daObjMirrorSand_cFv.s"
}
#pragma pop


/* 80C98598-80C98668 00D0+00 s=1 e=0 z=0  None .text      daObjMirrorSand_Draw__FP17daObjMirrorSand_c                  */
//	80C985B0: 8042CA54 (g_env_light)
//	80C985B4: 8042CA54 (g_env_light)
//	80C985C4: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80C985C8: 8042CA54 (g_env_light)
//	80C985CC: 8042CA54 (g_env_light)
//	80C985DC: 801A4DA0 (setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c)
//	80C985F0: 8000D9CC (entry__13mDoExt_bckAnmFP12J3DModelDataf)
//	80C985F4: 804061C0 (g_dComIfG_gameInfo)
//	80C985F8: 804061C0 (g_dComIfG_gameInfo)
//	80C98600: 80434AC8 (j3dSys)
//	80C98604: 80434AC8 (j3dSys)
//	80C98618: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
//	80C9861C: 804061C0 (g_dComIfG_gameInfo)
//	80C98620: 804061C0 (g_dComIfG_gameInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daObjMirrorSand_c* False
// 	 daObjMirrorSand_c False
asm static void daObjMirrorSand_Draw(daObjMirrorSand_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_sand/d_a_obj_mirror_sand/daObjMirrorSand_Draw__FP17daObjMirrorSand_c.s"
}
#pragma pop


/* 80C98668-80C98700 0098+00 s=1 e=0 z=0  None .text      daObjMirrorSand_Execute__FP17daObjMirrorSand_c               */
//	80C98684: 8000D428 (play__14mDoExt_baseAnmFv)
//	80C986A0: 80C989DC (lit_3730)
//	80C986A4: 80C989DC (lit_3730)
//	80C986B0: 804061C0 (g_dComIfG_gameInfo)
//	80C986B4: 804061C0 (g_dComIfG_gameInfo)
//	80C986C0: 80074250 (Release__4cBgSFP9dBgW_Base)
//	80C986D0: 80074A08 (Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c)
//	80C986E0: 8007B9C0 (Move__4dBgWFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daObjMirrorSand_c* False
// 	 daObjMirrorSand_c False
asm static void daObjMirrorSand_Execute(daObjMirrorSand_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_sand/d_a_obj_mirror_sand/daObjMirrorSand_Execute__FP17daObjMirrorSand_c.s"
}
#pragma pop


/* 80C98700-80C98708 0008+00 s=1 e=0 z=0  None .text      daObjMirrorSand_IsDelete__FP17daObjMirrorSand_c              */
// True False
//  bool False
//  daObjMirrorSand_c* False
// 	 daObjMirrorSand_c False
static bool daObjMirrorSand_IsDelete(daObjMirrorSand_c* param_0) {
	return true;
}


/* 80C98708-80C987B8 00B0+00 s=1 e=0 z=0  None .text      daObjMirrorSand_Delete__FP17daObjMirrorSand_c                */
//	80C98724: 802681D4 (ChkUsed__9cBgW_BgIdCFv)
//	80C98730: 804061C0 (g_dComIfG_gameInfo)
//	80C98734: 804061C0 (g_dComIfG_gameInfo)
//	80C98740: 80074250 (Release__4cBgSFP9dBgW_Base)
//	80C98748: 802681D4 (ChkUsed__9cBgW_BgIdCFv)
//	80C98754: 804061C0 (g_dComIfG_gameInfo)
//	80C98758: 804061C0 (g_dComIfG_gameInfo)
//	80C98764: 80074250 (Release__4cBgSFP9dBgW_Base)
//	80C9876C: 80C989F0 (l_arcName)
//	80C98770: 80C989F0 (l_arcName)
//	80C98778: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
//	80C98780: 80C987B8 (__dt__4dBgWFv)
//	80C98784: 80C987B8 (__dt__4dBgWFv)
//	80C98790: 80361CE8 (__destroy_arr)
//	80C9879C: 80018C8C (__dt__10fopAc_ac_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daObjMirrorSand_c* False
// 	 daObjMirrorSand_c False
asm static void daObjMirrorSand_Delete(daObjMirrorSand_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_sand/d_a_obj_mirror_sand/daObjMirrorSand_Delete__FP17daObjMirrorSand_c.s"
}
#pragma pop


/* 80C987B8-80C98818 0060+00 s=2 e=0 z=0  None .text      __dt__4dBgWFv                                                */
//	80C987D8: 803ABA80 (__vt__4dBgW)
//	80C987DC: 803ABA80 (__vt__4dBgW)
//	80C987E8: 8007933C (__dt__4cBgWFv)
//	80C987F8: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm dBgW::~dBgW() {
	nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_sand/d_a_obj_mirror_sand/__dt__4dBgWFv.s"
}
#pragma pop


/* 80C98818-80C989D0 01B8+00 s=1 e=0 z=0  None .text      daObjMirrorSand_Create__FP10fopAc_ac_c                       */
//	80C98828: 803621D8 (_savegpr_28)
//	80C98848: 80018B64 (__ct__10fopAc_ac_cFv)
//	80C98850: 8007B970 (__ct__4dBgWFv)
//	80C98854: 8007B970 (__ct__4dBgWFv)
//	80C98858: 80C987B8 (__dt__4dBgWFv)
//	80C9885C: 80C987B8 (__dt__4dBgWFv)
//	80C98868: 80361D60 (__construct_array)
//	80C9887C: 80C989F0 (l_arcName)
//	80C98880: 80C989F0 (l_arcName)
//	80C98888: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80C9889C: 80C981D8 (createSolidHeap__FP10fopAc_ac_c)
//	80C988A0: 80C981D8 (createSolidHeap__FP10fopAc_ac_c)
//	80C988A8: 8001A4B0 (fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl)
//	80C988C8: 8001A578 (fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData)
//	80C988CC: 80C989DC (lit_3730)
//	80C988D0: 80C989DC (lit_3730)
//	80C98900: 804061C0 (g_dComIfG_gameInfo)
//	80C98904: 804061C0 (g_dComIfG_gameInfo)
//	80C98918: 80035360 (isSwitch__10dSv_info_cCFii)
//	80C98924: 804061C0 (g_dComIfG_gameInfo)
//	80C98928: 804061C0 (g_dComIfG_gameInfo)
//	80C98930: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	80C98934: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	80C9893C: 800349BC (isEventBit__11dSv_event_cCFUs)
//	80C98954: 804061C0 (g_dComIfG_gameInfo)
//	80C98958: 804061C0 (g_dComIfG_gameInfo)
//	80C98960: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	80C98964: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	80C9896C: 800349BC (isEventBit__11dSv_event_cCFUs)
//	80C98994: 804061C0 (g_dComIfG_gameInfo)
//	80C98998: 804061C0 (g_dComIfG_gameInfo)
//	80C989A8: 80074A08 (Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c)
//	80C989B0: 80C98508 (initBaseMtx__17daObjMirrorSand_cFv)
//	80C989BC: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
asm static void daObjMirrorSand_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_sand/d_a_obj_mirror_sand/daObjMirrorSand_Create__FP10fopAc_ac_c.s"
}
#pragma pop


