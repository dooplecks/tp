//
// Generated By: dol2asm
// Translation Unit: J3DGD
//

#include "JSystem/J3DGraphBase/J3DGD.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct _GXVtxFmt {};

struct _GXVtxAttrFmtList {};

struct _GXTlutSize {};

struct _GXTlutFmt {};

struct _GXTexWrapMode {};

struct _GXTexMapID {};

struct _GXTexGenType {};

struct _GXTexGenSrc {};

struct _GXTexFmt {};

struct _GXTexFilter {};

struct _GXTexCoordID {};

struct _GXTexCacheSize {};

struct _GXTevStageID {};

struct _GXTevRegID {};

struct _GXTevKColorID {};

struct _GXLightID {};

struct _GXIndTexStageID {};

struct _GXIndTexScale {};

struct _GXIndTexMtxID {};

struct _GXFogType {};

struct _GXFogAdjTable {};

struct _GXCullMode {};

struct _GXColorS10 {};

struct _GXColor {};

struct _GXChannelID {};

struct _GXAnisotropy {};

//
// Forward References:
//

extern "C" void J3DGDSetGenMode__FUcUcUcUc11_GXCullMode();
extern "C" void J3DGDSetGenMode_3Param__FUcUcUc();
extern "C" void J3DGDSetLightAttn__F10_GXLightIDffffff();
extern "C" void J3DGDSetLightColor__F10_GXLightID8_GXColor();
extern "C" void J3DGDSetLightPos__F10_GXLightIDfff();
extern "C" void J3DGDSetLightDir__F10_GXLightIDfff();
extern "C" void J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb();
extern "C" void J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc();
extern "C" void J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc();
extern "C" void
J3DGDSetTexLookupMode__F11_GXTexMapID14_GXTexWrapMode14_GXTexWrapMode12_GXTexFilter12_GXTexFilterfffUcUc13_GXAnisotropy();
extern "C" void J3DGDSetTexImgAttr__F11_GXTexMapIDUsUs9_GXTexFmt();
extern "C" void J3DGDSetTexImgPtr__F11_GXTexMapIDPv();
extern "C" void J3DGDSetTexImgPtrRaw__F11_GXTexMapIDUl();
extern "C" void J3DGDSetTexTlut__F11_GXTexMapIDUl10_GXTlutFmt();
extern "C" void J3DGDLoadTlut__FPvUl11_GXTlutSize();
extern "C" void J3DGDSetIndTexMtx__F14_GXIndTexMtxIDPA3_fSc();
extern "C" void
J3DGDSetIndTexCoordScale__F16_GXIndTexStageID14_GXIndTexScale14_GXIndTexScale14_GXIndTexScale14_GXIndTexScale();
extern "C" void
J3DGDSetIndTexOrder__FUl13_GXTexCoordID11_GXTexMapID13_GXTexCoordID11_GXTexMapID13_GXTexCoordID11_GXTexMapID13_GXTexCoordID11_GXTexMapID();
extern "C" void
J3DGDSetTevOrder__F13_GXTevStageID13_GXTexCoordID11_GXTexMapID12_GXChannelID13_GXTexCoordID11_GXTexMapID12_GXChannelID();
extern "C" void J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor();
extern "C" void J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10();
extern "C" void J3DGDSetFog__F10_GXFogTypeffff8_GXColor();
extern "C" void J3DGDSetFogRangeAdj__FUcUsP14_GXFogAdjTable();
extern "C" void J3DFifoLoadPosMtxImm__FPA4_fUl();
extern "C" void J3DFifoLoadNrmMtxImm__FPA4_fUl();
extern "C" void J3DFifoLoadNrmMtxImm3x3__FPA3_fUl();
extern "C" void J3DFifoLoadNrmMtxToTexMtx__FPA4_fUl();
extern "C" void J3DFifoLoadNrmMtxToTexMtx3x3__FPA3_fUl();
extern "C" void J3DFifoLoadTexCached__F11_GXTexMapIDUl15_GXTexCacheSizeUl15_GXTexCacheSize();

//
// External References:
//

