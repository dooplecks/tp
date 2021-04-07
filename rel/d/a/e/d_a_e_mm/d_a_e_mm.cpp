//
// Generated By: dol2asm
// Translation Unit: d_a_e_mm
//

#include "rel/d/a/e/d_a_e_mm/d_a_e_mm.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    /* 8000CE38 */ void scaleM(f32, f32, f32);

    static u8 now[48];
};

struct J3DModelData {};

struct mDoExt_McaMorfCallBack2_c {};

struct mDoExt_McaMorfCallBack1_c {};

struct Z2Creature {};

struct J3DAnmTransform {};

struct mDoExt_McaMorfSO {
    /* 800107D0 */ mDoExt_McaMorfSO(J3DModelData*, mDoExt_McaMorfCallBack1_c*,
                                    mDoExt_McaMorfCallBack2_c*, J3DAnmTransform*, int, f32, int,
                                    int, Z2Creature*, u32, u32);
    /* 80010E70 */ void setAnm(J3DAnmTransform*, int, f32, f32, f32, f32);
    /* 800110B0 */ void play(u32, s8);
    /* 800111C0 */ void entryDL();
    /* 800111EC */ void modelCalc();
};

struct fopEn_enemy_c {};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct e_mm_class {};

struct daPy_py_c {
    static u8 m_midnaActor[4];
};

struct daE_MM_HIO_c {
    /* 8071F9CC */ daE_MM_HIO_c();
    /* 80722780 */ ~daE_MM_HIO_c();
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dKy_tevstr_c {};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
    /* 80267128 */ void atan2sX_Z() const;
};

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

struct csXyz {};

struct dPa_control_c {
    struct level_c {
        /* 8004B918 */ void getEmitter(u32);
    };

    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
    /* 8004D4CC */ void set(u32, u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*,
                            cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*,
                            _GXColor const*, cXyz const*, f32);
};

struct dDlst_shadowControl_c {
    static u8 mSimpleTexObj[32];
};

struct dCcU_AtInfo {};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcSph {};

struct dCcD_Sph {
    /* 80084A34 */ void Set(dCcD_SrcSph const&);
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80083830 */ void Move();
    /* 807225FC */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 80084358 */ void GetAtHitObj();
    /* 80084460 */ void ChkTgHit();
    /* 800844F8 */ void GetTgHitObj();
    /* 80084548 */ void GetTgHitGObj();
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 80722658 */ ~dBgS_ObjAcch();
};

struct dBgS_LinChk {
    /* 80077C68 */ dBgS_LinChk();
    /* 80077CDC */ ~dBgS_LinChk();
    /* 80077D64 */ void Set(cXyz const*, cXyz const*, fopAc_ac_c const*);
};

struct dBgS_GndChk {
    /* 8007757C */ dBgS_GndChk();
    /* 800775F0 */ ~dBgS_GndChk();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80075F58 */ void SetWall(f32, f32);
    /* 807226C8 */ ~dBgS_AcchCir();
};

struct dBgS {};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 80076AAC */ void CrrPos(dBgS&);
};

struct cM3dGSph {
    /* 8026F648 */ void SetC(cXyz const&);
    /* 8026F708 */ void SetR(f32);
    /* 8072256C */ ~cM3dGSph();
};

struct cM3dGCir {
    /* 8026EF18 */ ~cM3dGCir();
};

struct cM3dGAab {
    /* 807225B4 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 80722738 */ ~cCcD_GStts();
};

struct cBgS_PolyInfo {
    /* 802680B0 */ ~cBgS_PolyInfo();
};

struct cBgS_LinChk {};

struct cBgS_GndChk {
    /* 80267D28 */ void SetPos(cXyz const*);
};

struct cBgS {
    /* 800743B4 */ void LineCross(cBgS_LinChk*);
    /* 800744A0 */ void GroundCross(cBgS_GndChk*);
};

