//
// Generated By: dol2asm
// Translation Unit: vi
//

#include "dolphin/vi/vi.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __VIRetraceHandler();
extern "C" void VISetPreRetraceCallback();
extern "C" void VISetPostRetraceCallback();
extern "C" static void getTiming();
extern "C" void __VIInit();
extern "C" void VIInit();
extern "C" void VIWaitForRetrace();
extern "C" static void setFbbRegs();
extern "C" static void setVerticalRegs();
extern "C" void VIConfigure();
extern "C" void VIFlush();
extern "C" void VISetNextFrameBuffer();
extern "C" void VIGetNextFrameBuffer();
extern "C" void VIGetCurrentFrameBuffer();
extern "C" void VISetBlack();
extern "C" void VIGetRetraceCount();
extern "C" static void GetCurrentDisplayPosition();
extern "C" static void getCurrentFieldEvenOdd();
extern "C" void VIGetNextField();
extern "C" void VIGetCurrentLine();
extern "C" void VIGetTvFormat();
extern "C" void VIGetDTVStatus();
extern "C" void __VIDisplayPositionToXY();
extern "C" void __VIGetCurrentPosition();

//
// External References:
//

extern "C" void OSReport();
extern "C" void OSPanic();
extern "C" void OSRegisterVersion();
extern "C" void OSSetCurrentContext();
extern "C" void OSClearContext();
extern "C" void OSDisableInterrupts();
extern "C" void OSRestoreInterrupts();
extern "C" void __OSSetInterruptHandler();
extern "C" void __OSUnmaskInterrupts();
extern "C" void __OSLockSram();
extern "C" void __OSUnlockSram();
extern "C" void OSInitThreadQueue();
extern "C" void OSSleepThread();
extern "C" void OSWakeupThread();
extern "C" void SIRefreshSamplingRate();
extern "C" void __shl2i();
extern "C" void __shr2u();

//
// Declarations:
//

/* ############################################################################################## */
/* 8044CA28-8044CAA0 079748 0076+02 8/8 0/0 0/0 .bss             regs */
static u8 regs[118 + 2 /* padding */];

/* 804517E0-804517E4 000CE0 0004+00 1/1 0/0 0/0 .sbss            IsInitialized */
static u8 IsInitialized[4];

/* 804517E4-804517E8 000CE4 0004+00 4/4 0/0 0/0 .sbss            retraceCount */
static u8 retraceCount[4];

/* 804517E8-804517EC 000CE8 0004+00 3/3 0/0 0/0 .sbss            flushFlag */
static u8 flushFlag[4];

/* 804517EC-804517F4 000CEC 0008+00 3/3 0/0 0/0 .sbss            retraceQueue */
static u8 retraceQueue[8];

/* 804517F4-804517F8 000CF4 0004+00 3/3 0/0 0/0 .sbss            PreCB */
static u8 PreCB[4];

/* 804517F8-804517FC 000CF8 0004+00 3/3 0/0 0/0 .sbss            PostCB */
static u8 PostCB[4];

/* 804517FC-80451800 000CFC 0004+00 1/1 0/0 0/0 .sbss            PositionCallback */
static u8 PositionCallback[4];

/* 80451800-80451804 000D00 0004+00 2/2 0/0 0/0 .sbss            encoderType */
static u8 encoderType[4];

/* 80451804-80451808 -00001 0004+00 2/2 0/0 0/0 .sbss            None */
/* 80451804 0002+00 data_80451804 displayOffsetH */
/* 80451806 0002+00 data_80451806 displayOffsetV */
static u8 struct_80451804[4];

/* 80451808-80451810 000D08 0004+04 3/3 0/0 0/0 .sbss            changeMode */
static u8 changeMode[4 + 4 /* padding */];

/* 80451810-80451814 000D10 0004+00 5/5 0/0 0/0 .sbss            changed */
static u8 changed[4];

/* 80451814-80451818 000D14 0004+00 5/5 0/0 0/0 .sbss            None */
static u8 data_80451814[4];

