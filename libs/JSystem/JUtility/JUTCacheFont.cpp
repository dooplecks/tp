//
// Generated By: dol2asm
// Translation Unit: JUTCacheFont
//

#include "JSystem/JUtility/JUTCacheFont.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct _GXTexMapID {};

struct ResFONT {};

struct JUtility {
    struct TColor {};
};

struct JUTFont {
    struct TWidth {};

    /* 802DED24 */ void initialize_state();
};

struct JUTResFont {
    /* 802DDFD8 */ void getResFont() const;
    /* 802DDFE0 */ void getFontType() const;
    /* 802DDFEC */ void getLeading() const;
    /* 802DDFF8 */ void getWidth() const;
    /* 802DE004 */ void getAscent() const;
    /* 802DE010 */ void getDescent() const;
    /* 802DE01C */ void getHeight() const;
    /* 802DEF48 */ JUTResFont();
    /* 802DF000 */ ~JUTResFont();
    /* 802DF08C */ void deleteMemBlocks_ResFont();
    /* 802DF0B0 */ void initialize_state();
    /* 802DF584 */ void setGX(JUtility::TColor, JUtility::TColor);
    /* 802DF48C */ void setGX();
    /* 802DF7C4 */ void drawChar_scale(f32, f32, f32, f32, int, bool);
    /* 802DFC64 */ void getWidthEntry(int, JUTFont::TWidth*) const;
    /* 802DFD0C */ void getCellWidth() const;
    /* 802DFD58 */ void getCellHeight() const;
    /* 802DFDA4 */ void isLeadByte(int) const;
};

struct JUTException {
    /* 802E21FC */ void panic_f(char const*, int, char const*, ...);
};

struct JKRHeap {};

struct JUTCacheFont {
    struct TGlyphCacheInfo {};

    struct TCachePage {};

    /* 802DD188 */ JUTCacheFont(ResFONT const*, u32, JKRHeap*);
    /* 802DD208 */ ~JUTCacheFont();
    /* 802DD29C */ void deleteMemBlocks_CacheFont();
    /* 802DD320 */ void initialize_state();
    /* 802DD35C */ void getMemorySize(ResFONT const*, u16*, u32*, u16*, u32*, u16*, u32*, u32*);
    /* 802DD4EC */ void initiate(ResFONT const*, void*, u32, JKRHeap*);
    /* 802DD54C */ void internal_initiate(ResFONT const*, void*, u32, JKRHeap*);
    /* 802DD650 */ void allocArea(void*, u32, JKRHeap*);
    /* 802DD804 */ void allocArray(JKRHeap*);
    /* 802DD8EC */ void setBlock();
    /* 802DDB0C */ void determineBlankPage();
    /* 802DDBBC */ void getGlyphFromAram(JUTCacheFont::TGlyphCacheInfo*, JUTCacheFont::TCachePage*,
                                         int*, int*);
    /* 802DDCE4 */ void loadImage(int, _GXTexMapID);
    /* 802DDD98 */ void loadCache_char_subroutine(int*, bool);
    /* 802DDEE0 */ void invalidiateAllCache();
    /* 802DDF68 */ void unlink(JUTCacheFont::TGlyphCacheInfo*);
    /* 802DDFAC */ void prepend(JUTCacheFont::TGlyphCacheInfo*);
};

struct JKRExpandSwitch {};

struct JKRAramHeap {
    struct EAllocMode {};

    /* 802D2FBC */ void alloc(u32, JKRAramHeap::EAllocMode);
};

struct JKRAram {
    /* 802D233C */ void mainRamToAram(u8*, u32, u32, JKRExpandSwitch, u32, JKRHeap*, int, u32*);
    /* 802D25B4 */ void aramToMainRam(u32, u8*, u32, JKRExpandSwitch, u32, JKRHeap*, int, u32*);
};

//
// Forward References:
//

