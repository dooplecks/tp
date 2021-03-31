// 
// Generated By: dol2asm
// Translation Unit: vi
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "dolphin/vi/vi.h"

// 
// Forward References:
// 


// True False
extern "C" static void __VIRetraceHandler();
// False False
extern "C" void VISetPreRetraceCallback();
// False False
extern "C" void VISetPostRetraceCallback();
// True False
extern "C" static void getTiming();
// True False
extern "C" static void __VIInit();
// False False
extern "C" void VIInit();
// False False
extern "C" void VIWaitForRetrace();
// True False
extern "C" static void setFbbRegs();
// True False
extern "C" static void setVerticalRegs();
// False False
extern "C" void VIConfigure();
// False False
extern "C" void VIFlush();
// False False
extern "C" void VISetNextFrameBuffer();
// False False
extern "C" void VIGetNextFrameBuffer();
// False False
extern "C" void VIGetCurrentFrameBuffer();
// False False
extern "C" void VISetBlack();
// False False
extern "C" void VIGetRetraceCount();
// True False
extern "C" static void GetCurrentDisplayPosition();
// True False
extern "C" static void getCurrentFieldEvenOdd();
// False False
extern "C" void VIGetNextField();
// False False
extern "C" void VIGetCurrentLine();
// False False
extern "C" void VIGetTvFormat();
// False False
extern "C" void VIGetDTVStatus();
// True False
extern "C" static void __VIDisplayPositionToXY();
// True False
extern "C" static void __VIGetCurrentPosition();
extern "C" extern u8 timing[380];
extern "C" extern u8 taps[50 + 2 /* padding */];
extern "C" extern u8 lit_355[41 + 3 /* padding */];
extern "C" extern u8 lit_356[41 + 3 /* padding */];
extern "C" extern u8 lit_357[41 + 3 /* padding */];
extern "C" extern u8 lit_358[41 + 3 /* padding */];
extern "C" extern u8 lit_359[41 + 3 /* padding */];
extern "C" extern u8 lit_360[41 + 3 /* padding */];
extern "C" extern u8 vi__lit_538[75 + 1 /* padding */];
extern "C" extern u8 shdwRegs[118 + 2 /* padding */];
extern "C" extern u8 pad_80450A19[4];

// 
// External References:
// 


// False False
extern "C" void OSReport();
// False False
extern "C" void OSPanic();
// False False
extern "C" void OSRegisterVersion();
// False False
extern "C" void OSSetCurrentContext();
// False False
extern "C" void OSClearContext();
// False False
extern "C" void OSDisableInterrupts();
// False False
extern "C" void OSRestoreInterrupts();
// False False
extern "C" void __OSSetInterruptHandler();
// False False
extern "C" void __OSUnmaskInterrupts();
// False False
extern "C" void __OSLockSram();
// False False
extern "C" void __OSUnlockSram();
// False False
extern "C" void OSInitThreadQueue();
// False False
extern "C" void OSSleepThread();
// False False
extern "C" void OSWakeupThread();
// False False
extern "C" void SIRefreshSamplingRate();
// False False
extern "C" void __shl2i();
// False False
extern "C" void __shr2u();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 8044CA28-8044CAA0 0076+02 s=8 e=0 z=0  None .bss       regs                                                         */
static u8 regs[118 + 2 /* padding */];

/* 804517E0-804517E4 0004+00 s=1 e=0 z=0  None .sbss      IsInitialized                                                */
static u8 IsInitialized[4];

/* 804517E4-804517E8 0004+00 s=4 e=0 z=0  None .sbss      retraceCount                                                 */
static u8 retraceCount[4];

/* 804517E8-804517EC 0004+00 s=3 e=0 z=0  None .sbss      flushFlag                                                    */
static u8 flushFlag[4];

/* 804517EC-804517F4 0008+00 s=3 e=0 z=0  None .sbss      retraceQueue                                                 */
static u8 retraceQueue[8];

/* 804517F4-804517F8 0004+00 s=3 e=0 z=0  None .sbss      PreCB                                                        */
static u8 PreCB[4];

/* 804517F8-804517FC 0004+00 s=3 e=0 z=0  None .sbss      PostCB                                                       */
static u8 PostCB[4];

/* 804517FC-80451800 0004+00 s=1 e=0 z=0  None .sbss      PositionCallback                                             */
static u8 PositionCallback[4];

/* 80451800-80451804 0004+00 s=2 e=0 z=0  None .sbss      encoderType                                                  */
static u8 encoderType[4];

/* 80451804-80451808 0004+00 s=2 e=0 z=0  None .sbss      None                                                         */
static u8 struct_80451804[4];

/* 80451808-80451810 0004+04 s=3 e=0 z=0  None .sbss      changeMode                                                   */
static u8 changeMode[4 + 4 /* padding */];

/* 80451810-80451814 0004+00 s=5 e=0 z=0  None .sbss      changed                                                      */
static u8 changed[4];

/* 80451814-80451818 0004+00 s=5 e=0 z=0  None .sbss      None                                                         */
static u8 data_80451814[4];

