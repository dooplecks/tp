// 
// Generated By: dol2asm
// Translation Unit: OSAlarm
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "dolphin/os/OSAlarm.h"

// 
// Forward References:
// 


// False False
extern "C" void OSInitAlarm();
// False False
extern "C" void OSCreateAlarm();
// True False
extern "C" static void InsertAlarm();
// False False
extern "C" void OSSetAlarm();
// False False
extern "C" void OSSetPeriodicAlarm();
// False False
extern "C" void OSCancelAlarm();
// True False
extern "C" static void DecrementerExceptionCallback();
// True False
extern "C" static void DecrementerExceptionHandler();
// True False
extern "C" static void OnReset();

// 
// External References:
// 


// False False
extern "C" void PPCMtdec();
// False False
extern "C" void __OSSetExceptionHandler();
// False False
extern "C" void __OSGetExceptionHandler();
// False False
extern "C" void OSSetCurrentContext();
// False False
extern "C" void OSLoadContext();
// False False
extern "C" void OSClearContext();
// False False
extern "C" void OSDisableInterrupts();
// False False
extern "C" void OSRestoreInterrupts();
// False False
extern "C" void OSRegisterResetFunction();
// False False
extern "C" void OSDisableScheduler();
// False False
extern "C" void OSEnableScheduler();
// False False
extern "C" void __OSReschedule();
// False False
extern "C" void __OSGetSystemTime();
// False False
extern "C" void __OSTimeToSystemTime();
// False False
extern "C" void __DVDTestAlarm();
// False False
extern "C" void __div2i();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 803CF480-803CF490 0010+00 s=1 e=0 z=0  None .data      ResetFunctionInfo                                            */
SECTION_DATA static void* ResetFunctionInfo[4] = {
	(void*)OnReset,
	(void*)0xFFFFFFFF,
	(void*)NULL,
	(void*)NULL,
};

/* 80451638-80451640 0008+00 s=5 e=0 z=0  None .sbss      AlarmQueue                                                   */
static u8 AlarmQueue[8];

/* 8033A8A0-8033A8F8 0058+00 s=0 e=3 z=0  None .text      OSInitAlarm                                                  */
//	8033A8B0: 8033A704 (__OSGetExceptionHandler)
//	8033A8B4: 8033AF88 (DecrementerExceptionHandler)
//	8033A8B8: 8033AF88 (DecrementerExceptionHandler)
//	8033A8C8: 80451638 (AlarmQueue)
//	8033A8D4: 80451638 (AlarmQueue)
//	8033A8D8: 8033A6E8 (__OSSetExceptionHandler)
//	8033A8DC: 803CF480 (ResetFunctionInfo)
//	8033A8E0: 803CF480 (ResetFunctionInfo)
//	8033A8E4: 8033F660 (OSRegisterResetFunction)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void OSInitAlarm() {
	nofralloc
#include "asm/dolphin/os/OSAlarm/OSInitAlarm.s"
}
#pragma pop


/* 8033A8F8-8033A908 0010+00 s=0 e=17 z=0  None .text      OSCreateAlarm                                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void OSCreateAlarm() {
	nofralloc
#include "asm/dolphin/os/OSAlarm/OSCreateAlarm.s"
}
#pragma pop


/* 8033A908-8033AB58 0250+00 s=3 e=0 z=0  None .text      InsertAlarm                                                  */
//	8033A950: 8034271C (__OSGetSystemTime)
//	8033A998: 80362324 (__div2i)
//	8033A9D8: 80451638 (AlarmQueue)
//	8033AA24: 80451638 (AlarmQueue)
//	8033AA28: 8034271C (__OSGetSystemTime)
//	8033AA60: 80339CF0 (PPCMtdec)
//	8033AA88: 80339CF0 (PPCMtdec)
//	8033AA94: 80339CF0 (PPCMtdec)
//	8033AAB0: 80451638 (AlarmQueue)
//	8033AAD4: 80451638 (AlarmQueue)
//	8033AAD8: 8034271C (__OSGetSystemTime)
//	8033AB0C: 80339CF0 (PPCMtdec)
//	8033AB34: 80339CF0 (PPCMtdec)
//	8033AB40: 80339CF0 (PPCMtdec)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void InsertAlarm() {
	nofralloc
#include "asm/dolphin/os/OSAlarm/InsertAlarm.s"
}
#pragma pop


