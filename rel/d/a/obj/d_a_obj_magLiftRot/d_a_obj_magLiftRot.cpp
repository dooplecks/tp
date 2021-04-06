//
// Generated By: dol2asm
// Translation Unit: d_a_obj_magLiftRot
//

#include "rel/d/a/obj/d_a_obj_magLiftRot/d_a_obj_magLiftRot.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    /* 8000CD9C */ void transM(f32, f32, f32);
    /* 8000CE38 */ void scaleM(f32, f32, f32);
};

struct mDoHIO_entry_c {
    /* 80C8E9E0 */ ~mDoHIO_entry_c();
};

struct J3DMaterialTable {};

struct J3DAnmTextureSRTKey {};

struct mDoExt_btkAnm {
    /* 8000D63C */ void init(J3DMaterialTable*, J3DAnmTextureSRTKey*, int, int, f32, s16, s16);
    /* 8000D6D8 */ void entry(J3DMaterialTable*, f32);
};

struct J3DAnmTevRegKey {};

struct mDoExt_brkAnm {
    /* 8000D70C */ void init(J3DMaterialTable*, J3DAnmTevRegKey*, int, int, f32, s16, s16);
    /* 8000D7A8 */ void entry(J3DMaterialTable*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct fopAc_ac_c {};

struct daMagLiftRot_c {
    /* 80C8EA28 */ void setBaseMtx();
    /* 80C8EB1C */ void CreateHeap();
    /* 80C8EC64 */ void create();
    /* 80C8EF94 */ void Execute(f32 (**)[3][4]);
    /* 80C8F02C */ void moveLift();
    /* 80C8F264 */ void init_modeMove();
    /* 80C8F4A0 */ void modeMove();
    /* 80C8F538 */ void init_modeWait();
    /* 80C8F7CC */ void modeWait();
    /* 80C8F804 */ void init_modeMoveWait();
    /* 80C8F810 */ void modeMoveWait();
    /* 80C8F86C */ void Draw();
    /* 80C8F970 */ void Delete();
};

struct daMagLiftRot_HIO_c {
    /* 80C8E94C */ daMagLiftRot_HIO_c();
    /* 80C8FA3C */ ~daMagLiftRot_HIO_c();
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
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

struct dBgW {};

struct csXyz {};

struct cBgS_PolyInfo {};

struct dBgS_MoveBgActor {
    /* 80078624 */ dBgS_MoveBgActor();
    /* 80078690 */ bool Create();
    /* 800786B0 */ bool IsDelete();
    /* 800786B8 */ bool ToFore();
    /* 800786C0 */ bool ToBack();
    /* 800787BC */ void MoveBGCreate(char const*, int,
                                     void (*)(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*,
                                              csXyz*, csXyz*),
                                     u32, f32 (*)[3][4]);
    /* 800788DC */ void MoveBGDelete();
    /* 80078950 */ void MoveBGExecute();
};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80C8EF4C */ ~J3DFrameCtrl();
};

//
// Forward References:
//

extern "C" void __ct__18daMagLiftRot_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__14daMagLiftRot_cFv();
extern "C" void CreateHeap__14daMagLiftRot_cFv();
extern "C" void create__14daMagLiftRot_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void Execute__14daMagLiftRot_cFPPA3_A4_f();
extern "C" void moveLift__14daMagLiftRot_cFv();
extern "C" void init_modeMove__14daMagLiftRot_cFv();
extern "C" void modeMove__14daMagLiftRot_cFv();
extern "C" void init_modeWait__14daMagLiftRot_cFv();
extern "C" void modeWait__14daMagLiftRot_cFv();
extern "C" void init_modeMoveWait__14daMagLiftRot_cFv();
extern "C" void modeMoveWait__14daMagLiftRot_cFv();
extern "C" void Draw__14daMagLiftRot_cFv();
extern "C" void Delete__14daMagLiftRot_cFv();
extern "C" static void daMagLiftRot_Draw__FP14daMagLiftRot_c();
extern "C" static void daMagLiftRot_Execute__FP14daMagLiftRot_c();
extern "C" static void daMagLiftRot_Delete__FP14daMagLiftRot_c();
extern "C" static void daMagLiftRot_Create__FP10fopAc_ac_c();
extern "C" void __dt__18daMagLiftRot_HIO_cFv();
extern "C" void __sinit_d_a_obj_magLiftRot_cpp();
extern "C" extern char const* const d_a_obj_magLiftRot__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotS__FPA4_fsss();
extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool Create__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void cLib_addCalcAngleS__FPsssss();
extern "C" void cLib_chaseF__FPfff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void PSVECAdd();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80C8FAE8-80C8FAEC 000000 0004+00 6/6 0/0 0/0 .rodata          @3627 */
SECTION_RODATA static u8 const lit_3627[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
SECTION_DEAD void* const cg_80C8FAE8 = (void*)(&lit_3627);

/* 80C8FAEC-80C8FAF0 000004 0004+00 0/1 0/0 0/0 .rodata          @3628 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3628 = 0x3D4CCCCD;
SECTION_DEAD void* const cg_80C8FAEC = (void*)(&lit_3628);
#pragma pop

/* 80C8FAF0-80C8FAF4 000008 0004+00 0/1 0/0 0/0 .rodata          @3629 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3629 = 0x41000000;
SECTION_DEAD void* const cg_80C8FAF0 = (void*)(&lit_3629);
#pragma pop

/* 80C8FAF4-80C8FAF8 00000C 0004+00 0/1 0/0 0/0 .rodata          @3630 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3630 = 0x43480000;
SECTION_DEAD void* const cg_80C8FAF4 = (void*)(&lit_3630);
#pragma pop

/* 80C8FAF8-80C8FAFC 000010 0004+00 0/1 0/0 0/0 .rodata          @3631 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3631 = 0x42340000;
SECTION_DEAD void* const cg_80C8FAF8 = (void*)(&lit_3631);
#pragma pop

/* 80C8FAFC-80C8FB00 000014 0004+00 0/1 0/0 0/0 .rodata          @3632 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3632 = 0x3DCCCCCD;
SECTION_DEAD void* const cg_80C8FAFC = (void*)(&lit_3632);
#pragma pop

/* 80C8FB00-80C8FB04 000018 0004+00 0/1 0/0 0/0 .rodata          @3633 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3633 = 0x41200000;
SECTION_DEAD void* const cg_80C8FB00 = (void*)(&lit_3633);
#pragma pop

/* 80C8FB04-80C8FB08 00001C 0004+00 1/7 0/0 0/0 .rodata          @3634 */
SECTION_RODATA static u32 const lit_3634 = 0x3F800000;
SECTION_DEAD void* const cg_80C8FB04 = (void*)(&lit_3634);

/* 80C8FB08-80C8FB0C 000020 0004+00 0/1 0/0 0/0 .rodata          @3635 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3635 = 0x40E00000;
SECTION_DEAD void* const cg_80C8FB08 = (void*)(&lit_3635);
#pragma pop

/* 80C8FB0C-80C8FB10 000024 0004+00 0/1 0/0 0/0 .rodata          @3636 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3636 = 0x42700000;
SECTION_DEAD void* const cg_80C8FB0C = (void*)(&lit_3636);
#pragma pop

/* 80C8FB10-80C8FB14 000028 0004+00 0/1 0/0 0/0 .rodata          @3637 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3637 = 0x41F00000;
SECTION_DEAD void* const cg_80C8FB10 = (void*)(&lit_3637);
#pragma pop

/* 80C8FB14-80C8FB18 00002C 0004+00 0/1 0/0 0/0 .rodata          @3638 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3638 = 0x3E99999A;
SECTION_DEAD void* const cg_80C8FB14 = (void*)(&lit_3638);
#pragma pop

/* 80C8FB90-80C8FB9C 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C8FB9C-80C8FBB0 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};
#pragma pop

/* 80C8FBB0-80C8FBBC -00001 000C+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName[3] = {
    (void*)&d_a_obj_magLiftRot__stringBase0,
    (void*)(((char*)&d_a_obj_magLiftRot__stringBase0) + 0x9),
    (void*)(((char*)&d_a_obj_magLiftRot__stringBase0) + 0x12),
};

/* 80C8FBBC-80C8FBC8 -00001 000C+00 0/1 0/0 0/0 .data            @3856 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3856[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeMove__14daMagLiftRot_cFv,
};
#pragma pop

/* 80C8FBC8-80C8FBD4 -00001 000C+00 0/1 0/0 0/0 .data            @3857 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3857[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__14daMagLiftRot_cFv,
};
#pragma pop

/* 80C8FBD4-80C8FBE0 -00001 000C+00 0/1 0/0 0/0 .data            @3858 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3858[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeMoveWait__14daMagLiftRot_cFv,
};
#pragma pop

/* 80C8FBE0-80C8FC04 000050 0024+00 0/1 0/0 0/0 .data            mode_proc$3855 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 mode_proc[36] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80C8FC04-80C8FC10 000074 000C+00 1/1 0/0 0/0 .data            selLabel$3897 */
SECTION_DATA static u8 selLabel_3897[12] = {
    0x00, 0x08, 0x01, 0x2F, 0x00, 0x08, 0x01, 0x31, 0x00, 0x08, 0x01, 0x33,
};

/* 80C8FC10-80C8FC1C 000080 000C+00 1/1 0/0 0/0 .data            selLabel$3963 */
SECTION_DATA static u8 selLabel_3963[12] = {
    0x00, 0x08, 0x01, 0x30, 0x00, 0x08, 0x01, 0x32, 0x00, 0x08, 0x01, 0x34,
};

/* 80C8FC1C-80C8FC3C -00001 0020+00 1/0 0/0 0/0 .data            l_daMagLiftRot_Method */
SECTION_DATA static void* l_daMagLiftRot_Method[8] = {
    (void*)daMagLiftRot_Create__FP10fopAc_ac_c,
    (void*)daMagLiftRot_Delete__FP14daMagLiftRot_c,
    (void*)daMagLiftRot_Execute__FP14daMagLiftRot_c,
    (void*)NULL,
    (void*)daMagLiftRot_Draw__FP14daMagLiftRot_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C8FC3C-80C8FC6C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_MagLiftRot */
SECTION_DATA extern void* g_profile_Obj_MagLiftRot[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00380000, (void*)&g_fpcLf_Method,
    (void*)0x00000634, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01ED0000, (void*)&l_daMagLiftRot_Method,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80C8FC6C-80C8FC78 0000DC 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80C8FC78-80C8FCA0 0000E8 0028+00 1/1 0/0 0/0 .data            __vt__14daMagLiftRot_c */
SECTION_DATA extern void* __vt__14daMagLiftRot_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__14daMagLiftRot_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__14daMagLiftRot_cFPPA3_A4_f,
    (void*)Draw__14daMagLiftRot_cFv,
    (void*)Delete__14daMagLiftRot_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C8FCA0-80C8FCAC 000110 000C+00 2/2 0/0 0/0 .data            __vt__18daMagLiftRot_HIO_c */
SECTION_DATA extern void* __vt__18daMagLiftRot_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__18daMagLiftRot_HIO_cFv,
};

/* 80C8FCAC-80C8FCB8 00011C 000C+00 3/3 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80C8E94C-80C8E9E0 0000EC 0094+00 1/1 0/0 0/0 .text            __ct__18daMagLiftRot_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daMagLiftRot_HIO_c::daMagLiftRot_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_magLiftRot/d_a_obj_magLiftRot/__ct__18daMagLiftRot_HIO_cFv.s"
}
#pragma pop

/* 80C8E9E0-80C8EA28 000180 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_magLiftRot/d_a_obj_magLiftRot/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 80C8EA28-80C8EB1C 0001C8 00F4+00 2/2 0/0 0/0 .text            setBaseMtx__14daMagLiftRot_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daMagLiftRot_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_magLiftRot/d_a_obj_magLiftRot/setBaseMtx__14daMagLiftRot_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C8FB18-80C8FB24 000030 000C+00 0/1 0/0 0/0 .rodata          l_bmdIdx */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_bmdIdx[12] = {
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x06,
};
SECTION_DEAD void* const cg_80C8FB18 = (void*)(&l_bmdIdx);
#pragma pop

/* 80C8FB24-80C8FB30 00003C 000C+00 0/1 0/0 0/0 .rodata          l_dzbIdx */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_dzbIdx[12] = {
    0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0F,
};
SECTION_DEAD void* const cg_80C8FB24 = (void*)(&l_dzbIdx);
#pragma pop

/* 80C8FB30-80C8FB3C 000048 000C+00 2/3 0/0 0/0 .rodata          l_btkIdx */
SECTION_RODATA static u8 const l_btkIdx[12] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x0C,
};
SECTION_DEAD void* const cg_80C8FB30 = (void*)(&l_btkIdx);

/* 80C8FB3C-80C8FB48 000054 000C+00 2/3 0/0 0/0 .rodata          l_brkIdx */
SECTION_RODATA static u8 const l_brkIdx[12] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x09,
};
SECTION_DEAD void* const cg_80C8FB3C = (void*)(&l_brkIdx);

/* 80C8EB1C-80C8EC64 0002BC 0148+00 1/0 0/0 0/0 .text            CreateHeap__14daMagLiftRot_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daMagLiftRot_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_magLiftRot/d_a_obj_magLiftRot/CreateHeap__14daMagLiftRot_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C8FB48-80C8FB50 000060 0004+04 0/1 0/0 0/0 .rodata          @3816 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3816[1 + 1 /* padding */] = {
    0x3F000000,
    /* padding */
    0x00000000,
};
SECTION_DEAD void* const cg_80C8FB48 = (void*)(&lit_3816);
#pragma pop

/* 80C8FB50-80C8FB58 000068 0008+00 0/1 0/0 0/0 .rodata          @3818 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3818[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80C8FB50 = (void*)(&lit_3818);
#pragma pop

/* 80C8EC64-80C8EF4C 000404 02E8+00 1/1 0/0 0/0 .text            create__14daMagLiftRot_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daMagLiftRot_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_magLiftRot/d_a_obj_magLiftRot/create__14daMagLiftRot_cFv.s"
}
#pragma pop

/* 80C8EF4C-80C8EF94 0006EC 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_magLiftRot/d_a_obj_magLiftRot/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80C8EF94-80C8F02C 000734 0098+00 1/0 0/0 0/0 .text            Execute__14daMagLiftRot_cFPPA3_A4_f
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daMagLiftRot_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_magLiftRot/d_a_obj_magLiftRot/Execute__14daMagLiftRot_cFPPA3_A4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C8FB58-80C8FB60 000070 0004+04 1/2 0/0 0/0 .rodata          @3882 */
SECTION_RODATA static u32 const lit_3882[1 + 1 /* padding */] = {
    0x43360B61,
    /* padding */
    0x00000000,
};
SECTION_DEAD void* const cg_80C8FB58 = (void*)(&lit_3882);

/* 80C8FB60-80C8FB68 000078 0008+00 0/1 0/0 0/0 .rodata          @3885 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3885[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80C8FB60 = (void*)(&lit_3885);
#pragma pop

/* 80C8FCC0-80C8FCCC 000008 000C+00 1/1 0/0 0/0 .bss             @3621 */
static u8 lit_3621[12];

/* 80C8FCCC-80C8FD0C 000014 0040+00 4/4 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[64];

/* 80C8FD0C-80C8FD10 000054 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_80C8FD0C[4];

/* 80C8F02C-80C8F264 0007CC 0238+00 1/1 0/0 0/0 .text            moveLift__14daMagLiftRot_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daMagLiftRot_c::moveLift() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_magLiftRot/d_a_obj_magLiftRot/moveLift__14daMagLiftRot_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C8FB68-80C8FB6C 000080 0004+00 0/2 0/0 0/0 .rodata          @3949 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3949 = 0xBF800000;
SECTION_DEAD void* const cg_80C8FB68 = (void*)(&lit_3949);
#pragma pop

/* 80C8FB6C-80C8FB70 000084 0004+00 0/2 0/0 0/0 .rodata          @3950 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3950 = 0x44BD6000;
SECTION_DEAD void* const cg_80C8FB6C = (void*)(&lit_3950);
#pragma pop

/* 80C8FB70-80C8FB74 000088 0004+00 0/2 0/0 0/0 .rodata          @3951 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3951 = 0xC4BD6000;
SECTION_DEAD void* const cg_80C8FB70 = (void*)(&lit_3951);
#pragma pop

/* 80C8F264-80C8F4A0 000A04 023C+00 1/1 0/0 0/0 .text            init_modeMove__14daMagLiftRot_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daMagLiftRot_c::init_modeMove() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_magLiftRot/d_a_obj_magLiftRot/init_modeMove__14daMagLiftRot_cFv.s"
}
#pragma pop

/* 80C8F4A0-80C8F538 000C40 0098+00 1/0 0/0 0/0 .text            modeMove__14daMagLiftRot_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daMagLiftRot_c::modeMove() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_magLiftRot/d_a_obj_magLiftRot/modeMove__14daMagLiftRot_cFv.s"
}
#pragma pop

/* 80C8F538-80C8F7CC 000CD8 0294+00 3/3 0/0 0/0 .text            init_modeWait__14daMagLiftRot_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daMagLiftRot_c::init_modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_magLiftRot/d_a_obj_magLiftRot/init_modeWait__14daMagLiftRot_cFv.s"
}
#pragma pop

/* 80C8F7CC-80C8F804 000F6C 0038+00 1/0 0/0 0/0 .text            modeWait__14daMagLiftRot_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daMagLiftRot_c::modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_magLiftRot/d_a_obj_magLiftRot/modeWait__14daMagLiftRot_cFv.s"
}
#pragma pop

/* 80C8F804-80C8F810 000FA4 000C+00 1/1 0/0 0/0 .text init_modeMoveWait__14daMagLiftRot_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daMagLiftRot_c::init_modeMoveWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_magLiftRot/d_a_obj_magLiftRot/init_modeMoveWait__14daMagLiftRot_cFv.s"
}
#pragma pop

/* 80C8F810-80C8F86C 000FB0 005C+00 1/0 0/0 0/0 .text            modeMoveWait__14daMagLiftRot_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daMagLiftRot_c::modeMoveWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_magLiftRot/d_a_obj_magLiftRot/modeMoveWait__14daMagLiftRot_cFv.s"
}
#pragma pop

/* 80C8F86C-80C8F970 00100C 0104+00 1/0 0/0 0/0 .text            Draw__14daMagLiftRot_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daMagLiftRot_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_magLiftRot/d_a_obj_magLiftRot/Draw__14daMagLiftRot_cFv.s"
}
#pragma pop

/* 80C8F970-80C8F9B0 001110 0040+00 1/0 0/0 0/0 .text            Delete__14daMagLiftRot_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daMagLiftRot_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_magLiftRot/d_a_obj_magLiftRot/Delete__14daMagLiftRot_cFv.s"
}
#pragma pop

/* 80C8F9B0-80C8F9DC 001150 002C+00 1/0 0/0 0/0 .text daMagLiftRot_Draw__FP14daMagLiftRot_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daMagLiftRot_Draw(daMagLiftRot_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_magLiftRot/d_a_obj_magLiftRot/daMagLiftRot_Draw__FP14daMagLiftRot_c.s"
}
#pragma pop

/* 80C8F9DC-80C8F9FC 00117C 0020+00 1/0 0/0 0/0 .text daMagLiftRot_Execute__FP14daMagLiftRot_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daMagLiftRot_Execute(daMagLiftRot_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_magLiftRot/d_a_obj_magLiftRot/daMagLiftRot_Execute__FP14daMagLiftRot_c.s"
}
#pragma pop

/* 80C8F9FC-80C8FA1C 00119C 0020+00 1/0 0/0 0/0 .text daMagLiftRot_Delete__FP14daMagLiftRot_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daMagLiftRot_Delete(daMagLiftRot_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_magLiftRot/d_a_obj_magLiftRot/daMagLiftRot_Delete__FP14daMagLiftRot_c.s"
}
#pragma pop

/* 80C8FA1C-80C8FA3C 0011BC 0020+00 1/0 0/0 0/0 .text            daMagLiftRot_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daMagLiftRot_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_magLiftRot/d_a_obj_magLiftRot/daMagLiftRot_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C8FA3C-80C8FA98 0011DC 005C+00 2/1 0/0 0/0 .text            __dt__18daMagLiftRot_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daMagLiftRot_HIO_c::~daMagLiftRot_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_magLiftRot/d_a_obj_magLiftRot/__dt__18daMagLiftRot_HIO_cFv.s"
}
#pragma pop

/* 80C8FA98-80C8FAD4 001238 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_magLiftRot_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_magLiftRot_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_magLiftRot/d_a_obj_magLiftRot/__sinit_d_a_obj_magLiftRot_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80C8FA98 = (void*)__sinit_d_a_obj_magLiftRot_cpp;
#pragma pop

/* 80C8FB74-80C8FB8F 00008C 001B+00 1/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80C8FB74 = "MagLiftS";
SECTION_DEAD static char const* const stringBase_80C8FB7D = "MagLiftM";
SECTION_DEAD static char const* const stringBase_80C8FB86 = "MagLiftL";
#pragma pop
