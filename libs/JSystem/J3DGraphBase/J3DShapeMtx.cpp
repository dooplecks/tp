//
// Generated By: dol2asm
// Translation Unit: J3DShapeMtx
//

#include "JSystem/J3DGraphBase/J3DShapeMtx.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct Vec {};

struct J3DTextureSRTInfo {};

struct J3DSys {
    /* 8030FEC0 */ void loadPosMtxIndx(int, u16) const;
    /* 8030FEE4 */ void loadNrmMtxIndx(int, u16) const;
};

struct J3DShapeMtxYBBoardConcatView {
    /* 803143E4 */ void load() const;
    /* 80314520 */ ~J3DShapeMtxYBBoardConcatView();
    /* 8031458C */ void getType() const;
};

struct J3DShapeMtxMultiConcatView {
    /* 80313FA4 */ void load() const;
    /* 803146AC */ void loadNrmMtx(int, u16) const;
    /* 8031419C */ void loadNrmMtx(int, u16, f32 (*)[4]) const;
    /* 8031461C */ ~J3DShapeMtxMultiConcatView();
    /* 80314688 */ void getType() const;
    /* 80314694 */ void getUseMtxNum() const;
    /* 8031469C */ void getUseMtxIndex(u16) const;
};

struct J3DShapeMtxMulti {
    /* 80313E4C */ void load() const;
    /* 80313EEC */ void calcNBTScale(Vec const&, f32 (*)[3][3], f32 (*)[3][3]);
    /* 803146B0 */ ~J3DShapeMtxMulti();
    /* 8031470C */ void getType() const;
    /* 80314718 */ void getUseMtxNum() const;
    /* 80314720 */ void getUseMtxIndex(u16) const;
};

struct J3DShapeMtxConcatView {
    /* 80313828 */ void loadMtxConcatView_PNGP(int, u16) const;
    /* 803138C8 */ void loadMtxConcatView_PCPU(int, u16) const;
    /* 8031396C */ void loadMtxConcatView_NCPU(int, u16) const;
    /* 80313A14 */ void loadMtxConcatView_PNCPU(int, u16) const;
    /* 80313AC8 */ void loadMtxConcatView_PNGP_LOD(int, u16) const;
    /* 80313C54 */ void load() const;
    /* 80313D28 */ void loadNrmMtx(int, u16, f32 (*)[4]) const;
    /* 80314598 */ void loadNrmMtx(int, u16) const;
    /* 80314730 */ ~J3DShapeMtxConcatView();
    /* 8031478C */ void getType() const;

    static u8 sMtxLoadPipeline[48];
    static u8 sMtxLoadLODPipeline[48];
    static u8 sMtxPtrTbl[8];
};

struct J3DShapeMtxBBoardConcatView {
    /* 803142D4 */ void load() const;
    /* 803145A4 */ ~J3DShapeMtxBBoardConcatView();
    /* 80314610 */ void getType() const;
};

struct J3DShapeMtx {
    /* 80273E08 */ bool getUseMtxNum() const;
    /* 803130A8 */ void resetMtxLoadCache();
    /* 803130E4 */ void loadMtxIndx_PNGP(int, u16) const;
    /* 80313128 */ void loadMtxIndx_PCPU(int, u16) const;
    /* 80313188 */ void loadMtxIndx_NCPU(int, u16) const;
    /* 803131D4 */ void loadMtxIndx_PNCPU(int, u16) const;
    /* 80313B94 */ void load() const;
    /* 80313BF0 */ void calcNBTScale(Vec const&, f32 (*)[3][3], f32 (*)[3][3]);
    /* 8031459C */ void getUseMtxIndex(u16) const;
    /* 80314798 */ ~J3DShapeMtx();
    /* 803147E0 */ void getType() const;

    static u8 sMtxLoadPipeline[48];
    static u8 sMtxLoadCache[20 + 4 /* padding */];
    static u8 sCurrentPipeline[4];
    static u8 sCurrentScaleFlag[4];
    static u8 sTexMtxLoadType[4];
};

struct J3DDifferedTexMtx {
    /* 8031322C */ void loadExecute(f32 const (*)[4]);

    static u8 sTexGenBlock[4];
    static u8 sTexMtxObj[4];
};

//
// Forward References:
//

