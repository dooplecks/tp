//
// Generated By: dol2asm
// Translation Unit: d/pane/d_pane_class
//

#include "d/pane/d_pane_class.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JUtility {
    struct TColor {};
};

struct JSURandomInputStream {
    /* 80255328 */ ~JSURandomInputStream();
};

struct JSUMemoryInputStream {
    /* 802552B8 */ ~JSUMemoryInputStream();
    /* 802DC520 */ void setBuffer(void const*, s32);
};

struct JSUIosBase {
    /* 80255388 */ ~JSUIosBase();
};

struct JSUInputStream {
    /* 802DC23C */ ~JSUInputStream();
};

struct JKRHeap {
    /* 802CE4D4 */ void alloc(u32, int);
    /* 802CE548 */ void free(void*);
};

struct JKRExpHeap {};

struct JKRArchive {};

struct JKRAramArchive {};

struct JGeometry {
    template <typename A1>
    struct TBox2 {};
    /* TBox2<f32> */
    struct TBox2__template0 {};
};

struct J2DWindow {
    /* 80254000 */ void getBlack() const;
    /* 8025400C */ void getWhite() const;
    /* 802543E0 */ void setWhite(JUtility::TColor);
    /* 80254430 */ void setBlack(JUtility::TColor);
    /* 80254568 */ void setBlackWhite(JUtility::TColor, JUtility::TColor);
};

struct J2DTextBox {
    /* 80254408 */ void setBlack(JUtility::TColor);
};

struct J2DScreen {
    /* 802F8748 */ void setPriority(JSURandomInputStream*, u32, JKRArchive*);
};

struct J2DRotateAxis {};

struct J2DPane {
    /* 802F7100 */ void getBounds();
    /* 802F71DC */ void rotate(f32, f32, J2DRotateAxis, f32);
    /* 802F7A8C */ void getFirstChildPane();
    /* 802F7AC4 */ void getNextChildPane();
    /* 802F7AFC */ void getParentPane();
};

struct J2DOrthoGraph {
    /* 802E96D0 */ J2DOrthoGraph(f32, f32, f32, f32, f32, f32);
    /* 802E980C */ void setOrtho(JGeometry::TBox2<f32> const&, f32, f32);
};

struct CPaneMgrAlpha {
    /* 802553EC */ CPaneMgrAlpha();
    /* 8025546C */ ~CPaneMgrAlpha();
    /* 80255658 */ void rateCalc(s16, s16, u8);
    /* 80255A60 */ void childPaneCount(J2DPane*);
    /* 80255ACC */ void childPaneGetAlpha(J2DPane*);
    /* 80255B5C */ void childPaneSetAlpha(J2DPane*, u8);
};

struct CPaneMgr {
    /* 80253984 */ CPaneMgr(J2DScreen*, u64, u8, JKRExpHeap*);
    /* 80253930 */ CPaneMgr();
    /* 80253A18 */ ~CPaneMgr();
    /* 80253AB4 */ void setAlpha(u8);
    /* 80253B2C */ void reinit();
    /* 80253C08 */ void initiate(J2DPane*, JKRExpHeap*);
    /* 80254018 */ void childPaneGetSize(J2DPane*);
    /* 80254134 */ void childPaneSetSize(J2DPane*, f32, f32);
    /* 802542E8 */ void getGlobalPosX();
    /* 80254364 */ void getGlobalPosY();
    /* 80254458 */ void setBlackWhite(JUtility::TColor, JUtility::TColor);
    /* 802545B0 */ void paneTrans(f32, f32);
    /* 80254638 */ void paneScale(f32, f32);
    /* 802547CC */ void scaleAnime(s16, f32, f32, u8);
    /* 802548BC */ void colorAnime(s16, JUtility::TColor, JUtility::TColor, JUtility::TColor,
                                   JUtility::TColor, u8);
    /* 80254C90 */ void getGlobalVtx(J2DPane*, f32 (*)[3][4], u8, bool, s16);
    /* 80254EBC */ void getGlobalVtxCenter(J2DPane*, bool, s16);
    /* 80254FB8 */ void getBounds(J2DPane*);
};

//
// Forward References:
//