/* 80451818-80451820 000D18 0004+04 3/3 0/0 0/0 .sbss            shdwChangeMode */
static u8 shdwChangeMode[4 + 4 /* padding */];

/* 80451820-80451824 000D20 0004+00 3/3 0/0 0/0 .sbss            shdwChanged */
static u8 shdwChanged[4];

/* 80451824-80451828 000D24 0004+00 3/3 0/0 0/0 .sbss            None */
static u8 data_80451824[4];

/* 80451828-8045182C 000D28 0004+00 6/6 0/0 0/0 .sbss            CurrTiming */
static u8 CurrTiming[4];

/* 8045182C-80451830 000D2C 0004+00 3/3 0/0 0/0 .sbss            CurrTvMode */
static u8 CurrTvMode[4];

/* 80451830-80451834 000D30 0004+00 3/3 0/0 0/0 .sbss            NextBufAddr */
static u8 NextBufAddr[4];

/* 80451834-80451838 000D34 0004+00 2/2 0/0 0/0 .sbss            CurrBufAddr */
static u8 CurrBufAddr[4];

/* 8034BF6C-8034C1E0 3468AC 0274+00 1/1 0/0 0/0 .text            __VIRetraceHandler */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __VIRetraceHandler() {
    nofralloc
#include "asm/dolphin/vi/vi/__VIRetraceHandler.s"
}
#pragma pop

/* 8034C1E0-8034C224 346B20 0044+00 0/0 4/4 0/0 .text            VISetPreRetraceCallback */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void VISetPreRetraceCallback() {
    nofralloc
#include "asm/dolphin/vi/vi/VISetPreRetraceCallback.s"
}
#pragma pop

/* 8034C224-8034C268 346B64 0044+00 0/0 4/4 2/2 .text            VISetPostRetraceCallback */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void VISetPostRetraceCallback() {
    nofralloc
#include "asm/dolphin/vi/vi/VISetPostRetraceCallback.s"
}
#pragma pop

/* ############################################################################################## */
/* 803D1760-803D17A4 02E880 0044+00 4/3 0/0 0/0 .data            @1 */
SECTION_DATA static u8 lit_1[68] = {
    0x3C, 0x3C, 0x20, 0x44, 0x6F, 0x6C, 0x70, 0x68, 0x69, 0x6E, 0x20, 0x53, 0x44, 0x4B,
    0x20, 0x2D, 0x20, 0x56, 0x49, 0x09, 0x72, 0x65, 0x6C, 0x65, 0x61, 0x73, 0x65, 0x20,
    0x62, 0x75, 0x69, 0x6C, 0x64, 0x3A, 0x20, 0x41, 0x70, 0x72, 0x20, 0x20, 0x37, 0x20,
    0x32, 0x30, 0x30, 0x34, 0x20, 0x30, 0x34, 0x3A, 0x31, 0x33, 0x3A, 0x35, 0x39, 0x20,
    0x28, 0x30, 0x78, 0x32, 0x33, 0x30, 0x31, 0x29, 0x20, 0x3E, 0x3E, 0x00,
};