extern "C" void __ct__12JUTCacheFontFPC7ResFONTUlP7JKRHeap();
extern "C" void __dt__12JUTCacheFontFv();
extern "C" void deleteMemBlocks_CacheFont__12JUTCacheFontFv();
extern "C" void initialize_state__12JUTCacheFontFv();
extern "C" void getMemorySize__12JUTCacheFontFPC7ResFONTPUsPUlPUsPUlPUsPUlPUl();
extern "C" void initiate__12JUTCacheFontFPC7ResFONTPvUlP7JKRHeap();
extern "C" void internal_initiate__12JUTCacheFontFPC7ResFONTPvUlP7JKRHeap();
extern "C" void allocArea__12JUTCacheFontFPvUlP7JKRHeap();
extern "C" void allocArray__12JUTCacheFontFP7JKRHeap();
extern "C" void setBlock__12JUTCacheFontFv();
extern "C" void determineBlankPage__12JUTCacheFontFv();
extern "C" void
getGlyphFromAram__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfoPQ212JUTCacheFont10TCachePagePiPi();
extern "C" void loadImage__12JUTCacheFontFi11_GXTexMapID();
extern "C" void loadCache_char_subroutine__12JUTCacheFontFPib();
extern "C" void invalidiateAllCache__12JUTCacheFontFv();
extern "C" void unlink__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfo();
extern "C" void prepend__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfo();
extern "C" void getResFont__10JUTResFontCFv();
extern "C" void getFontType__10JUTResFontCFv();
extern "C" void getLeading__10JUTResFontCFv();
extern "C" void getWidth__10JUTResFontCFv();
extern "C" void getAscent__10JUTResFontCFv();
extern "C" void getDescent__10JUTResFontCFv();
extern "C" void getHeight__10JUTResFontCFv();
extern "C" extern char const* const JUTCacheFont__stringBase0;

//
// External References:
//

