//
// Generated By: dol2asm
// Translation Unit: d/d_lib
//

#include "d/d_lib.h"
#include "SSystem/SComponent/c_m3d.h"
#include "dol2asm.h"
#include "dolphin/types.h"
#include "f_op/f_op_actor.h"
#include "m_Do/m_Do_controller_pad.h"

//
// Types:
//

struct dEvt_control_c {
    /* 800434D8 */ void searchMapEventData(u8);
};

struct JKRExpandSwitch {};

struct JKRAramArchive {
    /* 802D781C */ void getAramAddress(char const*);
};

struct JKRAram {
    /* 802D25B4 */ void aramToMainRam(u32, u8*, u32, JKRExpandSwitch, u32, JKRHeap*, int, u32*);
};

//
// Forward References:
//

extern "C" void __ct__9STControlFssssffss();
extern "C" void setWaitParm__9STControlFssssffss();
extern "C" void init__9STControlFv();
extern "C" void Xinit__9STControlFv();
extern "C" void Yinit__9STControlFv();
extern "C" void getValueStick__9STControlFv();
extern "C" void getAngleStick__9STControlFv();
extern "C" void getValueStick__10CSTControlFv();
extern "C" void getAngleStick__10CSTControlFv();
extern "C" void checkTrigger__9STControlFv();
extern "C" void checkLeftTrigger__9STControlFv();
extern "C" void checkRightTrigger__9STControlFv();
extern "C" void checkUpTrigger__9STControlFv();
extern "C" void checkDownTrigger__9STControlFv();
extern "C" void dLib_getEventSwitchNo__Fi();
extern "C" void dLib_checkActorInRectangle__FP10fopAc_ac_cP10fopAc_ac_cPC4cXyzPC4cXyz();
extern "C" void dLib_getExpandSizeFromAramArchive__FP14JKRAramArchivePCc();
extern "C" void getTime__11dLib_time_cFv();
extern "C" void stopTime__11dLib_time_cFv();
extern "C" void startTime__11dLib_time_cFv();
extern "C" u8 m_diffTime__11dLib_time_c[4];
extern "C" u8 m_stopTime__11dLib_time_c[4];
extern "C" extern u8 struct_80450DF0[8];

//
// External References:
//

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void searchMapEventData__14dEvt_control_cFUc();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void aramToMainRam__7JKRAramFUlPUcUl15JKRExpandSwitchUlP7JKRHeapiPUl();
extern "C" void findFsResource__10JKRArchiveCFPCcUl();
extern "C" void getAramAddress__14JKRAramArchiveFPCc();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" u8 m_cpadInfo__8mDoCPd_c[256];
extern "C" u8 now__14mDoMtx_stack_c[48];

//
// Declarations:
//

/* ############################################################################################## */
/* 803A7240-803A7250 004360 0010+00 0/0 0/0 6/6 .data            ZeroQuat */
Quaternion ZeroQuat = {
    0.0f,
    0.0f,
    0.0f,
    1.0f
};

/* 803A7250-803A7260 004370 0010+00 0/0 1/1 0/0 .data            __vt__10CSTControl */
SECTION_DATA extern void* __vt__10CSTControl[4] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)getValueStick__10CSTControlFv,
    (void*)getAngleStick__10CSTControlFv,
};

/* 803A7260-803A7270 004380 0010+00 1/1 1/1 0/0 .data            __vt__9STControl */
SECTION_DATA extern void* __vt__9STControl[4] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)getValueStick__9STControlFv,
    (void*)getAngleStick__9STControlFv,
};

STControl::STControl(s16 delayY, s16 delayX, s16 param_2, s16 param_3, f32 threshold, f32 param_5,
                     s16 param_6, s16 param_7) {
    setWaitParm(delayY, delayX, param_2, param_3, threshold, param_5, param_6, param_7);
    init();
}

void STControl::setWaitParm(s16 delayY, s16 delayX, s16 param_2, s16 param_3, f32 threshold,
                            f32 param_5, s16 param_6, s16 param_7) {
    mRepeatDelayY = delayY;
    mRepeatDelayX = delayX;
    field_0x16 = param_2;
    field_0x1c = param_3;
    mThreshold = threshold;
    field_0x08 = param_5;
    field_0x24 = param_6;
    field_0x26 = param_7;
}

void STControl::init() {
    field_0x0e = 0;
    field_0x10 = 0;
    field_0x0d = 0;
    mDirectionTrig = 0;
    field_0x22 = 0;
    mXwaitTimer = mRepeatDelayY;
    mYwaitTimer = mRepeatDelayY;
    field_0x1e = field_0x1c;
    field_0x20 = field_0x1c;
    mFirstWaitTime = 0;
    field_0x2a = mFirstWaitTime;
    field_0x2c = mFirstWaitTime;
}

