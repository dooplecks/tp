//
// Generated By: dol2asm
// Translation Unit: J2DMaterial
//

#include "JSystem/J2DGraph/J2DMaterial.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct _GXTlut {};

struct _GXColorS10 {};

struct _GXColor {};

struct ResTIMG {};

struct JUtility {
    struct TColor {
        /* 80193960 */ TColor();
    };
};

struct JUTPalette {};

struct JUTTexture {
    /* 802DE480 */ void storeTIMG(ResTIMG const*, JUTPalette*, _GXTlut);
};

struct J3DTextureSRTInfo {};

struct J2DTexMtx {};

struct J2DTexGenBlock {
    /* 802EB510 */ void initialize();
    /* 802EB570 */ void setGX();
    /* 802EB620 */ ~J2DTexGenBlock();
    /* 802EB6A4 */ void setTexMtx(u32, J2DTexMtx&);
    /* 802EB7E0 */ void getTexMtx(u32, J2DTexMtx&);
};

struct J2DTexCoord {
    /* 802EB260 */ J2DTexCoord();
};

struct J2DTevBlock8 {
    /* 802EED64 */ J2DTevBlock8();
};

struct J2DTevBlock4 {
    /* 802ED8BC */ J2DTevBlock4();
};

struct J2DTevBlock2 {
    /* 802EC5B8 */ J2DTevBlock2();
};

struct J2DTevBlock16 {
    /* 802F01E4 */ J2DTevBlock16();
};

struct J2DTevBlock1 {
    /* 802EB88C */ J2DTevBlock1();
};

struct J2DGXColorS10 {};

struct J2DTevBlock {
    /* 802EB184 */ ~J2DTevBlock();
    /* 802EB1D0 */ void setGX();
    /* 802EB1D4 */ void setTevKColor(u32, JUtility::TColor);
    /* 802EB1D8 */ void setTevColor(u32, J2DGXColorS10);
    /* 802EB1DC */ void setTexNo(u32, u16);
};

struct J2DPEBlock {
    /* 802F17FC */ void initialize();
    /* 802F1840 */ void setGX();
};

struct J2DAnmTextureSRTKey {
    /* 8030B9F0 */ void calcTransform(f32, u16, J3DTextureSRTInfo*) const;
};

struct J2DAnmColor {
    /* 802EB390 */ void getColor(u16, _GXColor*) const;
};

struct J2DAnmTevRegKey {
    /* 8030C0F0 */ void getTevColorReg(u16, _GXColorS10*) const;
    /* 8030C3B4 */ void getTevKonstReg(u16, _GXColor*) const;
};

struct J2DAnmTexPattern {
    /* 8030BEE8 */ void getTexNo(u16, u16*) const;
    /* 8030BF9C */ void getResTIMG(u16) const;
    /* 8030BFF0 */ void getPalette(u16) const;
};

struct J2DMaterial {
    struct J2DMaterialAnmPointer {
        /* 802EA79C */ J2DMaterialAnmPointer();
    };

    /* 802EA1AC */ J2DMaterial();
    /* 802EA2CC */ ~J2DMaterial();
    /* 802EA38C */ void setGX();
    /* 802EA410 */ void createTevBlock(int, bool);
    /* 802EA5C4 */ void createIndBlock(int, bool);
    /* 802EA84C */ void makeAnmPointer();
    /* 802EA94C */ void setAnimation(J2DAnmTextureSRTKey*);
    /* 802EAA2C */ void setAnimation(J2DAnmTexPattern*);
    /* 802EAB0C */ void setAnimation(J2DAnmTevRegKey*);
    /* 802EA89C */ void setAnimation(J2DAnmColor*);
    /* 802EAC78 */ void animation();
};

struct J2DIndTexOrder {
    /* 802EB378 */ J2DIndTexOrder();
};

struct J2DIndTexMtx {
    /* 802EB2E4 */ ~J2DIndTexMtx();
    /* 802EB320 */ J2DIndTexMtx();
};

struct J2DIndTexCoordScale {
    /* 802EB290 */ ~J2DIndTexCoordScale();
    /* 802EB2CC */ J2DIndTexCoordScale();
};

