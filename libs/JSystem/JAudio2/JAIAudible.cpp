//
// Generated By: dol2asm
// Translation Unit: JAIAudible
//

#include "JSystem/JAudio2/JAIAudible.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JAIAudible {
    /* 8029EFAC */ ~JAIAudible();
};

//
// Forward References:
//

extern "C" void __dt__10JAIAudibleFv();

//
// External References:
//

extern "C" void __dl__FPv();

//
// Declarations:
//

/* ############################################################################################## */
/* 803C9820-803C9838 026940 0014+04 1/1 1/1 0/0 .data            __vt__10JAIAudible */
SECTION_DATA extern void* __vt__10JAIAudible[5 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10JAIAudibleFv,
    (void*)NULL,
    (void*)NULL,
    /* padding */
    NULL,
};

/* 8029EFAC-8029EFF4 2998EC 0048+00 1/0 1/1 0/0 .text            __dt__10JAIAudibleFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JAIAudible::~JAIAudible() {
    nofralloc
#include "asm/JSystem/JAudio2/JAIAudible/__dt__10JAIAudibleFv.s"
}
#pragma pop