void STControl::Xinit() {
    field_0x0e = 0;
    mDirectionTrig &= ~0x03;
    mXwaitTimer = mRepeatDelayY;
    field_0x1e = field_0x1c;
    field_0x2a = mFirstWaitTime;
}

/* 8003212C-8003215C 02CA6C 0030+00 1/1 0/0 0/0 .text            Yinit__9STControlFv */
void STControl::Yinit() {
    field_0x10 = 0;
    mDirectionTrig &= ~0x0C;
    mYwaitTimer = mRepeatDelayY;
    field_0x20 = field_0x1c;
    field_0x2c = mFirstWaitTime;
}

f32 STControl::getValueStick() {
    return mDoCPd_c::getStickValue(PAD_1);
}

s16 STControl::getAngleStick() {
    return mDoCPd_c::getStickAngle(PAD_1);
}

f32 CSTControl::getValueStick() {
    return mDoCPd_c::getSubStickValue(PAD_1);
}

s16 CSTControl::getAngleStick() {
    return mDoCPd_c::getSubStickAngle(PAD_1);
}

/* 8003219C-8003242C 02CADC 0290+00 0/0 24/24 0/0 .text            checkTrigger__9STControlFv */
#ifdef NONMATCHING
u8 STControl::checkTrigger() {
    field_0x0d = mDirectionTrig;
    f32 stickValue = getValueStick();
    s16 stickAngle_ = getAngleStick();
    u8 var_r6 = 0;
    s16 temp_r7 = 0x2000 - field_0x26 >> 1;

    if (!cM3d_IsZero(stickValue)) {
        int stickAngle = stickAngle_;
        s16 temp_r4 = field_0x22;
        int temp_r3 = temp_r4 + temp_r7;

        if (stickAngle < temp_r3 - 0x7000) {
            var_r6 |= TRIG_UP;
        } else if (stickAngle < (temp_r4 - 0x5000) - temp_r7) {
            var_r6 |= TRIG_UP_LEFT;
        } else if (stickAngle < temp_r3 - 0x3000) {
            var_r6 |= TRIG_LEFT;
        } else if (stickAngle < (temp_r4 - 0x1000) - temp_r7) {
            var_r6 |= TRIG_DOWN_LEFT;
        } else if (stickAngle < temp_r3 + 0x1000) {
            var_r6 |= TRIG_DOWN;
        } else if (stickAngle < (temp_r4 + 0x3000) - temp_r7) {
            var_r6 |= TRIG_DOWN_RIGHT;
        } else if (stickAngle < temp_r3 + 0x5000) {
            var_r6 |= TRIG_RIGHT;
        } else if (stickAngle < (temp_r4 + 0x7000) - temp_r7) {
            var_r6 |= TRIG_UP_RIGHT;
        } else {
            var_r6 |= TRIG_UP;
        }

        if (stickValue >= mThreshold) {
            mDirectionTrig = var_r6;
        } else if (stickValue < field_0x08) {
            mDirectionTrig = 0;
        } else {
            mDirectionTrig &= ~var_r6;
        }

        u8 temp_r3_2 = mDirectionTrig;
        if (temp_r3_2 != field_0x0d) {
            if (temp_r3_2 == 0) {
                field_0x22 = 0;
            } else if ((stickAngle & 0x1FFF) > 0x1000) {
                field_0x22 = field_0x24;
            } else {
                field_0x22 = -field_0x24;
            }
        }

        if (!(mDirectionTrig & 3)) {
            Xinit();
        }

        if (!(mDirectionTrig & 0xC)) {
            Yinit();
        }
    } else {
        mDirectionTrig = 0;
        Xinit();
        Yinit();
    }

    if ((field_0x0d & mDirectionTrig & 3) && field_0x0e > 0) {
        field_0x0e--;
    }

    if ((field_0x0d & mDirectionTrig & 0xC) && field_0x10 > 0) {
        field_0x10--;
    }

    return mDirectionTrig;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm u8 STControl::checkTrigger() {
    nofralloc
#include "asm/d/d_lib/checkTrigger__9STControlFv.s"
}
#pragma pop
#endif

bool STControl::checkLeftTrigger() {
    if (field_0x0e == 0 && mDirectionTrig & TRIG_LEFT) {
        field_0x0e = mXwaitTimer + field_0x2a;
        field_0x2a = 0;
        if ((int)field_0x1e == 0) {
            mXwaitTimer -= field_0x16;
            if (mXwaitTimer < mRepeatDelayX) {
                mXwaitTimer = mRepeatDelayX;
            }
        } else {
            field_0x1e--;
        }
        return true;
    }
    return false;
}

bool STControl::checkRightTrigger() {
    if (field_0x0e == 0 && mDirectionTrig & TRIG_RIGHT) {
        field_0x0e = mXwaitTimer + field_0x2a;
        field_0x2a = 0;
        if ((int)field_0x1e == 0) {
            mXwaitTimer -= field_0x16;
            if (mXwaitTimer < mRepeatDelayX) {
                mXwaitTimer = mRepeatDelayX;
            }
        } else {
            field_0x1e--;
        }
        return true;
    }
    return false;
}

bool STControl::checkUpTrigger() {
    if (field_0x10 == 0 && mDirectionTrig & TRIG_UP) {
        field_0x10 = mYwaitTimer + field_0x2c;
        field_0x2c = 0;
        if ((int)field_0x20 == 0) {
            mYwaitTimer -= field_0x16;
            if (mYwaitTimer < mRepeatDelayX) {
                mYwaitTimer = mRepeatDelayX;
            }
        } else {
            field_0x20--;
        }
        return true;
    }
    return false;
}

bool STControl::checkDownTrigger() {
    if (field_0x10 == 0 && mDirectionTrig & TRIG_DOWN) {
        field_0x10 = mYwaitTimer + field_0x2c;
        field_0x2c = 0;
        if ((int)field_0x20 == 0) {
            mYwaitTimer -= field_0x16;
            if (mYwaitTimer < mRepeatDelayX) {
                mYwaitTimer = mRepeatDelayX;
            }
        } else {
            field_0x20--;
        }
        return true;
    }
    return false;
}

/* 8003261C-80032654 02CF5C 0038+00 0/0 0/0 1/1 .text            dLib_getEventSwitchNo__Fi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dLib_getEventSwitchNo(int param_0) {
    nofralloc
#include "asm/d/d_lib/dLib_getEventSwitchNo__Fi.s"
}
#pragma pop

/* 80032654-80032738 02CF94 00E4+00 0/0 0/0 8/8 .text
 * dLib_checkActorInRectangle__FP10fopAc_ac_cP10fopAc_ac_cPC4cXyzPC4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm BOOL dLib_checkActorInRectangle(fopAc_ac_c* param_0, fopAc_ac_c* param_1, cXyz const* param_2,
                                    cXyz const* param_3) {
    nofralloc
#include "asm/d/d_lib/dLib_checkActorInRectangle__FP10fopAc_ac_cP10fopAc_ac_cPC4cXyzPC4cXyz.s"
}
#pragma pop

/* 80032738-80032804 02D078 00CC+00 0/0 4/4 0/0 .text
 * dLib_getExpandSizeFromAramArchive__FP14JKRAramArchivePCc     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm u32 dLib_getExpandSizeFromAramArchive(JKRAramArchive* param_0, char const* param_1) {
    nofralloc
#include "asm/d/d_lib/dLib_getExpandSizeFromAramArchive__FP14JKRAramArchivePCc.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450DD8-80450DDC 0002D8 0004+00 2/2 0/0 0/0 .sbss            m_diffTime__11dLib_time_c */
OSTime dLib_time_c::m_diffTime;

/* 80450DE0-80450DE4 0002E0 0004+00 3/3 0/0 0/0 .sbss            m_stopTime__11dLib_time_c */
OSTime dLib_time_c::m_stopTime;

/* 80450DE8-80450DF0 0002E8 0008+00 3/3 0/0 0/0 .sbss            None */
bool dLib_time_c::m_timeStopped;

/* 80032804-80032880 02D144 007C+00 0/0 8/8 0/0 .text            getTime__11dLib_time_cFv */
OSTime dLib_time_c::getTime() {
    if (!m_timeStopped) {
        return OSGetTime() - m_diffTime;
    }

    OSTime time = OSGetTime();
    m_diffTime += (time - m_stopTime);
    m_stopTime = time;
    return time - m_diffTime;
}

/* 80032880-800328BC 02D1C0 003C+00 0/0 1/1 0/0 .text            stopTime__11dLib_time_cFv */
void dLib_time_c::stopTime() {
    if (!m_timeStopped) {
        m_stopTime = OSGetTime();
        m_timeStopped = true;
    }
}

/* 800328BC-80032918 02D1FC 005C+00 0/0 1/1 0/0 .text            startTime__11dLib_time_cFv */
void dLib_time_c::startTime() {
    if (m_timeStopped) {
        m_diffTime += OSGetTime() - m_stopTime;
        m_timeStopped = false;
    }
}

/* ############################################################################################## */
/* 80450DF0-80450DF8 -00001 0008+00 0/0 4/4 0/0 .sbss            None */
/* 80450DF0 0001+00 data_80450DF0 None */
/* 80450DF1 0001+00 data_80450DF1 None */
/* 80450DF2 0001+00 data_80450DF2 None */
/* 80450DF3 0005+00 data_80450DF3 None */
extern u8 struct_80450DF0[8];
u8 struct_80450DF0[8] ALIGN_DECL(8);
