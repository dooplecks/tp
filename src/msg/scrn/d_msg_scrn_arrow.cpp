// 
// Generated By: dol2asm
// Translation Unit: msg/scrn/d_msg_scrn_arrow
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "msg/scrn/d_msg_scrn_arrow.h"

// 
// Types:
// 

struct dMsgScrnArrow_c {
	/* 8023B9B4 */ // False False
dMsgScrnArrow_c();
	/* 8023BC78 */ // True False
~dMsgScrnArrow_c();
	/* 8023BDC0 */ // False False
void draw();
	/* 8023BDF8 */ // False False
//  f32 False
//  f32 False
void setPos(f32, f32);
	/* 8023BE34 */ // False False
void arwAnimeInit();
	/* 8023BE90 */ // False False
void arwAnimeMove();
	/* 8023BFC4 */ // False False
void dotAnimeInit();
	/* 8023C010 */ // False False
void dotAnimeMove();
};

struct JKRFileLoader {
	/* 802D4270 */ // False False
//  char const* False
// 	 char const False
// 		 char False
//  JKRFileLoader* False
// 	 JKRFileLoader False
void getGlbResource(char const*, JKRFileLoader*);
};

struct JKRExpHeap {
};

struct JKRArchive {
};

struct J2DGrafContext {
};

struct J2DScreen {
	/* 802F8498 */ // False False
J2DScreen();
	/* 802F8648 */ // False False
//  char const* False
// 	 char const False
// 		 char False
//  u32 False
//  JKRArchive* False
// 	 JKRArchive False
void setPriority(char const*, u32, JKRArchive*);
	/* 802F8ED4 */ // False False
//  f32 False
//  f32 False
//  J2DGrafContext const* False
// 	 J2DGrafContext const False
// 		 J2DGrafContext False
void draw(f32, f32, J2DGrafContext const*);
	/* 802F9690 */ // False False
void animation();
};

struct J2DAnmLoaderDataBase {
	/* 80308A6C */ // False False
//  void const* False
// 	 void const False
// 		 void False
void load(void const*);
};

struct CPaneMgrAlpha {
	/* 802555C8 */ // False False
void show();
	/* 80255608 */ // False False
void hide();
	/* 8025564C */ // False False
void isVisible();
};

struct CPaneMgr {
	/* 80253984 */ // False False
//  J2DScreen* False
// 	 J2DScreen False
//  u64 False
//  u8 False
//  JKRExpHeap* False
// 	 JKRExpHeap False
CPaneMgr(J2DScreen*, u64, u8, JKRExpHeap*);
};

// 
// Forward References:
// 


// False False
extern "C" void __ct__15dMsgScrnArrow_cFv();
// True False
extern "C" void __dt__15dMsgScrnArrow_cFv();
// False False
extern "C" void draw__15dMsgScrnArrow_cFv();
// False False
//  f32 False
//  f32 False
extern "C" void setPos__15dMsgScrnArrow_cFff();
// False False
extern "C" void arwAnimeInit__15dMsgScrnArrow_cFv();
// False False
extern "C" void arwAnimeMove__15dMsgScrnArrow_cFv();
// False False
extern "C" void dotAnimeInit__15dMsgScrnArrow_cFv();
// False False
extern "C" void dotAnimeMove__15dMsgScrnArrow_cFv();
extern "C" extern char const* const msg_scrn_d_msg_scrn_arrow__stringBase0;
extern "C" extern void* __vt__15dMsgScrnArrow_c[3 + 1 /* padding */];

// 
// External References:
// 

// False False
//  J2DScreen* False
// 	 J2DScreen False
void dPaneClass_showNullPane(J2DScreen*);
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
//  J2DScreen* False
// 	 J2DScreen False
//  u64 False
//  u8 False
//  JKRExpHeap* False
// 	 JKRExpHeap False
extern "C" void __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap();
// False False
//  J2DScreen* False
// 	 J2DScreen False
extern "C" void dPaneClass_showNullPane__FP9J2DScreen();
// False False
extern "C" void show__13CPaneMgrAlphaFv();
// False False
extern "C" void hide__13CPaneMgrAlphaFv();
// False False
extern "C" void isVisible__13CPaneMgrAlphaFv();
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
//  char const* False
// 	 char const False
// 		 char False
//  JKRFileLoader* False
// 	 JKRFileLoader False
extern "C" void getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader();
// False False
extern "C" void __ct__9J2DScreenFv();
// False False
//  char const* False
// 	 char const False
// 		 char False
//  u32 False
//  JKRArchive* False
// 	 JKRArchive False
extern "C" void setPriority__9J2DScreenFPCcUlP10JKRArchive();
// False False
//  f32 False
//  f32 False
//  J2DGrafContext const* False
// 	 J2DGrafContext const False
// 		 J2DGrafContext False
extern "C" void draw__9J2DScreenFffPC14J2DGrafContext();
// False False
extern "C" void animation__9J2DScreenFv();
// False False
//  void const* False
// 	 void const False
// 		 void False
extern "C" void load__20J2DAnmLoaderDataBaseFPCv();
extern "C" extern u8 g_dComIfG_gameInfo[122384];

// 
// Declarations:
// 

/* ############################################################################################## */
/* 803998A0-803998F8 0051+07 s=1 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_803998A0 = "zelda_window_yajirushi.blo";
SECTION_DEAD char const* const stringBase_803998BB = "zelda_window_yajirushi.bck";
SECTION_DEAD char const* const stringBase_803998D6 = "zelda_window_yajirushi.bpk";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_803998F1 = "\0\0\0\0\0\0";
#pragma pop

/* 803C0CF8-803C0D08 000C+04 s=2 e=0 z=0  None .data      __vt__15dMsgScrnArrow_c                                      */
SECTION_DATA void* __vt__15dMsgScrnArrow_c[3 + 1 /* padding */] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__15dMsgScrnArrow_cFv,
	/* padding */
	NULL,
};

/* 80454B98-80454B9C 0004+00 s=4 e=0 z=0  None .sdata2    @3662                                                        */
SECTION_SDATA2 static u8 lit_3662[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 8023B9B4-8023BC78 02C4+00 s=0 e=4 z=0  None .text      __ct__15dMsgScrnArrow_cFv                                    */
//	8023B9CC: 803C0CF8 (__vt__15dMsgScrnArrow_c)
//	8023B9D0: 803C0CF8 (__vt__15dMsgScrnArrow_c)
//	8023B9DC: 802CEC4C (__nw__FUl)
//	8023B9E8: 802F8498 (__ct__9J2DScreenFv)
//	8023B9F8: 803998A0 (msg_scrn_d_msg_scrn_arrow__stringBase0)
//	8023B9FC: 803998A0 (msg_scrn_d_msg_scrn_arrow__stringBase0)
//	8023BA04: 804061C0 (g_dComIfG_gameInfo)
//	8023BA08: 804061C0 (g_dComIfG_gameInfo)
//	8023BA10: 802F8648 (setPriority__9J2DScreenFPCcUlP10JKRArchive)
//	8023BA18: 802550E8 (dPaneClass_showNullPane__FP9J2DScreen)
//	8023BA4C: 803998A0 (msg_scrn_d_msg_scrn_arrow__stringBase0)
//	8023BA50: 803998A0 (msg_scrn_d_msg_scrn_arrow__stringBase0)
//	8023BA5C: 802D4270 (getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader)
//	8023BA60: 80308A6C (load__20J2DAnmLoaderDataBaseFPCv)
//	8023BA68: 80454B98 (lit_3662)
//	8023BA70: 803998A0 (msg_scrn_d_msg_scrn_arrow__stringBase0)
//	8023BA74: 803998A0 (msg_scrn_d_msg_scrn_arrow__stringBase0)
//	8023BA80: 802D4270 (getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader)
//	8023BA84: 80308A6C (load__20J2DAnmLoaderDataBaseFPCv)
//	8023BAA4: 80454B98 (lit_3662)
//	8023BAB0: 802CEC4C (__nw__FUl)
//	8023BAD8: 80253984 (__ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap)
//	8023BAE8: 802CEC4C (__nw__FUl)
//	8023BB10: 80253984 (__ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap)
//	8023BB20: 80255608 (hide__13CPaneMgrAlphaFv)
//	8023BBB4: 802CEC4C (__nw__FUl)
//	8023BBD8: 80253984 (__ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap)
//	8023BBE8: 80255608 (hide__13CPaneMgrAlphaFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm dMsgScrnArrow_c::dMsgScrnArrow_c() {
	nofralloc
#include "asm/msg/scrn/d_msg_scrn_arrow/__ct__15dMsgScrnArrow_cFv.s"
}
#pragma pop


/* 8023BC78-8023BDC0 0148+00 s=1 e=0 z=0  None .text      __dt__15dMsgScrnArrow_cFv                                    */
//	8023BC98: 803C0CF8 (__vt__15dMsgScrnArrow_c)
//	8023BC9C: 803C0CF8 (__vt__15dMsgScrnArrow_c)
//	8023BDA0: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm dMsgScrnArrow_c::~dMsgScrnArrow_c() {
	nofralloc
#include "asm/msg/scrn/d_msg_scrn_arrow/__dt__15dMsgScrnArrow_cFv.s"
}
#pragma pop


