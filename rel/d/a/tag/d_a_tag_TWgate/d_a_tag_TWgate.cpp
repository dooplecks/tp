//
// Generated By: dol2asm
// Translation Unit: d_a_tag_TWgate
//

#include "rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct cXyz {};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CD9C */ void transM(f32, f32, f32);
};

struct mDoExt_McaMorfCallBack1_c {};

struct J3DModelData {};

struct J3DAnmTransform {};

struct Z2Creature {};

struct mDoExt_McaMorfCallBack2_c {};

struct mDoExt_McaMorfSO {
    /* 800107D0 */ mDoExt_McaMorfSO(J3DModelData*, mDoExt_McaMorfCallBack1_c*,
                                    mDoExt_McaMorfCallBack2_c*, J3DAnmTransform*, int, f32, int,
                                    int, Z2Creature*, u32, u32);
    /* 800110B0 */ void play(u32, s8);
    /* 800111C0 */ void entryDL();
    /* 800111EC */ void modelCalc();
    /* 80011310 */ void stopZelAnime();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daTagTWGate_c {
    /* 80D525F8 */ void initWait();
    /* 80D52604 */ void executeWait();
    /* 80D528F0 */ void initDemoFilone1();
    /* 80D5297C */ void executeDemoFilone1();
    /* 80D52AF4 */ void initDemoFilone2();
    /* 80D52BF0 */ void executeDemoFilone2();
    /* 80D52DB4 */ void initDemoFilone3();
    /* 80D52E7C */ void executeDemoFilone3();
    /* 80D53250 */ void initDemoOrdin1();
    /* 80D532DC */ void executeDemoOrdin1();
    /* 80D53454 */ void initDemoOrdin2();
    /* 80D53550 */ void executeDemoOrdin2();
    /* 80D53714 */ void initDemoOrdin3();
    /* 80D537DC */ void executeDemoOrdin3();
    /* 80D53BD0 */ void initDemoRanail1();
    /* 80D53C5C */ void executeDemoRanail1();
    /* 80D53DD4 */ void initDemoRanail2();
    /* 80D53ED0 */ void executeDemoRanail2();
    /* 80D54094 */ void initDemoRanail3();
    /* 80D54178 */ void executeDemoRanail3();
    /* 80D5456C */ void initDemoHyral1();
    /* 80D545F8 */ void executeDemoHyral1();
    /* 80D54770 */ void initDemoHyral2();
    /* 80D5486C */ void executeDemoHyral2();
    /* 80D54A30 */ void initDemoHyral3();
    /* 80D54AF8 */ void executeDemoHyral3();
    /* 80D54ECC */ void initBaseMtx();
    /* 80D54F88 */ void downloadModels();
    /* 80D5502C */ void initTalk(int, fopAc_ac_c**);
    /* 80D55068 */ void talkProc(int*, int, fopAc_ac_c**);
    /* 80D55160 */ void createHeapCallBack(fopAc_ac_c*);
    /* 80D55180 */ void CreateHeap();
};

struct dSv_player_status_b_c {
    /* 80032BB0 */ void isDarkClearLV(int) const;
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dSv_event_c {
    /* 8003498C */ void onEventBit(u16);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dPa_levelEcallBack {};

struct csXyz {
    /* 802673F4 */ csXyz(s16, s16, s16);
};

struct _GXColor {};

struct dKy_tevstr_c {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

struct dMsgObject_c {
    /* 802382C8 */ void offMsgSendControl();
    /* 802382F4 */ void isMsgSendControl();
};

struct dMsgFlow_c {
    /* 80249F00 */ dMsgFlow_c();
    /* 80249F48 */ ~dMsgFlow_c();
    /* 80249F90 */ void init(fopAc_ac_c*, int, int, fopAc_ac_c**);
    /* 8024A2D8 */ void doFlow(fopAc_ac_c*, fopAc_ac_c**, int);
    /* 8024A538 */ void getMsgNo();
    /* 8024A548 */ void getMsg();
};

struct dEvt_control_c {
    /* 80042468 */ void reset();
    /* 80042518 */ void reset(void*);
    /* 80042914 */ void setSkipProc(void*, int (*)(void*, int), int);
    /* 800429A8 */ void onSkipFade();
};

struct dEvent_manager_c {
    /* 80046800 */ void setObjectArchive(char*);
    /* 80047758 */ void getEventIdx(fopAc_ac_c*, char const*, u8);
    /* 80047A78 */ void endCheck(s16);
    /* 80047B1C */ void getMyStaffId(char const*, fopAc_ac_c*, int);
    /* 80047D4C */ void getIsAddvance(int);
    /* 80047F5C */ void getMyNowCutName(int);
    /* 8004817C */ void cutEnd(int);
};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

//
// Forward References:
//

extern "C" void initWait__13daTagTWGate_cFv();
extern "C" void executeWait__13daTagTWGate_cFv();
extern "C" void initDemoFilone1__13daTagTWGate_cFv();
extern "C" void executeDemoFilone1__13daTagTWGate_cFv();
extern "C" void initDemoFilone2__13daTagTWGate_cFv();
extern "C" void executeDemoFilone2__13daTagTWGate_cFv();
extern "C" void initDemoFilone3__13daTagTWGate_cFv();
extern "C" void executeDemoFilone3__13daTagTWGate_cFv();
extern "C" void initDemoOrdin1__13daTagTWGate_cFv();
extern "C" void executeDemoOrdin1__13daTagTWGate_cFv();
extern "C" void initDemoOrdin2__13daTagTWGate_cFv();
extern "C" void executeDemoOrdin2__13daTagTWGate_cFv();
extern "C" void initDemoOrdin3__13daTagTWGate_cFv();
extern "C" void executeDemoOrdin3__13daTagTWGate_cFv();
extern "C" void initDemoRanail1__13daTagTWGate_cFv();
extern "C" void executeDemoRanail1__13daTagTWGate_cFv();
extern "C" void initDemoRanail2__13daTagTWGate_cFv();
extern "C" void executeDemoRanail2__13daTagTWGate_cFv();
extern "C" void initDemoRanail3__13daTagTWGate_cFv();
extern "C" void executeDemoRanail3__13daTagTWGate_cFv();
extern "C" void initDemoHyral1__13daTagTWGate_cFv();
extern "C" void executeDemoHyral1__13daTagTWGate_cFv();
extern "C" void initDemoHyral2__13daTagTWGate_cFv();
extern "C" void executeDemoHyral2__13daTagTWGate_cFv();
extern "C" void initDemoHyral3__13daTagTWGate_cFv();
extern "C" void executeDemoHyral3__13daTagTWGate_cFv();
extern "C" void initBaseMtx__13daTagTWGate_cFv();
extern "C" void downloadModels__13daTagTWGate_cFv();
extern "C" void initTalk__13daTagTWGate_cFiPP10fopAc_ac_c();
extern "C" void talkProc__13daTagTWGate_cFPiiPP10fopAc_ac_c();
extern "C" void createHeapCallBack__13daTagTWGate_cFP10fopAc_ac_c();
extern "C" void CreateHeap__13daTagTWGate_cFv();
extern "C" static void daTagTWGate_Create__FP10fopAc_ac_c();
extern "C" static void daTagTWGate_Delete__FP13daTagTWGate_c();
extern "C" static void daTagTWGate_Execute__FP13daTagTWGate_c();
extern "C" static void daTagTWGate_Draw__FP13daTagTWGate_c();
extern "C" static bool daTagTWGate_IsDelete__FP13daTagTWGate_c();
extern "C" void __sinit_d_a_tag_TWgate_cpp();
extern "C" extern char const* const d_a_tag_TWgate__stringBase0;
extern "C" extern void* g_profile_Tag_TWGate[12];

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_searchActorDistanceXZ2__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderChangeEventId__FP10fopAc_ac_csUsUs();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_setNextStage__FPCcsScSc();
extern "C" void isDarkClearLV__21dSv_player_status_b_cCFi();
extern "C" void onEventBit__11dSv_event_cFUs();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void reset__14dEvt_control_cFPv();
extern "C" void dEv_noFinishSkipProc__FPvi();
extern "C" void setSkipProc__14dEvt_control_cFPvPFPvi_ii();
extern "C" void onSkipFade__14dEvt_control_cFv();
extern "C" void setObjectArchive__16dEvent_manager_cFPc();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cPCcUc();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void getIsAddvance__16dEvent_manager_cFi();
extern "C" void getMyNowCutName__16dEvent_manager_cFi();
extern "C" void cutEnd__16dEvent_manager_cFi();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void offMsgSendControl__12dMsgObject_cFv();
extern "C" void isMsgSendControl__12dMsgObject_cFv();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void __dt__10dMsgFlow_cFv();
extern "C" void init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c();
extern "C" void doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci();
extern "C" void getMsgNo__10dMsgFlow_cFv();
extern "C" void getMsg__10dMsgFlow_cFv();
extern "C" void __ct__5csXyzFsss();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void PSMTXCopy();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void pow();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* 80D525F8-80D52604 000078 000C+00 1/0 0/0 0/0 .text            initWait__13daTagTWGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::initWait() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/initWait__13daTagTWGate_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D557AC-80D557B0 000000 0001+03 5/5 0/0 0/0 .rodata          mAttr__13daTagTWGate_c */
SECTION_RODATA static u8 const mAttr__13daTagTWGate_c[1 + 3 /* padding */] = {
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
SECTION_DEAD void* const cg_80D557AC = (void*)(&mAttr__13daTagTWGate_c);

/* 80D557B0-80D55820 -00001 0070+00 14/18 0/0 0/0 .rodata          l_zevParamTbl */
SECTION_RODATA static void* const l_zevParamTbl[28] = {
    (void*)&d_a_tag_TWgate__stringBase0,
    (void*)(((char*)&d_a_tag_TWgate__stringBase0) + 0xA),
    (void*)(((char*)&d_a_tag_TWgate__stringBase0) + 0x19),
    (void*)(((char*)&d_a_tag_TWgate__stringBase0) + 0x2D),
    (void*)NULL,
    (void*)(((char*)&d_a_tag_TWgate__stringBase0) + 0x3F),
    (void*)0x0017000A,
    (void*)(((char*)&d_a_tag_TWgate__stringBase0) + 0x47),
    (void*)(((char*)&d_a_tag_TWgate__stringBase0) + 0x51),
    (void*)(((char*)&d_a_tag_TWgate__stringBase0) + 0x5F),
    (void*)(((char*)&d_a_tag_TWgate__stringBase0) + 0x72),
    (void*)0x00000001,
    (void*)(((char*)&d_a_tag_TWgate__stringBase0) + 0x83),
    (void*)0x000A020E,
    (void*)(((char*)&d_a_tag_TWgate__stringBase0) + 0x8B),
    (void*)(((char*)&d_a_tag_TWgate__stringBase0) + 0x95),
    (void*)(((char*)&d_a_tag_TWgate__stringBase0) + 0xA4),
    (void*)(((char*)&d_a_tag_TWgate__stringBase0) + 0xB8),
    (void*)0x00000002,
    (void*)(((char*)&d_a_tag_TWgate__stringBase0) + 0x83),
    (void*)0x000A090E,
    (void*)(((char*)&d_a_tag_TWgate__stringBase0) + 0xCA),
    (void*)(((char*)&d_a_tag_TWgate__stringBase0) + 0xD4),
    (void*)(((char*)&d_a_tag_TWgate__stringBase0) + 0xE2),
    (void*)(((char*)&d_a_tag_TWgate__stringBase0) + 0xF5),
    (void*)0x00000004,
    (void*)(((char*)&d_a_tag_TWgate__stringBase0) + 0x83),
    (void*)0x000A020E,
};
SECTION_DEAD void* const cg_80D557B0 = (void*)(&l_zevParamTbl);

/* 80D55820-80D55824 000074 0004+00 1/1 0/0 0/0 .rodata          @3857 */
SECTION_RODATA static u32 const lit_3857 = 0x42C80000;
SECTION_DEAD void* const cg_80D55820 = (void*)(&lit_3857);

/* 80D55824-80D5582C 000078 0008+00 1/1 0/0 0/0 .rodata          @3858 */
SECTION_RODATA static u8 const lit_3858[8] = {
    0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80D55824 = (void*)(&lit_3858);

/* 80D55974-80D55980 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D55980-80D55994 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80D55994-80D55998 -00001 0004+00 12/12 0/0 0/0 .data            l_myName */
SECTION_DATA static void* l_myName = (void*)(((char*)&d_a_tag_TWgate__stringBase0) + 0x106);

/* 80D55998-80D559A4 -00001 000C+00 0/1 0/0 0/0 .data            @3744 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3744[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)initWait__13daTagTWGate_cFv,
};
#pragma pop

/* 80D559A4-80D559B0 -00001 000C+00 0/1 0/0 0/0 .data            @3745 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3745[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)executeWait__13daTagTWGate_cFv,
};
#pragma pop

/* 80D559B0-80D559BC -00001 000C+00 0/1 0/0 0/0 .data            @3746 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3746[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)initDemoFilone1__13daTagTWGate_cFv,
};
#pragma pop

/* 80D559BC-80D559C8 -00001 000C+00 0/1 0/0 0/0 .data            @3747 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3747[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)executeDemoFilone1__13daTagTWGate_cFv,
};
#pragma pop

/* 80D559C8-80D559D4 -00001 000C+00 0/1 0/0 0/0 .data            @3748 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3748[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)initDemoFilone2__13daTagTWGate_cFv,
};
#pragma pop

/* 80D559D4-80D559E0 -00001 000C+00 0/1 0/0 0/0 .data            @3749 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3749[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)executeDemoFilone2__13daTagTWGate_cFv,
};
#pragma pop

/* 80D559E0-80D559EC -00001 000C+00 0/1 0/0 0/0 .data            @3750 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3750[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)initDemoFilone3__13daTagTWGate_cFv,
};
#pragma pop

/* 80D559EC-80D559F8 -00001 000C+00 0/1 0/0 0/0 .data            @3751 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3751[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)executeDemoFilone3__13daTagTWGate_cFv,
};
#pragma pop

/* 80D559F8-80D55A04 -00001 000C+00 0/1 0/0 0/0 .data            @3752 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3752[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)initDemoOrdin1__13daTagTWGate_cFv,
};
#pragma pop

/* 80D55A04-80D55A10 -00001 000C+00 0/1 0/0 0/0 .data            @3753 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3753[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)executeDemoOrdin1__13daTagTWGate_cFv,
};
#pragma pop

/* 80D55A10-80D55A1C -00001 000C+00 0/1 0/0 0/0 .data            @3754 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3754[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)initDemoOrdin2__13daTagTWGate_cFv,
};
#pragma pop

/* 80D55A1C-80D55A28 -00001 000C+00 0/1 0/0 0/0 .data            @3755 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3755[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)executeDemoOrdin2__13daTagTWGate_cFv,
};
#pragma pop

/* 80D55A28-80D55A34 -00001 000C+00 0/1 0/0 0/0 .data            @3756 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3756[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)initDemoOrdin3__13daTagTWGate_cFv,
};
#pragma pop

/* 80D55A34-80D55A40 -00001 000C+00 0/1 0/0 0/0 .data            @3757 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3757[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)executeDemoOrdin3__13daTagTWGate_cFv,
};
#pragma pop

/* 80D55A40-80D55A4C -00001 000C+00 0/1 0/0 0/0 .data            @3758 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3758[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)initDemoRanail1__13daTagTWGate_cFv,
};
#pragma pop

/* 80D55A4C-80D55A58 -00001 000C+00 0/1 0/0 0/0 .data            @3759 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3759[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)executeDemoRanail1__13daTagTWGate_cFv,
};
#pragma pop

/* 80D55A58-80D55A64 -00001 000C+00 0/1 0/0 0/0 .data            @3760 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3760[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)initDemoRanail2__13daTagTWGate_cFv,
};
#pragma pop

/* 80D55A64-80D55A70 -00001 000C+00 0/1 0/0 0/0 .data            @3761 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3761[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)executeDemoRanail2__13daTagTWGate_cFv,
};
#pragma pop

/* 80D55A70-80D55A7C -00001 000C+00 0/1 0/0 0/0 .data            @3762 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3762[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)initDemoRanail3__13daTagTWGate_cFv,
};
#pragma pop

/* 80D55A7C-80D55A88 -00001 000C+00 0/1 0/0 0/0 .data            @3763 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3763[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)executeDemoRanail3__13daTagTWGate_cFv,
};
#pragma pop

/* 80D55A88-80D55A94 -00001 000C+00 0/1 0/0 0/0 .data            @3764 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3764[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)initDemoHyral1__13daTagTWGate_cFv,
};
#pragma pop

/* 80D55A94-80D55AA0 -00001 000C+00 0/1 0/0 0/0 .data            @3765 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3765[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)executeDemoHyral1__13daTagTWGate_cFv,
};
#pragma pop

/* 80D55AA0-80D55AAC -00001 000C+00 0/1 0/0 0/0 .data            @3766 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3766[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)initDemoHyral2__13daTagTWGate_cFv,
};
#pragma pop

/* 80D55AAC-80D55AB8 -00001 000C+00 0/1 0/0 0/0 .data            @3767 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3767[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)executeDemoHyral2__13daTagTWGate_cFv,
};
#pragma pop

/* 80D55AB8-80D55AC4 -00001 000C+00 0/1 0/0 0/0 .data            @3768 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3768[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)initDemoHyral3__13daTagTWGate_cFv,
};
#pragma pop

/* 80D55AC4-80D55AD0 -00001 000C+00 0/1 0/0 0/0 .data            @3769 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3769[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)executeDemoHyral3__13daTagTWGate_cFv,
};
#pragma pop

/* 80D55AD0-80D55C08 00015C 0138+00 14/15 0/0 0/0 .data            ActionTable__13daTagTWGate_c */
SECTION_DATA static u8 ActionTable__13daTagTWGate_c[312] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D52604-80D528F0 000084 02EC+00 1/0 0/0 0/0 .text            executeWait__13daTagTWGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::executeWait() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/executeWait__13daTagTWGate_cFv.s"
}
#pragma pop

/* 80D528F0-80D5297C 000370 008C+00 1/0 0/0 0/0 .text            initDemoFilone1__13daTagTWGate_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::initDemoFilone1() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/initDemoFilone1__13daTagTWGate_cFv.s"
}
#pragma pop

/* 80D5297C-80D52AF4 0003FC 0178+00 1/0 0/0 0/0 .text executeDemoFilone1__13daTagTWGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::executeDemoFilone1() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/executeDemoFilone1__13daTagTWGate_cFv.s"
}
#pragma pop

/* 80D52AF4-80D52BF0 000574 00FC+00 1/0 0/0 0/0 .text            initDemoFilone2__13daTagTWGate_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::initDemoFilone2() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/initDemoFilone2__13daTagTWGate_cFv.s"
}
#pragma pop

/* 80D52BF0-80D52DB4 000670 01C4+00 1/0 0/0 0/0 .text executeDemoFilone2__13daTagTWGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::executeDemoFilone2() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/executeDemoFilone2__13daTagTWGate_cFv.s"
}
#pragma pop

/* 80D52DB4-80D52E7C 000834 00C8+00 1/0 0/0 0/0 .text            initDemoFilone3__13daTagTWGate_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::initDemoFilone3() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/initDemoFilone3__13daTagTWGate_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D5582C-80D55830 000080 0004+00 1/5 0/0 0/0 .rodata          @4079 */
SECTION_RODATA static u32 const lit_4079 = 0x3F800000;
SECTION_DEAD void* const cg_80D5582C = (void*)(&lit_4079);

/* 80D55830-80D55834 000084 0004+00 1/6 0/0 0/0 .rodata          @4080 */
SECTION_RODATA static u8 const lit_4080[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
SECTION_DEAD void* const cg_80D55830 = (void*)(&lit_4080);

/* 80D55834-80D55838 000088 0004+00 0/4 0/0 0/0 .rodata          @4081 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4081 = 0x43700000;
SECTION_DEAD void* const cg_80D55834 = (void*)(&lit_4081);
#pragma pop

/* 80D55838-80D5583C 00008C 0004+00 0/4 0/0 0/0 .rodata          @4082 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4082 = 0xC4318000;
SECTION_DEAD void* const cg_80D55838 = (void*)(&lit_4082);
#pragma pop

/* 80D5583C-80D55840 000090 0004+00 1/5 0/0 0/0 .rodata          @4083 */
SECTION_RODATA static u32 const lit_4083 = 0xBF800000;
SECTION_DEAD void* const cg_80D5583C = (void*)(&lit_4083);

/* 80D52E7C-80D53250 0008FC 03D4+00 1/0 0/0 0/0 .text executeDemoFilone3__13daTagTWGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::executeDemoFilone3() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/executeDemoFilone3__13daTagTWGate_cFv.s"
}
#pragma pop

/* 80D53250-80D532DC 000CD0 008C+00 1/0 0/0 0/0 .text            initDemoOrdin1__13daTagTWGate_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::initDemoOrdin1() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/initDemoOrdin1__13daTagTWGate_cFv.s"
}
#pragma pop

/* 80D532DC-80D53454 000D5C 0178+00 1/0 0/0 0/0 .text executeDemoOrdin1__13daTagTWGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::executeDemoOrdin1() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/executeDemoOrdin1__13daTagTWGate_cFv.s"
}
#pragma pop

/* 80D53454-80D53550 000ED4 00FC+00 1/0 0/0 0/0 .text            initDemoOrdin2__13daTagTWGate_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::initDemoOrdin2() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/initDemoOrdin2__13daTagTWGate_cFv.s"
}
#pragma pop

/* 80D53550-80D53714 000FD0 01C4+00 1/0 0/0 0/0 .text executeDemoOrdin2__13daTagTWGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::executeDemoOrdin2() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/executeDemoOrdin2__13daTagTWGate_cFv.s"
}
#pragma pop

/* 80D53714-80D537DC 001194 00C8+00 1/0 0/0 0/0 .text            initDemoOrdin3__13daTagTWGate_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::initDemoOrdin3() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/initDemoOrdin3__13daTagTWGate_cFv.s"
}
#pragma pop

/* 80D537DC-80D53BD0 00125C 03F4+00 1/0 0/0 0/0 .text executeDemoOrdin3__13daTagTWGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::executeDemoOrdin3() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/executeDemoOrdin3__13daTagTWGate_cFv.s"
}
#pragma pop

/* 80D53BD0-80D53C5C 001650 008C+00 1/0 0/0 0/0 .text            initDemoRanail1__13daTagTWGate_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::initDemoRanail1() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/initDemoRanail1__13daTagTWGate_cFv.s"
}
#pragma pop

/* 80D53C5C-80D53DD4 0016DC 0178+00 1/0 0/0 0/0 .text executeDemoRanail1__13daTagTWGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::executeDemoRanail1() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/executeDemoRanail1__13daTagTWGate_cFv.s"
}
#pragma pop

/* 80D53DD4-80D53ED0 001854 00FC+00 1/0 0/0 0/0 .text            initDemoRanail2__13daTagTWGate_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::initDemoRanail2() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/initDemoRanail2__13daTagTWGate_cFv.s"
}
#pragma pop

/* 80D53ED0-80D54094 001950 01C4+00 1/0 0/0 0/0 .text executeDemoRanail2__13daTagTWGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::executeDemoRanail2() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/executeDemoRanail2__13daTagTWGate_cFv.s"
}
#pragma pop

/* 80D54094-80D54178 001B14 00E4+00 1/0 0/0 0/0 .text            initDemoRanail3__13daTagTWGate_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::initDemoRanail3() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/initDemoRanail3__13daTagTWGate_cFv.s"
}
#pragma pop

/* 80D54178-80D5456C 001BF8 03F4+00 1/0 0/0 0/0 .text executeDemoRanail3__13daTagTWGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::executeDemoRanail3() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/executeDemoRanail3__13daTagTWGate_cFv.s"
}
#pragma pop

/* 80D5456C-80D545F8 001FEC 008C+00 1/0 0/0 0/0 .text            initDemoHyral1__13daTagTWGate_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::initDemoHyral1() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/initDemoHyral1__13daTagTWGate_cFv.s"
}
#pragma pop

/* 80D545F8-80D54770 002078 0178+00 1/0 0/0 0/0 .text executeDemoHyral1__13daTagTWGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::executeDemoHyral1() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/executeDemoHyral1__13daTagTWGate_cFv.s"
}
#pragma pop

/* 80D54770-80D5486C 0021F0 00FC+00 1/0 0/0 0/0 .text            initDemoHyral2__13daTagTWGate_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::initDemoHyral2() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/initDemoHyral2__13daTagTWGate_cFv.s"
}
#pragma pop

/* 80D5486C-80D54A30 0022EC 01C4+00 1/0 0/0 0/0 .text executeDemoHyral2__13daTagTWGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::executeDemoHyral2() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/executeDemoHyral2__13daTagTWGate_cFv.s"
}
#pragma pop

/* 80D54A30-80D54AF8 0024B0 00C8+00 1/0 0/0 0/0 .text            initDemoHyral3__13daTagTWGate_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::initDemoHyral3() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/initDemoHyral3__13daTagTWGate_cFv.s"
}
#pragma pop

/* 80D54AF8-80D54ECC 002578 03D4+00 1/0 0/0 0/0 .text executeDemoHyral3__13daTagTWGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::executeDemoHyral3() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/executeDemoHyral3__13daTagTWGate_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D55840-80D55844 000094 0004+00 0/1 0/0 0/0 .rodata          @4790 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4790 = 0x437A0000;
SECTION_DEAD void* const cg_80D55840 = (void*)(&lit_4790);
#pragma pop

/* 80D55844-80D55848 000098 0004+00 0/1 0/0 0/0 .rodata          @4791 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4791 = 0xC4520000;
SECTION_DEAD void* const cg_80D55844 = (void*)(&lit_4791);
#pragma pop

/* 80D54ECC-80D54F88 00294C 00BC+00 4/4 0/0 0/0 .text            initBaseMtx__13daTagTWGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/initBaseMtx__13daTagTWGate_cFv.s"
}
#pragma pop

/* 80D54F88-80D5502C 002A08 00A4+00 4/4 0/0 0/0 .text            downloadModels__13daTagTWGate_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::downloadModels() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/downloadModels__13daTagTWGate_cFv.s"
}
#pragma pop

/* 80D5502C-80D55068 002AAC 003C+00 4/4 0/0 0/0 .text initTalk__13daTagTWGate_cFiPP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::initTalk(int param_0, fopAc_ac_c** param_1) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/initTalk__13daTagTWGate_cFiPP10fopAc_ac_c.s"
}
#pragma pop

/* 80D55068-80D55160 002AE8 00F8+00 4/4 0/0 0/0 .text talkProc__13daTagTWGate_cFPiiPP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::talkProc(int* param_0, int param_1, fopAc_ac_c** param_2) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/talkProc__13daTagTWGate_cFPiiPP10fopAc_ac_c.s"
}
#pragma pop

/* 80D55160-80D55180 002BE0 0020+00 1/1 0/0 0/0 .text
 * createHeapCallBack__13daTagTWGate_cFP10fopAc_ac_c            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::createHeapCallBack(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/createHeapCallBack__13daTagTWGate_cFP10fopAc_ac_c.s"
}
#pragma pop

/* 80D55180-80D55288 002C00 0108+00 1/1 0/0 0/0 .text            CreateHeap__13daTagTWGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagTWGate_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/CreateHeap__13daTagTWGate_cFv.s"
}
#pragma pop

/* 80D55288-80D55388 002D08 0100+00 1/0 0/0 0/0 .text            daTagTWGate_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagTWGate_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/daTagTWGate_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D55388-80D5543C 002E08 00B4+00 1/0 0/0 0/0 .text daTagTWGate_Delete__FP13daTagTWGate_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagTWGate_Delete(daTagTWGate_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/daTagTWGate_Delete__FP13daTagTWGate_c.s"
}
#pragma pop

/* 80D5543C-80D554E4 002EBC 00A8+00 1/0 0/0 0/0 .text daTagTWGate_Execute__FP13daTagTWGate_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagTWGate_Execute(daTagTWGate_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/daTagTWGate_Execute__FP13daTagTWGate_c.s"
}
#pragma pop

/* 80D554E4-80D55518 002F64 0034+00 1/0 0/0 0/0 .text            daTagTWGate_Draw__FP13daTagTWGate_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagTWGate_Draw(daTagTWGate_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/daTagTWGate_Draw__FP13daTagTWGate_c.s"
}
#pragma pop

/* 80D55518-80D55520 002F98 0008+00 1/0 0/0 0/0 .text daTagTWGate_IsDelete__FP13daTagTWGate_c */
static bool daTagTWGate_IsDelete(daTagTWGate_c* param_0) {
    return true;
}

/* 80D55520-80D557A0 002FA0 0280+00 0/0 1/0 0/0 .text            __sinit_d_a_tag_TWgate_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_tag_TWgate_cpp() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_TWgate/d_a_tag_TWgate/__sinit_d_a_tag_TWgate_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80D55520 = (void*)__sinit_d_a_tag_TWgate_cpp;
#pragma pop

/* ############################################################################################## */
/* 80D55C08-80D55C28 -00001 0020+00 1/0 0/0 0/0 .data            l_daTagTWGate_Method */
SECTION_DATA static void* l_daTagTWGate_Method[8] = {
    (void*)daTagTWGate_Create__FP10fopAc_ac_c,
    (void*)daTagTWGate_Delete__FP13daTagTWGate_c,
    (void*)daTagTWGate_Execute__FP13daTagTWGate_c,
    (void*)daTagTWGate_IsDelete__FP13daTagTWGate_c,
    (void*)daTagTWGate_Draw__FP13daTagTWGate_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D55C28-80D55C58 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Tag_TWGate */
SECTION_DATA extern void* g_profile_Tag_TWGate[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02C80000, (void*)&g_fpcLf_Method,
    (void*)0x000005E4, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01050000, (void*)&l_daTagTWGate_Method,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 80D55848-80D55971 00009C 0129+00 5/3 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80D55848 = "TWGate_FL";
SECTION_DEAD static char const* const stringBase_80D55852 = "TW_GATE_FILONE";
SECTION_DEAD static char const* const stringBase_80D55861 = "TW_GATE_FILONE_TALK";
SECTION_DEAD static char const* const stringBase_80D55875 = "TW_GATE_FILONE_IN";
SECTION_DEAD static char const* const stringBase_80D55887 = "F_SP108";
SECTION_DEAD static char const* const stringBase_80D5588F = "TWGate_OD";
SECTION_DEAD static char const* const stringBase_80D55899 = "TW_GATE_ORDIN";
SECTION_DEAD static char const* const stringBase_80D558A7 = "TW_GATE_ORDIN_TALK";
SECTION_DEAD static char const* const stringBase_80D558BA = "TW_GATE_ORDIN_IN";
SECTION_DEAD static char const* const stringBase_80D558CB = "F_SP121";
SECTION_DEAD static char const* const stringBase_80D558D3 = "TWGate_RN";
SECTION_DEAD static char const* const stringBase_80D558DD = "TW_GATE_RANAIL";
SECTION_DEAD static char const* const stringBase_80D558EC = "TW_GATE_RANAIL_TALK";
SECTION_DEAD static char const* const stringBase_80D55900 = "TW_GATE_RANAIL_IN";
SECTION_DEAD static char const* const stringBase_80D55912 = "TWGate_HY";
SECTION_DEAD static char const* const stringBase_80D5591C = "TW_GATE_HYRAL";
SECTION_DEAD static char const* const stringBase_80D5592A = "TW_GATE_HYRAL_TALK";
SECTION_DEAD static char const* const stringBase_80D5593D = "TW_GATE_HYRAL_IN";
SECTION_DEAD static char const* const stringBase_80D5594E = "Gate";
SECTION_DEAD static char const* const stringBase_80D55953 = "TWGate_Md";
SECTION_DEAD static char const* const stringBase_80D5595D = "TWGate_Wf";
SECTION_DEAD static char const* const stringBase_80D55967 = "TWGate_Lk";
#pragma pop
