// 
// Generated By: dol2asm
// Translation Unit: Os/dolphin/usr_put
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "TRK_MINNOW_DOLPHIN/Os/dolphin/usr_put.h"

// 
// Forward References:
// 


// False False
//  void False
extern "C" void usr_put_initialize();
// False False
extern "C" void usr_puts_serial();

// 
// External References:
// 


// False False
extern "C" void OSReport();
// False False
extern "C" void SetTRKConnected();
// False False
extern "C" void GetTRKConnected();

// 
// Declarations:
// 

/* 8036DB10-8036DB14 0004+00 s=0 e=1 z=0  None .text      usr_put_initialize                                           */
// False False
//  void False
extern "C" void usr_put_initialize() {
	/* empty function */
}


/* 8036DB14-8036DB9C 0088+00 s=0 e=2 z=0  None .text      usr_puts_serial                                              */
//	8036DB3C: 8036ECCC (GetTRKConnected)
//	8036DB50: 8036ECC0 (SetTRKConnected)
//	8036DB58: 80006ABC (OSReport)
//	8036DB60: 8036ECC0 (SetTRKConnected)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void usr_puts_serial() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/Os/dolphin/usr_put/usr_puts_serial.s"
}
#pragma pop