/* 8023BDC0-8023BDF8 0038+00 s=0 e=5 z=0  None .text      draw__15dMsgScrnArrow_cFv                                    */
//	8023BDCC: 804061C0 (g_dComIfG_gameInfo)
//	8023BDD0: 804061C0 (g_dComIfG_gameInfo)
//	8023BDDC: 80454B98 (lit_3662)
//	8023BDE4: 802F8ED4 (draw__9J2DScreenFffPC14J2DGrafContext)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dMsgScrnArrow_c::draw() {
	nofralloc
#include "asm/msg/scrn/d_msg_scrn_arrow/draw__15dMsgScrnArrow_cFv.s"
}
#pragma pop


/* 8023BDF8-8023BE34 003C+00 s=0 e=5 z=0  None .text      setPos__15dMsgScrnArrow_cFff                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  f32 False
//  f32 False
asm void dMsgScrnArrow_c::setPos(f32 param_0, f32 param_1) {
	nofralloc
#include "asm/msg/scrn/d_msg_scrn_arrow/setPos__15dMsgScrnArrow_cFff.s"
}
#pragma pop


/* 8023BE34-8023BE90 005C+00 s=0 e=9 z=0  None .text      arwAnimeInit__15dMsgScrnArrow_cFv                            */
//	8023BE4C: 80255608 (hide__13CPaneMgrAlphaFv)
//	8023BE50: 80454B98 (lit_3662)
//	8023BE78: 802F9690 (animation__9J2DScreenFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dMsgScrnArrow_c::arwAnimeInit() {
	nofralloc
#include "asm/msg/scrn/d_msg_scrn_arrow/arwAnimeInit__15dMsgScrnArrow_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80454B9C-80454BA0 0004+00 s=2 e=0 z=0  None .sdata2    @3761                                                        */
SECTION_SDATA2 static f32 lit_3761 = 1.0f;

/* 80454BA0-80454BA8 0008+00 s=2 e=0 z=0  None .sdata2    @3763                                                        */
SECTION_SDATA2 static f64 lit_3763 = 4503601774854144.0 /* cast s32 to float */;

/* 8023BE90-8023BFC4 0134+00 s=0 e=4 z=0  None .text      arwAnimeMove__15dMsgScrnArrow_cFv                            */
//	8023BEA8: 8025564C (isVisible__13CPaneMgrAlphaFv)
//	8023BEB8: 802555C8 (show__13CPaneMgrAlphaFv)
//	8023BEC0: 8025564C (isVisible__13CPaneMgrAlphaFv)
//	8023BED4: 80255608 (hide__13CPaneMgrAlphaFv)
//	8023BEDC: 80454B9C (lit_3761)
//	8023BEF4: 80454BA0 (lit_3763)
//	8023BF44: 80454B9C (lit_3761)
//	8023BF5C: 80454BA0 (lit_3763)
//	8023BFAC: 802F9690 (animation__9J2DScreenFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dMsgScrnArrow_c::arwAnimeMove() {
	nofralloc
#include "asm/msg/scrn/d_msg_scrn_arrow/arwAnimeMove__15dMsgScrnArrow_cFv.s"
}
#pragma pop


/* 8023BFC4-8023C010 004C+00 s=0 e=3 z=0  None .text      dotAnimeInit__15dMsgScrnArrow_cFv                            */
//	8023BFDC: 80255608 (hide__13CPaneMgrAlphaFv)
//	8023BFE0: 80454B98 (lit_3662)
//	8023BFF8: 802F9690 (animation__9J2DScreenFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dMsgScrnArrow_c::dotAnimeInit() {
	nofralloc
#include "asm/msg/scrn/d_msg_scrn_arrow/dotAnimeInit__15dMsgScrnArrow_cFv.s"
}
#pragma pop


/* 8023C010-8023C0DC 00CC+00 s=0 e=3 z=0  None .text      dotAnimeMove__15dMsgScrnArrow_cFv                            */
//	8023C028: 8025564C (isVisible__13CPaneMgrAlphaFv)
//	8023C03C: 80255608 (hide__13CPaneMgrAlphaFv)
//	8023C044: 8025564C (isVisible__13CPaneMgrAlphaFv)
//	8023C054: 802555C8 (show__13CPaneMgrAlphaFv)
//	8023C05C: 80454B9C (lit_3761)
//	8023C074: 80454BA0 (lit_3763)
//	8023C0C4: 802F9690 (animation__9J2DScreenFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dMsgScrnArrow_c::dotAnimeMove() {
	nofralloc
#include "asm/msg/scrn/d_msg_scrn_arrow/dotAnimeMove__15dMsgScrnArrow_cFv.s"
}
#pragma pop


