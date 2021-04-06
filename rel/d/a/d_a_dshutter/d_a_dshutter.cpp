//
// Generated By: dol2asm
// Translation Unit: d_a_dshutter
//

#include "rel/d/a/d_a_dshutter/d_a_dshutter.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018C8C */ ~fopAc_ac_c();
};

struct cXyz {};

struct fopAcM_wt_c {
    /* 8001DD84 */ void waterCheck(cXyz const*);
};

struct fopAcM_gc_c {
    /* 8001DCBC */ void gndCheck(cXyz const*);
};

struct daDsh_c {
    struct action_c {};

    /* 80467498 */ ~daDsh_c();
    /* 8046751C */ void CreateHeap();
    /* 8046759C */ void Draw();
    /* 80467640 */ void Execute(f32 (**)[3][4]);
    /* 80467694 */ void setMtx();
    /* 80467708 */ void setAction(daDsh_c::action_c*);
    /* 8046772C */ void callInit();
    /* 8046777C */ void callExecute();
    /* 804677D4 */ void initOpenWait();
    /* 804677E4 */ void executeOpenWait();
    /* 80467840 */ void initOpen();
    /* 80467988 */ void executeOpen();
    /* 80467A64 */ void initCloseWait();
    /* 80467A80 */ void executeCloseWait();
    /* 80467ADC */ void initClose();
    /* 80467B04 */ void executeClose();
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

struct J3DModelData {};

struct dKy_tevstr_c {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct JKRHeap {};

struct dComIfG_resLoader_c {
    /* 8002F314 */ dComIfG_resLoader_c();
    /* 8002F328 */ ~dComIfG_resLoader_c();
    /* 8002F3B4 */ void load(char const**, JKRHeap*);
};

struct dBgW {};

struct csXyz {};

struct cBgS_PolyInfo {};

struct dBgS_MoveBgActor {
    /* 80078624 */ dBgS_MoveBgActor();
    /* 80078690 */ bool Create();
    /* 800786A8 */ bool Delete();
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

//
// Forward References:
//

extern "C" void __dt__7daDsh_cFv();
extern "C" void CreateHeap__7daDsh_cFv();
extern "C" void Draw__7daDsh_cFv();
extern "C" void Execute__7daDsh_cFPPA3_A4_f();
extern "C" void setMtx__7daDsh_cFv();
extern "C" void setAction__7daDsh_cFPQ27daDsh_c8action_c();
extern "C" void callInit__7daDsh_cFv();
extern "C" void callExecute__7daDsh_cFv();
extern "C" void initOpenWait__7daDsh_cFv();
extern "C" void executeOpenWait__7daDsh_cFv();
extern "C" void initOpen__7daDsh_cFv();
extern "C" void executeOpen__7daDsh_cFv();
extern "C" void initCloseWait__7daDsh_cFv();
extern "C" void executeCloseWait__7daDsh_cFv();
extern "C" void initClose__7daDsh_cFv();
extern "C" void executeClose__7daDsh_cFv();
extern "C" static void daDsh_Draw__FP7daDsh_c();
extern "C" static void daDsh_Execute__FP7daDsh_c();
extern "C" static bool daDsh_IsDelete__FP7daDsh_c();
extern "C" static void daDsh_Delete__FP7daDsh_c();
extern "C" static void daDsh_Create__FP10fopAc_ac_c();
extern "C" void func_80467DF8(s16*);
extern "C" void __sinit_d_a_dshutter_cpp();
extern "C" extern char const* const d_a_dshutter__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void gndCheck__11fopAcM_gc_cFPC4cXyz();
extern "C" void waterCheck__11fopAcM_wt_cFPC4cXyz();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void __ct__19dComIfG_resLoader_cFv();
extern "C" void __dt__19dComIfG_resLoader_cFv();
extern "C" void load__19dComIfG_resLoader_cFPPCcP7JKRHeap();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool Create__16dBgS_MoveBgActorFv();
extern "C" bool Delete__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cM_rndFX__Ff();
extern "C" void cLib_chaseF__FPfff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void __ptmf_test();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__16dBgS_MoveBgActor[10];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern f32 mGroundY__11fopAcM_gc_c;
extern "C" extern f32 mWaterY__11fopAcM_wt_c[1 + 1 /* padding */];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u32 OPEN_SIZE__7daDsh_c;
extern "C" extern u32 OPEN_ACCEL__7daDsh_c;
extern "C" extern u32 OPEN_SPEED__7daDsh_c;
extern "C" extern u32 OPEN_BOUND_SPEED__7daDsh_c;
extern "C" extern u32 OPEN_BOUND_RATIO__7daDsh_c;
extern "C" extern u32 CLOSE_ACCEL__7daDsh_c;
extern "C" extern u32 CLOSE_SPEED__7daDsh_c;
extern "C" extern u32 CLOSE_BOUND_SPEED__7daDsh_c;
extern "C" extern u32 CLOSE_BOUND_RATIO__7daDsh_c;

//
// Declarations:
//

/* ############################################################################################## */
/* 80467F5C-80467F68 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80467F68-80467F7C 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80467F7C-80467F88 -00001 000C+00 2/2 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName[3] = {
    (void*)&d_a_dshutter__stringBase0,
    (void*)(((char*)&d_a_dshutter__stringBase0) + 0x7),
    (void*)(((char*)&d_a_dshutter__stringBase0) + 0x11),
};

/* 80467F88-80467F94 -00001 000C+00 0/1 0/0 0/0 .data            @3631 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3631[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)initOpenWait__7daDsh_cFv,
};
#pragma pop

/* 80467F94-80467FA0 -00001 000C+00 0/1 0/0 0/0 .data            @3632 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3632[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)executeOpenWait__7daDsh_cFv,
};
#pragma pop

/* 80467FA0-80467FAC -00001 000C+00 0/1 0/0 0/0 .data            @3635 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3635[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)initOpen__7daDsh_cFv,
};
#pragma pop

/* 80467FAC-80467FB8 -00001 000C+00 0/1 0/0 0/0 .data            @3636 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3636[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)executeOpen__7daDsh_cFv,
};
#pragma pop

/* 80467FB8-80467FC4 -00001 000C+00 0/1 0/0 0/0 .data            @3639 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3639[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)initCloseWait__7daDsh_cFv,
};
#pragma pop

/* 80467FC4-80467FD0 -00001 000C+00 0/1 0/0 0/0 .data            @3640 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3640[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)executeCloseWait__7daDsh_cFv,
};
#pragma pop

/* 80467FD0-80467FDC -00001 000C+00 0/1 0/0 0/0 .data            @3643 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3643[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)initClose__7daDsh_cFv,
};
#pragma pop

/* 80467FDC-80467FE8 -00001 000C+00 0/1 0/0 0/0 .data            @3644 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3644[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)executeClose__7daDsh_cFv,
};
#pragma pop

/* 80467FE8-80467FF0 -00001 0008+00 1/1 0/0 0/0 .data l_resName$localstatic3$create__7daDsh_cFv */
SECTION_DATA static void* data_80467FE8[2] = {
    (void*)NULL,
    (void*)(((char*)&d_a_dshutter__stringBase0) + 0x1B),
};

/* 80467FF0-80468010 -00001 0020+00 1/0 0/0 0/0 .data            l_daDsh_Method */
SECTION_DATA static void* l_daDsh_Method[8] = {
    (void*)daDsh_Create__FP10fopAc_ac_c,
    (void*)daDsh_Delete__FP7daDsh_c,
    (void*)daDsh_Execute__FP7daDsh_c,
    (void*)daDsh_IsDelete__FP7daDsh_c,
    (void*)daDsh_Draw__FP7daDsh_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80468010-80468044 -00001 0034+00 0/0 0/0 1/0 .data            g_profile_DSHUTTER */
SECTION_DATA extern void* g_profile_DSHUTTER[13] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x022C0000, (void*)&g_fpcLf_Method,
    (void*)0x000005BC, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01280000, (void*)&l_daDsh_Method,
    (void*)0x00044000, (void*)NULL,
    (void*)NULL,
};

/* 80468044-8046806C 0000E8 0028+00 2/2 0/0 0/0 .data            __vt__7daDsh_c */
SECTION_DATA extern void* __vt__7daDsh_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__7daDsh_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__7daDsh_cFPPA3_A4_f,
    (void*)Draw__7daDsh_cFv,
    (void*)Delete__16dBgS_MoveBgActorFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80467498-8046751C 000078 0084+00 1/1 0/0 0/0 .text            __dt__7daDsh_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daDsh_c::~daDsh_c() {
    nofralloc
#include "asm/rel/d/a/d_a_dshutter/d_a_dshutter/__dt__7daDsh_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80467F04-80467F10 000000 000C+00 2/2 0/0 0/0 .rodata          l_bmd */
SECTION_RODATA static u8 const l_bmd[12] = {
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04,
};
SECTION_DEAD void* const cg_80467F04 = (void*)(&l_bmd);

/* 8046751C-8046759C 0000FC 0080+00 1/0 0/0 0/0 .text            CreateHeap__7daDsh_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDsh_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/d_a_dshutter/d_a_dshutter/CreateHeap__7daDsh_cFv.s"
}
#pragma pop

/* 8046759C-80467640 00017C 00A4+00 1/0 0/0 0/0 .text            Draw__7daDsh_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDsh_c::Draw() {
    nofralloc
#include "asm/rel/d/a/d_a_dshutter/d_a_dshutter/Draw__7daDsh_cFv.s"
}
#pragma pop

/* 80467640-80467694 000220 0054+00 1/0 0/0 0/0 .text            Execute__7daDsh_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDsh_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/d_a_dshutter/d_a_dshutter/Execute__7daDsh_cFPPA3_A4_f.s"
}
#pragma pop

/* 80467694-80467708 000274 0074+00 2/2 0/0 0/0 .text            setMtx__7daDsh_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDsh_c::setMtx() {
    nofralloc
#include "asm/rel/d/a/d_a_dshutter/d_a_dshutter/setMtx__7daDsh_cFv.s"
}
#pragma pop

/* 80467708-8046772C 0002E8 0024+00 5/5 0/0 0/0 .text setAction__7daDsh_cFPQ27daDsh_c8action_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDsh_c::setAction(daDsh_c::action_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_dshutter/d_a_dshutter/setAction__7daDsh_cFPQ27daDsh_c8action_c.s"
}
#pragma pop

/* 8046772C-8046777C 00030C 0050+00 1/1 0/0 0/0 .text            callInit__7daDsh_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDsh_c::callInit() {
    nofralloc
#include "asm/rel/d/a/d_a_dshutter/d_a_dshutter/callInit__7daDsh_cFv.s"
}
#pragma pop

/* 8046777C-804677D4 00035C 0058+00 1/1 0/0 0/0 .text            callExecute__7daDsh_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDsh_c::callExecute() {
    nofralloc
#include "asm/rel/d/a/d_a_dshutter/d_a_dshutter/callExecute__7daDsh_cFv.s"
}
#pragma pop

/* 804677D4-804677E4 0003B4 0010+00 1/0 0/0 0/0 .text            initOpenWait__7daDsh_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDsh_c::initOpenWait() {
    nofralloc
#include "asm/rel/d/a/d_a_dshutter/d_a_dshutter/initOpenWait__7daDsh_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80468070-80468074 000000 0001+03 1/1 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 80468074-80468078 000004 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 80468078-8046807C 000008 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 8046807C-80468080 00000C 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 80468080-80468084 000010 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 80468084-80468088 000014 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 80468088-8046808C 000018 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 8046808C-80468090 00001C 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 80468090-80468094 000020 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 80468094-80468098 000024 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 80468098-8046809C 000028 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 8046809C-804680A0 00002C 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 804680A0-804680A4 000030 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 804680A4-804680A8 000034 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 804680A8-804680AC 000038 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 804680AC-804680B0 00003C 0001+03 0/0 0/0 0/0 .bss             @1009 */
#pragma push
#pragma force_active on
static u8 lit_1009[1 + 3 /* padding */];
#pragma pop

/* 804680B0-804680C8 000040 0018+00 2/3 0/0 0/0 .bss             l_openWaitAction */
static u8 l_openWaitAction[24];

/* 804680C8-804680E0 000058 0018+00 1/2 0/0 0/0 .bss             l_openAction */
static u8 l_openAction[24];

/* 804677E4-80467840 0003C4 005C+00 1/0 0/0 0/0 .text            executeOpenWait__7daDsh_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDsh_c::executeOpenWait() {
    nofralloc
#include "asm/rel/d/a/d_a_dshutter/d_a_dshutter/executeOpenWait__7daDsh_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80467F10-80467F1C 00000C 000C+00 1/1 0/0 0/0 .rodata          l_dzb */
SECTION_RODATA static u8 const l_dzb[12] = {
    0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07,
};
SECTION_DEAD void* const cg_80467F10 = (void*)(&l_dzb);

/* 80467F1C-80467F28 000018 000C+00 1/1 0/0 0/0 .rodata          l_heap_size */
SECTION_RODATA static u8 const l_heap_size[12] = {
    0x00, 0x00, 0x0C, 0x10, 0x00, 0x00, 0x0C, 0x10, 0x00, 0x00, 0x3D, 0x60,
};
SECTION_DEAD void* const cg_80467F1C = (void*)(&l_heap_size);

/* 80467F28-80467F2C 000024 0004+00 1/2 0/0 0/0 .rodata          @3781 */
SECTION_RODATA static u8 const lit_3781[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
SECTION_DEAD void* const cg_80467F28 = (void*)(&lit_3781);

/* 80467F2C-80467F30 000028 0004+00 0/1 0/0 0/0 .rodata          @3782 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3782 = 0x42C80000;
SECTION_DEAD void* const cg_80467F2C = (void*)(&lit_3782);
#pragma pop

/* 80467F30-80467F34 00002C 0004+00 0/1 0/0 0/0 .rodata          @3783 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3783 = 0x3F800000;
SECTION_DEAD void* const cg_80467F30 = (void*)(&lit_3783);
#pragma pop

/* 80467F34-80467F38 000030 0004+00 0/1 0/0 0/0 .rodata          @3784 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3784 = 0xBF800000;
SECTION_DEAD void* const cg_80467F34 = (void*)(&lit_3784);
#pragma pop

/* 80467840-80467988 000420 0148+00 1/0 0/0 0/0 .text            initOpen__7daDsh_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDsh_c::initOpen() {
    nofralloc
#include "asm/rel/d/a/d_a_dshutter/d_a_dshutter/initOpen__7daDsh_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80467F38-80467F3C 000034 0004+00 2/2 0/0 0/0 .rodata          @3802 */
SECTION_RODATA static u32 const lit_3802 = 0x40000000;
SECTION_DEAD void* const cg_80467F38 = (void*)(&lit_3802);

/* 80467F3C-80467F40 000038 0004+00 2/2 0/0 0/0 .rodata          @3803 */
SECTION_RODATA static u32 const lit_3803 = 0x41000000;
SECTION_DEAD void* const cg_80467F3C = (void*)(&lit_3803);

/* 804680E0-804680F8 000070 0018+00 2/3 0/0 0/0 .bss             l_closeWaitAction */
static u8 l_closeWaitAction[24];

/* 80467988-80467A64 000568 00DC+00 1/0 0/0 0/0 .text            executeOpen__7daDsh_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDsh_c::executeOpen() {
    nofralloc
#include "asm/rel/d/a/d_a_dshutter/d_a_dshutter/executeOpen__7daDsh_cFv.s"
}
#pragma pop

/* 80467A64-80467A80 000644 001C+00 1/0 0/0 0/0 .text            initCloseWait__7daDsh_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDsh_c::initCloseWait() {
    nofralloc
#include "asm/rel/d/a/d_a_dshutter/d_a_dshutter/initCloseWait__7daDsh_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804680F8-80468110 000088 0018+00 1/2 0/0 0/0 .bss             l_closeAction */
static u8 l_closeAction[24];

/* 80467A80-80467ADC 000660 005C+00 1/0 0/0 0/0 .text            executeCloseWait__7daDsh_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDsh_c::executeCloseWait() {
    nofralloc
#include "asm/rel/d/a/d_a_dshutter/d_a_dshutter/executeCloseWait__7daDsh_cFv.s"
}
#pragma pop

/* 80467ADC-80467B04 0006BC 0028+00 1/0 0/0 0/0 .text            initClose__7daDsh_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDsh_c::initClose() {
    nofralloc
#include "asm/rel/d/a/d_a_dshutter/d_a_dshutter/initClose__7daDsh_cFv.s"
}
#pragma pop

/* 80467B04-80467BE0 0006E4 00DC+00 1/0 0/0 0/0 .text            executeClose__7daDsh_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDsh_c::executeClose() {
    nofralloc
#include "asm/rel/d/a/d_a_dshutter/d_a_dshutter/executeClose__7daDsh_cFv.s"
}
#pragma pop

/* 80467BE0-80467C0C 0007C0 002C+00 1/0 0/0 0/0 .text            daDsh_Draw__FP7daDsh_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daDsh_Draw(daDsh_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_dshutter/d_a_dshutter/daDsh_Draw__FP7daDsh_c.s"
}
#pragma pop

/* 80467C0C-80467C2C 0007EC 0020+00 1/0 0/0 0/0 .text            daDsh_Execute__FP7daDsh_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daDsh_Execute(daDsh_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_dshutter/d_a_dshutter/daDsh_Execute__FP7daDsh_c.s"
}
#pragma pop

/* 80467C2C-80467C34 00080C 0008+00 1/0 0/0 0/0 .text            daDsh_IsDelete__FP7daDsh_c */
static bool daDsh_IsDelete(daDsh_c* param_0) {
    return true;
}

/* 80467C34-80467C7C 000814 0048+00 1/0 0/0 0/0 .text            daDsh_Delete__FP7daDsh_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daDsh_Delete(daDsh_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_dshutter/d_a_dshutter/daDsh_Delete__FP7daDsh_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80468110-80468114 0000A0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_80468110[4];
#pragma pop

/* 80468114-80468118 0000A4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_80468114[4];
#pragma pop

/* 80468118-8046811C 0000A8 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_80468118[4];
#pragma pop

/* 8046811C-80468120 0000AC 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_8046811C[4];
#pragma pop

/* 80468120-80468124 0000B0 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80468120[4];
#pragma pop

/* 80468124-80468128 0000B4 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80468124[4];
#pragma pop

/* 80468128-8046812C 0000B8 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_80468128[4];
#pragma pop

/* 8046812C-80468130 0000BC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_8046812C[4];
#pragma pop

/* 80468130-80468134 0000C0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_80468130[4];
#pragma pop

/* 80468134-80468138 0000C4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_80468134[4];
#pragma pop

/* 80468138-8046813C 0000C8 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_80468138[4];
#pragma pop

/* 8046813C-80468140 0000CC 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_8046813C[4];
#pragma pop

/* 80468140-80468144 0000D0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_80468140[4];
#pragma pop

/* 80468144-80468148 0000D4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80468144[4];
#pragma pop

/* 80468148-8046814C 0000D8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80468148[4];
#pragma pop

/* 8046814C-80468150 0000DC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_8046814C[4];
#pragma pop

/* 80468150-80468154 0000E0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_80468150[4];
#pragma pop

/* 80468154-80468158 0000E4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80468154[4];
#pragma pop

/* 80468158-8046815C 0000E8 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_80468158[4];
#pragma pop

/* 8046815C-80468160 0000EC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_8046815C[4];
#pragma pop

/* 80468160-80468164 0000F0 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_80468160[4];
#pragma pop

/* 80468164-80468168 0000F4 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80468164[4];
#pragma pop

/* 80468168-8046816C 0000F8 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80468168[4];
#pragma pop

/* 8046816C-80468170 0000FC 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8046816C[4];
#pragma pop

/* 80468170-80468174 000100 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_80468170[4];
#pragma pop

/* 80468174-80468178 000104 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_80468174[4];

/* 80467C7C-80467DF8 00085C 017C+00 1/0 0/0 0/0 .text            daDsh_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daDsh_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_dshutter/d_a_dshutter/daDsh_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80467DF8-80467E14 0009D8 001C+00 1/1 0/0 0/0 .text            cLib_calcTimer<s>__FPs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_80467DF8(s16* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_dshutter/d_a_dshutter/func_80467DF8.s"
}
#pragma pop

/* 80467E14-80467EF8 0009F4 00E4+00 0/0 1/0 0/0 .text            __sinit_d_a_dshutter_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_dshutter_cpp() {
    nofralloc
#include "asm/rel/d/a/d_a_dshutter/d_a_dshutter/__sinit_d_a_dshutter_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80467E14 = (void*)__sinit_d_a_dshutter_cpp;
#pragma pop

/* 80467F40-80467F5C 00003C 001C+00 2/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80467F40 = "K_tetd";
SECTION_DEAD static char const* const stringBase_80467F47 = "S_bsaku00";
SECTION_DEAD static char const* const stringBase_80467F51 = "S_lv7saku";
SECTION_DEAD static char const* const stringBase_80467F5B = "";
#pragma pop
