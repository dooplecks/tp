//
// Generated By: dol2asm
// Translation Unit: d_a_obj_dan
//

#include "rel/d/a/obj/d_a_obj_dan/d_a_obj_dan.h"
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

struct daObj_DanHIO_c {
    /* 80BDA58C */ daObj_DanHIO_c();
    /* 80BDC2F0 */ ~daObj_DanHIO_c();
};

struct daObjDAN_c {
    /* 80BDA5B4 */ void InitCcSph();
    /* 80BDA620 */ void SetCcSph();
    /* 80BDA698 */ void CreateHeap();
    /* 80BDAA3C */ void SpeedSet();
    /* 80BDAA9C */ void LinkChk();
    /* 80BDAB14 */ void MoveAction();
    /* 80BDAC10 */ void DamageAction();
    /* 80BDAFDC */ void Action();
    /* 80BDB074 */ void checkGroundPos();
    /* 80BDB0D8 */ void Insect_Release();
    /* 80BDB0E8 */ void Z_BufferChk();
    /* 80BDB264 */ void ParticleSet();
    /* 80BDB388 */ void ObjHit();
    /* 80BDB4E0 */ void BoomChk();
    /* 80BDB62C */ void Execute();
    /* 80BDB928 */ void Delete();
    /* 80BDB990 */ void setBaseMtx();
    /* 80BDBB0C */ void CreateChk();
    /* 80BDBCB8 */ void create();
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

struct dBgS_ObjGndChk {
    /* 80BDC170 */ ~dBgS_ObjGndChk();
};

struct dBgS_ObjAcch {
    /* 80BDC1E8 */ ~dBgS_ObjAcch();
};

struct dBgS_GndChk {
    /* 8007757C */ dBgS_GndChk();
    /* 800775F0 */ ~dBgS_GndChk();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80075F58 */ void SetWall(f32, f32);
};

struct dBgS {};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 80076AAC */ void CrrPos(dBgS&);
    /* 800773A4 */ void ClrMoveBGOnly();
};

struct cM3dGSph {
    /* 8026F648 */ void SetC(cXyz const&);
    /* 8026F708 */ void SetR(f32);
    /* 80BDC258 */ ~cM3dGSph();
};

struct cM3dGAab {
    /* 80BDC2A0 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cBgS_PolyInfo {};

struct cBgS_GndChk {
    /* 80267D28 */ void SetPos(cXyz const*);
};

struct cBgS {
    /* 800744A0 */ void GroundCross(cBgS_GndChk*);
};

