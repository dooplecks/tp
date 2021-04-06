//
// Generated By: dol2asm
// Translation Unit: utils/gc/MWCriticalSection_gc
//

#include "TRK_MINNOW_DOLPHIN/utils/gc/MWCriticalSection_gc.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void MWExitCriticalSection();
extern "C" void MWEnterCriticalSection();
extern "C" void MWInitializeCriticalSection();

//
// External References:
//

extern "C" void OSDisableInterrupts();
extern "C" void OSRestoreInterrupts();

//
// Declarations:
//

/* 80372CA4-80372CC8 36D5E4 0024+00 0/0 2/2 0/0 .text            MWExitCriticalSection */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void MWExitCriticalSection() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/utils/gc/MWCriticalSection_gc/MWExitCriticalSection.s"
}
#pragma pop

/* 80372CC8-80372CF8 36D608 0030+00 0/0 2/2 0/0 .text            MWEnterCriticalSection */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void MWEnterCriticalSection() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/utils/gc/MWCriticalSection_gc/MWEnterCriticalSection.s"
}
#pragma pop

/* 80372CF8-80372CFC 36D638 0004+00 0/0 1/1 0/0 .text            MWInitializeCriticalSection */
void MWInitializeCriticalSection() {
    /* empty function */
}