extern "C" void __ct__8CPaneMgrFv();
extern "C" void __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap();
extern "C" void __dt__8CPaneMgrFv();
extern "C" void setAlpha__8CPaneMgrFUc();
extern "C" void reinit__8CPaneMgrFv();
extern "C" void initiate__8CPaneMgrFP7J2DPaneP10JKRExpHeap();
extern "C" void getBlack__9J2DWindowCFv();
extern "C" void getWhite__9J2DWindowCFv();
extern "C" void childPaneGetSize__8CPaneMgrFP7J2DPane();
extern "C" void childPaneSetSize__8CPaneMgrFP7J2DPaneff();
extern "C" void getGlobalPosX__8CPaneMgrFv();
extern "C" void getGlobalPosY__8CPaneMgrFv();
extern "C" void setWhite__9J2DWindowFQ28JUtility6TColor();
extern "C" void setBlack__10J2DTextBoxFQ28JUtility6TColor();
extern "C" void setBlack__9J2DWindowFQ28JUtility6TColor();
extern "C" void setBlackWhite__8CPaneMgrFQ28JUtility6TColorQ28JUtility6TColor();
extern "C" void setBlackWhite__9J2DWindowFQ28JUtility6TColorQ28JUtility6TColor();
extern "C" void paneTrans__8CPaneMgrFff();
extern "C" void paneScale__8CPaneMgrFff();
extern "C" void scaleAnime__8CPaneMgrFsffUc();
extern "C" void
colorAnime__8CPaneMgrFsQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorUc();
extern "C" void getGlobalVtx__8CPaneMgrFP7J2DPanePA3_A4_fUcbs();
extern "C" void getGlobalVtxCenter__8CPaneMgrFP7J2DPanebs();
extern "C" void getBounds__8CPaneMgrFP7J2DPane();
extern "C" void dPaneClass_showNullPane__FP9J2DScreen();
extern "C" static void dPaneClass_showNullPane__FP7J2DPane();
extern "C" void dPaneClass_setPriority__FPPvP7JKRHeapP9J2DScreenPCcUlP10JKRArchive();
extern "C" void __dt__20JSUMemoryInputStreamFv();
extern "C" void __dt__20JSURandomInputStreamFv();
extern "C" void __dt__10JSUIosBaseFv();
extern "C" void __sinit_d_pane_class_cpp();

//
// External References:
//

extern "C" void mDoExt_getCurrentHeap__Fv();
extern "C" void dLib_getExpandSizeFromAramArchive__FP14JKRAramArchivePCc();
extern "C" void __ct__13CPaneMgrAlphaFv();
extern "C" void __dt__13CPaneMgrAlphaFv();
extern "C" void rateCalc__13CPaneMgrAlphaFssUc();
extern "C" void childPaneCount__13CPaneMgrAlphaFP7J2DPane();
extern "C" void childPaneGetAlpha__13CPaneMgrAlphaFP7J2DPane();
extern "C" void childPaneSetAlpha__13CPaneMgrAlphaFP7J2DPaneUc();
extern "C" void alloc__7JKRHeapFUli();
extern "C" void free__7JKRHeapFPv();
extern "C" void __dl__FPv();
extern "C" void __dt__14JSUInputStreamFv();
extern "C" void setBuffer__20JSUMemoryInputStreamFPCvl();
extern "C" void __ct__13J2DOrthoGraphFffffff();
extern "C" void func_802E980C();
extern "C" void getBounds__7J2DPaneFv();
extern "C" void rotate__7J2DPaneFff13J2DRotateAxisf();
extern "C" void getFirstChildPane__7J2DPaneFv();
extern "C" void getNextChildPane__7J2DPaneFv();
extern "C" void getParentPane__7J2DPaneFv();
extern "C" void setPriority__9J2DScreenFP20JSURandomInputStreamUlP10JKRArchive();
extern "C" void PSMTXCopy();
extern "C" void PSMTXConcat();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__20JSURandomInputStream[9];
extern "C" extern void* __vt__14JSUInputStream[6 + 1 /* padding */];
extern "C" extern void* __vt__20JSUMemoryInputStream[9 + 1 /* padding */];
extern "C" extern void* __vt__14J2DGrafContext[10];
extern "C" extern void* __vt__13J2DOrthoGraph[10];

//
// Declarations:
//

/* ############################################################################################## */
/* 803C2DF8-803C2E04 01FF18 000C+00 2/2 4/4 0/0 .data            __vt__10JSUIosBase */
SECTION_DATA extern void* __vt__10JSUIosBase[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10JSUIosBaseFv,
};

/* 803C2E04-803C2E18 01FF24 0010+04 3/3 0/0 0/0 .data            __vt__8CPaneMgr */
SECTION_DATA extern void* __vt__8CPaneMgr[4 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8CPaneMgrFv,
    (void*)setAlpha__8CPaneMgrFUc,
    /* padding */
    NULL,
};