/* 803D17A4-803D1920 02E8C4 017C+00 0/1 0/0 0/0 .data            timing */
#pragma push
#pragma force_active on
SECTION_DATA static u8 timing[380] = {
    0x06, 0x00, 0x00, 0xF0, 0x00, 0x18, 0x00, 0x19, 0x00, 0x03, 0x00, 0x02, 0x0C, 0x0D, 0x0C, 0x0D,
    0x02, 0x08, 0x02, 0x07, 0x02, 0x08, 0x02, 0x07, 0x02, 0x0D, 0x01, 0xAD, 0x40, 0x47, 0x69, 0xA2,
    0x01, 0x75, 0x7A, 0x00, 0x01, 0x9C, 0x06, 0x00, 0x00, 0xF0, 0x00, 0x18, 0x00, 0x18, 0x00, 0x04,
    0x00, 0x04, 0x0C, 0x0C, 0x0C, 0x0C, 0x02, 0x08, 0x02, 0x08, 0x02, 0x08, 0x02, 0x08, 0x02, 0x0E,
    0x01, 0xAD, 0x40, 0x47, 0x69, 0xA2, 0x01, 0x75, 0x7A, 0x00, 0x01, 0x9C, 0x05, 0x00, 0x01, 0x1F,
    0x00, 0x23, 0x00, 0x24, 0x00, 0x01, 0x00, 0x00, 0x0D, 0x0C, 0x0B, 0x0A, 0x02, 0x6B, 0x02, 0x6A,
    0x02, 0x69, 0x02, 0x6C, 0x02, 0x71, 0x01, 0xB0, 0x40, 0x4B, 0x6A, 0xAC, 0x01, 0x7C, 0x85, 0x00,
    0x01, 0xA4, 0x05, 0x00, 0x01, 0x1F, 0x00, 0x21, 0x00, 0x21, 0x00, 0x02, 0x00, 0x02, 0x0D, 0x0B,
    0x0D, 0x0B, 0x02, 0x6B, 0x02, 0x6D, 0x02, 0x6B, 0x02, 0x6D, 0x02, 0x70, 0x01, 0xB0, 0x40, 0x4B,
    0x6A, 0xAC, 0x01, 0x7C, 0x85, 0x00, 0x01, 0xA4, 0x06, 0x00, 0x00, 0xF0, 0x00, 0x18, 0x00, 0x19,
    0x00, 0x03, 0x00, 0x02, 0x10, 0x0F, 0x0E, 0x0D, 0x02, 0x06, 0x02, 0x05, 0x02, 0x04, 0x02, 0x07,
    0x02, 0x0D, 0x01, 0xAD, 0x40, 0x4E, 0x70, 0xA2, 0x01, 0x75, 0x7A, 0x00, 0x01, 0x9C, 0x06, 0x00,
    0x00, 0xF0, 0x00, 0x18, 0x00, 0x18, 0x00, 0x04, 0x00, 0x04, 0x10, 0x0E, 0x10, 0x0E, 0x02, 0x06,
    0x02, 0x08, 0x02, 0x06, 0x02, 0x08, 0x02, 0x0E, 0x01, 0xAD, 0x40, 0x4E, 0x70, 0xA2, 0x01, 0x75,
    0x7A, 0x00, 0x01, 0x9C, 0x0C, 0x00, 0x01, 0xE0, 0x00, 0x30, 0x00, 0x30, 0x00, 0x06, 0x00, 0x06,
    0x18, 0x18, 0x18, 0x18, 0x04, 0x0E, 0x04, 0x0E, 0x04, 0x0E, 0x04, 0x0E, 0x04, 0x1A, 0x01, 0xAD,
    0x40, 0x47, 0x69, 0xA2, 0x01, 0x75, 0x7A, 0x00, 0x01, 0x9C, 0x0C, 0x00, 0x01, 0xE0, 0x00, 0x2C,
    0x00, 0x2C, 0x00, 0x0A, 0x00, 0x0A, 0x18, 0x18, 0x18, 0x18, 0x04, 0x0E, 0x04, 0x0E, 0x04, 0x0E,
    0x04, 0x0E, 0x04, 0x1A, 0x01, 0xAD, 0x40, 0x47, 0x69, 0xA8, 0x01, 0x7B, 0x7A, 0x00, 0x01, 0x9C,
    0x06, 0x00, 0x00, 0xF1, 0x00, 0x18, 0x00, 0x19, 0x00, 0x01, 0x00, 0x00, 0x0C, 0x0D, 0x0C, 0x0D,
    0x02, 0x08, 0x02, 0x07, 0x02, 0x08, 0x02, 0x07, 0x02, 0x0D, 0x01, 0xAD, 0x40, 0x47, 0x69, 0x9F,
    0x01, 0x72, 0x7A, 0x00, 0x01, 0x9C, 0x0C, 0x00, 0x01, 0xE0, 0x00, 0x30, 0x00, 0x30, 0x00, 0x06,
    0x00, 0x06, 0x18, 0x18, 0x18, 0x18, 0x04, 0x0E, 0x04, 0x0E, 0x04, 0x0E, 0x04, 0x0E, 0x04, 0x1A,
    0x01, 0xAD, 0x40, 0x47, 0x69, 0xB4, 0x01, 0x87, 0x7A, 0x00, 0x01, 0x9C,
};
#pragma pop