struct J2DIndBlockNull {
    /* 802EB1E0 */ void setGX();
    /* 802EB1E4 */ void getType();
    /* 802EB1F0 */ ~J2DIndBlockNull();
};

struct J2DIndBlock {
    /* 802EA18C */ bool getIndTexCoordScale(u32);
    /* 802EA194 */ bool getIndTexMtx(u32);
    /* 802EA19C */ bool getIndTexOrder(u32);
    /* 802EA1A4 */ bool getIndTexStageNum() const;
    /* 802EB13C */ ~J2DIndBlock();
    /* 802EB1CC */ void setGX();
    /* 802EB24C */ void initialize();
    /* 802EB250 */ void setIndTexStageNum(u8);
    /* 802EB254 */ void setIndTexOrder(u32, J2DIndTexOrder);
    /* 802EB258 */ void setIndTexMtx(u32, J2DIndTexMtx);
    /* 802EB25C */ void setIndTexCoordScale(u32, J2DIndTexCoordScale);
};

struct J2DColorChan {
    /* 802EB280 */ J2DColorChan();
};

struct J2DColorBlock {
    /* 802EB0F4 */ ~J2DColorBlock();
    /* 802EB394 */ void initialize();
    /* 802EB424 */ void setGX();
};

//
// Forward References:
//

extern "C" void __ct__11J2DMaterialFv();
extern "C" void __dt__11J2DMaterialFv();
extern "C" void setGX__11J2DMaterialFv();
extern "C" void createTevBlock__11J2DMaterialFib();
extern "C" void createIndBlock__11J2DMaterialFib();
extern "C" void __ct__Q211J2DMaterial21J2DMaterialAnmPointerFv();
extern "C" void makeAnmPointer__11J2DMaterialFv();
extern "C" void setAnimation__11J2DMaterialFP11J2DAnmColor();
extern "C" void setAnimation__11J2DMaterialFP19J2DAnmTextureSRTKey();
extern "C" void setAnimation__11J2DMaterialFP16J2DAnmTexPattern();
extern "C" void setAnimation__11J2DMaterialFP15J2DAnmTevRegKey();
extern "C" void animation__11J2DMaterialFv();
extern "C" void __dt__13J2DColorBlockFv();
extern "C" void __dt__11J2DIndBlockFv();
extern "C" void __dt__11J2DTevBlockFv();
extern "C" void setGX__11J2DIndBlockFv();
extern "C" void setGX__11J2DTevBlockFv();
extern "C" void setTevKColor__11J2DTevBlockFUlQ28JUtility6TColor();
extern "C" void setTevColor__11J2DTevBlockFUl13J2DGXColorS10();
extern "C" void setTexNo__11J2DTevBlockFUlUs();
extern "C" void setGX__15J2DIndBlockNullFv();
extern "C" void getType__15J2DIndBlockNullFv();
extern "C" void __dt__15J2DIndBlockNullFv();
extern "C" void initialize__11J2DIndBlockFv();
extern "C" void setIndTexStageNum__11J2DIndBlockFUc();
extern "C" void setIndTexOrder__11J2DIndBlockFUl14J2DIndTexOrder();
extern "C" void setIndTexMtx__11J2DIndBlockFUl12J2DIndTexMtx();
extern "C" void setIndTexCoordScale__11J2DIndBlockFUl19J2DIndTexCoordScale();
extern "C" void __ct__11J2DTexCoordFv();
extern "C" void __ct__12J2DColorChanFv();
extern "C" void __dt__19J2DIndTexCoordScaleFv();
extern "C" void __ct__19J2DIndTexCoordScaleFv();
extern "C" void __dt__12J2DIndTexMtxFv();
extern "C" void __ct__12J2DIndTexMtxFv();
extern "C" void __ct__14J2DIndTexOrderFv();
extern "C" void getColor__11J2DAnmColorCFUsP8_GXColor();

//
// External References:
//

