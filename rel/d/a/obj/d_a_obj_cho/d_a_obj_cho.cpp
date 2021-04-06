//
// Generated By: dol2asm
// Translation Unit: d_a_obj_cho
//

#include "rel/d/a/obj/d_a_obj_cho/d_a_obj_cho.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct csXyz {};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CE70 */ void scaleM(cXyz const&);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);
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

struct mDoExt_McaMorfCallBack1_c {};

struct J3DModelData {};

struct J3DAnmTransform {};

struct Z2Creature {
    /* 802C03C8 */ Z2Creature();
    /* 802C0530 */ void init(Vec*, Vec*, u8, u8);
};

struct mDoExt_McaMorfCallBack2_c {};

struct mDoExt_McaMorfSO {
    /* 800107D0 */ mDoExt_McaMorfSO(J3DModelData*, mDoExt_McaMorfCallBack1_c*,
                                    mDoExt_McaMorfCallBack2_c*, J3DAnmTransform*, int, f32, int,
                                    int, Z2Creature*, u32, u32);
    /* 80010E70 */ void setAnm(J3DAnmTransform*, int, f32, f32, f32, f32);
    /* 800110B0 */ void play(u32, s8);
    /* 800111C0 */ void entryDL();
    /* 800111EC */ void modelCalc();
    /* 80011310 */ void stopZelAnime();
};

struct fopAc_ac_c {};

struct daPy_boomerangMove_c {
    /* 8015E5B0 */ void initOffset(cXyz const*);
    /* 8015E654 */ void posMove(cXyz*, s16*, fopAc_ac_c*, s16);
    /* 8015E87C */ void bgCheckAfterOffset(cXyz const*);
};

struct daObj_ChoHIO_c {
    /* 80BCA30C */ daObj_ChoHIO_c();
    /* 80BCC4D0 */ ~daObj_ChoHIO_c();
};

struct daObjCHO_c {
    /* 80BCA334 */ void InitCcSph();
    /* 80BCA3A0 */ void SetCcSph();
    /* 80BCA418 */ void CreateHeap();
    /* 80BCA78C */ void SpeedSet();
    /* 80BCA88C */ void WallCheck();
    /* 80BCA924 */ void SearchLink();
    /* 80BCAB50 */ void WaitAction();
    /* 80BCAEDC */ void MoveAction();
    /* 80BCB210 */ void Action();
    /* 80BCB268 */ void ShopAction();
    /* 80BCB2AC */ void checkGroundPos();
    /* 80BCB310 */ void Insect_Release();
    /* 80BCB320 */ void Z_BufferChk();
    /* 80BCB49C */ void ParticleSet();
    /* 80BCB5C0 */ void BoomChk();
    /* 80BCB87C */ void Execute();
    /* 80BCBB40 */ void ObjHit();
    /* 80BCBCA8 */ void Delete();
    /* 80BCBD10 */ void setBaseMtx();
    /* 80BCBE70 */ void CreateChk();
    /* 80BCC01C */ void create();
};

struct dSv_event_c {
    /* 800349BC */ void isEventBit(u16) const;
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
    struct level_c {
        /* 8004B918 */ void getEmitter(u32);
    };

    /* 8004D4CC */ void set(u32, u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*,
                            cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*,
                            _GXColor const*, cXyz const*, f32);
};

struct dMenu_Insect_c {
    /* 801D9F3C */ void isCatchNotGiveInsect(u8);
};

struct dInsect_c {
    /* 8015E010 */ dInsect_c();
    /* 8015E078 */ void Insect_GetDemoMain();
};