/* 80451818-80451820 0004+04 s=3 e=0 z=0  None .sbss      shdwChangeMode                                               */
static u8 shdwChangeMode[4 + 4 /* padding */];

/* 80451820-80451824 0004+00 s=3 e=0 z=0  None .sbss      shdwChanged                                                  */
static u8 shdwChanged[4];

/* 80451824-80451828 0004+00 s=3 e=0 z=0  None .sbss      None                                                         */
static u8 data_80451824[4];

/* 80451828-8045182C 0004+00 s=6 e=0 z=0  None .sbss      CurrTiming                                                   */
static u8 CurrTiming[4];

/* 8045182C-80451830 0004+00 s=3 e=0 z=0  None .sbss      CurrTvMode                                                   */
static u8 CurrTvMode[4];

/* 80451830-80451834 0004+00 s=3 e=0 z=0  None .sbss      NextBufAddr                                                  */
static u8 NextBufAddr[4];

/* 80451834-80451838 0004+00 s=2 e=0 z=0  None .sbss      CurrBufAddr                                                  */
static u8 CurrBufAddr[4];

/* 8034BF6C-8034C1E0 0274+00 s=1 e=0 z=0  None .text      __VIRetraceHandler                                           */
//	8034BF7C: 8044CA28 (regs)
//	8034BF90: 8044CA28 (regs)
//	8034C014: 8033C000 (OSClearContext)
//	8034C01C: 8033BE38 (OSSetCurrentContext)
//	8034C020: 804517FC (PositionCallback)
//	8034C034: 8034DD5C (__VIGetCurrentPosition)
//	8034C038: 804517FC (PositionCallback)
//	8034C050: 8033C000 (OSClearContext)
//	8034C058: 8033BE38 (OSSetCurrentContext)
//	8034C060: 804517E4 (retraceCount)
//	8034C06C: 804517E4 (retraceCount)
//	8034C070: 8033C000 (OSClearContext)
//	8034C078: 8033BE38 (OSSetCurrentContext)
//	8034C07C: 804517F4 (PreCB)
//	8034C088: 804517E4 (retraceCount)
//	8034C094: 804517E8 (flushFlag)
//	8034C0A0: 80451818 (shdwChangeMode)
//	8034C0AC: 8034D900 (getCurrentFieldEvenOdd)
//	8034C0C4: 80451820 (shdwChanged)
//	8034C0CC: 80451824 (data_80451824)
//	8034C0D4: 80362670 (__shr2u)
//	8034C114: 8036264C (__shl2i)
//	8034C118: 80451820 (shdwChanged)
//	8034C124: 80451824 (data_80451824)
//	8034C130: 80451824 (data_80451824)
//	8034C134: 80451820 (shdwChanged)
//	8034C138: 80451820 (shdwChanged)
//	8034C140: 80451824 (data_80451824)
//	8034C154: 80451818 (shdwChangeMode)
//	8034C15C: 80451830 (NextBufAddr)
//	8034C164: 80451828 (CurrTiming)
//	8034C16C: 8045182C (CurrTvMode)
//	8034C170: 80451834 (CurrBufAddr)
//	8034C188: 804517E8 (flushFlag)
//	8034C18C: 80346374 (SIRefreshSamplingRate)
//	8034C190: 804517F8 (PostCB)
//	8034C1A0: 8033C000 (OSClearContext)
//	8034C1A4: 804517F8 (PostCB)
//	8034C1A8: 804517E4 (retraceCount)
//	8034C1B4: 804517EC (retraceQueue)
//	8034C1B8: 80341C98 (OSWakeupThread)
//	8034C1C0: 8033C000 (OSClearContext)
//	8034C1C8: 8033BE38 (OSSetCurrentContext)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void __VIRetraceHandler() {
	nofralloc
#include "asm/dolphin/vi/vi/__VIRetraceHandler.s"
}
#pragma pop


/* 8034C1E0-8034C224 0044+00 s=0 e=4 z=0  None .text      VISetPreRetraceCallback                                      */
//	8034C1F8: 804517F4 (PreCB)
//	8034C1FC: 8033D6F4 (OSDisableInterrupts)
//	8034C200: 804517F4 (PreCB)
//	8034C204: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void VISetPreRetraceCallback() {
	nofralloc
#include "asm/dolphin/vi/vi/VISetPreRetraceCallback.s"
}
#pragma pop


/* 8034C224-8034C268 0044+00 s=0 e=4 z=2  None .text      VISetPostRetraceCallback                                     */
//	8034C23C: 804517F8 (PostCB)
//	8034C240: 8033D6F4 (OSDisableInterrupts)
//	8034C244: 804517F8 (PostCB)
//	8034C248: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void VISetPostRetraceCallback() {
	nofralloc
#include "asm/dolphin/vi/vi/VISetPostRetraceCallback.s"
}
#pragma pop


