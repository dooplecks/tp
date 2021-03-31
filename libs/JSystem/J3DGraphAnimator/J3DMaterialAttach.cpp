// 
// Generated By: dol2asm
// Translation Unit: J3DMaterialAttach
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "JSystem/J3DGraphAnimator/J3DMaterialAttach.h"

// 
// Types:
// 

struct J3DTexNoAnm {
};

struct J3DTexMtxInfo {
	/* 80325718 */ // False False
//  J3DTexMtxInfo const& False
// 	 J3DTexMtxInfo const False
// 		 J3DTexMtxInfo False
void operator=(J3DTexMtxInfo const&);
};

struct J3DTexMtxAnm {
};

struct J3DTevKColorAnm {
};

struct J3DTevColorAnm {
};

struct J3DAnmTextureSRTKey {
};

struct J3DAnmColor {
};

struct J3DAnmTevRegKey {
};

struct J3DAnmTexPattern {
};

struct J3DMaterialTable {
	/* 8032F5A8 */ // False False
void clear();
	/* 8032F5D0 */ // False False
J3DMaterialTable();
	/* 8032F604 */ // False False
~J3DMaterialTable();
	/* 8032F64C */ // False False
//  J3DAnmColor* False
// 	 J3DAnmColor False
void removeMatColorAnimator(J3DAnmColor*);
	/* 8032F6F8 */ // False False
//  J3DAnmTexPattern* False
// 	 J3DAnmTexPattern False
void removeTexNoAnimator(J3DAnmTexPattern*);
	/* 8032F7B4 */ // False False
//  J3DAnmTextureSRTKey* False
// 	 J3DAnmTextureSRTKey False
void removeTexMtxAnimator(J3DAnmTextureSRTKey*);
	/* 8032F880 */ // False False
//  J3DAnmTevRegKey* False
// 	 J3DAnmTevRegKey False
void removeTevRegAnimator(J3DAnmTevRegKey*);
	/* 8032F9C0 */ // True False
//  J3DAnmTextureSRTKey* False
// 	 J3DAnmTextureSRTKey False
void createTexMtxForAnimator(J3DAnmTextureSRTKey*);
	/* 8032FAF4 */ // False False
//  J3DAnmColor* False
// 	 J3DAnmColor False
void entryMatColorAnimator(J3DAnmColor*);
	/* 8032FBC8 */ // False False
//  J3DAnmTexPattern* False
// 	 J3DAnmTexPattern False
void entryTexNoAnimator(J3DAnmTexPattern*);
	/* 8032FCC4 */ // False False
//  J3DAnmTextureSRTKey* False
// 	 J3DAnmTextureSRTKey False
void entryTexMtxAnimator(J3DAnmTextureSRTKey*);
	/* 8032FE70 */ // False False
//  J3DAnmTevRegKey* False
// 	 J3DAnmTevRegKey False
void entryTevRegAnimator(J3DAnmTevRegKey*);
};

struct J3DMatColorAnm {
};

struct J3DMaterialAnm {
	/* 8032C5A4 */ // False False
//  int False
//  J3DMatColorAnm* False
// 	 J3DMatColorAnm False
void setMatColorAnm(int, J3DMatColorAnm*);
	/* 8032C5E4 */ // False False
//  int False
//  J3DTexMtxAnm* False
// 	 J3DTexMtxAnm False
void setTexMtxAnm(int, J3DTexMtxAnm*);
	/* 8032C624 */ // False False
//  int False
//  J3DTexNoAnm* False
// 	 J3DTexNoAnm False
void setTexNoAnm(int, J3DTexNoAnm*);
	/* 8032C664 */ // False False
//  int False
//  J3DTevColorAnm* False
// 	 J3DTevColorAnm False
void setTevColorAnm(int, J3DTevColorAnm*);
	/* 8032C6A4 */ // False False
//  int False
//  J3DTevKColorAnm* False
// 	 J3DTevKColorAnm False
void setTevKColorAnm(int, J3DTevKColorAnm*);
};

// 
// Forward References:
// 


