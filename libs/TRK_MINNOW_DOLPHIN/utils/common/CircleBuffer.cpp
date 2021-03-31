// 
// Generated By: dol2asm
// Translation Unit: utils/common/CircleBuffer
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "TRK_MINNOW_DOLPHIN/utils/common/CircleBuffer.h"

// 
// Forward References:
// 


// False False
extern "C" void CircleBufferReadBytes();
// False False
extern "C" void CircleBufferWriteBytes();
// False False
extern "C" void CircleBufferInitialize();
// False False
extern "C" void CBGetBytesAvailableForRead();

// 
// External References:
// 


// False False
SECTION_INIT void memcpy();
// False False
extern "C" void MWExitCriticalSection();
// False False
extern "C" void MWEnterCriticalSection();
// False False
//  void False
extern "C" void MWInitializeCriticalSection();

// 
// Declarations:
// 

/* 803726A0-803727A8 0108+00 s=0 e=2 z=0  None .text      CircleBufferReadBytes                                        */
//	803726E0: 80372CC8 (MWEnterCriticalSection)
//	80372708: 80003540 (memcpy)
//	80372724: 80003540 (memcpy)
//	80372734: 80003540 (memcpy)
//	80372780: 80372CA4 (MWExitCriticalSection)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void CircleBufferReadBytes() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/utils/common/CircleBuffer/CircleBufferReadBytes.s"
}
#pragma pop


/* 803727A8-803728B0 0108+00 s=0 e=4 z=0  None .text      CircleBufferWriteBytes                                       */
//	803727E8: 80372CC8 (MWEnterCriticalSection)
//	80372810: 80003540 (memcpy)
//	8037282C: 80003540 (memcpy)
//	8037283C: 80003540 (memcpy)
//	80372888: 80372CA4 (MWExitCriticalSection)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void CircleBufferWriteBytes() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/utils/common/CircleBuffer/CircleBufferWriteBytes.s"
}
#pragma pop


/* 803728B0-80372900 0050+00 s=0 e=2 z=0  None .text      CircleBufferInitialize                                       */
//	803728EC: 80372CF8 (MWInitializeCriticalSection)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void CircleBufferInitialize() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/utils/common/CircleBuffer/CircleBufferInitialize.s"
}
#pragma pop


/* 80372900-80372908 0008+00 s=0 e=2 z=0  None .text      CBGetBytesAvailableForRead                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void CBGetBytesAvailableForRead() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/utils/common/CircleBuffer/CBGetBytesAvailableForRead.s"
}
#pragma pop


