//
// Generated By: dol2asm
// Translation Unit: JKRAssertHeap
//

#include "JSystem/JKernel/JKRAssertHeap.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JKRHeap {
    struct TState {};

    /* 802CE138 */ JKRHeap(void*, u32, JKRHeap*, bool);
    /* 802CE264 */ ~JKRHeap();
    /* 802CE474 */ void alloc(u32, int, JKRHeap*);
    /* 802CE574 */ void callAllDisposer();
    /* 802CEAC0 */ void dispose();
    /* 802CED84 */ void state_register(JKRHeap::TState*, u32) const;
    /* 802CED88 */ void state_compare(JKRHeap::TState const&, JKRHeap::TState const&) const;
    /* 802CEDA0 */ void state_dump(JKRHeap::TState const&) const;

    static u8 sRootHeap[4];
};

struct JKRAssertHeap {
    /* 802D12C4 */ JKRAssertHeap(void*, u32, JKRHeap*, bool);
    /* 802D1300 */ ~JKRAssertHeap();
    /* 802D1368 */ void create(JKRHeap*);
    /* 802D13D8 */ void do_destroy();
    /* 802D1408 */ void getHeapType();
    /* 802D1414 */ bool check();
    /* 802D141C */ bool dump();
    /* 802D1424 */ bool dump_sort();
    /* 802D142C */ bool do_changeGroupID(u8);
    /* 802D1434 */ bool do_getCurrentGroupId();
    /* 802D143C */ bool do_alloc(u32, int);
    /* 802D1444 */ void do_free(void*);
    /* 802D1448 */ void do_freeAll();
    /* 802D144C */ void do_freeTail();
    /* 802D1450 */ void do_fillFreeArea();
    /* 802D1454 */ bool do_resize(void*, u32);
    /* 802D145C */ bool do_getSize(void*);
    /* 802D1464 */ bool do_getFreeSize();
    /* 802D146C */ bool do_getMaxFreeBlock();
    /* 802D1474 */ bool do_getTotalFreeSize();
};

//
// Forward References:
//

extern "C" void __ct__13JKRAssertHeapFPvUlP7JKRHeapb();
extern "C" void __dt__13JKRAssertHeapFv();
extern "C" void create__13JKRAssertHeapFP7JKRHeap();
extern "C" void do_destroy__13JKRAssertHeapFv();
extern "C" void getHeapType__13JKRAssertHeapFv();
extern "C" bool check__13JKRAssertHeapFv();
extern "C" bool dump__13JKRAssertHeapFv();
extern "C" bool dump_sort__13JKRAssertHeapFv();
extern "C" bool do_changeGroupID__13JKRAssertHeapFUc();
extern "C" bool do_getCurrentGroupId__13JKRAssertHeapFv();
extern "C" bool do_alloc__13JKRAssertHeapFUli();
extern "C" void do_free__13JKRAssertHeapFPv();
extern "C" void do_freeAll__13JKRAssertHeapFv();
extern "C" void do_freeTail__13JKRAssertHeapFv();
extern "C" void do_fillFreeArea__13JKRAssertHeapFv();
extern "C" bool do_resize__13JKRAssertHeapFPvUl();
extern "C" bool do_getSize__13JKRAssertHeapFPv();
extern "C" bool do_getFreeSize__13JKRAssertHeapFv();
extern "C" bool do_getMaxFreeBlock__13JKRAssertHeapFv();
extern "C" bool do_getTotalFreeSize__13JKRAssertHeapFv();

//
// External References:
//

extern "C" void __ct__7JKRHeapFPvUlP7JKRHeapb();
extern "C" void __dt__7JKRHeapFv();
extern "C" void alloc__7JKRHeapFUliP7JKRHeap();
extern "C" void callAllDisposer__7JKRHeapFv();
extern "C" void dispose__7JKRHeapFv();
extern "C" void __dl__FPv();
extern "C" void state_register__7JKRHeapCFPQ27JKRHeap6TStateUl();
extern "C" void state_compare__7JKRHeapCFRCQ27JKRHeap6TStateRCQ27JKRHeap6TState();
extern "C" void state_dump__7JKRHeapCFRCQ27JKRHeap6TState();
extern "C" u8 sRootHeap__7JKRHeap[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 803CC090-803CC0F0 0291B0 0060+00 2/2 0/0 0/0 .data            __vt__13JKRAssertHeap */
SECTION_DATA extern void* __vt__13JKRAssertHeap[24] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__13JKRAssertHeapFv,
    (void*)callAllDisposer__7JKRHeapFv,
    (void*)getHeapType__13JKRAssertHeapFv,
    (void*)check__13JKRAssertHeapFv,
    (void*)dump_sort__13JKRAssertHeapFv,
    (void*)dump__13JKRAssertHeapFv,
    (void*)do_destroy__13JKRAssertHeapFv,
    (void*)do_alloc__13JKRAssertHeapFUli,
    (void*)do_free__13JKRAssertHeapFPv,
    (void*)do_freeAll__13JKRAssertHeapFv,
    (void*)do_freeTail__13JKRAssertHeapFv,
    (void*)do_fillFreeArea__13JKRAssertHeapFv,
    (void*)do_resize__13JKRAssertHeapFPvUl,
    (void*)do_getSize__13JKRAssertHeapFPv,
    (void*)do_getFreeSize__13JKRAssertHeapFv,
    (void*)do_getMaxFreeBlock__13JKRAssertHeapFv,
    (void*)do_getTotalFreeSize__13JKRAssertHeapFv,
    (void*)do_changeGroupID__13JKRAssertHeapFUc,
    (void*)do_getCurrentGroupId__13JKRAssertHeapFv,
    (void*)state_register__7JKRHeapCFPQ27JKRHeap6TStateUl,
    (void*)state_compare__7JKRHeapCFRCQ27JKRHeap6TStateRCQ27JKRHeap6TState,
    (void*)state_dump__7JKRHeapCFRCQ27JKRHeap6TState,
};