extern "C" void __ct__Q28JUtility6TColorFv();
extern "C" void* __nw__FUl();
extern "C" void* __nw__FUli();
extern "C" void __dl__FPv();
extern "C" void storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette7_GXTlut();
extern "C" bool getIndTexCoordScale__11J2DIndBlockFUl();
extern "C" bool getIndTexMtx__11J2DIndBlockFUl();
extern "C" bool getIndTexOrder__11J2DIndBlockFUl();
extern "C" bool getIndTexStageNum__11J2DIndBlockCFv();
extern "C" void initialize__13J2DColorBlockFv();
extern "C" void setGX__13J2DColorBlockFv();
extern "C" void initialize__14J2DTexGenBlockFv();
extern "C" void setGX__14J2DTexGenBlockFv();
extern "C" void __dt__14J2DTexGenBlockFv();
extern "C" void setTexMtx__14J2DTexGenBlockFUlR9J2DTexMtx();
extern "C" void getTexMtx__14J2DTexGenBlockFUlR9J2DTexMtx();
extern "C" void __ct__12J2DTevBlock1Fv();
extern "C" void __ct__12J2DTevBlock2Fv();
extern "C" void __ct__12J2DTevBlock4Fv();
extern "C" void __ct__12J2DTevBlock8Fv();
extern "C" void __ct__13J2DTevBlock16Fv();
extern "C" void initialize__10J2DPEBlockFv();
extern "C" void setGX__10J2DPEBlockFv();
extern "C" void calcTransform__19J2DAnmTextureSRTKeyCFfUsP17J3DTextureSRTInfo();
extern "C" void getTexNo__16J2DAnmTexPatternCFUsPUs();
extern "C" void getResTIMG__16J2DAnmTexPatternCFUs();
extern "C" void getPalette__16J2DAnmTexPatternCFUs();
extern "C" void getTevColorReg__15J2DAnmTevRegKeyCFUsP11_GXColorS10();
extern "C" void getTevKonstReg__15J2DAnmTevRegKeyCFUsP8_GXColor();
extern "C" void __construct_array();
extern "C" void _savegpr_26();
extern "C" void _restgpr_26();
extern "C" extern u8 const j2dDefaultTexCoordInfo[32];
extern "C" extern u8 const j2dDefaultTexMtxInfo[36];
extern "C" extern u8 const j2dDefaultIndTexMtxInfo[28];
extern "C" extern void* __vt__15J2DIndBlockFull[14];
extern "C" extern void* __vt__11J2DTevBlock[47];
extern "C" extern void* __vt__14J2DTexGenBlock[3 + 1 /* padding */];
extern "C" extern u16 j2dDefaultIndTexOrderNull[1 + 1 /* padding */];
extern "C" extern u8 j2dDefaultIndTexCoordScaleInfo[2 + 2 /* padding */];
extern "C" extern u32 j2dDefaultBlendInfo;
extern "C" extern u32 j2dDefaultColorChanInfo;
extern "C" extern u8 struct_804561AC[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 803CCA08-803CCA40 029B28 0038+00 2/2 0/0 0/0 .data            __vt__15J2DIndBlockNull */
SECTION_DATA extern void* __vt__15J2DIndBlockNull[14] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)initialize__11J2DIndBlockFv,
    (void*)setGX__15J2DIndBlockNullFv,
    (void*)getType__15J2DIndBlockNullFv,
    (void*)setIndTexStageNum__11J2DIndBlockFUc,
    (void*)getIndTexStageNum__11J2DIndBlockCFv,
    (void*)setIndTexOrder__11J2DIndBlockFUl14J2DIndTexOrder,
    (void*)getIndTexOrder__11J2DIndBlockFUl,
    (void*)setIndTexMtx__11J2DIndBlockFUl12J2DIndTexMtx,
    (void*)getIndTexMtx__11J2DIndBlockFUl,
    (void*)setIndTexCoordScale__11J2DIndBlockFUl19J2DIndTexCoordScale,
    (void*)getIndTexCoordScale__11J2DIndBlockFUl,
    (void*)__dt__15J2DIndBlockNullFv,
};

