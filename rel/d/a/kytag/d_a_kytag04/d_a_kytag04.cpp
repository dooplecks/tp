//
// Generated By: dol2asm
// Translation Unit: d_a_kytag04
//

#include "rel/d/a/kytag/d_a_kytag04/d_a_kytag04.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

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

struct kytag04_class {};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct dSv_memBit_c {
    /* 80034860 */ void isSwitch(int) const;
};

struct dSv_light_drop_c {
    /* 80034340 */ void getLightDropNum(u8) const;
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dPa_levelEcallBack {};

struct csXyz {};

struct cXyz {};

struct _GXColor {};

struct dKy_tevstr_c {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

struct dEvt_control_c {
    /* 80042518 */ void reset(void*);
};

struct dComIfG_play_c {
    /* 8002C97C */ void getLayerNo(int);
};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct JPABaseEmitter {
    /* 8027EC60 */ void deleteAllParticle();
};

struct J3DModelData {};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 8046D9C8 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

extern "C" static void daKytag04_Draw__FP13kytag04_class();
extern "C" static void daKytag04_Execute__FP13kytag04_class();
extern "C" static bool daKytag04_IsDelete__FP13kytag04_class();
extern "C" static void daKytag04_Delete__FP13kytag04_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daKytag04_Create__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" extern char const* const d_a_kytag04__stringBase0;

//
// External References:
//

extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_orderOtherEvent__FP10fopAc_ac_cPCcUsUsUs();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void dStage_changeScene__FifUlScsi();
extern "C" void getLayerNo__14dComIfG_play_cFi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getLightDropNum__16dSv_light_drop_cCFUc();
extern "C" void isSwitch__12dSv_memBit_cCFi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFPv();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void daNpcF_getPlayerInfoFromPlayerList__FiiR4cXyzR5csXyz();
extern "C" void dKy_darkworld_check__Fv();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void deleteAllParticle__14JPABaseEmitterFv();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" void strcmp();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 struct_80450D64[4];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 8046DA18-8046DA1C 000000 0004+00 2/2 0/0 0/0 .rodata          @3960 */
SECTION_RODATA static u32 const lit_3960 = 0x41A00000;
SECTION_DEAD void* const cg_8046DA18 = (void*)(&lit_3960);

/* 8046DA1C-8046DA20 000004 0004+00 0/1 0/0 0/0 .rodata          @3961 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3961 = 0x45BB8000;
SECTION_DEAD void* const cg_8046DA1C = (void*)(&lit_3961);
#pragma pop

/* 8046DA20-8046DA24 000008 0004+00 1/3 0/0 0/0 .rodata          @3962 */
SECTION_RODATA static u8 const lit_3962[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
SECTION_DEAD void* const cg_8046DA20 = (void*)(&lit_3962);

/* 8046DA24-8046DA28 00000C 0004+00 1/2 0/0 0/0 .rodata          @3963 */
SECTION_RODATA static u32 const lit_3963 = 0x4479C000;
SECTION_DEAD void* const cg_8046DA24 = (void*)(&lit_3963);

/* 8046DA28-8046DA2C 000010 0004+00 1/3 0/0 0/0 .rodata          @3964 */
SECTION_RODATA static u32 const lit_3964 = 0x3F800000;
SECTION_DEAD void* const cg_8046DA28 = (void*)(&lit_3964);

/* 8046DA2C-8046DA30 000014 0004+00 0/1 0/0 0/0 .rodata          @3965 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3965 = 0x3E800000;
SECTION_DEAD void* const cg_8046DA2C = (void*)(&lit_3965);
#pragma pop

/* 8046DA30-8046DA34 000018 0004+00 0/1 0/0 0/0 .rodata          @3966 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3966 = 0x3C4CCCCD;
SECTION_DEAD void* const cg_8046DA30 = (void*)(&lit_3966);
#pragma pop

/* 8046DA34-8046DA38 00001C 0004+00 0/1 0/0 0/0 .rodata          @3967 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3967 = 0x38D1B717;
SECTION_DEAD void* const cg_8046DA34 = (void*)(&lit_3967);
#pragma pop

/* 8046DA38-8046DA3C 000020 0004+00 0/1 0/0 0/0 .rodata          @3968 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3968 = 0x3F000000;
SECTION_DEAD void* const cg_8046DA38 = (void*)(&lit_3968);
#pragma pop

/* 8046DA3C-8046DA40 000024 0004+00 0/1 0/0 0/0 .rodata          @3969 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3969 = 0x3CA3D70A;
SECTION_DEAD void* const cg_8046DA3C = (void*)(&lit_3969);
#pragma pop

/* 8046CB58-8046CFE8 000078 0490+00 1/0 0/0 0/0 .text            daKytag04_Draw__FP13kytag04_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daKytag04_Draw(kytag04_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag04/d_a_kytag04/daKytag04_Draw__FP13kytag04_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 8046DA40-8046DA48 000028 0004+04 0/1 0/0 0/0 .rodata          @4066 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4066[1 + 1 /* padding */] = {
    0xBF800000,
    /* padding */
    0x00000000,
};
SECTION_DEAD void* const cg_8046DA40 = (void*)(&lit_4066);
#pragma pop

/* 8046CFE8-8046D354 000508 036C+00 1/0 0/0 0/0 .text daKytag04_Execute__FP13kytag04_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daKytag04_Execute(kytag04_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag04/d_a_kytag04/daKytag04_Execute__FP13kytag04_class.s"
}
#pragma pop

/* 8046D354-8046D35C 000874 0008+00 1/0 0/0 0/0 .text daKytag04_IsDelete__FP13kytag04_class */
static bool daKytag04_IsDelete(kytag04_class* param_0) {
    return true;
}

/* 8046D35C-8046D474 00087C 0118+00 1/0 0/0 0/0 .text            daKytag04_Delete__FP13kytag04_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daKytag04_Delete(kytag04_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag04/d_a_kytag04/daKytag04_Delete__FP13kytag04_class.s"
}
#pragma pop

/* 8046D474-8046D59C 000994 0128+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag04/d_a_kytag04/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 8046DA48-8046DA50 000030 0008+00 1/1 0/0 0/0 .rodata          @4326 */
SECTION_RODATA static u8 const lit_4326[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_8046DA48 = (void*)(&lit_4326);

/* 8046DA78-8046DA98 -00001 0020+00 1/0 0/0 0/0 .data            l_daKytag04_Method */
SECTION_DATA static void* l_daKytag04_Method[8] = {
    (void*)daKytag04_Create__FP10fopAc_ac_c,
    (void*)daKytag04_Delete__FP13kytag04_class,
    (void*)daKytag04_Execute__FP13kytag04_class,
    (void*)daKytag04_IsDelete__FP13kytag04_class,
    (void*)daKytag04_Draw__FP13kytag04_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 8046DA98-8046DAC8 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_KYTAG04 */
SECTION_DATA extern void* g_profile_KYTAG04[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02AE0000, (void*)&g_fpcLf_Method,
    (void*)0x000005D4, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00620000, (void*)&l_daKytag04_Method,
    (void*)0x00044000, (void*)NULL,
};

/* 8046DAC8-8046DAD4 000050 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 8046D59C-8046D9C8 000ABC 042C+00 1/0 0/0 0/0 .text            daKytag04_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daKytag04_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag04/d_a_kytag04/daKytag04_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 8046D9C8-8046DA10 000EE8 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag04/d_a_kytag04/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 8046DA50-8046DA76 000038 0026+00 4/4 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_8046DA50 = "WITHWARP_OPEN";
SECTION_DEAD static char const* const stringBase_8046DA5E = "F_SP104";
SECTION_DEAD static char const* const stringBase_8046DA66 = "Kytag04";
SECTION_DEAD static char const* const stringBase_8046DA6E = "F_SP110";
#pragma pop