extern "C" void resetMtxLoadCache__11J3DShapeMtxFv();
extern "C" void loadMtxIndx_PNGP__11J3DShapeMtxCFiUs();
extern "C" void loadMtxIndx_PCPU__11J3DShapeMtxCFiUs();
extern "C" void loadMtxIndx_NCPU__11J3DShapeMtxCFiUs();
extern "C" void loadMtxIndx_PNCPU__11J3DShapeMtxCFiUs();
extern "C" void loadExecute__17J3DDifferedTexMtxFPA4_Cf();
extern "C" void loadMtxConcatView_PNGP__21J3DShapeMtxConcatViewCFiUs();
extern "C" void loadMtxConcatView_PCPU__21J3DShapeMtxConcatViewCFiUs();
extern "C" void loadMtxConcatView_NCPU__21J3DShapeMtxConcatViewCFiUs();
extern "C" void loadMtxConcatView_PNCPU__21J3DShapeMtxConcatViewCFiUs();
extern "C" void loadMtxConcatView_PNGP_LOD__21J3DShapeMtxConcatViewCFiUs();
extern "C" void load__11J3DShapeMtxCFv();
extern "C" void calcNBTScale__11J3DShapeMtxFRC3VecPA3_A3_fPA3_A3_f();
extern "C" void load__21J3DShapeMtxConcatViewCFv();
extern "C" void loadNrmMtx__21J3DShapeMtxConcatViewCFiUsPA4_f();
extern "C" void load__16J3DShapeMtxMultiCFv();
extern "C" void calcNBTScale__16J3DShapeMtxMultiFRC3VecPA3_A3_fPA3_A3_f();
extern "C" void load__26J3DShapeMtxMultiConcatViewCFv();
extern "C" void loadNrmMtx__26J3DShapeMtxMultiConcatViewCFiUsPA4_f();
extern "C" void load__27J3DShapeMtxBBoardConcatViewCFv();
extern "C" void load__28J3DShapeMtxYBBoardConcatViewCFv();
extern "C" void __dt__28J3DShapeMtxYBBoardConcatViewFv();
extern "C" void getType__28J3DShapeMtxYBBoardConcatViewCFv();
extern "C" void loadNrmMtx__21J3DShapeMtxConcatViewCFiUs();
extern "C" void getUseMtxIndex__11J3DShapeMtxCFUs();
extern "C" void __dt__27J3DShapeMtxBBoardConcatViewFv();
extern "C" void getType__27J3DShapeMtxBBoardConcatViewCFv();
extern "C" void __dt__26J3DShapeMtxMultiConcatViewFv();
extern "C" void getType__26J3DShapeMtxMultiConcatViewCFv();
extern "C" void getUseMtxNum__26J3DShapeMtxMultiConcatViewCFv();
extern "C" void getUseMtxIndex__26J3DShapeMtxMultiConcatViewCFUs();
extern "C" void loadNrmMtx__26J3DShapeMtxMultiConcatViewCFiUs();
extern "C" void __dt__16J3DShapeMtxMultiFv();
extern "C" void getType__16J3DShapeMtxMultiCFv();
extern "C" void getUseMtxNum__16J3DShapeMtxMultiCFv();
extern "C" void getUseMtxIndex__16J3DShapeMtxMultiCFUs();
extern "C" void __dt__21J3DShapeMtxConcatViewFv();
extern "C" void getType__21J3DShapeMtxConcatViewCFv();
extern "C" void __dt__11J3DShapeMtxFv();
extern "C" void getType__11J3DShapeMtxCFv();
extern "C" void __sinit_J3DShapeMtx_cpp();
extern "C" u8 sMtxLoadPipeline__11J3DShapeMtx[48];
extern "C" u8 sMtxLoadPipeline__21J3DShapeMtxConcatView[48];
extern "C" u8 sMtxLoadLODPipeline__21J3DShapeMtxConcatView[48];
extern "C" u8 sMtxLoadCache__11J3DShapeMtx[20 + 4 /* padding */];
extern "C" u8 sCurrentPipeline__11J3DShapeMtx[4];
extern "C" u8 sCurrentScaleFlag__11J3DShapeMtx[4];
extern "C" u8 sTexMtxLoadType__11J3DShapeMtx[4];
extern "C" u8 sMtxPtrTbl__21J3DShapeMtxConcatView[8];
extern "C" u8 sTexGenBlock__17J3DDifferedTexMtx[4];
extern "C" u8 sTexMtxObj__17J3DDifferedTexMtx[4];

//
// External References:
//

extern "C" bool getUseMtxNum__11J3DShapeMtxCFv();
extern "C" void __dl__FPv();
extern "C" void J3DFifoLoadPosMtxImm__FPA4_fUl();
extern "C" void J3DFifoLoadNrmMtxImm__FPA4_fUl();
extern "C" void J3DFifoLoadNrmMtxImm3x3__FPA3_fUl();
extern "C" void J3DFifoLoadNrmMtxToTexMtx__FPA4_fUl();
extern "C" void J3DFifoLoadNrmMtxToTexMtx3x3__FPA3_fUl();
extern "C" void loadPosMtxIndx__6J3DSysCFiUs();
extern "C" void loadNrmMtxIndx__6J3DSysCFiUs();
extern "C" void J3DCalcBBoardMtx__FPA4_f();
extern "C" void J3DCalcYBBoardMtx__FPA4_f();
extern "C" void J3DPSCalcInverseTranspose__FPA4_fPA3_f();
extern "C" void J3DGetTextureMtx__FRC17J3DTextureSRTInfoRC3VecPA4_f();
extern "C" void J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f();
extern "C" void J3DGetTextureMtxMaya__FRC17J3DTextureSRTInfoPA4_f();
extern "C" void J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f();
extern "C" void J3DScaleNrmMtx__FPA4_fRC3Vec();
extern "C" void J3DScaleNrmMtx33__FPA3_fRC3Vec();
extern "C" void J3DMtxProjConcat__FPA4_fPA4_fPA4_f();
extern "C" void PSMTXCopy();
extern "C" void PSMTXConcat();
extern "C" void PSMTXInverse();
extern "C" void GXSetArray();
extern "C" void GXLoadTexMtxImm();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_22();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_22();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern u8 j3dSys[284];