struct dDlst_peekZ_c {
    /* 80056018 */ void newData(s16, s16, u32*);
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcSph {};

struct dCcD_Sph {
    /* 80084A34 */ void Set(dCcD_SrcSph const&);
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 80084460 */ void ChkTgHit();
    /* 800844F8 */ void GetTgHitObj();
    /* 80084548 */ void GetTgHitGObj();
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 80BCC458 */ ~dBgS_ObjAcch();
};

struct dBgS_LinChk {
    /* 80077C68 */ dBgS_LinChk();
    /* 80077CDC */ ~dBgS_LinChk();
    /* 80077D64 */ void Set(cXyz const*, cXyz const*, fopAc_ac_c const*);
};

struct dBgS_GndChk {
    /* 8007757C */ dBgS_GndChk();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
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
    /* 80BCC3C8 */ ~cM3dGSph();
};

struct cM3dGPla {
    /* 80BCB834 */ ~cM3dGPla();
};

struct cM3dGAab {
    /* 80BCC410 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cBgS_PolyInfo {};

struct cBgS_LinChk {};

struct cBgS_GndChk {
    /* 80267D28 */ void SetPos(cXyz const*);
};

struct cBgS {
    /* 800743B4 */ void LineCross(cBgS_LinChk*);
    /* 800744A0 */ void GroundCross(cBgS_GndChk*);
    /* 80074744 */ void GetTriPla(cBgS_PolyInfo const&, cM3dGPla*) const;
};

struct _GXTexObj {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80BCA700 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

extern "C" void __ct__14daObj_ChoHIO_cFv();
extern "C" void InitCcSph__10daObjCHO_cFv();
extern "C" void SetCcSph__10daObjCHO_cFv();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void CreateHeap__10daObjCHO_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daObjCHO_Create__FP10fopAc_ac_c();
extern "C" static void daObjCHO_Delete__FP10daObjCHO_c();
extern "C" void SpeedSet__10daObjCHO_cFv();
extern "C" void WallCheck__10daObjCHO_cFv();
extern "C" void SearchLink__10daObjCHO_cFv();
extern "C" void WaitAction__10daObjCHO_cFv();
extern "C" void MoveAction__10daObjCHO_cFv();
extern "C" void Action__10daObjCHO_cFv();
extern "C" void ShopAction__10daObjCHO_cFv();
extern "C" void checkGroundPos__10daObjCHO_cFv();
extern "C" void Insect_Release__10daObjCHO_cFv();
extern "C" void Z_BufferChk__10daObjCHO_cFv();
extern "C" void ParticleSet__10daObjCHO_cFv();
extern "C" void BoomChk__10daObjCHO_cFv();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" void Execute__10daObjCHO_cFv();
extern "C" void ObjHit__10daObjCHO_cFv();
extern "C" void Delete__10daObjCHO_cFv();
extern "C" void setBaseMtx__10daObjCHO_cFv();
extern "C" static void daObjCHO_Draw__FP10daObjCHO_c();
extern "C" static void daObjCHO_Execute__FP10daObjCHO_c();
extern "C" void CreateChk__10daObjCHO_cFv();
extern "C" void create__10daObjCHO_cFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" static bool daObjCHO_IsDelete__FP10daObjCHO_c();
extern "C" void __dt__14daObj_ChoHIO_cFv();
extern "C" void __sinit_d_a_obj_cho_cpp();
extern "C" static void func_80BCC554();
extern "C" static void func_80BCC55C();
extern "C" extern char const* const d_a_obj_cho__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void scaleM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void mDoLib_project__FP3VecP3Vec();
extern "C" void mDoLib_pos2camera__FP3VecP3Vec();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGd_setSimpleShadow__FP4cXyzffR13cBgS_PolyInfosfP9_GXTexObj();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void newData__13dDlst_peekZ_cFssPUl();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void __ct__9dInsect_cFv();
extern "C" void Insect_GetDemoMain__9dInsect_cFv();
extern "C" void initOffset__20daPy_boomerangMove_cFPC4cXyz();
extern "C" void posMove__20daPy_boomerangMove_cFP4cXyzPsP10fopAc_ac_cs();
extern "C" void bgCheckAfterOffset__20daPy_boomerangMove_cFPC4cXyz();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void isCatchNotGiveInsect__14dMenu_Insect_cFUc();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalcPos__FP4cXyzRC4cXyzfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void cLib_chasePos__FP4cXyzRC4cXyzf();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void __ct__10Z2CreatureFv();
extern "C" void init__10Z2CreatureFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXMultVec();
extern "C" void PSVECSquareMag();
extern "C" void PSVECSquareDistance();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void strcmp();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_env_light[4880];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" extern u32 __float_nan;
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80BCC578-80BCC57C 000000 0004+00 10/10 0/0 0/0 .rodata          @3775 */
SECTION_RODATA static u32 const lit_3775 = 0x3F4CCCCD;
SECTION_DEAD void* const cg_80BCC578 = (void*)(&lit_3775);

/* 80BCC688-80BCC6A8 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjCHO_Method */
SECTION_DATA static void* l_daObjCHO_Method[8] = {
    (void*)daObjCHO_Create__FP10fopAc_ac_c,
    (void*)daObjCHO_Delete__FP10daObjCHO_c,
    (void*)daObjCHO_Execute__FP10daObjCHO_c,
    (void*)daObjCHO_IsDelete__FP10daObjCHO_c,
    (void*)daObjCHO_Draw__FP10daObjCHO_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80BCC6A8-80BCC6D8 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Cho */
SECTION_DATA extern void* g_profile_Obj_Cho[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01410000, (void*)&g_fpcLf_Method,
    (void*)0x00000A70, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01DE0000, (void*)&l_daObjCHO_Method,
    (void*)0x000C0120, (void*)0x030E0000,
};

/* 80BCC6D8-80BCC6E4 000050 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80BCC6E4-80BCC6F0 00005C 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80BCC6F0-80BCC714 000068 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80BCC55C,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80BCC554,
};

/* 80BCC714-80BCC720 00008C 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGPla */
SECTION_DATA extern void* __vt__8cM3dGPla[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 80BCC720-80BCC72C 000098 000C+00 1/1 0/0 0/0 .data            __vt__10daObjCHO_c */
SECTION_DATA extern void* __vt__10daObjCHO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)Insect_Release__10daObjCHO_cFv,
};

/* 80BCC72C-80BCC738 0000A4 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80BCC738-80BCC744 0000B0 000C+00 2/2 0/0 0/0 .data            __vt__14daObj_ChoHIO_c */
SECTION_DATA extern void* __vt__14daObj_ChoHIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14daObj_ChoHIO_cFv,
};

/* 80BCA30C-80BCA334 0000EC 0028+00 1/1 0/0 0/0 .text            __ct__14daObj_ChoHIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_ChoHIO_c::daObj_ChoHIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/__ct__14daObj_ChoHIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BCC57C-80BCC5BC 000004 0040+00 1/1 0/0 0/0 .rodata          ccSphSrc$3779 */
SECTION_RODATA static u8 const ccSphSrc[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01, 0x40, 0x02, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80BCC57C = (void*)(&ccSphSrc);

/* 80BCA334-80BCA3A0 000114 006C+00 1/1 0/0 0/0 .text            InitCcSph__10daObjCHO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCHO_c::InitCcSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/InitCcSph__10daObjCHO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BCC5BC-80BCC5C0 000044 0004+00 1/2 0/0 0/0 .rodata          @3788 */
SECTION_RODATA static u32 const lit_3788 = 0x41A00000;
SECTION_DEAD void* const cg_80BCC5BC = (void*)(&lit_3788);

/* 80BCA3A0-80BCA3F8 000180 0058+00 1/1 0/0 0/0 .text            SetCcSph__10daObjCHO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCHO_c::SetCcSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/SetCcSph__10daObjCHO_cFv.s"
}
#pragma pop

/* 80BCA3F8-80BCA418 0001D8 0020+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BCC5C0-80BCC5C4 000048 0004+00 2/7 0/0 0/0 .rodata          @3889 */
SECTION_RODATA static u32 const lit_3889 = 0x3F800000;
SECTION_DEAD void* const cg_80BCC5C0 = (void*)(&lit_3889);

/* 80BCA418-80BCA700 0001F8 02E8+00 1/1 0/0 0/0 .text            CreateHeap__10daObjCHO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCHO_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/CreateHeap__10daObjCHO_cFv.s"
}
#pragma pop

/* 80BCA700-80BCA748 0004E0 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80BCA748-80BCA768 000528 0020+00 1/0 0/0 0/0 .text            daObjCHO_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjCHO_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/daObjCHO_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BCA768-80BCA78C 000548 0024+00 1/0 0/0 0/0 .text            daObjCHO_Delete__FP10daObjCHO_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjCHO_Delete(daObjCHO_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/daObjCHO_Delete__FP10daObjCHO_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BCC5C4-80BCC5C8 00004C 0004+00 1/9 0/0 0/0 .rodata          @3927 */
SECTION_RODATA static u8 const lit_3927[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
SECTION_DEAD void* const cg_80BCC5C4 = (void*)(&lit_3927);

/* 80BCC5C8-80BCC5CC 000050 0004+00 0/1 0/0 0/0 .rodata          @3928 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3928 = 0x3ECCCCCD;
SECTION_DEAD void* const cg_80BCC5C8 = (void*)(&lit_3928);
#pragma pop

/* 80BCC5CC-80BCC5D0 000054 0004+00 0/4 0/0 0/0 .rodata          @3929 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3929 = 0x41200000;
SECTION_DEAD void* const cg_80BCC5CC = (void*)(&lit_3929);
#pragma pop

/* 80BCC5D0-80BCC5D8 000058 0004+04 0/1 0/0 0/0 .rodata          @3930 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3930[1 + 1 /* padding */] = {
    0x3CA3D70A,
    /* padding */
    0x00000000,
};
SECTION_DEAD void* const cg_80BCC5D0 = (void*)(&lit_3930);
#pragma pop

/* 80BCA78C-80BCA88C 00056C 0100+00 1/1 0/0 0/0 .text            SpeedSet__10daObjCHO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCHO_c::SpeedSet() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/SpeedSet__10daObjCHO_cFv.s"
}
#pragma pop

/* 80BCA88C-80BCA924 00066C 0098+00 1/1 0/0 0/0 .text            WallCheck__10daObjCHO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCHO_c::WallCheck() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/WallCheck__10daObjCHO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BCC5D8-80BCC5E0 000060 0008+00 0/3 0/0 0/0 .rodata          @3999 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3999[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80BCC5D8 = (void*)(&lit_3999);
#pragma pop

/* 80BCC5E0-80BCC5E8 000068 0008+00 0/3 0/0 0/0 .rodata          @4000 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4000[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80BCC5E0 = (void*)(&lit_4000);
#pragma pop

/* 80BCC5E8-80BCC5F0 000070 0008+00 0/3 0/0 0/0 .rodata          @4001 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4001[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80BCC5E8 = (void*)(&lit_4001);
#pragma pop

/* 80BCC5F0-80BCC5F4 000078 0004+00 0/1 0/0 0/0 .rodata          @4002 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4002 = 0x43480000;
SECTION_DEAD void* const cg_80BCC5F0 = (void*)(&lit_4002);
#pragma pop

/* 80BCC5F4-80BCC5F8 00007C 0004+00 0/3 0/0 0/0 .rodata          @4003 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4003 = 0x42C80000;
SECTION_DEAD void* const cg_80BCC5F4 = (void*)(&lit_4003);
#pragma pop

/* 80BCC5F8-80BCC5FC 000080 0004+00 0/2 0/0 0/0 .rodata          @4004 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4004 = 0x41F00000;
SECTION_DEAD void* const cg_80BCC5F8 = (void*)(&lit_4004);
#pragma pop

/* 80BCC5FC-80BCC600 000084 0004+00 0/2 0/0 0/0 .rodata          @4005 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4005 = 0x428C0000;
SECTION_DEAD void* const cg_80BCC5FC = (void*)(&lit_4005);
#pragma pop

/* 80BCA924-80BCAB50 000704 022C+00 1/1 0/0 0/0 .text            SearchLink__10daObjCHO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCHO_c::SearchLink() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/SearchLink__10daObjCHO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BCC600-80BCC604 000088 0004+00 0/1 0/0 0/0 .rodata          @4064 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4064 = 0x3D4CCCCD;
SECTION_DEAD void* const cg_80BCC600 = (void*)(&lit_4064);
#pragma pop

/* 80BCC604-80BCC608 00008C 0004+00 0/3 0/0 0/0 .rodata          @4065 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4065 = 0x40A00000;
SECTION_DEAD void* const cg_80BCC604 = (void*)(&lit_4065);
#pragma pop

/* 80BCC608-80BCC60C 000090 0004+00 0/3 0/0 0/0 .rodata          @4066 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4066 = 0xBF800000;
SECTION_DEAD void* const cg_80BCC608 = (void*)(&lit_4066);
#pragma pop

/* 80BCC60C-80BCC610 000094 0004+00 0/2 0/0 0/0 .rodata          @4067 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4067 = 0x40400000;
SECTION_DEAD void* const cg_80BCC60C = (void*)(&lit_4067);
#pragma pop

/* 80BCAB50-80BCAEDC 000930 038C+00 2/2 0/0 0/0 .text            WaitAction__10daObjCHO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCHO_c::WaitAction() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/WaitAction__10daObjCHO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BCC610-80BCC614 000098 0004+00 0/1 0/0 0/0 .rodata          @4136 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4136 = 0x40600000;
SECTION_DEAD void* const cg_80BCC610 = (void*)(&lit_4136);
#pragma pop

/* 80BCC614-80BCC618 00009C 0004+00 0/1 0/0 0/0 .rodata          @4137 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4137 = 0x40000000;
SECTION_DEAD void* const cg_80BCC614 = (void*)(&lit_4137);
#pragma pop

/* 80BCC618-80BCC61C 0000A0 0004+00 0/3 0/0 0/0 .rodata          @4138 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4138 = 0x42480000;
SECTION_DEAD void* const cg_80BCC618 = (void*)(&lit_4138);
#pragma pop

/* 80BCC61C-80BCC620 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4139 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4139 = 0x43160000;
SECTION_DEAD void* const cg_80BCC61C = (void*)(&lit_4139);
#pragma pop

/* 80BCC620-80BCC624 0000A8 0004+00 0/1 0/0 0/0 .rodata          @4140 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4140 = 0x45800000;
SECTION_DEAD void* const cg_80BCC620 = (void*)(&lit_4140);
#pragma pop

/* 80BCC624-80BCC628 0000AC 0004+00 0/2 0/0 0/0 .rodata          @4141 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4141 = 0x3F000000;
SECTION_DEAD void* const cg_80BCC624 = (void*)(&lit_4141);
#pragma pop

/* 80BCC628-80BCC62C 0000B0 0004+00 0/1 0/0 0/0 .rodata          @4142 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4142 = 0x3F333333;
SECTION_DEAD void* const cg_80BCC628 = (void*)(&lit_4142);
#pragma pop

/* 80BCC62C-80BCC630 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4143 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4143 = 0x3E800000;
SECTION_DEAD void* const cg_80BCC62C = (void*)(&lit_4143);
#pragma pop

/* 80BCAEDC-80BCB210 000CBC 0334+00 2/2 0/0 0/0 .text            MoveAction__10daObjCHO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCHO_c::MoveAction() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/MoveAction__10daObjCHO_cFv.s"
}
#pragma pop

/* 80BCB210-80BCB268 000FF0 0058+00 1/1 0/0 0/0 .text            Action__10daObjCHO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCHO_c::Action() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/Action__10daObjCHO_cFv.s"
}
#pragma pop

/* 80BCB268-80BCB2AC 001048 0044+00 1/1 0/0 0/0 .text            ShopAction__10daObjCHO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCHO_c::ShopAction() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/ShopAction__10daObjCHO_cFv.s"
}
#pragma pop

/* 80BCB2AC-80BCB310 00108C 0064+00 1/1 0/0 0/0 .text            checkGroundPos__10daObjCHO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCHO_c::checkGroundPos() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/checkGroundPos__10daObjCHO_cFv.s"
}
#pragma pop

/* 80BCB310-80BCB320 0010F0 0010+00 1/0 0/0 0/0 .text            Insect_Release__10daObjCHO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCHO_c::Insect_Release() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/Insect_Release__10daObjCHO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BCC630-80BCC634 0000B8 0002+02 1/2 0/0 0/0 .rodata          l_cho_itemno */
SECTION_RODATA static u16 const l_cho_itemno[1 + 1 /* padding */] = {
    0xC2C3,
    /* padding */
    0x0000,
};
SECTION_DEAD void* const cg_80BCC630 = (void*)(&l_cho_itemno);

/* 80BCC634-80BCC638 0000BC 0004+00 0/0 0/0 0/0 .rodata          @4226 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4226 = 0x457A0000;
SECTION_DEAD void* const cg_80BCC634 = (void*)(&lit_4226);
#pragma pop

/* 80BCC638-80BCC640 0000C0 0004+04 0/1 0/0 0/0 .rodata          @4227 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4227[1 + 1 /* padding */] = {
    0xC0000000,
    /* padding */
    0x00000000,
};
SECTION_DEAD void* const cg_80BCC638 = (void*)(&lit_4227);
#pragma pop

/* 80BCC640-80BCC648 0000C8 0008+00 0/0 0/0 0/0 .rodata          @4229 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4229[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80BCC640 = (void*)(&lit_4229);
#pragma pop

/* 80BCC648-80BCC64C 0000D0 0004+00 0/1 0/0 0/0 .rodata          @4268 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4268 = 0x44180000;
SECTION_DEAD void* const cg_80BCC648 = (void*)(&lit_4268);
#pragma pop

/* 80BCC64C-80BCC650 0000D4 0004+00 0/1 0/0 0/0 .rodata          @4269 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4269 = 0x43E00000;
SECTION_DEAD void* const cg_80BCC64C = (void*)(&lit_4269);
#pragma pop

/* 80BCC650-80BCC658 0000D8 0004+04 0/1 0/0 0/0 .rodata          @4270 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4270[1 + 1 /* padding */] = {
    0x4B7FFFFF,
    /* padding */
    0x00000000,
};
SECTION_DEAD void* const cg_80BCC650 = (void*)(&lit_4270);
#pragma pop

