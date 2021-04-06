//
// Generated By: dol2asm
// Translation Unit: d_a_crod
//

#include "rel/d/a/d_a_crod/d_a_crod.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct csXyz {};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
    /* 80267128 */ void atan2sX_Z() const;
};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
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

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daPy_actorKeep_c {
    /* 8015ECB8 */ void setData(fopAc_ac_c*);
    /* 8015ECFC */ void clearData();
};

struct daCrod_c {
    /* 804A2E38 */ void createHeap();
    /* 804A2F18 */ void create();
    /* 804A3304 */ ~daCrod_c();
    /* 804A34B0 */ void setRoomInfo();
    /* 804A34B4 */ void setMatrix();
    /* 804A3500 */ void posMove();
    /* 804A3580 */ void setBckAnm(u16);
    /* 804A35FC */ void setReturn();
    /* 804A365C */ void setLightPower();
    /* 804A36D8 */ void execute();
    /* 804A3FD4 */ void draw();
};

struct J3DAnmBase {};

struct daAlink_c {
    /* 8009D884 */ void getAlinkArcName();
    /* 800A9248 */ void simpleAnmPlay(J3DAnmBase*);
    /* 800E1310 */ void getCopyRodBallSpeed() const;
    /* 800E1320 */ void getCopyRodBallReturnSpeed() const;
    /* 800E1A30 */ void returnCopyRod();
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

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCps {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 804A3240 */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
    /* 800842C0 */ void ChkAtHit();
    /* 80084318 */ void ResetAtHit();
};

struct dCcD_GAtTgCoCommonBase {
    /* 80083688 */ void GetAc();
};

struct dCcD_Cps {
    /* 800847D0 */ void Set(dCcD_SrcCps const&);
};

struct cM3dGLin {
    /* 8026F2E8 */ void SetStartEnd(cXyz const&, cXyz const&);
};

struct cM3dGCps {
    /* 8026EF88 */ cM3dGCps();
    /* 8026EFA4 */ ~cM3dGCps();
};

struct cM3dGAab {
    /* 804A31F8 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 804A409C */ ~cCcD_GStts();
};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct LIGHT_INFLUENCE {};

struct J3DModel {};

struct J3DAnmTevRegKey {
    /* 8032B87C */ void searchUpdateMaterialID(J3DModelData*);
};

struct J3DAnmTextureSRTKey {
    /* 8032B1D4 */ void searchUpdateMaterialID(J3DModelData*);
};

struct J3DMaterialTable {
    /* 8032FCC4 */ void entryTexMtxAnimator(J3DAnmTextureSRTKey*);
    /* 8032FE70 */ void entryTevRegAnimator(J3DAnmTevRegKey*);
};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 804A329C */ ~J3DFrameCtrl();
};

//
// Forward References:
//