extern "C" void GDOverflowed();
extern "C" void __cvt_fp2unsigned();
extern "C" void __save_gpr();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void __restore_gpr();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern u8 __GDCurrentDL[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80450908-8045090C 000388 0004+00 1/1 0/0 0/0 .sdata           cm2hw$552 */
SECTION_SDATA static u8 cm2hw[4] = {
    0x00,
    0x02,
    0x01,
    0x03,
};

/* 8030D098-8030D210 3079D8 0178+00 0/0 1/1 0/0 .text J3DGDSetGenMode__FUcUcUcUc11_GXCullMode */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetGenMode(u8 param_0, u8 param_1, u8 param_2, u8 param_3, _GXCullMode param_4) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetGenMode__FUcUcUcUc11_GXCullMode.s"
}
#pragma pop

/* 8030D210-8030D364 307B50 0154+00 0/0 1/1 0/0 .text            J3DGDSetGenMode_3Param__FUcUcUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetGenMode_3Param(u8 param_0, u8 param_1, u8 param_2) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetGenMode_3Param__FUcUcUc.s"
}
#pragma pop

/* 8030D364-8030D65C 307CA4 02F8+00 0/0 1/1 0/0 .text J3DGDSetLightAttn__F10_GXLightIDffffff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetLightAttn(_GXLightID param_0, f32 param_1, f32 param_2, f32 param_3, f32 param_4,
                           f32 param_5, f32 param_6) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetLightAttn__F10_GXLightIDffffff.s"
}
#pragma pop

/* 8030D65C-8030D76C 307F9C 0110+00 0/0 1/1 0/0 .text J3DGDSetLightColor__F10_GXLightID8_GXColor
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetLightColor(_GXLightID param_0, _GXColor param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetLightColor__F10_GXLightID8_GXColor.s"
}
#pragma pop

/* 8030D76C-8030D938 3080AC 01CC+00 0/0 1/1 0/0 .text            J3DGDSetLightPos__F10_GXLightIDfff
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetLightPos(_GXLightID param_0, f32 param_1, f32 param_2, f32 param_3) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetLightPos__F10_GXLightIDfff.s"
}
#pragma pop

/* 8030D938-8030DB04 308278 01CC+00 0/0 1/1 0/0 .text            J3DGDSetLightDir__F10_GXLightIDfff
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetLightDir(_GXLightID param_0, f32 param_1, f32 param_2, f32 param_3) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetLightDir__F10_GXLightIDfff.s"
}
#pragma pop

/* ############################################################################################## */
/* 803CD7E8-803CD82C -00001 0044+00 1/1 0/0 0/0 .data            @899 */
SECTION_DATA static void* lit_899[17] = {
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x10C),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x128),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x164),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x178),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x18C),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x1A8),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x1C4),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x1E0),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x1F0),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x200),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x210),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x220),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x22C),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x22C),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x22C),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x22C),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x128),
};

/* 8030DB04-8030E064 308444 0560+00 1/0 1/1 0/0 .text
 * J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetVtxAttrFmtv(_GXVtxFmt param_0, _GXVtxAttrFmtList const* param_1, bool param_2) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb.s"
}
#pragma pop

/* ############################################################################################## */
/* 803CD82C-803CD880 -00001 0054+00 1/1 0/0 0/0 .data            @951 */
SECTION_DATA static void* lit_951[21] = {
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0x34),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0x40),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0x4C),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0x58),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0x74),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0x7C),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0x84),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0x8C),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0x94),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0x9C),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0xA4),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0xAC),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0xB4),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0xBC),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0xC4),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0xCC),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0xD4),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0xDC),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0xE4),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0x64),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0x6C),
};

/* 8030E064-8030E234 3089A4 01D0+00 1/0 1/1 0/0 .text
 * J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetTexCoordGen(_GXTexGenType param_0, _GXTexGenSrc param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc.s"
}
#pragma pop

/* 8030E234-8030E438 308B74 0204+00 0/0 16/16 0/0 .text
 * J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetTexCoordScale2(_GXTexCoordID param_0, u16 param_1, u8 param_2, u8 param_3,
                                u16 param_4, u8 param_5, u8 param_6) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045090C-80450914 00038C 0008+00 1/1 0/0 0/0 .sdata           J3DGDTexMode0Ids */
SECTION_SDATA static u8 J3DGDTexMode0Ids[8] = {
    0x80, 0x81, 0x82, 0x83, 0xA0, 0xA1, 0xA2, 0xA3,
};

/* 80450914-8045091C 000394 0008+00 1/1 0/0 0/0 .sdata           J3DGDTexMode1Ids */
SECTION_SDATA static u8 J3DGDTexMode1Ids[8] = {
    0x84, 0x85, 0x86, 0x87, 0xA4, 0xA5, 0xA6, 0xA7,
};

