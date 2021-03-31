// 
// Generated By: dol2asm
// Translation Unit: c_m3d_g_pla
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "SSystem/SComponent/c_m3d_g_pla.h"

// 
// Types:
// 

struct cXyz {
};

struct Vec {
};

struct cM3dGPla {
	/* 8026F3DC */ // False False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  f32 False
cM3dGPla(cXyz const*, f32);
	/* 8026F408 */ // False False
//  cXyz const& False
// 	 cXyz const False
// 		 cXyz False
//  cXyz const& False
// 	 cXyz const False
// 		 cXyz False
//  cXyz& False
// 	 cXyz False
void crossInfLin(cXyz const&, cXyz const&, cXyz&) const;
	/* 8026F4C4 */ // False False
//  Vec const& False
// 	 Vec const False
// 		 Vec False
//  Vec const& False
// 	 Vec const False
// 		 Vec False
void SetupNP0(Vec const&, Vec const&);
	/* 8026F52C */ // False False
//  Vec const& False
// 	 Vec const False
// 		 Vec False
//  Vec const& False
// 	 Vec const False
// 		 Vec False
void SetupNP(Vec const&, Vec const&);
	/* 8026F57C */ // False False
//  cXyz const& False
// 	 cXyz const False
// 		 cXyz False
//  f32* False
// 	 f32 False
void getCrossY(cXyz const&, f32*) const;
	/* 8026F5D4 */ // False False
//  Vec const& False
// 	 Vec const False
// 		 Vec False
//  f32* False
// 	 f32 False
void getCrossYLessD(Vec const&, f32*) const;
	/* 8026F624 */ // False False
//  cM3dGPla const* False
// 	 cM3dGPla const False
// 		 cM3dGPla False
void Set(cM3dGPla const*);
};

// 
// Forward References:
// 


// False False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  f32 False
extern "C" void __ct__8cM3dGPlaFPC4cXyzf();
// False False
//  cXyz const& False
// 	 cXyz const False
// 		 cXyz False
//  cXyz const& False
// 	 cXyz const False
// 		 cXyz False
//  cXyz& False
// 	 cXyz False
extern "C" void crossInfLin__8cM3dGPlaCFRC4cXyzRC4cXyzR4cXyz();
// False False
//  Vec const& False
// 	 Vec const False
// 		 Vec False
//  Vec const& False
// 	 Vec const False
// 		 Vec False
extern "C" void SetupNP0__8cM3dGPlaFRC3VecRC3Vec();
// False False
//  Vec const& False
// 	 Vec const False
// 		 Vec False
//  Vec const& False
// 	 Vec const False
// 		 Vec False
extern "C" void SetupNP__8cM3dGPlaFRC3VecRC3Vec();
// False False
//  cXyz const& False
// 	 cXyz const False
// 		 cXyz False
//  f32* False
// 	 f32 False
extern "C" void getCrossY__8cM3dGPlaCFRC4cXyzPf();
// False False
//  Vec const& False
// 	 Vec const False
// 		 Vec False
//  f32* False
// 	 f32 False
extern "C" void getCrossYLessD__8cM3dGPlaCFRC3VecPf();
// False False
//  cM3dGPla const* False
// 	 cM3dGPla const False
// 		 cM3dGPla False
extern "C" void Set__8cM3dGPlaFPC8cM3dGPla();

// 
// External References:
// 

// False False
//  Vec const* False
// 	 Vec const False
// 		 Vec False
//  Vec const* False
// 	 Vec const False
// 		 Vec False
//  f32 False
//  Vec* False
// 	 Vec False
void cM3d_InDivPos2(Vec const*, Vec const*, f32, Vec*);

// False False
//  Vec const* False
// 	 Vec const False
// 		 Vec False
//  Vec const* False
// 	 Vec const False
// 		 Vec False
//  f32 False
//  Vec* False
// 	 Vec False
extern "C" void cM3d_InDivPos2__FPC3VecPC3VecfP3Vec();
// False False
extern "C" void PSVECNormalize();
// False False
extern "C" void PSVECDotProduct();
// False False
extern "C" void _savegpr_28();
// False False
extern "C" void _restgpr_28();
extern "C" extern void* __vt__8cM3dGPla[3];
extern "C" extern f32 G_CM3D_F_ABS_MIN[1 + 1 /* padding */];

// 
// Declarations:
// 

