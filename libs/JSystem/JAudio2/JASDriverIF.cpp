//
// Generated By: dol2asm
// Translation Unit: JASDriverIF
//

#include "JSystem/JAudio2/JASDriverIF.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JASDsp {
    /* 8029DA04 */ void setDSPMixerLevel(f32);
    /* 8029DA30 */ void getDSPMixerLevel();
};

struct JASDriver {
    /* 8029CCD4 */ void getSubFrameCounter();
    /* 8029E130 */ void setDSPLevel(f32);
    /* 8029E150 */ void getChannelLevel_dsp();
    /* 8029E158 */ void getDSPLevel();
    /* 8029E178 */ void setOutputMode(u32);
    /* 8029E180 */ void getOutputMode();
    /* 8029E188 */ void waitSubFrame();
    /* 8029E1C4 */ void rejectCallback(s32 (*)(void*), void*);
    /* 8029E240 */ void registerDspSyncCallback(s32 (*)(void*), void*);
    /* 8029E274 */ void registerSubFrameCallback(s32 (*)(void*), void*);
    /* 8029E2A8 */ void subframeCallback();
    /* 8029E2D0 */ void DSPSyncCallback();
    /* 8029E2F8 */ void updateDacCallback();

    static u8 sDspSyncCallback[256];
    static u8 sSubFrameCallback[256];
    static u8 sUpdateDacCallback[256 + 8 /* padding */];
    static u16 MAX_MIXERLEVEL[1 + 1 /* padding */];
    static u32 JAS_SYSTEM_OUTPUT_MODE;
};

struct JASCallbackMgr {
    struct TCallback {
        /* 8029E3A0 */ TCallback();
    };

    /* 8028FFA8 */ void regist(s32 (*)(void*), void*);
    /* 80290030 */ void reject(s32 (*)(void*), void*);
    /* 802900C4 */ void callback();
};

//
// Forward References:
//

extern "C" void setDSPLevel__9JASDriverFf();
extern "C" void getChannelLevel_dsp__9JASDriverFv();
extern "C" void getDSPLevel__9JASDriverFv();
extern "C" void setOutputMode__9JASDriverFUl();
extern "C" void getOutputMode__9JASDriverFv();
extern "C" void waitSubFrame__9JASDriverFv();
extern "C" void rejectCallback__9JASDriverFPFPv_lPv();
extern "C" void registerDspSyncCallback__9JASDriverFPFPv_lPv();
extern "C" void registerSubFrameCallback__9JASDriverFPFPv_lPv();
extern "C" void subframeCallback__9JASDriverFv();
extern "C" void DSPSyncCallback__9JASDriverFv();
extern "C" void updateDacCallback__9JASDriverFv();
extern "C" void __sinit_JASDriverIF_cpp();
extern "C" void __ct__Q214JASCallbackMgr9TCallbackFv();
extern "C" u8 sDspSyncCallback__9JASDriver[256];
extern "C" u8 sSubFrameCallback__9JASDriver[256];
extern "C" u8 sUpdateDacCallback__9JASDriver[256 + 8 /* padding */];
extern "C" u16 MAX_MIXERLEVEL__9JASDriver[1 + 1 /* padding */];
extern "C" u32 JAS_SYSTEM_OUTPUT_MODE__9JASDriver;

//
// External References:
//

extern "C" void regist__14JASCallbackMgrFPFPv_lPv();
extern "C" void reject__14JASCallbackMgrFPFPv_lPv();
extern "C" void callback__14JASCallbackMgrFv();
extern "C" void getSubFrameCounter__9JASDriverFv();
extern "C" void setDSPMixerLevel__6JASDspFf();
extern "C" void getDSPMixerLevel__6JASDspFv();
extern "C" void OSYieldThread();
extern "C" void __construct_array();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();

//
// Declarations:
//

/* 8029E130-8029E150 298A70 0020+00 0/0 3/3 0/0 .text            setDSPLevel__9JASDriverFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDriver::setDSPLevel(f32 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASDriverIF/setDSPLevel__9JASDriverFf.s"
}
#pragma pop

/* ############################################################################################## */
/* 804507C0-804507C4 000240 0002+02 1/1 0/0 0/0 .sdata           MAX_MIXERLEVEL__9JASDriver */
SECTION_SDATA u16 JASDriver::MAX_MIXERLEVEL[1 + 1 /* padding */] = {
    0x2EE0,
    /* padding */
    0x0000,
};

/* 8029E150-8029E158 298A90 0008+00 0/0 2/2 0/0 .text            getChannelLevel_dsp__9JASDriverFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDriver::getChannelLevel_dsp() {
    nofralloc
#include "asm/JSystem/JAudio2/JASDriverIF/getChannelLevel_dsp__9JASDriverFv.s"
}
#pragma pop

/* 8029E158-8029E178 298A98 0020+00 0/0 3/3 0/0 .text            getDSPLevel__9JASDriverFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDriver::getDSPLevel() {
    nofralloc
#include "asm/JSystem/JAudio2/JASDriverIF/getDSPLevel__9JASDriverFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804507C4-804507C8 000244 0004+00 2/2 0/0 0/0 .sdata           JAS_SYSTEM_OUTPUT_MODE__9JASDriver
 */
