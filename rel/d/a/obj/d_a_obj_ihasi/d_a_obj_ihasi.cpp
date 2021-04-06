//
// Generated By: dol2asm
// Translation Unit: d_a_obj_ihasi
//

#include "rel/d/a/obj/d_a_obj_ihasi/d_a_obj_ihasi.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct obj_ihasi_class {};

struct mDoMtx_stack_c {
    /* 8000CD9C */ void transM(f32, f32, f32);
};

struct J3DMaterialTable {};

struct J3DAnmTextureSRTKey {};

struct mDoExt_btkAnm {
    /* 8000D63C */ void init(J3DMaterialTable*, J3DAnmTextureSRTKey*, int, int, f32, s16, s16);
    /* 8000D6D8 */ void entry(J3DMaterialTable*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct dSv_event_c {
    /* 8003498C */ void onEventBit(u16);
    /* 800349BC */ void isEventBit(u16) const;
};

struct J3DModelData {};

struct dKy_tevstr_c {};

struct cXyz {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dBgW_Base {};

struct dBgW {
    /* 8007B970 */ dBgW();
    /* 8007B9C0 */ void Move();
};

struct dBgS {
    /* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct csXyz {};

struct cBgD_t {};

struct cBgW {
    /* 80079F38 */ void Set(cBgD_t*, u32, f32 (*)[3][4]);
};

struct cBgS_PolyInfo {};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80C264F8 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

extern "C" static void daObj_Ihasi_Draw__FP15obj_ihasi_class();
extern "C" static void ih_normal__FP15obj_ihasi_class();
extern "C" static void ih_disappear__FP15obj_ihasi_class();
extern "C" static void action__FP15obj_ihasi_class();
extern "C" static void daObj_Ihasi_Execute__FP15obj_ihasi_class();
extern "C" static bool daObj_Ihasi_IsDelete__FP15obj_ihasi_class();
extern "C" static void daObj_Ihasi_Delete__FP15obj_ihasi_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daObj_Ihasi_Create__FP10fopAc_ac_c();
extern "C" extern char const* const d_a_obj_ihasi__stringBase0;

//
// External References:
//

extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void onEventBit__11dSv_event_cFUs();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cM_rndF__Ff();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void strcmp();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];

//
// Declarations:
//

/* 80C26018-80C2611C 000078 0104+00 1/0 0/0 0/0 .text daObj_Ihasi_Draw__FP15obj_ihasi_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Ihasi_Draw(obj_ihasi_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ihasi/d_a_obj_ihasi/daObj_Ihasi_Draw__FP15obj_ihasi_class.s"
}
#pragma pop

/* 80C2611C-80C26120 00017C 0004+00 1/1 0/0 0/0 .text            ih_normal__FP15obj_ihasi_class */
static void ih_normal(obj_ihasi_class* param_0) {
    /* empty function */
}

/* 80C26120-80C26124 000180 0004+00 1/1 0/0 0/0 .text            ih_disappear__FP15obj_ihasi_class
 */
static void ih_disappear(obj_ihasi_class* param_0) {
    /* empty function */
}

/* ############################################################################################## */
/* 80C26888-80C2688C 000000 0004+00 2/2 0/0 0/0 .rodata          @3841 */
SECTION_RODATA static u32 const lit_3841 = 0x4707F000;
SECTION_DEAD void* const cg_80C26888 = (void*)(&lit_3841);

/* 80C2688C-80C26890 000004 0004+00 0/2 0/0 0/0 .rodata          @3842 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3842 = 0xC3960000;
SECTION_DEAD void* const cg_80C2688C = (void*)(&lit_3842);
#pragma pop

/* 80C26890-80C26894 000008 0004+00 0/2 0/0 0/0 .rodata          @3843 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3843 = 0xC6D0DE00;
SECTION_DEAD void* const cg_80C26890 = (void*)(&lit_3843);
#pragma pop

/* 80C26124-80C26204 000184 00E0+00 1/1 0/0 0/0 .text            action__FP15obj_ihasi_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void action(obj_ihasi_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ihasi/d_a_obj_ihasi/action__FP15obj_ihasi_class.s"
}
#pragma pop

/* 80C26204-80C262C4 000264 00C0+00 2/1 0/0 0/0 .text daObj_Ihasi_Execute__FP15obj_ihasi_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Ihasi_Execute(obj_ihasi_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ihasi/d_a_obj_ihasi/daObj_Ihasi_Execute__FP15obj_ihasi_class.s"
}
#pragma pop

/* 80C262C4-80C262CC 000324 0008+00 1/0 0/0 0/0 .text daObj_Ihasi_IsDelete__FP15obj_ihasi_class */
static bool daObj_Ihasi_IsDelete(obj_ihasi_class* param_0) {
    return true;
}

/* 80C262CC-80C26324 00032C 0058+00 1/0 0/0 0/0 .text daObj_Ihasi_Delete__FP15obj_ihasi_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Ihasi_Delete(obj_ihasi_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ihasi/d_a_obj_ihasi/daObj_Ihasi_Delete__FP15obj_ihasi_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C26894-80C26898 00000C 0004+00 1/1 0/0 0/0 .rodata          @3922 */
SECTION_RODATA static u32 const lit_3922 = 0x3F800000;
SECTION_DEAD void* const cg_80C26894 = (void*)(&lit_3922);

/* 80C268D8-80C268F8 -00001 0020+00 1/0 0/0 0/0 .data            l_daObj_Ihasi_Method */
SECTION_DATA static void* l_daObj_Ihasi_Method[8] = {
    (void*)daObj_Ihasi_Create__FP10fopAc_ac_c,
    (void*)daObj_Ihasi_Delete__FP15obj_ihasi_class,
    (void*)daObj_Ihasi_Execute__FP15obj_ihasi_class,
    (void*)daObj_Ihasi_IsDelete__FP15obj_ihasi_class,
    (void*)daObj_Ihasi_Draw__FP15obj_ihasi_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C268F8-80C26928 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_OBJ_IHASI */
SECTION_DATA extern void* g_profile_OBJ_IHASI[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00DE0000, (void*)&g_fpcLf_Method,
    (void*)0x000005C4, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02150000, (void*)&l_daObj_Ihasi_Method,
    (void*)0x00044000, (void*)0x000E0000,
};

/* 80C26928-80C26934 000050 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80C26324-80C264F8 000384 01D4+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ihasi/d_a_obj_ihasi/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C264F8-80C26540 000558 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ihasi/d_a_obj_ihasi/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C26898-80C2689C 000010 0004+00 0/1 0/0 0/0 .rodata          @4021 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4021 = 0x4707BE00;
SECTION_DEAD void* const cg_80C26898 = (void*)(&lit_4021);
#pragma pop

/* 80C2689C-80C268A0 000014 0004+00 0/1 0/0 0/0 .rodata          @4022 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4022 = 0xC72BE000;
SECTION_DEAD void* const cg_80C2689C = (void*)(&lit_4022);
#pragma pop

/* 80C268A0-80C268A4 000018 0004+00 0/1 0/0 0/0 .rodata          @4023 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4023 = 0x4709B200;
SECTION_DEAD void* const cg_80C268A0 = (void*)(&lit_4023);
#pragma pop

/* 80C268A4-80C268A8 00001C 0004+00 0/1 0/0 0/0 .rodata          @4024 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4024 = 0xC729EC00;
SECTION_DEAD void* const cg_80C268A4 = (void*)(&lit_4024);
#pragma pop

/* 80C268A8-80C268AC 000020 0004+00 0/1 0/0 0/0 .rodata          @4025 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4025 = 0x4705CA00;
SECTION_DEAD void* const cg_80C268A8 = (void*)(&lit_4025);
#pragma pop

/* 80C268AC-80C268B0 000024 0004+00 0/1 0/0 0/0 .rodata          @4026 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4026 = 0x47800000;
SECTION_DEAD void* const cg_80C268AC = (void*)(&lit_4026);
#pragma pop

/* 80C268B0-80C268B4 000028 0004+00 0/1 0/0 0/0 .rodata          @4027 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4027 = 0x45B22000;
SECTION_DEAD void* const cg_80C268B0 = (void*)(&lit_4027);
#pragma pop

/* 80C268B4-80C268B8 00002C 0004+00 0/1 0/0 0/0 .rodata          @4028 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4028 = 0xC6ED0800;
SECTION_DEAD void* const cg_80C268B4 = (void*)(&lit_4028);
#pragma pop

/* 80C268B8-80C268BC 000030 0004+00 0/1 0/0 0/0 .rodata          @4029 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4029 = 0x47090F00;
SECTION_DEAD void* const cg_80C268B8 = (void*)(&lit_4029);
#pragma pop

/* 80C268BC-80C268C0 000034 0004+00 0/1 0/0 0/0 .rodata          @4030 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4030 = 0xC6E96E00;
SECTION_DEAD void* const cg_80C268BC = (void*)(&lit_4030);
#pragma pop

/* 80C268C0-80C268C4 000038 0004+00 0/1 0/0 0/0 .rodata          @4031 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4031 = 0x4706C400;
SECTION_DEAD void* const cg_80C268C0 = (void*)(&lit_4031);
#pragma pop

/* 80C26540-80C26880 0005A0 0340+00 1/0 0/0 0/0 .text            daObj_Ihasi_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Ihasi_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ihasi/d_a_obj_ihasi/daObj_Ihasi_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C268C4-80C268D6 00003C 0012+00 3/3 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80C268C4 = "Obj_ihasi";
SECTION_DEAD static char const* const stringBase_80C268CE = "F_SP121";
#pragma pop