//
// Declarations:
//

/* ############################################################################################## */
/* 80434C80-80434C98 0619A0 0014+04 2/2 0/0 0/0 .bss             sMtxLoadCache__11J3DShapeMtx */
u8 J3DShapeMtx::sMtxLoadCache[20 + 4 /* padding */];

/* 803130A8-803130E4 30D9E8 003C+00 0/0 1/1 0/0 .text            resetMtxLoadCache__11J3DShapeMtxFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtx::resetMtxLoadCache() {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/resetMtxLoadCache__11J3DShapeMtxFv.s"
}
#pragma pop

/* 803130E4-80313128 30DA24 0044+00 1/0 0/0 0/0 .text loadMtxIndx_PNGP__11J3DShapeMtxCFiUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtx::loadMtxIndx_PNGP(int param_0, u16 param_1) const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/loadMtxIndx_PNGP__11J3DShapeMtxCFiUs.s"
}
#pragma pop

/* 80313128-80313188 30DA68 0060+00 1/0 0/0 0/0 .text loadMtxIndx_PCPU__11J3DShapeMtxCFiUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtx::loadMtxIndx_PCPU(int param_0, u16 param_1) const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/loadMtxIndx_PCPU__11J3DShapeMtxCFiUs.s"
}
#pragma pop

/* 80313188-803131D4 30DAC8 004C+00 1/0 0/0 0/0 .text loadMtxIndx_NCPU__11J3DShapeMtxCFiUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtx::loadMtxIndx_NCPU(int param_0, u16 param_1) const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/loadMtxIndx_NCPU__11J3DShapeMtxCFiUs.s"
}
#pragma pop

/* 803131D4-8031322C 30DB14 0058+00 1/0 0/0 0/0 .text loadMtxIndx_PNCPU__11J3DShapeMtxCFiUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtx::loadMtxIndx_PNCPU(int param_0, u16 param_1) const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/loadMtxIndx_PNCPU__11J3DShapeMtxCFiUs.s"
}
#pragma pop

/* ############################################################################################## */
/* 803CD990-803CD99C -00001 000C+00 1/1 0/0 0/0 .data            @832 */
SECTION_DATA static void* lit_832[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)loadMtxIndx_PNGP__11J3DShapeMtxCFiUs,
};

/* 803CD99C-803CD9A8 -00001 000C+00 0/1 0/0 0/0 .data            @833 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_833[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)loadMtxIndx_PCPU__11J3DShapeMtxCFiUs,
};
#pragma pop

/* 803CD9A8-803CD9B4 -00001 000C+00 0/1 0/0 0/0 .data            @834 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_834[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)loadMtxIndx_NCPU__11J3DShapeMtxCFiUs,
};
#pragma pop

/* 803CD9B4-803CD9C0 -00001 000C+00 0/1 0/0 0/0 .data            @835 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_835[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)loadMtxIndx_PNCPU__11J3DShapeMtxCFiUs,
};
#pragma pop

/* 803CD9C0-803CD9F0 02AAE0 0030+00 2/3 0/0 0/0 .data            sMtxLoadPipeline__11J3DShapeMtx */
SECTION_DATA u8 J3DShapeMtx::sMtxLoadPipeline[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803CD9F0-803CD9FC -00001 000C+00 0/1 0/0 0/0 .data            @836 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_836[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)loadMtxConcatView_PNGP__21J3DShapeMtxConcatViewCFiUs,
};
#pragma pop

/* 803CD9FC-803CDA08 -00001 000C+00 0/1 0/0 0/0 .data            @837 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_837[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)loadMtxConcatView_PCPU__21J3DShapeMtxConcatViewCFiUs,
};
#pragma pop

/* 803CDA08-803CDA14 -00001 000C+00 0/1 0/0 0/0 .data            @838 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_838[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)loadMtxConcatView_NCPU__21J3DShapeMtxConcatViewCFiUs,
};
#pragma pop

/* 803CDA14-803CDA20 -00001 000C+00 0/1 0/0 0/0 .data            @839 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_839[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)loadMtxConcatView_PNCPU__21J3DShapeMtxConcatViewCFiUs,
};
#pragma pop

/* 803CDA20-803CDA50 02AB40 0030+00 2/3 0/0 0/0 .data sMtxLoadPipeline__21J3DShapeMtxConcatView */
SECTION_DATA u8 J3DShapeMtxConcatView::sMtxLoadPipeline[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803CDA50-803CDA5C -00001 000C+00 0/1 0/0 0/0 .data            @840 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_840[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)loadMtxConcatView_PNGP_LOD__21J3DShapeMtxConcatViewCFiUs,
};
#pragma pop