// False False
extern "C" void clear__16J3DMaterialTableFv();
// False False
extern "C" void __ct__16J3DMaterialTableFv();
// False False
extern "C" void __dt__16J3DMaterialTableFv();
// False False
//  J3DAnmColor* False
// 	 J3DAnmColor False
extern "C" void removeMatColorAnimator__16J3DMaterialTableFP11J3DAnmColor();
// False False
//  J3DAnmTexPattern* False
// 	 J3DAnmTexPattern False
extern "C" void removeTexNoAnimator__16J3DMaterialTableFP16J3DAnmTexPattern();
// False False
//  J3DAnmTextureSRTKey* False
// 	 J3DAnmTextureSRTKey False
extern "C" void removeTexMtxAnimator__16J3DMaterialTableFP19J3DAnmTextureSRTKey();
// False False
//  J3DAnmTevRegKey* False
// 	 J3DAnmTevRegKey False
extern "C" void removeTevRegAnimator__16J3DMaterialTableFP15J3DAnmTevRegKey();
// True False
//  J3DAnmTextureSRTKey* False
// 	 J3DAnmTextureSRTKey False
extern "C" void createTexMtxForAnimator__16J3DMaterialTableFP19J3DAnmTextureSRTKey();
// False False
//  J3DAnmColor* False
// 	 J3DAnmColor False
extern "C" void entryMatColorAnimator__16J3DMaterialTableFP11J3DAnmColor();
// False False
//  J3DAnmTexPattern* False
// 	 J3DAnmTexPattern False
extern "C" void entryTexNoAnimator__16J3DMaterialTableFP16J3DAnmTexPattern();
// False False
//  J3DAnmTextureSRTKey* False
// 	 J3DAnmTextureSRTKey False
extern "C" void entryTexMtxAnimator__16J3DMaterialTableFP19J3DAnmTextureSRTKey();
// False False
//  J3DAnmTevRegKey* False
// 	 J3DAnmTevRegKey False
extern "C" void entryTevRegAnimator__16J3DMaterialTableFP15J3DAnmTevRegKey();
extern "C" extern void* __vt__16J3DMaterialTable[3 + 1 /* padding */];

// 
// External References:
// 

// False False
//  void* False
// 	 void False
//  u32 False
void* operator new(u32);
// False False
//  void False
//  void* False
// 	 void False
void operator delete(void*);

// False False
//  void* False
// 	 void False
//  u32 False
extern "C" void* __nw__FUl();
// False False
//  void False
//  void* False
// 	 void False
extern "C" void __dl__FPv();
// False False
//  J3DTexMtxInfo const& False
// 	 J3DTexMtxInfo const False
// 		 J3DTexMtxInfo False
extern "C" void __as__13J3DTexMtxInfoFRC13J3DTexMtxInfo();
// False False
//  int False
//  J3DMatColorAnm* False
// 	 J3DMatColorAnm False
extern "C" void setMatColorAnm__14J3DMaterialAnmFiP14J3DMatColorAnm();
// False False
//  int False
//  J3DTexMtxAnm* False
// 	 J3DTexMtxAnm False
extern "C" void setTexMtxAnm__14J3DMaterialAnmFiP12J3DTexMtxAnm();
// False False
//  int False
//  J3DTexNoAnm* False
// 	 J3DTexNoAnm False
extern "C" void setTexNoAnm__14J3DMaterialAnmFiP11J3DTexNoAnm();
// False False
//  int False
//  J3DTevColorAnm* False
// 	 J3DTevColorAnm False
extern "C" void setTevColorAnm__14J3DMaterialAnmFiP14J3DTevColorAnm();
// False False
//  int False
//  J3DTevKColorAnm* False
// 	 J3DTevKColorAnm False
extern "C" void setTevKColorAnm__14J3DMaterialAnmFiP15J3DTevKColorAnm();
// False False
extern "C" void _savegpr_22();
// False False
extern "C" void _savegpr_24();
// False False
extern "C" void _savegpr_26();
// False False
extern "C" void _savegpr_27();
// False False
extern "C" void _restgpr_22();
// False False
extern "C" void _restgpr_24();
// False False
extern "C" void _restgpr_26();
// False False
extern "C" void _restgpr_27();
extern "C" extern u8 const j3dDefaultTexMtxInfo[100];
extern "C" extern void* __vt__11J3DTexNoAnm[3];

// 
// Declarations:
// 

/* 8032F5A8-8032F5D0 0028+00 s=0 e=1 z=0  None .text      clear__16J3DMaterialTableFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void J3DMaterialTable::clear() {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DMaterialAttach/clear__16J3DMaterialTableFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 803CEE80-803CEE90 000C+04 s=2 e=0 z=0  None .data      __vt__16J3DMaterialTable                                     */
SECTION_DATA void* __vt__16J3DMaterialTable[3 + 1 /* padding */] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__16J3DMaterialTableFv,
	/* padding */
	NULL,
};

