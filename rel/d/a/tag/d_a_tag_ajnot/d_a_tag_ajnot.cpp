// 
// Generated By: dol2asm
// Translation Unit: d_a_tag_ajnot
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/tag/d_a_tag_ajnot/d_a_tag_ajnot.h"

// 
// Types:
// 

struct fopAc_ac_c {
	/* 80018B64 */ // False False
fopAc_ac_c();
	/* 80018C8C */ // False False
~fopAc_ac_c();
};

struct daTagAJnot_c {
	/* 805A2658 */ // True False
void create();
	/* 805A26C8 */ // True False
~daTagAJnot_c();
	/* 805A2744 */ // True False
void execute();
};

// 
// Forward References:
// 

// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
static void daTagAJnot_Create(fopAc_ac_c*);
// True False
//  daTagAJnot_c* False
// 	 daTagAJnot_c False
static void daTagAJnot_Delete(daTagAJnot_c*);
// True False
//  daTagAJnot_c* False
// 	 daTagAJnot_c False
static void daTagAJnot_Execute(daTagAJnot_c*);
// True False
//  bool False
//  daTagAJnot_c* False
// 	 daTagAJnot_c False
static bool daTagAJnot_Draw(daTagAJnot_c*);

// True False
extern "C" void create__12daTagAJnot_cFv();
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" static void daTagAJnot_Create__FP10fopAc_ac_c();
// True False
extern "C" void __dt__12daTagAJnot_cFv();
// True False
//  daTagAJnot_c* False
// 	 daTagAJnot_c False
extern "C" static void daTagAJnot_Delete__FP12daTagAJnot_c();
// True False
extern "C" void execute__12daTagAJnot_cFv();
// True False
//  daTagAJnot_c* False
// 	 daTagAJnot_c False
extern "C" static void daTagAJnot_Execute__FP12daTagAJnot_c();
// True False
//  bool False
//  daTagAJnot_c* False
// 	 daTagAJnot_c False
extern "C" static bool daTagAJnot_Draw__FP12daTagAJnot_c();
extern "C" extern u32 const lit_3714;
extern "C" extern u32 const lit_3715;
extern "C" extern void* g_profile_Tag_AJnot[12];

// 
// External References:
// 

// False False
//  void False
//  void* False
// 	 void False
void operator delete(void*);

// False False
extern "C" void __ct__10fopAc_ac_cFv();
// False False
extern "C" void __dt__10fopAc_ac_cFv();
// False False
//  void False
//  void* False
// 	 void False
extern "C" void __dl__FPv();
// False False
extern "C" void PSVECSquareDistance();
// False False
extern "C" void _savegpr_29();
// False False
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

// 
// Declarations:
// 

/* 805A2658-805A26A8 0050+00 s=1 e=0 z=0  None .text      create__12daTagAJnot_cFv                                     */
//	805A2680: 80018B64 (__ct__10fopAc_ac_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daTagAJnot_c::create() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_ajnot/d_a_tag_ajnot/create__12daTagAJnot_cFv.s"
}
#pragma pop


/* 805A26A8-805A26C8 0020+00 s=1 e=0 z=0  None .text      daTagAJnot_Create__FP10fopAc_ac_c                            */
//	805A26B4: 805A2658 (create__12daTagAJnot_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
asm static void daTagAJnot_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_ajnot/d_a_tag_ajnot/daTagAJnot_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 805A26C8-805A271C 0054+00 s=1 e=0 z=0  None .text      __dt__12daTagAJnot_cFv                                       */
//	805A26EC: 80018C8C (__dt__10fopAc_ac_cFv)
//	805A26FC: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm daTagAJnot_c::~daTagAJnot_c() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_ajnot/d_a_tag_ajnot/__dt__12daTagAJnot_cFv.s"
}
#pragma pop


/* 805A271C-805A2744 0028+00 s=1 e=0 z=0  None .text      daTagAJnot_Delete__FP12daTagAJnot_c                          */
//	805A272C: 805A26C8 (__dt__12daTagAJnot_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daTagAJnot_c* False
// 	 daTagAJnot_c False
asm static void daTagAJnot_Delete(daTagAJnot_c* param_0) {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_ajnot/d_a_tag_ajnot/daTagAJnot_Delete__FP12daTagAJnot_c.s"
}
#pragma pop


/* ############################################################################################## */
/* 805A2880-805A2884 0004+00 s=1 e=0 z=0  None .rodata    @3713                                                        */
SECTION_RODATA static u8 const lit_3713[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 805A2744-805A2850 010C+00 s=1 e=0 z=0  None .text      execute__12daTagAJnot_cFv                                    */
//	805A2754: 803621DC (_savegpr_29)
//	805A275C: 805A2880 (lit_3713)
//	805A2760: 805A2880 (lit_3713)
//	805A2764: 804061C0 (g_dComIfG_gameInfo)
//	805A2768: 804061C0 (g_dComIfG_gameInfo)
//	805A27D4: 8034739C (PSVECSquareDistance)
//	805A283C: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daTagAJnot_c::execute() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_ajnot/d_a_tag_ajnot/execute__12daTagAJnot_cFv.s"
}
#pragma pop


/* 805A2850-805A2870 0020+00 s=1 e=0 z=0  None .text      daTagAJnot_Execute__FP12daTagAJnot_c                         */
//	805A285C: 805A2744 (execute__12daTagAJnot_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daTagAJnot_c* False
// 	 daTagAJnot_c False
asm static void daTagAJnot_Execute(daTagAJnot_c* param_0) {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_ajnot/d_a_tag_ajnot/daTagAJnot_Execute__FP12daTagAJnot_c.s"
}
#pragma pop


/* 805A2870-805A2878 0008+00 s=1 e=0 z=0  None .text      daTagAJnot_Draw__FP12daTagAJnot_c                            */
// True False
//  bool False
//  daTagAJnot_c* False
// 	 daTagAJnot_c False
static bool daTagAJnot_Draw(daTagAJnot_c* param_0) {
	return true;
}


/* ############################################################################################## */
/* 805A2884-805A2888 0004+00 s=0 e=0 z=0  None .rodata    @3714                                                        */
SECTION_RODATA u32 const lit_3714 = 0x42C80000;

/* 805A2888-805A288C 0004+00 s=0 e=0 z=0  None .rodata    @3715                                                        */
SECTION_RODATA u32 const lit_3715 = 0x461C4000;

/* 805A288C-805A28AC 0020+00 s=1 e=0 z=0  None .data      l_daTagAJnot_Method                                          */
SECTION_DATA static void* l_daTagAJnot_Method[8] = {
	(void*)daTagAJnot_Create__FP10fopAc_ac_c,
	(void*)daTagAJnot_Delete__FP12daTagAJnot_c,
	(void*)daTagAJnot_Execute__FP12daTagAJnot_c,
	(void*)NULL,
	(void*)daTagAJnot_Draw__FP12daTagAJnot_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 805A28AC-805A28DC 0030+00 s=0 e=0 z=1  None .data      g_profile_Tag_AJnot                                          */
SECTION_DATA void* g_profile_Tag_AJnot[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0003FFFD,
	(void*)0x00EB0000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000568,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x01B40000,
	(void*)&l_daTagAJnot_Method,
	(void*)0x00044000,
	(void*)0x030E0000,
};

