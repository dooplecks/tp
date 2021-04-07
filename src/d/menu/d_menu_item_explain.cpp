//
// Generated By: dol2asm
// Translation Unit: d/menu/d_menu_item_explain
//

#include "d/menu/d_menu_item_explain.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct mDoCPd_c {
    static u8 m_cpadInfo[256];
};

struct dSv_player_item_record_c {
    /* 80033F7C */ void getBombNum(u8) const;
};

struct dSv_player_item_c {
    /* 80033030 */ void getItem(int, bool) const;
};

struct dSv_player_get_item_c {
    /* 80033EC8 */ void isFirstBit(u8) const;
};

struct dMsgString_c {
    /* 80249CA0 */ dMsgString_c(u8);
    /* 80249D28 */ ~dMsgString_c();
};

struct dMsgScrnArrow_c {
    /* 8023BDC0 */ void draw();
    /* 8023BE34 */ void arwAnimeInit();
    /* 8023BE90 */ void arwAnimeMove();
};

struct dMsgScrn3Select_c {
    /* 80239C64 */ void isSelect();
    /* 80239C78 */ void setString(char*, char*, char*);
    /* 80239D08 */ void setRubyString(char*, char*, char*);
    /* 80239D98 */ void translate(f32, f32);
    /* 80239DD4 */ void draw(f32, f32);
    /* 8023A094 */ void selAnimeInit(u8, u8, u8, f32, u8);
    /* 8023A398 */ void selAnimeMove(u8, u8, bool);
    /* 8023A680 */ void selAnimeEnd();
    /* 8023A934 */ void getTextBoxWidth();
    /* 8023A94C */ void getFontSize();
    /* 8023A97C */ void getCharSpace();
};

struct ResTLUT {};

struct JGeometry {
    template <typename A1>
    struct TBox2 {};
    /* TBox2<f32> */
    struct TBox2__template0 {};
};

struct ResTIMG {};

struct J2DPicture {
    /* 802FC708 */ J2DPicture(ResTIMG const*);
    /* 802FC800 */ J2DPicture(u64, JGeometry::TBox2<f32> const&, ResTIMG const*, ResTLUT const*);
};

struct JMSMesgEntry_c {};

struct JUTFont {};

struct dMeter2Info_c {
    /* 8021C250 */ void getString(u32, char*, JMSMesgEntry_c*);
    /* 8021C7FC */ void getStringLength(JUTFont*, f32, f32, char*);
    /* 8021CF08 */ void readItemTexture(u8, void*, J2DPicture*, void*, J2DPicture*, void*,
                                        J2DPicture*, void*, J2DPicture*, int);
};

struct J2DOrthoGraph {};

struct JKRExpHeap {};

struct JKRArchive {};

struct STControl {
    /* 8003219C */ void checkTrigger();
    /* 80032524 */ void checkUpTrigger();
    /* 800325A0 */ void checkDownTrigger();
};

struct dMenu_ItemExplain_c {
    /* 801DA754 */ dMenu_ItemExplain_c(JKRExpHeap*, JKRArchive*, STControl*, bool);
    /* 801DAFF0 */ ~dMenu_ItemExplain_c();
    /* 801DB470 */ void move();
    /* 801DB514 */ void draw(J2DOrthoGraph*);
    /* 801DB744 */ void drawKantera();
    /* 801DB818 */ void wait_init();
    /* 801DB81C */ void wait_proc();
    /* 801DB820 */ void open_init();
    /* 801DBAB4 */ void open_proc();
    /* 801DBB50 */ void move_init();
    /* 801DBB7C */ void move_proc();
    /* 801DBCB4 */ void move_select_init();
    /* 801DBF44 */ void move_select_proc();
    /* 801DC1E0 */ void move_next_init();
    /* 801DC214 */ void move_next_proc();
    /* 801DC2E4 */ void close_init();
    /* 801DC2F0 */ void close_proc();
    /* 801DC340 */ void openExplain(u8, u8, u8, bool);
    /* 801DC3C8 */ void openExplainDmap(u8, u8, u8, bool, u8);
    /* 801DC738 */ void openExplainTx(u32, u32);
    /* 801DC7AC */ void getAlphaRatio();
    /* 801DC7FC */ void setNumber();
    /* 801DCB54 */ void getWarpMarkFlag();
    /* 801DCBBC */ void setScale();
};

