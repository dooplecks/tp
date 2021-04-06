//
// Generated By: dol2asm
// Translation Unit: d/bg/d_bg_w_base
//

#include "d/bg/d_bg_w_base.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {};

struct cXyz {};

struct dBgW_Base {
    /* 80074AB4 */ void SetOldShapeAngleY(s16);
    /* 8007E5A8 */ dBgW_Base();
    /* 8007E640 */ ~dBgW_Base();
    /* 8007E69C */ void ClrDBgWBase();
    /* 8007E6D0 */ bool ChkMemoryError();
    /* 8007E6D8 */ void CallRideCallBack(fopAc_ac_c*, fopAc_ac_c*);
    /* 8007E6DC */ void CallArrowStickCallBack(fopAc_ac_c*, fopAc_ac_c*, cXyz&);
    /* 8007E6E0 */ void CalcDiffShapeAngleY(s16);
};

struct cBgW_BgId {
    /* 8007E5F8 */ ~cBgW_BgId();
};

//
// Forward References:
//

extern "C" void __ct__9dBgW_BaseFv();
extern "C" void __dt__9cBgW_BgIdFv();
extern "C" void __dt__9dBgW_BaseFv();
extern "C" void ClrDBgWBase__9dBgW_BaseFv();
extern "C" bool ChkMemoryError__9dBgW_BaseFv();
extern "C" void CallRideCallBack__9dBgW_BaseFP10fopAc_ac_cP10fopAc_ac_c();
extern "C" void CallArrowStickCallBack__9dBgW_BaseFP10fopAc_ac_cP10fopAc_ac_cR4cXyz();
extern "C" void CalcDiffShapeAngleY__9dBgW_BaseFs();

//
// External References:
//

extern "C" void SetOldShapeAngleY__9dBgW_BaseFs();
extern "C" void __dl__FPv();

//
// Declarations:
//

/* ############################################################################################## */
/* 803ABCC8-803ABDB8 008DE8 00F0+00 2/2 0/0 0/0 .data            __vt__9dBgW_Base */
SECTION_DATA extern void* __vt__9dBgW_Base[60] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__9dBgW_BaseFv,
    (void*)ChkMemoryError__9dBgW_BaseFv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)SetOldShapeAngleY__9dBgW_BaseFs,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)CallRideCallBack__9dBgW_BaseFP10fopAc_ac_cP10fopAc_ac_c,
    (void*)CallArrowStickCallBack__9dBgW_BaseFP10fopAc_ac_cP10fopAc_ac_cR4cXyz,
};

/* 803ABDB8-803ABDC8 008ED8 000C+04 3/3 0/0 0/0 .data            __vt__9cBgW_BgId */
SECTION_DATA extern void* __vt__9cBgW_BgId[3 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__9cBgW_BgIdFv,
    /* padding */
    NULL,
};

/* 8007E5A8-8007E5F8 078EE8 0050+00 0/0 2/2 0/0 .text            __ct__9dBgW_BaseFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgW_Base::dBgW_Base() {
    nofralloc
#include "asm/d/bg/d_bg_w_base/__ct__9dBgW_BaseFv.s"
}
#pragma pop

/* 8007E5F8-8007E640 078F38 0048+00 1/0 0/0 0/0 .text            __dt__9cBgW_BgIdFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cBgW_BgId::~cBgW_BgId() {
    nofralloc
#include "asm/d/bg/d_bg_w_base/__dt__9cBgW_BgIdFv.s"
}
#pragma pop

/* 8007E640-8007E69C 078F80 005C+00 1/0 2/2 0/0 .text            __dt__9dBgW_BaseFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgW_Base::~dBgW_Base() {
    nofralloc
#include "asm/d/bg/d_bg_w_base/__dt__9dBgW_BaseFv.s"
}
#pragma pop

/* 8007E69C-8007E6D0 078FDC 0034+00 1/1 1/1 0/0 .text            ClrDBgWBase__9dBgW_BaseFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgW_Base::ClrDBgWBase() {
    nofralloc
#include "asm/d/bg/d_bg_w_base/ClrDBgWBase__9dBgW_BaseFv.s"
}
#pragma pop

/* 8007E6D0-8007E6D8 079010 0008+00 1/0 1/0 0/0 .text            ChkMemoryError__9dBgW_BaseFv */
bool dBgW_Base::ChkMemoryError() {
    return false;
}

/* 8007E6D8-8007E6DC 079018 0004+00 1/0 2/0 0/0 .text
 * CallRideCallBack__9dBgW_BaseFP10fopAc_ac_cP10fopAc_ac_c      */
void dBgW_Base::CallRideCallBack(fopAc_ac_c* param_0, fopAc_ac_c* param_1) {
    /* empty function */
}

/* 8007E6DC-8007E6E0 07901C 0004+00 1/0 2/0 0/0 .text
 * CallArrowStickCallBack__9dBgW_BaseFP10fopAc_ac_cP10fopAc_ac_cR4cXyz */
void dBgW_Base::CallArrowStickCallBack(fopAc_ac_c* param_0, fopAc_ac_c* param_1, cXyz& param_2) {
    /* empty function */
}

/* 8007E6E0-8007E6F4 079020 0014+00 0/0 1/1 0/0 .text            CalcDiffShapeAngleY__9dBgW_BaseFs
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgW_Base::CalcDiffShapeAngleY(s16 param_0) {
    nofralloc
#include "asm/d/bg/d_bg_w_base/CalcDiffShapeAngleY__9dBgW_BaseFs.s"
}
#pragma pop
