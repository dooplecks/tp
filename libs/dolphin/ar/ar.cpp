// 
// Generated By: dol2asm
// Translation Unit: ar
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "dolphin/ar/ar.h"

// 
// Forward References:
// 


// False False
extern "C" void ARRegisterDMACallback();
// False False
extern "C" void ARGetDMAStatus();
// False False
extern "C" void ARStartDMA();
// False False
extern "C" void ARAlloc();
// False False
extern "C" void ARInit();
// False False
extern "C" void ARGetSize();
// True False
extern "C" static void __ARHandler();
// False False
extern "C" void __ARClearInterrupt();
// False False
extern "C" void __ARGetInterruptStatus();
// True False
extern "C" static void __ARChecksize();

// 
// External References:
// 


// False False
SECTION_INIT void memset();
// False False
extern "C" void PPCSync();
// False False
extern "C" void OSRegisterVersion();
// False False
extern "C" void DCInvalidateRange();
// False False
extern "C" void DCFlushRange();
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

// 
// Declarations:
// 

/* ############################################################################################## */
/* 804518B8-804518BC 0004+00 s=3 e=0 z=0  None .sbss      __AR_Callback                                                */
static u8 __AR_Callback[4];

/* 80350554-80350598 0044+00 s=0 e=1 z=0  None .text      ARRegisterDMACallback                                        */
//	8035056C: 804518B8 (__AR_Callback)
//	80350570: 8033D6F4 (OSDisableInterrupts)
//	80350574: 804518B8 (__AR_Callback)
//	80350578: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void ARRegisterDMACallback() {
	nofralloc
#include "asm/dolphin/ar/ar/ARRegisterDMACallback.s"
}
#pragma pop


/* 80350598-803505D4 003C+00 s=0 e=2 z=0  None .text      ARGetDMAStatus                                               */
//	803505A8: 8033D6F4 (OSDisableInterrupts)
//	803505B8: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void ARGetDMAStatus() {
	nofralloc
#include "asm/dolphin/ar/ar/ARGetDMAStatus.s"
}
#pragma pop


/* 803505D4-803506C4 00F0+00 s=0 e=5 z=0  None .text      ARStartDMA                                                   */
//	80350600: 8033D6F4 (OSDisableInterrupts)
//	803506A0: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void ARStartDMA() {
	nofralloc
#include "asm/dolphin/ar/ar/ARStartDMA.s"
}
#pragma pop


/* ############################################################################################## */
/* 804518BC-804518C0 0004+00 s=2 e=0 z=0  None .sbss      __AR_Size                                                    */
static u8 __AR_Size[4];

/* 804518C0-804518C4 0004+00 s=1 e=0 z=0  None .sbss      __AR_InternalSize                                            */
static u8 __AR_InternalSize[4];

/* 804518C4-804518C8 0004+00 s=1 e=0 z=0  None .sbss      __AR_ExpansionSize                                           */
static u8 __AR_ExpansionSize[4];

/* 804518C8-804518CC 0004+00 s=2 e=0 z=0  None .sbss      __AR_StackPointer                                            */
static u8 __AR_StackPointer[4];

/* 804518CC-804518D0 0004+00 s=2 e=0 z=0  None .sbss      __AR_FreeBlocks                                              */
static u8 __AR_FreeBlocks[4];

/* 804518D0-804518D4 0004+00 s=2 e=0 z=0  None .sbss      __AR_BlockLength                                             */
static u8 __AR_BlockLength[4];

/* 803506C4-8035072C 0068+00 s=0 e=1 z=0  None .text      ARAlloc                                                      */
//	803506DC: 8033D6F4 (OSDisableInterrupts)
//	803506E0: 804518C8 (__AR_StackPointer)
//	803506E4: 804518D0 (__AR_BlockLength)
//	803506EC: 804518C8 (__AR_StackPointer)
//	803506F4: 804518D0 (__AR_BlockLength)
//	803506F8: 804518CC (__AR_FreeBlocks)
//	80350704: 804518D0 (__AR_BlockLength)
//	80350708: 804518CC (__AR_FreeBlocks)
//	8035070C: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void ARAlloc() {
	nofralloc
#include "asm/dolphin/ar/ar/ARAlloc.s"
}
#pragma pop


/* ############################################################################################## */
/* 803D1BE8-803D1C30 0044+04 s=1 e=0 z=0  None .data      @1                                                           */
SECTION_DATA static u8 lit_1[68 + 4 /* padding */] = {
	0x3C, 0x3C, 0x20, 0x44, 0x6F, 0x6C, 0x70, 0x68, 0x69, 0x6E, 0x20, 0x53, 0x44, 0x4B, 0x20, 0x2D,
	0x20, 0x41, 0x52, 0x09, 0x72, 0x65, 0x6C, 0x65, 0x61, 0x73, 0x65, 0x20, 0x62, 0x75, 0x69, 0x6C,
	0x64, 0x3A, 0x20, 0x41, 0x70, 0x72, 0x20, 0x20, 0x35, 0x20, 0x32, 0x30, 0x30, 0x34, 0x20, 0x30,
	0x34, 0x3A, 0x31, 0x35, 0x3A, 0x30, 0x33, 0x20, 0x28, 0x30, 0x78, 0x32, 0x33, 0x30, 0x31, 0x29,
	0x20, 0x3E, 0x3E, 0x00,
	/* padding */
	0x00, 0x00, 0x00, 0x00,
};