/* 802D12C4-802D1300 2CBC04 003C+00 1/1 0/0 0/0 .text __ct__13JKRAssertHeapFPvUlP7JKRHeapb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JKRAssertHeap::JKRAssertHeap(void* param_0, u32 param_1, JKRHeap* param_2, bool param_3) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAssertHeap/__ct__13JKRAssertHeapFPvUlP7JKRHeapb.s"
}
#pragma pop

/* 802D1300-802D1368 2CBC40 0068+00 1/0 0/0 0/0 .text            __dt__13JKRAssertHeapFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JKRAssertHeap::~JKRAssertHeap() {
    nofralloc
#include "asm/JSystem/JKernel/JKRAssertHeap/__dt__13JKRAssertHeapFv.s"
}
#pragma pop

/* 802D1368-802D13D8 2CBCA8 0070+00 0/0 1/1 0/0 .text            create__13JKRAssertHeapFP7JKRHeap
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAssertHeap::create(JKRHeap* param_0) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAssertHeap/create__13JKRAssertHeapFP7JKRHeap.s"
}
#pragma pop

/* 802D13D8-802D1408 2CBD18 0030+00 1/0 0/0 0/0 .text            do_destroy__13JKRAssertHeapFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAssertHeap::do_destroy() {
    nofralloc
#include "asm/JSystem/JKernel/JKRAssertHeap/do_destroy__13JKRAssertHeapFv.s"
}
#pragma pop

/* 802D1408-802D1414 2CBD48 000C+00 1/0 0/0 0/0 .text            getHeapType__13JKRAssertHeapFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAssertHeap::getHeapType() {
    nofralloc
#include "asm/JSystem/JKernel/JKRAssertHeap/getHeapType__13JKRAssertHeapFv.s"
}
#pragma pop

/* 802D1414-802D141C 2CBD54 0008+00 1/0 0/0 0/0 .text            check__13JKRAssertHeapFv */
bool JKRAssertHeap::check() {
    return true;
}

/* 802D141C-802D1424 2CBD5C 0008+00 1/0 0/0 0/0 .text            dump__13JKRAssertHeapFv */
bool JKRAssertHeap::dump() {
    return true;
}

/* 802D1424-802D142C 2CBD64 0008+00 1/0 0/0 0/0 .text            dump_sort__13JKRAssertHeapFv */
bool JKRAssertHeap::dump_sort() {
    return true;
}

/* 802D142C-802D1434 2CBD6C 0008+00 1/0 0/0 0/0 .text do_changeGroupID__13JKRAssertHeapFUc */
bool JKRAssertHeap::do_changeGroupID(u8 param_0) {
    return false;
}

/* 802D1434-802D143C 2CBD74 0008+00 1/0 0/0 0/0 .text do_getCurrentGroupId__13JKRAssertHeapFv */
bool JKRAssertHeap::do_getCurrentGroupId() {
    return false;
}

/* 802D143C-802D1444 2CBD7C 0008+00 1/0 0/0 0/0 .text            do_alloc__13JKRAssertHeapFUli */
bool JKRAssertHeap::do_alloc(u32 param_0, int param_1) {
    return false;
}

/* 802D1444-802D1448 2CBD84 0004+00 1/0 0/0 0/0 .text            do_free__13JKRAssertHeapFPv */
void JKRAssertHeap::do_free(void* param_0) {
    /* empty function */
}

/* 802D1448-802D144C 2CBD88 0004+00 1/0 0/0 0/0 .text            do_freeAll__13JKRAssertHeapFv */
void JKRAssertHeap::do_freeAll() {
    /* empty function */
}

/* 802D144C-802D1450 2CBD8C 0004+00 1/0 0/0 0/0 .text            do_freeTail__13JKRAssertHeapFv */
void JKRAssertHeap::do_freeTail() {
    /* empty function */
}

/* 802D1450-802D1454 2CBD90 0004+00 1/0 0/0 0/0 .text            do_fillFreeArea__13JKRAssertHeapFv
 */
void JKRAssertHeap::do_fillFreeArea() {
    /* empty function */
}

/* 802D1454-802D145C 2CBD94 0008+00 1/0 0/0 0/0 .text            do_resize__13JKRAssertHeapFPvUl */
bool JKRAssertHeap::do_resize(void* param_0, u32 param_1) {
    return false;
}

/* 802D145C-802D1464 2CBD9C 0008+00 1/0 0/0 0/0 .text            do_getSize__13JKRAssertHeapFPv */
bool JKRAssertHeap::do_getSize(void* param_0) {
    return false;
}

/* 802D1464-802D146C 2CBDA4 0008+00 1/0 0/0 0/0 .text            do_getFreeSize__13JKRAssertHeapFv
 */
bool JKRAssertHeap::do_getFreeSize() {
    return false;
}

/* 802D146C-802D1474 2CBDAC 0008+00 1/0 0/0 0/0 .text do_getMaxFreeBlock__13JKRAssertHeapFv */
bool JKRAssertHeap::do_getMaxFreeBlock() {
    return false;
}

/* 802D1474-802D147C 2CBDB4 0008+00 1/0 0/0 0/0 .text do_getTotalFreeSize__13JKRAssertHeapFv */
bool JKRAssertHeap::do_getTotalFreeSize() {
    return false;
}
