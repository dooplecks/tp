//
// Generated By: dol2asm
// Translation Unit: d_a_obj_tobyhouse
//

#include "rel/d/a/obj/d_a_obj_tobyhouse/d_a_obj_tobyhouse.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct csXyz {
    /* 802673F4 */ csXyz(s16, s16, s16);
};

struct mDoMtx_stack_c {
    /* 8000CF44 */ void ZXYrotM(csXyz const&);
};

struct J3DAnmTransform {};

struct J3DModelData {};

struct mDoExt_bckAnm {
    /* 8000D7DC */ void init(J3DAnmTransform*, int, int, f32, s16, s16, bool);
    /* 8000D9CC */ void entry(J3DModelData*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct fopAc_ac_c {};

struct cXyz {
    /* 80D17700 */ ~cXyz();
};

struct fopAcM_wt_c {
    /* 8001DD84 */ void waterCheck(cXyz const*);
};

struct daObjTobyHouse_c {
    /* 80D15F0C */ void initBaseMtx();
    /* 80D15F48 */ void setBaseMtx();
    /* 80D15FE0 */ void Create();
    /* 80D161A4 */ void CreateHeap();
    /* 80D163F0 */ void create1st();
    /* 80D164C0 */ void Execute(f32 (**)[3][4]);
    /* 80D16560 */ void action();
    /* 80D1661C */ void actionWait();
    /* 80D166E0 */ void actionOrderEvent();
    /* 80D167BC */ void actionEvent();
    /* 80D16860 */ void actionDead();
    /* 80D16864 */ void demoProc();
    /* 80D171C0 */ void sceneChange();
    /* 80D17230 */ void Draw();
    /* 80D17374 */ void checkLODModel();
    /* 80D174F8 */ void Delete();
};

struct dVibration_c {
    /* 8006FA24 */ void StartShock(int, int, cXyz);
    /* 8006FB10 */ void StartQuake(int, int, cXyz);
    /* 8006FD94 */ void StopQuake(int);
};

struct dSv_event_c {
    /* 8003498C */ void onEventBit(u16);
};

struct dKy_tevstr_c {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dPa_levelEcallBack {};

struct _GXColor {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

struct dEvt_control_c {
    /* 80042468 */ void reset();
    /* 80042914 */ void setSkipProc(void*, int (*)(void*, int), int);
};

struct dEvent_manager_c {
    /* 80047758 */ void getEventIdx(fopAc_ac_c*, char const*, u8);
    /* 80047A78 */ void endCheck(s16);
    /* 80047B1C */ void getMyStaffId(char const*, fopAc_ac_c*, int);
    /* 80047D4C */ void getIsAddvance(int);
    /* 80047E10 */ void getMyActIdx(int, char const* const*, int, int, int);
    /* 800480EC */ void getMySubstanceP(int, char const*, int);
    /* 8004817C */ void cutEnd(int);
};

struct dComIfG_play_c {
    /* 8002C97C */ void getLayerNo(int);
};

struct dBgW {};

struct cBgS_PolyInfo {};

struct dBgS_MoveBgActor {
    /* 80078624 */ dBgS_MoveBgActor();
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

struct camera_class {};

struct Z2SeqMgr {
    /* 802AFB94 */ void bgmStreamPrepare(u32);
    /* 802AFE18 */ void bgmStreamPlay();
    /* 802AFEDC */ void bgmStreamStop(u32);
};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct JUTNameTab {
    /* 802DEAF8 */ void getName(u16) const;
};

struct JGeometry {
    template <typename A1>
    struct TVec3 {};
    /* TVec3<f32> */
    struct TVec3__template0 {};
};

struct J3DModel {};

struct J3DJoint {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80D163A8 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

extern "C" static void s_b_sub__FPvPv();
extern "C" static void nodeCallBack__FP8J3DJointi();
extern "C" static void eventCallBack__FPvi();
extern "C" void initBaseMtx__16daObjTobyHouse_cFv();
extern "C" void setBaseMtx__16daObjTobyHouse_cFv();
extern "C" void Create__16daObjTobyHouse_cFv();
extern "C" void CreateHeap__16daObjTobyHouse_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void create1st__16daObjTobyHouse_cFv();
extern "C" void Execute__16daObjTobyHouse_cFPPA3_A4_f();
extern "C" void action__16daObjTobyHouse_cFv();
extern "C" void actionWait__16daObjTobyHouse_cFv();
extern "C" void actionOrderEvent__16daObjTobyHouse_cFv();
extern "C" void actionEvent__16daObjTobyHouse_cFv();
extern "C" void actionDead__16daObjTobyHouse_cFv();
extern "C" void demoProc__16daObjTobyHouse_cFv();
extern "C" void sceneChange__16daObjTobyHouse_cFv();
extern "C" void Draw__16daObjTobyHouse_cFv();
extern "C" void checkLODModel__16daObjTobyHouse_cFv();
extern "C" void Delete__16daObjTobyHouse_cFv();
extern "C" static void daObjTobyHouse_create1st__FP16daObjTobyHouse_c();
extern "C" static void daObjTobyHouse_MoveBGDelete__FP16daObjTobyHouse_c();
extern "C" static void daObjTobyHouse_MoveBGExecute__FP16daObjTobyHouse_c();
extern "C" static void daObjTobyHouse_MoveBGDraw__FP16daObjTobyHouse_c();
extern "C" void func_80D176E4(u8*);
extern "C" void __dt__4cXyzFv();
extern "C" extern char const* const d_a_obj_tobyhouse__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_MtxToRot__FPA4_CfP5csXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_setupShareTexture__FP12J3DModelDataP12J3DModelData();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void waterCheck__11fopAcM_wt_cFPC4cXyz();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeForPName__FPvPv();
extern "C" void dStage_changeScene__FifUlScsi();
extern "C" void getLayerNo__14dComIfG_play_cFi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGs_offOneZoneSwitch__Fii();
extern "C" void dComIfGs_isOneZoneSwitch__Fii();
extern "C" void onEventBit__11dSv_event_cFUs();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void setSkipProc__14dEvt_control_cFPvPFPvi_ii();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cPCcUc();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void getIsAddvance__16dEvent_manager_cFi();
extern "C" void getMyActIdx__16dEvent_manager_cFiPCPCciii();
extern "C" void getMySubstanceP__16dEvent_manager_cFiPCci();
extern "C" void cutEnd__16dEvent_manager_cFi();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void StartQuake__12dVibration_cFii4cXyz();
extern "C" void StopQuake__12dVibration_cFi();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void dCam_getAngleY__FP12camera_class();
extern "C" void dCam_getAngleX__FP12camera_class();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __ct__5csXyzFsss();
extern "C" void cLib_addCalcAngleS__FPsssss();
extern "C" void JPAGetXYZRotateMtx__FsssPA4_f();
extern "C" void func_802807E0();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void bgmStreamPrepare__8Z2SeqMgrFUl();
extern "C" void bgmStreamPlay__8Z2SeqMgrFv();
extern "C" void bgmStreamStop__8Z2SeqMgrFUl();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void getName__10JUTNameTabCFUs();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXConcat();
extern "C" void PSMTXTrans();
extern "C" void PSVECSquareDistance();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_22();
extern "C" void _savegpr_23();
extern "C" void _savegpr_26();
extern "C" void _savegpr_29();
extern "C" void _restgpr_22();
extern "C" void _restgpr_23();
extern "C" void _restgpr_26();
extern "C" void _restgpr_29();
extern "C" void strcmp();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mCurrentMtx__6J3DSys[48];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u32 __float_nan;
extern "C" extern f32 mWaterY__11fopAcM_wt_c[1 + 1 /* padding */];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80D1774C-80D17754 000000 0008+00 4/4 0/0 0/0 .rodata          l_bmd */
SECTION_RODATA static u8 const l_bmd[8] = {
    0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x05,
};
SECTION_DEAD void* const cg_80D1774C = (void*)(&l_bmd);

/* 80D17754-80D1775C 000008 0008+00 1/1 0/0 0/0 .rodata          l_dzb */
SECTION_RODATA static u8 const l_dzb[8] = {
    0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x08,
};
SECTION_DEAD void* const cg_80D17754 = (void*)(&l_dzb);

/* 80D1775C-80D17764 000010 0008+00 0/1 0/0 0/0 .rodata          l_LodBmd */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_LodBmd[8] = {
    0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x04,
};
SECTION_DEAD void* const cg_80D1775C = (void*)(&l_LodBmd);
#pragma pop

/* 80D17764-80D17770 000018 000C+00 0/1 0/0 0/0 .rodata          l_bck */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_bck[12] = {
    0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x08,
};
SECTION_DEAD void* const cg_80D17764 = (void*)(&l_bck);
#pragma pop

/* 80D17770-80D17774 000024 0004+00 1/4 0/0 0/0 .rodata          @4046 */
SECTION_RODATA static u8 const lit_4046[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
SECTION_DEAD void* const cg_80D17770 = (void*)(&lit_4046);

/* 80D17774-80D1777C 000028 0008+00 0/2 0/0 0/0 .rodata          @4047 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4047[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80D17774 = (void*)(&lit_4047);
#pragma pop

/* 80D1777C-80D17784 000030 0008+00 0/2 0/0 0/0 .rodata          @4048 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4048[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80D1777C = (void*)(&lit_4048);
#pragma pop

/* 80D17784-80D1778C 000038 0008+00 0/2 0/0 0/0 .rodata          @4049 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4049[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80D17784 = (void*)(&lit_4049);
#pragma pop

/* 80D1778C-80D17790 000040 0004+00 0/1 0/0 0/0 .rodata          @4050 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4050 = 0x447A0000;
SECTION_DEAD void* const cg_80D1778C = (void*)(&lit_4050);
#pragma pop

/* 80D15AAC-80D15DA8 0000EC 02FC+00 1/1 0/0 0/0 .text            s_b_sub__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_b_sub(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tobyhouse/d_a_obj_tobyhouse/s_b_sub__FPvPv.s"
}
#pragma pop

/* 80D15DA8-80D15E98 0003E8 00F0+00 1/1 0/0 0/0 .text            nodeCallBack__FP8J3DJointi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void nodeCallBack(J3DJoint* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tobyhouse/d_a_obj_tobyhouse/nodeCallBack__FP8J3DJointi.s"
}
#pragma pop

/* 80D15E98-80D15F0C 0004D8 0074+00 1/1 0/0 0/0 .text            eventCallBack__FPvi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void eventCallBack(void* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tobyhouse/d_a_obj_tobyhouse/eventCallBack__FPvi.s"
}
#pragma pop

/* 80D15F0C-80D15F48 00054C 003C+00 1/1 0/0 0/0 .text            initBaseMtx__16daObjTobyHouse_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTobyHouse_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tobyhouse/d_a_obj_tobyhouse/initBaseMtx__16daObjTobyHouse_cFv.s"
}
#pragma pop

/* 80D15F48-80D15FE0 000588 0098+00 2/2 0/0 0/0 .text            setBaseMtx__16daObjTobyHouse_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTobyHouse_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tobyhouse/d_a_obj_tobyhouse/setBaseMtx__16daObjTobyHouse_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D17790-80D17794 000044 0004+00 1/1 0/0 0/0 .rodata          @4193 */
SECTION_RODATA static u32 const lit_4193 = 0x41200000;
SECTION_DEAD void* const cg_80D17790 = (void*)(&lit_4193);

/* 80D17794-80D17798 000048 0004+00 1/1 0/0 0/0 .rodata          @4194 */
SECTION_RODATA static u32 const lit_4194 = 0x43480000;
SECTION_DEAD void* const cg_80D17794 = (void*)(&lit_4194);

/* 80D17858-80D17864 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D17864-80D17878 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80D17878-80D17880 -00001 0008+00 4/4 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName[2] = {
    (void*)&d_a_obj_tobyhouse__stringBase0,
    (void*)(((char*)&d_a_obj_tobyhouse__stringBase0) + 0x9),
};

/* 80D17880-80D17884 -00001 0004+00 1/1 0/0 0/0 .data            l_staff_name */
SECTION_DATA static void* l_staff_name = (void*)(((char*)&d_a_obj_tobyhouse__stringBase0) + 0x12);

/* 80D17884-80D1788C -00001 0008+00 1/1 0/0 0/0 .data            l_event_name */
SECTION_DATA static void* l_event_name[2] = {
    (void*)(((char*)&d_a_obj_tobyhouse__stringBase0) + 0x19),
    (void*)(((char*)&d_a_obj_tobyhouse__stringBase0) + 0x32),
};

/* 80D15FE0-80D161A4 000620 01C4+00 1/0 0/0 0/0 .text            Create__16daObjTobyHouse_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTobyHouse_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tobyhouse/d_a_obj_tobyhouse/Create__16daObjTobyHouse_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D17798-80D1779C 00004C 0004+00 0/1 0/0 0/0 .rodata          @4251 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4251 = 0x3F800000;
SECTION_DEAD void* const cg_80D17798 = (void*)(&lit_4251);
#pragma pop

/* 80D1788C-80D17898 -00001 000C+00 0/1 0/0 0/0 .data            @4292 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4292[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionWait__16daObjTobyHouse_cFv,
};
#pragma pop

/* 80D17898-80D178A4 -00001 000C+00 0/1 0/0 0/0 .data            @4293 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4293[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionOrderEvent__16daObjTobyHouse_cFv,
};
#pragma pop

/* 80D178A4-80D178B0 -00001 000C+00 0/1 0/0 0/0 .data            @4294 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4294[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionEvent__16daObjTobyHouse_cFv,
};
#pragma pop

/* 80D178B0-80D178BC -00001 000C+00 0/1 0/0 0/0 .data            @4295 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4295[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionDead__16daObjTobyHouse_cFv,
};
#pragma pop

/* 80D178BC-80D178EC 000064 0030+00 0/1 0/0 0/0 .data            l_func$4291 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_func[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80D178EC-80D17908 -00001 001C+00 1/1 0/0 0/0 .data            action_table$4349 */
SECTION_DATA static void* action_table[7] = {
    (void*)(((char*)&d_a_obj_tobyhouse__stringBase0) + 0x5F),
    (void*)(((char*)&d_a_obj_tobyhouse__stringBase0) + 0x64),
    (void*)(((char*)&d_a_obj_tobyhouse__stringBase0) + 0x6A),
    (void*)(((char*)&d_a_obj_tobyhouse__stringBase0) + 0x71),
    (void*)(((char*)&d_a_obj_tobyhouse__stringBase0) + 0x78),
    (void*)(((char*)&d_a_obj_tobyhouse__stringBase0) + 0x7F),
    (void*)(((char*)&d_a_obj_tobyhouse__stringBase0) + 0x89),
};

/* 80D17908-80D17914 0000B0 000C+00 0/0 0/0 0/0 .data            l_shotSmokeOffset$4354 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_shotSmokeOffset[12] = {
    0x00, 0x00, 0x00, 0x00, 0x45, 0x1C, 0x40, 0x00, 0xC4, 0x16, 0x00, 0x00,
};
#pragma pop

/* 80D17914-80D17930 -00001 001C+00 1/1 0/0 0/0 .data            @4774 */
SECTION_DATA static void* lit_4774[7] = {
    (void*)(((char*)demoProc__16daObjTobyHouse_cFv) + 0x150),
    (void*)(((char*)demoProc__16daObjTobyHouse_cFv) + 0x18C),
    (void*)(((char*)demoProc__16daObjTobyHouse_cFv) + 0x21C),
    (void*)(((char*)demoProc__16daObjTobyHouse_cFv) + 0x28C),
    (void*)(((char*)demoProc__16daObjTobyHouse_cFv) + 0x4D0),
    (void*)(((char*)demoProc__16daObjTobyHouse_cFv) + 0x4B8),
    (void*)(((char*)demoProc__16daObjTobyHouse_cFv) + 0x4D0),
};

/* 80D17930-80D17950 -00001 0020+00 1/0 0/0 0/0 .data            daObjTobyHouse_METHODS */
SECTION_DATA static void* daObjTobyHouse_METHODS[8] = {
    (void*)daObjTobyHouse_create1st__FP16daObjTobyHouse_c,
    (void*)daObjTobyHouse_MoveBGDelete__FP16daObjTobyHouse_c,
    (void*)daObjTobyHouse_MoveBGExecute__FP16daObjTobyHouse_c,
    (void*)NULL,
    (void*)daObjTobyHouse_MoveBGDraw__FP16daObjTobyHouse_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D17950-80D17980 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_TobyHouse */
SECTION_DATA extern void* g_profile_Obj_TobyHouse[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00A70000, (void*)&g_fpcLf_Method,
    (void*)0x00000600, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02220000, (void*)&daObjTobyHouse_METHODS,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80D17980-80D1798C 000128 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80D161A4-80D163A8 0007E4 0204+00 1/0 0/0 0/0 .text            CreateHeap__16daObjTobyHouse_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTobyHouse_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tobyhouse/d_a_obj_tobyhouse/CreateHeap__16daObjTobyHouse_cFv.s"
}
#pragma pop

/* 80D163A8-80D163F0 0009E8 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tobyhouse/d_a_obj_tobyhouse/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80D163F0-80D164C0 000A30 00D0+00 1/1 0/0 0/0 .text            create1st__16daObjTobyHouse_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTobyHouse_c::create1st() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tobyhouse/d_a_obj_tobyhouse/create1st__16daObjTobyHouse_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D1779C-80D177A0 000050 0004+00 1/1 0/0 0/0 .rodata          @4287 */
SECTION_RODATA static u32 const lit_4287 = 0x41A00000;
SECTION_DEAD void* const cg_80D1779C = (void*)(&lit_4287);

/* 80D164C0-80D16560 000B00 00A0+00 1/0 0/0 0/0 .text Execute__16daObjTobyHouse_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTobyHouse_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tobyhouse/d_a_obj_tobyhouse/Execute__16daObjTobyHouse_cFPPA3_A4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D179C0-80D179C4 000008 0001+03 1/1 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 80D179C4-80D179C8 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 80D179C8-80D179CC 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 80D179CC-80D179D0 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 80D179D0-80D179D4 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 80D179D4-80D179D8 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 80D179D8-80D179DC 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 80D179DC-80D179E0 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 80D179E0-80D179E4 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 80D179E4-80D179E8 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 80D179E8-80D179EC 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 80D179EC-80D179F0 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 80D179F0-80D179F4 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 80D179F4-80D179F8 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 80D179F8-80D179FC 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 80D179FC-80D17A00 -00001 0004+00 1/1 0/0 0/0 .bss             None */
/* 80D179FC 0001+00 data_80D179FC @1009 */
/* 80D179FD 0003+00 data_80D179FD None */
static u8 struct_80D179FC[4];

/* 80D16560-80D1661C 000BA0 00BC+00 1/1 0/0 0/0 .text            action__16daObjTobyHouse_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTobyHouse_c::action() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tobyhouse/d_a_obj_tobyhouse/action__16daObjTobyHouse_cFv.s"
}
#pragma pop

/* 80D1661C-80D166E0 000C5C 00C4+00 1/0 0/0 0/0 .text            actionWait__16daObjTobyHouse_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTobyHouse_c::actionWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tobyhouse/d_a_obj_tobyhouse/actionWait__16daObjTobyHouse_cFv.s"
}
#pragma pop

/* 80D166E0-80D167BC 000D20 00DC+00 1/0 0/0 0/0 .text actionOrderEvent__16daObjTobyHouse_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTobyHouse_c::actionOrderEvent() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tobyhouse/d_a_obj_tobyhouse/actionOrderEvent__16daObjTobyHouse_cFv.s"
}
#pragma pop

/* 80D167BC-80D16860 000DFC 00A4+00 1/0 0/0 0/0 .text            actionEvent__16daObjTobyHouse_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTobyHouse_c::actionEvent() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tobyhouse/d_a_obj_tobyhouse/actionEvent__16daObjTobyHouse_cFv.s"
}
#pragma pop

/* 80D16860-80D16864 000EA0 0004+00 1/0 0/0 0/0 .text            actionDead__16daObjTobyHouse_cFv */
void daObjTobyHouse_c::actionDead() {
    /* empty function */
}

/* ############################################################################################## */
/* 80D177A0-80D177A4 000054 0004+00 0/1 0/0 0/0 .rodata          @4769 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4769 = 0x41000000;
SECTION_DEAD void* const cg_80D177A0 = (void*)(&lit_4769);
#pragma pop

/* 80D177A4-80D177A8 000058 0004+00 0/1 0/0 0/0 .rodata          @4770 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4770 = 0xC4160000;
SECTION_DEAD void* const cg_80D177A4 = (void*)(&lit_4770);
#pragma pop

/* 80D177A8-80D177AC 00005C 0004+00 0/1 0/0 0/0 .rodata          @4771 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4771 = 0x428C0000;
SECTION_DEAD void* const cg_80D177A8 = (void*)(&lit_4771);
#pragma pop

/* 80D177AC-80D177B0 000060 0004+00 0/1 0/0 0/0 .rodata          @4772 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4772 = 0x43BE0000;
SECTION_DEAD void* const cg_80D177AC = (void*)(&lit_4772);
#pragma pop

/* 80D17A00-80D17A10 000048 000C+04 0/1 0/0 0/0 .bss             @4351 */
#pragma push
#pragma force_active on
static u8 lit_4351[12 + 4 /* padding */];
#pragma pop

/* 80D17A10-80D17A1C 000058 000C+00 0/1 0/0 0/0 .bss             l_shotSmokeScale$4350 */
#pragma push
#pragma force_active on
static u8 l_shotSmokeScale[12];
#pragma pop

/* 80D16864-80D171C0 000EA4 095C+00 2/1 0/0 0/0 .text            demoProc__16daObjTobyHouse_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTobyHouse_c::demoProc() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tobyhouse/d_a_obj_tobyhouse/demoProc__16daObjTobyHouse_cFv.s"
}
#pragma pop

/* 80D171C0-80D17230 001800 0070+00 2/2 0/0 0/0 .text            sceneChange__16daObjTobyHouse_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTobyHouse_c::sceneChange() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tobyhouse/d_a_obj_tobyhouse/sceneChange__16daObjTobyHouse_cFv.s"
}
#pragma pop

/* 80D17230-80D17374 001870 0144+00 1/0 0/0 0/0 .text            Draw__16daObjTobyHouse_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTobyHouse_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tobyhouse/d_a_obj_tobyhouse/Draw__16daObjTobyHouse_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D177B0-80D177B4 000064 0004+00 0/0 0/0 0/0 .rodata          @4773 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4773 = 0xBF800000;
SECTION_DEAD void* const cg_80D177B0 = (void*)(&lit_4773);
#pragma pop

/* 80D177B4-80D177BC 000068 0008+00 0/0 0/0 0/0 .rodata          @4776 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4776[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80D177B4 = (void*)(&lit_4776);
#pragma pop

/* 80D177BC-80D177C0 000070 0004+00 0/1 0/0 0/0 .rodata          @4905 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4905 = 0x469C4000;
SECTION_DEAD void* const cg_80D177BC = (void*)(&lit_4905);
#pragma pop

/* 80D17374-80D174F8 0019B4 0184+00 1/1 0/0 0/0 .text            checkLODModel__16daObjTobyHouse_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTobyHouse_c::checkLODModel() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tobyhouse/d_a_obj_tobyhouse/checkLODModel__16daObjTobyHouse_cFv.s"
}
#pragma pop

/* 80D174F8-80D17618 001B38 0120+00 1/0 0/0 0/0 .text            Delete__16daObjTobyHouse_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTobyHouse_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tobyhouse/d_a_obj_tobyhouse/Delete__16daObjTobyHouse_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D1798C-80D179B4 000134 0028+00 1/1 0/0 0/0 .data            __vt__16daObjTobyHouse_c */
SECTION_DATA extern void* __vt__16daObjTobyHouse_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__16daObjTobyHouse_cFv,
    (void*)Create__16daObjTobyHouse_cFv,
    (void*)Execute__16daObjTobyHouse_cFPPA3_A4_f,
    (void*)Draw__16daObjTobyHouse_cFv,
    (void*)Delete__16daObjTobyHouse_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80D17618-80D17678 001C58 0060+00 1/0 0/0 0/0 .text
 * daObjTobyHouse_create1st__FP16daObjTobyHouse_c               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjTobyHouse_create1st(daObjTobyHouse_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tobyhouse/d_a_obj_tobyhouse/daObjTobyHouse_create1st__FP16daObjTobyHouse_c.s"
}
#pragma pop

/* 80D17678-80D17698 001CB8 0020+00 1/0 0/0 0/0 .text
 * daObjTobyHouse_MoveBGDelete__FP16daObjTobyHouse_c            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjTobyHouse_MoveBGDelete(daObjTobyHouse_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tobyhouse/d_a_obj_tobyhouse/daObjTobyHouse_MoveBGDelete__FP16daObjTobyHouse_c.s"
}
#pragma pop

/* 80D17698-80D176B8 001CD8 0020+00 1/0 0/0 0/0 .text
 * daObjTobyHouse_MoveBGExecute__FP16daObjTobyHouse_c           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjTobyHouse_MoveBGExecute(daObjTobyHouse_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tobyhouse/d_a_obj_tobyhouse/daObjTobyHouse_MoveBGExecute__FP16daObjTobyHouse_c.s"
}
#pragma pop

/* 80D176B8-80D176E4 001CF8 002C+00 1/0 0/0 0/0 .text
 * daObjTobyHouse_MoveBGDraw__FP16daObjTobyHouse_c              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjTobyHouse_MoveBGDraw(daObjTobyHouse_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tobyhouse/d_a_obj_tobyhouse/daObjTobyHouse_MoveBGDraw__FP16daObjTobyHouse_c.s"
}
#pragma pop

/* 80D176E4-80D17700 001D24 001C+00 1/1 0/0 0/0 .text            cLib_calcTimer<Uc>__FPUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_80D176E4(u8* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tobyhouse/d_a_obj_tobyhouse/func_80D176E4.s"
}
#pragma pop

/* 80D17700-80D1773C 001D40 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tobyhouse/d_a_obj_tobyhouse/__dt__4cXyzFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D17A1C-80D17A20 000064 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_80D17A1C[4];
#pragma pop

/* 80D17A20-80D17A24 000068 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_80D17A20[4];
#pragma pop

/* 80D17A24-80D17A28 00006C 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_80D17A24[4];
#pragma pop

/* 80D17A28-80D17A2C 000070 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80D17A28[4];
#pragma pop

/* 80D17A2C-80D17A30 000074 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80D17A2C[4];
#pragma pop

/* 80D17A30-80D17A34 000078 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80D17A30[4];
#pragma pop

/* 80D17A34-80D17A38 00007C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_80D17A34[4];
#pragma pop

/* 80D17A38-80D17A3C 000080 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_80D17A38[4];
#pragma pop

/* 80D17A3C-80D17A40 000084 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_80D17A3C[4];
#pragma pop

/* 80D17A40-80D17A44 000088 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_80D17A40[4];
#pragma pop

/* 80D17A44-80D17A48 00008C 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_80D17A44[4];
#pragma pop

/* 80D17A48-80D17A4C 000090 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80D17A48[4];
#pragma pop

/* 80D17A4C-80D17A50 000094 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_80D17A4C[4];
#pragma pop

/* 80D17A50-80D17A54 000098 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80D17A50[4];
#pragma pop

/* 80D17A54-80D17A58 00009C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80D17A54[4];
#pragma pop

/* 80D17A58-80D17A5C 0000A0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_80D17A58[4];
#pragma pop

/* 80D17A5C-80D17A60 0000A4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_80D17A5C[4];
#pragma pop

/* 80D17A60-80D17A64 0000A8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80D17A60[4];
#pragma pop

/* 80D17A64-80D17A68 0000AC 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_80D17A64[4];
#pragma pop

/* 80D17A68-80D17A6C 0000B0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_80D17A68[4];
#pragma pop

/* 80D17A6C-80D17A70 0000B4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_80D17A6C[4];
#pragma pop

/* 80D17A70-80D17A74 0000B8 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80D17A70[4];
#pragma pop

/* 80D17A74-80D17A78 0000BC 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80D17A74[4];
#pragma pop

/* 80D17A78-80D17A7C 0000C0 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80D17A78[4];
#pragma pop

/* 80D17A7C-80D17A80 0000C4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_80D17A7C[4];
#pragma pop

/* 80D177C0-80D17858 000074 0098+00 6/2 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80D177C0 = "M_THouse";
SECTION_DEAD static char const* const stringBase_80D177C9 = "U_THouse";
SECTION_DEAD static char const* const stringBase_80D177D2 = "thouse";
SECTION_DEAD static char const* const stringBase_80D177D9 = "TOBY_HOUSE_FIRE_TO_RAKKA";
SECTION_DEAD static char const* const stringBase_80D177F2 = "TOBY_HOUSE_FIRE_TO_DESERT";
SECTION_DEAD static char const* const stringBase_80D1780C = "Birl_P";
SECTION_DEAD static char const* const stringBase_80D17813 = "Birl_Cannon";
SECTION_DEAD static char const* const stringBase_80D1781F = "WAIT";
SECTION_DEAD static char const* const stringBase_80D17824 = "CLOSE";
SECTION_DEAD static char const* const stringBase_80D1782A = "CHANGE";
SECTION_DEAD static char const* const stringBase_80D17831 = "HLIGHT";
SECTION_DEAD static char const* const stringBase_80D17838 = "ROTATE";
SECTION_DEAD static char const* const stringBase_80D1783F = "SCENE_CHG";
SECTION_DEAD static char const* const stringBase_80D17849 = "EFF_LINE";
SECTION_DEAD static char const* const stringBase_80D17852 = "Timer";
#pragma pop