/* 803CCA40-803CCA78 029B60 0038+00 3/3 1/1 0/0 .data            __vt__11J2DIndBlock */
SECTION_DATA extern void* __vt__11J2DIndBlock[14] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)initialize__11J2DIndBlockFv,
    (void*)setGX__11J2DIndBlockFv,
    (void*)NULL,
    (void*)setIndTexStageNum__11J2DIndBlockFUc,
    (void*)getIndTexStageNum__11J2DIndBlockCFv,
    (void*)setIndTexOrder__11J2DIndBlockFUl14J2DIndTexOrder,
    (void*)getIndTexOrder__11J2DIndBlockFUl,
    (void*)setIndTexMtx__11J2DIndBlockFUl12J2DIndTexMtx,
    (void*)getIndTexMtx__11J2DIndBlockFUl,
    (void*)setIndTexCoordScale__11J2DIndBlockFUl19J2DIndTexCoordScale,
    (void*)getIndTexCoordScale__11J2DIndBlockFUl,
    (void*)__dt__11J2DIndBlockFv,
};

/* 803CCA78-803CCA84 029B98 000C+00 2/2 0/0 0/0 .data            __vt__11J2DMaterial */
SECTION_DATA extern void* __vt__11J2DMaterial[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__11J2DMaterialFv,
};

/* 803CCA84-803CCA90 029BA4 000C+00 3/3 0/0 0/0 .data            __vt__13J2DColorBlock */
SECTION_DATA extern void* __vt__13J2DColorBlock[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__13J2DColorBlockFv,
};

/* 802EA1AC-802EA2CC 2E4AEC 0120+00 0/0 1/1 0/0 .text            __ct__11J2DMaterialFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DMaterial::J2DMaterial() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterial/__ct__11J2DMaterialFv.s"
}
#pragma pop

/* 802EA2CC-802EA38C 2E4C0C 00C0+00 1/0 2/2 0/0 .text            __dt__11J2DMaterialFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DMaterial::~J2DMaterial() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterial/__dt__11J2DMaterialFv.s"
}
#pragma pop

/* 802EA38C-802EA410 2E4CCC 0084+00 0/0 8/8 0/0 .text            setGX__11J2DMaterialFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterial::setGX() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterial/setGX__11J2DMaterialFv.s"
}
#pragma pop

/* 802EA410-802EA5C4 2E4D50 01B4+00 0/0 1/1 0/0 .text            createTevBlock__11J2DMaterialFib */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterial::createTevBlock(int param_0, bool param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterial/createTevBlock__11J2DMaterialFib.s"
}
#pragma pop

/* 802EA5C4-802EA79C 2E4F04 01D8+00 0/0 1/1 0/0 .text            createIndBlock__11J2DMaterialFib */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterial::createIndBlock(int param_0, bool param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterial/createIndBlock__11J2DMaterialFib.s"
}
#pragma pop

/* 802EA79C-802EA84C 2E50DC 00B0+00 1/1 0/0 0/0 .text
 * __ct__Q211J2DMaterial21J2DMaterialAnmPointerFv               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DMaterial::J2DMaterialAnmPointer::J2DMaterialAnmPointer() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterial/__ct__Q211J2DMaterial21J2DMaterialAnmPointerFv.s"
}
#pragma pop

/* 802EA84C-802EA89C 2E518C 0050+00 4/4 0/0 0/0 .text            makeAnmPointer__11J2DMaterialFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterial::makeAnmPointer() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterial/makeAnmPointer__11J2DMaterialFv.s"
}
#pragma pop

/* 802EA89C-802EA94C 2E51DC 00B0+00 0/0 4/4 0/0 .text setAnimation__11J2DMaterialFP11J2DAnmColor
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterial::setAnimation(J2DAnmColor* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterial/setAnimation__11J2DMaterialFP11J2DAnmColor.s"
}
#pragma pop

/* 802EA94C-802EAA2C 2E528C 00E0+00 0/0 4/4 0/0 .text
 * setAnimation__11J2DMaterialFP19J2DAnmTextureSRTKey           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterial::setAnimation(J2DAnmTextureSRTKey* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterial/setAnimation__11J2DMaterialFP19J2DAnmTextureSRTKey.s"
}
#pragma pop

/* 802EAA2C-802EAB0C 2E536C 00E0+00 0/0 4/4 0/0 .text
 * setAnimation__11J2DMaterialFP16J2DAnmTexPattern              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterial::setAnimation(J2DAnmTexPattern* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterial/setAnimation__11J2DMaterialFP16J2DAnmTexPattern.s"
}
#pragma pop

/* 802EAB0C-802EAC78 2E544C 016C+00 0/0 4/4 0/0 .text
 * setAnimation__11J2DMaterialFP15J2DAnmTevRegKey               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterial::setAnimation(J2DAnmTevRegKey* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterial/setAnimation__11J2DMaterialFP15J2DAnmTevRegKey.s"
}
#pragma pop

/* ############################################################################################## */
/* 804561B0-804561B4 0047B0 0004+00 1/1 0/0 0/0 .sdata2          @1943 */
SECTION_SDATA2 static f32 lit_1943 = 360.0f;

