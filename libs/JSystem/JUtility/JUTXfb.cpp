// 
// Generated By: dol2asm
// Translation Unit: JUTXfb
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "JSystem/JUtility/JUTXfb.h"

// 
// Types:
// 

struct _GXRenderModeObj {
};

struct JKRHeap {
};

struct JUTXfb {
	struct EXfbNumber {
	};

	/* 802E5214 */ // False False
void clearIndex();
	/* 802E5228 */ // True False
//  int False
void common_init(int);
	/* 802E5260 */ // True False
//  _GXRenderModeObj const* False
// 	 _GXRenderModeObj const False
// 		 _GXRenderModeObj False
//  JKRHeap* False
// 	 JKRHeap False
//  JUTXfb::EXfbNumber False
JUTXfb(_GXRenderModeObj const*, JKRHeap*, JUTXfb::EXfbNumber);
	/* 802E5308 */ // True False
~JUTXfb();
	/* 802E5378 */ // True False
//  int False
void delXfb(int);
	/* 802E53B8 */ // False False
//  JKRHeap* False
// 	 JKRHeap False
//  JUTXfb::EXfbNumber False
void createManager(JKRHeap*, JUTXfb::EXfbNumber);
	/* 802E5424 */ // False False
void destroyManager();
	/* 802E5454 */ // True False
//  u16 False
//  u16 False
//  JKRHeap* False
// 	 JKRHeap False
//  JUTXfb::EXfbNumber False
void initiate(u16, u16, JKRHeap*, JUTXfb::EXfbNumber);
};

// 
// Forward References:
// 


// False False
extern "C" void clearIndex__6JUTXfbFv();
// True False
//  int False
extern "C" void common_init__6JUTXfbFi();
// True False
//  _GXRenderModeObj const* False
// 	 _GXRenderModeObj const False
// 		 _GXRenderModeObj False
//  JKRHeap* False
// 	 JKRHeap False
//  JUTXfb::EXfbNumber False
extern "C" void __ct__6JUTXfbFPC16_GXRenderModeObjP7JKRHeapQ26JUTXfb10EXfbNumber();
// True False
extern "C" void __dt__6JUTXfbFv();
// True False
//  int False
extern "C" void delXfb__6JUTXfbFi();
// False False
//  JKRHeap* False
// 	 JKRHeap False
//  JUTXfb::EXfbNumber False
extern "C" void createManager__6JUTXfbFP7JKRHeapQ26JUTXfb10EXfbNumber();
// False False
extern "C" void destroyManager__6JUTXfbFv();
// True False
//  u16 False
//  u16 False
//  JKRHeap* False
// 	 JKRHeap False
//  JUTXfb::EXfbNumber False
extern "C" void initiate__6JUTXfbFUsUsP7JKRHeapQ26JUTXfb10EXfbNumber();
extern "C" extern u8 sManager__6JUTXfb[4 + 4 /* padding */];

// 
// External References:
// 

// False False
//  void* False
// 	 void False
//  u32 False
void* operator new(u32);
// False False
//  void* False
// 	 void False
//  u32 False
//  JKRHeap* False
// 	 JKRHeap False
//  int False
void* operator new[](u32, JKRHeap*, int);
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
//  void* False
// 	 void False
//  u32 False
//  JKRHeap* False
// 	 JKRHeap False
//  int False
extern "C" void* __nwa__FUlP7JKRHeapi();
// False False
//  void False
//  void* False
// 	 void False
extern "C" void __dl__FPv();
// False False
extern "C" void GXGetNumXfbLines();
// False False
extern "C" void GXGetYScaleFactor();
// False False
extern "C" void _savegpr_27();
// False False
extern "C" void _savegpr_28();
// False False
extern "C" void _savegpr_29();
// False False
extern "C" void _restgpr_27();
// False False
extern "C" void _restgpr_28();
// False False
extern "C" void _restgpr_29();
extern "C" extern u8 sSystemHeap__7JKRHeap[4];
extern "C" extern u8 sManager__8JUTVideo[4];

// 
// Declarations:
// 

/* 802E5214-802E5228 0014+00 s=1 e=1 z=0  None .text      clearIndex__6JUTXfbFv                                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void JUTXfb::clearIndex() {
	nofralloc
#include "asm/JSystem/JUtility/JUTXfb/clearIndex__6JUTXfbFv.s"
}
#pragma pop


/* 802E5228-802E5260 0038+00 s=1 e=0 z=0  None .text      common_init__6JUTXfbFi                                       */
//	802E5240: 802E5214 (clearIndex__6JUTXfbFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  int False
asm void JUTXfb::common_init(int param_0) {
	nofralloc
#include "asm/JSystem/JUtility/JUTXfb/common_init__6JUTXfbFi.s"
}
#pragma pop