struct dKantera_icon_c {
    /* 801AE938 */ dKantera_icon_c();
    /* 801AEB7C */ void setAlphaRate(f32);
    /* 801AEBA0 */ void setPos(f32, f32);
    /* 801AEBF4 */ void setScale(f32, f32);
    /* 801AEC44 */ void setNowGauge(u16, u16);
};

struct Vec {};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

struct JKRHeap {
    /* 802CE4D4 */ void alloc(u32, int);
    /* 802CE548 */ void free(void*);
    /* 802CE784 */ void getTotalFreeSize();
};

struct J2DTextBox {
    /* 8030074C */ void setString(s16, char const*, ...);
};

struct J2DGrafContext {};

struct J2DScreen {
    /* 802F8498 */ J2DScreen();
    /* 802F8648 */ void setPriority(char const*, u32, JKRArchive*);
    /* 802F8ED4 */ void draw(f32, f32, J2DGrafContext const*);
    /* 802F9690 */ void animation();
};

struct J2DBasePosition {};

struct J2DPane {
    /* 802F666C */ void appendChild(J2DPane*);
    /* 802F7100 */ void getBounds();
    /* 802F76F8 */ void setBasePosition(J2DBasePosition);
};

struct CPaneMgrAlpha {
    /* 802555C8 */ void show();
    /* 80255608 */ void hide();
    /* 80255828 */ void getAlphaRate();
};

struct CPaneMgr {
    /* 80253984 */ CPaneMgr(J2DScreen*, u64, u8, JKRExpHeap*);
    /* 802542E8 */ void getGlobalPosX();
    /* 80254364 */ void getGlobalPosY();
    /* 802545B0 */ void paneTrans(f32, f32);
};

//
// Forward References:
//

extern "C" void __ct__19dMenu_ItemExplain_cFP10JKRExpHeapP10JKRArchiveP9STControlb();
extern "C" void __dt__19dMenu_ItemExplain_cFv();
extern "C" void move__19dMenu_ItemExplain_cFv();
extern "C" void draw__19dMenu_ItemExplain_cFP13J2DOrthoGraph();
extern "C" void drawKantera__19dMenu_ItemExplain_cFv();
extern "C" void wait_init__19dMenu_ItemExplain_cFv();
extern "C" void wait_proc__19dMenu_ItemExplain_cFv();
extern "C" void open_init__19dMenu_ItemExplain_cFv();
extern "C" void open_proc__19dMenu_ItemExplain_cFv();
extern "C" void move_init__19dMenu_ItemExplain_cFv();
extern "C" void move_proc__19dMenu_ItemExplain_cFv();
extern "C" void move_select_init__19dMenu_ItemExplain_cFv();
extern "C" void move_select_proc__19dMenu_ItemExplain_cFv();
extern "C" void move_next_init__19dMenu_ItemExplain_cFv();
extern "C" void move_next_proc__19dMenu_ItemExplain_cFv();
extern "C" void close_init__19dMenu_ItemExplain_cFv();
extern "C" void close_proc__19dMenu_ItemExplain_cFv();
extern "C" void openExplain__19dMenu_ItemExplain_cFUcUcUcb();
extern "C" void openExplainDmap__19dMenu_ItemExplain_cFUcUcUcbUc();
extern "C" void openExplainTx__19dMenu_ItemExplain_cFUlUl();
extern "C" void getAlphaRatio__19dMenu_ItemExplain_cFv();
extern "C" void setNumber__19dMenu_ItemExplain_cFv();
extern "C" void getWarpMarkFlag__19dMenu_ItemExplain_cFv();
extern "C" void setScale__19dMenu_ItemExplain_cFv();
extern "C" void __sinit_d_menu_item_explain_cpp();
extern "C" extern char const* const d_menu_d_menu_item_explain__stringBase0;

//
// External References:
//