/* 8032F5D0-8032F604 0034+00 s=0 e=2 z=0  None .text      __ct__16J3DMaterialTableFv                                   */
//	8032F5D0: 803CEE80 (__vt__16J3DMaterialTable)
//	8032F5D4: 803CEE80 (__vt__16J3DMaterialTable)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm J3DMaterialTable::J3DMaterialTable() {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DMaterialAttach/__ct__16J3DMaterialTableFv.s"
}
#pragma pop


/* 8032F604-8032F64C 0048+00 s=1 e=1 z=0  None .text      __dt__16J3DMaterialTableFv                                   */
//	8032F61C: 803CEE80 (__vt__16J3DMaterialTable)
//	8032F620: 803CEE80 (__vt__16J3DMaterialTable)
//	8032F630: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm J3DMaterialTable::~J3DMaterialTable() {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DMaterialAttach/__dt__16J3DMaterialTableFv.s"
}
#pragma pop


/* 8032F64C-8032F6F8 00AC+00 s=0 e=1 z=5  None .text      removeMatColorAnimator__16J3DMaterialTableFP11J3DAnmColor    */
//	8032F65C: 803621D4 (_savegpr_27)
//	8032F6C8: 8032C5A4 (setMatColorAnm__14J3DMaterialAnmFiP14J3DMatColorAnm)
//	8032F6E4: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  J3DAnmColor* False
// 	 J3DAnmColor False
asm void J3DMaterialTable::removeMatColorAnimator(J3DAnmColor* param_0) {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DMaterialAttach/removeMatColorAnimator__16J3DMaterialTableFP11J3DAnmColor.s"
}
#pragma pop


/* 8032F6F8-8032F7B4 00BC+00 s=0 e=5 z=10  None .text      removeTexNoAnimator__16J3DMaterialTableFP16J3DAnmTexPattern  */
//	8032F708: 803621D0 (_savegpr_26)
//	8032F784: 8032C624 (setTexNoAnm__14J3DMaterialAnmFiP11J3DTexNoAnm)
//	8032F7A0: 8036221C (_restgpr_26)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  J3DAnmTexPattern* False
// 	 J3DAnmTexPattern False
asm void J3DMaterialTable::removeTexNoAnimator(J3DAnmTexPattern* param_0) {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DMaterialAttach/removeTexNoAnimator__16J3DMaterialTableFP16J3DAnmTexPattern.s"
}
#pragma pop


/* 8032F7B4-8032F880 00CC+00 s=0 e=4 z=26  None .text      removeTexMtxAnimator__16J3DMaterialTableFP19J3DAnmTextureSRTKey */
//	8032F7C4: 803621D4 (_savegpr_27)
//	8032F850: 8032C5E4 (setTexMtxAnm__14J3DMaterialAnmFiP12J3DTexMtxAnm)
//	8032F86C: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  J3DAnmTextureSRTKey* False
// 	 J3DAnmTextureSRTKey False
asm void J3DMaterialTable::removeTexMtxAnimator(J3DAnmTextureSRTKey* param_0) {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DMaterialAttach/removeTexMtxAnimator__16J3DMaterialTableFP19J3DAnmTextureSRTKey.s"
}
#pragma pop


/* 8032F880-8032F9C0 0140+00 s=0 e=7 z=24  None .text      removeTevRegAnimator__16J3DMaterialTableFP15J3DAnmTevRegKey  */
//	8032F890: 803621D0 (_savegpr_26)
//	8032F910: 8032C664 (setTevColorAnm__14J3DMaterialAnmFiP14J3DTevColorAnm)
//	8032F990: 8032C6A4 (setTevKColorAnm__14J3DMaterialAnmFiP15J3DTevKColorAnm)
//	8032F9AC: 8036221C (_restgpr_26)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  J3DAnmTevRegKey* False
// 	 J3DAnmTevRegKey False
asm void J3DMaterialTable::removeTevRegAnimator(J3DAnmTevRegKey* param_0) {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DMaterialAttach/removeTevRegAnimator__16J3DMaterialTableFP15J3DAnmTevRegKey.s"
}
#pragma pop