/* ############################################################################################## */
/* 803D1760-803D17A4 0044+00 s=4 e=0 z=0  None .data      @1                                                           */
SECTION_DATA static u8 lit_1[68] = {
	0x3C, 0x3C, 0x20, 0x44, 0x6F, 0x6C, 0x70, 0x68, 0x69, 0x6E, 0x20, 0x53, 0x44, 0x4B, 0x20, 0x2D,
	0x20, 0x56, 0x49, 0x09, 0x72, 0x65, 0x6C, 0x65, 0x61, 0x73, 0x65, 0x20, 0x62, 0x75, 0x69, 0x6C,
	0x64, 0x3A, 0x20, 0x41, 0x70, 0x72, 0x20, 0x20, 0x37, 0x20, 0x32, 0x30, 0x30, 0x34, 0x20, 0x30,
	0x34, 0x3A, 0x31, 0x33, 0x3A, 0x35, 0x39, 0x20, 0x28, 0x30, 0x78, 0x32, 0x33, 0x30, 0x31, 0x29,
	0x20, 0x3E, 0x3E, 0x00,
};

/* 803D17A4-803D1920 017C+00 s=0 e=0 z=0  None .data      timing                                                       */
SECTION_DATA u8 timing[380] = {
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

/* 803D1920-803D1954 0032+02 s=0 e=0 z=0  None .data      taps                                                         */
SECTION_DATA u8 taps[50 + 2 /* padding */] = {
	0x01, 0xF0, 0x01, 0xDC, 0x01, 0xAE, 0x01, 0x74, 0x01, 0x29, 0x00, 0xDB, 0x00, 0x8E, 0x00, 0x46,
	0x00, 0x0C, 0x00, 0xE2, 0x00, 0xCB, 0x00, 0xC0, 0x00, 0xC4, 0x00, 0xCF, 0x00, 0xDE, 0x00, 0xEC,
	0x00, 0xFC, 0x00, 0x08, 0x00, 0x0F, 0x00, 0x13, 0x00, 0x13, 0x00, 0x0F, 0x00, 0x0C, 0x00, 0x08,
	0x00, 0x01,
	/* padding */
	0x00, 0x00,
};

/* 803D1954-803D19D0 007C+00 s=1 e=0 z=0  None .data      @101                                                         */
SECTION_DATA static void* lit_101[31] = {
	(void*)(((char*)getTiming)+0x28),
	(void*)(((char*)getTiming)+0x30),
	(void*)(((char*)getTiming)+0x68),
	(void*)(((char*)getTiming)+0x70),
	(void*)(((char*)getTiming)+0x38),
	(void*)(((char*)getTiming)+0x40),
	(void*)(((char*)getTiming)+0xA0),
	(void*)(((char*)getTiming)+0xA0),
	(void*)(((char*)getTiming)+0x58),
	(void*)(((char*)getTiming)+0x60),
	(void*)(((char*)getTiming)+0xA0),
	(void*)(((char*)getTiming)+0xA0),
	(void*)(((char*)getTiming)+0xA0),
	(void*)(((char*)getTiming)+0xA0),
	(void*)(((char*)getTiming)+0xA0),
	(void*)(((char*)getTiming)+0xA0),
	(void*)(((char*)getTiming)+0x78),
	(void*)(((char*)getTiming)+0x80),
	(void*)(((char*)getTiming)+0xA0),
	(void*)(((char*)getTiming)+0xA0),
	(void*)(((char*)getTiming)+0x48),
	(void*)(((char*)getTiming)+0x50),
	(void*)(((char*)getTiming)+0xA0),
	(void*)(((char*)getTiming)+0xA0),
	(void*)(((char*)getTiming)+0x88),
	(void*)(((char*)getTiming)+0xA0),
	(void*)(((char*)getTiming)+0x90),
	(void*)(((char*)getTiming)+0xA0),
	(void*)(((char*)getTiming)+0x98),
	(void*)(((char*)getTiming)+0x98),
	(void*)(((char*)getTiming)+0x98),
};

/* 80451838-8045183C 0004+00 s=2 e=0 z=0  None .sbss      FBSet                                                        */
static u8 FBSet[4];

/* 8045183C-80451840 0004+00 s=1 e=0 z=0  None .sbss      timingExtra                                                  */
static u8 timingExtra[4];

/* 8034C268-8034C310 00A8+00 s=4 e=0 z=0  None .text      getTiming                                                    */
//	8034C26C: 803D1760 (lit_1)
//	8034C270: 803D1760 (lit_1)
//	8034C278: 803D1954 (lit_101)
//	8034C27C: 803D1954 (lit_101)
//	8034C300: 8045183C (timingExtra)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void getTiming() {
	nofralloc
#include "asm/dolphin/vi/vi/getTiming.s"
}
#pragma pop


/* 8034C310-8034C514 0204+00 s=1 e=0 z=0  None .text      __VIInit                                                     */
//	8034C338: 8034C268 (getTiming)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void __VIInit() {
	nofralloc
#include "asm/dolphin/vi/vi/__VIInit.s"
}
#pragma pop


/* ############################################################################################## */
/* 80450A10-80450A14 0004+00 s=1 e=0 z=0  None .sdata     __VIVersion                                                  */
SECTION_SDATA static void* __VIVersion = (void*)&lit_1;