/* 8045091C-80450924 00039C 0008+00 1/1 0/0 0/0 .sdata           J3DGDTexImage0Ids */
SECTION_SDATA static u8 J3DGDTexImage0Ids[8] = {
    0x88, 0x89, 0x8A, 0x8B, 0xA8, 0xA9, 0xAA, 0xAB,
};

/* 80450924-8045092C 0003A4 0008+00 2/2 0/0 0/0 .sdata           J3DGDTexImage3Ids */
SECTION_SDATA static u8 J3DGDTexImage3Ids[8] = {
    0x94, 0x95, 0x96, 0x97, 0xB4, 0xB5, 0xB6, 0xB7,
};

/* 8045092C-80450934 0003AC 0008+00 1/1 0/0 0/0 .sdata           J3DGDTexTlutIds */
SECTION_SDATA static u8 J3DGDTexTlutIds[8] = {
    0x98, 0x99, 0x9A, 0x9B, 0xB8, 0xB9, 0xBA, 0xBB,
};

/* 80450934-8045093C 0003B4 0006+02 1/1 0/0 0/0 .sdata           GX2HWFiltConv */
SECTION_SDATA static u8 GX2HWFiltConv[6 + 2 /* padding */] = {
    0x00,
    0x04,
    0x01,
    0x05,
    0x02,
    0x06,
    /* padding */
    0x00,
    0x00,
};

/* 80456328-8045632C 004928 0004+00 1/1 0/0 0/0 .sdata2          @1050 */
SECTION_SDATA2 static f32 lit_1050 = 32.0f;

/* 8045632C-80456330 00492C 0004+00 1/1 0/0 0/0 .sdata2          @1051 */
SECTION_SDATA2 static f32 lit_1051 = 16.0f;

/* 8030E438-8030E5D4 308D78 019C+00 0/0 1/1 0/0 .text
 * J3DGDSetTexLookupMode__F11_GXTexMapID14_GXTexWrapMode14_GXTexWrapMode12_GXTexFilter12_GXTexFilterfffUcUc13_GXAnisotropy
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetTexLookupMode(_GXTexMapID param_0, _GXTexWrapMode param_1, _GXTexWrapMode param_2,
                               _GXTexFilter param_3, _GXTexFilter param_4, f32 param_5, f32 param_6,
                               f32 param_7, u8 param_8, u8 param_9, _GXAnisotropy param_10) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/func_8030E438.s"
}
#pragma pop

/* 8030E5D4-8030E67C 308F14 00A8+00 0/0 1/1 0/0 .text
 * J3DGDSetTexImgAttr__F11_GXTexMapIDUsUs9_GXTexFmt             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetTexImgAttr(_GXTexMapID param_0, u16 param_1, u16 param_2, _GXTexFmt param_3) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetTexImgAttr__F11_GXTexMapIDUsUs9_GXTexFmt.s"
}
#pragma pop

/* 8030E67C-8030E70C 308FBC 0090+00 0/0 1/1 0/0 .text            J3DGDSetTexImgPtr__F11_GXTexMapIDPv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetTexImgPtr(_GXTexMapID param_0, void* param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetTexImgPtr__F11_GXTexMapIDPv.s"
}
#pragma pop

/* 8030E70C-8030E7E0 30904C 00D4+00 0/0 1/1 0/0 .text J3DGDSetTexImgPtrRaw__F11_GXTexMapIDUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetTexImgPtrRaw(_GXTexMapID param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetTexImgPtrRaw__F11_GXTexMapIDUl.s"
}
#pragma pop

/* 8030E7E0-8030E878 309120 0098+00 0/0 1/1 0/0 .text
 * J3DGDSetTexTlut__F11_GXTexMapIDUl10_GXTlutFmt                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetTexTlut(_GXTexMapID param_0, u32 param_1, _GXTlutFmt param_2) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetTexTlut__F11_GXTexMapIDUl10_GXTlutFmt.s"
}
#pragma pop

/* 8030E878-8030EB30 3091B8 02B8+00 0/0 1/1 0/0 .text            J3DGDLoadTlut__FPvUl11_GXTlutSize
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDLoadTlut(void* param_0, u32 param_1, _GXTlutSize param_2) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDLoadTlut__FPvUl11_GXTlutSize.s"
}
#pragma pop

/* ############################################################################################## */
/* 80456330-80456334 004930 0004+00 1/1 0/0 0/0 .sdata2          @1233 */
SECTION_SDATA2 static f32 lit_1233 = 1024.0f;

