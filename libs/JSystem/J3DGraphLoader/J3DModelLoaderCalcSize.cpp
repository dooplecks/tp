//
// Generated By: dol2asm
// Translation Unit: J3DModelLoaderCalcSize
//

#include "JSystem/J3DGraphLoader/J3DModelLoaderCalcSize.h"
#include "dol2asm.h"

//
// Types:
//

struct J3DTextureBlock {};

struct J3DShapeBlock {};

struct J3DShapeFactory {
    /* 80337350 */ J3DShapeFactory(J3DShapeBlock const&);
    /* 80337944 */ void calcSize(int, u32);
    /* 803379D8 */ void calcSizeVcdVatCmdBuffer(u32);
};

struct J3DMaterialBlock {};

struct J3DModelLoader_v26 {
    /* 80336DB4 */ void calcSizeMaterial(J3DMaterialBlock const*, u32);
    /* 80336F60 */ void calcSizeMaterialTable(J3DMaterialBlock const*, u32);
};

struct J3DDrawBlock {};

struct J3DMaterialDLBlock {};

struct J3DJointBlock {};

struct J3DEnvelopeBlock {};

struct J3DModelInfoBlock {};

struct J3DModelLoader {
    /* 80336794 */ void countMaterialNum(void const*);
    /* 803367D4 */ void calcLoadSize(void const*, u32);
    /* 803369A0 */ void calcLoadMaterialTableSize(void const*);
    /* 80336A98 */ void calcLoadBinaryDisplayListSize(void const*, u32);
    /* 80336CD8 */ void calcSizeInformation(J3DModelInfoBlock const*, u32);
    /* 80336D64 */ void calcSizeJoint(J3DJointBlock const*);
    /* 80336D90 */ void calcSizeEnvelope(J3DEnvelopeBlock const*);
    /* 80336DA0 */ void calcSizeDraw(J3DDrawBlock const*);
    /* 80336EA0 */ void calcSizeShape(J3DShapeBlock const*, u32);
    /* 80336F44 */ void calcSizeTexture(J3DTextureBlock const*);
    /* 80336FF0 */ void calcSizeTextureTable(J3DTextureBlock const*);
    /* 80337010 */ void calcSizePatchedMaterial(J3DMaterialBlock const*, u32);
    /* 803370A0 */ void calcSizeMaterialDL(J3DMaterialDLBlock const*, u32);
};

struct J3DMaterial {};

struct J3DMaterialFactory {
    struct MaterialType {};

    /* 8032FFEC */ J3DMaterialFactory(J3DMaterialBlock const&);
    /* 80330234 */ J3DMaterialFactory(J3DMaterialDLBlock const&);
    /* 803302BC */ void countUniqueMaterials();
    /* 80331A7C */ void calcSize(J3DMaterial*, J3DMaterialFactory::MaterialType, int, u32) const;
};

//
// Forward References:
//

extern "C" void countMaterialNum__14J3DModelLoaderFPCv();
extern "C" void calcLoadSize__14J3DModelLoaderFPCvUl();
extern "C" void calcLoadMaterialTableSize__14J3DModelLoaderFPCv();
extern "C" void calcLoadBinaryDisplayListSize__14J3DModelLoaderFPCvUl();
extern "C" void calcSizeInformation__14J3DModelLoaderFPC17J3DModelInfoBlockUl();
extern "C" void calcSizeJoint__14J3DModelLoaderFPC13J3DJointBlock();
extern "C" void calcSizeEnvelope__14J3DModelLoaderFPC16J3DEnvelopeBlock();
extern "C" void calcSizeDraw__14J3DModelLoaderFPC12J3DDrawBlock();
extern "C" void calcSizeMaterial__18J3DModelLoader_v26FPC16J3DMaterialBlockUl();
extern "C" void calcSizeShape__14J3DModelLoaderFPC13J3DShapeBlockUl();
extern "C" void calcSizeTexture__14J3DModelLoaderFPC15J3DTextureBlock();
extern "C" void calcSizeMaterialTable__18J3DModelLoader_v26FPC16J3DMaterialBlockUl();
extern "C" void calcSizeTextureTable__14J3DModelLoaderFPC15J3DTextureBlock();
extern "C" void calcSizePatchedMaterial__14J3DModelLoaderFPC16J3DMaterialBlockUl();
extern "C" void calcSizeMaterialDL__14J3DModelLoaderFPC18J3DMaterialDLBlockUl();
extern "C" extern char const* const J3DModelLoaderCalcSize__stringBase0;