/* 803D1920-803D1954 02EA40 0032+02 0/1 0/0 0/0 .data            taps */
#pragma push
#pragma force_active on
SECTION_DATA static u8 taps[50 + 2 /* padding */] = {
    0x01,
    0xF0,
    0x01,
    0xDC,
    0x01,
    0xAE,
    0x01,
    0x74,
    0x01,
    0x29,
    0x00,
    0xDB,
    0x00,
    0x8E,
    0x00,
    0x46,
    0x00,
    0x0C,
    0x00,
    0xE2,
    0x00,
    0xCB,
    0x00,
    0xC0,
    0x00,
    0xC4,
    0x00,
    0xCF,
    0x00,
    0xDE,
    0x00,
    0xEC,
    0x00,
    0xFC,
    0x00,
    0x08,
    0x00,
    0x0F,
    0x00,
    0x13,
    0x00,
    0x13,
    0x00,
    0x0F,
    0x00,
    0x0C,
    0x00,
    0x08,
    0x00,
    0x01,
    /* padding */
    0x00,
    0x00,
};
#pragma pop

/* 803D1954-803D19D0 -00001 007C+00 1/1 0/0 0/0 .data            @101 */
SECTION_DATA static void* lit_101[31] = {
    (void*)(((char*)getTiming) + 0x28), (void*)(((char*)getTiming) + 0x30),
    (void*)(((char*)getTiming) + 0x68), (void*)(((char*)getTiming) + 0x70),
    (void*)(((char*)getTiming) + 0x38), (void*)(((char*)getTiming) + 0x40),
    (void*)(((char*)getTiming) + 0xA0), (void*)(((char*)getTiming) + 0xA0),
    (void*)(((char*)getTiming) + 0x58), (void*)(((char*)getTiming) + 0x60),
    (void*)(((char*)getTiming) + 0xA0), (void*)(((char*)getTiming) + 0xA0),
    (void*)(((char*)getTiming) + 0xA0), (void*)(((char*)getTiming) + 0xA0),
    (void*)(((char*)getTiming) + 0xA0), (void*)(((char*)getTiming) + 0xA0),
    (void*)(((char*)getTiming) + 0x78), (void*)(((char*)getTiming) + 0x80),
    (void*)(((char*)getTiming) + 0xA0), (void*)(((char*)getTiming) + 0xA0),
    (void*)(((char*)getTiming) + 0x48), (void*)(((char*)getTiming) + 0x50),
    (void*)(((char*)getTiming) + 0xA0), (void*)(((char*)getTiming) + 0xA0),
    (void*)(((char*)getTiming) + 0x88), (void*)(((char*)getTiming) + 0xA0),
    (void*)(((char*)getTiming) + 0x90), (void*)(((char*)getTiming) + 0xA0),
    (void*)(((char*)getTiming) + 0x98), (void*)(((char*)getTiming) + 0x98),
    (void*)(((char*)getTiming) + 0x98),
};

/* 80451838-8045183C 000D38 0004+00 2/2 0/0 0/0 .sbss            FBSet */
static u8 FBSet[4];

/* 8045183C-80451840 000D3C 0004+00 1/1 0/0 0/0 .sbss            timingExtra */
static u8 timingExtra[4];

/* 8034C268-8034C310 346BA8 00A8+00 4/3 0/0 0/0 .text            getTiming */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void getTiming() {
    nofralloc
#include "asm/dolphin/vi/vi/getTiming.s"
}
#pragma pop

/* 8034C310-8034C514 346C50 0204+00 1/1 0/0 0/0 .text            __VIInit */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __VIInit() {
    nofralloc
#include "asm/dolphin/vi/vi/__VIInit.s"
}
#pragma pop

/* ############################################################################################## */
/* 8044CAA0-8044CB18 0797C0 0076+02 0/0 0/0 0/0 .bss             shdwRegs */
#pragma push
#pragma force_active on
static u8 shdwRegs[118 + 2 /* padding */];
#pragma pop