/* 8032F9C0-8032FAF4 0134+00 s=1 e=0 z=0  None .text      createTexMtxForAnimator__16J3DMaterialTableFP19J3DAnmTextureSRTKey */
//	8032F9D0: 803621C8 (_savegpr_24)
//	8032FA90: 802CEC4C (__nw__FUl)
//	8032FA9C: 803A1F1C (j3dDefaultTexMtxInfo)
//	8032FAA0: 803A1F1C (j3dDefaultTexMtxInfo)
//	8032FAA4: 80325718 (__as__13J3DTexMtxInfoFRC13J3DTexMtxInfo)
//	8032FAE0: 80362214 (_restgpr_24)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  J3DAnmTextureSRTKey* False
// 	 J3DAnmTextureSRTKey False
asm void J3DMaterialTable::createTexMtxForAnimator(J3DAnmTextureSRTKey* param_0) {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DMaterialAttach/createTexMtxForAnimator__16J3DMaterialTableFP19J3DAnmTextureSRTKey.s"
}
#pragma pop


/* 8032FAF4-8032FBC8 00D4+00 s=0 e=1 z=0  None .text      entryMatColorAnimator__16J3DMaterialTableFP11J3DAnmColor     */
//	8032FB04: 803621D4 (_savegpr_27)
//	8032FB98: 8032C5A4 (setMatColorAnm__14J3DMaterialAnmFiP14J3DMatColorAnm)
//	8032FBB4: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  J3DAnmColor* False
// 	 J3DAnmColor False
asm void J3DMaterialTable::entryMatColorAnimator(J3DAnmColor* param_0) {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DMaterialAttach/entryMatColorAnimator__16J3DMaterialTableFP11J3DAnmColor.s"
}
#pragma pop


/* 8032FBC8-8032FCC4 00FC+00 s=0 e=7 z=1  None .text      entryTexNoAnimator__16J3DMaterialTableFP16J3DAnmTexPattern   */
//	8032FBD8: 803621D4 (_savegpr_27)
//	8032FC68: 803A7C84 (__vt__11J3DTexNoAnm)
//	8032FC6C: 803A7C84 (__vt__11J3DTexNoAnm)
//	8032FC88: 8032C624 (setTexNoAnm__14J3DMaterialAnmFiP11J3DTexNoAnm)
//	8032FC8C: 803A7C84 (__vt__11J3DTexNoAnm)
//	8032FC90: 803A7C84 (__vt__11J3DTexNoAnm)
//	8032FCB0: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  J3DAnmTexPattern* False
// 	 J3DAnmTexPattern False
asm void J3DMaterialTable::entryTexNoAnimator(J3DAnmTexPattern* param_0) {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DMaterialAttach/entryTexNoAnimator__16J3DMaterialTableFP16J3DAnmTexPattern.s"
}
#pragma pop


/* 8032FCC4-8032FE70 01AC+00 s=0 e=14 z=6  None .text      entryTexMtxAnimator__16J3DMaterialTableFP19J3DAnmTextureSRTKey */
//	8032FCD4: 803621C0 (_savegpr_22)
//	8032FCF0: 8032F9C0 (createTexMtxForAnimator__16J3DMaterialTableFP19J3DAnmTextureSRTKey)
//	8032FE40: 8032C5E4 (setTexMtxAnm__14J3DMaterialAnmFiP12J3DTexMtxAnm)
//	8032FE5C: 8036220C (_restgpr_22)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  J3DAnmTextureSRTKey* False
// 	 J3DAnmTextureSRTKey False
asm void J3DMaterialTable::entryTexMtxAnimator(J3DAnmTextureSRTKey* param_0) {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DMaterialAttach/entryTexMtxAnimator__16J3DMaterialTableFP19J3DAnmTextureSRTKey.s"
}
#pragma pop


/* 8032FE70-8032FFEC 017C+00 s=0 e=10 z=4  None .text      entryTevRegAnimator__16J3DMaterialTableFP15J3DAnmTevRegKey   */
//	8032FE80: 803621D0 (_savegpr_26)
//	8032FF2C: 8032C664 (setTevColorAnm__14J3DMaterialAnmFiP14J3DTevColorAnm)
//	8032FFBC: 8032C6A4 (setTevKColorAnm__14J3DMaterialAnmFiP15J3DTevKColorAnm)
//	8032FFD8: 8036221C (_restgpr_26)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  J3DAnmTevRegKey* False
// 	 J3DAnmTevRegKey False
asm void J3DMaterialTable::entryTevRegAnimator(J3DAnmTevRegKey* param_0) {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DMaterialAttach/entryTevRegAnimator__16J3DMaterialTableFP15J3DAnmTevRegKey.s"
}
#pragma pop