/* 8034C514-8034C9C4 04B0+00 s=0 e=1 z=0  None .text      VIInit                                                       */
//	8034C518: 803D1760 (lit_1)
//	8034C520: 8044CA28 (regs)
//	8034C530: 8044CA28 (regs)
//	8034C538: 803D1760 (lit_1)
//	8034C540: 804517E0 (IsInitialized)
//	8034C54C: 80450A10 (__VIVersion)
//	8034C550: 8033A874 (OSRegisterVersion)
//	8034C558: 804517E0 (IsInitialized)
//	8034C564: 80451800 (encoderType)
//	8034C578: 8034C310 (__VIInit)
//	8034C580: 804517E4 (retraceCount)
//	8034C58C: 80451814 (data_80451814)
//	8034C594: 80451810 (changed)
//	8034C598: 80451824 (data_80451824)
//	8034C59C: 80451820 (shdwChanged)
//	8034C5A0: 80451808 (changeMode)
//	8034C5A4: 80451818 (shdwChangeMode)
//	8034C5A8: 804517E8 (flushFlag)
//	8034C6D4: 80340144 (__OSLockSram)
//	8034C6E4: 80451806 (struct_80451804)
//	8034C6E8: 80451804 (struct_80451804)
//	8034C6EC: 80340538 (__OSUnlockSram)
//	8034C74C: 8034C268 (getTiming)
//	8034C770: 80451828 (CurrTiming)
//	8034C778: 8045182C (CurrTvMode)
//	8034C780: 80451828 (CurrTiming)
//	8034C7B0: 80451804 (struct_80451804)
//	8034C804: 80451806 (struct_80451804)
//	8034C91C: 804517EC (retraceQueue)
//	8034C95C: 80340C74 (OSInitThreadQueue)
//	8034C978: 8034BF6C (__VIRetraceHandler)
//	8034C97C: 8034BF6C (__VIRetraceHandler)
//	8034C990: 804517F4 (PreCB)
//	8034C994: 804517F8 (PostCB)
//	8034C998: 8033D740 (__OSSetInterruptHandler)
//	8034C9A0: 8033DB44 (__OSUnmaskInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void VIInit() {
	nofralloc
#include "asm/dolphin/vi/vi/VIInit.s"
}
#pragma pop


/* 8034C9C4-8034CA18 0054+00 s=0 e=10 z=0  None .text      VIWaitForRetrace                                             */
//	8034C9D8: 8033D6F4 (OSDisableInterrupts)
//	8034C9DC: 804517E4 (retraceCount)
//	8034C9E4: 804517EC (retraceQueue)
//	8034C9E8: 80341BAC (OSSleepThread)
//	8034C9EC: 804517E4 (retraceCount)
//	8034C9FC: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void VIWaitForRetrace() {
	nofralloc
#include "asm/dolphin/vi/vi/VIWaitForRetrace.s"
}
#pragma pop


/* 8034CA18-8034CCEC 02D4+00 s=2 e=0 z=0  None .text      setFbbRegs                                                   */
//	8034CA1C: 8044CA28 (regs)
//	8034CA20: 8044CA28 (regs)
//	8034CBD8: 80451810 (changed)
//	8034CBDC: 80451814 (data_80451814)
//	8034CBE4: 80451814 (data_80451814)
//	8034CBE8: 80451810 (changed)
//	8034CC08: 80451810 (changed)
//	8034CC0C: 80451814 (data_80451814)
//	8034CC14: 80451814 (data_80451814)
//	8034CC18: 80451810 (changed)
//	8034CC24: 80451810 (changed)
//	8034CC28: 80451814 (data_80451814)
//	8034CC30: 80451814 (data_80451814)
//	8034CC34: 80451810 (changed)
//	8034CC44: 80451810 (changed)
//	8034CC48: 80451814 (data_80451814)
//	8034CC50: 80451814 (data_80451814)
//	8034CC54: 80451810 (changed)
//	8034CC70: 80451810 (changed)
//	8034CC74: 80451814 (data_80451814)
//	8034CC7C: 80451814 (data_80451814)
//	8034CC80: 80451810 (changed)
//	8034CC90: 80451810 (changed)
//	8034CC94: 80451814 (data_80451814)
//	8034CC9C: 80451814 (data_80451814)
//	8034CCA0: 80451810 (changed)
//	8034CCAC: 80451810 (changed)
//	8034CCB0: 80451814 (data_80451814)
//	8034CCB8: 80451814 (data_80451814)
//	8034CCBC: 80451810 (changed)
//	8034CCCC: 80451810 (changed)
//	8034CCD0: 80451814 (data_80451814)
//	8034CCD8: 80451814 (data_80451814)
//	8034CCDC: 80451810 (changed)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void setFbbRegs() {
	nofralloc
#include "asm/dolphin/vi/vi/setFbbRegs.s"
}
#pragma pop


