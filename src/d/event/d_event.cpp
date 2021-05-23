//
// Generated By: dol2asm
// Translation Unit: d/event/d_event
//

#include "d/event/d_event.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct mDoGph_gInf_c {
    /* 800080D0 */ void fadeOut(f32);
};

struct mDoCPd_c {
    static u8 m_cpadInfo[256];
};

struct dVibration_c {
    /* 8006FD94 */ void StopQuake(int);
};

struct dSv_event_tmp_flag_c {
    static u8 const tempBitLabels[370 + 2 /* padding */];
};

struct dRes_control_c {
    /* 8003C37C */ void getRes(char const*, char const*, dRes_info_c*, int);
};

struct dMsgObject_c {
    /* 80237994 */ void onKillMessageFlag();
    /* 802379AC */ void setKillMessageFlag();
    /* 80238098 */ void endFlowGroup();
};

struct dEvt_info_c {
    /* 800433F0 */ dEvt_info_c();
    /* 80043428 */ void setEventName(char*);
    /* 80043480 */ void getEventName();
    /* 800434CC */ void beforeProc();
};

struct dEvent_manager_c {
    /* 80046800 */ void setObjectArchive(char*);
    /* 80046DAC */ void endProc(s16, int);
    /* 80046E64 */ void Sequencer();
    /* 800473FC */ void Experts();
    /* 800474BC */ void getEventData(s16);
    /* 80047514 */ void getEventIdx(char const*, u8, s32);
    /* 80047698 */ void getEventIdx(fopAc_ac_c*, u8);
    /* 80047984 */ void order(s16);
    /* 800482CC */ void issueStaff(char const*);
    /* 80048348 */ void cancelStaff(char const*);
};

struct dEvent_exception_c {
    /* 800463F0 */ void setStartDemo(int);
};

struct dEvDtEvent_c {
    /* 80043EFC */ void forceFinish();
};

struct dDemo_c {
    /* 80039CF8 */ void end();

    static u8 m_mode[4];
};

struct dCamera_c {
    /* 801614C4 */ void QuickStart();
};

struct Z2StatusMgr {
    /* 802B61E8 */ void setDemoName(char*);
};

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

//
// Forward References:
//

extern "C" static bool func_80041480();
extern "C" static void func_80041488();
extern "C" void __ct__14dEvt_control_cFv();
extern "C" void __ct__12dEvt_order_cFv();
extern "C" void orderOld__14dEvt_control_cFUsUsUsUsPvPvPCv();
extern "C" void order__14dEvt_control_cFUsUsUsUsPvPvsUc();
extern "C" void setParam__14dEvt_control_cFP12dEvt_order_c();
extern "C" void beforeFlagProc__14dEvt_control_cFP12dEvt_order_c();
extern "C" void afterFlagProc__14dEvt_control_cFP12dEvt_order_c();
extern "C" void commonCheck__14dEvt_control_cFP12dEvt_order_cUsUs();
extern "C" void talkCheck__14dEvt_control_cFP12dEvt_order_c();
extern "C" void talkXyCheck__14dEvt_control_cFP12dEvt_order_c();
extern "C" void catchCheck__14dEvt_control_cFP12dEvt_order_c();
extern "C" void talkEnd__14dEvt_control_cFv();
extern "C" void demoCheck__14dEvt_control_cFP12dEvt_order_c();
extern "C" void demoEnd__14dEvt_control_cFv();
extern "C" void potentialCheck__14dEvt_control_cFP12dEvt_order_c();
extern "C" void doorCheck__14dEvt_control_cFP12dEvt_order_c();
extern "C" void itemCheck__14dEvt_control_cFP12dEvt_order_c();
extern "C" void endProc__14dEvt_control_cFv();
extern "C" void change__14dEvt_control_cFv();
extern "C" void entry__14dEvt_control_cFv();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void reset__14dEvt_control_cFPv();
extern "C" void clearSkipSystem__14dEvt_control_cFv();
extern "C" void dEv_defaultSkipProc__FPvi();
extern "C" void dEv_defaultSkipZev__FPvi();
extern "C" void dEv_defaultSkipStb__FPvi();
extern "C" void dEv_noFinishSkipProc__FPvi();
extern "C" void getSkipEventName__14dEvt_control_cFv();
extern "C" void setSkipProc__14dEvt_control_cFPvPFPvi_ii();
extern "C" void setSkipZev__14dEvt_control_cFPvPc();
extern "C" void onSkipFade__14dEvt_control_cFv();
extern "C" void offSkipFade__14dEvt_control_cFv();
extern "C" void skipper__14dEvt_control_cFv();
extern "C" void Step__14dEvt_control_cFv();
extern "C" void moveApproval__14dEvt_control_cFPv();
extern "C" void compulsory__14dEvt_control_cFPvPCcUs();
extern "C" void remove__14dEvt_control_cFv();
extern "C" void getStageEventDt__14dEvt_control_cFv();
extern "C" void sceneChange__14dEvt_control_cFi();
extern "C" void getPId__14dEvt_control_cFPv();
extern "C" void convPId__14dEvt_control_cFUi();
extern "C" void getStbDemoData__14dEvt_control_cFPc();
extern "C" void __ct__11dEvt_info_cFv();
extern "C" void setEventName__11dEvt_info_cFPc();
extern "C" void getEventName__11dEvt_info_cFv();
extern "C" void beforeProc__11dEvt_info_cFv();
extern "C" void searchMapEventData__14dEvt_control_cFUc();
extern "C" void searchMapEventData__14dEvt_control_cFUcl();
extern "C" void runningEventID__14dEvt_control_cFs();
extern "C" void setPt1__14dEvt_control_cFPv();
extern "C" void setPt2__14dEvt_control_cFPv();
extern "C" void setPtT__14dEvt_control_cFPv();
extern "C" void setPtI__14dEvt_control_cFPv();
extern "C" void setPtI_Id__14dEvt_control_cFUi();
extern "C" void setPtD__14dEvt_control_cFPv();
extern "C" void setGtItm__14dEvt_control_cFUc();
extern "C" extern char const* const d_event_d_event__stringBase0;