/* 8044CB18-8044CB70 079838 0058+00 2/5 0/0 0/0 .bss             HorVer */
static u8 HorVer[88];

/* 80450A10-80450A14 -00001 0004+00 1/1 0/0 0/0 .sdata           __VIVersion */
SECTION_SDATA static void* __VIVersion = (void*)&lit_1;

/* 8034C514-8034C9C4 346E54 04B0+00 0/0 1/1 0/0 .text            VIInit */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void VIInit() {
    nofralloc
#include "asm/dolphin/vi/vi/VIInit.s"
}
#pragma pop

/* 8034C9C4-8034CA18 347304 0054+00 0/0 10/10 0/0 .text            VIWaitForRetrace */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void VIWaitForRetrace() {
    nofralloc
#include "asm/dolphin/vi/vi/VIWaitForRetrace.s"
}
#pragma pop

/* 8034CA18-8034CCEC 347358 02D4+00 2/2 0/0 0/0 .text            setFbbRegs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void setFbbRegs() {
    nofralloc
#include "asm/dolphin/vi/vi/setFbbRegs.s"
}
#pragma pop

/* 8034CCEC-8034CE8C 34762C 01A0+00 2/2 0/0 0/0 .text            setVerticalRegs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void setVerticalRegs() {
    nofralloc
#include "asm/dolphin/vi/vi/setVerticalRegs.s"
}
#pragma pop

/* ############################################################################################## */
/* 803D19D0-803D19FC 02EAF0 0029+03 0/1 0/0 0/0 .data            @355 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_355[41 + 3 /* padding */] = {
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
#pragma pop

/* 803D19FC-803D1A28 02EB1C 0029+03 0/1 0/0 0/0 .data            @356 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_356[41 + 3 /* padding */] = {
    0x20,
    0x21,
    0x20,
    0x21,
    0x20,
    0x21,
    0x20,
    0x43,
    0x20,
    0x41,
    0x20,
    0x55,
    0x20,
    0x54,
    0x20,
    0x49,
    0x20,
    0x4F,
    0x20,
    0x4E,
    0x20,
    0x21,
    0x20,
    0x21,
    0x20,
    0x21,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
#pragma pop

/* 803D1A28-803D1A54 02EB48 0029+03 0/1 0/0 0/0 .data            @357 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_357[41 + 3 /* padding */] = {
    0x54,
    0x68,
    0x69,
    0x73,
    0x20,
    0x54,
    0x56,
    0x20,
    0x66,
    0x6F,
    0x72,
    0x6D,
    0x61,
    0x74,
    0x20,
    0x22,
    0x44,
    0x45,
    0x42,
    0x55,
    0x47,
    0x5F,
    0x50,
    0x41,
    0x4C,
    0x22,
    0x20,
    0x69,
    0x73,
    0x20,
    0x6F,
    0x6E,
    0x6C,
    0x79,
    0x20,
    0x66,
    0x6F,
    0x72,
    0x20,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
#pragma pop

/* 803D1A54-803D1A80 02EB74 0029+03 0/1 0/0 0/0 .data            @358 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_358[41 + 3 /* padding */] = {
    0x74,
    0x65,
    0x6D,
    0x70,
    0x6F,
    0x72,
    0x61,
    0x72,
    0x79,
    0x20,
    0x73,
    0x6F,
    0x6C,
    0x75,
    0x74,
    0x69,
    0x6F,
    0x6E,
    0x20,
    0x75,
    0x6E,
    0x74,
    0x69,
    0x6C,
    0x20,
    0x50,
    0x41,
    0x4C,
    0x20,
    0x44,
    0x41,
    0x43,
    0x20,
    0x62,
    0x6F,
    0x61,
    0x72,
    0x64,
    0x20,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
#pragma pop

/* 803D1A80-803D1AAC 02EBA0 0029+03 0/1 0/0 0/0 .data            @359 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_359[41 + 3 /* padding */] = {
    0x69,
    0x73,
    0x20,
    0x61,
    0x76,
    0x61,
    0x69,
    0x6C,
    0x61,
    0x62,
    0x6C,
    0x65,
    0x2E,
    0x20,
    0x50,
    0x6C,
    0x65,
    0x61,
    0x73,
    0x65,
    0x20,
    0x64,
    0x6F,
    0x20,
    0x4E,
    0x4F,
    0x54,
    0x20,
    0x75,
    0x73,
    0x65,
    0x20,
    0x74,
    0x68,
    0x69,
    0x73,
    0x20,
    0x20,
    0x20,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
#pragma pop

/* 803D1AAC-803D1AD8 02EBCC 0029+03 0/1 0/0 0/0 .data            @360 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_360[41 + 3 /* padding */] = {
    0x6D,
    0x6F,
    0x64,
    0x65,
    0x20,
    0x69,
    0x6E,
    0x20,
    0x72,
    0x65,
    0x61,
    0x6C,
    0x20,
    0x67,
    0x61,
    0x6D,
    0x65,
    0x73,
    0x21,
    0x21,
    0x21,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
#pragma pop

/* 803D1AD8-803D1B24 02EBF8 004B+01 0/1 0/0 0/0 .data            @538 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_538[75 + 1 /* padding */] = {
    0x56,
    0x49,
    0x43,
    0x6F,
    0x6E,
    0x66,
    0x69,
    0x67,
    0x75,
    0x72,
    0x65,
    0x28,
    0x29,
    0x3A,
    0x20,
    0x54,
    0x72,
    0x69,
    0x65,
    0x64,
    0x20,
    0x74,
    0x6F,
    0x20,
    0x63,
    0x68,
    0x61,
    0x6E,
    0x67,
    0x65,
    0x20,
    0x6D,
    0x6F,
    0x64,
    0x65,
    0x20,
    0x66,
    0x72,
    0x6F,
    0x6D,
    0x20,
    0x28,
    0x25,
    0x64,
    0x29,
    0x20,
    0x74,
    0x6F,
    0x20,
    0x28,
    0x25,
    0x64,
    0x29,
    0x2C,
    0x20,
    0x77,
    0x68,
    0x69,
    0x63,
    0x68,
    0x20,
    0x69,
    0x73,
    0x20,
    0x66,
    0x6F,
    0x72,
    0x62,
    0x69,
    0x64,
    0x64,
    0x65,
    0x6E,
    0x0A,
    0x00,
    /* padding */
    0x00,
};
#pragma pop