struct _GXTexObj {};

struct Z2CreatureEnemy {
    /* 802C0F64 */ Z2CreatureEnemy();
    /* 802C1094 */ void init(Vec*, Vec*, u8, u8);
    /* 802C1B7C */ void setLinkSearch(bool);
    /* 802C1B90 */ void setEnemyName(char const*);
};

struct JGeometry {
    template <typename A1>
    struct TVec3 {};
    /* TVec3<f32> */
    struct TVec3__template0 {};
};

struct J3DModel {};

//
// Forward References:
//

extern "C" void __ct__12daE_MM_HIO_cFv();
extern "C" static void anm_init__FP10e_mm_classifUcf();
extern "C" static void daE_MM_Draw__FP10e_mm_class();
extern "C" static void pl_check__FP10e_mm_classfs();
extern "C" static void damage_checkMetOn__FP10e_mm_class();
extern "C" static void damage_check__FP10e_mm_class();
extern "C" static void wall_check__FP10e_mm_classf();
extern "C" static void mGround_WaterEffSet__FP10e_mm_class();
extern "C" static void mWaterEffSet__FP10e_mm_classb();
extern "C" static void way_gake_check__FP10e_mm_class();
extern "C" static void e_mm_normal__FP10e_mm_class();
extern "C" static void e_mm_dash__FP10e_mm_class();
extern "C" static void e_mm_defence__FP10e_mm_class();
extern "C" static void e_mm_magne_wait__FP10e_mm_class();
extern "C" static void e_mm_turn__FP10e_mm_class();
extern "C" static void e_mm_damage__FP10e_mm_class();
extern "C" static void action__FP10e_mm_class();
extern "C" static void daE_MM_Execute__FP10e_mm_class();
extern "C" static bool daE_MM_IsDelete__FP10e_mm_class();
extern "C" static void daE_MM_Delete__FP10e_mm_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daE_MM_Create__FP10fopAc_ac_c();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__12daE_MM_HIO_cFv();
extern "C" void __sinit_d_a_e_mm_cpp();
extern "C" static void func_80722804();
extern "C" static void func_8072280C();
extern "C" static void setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz();
extern "C" extern char const* const d_a_e_mm__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_SearchByID__FUiPP10fopAc_ac_c();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_createChild__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_createDisappear__FPC10fopAc_ac_cPC4cXyzUcUcUc();
extern "C" void fopAcM_otherBgCheck__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_wayBgCheck__FPC10fopAc_ac_cff();
extern "C" void fopAcM_effSmokeSet1__FPUlPUlPC4cXyzPC5csXyzfPC12dKy_tevstr_ci();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void GetAtHitObj__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void cc_at_check__FP10fopAc_ac_cP11dCcU_AtInfo();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_darkworld_check__Fv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void atan2sX_Z__4cXyzCFv();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void func_802807E0();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void setLinkSearch__15Z2CreatureEnemyFb();
extern "C" void setEnemyName__15Z2CreatureEnemyFPCc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void PSVECAdd();
extern "C" void PSVECScale();
extern "C" void PSVECSquareMag();
extern "C" void _savegpr_19();
extern "C" void _savegpr_23();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_19();
extern "C" void _restgpr_23();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void abs();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_env_light[4880];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" extern u32 __float_nan;
extern "C" u8 m_midnaActor__9daPy_py_c[4];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80722C3C-80722C40 000000 0004+00 14/14 0/0 0/0 .rodata          @3789 */
SECTION_RODATA static f32 const lit_3789 = 100.0f;
COMPILER_STRIP_GATE(80722C3C, &lit_3789);

