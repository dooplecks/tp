// 
// Generated By: dol2asm
// Translation Unit: CARDBios
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "dolphin/card/CARDBios.h"

// 
// Forward References:
// 


// False False
//  void False
extern "C" void __CARDDefaultApiCallback();
// False False
extern "C" void __CARDSyncCallback();
// False False
extern "C" void __CARDExtHandler();
// False False
extern "C" void __CARDExiHandler();
// True False
extern "C" static void __CARDTxHandler();
// False False
extern "C" void __CARDUnlockedHandler();
// False False
extern "C" void __CARDEnableInterrupt();
// False False
extern "C" void __CARDReadStatus();
// False False
extern "C" void __CARDReadVendorID();
// False False
extern "C" void __CARDClearStatus();
// True False
extern "C" static void TimeoutHandler();
// True False
extern "C" static void Retry();
// True False
extern "C" static void UnlockedCallback();
// True False
extern "C" static void __CARDStart();
// False False
extern "C" void __CARDReadSegment();
// False False
extern "C" void __CARDWritePage();
// False False
extern "C" void __CARDEraseSector();
// False False
extern "C" void CARDInit();
// False False
extern "C" void __CARDGetFontEncode();
// True False
extern "C" static void __CARDSetDiskID();
// False False
extern "C" void __CARDGetControlBlock();
// False False
extern "C" void __CARDPutControlBlock();
// False False
extern "C" void CARDFreeBlocks();
// False False
extern "C" void __CARDSync();
// True False
extern "C" static void OnReset();
// False False
extern "C" void CARDGetFastMode();
extern "C" extern u8 __CARDBlock[544];
extern "C" extern u8 __CARDDiskNone[32];

// 
// External References:
// 


// False False
extern "C" void OSRegisterVersion();
// False False
extern "C" void OSInitAlarm();
// False False
extern "C" void OSCreateAlarm();
// False False
extern "C" void OSSetAlarm();
// False False
extern "C" void OSCancelAlarm();
// False False
extern "C" void OSGetFontEncode();
// False False
extern "C" void OSDisableInterrupts();
// False False
extern "C" void OSRestoreInterrupts();
// False False
extern "C" void OSRegisterResetFunction();
// False False
extern "C" void OSInitThreadQueue();
// False False
extern "C" void OSSleepThread();
// False False
extern "C" void OSWakeupThread();
// False False
extern "C" void EXIImm();
// False False
extern "C" void EXIImmEx();
// False False
extern "C" void EXIDma();
// False False
extern "C" void EXISync();
// False False
extern "C" void EXISetExiCallback();
// False False
extern "C" void EXIProbe();
// False False
extern "C" void EXISelect();
// False False
extern "C" void EXIDeselect();
// False False
extern "C" void EXILock();
// False False
extern "C" void EXIUnlock();
// False False
extern "C" void DSPInit();
// False False
extern "C" void __CARDGetFatBlock();
// False False
extern "C" void __CARDGetDirBlock();
// False False
extern "C" void CARDUnmount();

// 
// Declarations:
// 

/* 80352A30-80352A34 0004+00 s=0 e=5 z=0  None .text      __CARDDefaultApiCallback                                     */
// False False
//  void False
extern "C" void __CARDDefaultApiCallback() {
	/* empty function */
}


/* ############################################################################################## */
/* 8044CBC0-8044CDE0 0220+00 s=16 e=27 z=0  None .bss       __CARDBlock                                                  */
u8 __CARDBlock[544];

/* 80352A34-80352A68 0034+00 s=0 e=7 z=0  None .text      __CARDSyncCallback                                           */
//	80352A40: 8044CBC0 (__CARDBlock)
//	80352A48: 8044CBC0 (__CARDBlock)
//	80352A54: 80341C98 (OSWakeupThread)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __CARDSyncCallback() {
	nofralloc
#include "asm/dolphin/card/CARDBios/__CARDSyncCallback.s"
}
#pragma pop


/* 80352A68-80352B40 00D8+00 s=0 e=1 z=0  None .text      __CARDExtHandler                                             */
//	80352A88: 8044CBC0 (__CARDBlock)
//	80352A8C: 8044CBC0 (__CARDBlock)
//	80352AB0: 8034337C (EXISetExiCallback)
//	80352AB8: 8033AC3C (OSCancelAlarm)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __CARDExtHandler() {
	nofralloc