/* 8033AB58-8033ABC0 0068+00 s=0 e=18 z=0  None .text      OSSetAlarm                                                   */
//	8033AB78: 8033D6F4 (OSDisableInterrupts)
//	8033AB8C: 8034271C (__OSGetSystemTime)
//	8033ABA0: 8033A908 (InsertAlarm)
//	8033ABA8: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void OSSetAlarm() {
	nofralloc
#include "asm/dolphin/os/OSAlarm/OSSetAlarm.s"
}
#pragma pop


/* 8033ABC0-8033AC3C 007C+00 s=0 e=1 z=0  None .text      OSSetPeriodicAlarm                                           */
//	8033ABE8: 8033D6F4 (OSDisableInterrupts)
//	8033AC00: 80342780 (__OSTimeToSystemTime)
//	8033AC1C: 8033A908 (InsertAlarm)
//	8033AC24: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void OSSetPeriodicAlarm() {
	nofralloc
#include "asm/dolphin/os/OSAlarm/OSSetPeriodicAlarm.s"
}
#pragma pop


/* 8033AC3C-8033AD58 011C+00 s=1 e=11 z=0  None .text      OSCancelAlarm                                                */
//	8033AC58: 8033D6F4 (OSDisableInterrupts)
//	8033AC70: 8033D71C (OSRestoreInterrupts)
//	8033AC88: 80451638 (AlarmQueue)
//	8033ACB4: 80451638 (AlarmQueue)
//	8033ACBC: 8034271C (__OSGetSystemTime)
//	8033ACF4: 80339CF0 (PPCMtdec)
//	8033AD1C: 80339CF0 (PPCMtdec)
//	8033AD28: 80339CF0 (PPCMtdec)
//	8033AD38: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void OSCancelAlarm() {
	nofralloc
#include "asm/dolphin/os/OSAlarm/OSCancelAlarm.s"
}
#pragma pop


/* 8033AD58-8033AF88 0230+00 s=1 e=0 z=0  None .text      DecrementerExceptionCallback                                 */
//	8033AD78: 8034271C (__OSGetSystemTime)
//	8033AD7C: 80451638 (AlarmQueue)
//	8033AD98: 8033BF20 (OSLoadContext)
//	8033ADC0: 8034271C (__OSGetSystemTime)
//	8033ADF8: 80339CF0 (PPCMtdec)
//	8033AE20: 80339CF0 (PPCMtdec)
//	8033AE2C: 80339CF0 (PPCMtdec)
//	8033AE34: 8033BF20 (OSLoadContext)
//	8033AE40: 80451638 (AlarmQueue)
//	8033AE4C: 80451638 (AlarmQueue)
//	8033AEA0: 8033A908 (InsertAlarm)
//	8033AEA4: 80451638 (AlarmQueue)
//	8033AEB0: 8034271C (__OSGetSystemTime)
//	8033AEE8: 80339CF0 (PPCMtdec)
//	8033AF10: 80339CF0 (PPCMtdec)
//	8033AF1C: 80339CF0 (PPCMtdec)
//	8033AF20: 80340CC4 (OSDisableScheduler)
//	8033AF28: 8033C000 (OSClearContext)
//	8033AF30: 8033BE38 (OSSetCurrentContext)
//	8033AF4C: 8033C000 (OSClearContext)
//	8033AF54: 8033BE38 (OSSetCurrentContext)
//	8033AF58: 80340D04 (OSEnableScheduler)
//	8033AF5C: 80341220 (__OSReschedule)
//	8033AF64: 8033BF20 (OSLoadContext)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void DecrementerExceptionCallback() {
	nofralloc
#include "asm/dolphin/os/OSAlarm/DecrementerExceptionCallback.s"
}
#pragma pop


/* 8033AF88-8033AFD8 0050+00 s=1 e=0 z=0  None .text      DecrementerExceptionHandler                                  */
//	8033AFD4: 8033AD58 (DecrementerExceptionCallback)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void DecrementerExceptionHandler() {
	nofralloc
#include "asm/dolphin/os/OSAlarm/DecrementerExceptionHandler.s"
}
#pragma pop


/* 8033AFD8-8033B078 00A0+00 s=1 e=0 z=0  None .text      OnReset                                                      */
//	8033AFF4: 80451638 (AlarmQueue)
//	8033B024: 8034B83C (__DVDTestAlarm)
//	8033B034: 8033AC3C (OSCancelAlarm)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void OnReset() {
	nofralloc
#include "asm/dolphin/os/OSAlarm/OnReset.s"
}
#pragma pop


