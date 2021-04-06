//
// Generated By: dol2asm
// Translation Unit: f_pc/f_pc_line_iter
//

#include "f_pc/f_pc_line_iter.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct node_lists_tree_class {};

struct node_class {};

struct method_filter {};

struct layer_class {};

struct create_tag_class {};

//
// Forward References:
//

extern "C" static void fpcLnIt_MethodCall__FP16create_tag_classP13method_filter();
extern "C" void fpcLnIt_Queue__FPFPvPv_i();

//
// External References:
//

extern "C" void fpcLy_SetCurrentLayer__FP11layer_class();
extern "C" void fpcLy_CurrentLayer__Fv();
extern "C" void cTrIt_Method__FP21node_lists_tree_classPFP10node_classPv_iPv();
extern "C" void cTgIt_MethodCall__FP16create_tag_classP13method_filter();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();
extern "C" extern void* g_fpcLn_Queue[2];

//
// Declarations:
//

/* 800236C0-80023728 01E000 0068+00 1/1 0/0 0/0 .text
 * fpcLnIt_MethodCall__FP16create_tag_classP13method_filter     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void fpcLnIt_MethodCall(create_tag_class* param_0, method_filter* param_1) {
    nofralloc
#include "asm/f_pc/f_pc_line_iter/fpcLnIt_MethodCall__FP16create_tag_classP13method_filter.s"
}
#pragma pop

/* 80023728-80023764 01E068 003C+00 0/0 1/1 0/0 .text            fpcLnIt_Queue__FPFPvPv_i */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcLnIt_Queue(int (*)(void*, void*)) {
    nofralloc
#include "asm/f_pc/f_pc_line_iter/fpcLnIt_Queue__FPFPvPv_i.s"
}
#pragma pop