/* 80722C40-80722C44 000004 0004+00 1/12 0/0 0/0 .rodata          @3790 */
SECTION_RODATA static u8 const lit_3790[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(80722C40, &lit_3790);

/* 80722C44-80722C4C 000008 0004+04 3/13 0/0 0/0 .rodata          @3791 */
SECTION_RODATA static f32 const lit_3791[1 + 1 /* padding */] = {
    1.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(80722C44, &lit_3791);

/* 80722C4C-80722C54 000010 0008+00 0/1 0/0 0/0 .rodata          @3792 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3792[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80722C4C, &lit_3792);
#pragma pop

/* 80722C54-80722C5C 000018 0008+00 0/1 0/0 0/0 .rodata          @3793 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3793[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80722C54, &lit_3793);
#pragma pop

/* 80722C5C-80722C64 000020 0008+00 0/1 0/0 0/0 .rodata          @3794 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3794[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80722C5C, &lit_3794);
#pragma pop

/* 80722C64-80722C68 000028 0004+00 0/1 0/0 0/0 .rodata          @3795 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3795 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(80722C64, &lit_3795);
#pragma pop

/* 80722C68-80722C6C 00002C 0004+00 0/1 0/0 0/0 .rodata          @3810 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3810 = 7.0f / 5.0f;
COMPILER_STRIP_GATE(80722C68, &lit_3810);
#pragma pop

/* 80722C6C-80722C70 000030 0004+00 1/2 0/0 0/0 .rodata          @3811 */
SECTION_RODATA static f32 const lit_3811 = 2.0f;
COMPILER_STRIP_GATE(80722C6C, &lit_3811);

/* 80722C70-80722C74 000034 0004+00 0/1 0/0 0/0 .rodata          @3812 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3812 = 15.0f;
COMPILER_STRIP_GATE(80722C70, &lit_3812);
#pragma pop

/* 80722C74-80722C78 000038 0004+00 0/1 0/0 0/0 .rodata          @3813 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3813 = 1000.0f;
COMPILER_STRIP_GATE(80722C74, &lit_3813);
#pragma pop

/* 80722C78-80722C7C 00003C 0004+00 0/1 0/0 0/0 .rodata          @3814 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3814 = 2.5f;
COMPILER_STRIP_GATE(80722C78, &lit_3814);
#pragma pop

/* 80722C7C-80722C80 000040 0004+00 0/2 0/0 0/0 .rodata          @3815 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3815 = 8.0f;
COMPILER_STRIP_GATE(80722C7C, &lit_3815);
#pragma pop

/* 80722C80-80722C84 000044 0004+00 0/6 0/0 0/0 .rodata          @3816 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3816 = 10.0f;
COMPILER_STRIP_GATE(80722C80, &lit_3816);
#pragma pop

/* 80722CF4-80722D00 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80722D00-80722D14 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80722D14-80722D1C 000020 0008+00 0/1 0/0 0/0 .data            e_prim$3668 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 e_prim[8] = {
    0xFF, 0x78, 0x00, 0x00, 0xFF, 0x64, 0x78, 0x00,
};
#pragma pop

/* 80722D1C-80722D24 000028 0008+00 0/1 0/0 0/0 .data            e_env$3669 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 e_env[8] = {
    0x5A, 0x2D, 0x2D, 0x00, 0x3C, 0x1E, 0x1E, 0x00,
};
#pragma pop

/* 80722D24-80722D2C 000030 0006+02 0/1 0/0 0/0 .data            eff_id$3677 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 eff_id[6 + 2 /* padding */] = {
    0x02,
    0x9D,
    0x02,
    0x9E,
    0x02,
    0x9F,
    /* padding */
    0x00,
    0x00,
};
#pragma pop

/* 80722D2C-80722D34 000038 0008+00 1/1 0/0 0/0 .data            mDropEff$4000 */
SECTION_DATA static u8 mDropEff[8] = {
    0x01, 0xB8, 0x01, 0xB9, 0x01, 0xBA, 0x01, 0xBB,
};

/* 80722D34-80722D40 000040 000C+00 1/1 0/0 0/0 .data            mDushEff$4038 */
SECTION_DATA static u8 mDushEff[12] = {
    0x87, 0x7A, 0x87, 0x7B, 0x87, 0x7C, 0x01, 0xAF, 0x01, 0xB0, 0x01, 0xB1,
};

/* 80722D40-80722D6C -00001 002C+00 1/1 0/0 0/0 .data            @4621 */
SECTION_DATA static void* lit_4621[11] = {
    (void*)(((char*)action__FP10e_mm_class) + 0x94),
    (void*)(((char*)action__FP10e_mm_class) + 0xA0),
    (void*)(((char*)action__FP10e_mm_class) + 0xB0),
    (void*)(((char*)action__FP10e_mm_class) + 0xBC),
    (void*)(((char*)action__FP10e_mm_class) + 0xC8),
    (void*)(((char*)action__FP10e_mm_class) + 0xDC),
    (void*)(((char*)action__FP10e_mm_class) + 0xDC),
    (void*)(((char*)action__FP10e_mm_class) + 0xDC),
    (void*)(((char*)action__FP10e_mm_class) + 0xDC),
    (void*)(((char*)action__FP10e_mm_class) + 0xDC),
    (void*)(((char*)action__FP10e_mm_class) + 0xD4),
};

/* 80722D6C-80722DAC 000078 0040+00 1/1 0/0 0/0 .data            cc_sph_src$4753 */
SECTION_DATA static u8 cc_sph_src[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D,
    0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00, 0x75, 0x0C, 0x00, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x06, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};

/* 80722DAC-80722DEC 0000B8 0040+00 1/1 0/0 0/0 .data            cc_wind_sph_src$4754 */
SECTION_DATA static u8 cc_wind_sph_src[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};

/* 80722DEC-80722E0C -00001 0020+00 1/0 0/0 0/0 .data            l_daE_MM_Method */
SECTION_DATA static void* l_daE_MM_Method[8] = {
    (void*)daE_MM_Create__FP10fopAc_ac_c,
    (void*)daE_MM_Delete__FP10e_mm_class,
    (void*)daE_MM_Execute__FP10e_mm_class,
    (void*)daE_MM_IsDelete__FP10e_mm_class,
    (void*)daE_MM_Draw__FP10e_mm_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80722E0C-80722E3C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_E_MM */
SECTION_DATA extern void* g_profile_E_MM[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01DD0000, (void*)&g_fpcLf_Method,
    (void*)0x00000C1C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00A70000, (void*)&l_daE_MM_Method,
    (void*)0x00040120, (void*)0x02000000,
};

/* 80722E3C-80722E48 000148 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80722E48-80722E54 000154 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80722E54-80722E60 000160 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80722E60-80722E6C 00016C 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80722E6C-80722E78 000178 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80722E78-80722E9C 000184 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8072280C,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80722804,
};

/* 80722E9C-80722EA8 0001A8 000C+00 2/2 0/0 0/0 .data            __vt__12daE_MM_HIO_c */
SECTION_DATA extern void* __vt__12daE_MM_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daE_MM_HIO_cFv,
};

/* 8071F9CC-8071FA44 0000EC 0078+00 1/1 0/0 0/0 .text            __ct__12daE_MM_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_MM_HIO_c::daE_MM_HIO_c() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/__ct__12daE_MM_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80722C84-80722C88 000048 0004+00 1/4 0/0 0/0 .rodata          @3830 */
SECTION_RODATA static f32 const lit_3830 = -1.0f;
COMPILER_STRIP_GATE(80722C84, &lit_3830);

/* 8071FA44-8071FAF0 000164 00AC+00 8/8 0/0 0/0 .text            anm_init__FP10e_mm_classifUcf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void anm_init(e_mm_class* param_0, int param_1, f32 param_2, u8 param_3, f32 param_4) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/anm_init__FP10e_mm_classifUcf.s"
}
#pragma pop

/* ############################################################################################## */
/* 80722C88-80722C8C 00004C 0004+00 0/1 0/0 0/0 .rodata          @3860 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3860 = 700.0f;
COMPILER_STRIP_GATE(80722C88, &lit_3860);
#pragma pop

/* 8071FAF0-8071FBC4 000210 00D4+00 1/0 0/0 0/0 .text            daE_MM_Draw__FP10e_mm_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_MM_Draw(e_mm_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/daE_MM_Draw__FP10e_mm_class.s"
}
#pragma pop

/* 8071FBC4-8071FC24 0002E4 0060+00 1/1 0/0 0/0 .text            pl_check__FP10e_mm_classfs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void pl_check(e_mm_class* param_0, f32 param_1, s16 param_2) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/pl_check__FP10e_mm_classfs.s"
}
#pragma pop

/* ############################################################################################## */
/* 80722C8C-80722C90 000050 0004+00 0/7 0/0 0/0 .rodata          @3909 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3909 = 3.0f;
COMPILER_STRIP_GATE(80722C8C, &lit_3909);
#pragma pop

/* 80722C90-80722C94 000054 0004+00 0/3 0/0 0/0 .rodata          @3910 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3910 = -20.0f;
COMPILER_STRIP_GATE(80722C90, &lit_3910);
#pragma pop

/* 80722C94-80722C98 000058 0004+00 0/2 0/0 0/0 .rodata          @3911 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3911 = 25.0f;
COMPILER_STRIP_GATE(80722C94, &lit_3911);
#pragma pop

/* 80722EB0-80722EB4 000008 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_80722EB0[4];

/* 80722EB4-80722EC0 00000C 000C+00 1/1 0/0 0/0 .bss             @3805 */
static u8 lit_3805[12];

/* 80722EC0-80722EF4 000018 0034+00 7/7 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[52];

/* 8071FC24-8071FE98 000344 0274+00 1/1 0/0 0/0 .text            damage_checkMetOn__FP10e_mm_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void damage_checkMetOn(e_mm_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/damage_checkMetOn__FP10e_mm_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80722C98-80722C9C 00005C 0004+00 0/2 0/0 0/0 .rodata          @3961 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3961 = 0.5f;
COMPILER_STRIP_GATE(80722C98, &lit_3961);
#pragma pop

/* 80722C9C-80722CA0 000060 0004+00 0/2 0/0 0/0 .rodata          @3962 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3962 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(80722C9C, &lit_3962);
#pragma pop

/* 8071FE98-807201A0 0005B8 0308+00 1/1 0/0 0/0 .text            damage_check__FP10e_mm_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void damage_check(e_mm_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/damage_check__FP10e_mm_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80722CA0-80722CA4 000064 0004+00 1/2 0/0 0/0 .rodata          @3995 */
SECTION_RODATA static f32 const lit_3995 = 40.0f;
COMPILER_STRIP_GATE(80722CA0, &lit_3995);

/* 80722CA4-80722CA8 000068 0004+00 0/1 0/0 0/0 .rodata          @3996 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3996 = -50.0f;
COMPILER_STRIP_GATE(80722CA4, &lit_3996);
#pragma pop

/* 807201A0-807202F0 0008C0 0150+00 2/2 0/0 0/0 .text            wall_check__FP10e_mm_classf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void wall_check(e_mm_class* param_0, f32 param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/wall_check__FP10e_mm_classf.s"
}
#pragma pop

/* 807202F0-807203E0 000A10 00F0+00 2/2 0/0 0/0 .text            mGround_WaterEffSet__FP10e_mm_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void mGround_WaterEffSet(e_mm_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/mGround_WaterEffSet__FP10e_mm_class.s"
}
#pragma pop

/* 807203E0-80720590 000B00 01B0+00 1/1 0/0 0/0 .text            mWaterEffSet__FP10e_mm_classb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void mWaterEffSet(e_mm_class* param_0, bool param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/mWaterEffSet__FP10e_mm_classb.s"
}
#pragma pop

/* ############################################################################################## */
/* 80722CA8-80722CAC 00006C 0004+00 0/2 0/0 0/0 .rodata          @4141 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4141 = 200.0f;
COMPILER_STRIP_GATE(80722CA8, &lit_4141);
#pragma pop

/* 80722CAC-80722CB0 000070 0004+00 0/1 0/0 0/0 .rodata          @4142 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4142 = -1000000000.0f;
COMPILER_STRIP_GATE(80722CAC, &lit_4142);
#pragma pop

/* 80720590-807206FC 000CB0 016C+00 3/3 0/0 0/0 .text            way_gake_check__FP10e_mm_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void way_gake_check(e_mm_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/way_gake_check__FP10e_mm_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80722CB0-80722CB4 000074 0004+00 0/1 0/0 0/0 .rodata          @4227 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4227 = 32768.0f;
COMPILER_STRIP_GATE(80722CB0, &lit_4227);
#pragma pop

/* 80722CB4-80722CB8 000078 0004+00 0/1 0/0 0/0 .rodata          @4228 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4228 = 10000.0f;
COMPILER_STRIP_GATE(80722CB4, &lit_4228);
#pragma pop

/* 80722CB8-80722CBC 00007C 0004+00 1/3 0/0 0/0 .rodata          @4229 */
SECTION_RODATA static f32 const lit_4229 = 50.0f;
COMPILER_STRIP_GATE(80722CB8, &lit_4229);

/* 80722CBC-80722CC4 000080 0004+04 0/1 0/0 0/0 .rodata          @4230 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4230[1 + 1 /* padding */] = {
    600.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(80722CBC, &lit_4230);
#pragma pop

/* 80722CC4-80722CCC 000088 0008+00 0/1 0/0 0/0 .rodata          @4232 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4232[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80722CC4, &lit_4232);
#pragma pop

/* 807206FC-80720B50 000E1C 0454+00 1/1 0/0 0/0 .text            e_mm_normal__FP10e_mm_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_mm_normal(e_mm_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/e_mm_normal__FP10e_mm_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80722CCC-80722CD0 000090 0004+00 0/1 0/0 0/0 .rodata          @4358 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4358 = 1.5f;
COMPILER_STRIP_GATE(80722CCC, &lit_4358);
#pragma pop

/* 80722CD0-80722CD4 000094 0004+00 0/2 0/0 0/0 .rodata          @4359 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4359 = 20.0f;
COMPILER_STRIP_GATE(80722CD0, &lit_4359);
#pragma pop

/* 80720B50-807211CC 001270 067C+00 1/1 0/0 0/0 .text            e_mm_dash__FP10e_mm_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_mm_dash(e_mm_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/e_mm_dash__FP10e_mm_class.s"
}
#pragma pop

/* 807211CC-807212C8 0018EC 00FC+00 1/1 0/0 0/0 .text            e_mm_defence__FP10e_mm_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_mm_defence(e_mm_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/e_mm_defence__FP10e_mm_class.s"
}
#pragma pop

/* 807212C8-807213BC 0019E8 00F4+00 1/1 0/0 0/0 .text            e_mm_magne_wait__FP10e_mm_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_mm_magne_wait(e_mm_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/e_mm_magne_wait__FP10e_mm_class.s"
}
#pragma pop

/* 807213BC-80721538 001ADC 017C+00 1/1 0/0 0/0 .text            e_mm_turn__FP10e_mm_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_mm_turn(e_mm_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/e_mm_turn__FP10e_mm_class.s"
}
#pragma pop

/* 80721538-807217F4 001C58 02BC+00 1/1 0/0 0/0 .text            e_mm_damage__FP10e_mm_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_mm_damage(e_mm_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/e_mm_damage__FP10e_mm_class.s"
}
#pragma pop

/* 807217F4-80721D44 001F14 0550+00 2/1 0/0 0/0 .text            action__FP10e_mm_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void action(e_mm_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/action__FP10e_mm_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80722CD4-80722CD8 000098 0004+00 0/0 0/0 0/0 .rodata          @4618 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4618 = 80.0f;
COMPILER_STRIP_GATE(80722CD4, &lit_4618);
#pragma pop

/* 80722CD8-80722CDC 00009C 0004+00 0/0 0/0 0/0 .rodata          @4619 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4619 = 3000.0f;
COMPILER_STRIP_GATE(80722CD8, &lit_4619);
#pragma pop

/* 80722CDC-80722CE0 0000A0 0004+00 0/0 0/0 0/0 .rodata          @4620 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4620 = 500.0f;
COMPILER_STRIP_GATE(80722CDC, &lit_4620);
#pragma pop

/* 80722CE0-80722CE4 0000A4 0004+00 1/1 0/0 0/0 .rodata          @4701 */
SECTION_RODATA static f32 const lit_4701 = 35353.0f;
COMPILER_STRIP_GATE(80722CE0, &lit_4701);

/* 80721D44-80722004 002464 02C0+00 2/1 0/0 0/0 .text            daE_MM_Execute__FP10e_mm_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_MM_Execute(e_mm_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/daE_MM_Execute__FP10e_mm_class.s"
}
#pragma pop

/* 80722004-8072200C 002724 0008+00 1/0 0/0 0/0 .text            daE_MM_IsDelete__FP10e_mm_class */
static bool daE_MM_IsDelete(e_mm_class* param_0) {
    return true;
}

/* 8072200C-80722080 00272C 0074+00 1/0 0/0 0/0 .text            daE_MM_Delete__FP10e_mm_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_MM_Delete(e_mm_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/daE_MM_Delete__FP10e_mm_class.s"
}
#pragma pop

/* 80722080-8072218C 0027A0 010C+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80722CE4-80722CE8 0000A8 0004+00 1/1 0/0 0/0 .rodata          @4886 */
SECTION_RODATA static f32 const lit_4886 = 60.0f;
COMPILER_STRIP_GATE(80722CE4, &lit_4886);

/* 8072218C-8072256C 0028AC 03E0+00 1/0 0/0 0/0 .text            daE_MM_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_MM_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/daE_MM_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 8072256C-807225B4 002C8C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 807225B4-807225FC 002CD4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 807225FC-80722658 002D1C 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80722658-807226C8 002D78 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 807226C8-80722738 002DE8 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_AcchCir::~dBgS_AcchCir() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80722738-80722780 002E58 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80722780-807227C8 002EA0 0048+00 2/1 0/0 0/0 .text            __dt__12daE_MM_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_MM_HIO_c::~daE_MM_HIO_c() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/__dt__12daE_MM_HIO_cFv.s"
}
#pragma pop

/* 807227C8-80722804 002EE8 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_e_mm_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_e_mm_cpp() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/__sinit_d_a_e_mm_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_807227C8 = (void*)__sinit_d_a_e_mm_cpp;
#pragma pop

/* 80722804-8072280C 002F24 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80722804() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/func_80722804.s"
}
#pragma pop

/* 8072280C-80722814 002F2C 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8072280C() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/func_8072280C.s"
}
#pragma pop

/* 80722814-80722C28 002F34 0414+00 2/2 0/0 0/0 .text
 * setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void setMidnaBindEffect(fopEn_enemy_c* param_0, Z2CreatureEnemy* param_1, cXyz* param_2,
                                   cXyz* param_3) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/d_a_e_mm/setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz.s"
}
#pragma pop

/* 80722CE8-80722CF2 0000AC 000A+00 4/4 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80722CE8 = "E_MM";
SECTION_DEAD static char const* const stringBase_80722CED = "E_mm";
#pragma pop
