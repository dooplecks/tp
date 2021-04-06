//
// Generated By: dol2asm
// Translation Unit: f_pc/f_pc_delete_tag
//

#include "f_pc/f_pc_delete_tag.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct node_list_class {};

struct delete_tag_class {};

struct create_tag_class {};

//
// Forward References:
//

extern "C" void fpcDtTg_IsEmpty__Fv();
extern "C" void fpcDtTg_ToDeleteQ__FP16delete_tag_class();
extern "C" static void fpcDtTg_DeleteQTo__FP16delete_tag_class();
extern "C" void fpcDtTg_Do__FP16delete_tag_classPFPv_i();
extern "C" void fpcDtTg_Init__FP16delete_tag_classPv();

//
// External References:
//

extern "C" void cTg_SingleCut__FP16create_tag_class();
extern "C" void cTg_Addition__FP15node_list_classP16create_tag_class();
extern "C" void cTg_Create__FP16create_tag_classPv();

//
// Declarations:
//

/* ############################################################################################## */
/* 803A39A0-803A39B0 000AC0 000C+04 2/2 1/1 0/0 .data            g_fpcDtTg_Queue */
SECTION_DATA extern u8 g_fpcDtTg_Queue[12 + 4 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80020F30-80020F48 01B870 0018+00 0/0 1/1 0/0 .text            fpcDtTg_IsEmpty__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcDtTg_IsEmpty() {
    nofralloc
#include "asm/f_pc/f_pc_delete_tag/fpcDtTg_IsEmpty__Fv.s"
}
#pragma pop

/* 80020F48-80020F7C 01B888 0034+00 1/1 1/1 0/0 .text fpcDtTg_ToDeleteQ__FP16delete_tag_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcDtTg_ToDeleteQ(delete_tag_class* param_0) {
    nofralloc
#include "asm/f_pc/f_pc_delete_tag/fpcDtTg_ToDeleteQ__FP16delete_tag_class.s"
}
#pragma pop

/* 80020F7C-80020F9C 01B8BC 0020+00 1/1 0/0 0/0 .text fpcDtTg_DeleteQTo__FP16delete_tag_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void fpcDtTg_DeleteQTo(delete_tag_class* param_0) {
    nofralloc
#include "asm/f_pc/f_pc_delete_tag/fpcDtTg_DeleteQTo__FP16delete_tag_class.s"
}
#pragma pop

/* 80020F9C-8002101C 01B8DC 0080+00 0/0 1/1 0/0 .text fpcDtTg_Do__FP16delete_tag_classPFPv_i */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcDtTg_Do(delete_tag_class* param_0, int (*)(void*)) {
    nofralloc
#include "asm/f_pc/f_pc_delete_tag/fpcDtTg_Do__FP16delete_tag_classPFPv_i.s"
}
#pragma pop

/* 8002101C-80021040 01B95C 0024+00 0/0 1/1 0/0 .text fpcDtTg_Init__FP16delete_tag_classPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcDtTg_Init(delete_tag_class* param_0, void* param_1) {
    nofralloc
#include "asm/f_pc/f_pc_delete_tag/fpcDtTg_Init__FP16delete_tag_classPv.s"
}
#pragma pop