/* 8034CCEC-8034CE8C 01A0+00 s=2 e=0 z=0  None .text      setVerticalRegs                                              */
//	8034CCF0: 8044CA28 (regs)
//	8034CCF4: 8044CA28 (regs)
//	8034CDF8: 80451810 (changed)
//	8034CE00: 80451814 (data_80451814)
//	8034CE0C: 80451814 (data_80451814)
//	8034CE10: 80451810 (changed)
//	8034CE1C: 80451810 (changed)
//	8034CE20: 80451814 (data_80451814)
//	8034CE28: 80451814 (data_80451814)
//	8034CE2C: 80451810 (changed)
//	8034CE34: 80451810 (changed)
//	8034CE38: 80451814 (data_80451814)
//	8034CE40: 80451814 (data_80451814)
//	8034CE44: 80451810 (changed)
//	8034CE4C: 80451810 (changed)
//	8034CE50: 80451814 (data_80451814)
//	8034CE58: 80451814 (data_80451814)
//	8034CE5C: 80451810 (changed)
//	8034CE64: 80451810 (changed)
//	8034CE68: 80451814 (data_80451814)
//	8034CE70: 80451814 (data_80451814)
//	8034CE74: 80451810 (changed)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void setVerticalRegs() {
	nofralloc
#include "asm/dolphin/vi/vi/setVerticalRegs.s"
}
#pragma pop


/* ############################################################################################## */
/* 80450A14-80450A1C 0005+03 s=1 e=0 z=0  None .sdata     @537                                                         */
SECTION_SDATA static u8 lit_537[5 + 3 /* padding */] = {
	0x76, 0x69, 0x2E, 0x63, 0x00,
	/* padding */
	0x00, 0x00, 0x00,
};

/* 80451840-80451848 0004+04 s=1 e=0 z=0  None .sbss      message$351                                                  */
static u8 message[4 + 4 /* padding */];

/* 8034CE8C-8034D694 0808+00 s=0 e=2 z=0  None .text      VIConfigure                                                  */
//	8034CE90: 803D1760 (lit_1)
//	8034CE98: 8044CA28 (regs)
//	8034CEA8: 803D1760 (lit_1)
//	8034CEAC: 8044CA28 (regs)
//	8034CEB0: 8033D6F4 (OSDisableInterrupts)
//	8034CED4: 80451808 (changeMode)
//	8034CEF8: 80451840 (message)
//	8034CF0C: 80451840 (message)
//	8034CF14: 80006ABC (OSReport)
//	8034CF20: 80006ABC (OSReport)
//	8034CF2C: 80006ABC (OSReport)
//	8034CF38: 80006ABC (OSReport)
//	8034CF44: 80006ABC (OSReport)
//	8034CF50: 80006ABC (OSReport)
//	8034CF5C: 80006ABC (OSReport)
//	8034CFD0: 80450A14 (lit_537)
//	8034CFD8: 80006E7C (OSPanic)
//	8034D0F8: 8034C268 (getTiming)
//	8034D10C: 80451804 (struct_80451804)
//	8034D15C: 80451806 (struct_80451804)
//	8034D260: 80451800 (encoderType)
//	8034D2B8: 80451810 (changed)
//	8034D2C4: 80451814 (data_80451814)
//	8034D2CC: 80451814 (data_80451814)
//	8034D2D0: 80451810 (changed)
//	8034D2D8: 80451810 (changed)
//	8034D2DC: 80451814 (data_80451814)
//	8034D2E4: 80451814 (data_80451814)
//	8034D2E8: 80451810 (changed)
//	8034D374: 80451810 (changed)
//	8034D378: 80451814 (data_80451814)
//	8034D380: 80451814 (data_80451814)
//	8034D384: 80451810 (changed)
//	8034D388: 80451810 (changed)
//	8034D38C: 80451814 (data_80451814)
//	8034D394: 80451814 (data_80451814)
//	8034D398: 80451810 (changed)
//	8034D3DC: 80451810 (changed)
//	8034D3E0: 80451814 (data_80451814)
//	8034D3E8: 80451814 (data_80451814)
//	8034D3EC: 80451810 (changed)
//	8034D3F4: 80451810 (changed)
//	8034D3F8: 80451814 (data_80451814)
//	8034D400: 80451814 (data_80451814)
//	8034D404: 80451810 (changed)
//	8034D418: 80451810 (changed)
//	8034D41C: 80451814 (data_80451814)
//	8034D424: 80451814 (data_80451814)
//	8034D428: 80451810 (changed)
//	8034D44C: 80451810 (changed)
//	8034D458: 80451814 (data_80451814)
//	8034D464: 80451814 (data_80451814)
//	8034D468: 80451810 (changed)
//	8034D47C: 80451810 (changed)
//	8034D480: 80451814 (data_80451814)
//	8034D488: 80451814 (data_80451814)
//	8034D48C: 80451810 (changed)
//	8034D4B8: 80451810 (changed)
//	8034D4C4: 80451814 (data_80451814)
//	8034D4D0: 80451814 (data_80451814)
//	8034D4D8: 80451810 (changed)
//	8034D4E0: 80451810 (changed)
//	8034D4E4: 80451814 (data_80451814)
//	8034D4EC: 80451814 (data_80451814)
//	8034D4F0: 80451810 (changed)
//	8034D508: 80451810 (changed)
//	8034D50C: 80451814 (data_80451814)
//	8034D514: 80451814 (data_80451814)
//	8034D518: 80451810 (changed)
//	8034D530: 80451810 (changed)
//	8034D534: 80451814 (data_80451814)
//	8034D53C: 80451814 (data_80451814)
//	8034D540: 80451810 (changed)
//	8034D558: 80451810 (changed)
//	8034D55C: 80451814 (data_80451814)
//	8034D564: 80451814 (data_80451814)
//	8034D568: 80451810 (changed)
//	8034D580: 80451810 (changed)
//	8034D58C: 80451814 (data_80451814)
//	8034D594: 80451814 (data_80451814)
//	8034D598: 80451810 (changed)
//	8034D614: 80451810 (changed)
//	8034D618: 80451838 (FBSet)
//	8034D61C: 80451814 (data_80451814)
//	8034D628: 80451814 (data_80451814)
//	8034D62C: 80451810 (changed)
//	8034D648: 8034CA18 (setFbbRegs)
//	8034D674: 8034CCEC (setVerticalRegs)
//	8034D67C: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void VIConfigure() {
	nofralloc