extern "C" void mDoExt_getMesgFont__Fv();
extern "C" void dComIfGs_isDungeonItemWarp__Fi();
extern "C" void dComIfGs_getWarpMarkFlag__Fv();
extern "C" void checkTrigger__9STControlFv();
extern "C" void checkUpTrigger__9STControlFv();
extern "C" void checkDownTrigger__9STControlFv();
extern "C" void getItem__17dSv_player_item_cCFib();
extern "C" void isFirstBit__21dSv_player_get_item_cCFUc();
extern "C" void getBombNum__24dSv_player_item_record_cCFUc();
extern "C" void checkItemGet__FUci();
extern "C" void __ct__15dKantera_icon_cFv();
extern "C" void setAlphaRate__15dKantera_icon_cFf();
extern "C" void setPos__15dKantera_icon_cFff();
extern "C" void setScale__15dKantera_icon_cFff();
extern "C" void setNowGauge__15dKantera_icon_cFUsUs();
extern "C" void getString__13dMeter2Info_cFUlPcP14JMSMesgEntry_c();
extern "C" void getStringLength__13dMeter2Info_cFP7JUTFontffPc();
extern "C" void
readItemTexture__13dMeter2Info_cFUcPvP10J2DPicturePvP10J2DPicturePvP10J2DPicturePvP10J2DPicturei();
extern "C" void dMeter2Info_getNumberTextureName__Fi();
extern "C" void dMeter2Info_set2DVibration__Fv();
extern "C" void isSelect__17dMsgScrn3Select_cFv();
extern "C" void setString__17dMsgScrn3Select_cFPcPcPc();
extern "C" void setRubyString__17dMsgScrn3Select_cFPcPcPc();
extern "C" void translate__17dMsgScrn3Select_cFff();
extern "C" void draw__17dMsgScrn3Select_cFff();
extern "C" void selAnimeInit__17dMsgScrn3Select_cFUcUcUcfUc();
extern "C" void selAnimeMove__17dMsgScrn3Select_cFUcUcb();
extern "C" void selAnimeEnd__17dMsgScrn3Select_cFv();
extern "C" void getTextBoxWidth__17dMsgScrn3Select_cFv();
extern "C" void getFontSize__17dMsgScrn3Select_cFv();
extern "C" void getCharSpace__17dMsgScrn3Select_cFv();
extern "C" void draw__15dMsgScrnArrow_cFv();
extern "C" void arwAnimeInit__15dMsgScrnArrow_cFv();
extern "C" void arwAnimeMove__15dMsgScrnArrow_cFv();
extern "C" void __ct__12dMsgString_cFUc();
extern "C" void __dt__12dMsgString_cFv();
extern "C" void __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap();
extern "C" void getGlobalPosX__8CPaneMgrFv();
extern "C" void getGlobalPosY__8CPaneMgrFv();
extern "C" void paneTrans__8CPaneMgrFff();
extern "C" void show__13CPaneMgrAlphaFv();
extern "C" void hide__13CPaneMgrAlphaFv();
extern "C" void getAlphaRate__13CPaneMgrAlphaFv();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void alloc__7JKRHeapFUli();
extern "C" void free__7JKRHeapFPv();
extern "C" void getTotalFreeSize__7JKRHeapFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void appendChild__7J2DPaneFP7J2DPane();
extern "C" void getBounds__7J2DPaneFv();
extern "C" void setBasePosition__7J2DPaneF15J2DBasePosition();
extern "C" void __ct__9J2DScreenFv();
extern "C" void setPriority__9J2DScreenFPCcUlP10JKRArchive();
extern "C" void draw__9J2DScreenFffPC14J2DGrafContext();
extern "C" void animation__9J2DScreenFv();
extern "C" void __ct__10J2DPictureFPC7ResTIMG();
extern "C" void func_802FC800();
extern "C" void setString__10J2DTextBoxFsPCce();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_21();
extern "C" void _savegpr_22();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _restgpr_21();
extern "C" void _restgpr_22();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void snprintf();
extern "C" void strcat();
extern "C" u8 m_cpadInfo__8mDoCPd_c[256];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_drawHIO[3880];
extern "C" extern u8 g_ringHIO[344];
extern "C" extern u8 g_meter2_info[248];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80396950-80396970 022FB0 0020+00 1/1 0/0 0/0 .rodata          name_tag$3883 */
SECTION_RODATA static u8 const name_tag[32] = {
    0x69, 0x74, 0x65, 0x6D, 0x5F, 0x6E, 0x30, 0x34, 0x69, 0x74, 0x65, 0x6D, 0x5F, 0x6E, 0x30, 0x35,
    0x69, 0x74, 0x65, 0x6D, 0x5F, 0x6E, 0x30, 0x36, 0x69, 0x74, 0x65, 0x6D, 0x5F, 0x6E, 0x30, 0x37,
};
COMPILER_STRIP_GATE(80396950, &name_tag);

