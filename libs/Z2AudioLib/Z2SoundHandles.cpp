// 
// Generated By: dol2asm
// Translation Unit: Z2SoundHandles
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "Z2AudioLib/Z2SoundHandles.h"

// 
// Types:
// 

struct JAISoundID {
};

struct JGeometry {
	template <typename A1>
	struct TVec3 { };
	/* TVec3<f32> */
	struct TVec3__template0 {
	};

};

struct Z2SoundHandles {
	/* 802AB07C */ // False False
Z2SoundHandles();
	/* 802AB0B4 */ // False False
~Z2SoundHandles();
	/* 802AB118 */ // False False
//  u8 False
void initHandlesPool(u8);
	/* 802AB120 */ // False False
void deleteHandlesPool();
	/* 802AB254 */ // False False
//  JAISoundID False
void getHandleSoundID(JAISoundID);
	/* 802AB2A0 */ // False False
//  u32 False
void getHandleUserData(u32);
	/* 802AB2D8 */ // False False
void getFreeHandle();
	/* 802AB3D0 */ // False False
//  JAISoundID False
void getLowPrioSound(JAISoundID);
	/* 802AB4A0 */ // False False
//  u32 False
void stopAllSounds(u32);
	/* 802AB504 */ // False False
void isActive() const;
	/* 802AB538 */ // False True
//  JGeometry::TVec3<f32> const& False
// 	 JGeometry::TVec3<f32> const False
// 		 JGeometry::TVec3<f32> True
// 			 f32 False
void setPos(JGeometry::TVec3<f32> const&);
};

struct JSUPtrLink {
	/* 802DBDFC */ // False False
//  void* False
// 	 void False
JSUPtrLink(void*);
	/* 802DBE14 */ // False False
~JSUPtrLink();
};

struct JSUPtrList {
	/* 802DBEAC */ // False False
~JSUPtrList();
	/* 802DBF14 */ // False False
void initiate();
	/* 802DBF4C */ // False False
//  JSUPtrLink* False
// 	 JSUPtrLink False
void append(JSUPtrLink*);
	/* 802DC15C */ // False False
//  JSUPtrLink* False
// 	 JSUPtrLink False
void remove(JSUPtrLink*);
};

template <typename A0>
struct JASMemPool { };
/* JASMemPool<Z2SoundHandlePool> */
struct JASMemPool__template4 {
	/* 802AB200 */ // False True
~JASMemPool__template4();
};

struct JASGenericMemPool {
	/* 80290848 */ // False False
JASGenericMemPool();
	/* 80290860 */ // False False
~JASGenericMemPool();
	/* 80290948 */ // False False
//  u32 False
void alloc(u32);
	/* 80290994 */ // False False
//  void* False
// 	 void False
//  u32 False
void free(void*, u32);
};

struct JAISoundHandle {
	/* 802A2184 */ // False False
void releaseSound();
};

struct JAISound {
	/* 802A24DC */ // False False
//  u32 False
void stop(u32);
};

// 
// Forward References:
// 


// False False
extern "C" void __ct__14Z2SoundHandlesFv();
// False False
extern "C" void __dt__14Z2SoundHandlesFv();
// False False
//  u8 False
extern "C" void initHandlesPool__14Z2SoundHandlesFUc();
// False False
extern "C" void deleteHandlesPool__14Z2SoundHandlesFv();
// False True
extern "C" void func_802AB200();
// False False
//  JAISoundID False
extern "C" void getHandleSoundID__14Z2SoundHandlesF10JAISoundID();
// False False
//  u32 False
extern "C" void getHandleUserData__14Z2SoundHandlesFUl();
// False False
extern "C" void getFreeHandle__14Z2SoundHandlesFv();
// False False
//  JAISoundID False
extern "C" void getLowPrioSound__14Z2SoundHandlesF10JAISoundID();
// False False
//  u32 False
extern "C" void stopAllSounds__14Z2SoundHandlesFUl();
// False False
extern "C" void isActive__14Z2SoundHandlesCFv();
// False True
//  JGeometry::TVec3<f32> const& False
// 	 JGeometry::TVec3<f32> const False
// 		 JGeometry::TVec3<f32> True
// 			 f32 False
extern "C" void func_802AB538();
extern "C" extern u8 data_804341C4[16 + 4 /* padding */];