/* 80BCB320-80BCB49C 001100 017C+00 1/1 0/0 0/0 .text            Z_BufferChk__10daObjCHO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCHO_c::Z_BufferChk() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/Z_BufferChk__10daObjCHO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BCC658-80BCC660 0000E0 0008+00 1/2 0/0 0/0 .rodata          @4300 */
SECTION_RODATA static u8 const lit_4300[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80BCC658 = (void*)(&lit_4300);

/* 80BCB49C-80BCB5C0 00127C 0124+00 1/1 0/0 0/0 .text            ParticleSet__10daObjCHO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCHO_c::ParticleSet() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/ParticleSet__10daObjCHO_cFv.s"
}
#pragma pop

/* 80BCB5C0-80BCB834 0013A0 0274+00 1/1 0/0 0/0 .text            BoomChk__10daObjCHO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCHO_c::BoomChk() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/BoomChk__10daObjCHO_cFv.s"
}
#pragma pop

/* 80BCB834-80BCB87C 001614 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGPlaFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGPla::~cM3dGPla() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/__dt__8cM3dGPlaFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BCC660-80BCC664 0000E8 0004+00 0/1 0/0 0/0 .rodata          @4421 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4421 = 0x461C4000;
SECTION_DEAD void* const cg_80BCC660 = (void*)(&lit_4421);
#pragma pop

/* 80BCB87C-80BCBB40 00165C 02C4+00 1/1 0/0 0/0 .text            Execute__10daObjCHO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCHO_c::Execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/Execute__10daObjCHO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BCC664-80BCC668 0000EC 0004+00 0/1 0/0 0/0 .rodata          @4452 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4452 = 0x41000000;
SECTION_DEAD void* const cg_80BCC664 = (void*)(&lit_4452);
#pragma pop

/* 80BCBB40-80BCBCA8 001920 0168+00 1/1 0/0 0/0 .text            ObjHit__10daObjCHO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCHO_c::ObjHit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/ObjHit__10daObjCHO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BCC750-80BCC754 000008 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_80BCC750[4];

/* 80BCBCA8-80BCBD10 001A88 0068+00 1/1 0/0 0/0 .text            Delete__10daObjCHO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCHO_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/Delete__10daObjCHO_cFv.s"
}
#pragma pop

/* 80BCBD10-80BCBD70 001AF0 0060+00 1/1 0/0 0/0 .text            setBaseMtx__10daObjCHO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCHO_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/setBaseMtx__10daObjCHO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BCC668-80BCC66C 0000F0 0004+00 1/1 0/0 0/0 .rodata          @4516 */
SECTION_RODATA static u32 const lit_4516 = 0x41700000;
SECTION_DEAD void* const cg_80BCC668 = (void*)(&lit_4516);

/* 80BCC66C-80BCC670 0000F4 0004+00 1/1 0/0 0/0 .rodata          @4517 */
SECTION_RODATA static u32 const lit_4517 = 0xBF19999A;
SECTION_DEAD void* const cg_80BCC66C = (void*)(&lit_4517);

/* 80BCBD70-80BCBE50 001B50 00E0+00 1/0 0/0 0/0 .text            daObjCHO_Draw__FP10daObjCHO_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjCHO_Draw(daObjCHO_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/daObjCHO_Draw__FP10daObjCHO_c.s"
}
#pragma pop

/* 80BCBE50-80BCBE70 001C30 0020+00 2/1 0/0 0/0 .text            daObjCHO_Execute__FP10daObjCHO_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjCHO_Execute(daObjCHO_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/daObjCHO_Execute__FP10daObjCHO_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BCC670-80BCC674 0000F8 0004+00 1/2 0/0 0/0 .rodata          l_musiya_num */
SECTION_RODATA static u32 const l_musiya_num = 0x01930194;
SECTION_DEAD void* const cg_80BCC670 = (void*)(&l_musiya_num);

/* 80BCBE70-80BCC01C 001C50 01AC+00 1/1 0/0 0/0 .text            CreateChk__10daObjCHO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCHO_c::CreateChk() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/CreateChk__10daObjCHO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BCC674-80BCC678 0000FC 0004+00 0/1 0/0 0/0 .rodata          @4670 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4670 = 0xC2480000;
SECTION_DEAD void* const cg_80BCC674 = (void*)(&lit_4670);
#pragma pop

/* 80BCC754-80BCC760 00000C 000C+00 1/1 0/0 0/0 .bss             @3770 */
static u8 lit_3770[12];

/* 80BCC760-80BCC770 000018 0010+00 2/2 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[16];

/* 80BCC01C-80BCC3C8 001DFC 03AC+00 1/1 0/0 0/0 .text            create__10daObjCHO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCHO_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/create__10daObjCHO_cFv.s"
}
#pragma pop

/* 80BCC3C8-80BCC410 0021A8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80BCC410-80BCC458 0021F0 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80BCC458-80BCC4C8 002238 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80BCC4C8-80BCC4D0 0022A8 0008+00 1/0 0/0 0/0 .text            daObjCHO_IsDelete__FP10daObjCHO_c
 */
static bool daObjCHO_IsDelete(daObjCHO_c* param_0) {
    return true;
}

/* 80BCC4D0-80BCC518 0022B0 0048+00 2/1 0/0 0/0 .text            __dt__14daObj_ChoHIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_ChoHIO_c::~daObj_ChoHIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/__dt__14daObj_ChoHIO_cFv.s"
}
#pragma pop

/* 80BCC518-80BCC554 0022F8 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_cho_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_cho_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/__sinit_d_a_obj_cho_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80BCC518 = (void*)__sinit_d_a_obj_cho_cpp;
#pragma pop

/* 80BCC554-80BCC55C 002334 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80BCC554() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/func_80BCC554.s"
}
#pragma pop

/* 80BCC55C-80BCC564 00233C 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80BCC55C() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/d_a_obj_cho/func_80BCC55C.s"
}
#pragma pop

/* 80BCC678-80BCC686 000100 000E+00 7/7 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80BCC678 = "I_Cho";
SECTION_DEAD static char const* const stringBase_80BCC67E = "R_SP160";
#pragma pop
