// 
// Generated By: dol2asm
// Translation Unit: c_bg_s_chk
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "SSystem/SComponent/c_bg_s_chk.h"

// 
// Types:
// 

struct cBgS_Chk {
	/* 80267B4C */ // False False
cBgS_Chk();
	/* 80267B70 */ // False False
~cBgS_Chk();
	/* 80267BB8 */ // False False
//  cBgS_Chk& False
// 	 cBgS_Chk False
void SetExtChk(cBgS_Chk&);
	/* 80267BDC */ // False False
//  unsigned int False
void ChkSameActorPid(unsigned int) const;
};

// 
// Forward References:
// 


// False False
extern "C" void __ct__8cBgS_ChkFv();
// False False
extern "C" void __dt__8cBgS_ChkFv();
// False False
//  cBgS_Chk& False
// 	 cBgS_Chk False
extern "C" void SetExtChk__8cBgS_ChkFR8cBgS_Chk();
// False False
//  unsigned int False
extern "C" void ChkSameActorPid__8cBgS_ChkCFUi();
extern "C" extern void* __vt__8cBgS_Chk[3 + 1 /* padding */];

// 
// External References:
// 

// False False
//  void False
//  void* False
// 	 void False
void operator delete(void*);

// False False
//  void False
//  void* False
// 	 void False
extern "C" void __dl__FPv();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 803C3F80-803C3F90 000C+04 s=2 e=0 z=0  None .data      __vt__8cBgS_Chk                                              */
SECTION_DATA void* __vt__8cBgS_Chk[3 + 1 /* padding */] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__8cBgS_ChkFv,
	/* padding */
	NULL,
};

/* 80267B4C-80267B70 0024+00 s=0 e=7 z=0  None .text      __ct__8cBgS_ChkFv                                            */
//	80267B4C: 803C3F80 (__vt__8cBgS_Chk)
//	80267B50: 803C3F80 (__vt__8cBgS_Chk)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm cBgS_Chk::cBgS_Chk() {
	nofralloc
#include "asm/SSystem/SComponent/c_bg_s_chk/__ct__8cBgS_ChkFv.s"
}
#pragma pop


/* 80267B70-80267BB8 0048+00 s=1 e=7 z=0  None .text      __dt__8cBgS_ChkFv                                            */
//	80267B88: 803C3F80 (__vt__8cBgS_Chk)
//	80267B8C: 803C3F80 (__vt__8cBgS_Chk)
//	80267B9C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm cBgS_Chk::~cBgS_Chk() {
	nofralloc
#include "asm/SSystem/SComponent/c_bg_s_chk/__dt__8cBgS_ChkFv.s"
}
#pragma pop


/* 80267BB8-80267BDC 0024+00 s=0 e=4 z=0  None .text      SetExtChk__8cBgS_ChkFR8cBgS_Chk                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  cBgS_Chk& False
// 	 cBgS_Chk False
asm void cBgS_Chk::SetExtChk(cBgS_Chk& param_0) {
	nofralloc
#include "asm/SSystem/SComponent/c_bg_s_chk/SetExtChk__8cBgS_ChkFR8cBgS_Chk.s"
}
#pragma pop


/* 80267BDC-80267C1C 0040+00 s=0 e=7 z=0  None .text      ChkSameActorPid__8cBgS_ChkCFUi                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  unsigned int False
asm void cBgS_Chk::ChkSameActorPid(unsigned int param_0) const {
	nofralloc
#include "asm/SSystem/SComponent/c_bg_s_chk/ChkSameActorPid__8cBgS_ChkCFUi.s"
}
#pragma pop


