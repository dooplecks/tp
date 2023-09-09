/**
 * d_a_tag_river_back.cpp
 * Tag - River Back
 */

#include "rel/d/a/tag/d_a_tag_river_back/d_a_tag_river_back.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "d/d_procname.h"
#include "dol2asm.h"

//
// Forward References:
//

extern "C" void Create__16daTagRiverBack_cFv();
extern "C" void actionWait__16daTagRiverBack_cFv();
extern "C" void actionOrderEvent__16daTagRiverBack_cFv();
extern "C" void actionEvent__16daTagRiverBack_cFv();
extern "C" void actionDead__16daTagRiverBack_cFv();
// clib_calcTimer
extern "C" u8 func_80D5F920(u8*);
extern "C" extern char const* const d_a_tag_river_back__stringBase0;

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void dStage_changeScene__FifUlScsi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void getIsAddvance__16dEvent_manager_cFi();
extern "C" void getMyActIdx__16dEvent_manager_cFiPCPCciii();
extern "C" void getMySubstanceP__16dEvent_manager_cFiPCci();
extern "C" void cutEnd__16dEvent_manager_cFi();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 data_80D5FA68[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80D5F980-80D5F98C 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D5F98C-80D5F9A0 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
#pragma push
#pragma force_active on
static u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};
#pragma pop

/* 80D5F9A0-80D5F9A4 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
static char* l_arcName = "RvBack";

/* 80D5F9A4-80D5F9A8 -00001 0004+00 1/1 0/0 0/0 .data            l_evName */
static char* l_evName = "RIVER_BACK";

/* 80D5F2F8-80D5F360 000078 0068+00 1/1 0/0 0/0 .text            Create__16daTagRiverBack_cFv */
int daTagRiverBack_c::Create() {
    mMapToolID = -1;
    mEvtInfo.setArchiveName(l_arcName);
    mEventID = i_dComIfGp_getEventManager().getEventIdx(this, l_evName, -1);
    return 1;
}

/* 80D5F360-80D5F3F0 0000E0 0090+00 1/1 0/0 0/0 .text            create__16daTagRiverBack_cFv */
#ifdef NONMATCHING
// The diff shows this function as matching, but hash is different
int daTagRiverBack_c::create() {
    fopAcM_SetupActor(this, daTagRiverBack_c);
    int phase = dComIfG_resLoad(&mPhase, "RvBack");
    int result = Create();
    if (phase == cPhs_COMPLEATE_e && !result) {
        phase = cPhs_ERROR_e;
    }
    return phase;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daTagRiverBack_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_river_back/d_a_tag_river_back/func_80D5F360.s"
}
#pragma pop
#endif

/* 80D5F3F0-80D5F48C 000170 009C+00 1/1 0/0 0/0 .text            execute__16daTagRiverBack_cFv */
int daTagRiverBack_c::execute() {
    u8 swBit = getSwBit();
    if (swBit != 0xFF && i_fopAcM_isSwitch(this, swBit) != 0) {
        return 1;
    }

    u8 swBit2 = getSwBit2();
    if (swBit2 != 0xFF && i_fopAcM_isSwitch(this, swBit2) == 0) {
        return 1;
    }

    event_proc_call();

    return 1;
}

/* ############################################################################################## */
/* 80D5F9A8-80D5F9AC -00001 0004+00 1/1 0/0 0/0 .data            l_staffName */
static char* l_staffName = "rvback";