struct _GXTexObj {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80BDA9B0 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

extern "C" void __ct__14daObj_DanHIO_cFv();
extern "C" void InitCcSph__10daObjDAN_cFv();
extern "C" void SetCcSph__10daObjDAN_cFv();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void CreateHeap__10daObjDAN_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daObjDAN_Create__FP10fopAc_ac_c();
extern "C" static void daObjDAN_Delete__FP10daObjDAN_c();
extern "C" void SpeedSet__10daObjDAN_cFv();
extern "C" void LinkChk__10daObjDAN_cFv();
extern "C" void MoveAction__10daObjDAN_cFv();
extern "C" void DamageAction__10daObjDAN_cFv();
extern "C" void Action__10daObjDAN_cFv();
extern "C" void checkGroundPos__10daObjDAN_cFv();
extern "C" void Insect_Release__10daObjDAN_cFv();
extern "C" void Z_BufferChk__10daObjDAN_cFv();
extern "C" void ParticleSet__10daObjDAN_cFv();
extern "C" void ObjHit__10daObjDAN_cFv();
extern "C" void BoomChk__10daObjDAN_cFv();
extern "C" void Execute__10daObjDAN_cFv();
extern "C" void Delete__10daObjDAN_cFv();
extern "C" void setBaseMtx__10daObjDAN_cFv();
extern "C" static void daObjDAN_Draw__FP10daObjDAN_c();
extern "C" static void daObjDAN_Execute__FP10daObjDAN_c();
extern "C" void CreateChk__10daObjDAN_cFv();
extern "C" void create__10daObjDAN_cFv();
extern "C" void __dt__14dBgS_ObjGndChkFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" static bool daObjDAN_IsDelete__FP10daObjDAN_c();
extern "C" void __dt__14daObj_DanHIO_cFv();
extern "C" void __sinit_d_a_obj_dan_cpp();
extern "C" static void func_80BDC374();
extern "C" static void func_80BDC37C();
extern "C" static void func_80BDC384();
extern "C" static void func_80BDC38C();
extern "C" static void func_80BDC394();
extern "C" extern char const* const d_a_obj_dan__stringBase0;

//
// External References:
//

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
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
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
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void ClrMoveBGOnly__9dBgS_AcchFv();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
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
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void cLib_chaseAngleS__FPsss();
extern "C" void __ct__10Z2CreatureFv();
extern "C" void init__10Z2CreatureFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void _savegpr_25();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
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
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80BDC3B0-80BDC3B4 000000 0004+00 9/9 0/0 0/0 .rodata          @3775 */
SECTION_RODATA static u32 const lit_3775 = 0x3F800000;
SECTION_DEAD void* const cg_80BDC3B0 = (void*)(&lit_3775);

/* 80BDC47C-80BDC49C -00001 0020+00 1/0 0/0 0/0 .data            l_daObjDAN_Method */
SECTION_DATA static void* l_daObjDAN_Method[8] = {
    (void*)daObjDAN_Create__FP10fopAc_ac_c,
    (void*)daObjDAN_Delete__FP10daObjDAN_c,
    (void*)daObjDAN_Execute__FP10daObjDAN_c,
    (void*)daObjDAN_IsDelete__FP10daObjDAN_c,
    (void*)daObjDAN_Draw__FP10daObjDAN_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80BDC49C-80BDC4CC -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Dan */
SECTION_DATA extern void* g_profile_Obj_Dan[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01440000, (void*)&g_fpcLf_Method,
    (void*)0x00000A6C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01E10000, (void*)&l_daObjDAN_Method,
    (void*)0x000C0120, (void*)0x030E0000,
};

/* 80BDC4CC-80BDC4FC 000050 0030+00 2/2 0/0 0/0 .data            __vt__14dBgS_ObjGndChk */
SECTION_DATA extern void* __vt__14dBgS_ObjGndChk[12] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14dBgS_ObjGndChkFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80BDC384,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80BDC394,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80BDC38C,
};

/* 80BDC4FC-80BDC520 000080 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80BDC37C,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80BDC374,
};

/* 80BDC520-80BDC52C 0000A4 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80BDC52C-80BDC538 0000B0 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80BDC538-80BDC544 0000BC 000C+00 1/1 0/0 0/0 .data            __vt__10daObjDAN_c */
SECTION_DATA extern void* __vt__10daObjDAN_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)Insect_Release__10daObjDAN_cFv,
};

/* 80BDC544-80BDC550 0000C8 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80BDC550-80BDC55C 0000D4 000C+00 2/2 0/0 0/0 .data            __vt__14daObj_DanHIO_c */
SECTION_DATA extern void* __vt__14daObj_DanHIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14daObj_DanHIO_cFv,
};