//
// External References:
//

extern "C" void fadeOut__13mDoGph_gInf_cFf();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void fopAcM_getItemEventPartner__FPC10fopAc_ac_c();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void getStatusRoomDt__20dStage_roomControl_cFi();
extern "C" void dStage_changeScene4Event__FiScibfUlsi();
extern "C" void dComIfGp_getSelectItem__Fi();
extern "C" void dComIfG_getStageRes__FPCc();
extern "C" void dComIfG_getRoomArcName__Fi();
extern "C" void dComIfGs_onVisitedRoom__Fi();
extern "C" void __dt__12dEvt_order_cFv();
extern "C" void offEventBit__11dSv_event_cFUs();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void dead__12daItemBase_cFv();
extern "C" void end__7dDemo_cFv();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void forceFinish__12dEvDtEvent_cFv();
extern "C" void setStartDemo__18dEvent_exception_cFi();
extern "C" void setObjectArchive__16dEvent_manager_cFPc();
extern "C" void endProc__16dEvent_manager_cFsi();
extern "C" void Sequencer__16dEvent_manager_cFv();
extern "C" void Experts__16dEvent_manager_cFv();
extern "C" void getEventData__16dEvent_manager_cFs();
extern "C" void getEventIdx__16dEvent_manager_cFPCcUcl();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cUc();
extern "C" void order__16dEvent_manager_cFs();
extern "C" void issueStaff__16dEvent_manager_cFPCc();
extern "C" void cancelStaff__16dEvent_manager_cFPCc();
extern "C" void StopQuake__12dVibration_cFi();
extern "C" void QuickStart__9dCamera_cFv();
extern "C" void dCam_getBody__Fv();
extern "C" void onKillMessageFlag__12dMsgObject_cFv();
extern "C" void setKillMessageFlag__12dMsgObject_cFv();
extern "C" void endFlowGroup__12dMsgObject_cFv();
extern "C" void setDemoName__11Z2StatusMgrFPc();
extern "C" void __construct_array();
extern "C" void _savegpr_22();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_22();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" u8 const tempBitLabels__20dSv_event_tmp_flag_c[370 + 2 /* padding */];
extern "C" extern void* __vt__11dEvt_info_c[3 + 1 /* padding */];
extern "C" u8 m_cpadInfo__8mDoCPd_c[256];
extern "C" u8 mDemoArcName__20dStage_roomControl_c[10 + 2 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 struct_80450D64[4];
extern "C" u8 m_mode__7dDemo_c[4];
extern "C" u8 m_midnaActor__9daPy_py_c[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* 80041480-80041488 03BDC0 0008+00 1/1 0/0 0/0 .text event_debug_evnt__21@unnamed@d_event_cpp@Fv
 */
static bool func_80041480() {
    return false;
}

/* 80041488-80041580 03BDC8 00F8+00 1/1 0/0 0/0 .text
 * clear_tmpflag_for_message__21@unnamed@d_event_cpp@Fv         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80041488() {
    nofralloc
#include "asm/d/event/d_event/func_80041488.s"
}
#pragma pop

/* 80041580-800415D4 03BEC0 0054+00 0/0 1/1 0/0 .text            __ct__14dEvt_control_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dEvt_control_c::dEvt_control_c() {
    nofralloc
#include "asm/d/event/d_event/__ct__14dEvt_control_cFv.s"
}
#pragma pop

/* 800415D4-800415D8 03BF14 0004+00 1/1 0/0 0/0 .text            __ct__12dEvt_order_cFv */
dEvt_order_c::dEvt_order_c() {
    /* empty function */
}

/* 800415D8-80041668 03BF18 0090+00 1/1 0/0 0/0 .text orderOld__14dEvt_control_cFUsUsUsUsPvPvPCv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::orderOld(u16 param_0, u16 param_1, u16 param_2, u16 param_3, void* param_4,
                                  void* param_5, void const* param_6) {
    nofralloc
#include "asm/d/event/d_event/orderOld__14dEvt_control_cFUsUsUsUsPvPvPCv.s"
}
#pragma pop

/* 80041668-80041804 03BFA8 019C+00 3/3 13/13 0/0 .text order__14dEvt_control_cFUsUsUsUsPvPvsUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::order(u16 param_0, u16 param_1, u16 param_2, u16 param_3, void* param_4,
                               void* param_5, s16 param_6, u8 param_7) {
    nofralloc
#include "asm/d/event/d_event/order__14dEvt_control_cFUsUsUsUsPvPvsUc.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451EC0-80451EC4 0004C0 0004+00 1/1 0/0 0/0 .sdata2          @4361 */
SECTION_SDATA2 static f32 lit_4361 = 1.0f;

/* 80041804-80041934 03C144 0130+00 5/5 0/0 0/0 .text setParam__14dEvt_control_cFP12dEvt_order_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::setParam(dEvt_order_c* param_0) {
    nofralloc
#include "asm/d/event/d_event/setParam__14dEvt_control_cFP12dEvt_order_c.s"
}
#pragma pop

/* 80041934-80041964 03C274 0030+00 2/2 0/0 0/0 .text
 * beforeFlagProc__14dEvt_control_cFP12dEvt_order_c             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::beforeFlagProc(dEvt_order_c* param_0) {
    nofralloc
#include "asm/d/event/d_event/beforeFlagProc__14dEvt_control_cFP12dEvt_order_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80379D80-80379D80 0063E0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80379D80 = "？？？";
SECTION_DEAD static char const* const stringBase_80379D87 = "ALL";
#pragma pop

/* 80041964-800419A8 03C2A4 0044+00 2/2 0/0 0/0 .text
 * afterFlagProc__14dEvt_control_cFP12dEvt_order_c              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::afterFlagProc(dEvt_order_c* param_0) {
    nofralloc
#include "asm/d/event/d_event/afterFlagProc__14dEvt_control_cFP12dEvt_order_c.s"
}
#pragma pop

/* 800419A8-80041A20 03C2E8 0078+00 4/4 0/0 0/0 .text
 * commonCheck__14dEvt_control_cFP12dEvt_order_cUsUs            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::commonCheck(dEvt_order_c* param_0, u16 param_1, u16 param_2) {
    nofralloc
#include "asm/d/event/d_event/commonCheck__14dEvt_control_cFP12dEvt_order_cUsUs.s"
}
#pragma pop

/* ############################################################################################## */
/* 80379D80-80379D80 0063E0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80379D8B = "DEFAULT_TALK";
SECTION_DEAD static char const* const stringBase_80379D98 = "MHINT_TALK";
#pragma pop

/* 80041A20-80041B58 03C360 0138+00 1/1 0/0 0/0 .text talkCheck__14dEvt_control_cFP12dEvt_order_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::talkCheck(dEvt_order_c* param_0) {
    nofralloc
#include "asm/d/event/d_event/talkCheck__14dEvt_control_cFP12dEvt_order_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80379D80-80379D80 0063E0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80379DA3 = "DEFAULT_TALK_XY";
#pragma pop

/* 80041B58-80041C90 03C498 0138+00 1/1 0/0 0/0 .text
 * talkXyCheck__14dEvt_control_cFP12dEvt_order_c                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::talkXyCheck(dEvt_order_c* param_0) {
    nofralloc
#include "asm/d/event/d_event/talkXyCheck__14dEvt_control_cFP12dEvt_order_c.s"
}
#pragma pop

/* 80041C90-80041D34 03C5D0 00A4+00 1/1 0/0 0/0 .text catchCheck__14dEvt_control_cFP12dEvt_order_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::catchCheck(dEvt_order_c* param_0) {
    nofralloc
#include "asm/d/event/d_event/catchCheck__14dEvt_control_cFP12dEvt_order_c.s"
}
#pragma pop

/* 80041D34-80041DDC 03C674 00A8+00 1/1 0/0 0/0 .text            talkEnd__14dEvt_control_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::talkEnd() {
    nofralloc
#include "asm/d/event/d_event/talkEnd__14dEvt_control_cFv.s"
}
#pragma pop

/* 80041DDC-80041F18 03C71C 013C+00 1/1 0/0 0/0 .text demoCheck__14dEvt_control_cFP12dEvt_order_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::demoCheck(dEvt_order_c* param_0) {
    nofralloc
#include "asm/d/event/d_event/demoCheck__14dEvt_control_cFP12dEvt_order_c.s"
}
#pragma pop

/* 80041F18-80041FA0 03C858 0088+00 1/1 0/0 0/0 .text            demoEnd__14dEvt_control_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::demoEnd() {
    nofralloc
#include "asm/d/event/d_event/demoEnd__14dEvt_control_cFv.s"
}
#pragma pop

/* 80041FA0-80042014 03C8E0 0074+00 1/1 0/0 0/0 .text
 * potentialCheck__14dEvt_control_cFP12dEvt_order_c             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::potentialCheck(dEvt_order_c* param_0) {
    nofralloc
#include "asm/d/event/d_event/potentialCheck__14dEvt_control_cFP12dEvt_order_c.s"
}
#pragma pop

/* 80042014-8004212C 03C954 0118+00 1/1 0/0 0/0 .text doorCheck__14dEvt_control_cFP12dEvt_order_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::doorCheck(dEvt_order_c* param_0) {
    nofralloc
#include "asm/d/event/d_event/doorCheck__14dEvt_control_cFP12dEvt_order_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80379D80-80379D80 0063E0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80379DB3 = "DEFAULT_GETITEM";
#pragma pop

/* 8004212C-800421C0 03CA6C 0094+00 1/1 0/0 0/0 .text itemCheck__14dEvt_control_cFP12dEvt_order_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::itemCheck(dEvt_order_c* param_0) {
    nofralloc
#include "asm/d/event/d_event/itemCheck__14dEvt_control_cFP12dEvt_order_c.s"
}
#pragma pop

/* 800421C0-80042254 03CB00 0094+00 1/1 0/0 0/0 .text            endProc__14dEvt_control_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::endProc() {
    nofralloc
#include "asm/d/event/d_event/endProc__14dEvt_control_cFv.s"
}
#pragma pop

/* 80042254-800422C0 03CB94 006C+00 1/1 0/0 0/0 .text            change__14dEvt_control_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::change() {
    nofralloc
#include "asm/d/event/d_event/change__14dEvt_control_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A7F78-803A7FB0 -00001 0038+00 1/1 0/0 0/0 .data            @4719 */
SECTION_DATA static void* lit_4719[14] = {
    (void*)(((char*)entry__14dEvt_control_cFv) + 0x70),
    (void*)(((char*)entry__14dEvt_control_cFv) + 0xB8),
    (void*)(((char*)entry__14dEvt_control_cFv) + 0x94),
    (void*)(((char*)entry__14dEvt_control_cFv) + 0xDC),
    (void*)(((char*)entry__14dEvt_control_cFv) + 0xF4),
    (void*)(((char*)entry__14dEvt_control_cFv) + 0x118),
    (void*)(((char*)entry__14dEvt_control_cFv) + 0x13C),
    (void*)(((char*)entry__14dEvt_control_cFv) + 0x13C),
    (void*)(((char*)entry__14dEvt_control_cFv) + 0x184),
    (void*)(((char*)entry__14dEvt_control_cFv) + 0x184),
    (void*)(((char*)entry__14dEvt_control_cFv) + 0x160),
    (void*)(((char*)entry__14dEvt_control_cFv) + 0xB8),
    (void*)(((char*)entry__14dEvt_control_cFv) + 0x184),
    (void*)(((char*)entry__14dEvt_control_cFv) + 0x184),
};

/* 800422C0-80042468 03CC00 01A8+00 2/1 0/0 0/0 .text            entry__14dEvt_control_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::entry() {
    nofralloc
#include "asm/d/event/d_event/entry__14dEvt_control_cFv.s"
}
#pragma pop

/* 80042468-80042518 03CDA8 00B0+00 1/1 8/8 388/388 .text            reset__14dEvt_control_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::reset() {
    nofralloc
#include "asm/d/event/d_event/reset__14dEvt_control_cFv.s"
}
#pragma pop

/* 80042518-800425B4 03CE58 009C+00 3/3 3/3 46/46 .text            reset__14dEvt_control_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::reset(void* param_0) {
    nofralloc
#include "asm/d/event/d_event/reset__14dEvt_control_cFPv.s"
}
#pragma pop

/* 800425B4-800425E8 03CEF4 0034+00 2/2 0/0 0/0 .text            clearSkipSystem__14dEvt_control_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::clearSkipSystem() {
    nofralloc
#include "asm/d/event/d_event/clearSkipSystem__14dEvt_control_cFv.s"
}
#pragma pop

/* 800425E8-8004261C 03CF28 0034+00 0/0 2/2 5/5 .text            dEv_defaultSkipProc__FPvi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEv_defaultSkipProc(void* param_0, int param_1) {
    nofralloc
#include "asm/d/event/d_event/dEv_defaultSkipProc__FPvi.s"
}
#pragma pop

/* ############################################################################################## */
/* 80379D80-80379D80 0063E0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80379DC3 = "$0";
#pragma pop

/* 8004261C-80042778 03CF5C 015C+00 1/1 1/1 0/0 .text            dEv_defaultSkipZev__FPvi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEv_defaultSkipZev(void* param_0, int param_1) {
    nofralloc
#include "asm/d/event/d_event/dEv_defaultSkipZev__FPvi.s"
}
#pragma pop

/* 80042778-800428DC 03D0B8 0164+00 0/0 1/1 0/0 .text            dEv_defaultSkipStb__FPvi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEv_defaultSkipStb(void* param_0, int param_1) {
    nofralloc
#include "asm/d/event/d_event/dEv_defaultSkipStb__FPvi.s"
}
#pragma pop

/* 800428DC-8004290C 03D21C 0030+00 0/0 1/1 33/33 .text            dEv_noFinishSkipProc__FPvi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEv_noFinishSkipProc(void* param_0, int param_1) {
    nofralloc
#include "asm/d/event/d_event/dEv_noFinishSkipProc__FPvi.s"
}
#pragma pop

/* 8004290C-80042914 03D24C 0008+00 2/2 0/0 0/0 .text getSkipEventName__14dEvt_control_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::getSkipEventName() {
    nofralloc
#include "asm/d/event/d_event/getSkipEventName__14dEvt_control_cFv.s"
}
#pragma pop

/* 80042914-80042958 03D254 0044+00 1/1 3/3 64/64 .text setSkipProc__14dEvt_control_cFPvPFPvi_ii
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::setSkipProc(void* param_0, int (*param_1)(void*, int), int param_2) {
    nofralloc
#include "asm/d/event/d_event/setSkipProc__14dEvt_control_cFPvPFPvi_ii.s"
}
#pragma pop

/* 80042958-800429A8 03D298 0050+00 0/0 1/1 14/14 .text            setSkipZev__14dEvt_control_cFPvPc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::setSkipZev(void* param_0, char* param_1) {
    nofralloc
#include "asm/d/event/d_event/setSkipZev__14dEvt_control_cFPvPc.s"
}
#pragma pop

/* 800429A8-800429B4 03D2E8 000C+00 0/0 1/1 30/30 .text            onSkipFade__14dEvt_control_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::onSkipFade() {
    nofralloc
#include "asm/d/event/d_event/onSkipFade__14dEvt_control_cFv.s"
}
#pragma pop

/* 800429B4-800429D4 03D2F4 0020+00 1/1 0/0 0/0 .text            offSkipFade__14dEvt_control_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::offSkipFade() {
    nofralloc
#include "asm/d/event/d_event/offSkipFade__14dEvt_control_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451EC4-80451EC8 0004C4 0004+00 1/1 0/0 0/0 .sdata2          @4904 */
SECTION_SDATA2 static f32 lit_4904 = 1.0f / 10.0f;

/* 800429D4-80042BBC 03D314 01E8+00 1/1 0/0 0/0 .text            skipper__14dEvt_control_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::skipper() {
    nofralloc
#include "asm/d/event/d_event/skipper__14dEvt_control_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451EC8-80451ECC 0004C8 0004+00 1/1 0/0 0/0 .sdata2          @5013 */
SECTION_SDATA2 static f32 lit_5013 = -1.0f / 20.0f;

/* 80042BBC-80042FA8 03D4FC 03EC+00 0/0 1/1 0/0 .text            Step__14dEvt_control_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::Step() {
    nofralloc
#include "asm/d/event/d_event/Step__14dEvt_control_cFv.s"
}
#pragma pop

/* 80042FA8-8004316C 03D8E8 01C4+00 0/0 2/2 0/0 .text            moveApproval__14dEvt_control_cFPv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::moveApproval(void* param_0) {
    nofralloc
#include "asm/d/event/d_event/moveApproval__14dEvt_control_cFPv.s"
}
#pragma pop

/* 8004316C-800431E8 03DAAC 007C+00 0/0 28/28 0/0 .text compulsory__14dEvt_control_cFPvPCcUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::compulsory(void* param_0, char const* param_1, u16 param_2) {
    nofralloc
#include "asm/d/event/d_event/compulsory__14dEvt_control_cFPvPCcUs.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451ECC-80451ED0 0004CC 0004+00 2/2 0/0 0/0 .sdata2          @5095 */
SECTION_SDATA2 static u8 lit_5095[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 800431E8-80043278 03DB28 0090+00 1/1 1/1 0/0 .text            remove__14dEvt_control_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::remove() {
    nofralloc
#include "asm/d/event/d_event/remove__14dEvt_control_cFv.s"
}
#pragma pop

/* 80043278-80043280 03DBB8 0008+00 2/2 2/2 0/0 .text            getStageEventDt__14dEvt_control_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::getStageEventDt() {
    nofralloc
#include "asm/d/event/d_event/getStageEventDt__14dEvt_control_cFv.s"
}
#pragma pop

/* 80043280-800432C8 03DBC0 0048+00 0/0 1/1 0/0 .text            sceneChange__14dEvt_control_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::sceneChange(int param_0) {
    nofralloc
#include "asm/d/event/d_event/sceneChange__14dEvt_control_cFi.s"
}
#pragma pop

/* 800432C8-800432EC 03DC08 0024+00 6/6 0/0 0/0 .text            getPId__14dEvt_control_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::getPId(void* param_0) {
    nofralloc
#include "asm/d/event/d_event/getPId__14dEvt_control_cFPv.s"
}
#pragma pop

/* 800432EC-8004331C 03DC2C 0030+00 7/7 13/13 16/16 .text            convPId__14dEvt_control_cFUi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::convPId(unsigned int param_0) {
    nofralloc
#include "asm/d/event/d_event/convPId__14dEvt_control_cFUi.s"
}
#pragma pop

/* 8004331C-800433F0 03DC5C 00D4+00 0/0 1/1 0/0 .text            getStbDemoData__14dEvt_control_cFPc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::getStbDemoData(char* param_0) {
    nofralloc
#include "asm/d/event/d_event/getStbDemoData__14dEvt_control_cFPc.s"
}
#pragma pop

/* 800433F0-80043428 03DD30 0038+00 0/0 1/1 0/0 .text            __ct__11dEvt_info_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dEvt_info_c::dEvt_info_c() {
    nofralloc
#include "asm/d/event/d_event/__ct__11dEvt_info_cFv.s"
}
#pragma pop

/* 80043428-80043480 03DD68 0058+00 0/0 0/0 4/4 .text            setEventName__11dEvt_info_cFPc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_info_c::setEventName(char* param_0) {
    nofralloc
#include "asm/d/event/d_event/setEventName__11dEvt_info_cFPc.s"
}
#pragma pop

/* 80043480-800434CC 03DDC0 004C+00 1/1 0/0 0/0 .text            getEventName__11dEvt_info_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_info_c::getEventName() {
    nofralloc
#include "asm/d/event/d_event/getEventName__11dEvt_info_cFv.s"
}
#pragma pop

/* 800434CC-800434D8 03DE0C 000C+00 0/0 1/1 0/0 .text            beforeProc__11dEvt_info_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_info_c::beforeProc() {
    nofralloc
#include "asm/d/event/d_event/beforeProc__11dEvt_info_cFv.s"
}
#pragma pop

/* 800434D8-80043500 03DE18 0028+00 0/0 4/4 1/1 .text searchMapEventData__14dEvt_control_cFUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::searchMapEventData(u8 param_0) {
    nofralloc
#include "asm/d/event/d_event/searchMapEventData__14dEvt_control_cFUc.s"
}
#pragma pop

/* 80043500-8004360C 03DE40 010C+00 3/3 7/7 5/5 .text searchMapEventData__14dEvt_control_cFUcl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::searchMapEventData(u8 param_0, s32 param_1) {
    nofralloc
#include "asm/d/event/d_event/searchMapEventData__14dEvt_control_cFUcl.s"
}
#pragma pop

/* 8004360C-8004362C 03DF4C 0020+00 0/0 1/1 0/0 .text            runningEventID__14dEvt_control_cFs
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::runningEventID(s16 param_0) {
    nofralloc
#include "asm/d/event/d_event/runningEventID__14dEvt_control_cFs.s"
}
#pragma pop

/* 8004362C-8004365C 03DF6C 0030+00 1/1 0/0 0/0 .text            setPt1__14dEvt_control_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::setPt1(void* param_0) {
    nofralloc
#include "asm/d/event/d_event/setPt1__14dEvt_control_cFPv.s"
}
#pragma pop

/* 8004365C-8004368C 03DF9C 0030+00 1/1 2/2 28/28 .text            setPt2__14dEvt_control_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::setPt2(void* param_0) {
    nofralloc
#include "asm/d/event/d_event/setPt2__14dEvt_control_cFPv.s"
}
#pragma pop

/* 8004368C-800436BC 03DFCC 0030+00 1/1 4/4 21/21 .text            setPtT__14dEvt_control_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::setPtT(void* param_0) {
    nofralloc
#include "asm/d/event/d_event/setPtT__14dEvt_control_cFPv.s"
}
#pragma pop

/* 800436BC-800436EC 03DFFC 0030+00 1/1 2/2 3/3 .text            setPtI__14dEvt_control_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::setPtI(void* param_0) {
    nofralloc
#include "asm/d/event/d_event/setPtI__14dEvt_control_cFPv.s"
}
#pragma pop

/* 800436EC-800436F4 -00001 0008+00 0/0 0/0 0/0 .text            setPtI_Id__14dEvt_control_cFUi */
void dEvt_control_c::setPtI_Id(unsigned int param_0) {
    *(u32*)(((u8*)this) + 208) /* this->field_0xd0 */ = (u32)(param_0);
}

/* 800436F4-80043724 03E034 0030+00 0/0 4/4 0/0 .text            setPtD__14dEvt_control_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvt_control_c::setPtD(void* param_0) {
    nofralloc
#include "asm/d/event/d_event/setPtD__14dEvt_control_cFPv.s"
}
#pragma pop

/* 80043724-8004372C -00001 0008+00 0/0 0/0 0/0 .text            setGtItm__14dEvt_control_cFUc */
void dEvt_control_c::setGtItm(u8 param_0) {
    *(u8*)(((u8*)this) + 239) /* this->field_0xef */ = (u8)(param_0);
}

/* ############################################################################################## */
/* 80379DC6-80379DD0 006426 0008+02 0/0 0/0 0/0 .rodata          None */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80379DC6 = "GIVEMAN";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_80379DCE = "\0";
#pragma pop

/* 80379D80-80379D80 0063E0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */