// 
// Generated By: dol2asm
// Translation Unit: JUTTexture
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "JSystem/JUtility/JUTTexture.h"

// 
// Types:
// 

struct _GXTlutFmt {
};

struct _GXTlut {
};

struct _GXTexMapID {
};

struct ResTIMG {
};

struct JUTTransparency {
};

struct JUTPalette {
	/* 802DE91C */ // False False
//  _GXTlut False
//  _GXTlutFmt False
//  JUTTransparency False
//  u16 False
//  void* False
// 	 void False
void storeTLUT(_GXTlut, _GXTlutFmt, JUTTransparency, u16, void*);
	/* 802DE95C */ // False False
void load();
};

struct JUTTexture {
	/* 802DE234 */ // False False
~JUTTexture();
	/* 802DE480 */ // False False
//  ResTIMG const* False
// 	 ResTIMG const False
// 		 ResTIMG False
//  JUTPalette* False
// 	 JUTPalette False
//  _GXTlut False
void storeTIMG(ResTIMG const*, JUTPalette*, _GXTlut);
	/* 802DE2A8 */ // False False
//  ResTIMG const* False
// 	 ResTIMG const False
// 		 ResTIMG False
//  u8 False
void storeTIMG(ResTIMG const*, u8);
	/* 802DE44C */ // False False
//  ResTIMG const* False
// 	 ResTIMG const False
// 		 ResTIMG False
//  JUTPalette* False
// 	 JUTPalette False
void storeTIMG(ResTIMG const*, JUTPalette*);
	/* 802DE5B0 */ // False False
//  JUTPalette* False
// 	 JUTPalette False
void attachPalette(JUTPalette*);
	/* 802DE608 */ // True False
void init();
	/* 802DE744 */ // True False
//  _GXTlut False
void initTexObj(_GXTlut);
	/* 802DE658 */ // True False
void initTexObj();
	/* 802DE840 */ // False False
//  _GXTexMapID False
void load(_GXTexMapID);
};

// 
// Forward References:
// 


// False False
extern "C" void __dt__10JUTTextureFv();
// False False
//  ResTIMG const* False
// 	 ResTIMG const False
// 		 ResTIMG False
//  u8 False
extern "C" void storeTIMG__10JUTTextureFPC7ResTIMGUc();
// False False
//  ResTIMG const* False
// 	 ResTIMG const False
// 		 ResTIMG False
//  JUTPalette* False
// 	 JUTPalette False
extern "C" void storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette();
// False False
//  ResTIMG const* False
// 	 ResTIMG const False
// 		 ResTIMG False
//  JUTPalette* False
// 	 JUTPalette False
//  _GXTlut False
extern "C" void storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette7_GXTlut();
// False False
//  JUTPalette* False
// 	 JUTPalette False
extern "C" void attachPalette__10JUTTextureFP10JUTPalette();
// True False
extern "C" void init__10JUTTextureFv();
// True False
extern "C" void initTexObj__10JUTTextureFv();
// True False
//  _GXTlut False
extern "C" void initTexObj__10JUTTextureF7_GXTlut();
// False False
//  _GXTexMapID False
extern "C" void load__10JUTTextureF11_GXTexMapID();

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
//  void False
//  void* False
// 	 void False
void operator delete[](void*);

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
//  void False
//  void* False
// 	 void False
extern "C" void __dla__FPv();
// False False
//  _GXTlut False
//  _GXTlutFmt False
//  JUTTransparency False
//  u16 False
//  void* False
// 	 void False
extern "C" void storeTLUT__10JUTPaletteF7_GXTlut10_GXTlutFmt15JUTTransparencyUsPv();
// False False
extern "C" void load__10JUTPaletteFv();
// False False
extern "C" void GXInitTexObj();
// False False
extern "C" void GXInitTexObjCI();
// False False
extern "C" void GXInitTexObjLOD();
// False False
extern "C" void GXLoadTexObj();
// False False
extern "C" void _savegpr_29();
// False False
extern "C" void _restgpr_29();

// 
// Declarations:
// 

/* 802DE234-802DE2A8 0074+00 s=0 e=30 z=0  None .text      __dt__10JUTTextureFv                                         */
//	802DE264: 802CED60 (__dla__FPv)
//	802DE278: 802CED3C (__dl__FPv)
//	802DE288: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm JUTTexture::~JUTTexture() {
	nofralloc
#include "asm/JSystem/JUtility/JUTTexture/__dt__10JUTTextureFv.s"
}
#pragma pop


/* 802DE2A8-802DE44C 01A4+00 s=0 e=18 z=0  None .text      storeTIMG__10JUTTextureFPC7ResTIMGUc                         */
//	802DE2B8: 803621DC (_savegpr_29)
//	802DE37C: 802DE658 (initTexObj__10JUTTextureFv)
//	802DE3CC: 802CEC4C (__nw__FUl)
//	802DE3F4: 802DE91C (storeTLUT__10JUTPaletteF7_GXTlut10_GXTlutFmt15JUTTransparencyUsPv)
//	802DE424: 802DE91C (storeTLUT__10JUTPaletteF7_GXTlut10_GXTlutFmt15JUTTransparencyUsPv)
//	802DE430: 802DE5B0 (attachPalette__10JUTTextureFP10JUTPalette)
//	802DE438: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  ResTIMG const* False
// 	 ResTIMG const False
// 		 ResTIMG False
//  u8 False
asm void JUTTexture::storeTIMG(ResTIMG const* param_0, u8 param_1) {
	nofralloc
#include "asm/JSystem/JUtility/JUTTexture/storeTIMG__10JUTTextureFPC7ResTIMGUc.s"
}
#pragma pop


/* 802DE44C-802DE480 0034+00 s=0 e=6 z=0  None .text      storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette              */
//	802DE46C: 802DE480 (storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette7_GXTlut)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  ResTIMG const* False
// 	 ResTIMG const False
// 		 ResTIMG False
//  JUTPalette* False
// 	 JUTPalette False
asm void JUTTexture::storeTIMG(ResTIMG const* param_0, JUTPalette* param_1) {
	nofralloc
#include "asm/JSystem/JUtility/JUTTexture/storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette.s"
}
#pragma pop


/* 802DE480-802DE5B0 0130+00 s=1 e=3 z=0  None .text      storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette7_GXTlut      */
//	802DE490: 803621DC (_savegpr_29)
//	802DE4E4: 802CED3C (__dl__FPv)
//	802DE530: 802DE91C (storeTLUT__10JUTPaletteF7_GXTlut10_GXTlutFmt15JUTTransparencyUsPv)
//	802DE594: 802DE608 (init__10JUTTextureFv)
//	802DE59C: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  ResTIMG const* False
// 	 ResTIMG const False
// 		 ResTIMG False
//  JUTPalette* False
// 	 JUTPalette False
//  _GXTlut False
asm void JUTTexture::storeTIMG(ResTIMG const* param_0, JUTPalette* param_1, _GXTlut param_2) {
	nofralloc
#include "asm/JSystem/JUtility/JUTTexture/storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette7_GXTlut.s"
}
#pragma pop


/* 802DE5B0-802DE608 0058+00 s=1 e=7 z=0  None .text      attachPalette__10JUTTextureFP10JUTPalette                    */
//	802DE5F4: 802DE744 (initTexObj__10JUTTextureF7_GXTlut)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  JUTPalette* False
// 	 JUTPalette False
asm void JUTTexture::attachPalette(JUTPalette* param_0) {
	nofralloc
#include "asm/JSystem/JUtility/JUTTexture/attachPalette__10JUTTextureFP10JUTPalette.s"
}
#pragma pop


/* 802DE608-802DE658 0050+00 s=1 e=0 z=0  None .text      init__10JUTTextureFv                                         */
//	802DE624: 802DE658 (initTexObj__10JUTTextureFv)
//	802DE644: 802DE744 (initTexObj__10JUTTextureF7_GXTlut)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void JUTTexture::init() {
	nofralloc
#include "asm/JSystem/JUtility/JUTTexture/init__10JUTTextureFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80455FD8-80455FDC 0004+00 s=2 e=0 z=0  None .sdata2    @453                                                         */
SECTION_SDATA2 static f32 lit_453 = 0.125f;

/* 80455FDC-80455FE0 0004+00 s=2 e=0 z=0  None .sdata2    @454                                                         */
SECTION_SDATA2 static f32 lit_454 = 100.0f;

/* 80455FE0-80455FE8 0008+00 s=2 e=0 z=0  None .sdata2    @456                                                         */
SECTION_SDATA2 static f64 lit_456 = 4503599627370496.0 /* cast u32 to float */;

/* 80455FE8-80455FF0 0008+00 s=2 e=0 z=0  None .sdata2    @459                                                         */
SECTION_SDATA2 static f64 lit_459 = 4503601774854144.0 /* cast s32 to float */;

/* 802DE658-802DE744 00EC+00 s=2 e=0 z=0  None .text      initTexObj__10JUTTextureFv                                   */
//	802DE6AC: 8035DE40 (GXInitTexObj)
//	802DE6C4: 80455FE0 (lit_456)
//	802DE6DC: 80455FD8 (lit_453)
//	802DE700: 80455FE8 (lit_459)
//	802DE718: 80455FDC (lit_454)
//	802DE72C: 8035E0D4 (GXInitTexObjLOD)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void JUTTexture::initTexObj() {
	nofralloc
#include "asm/JSystem/JUtility/JUTTexture/initTexObj__10JUTTextureFv.s"
}
#pragma pop


/* 802DE744-802DE840 00FC+00 s=2 e=0 z=0  None .text      initTexObj__10JUTTextureF7_GXTlut                            */
//	802DE7A8: 8035E08C (GXInitTexObjCI)
//	802DE7C0: 80455FE0 (lit_456)
//	802DE7D8: 80455FD8 (lit_453)
//	802DE7FC: 80455FE8 (lit_459)
//	802DE814: 80455FDC (lit_454)
//	802DE828: 8035E0D4 (GXInitTexObjLOD)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  _GXTlut False
asm void JUTTexture::initTexObj(_GXTlut param_0) {
	nofralloc
#include "asm/JSystem/JUtility/JUTTexture/initTexObj__10JUTTextureF7_GXTlut.s"
}
#pragma pop


/* 802DE840-802DE890 0050+00 s=0 e=14 z=0  None .text      load__10JUTTextureF11_GXTexMapID                             */
//	802DE868: 802DE95C (load__10JUTPaletteFv)
//	802DE874: 8035E414 (GXLoadTexObj)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  _GXTexMapID False
asm void JUTTexture::load(_GXTexMapID param_0) {
	nofralloc
#include "asm/JSystem/JUtility/JUTTexture/load__10JUTTextureF11_GXTexMapID.s"
}
#pragma pop