// 
// External References:
// 

// False False
//  void False
//  void* False
// 	 void False
void operator delete(void*);

// False False
extern "C" void __ct__17JASGenericMemPoolFv();
// False False
extern "C" void __dt__17JASGenericMemPoolFv();
// False False
//  u32 False
extern "C" void alloc__17JASGenericMemPoolFUl();
// False False
//  void* False
// 	 void False
//  u32 False
extern "C" void free__17JASGenericMemPoolFPvUl();
// False False
extern "C" void releaseSound__14JAISoundHandleFv();
// False False
//  u32 False
extern "C" void stop__8JAISoundFUl();
// False False
//  void False
//  void* False
// 	 void False
extern "C" void __dl__FPv();
// False False
//  void* False
// 	 void False
extern "C" void __ct__10JSUPtrLinkFPv();
// False False
extern "C" void __dt__10JSUPtrLinkFv();
// False False
extern "C" void __dt__10JSUPtrListFv();
// False False
extern "C" void initiate__10JSUPtrListFv();
// False False
//  JSUPtrLink* False
// 	 JSUPtrLink False
extern "C" void append__10JSUPtrListFP10JSUPtrLink();
// False False
//  JSUPtrLink* False
// 	 JSUPtrLink False
extern "C" void remove__10JSUPtrListFP10JSUPtrLink();
// False False
extern "C" void __register_global_object();
// False False
extern "C" void _savegpr_26();
// False False
extern "C" void _savegpr_28();
// False False
extern "C" void _restgpr_26();
// False False
extern "C" void _restgpr_28();
extern "C" extern u8 data_80450B5C[4];
extern "C" extern u8 data_80451348[8];

// 
// Declarations:
// 

/* 802AB07C-802AB0B4 0038+00 s=0 e=1 z=0  None .text      __ct__14Z2SoundHandlesFv                                     */
//	802AB090: 802DBF14 (initiate__10JSUPtrListFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm Z2SoundHandles::Z2SoundHandles() {
	nofralloc
#include "asm/Z2AudioLib/Z2SoundHandles/__ct__14Z2SoundHandlesFv.s"
}
#pragma pop


/* 802AB0B4-802AB118 0064+00 s=0 e=1 z=0  None .text      __dt__14Z2SoundHandlesFv                                     */
//	802AB0D4: 802AB120 (deleteHandlesPool__14Z2SoundHandlesFv)
//	802AB0E8: 802DBEAC (__dt__10JSUPtrListFv)
//	802AB0F8: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm Z2SoundHandles::~Z2SoundHandles() {
	nofralloc
#include "asm/Z2AudioLib/Z2SoundHandles/__dt__14Z2SoundHandlesFv.s"
}
#pragma pop


/* 802AB118-802AB120 0008+00 s=0 e=1 z=0  None .text      initHandlesPool__14Z2SoundHandlesFUc                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  u8 False
asm void Z2SoundHandles::initHandlesPool(u8 param_0) {
	nofralloc
#include "asm/Z2AudioLib/Z2SoundHandles/initHandlesPool__14Z2SoundHandlesFUc.s"
}
#pragma pop


/* ############################################################################################## */
/* 804341B8-804341C4 000C+00 s=3 e=0 z=0  None .bss       @632                                                         */
static u8 lit_632[12];

/* 804341C4-804341D8 0010+04 s=3 e=1 z=0  None .bss       memPool_$localstatic3$getMemPool___39JASPoolAllocObject<17Z2SoundHandlePool>Fv */
u8 data_804341C4[16 + 4 /* padding */];

