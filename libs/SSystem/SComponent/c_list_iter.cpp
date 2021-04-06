//
// Generated By: dol2asm
// Translation Unit: c_list_iter
//

#include "SSystem/SComponent/c_list_iter.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct node_list_class {};

struct node_class {};

//
// Forward References:
//

extern "C" void cLsIt_Method__FP15node_list_classPFP10node_classPv_iPv();
extern "C" void cLsIt_Judge__FP15node_list_classPFP10node_classPv_PvPv();

//
// External References:
//

extern "C" void cNdIt_Method__FP10node_classPFP10node_classPv_iPv();
extern "C" void cNdIt_Judge__FP10node_classPFP10node_classPv_PvPv();

//
// Declarations:
//

/* 80266060-80266098 2609A0 0038+00 0/0 5/5 0/0 .text
 * cLsIt_Method__FP15node_list_classPFP10node_classPv_iPv       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cLsIt_Method(node_list_class* param_0, int (*)(node_class*, void*), void* param_2) {
    nofralloc
#include "asm/SSystem/SComponent/c_list_iter/cLsIt_Method__FP15node_list_classPFP10node_classPv_iPv.s"
}
#pragma pop

/* 80266098-802660D0 2609D8 0038+00 0/0 4/4 0/0 .text
 * cLsIt_Judge__FP15node_list_classPFP10node_classPv_PvPv       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cLsIt_Judge(node_list_class* param_0, void* (*)(node_class*, void*), void* param_2) {
    nofralloc
#include "asm/SSystem/SComponent/c_list_iter/cLsIt_Judge__FP15node_list_classPFP10node_classPv_PvPv.s"
}
#pragma pop
