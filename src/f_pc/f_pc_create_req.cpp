//
// Generated By: dol2asm
// Translation Unit: f_pc/f_pc_create_req
//

#include "f_pc/f_pc_create_req.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct process_method_tag_class {};

struct layer_class {};

struct create_tag {};

struct create_request_method_class {};

struct create_request {};

struct cMl {
    /* 80263228 */ void memalignB(int, u32);
    /* 80263260 */ void free(void*);
};

struct base_process_class {};

//
// Forward References:
//

extern "C" static void fpcCtRq_isCreatingByID__FP10create_tagPUi();
extern "C" void fpcCtRq_IsCreatingByID__FUi();
extern "C" static void fpcCtRq_CreateQTo__FP14create_request();
extern "C" static void fpcCtRq_ToCreateQ__FP14create_request();
extern "C" static void fpcCtRq_Delete__FP14create_request();
extern "C" void fpcCtRq_Cancel__FP14create_request();
extern "C" void fpcCtRq_IsDoing__FP14create_request();
extern "C" static void fpcCtRq_Do__FP14create_request();
extern "C" void fpcCtRq_Handler__Fv();
extern "C" void fpcCtRq_Create__FP11layer_classUlP27create_request_method_class();

//
// External References:
//

extern "C" void fpcBs_MakeOfId__Fv();
extern "C" void fpcCtIt_Method__FPFPvPv_iPv();
extern "C" void fpcCtIt_Judge__FPFPvPv_PvPv();
extern "C" void fpcCtTg_ToCreateQ__FP10create_tag();
extern "C" void fpcCtTg_CreateQTo__FP10create_tag();
extern "C" void fpcCtTg_Init__FP10create_tagPv();
extern "C" void fpcDt_Delete__FPv();
extern "C" void fpcEx_ToExecuteQ__FP18base_process_class();
extern "C" void fpcLy_CancelQTo__FP24process_method_tag_class();
extern "C" void fpcLy_ToCancelQ__FP11layer_classP24process_method_tag_class();
extern "C" void fpcLy_CreatingMesg__FP11layer_class();
extern "C" void fpcLy_CreatedMesg__FP11layer_class();
extern "C" void fpcMtd_Method__FPFPv_iPv();
extern "C" void fpcMtdTg_Init__FP24process_method_tag_classPFPv_iPv();
extern "C" void memalignB__3cMlFiUl();
extern "C" void free__3cMlFPv();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();

//
// Declarations:
//

/* 80020ACC-80020AE8 01B40C 001C+00 1/1 0/0 0/0 .text fpcCtRq_isCreatingByID__FP10create_tagPUi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void fpcCtRq_isCreatingByID(create_tag* param_0, unsigned int* param_1) {
    nofralloc
#include "asm/f_pc/f_pc_create_req/fpcCtRq_isCreatingByID__FP10create_tagPUi.s"
}
#pragma pop

/* 80020AE8-80020B20 01B428 0038+00 0/0 2/2 0/0 .text            fpcCtRq_IsCreatingByID__FUi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcCtRq_IsCreatingByID(unsigned int param_0) {
    nofralloc
#include "asm/f_pc/f_pc_create_req/fpcCtRq_IsCreatingByID__FUi.s"
}
#pragma pop

/* 80020B20-80020B5C 01B460 003C+00 1/1 0/0 0/0 .text fpcCtRq_CreateQTo__FP14create_request */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void fpcCtRq_CreateQTo(create_request* param_0) {
    nofralloc
#include "asm/f_pc/f_pc_create_req/fpcCtRq_CreateQTo__FP14create_request.s"
}
#pragma pop

/* 80020B5C-80020BA0 01B49C 0044+00 1/1 0/0 0/0 .text fpcCtRq_ToCreateQ__FP14create_request */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void fpcCtRq_ToCreateQ(create_request* param_0) {
    nofralloc
#include "asm/f_pc/f_pc_create_req/fpcCtRq_ToCreateQ__FP14create_request.s"
}
#pragma pop

/* 80020BA0-80020C14 01B4E0 0074+00 2/2 0/0 0/0 .text            fpcCtRq_Delete__FP14create_request
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void fpcCtRq_Delete(create_request* param_0) {
    nofralloc
#include "asm/f_pc/f_pc_create_req/fpcCtRq_Delete__FP14create_request.s"
}
#pragma pop

/* 80020C14-80020CAC 01B554 0098+00 2/2 2/2 0/0 .text            fpcCtRq_Cancel__FP14create_request
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcCtRq_Cancel(create_request* param_0) {
    nofralloc
#include "asm/f_pc/f_pc_create_req/fpcCtRq_Cancel__FP14create_request.s"
}
#pragma pop

/* 80020CAC-80020CC8 01B5EC 001C+00 0/0 1/1 0/0 .text            fpcCtRq_IsDoing__FP14create_request
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcCtRq_IsDoing(create_request* param_0) {
    nofralloc
#include "asm/f_pc/f_pc_create_req/fpcCtRq_IsDoing__FP14create_request.s"
}
#pragma pop

/* 80020CC8-80020D84 01B608 00BC+00 1/1 0/0 0/0 .text            fpcCtRq_Do__FP14create_request */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void fpcCtRq_Do(create_request* param_0) {
    nofralloc
#include "asm/f_pc/f_pc_create_req/fpcCtRq_Do__FP14create_request.s"
}
#pragma pop

/* 80020D84-80020DB0 01B6C4 002C+00 0/0 1/1 0/0 .text            fpcCtRq_Handler__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcCtRq_Handler() {
    nofralloc
#include "asm/f_pc/f_pc_create_req/fpcCtRq_Handler__Fv.s"
}
#pragma pop

/* 80020DB0-80020E38 01B6F0 0088+00 0/0 2/2 0/0 .text
 * fpcCtRq_Create__FP11layer_classUlP27create_request_method_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcCtRq_Create(layer_class* param_0, u32 param_1, create_request_method_class* param_2) {
    nofralloc
#include "asm/f_pc/f_pc_create_req/fpcCtRq_Create__FP11layer_classUlP27create_request_method_class.s"
}
#pragma pop