/* 804561B4-804561B8 0047B4 0004+00 1/1 0/0 0/0 .sdata2          @1944 */
SECTION_SDATA2 static f32 lit_1944 = 65535.0f;

/* 804561B8-804561C0 0047B8 0008+00 1/1 0/0 0/0 .sdata2          @1946 */
SECTION_SDATA2 static f64 lit_1946 = 4503599627370496.0 /* cast u32 to float */;

/* 802EAC78-802EB0F4 2E55B8 047C+00 0/0 1/1 0/0 .text            animation__11J2DMaterialFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterial::animation() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterial/animation__11J2DMaterialFv.s"
}
#pragma pop

/* 802EB0F4-802EB13C 2E5A34 0048+00 1/0 0/0 0/0 .text            __dt__13J2DColorBlockFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DColorBlock::~J2DColorBlock() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterial/__dt__13J2DColorBlockFv.s"
}
#pragma pop

/* 802EB13C-802EB184 2E5A7C 0048+00 1/0 0/0 0/0 .text            __dt__11J2DIndBlockFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DIndBlock::~J2DIndBlock() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterial/__dt__11J2DIndBlockFv.s"
}
#pragma pop

/* 802EB184-802EB1CC 2E5AC4 0048+00 0/0 1/0 0/0 .text            __dt__11J2DTevBlockFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DTevBlock::~J2DTevBlock() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterial/__dt__11J2DTevBlockFv.s"
}
#pragma pop

/* 802EB1CC-802EB1D0 2E5B0C 0004+00 1/0 0/0 0/0 .text            setGX__11J2DIndBlockFv */
void J2DIndBlock::setGX() {
    /* empty function */
}

/* 802EB1D0-802EB1D4 2E5B10 0004+00 0/0 1/0 0/0 .text            setGX__11J2DTevBlockFv */
void J2DTevBlock::setGX() {
    /* empty function */
}

/* 802EB1D4-802EB1D8 2E5B14 0004+00 0/0 1/0 0/0 .text
 * setTevKColor__11J2DTevBlockFUlQ28JUtility6TColor             */
void J2DTevBlock::setTevKColor(u32 param_0, JUtility::TColor param_1) {
    /* empty function */
}

/* 802EB1D8-802EB1DC 2E5B18 0004+00 0/0 1/0 0/0 .text setTevColor__11J2DTevBlockFUl13J2DGXColorS10
 */
void J2DTevBlock::setTevColor(u32 param_0, J2DGXColorS10 param_1) {
    /* empty function */
}

/* 802EB1DC-802EB1E0 2E5B1C 0004+00 0/0 1/0 0/0 .text            setTexNo__11J2DTevBlockFUlUs */
void J2DTevBlock::setTexNo(u32 param_0, u16 param_1) {
    /* empty function */
}

/* 802EB1E0-802EB1E4 2E5B20 0004+00 1/0 0/0 0/0 .text            setGX__15J2DIndBlockNullFv */
void J2DIndBlockNull::setGX() {
    /* empty function */
}