/* 802AB120-802AB200 00E0+00 s=1 e=1 z=0  None .text      deleteHandlesPool__14Z2SoundHandlesFv                        */
//	802AB154: 802DC15C (remove__10JSUPtrListFP10JSUPtrLink)
//	802AB170: 802DBE14 (__dt__10JSUPtrLinkFv)
//	802AB180: 802A2184 (releaseSound__14JAISoundHandleFv)
//	802AB184: 80451348 (data_80451348)
//	802AB190: 804341C4 (data_804341C4)
//	802AB194: 804341C4 (data_804341C4)
//	802AB198: 80290848 (__ct__17JASGenericMemPoolFv)
//	802AB19C: 804341C4 (data_804341C4)
//	802AB1A0: 804341C4 (data_804341C4)
//	802AB1A4: 802AB200 (func_802AB200)
//	802AB1A8: 802AB200 (func_802AB200)
//	802AB1AC: 804341B8 (lit_632)
//	802AB1B0: 804341B8 (lit_632)
//	802AB1B4: 80361C24 (__register_global_object)
//	802AB1BC: 80451348 (data_80451348)
//	802AB1C0: 804341C4 (data_804341C4)
//	802AB1C4: 804341C4 (data_804341C4)
//	802AB1D0: 80290994 (free__17JASGenericMemPoolFPvUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void Z2SoundHandles::deleteHandlesPool() {
	nofralloc
#include "asm/Z2AudioLib/Z2SoundHandles/deleteHandlesPool__14Z2SoundHandlesFv.s"
}
#pragma pop


/* 802AB200-802AB254 0054+00 s=3 e=1 z=0  None .text      __dt__31JASMemPool<17Z2SoundHandlePool>Fv                    */
//	802AB224: 80290860 (__dt__17JASGenericMemPoolFv)
//	802AB234: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False True
asm JASMemPool__template4::~JASMemPool__template4() {
	nofralloc
#include "asm/Z2AudioLib/Z2SoundHandles/func_802AB200.s"
}
#pragma pop


/* 802AB254-802AB2A0 004C+00 s=0 e=6 z=0  None .text      getHandleSoundID__14Z2SoundHandlesF10JAISoundID              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  JAISoundID False
asm void Z2SoundHandles::getHandleSoundID(JAISoundID param_0) {
	nofralloc
#include "asm/Z2AudioLib/Z2SoundHandles/getHandleSoundID__14Z2SoundHandlesF10JAISoundID.s"
}
#pragma pop


/* 802AB2A0-802AB2D8 0038+00 s=0 e=1 z=0  None .text      getHandleUserData__14Z2SoundHandlesFUl                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  u32 False
asm void Z2SoundHandles::getHandleUserData(u32 param_0) {
	nofralloc
#include "asm/Z2AudioLib/Z2SoundHandles/getHandleUserData__14Z2SoundHandlesFUl.s"
}
#pragma pop


/* 802AB2D8-802AB3D0 00F8+00 s=0 e=3 z=0  None .text      getFreeHandle__14Z2SoundHandlesFv                            */
//	802AB328: 80451348 (data_80451348)
//	802AB334: 804341C4 (data_804341C4)
//	802AB338: 804341C4 (data_804341C4)
//	802AB33C: 80290848 (__ct__17JASGenericMemPoolFv)
//	802AB340: 804341C4 (data_804341C4)
//	802AB344: 804341C4 (data_804341C4)
//	802AB348: 802AB200 (func_802AB200)
//	802AB34C: 802AB200 (func_802AB200)
//	802AB350: 804341B8 (lit_632)
//	802AB354: 804341B8 (lit_632)
//	802AB358: 80361C24 (__register_global_object)
//	802AB360: 80451348 (data_80451348)
//	802AB364: 804341C4 (data_804341C4)
//	802AB368: 804341C4 (data_804341C4)
//	802AB370: 80290948 (alloc__17JASGenericMemPoolFUl)
//	802AB38C: 802DBDFC (__ct__10JSUPtrLinkFPv)
//	802AB3A8: 802DBF4C (append__10JSUPtrListFP10JSUPtrLink)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void Z2SoundHandles::getFreeHandle() {
	nofralloc