/* 80450A48-80450A50 0004+04 s=1 e=0 z=0  None .sdata     __ARVersion                                                  */
SECTION_SDATA static void* __ARVersion[1 + 1 /* padding */] = {
	(void*)&lit_1,
	/* padding */
	NULL,
};

/* 804518D4-804518D8 0004+00 s=1 e=0 z=0  None .sbss      __AR_init_flag                                               */
static u8 __AR_init_flag[4];

/* 8035072C-803507F0 00C4+00 s=0 e=1 z=0  None .text      ARInit                                                       */
//	8035074C: 804518D4 (__AR_init_flag)
//	80350760: 80450A48 (__ARVersion)
//	80350764: 8033A874 (OSRegisterVersion)
//	80350768: 8033D6F4 (OSDisableInterrupts)
//	80350770: 803507F8 (__ARHandler)
//	80350774: 804518B8 (__AR_Callback)
//	8035077C: 803507F8 (__ARHandler)
//	80350784: 8033D740 (__OSSetInterruptHandler)
//	8035078C: 8033DB44 (__OSUnmaskInterrupts)
//	80350794: 804518CC (__AR_FreeBlocks)
//	8035079C: 804518C8 (__AR_StackPointer)
//	803507A4: 804518D0 (__AR_BlockLength)
//	803507BC: 803508A0 (__ARChecksize)
//	803507C4: 804518D4 (__AR_init_flag)
//	803507CC: 8033D71C (OSRestoreInterrupts)
//	803507D0: 804518C8 (__AR_StackPointer)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void ARInit() {
	nofralloc
#include "asm/dolphin/ar/ar/ARInit.s"
}
#pragma pop


/* 803507F0-803507F8 0008+00 s=0 e=1 z=0  None .text      ARGetSize                                                    */
//	803507F0: 804518BC (__AR_Size)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void ARGetSize() {
	nofralloc
#include "asm/dolphin/ar/ar/ARGetSize.s"
}
#pragma pop


/* 803507F8-80350870 0078+00 s=1 e=0 z=0  None .text      __ARHandler                                                  */
//	8035082C: 8033C000 (OSClearContext)
//	80350834: 8033BE38 (OSSetCurrentContext)
//	80350838: 804518B8 (__AR_Callback)
//	80350850: 8033C000 (OSClearContext)
//	80350858: 8033BE38 (OSSetCurrentContext)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void __ARHandler() {
	nofralloc
#include "asm/dolphin/ar/ar/__ARHandler.s"
}
#pragma pop


/* 80350870-80350890 0020+00 s=0 e=2 z=0  None .text      __ARClearInterrupt                                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __ARClearInterrupt() {
	nofralloc
#include "asm/dolphin/ar/ar/__ARClearInterrupt.s"
}
#pragma pop


/* 80350890-803508A0 0010+00 s=0 e=2 z=0  None .text      __ARGetInterruptStatus                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __ARGetInterruptStatus() {
	nofralloc
#include "asm/dolphin/ar/ar/__ARGetInterruptStatus.s"
}
#pragma pop


/* 803508A0-80352094 17F4+00 s=1 e=0 z=0  None .text      __ARChecksize                                                */
//	803508D8: 804518C0 (__AR_InternalSize)
//	803509AC: 8033B5AC (DCFlushRange)
//	803509B8: 8033B5AC (DCFlushRange)
//	803509C0: 804518C4 (__AR_ExpansionSize)
//	803509CC: 8033B580 (DCInvalidateRange)
//	80350A98: 80339CF8 (PPCSync)
//	80350B4C: 80003458 (memset)
//	80350B58: 8033B5AC (DCFlushRange)
//	80350C00: 80339CF8 (PPCSync)
//	80350C1C: 8033B580 (DCInvalidateRange)
//	80350CD0: 80339CF8 (PPCSync)
//	80350CDC: 8033B580 (DCInvalidateRange)
//	80350D98: 80339CF8 (PPCSync)
//	80350DA4: 8033B580 (DCInvalidateRange)
//	80350E70: 80339CF8 (PPCSync)
//	80350E7C: 8033B580 (DCInvalidateRange)
//	80350F48: 80339CF8 (PPCSync)
//	80351088: 80003458 (memset)
//	80351094: 8033B5AC (DCFlushRange)
//	8035112C: 80339CF8 (PPCSync)
//	803511DC: 804518C4 (__AR_ExpansionSize)
//	80351314: 80003458 (memset)
//	80351320: 8033B5AC (DCFlushRange)
//	803513B8: 80339CF8 (PPCSync)
//	80351500: 804518C4 (__AR_ExpansionSize)
//	80351648: 80003458 (memset)
//	80351654: 8033B5AC (DCFlushRange)
//	803516F4: 80339CF8 (PPCSync)
//	803518D0: 804518C4 (__AR_ExpansionSize)
//	80351A18: 80003458 (memset)
//	80351A24: 8033B5AC (DCFlushRange)
//	80351AC4: 80339CF8 (PPCSync)
//	80351D3C: 804518C4 (__AR_ExpansionSize)
//	8035204C: 804518C4 (__AR_ExpansionSize)
//	8035207C: 804518BC (__AR_Size)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void __ARChecksize() {
	nofralloc
#include "asm/dolphin/ar/ar/__ARChecksize.s"
}
#pragma pop