/* 802EB1E4-802EB1F0 2E5B24 000C+00 1/0 0/0 0/0 .text            getType__15J2DIndBlockNullFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DIndBlockNull::getType() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterial/getType__15J2DIndBlockNullFv.s"
}
#pragma pop

/* 802EB1F0-802EB24C 2E5B30 005C+00 1/0 0/0 0/0 .text            __dt__15J2DIndBlockNullFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DIndBlockNull::~J2DIndBlockNull() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterial/__dt__15J2DIndBlockNullFv.s"
}
#pragma pop

/* 802EB24C-802EB250 2E5B8C 0004+00 2/0 0/0 0/0 .text            initialize__11J2DIndBlockFv */
void J2DIndBlock::initialize() {
    /* empty function */
}

/* 802EB250-802EB254 2E5B90 0004+00 2/0 0/0 0/0 .text            setIndTexStageNum__11J2DIndBlockFUc
 */
void J2DIndBlock::setIndTexStageNum(u8 param_0) {
    /* empty function */
}

/* 802EB254-802EB258 2E5B94 0004+00 2/0 0/0 0/0 .text
 * setIndTexOrder__11J2DIndBlockFUl14J2DIndTexOrder             */
void J2DIndBlock::setIndTexOrder(u32 param_0, J2DIndTexOrder param_1) {
    /* empty function */
}

/* 802EB258-802EB25C 2E5B98 0004+00 2/0 0/0 0/0 .text setIndTexMtx__11J2DIndBlockFUl12J2DIndTexMtx
 */
void J2DIndBlock::setIndTexMtx(u32 param_0, J2DIndTexMtx param_1) {
    /* empty function */
}

/* 802EB25C-802EB260 2E5B9C 0004+00 2/0 0/0 0/0 .text
 * setIndTexCoordScale__11J2DIndBlockFUl19J2DIndTexCoordScale   */
void J2DIndBlock::setIndTexCoordScale(u32 param_0, J2DIndTexCoordScale param_1) {
    /* empty function */
}

/* 802EB260-802EB280 2E5BA0 0020+00 1/1 0/0 0/0 .text            __ct__11J2DTexCoordFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DTexCoord::J2DTexCoord() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterial/__ct__11J2DTexCoordFv.s"
}
#pragma pop

/* 802EB280-802EB290 2E5BC0 0010+00 1/1 0/0 0/0 .text            __ct__12J2DColorChanFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DColorChan::J2DColorChan() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterial/__ct__12J2DColorChanFv.s"
}
#pragma pop

/* 802EB290-802EB2CC 2E5BD0 003C+00 1/1 1/1 0/0 .text            __dt__19J2DIndTexCoordScaleFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DIndTexCoordScale::~J2DIndTexCoordScale() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterial/__dt__19J2DIndTexCoordScaleFv.s"
}
#pragma pop

/* 802EB2CC-802EB2E4 2E5C0C 0018+00 1/1 0/0 0/0 .text            __ct__19J2DIndTexCoordScaleFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DIndTexCoordScale::J2DIndTexCoordScale() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterial/__ct__19J2DIndTexCoordScaleFv.s"
}
#pragma pop

/* 802EB2E4-802EB320 2E5C24 003C+00 1/1 1/1 0/0 .text            __dt__12J2DIndTexMtxFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DIndTexMtx::~J2DIndTexMtx() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterial/__dt__12J2DIndTexMtxFv.s"
}
#pragma pop

/* 802EB320-802EB378 2E5C60 0058+00 1/1 0/0 0/0 .text            __ct__12J2DIndTexMtxFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DIndTexMtx::J2DIndTexMtx() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterial/__ct__12J2DIndTexMtxFv.s"
}
#pragma pop

/* 802EB378-802EB390 2E5CB8 0018+00 1/1 0/0 0/0 .text            __ct__14J2DIndTexOrderFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DIndTexOrder::J2DIndTexOrder() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterial/__ct__14J2DIndTexOrderFv.s"
}
#pragma pop

/* 802EB390-802EB394 2E5CD0 0004+00 0/0 1/0 0/0 .text getColor__11J2DAnmColorCFUsP8_GXColor */
void J2DAnmColor::getColor(u16 param_0, _GXColor* param_1) const {
    /* empty function */
}