#include "asm/Z2AudioLib/Z2SoundHandles/getFreeHandle__14Z2SoundHandlesFv.s"
}
#pragma pop


/* 802AB3D0-802AB4A0 00D0+00 s=0 e=2 z=0  None .text      getLowPrioSound__14Z2SoundHandlesF10JAISoundID               */
//	802AB3E0: 803621D0 (_savegpr_26)
//	802AB3E8: 80450B5C (data_80450B5C)
//	802AB48C: 8036221C (_restgpr_26)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  JAISoundID False
asm void Z2SoundHandles::getLowPrioSound(JAISoundID param_0) {
	nofralloc
#include "asm/Z2AudioLib/Z2SoundHandles/getLowPrioSound__14Z2SoundHandlesF10JAISoundID.s"
}
#pragma pop


/* 802AB4A0-802AB504 0064+00 s=0 e=1 z=0  None .text      stopAllSounds__14Z2SoundHandlesFUl                           */
//	802AB4DC: 802A24DC (stop__8JAISoundFUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  u32 False
asm void Z2SoundHandles::stopAllSounds(u32 param_0) {
	nofralloc
#include "asm/Z2AudioLib/Z2SoundHandles/stopAllSounds__14Z2SoundHandlesFUl.s"
}
#pragma pop


/* 802AB504-802AB538 0034+00 s=0 e=1 z=0  None .text      isActive__14Z2SoundHandlesCFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void Z2SoundHandles::isActive() const {
	nofralloc
#include "asm/Z2AudioLib/Z2SoundHandles/isActive__14Z2SoundHandlesCFv.s"
}
#pragma pop


/* 802AB538-802AB64C 0114+00 s=0 e=1 z=0  None .text      setPos__14Z2SoundHandlesFRCQ29JGeometry8TVec3<f>             */
//	802AB548: 803621D8 (_savegpr_28)
//	802AB5A8: 802DC15C (remove__10JSUPtrListFP10JSUPtrLink)
//	802AB5C4: 802DBE14 (__dt__10JSUPtrLinkFv)
//	802AB5D4: 802A2184 (releaseSound__14JAISoundHandleFv)
//	802AB5D8: 80451348 (data_80451348)
//	802AB5E4: 804341C4 (data_804341C4)
//	802AB5E8: 804341C4 (data_804341C4)
//	802AB5EC: 80290848 (__ct__17JASGenericMemPoolFv)
//	802AB5F0: 804341C4 (data_804341C4)
//	802AB5F4: 804341C4 (data_804341C4)
//	802AB5F8: 802AB200 (func_802AB200)
//	802AB5FC: 802AB200 (func_802AB200)
//	802AB600: 804341B8 (lit_632)
//	802AB604: 804341B8 (lit_632)
//	802AB608: 80361C24 (__register_global_object)
//	802AB610: 80451348 (data_80451348)
//	802AB614: 804341C4 (data_804341C4)
//	802AB618: 804341C4 (data_804341C4)
//	802AB624: 80290994 (free__17JASGenericMemPoolFPvUl)
//	802AB638: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False True
//  JGeometry::TVec3<f32> const& False
// 	 JGeometry::TVec3<f32> const False
// 		 JGeometry::TVec3<f32> True
// 			 f32 False
asm void Z2SoundHandles::setPos(JGeometry::TVec3<f32> const& param_0) {
	nofralloc
#include "asm/Z2AudioLib/Z2SoundHandles/func_802AB538.s"
}
#pragma pop