#include "asm/dolphin/card/CARDBios/__CARDExtHandler.s"
}
#pragma pop


/* 80352B40-80352C58 0118+00 s=0 e=1 z=0  None .text      __CARDExiHandler                                             */
//	80352B5C: 8044CBC0 (__CARDBlock)
//	80352B64: 8044CBC0 (__CARDBlock)
//	80352B70: 8033AC3C (OSCancelAlarm)
//	80352B8C: 80344028 (EXILock)
//	80352BA8: 80352E44 (__CARDReadStatus)
//	80352BB8: 80353024 (__CARDClearStatus)
//	80352BFC: 80353174 (Retry)
//	80352C10: 8034411C (EXIUnlock)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __CARDExiHandler() {
	nofralloc
#include "asm/dolphin/card/CARDBios/__CARDExiHandler.s"
}
#pragma pop


/* 80352C58-80352D00 00A8+00 s=3 e=0 z=0  None .text      __CARDTxHandler                                              */
//	80352C6C: 8044CBC0 (__CARDBlock)
//	80352C70: 8044CBC0 (__CARDBlock)
//	80352C80: 80343994 (EXIDeselect)
//	80352C90: 8034411C (EXIUnlock)
//	80352CB8: 8034356C (EXIProbe)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void __CARDTxHandler() {
	nofralloc
#include "asm/dolphin/card/CARDBios/__CARDTxHandler.s"
}
#pragma pop


/* 80352D00-80352D84 0084+00 s=2 e=2 z=0  None .text      __CARDUnlockedHandler                                        */
//	80352D1C: 8044CBC0 (__CARDBlock)
//	80352D20: 8044CBC0 (__CARDBlock)
//	80352D44: 8034356C (EXIProbe)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __CARDUnlockedHandler() {
	nofralloc
#include "asm/dolphin/card/CARDBios/__CARDUnlockedHandler.s"
}
#pragma pop


/* 80352D84-80352E44 00C0+00 s=0 e=1 z=0  None .text      __CARDEnableInterrupt                                        */
//	80352DA8: 80343868 (EXISelect)
//	80352DE8: 80342D00 (EXIImm)
//	80352DF8: 803430E8 (EXISync)
//	80352E0C: 80343994 (EXIDeselect)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __CARDEnableInterrupt() {
	nofralloc
#include "asm/dolphin/card/CARDBios/__CARDEnableInterrupt.s"
}
#pragma pop


/* 80352E44-80352F34 00F0+00 s=1 e=2 z=0  None .text      __CARDReadStatus                                             */
//	80352E6C: 80343868 (EXISelect)
//	80352E9C: 80342D00 (EXIImm)
//	80352EAC: 803430E8 (EXISync)
//	80352ED0: 80342D00 (EXIImm)
//	80352EE4: 803430E8 (EXISync)
//	80352EF8: 80343994 (EXIDeselect)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __CARDReadStatus() {
	nofralloc
#include "asm/dolphin/card/CARDBios/__CARDReadStatus.s"
}
#pragma pop


/* 80352F34-80353024 00F0+00 s=0 e=1 z=0  None .text      __CARDReadVendorID                                           */
//	80352F5C: 80343868 (EXISelect)
//	80352F8C: 80342D00 (EXIImm)
//	80352F9C: 803430E8 (EXISync)
//	80352FC0: 80342D00 (EXIImm)
//	80352FD4: 803430E8 (EXISync)
//	80352FE8: 80343994 (EXIDeselect)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __CARDReadVendorID() {
	nofralloc
#include "asm/dolphin/card/CARDBios/__CARDReadVendorID.s"
}
#pragma pop


/* 80353024-803530D0 00AC+00 s=1 e=1 z=0  None .text      __CARDClearStatus                                            */
//	80353044: 80343868 (EXISelect)
//	80353074: 80342D00 (EXIImm)
//	80353084: 803430E8 (EXISync)
//	80353098: 80343994 (EXIDeselect)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __CARDClearStatus() {
	nofralloc
#include "asm/dolphin/card/CARDBios/__CARDClearStatus.s"
}
#pragma pop


/* 803530D0-80353174 00A4+00 s=2 e=0 z=0  None .text      TimeoutHandler                                               */
//	803530D4: 8044CBC0 (__CARDBlock)
//	803530DC: 8044CBC0 (__CARDBlock)
//	80353130: 8034337C (EXISetExiCallback)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void TimeoutHandler() {
	nofralloc