/* 80450A14-80450A1C 000494 0005+03 1/1 0/0 0/0 .sdata           @537 */
SECTION_SDATA static u8 lit_537[5 + 3 /* padding */] = {
    0x76,
    0x69,
    0x2E,
    0x63,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};

/* 80451840-80451848 000D40 0004+04 1/1 0/0 0/0 .sbss            message$351 */
static u8 message[4 + 4 /* padding */];

/* 8034CE8C-8034D694 3477CC 0808+00 0/0 2/2 0/0 .text            VIConfigure */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void VIConfigure() {
    nofralloc
#include "asm/dolphin/vi/vi/VIConfigure.s"
}
#pragma pop

/* 8034D694-8034D7C4 347FD4 0130+00 0/0 9/9 0/0 .text            VIFlush */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void VIFlush() {
    nofralloc
#include "asm/dolphin/vi/vi/VIFlush.s"
}
#pragma pop

/* 8034D7C4-8034D830 348104 006C+00 0/0 3/3 0/0 .text            VISetNextFrameBuffer */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void VISetNextFrameBuffer() {
    nofralloc
#include "asm/dolphin/vi/vi/VISetNextFrameBuffer.s"
}
#pragma pop

/* 8034D830-8034D838 348170 0008+00 0/0 1/1 0/0 .text            VIGetNextFrameBuffer */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void VIGetNextFrameBuffer() {
    nofralloc
#include "asm/dolphin/vi/vi/VIGetNextFrameBuffer.s"
}
#pragma pop