/* 80396970-80396990 022FD0 0020+00 1/1 0/0 0/0 .rodata          fame_tag$3884 */
SECTION_RODATA static u8 const fame_tag[32] = {
    0x66, 0x5F, 0x69, 0x74, 0x65, 0x6D, 0x5F, 0x31, 0x66, 0x5F, 0x69, 0x74, 0x65, 0x6D, 0x5F, 0x32,
    0x66, 0x5F, 0x69, 0x74, 0x65, 0x6D, 0x5F, 0x33, 0x66, 0x5F, 0x69, 0x74, 0x65, 0x6D, 0x5F, 0x34,
};
COMPILER_STRIP_GATE(80396970, &fame_tag);

/* 803BD8C8-803BD8D4 01A9E8 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803BD8D4-803BD8E0 -00001 000C+00 0/1 0/0 0/0 .data            @3844 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3844[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait_init__19dMenu_ItemExplain_cFv,
};
#pragma pop

/* 803BD8E0-803BD8EC -00001 000C+00 0/1 0/0 0/0 .data            @3845 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3845[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)open_init__19dMenu_ItemExplain_cFv,
};
#pragma pop

/* 803BD8EC-803BD8F8 -00001 000C+00 0/1 0/0 0/0 .data            @3846 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3846[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)move_init__19dMenu_ItemExplain_cFv,
};
#pragma pop

/* 803BD8F8-803BD904 -00001 000C+00 0/1 0/0 0/0 .data            @3847 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3847[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)move_select_init__19dMenu_ItemExplain_cFv,
};
#pragma pop

/* 803BD904-803BD910 -00001 000C+00 0/1 0/0 0/0 .data            @3848 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3848[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)move_next_init__19dMenu_ItemExplain_cFv,
};
#pragma pop

/* 803BD910-803BD91C -00001 000C+00 0/1 0/0 0/0 .data            @3849 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3849[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)close_init__19dMenu_ItemExplain_cFv,
};
#pragma pop

/* 803BD91C-803BD964 01AA3C 0048+00 1/2 0/0 0/0 .data            init_process */
SECTION_DATA static u8 init_process[72] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803BD964-803BD970 -00001 000C+00 0/1 0/0 0/0 .data            @3850 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3850[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait_proc__19dMenu_ItemExplain_cFv,
};
#pragma pop

/* 803BD970-803BD97C -00001 000C+00 0/1 0/0 0/0 .data            @3851 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3851[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)open_proc__19dMenu_ItemExplain_cFv,
};
#pragma pop

/* 803BD97C-803BD988 -00001 000C+00 0/1 0/0 0/0 .data            @3852 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3852[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)move_proc__19dMenu_ItemExplain_cFv,
};
#pragma pop

/* 803BD988-803BD994 -00001 000C+00 0/1 0/0 0/0 .data            @3853 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3853[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)move_select_proc__19dMenu_ItemExplain_cFv,
};
#pragma pop

/* 803BD994-803BD9A0 -00001 000C+00 0/1 0/0 0/0 .data            @3854 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3854[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)move_next_proc__19dMenu_ItemExplain_cFv,
};
#pragma pop

/* 803BD9A0-803BD9AC -00001 000C+00 0/1 0/0 0/0 .data            @3855 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3855[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)close_proc__19dMenu_ItemExplain_cFv,
};
#pragma pop

/* 803BD9AC-803BD9F4 01AACC 0048+00 1/2 0/0 0/0 .data            move_process */
SECTION_DATA static u8 move_process[72] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803BD9F4-803BDA00 01AB14 000C+00 2/2 0/0 0/0 .data            __vt__19dMenu_ItemExplain_c */
SECTION_DATA extern void* __vt__19dMenu_ItemExplain_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__19dMenu_ItemExplain_cFv,
};