/* 802E5260-802E5308 00A8+00 s=1 e=0 z=0  None .text      __ct__6JUTXfbFPC16_GXRenderModeObjP7JKRHeapQ26JUTXfb10EXfbNumber */
//	802E5270: 803621D4 (_savegpr_27)
//	802E5288: 802E5228 (common_init__6JUTXfbFi)
//	802E52A8: 802E5454 (initiate__6JUTXfbFUsUsP7JKRHeapQ26JUTXfb10EXfbNumber)
//	802E52B0: 80451538 (sManager__8JUTVideo)
//	802E52C8: 8035CD6C (GXGetYScaleFactor)
//	802E52D0: 8035CCDC (GXGetNumXfbLines)
//	802E52E8: 802E5454 (initiate__6JUTXfbFUsUsP7JKRHeapQ26JUTXfb10EXfbNumber)
//	802E52F4: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  _GXRenderModeObj const* False
// 	 _GXRenderModeObj const False
// 		 _GXRenderModeObj False
//  JKRHeap* False
// 	 JKRHeap False
//  JUTXfb::EXfbNumber False
asm JUTXfb::JUTXfb(_GXRenderModeObj const* param_0, JKRHeap* param_1, JUTXfb::EXfbNumber param_2) {
	nofralloc
#include "asm/JSystem/JUtility/JUTXfb/__ct__6JUTXfbFPC16_GXRenderModeObjP7JKRHeapQ26JUTXfb10EXfbNumber.s"
}
#pragma pop


/* ############################################################################################## */
/* 80451550-80451558 0004+04 s=3 e=13 z=0  None .sbss      sManager__6JUTXfb                                            */
u8 sManager__6JUTXfb[4 + 4 /* padding */];

/* 802E5308-802E5378 0070+00 s=1 e=0 z=0  None .text      __dt__6JUTXfbFv                                              */
//	802E5318: 803621DC (_savegpr_29)
//	802E5334: 802E5378 (delXfb__6JUTXfbFi)
//	802E5348: 80451550 (sManager__6JUTXfb)
//	802E5358: 802CED3C (__dl__FPv)
//	802E5364: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm JUTXfb::~JUTXfb() {
	nofralloc
#include "asm/JSystem/JUtility/JUTXfb/__dt__6JUTXfbFv.s"
}
#pragma pop


/* 802E5378-802E53B8 0040+00 s=1 e=0 z=0  None .text      delXfb__6JUTXfbFi                                            */
//	802E53A4: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  int False
asm void JUTXfb::delXfb(int param_0) {
	nofralloc
#include "asm/JSystem/JUtility/JUTXfb/delXfb__6JUTXfbFi.s"
}
#pragma pop


/* 802E53B8-802E5424 006C+00 s=0 e=1 z=0  None .text      createManager__6JUTXfbFP7JKRHeapQ26JUTXfb10EXfbNumber        */
//	802E53D4: 80451550 (sManager__6JUTXfb)
//	802E53E4: 802CEC4C (__nw__FUl)
//	802E53FC: 802E5260 (__ct__6JUTXfbFPC16_GXRenderModeObjP7JKRHeapQ26JUTXfb10EXfbNumber)
//	802E5404: 80451550 (sManager__6JUTXfb)
//	802E5408: 80451550 (sManager__6JUTXfb)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  JKRHeap* False
// 	 JKRHeap False
//  JUTXfb::EXfbNumber False
asm void JUTXfb::createManager(JKRHeap* param_0, JUTXfb::EXfbNumber param_1) {
	nofralloc
#include "asm/JSystem/JUtility/JUTXfb/createManager__6JUTXfbFP7JKRHeapQ26JUTXfb10EXfbNumber.s"
}
#pragma pop


/* 802E5424-802E5454 0030+00 s=0 e=1 z=0  None .text      destroyManager__6JUTXfbFv                                    */
//	802E5430: 80451550 (sManager__6JUTXfb)
//	802E5438: 802E5308 (__dt__6JUTXfbFv)
//	802E5440: 80451550 (sManager__6JUTXfb)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void JUTXfb::destroyManager() {
	nofralloc
#include "asm/JSystem/JUtility/JUTXfb/destroyManager__6JUTXfbFv.s"
}
#pragma pop


/* 802E5454-802E5530 00DC+00 s=1 e=0 z=0  None .text      initiate__6JUTXfbFUsUsP7JKRHeapQ26JUTXfb10EXfbNumber         */
//	802E5464: 803621D8 (_savegpr_28)
//	802E5478: 80451370 (sSystemHeap__7JKRHeap)
//	802E54A0: 802CED10 (__nwa__FUlP7JKRHeapi)
//	802E54C4: 802CED10 (__nwa__FUlP7JKRHeapi)
//	802E54F8: 802CED10 (__nwa__FUlP7JKRHeapi)
//	802E551C: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  u16 False
//  u16 False
//  JKRHeap* False
// 	 JKRHeap False
//  JUTXfb::EXfbNumber False
asm void JUTXfb::initiate(u16 param_0, u16 param_1, JKRHeap* param_2, JUTXfb::EXfbNumber param_3) {
	nofralloc
#include "asm/JSystem/JUtility/JUTXfb/initiate__6JUTXfbFUsUsP7JKRHeapQ26JUTXfb10EXfbNumber.s"
}
#pragma pop


