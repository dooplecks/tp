//
// Generated By: dol2asm
// Translation Unit: d/a/d_a_shop_item_static
//

#include "d/a/d_a_shop_item_static.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {};

struct daShopItem_c {
    /* 80037C14 */ void getRotateP();
    /* 80037C1C */ void getPosP();

    static void* const mData[276];
};

struct daItemBase_c {
    /* 8014475C */ void CreateItemHeap(char const*, s16, s16, s16, s16, s16, s16, s16);
};

//
// Forward References:
//

extern "C" void getRotateP__12daShopItem_cFv();
extern "C" void getPosP__12daShopItem_cFv();
extern "C" void CheckShopItemCreateHeap__FP10fopAc_ac_c();
extern "C" void* const mData__12daShopItem_c[276];
extern "C" extern char const* const d_a_d_a_shop_item_static__stringBase0;

//
// External References:
//

extern "C" void CreateItemHeap__12daItemBase_cFPCcsssssss();

//
// Declarations:
//

/* 80037C14-80037C1C 032554 0008+00 0/0 1/1 0/0 .text            getRotateP__12daShopItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daShopItem_c::getRotateP() {
    nofralloc
#include "asm/d/a/d_a_shop_item_static/getRotateP__12daShopItem_cFv.s"
}
#pragma pop

/* 80037C1C-80037C24 03255C 0008+00 0/0 2/2 0/0 .text            getPosP__12daShopItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daShopItem_c::getPosP() {
    nofralloc
#include "asm/d/a/d_a_shop_item_static/getPosP__12daShopItem_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803792E8-80379738 -00001 0450+00 1/1 0/0 9/9 .rodata          mData__12daShopItem_c */
SECTION_RODATA void* const daShopItem_c::mData[276] = {
    (void*)&d_a_d_a_shop_item_static__stringBase0,
    (void*)0x0003FFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFF0000,
    (void*)NULL,
    (void*)0x3F800000,
    (void*)NULL,
    (void*)0x80000000,
    (void*)NULL,
    (void*)0x000000FF,
    (void*)0xFF000000,
    (void*)(((char*)&d_a_d_a_shop_item_static__stringBase0) + 0xA),
    (void*)0x0003FFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFF0000,
    (void*)NULL,
    (void*)0x3F800000,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)0x000000FF,
    (void*)0xFF000000,
    (void*)(((char*)&d_a_d_a_shop_item_static__stringBase0) + 0x13),
    (void*)0x0003FFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFF50000,
    (void*)NULL,
    (void*)0x3F800000,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)0x000000FF,
    (void*)0xFF000000,
    (void*)(((char*)&d_a_d_a_shop_item_static__stringBase0) + 0x1C),
    (void*)0x0003FFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFF0000,
    (void*)NULL,
    (void*)0x3F800000,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)0x000000FF,
    (void*)0xFF000000,
    (void*)(((char*)&d_a_d_a_shop_item_static__stringBase0) + 0x26),
    (void*)0x0006000C,
    (void*)0xFFFFFFFF,
    (void*)0xFFFF0009,
    (void*)0x000F0000,
    (void*)NULL,
    (void*)0x3F800000,
    (void*)NULL,
    (void*)NULL,
    (void*)0x00000004,
    (void*)0x00000003,
    (void*)0x01000000,
    (void*)(((char*)&d_a_d_a_shop_item_static__stringBase0) + 0x30),
    (void*)0x0003FFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFF0000,
    (void*)NULL,
    (void*)0x3F800000,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)0x000000FF,
    (void*)0xFF000000,
    (void*)(((char*)&d_a_d_a_shop_item_static__stringBase0) + 0x39),
    (void*)0x0003FFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFF0000,
    (void*)0x41F00000,
    (void*)0x3F800000,
    (void*)NULL,
    (void*)0x7FFF0000,
    (void*)NULL,
    (void*)0x000000FF,
    (void*)0xFF000000,
    (void*)(((char*)&d_a_d_a_shop_item_static__stringBase0) + 0x42),
    (void*)0x0003FFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFF0000,
    (void*)0x41F00000,
    (void*)0x3F800000,
    (void*)NULL,
    (void*)0x7FFF0000,
    (void*)NULL,
    (void*)0x000000FF,
    (void*)0xFF000000,
    (void*)(((char*)&d_a_d_a_shop_item_static__stringBase0) + 0x4B),
    (void*)0x0003FFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFF0000,
    (void*)NULL,
    (void*)0x3F800000,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)0xFF000000,
    (void*)(((char*)&d_a_d_a_shop_item_static__stringBase0) + 0x55),
    (void*)0x0003FFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFF0000,
    (void*)NULL,
    (void*)0x3F800000,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)0xFF000000,
    (void*)(((char*)&d_a_d_a_shop_item_static__stringBase0) + 0x5D),
    (void*)0x0003FFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFF0000,
    (void*)NULL,
    (void*)0x3F800000,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)0xFF000000,
    (void*)(((char*)&d_a_d_a_shop_item_static__stringBase0) + 0x65),
    (void*)0x0003FFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFF0000,
    (void*)NULL,
    (void*)0x3F800000,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)0xFF000000,
    (void*)(((char*)&d_a_d_a_shop_item_static__stringBase0) + 0x6F),
    (void*)0x0003FFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFF0000,
    (void*)NULL,
    (void*)0x3F800000,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)0xFF000000,
    (void*)(((char*)&d_a_d_a_shop_item_static__stringBase0) + 0x79),
    (void*)0x0003FFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFF0000,
    (void*)NULL,
    (void*)0x3F800000,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)0xFF000000,
    (void*)(((char*)&d_a_d_a_shop_item_static__stringBase0) + 0x26),
    (void*)0x0006000C,
    (void*)0xFFFFFFFF,
    (void*)0xFFFF0009,
    (void*)0x000F0000,
    (void*)NULL,
    (void*)0x3F800000,
    (void*)NULL,
    (void*)NULL,
    (void*)0x00000004,
    (void*)0x00000001,
    (void*)NULL,
    (void*)(((char*)&d_a_d_a_shop_item_static__stringBase0) + 0x83),
    (void*)0x0003FFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFF0000,
    (void*)NULL,
    (void*)0x3F800000,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)0x000000FF,
    (void*)0xFF000000,
    (void*)(((char*)&d_a_d_a_shop_item_static__stringBase0) + 0x8D),
    (void*)0x0003FFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFF0000,
    (void*)NULL,
    (void*)0x3F800000,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)0x000000FF,
    (void*)0xFF000000,
    (void*)(((char*)&d_a_d_a_shop_item_static__stringBase0) + 0x97),
    (void*)0x0003FFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFF50000,
    (void*)NULL,
    (void*)0x3F800000,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)0x000000FF,
    (void*)0xFF000000,
    (void*)(((char*)&d_a_d_a_shop_item_static__stringBase0) + 0xA1),
    (void*)0x0003FFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFF0000,
    (void*)NULL,
    (void*)0x3F800000,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)0x000000FF,
    (void*)0xFF000000,
    (void*)(((char*)&d_a_d_a_shop_item_static__stringBase0) + 0xAB),
    (void*)0x0003FFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFF0000,
    (void*)NULL,
    (void*)0x3F800000,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)0x000000FF,
    (void*)0xFF000000,
    (void*)(((char*)&d_a_d_a_shop_item_static__stringBase0) + 0xAB),
    (void*)0x0004FFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFF0000,
    (void*)NULL,
    (void*)0x3F800000,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)0x000000FF,
    (void*)0xFF000000,
    (void*)(((char*)&d_a_d_a_shop_item_static__stringBase0) + 0xB5),
    (void*)0x0003FFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFFFFFF,
    (void*)0xFFFF0000,
    (void*)NULL,
    (void*)0x3F800000,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)0x000000FF,
    (void*)0xFF000000,
    (void*)(((char*)&d_a_d_a_shop_item_static__stringBase0) + 0x26),
    (void*)0x0006000C,
    (void*)0xFFFFFFFF,
    (void*)0xFFFF0009,
    (void*)0x000F0000,
    (void*)NULL,
    (void*)0x3F800000,
    (void*)NULL,
    (void*)NULL,
    (void*)0x00000004,
    (void*)0x0000000C,
    (void*)NULL,
};
COMPILER_STRIP_GATE(803792E8, &daShopItem_c::mData);