#ifdef NONMATCHING
/* 80D5F48C-80D5F548 00020C 00BC+00 1/1 0/0 0/0 .text event_proc_call__16daTagRiverBack_cFv */
void daTagRiverBack_c::event_proc_call() {
    typedef void (daTagRiverBack_c::*actionFunc)();
    /* 80D5F9DC-80D5FA0C 00005C 0030+00 0/1 0/0 0/0 .data            l_func$3711 */
    static actionFunc l_func[] = {&daTagRiverBack_c::actionWait,
                                  &daTagRiverBack_c::actionOrderEvent,
                                  &daTagRiverBack_c::actionEvent, &daTagRiverBack_c::actionDead};

    (this->*l_func[mAction])();
}
#else
/* 80D5F9AC-80D5F9B8 -00001 000C+00 0/1 0/0 0/0 .data            @3712 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3712[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionWait__16daTagRiverBack_cFv,
};
#pragma pop

/* 80D5F9B8-80D5F9C4 -00001 000C+00 0/1 0/0 0/0 .data            @3713 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3713[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionOrderEvent__16daTagRiverBack_cFv,
};
#pragma pop

/* 80D5F9C4-80D5F9D0 -00001 000C+00 0/1 0/0 0/0 .data            @3714 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3714[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionEvent__16daTagRiverBack_cFv,
};
#pragma pop

/* 80D5F9D0-80D5F9DC -00001 000C+00 0/1 0/0 0/0 .data            @3715 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3715[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionDead__16daTagRiverBack_cFv,
};
#pragma pop

/* 80D5F9DC-80D5FA0C 00005C 0030+00 0/1 0/0 0/0 .data            l_func$3711 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_func[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80D5F48C-80D5F548 00020C 00BC+00 1/1 0/0 0/0 .text event_proc_call__16daTagRiverBack_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagRiverBack_c::event_proc_call() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_river_back/d_a_tag_river_back/event_proc_call__16daTagRiverBack_cFv.s"
}
#pragma pop
#endif

/* 80D5F548-80D5F5BC 0002C8 0074+00 1/0 0/0 0/0 .text            actionWait__16daTagRiverBack_cFv */
void daTagRiverBack_c::actionWait() {
    if (i_dComIfGp_checkPlayerStatus0(0, 0x100000) != 0) {
        mCount = 0;
        setAction(ACTION_ORDER_EVENT_e);
        fopAcM_orderOtherEventId(this, mEventID, mMapToolID, 0xFFFF, 0, 1);
        mEvtInfo.i_onCondition(2);
    }
}

/* 80D5F5BC-80D5F66C 00033C 00B0+00 1/0 0/0 0/0 .text actionOrderEvent__16daTagRiverBack_cFv */
void daTagRiverBack_c::actionOrderEvent() {
    daPy_py_c* player = daPy_getPlayerActorClass();
    if (mEvtInfo.checkCommandDemoAccrpt()) {
        setAction(ACTION_EVENT_e);
        mStaffID = i_dComIfGp_evmng_getMyStaffId(l_staffName, NULL, 0);
        player->mNoResetFlg0 |= 0x10000;
        demoProc();
    } else {
        fopAcM_orderOtherEventId(this, mEventID, mMapToolID, 0xFFFF, 0, 1);
        mEvtInfo.i_onCondition(2);
    }
}

/* 80D5F66C-80D5F70C 0003EC 00A0+00 1/0 0/0 0/0 .text            actionEvent__16daTagRiverBack_cFv
 */
void daTagRiverBack_c::actionEvent() {
    daPy_py_c* player = daPy_getPlayerActorClass();
    mCount += 1;
    if (dComIfGp_evmng_endCheck(mEventID)) {
        setAction(ACTION_DEAD_e);
        i_dComIfGp_event_reset();
    } else {
        demoProc();
        if (mCount == 30) {
            player->voiceStart(Z2SE_WL_V_FALL_TO_RESTART);
        }
    }
}

/* 80D5F70C-80D5F710 00048C 0004+00 1/0 0/0 0/0 .text            actionDead__16daTagRiverBack_cFv */
void daTagRiverBack_c::actionDead() {}

/* ############################################################################################## */
#ifdef NONMATCHING
// Does not match due to cLib_calcTimer, also "Timer" string

/* 80D5FA0C-80D5FA14 -00001 0008+00 1/1 0/0 0/0 .data            action_table$3769 */
static char* action_table[] = {"WAIT", "SCENE_CHG"};

/* 80D5F710-80D5F88C 000490 017C+00 2/2 0/0 0/0 .text            demoProc__16daTagRiverBack_cFv */
int daTagRiverBack_c::demoProc() {
    int act_id = dComIfGp_evmng_getMyActIdx(mStaffID, action_table, ARRAY_SIZE(action_table), 0, 0);

    if (dComIfGp_evmng_getIsAddvance(mStaffID)) {
        switch (act_id) {
        case WAIT_e:
            int* timer_p = dComIfGp_evmng_getMyIntegerP(mStaffID, "Timer");
            if (timer_p == NULL) {
                mTimer = 1;
            } else {
                mTimer = *timer_p;
            }
            break;
        case SCENE_CHG_e:
            mDoAud_seStart(Z2SE_FORCE_BACK, 0, 0, 0);
        }
    }
    switch (act_id) {
    case WAIT_e:
        // Function is cLib_calcTimer
        if ((func_80D5F920(&mTimer) & 0xFF) == 0) {
            dComIfGp_evmng_cutEnd(mStaffID);
        }
        break;
    case SCENE_CHG_e:
        dStage_changeScene(fopAcM_GetParamBit(this, 0, 8) & 0xFF, 0.0f, 0, fopAcM_GetRoomNo(this),
                           0, -1);
        break;
    default:
        dComIfGp_evmng_cutEnd(mStaffID);
    }

    return 0;
}
#else
/* 80D5F944-80D5F948 000000 0004+00 1/1 0/0 0/0 .rodata          @3813 */
SECTION_RODATA static f32 const lit_3813 = 1.0f;
COMPILER_STRIP_GATE(0x80D5F944, &lit_3813);

