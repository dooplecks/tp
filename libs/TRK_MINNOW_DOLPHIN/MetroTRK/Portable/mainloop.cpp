// 
// Generated By: dol2asm
// Translation Unit: MetroTRK/Portable/mainloop
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "TRK_MINNOW_DOLPHIN/MetroTRK/Portable/mainloop.h"

// 
// Forward References:
// 


// False False
extern "C" void TRKNubMainLoop();

// 
// External References:
// 


// False False
extern "C" void TRKDestructEvent();
// False False
extern "C" void TRKGetNextEvent();
// False False
extern "C" void TRKGetBuffer();
// False False
extern "C" void TRKGetInput();
// False False
extern "C" void TRKDispatchMessage();
// False False
extern "C" void TRKTargetStopped();
// False False
extern "C" void TRKTargetSupportRequest();
// False False
extern "C" void TRKTargetInterrupt();
// False False
extern "C" void TRKTargetContinue();
extern "C" extern u8 gTRKInputPendingPtr[4 + 4 /* padding */];

// 
// Declarations:
// 

/* 8036CB20-8036CC18 00F8+00 s=0 e=1 z=0  None .text      TRKNubMainLoop                                               */
//	8036CB44: 8036CD34 (TRKGetNextEvent)
//	8036CB88: 8036D6F0 (TRKGetBuffer)
//	8036CB8C: 8036DB9C (TRKDispatchMessage)
//	8036CBA0: 8036FFA4 (TRKTargetInterrupt)
//	8036CBA8: 8036FB20 (TRKTargetSupportRequest)
//	8036CBB0: 8036CC18 (TRKDestructEvent)
//	8036CBC0: 804519B8 (gTRKInputPendingPtr)
//	8036CBC4: 804519B8 (gTRKInputPendingPtr)
//	8036CBDC: 8036D974 (TRKGetInput)
//	8036CBE4: 8036FB10 (TRKTargetStopped)
//	8036CBF0: 8037214C (TRKTargetContinue)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void TRKNubMainLoop() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/mainloop/TRKNubMainLoop.s"
}
#pragma pop