#include "asm/dolphin/vi/vi/VIConfigure.s"
}
#pragma pop


/* 8034D694-8034D7C4 0130+00 s=0 e=9 z=0  None .text      VIFlush                                                      */
//	8034D698: 8044CA28 (regs)
//	8034D6A8: 8044CA28 (regs)
//	8034D6B8: 8033D6F4 (OSDisableInterrupts)
//	8034D6BC: 80451818 (shdwChangeMode)
//	8034D6C8: 80451808 (changeMode)
//	8034D6D0: 80451818 (shdwChangeMode)
//	8034D6D4: 80451808 (changeMode)
//	8034D6D8: 80451820 (shdwChanged)
//	8034D6DC: 80451824 (data_80451824)
//	8034D6E0: 80451810 (changed)
//	8034D6E4: 80451814 (data_80451814)
//	8034D6F0: 80451824 (data_80451824)
//	8034D6F4: 80451820 (shdwChanged)
//	8034D6FC: 80451810 (changed)
//	8034D704: 80451814 (data_80451814)
//	8034D70C: 80362670 (__shr2u)
//	8034D74C: 8036264C (__shl2i)
//	8034D750: 80451810 (changed)
//	8034D75C: 80451814 (data_80451814)
//	8034D768: 80451814 (data_80451814)
//	8034D76C: 80451810 (changed)
//	8034D770: 80451810 (changed)
//	8034D778: 80451814 (data_80451814)
//	8034D790: 804517E8 (flushFlag)
//	8034D79C: 80451830 (NextBufAddr)
//	8034D7A0: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void VIFlush() {
	nofralloc
#include "asm/dolphin/vi/vi/VIFlush.s"
}
#pragma pop


/* 8034D7C4-8034D830 006C+00 s=0 e=3 z=0  None .text      VISetNextFrameBuffer                                         */
//	8034D7C8: 8044CA28 (regs)
//	8034D7D8: 8044CA28 (regs)
//	8034D7E4: 8033D6F4 (OSDisableInterrupts)
//	8034D7F4: 80451838 (FBSet)
//	8034D80C: 8034CA18 (setFbbRegs)
//	8034D814: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void VISetNextFrameBuffer() {
	nofralloc
#include "asm/dolphin/vi/vi/VISetNextFrameBuffer.s"
}
#pragma pop


/* 8034D830-8034D838 0008+00 s=0 e=1 z=0  None .text      VIGetNextFrameBuffer                                         */
//	8034D830: 80451830 (NextBufAddr)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void VIGetNextFrameBuffer() {
	nofralloc
#include "asm/dolphin/vi/vi/VIGetNextFrameBuffer.s"
}
#pragma pop


/* 8034D838-8034D840 0008+00 s=0 e=1 z=0  None .text      VIGetCurrentFrameBuffer                                      */
//	8034D838: 80451834 (CurrBufAddr)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void VIGetCurrentFrameBuffer() {
	nofralloc
#include "asm/dolphin/vi/vi/VIGetCurrentFrameBuffer.s"
}
#pragma pop


/* 8034D840-8034D8BC 007C+00 s=0 e=7 z=0  None .text      VISetBlack                                                   */
//	8034D844: 8044CA28 (regs)
//	8034D854: 8044CA28 (regs)
//	8034D860: 8033D6F4 (OSDisableInterrupts)
//	8034D898: 8034CCEC (setVerticalRegs)
//	8034D8A0: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void VISetBlack() {
	nofralloc
#include "asm/dolphin/vi/vi/VISetBlack.s"
}
#pragma pop


/* 8034D8BC-8034D8C4 0008+00 s=0 e=9 z=0  None .text      VIGetRetraceCount                                            */
//	8034D8BC: 804517E4 (retraceCount)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void VIGetRetraceCount() {
	nofralloc
#include "asm/dolphin/vi/vi/VIGetRetraceCount.s"
}
#pragma pop