/* 8026F3DC-8026F408 002C+00 s=0 e=3 z=0  None .text      __ct__8cM3dGPlaFPC4cXyzf                                     */
//	8026F3DC: 803A37C0 (__vt__8cM3dGPla)
//	8026F3E0: 803A37C0 (__vt__8cM3dGPla)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  f32 False
asm cM3dGPla::cM3dGPla(cXyz const* param_0, f32 param_1) {
	nofralloc
#include "asm/SSystem/SComponent/c_m3d_g_pla/__ct__8cM3dGPlaFPC4cXyzf.s"
}
#pragma pop


/* 8026F408-8026F4C4 00BC+00 s=0 e=3 z=0  None .text      crossInfLin__8cM3dGPlaCFRC4cXyzRC4cXyzR4cXyz                 */
//	8026F420: 803621D8 (_savegpr_28)
//	8026F434: 80347194 (PSVECDotProduct)
//	8026F448: 80347194 (PSVECDotProduct)
//	8026F460: 80451180 (G_CM3D_F_ABS_MIN)
//	8026F49C: 802685B0 (cM3d_InDivPos2__FPC3VecPC3VecfP3Vec)
//	8026F4B0: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  cXyz const& False
// 	 cXyz const False
// 		 cXyz False
//  cXyz const& False
// 	 cXyz const False
// 		 cXyz False
//  cXyz& False
// 	 cXyz False
asm void cM3dGPla::crossInfLin(cXyz const& param_0, cXyz const& param_1, cXyz& param_2) const {
	nofralloc
#include "asm/SSystem/SComponent/c_m3d_g_pla/crossInfLin__8cM3dGPlaCFRC4cXyzRC4cXyzR4cXyz.s"
}
#pragma pop


/* 8026F4C4-8026F52C 0068+00 s=0 e=1 z=0  None .text      SetupNP0__8cM3dGPlaFRC3VecRC3Vec                             */
//	8026F4FC: 803470F4 (PSVECNormalize)
//	8026F508: 80347194 (PSVECDotProduct)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  Vec const& False
// 	 Vec const False
// 		 Vec False
//  Vec const& False
// 	 Vec const False
// 		 Vec False
asm void cM3dGPla::SetupNP0(Vec const& param_0, Vec const& param_1) {
	nofralloc
#include "asm/SSystem/SComponent/c_m3d_g_pla/SetupNP0__8cM3dGPlaFRC3VecRC3Vec.s"
}
#pragma pop


/* 8026F52C-8026F57C 0050+00 s=0 e=2 z=0  None .text      SetupNP__8cM3dGPlaFRC3VecRC3Vec                              */
//	8026F55C: 80347194 (PSVECDotProduct)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  Vec const& False
// 	 Vec const False
// 		 Vec False
//  Vec const& False
// 	 Vec const False
// 		 Vec False
asm void cM3dGPla::SetupNP(Vec const& param_0, Vec const& param_1) {
	nofralloc
#include "asm/SSystem/SComponent/c_m3d_g_pla/SetupNP__8cM3dGPlaFRC3VecRC3Vec.s"
}
#pragma pop


/* 8026F57C-8026F5D4 0058+00 s=0 e=2 z=0  None .text      getCrossY__8cM3dGPlaCFRC4cXyzPf                              */
//	8026F588: 80451180 (G_CM3D_F_ABS_MIN)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  cXyz const& False
// 	 cXyz const False
// 		 cXyz False
//  f32* False
// 	 f32 False
asm void cM3dGPla::getCrossY(cXyz const& param_0, f32* param_1) const {
	nofralloc
#include "asm/SSystem/SComponent/c_m3d_g_pla/getCrossY__8cM3dGPlaCFRC4cXyzPf.s"
}
#pragma pop


/* 8026F5D4-8026F624 0050+00 s=0 e=1 z=0  None .text      getCrossYLessD__8cM3dGPlaCFRC3VecPf                          */
//	8026F5E0: 80451180 (G_CM3D_F_ABS_MIN)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  Vec const& False
// 	 Vec const False
// 		 Vec False
//  f32* False
// 	 f32 False
asm void cM3dGPla::getCrossYLessD(Vec const& param_0, f32* param_1) const {
	nofralloc
#include "asm/SSystem/SComponent/c_m3d_g_pla/getCrossYLessD__8cM3dGPlaCFRC3VecPf.s"
}
#pragma pop


/* 8026F624-8026F648 0024+00 s=0 e=1 z=0  None .text      Set__8cM3dGPlaFPC8cM3dGPla                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  cM3dGPla const* False
// 	 cM3dGPla const False
// 		 cM3dGPla False
asm void cM3dGPla::Set(cM3dGPla const* param_0) {
	nofralloc
#include "asm/SSystem/SComponent/c_m3d_g_pla/Set__8cM3dGPlaFPC8cM3dGPla.s"
}
#pragma pop