SECTION_SDATA u32 JASDriver::JAS_SYSTEM_OUTPUT_MODE = 0x00000001;

/* 8029E178-8029E180 298AB8 0008+00 0/0 2/2 0/0 .text            setOutputMode__9JASDriverFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDriver::setOutputMode(u32 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASDriverIF/setOutputMode__9JASDriverFUl.s"
}
#pragma pop

/* 8029E180-8029E188 298AC0 0008+00 0/0 4/4 1/1 .text            getOutputMode__9JASDriverFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDriver::getOutputMode() {
    nofralloc
#include "asm/JSystem/JAudio2/JASDriverIF/getOutputMode__9JASDriverFv.s"
}
#pragma pop

/* 8029E188-8029E1C4 298AC8 003C+00 0/0 1/1 0/0 .text            waitSubFrame__9JASDriverFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDriver::waitSubFrame() {
    nofralloc
#include "asm/JSystem/JAudio2/JASDriverIF/waitSubFrame__9JASDriverFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80431C78-80431D78 05E998 0100+00 4/4 0/0 0/0 .bss             sDspSyncCallback__9JASDriver */
u8 JASDriver::sDspSyncCallback[256];

/* 80431D78-80431E78 05EA98 0100+00 2/4 0/0 0/0 .bss             sSubFrameCallback__9JASDriver */
u8 JASDriver::sSubFrameCallback[256];

/* 80431E78-80431F80 05EB98 0100+08 1/3 0/0 0/0 .bss             sUpdateDacCallback__9JASDriver */
u8 JASDriver::sUpdateDacCallback[256 + 8 /* padding */];

/* 8029E1C4-8029E240 298B04 007C+00 0/0 2/2 0/0 .text            rejectCallback__9JASDriverFPFPv_lPv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDriver::rejectCallback(s32 (*)(void*), void* param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASDriverIF/rejectCallback__9JASDriverFPFPv_lPv.s"
}
#pragma pop

/* 8029E240-8029E274 298B80 0034+00 0/0 1/1 0/0 .text registerDspSyncCallback__9JASDriverFPFPv_lPv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDriver::registerDspSyncCallback(s32 (*)(void*), void* param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASDriverIF/registerDspSyncCallback__9JASDriverFPFPv_lPv.s"
}
#pragma pop

/* 8029E274-8029E2A8 298BB4 0034+00 0/0 3/3 0/0 .text
 * registerSubFrameCallback__9JASDriverFPFPv_lPv                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDriver::registerSubFrameCallback(s32 (*)(void*), void* param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASDriverIF/registerSubFrameCallback__9JASDriverFPFPv_lPv.s"
}
#pragma pop

/* 8029E2A8-8029E2D0 298BE8 0028+00 0/0 1/1 0/0 .text            subframeCallback__9JASDriverFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDriver::subframeCallback() {
    nofralloc
#include "asm/JSystem/JAudio2/JASDriverIF/subframeCallback__9JASDriverFv.s"
}
#pragma pop

/* 8029E2D0-8029E2F8 298C10 0028+00 0/0 1/1 0/0 .text            DSPSyncCallback__9JASDriverFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDriver::DSPSyncCallback() {
    nofralloc
#include "asm/JSystem/JAudio2/JASDriverIF/DSPSyncCallback__9JASDriverFv.s"
}
#pragma pop

/* 8029E2F8-8029E320 298C38 0028+00 0/0 1/1 0/0 .text            updateDacCallback__9JASDriverFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASDriver::updateDacCallback() {
    nofralloc
#include "asm/JSystem/JAudio2/JASDriverIF/updateDacCallback__9JASDriverFv.s"
}
#pragma pop

/* 8029E320-8029E3A0 298C60 0080+00 0/0 1/0 0/0 .text            __sinit_JASDriverIF_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_JASDriverIF_cpp() {
    nofralloc
#include "asm/JSystem/JAudio2/JASDriverIF/__sinit_JASDriverIF_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_8029E320 = (void*)__sinit_JASDriverIF_cpp;
#pragma pop

/* 8029E3A0-8029E3B0 298CE0 0010+00 1/1 0/0 0/0 .text __ct__Q214JASCallbackMgr9TCallbackFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASCallbackMgr::TCallback::TCallback() {
    nofralloc
#include "asm/JSystem/JAudio2/JASDriverIF/__ct__Q214JASCallbackMgr9TCallbackFv.s"
}
#pragma pop
