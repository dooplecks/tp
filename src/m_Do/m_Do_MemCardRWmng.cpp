//
// Generated By: dol2asm
// Translation Unit: m_Do/m_Do_MemCardRWmng
//

#include "m_Do/m_Do_MemCardRWmng.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct mDoMemCdRWm_HeaderData {};

struct CARDFileInfo {};

//
// Forward References:
//

extern "C" void mDoMemCdRWm_Store__FP12CARDFileInfoPvUl();
extern "C" void mDoMemCdRWm_Restore__FP12CARDFileInfoPvUl();
extern "C" static void mDoMemCdRWm_BuildHeader__FP22mDoMemCdRWm_HeaderData();
extern "C" static void mDoMemCdRWm_SetCardStat__FP12CARDFileInfo();
extern "C" static void mDoMemCdRWm_CheckCardStat__FP12CARDFileInfo();
extern "C" static void mDoMemCdRWm_CalcCheckSum__FPvUl();
extern "C" static void mDoMemCdRWm_CalcCheckSumGameData__FPvUl();
extern "C" void mDoMemCdRWm_TestCheckSumGameData__FPv();
extern "C" void mDoMemCdRWm_SetCheckSumGameData__FPUcUc();
extern "C" extern char const* const m_Do_m_Do_MemCardRWmng__stringBase0;

//
// External References:
//

SECTION_INIT void memset();
SECTION_INIT void memcpy();
extern "C" void OSGetTime();
extern "C" void OSTicksToCalendarTime();
extern "C" void CARDRead();
extern "C" void CARDWrite();
extern "C" void CARDGetStatus();
extern "C" void CARDSetStatus();
extern "C" void CARDGetSerialNo();
extern "C" void _savegpr_20();
extern "C" void _savegpr_28();
extern "C" void _restgpr_20();
extern "C" void _restgpr_28();
extern "C" void snprintf();
extern "C" extern u8 g_mDoMemCd_control[8192];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

//
// Declarations:
//

/* ############################################################################################## */
/* 803ECF40-803F0F40 019C60 4000+00 2/2 0/0 0/0 .bss             sTmpBuf */
static u8 sTmpBuf[16384];

/* 80017498-8001769C 011DD8 0204+00 0/0 1/1 0/0 .text mDoMemCdRWm_Store__FP12CARDFileInfoPvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMemCdRWm_Store(CARDFileInfo* param_0, void* param_1, u32 param_2) {
    nofralloc
#include "asm/m_Do/m_Do_MemCardRWmng/mDoMemCdRWm_Store__FP12CARDFileInfoPvUl.s"
}
#pragma pop

/* 8001769C-8001787C 011FDC 01E0+00 0/0 1/1 0/0 .text mDoMemCdRWm_Restore__FP12CARDFileInfoPvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMemCdRWm_Restore(CARDFileInfo* param_0, void* param_1, u32 param_2) {
    nofralloc
#include "asm/m_Do/m_Do_MemCardRWmng/mDoMemCdRWm_Restore__FP12CARDFileInfoPvUl.s"
}
#pragma pop

/* 8001787C-800179E4 0121BC 0168+00 1/1 0/0 0/0 .text
 * mDoMemCdRWm_BuildHeader__FP22mDoMemCdRWm_HeaderData          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void mDoMemCdRWm_BuildHeader(mDoMemCdRWm_HeaderData* param_0) {
    nofralloc
#include "asm/m_Do/m_Do_MemCardRWmng/mDoMemCdRWm_BuildHeader__FP22mDoMemCdRWm_HeaderData.s"
}
#pragma pop

/* 800179E4-80017B4C 012324 0168+00 1/1 0/0 0/0 .text mDoMemCdRWm_SetCardStat__FP12CARDFileInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void mDoMemCdRWm_SetCardStat(CARDFileInfo* param_0) {
    nofralloc
#include "asm/m_Do/m_Do_MemCardRWmng/mDoMemCdRWm_SetCardStat__FP12CARDFileInfo.s"
}
#pragma pop

/* 80017B4C-80017C74 01248C 0128+00 2/2 0/0 0/0 .text mDoMemCdRWm_CheckCardStat__FP12CARDFileInfo
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void mDoMemCdRWm_CheckCardStat(CARDFileInfo* param_0) {
    nofralloc
#include "asm/m_Do/m_Do_MemCardRWmng/mDoMemCdRWm_CheckCardStat__FP12CARDFileInfo.s"
}
#pragma pop

/* 80017C74-80017CB4 0125B4 0040+00 1/1 0/0 0/0 .text            mDoMemCdRWm_CalcCheckSum__FPvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void mDoMemCdRWm_CalcCheckSum(void* param_0, u32 param_1) {
    nofralloc
#include "asm/m_Do/m_Do_MemCardRWmng/mDoMemCdRWm_CalcCheckSum__FPvUl.s"
}
#pragma pop

/* 80017CB4-80017CEC 0125F4 0038+00 2/2 0/0 0/0 .text mDoMemCdRWm_CalcCheckSumGameData__FPvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void mDoMemCdRWm_CalcCheckSumGameData(void* param_0, u32 param_1) {
    nofralloc
#include "asm/m_Do/m_Do_MemCardRWmng/mDoMemCdRWm_CalcCheckSumGameData__FPvUl.s"
}
#pragma pop

/* 80017CEC-80017D38 01262C 004C+00 1/1 4/4 0/0 .text mDoMemCdRWm_TestCheckSumGameData__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMemCdRWm_TestCheckSumGameData(void* param_0) {
    nofralloc
#include "asm/m_Do/m_Do_MemCardRWmng/mDoMemCdRWm_TestCheckSumGameData__FPv.s"
}
#pragma pop

/* 80017D38-80017D7C 012678 0044+00 0/0 4/4 0/0 .text mDoMemCdRWm_SetCheckSumGameData__FPUcUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMemCdRWm_SetCheckSumGameData(u8* param_0, u8 param_1) {
    nofralloc
#include "asm/m_Do/m_Do_MemCardRWmng/mDoMemCdRWm_SetCheckSumGameData__FPUcUc.s"
}
#pragma pop

/* 80374408-80374460 000A68 0051+07 1/1 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80374408 = "Zelda: Twilight Princess";
SECTION_DEAD static char const* const stringBase_80374421 = "%d/%d Save Data";
SECTION_DEAD static char const* const stringBase_80374431 = "zelda2_gc_banner.bti";
SECTION_DEAD static char const* const stringBase_80374446 = "zelda2_gc_icon.bti";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_80374459 = "\0\0\0\0\0\0";
#pragma pop