/* 80253930-80253984 24E270 0054+00 0/0 11/11 0/0 .text            __ct__8CPaneMgrFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm CPaneMgr::CPaneMgr() {
    nofralloc
#include "asm/d/pane/d_pane_class/__ct__8CPaneMgrFv.s"
}
#pragma pop

/* 80253984-80253A18 24E2C4 0094+00 0/0 58/58 2/2 .text
 * __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm CPaneMgr::CPaneMgr(J2DScreen* param_0, u64 param_1, u8 param_2, JKRExpHeap* param_3) {
    nofralloc
#include "asm/d/pane/d_pane_class/__ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap.s"
}
#pragma pop

/* 80253A18-80253AB4 24E358 009C+00 1/0 11/11 0/0 .text            __dt__8CPaneMgrFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm CPaneMgr::~CPaneMgr() {
    nofralloc
#include "asm/d/pane/d_pane_class/__dt__8CPaneMgrFv.s"
}
#pragma pop

/* 80253AB4-80253B2C 24E3F4 0078+00 1/0 0/0 0/0 .text            setAlpha__8CPaneMgrFUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void CPaneMgr::setAlpha(u8 param_0) {
    nofralloc
#include "asm/d/pane/d_pane_class/setAlpha__8CPaneMgrFUc.s"
}
#pragma pop

/* 80253B2C-80253C08 24E46C 00DC+00 0/0 3/3 0/0 .text            reinit__8CPaneMgrFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void CPaneMgr::reinit() {
    nofralloc
#include "asm/d/pane/d_pane_class/reinit__8CPaneMgrFv.s"
}
#pragma pop

/* 80253C08-80254000 24E548 03F8+00 1/1 0/0 0/0 .text initiate__8CPaneMgrFP7J2DPaneP10JKRExpHeap
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void CPaneMgr::initiate(J2DPane* param_0, JKRExpHeap* param_1) {
    nofralloc
#include "asm/d/pane/d_pane_class/initiate__8CPaneMgrFP7J2DPaneP10JKRExpHeap.s"
}
#pragma pop

/* 80254000-8025400C 24E940 000C+00 0/0 1/0 0/0 .text            getBlack__9J2DWindowCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindow::getBlack() const {
    nofralloc
#include "asm/d/pane/d_pane_class/getBlack__9J2DWindowCFv.s"
}
#pragma pop

/* 8025400C-80254018 24E94C 000C+00 0/0 1/0 0/0 .text            getWhite__9J2DWindowCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindow::getWhite() const {
    nofralloc
#include "asm/d/pane/d_pane_class/getWhite__9J2DWindowCFv.s"
}
#pragma pop

/* 80254018-80254134 24E958 011C+00 1/1 0/0 0/0 .text childPaneGetSize__8CPaneMgrFP7J2DPane */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void CPaneMgr::childPaneGetSize(J2DPane* param_0) {
    nofralloc
#include "asm/d/pane/d_pane_class/childPaneGetSize__8CPaneMgrFP7J2DPane.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454E88-80454E90 003488 0004+04 4/4 0/0 0/0 .sdata2          @3858 */
SECTION_SDATA2 static f32 lit_3858[1 + 1 /* padding */] = {
    0.0f,
    /* padding */
    0.0f,
};

/* 80454E90-80454E98 003490 0008+00 2/2 0/0 0/0 .sdata2          @3860 */
SECTION_SDATA2 static f64 lit_3860 = 4503601774854144.0 /* cast s32 to float */;

/* 80254134-802542E8 24EA74 01B4+00 1/1 0/0 0/0 .text childPaneSetSize__8CPaneMgrFP7J2DPaneff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void CPaneMgr::childPaneSetSize(J2DPane* param_0, f32 param_1, f32 param_2) {
    nofralloc
#include "asm/d/pane/d_pane_class/childPaneSetSize__8CPaneMgrFP7J2DPaneff.s"
}
#pragma pop

/* 802542E8-80254364 24EC28 007C+00 2/2 18/18 0/0 .text            getGlobalPosX__8CPaneMgrFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void CPaneMgr::getGlobalPosX() {
    nofralloc
#include "asm/d/pane/d_pane_class/getGlobalPosX__8CPaneMgrFv.s"
}
#pragma pop

/* 80254364-802543E0 24ECA4 007C+00 2/2 15/15 0/0 .text            getGlobalPosY__8CPaneMgrFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void CPaneMgr::getGlobalPosY() {
    nofralloc
#include "asm/d/pane/d_pane_class/getGlobalPosY__8CPaneMgrFv.s"
}
#pragma pop

/* 802543E0-80254408 24ED20 0028+00 0/0 1/0 0/0 .text setWhite__9J2DWindowFQ28JUtility6TColor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindow::setWhite(JUtility::TColor param_0) {
    nofralloc
#include "asm/d/pane/d_pane_class/setWhite__9J2DWindowFQ28JUtility6TColor.s"
}
#pragma pop

/* 80254408-80254430 24ED48 0028+00 0/0 1/0 0/0 .text setBlack__10J2DTextBoxFQ28JUtility6TColor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBox::setBlack(JUtility::TColor param_0) {
    nofralloc
#include "asm/d/pane/d_pane_class/setBlack__10J2DTextBoxFQ28JUtility6TColor.s"
}
#pragma pop

/* 80254430-80254458 24ED70 0028+00 0/0 1/0 0/0 .text setBlack__9J2DWindowFQ28JUtility6TColor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindow::setBlack(JUtility::TColor param_0) {
    nofralloc
#include "asm/d/pane/d_pane_class/setBlack__9J2DWindowFQ28JUtility6TColor.s"
}
#pragma pop

/* 80254458-80254568 24ED98 0110+00 1/1 7/7 0/0 .text
 * setBlackWhite__8CPaneMgrFQ28JUtility6TColorQ28JUtility6TColor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void CPaneMgr::setBlackWhite(JUtility::TColor param_0, JUtility::TColor param_1) {
    nofralloc
#include "asm/d/pane/d_pane_class/setBlackWhite__8CPaneMgrFQ28JUtility6TColorQ28JUtility6TColor.s"
}
#pragma pop

/* 80254568-802545B0 24EEA8 0048+00 0/0 1/0 0/0 .text
 * setBlackWhite__9J2DWindowFQ28JUtility6TColorQ28JUtility6TColor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindow::setBlackWhite(JUtility::TColor param_0, JUtility::TColor param_1) {
    nofralloc
#include "asm/d/pane/d_pane_class/setBlackWhite__9J2DWindowFQ28JUtility6TColorQ28JUtility6TColor.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454E98-80454EA0 003498 0004+04 3/3 0/0 0/0 .sdata2          @4046 */
SECTION_SDATA2 static f32 lit_4046[1 + 1 /* padding */] = {
    0.5f,
    /* padding */
    0.0f,
};

/* 802545B0-80254638 24EEF0 0088+00 0/0 51/51 3/3 .text            paneTrans__8CPaneMgrFff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void CPaneMgr::paneTrans(f32 param_0, f32 param_1) {
    nofralloc
#include "asm/d/pane/d_pane_class/paneTrans__8CPaneMgrFff.s"
}
#pragma pop

/* 80254638-802547CC 24EF78 0194+00 0/0 5/5 0/0 .text            paneScale__8CPaneMgrFff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void CPaneMgr::paneScale(f32 param_0, f32 param_1) {
    nofralloc
#include "asm/d/pane/d_pane_class/paneScale__8CPaneMgrFff.s"
}
#pragma pop

/* 802547CC-802548BC 24F10C 00F0+00 0/0 10/10 0/0 .text            scaleAnime__8CPaneMgrFsffUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void CPaneMgr::scaleAnime(s16 param_0, f32 param_1, f32 param_2, u8 param_3) {
    nofralloc
#include "asm/d/pane/d_pane_class/scaleAnime__8CPaneMgrFsffUc.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454EA0-80454EA8 0034A0 0008+00 1/1 0/0 0/0 .sdata2          @4349 */
SECTION_SDATA2 static f64 lit_4349 = 4503599627370496.0 /* cast u32 to float */;

/* 802548BC-80254C90 24F1FC 03D4+00 0/0 4/4 0/0 .text
 * colorAnime__8CPaneMgrFsQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorUc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void CPaneMgr::colorAnime(s16 param_0, JUtility::TColor param_1, JUtility::TColor param_2,
                              JUtility::TColor param_3, JUtility::TColor param_4, u8 param_5) {
    nofralloc
#include "asm/d/pane/d_pane_class/func_802548BC.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454EA8-80454EAC 0034A8 0004+00 1/1 0/0 0/0 .sdata2          @4473 */
SECTION_SDATA2 static f32 lit_4473 = 608.0f;

/* 80454EAC-80454EB0 0034AC 0004+00 1/1 0/0 0/0 .sdata2          @4474 */
SECTION_SDATA2 static f32 lit_4474 = 448.0f;

/* 80454EB0-80454EB4 0034B0 0004+00 1/1 0/0 0/0 .sdata2          @4475 */
SECTION_SDATA2 static f32 lit_4475 = -1.0f;

/* 80454EB4-80454EB8 0034B4 0004+00 1/1 0/0 0/0 .sdata2          @4476 */
SECTION_SDATA2 static f32 lit_4476 = 1.0f;

/* 80254C90-80254EBC 24F5D0 022C+00 1/1 9/9 0/0 .text
 * getGlobalVtx__8CPaneMgrFP7J2DPanePA3_A4_fUcbs                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void CPaneMgr::getGlobalVtx(J2DPane* param_0, f32 (*param_1)[3][4], u8 param_2, bool param_3,
                                s16 param_4) {
    nofralloc
#include "asm/d/pane/d_pane_class/getGlobalVtx__8CPaneMgrFP7J2DPanePA3_A4_fUcbs.s"
}
#pragma pop

/* 80254EBC-80254FB8 24F7FC 00FC+00 0/0 56/56 1/1 .text getGlobalVtxCenter__8CPaneMgrFP7J2DPanebs
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void CPaneMgr::getGlobalVtxCenter(J2DPane* param_0, bool param_1, s16 param_2) {
    nofralloc
#include "asm/d/pane/d_pane_class/getGlobalVtxCenter__8CPaneMgrFP7J2DPanebs.s"
}
#pragma pop

/* ############################################################################################## */
/* 80430748-80430758 05D468 0010+00 2/2 0/0 0/0 .bss             static_mBounds */
static u8 static_mBounds[16];

/* 80254FB8-802550E8 24F8F8 0130+00 1/1 0/0 0/0 .text            getBounds__8CPaneMgrFP7J2DPane */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void CPaneMgr::getBounds(J2DPane* param_0) {
    nofralloc
#include "asm/d/pane/d_pane_class/getBounds__8CPaneMgrFP7J2DPane.s"
}
#pragma pop

/* 802550E8-8025512C 24FA28 0044+00 0/0 54/54 3/3 .text dPaneClass_showNullPane__FP9J2DScreen */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dPaneClass_showNullPane(J2DScreen* param_0) {
    nofralloc
#include "asm/d/pane/d_pane_class/dPaneClass_showNullPane__FP9J2DScreen.s"
}
#pragma pop

/* 8025512C-80255184 24FA6C 0058+00 1/1 0/0 0/0 .text            dPaneClass_showNullPane__FP7J2DPane
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void dPaneClass_showNullPane(J2DPane* param_0) {
    nofralloc
#include "asm/d/pane/d_pane_class/dPaneClass_showNullPane__FP7J2DPane.s"
}
#pragma pop

/* 80255184-802552B8 24FAC4 0134+00 0/0 1/1 0/0 .text
 * dPaneClass_setPriority__FPPvP7JKRHeapP9J2DScreenPCcUlP10JKRArchive */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dPaneClass_setPriority(void** param_0, JKRHeap* param_1, J2DScreen* param_2,
                                char const* param_3, u32 param_4, JKRArchive* param_5) {
    nofralloc
#include "asm/d/pane/d_pane_class/dPaneClass_setPriority__FPPvP7JKRHeapP9J2DScreenPCcUlP10JKRArchive.s"
}
#pragma pop

/* 802552B8-80255328 24FBF8 0070+00 0/0 1/0 0/0 .text            __dt__20JSUMemoryInputStreamFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JSUMemoryInputStream::~JSUMemoryInputStream() {
    nofralloc
#include "asm/d/pane/d_pane_class/__dt__20JSUMemoryInputStreamFv.s"
}
#pragma pop

/* 80255328-80255388 24FC68 0060+00 0/0 1/0 0/0 .text            __dt__20JSURandomInputStreamFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JSURandomInputStream::~JSURandomInputStream() {
    nofralloc
#include "asm/d/pane/d_pane_class/__dt__20JSURandomInputStreamFv.s"
}
#pragma pop

/* 80255388-802553D0 24FCC8 0048+00 1/0 0/0 0/0 .text            __dt__10JSUIosBaseFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JSUIosBase::~JSUIosBase() {
    nofralloc
#include "asm/d/pane/d_pane_class/__dt__10JSUIosBaseFv.s"
}
#pragma pop

/* 802553D0-802553EC 24FD10 001C+00 0/0 1/0 0/0 .text            __sinit_d_pane_class_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_pane_class_cpp() {
    nofralloc
#include "asm/d/pane/d_pane_class/__sinit_d_pane_class_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_802553D0 = (void*)__sinit_d_pane_class_cpp;
#pragma pop