/* 803CDA5C-803CDA68 -00001 000C+00 0/1 0/0 0/0 .data            @841 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_841[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)loadMtxConcatView_PCPU__21J3DShapeMtxConcatViewCFiUs,
};
#pragma pop

/* 803CDA68-803CDA74 -00001 000C+00 0/1 0/0 0/0 .data            @842 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_842[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)loadMtxConcatView_NCPU__21J3DShapeMtxConcatViewCFiUs,
};
#pragma pop

/* 803CDA74-803CDA80 -00001 000C+00 0/1 0/0 0/0 .data            @843 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_843[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)loadMtxConcatView_PNCPU__21J3DShapeMtxConcatViewCFiUs,
};
#pragma pop

/* 803CDA80-803CDAB0 02ABA0 0030+00 1/2 0/0 0/0 .data sMtxLoadLODPipeline__21J3DShapeMtxConcatView
 */
SECTION_DATA u8 J3DShapeMtxConcatView::sMtxLoadLODPipeline[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803CDAB0-803CDAE0 02ABD0 0030+00 1/1 0/0 0/0 .data            qMtx$895 */
SECTION_DATA static u8 qMtx[48] = {
    0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xBF, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803CDAE0-803CDB10 02AC00 0030+00 1/1 0/0 0/0 .data            qMtx2$896 */
SECTION_DATA static u8 qMtx2[48] = {
    0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xBF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803CDB10-803CDB40 -00001 0030+00 1/1 0/0 0/0 .data            @1035 */
SECTION_DATA static void* lit_1035[12] = {
    (void*)(((char*)loadExecute__17J3DDifferedTexMtxFPA4_Cf) + 0x5B4),
    (void*)(((char*)loadExecute__17J3DDifferedTexMtxFPA4_Cf) + 0x390),
    (void*)(((char*)loadExecute__17J3DDifferedTexMtxFPA4_Cf) + 0x3CC),
    (void*)(((char*)loadExecute__17J3DDifferedTexMtxFPA4_Cf) + 0x370),
    (void*)(((char*)loadExecute__17J3DDifferedTexMtxFPA4_Cf) + 0x5B4),
    (void*)(((char*)loadExecute__17J3DDifferedTexMtxFPA4_Cf) + 0x3DC),
    (void*)(((char*)loadExecute__17J3DDifferedTexMtxFPA4_Cf) + 0x390),
    (void*)(((char*)loadExecute__17J3DDifferedTexMtxFPA4_Cf) + 0x390),
    (void*)(((char*)loadExecute__17J3DDifferedTexMtxFPA4_Cf) + 0x3CC),
    (void*)(((char*)loadExecute__17J3DDifferedTexMtxFPA4_Cf) + 0x370),
    (void*)(((char*)loadExecute__17J3DDifferedTexMtxFPA4_Cf) + 0x510),
    (void*)(((char*)loadExecute__17J3DDifferedTexMtxFPA4_Cf) + 0x46C),
};

/* 803CDB40-803CDB70 -00001 0030+00 1/1 0/0 0/0 .data            @1034 */
SECTION_DATA static void* lit_1034[12] = {
    (void*)(((char*)loadExecute__17J3DDifferedTexMtxFPA4_Cf) + 0x2B8),
    (void*)(((char*)loadExecute__17J3DDifferedTexMtxFPA4_Cf) + 0xCC),
    (void*)(((char*)loadExecute__17J3DDifferedTexMtxFPA4_Cf) + 0xE0),
    (void*)(((char*)loadExecute__17J3DDifferedTexMtxFPA4_Cf) + 0xB8),
    (void*)(((char*)loadExecute__17J3DDifferedTexMtxFPA4_Cf) + 0x2B8),
    (void*)(((char*)loadExecute__17J3DDifferedTexMtxFPA4_Cf) + 0x110),
    (void*)(((char*)loadExecute__17J3DDifferedTexMtxFPA4_Cf) + 0xCC),
    (void*)(((char*)loadExecute__17J3DDifferedTexMtxFPA4_Cf) + 0xCC),
    (void*)(((char*)loadExecute__17J3DDifferedTexMtxFPA4_Cf) + 0xE0),
    (void*)(((char*)loadExecute__17J3DDifferedTexMtxFPA4_Cf) + 0xB8),
    (void*)(((char*)loadExecute__17J3DDifferedTexMtxFPA4_Cf) + 0x224),
    (void*)(((char*)loadExecute__17J3DDifferedTexMtxFPA4_Cf) + 0x190),
};

/* 804515A8-804515AC 000AA8 0004+00 4/4 2/2 0/0 .sbss            sCurrentPipeline__11J3DShapeMtx */
u8 J3DShapeMtx::sCurrentPipeline[4];

/* 804515AC-804515B0 000AAC 0004+00 3/3 1/1 0/0 .sbss            sCurrentScaleFlag__11J3DShapeMtx */
u8 J3DShapeMtx::sCurrentScaleFlag[4];

/* 804515B0-804515B4 -00001 0004+00 5/5 3/3 0/0 .sbss            None */
/* 804515B0 0001+00 data_804515B0 None */
/* 804515B1 0003+00 data_804515B1 None */
extern u8 struct_804515B0[4];
u8 struct_804515B0[4];

/* 804515B4-804515B8 000AB4 0004+00 4/4 1/1 0/0 .sbss            sTexMtxLoadType__11J3DShapeMtx */
u8 J3DShapeMtx::sTexMtxLoadType[4];

/* 804515B8-804515C0 000AB8 0008+00 2/2 0/0 0/0 .sbss            sMtxPtrTbl__21J3DShapeMtxConcatView
 */
u8 J3DShapeMtxConcatView::sMtxPtrTbl[8];

/* 804515C0-804515C4 000AC0 0004+00 6/6 2/2 0/0 .sbss            sTexGenBlock__17J3DDifferedTexMtx
 */
u8 J3DDifferedTexMtx::sTexGenBlock[4];

/* 804515C4-804515C8 000AC4 0004+00 1/1 2/2 0/0 .sbss            sTexMtxObj__17J3DDifferedTexMtx */
u8 J3DDifferedTexMtx::sTexMtxObj[4];

/* 80456398-8045639C 004998 0004+00 2/2 0/0 0/0 .sdata2          @1032 */
SECTION_SDATA2 static u8 lit_1032[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8031322C-80313828 30DB6C 05FC+00 7/5 0/0 0/0 .text loadExecute__17J3DDifferedTexMtxFPA4_Cf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DDifferedTexMtx::loadExecute(f32 const (*param_0)[4]) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/loadExecute__17J3DDifferedTexMtxFPA4_Cf.s"
}
#pragma pop

/* 80313828-803138C8 30E168 00A0+00 1/0 0/0 0/0 .text
 * loadMtxConcatView_PNGP__21J3DShapeMtxConcatViewCFiUs         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtxConcatView::loadMtxConcatView_PNGP(int param_0, u16 param_1) const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/loadMtxConcatView_PNGP__21J3DShapeMtxConcatViewCFiUs.s"
}
#pragma pop

/* 803138C8-8031396C 30E208 00A4+00 2/0 0/0 0/0 .text
 * loadMtxConcatView_PCPU__21J3DShapeMtxConcatViewCFiUs         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtxConcatView::loadMtxConcatView_PCPU(int param_0, u16 param_1) const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/loadMtxConcatView_PCPU__21J3DShapeMtxConcatViewCFiUs.s"
}
#pragma pop

/* 8031396C-80313A14 30E2AC 00A8+00 2/0 0/0 0/0 .text
 * loadMtxConcatView_NCPU__21J3DShapeMtxConcatViewCFiUs         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtxConcatView::loadMtxConcatView_NCPU(int param_0, u16 param_1) const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/loadMtxConcatView_NCPU__21J3DShapeMtxConcatViewCFiUs.s"
}
#pragma pop

/* 80313A14-80313AC8 30E354 00B4+00 2/0 0/0 0/0 .text
 * loadMtxConcatView_PNCPU__21J3DShapeMtxConcatViewCFiUs        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtxConcatView::loadMtxConcatView_PNCPU(int param_0, u16 param_1) const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/loadMtxConcatView_PNCPU__21J3DShapeMtxConcatViewCFiUs.s"
}
#pragma pop

/* 80313AC8-80313B94 30E408 00CC+00 1/0 0/0 0/0 .text
 * loadMtxConcatView_PNGP_LOD__21J3DShapeMtxConcatViewCFiUs     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtxConcatView::loadMtxConcatView_PNGP_LOD(int param_0, u16 param_1) const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/loadMtxConcatView_PNGP_LOD__21J3DShapeMtxConcatViewCFiUs.s"
}
#pragma pop

/* 80313B94-80313BF0 30E4D4 005C+00 1/0 0/0 0/0 .text            load__11J3DShapeMtxCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtx::load() const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/load__11J3DShapeMtxCFv.s"
}
#pragma pop

/* 80313BF0-80313C54 30E530 0064+00 5/0 0/0 0/0 .text
 * calcNBTScale__11J3DShapeMtxFRC3VecPA3_A3_fPA3_A3_f           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtx::calcNBTScale(Vec const& param_0, f32 (*param_1)[3][3], f32 (*param_2)[3][3]) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/calcNBTScale__11J3DShapeMtxFRC3VecPA3_A3_fPA3_A3_f.s"
}
#pragma pop

/* 80313C54-80313D28 30E594 00D4+00 1/0 0/0 0/0 .text            load__21J3DShapeMtxConcatViewCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtxConcatView::load() const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/load__21J3DShapeMtxConcatViewCFv.s"
}
#pragma pop

/* 80313D28-80313E4C 30E668 0124+00 3/0 0/0 0/0 .text
 * loadNrmMtx__21J3DShapeMtxConcatViewCFiUsPA4_f                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtxConcatView::loadNrmMtx(int param_0, u16 param_1, f32 (*param_2)[4]) const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/loadNrmMtx__21J3DShapeMtxConcatViewCFiUsPA4_f.s"
}
#pragma pop

/* 80313E4C-80313EEC 30E78C 00A0+00 1/0 0/0 0/0 .text            load__16J3DShapeMtxMultiCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtxMulti::load() const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/load__16J3DShapeMtxMultiCFv.s"
}
#pragma pop

/* 80313EEC-80313FA4 30E82C 00B8+00 1/0 0/0 0/0 .text
 * calcNBTScale__16J3DShapeMtxMultiFRC3VecPA3_A3_fPA3_A3_f      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtxMulti::calcNBTScale(Vec const& param_0, f32 (*param_1)[3][3],
                                        f32 (*param_2)[3][3]) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/calcNBTScale__16J3DShapeMtxMultiFRC3VecPA3_A3_fPA3_A3_f.s"
}
#pragma pop

/* 80313FA4-8031419C 30E8E4 01F8+00 1/0 0/0 0/0 .text load__26J3DShapeMtxMultiConcatViewCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtxMultiConcatView::load() const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/load__26J3DShapeMtxMultiConcatViewCFv.s"
}
#pragma pop

/* 8031419C-803142D4 30EADC 0138+00 1/0 0/0 0/0 .text
 * loadNrmMtx__26J3DShapeMtxMultiConcatViewCFiUsPA4_f           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtxMultiConcatView::loadNrmMtx(int param_0, u16 param_1, f32 (*param_2)[4]) const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/loadNrmMtx__26J3DShapeMtxMultiConcatViewCFiUsPA4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045639C-804563A0 00499C 0004+00 1/1 0/0 0/0 .sdata2          @1423 */
SECTION_SDATA2 static f32 lit_1423 = 1.0f;

/* 803142D4-803143E4 30EC14 0110+00 1/0 0/0 0/0 .text load__27J3DShapeMtxBBoardConcatViewCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtxBBoardConcatView::load() const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/load__27J3DShapeMtxBBoardConcatViewCFv.s"
}
#pragma pop

/* 803143E4-80314520 30ED24 013C+00 1/0 0/0 0/0 .text load__28J3DShapeMtxYBBoardConcatViewCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtxYBBoardConcatView::load() const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/load__28J3DShapeMtxYBBoardConcatViewCFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803CDB70-803CDB84 02AC90 0014+00 0/0 0/0 0/0 .data            mtxCache$1263 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 mtxCache[20] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};
#pragma pop

/* 803CDB84-803CDBAC 02ACA4 0028+00 1/1 1/1 0/0 .data __vt__28J3DShapeMtxYBBoardConcatView */
SECTION_DATA extern void* __vt__28J3DShapeMtxYBBoardConcatView[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__28J3DShapeMtxYBBoardConcatViewFv,
    (void*)getType__28J3DShapeMtxYBBoardConcatViewCFv,
    (void*)getUseMtxNum__11J3DShapeMtxCFv,
    (void*)getUseMtxIndex__11J3DShapeMtxCFUs,
    (void*)load__28J3DShapeMtxYBBoardConcatViewCFv,
    (void*)calcNBTScale__11J3DShapeMtxFRC3VecPA3_A3_fPA3_A3_f,
    (void*)loadNrmMtx__21J3DShapeMtxConcatViewCFiUs,
    (void*)loadNrmMtx__21J3DShapeMtxConcatViewCFiUsPA4_f,
};

/* 803CDBAC-803CDBD4 02ACCC 0028+00 1/1 1/1 0/0 .data            __vt__27J3DShapeMtxBBoardConcatView
 */
SECTION_DATA extern void* __vt__27J3DShapeMtxBBoardConcatView[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__27J3DShapeMtxBBoardConcatViewFv,
    (void*)getType__27J3DShapeMtxBBoardConcatViewCFv,
    (void*)getUseMtxNum__11J3DShapeMtxCFv,
    (void*)getUseMtxIndex__11J3DShapeMtxCFUs,
    (void*)load__27J3DShapeMtxBBoardConcatViewCFv,
    (void*)calcNBTScale__11J3DShapeMtxFRC3VecPA3_A3_fPA3_A3_f,
    (void*)loadNrmMtx__21J3DShapeMtxConcatViewCFiUs,
    (void*)loadNrmMtx__21J3DShapeMtxConcatViewCFiUsPA4_f,
};

/* 803CDBD4-803CDBFC 02ACF4 0028+00 1/1 1/1 0/0 .data            __vt__26J3DShapeMtxMultiConcatView
 */
SECTION_DATA extern void* __vt__26J3DShapeMtxMultiConcatView[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__26J3DShapeMtxMultiConcatViewFv,
    (void*)getType__26J3DShapeMtxMultiConcatViewCFv,
    (void*)getUseMtxNum__26J3DShapeMtxMultiConcatViewCFv,
    (void*)getUseMtxIndex__26J3DShapeMtxMultiConcatViewCFUs,
    (void*)load__26J3DShapeMtxMultiConcatViewCFv,
    (void*)calcNBTScale__11J3DShapeMtxFRC3VecPA3_A3_fPA3_A3_f,
    (void*)loadNrmMtx__26J3DShapeMtxMultiConcatViewCFiUs,
    (void*)loadNrmMtx__26J3DShapeMtxMultiConcatViewCFiUsPA4_f,
};

/* 803CDBFC-803CDC1C 02AD1C 0020+00 1/1 1/1 0/0 .data            __vt__16J3DShapeMtxMulti */
SECTION_DATA extern void* __vt__16J3DShapeMtxMulti[8] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16J3DShapeMtxMultiFv,
    (void*)getType__16J3DShapeMtxMultiCFv,
    (void*)getUseMtxNum__16J3DShapeMtxMultiCFv,
    (void*)getUseMtxIndex__16J3DShapeMtxMultiCFUs,
    (void*)load__16J3DShapeMtxMultiCFv,
    (void*)calcNBTScale__16J3DShapeMtxMultiFRC3VecPA3_A3_fPA3_A3_f,
};

/* 803CDC1C-803CDC44 02AD3C 0028+00 4/4 1/1 0/0 .data            __vt__21J3DShapeMtxConcatView */
SECTION_DATA extern void* __vt__21J3DShapeMtxConcatView[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__21J3DShapeMtxConcatViewFv,
    (void*)getType__21J3DShapeMtxConcatViewCFv,
    (void*)getUseMtxNum__11J3DShapeMtxCFv,
    (void*)getUseMtxIndex__11J3DShapeMtxCFUs,
    (void*)load__21J3DShapeMtxConcatViewCFv,
    (void*)calcNBTScale__11J3DShapeMtxFRC3VecPA3_A3_fPA3_A3_f,
    (void*)loadNrmMtx__21J3DShapeMtxConcatViewCFiUs,
    (void*)loadNrmMtx__21J3DShapeMtxConcatViewCFiUsPA4_f,
};

/* 803CDC44-803CDC68 02AD64 0020+04 6/6 1/1 0/0 .data            __vt__11J3DShapeMtx */
SECTION_DATA extern void* __vt__11J3DShapeMtx[8 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__11J3DShapeMtxFv,
    (void*)getType__11J3DShapeMtxCFv,
    (void*)getUseMtxNum__11J3DShapeMtxCFv,
    (void*)getUseMtxIndex__11J3DShapeMtxCFUs,
    (void*)load__11J3DShapeMtxCFv,
    (void*)calcNBTScale__11J3DShapeMtxFRC3VecPA3_A3_fPA3_A3_f,
    /* padding */
    NULL,
};

/* 80314520-8031458C 30EE60 006C+00 1/0 0/0 0/0 .text __dt__28J3DShapeMtxYBBoardConcatViewFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DShapeMtxYBBoardConcatView::~J3DShapeMtxYBBoardConcatView() {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/__dt__28J3DShapeMtxYBBoardConcatViewFv.s"
}
#pragma pop

/* 8031458C-80314598 30EECC 000C+00 1/0 0/0 0/0 .text getType__28J3DShapeMtxYBBoardConcatViewCFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtxYBBoardConcatView::getType() const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/getType__28J3DShapeMtxYBBoardConcatViewCFv.s"
}
#pragma pop

/* 80314598-8031459C 30EED8 0004+00 3/0 0/0 0/0 .text loadNrmMtx__21J3DShapeMtxConcatViewCFiUs */
void J3DShapeMtxConcatView::loadNrmMtx(int param_0, u16 param_1) const {
    /* empty function */
}

/* 8031459C-803145A4 30EEDC 0008+00 4/0 0/0 0/0 .text            getUseMtxIndex__11J3DShapeMtxCFUs
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtx::getUseMtxIndex(u16 param_0) const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/getUseMtxIndex__11J3DShapeMtxCFUs.s"
}
#pragma pop

/* 803145A4-80314610 30EEE4 006C+00 1/0 0/0 0/0 .text __dt__27J3DShapeMtxBBoardConcatViewFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DShapeMtxBBoardConcatView::~J3DShapeMtxBBoardConcatView() {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/__dt__27J3DShapeMtxBBoardConcatViewFv.s"
}
#pragma pop

/* 80314610-8031461C 30EF50 000C+00 1/0 0/0 0/0 .text getType__27J3DShapeMtxBBoardConcatViewCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtxBBoardConcatView::getType() const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/getType__27J3DShapeMtxBBoardConcatViewCFv.s"
}
#pragma pop

/* 8031461C-80314688 30EF5C 006C+00 1/0 0/0 0/0 .text __dt__26J3DShapeMtxMultiConcatViewFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DShapeMtxMultiConcatView::~J3DShapeMtxMultiConcatView() {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/__dt__26J3DShapeMtxMultiConcatViewFv.s"
}
#pragma pop

/* 80314688-80314694 30EFC8 000C+00 1/0 0/0 0/0 .text getType__26J3DShapeMtxMultiConcatViewCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtxMultiConcatView::getType() const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/getType__26J3DShapeMtxMultiConcatViewCFv.s"
}
#pragma pop

/* 80314694-8031469C 30EFD4 0008+00 1/0 0/0 0/0 .text
 * getUseMtxNum__26J3DShapeMtxMultiConcatViewCFv                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtxMultiConcatView::getUseMtxNum() const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/getUseMtxNum__26J3DShapeMtxMultiConcatViewCFv.s"
}
#pragma pop

/* 8031469C-803146AC 30EFDC 0010+00 1/0 0/0 0/0 .text
 * getUseMtxIndex__26J3DShapeMtxMultiConcatViewCFUs             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtxMultiConcatView::getUseMtxIndex(u16 param_0) const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/getUseMtxIndex__26J3DShapeMtxMultiConcatViewCFUs.s"
}
#pragma pop

/* 803146AC-803146B0 30EFEC 0004+00 1/0 0/0 0/0 .text
 * loadNrmMtx__26J3DShapeMtxMultiConcatViewCFiUs                */
void J3DShapeMtxMultiConcatView::loadNrmMtx(int param_0, u16 param_1) const {
    /* empty function */
}

/* 803146B0-8031470C 30EFF0 005C+00 1/0 0/0 0/0 .text            __dt__16J3DShapeMtxMultiFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DShapeMtxMulti::~J3DShapeMtxMulti() {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/__dt__16J3DShapeMtxMultiFv.s"
}
#pragma pop

/* 8031470C-80314718 30F04C 000C+00 1/0 0/0 0/0 .text            getType__16J3DShapeMtxMultiCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtxMulti::getType() const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/getType__16J3DShapeMtxMultiCFv.s"
}
#pragma pop

/* 80314718-80314720 30F058 0008+00 1/0 0/0 0/0 .text            getUseMtxNum__16J3DShapeMtxMultiCFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtxMulti::getUseMtxNum() const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/getUseMtxNum__16J3DShapeMtxMultiCFv.s"
}
#pragma pop

/* 80314720-80314730 30F060 0010+00 1/0 0/0 0/0 .text getUseMtxIndex__16J3DShapeMtxMultiCFUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtxMulti::getUseMtxIndex(u16 param_0) const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/getUseMtxIndex__16J3DShapeMtxMultiCFUs.s"
}
#pragma pop

/* 80314730-8031478C 30F070 005C+00 1/0 0/0 0/0 .text            __dt__21J3DShapeMtxConcatViewFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DShapeMtxConcatView::~J3DShapeMtxConcatView() {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/__dt__21J3DShapeMtxConcatViewFv.s"
}
#pragma pop

/* 8031478C-80314798 30F0CC 000C+00 1/0 0/0 0/0 .text            getType__21J3DShapeMtxConcatViewCFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtxConcatView::getType() const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/getType__21J3DShapeMtxConcatViewCFv.s"
}
#pragma pop

/* 80314798-803147E0 30F0D8 0048+00 1/0 0/0 0/0 .text            __dt__11J3DShapeMtxFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DShapeMtx::~J3DShapeMtx() {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/__dt__11J3DShapeMtxFv.s"
}
#pragma pop

/* 803147E0-803147EC 30F120 000C+00 1/0 0/0 0/0 .text            getType__11J3DShapeMtxCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeMtx::getType() const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/getType__11J3DShapeMtxCFv.s"
}
#pragma pop

/* 803147EC-80314924 30F12C 0138+00 0/0 1/0 0/0 .text            __sinit_J3DShapeMtx_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_J3DShapeMtx_cpp() {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeMtx/__sinit_J3DShapeMtx_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_803147EC = (void*)__sinit_J3DShapeMtx_cpp;
#pragma pop
