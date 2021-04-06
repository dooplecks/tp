//
// Generated By: dol2asm
// Translation Unit: f_pc/f_pc_layer_iter
//

#include "f_pc/f_pc_layer_iter.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct node_lists_tree_class {};

struct node_class {};

struct method_filter {};

struct layer_class {};

struct judge_filter {};

struct create_tag_class {};

//
// Forward References:
//

extern "C" void fpcLyIt_OnlyHere__FP11layer_classPFPvPv_iPv();
extern "C" void fpcLyIt_OnlyHereLY__FP11layer_classPFPvPv_iPv();
extern "C" void fpcLyIt_Judge__FP11layer_classPFPvPv_PvPv();
extern "C" void fpcLyIt_AllJudge__FPFPvPv_PvPv();

//
// External References:
//

extern "C" void fpcLy_RootLayer__Fv();
extern "C" void fpcLy_SetCurrentLayer__FP11layer_class();
extern "C" void fpcLy_CurrentLayer__Fv();
extern "C" void cTrIt_Method__FP21node_lists_tree_classPFP10node_classPv_iPv();
extern "C" void cTrIt_Judge__FP21node_lists_tree_classPFP10node_classPv_PvPv();
extern "C" void cTgIt_MethodCall__FP16create_tag_classP13method_filter();
extern "C" void cTgIt_JudgeFilter__FP16create_tag_classP12judge_filter();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();

//
// Declarations:
//

/* 80021B88-80021BC0 01C4C8 0038+00 1/1 4/4 0/0 .text fpcLyIt_OnlyHere__FP11layer_classPFPvPv_iPv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcLyIt_OnlyHere(layer_class* param_0, int (*)(void*, void*), void* param_2) {
    nofralloc
#include "asm/f_pc/f_pc_layer_iter/fpcLyIt_OnlyHere__FP11layer_classPFPvPv_iPv.s"
}
#pragma pop

/* 80021BC0-80021C28 01C500 0068+00 0/0 1/1 0/0 .text
 * fpcLyIt_OnlyHereLY__FP11layer_classPFPvPv_iPv                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcLyIt_OnlyHereLY(layer_class* param_0, int (*)(void*, void*), void* param_2) {
    nofralloc
#include "asm/f_pc/f_pc_layer_iter/fpcLyIt_OnlyHereLY__FP11layer_classPFPvPv_iPv.s"
}
#pragma pop

/* 80021C28-80021C60 01C568 0038+00 0/0 3/3 0/0 .text fpcLyIt_Judge__FP11layer_classPFPvPv_PvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcLyIt_Judge(layer_class* param_0, void* (*)(void*, void*), void* param_2) {
    nofralloc
#include "asm/f_pc/f_pc_layer_iter/fpcLyIt_Judge__FP11layer_classPFPvPv_PvPv.s"
}
#pragma pop

/* 80021C60-80021CD4 01C5A0 0074+00 0/0 1/1 4/4 .text            fpcLyIt_AllJudge__FPFPvPv_PvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcLyIt_AllJudge(void* (*)(void*, void*), void* param_1) {
    nofralloc
#include "asm/f_pc/f_pc_layer_iter/fpcLyIt_AllJudge__FPFPvPv_PvPv.s"
}
#pragma pop
