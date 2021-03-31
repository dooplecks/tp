// 
// Generated By: dol2asm
// Translation Unit: GXPixel
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "dolphin/gx/GXPixel.h"

// 
// Forward References:
// 


// False False
extern "C" void GXSetFog();
// False False
extern "C" void GXSetFogRangeAdj();
// False False
extern "C" void GXSetBlendMode();
// False False
extern "C" void GXSetColorUpdate();
// False False
extern "C" void GXSetAlphaUpdate();
// False False
extern "C" void GXSetZMode();
// False False
extern "C" void GXSetZCompLoc();
// False False
extern "C" void GXSetPixelFmt();
// False False
extern "C" void GXSetDither();
// False False
extern "C" void GXSetDstAlpha();
// False False
extern "C" void GXSetFieldMask();
// False False
extern "C" void GXSetFieldMode();

// 
// External References:
// 


// False False
extern "C" void __GXFlushTextureState();
// False False
extern "C" void __cvt_fp2unsigned();
extern "C" extern void* __GXData;

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80456618-8045661C 0004+00 s=1 e=0 z=0  None .sdata2    @211                                                         */
SECTION_SDATA2 static u8 lit_211[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 8045661C-80456620 0004+00 s=1 e=0 z=0  None .sdata2    @212                                                         */
SECTION_SDATA2 static f32 lit_212 = 1.0f;

/* 80456620-80456628 0004+04 s=1 e=0 z=0  None .sdata2    @213                                                         */
SECTION_SDATA2 static f32 lit_213[1 + 1 /* padding */] = {
	0.5f,
	/* padding */
	0.0f,
};

/* 80456628-80456630 0008+00 s=1 e=0 z=0  None .sdata2    @214                                                         */
SECTION_SDATA2 static f64 lit_214 = 1.0;

/* 80456630-80456638 0004+04 s=1 e=0 z=0  None .sdata2    @215                                                         */
SECTION_SDATA2 static f32 lit_215[1 + 1 /* padding */] = {
	2.0f,
	/* padding */
	0.0f,
};

/* 80456638-80456640 0008+00 s=1 e=0 z=0  None .sdata2    @216                                                         */
SECTION_SDATA2 static f64 lit_216 = 0.5;

/* 80456640-80456648 0004+04 s=1 e=0 z=0  None .sdata2    @217                                                         */
SECTION_SDATA2 static f32 lit_217[1 + 1 /* padding */] = {
	8388638.0f,
	/* padding */
	0.0f,
};

/* 80456648-80456650 0008+00 s=1 e=0 z=0  None .sdata2    @219                                                         */
SECTION_SDATA2 static f64 lit_219 = 4503601774854144.0 /* cast s32 to float */;

/* 8035F8B8-8035FACC 0214+00 s=0 e=20 z=2  None .text      GXSetFog                                                     */
//	8035F900: 80456618 (lit_211)
//	8035F914: 8045661C (lit_212)
//	8035F948: 80456618 (lit_211)
//	8035F94C: 80456620 (lit_213)
//	8035F974: 80456620 (lit_213)
//	8035F97C: 80456628 (lit_214)
//	8035F994: 80456638 (lit_216)
//	8035F998: 80456630 (lit_215)
//	8035F99C: 80456618 (lit_211)
//	8035F9C0: 80456640 (lit_217)
//	8035F9C8: 80456648 (lit_219)
//	8035F9F4: 803620AC (__cvt_fp2unsigned)
//	8035FA4C: 80456580 (__GXData)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void GXSetFog() {
	nofralloc
#include "asm/dolphin/gx/GXPixel/GXSetFog.s"
}
#pragma pop


/* 8035FACC-8035FBF0 0124+00 s=0 e=9 z=2  None .text      GXSetFogRangeAdj                                             */
//	8035FBB8: 80456580 (__GXData)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void GXSetFogRangeAdj() {
	nofralloc
#include "asm/dolphin/gx/GXPixel/GXSetFogRangeAdj.s"
}
#pragma pop