/* 8034D8C4-8034D900 003C+00 s=1 e=0 z=0  None .text      GetCurrentDisplayPosition                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void GetCurrentDisplayPosition() {
	nofralloc
#include "asm/dolphin/vi/vi/GetCurrentDisplayPosition.s"
}
#pragma pop


/* 8034D900-8034D968 0068+00 s=1 e=0 z=0  None .text      getCurrentFieldEvenOdd                                       */
//	8034D930: 80451828 (CurrTiming)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void getCurrentFieldEvenOdd() {
	nofralloc
#include "asm/dolphin/vi/vi/getCurrentFieldEvenOdd.s"
}
#pragma pop


/* ############################################################################################## */
/* 8044CAA0-8044CB18 0076+02 s=0 e=0 z=0  None .bss       shdwRegs                                                     */
u8 shdwRegs[118 + 2 /* padding */];

/* 8044CB18-8044CB70 0058+00 s=2 e=0 z=0  None .bss       HorVer                                                       */
static u8 HorVer[88];

/* 8034D968-8034DA04 009C+00 s=0 e=0 z=2  None .text      VIGetNextField                                               */
//	8034D97C: 8033D6F4 (OSDisableInterrupts)
//	8034D98C: 8034D8C4 (GetCurrentDisplayPosition)
//	8034D990: 80451828 (CurrTiming)
//	8034D9D0: 8033D71C (OSRestoreInterrupts)
//	8034D9D4: 8044CB18 (HorVer)
//	8034D9D8: 8044CB18 (HorVer)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void VIGetNextField() {
	nofralloc
#include "asm/dolphin/vi/vi/VIGetNextField.s"
}
#pragma pop


/* 8034DA04-8034DA9C 0098+00 s=0 e=1 z=0  None .text      VIGetCurrentLine                                             */
//	8034DA18: 80451828 (CurrTiming)
//	8034DA1C: 8033D6F4 (OSDisableInterrupts)
//	8034DA50: 80451828 (CurrTiming)
//	8034DA6C: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void VIGetCurrentLine() {
	nofralloc
#include "asm/dolphin/vi/vi/VIGetCurrentLine.s"
}
#pragma pop


/* ############################################################################################## */
/* 803D19D0-803D19FC 0029+03 s=0 e=0 z=0  None .data      @355                                                         */
SECTION_DATA u8 lit_355[41 + 3 /* padding */] = {
	0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A,
	0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A,
	0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x0A, 0x00,
	/* padding */
	0x00, 0x00, 0x00,
};

/* 803D19FC-803D1A28 0029+03 s=0 e=0 z=0  None .data      @356                                                         */
SECTION_DATA u8 lit_356[41 + 3 /* padding */] = {
	0x20, 0x21, 0x20, 0x21, 0x20, 0x21, 0x20, 0x43, 0x20, 0x41, 0x20, 0x55, 0x20, 0x54, 0x20, 0x49,
	0x20, 0x4F, 0x20, 0x4E, 0x20, 0x21, 0x20, 0x21, 0x20, 0x21, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x0A, 0x00,
	/* padding */
	0x00, 0x00, 0x00,
};

/* 803D1A28-803D1A54 0029+03 s=0 e=0 z=0  None .data      @357                                                         */
SECTION_DATA u8 lit_357[41 + 3 /* padding */] = {
	0x54, 0x68, 0x69, 0x73, 0x20, 0x54, 0x56, 0x20, 0x66, 0x6F, 0x72, 0x6D, 0x61, 0x74, 0x20, 0x22,
	0x44, 0x45, 0x42, 0x55, 0x47, 0x5F, 0x50, 0x41, 0x4C, 0x22, 0x20, 0x69, 0x73, 0x20, 0x6F, 0x6E,
	0x6C, 0x79, 0x20, 0x66, 0x6F, 0x72, 0x20, 0x0A, 0x00,
	/* padding */
	0x00, 0x00, 0x00,
};

/* 803D1A54-803D1A80 0029+03 s=0 e=0 z=0  None .data      @358                                                         */
SECTION_DATA u8 lit_358[41 + 3 /* padding */] = {
	0x74, 0x65, 0x6D, 0x70, 0x6F, 0x72, 0x61, 0x72, 0x79, 0x20, 0x73, 0x6F, 0x6C, 0x75, 0x74, 0x69,
	0x6F, 0x6E, 0x20, 0x75, 0x6E, 0x74, 0x69, 0x6C, 0x20, 0x50, 0x41, 0x4C, 0x20, 0x44, 0x41, 0x43,
	0x20, 0x62, 0x6F, 0x61, 0x72, 0x64, 0x20, 0x0A, 0x00,
	/* padding */
	0x00, 0x00, 0x00,
};