/* 80D5F948-80D5F94C 000004 0004+00 0/1 0/0 0/0 .rodata          @3814 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3814 = -1.0f;
COMPILER_STRIP_GATE(0x80D5F948, &lit_3814);
#pragma pop

/* 80D5F94C-80D5F950 000008 0004+00 0/1 0/0 0/0 .rodata          @3815 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3815[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80D5F94C, &lit_3815);
#pragma pop

/* 80D5F950-80D5F950 00000C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80D5F969 = "WAIT";
SECTION_DEAD static char const* const stringBase_80D5F96E = "SCENE_CHG";
SECTION_DEAD static char const* const stringBase_80D5F978 = "Timer";
#pragma pop

/* 80D5FA0C-80D5FA14 -00001 0008+00 1/1 0/0 0/0 .data            action_table$3769 */
SECTION_DATA static void* action_table[2] = {
    (void*)(((char*)&d_a_tag_river_back__stringBase0) + 0x19),
    (void*)(((char*)&d_a_tag_river_back__stringBase0) + 0x1E),
};

/* 80D5F710-80D5F88C 000490 017C+00 2/2 0/0 0/0 .text            demoProc__16daTagRiverBack_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daTagRiverBack_c::demoProc() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_river_back/d_a_tag_river_back/demoProc__16daTagRiverBack_cFv.s"
}
#pragma pop
#endif

/* 80D5F88C-80D5F8C0 00060C 0034+00 1/1 0/0 0/0 .text            _delete__16daTagRiverBack_cFv */
int daTagRiverBack_c::_delete() {
    dComIfG_resDelete(&mPhase, l_arcName);
    return 1;
}

/* 80D5F8C0-80D5F8E0 000640 0020+00 1/0 0/0 0/0 .text daTagRiverBack_Execute__FP16daTagRiverBack_c
 */
static int daTagRiverBack_Execute(daTagRiverBack_c* i_this) {
    return i_this->execute();
}

/* 80D5F8E0-80D5F900 000660 0020+00 1/0 0/0 0/0 .text daTagRiverBack_Delete__FP16daTagRiverBack_c
 */
static int daTagRiverBack_Delete(daTagRiverBack_c* i_this) {
    return i_this->_delete();
}

/* 80D5F900-80D5F920 000680 0020+00 1/0 0/0 0/0 .text daTagRiverBack_Create__FP16daTagRiverBack_c
 */
static int daTagRiverBack_Create(daTagRiverBack_c* i_this) {
    return i_this->create();
}

/* 80D5F920-80D5F93C 0006A0 001C+00 1/1 0/0 0/0 .text            cLib_calcTimer<Uc>__FPUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm u8 func_80D5F920(u8* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_river_back/d_a_tag_river_back/func_80D5F920.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D5FA14-80D5FA34 -00001 0020+00 1/0 0/0 0/0 .data            l_daTagRiverBack_Method */
static actor_method_class l_daTagRiverBack_Method = {(process_method_func)daTagRiverBack_Create,
                                                     (process_method_func)daTagRiverBack_Delete,
                                                     (process_method_func)daTagRiverBack_Execute};

/* 80D5FA34-80D5FA64 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Tag_RiverBack */
extern actor_process_profile_definition g_profile_Tag_RiverBack = {
    -3,                        // mLayerID
    7,                         // mListID
    -3,                        // mListPrio
    PROC_Tag_RiverBack,        // mProcName
    &g_fpcLf_Method.mBase,     // mSubMtd
    sizeof(daTagRiverBack_c),  // mSize
    0,                         // mSizeOther
    0,                         // mParameters
    &g_fopAc_Method.base,      // mSubMtd
    0x022C,                    // mPriority
    &l_daTagRiverBack_Method,  // mSubMtd
    0x00040000,                // mStatus
    0,                         // mActorType
    14,                        // mCullType
};

/* 80D5F950-80D5F950 00000C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