/* 8035FBF0-8035FC44 0054+00 s=0 e=53 z=3  None .text      GXSetBlendMode                                               */
//	8035FBF0: 80456580 (__GXData)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void GXSetBlendMode() {
	nofralloc
#include "asm/dolphin/gx/GXPixel/GXSetBlendMode.s"
}
#pragma pop


/* 8035FC44-8035FC70 002C+00 s=0 e=10 z=2  None .text      GXSetColorUpdate                                             */
//	8035FC44: 80456580 (__GXData)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void GXSetColorUpdate() {
	nofralloc
#include "asm/dolphin/gx/GXPixel/GXSetColorUpdate.s"
}
#pragma pop


/* 8035FC70-8035FC9C 002C+00 s=0 e=10 z=2  None .text      GXSetAlphaUpdate                                             */
//	8035FC70: 80456580 (__GXData)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void GXSetAlphaUpdate() {
	nofralloc
#include "asm/dolphin/gx/GXPixel/GXSetAlphaUpdate.s"
}
#pragma pop


/* 8035FC9C-8035FCD0 0034+00 s=0 e=40 z=6  None .text      GXSetZMode                                                   */
//	8035FC9C: 80456580 (__GXData)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void GXSetZMode() {
	nofralloc
#include "asm/dolphin/gx/GXPixel/GXSetZMode.s"
}
#pragma pop


/* 8035FCD0-8035FD04 0034+00 s=0 e=29 z=5  None .text      GXSetZCompLoc                                                */
//	8035FCD0: 80456580 (__GXData)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void GXSetZCompLoc() {
	nofralloc
#include "asm/dolphin/gx/GXPixel/GXSetZCompLoc.s"
}
#pragma pop


/* ############################################################################################## */
/* 803D2838-803D2858 0020+00 s=1 e=0 z=0  None .data      p2f$358                                                      */
SECTION_DATA static u8 p2f[32] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03,
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05,
};

/* 8035FD04-8035FDD8 00D4+00 s=0 e=2 z=1  None .text      GXSetPixelFmt                                                */
//	8035FD04: 803D2838 (p2f)
//	8035FD08: 80456580 (__GXData)
//	8035FD10: 803D2838 (p2f)
//	8035FD68: 80456580 (__GXData)
//	8035FD90: 80456580 (__GXData)
//	8035FDC8: 80456580 (__GXData)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void GXSetPixelFmt() {
	nofralloc
#include "asm/dolphin/gx/GXPixel/GXSetPixelFmt.s"
}
#pragma pop


/* 8035FDD8-8035FE04 002C+00 s=0 e=22 z=1  None .text      GXSetDither                                                  */
//	8035FDD8: 80456580 (__GXData)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void GXSetDither() {
	nofralloc
#include "asm/dolphin/gx/GXPixel/GXSetDither.s"
}
#pragma pop


/* 8035FE04-8035FE40 003C+00 s=0 e=2 z=0  None .text      GXSetDstAlpha                                                */
//	8035FE04: 80456580 (__GXData)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void GXSetDstAlpha() {
	nofralloc
#include "asm/dolphin/gx/GXPixel/GXSetDstAlpha.s"
}
#pragma pop


/* 8035FE40-8035FE78 0038+00 s=0 e=1 z=0  None .text      GXSetFieldMask                                               */
//	8035FE44: 80456580 (__GXData)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void GXSetFieldMask() {
	nofralloc
#include "asm/dolphin/gx/GXPixel/GXSetFieldMask.s"
}
#pragma pop


/* 8035FE78-8035FEF0 0078+00 s=0 e=1 z=0  None .text      GXSetFieldMode                                               */
//	8035FEA0: 80456580 (__GXData)
//	8035FEBC: 8035F174 (__GXFlushTextureState)
//	8035FED0: 8035F174 (__GXFlushTextureState)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void GXSetFieldMode() {
	nofralloc
#include "asm/dolphin/gx/GXPixel/GXSetFieldMode.s"
}
#pragma pop


