// 
// Generated By: dol2asm
// Translation Unit: d/bg/d_bg_w_base
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "d/bg/d_bg_w_base.h"

// 
// Types:
// 

struct fopAc_ac_c {
};

struct cXyz {
};

struct dBgW_Base {
	/* 80074AB4 */ // False False
//  s16 False
void SetOldShapeAngleY(s16);
	/* 8007E5A8 */ // False False
dBgW_Base();
	/* 8007E640 */ // False False
~dBgW_Base();
	/* 8007E69C */ // False False
void ClrDBgWBase();
	/* 8007E6D0 */ // False False
//  bool False
bool ChkMemoryError();
	/* 8007E6D8 */ // False False
//  void False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
void CallRideCallBack(fopAc_ac_c*, fopAc_ac_c*);
	/* 8007E6DC */ // False False
//  void False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  cXyz& False
// 	 cXyz False
void CallArrowStickCallBack(fopAc_ac_c*, fopAc_ac_c*, cXyz&);
	/* 8007E6E0 */ // False False
//  s16 False
void CalcDiffShapeAngleY(s16);
};

struct cBgW_BgId {
	/* 8007E5F8 */ // True False
~cBgW_BgId();
};

// 
// Forward References:
// 


// False False
extern "C" void __ct__9dBgW_BaseFv();
// True False
extern "C" void __dt__9cBgW_BgIdFv();
// False False
extern "C" void __dt__9dBgW_BaseFv();
// False False
extern "C" void ClrDBgWBase__9dBgW_BaseFv();
// False False
//  bool False
extern "C" bool ChkMemoryError__9dBgW_BaseFv();
// False False
//  void False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" void CallRideCallBack__9dBgW_BaseFP10fopAc_ac_cP10fopAc_ac_c();
// False False
//  void False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  cXyz& False
// 	 cXyz False
extern "C" void CallArrowStickCallBack__9dBgW_BaseFP10fopAc_ac_cP10fopAc_ac_cR4cXyz();
// False False
//  s16 False
extern "C" void CalcDiffShapeAngleY__9dBgW_BaseFs();
extern "C" extern void* __vt__9dBgW_Base[60];
extern "C" extern void* __vt__9cBgW_BgId[3 + 1 /* padding */];

// 
// External References:
// 

// False False
//  void False
//  void* False
// 	 void False
void operator delete(void*);

// False False
//  s16 False
extern "C" void SetOldShapeAngleY__9dBgW_BaseFs();
// False False
//  void False
//  void* False
// 	 void False
extern "C" void __dl__FPv();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 803ABCC8-803ABDB8 00F0+00 s=2 e=0 z=0  None .data      __vt__9dBgW_Base                                             */
SECTION_DATA void* __vt__9dBgW_Base[60] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__9dBgW_BaseFv,
	(void*)ChkMemoryError__9dBgW_BaseFv,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)SetOldShapeAngleY__9dBgW_BaseFs,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)CallRideCallBack__9dBgW_BaseFP10fopAc_ac_cP10fopAc_ac_c,
	(void*)CallArrowStickCallBack__9dBgW_BaseFP10fopAc_ac_cP10fopAc_ac_cR4cXyz,
};

/* 803ABDB8-803ABDC8 000C+04 s=3 e=0 z=0  None .data      __vt__9cBgW_BgId                                             */
SECTION_DATA void* __vt__9cBgW_BgId[3 + 1 /* padding */] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__9cBgW_BgIdFv,
	/* padding */
	NULL,
};

/* 8007E5A8-8007E5F8 0050+00 s=0 e=2 z=0  None .text      __ct__9dBgW_BaseFv                                           */
//	8007E5BC: 803ABDB8 (__vt__9cBgW_BgId)
//	8007E5C0: 803ABDB8 (__vt__9cBgW_BgId)
//	8007E5D0: 803ABCC8 (__vt__9dBgW_Base)
//	8007E5D4: 803ABCC8 (__vt__9dBgW_Base)
//	8007E5DC: 8007E69C (ClrDBgWBase__9dBgW_BaseFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm dBgW_Base::dBgW_Base() {
	nofralloc
#include "asm/d/bg/d_bg_w_base/__ct__9dBgW_BaseFv.s"
}
#pragma pop


/* 8007E5F8-8007E640 0048+00 s=1 e=0 z=0  None .text      __dt__9cBgW_BgIdFv                                           */
//	8007E610: 803ABDB8 (__vt__9cBgW_BgId)
//	8007E614: 803ABDB8 (__vt__9cBgW_BgId)
//	8007E624: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm cBgW_BgId::~cBgW_BgId() {
	nofralloc
#include "asm/d/bg/d_bg_w_base/__dt__9cBgW_BgIdFv.s"
}
#pragma pop


/* 8007E640-8007E69C 005C+00 s=1 e=2 z=0  None .text      __dt__9dBgW_BaseFv                                           */
//	8007E658: 803ABCC8 (__vt__9dBgW_Base)
//	8007E65C: 803ABCC8 (__vt__9dBgW_Base)
//	8007E668: 803ABDB8 (__vt__9cBgW_BgId)
//	8007E66C: 803ABDB8 (__vt__9cBgW_BgId)
//	8007E680: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm dBgW_Base::~dBgW_Base() {
	nofralloc
#include "asm/d/bg/d_bg_w_base/__dt__9dBgW_BaseFv.s"
}
#pragma pop


/* 8007E69C-8007E6D0 0034+00 s=1 e=1 z=0  None .text      ClrDBgWBase__9dBgW_BaseFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dBgW_Base::ClrDBgWBase() {
	nofralloc
#include "asm/d/bg/d_bg_w_base/ClrDBgWBase__9dBgW_BaseFv.s"
}
#pragma pop


/* 8007E6D0-8007E6D8 0008+00 s=1 e=1 z=0  None .text      ChkMemoryError__9dBgW_BaseFv                                 */
// False False
//  bool False
bool dBgW_Base::ChkMemoryError() {
	return false;
}


/* 8007E6D8-8007E6DC 0004+00 s=1 e=2 z=0  None .text      CallRideCallBack__9dBgW_BaseFP10fopAc_ac_cP10fopAc_ac_c      */
// False False
//  void False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
void dBgW_Base::CallRideCallBack(fopAc_ac_c* param_0, fopAc_ac_c* param_1) {
	/* empty function */
}


/* 8007E6DC-8007E6E0 0004+00 s=1 e=2 z=0  None .text      CallArrowStickCallBack__9dBgW_BaseFP10fopAc_ac_cP10fopAc_ac_cR4cXyz */
// False False
//  void False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  cXyz& False
// 	 cXyz False
void dBgW_Base::CallArrowStickCallBack(fopAc_ac_c* param_0, fopAc_ac_c* param_1, cXyz& param_2) {
	/* empty function */
}


/* 8007E6E0-8007E6F4 0014+00 s=0 e=1 z=0  None .text      CalcDiffShapeAngleY__9dBgW_BaseFs                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  s16 False
asm void dBgW_Base::CalcDiffShapeAngleY(s16 param_0) {
	nofralloc
#include "asm/d/bg/d_bg_w_base/CalcDiffShapeAngleY__9dBgW_BaseFs.s"
}
#pragma pop