/* 8030EB30-8030EE10 309470 02E0+00 0/0 2/2 0/0 .text J3DGDSetIndTexMtx__F14_GXIndTexMtxIDPA3_fSc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetIndTexMtx(_GXIndTexMtxID param_0, f32 (*param_1)[3], s8 param_2) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetIndTexMtx__F14_GXIndTexMtxIDPA3_fSc.s"
}
#pragma pop

/* 8030EE10-8030EF08 309750 00F8+00 0/0 2/2 0/0 .text
 * J3DGDSetIndTexCoordScale__F16_GXIndTexStageID14_GXIndTexScale14_GXIndTexScale14_GXIndTexScale14_GXIndTexScale
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetIndTexCoordScale(_GXIndTexStageID param_0, _GXIndTexScale param_1,
                                  _GXIndTexScale param_2, _GXIndTexScale param_3,
                                  _GXIndTexScale param_4) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/func_8030EE10.s"
}
#pragma pop

/* 8030EF08-8030F108 309848 0200+00 0/0 2/2 0/0 .text
 * J3DGDSetIndTexOrder__FUl13_GXTexCoordID11_GXTexMapID13_GXTexCoordID11_GXTexMapID13_GXTexCoordID11_GXTexMapID13_GXTexCoordID11_GXTexMapID
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetIndTexOrder(u32 param_0, _GXTexCoordID param_1, _GXTexMapID param_2,
                             _GXTexCoordID param_3, _GXTexMapID param_4, _GXTexCoordID param_5,
                             _GXTexMapID param_6, _GXTexCoordID param_7, _GXTexMapID param_8) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/func_8030EF08.s"
}
#pragma pop

/* ############################################################################################## */
/* 803CD880-803CD8A0 02A9A0 0010+10 1/1 0/0 0/0 .data            c2r$1302 */
SECTION_DATA static u8 c2r[16 + 16 /* padding */] = {
    0x00,
    0x01,
    0x00,
    0x01,
    0x00,
    0x01,
    0x07,
    0x05,
    0x06,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x07,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8030F108-8030F294 309A48 018C+00 0/0 9/9 0/0 .text
 * J3DGDSetTevOrder__F13_GXTevStageID13_GXTexCoordID11_GXTexMapID12_GXChannelID13_GXTexCoordID11_GXTexMapID12_GXChannelID
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetTevOrder(_GXTevStageID param_0, _GXTexCoordID param_1, _GXTexMapID param_2,
                          _GXChannelID param_3, _GXTexCoordID param_4, _GXTexMapID param_5,
                          _GXChannelID param_6) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/func_8030F108.s"
}
#pragma pop