//
// External References:
//

extern "C" void OSReport();
extern "C" void __ct__18J3DMaterialFactoryFRC16J3DMaterialBlock();
extern "C" void __ct__18J3DMaterialFactoryFRC18J3DMaterialDLBlock();
extern "C" void countUniqueMaterials__18J3DMaterialFactoryFv();
extern "C" void
calcSize__18J3DMaterialFactoryCFP11J3DMaterialQ218J3DMaterialFactory12MaterialTypeiUl();
extern "C" void func_8033674C(void* _this, void const*, void const*);
extern "C" void __ct__15J3DShapeFactoryFRC13J3DShapeBlock();
extern "C" void calcSize__15J3DShapeFactoryFiUl();
extern "C" void calcSizeVcdVatCmdBuffer__15J3DShapeFactoryFUl();
extern "C" void _savegpr_22();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _restgpr_22();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();

//
// Declarations:
//

/* 80336794-803367D4 3310D4 0040+00 0/0 3/0 0/0 .text countMaterialNum__14J3DModelLoaderFPCv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModelLoader::countMaterialNum(void const* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DModelLoaderCalcSize/countMaterialNum__14J3DModelLoaderFPCv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A20E8-803A20E8 02E748 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_803A20E8 = "Unknown data block\n";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_803A20FC = "\0\0\0";
#pragma pop

/* 803367D4-803369A0 331114 01CC+00 0/0 3/0 0/0 .text calcLoadSize__14J3DModelLoaderFPCvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModelLoader::calcLoadSize(void const* param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DModelLoaderCalcSize/calcLoadSize__14J3DModelLoaderFPCvUl.s"
}
#pragma pop

/* 803369A0-80336A98 3312E0 00F8+00 0/0 3/0 0/0 .text
 * calcLoadMaterialTableSize__14J3DModelLoaderFPCv              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModelLoader::calcLoadMaterialTableSize(void const* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DModelLoaderCalcSize/calcLoadMaterialTableSize__14J3DModelLoaderFPCv.s"
}
#pragma pop

/* 80336A98-80336CD8 3313D8 0240+00 0/0 3/0 0/0 .text
 * calcLoadBinaryDisplayListSize__14J3DModelLoaderFPCvUl        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModelLoader::calcLoadBinaryDisplayListSize(void const* param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DModelLoaderCalcSize/calcLoadBinaryDisplayListSize__14J3DModelLoaderFPCvUl.s"
}
#pragma pop

/* 80336CD8-80336D64 331618 008C+00 2/2 0/0 0/0 .text
 * calcSizeInformation__14J3DModelLoaderFPC17J3DModelInfoBlockUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModelLoader::calcSizeInformation(J3DModelInfoBlock const* param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DModelLoaderCalcSize/calcSizeInformation__14J3DModelLoaderFPC17J3DModelInfoBlockUl.s"
}
#pragma pop

/* 80336D64-80336D90 3316A4 002C+00 2/2 0/0 0/0 .text
 * calcSizeJoint__14J3DModelLoaderFPC13J3DJointBlock            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModelLoader::calcSizeJoint(J3DJointBlock const* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DModelLoaderCalcSize/calcSizeJoint__14J3DModelLoaderFPC13J3DJointBlock.s"
}
#pragma pop

/* 80336D90-80336DA0 3316D0 0010+00 2/2 0/0 0/0 .text
 * calcSizeEnvelope__14J3DModelLoaderFPC16J3DEnvelopeBlock      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModelLoader::calcSizeEnvelope(J3DEnvelopeBlock const* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DModelLoaderCalcSize/calcSizeEnvelope__14J3DModelLoaderFPC16J3DEnvelopeBlock.s"
}
#pragma pop

/* 80336DA0-80336DB4 3316E0 0014+00 2/2 0/0 0/0 .text
 * calcSizeDraw__14J3DModelLoaderFPC12J3DDrawBlock              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModelLoader::calcSizeDraw(J3DDrawBlock const* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DModelLoaderCalcSize/calcSizeDraw__14J3DModelLoaderFPC12J3DDrawBlock.s"
}
#pragma pop

/* 80336DB4-80336EA0 3316F4 00EC+00 0/0 1/0 0/0 .text
 * calcSizeMaterial__18J3DModelLoader_v26FPC16J3DMaterialBlockUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModelLoader_v26::calcSizeMaterial(J3DMaterialBlock const* param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DModelLoaderCalcSize/calcSizeMaterial__18J3DModelLoader_v26FPC16J3DMaterialBlockUl.s"
}
#pragma pop

/* 80336EA0-80336F44 3317E0 00A4+00 2/2 0/0 0/0 .text
 * calcSizeShape__14J3DModelLoaderFPC13J3DShapeBlockUl          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModelLoader::calcSizeShape(J3DShapeBlock const* param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DModelLoaderCalcSize/calcSizeShape__14J3DModelLoaderFPC13J3DShapeBlockUl.s"
}
#pragma pop

/* 80336F44-80336F60 331884 001C+00 3/3 0/0 0/0 .text
 * calcSizeTexture__14J3DModelLoaderFPC15J3DTextureBlock        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModelLoader::calcSizeTexture(J3DTextureBlock const* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DModelLoaderCalcSize/calcSizeTexture__14J3DModelLoaderFPC15J3DTextureBlock.s"
}
#pragma pop

/* 80336F60-80336FF0 3318A0 0090+00 0/0 1/0 0/0 .text
 * calcSizeMaterialTable__18J3DModelLoader_v26FPC16J3DMaterialBlockUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModelLoader_v26::calcSizeMaterialTable(J3DMaterialBlock const* param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DModelLoaderCalcSize/calcSizeMaterialTable__18J3DModelLoader_v26FPC16J3DMaterialBlockUl.s"
}
#pragma pop

/* 80336FF0-80337010 331930 0020+00 1/1 0/0 0/0 .text
 * calcSizeTextureTable__14J3DModelLoaderFPC15J3DTextureBlock   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModelLoader::calcSizeTextureTable(J3DTextureBlock const* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DModelLoaderCalcSize/calcSizeTextureTable__14J3DModelLoaderFPC15J3DTextureBlock.s"
}
#pragma pop

/* 80337010-803370A0 331950 0090+00 1/1 0/0 0/0 .text
 * calcSizePatchedMaterial__14J3DModelLoaderFPC16J3DMaterialBlockUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModelLoader::calcSizePatchedMaterial(J3DMaterialBlock const* param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DModelLoaderCalcSize/calcSizePatchedMaterial__14J3DModelLoaderFPC16J3DMaterialBlockUl.s"
}
#pragma pop

/* 803370A0-80337178 3319E0 00D8+00 1/1 0/0 0/0 .text
 * calcSizeMaterialDL__14J3DModelLoaderFPC18J3DMaterialDLBlockUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModelLoader::calcSizeMaterialDL(J3DMaterialDLBlock const* param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DModelLoaderCalcSize/calcSizeMaterialDL__14J3DModelLoaderFPC18J3DMaterialDLBlockUl.s"
}
#pragma pop

/* 803A20E8-803A20E8 02E748 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