/* 8034D838-8034D840 348178 0008+00 0/0 1/1 0/0 .text            VIGetCurrentFrameBuffer */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void VIGetCurrentFrameBuffer() {
    nofralloc
#include "asm/dolphin/vi/vi/VIGetCurrentFrameBuffer.s"
}
#pragma pop

/* 8034D840-8034D8BC 348180 007C+00 0/0 7/7 0/0 .text            VISetBlack */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void VISetBlack() {
    nofralloc
#include "asm/dolphin/vi/vi/VISetBlack.s"
}
#pragma pop

/* 8034D8BC-8034D8C4 3481FC 0008+00 0/0 9/9 0/0 .text            VIGetRetraceCount */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void VIGetRetraceCount() {
    nofralloc
#include "asm/dolphin/vi/vi/VIGetRetraceCount.s"
}
#pragma pop

/* 8034D8C4-8034D900 348204 003C+00 1/1 0/0 0/0 .text            GetCurrentDisplayPosition */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void GetCurrentDisplayPosition() {
    nofralloc
#include "asm/dolphin/vi/vi/GetCurrentDisplayPosition.s"
}
#pragma pop

/* 8034D900-8034D968 348240 0068+00 1/1 0/0 0/0 .text            getCurrentFieldEvenOdd */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void getCurrentFieldEvenOdd() {
    nofralloc
#include "asm/dolphin/vi/vi/getCurrentFieldEvenOdd.s"
}
#pragma pop

/* 8034D968-8034DA04 3482A8 009C+00 0/0 0/0 2/2 .text            VIGetNextField */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void VIGetNextField() {
    nofralloc
#include "asm/dolphin/vi/vi/VIGetNextField.s"
}
#pragma pop

/* 8034DA04-8034DA9C 348344 0098+00 0/0 1/1 0/0 .text            VIGetCurrentLine */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void VIGetCurrentLine() {
    nofralloc
#include "asm/dolphin/vi/vi/VIGetCurrentLine.s"
}
#pragma pop

/* ############################################################################################## */
/* 803D1B24-803D1B48 -00001 0020+04 1/1 0/0 0/0 .data            @740 */
SECTION_DATA static void* lit_740[8 + 1 /* padding */] = {
    (void*)(((char*)VIGetTvFormat) + 0x38),
    (void*)(((char*)VIGetTvFormat) + 0x40),
    (void*)(((char*)VIGetTvFormat) + 0x48),
    (void*)(((char*)VIGetTvFormat) + 0x38),
    (void*)(((char*)VIGetTvFormat) + 0x40),
    (void*)(((char*)VIGetTvFormat) + 0x48),
    (void*)(((char*)VIGetTvFormat) + 0x38),
    (void*)(((char*)VIGetTvFormat) + 0x38),
    /* padding */
    NULL,
};

/* 8034DA9C-8034DB04 3483DC 0068+00 1/0 2/2 1/1 .text            VIGetTvFormat */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void VIGetTvFormat() {
    nofralloc
#include "asm/dolphin/vi/vi/VIGetTvFormat.s"
}
#pragma pop

/* 8034DB04-8034DB40 348444 003C+00 0/0 2/2 0/0 .text            VIGetDTVStatus */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void VIGetDTVStatus() {
    nofralloc
#include "asm/dolphin/vi/vi/VIGetDTVStatus.s"
}
#pragma pop

/* 8034DB40-8034DD5C 348480 021C+00 1/1 0/0 0/0 .text            __VIDisplayPositionToXY */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __VIDisplayPositionToXY() {
    nofralloc
#include "asm/dolphin/vi/vi/__VIDisplayPositionToXY.s"
}
#pragma pop

/* 8034DD5C-8034DDBC 34869C 0060+00 1/1 0/0 0/0 .text            __VIGetCurrentPosition */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __VIGetCurrentPosition() {
    nofralloc
#include "asm/dolphin/vi/vi/__VIGetCurrentPosition.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450A19-80450A1D -00001 0004+00 0/0 0/0 0/0 .sdata           None */
#pragma push
#pragma force_active on
SECTION_SDATA static u8 pad_80450A19[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
#pragma pop