/* 8030F294-8030F3FC 309BD4 0168+00 0/0 11/11 0/0 .text
 * J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetTevKColor(_GXTevKColorID param_0, _GXColor param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor.s"
}
#pragma pop

/* 8030F3FC-8030F630 309D3C 0234+00 0/0 11/11 0/0 .text
 * J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetTevColorS10(_GXTevRegID param_0, _GXColorS10 param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10.s"
}
#pragma pop

/* ############################################################################################## */
/* 80456334-80456338 004934 0004+00 3/3 0/0 0/0 .sdata2          @1460 */
SECTION_SDATA2 static u8 lit_1460[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80456338-80456340 004938 0004+04 1/1 0/0 0/0 .sdata2          @1461 */
SECTION_SDATA2 static f32 lit_1461[1 + 1 /* padding */] = {
    0.5f,
    /* padding */
    0.0f,
};

/* 80456340-80456348 004940 0008+00 1/1 0/0 0/0 .sdata2          @1462 */
SECTION_SDATA2 static f64 lit_1462 = 1.0;

/* 80456348-80456350 004948 0004+04 1/1 0/0 0/0 .sdata2          @1463 */
SECTION_SDATA2 static f32 lit_1463[1 + 1 /* padding */] = {
    2.0f,
    /* padding */
    0.0f,
};

/* 80456350-80456358 004950 0008+00 1/1 0/0 0/0 .sdata2          @1464 */
SECTION_SDATA2 static f64 lit_1464 = 0.5;

/* 80456358-80456360 004958 0004+04 1/1 0/0 0/0 .sdata2          @1465 */
SECTION_SDATA2 static f32 lit_1465[1 + 1 /* padding */] = {
    8388638.0f,
    /* padding */
    0.0f,
};

/* 80456360-80456368 004960 0008+00 1/1 0/0 0/0 .sdata2          @1468 */
SECTION_SDATA2 static f64 lit_1468 = 4503601774854144.0 /* cast s32 to float */;

/* 8030F630-8030F994 309F70 0364+00 0/0 3/3 0/0 .text J3DGDSetFog__F10_GXFogTypeffff8_GXColor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetFog(_GXFogType param_0, f32 param_1, f32 param_2, f32 param_3, f32 param_4,
                     _GXColor param_5) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetFog__F10_GXFogTypeffff8_GXColor.s"
}
#pragma pop

/* 8030F994-8030FAE0 30A2D4 014C+00 0/0 3/3 0/0 .text J3DGDSetFogRangeAdj__FUcUsP14_GXFogAdjTable
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetFogRangeAdj(u8 param_0, u16 param_1, _GXFogAdjTable* param_2) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetFogRangeAdj__FUcUsP14_GXFogAdjTable.s"
}
#pragma pop

/* 8030FAE0-8030FB60 30A420 0080+00 0/0 10/10 0/0 .text            J3DFifoLoadPosMtxImm__FPA4_fUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DFifoLoadPosMtxImm(f32 (*param_0)[4], u32 param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DFifoLoadPosMtxImm__FPA4_fUl.s"
}
#pragma pop

/* 8030FB60-8030FBCC 30A4A0 006C+00 0/0 9/9 0/0 .text            J3DFifoLoadNrmMtxImm__FPA4_fUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DFifoLoadNrmMtxImm(f32 (*param_0)[4], u32 param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DFifoLoadNrmMtxImm__FPA4_fUl.s"
}
#pragma pop

/* 8030FBCC-8030FC38 30A50C 006C+00 0/0 3/3 0/0 .text            J3DFifoLoadNrmMtxImm3x3__FPA3_fUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DFifoLoadNrmMtxImm3x3(f32 (*param_0)[3], u32 param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DFifoLoadNrmMtxImm3x3__FPA3_fUl.s"
}
#pragma pop

/* 8030FC38-8030FCD0 30A578 0098+00 0/0 4/4 0/0 .text            J3DFifoLoadNrmMtxToTexMtx__FPA4_fUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DFifoLoadNrmMtxToTexMtx(f32 (*param_0)[4], u32 param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DFifoLoadNrmMtxToTexMtx__FPA4_fUl.s"
}
#pragma pop

/* 8030FCD0-8030FD68 30A610 0098+00 0/0 2/2 0/0 .text J3DFifoLoadNrmMtxToTexMtx3x3__FPA3_fUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DFifoLoadNrmMtxToTexMtx3x3(f32 (*param_0)[3], u32 param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DFifoLoadNrmMtxToTexMtx3x3__FPA3_fUl.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045093C-80450944 0003BC 0008+00 1/1 0/0 0/0 .sdata           J3DTexImage1Ids */
SECTION_SDATA static u8 J3DTexImage1Ids[8] = {
    0x8C, 0x8D, 0x8E, 0x8F, 0xAC, 0xAD, 0xAE, 0xAF,
};

/* 80450944-8045094C 0003C4 0008+00 1/1 0/0 0/0 .sdata           J3DTexImage2Ids */
SECTION_SDATA static u8 J3DTexImage2Ids[8] = {
    0x90, 0x91, 0x92, 0x93, 0xB0, 0xB1, 0xB2, 0xB3,
};

/* 8030FD68-8030FDE8 30A6A8 0080+00 0/0 1/1 0/0 .text
 * J3DFifoLoadTexCached__F11_GXTexMapIDUl15_GXTexCacheSizeUl15_GXTexCacheSize */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DFifoLoadTexCached(_GXTexMapID param_0, u32 param_1, _GXTexCacheSize param_2,
                              u32 param_3, _GXTexCacheSize param_4) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DFifoLoadTexCached__F11_GXTexMapIDUl15_GXTexCacheSizeUl15_GXTexCacheSize.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045094C-80450950 -00001 0004+00 0/0 0/0 0/0 .sdata           None */
#pragma push
#pragma force_active on
SECTION_SDATA static u8 pad_8045094C[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
#pragma pop
