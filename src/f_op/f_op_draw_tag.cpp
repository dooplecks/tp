// 
// Generated By: dol2asm
// Translation Unit: f_op/f_op_draw_tag
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "f_op/f_op_draw_tag.h"

// 
// Types:
// 

struct node_lists_tree_class {
};

struct node_list_class {
};

struct create_tag_class {
};

// 
// Forward References:
// 

// False False
//  create_tag_class* False
// 	 create_tag_class False
//  int False
void fopDwTg_ToDrawQ(create_tag_class*, int);
// False False
//  create_tag_class* False
// 	 create_tag_class False
void fopDwTg_DrawQTo(create_tag_class*);
// False False
//  create_tag_class* False
// 	 create_tag_class False
//  void* False
// 	 void False
void fopDwTg_Init(create_tag_class*, void*);
// False False
void fopDwTg_CreateQueue();

// False False
//  create_tag_class* False
// 	 create_tag_class False
//  int False
extern "C" void fopDwTg_ToDrawQ__FP16create_tag_classi();
// False False
//  create_tag_class* False
// 	 create_tag_class False
extern "C" void fopDwTg_DrawQTo__FP16create_tag_class();
// False False
//  create_tag_class* False
// 	 create_tag_class False
//  void* False
// 	 void False
extern "C" void fopDwTg_Init__FP16create_tag_classPv();
// False False
extern "C" void fopDwTg_CreateQueue__Fv();
extern "C" extern u8 g_fopDwTg_Queue[8];

// 
// External References:
// 

// False False
//  node_lists_tree_class* False
// 	 node_lists_tree_class False
//  node_list_class* False
// 	 node_list_class False
//  int False
void cTr_Create(node_lists_tree_class*, node_list_class*, int);
// False False
//  create_tag_class* False
// 	 create_tag_class False
void cTg_SingleCutFromTree(create_tag_class*);
// False False
//  node_lists_tree_class* False
// 	 node_lists_tree_class False
//  int False
//  create_tag_class* False
// 	 create_tag_class False
void cTg_AdditionToTree(node_lists_tree_class*, int, create_tag_class*);
// False False
//  create_tag_class* False
// 	 create_tag_class False
//  void* False
// 	 void False
void cTg_Create(create_tag_class*, void*);

// False False
//  node_lists_tree_class* False
// 	 node_lists_tree_class False
//  node_list_class* False
// 	 node_list_class False
//  int False
extern "C" void cTr_Create__FP21node_lists_tree_classP15node_list_classi();
// False False
//  create_tag_class* False
// 	 create_tag_class False
extern "C" void cTg_SingleCutFromTree__FP16create_tag_class();
// False False
//  node_lists_tree_class* False
// 	 node_lists_tree_class False
//  int False
//  create_tag_class* False
// 	 create_tag_class False
extern "C" void cTg_AdditionToTree__FP21node_lists_tree_classiP16create_tag_class();
// False False
//  create_tag_class* False
// 	 create_tag_class False
//  void* False
// 	 void False
extern "C" void cTg_Create__FP16create_tag_classPv();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 804505D0-804505D8 0008+00 s=2 e=2 z=0  None .sdata     g_fopDwTg_Queue                                              */
SECTION_SDATA u8 g_fopDwTg_Queue[8] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 800204AC-800204D4 0028+00 s=0 e=4 z=2  None .text      fopDwTg_ToDrawQ__FP16create_tag_classi                       */
//	800204BC: 804505D0 (g_fopDwTg_Queue)
//	800204C0: 802668CC (cTg_AdditionToTree__FP21node_lists_tree_classiP16create_tag_class)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  create_tag_class* False
// 	 create_tag_class False
//  int False
asm void fopDwTg_ToDrawQ(create_tag_class* param_0, int param_1) {
	nofralloc
#include "asm/f_op/f_op_draw_tag/fopDwTg_ToDrawQ__FP16create_tag_classi.s"
}
#pragma pop


/* 800204D4-800204F4 0020+00 s=0 e=8 z=3  None .text      fopDwTg_DrawQTo__FP16create_tag_class                        */
//	800204E0: 8026688C (cTg_SingleCutFromTree__FP16create_tag_class)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  create_tag_class* False
// 	 create_tag_class False
asm void fopDwTg_DrawQTo(create_tag_class* param_0) {
	nofralloc
#include "asm/f_op/f_op_draw_tag/fopDwTg_DrawQTo__FP16create_tag_class.s"
}
#pragma pop


/* 800204F4-80020518 0024+00 s=0 e=4 z=0  None .text      fopDwTg_Init__FP16create_tag_classPv                         */
//	80020500: 80266A34 (cTg_Create__FP16create_tag_classPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  create_tag_class* False
// 	 create_tag_class False
//  void* False
// 	 void False
asm void fopDwTg_Init(create_tag_class* param_0, void* param_1) {
	nofralloc
#include "asm/f_op/f_op_draw_tag/fopDwTg_Init__FP16create_tag_classPv.s"
}
#pragma pop


/* ############################################################################################## */
/* 803F1E10-803F4CF0 2EE0+00 s=1 e=0 z=0  None .bss       lists$2216                                                   */
static u8 lists[12000];

/* 80020518-80020548 0030+00 s=0 e=1 z=0  None .text      fopDwTg_CreateQueue__Fv                                      */
//	80020524: 804505D0 (g_fopDwTg_Queue)
//	80020528: 803F1E10 (lists)
//	8002052C: 803F1E10 (lists)
//	80020534: 802664E8 (cTr_Create__FP21node_lists_tree_classP15node_list_classi)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void fopDwTg_CreateQueue() {
	nofralloc
#include "asm/f_op/f_op_draw_tag/fopDwTg_CreateQueue__Fv.s"
}
#pragma pop


