//
// Generated By: dol2asm
// Translation Unit: CARDCreate
//

#include "dolphin/card/CARDCreate.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" static void CreateCallbackFat();
extern "C" static void CARDCreateAsync();
extern "C" void CARDCreate();

//
// External References:
//

SECTION_INIT void memcpy();
extern "C" void OSGetTime();
extern "C" void __CARDDefaultApiCallback();
extern "C" void __CARDSyncCallback();
extern "C" void __CARDGetControlBlock();
extern "C" void __CARDPutControlBlock();
extern "C" void __CARDSync();
extern "C" void __CARDGetFatBlock();
extern "C" void __CARDAllocBlock();
extern "C" void __CARDGetDirBlock();
extern "C" void __CARDUpdateDir();
extern "C" void __CARDCompareFileName();
extern "C" void __div2i();
extern "C" void memcmp();
extern "C" void strncpy();
extern "C" void strlen();
extern "C" extern u8 __CARDBlock[544];

//
// Declarations:
//

/* 80358108-80358238 352A48 0130+00 1/1 0/0 0/0 .text            CreateCallbackFat */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void CreateCallbackFat() {
    nofralloc
#include "asm/dolphin/card/CARDCreate/CreateCallbackFat.s"
}
#pragma pop

/* 80358238-80358458 352B78 0220+00 1/1 0/0 0/0 .text            CARDCreateAsync */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void CARDCreateAsync() {
    nofralloc
#include "asm/dolphin/card/CARDCreate/CARDCreateAsync.s"
}
#pragma pop

/* 80358458-803584A0 352D98 0048+00 0/0 1/1 0/0 .text            CARDCreate */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void CARDCreate() {
    nofralloc
#include "asm/dolphin/card/CARDCreate/CARDCreate.s"
}
#pragma pop