#include "asm/dolphin/card/CARDBios/TimeoutHandler.s"
}
#pragma pop


/* 80353174-80353414 02A0+00 s=2 e=0 z=0  None .text      Retry                                                        */
//	80353194: 8044CBC0 (__CARDBlock)
//	80353198: 8044CBC0 (__CARDBlock)
//	803531A8: 80343868 (EXISelect)
//	803531B8: 8034411C (EXIUnlock)
//	803531C8: 8033AC3C (OSCancelAlarm)
//	80353204: 803530D0 (TimeoutHandler)
//	8035321C: 803530D0 (TimeoutHandler)
//	80353228: 8033AB58 (OSSetAlarm)
//	80353248: 803530D0 (TimeoutHandler)
//	80353280: 803530D0 (TimeoutHandler)
//	8035329C: 8033AB58 (OSSetAlarm)
//	803532B0: 803530D0 (TimeoutHandler)
//	803532E8: 803530D0 (TimeoutHandler)
//	80353304: 8033AB58 (OSSetAlarm)
//	80353318: 80342F5C (EXIImmEx)
//	80353328: 80343994 (EXIDeselect)
//	80353330: 8034411C (EXIUnlock)
//	8035335C: 80342F5C (EXIImmEx)
//	8035336C: 80343994 (EXIDeselect)
//	80353374: 8034411C (EXIUnlock)
//	80353394: 80343994 (EXIDeselect)
//	8035339C: 8034411C (EXIUnlock)
//	803533C0: 80352C58 (__CARDTxHandler)
//	803533C8: 80352C58 (__CARDTxHandler)
//	803533D4: 80342FFC (EXIDma)
//	803533E4: 80343994 (EXIDeselect)
//	803533EC: 8034411C (EXIUnlock)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void Retry() {
	nofralloc
#include "asm/dolphin/card/CARDBios/Retry.s"
}
#pragma pop


/* 80353414-80353524 0110+00 s=1 e=0 z=0  None .text      UnlockedCallback                                             */
//	80353434: 8044CBC0 (__CARDBlock)
//	80353438: 8044CBC0 (__CARDBlock)
//	8035344C: 80352D00 (__CARDUnlockedHandler)
//	80353454: 80352D00 (__CARDUnlockedHandler)
//	80353460: 80344028 (EXILock)
//	80353480: 80353174 (Retry)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void UnlockedCallback() {
	nofralloc
#include "asm/dolphin/card/CARDBios/UnlockedCallback.s"
}
#pragma pop


/* 80353524-80353748 0224+00 s=3 e=0 z=0  None .text      __CARDStart                                                  */
//	80353540: 8033D6F4 (OSDisableInterrupts)
//	80353548: 8044CBC0 (__CARDBlock)
//	8035354C: 8044CBC0 (__CARDBlock)
//	80353584: 80353414 (UnlockedCallback)
//	80353588: 80353414 (UnlockedCallback)
//	8035358C: 80352D00 (__CARDUnlockedHandler)
//	80353594: 80352D00 (__CARDUnlockedHandler)
//	803535A0: 80344028 (EXILock)
//	803535C8: 80343868 (EXISelect)
//	803535D8: 8034411C (EXIUnlock)
//	803535E8: 8033AC3C (OSCancelAlarm)
//	80353624: 803530D0 (TimeoutHandler)
//	8035363C: 803530D0 (TimeoutHandler)
//	80353648: 8033AB58 (OSSetAlarm)
//	80353698: 803530D0 (TimeoutHandler)
//	8035369C: 803530D0 (TimeoutHandler)
//	803536B8: 8033AB58 (OSSetAlarm)
//	803536CC: 803530D0 (TimeoutHandler)
//	80353704: 803530D0 (TimeoutHandler)
//	80353720: 8033AB58 (OSSetAlarm)
//	8035372C: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void __CARDStart() {
	nofralloc
#include "asm/dolphin/card/CARDBios/__CARDStart.s"
}
#pragma pop


/* 80353748-8035387C 0134+00 s=0 e=2 z=0  None .text      __CARDReadSegment                                            */
//	80353768: 8044CBC0 (__CARDBlock)
//	8035376C: 8044CBC0 (__CARDBlock)
//	803537C4: 80353524 (__CARDStart)
//	803537F0: 80342F5C (EXIImmEx)
//	80353810: 80342F5C (EXIImmEx)
//	8035381C: 80352C58 (__CARDTxHandler)
//	80353824: 80352C58 (__CARDTxHandler)
//	80353834: 80342FFC (EXIDma)
//	8035384C: 80343994 (EXIDeselect)
//	80353854: 8034411C (EXIUnlock)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __CARDReadSegment() {
	nofralloc