/* 80454288-8045428C 002888 0004+00 3/3 0/0 0/0 .sdata2          @4062 */
SECTION_SDATA2 static u8 lit_4062[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8045428C-80454290 00288C 0004+00 4/4 0/0 0/0 .sdata2          @4063 */
SECTION_SDATA2 static f32 lit_4063 = 201.0f;

/* 80454290-80454294 002890 0004+00 1/1 0/0 0/0 .sdata2          @4064 */
SECTION_SDATA2 static f32 lit_4064 = 16.0f;

/* 80454294-80454298 002894 0004+00 2/2 0/0 0/0 .sdata2          @4065 */
SECTION_SDATA2 static f32 lit_4065 = 0.5f;

/* 80454298-804542A0 002898 0004+04 1/1 0/0 0/0 .sdata2          @4066 */
SECTION_SDATA2 static f32 lit_4066[1 + 1 /* padding */] = {
    3.0f,
    /* padding */
    0.0f,
};

/* 804542A0-804542A8 0028A0 0008+00 1/1 0/0 0/0 .sdata2          @4068 */
SECTION_SDATA2 static f64 lit_4068 = 4503601774854144.0 /* cast s32 to float */;

/* 801DA754-801DAFF0 1D5094 089C+00 0/0 2/2 0/0 .text
 * __ct__19dMenu_ItemExplain_cFP10JKRExpHeapP10JKRArchiveP9STControlb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMenu_ItemExplain_c::dMenu_ItemExplain_c(JKRExpHeap* param_0, JKRArchive* param_1,
                                             STControl* param_2, bool param_3) {
    nofralloc
#include "asm/d/menu/d_menu_item_explain/__ct__19dMenu_ItemExplain_cFP10JKRExpHeapP10JKRArchiveP9STControlb.s"
}
#pragma pop

/* 801DAFF0-801DB470 1D5930 0480+00 1/0 0/0 0/0 .text            __dt__19dMenu_ItemExplain_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMenu_ItemExplain_c::~dMenu_ItemExplain_c() {
    nofralloc
#include "asm/d/menu/d_menu_item_explain/__dt__19dMenu_ItemExplain_cFv.s"
}
#pragma pop

/* 801DB470-801DB514 1D5DB0 00A4+00 0/0 5/5 0/0 .text            move__19dMenu_ItemExplain_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_ItemExplain_c::move() {
    nofralloc
#include "asm/d/menu/d_menu_item_explain/move__19dMenu_ItemExplain_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804542A8-804542AC 0028A8 0004+00 1/1 0/0 0/0 .sdata2          @4302 */
SECTION_SDATA2 static f32 lit_4302 = 608.0f;

/* 804542AC-804542B0 0028AC 0004+00 1/1 0/0 0/0 .sdata2          @4303 */
SECTION_SDATA2 static f32 lit_4303 = 448.0f;

/* 804542B0-804542B4 0028B0 0004+00 5/5 0/0 0/0 .sdata2          @4304 */
SECTION_SDATA2 static f32 lit_4304 = -1.0f;

/* 804542B4-804542B8 0028B4 0004+00 1/1 0/0 0/0 .sdata2          @4305 */
SECTION_SDATA2 static f32 lit_4305 = 486.0f;

/* 804542B8-804542BC 0028B8 0004+00 1/1 0/0 0/0 .sdata2          @4306 */
SECTION_SDATA2 static f32 lit_4306 = 209.0f;

/* 801DB514-801DB744 1D5E54 0230+00 0/0 2/2 0/0 .text draw__19dMenu_ItemExplain_cFP13J2DOrthoGraph
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_ItemExplain_c::draw(J2DOrthoGraph* param_0) {
    nofralloc
#include "asm/d/menu/d_menu_item_explain/draw__19dMenu_ItemExplain_cFP13J2DOrthoGraph.s"
}
#pragma pop

/* ############################################################################################## */
/* 804542BC-804542C0 0028BC 0004+00 2/2 0/0 0/0 .sdata2          @4346 */
SECTION_SDATA2 static f32 lit_4346 = 48.0f;

/* 804542C0-804542C4 0028C0 0004+00 1/1 0/0 0/0 .sdata2          @4347 */
SECTION_SDATA2 static f32 lit_4347 = 5.0f;

/* 804542C4-804542C8 0028C4 0004+00 8/8 0/0 0/0 .sdata2          @4348 */
SECTION_SDATA2 static f32 lit_4348 = 1.0f;

/* 801DB744-801DB818 1D6084 00D4+00 1/1 0/0 0/0 .text drawKantera__19dMenu_ItemExplain_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_ItemExplain_c::drawKantera() {
    nofralloc
#include "asm/d/menu/d_menu_item_explain/drawKantera__19dMenu_ItemExplain_cFv.s"
}
#pragma pop

/* 801DB818-801DB81C 1D6158 0004+00 1/0 0/0 0/0 .text            wait_init__19dMenu_ItemExplain_cFv
 */
void dMenu_ItemExplain_c::wait_init() {
    /* empty function */
}

/* 801DB81C-801DB820 1D615C 0004+00 1/0 0/0 0/0 .text            wait_proc__19dMenu_ItemExplain_cFv
 */
void dMenu_ItemExplain_c::wait_proc() {
    /* empty function */
}

/* 801DB820-801DBAB4 1D6160 0294+00 3/2 0/0 0/0 .text            open_init__19dMenu_ItemExplain_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_ItemExplain_c::open_init() {
    nofralloc
#include "asm/d/menu/d_menu_item_explain/open_init__19dMenu_ItemExplain_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804542C8-804542CC 0028C8 0004+00 1/1 0/0 0/0 .sdata2          @4452 */
SECTION_SDATA2 static f32 lit_4452 = 2.0f;

/* 804542CC-804542D0 0028CC 0004+00 1/1 0/0 0/0 .sdata2          @4453 */
SECTION_SDATA2 static f32 lit_4453 = 150.0f;

/* 801DBAB4-801DBB50 1D63F4 009C+00 1/0 0/0 0/0 .text            open_proc__19dMenu_ItemExplain_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_ItemExplain_c::open_proc() {
    nofralloc
#include "asm/d/menu/d_menu_item_explain/open_proc__19dMenu_ItemExplain_cFv.s"
}
#pragma pop

/* 801DBB50-801DBB7C 1D6490 002C+00 1/0 0/0 0/0 .text            move_init__19dMenu_ItemExplain_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_ItemExplain_c::move_init() {
    nofralloc
#include "asm/d/menu/d_menu_item_explain/move_init__19dMenu_ItemExplain_cFv.s"
}
#pragma pop

/* 801DBB7C-801DBCB4 1D64BC 0138+00 1/0 0/0 0/0 .text            move_proc__19dMenu_ItemExplain_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_ItemExplain_c::move_proc() {
    nofralloc
#include "asm/d/menu/d_menu_item_explain/move_proc__19dMenu_ItemExplain_cFv.s"
}
#pragma pop

/* 801DBCB4-801DBF44 1D65F4 0290+00 1/0 0/0 0/0 .text move_select_init__19dMenu_ItemExplain_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_ItemExplain_c::move_select_init() {
    nofralloc
#include "asm/d/menu/d_menu_item_explain/move_select_init__19dMenu_ItemExplain_cFv.s"
}
#pragma pop

/* 801DBF44-801DC1E0 1D6884 029C+00 1/0 0/0 0/0 .text move_select_proc__19dMenu_ItemExplain_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_ItemExplain_c::move_select_proc() {
    nofralloc
#include "asm/d/menu/d_menu_item_explain/move_select_proc__19dMenu_ItemExplain_cFv.s"
}
#pragma pop

/* 801DC1E0-801DC214 1D6B20 0034+00 1/0 0/0 0/0 .text move_next_init__19dMenu_ItemExplain_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_ItemExplain_c::move_next_init() {
    nofralloc
#include "asm/d/menu/d_menu_item_explain/move_next_init__19dMenu_ItemExplain_cFv.s"
}
#pragma pop

/* 801DC214-801DC2E4 1D6B54 00D0+00 1/0 0/0 0/0 .text move_next_proc__19dMenu_ItemExplain_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_ItemExplain_c::move_next_proc() {
    nofralloc
#include "asm/d/menu/d_menu_item_explain/move_next_proc__19dMenu_ItemExplain_cFv.s"
}
#pragma pop

/* 801DC2E4-801DC2F0 1D6C24 000C+00 1/0 0/0 0/0 .text            close_init__19dMenu_ItemExplain_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_ItemExplain_c::close_init() {
    nofralloc
#include "asm/d/menu/d_menu_item_explain/close_init__19dMenu_ItemExplain_cFv.s"
}
#pragma pop

/* 801DC2F0-801DC340 1D6C30 0050+00 1/0 0/0 0/0 .text            close_proc__19dMenu_ItemExplain_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_ItemExplain_c::close_proc() {
    nofralloc
#include "asm/d/menu/d_menu_item_explain/close_proc__19dMenu_ItemExplain_cFv.s"
}
#pragma pop

/* 801DC340-801DC3C8 1D6C80 0088+00 0/0 2/2 0/0 .text openExplain__19dMenu_ItemExplain_cFUcUcUcb
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_ItemExplain_c::openExplain(u8 param_0, u8 param_1, u8 param_2, bool param_3) {
    nofralloc
#include "asm/d/menu/d_menu_item_explain/openExplain__19dMenu_ItemExplain_cFUcUcUcb.s"
}
#pragma pop

/* 801DC3C8-801DC738 1D6D08 0370+00 1/1 1/1 0/0 .text
 * openExplainDmap__19dMenu_ItemExplain_cFUcUcUcbUc             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_ItemExplain_c::openExplainDmap(u8 param_0, u8 param_1, u8 param_2, bool param_3,
                                              u8 param_4) {
    nofralloc
#include "asm/d/menu/d_menu_item_explain/openExplainDmap__19dMenu_ItemExplain_cFUcUcUcbUc.s"
}
#pragma pop

/* 801DC738-801DC7AC 1D7078 0074+00 0/0 1/1 0/0 .text openExplainTx__19dMenu_ItemExplain_cFUlUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_ItemExplain_c::openExplainTx(u32 param_0, u32 param_1) {
    nofralloc
#include "asm/d/menu/d_menu_item_explain/openExplainTx__19dMenu_ItemExplain_cFUlUl.s"
}
#pragma pop

/* ############################################################################################## */
/* 804542D0-804542D4 0028D0 0004+00 1/1 0/0 0/0 .sdata2          @4820 */
SECTION_SDATA2 static f32 lit_4820 = 7.0f;

/* 801DC7AC-801DC7FC 1D70EC 0050+00 1/1 2/2 0/0 .text getAlphaRatio__19dMenu_ItemExplain_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_ItemExplain_c::getAlphaRatio() {
    nofralloc
#include "asm/d/menu/d_menu_item_explain/getAlphaRatio__19dMenu_ItemExplain_cFv.s"
}
#pragma pop

/* 801DC7FC-801DCB54 1D713C 0358+00 1/1 0/0 0/0 .text            setNumber__19dMenu_ItemExplain_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_ItemExplain_c::setNumber() {
    nofralloc
#include "asm/d/menu/d_menu_item_explain/setNumber__19dMenu_ItemExplain_cFv.s"
}
#pragma pop

/* 801DCB54-801DCBBC 1D7494 0068+00 2/2 0/0 0/0 .text getWarpMarkFlag__19dMenu_ItemExplain_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_ItemExplain_c::getWarpMarkFlag() {
    nofralloc
#include "asm/d/menu/d_menu_item_explain/getWarpMarkFlag__19dMenu_ItemExplain_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804542D4-804542D8 0028D4 0004+00 1/1 0/0 0/0 .sdata2          @4948 */
SECTION_SDATA2 static f32 lit_4948 = 100.0f;

/* 804542D8-804542E0 0028D8 0008+00 1/1 0/0 0/0 .sdata2          @4950 */
SECTION_SDATA2 static f64 lit_4950 = 4503599627370496.0 /* cast u32 to float */;

/* 801DCBBC-801DCC8C 1D74FC 00D0+00 2/2 0/0 0/0 .text            setScale__19dMenu_ItemExplain_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_ItemExplain_c::setScale() {
    nofralloc
#include "asm/d/menu/d_menu_item_explain/setScale__19dMenu_ItemExplain_cFv.s"
}
#pragma pop

/* 801DCC8C-801DCDC0 1D75CC 0134+00 0/0 1/0 0/0 .text            __sinit_d_menu_item_explain_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_menu_item_explain_cpp() {
    nofralloc
#include "asm/d/menu/d_menu_item_explain/__sinit_d_menu_item_explain_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_801DCC8C = (void*)__sinit_d_menu_item_explain_cpp;
#pragma pop

/* 80396990-803969C8 022FF0 0034+04 2/2 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80396990 = "zelda_item_screen_info.blo";
SECTION_DEAD static char const* const stringBase_803969AB = "";
SECTION_DEAD static char const* const stringBase_803969AC = "tt_block8x8.bti";
SECTION_DEAD static char const* const stringBase_803969BC = ""
                                                            "\x1B"
                                                            "CR[%d]";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_803969C4 = "\0\0\0";
#pragma pop