/* 80BDA58C-80BDA5B4 0000EC 0028+00 1/1 0/0 0/0 .text            __ct__14daObj_DanHIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_DanHIO_c::daObj_DanHIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/__ct__14daObj_DanHIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BDC3B4-80BDC3F4 000004 0040+00 1/1 0/0 0/0 .rodata          ccSphSrc$3779 */
SECTION_RODATA static u8 const ccSphSrc[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01, 0x40, 0x02, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80BDC3B4 = (void*)(&ccSphSrc);

/* 80BDA5B4-80BDA620 000114 006C+00 1/1 0/0 0/0 .text            InitCcSph__10daObjDAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjDAN_c::InitCcSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/InitCcSph__10daObjDAN_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BDC3F4-80BDC3F8 000044 0004+00 1/2 0/0 0/0 .rodata          @3788 */
SECTION_RODATA static u32 const lit_3788 = 0x41A00000;
SECTION_DEAD void* const cg_80BDC3F4 = (void*)(&lit_3788);

/* 80BDA620-80BDA678 000180 0058+00 1/1 0/0 0/0 .text            SetCcSph__10daObjDAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjDAN_c::SetCcSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/SetCcSph__10daObjDAN_cFv.s"
}
#pragma pop

/* 80BDA678-80BDA698 0001D8 0020+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BDA698-80BDA9B0 0001F8 0318+00 1/1 0/0 0/0 .text            CreateHeap__10daObjDAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjDAN_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/CreateHeap__10daObjDAN_cFv.s"
}
#pragma pop

/* 80BDA9B0-80BDA9F8 000510 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80BDA9F8-80BDAA18 000558 0020+00 1/0 0/0 0/0 .text            daObjDAN_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjDAN_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/daObjDAN_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BDAA18-80BDAA3C 000578 0024+00 1/0 0/0 0/0 .text            daObjDAN_Delete__FP10daObjDAN_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjDAN_Delete(daObjDAN_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/daObjDAN_Delete__FP10daObjDAN_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BDC3F8-80BDC3FC 000048 0004+00 1/1 0/0 0/0 .rodata          @3923 */
SECTION_RODATA static u32 const lit_3923 = 0x3DCCCCCD;
SECTION_DEAD void* const cg_80BDC3F8 = (void*)(&lit_3923);

/* 80BDC3FC-80BDC400 00004C 0004+00 1/3 0/0 0/0 .rodata          @3924 */
SECTION_RODATA static u32 const lit_3924 = 0x41200000;
SECTION_DEAD void* const cg_80BDC3FC = (void*)(&lit_3924);

/* 80BDAA3C-80BDAA9C 00059C 0060+00 2/2 0/0 0/0 .text            SpeedSet__10daObjDAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjDAN_c::SpeedSet() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/SpeedSet__10daObjDAN_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BDC400-80BDC404 000050 0004+00 2/5 0/0 0/0 .rodata          @3938 */
SECTION_RODATA static u32 const lit_3938 = 0x42480000;
SECTION_DEAD void* const cg_80BDC400 = (void*)(&lit_3938);

/* 80BDC404-80BDC408 000054 0004+00 3/9 0/0 0/0 .rodata          @3939 */
SECTION_RODATA static u8 const lit_3939[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
SECTION_DEAD void* const cg_80BDC404 = (void*)(&lit_3939);

/* 80BDAA9C-80BDAB14 0005FC 0078+00 1/1 0/0 0/0 .text            LinkChk__10daObjDAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjDAN_c::LinkChk() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/LinkChk__10daObjDAN_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BDC408-80BDC40C 000058 0004+00 1/1 0/0 0/0 .rodata          @3960 */
SECTION_RODATA static u32 const lit_3960 = 0x44098000;
SECTION_DEAD void* const cg_80BDC408 = (void*)(&lit_3960);

/* 80BDAB14-80BDAC10 000674 00FC+00 2/2 0/0 0/0 .text            MoveAction__10daObjDAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjDAN_c::MoveAction() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/MoveAction__10daObjDAN_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BDC40C-80BDC410 00005C 0004+00 0/1 0/0 0/0 .rodata          @4045 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4045 = 0x3FC00000;
SECTION_DEAD void* const cg_80BDC40C = (void*)(&lit_4045);
#pragma pop

/* 80BDC410-80BDC414 000060 0004+00 0/4 0/0 0/0 .rodata          @4046 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4046 = 0x40A00000;
SECTION_DEAD void* const cg_80BDC410 = (void*)(&lit_4046);
#pragma pop

/* 80BDC414-80BDC418 000064 0004+00 0/4 0/0 0/0 .rodata          @4047 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4047 = 0xBF800000;
SECTION_DEAD void* const cg_80BDC414 = (void*)(&lit_4047);
#pragma pop

/* 80BDC418-80BDC41C 000068 0004+00 0/3 0/0 0/0 .rodata          @4048 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4048 = 0xC0400000;
SECTION_DEAD void* const cg_80BDC418 = (void*)(&lit_4048);
#pragma pop

/* 80BDC41C-80BDC420 00006C 0004+00 0/3 0/0 0/0 .rodata          @4049 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4049 = 0x3F000000;
SECTION_DEAD void* const cg_80BDC41C = (void*)(&lit_4049);
#pragma pop

/* 80BDC420-80BDC424 000070 0004+00 1/2 0/0 0/0 .rodata          @4050 */
SECTION_RODATA static u32 const lit_4050 = 0x41700000;
SECTION_DEAD void* const cg_80BDC420 = (void*)(&lit_4050);

/* 80BDC424-80BDC428 000074 0004+00 0/1 0/0 0/0 .rodata          @4051 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4051 = 0xBF000000;
SECTION_DEAD void* const cg_80BDC424 = (void*)(&lit_4051);
#pragma pop

/* 80BDC428-80BDC42C 000078 0004+00 0/1 0/0 0/0 .rodata          @4052 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4052 = 0x40000000;
SECTION_DEAD void* const cg_80BDC428 = (void*)(&lit_4052);
#pragma pop

/* 80BDAC10-80BDAFDC 000770 03CC+00 2/2 0/0 0/0 .text            DamageAction__10daObjDAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjDAN_c::DamageAction() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/DamageAction__10daObjDAN_cFv.s"
}
#pragma pop

/* 80BDAFDC-80BDB074 000B3C 0098+00 1/1 0/0 0/0 .text            Action__10daObjDAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjDAN_c::Action() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/Action__10daObjDAN_cFv.s"
}
#pragma pop

/* 80BDB074-80BDB0D8 000BD4 0064+00 1/1 0/0 0/0 .text            checkGroundPos__10daObjDAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjDAN_c::checkGroundPos() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/checkGroundPos__10daObjDAN_cFv.s"
}
#pragma pop

/* 80BDB0D8-80BDB0E8 000C38 0010+00 1/0 0/0 0/0 .text            Insect_Release__10daObjDAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjDAN_c::Insect_Release() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/Insect_Release__10daObjDAN_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BDC42C-80BDC430 00007C 0002+02 1/2 0/0 0/0 .rodata          l_dan_itemno */
SECTION_RODATA static u16 const l_dan_itemno[1 + 1 /* padding */] = {
    0xCACB,
    /* padding */
    0x0000,
};
SECTION_DEAD void* const cg_80BDC42C = (void*)(&l_dan_itemno);

/* 80BDC430-80BDC434 000080 0004+00 0/1 0/0 0/0 .rodata          @4126 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4126 = 0x44180000;
SECTION_DEAD void* const cg_80BDC430 = (void*)(&lit_4126);
#pragma pop

/* 80BDC434-80BDC438 000084 0004+00 0/1 0/0 0/0 .rodata          @4127 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4127 = 0x43E00000;
SECTION_DEAD void* const cg_80BDC434 = (void*)(&lit_4127);
#pragma pop

/* 80BDC438-80BDC440 000088 0004+04 0/1 0/0 0/0 .rodata          @4128 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4128[1 + 1 /* padding */] = {
    0x4B7FFFFF,
    /* padding */
    0x00000000,
};
SECTION_DEAD void* const cg_80BDC438 = (void*)(&lit_4128);
#pragma pop

/* 80BDB0E8-80BDB264 000C48 017C+00 1/1 0/0 0/0 .text            Z_BufferChk__10daObjDAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjDAN_c::Z_BufferChk() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/Z_BufferChk__10daObjDAN_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BDC440-80BDC448 000090 0008+00 1/2 0/0 0/0 .rodata          @4158 */
SECTION_RODATA static u8 const lit_4158[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80BDC440 = (void*)(&lit_4158);

/* 80BDB264-80BDB388 000DC4 0124+00 1/1 0/0 0/0 .text            ParticleSet__10daObjDAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjDAN_c::ParticleSet() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/ParticleSet__10daObjDAN_cFv.s"
}
#pragma pop

/* 80BDB388-80BDB4E0 000EE8 0158+00 1/1 0/0 0/0 .text            ObjHit__10daObjDAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjDAN_c::ObjHit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/ObjHit__10daObjDAN_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BDC448-80BDC44C 000098 0004+00 0/1 0/0 0/0 .rodata          @4188 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4188 = 0x42C80000;
SECTION_DEAD void* const cg_80BDC448 = (void*)(&lit_4188);
#pragma pop

/* 80BDC44C-80BDC450 00009C 0004+00 0/2 0/0 0/0 .rodata          @4236 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4236 = 0x41F00000;
SECTION_DEAD void* const cg_80BDC44C = (void*)(&lit_4236);
#pragma pop

/* 80BDC450-80BDC454 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4237 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4237 = 0x43160000;
SECTION_DEAD void* const cg_80BDC450 = (void*)(&lit_4237);
#pragma pop

/* 80BDB4E0-80BDB62C 001040 014C+00 1/1 0/0 0/0 .text            BoomChk__10daObjDAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjDAN_c::BoomChk() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/BoomChk__10daObjDAN_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BDC454-80BDC458 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4286 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4286 = 0x461C4000;
SECTION_DEAD void* const cg_80BDC454 = (void*)(&lit_4286);
#pragma pop

/* 80BDB62C-80BDB928 00118C 02FC+00 1/1 0/0 0/0 .text            Execute__10daObjDAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjDAN_c::Execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/Execute__10daObjDAN_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BDC568-80BDC56C 000008 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_80BDC568[4];

/* 80BDB928-80BDB990 001488 0068+00 1/1 0/0 0/0 .text            Delete__10daObjDAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjDAN_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/Delete__10daObjDAN_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BDC458-80BDC45C 0000A8 0004+00 1/1 0/0 0/0 .rodata          @4311 */
SECTION_RODATA static u32 const lit_4311 = 0xC0800000;
SECTION_DEAD void* const cg_80BDC458 = (void*)(&lit_4311);

/* 80BDB990-80BDBA0C 0014F0 007C+00 1/1 0/0 0/0 .text            setBaseMtx__10daObjDAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjDAN_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/setBaseMtx__10daObjDAN_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BDC45C-80BDC460 0000AC 0004+00 1/1 0/0 0/0 .rodata          @4354 */
SECTION_RODATA static u32 const lit_4354 = 0xBF19999A;
SECTION_DEAD void* const cg_80BDC45C = (void*)(&lit_4354);

/* 80BDBA0C-80BDBAEC 00156C 00E0+00 1/0 0/0 0/0 .text            daObjDAN_Draw__FP10daObjDAN_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjDAN_Draw(daObjDAN_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/daObjDAN_Draw__FP10daObjDAN_c.s"
}
#pragma pop

/* 80BDBAEC-80BDBB0C 00164C 0020+00 2/1 0/0 0/0 .text            daObjDAN_Execute__FP10daObjDAN_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjDAN_Execute(daObjDAN_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/daObjDAN_Execute__FP10daObjDAN_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BDC460-80BDC464 0000B0 0004+00 1/2 0/0 0/0 .rodata          l_musiya_num */
SECTION_RODATA static u32 const l_musiya_num = 0x019B019C;
SECTION_DEAD void* const cg_80BDC460 = (void*)(&l_musiya_num);

/* 80BDBB0C-80BDBCB8 00166C 01AC+00 1/1 0/0 0/0 .text            CreateChk__10daObjDAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjDAN_c::CreateChk() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/CreateChk__10daObjDAN_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BDC464-80BDC468 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4521 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4521 = 0xCE6E6B28;
SECTION_DEAD void* const cg_80BDC464 = (void*)(&lit_4521);
#pragma pop

/* 80BDC468-80BDC46C 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4522 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4522 = 0xC2480000;
SECTION_DEAD void* const cg_80BDC468 = (void*)(&lit_4522);
#pragma pop

/* 80BDC56C-80BDC578 00000C 000C+00 1/1 0/0 0/0 .bss             @3770 */
static u8 lit_3770[12];

/* 80BDC578-80BDC588 000018 0010+00 2/2 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[16];

/* 80BDBCB8-80BDC170 001818 04B8+00 1/1 0/0 0/0 .text            create__10daObjDAN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjDAN_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/create__10daObjDAN_cFv.s"
}
#pragma pop

/* 80BDC170-80BDC1E8 001CD0 0078+00 4/3 0/0 0/0 .text            __dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjGndChk::~dBgS_ObjGndChk() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/__dt__14dBgS_ObjGndChkFv.s"
}
#pragma pop

/* 80BDC1E8-80BDC258 001D48 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80BDC258-80BDC2A0 001DB8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80BDC2A0-80BDC2E8 001E00 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80BDC2E8-80BDC2F0 001E48 0008+00 1/0 0/0 0/0 .text            daObjDAN_IsDelete__FP10daObjDAN_c
 */
static bool daObjDAN_IsDelete(daObjDAN_c* param_0) {
    return true;
}

/* 80BDC2F0-80BDC338 001E50 0048+00 2/1 0/0 0/0 .text            __dt__14daObj_DanHIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_DanHIO_c::~daObj_DanHIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/__dt__14daObj_DanHIO_cFv.s"
}
#pragma pop

/* 80BDC338-80BDC374 001E98 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_dan_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_dan_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/__sinit_d_a_obj_dan_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80BDC338 = (void*)__sinit_d_a_obj_dan_cpp;
#pragma pop

/* 80BDC374-80BDC37C 001ED4 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80BDC374() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/func_80BDC374.s"
}
#pragma pop

/* 80BDC37C-80BDC384 001EDC 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80BDC37C() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/func_80BDC37C.s"
}
#pragma pop

/* 80BDC384-80BDC38C 001EE4 0008+00 1/0 0/0 0/0 .text            @20@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80BDC384() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/func_80BDC384.s"
}
#pragma pop

/* 80BDC38C-80BDC394 001EEC 0008+00 1/0 0/0 0/0 .text            @76@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80BDC38C() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/func_80BDC38C.s"
}
#pragma pop

/* 80BDC394-80BDC39C 001EF4 0008+00 1/0 0/0 0/0 .text            @60@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80BDC394() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/d_a_obj_dan/func_80BDC394.s"
}
#pragma pop

/* 80BDC46C-80BDC47A 0000BC 000E+00 7/7 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80BDC46C = "I_Dan";
SECTION_DEAD static char const* const stringBase_80BDC472 = "R_SP160";
#pragma pop