/* 803D1A80-803D1AAC 0029+03 s=0 e=0 z=0  None .data      @359                                                         */
SECTION_DATA u8 lit_359[41 + 3 /* padding */] = {
	0x69, 0x73, 0x20, 0x61, 0x76, 0x61, 0x69, 0x6C, 0x61, 0x62, 0x6C, 0x65, 0x2E, 0x20, 0x50, 0x6C,
	0x65, 0x61, 0x73, 0x65, 0x20, 0x64, 0x6F, 0x20, 0x4E, 0x4F, 0x54, 0x20, 0x75, 0x73, 0x65, 0x20,
	0x74, 0x68, 0x69, 0x73, 0x20, 0x20, 0x20, 0x0A, 0x00,
	/* padding */
	0x00, 0x00, 0x00,
};

/* 803D1AAC-803D1AD8 0029+03 s=0 e=0 z=0  None .data      @360                                                         */
SECTION_DATA u8 lit_360[41 + 3 /* padding */] = {
	0x6D, 0x6F, 0x64, 0x65, 0x20, 0x69, 0x6E, 0x20, 0x72, 0x65, 0x61, 0x6C, 0x20, 0x67, 0x61, 0x6D,
	0x65, 0x73, 0x21, 0x21, 0x21, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x0A, 0x00,
	/* padding */
	0x00, 0x00, 0x00,
};

/* 803D1AD8-803D1B24 004B+01 s=0 e=0 z=0  None .data      @538                                                         */
SECTION_DATA u8 vi__lit_538[75 + 1 /* padding */] = {
	0x56, 0x49, 0x43, 0x6F, 0x6E, 0x66, 0x69, 0x67, 0x75, 0x72, 0x65, 0x28, 0x29, 0x3A, 0x20, 0x54,
	0x72, 0x69, 0x65, 0x64, 0x20, 0x74, 0x6F, 0x20, 0x63, 0x68, 0x61, 0x6E, 0x67, 0x65, 0x20, 0x6D,
	0x6F, 0x64, 0x65, 0x20, 0x66, 0x72, 0x6F, 0x6D, 0x20, 0x28, 0x25, 0x64, 0x29, 0x20, 0x74, 0x6F,
	0x20, 0x28, 0x25, 0x64, 0x29, 0x2C, 0x20, 0x77, 0x68, 0x69, 0x63, 0x68, 0x20, 0x69, 0x73, 0x20,
	0x66, 0x6F, 0x72, 0x62, 0x69, 0x64, 0x64, 0x65, 0x6E, 0x0A, 0x00,
	/* padding */
	0x00,
};

/* 803D1B24-803D1B48 0020+04 s=1 e=0 z=0  None .data      @740                                                         */
SECTION_DATA static void* lit_740[8 + 1 /* padding */] = {
	(void*)(((char*)VIGetTvFormat)+0x38),
	(void*)(((char*)VIGetTvFormat)+0x40),
	(void*)(((char*)VIGetTvFormat)+0x48),
	(void*)(((char*)VIGetTvFormat)+0x38),
	(void*)(((char*)VIGetTvFormat)+0x40),
	(void*)(((char*)VIGetTvFormat)+0x48),
	(void*)(((char*)VIGetTvFormat)+0x38),
	(void*)(((char*)VIGetTvFormat)+0x38),
	/* padding */
	NULL,
};

/* 8034DA9C-8034DB04 0068+00 s=1 e=2 z=1  None .text      VIGetTvFormat                                                */
//	8034DAAC: 8033D6F4 (OSDisableInterrupts)
//	8034DAB0: 8045182C (CurrTvMode)
//	8034DABC: 803D1B24 (lit_740)
//	8034DAC0: 803D1B24 (lit_740)
//	8034DAE8: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void VIGetTvFormat() {
	nofralloc
#include "asm/dolphin/vi/vi/VIGetTvFormat.s"
}
#pragma pop


/* 8034DB04-8034DB40 003C+00 s=0 e=2 z=0  None .text      VIGetDTVStatus                                               */
//	8034DB14: 8033D6F4 (OSDisableInterrupts)
//	8034DB24: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void VIGetDTVStatus() {
	nofralloc
#include "asm/dolphin/vi/vi/VIGetDTVStatus.s"
}
#pragma pop


/* 8034DB40-8034DD5C 021C+00 s=1 e=0 z=0  None .text      __VIDisplayPositionToXY                                      */
//	8034DB40: 80451828 (CurrTiming)
//	8034DB44: 8044CB18 (HorVer)
//	8034DB48: 8044CB18 (HorVer)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void __VIDisplayPositionToXY() {
	nofralloc
#include "asm/dolphin/vi/vi/__VIDisplayPositionToXY.s"
}
#pragma pop


/* 8034DD5C-8034DDBC 0060+00 s=1 e=0 z=0  None .text      __VIGetCurrentPosition                                       */
//	8034DDA8: 8034DB40 (__VIDisplayPositionToXY)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void __VIGetCurrentPosition() {
	nofralloc
#include "asm/dolphin/vi/vi/__VIGetCurrentPosition.s"
}
#pragma pop


/* ############################################################################################## */
/* 80450A19-80450A1D 0004+00 s=0 e=0 z=0  None .sdata     None                                                         */
SECTION_SDATA u8 pad_80450A19[4] = {
	0x00, 0x00, 0x00, 0x00,
};