extern "C" void createHeap__8daCrod_cFv();
extern "C" static void daCrod_createHeap__FP10fopAc_ac_c();
extern "C" void create__8daCrod_cFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daCrod_Create__FP10fopAc_ac_c();
extern "C" void __dt__8daCrod_cFv();
extern "C" static void daCrod_Delete__FP8daCrod_c();
extern "C" void setRoomInfo__8daCrod_cFv();
extern "C" void setMatrix__8daCrod_cFv();
extern "C" void posMove__8daCrod_cFv();
extern "C" void setBckAnm__8daCrod_cFUs();
extern "C" void setReturn__8daCrod_cFv();
extern "C" void setLightPower__8daCrod_cFv();
extern "C" void execute__8daCrod_cFv();
extern "C" static void daCrod_Execute__FP8daCrod_c();
extern "C" void draw__8daCrod_cFv();
extern "C" static void daCrod_Draw__FP8daCrod_c();
extern "C" void __dt__10cCcD_GSttsFv();

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_setStageLayer__FPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void GetAc__22dCcD_GAtTgCoCommonBaseFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkAtHit__12dCcD_GObjInfFv();
extern "C" void ResetAtHit__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CpsFRC11dCcD_SrcCps();
extern "C" void getAlinkArcName__9daAlink_cFv();
extern "C" void simpleAnmPlay__9daAlink_cFP10J3DAnmBase();
extern "C" void getCopyRodBallSpeed__9daAlink_cCFv();
extern "C" void getCopyRodBallReturnSpeed__9daAlink_cCFv();
extern "C" void returnCopyRod__9daAlink_cFv();
extern "C" void setData__16daPy_actorKeep_cFP10fopAc_ac_c();
extern "C" void clearData__16daPy_actorKeep_cFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_plight_set__FP15LIGHT_INFLUENCE();
extern "C" void dKy_plight_cut__FP15LIGHT_INFLUENCE();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void atan2sX_Z__4cXyzCFv();
extern "C" void cM_atan2s__Fff();
extern "C" void __ct__8cM3dGCpsFv();
extern "C" void __dt__8cM3dGCpsFv();
extern "C" void SetStartEnd__8cM3dGLinFRC4cXyzRC4cXyz();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void searchUpdateMaterialID__19J3DAnmTextureSRTKeyFP12J3DModelData();
extern "C" void searchUpdateMaterialID__15J3DAnmTevRegKeyFP12J3DModelData();
extern "C" void entryTexMtxAnimator__16J3DMaterialTableFP19J3DAnmTextureSRTKey();
extern "C" void entryTevRegAnimator__16J3DMaterialTableFP15J3DAnmTevRegKey();
extern "C" void PSMTXCopy();
extern "C" void PSMTXMultVec();
extern "C" void PSVECAdd();
extern "C" void PSVECSquareMag();
extern "C" void PSVECSquareDistance();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cps[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CpsAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u32 __float_nan;
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 data_804A4218[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 804A40EC-804A40F8 000000 000C+00 2/2 0/0 0/0 .rodata          @3759 */
SECTION_RODATA static u8 const lit_3759[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_804A40EC = (void*)(&lit_3759);

/* 804A40F8-804A4104 00000C 000C+00 1/2 0/0 0/0 .rodata          l_localRodPos */
SECTION_RODATA static u8 const l_localRodPos[12] = {
    0x42, 0xA2, 0x00, 0x00, 0xC1, 0x48, 0x00, 0x00, 0xC1, 0x40, 0x00, 0x00,
};
SECTION_DEAD void* const cg_804A40F8 = (void*)(&l_localRodPos);

/* 804A4104-804A4108 000018 0004+00 2/3 0/0 0/0 .rodata          @4173 */
SECTION_RODATA static u32 const lit_4173 = 0x3F800000;
SECTION_DEAD void* const cg_804A4104 = (void*)(&lit_4173);

/* 804A2E38-804A2EF8 000078 00C0+00 1/1 0/0 0/0 .text            createHeap__8daCrod_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daCrod_c::createHeap() {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/createHeap__8daCrod_cFv.s"
}
#pragma pop

/* 804A2EF8-804A2F18 000138 0020+00 1/1 0/0 0/0 .text            daCrod_createHeap__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daCrod_createHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/daCrod_createHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 804A413C-804A4188 000000 004C+00 1/1 0/0 0/0 .data            l_atCpsSrc */
SECTION_DATA static u8 l_atCpsSrc[76] = {
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xA0, 0x00, 0x00,
};

/* 804A4188-804A4194 00004C 000C+00 1/1 0/0 0/0 .data            shootInitLocalPos$4524 */
SECTION_DATA static u8 shootInitLocalPos[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 804A4194-804A41B4 -00001 0020+00 1/0 0/0 0/0 .data            l_daCrod_Method */
SECTION_DATA static void* l_daCrod_Method[8] = {
    (void*)daCrod_Create__FP10fopAc_ac_c,
    (void*)daCrod_Delete__FP8daCrod_c,
    (void*)daCrod_Execute__FP8daCrod_c,
    (void*)NULL,
    (void*)daCrod_Draw__FP8daCrod_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 804A41B4-804A41E4 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_CROD */
SECTION_DATA extern void* g_profile_CROD[12] = {
    (void*)0xFFFFFFFD, (void*)0x0008FFFD,
    (void*)0x02F40000, (void*)&g_fpcLf_Method,
    (void*)0x00000750, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02B00000, (void*)&l_daCrod_Method,
    (void*)0x00060000, (void*)0x05000000,
};

/* 804A41E4-804A41F0 0000A8 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 804A41F0-804A41FC 0000B4 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 804A41FC-804A4208 0000C0 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 804A4208-804A4214 0000CC 000C+00 3/3 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 804A2F18-804A31F8 000158 02E0+00 1/1 0/0 0/0 .text            create__8daCrod_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daCrod_c::create() {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/create__8daCrod_cFv.s"
}
#pragma pop

/* 804A31F8-804A3240 000438 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 804A3240-804A329C 000480 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 804A329C-804A32E4 0004DC 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 804A32E4-804A3304 000524 0020+00 1/0 0/0 0/0 .text            daCrod_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daCrod_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/daCrod_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 804A3304-804A3488 000544 0184+00 1/1 0/0 0/0 .text            __dt__8daCrod_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daCrod_c::~daCrod_c() {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/__dt__8daCrod_cFv.s"
}
#pragma pop

/* 804A3488-804A34B0 0006C8 0028+00 1/0 0/0 0/0 .text            daCrod_Delete__FP8daCrod_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daCrod_Delete(daCrod_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/daCrod_Delete__FP8daCrod_c.s"
}
#pragma pop

/* 804A34B0-804A34B4 0006F0 0004+00 2/2 0/0 0/0 .text            setRoomInfo__8daCrod_cFv */
void daCrod_c::setRoomInfo() {
    /* empty function */
}

/* 804A34B4-804A3500 0006F4 004C+00 2/2 0/0 0/0 .text            setMatrix__8daCrod_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daCrod_c::setMatrix() {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/setMatrix__8daCrod_cFv.s"
}
#pragma pop

/* 804A3500-804A3580 000740 0080+00 1/1 0/0 0/0 .text            posMove__8daCrod_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daCrod_c::posMove() {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/posMove__8daCrod_cFv.s"
}
#pragma pop

/* 804A3580-804A35FC 0007C0 007C+00 2/2 0/0 0/0 .text            setBckAnm__8daCrod_cFUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daCrod_c::setBckAnm(u16 param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/setBckAnm__8daCrod_cFUs.s"
}
#pragma pop

/* 804A35FC-804A365C 00083C 0060+00 1/1 0/0 0/0 .text            setReturn__8daCrod_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daCrod_c::setReturn() {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/setReturn__8daCrod_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804A4108-804A410C 00001C 0004+00 0/2 0/0 0/0 .rodata          @4489 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4489 = 0x43960000;
SECTION_DEAD void* const cg_804A4108 = (void*)(&lit_4489);
#pragma pop

/* 804A410C-804A4110 000020 0004+00 0/2 0/0 0/0 .rodata          @4490 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4490 = 0x42480000;
SECTION_DEAD void* const cg_804A410C = (void*)(&lit_4490);
#pragma pop

/* 804A4110-804A4114 000024 0004+00 0/2 0/0 0/0 .rodata          @4491 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4491[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
SECTION_DEAD void* const cg_804A4110 = (void*)(&lit_4491);
#pragma pop

/* 804A365C-804A36D8 00089C 007C+00 2/2 0/0 0/0 .text            setLightPower__8daCrod_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daCrod_c::setLightPower() {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/setLightPower__8daCrod_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804A4114-804A4118 000028 0004+00 0/1 0/0 0/0 .rodata          @4774 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4774 = 0x3D000000;
SECTION_DEAD void* const cg_804A4114 = (void*)(&lit_4774);
#pragma pop

/* 804A4118-804A411C 00002C 0004+00 0/1 0/0 0/0 .rodata          @4775 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4775 = 0x42200000;
SECTION_DEAD void* const cg_804A4118 = (void*)(&lit_4775);
#pragma pop

/* 804A411C-804A4124 000030 0004+04 0/1 0/0 0/0 .rodata          @4776 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4776[1 + 1 /* padding */] = {
    0xBF800000,
    /* padding */
    0x00000000,
};
SECTION_DEAD void* const cg_804A411C = (void*)(&lit_4776);
#pragma pop

/* 804A4124-804A412C 000038 0008+00 0/1 0/0 0/0 .rodata          @4777 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4777[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_804A4124 = (void*)(&lit_4777);
#pragma pop

/* 804A412C-804A4134 000040 0008+00 0/1 0/0 0/0 .rodata          @4778 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4778[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_804A412C = (void*)(&lit_4778);
#pragma pop

/* 804A4134-804A413C 000048 0008+00 0/1 0/0 0/0 .rodata          @4779 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4779[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_804A4134 = (void*)(&lit_4779);
#pragma pop

/* 804A36D8-804A3FB4 000918 08DC+00 1/1 0/0 0/0 .text            execute__8daCrod_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daCrod_c::execute() {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/execute__8daCrod_cFv.s"
}
#pragma pop

/* 804A3FB4-804A3FD4 0011F4 0020+00 1/0 0/0 0/0 .text            daCrod_Execute__FP8daCrod_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daCrod_Execute(daCrod_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/daCrod_Execute__FP8daCrod_c.s"
}
#pragma pop

/* 804A3FD4-804A407C 001214 00A8+00 1/1 0/0 0/0 .text            draw__8daCrod_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daCrod_c::draw() {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/draw__8daCrod_cFv.s"
}
#pragma pop

/* 804A407C-804A409C 0012BC 0020+00 1/0 0/0 0/0 .text            daCrod_Draw__FP8daCrod_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daCrod_Draw(daCrod_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/daCrod_Draw__FP8daCrod_c.s"
}
#pragma pop

/* 804A409C-804A40E4 0012DC 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/__dt__10cCcD_GSttsFv.s"
}
#pragma pop