SECTION_INIT void memcpy();
extern "C" void* __nw__FUlP7JKRHeapi();
extern "C" void* __nwa__FUlP7JKRHeapi();
extern "C" void __dl__FPv();
extern "C" void __dla__FPv();
extern "C" void mainRamToAram__7JKRAramFPUcUlUl15JKRExpandSwitchUlP7JKRHeapiPUl();
extern "C" void aramToMainRam__7JKRAramFUlPUcUl15JKRExpandSwitchUlP7JKRHeapiPUl();
extern "C" void alloc__11JKRAramHeapFUlQ211JKRAramHeap10EAllocMode();
extern "C" void initialize_state__7JUTFontFv();
extern "C" void __ct__10JUTResFontFv();
extern "C" void __dt__10JUTResFontFv();
extern "C" void deleteMemBlocks_ResFont__10JUTResFontFv();
extern "C" void initialize_state__10JUTResFontFv();
extern "C" void setGX__10JUTResFontFv();
extern "C" void setGX__10JUTResFontFQ28JUtility6TColorQ28JUtility6TColor();
extern "C" void drawChar_scale__10JUTResFontFffffib();
extern "C" void getWidthEntry__10JUTResFontCFiPQ27JUTFont6TWidth();
extern "C" void getCellWidth__10JUTResFontCFv();
extern "C" void getCellHeight__10JUTResFontCFv();
extern "C" void isLeadByte__10JUTResFontCFi();
extern "C" void panic_f__12JUTExceptionFPCciPCce();
extern "C" void JUTReportConsole();
extern "C" void GXInitTexObj();
extern "C" void GXInitTexObjLOD();
extern "C" void GXLoadTexObj();
extern "C" void __save_gpr();
extern "C" void _savegpr_21();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void __restore_gpr();
extern "C" void _restgpr_21();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* const saoAboutEncoding___10JUTResFont[3];
extern "C" extern u8 sAramObject__7JKRAram[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 803CC540-803CC590 029660 004C+04 2/2 0/0 0/0 .data            __vt__12JUTCacheFont */
SECTION_DATA extern void* __vt__12JUTCacheFont[19 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12JUTCacheFontFv,
    (void*)setGX__10JUTResFontFv,
    (void*)setGX__10JUTResFontFQ28JUtility6TColorQ28JUtility6TColor,
    (void*)drawChar_scale__10JUTResFontFffffib,
    (void*)getLeading__10JUTResFontCFv,
    (void*)getAscent__10JUTResFontCFv,
    (void*)getDescent__10JUTResFontCFv,
    (void*)getHeight__10JUTResFontCFv,
    (void*)getWidth__10JUTResFontCFv,
    (void*)getWidthEntry__10JUTResFontCFiPQ27JUTFont6TWidth,
    (void*)getCellWidth__10JUTResFontCFv,
    (void*)getCellHeight__10JUTResFontCFv,
    (void*)getFontType__10JUTResFontCFv,
    (void*)getResFont__10JUTResFontCFv,
    (void*)isLeadByte__10JUTResFontCFi,
    (void*)loadImage__12JUTCacheFontFi11_GXTexMapID,
    (void*)setBlock__12JUTCacheFontFv,
    /* padding */
    NULL,
};

/* 802DD188-802DD208 2D7AC8 0080+00 0/0 1/1 0/0 .text __ct__12JUTCacheFontFPC7ResFONTUlP7JKRHeap
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JUTCacheFont::JUTCacheFont(ResFONT const* param_0, u32 param_1, JKRHeap* param_2) {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/__ct__12JUTCacheFontFPC7ResFONTUlP7JKRHeap.s"
}
#pragma pop

/* 802DD208-802DD29C 2D7B48 0094+00 1/0 0/0 0/0 .text            __dt__12JUTCacheFontFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JUTCacheFont::~JUTCacheFont() {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/__dt__12JUTCacheFontFv.s"
}
#pragma pop

/* 802DD29C-802DD320 2D7BDC 0084+00 3/3 0/0 0/0 .text deleteMemBlocks_CacheFont__12JUTCacheFontFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::deleteMemBlocks_CacheFont() {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/deleteMemBlocks_CacheFont__12JUTCacheFontFv.s"
}
#pragma pop

/* 802DD320-802DD35C 2D7C60 003C+00 3/3 0/0 0/0 .text            initialize_state__12JUTCacheFontFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::initialize_state() {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/initialize_state__12JUTCacheFontFv.s"
}
#pragma pop

/* 802DD35C-802DD4EC 2D7C9C 0190+00 1/1 0/0 0/0 .text
 * getMemorySize__12JUTCacheFontFPC7ResFONTPUsPUlPUsPUlPUsPUlPUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::getMemorySize(ResFONT const* param_0, u16* param_1, u32* param_2,
                                     u16* param_3, u32* param_4, u16* param_5, u32* param_6,
                                     u32* param_7) {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/getMemorySize__12JUTCacheFontFPC7ResFONTPUsPUlPUsPUlPUsPUlPUl.s"
}
#pragma pop

/* 802DD4EC-802DD54C 2D7E2C 0060+00 1/1 0/0 0/0 .text
 * initiate__12JUTCacheFontFPC7ResFONTPvUlP7JKRHeap             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::initiate(ResFONT const* param_0, void* param_1, u32 param_2,
                                JKRHeap* param_3) {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/initiate__12JUTCacheFontFPC7ResFONTPvUlP7JKRHeap.s"
}
#pragma pop

/* 802DD54C-802DD650 2D7E8C 0104+00 1/1 0/0 0/0 .text
 * internal_initiate__12JUTCacheFontFPC7ResFONTPvUlP7JKRHeap    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::internal_initiate(ResFONT const* param_0, void* param_1, u32 param_2,
                                         JKRHeap* param_3) {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/internal_initiate__12JUTCacheFontFPC7ResFONTPvUlP7JKRHeap.s"
}
#pragma pop

/* 802DD650-802DD804 2D7F90 01B4+00 1/1 0/0 0/0 .text allocArea__12JUTCacheFontFPvUlP7JKRHeap */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::allocArea(void* param_0, u32 param_1, JKRHeap* param_2) {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/allocArea__12JUTCacheFontFPvUlP7JKRHeap.s"
}
#pragma pop

/* 802DD804-802DD8EC 2D8144 00E8+00 1/1 0/0 0/0 .text allocArray__12JUTCacheFontFP7JKRHeap */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::allocArray(JKRHeap* param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/allocArray__12JUTCacheFontFP7JKRHeap.s"
}
#pragma pop

/* 802DD8EC-802DDB0C 2D822C 0220+00 1/0 0/0 0/0 .text            setBlock__12JUTCacheFontFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::setBlock() {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/setBlock__12JUTCacheFontFv.s"
}
#pragma pop

/* 802DDB0C-802DDBBC 2D844C 00B0+00 1/1 0/0 0/0 .text determineBlankPage__12JUTCacheFontFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::determineBlankPage() {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/determineBlankPage__12JUTCacheFontFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455FD0-80455FD8 0045D0 0004+04 1/1 0/0 0/0 .sdata2          @721 */
SECTION_SDATA2 static f32 lit_721[1 + 1 /* padding */] = {
    0.0f,
    /* padding */
    0.0f,
};

/* 802DDBBC-802DDCE4 2D84FC 0128+00 1/1 0/0 0/0 .text
 * getGlyphFromAram__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfoPQ212JUTCacheFont10TCachePagePiPi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::getGlyphFromAram(JUTCacheFont::TGlyphCacheInfo* param_0,
                                        JUTCacheFont::TCachePage* param_1, int* param_2,
                                        int* param_3) {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/func_802DDBBC.s"
}
#pragma pop

/* 802DDCE4-802DDD98 2D8624 00B4+00 1/0 0/0 0/0 .text loadImage__12JUTCacheFontFi11_GXTexMapID */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::loadImage(int param_0, _GXTexMapID param_1) {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/loadImage__12JUTCacheFontFi11_GXTexMapID.s"
}
#pragma pop

/* 802DDD98-802DDEE0 2D86D8 0148+00 1/1 0/0 0/0 .text
 * loadCache_char_subroutine__12JUTCacheFontFPib                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::loadCache_char_subroutine(int* param_0, bool param_1) {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/loadCache_char_subroutine__12JUTCacheFontFPib.s"
}
#pragma pop

/* 802DDEE0-802DDF68 2D8820 0088+00 1/1 0/0 0/0 .text invalidiateAllCache__12JUTCacheFontFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::invalidiateAllCache() {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/invalidiateAllCache__12JUTCacheFontFv.s"
}
#pragma pop

/* 802DDF68-802DDFAC 2D88A8 0044+00 2/2 0/0 0/0 .text
 * unlink__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfo    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::unlink(JUTCacheFont::TGlyphCacheInfo* param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/unlink__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfo.s"
}
#pragma pop

/* 802DDFAC-802DDFD8 2D88EC 002C+00 2/2 0/0 0/0 .text
 * prepend__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfo   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::prepend(JUTCacheFont::TGlyphCacheInfo* param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/prepend__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfo.s"
}
#pragma pop

/* 802DDFD8-802DDFE0 2D8918 0008+00 1/0 1/0 0/0 .text            getResFont__10JUTResFontCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTResFont::getResFont() const {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/getResFont__10JUTResFontCFv.s"
}
#pragma pop

/* 802DDFE0-802DDFEC 2D8920 000C+00 1/0 1/0 0/0 .text            getFontType__10JUTResFontCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTResFont::getFontType() const {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/getFontType__10JUTResFontCFv.s"
}
#pragma pop

/* 802DDFEC-802DDFF8 2D892C 000C+00 1/0 1/0 0/0 .text            getLeading__10JUTResFontCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTResFont::getLeading() const {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/getLeading__10JUTResFontCFv.s"
}
#pragma pop

/* 802DDFF8-802DE004 2D8938 000C+00 1/0 1/0 0/0 .text            getWidth__10JUTResFontCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTResFont::getWidth() const {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/getWidth__10JUTResFontCFv.s"
}
#pragma pop

/* 802DE004-802DE010 2D8944 000C+00 1/0 1/0 0/0 .text            getAscent__10JUTResFontCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTResFont::getAscent() const {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/getAscent__10JUTResFontCFv.s"
}
#pragma pop

/* 802DE010-802DE01C 2D8950 000C+00 1/0 1/0 0/0 .text            getDescent__10JUTResFontCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTResFont::getDescent() const {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/getDescent__10JUTResFontCFv.s"
}
#pragma pop

/* 802DE01C-802DE078 2D895C 005C+00 1/0 1/0 0/0 .text            getHeight__10JUTResFontCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTResFont::getHeight() const {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/getHeight__10JUTResFontCFv.s"
}
#pragma pop

/* 8039D2F0-8039D360 029950 0070+00 2/2 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_8039D2F0 = "JUTCacheFont: Unknown data block\n";
SECTION_DEAD static char const* const stringBase_8039D312 = "JUTCacheFont.cpp";
SECTION_DEAD static char const* const stringBase_8039D323 = "%s";
SECTION_DEAD static char const* const stringBase_8039D326 = "trouble occurred in JKRMainRamToAram.";
SECTION_DEAD static char const* const stringBase_8039D34C = "Unknown data block\n";
#pragma pop
