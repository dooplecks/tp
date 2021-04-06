//
// Generated By: dol2asm
// Translation Unit: f_pc/f_pc_create_iter
//

#include "f_pc/f_pc_create_iter.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct node_list_class {};

struct node_class {};

struct method_filter {};

struct judge_filter {};

struct fpcCtIt_jilprm_c {};

struct create_tag_class {};

struct create_tag {};

//
// Forward References:
//

extern "C" void fpcCtIt_Method__FPFPvPv_iPv();
extern "C" void fpcCtIt_Judge__FPFPvPv_PvPv();
extern "C" static void fpcCtIt_filter_JudgeInLayer__FP10create_tagP16fpcCtIt_jilprm_c();
extern "C" void fpcCtIt_JudgeInLayer__FUiPFPvPv_PvPv();

//
// External References:
//

extern "C" void cLsIt_Method__FP15node_list_classPFP10node_classPv_iPv();
extern "C" void cLsIt_Judge__FP15node_list_classPFP10node_classPv_PvPv();
extern "C" void cTgIt_MethodCall__FP16create_tag_classP13method_filter();
extern "C" void cTgIt_JudgeFilter__FP16create_tag_classP12judge_filter();
extern "C" extern u8 g_fpcCtTg_Queue[12 + 4 /* padding */];

//
// Declarations:
//

/* 800209C8-80020A04 01B308 003C+00 0/0 1/1 0/0 .text            fpcCtIt_Method__FPFPvPv_iPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcCtIt_Method(int (*)(void*, void*), void* param_1) {
    nofralloc
#include "asm/f_pc/f_pc_create_iter/fpcCtIt_Method__FPFPvPv_iPv.s"
}
#pragma pop

/* 80020A04-80020A40 01B344 003C+00 1/1 2/2 0/0 .text            fpcCtIt_Judge__FPFPvPv_PvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcCtIt_Judge(void* (*)(void*, void*), void* param_1) {
    nofralloc
#include "asm/f_pc/f_pc_create_iter/fpcCtIt_Judge__FPFPvPv_PvPv.s"
}
#pragma pop

/* 80020A40-80020A94 01B380 0054+00 1/1 0/0 0/0 .text
 * fpcCtIt_filter_JudgeInLayer__FP10create_tagP16fpcCtIt_jilprm_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void fpcCtIt_filter_JudgeInLayer(create_tag* param_0, fpcCtIt_jilprm_c* param_1) {
    nofralloc
#include "asm/f_pc/f_pc_create_iter/fpcCtIt_filter_JudgeInLayer__FP10create_tagP16fpcCtIt_jilprm_c.s"
}
#pragma pop

/* 80020A94-80020ACC 01B3D4 0038+00 0/0 1/1 0/0 .text fpcCtIt_JudgeInLayer__FUiPFPvPv_PvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcCtIt_JudgeInLayer(unsigned int param_0, void* (*)(void*, void*), void* param_2) {
    nofralloc
#include "asm/f_pc/f_pc_create_iter/fpcCtIt_JudgeInLayer__FUiPFPvPv_PvPv.s"
}
#pragma pop