/* 80037C24-80037C7C 032564 0058+00 0/0 0/0 1/1 .text CheckShopItemCreateHeap__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void CheckShopItemCreateHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/d/a/d_a_shop_item_static/CheckShopItemCreateHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80379738-803797F8 005D98 00BF+01 1/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80379738 = "B_mD_sold";
SECTION_DEAD static char const* const stringBase_80379742 = "B_mD_oil";
SECTION_DEAD static char const* const stringBase_8037974B = "O_mD_red";
SECTION_DEAD static char const* const stringBase_80379754 = "B_mD_milk";
SECTION_DEAD static char const* const stringBase_8037975E = "O_mD_bott";
SECTION_DEAD static char const* const stringBase_80379768 = "O_mD_arw";
SECTION_DEAD static char const* const stringBase_80379771 = "O_mD_SHB";
SECTION_DEAD static char const* const stringBase_8037977A = "O_mD_SHA";
SECTION_DEAD static char const* const stringBase_80379783 = "O_mD_bomb";
SECTION_DEAD static char const* const stringBase_8037978D = "O_mD_pg";
SECTION_DEAD static char const* const stringBase_80379795 = "O_mD_bi";
SECTION_DEAD static char const* const stringBase_8037979D = "O_mD_bmcs";
SECTION_DEAD static char const* const stringBase_803797A7 = "O_mD_bmc2";
SECTION_DEAD static char const* const stringBase_803797B1 = "O_mD_jira";
SECTION_DEAD static char const* const stringBase_803797BB = "O_mD_hati";
SECTION_DEAD static char const* const stringBase_803797C5 = "O_mD_pach";
SECTION_DEAD static char const* const stringBase_803797CF = "O_mD_blue";
SECTION_DEAD static char const* const stringBase_803797D9 = "O_mD_hawk";
SECTION_DEAD static char const* const stringBase_803797E3 = "O_mD_marm";
SECTION_DEAD static char const* const stringBase_803797ED = "O_mD_gren";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_803797F7 = "";
#pragma pop
