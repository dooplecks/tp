// 
// Generated By: dol2asm
// Translation Unit: JPAMath
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "JSystem/JParticle/JPAMath.h"

// 
// Types:
// 

struct JGeometry {
	template <typename A1>
	struct TVec3 { };
	/* TVec3<f32> */
	struct TVec3__template0 {
	};

};

// 
// Forward References:
// 

// False True
//  JGeometry::TVec3<f32> const& False
// 	 JGeometry::TVec3<f32> const False
// 		 JGeometry::TVec3<f32> True
// 			 f32 False
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
void JPAGetDirMtx(JGeometry::TVec3__template0 const&, f32 (* )[4]);
// False False
//  s16 False
//  s16 False
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
void JPAGetYZRotateMtx(s16, s16, f32 (* )[4]);
// False False
//  s16 False
//  s16 False
//  s16 False
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
void JPAGetXYZRotateMtx(s16, s16, s16, f32 (* )[4]);
// False True
//  f32 const (* )[4] False
// 	 f32 const False
// 		 f32 False
// 	 * False
// 		  False
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
//  JGeometry::TVec3<f32>* False
// 	 JGeometry::TVec3<f32> True
// 		 f32 False
void JPASetRMtxTVecfromMtx(f32 const (* )[4], f32 (* )[4], JGeometry::TVec3__template0*);
// False True
//  f32 const (* )[4] False
// 	 f32 const False
// 		 f32 False
// 	 * False
// 		  False
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
//  JGeometry::TVec3<f32>* False
// 	 JGeometry::TVec3<f32> True
// 		 f32 False
//  JGeometry::TVec3<f32>* False
// 	 JGeometry::TVec3<f32> True
// 		 f32 False
void JPASetRMtxSTVecfromMtx(f32 const (* )[4], f32 (* )[4], JGeometry::TVec3__template0*, JGeometry::TVec3__template0*);
// False False
//  f32 False
//  u16 False
//  f32 const* False
// 	 f32 const False
// 		 f32 False
void JPACalcKeyAnmValue(f32, u16, f32 const*);

// False True
//  JGeometry::TVec3<f32> const& False
// 	 JGeometry::TVec3<f32> const False
// 		 JGeometry::TVec3<f32> True
// 			 f32 False
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
extern "C" void func_80280588();
// False False
//  s16 False
//  s16 False
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
extern "C" void JPAGetYZRotateMtx__FssPA4_f();
// False False
//  s16 False
//  s16 False
//  s16 False
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
extern "C" void JPAGetXYZRotateMtx__FsssPA4_f();
// False True
//  f32 const (* )[4] False
// 	 f32 const False
// 		 f32 False
// 	 * False
// 		  False
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
//  JGeometry::TVec3<f32>* False
// 	 JGeometry::TVec3<f32> True
// 		 f32 False
extern "C" void func_802807E0();
// False True
//  f32 const (* )[4] False
// 	 f32 const False
// 		 f32 False
// 	 * False
// 		  False
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
//  JGeometry::TVec3<f32>* False
// 	 JGeometry::TVec3<f32> True
// 		 f32 False
//  JGeometry::TVec3<f32>* False
// 	 JGeometry::TVec3<f32> True
// 		 f32 False
extern "C" void func_80280808();
// False False
//  f32 False
//  u16 False
//  f32 const* False
// 	 f32 const False
// 		 f32 False
extern "C" void JPACalcKeyAnmValue__FfUsPCf();

// 
// External References:
// 


// False False
extern "C" void PSMTXIdentity();
// False False
extern "C" void PSVECMag();
// False False
extern "C" void _savegpr_28();
// False False
extern "C" void _restgpr_28();
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u32 __float_epsilon;

// 
// Declarations:
// 

/* ############################################################################################## */
/* 804553B8-804553BC 0004+00 s=2 e=0 z=0  None .sdata2    @2193                                                        */
SECTION_SDATA2 static f32 lit_2193 = 1.0f;