#include "asm/dolphin/card/CARDBios/__CARDReadSegment.s"
}
#pragma pop


/* 8035387C-803539B8 013C+00 s=0 e=2 z=0  None .text      __CARDWritePage                                              */
//	80353898: 8044CBC0 (__CARDBlock)
//	8035389C: 8044CBC0 (__CARDBlock)
//	80353920: 80353524 (__CARDStart)
//	8035394C: 80342F5C (EXIImmEx)
//	80353958: 80352C58 (__CARDTxHandler)
//	80353960: 80352C58 (__CARDTxHandler)
//	80353970: 80342FFC (EXIDma)
//	80353988: 80343994 (EXIDeselect)
//	80353990: 8034411C (EXIUnlock)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __CARDWritePage() {
	nofralloc
#include "asm/dolphin/card/CARDBios/__CARDWritePage.s"
}
#pragma pop


/* 803539B8-80353AC8 0110+00 s=0 e=6 z=0  None .text      __CARDEraseSector                                            */
//	803539D8: 8044CBC0 (__CARDBlock)
//	803539DC: 8044CBC0 (__CARDBlock)
//	80353A48: 80353524 (__CARDStart)
//	80353A78: 80342F5C (EXIImmEx)
//	80353A9C: 80343994 (EXIDeselect)
//	80353AA4: 8034411C (EXIUnlock)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __CARDEraseSector() {
	nofralloc
#include "asm/dolphin/card/CARDBios/__CARDEraseSector.s"
}
#pragma pop


/* ############################################################################################## */
/* 803D1E38-803D1E80 0046+02 s=1 e=0 z=0  None .data      @1                                                           */
SECTION_DATA static u8 lit_1[70 + 2 /* padding */] = {
	0x3C, 0x3C, 0x20, 0x44, 0x6F, 0x6C, 0x70, 0x68, 0x69, 0x6E, 0x20, 0x53, 0x44, 0x4B, 0x20, 0x2D,
	0x20, 0x43, 0x41, 0x52, 0x44, 0x09, 0x72, 0x65, 0x6C, 0x65, 0x61, 0x73, 0x65, 0x20, 0x62, 0x75,
	0x69, 0x6C, 0x64, 0x3A, 0x20, 0x41, 0x70, 0x72, 0x20, 0x20, 0x35, 0x20, 0x32, 0x30, 0x30, 0x34,
	0x20, 0x30, 0x34, 0x3A, 0x31, 0x35, 0x3A, 0x33, 0x35, 0x20, 0x28, 0x30, 0x78, 0x32, 0x33, 0x30,
	0x31, 0x29, 0x20, 0x3E, 0x3E, 0x00,
	/* padding */
	0x00, 0x00,
};

/* 803D1E80-803D1EA0 0010+10 s=1 e=0 z=0  None .data      ResetFunctionInfo                                            */
SECTION_DATA static void* ResetFunctionInfo[4 + 4 /* padding */] = {
	(void*)OnReset,
	(void*)0x0000007F,
	(void*)NULL,
	(void*)NULL,
	/* padding */
	NULL,
	NULL,
	NULL,
	NULL,
};

/* 80450A60-80450A68 0004+04 s=1 e=0 z=0  None .sdata     __CARDVersion                                                */
SECTION_SDATA static void* __CARDVersion[1 + 1 /* padding */] = {
	(void*)&lit_1,
	/* padding */
	NULL,
};

/* 80451918-80451920 0004+04 s=3 e=0 z=0  None .sbss      None                                                         */
static u8 struct_80451918[4 + 4 /* padding */];

/* 80353AC8-80353B74 00AC+00 s=0 e=1 z=0  None .text      CARDInit                                                     */
//	80353ACC: 8044CBC0 (__CARDBlock)
//	80353AE0: 8044CBC0 (__CARDBlock)
//	80353B00: 8033D554 (OSGetFontEncode)
//	80353B04: 80451918 (struct_80451918)
//	80353B08: 80450A60 (__CARDVersion)
//	80353B0C: 8033A874 (OSRegisterVersion)
//	80353B10: 803524BC (DSPInit)
//	80353B14: 8033A8A0 (OSInitAlarm)
//	80353B28: 80340C74 (OSInitThreadQueue)
//	80353B30: 8033A8F8 (OSCreateAlarm)
//	80353B48: 80353B7C (__CARDSetDiskID)
//	80353B4C: 803D1E80 (ResetFunctionInfo)
//	80353B50: 803D1E80 (ResetFunctionInfo)
//	80353B54: 8033F660 (OSRegisterResetFunction)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void CARDInit() {
	nofralloc
#include "asm/dolphin/card/CARDBios/CARDInit.s"
}
#pragma pop


/* 80353B74-80353B7C 0008+00 s=0 e=2 z=0  None .text      __CARDGetFontEncode                                          */
//	80353B74: 80451918 (struct_80451918)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __CARDGetFontEncode() {
	nofralloc
#include "asm/dolphin/card/CARDBios/__CARDGetFontEncode.s"
}
#pragma pop


/* 80353B7C-80353BB4 0038+00 s=1 e=0 z=0  None .text      __CARDSetDiskID                                              */
//	80353B80: 8044CBC0 (__CARDBlock)
//	80353B84: 8044CBC0 (__CARDBlock)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void __CARDSetDiskID() {
	nofralloc
#include "asm/dolphin/card/CARDBios/__CARDSetDiskID.s"
}
#pragma pop


/* 80353BB4-80353C6C 00B8+00 s=1 e=10 z=0  None .text      __CARDGetControlBlock                                        */
//	80353BC4: 8044CBC0 (__CARDBlock)
//	80353BD0: 8044CBC0 (__CARDBlock)
//	80353C04: 8033D6F4 (OSDisableInterrupts)
//	80353C48: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __CARDGetControlBlock() {
	nofralloc
#include "asm/dolphin/card/CARDBios/__CARDGetControlBlock.s"
}
#pragma pop


/* 80353C6C-80353CD0 0064+00 s=0 e=24 z=0  None .text      __CARDPutControlBlock                                        */
//	80353C88: 8033D6F4 (OSDisableInterrupts)
//	80353CB0: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __CARDPutControlBlock() {
	nofralloc
#include "asm/dolphin/card/CARDBios/__CARDPutControlBlock.s"
}
#pragma pop


/* 80353CD0-80353E20 0150+00 s=0 e=1 z=0  None .text      CARDFreeBlocks                                               */
//	80353CF4: 80353BB4 (__CARDGetControlBlock)
//	80353D08: 80355414 (__CARDGetFatBlock)
//	80353D14: 8035577C (__CARDGetDirBlock)
//	80353D2C: 8033D6F4 (OSDisableInterrupts)
//	80353D5C: 8033D71C (OSRestoreInterrupts)
//	80353DCC: 8033D6F4 (OSDisableInterrupts)
//	80353DFC: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void CARDFreeBlocks() {
	nofralloc
#include "asm/dolphin/card/CARDBios/CARDFreeBlocks.s"
}
#pragma pop


/* 80353E20-80353EB8 0098+00 s=0 e=7 z=0  None .text      __CARDSync                                                   */
//	80353E44: 8044CBC0 (__CARDBlock)
//	80353E48: 8044CBC0 (__CARDBlock)
//	80353E50: 8033D6F4 (OSDisableInterrupts)
//	80353E60: 80341BAC (OSSleepThread)
//	80353E90: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __CARDSync() {
	nofralloc
#include "asm/dolphin/card/CARDBios/__CARDSync.s"
}
#pragma pop


/* 80353EB8-80353F08 0050+00 s=1 e=0 z=0  None .text      OnReset                                                      */
//	80353ED0: 803573D8 (CARDUnmount)
//	80353EE0: 803573D8 (CARDUnmount)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void OnReset() {
	nofralloc
#include "asm/dolphin/card/CARDBios/OnReset.s"
}
#pragma pop


/* 80353F08-80353F24 001C+00 s=0 e=1 z=0  None .text      CARDGetFastMode                                              */
//	80353F08: 8045191A (struct_80451918)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void CARDGetFastMode() {
	nofralloc
#include "asm/dolphin/card/CARDBios/CARDGetFastMode.s"
}
#pragma pop


/* ############################################################################################## */
/* 8044CDE0-8044CE00 0020+00 s=0 e=3 z=0  None .bss       __CARDDiskNone                                               */
u8 __CARDDiskNone[32];