/* 804553BC-804553C0 0004+00 s=4 e=0 z=0  None .sdata2    @2238                                                        */
SECTION_SDATA2 static u8 lit_2238[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 804553C0-804553C8 0004+04 s=1 e=0 z=0  None .sdata2    @2239                                                        */
SECTION_SDATA2 static f32 lit_2239[1 + 1 /* padding */] = {
	32.0f,
	/* padding */
	0.0f,
};

/* 80280588-802806C0 0138+00 s=0 e=1 z=0  None .text      JPAGetDirMtx__FRCQ29JGeometry8TVec3<f>PA4_f                  */
//	802805C0: 804553BC (lit_2238)
//	802805CC: 80347150 (PSVECMag)
//	802805D0: 804553C0 (lit_2239)
//	802805D4: 80450AEC (__float_epsilon)
//	802805D8: 80450AEC (__float_epsilon)
//	802805EC: 804553BC (lit_2238)
//	80280600: 804553B8 (lit_2193)
//	80280638: 804553B8 (lit_2193)
//	80280668: 804553BC (lit_2238)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False True
//  JGeometry::TVec3<f32> const& False
// 	 JGeometry::TVec3<f32> const False
// 		 JGeometry::TVec3<f32> True
// 			 f32 False
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
asm void JPAGetDirMtx(JGeometry::TVec3<f32> const& param_0, f32 (* param_1)[4]) {
	nofralloc
#include "asm/JSystem/JParticle/JPAMath/func_80280588.s"
}
#pragma pop


/* 802806C0-80280734 0074+00 s=0 e=1 z=0  None .text      JPAGetYZRotateMtx__FssPA4_f                                  */
//	802806C0: 80439A20 (sincosTable___5JMath)
//	802806C4: 80439A20 (sincosTable___5JMath)
//	8028071C: 804553BC (lit_2238)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  s16 False
//  s16 False
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
asm void JPAGetYZRotateMtx(s16 param_0, s16 param_1, f32 (* param_2)[4]) {
	nofralloc
#include "asm/JSystem/JParticle/JPAMath/JPAGetYZRotateMtx__FssPA4_f.s"
}
#pragma pop


/* 80280734-802807E0 00AC+00 s=0 e=6 z=11  None .text      JPAGetXYZRotateMtx__FsssPA4_f                                */
//	80280734: 80439A20 (sincosTable___5JMath)
//	80280738: 80439A20 (sincosTable___5JMath)
//	802807CC: 804553BC (lit_2238)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  s16 False
//  s16 False
//  s16 False
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
asm void JPAGetXYZRotateMtx(s16 param_0, s16 param_1, s16 param_2, f32 (* param_3)[4]) {
	nofralloc
#include "asm/JSystem/JParticle/JPAMath/JPAGetXYZRotateMtx__FsssPA4_f.s"
}
#pragma pop


/* 802807E0-80280808 0028+00 s=0 e=11 z=71  None .text      JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>    */
//	802807F4: 80280808 (func_80280808)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False True
//  f32 const (* )[4] False
// 	 f32 const False
// 		 f32 False
// 	 * False
// 		  False
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
//  JGeometry::TVec3<f32>* False
// 	 JGeometry::TVec3<f32> True
// 		 f32 False
asm void JPASetRMtxTVecfromMtx(f32 const (* param_0)[4], f32 (* param_1)[4], JGeometry::TVec3<f32>* param_2) {
	nofralloc
#include "asm/JSystem/JParticle/JPAMath/func_802807E0.s"
}
#pragma pop


/* 80280808-80280984 017C+00 s=1 e=1 z=53  None .text      JPASetRMtxSTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>PQ29JGeometry8TVec3<f> */
//	80280818: 803621D8 (_savegpr_28)
//	80280848: 80347150 (PSVECMag)
//	8028086C: 80347150 (PSVECMag)
//	80280890: 80347150 (PSVECMag)
//	8028089C: 80346484 (PSMTXIdentity)
//	802808A0: 804553BC (lit_2238)
//	802808B0: 804553B8 (lit_2193)
//	802808DC: 804553BC (lit_2238)
//	802808EC: 804553B8 (lit_2193)
//	80280918: 804553BC (lit_2238)
//	80280928: 804553B8 (lit_2193)
//	80280970: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False True
//  f32 const (* )[4] False
// 	 f32 const False
// 		 f32 False
// 	 * False
// 		  False
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
//  JGeometry::TVec3<f32>* False
// 	 JGeometry::TVec3<f32> True
// 		 f32 False
//  JGeometry::TVec3<f32>* False
// 	 JGeometry::TVec3<f32> True
// 		 f32 False
asm void JPASetRMtxSTVecfromMtx(f32 const (* param_0)[4], f32 (* param_1)[4], JGeometry::TVec3<f32>* param_2, JGeometry::TVec3<f32>* param_3) {
	nofralloc
#include "asm/JSystem/JParticle/JPAMath/func_80280808.s"
}
#pragma pop


/* 80280984-80280A48 00C4+00 s=0 e=2 z=0  None .text      JPACalcKeyAnmValue__FfUsPCf                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  f32 False
//  u16 False
//  f32 const* False
// 	 f32 const False
// 		 f32 False
asm void JPACalcKeyAnmValue(f32 param_0, u16 param_1, f32 const* param_2) {
	nofralloc
#include "asm/JSystem/JParticle/JPAMath/JPACalcKeyAnmValue__FfUsPCf.s"
}
#pragma pop


