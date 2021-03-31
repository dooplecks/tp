// 
// Generated By: dol2asm
// Translation Unit: m_Do/m_Do_MemCard
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "m_Do/m_Do_MemCard.h"

// 
// Types:
// 

struct mDoMemCd_Ctrl_c {
	/* 8001672C */ // True False
mDoMemCd_Ctrl_c();
	/* 80016730 */ // False False
void ThdInit();
	/* 800167D0 */ // True False
void main();
	/* 80016894 */ // False False
void update();
	/* 800169B4 */ // False False
void load();
	/* 80016A0C */ // True False
void restore();
	/* 80016AB0 */ // False False
//  void* False
// 	 void False
//  u32 False
//  u32 False
void LoadSync(void*, u32, u32);
	/* 80016B58 */ // False False
//  void* False
// 	 void False
//  u32 False
//  u32 False
void save(void*, u32, u32);
	/* 80016BD4 */ // True False
void store();
	/* 80016CE0 */ // False False
void SaveSync();
	/* 80016D74 */ // False False
//  u32 False
void getStatus(u32);
	/* 80016E58 */ // False False
void command_format();
	/* 80016EA8 */ // True False
void format();
	/* 80016F2C */ // False False
void FormatSync();
	/* 80016FB8 */ // True False
void attach();
	/* 800170B8 */ // False False
void command_attach();
	/* 80017110 */ // True False
void detach();
	/* 80017148 */ // True False
void mount();
	/* 80017274 */ // True False
void loadfile();
	/* 800172D4 */ // True False
void checkspace();
	/* 80017360 */ // True False
//  s32 False
void setCardState(s32);
};

struct OSThread {
};

struct JKRThread {
	/* 802D16B8 */ // False False
//  OSThread* False
// 	 OSThread False
//  int False
JKRThread(OSThread*, int);
	/* 802D1758 */ // False False
~JKRThread();
};

struct JKRHeap {
	/* 802CE438 */ // False False
void becomeCurrentHeap();
};

struct CARDFileInfo {
};

// 
// Forward References:
// 

// True False
//  void* False
// 	 void False
static void mDoMemCd_main(void*);

// True False
extern "C" void __ct__15mDoMemCd_Ctrl_cFv();
// False False
extern "C" void ThdInit__15mDoMemCd_Ctrl_cFv();
// True False
extern "C" void main__15mDoMemCd_Ctrl_cFv();
// False False
extern "C" void update__15mDoMemCd_Ctrl_cFv();
// False False
extern "C" void load__15mDoMemCd_Ctrl_cFv();
// True False
extern "C" void restore__15mDoMemCd_Ctrl_cFv();
// False False
//  void* False
// 	 void False
//  u32 False
//  u32 False
extern "C" void LoadSync__15mDoMemCd_Ctrl_cFPvUlUl();
// False False
//  void* False
// 	 void False
//  u32 False
//  u32 False
extern "C" void save__15mDoMemCd_Ctrl_cFPvUlUl();
// True False
extern "C" void store__15mDoMemCd_Ctrl_cFv();
// False False
extern "C" void SaveSync__15mDoMemCd_Ctrl_cFv();
// False False
//  u32 False
extern "C" void getStatus__15mDoMemCd_Ctrl_cFUl();
// False False
extern "C" void command_format__15mDoMemCd_Ctrl_cFv();
// True False
extern "C" void format__15mDoMemCd_Ctrl_cFv();
// False False
extern "C" void FormatSync__15mDoMemCd_Ctrl_cFv();
// True False
extern "C" void attach__15mDoMemCd_Ctrl_cFv();
// False False
extern "C" void command_attach__15mDoMemCd_Ctrl_cFv();
// True False
extern "C" void detach__15mDoMemCd_Ctrl_cFv();
// True False
extern "C" void mount__15mDoMemCd_Ctrl_cFv();
// True False
extern "C" void loadfile__15mDoMemCd_Ctrl_cFv();
// True False
extern "C" void checkspace__15mDoMemCd_Ctrl_cFv();
// True False
//  s32 False
extern "C" void setCardState__15mDoMemCd_Ctrl_cFl();
// True False
//  void* False
// 	 void False
extern "C" static void mDoMemCd_main__FPv();
// False False
extern "C" void __sinit_m_Do_MemCard_cpp();
extern "C" extern char const* const m_Do_m_Do_MemCard__stringBase0;
extern "C" extern u8 g_mDoMemCd_control[8192];

// 
// External References:
// 

// False False
void mDoExt_getAssertHeap();
// False False
//  CARDFileInfo* False
// 	 CARDFileInfo False
//  void* False
// 	 void False
//  u32 False
void mDoMemCdRWm_Store(CARDFileInfo*, void*, u32);
// False False
//  CARDFileInfo* False
// 	 CARDFileInfo False
//  void* False
// 	 void False
//  u32 False
void mDoMemCdRWm_Restore(CARDFileInfo*, void*, u32);

// False False
SECTION_INIT void memcpy();
// False False
extern "C" void mDoExt_getAssertHeap__Fv();
// False False
//  CARDFileInfo* False
// 	 CARDFileInfo False
//  void* False
// 	 void False
//  u32 False
extern "C" void mDoMemCdRWm_Store__FP12CARDFileInfoPvUl();
// False False
//  CARDFileInfo* False
// 	 CARDFileInfo False
//  void* False
// 	 void False
//  u32 False
extern "C" void mDoMemCdRWm_Restore__FP12CARDFileInfoPvUl();
// False False
extern "C" void becomeCurrentHeap__7JKRHeapFv();
// False False
//  OSThread* False
// 	 OSThread False
//  int False
extern "C" void __ct__9JKRThreadFP8OSThreadi();
// False False
extern "C" void __dt__9JKRThreadFv();
// False False
extern "C" void OSInitMutex();
// False False
extern "C" void OSLockMutex();
// False False
extern "C" void OSUnlockMutex();
// False False
extern "C" void OSTryLockMutex();
// False False
extern "C" void OSInitCond();
// False False
extern "C" void OSWaitCond();
// False False
extern "C" void OSSignalCond();
// False False
extern "C" void OSGetCurrentThread();
// False False
extern "C" void OSCreateThread();
// False False
extern "C" void OSResumeThread();
// False False
extern "C" void OSGetThreadPriority();
// False False
extern "C" void CARDInit();
// False False
extern "C" void CARDFreeBlocks();
// False False
extern "C" void CARDCheck();
// False False
extern "C" void CARDProbe();
// False False
extern "C" void CARDProbeEx();
// False False
extern "C" void CARDMount();
// False False
extern "C" void CARDUnmount();
// False False
extern "C" void CARDFormat();
// False False
extern "C" void CARDOpen();
// False False
extern "C" void CARDClose();
// False False
extern "C" void CARDCreate();
// False False
extern "C" void _savegpr_27();
// False False
extern "C" void _savegpr_28();
// False False
extern "C" void _restgpr_27();
// False False
extern "C" void _restgpr_28();
extern "C" extern u8 mResetData__6mDoRst[4 + 4 /* padding */];

// 
// Declarations:
// 

/* 8001672C-80016730 0004+00 s=1 e=0 z=0  None .text      __ct__15mDoMemCd_Ctrl_cFv                                    */
// True False
mDoMemCd_Ctrl_c::mDoMemCd_Ctrl_c() {
	/* empty function */
}


/* ############################################################################################## */
/* 803DFC20-803E0C20 1000+00 s=1 e=0 z=0  None .bss       MemCardStack                                                 */
static u8 MemCardStack[4096];

/* 803E0C20-803E0F40 0318+08 s=1 e=0 z=0  None .bss       MemCardThread                                                */
static u8 MemCardThread[792 + 8 /* padding */];

/* 80016730-800167D0 00A0+00 s=0 e=1 z=0  None .text      ThdInit__15mDoMemCd_Ctrl_cFv                                 */
//	80016744: 80353AC8 (CARDInit)
//	80016768: 8033F008 (OSInitMutex)
//	80016770: 8033F310 (OSInitCond)
//	80016774: 80340C84 (OSGetCurrentThread)
//	80016778: 80341E5C (OSGetThreadPriority)
//	80016780: 803E0C20 (MemCardThread)
//	80016784: 803E0C20 (MemCardThread)
//	80016788: 8001741C (mDoMemCd_main__FPv)
//	8001678C: 8001741C (mDoMemCd_main__FPv)
//	80016794: 803DFC20 (MemCardStack)
//	80016798: 803DFC20 (MemCardStack)
//	800167AC: 8034128C (OSCreateThread)
//	800167B0: 803E0C20 (MemCardThread)
//	800167B4: 803E0C20 (MemCardThread)
//	800167B8: 803417B4 (OSResumeThread)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void mDoMemCd_Ctrl_c::ThdInit() {
	nofralloc
#include "asm/m_Do/m_Do_MemCard/ThdInit__15mDoMemCd_Ctrl_cFv.s"
}
#pragma pop


/* 800167D0-80016894 00C4+00 s=1 e=0 z=0  None .text      main__15mDoMemCd_Ctrl_cFv                                    */
//	800167E8: 8033F040 (OSLockMutex)
//	800167F8: 8033F330 (OSWaitCond)
//	8001680C: 8033F11C (OSUnlockMutex)
//	80016844: 80016A0C (restore__15mDoMemCd_Ctrl_cFv)
//	80016850: 80016BD4 (store__15mDoMemCd_Ctrl_cFv)
//	8001685C: 80016EA8 (format__15mDoMemCd_Ctrl_cFv)
//	80016868: 80016FB8 (attach__15mDoMemCd_Ctrl_cFv)
//	80016874: 80017110 (detach__15mDoMemCd_Ctrl_cFv)
//	8001687C: 8033F040 (OSLockMutex)
//	8001688C: 8033F11C (OSUnlockMutex)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void mDoMemCd_Ctrl_c::main() {
	nofralloc
#include "asm/m_Do/m_Do_MemCard/main__15mDoMemCd_Ctrl_cFv.s"
}
#pragma pop


/* 80016894-800169B4 0120+00 s=0 e=1 z=0  None .text      update__15mDoMemCd_Ctrl_cFv                                  */
//	800168A8: 80450C78 (mResetData__6mDoRst)
//	800168BC: 8033F040 (OSLockMutex)
//	800168D4: 8033F11C (OSUnlockMutex)
//	800168DC: 8033F404 (OSSignalCond)
//	800168E8: 80016D74 (getStatus__15mDoMemCd_Ctrl_cFUl)
//	800168F8: 80356A14 (CARDProbe)
//	8001690C: 80016D74 (getStatus__15mDoMemCd_Ctrl_cFUl)
//	8001691C: 8033F040 (OSLockMutex)
//	8001693C: 8033F11C (OSUnlockMutex)
//	80016944: 8033F404 (OSSignalCond)
//	80016950: 80356A14 (CARDProbe)
//	80016964: 80016D74 (getStatus__15mDoMemCd_Ctrl_cFUl)
//	80016974: 8033F040 (OSLockMutex)
//	80016994: 8033F11C (OSUnlockMutex)
//	8001699C: 8033F404 (OSSignalCond)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void mDoMemCd_Ctrl_c::update() {
	nofralloc
#include "asm/m_Do/m_Do_MemCard/update__15mDoMemCd_Ctrl_cFv.s"
}
#pragma pop


/* 800169B4-80016A0C 0058+00 s=0 e=2 z=0  None .text      load__15mDoMemCd_Ctrl_cFv                                    */
//	800169CC: 8033F254 (OSTryLockMutex)
//	800169EC: 8033F11C (OSUnlockMutex)
//	800169F4: 8033F404 (OSSignalCond)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void mDoMemCd_Ctrl_c::load() {
	nofralloc
#include "asm/m_Do/m_Do_MemCard/load__15mDoMemCd_Ctrl_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 803743F8-80374408 0009+07 s=3 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_803743F8 = "gczelda2";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_80374401 = "\0\0\0\0\0\0";
#pragma pop

/* 80016A0C-80016AB0 00A4+00 s=1 e=0 z=0  None .text      restore__15mDoMemCd_Ctrl_cFv                                 */
//	80016A30: 803743F8 (m_Do_m_Do_MemCard__stringBase0)
//	80016A34: 803743F8 (m_Do_m_Do_MemCard__stringBase0)
//	80016A3C: 80357F98 (CARDOpen)
//	80016A54: 8001769C (mDoMemCdRWm_Restore__FP12CARDFileInfoPvUl)
//	80016A74: 80017360 (setCardState__15mDoMemCd_Ctrl_cFl)
//	80016A7C: 803580B4 (CARDClose)
//	80016A8C: 80017360 (setCardState__15mDoMemCd_Ctrl_cFl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void mDoMemCd_Ctrl_c::restore() {
	nofralloc
#include "asm/m_Do/m_Do_MemCard/restore__15mDoMemCd_Ctrl_cFv.s"
}
#pragma pop


/* 80016AB0-80016B58 00A8+00 s=0 e=2 z=0  None .text      LoadSync__15mDoMemCd_Ctrl_cFPvUlUl                           */
//	80016AC0: 803621D4 (_savegpr_27)
//	80016AF0: 8033F254 (OSTryLockMutex)
//	80016B14: 80003540 (memcpy)
//	80016B38: 8033F11C (OSUnlockMutex)
//	80016B44: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  void* False
// 	 void False
//  u32 False
//  u32 False
asm void mDoMemCd_Ctrl_c::LoadSync(void* param_0, u32 param_1, u32 param_2) {
	nofralloc
#include "asm/m_Do/m_Do_MemCard/LoadSync__15mDoMemCd_Ctrl_cFPvUlUl.s"
}
#pragma pop


/* 80016B58-80016BD4 007C+00 s=0 e=2 z=0  None .text      save__15mDoMemCd_Ctrl_cFPvUlUl                               */
//	80016B68: 803621D8 (_savegpr_28)
//	80016B80: 8033F254 (OSTryLockMutex)
//	80016B98: 80003540 (memcpy)
//	80016BB0: 8033F11C (OSUnlockMutex)
//	80016BB8: 8033F404 (OSSignalCond)
//	80016BC0: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  void* False
// 	 void False
//  u32 False
//  u32 False
asm void mDoMemCd_Ctrl_c::save(void* param_0, u32 param_1, u32 param_2) {
	nofralloc
#include "asm/m_Do/m_Do_MemCard/save__15mDoMemCd_Ctrl_cFPvUlUl.s"
}
#pragma pop


/* 80016BD4-80016CE0 010C+00 s=1 e=0 z=0  None .text      store__15mDoMemCd_Ctrl_cFv                                   */
//	80016C04: 803743F8 (m_Do_m_Do_MemCard__stringBase0)
//	80016C08: 803743F8 (m_Do_m_Do_MemCard__stringBase0)
//	80016C18: 80358458 (CARDCreate)
//	80016C40: 80017360 (setCardState__15mDoMemCd_Ctrl_cFl)
//	80016C54: 803743F8 (m_Do_m_Do_MemCard__stringBase0)
//	80016C58: 803743F8 (m_Do_m_Do_MemCard__stringBase0)
//	80016C60: 80357F98 (CARDOpen)
//	80016C78: 80017498 (mDoMemCdRWm_Store__FP12CARDFileInfoPvUl)
//	80016C88: 80017360 (setCardState__15mDoMemCd_Ctrl_cFl)
//	80016C9C: 803580B4 (CARDClose)
//	80016CAC: 80017360 (setCardState__15mDoMemCd_Ctrl_cFl)
//	80016CBC: 80017360 (setCardState__15mDoMemCd_Ctrl_cFl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void mDoMemCd_Ctrl_c::store() {
	nofralloc
#include "asm/m_Do/m_Do_MemCard/store__15mDoMemCd_Ctrl_cFv.s"
}
#pragma pop


/* 80016CE0-80016D74 0094+00 s=0 e=6 z=0  None .text      SaveSync__15mDoMemCd_Ctrl_cFv                                */
//	80016D14: 8033F254 (OSTryLockMutex)
//	80016D54: 8033F11C (OSUnlockMutex)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void mDoMemCd_Ctrl_c::SaveSync() {
	nofralloc
#include "asm/m_Do/m_Do_MemCard/SaveSync__15mDoMemCd_Ctrl_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 803A34F8-803A3530 0038+00 s=1 e=0 z=0  None .data      @3770                                                        */
SECTION_DATA static void* lit_3770[14] = {
	(void*)(((char*)getStatus__15mDoMemCd_Ctrl_cFUl)+0x74),
	(void*)(((char*)getStatus__15mDoMemCd_Ctrl_cFUl)+0x4C),
	(void*)(((char*)getStatus__15mDoMemCd_Ctrl_cFUl)+0x54),
	(void*)(((char*)getStatus__15mDoMemCd_Ctrl_cFUl)+0x5C),
	(void*)(((char*)getStatus__15mDoMemCd_Ctrl_cFUl)+0x64),
	(void*)(((char*)getStatus__15mDoMemCd_Ctrl_cFUl)+0x6C),
	(void*)(((char*)getStatus__15mDoMemCd_Ctrl_cFUl)+0x7C),
	(void*)(((char*)getStatus__15mDoMemCd_Ctrl_cFUl)+0x84),
	(void*)(((char*)getStatus__15mDoMemCd_Ctrl_cFUl)+0x8C),
	(void*)(((char*)getStatus__15mDoMemCd_Ctrl_cFUl)+0x94),
	(void*)(((char*)getStatus__15mDoMemCd_Ctrl_cFUl)+0x9C),
	(void*)(((char*)getStatus__15mDoMemCd_Ctrl_cFUl)+0xA4),
	(void*)(((char*)getStatus__15mDoMemCd_Ctrl_cFUl)+0xAC),
	(void*)(((char*)getStatus__15mDoMemCd_Ctrl_cFUl)+0xB4),
};

/* 80016D74-80016E58 00E4+00 s=2 e=2 z=0  None .text      getStatus__15mDoMemCd_Ctrl_cFUl                              */
//	80016D90: 8033F254 (OSTryLockMutex)
//	80016DA8: 803A34F8 (lit_3770)
//	80016DAC: 803A34F8 (lit_3770)
//	80016E30: 8033F11C (OSUnlockMutex)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  u32 False
asm void mDoMemCd_Ctrl_c::getStatus(u32 param_0) {
	nofralloc
#include "asm/m_Do/m_Do_MemCard/getStatus__15mDoMemCd_Ctrl_cFUl.s"
}
#pragma pop


/* 80016E58-80016EA8 0050+00 s=0 e=2 z=0  None .text      command_format__15mDoMemCd_Ctrl_cFv                          */
//	80016E70: 8033F254 (OSTryLockMutex)
//	80016E88: 8033F11C (OSUnlockMutex)
//	80016E90: 8033F404 (OSSignalCond)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void mDoMemCd_Ctrl_c::command_format() {
	nofralloc
#include "asm/m_Do/m_Do_MemCard/command_format__15mDoMemCd_Ctrl_cFv.s"
}
#pragma pop


/* 80016EA8-80016F2C 0084+00 s=1 e=0 z=0  None .text      format__15mDoMemCd_Ctrl_cFv                                  */
//	80016ECC: 80357C20 (CARDFormat)
//	80016ED8: 8033F254 (OSTryLockMutex)
//	80016F00: 80017360 (setCardState__15mDoMemCd_Ctrl_cFl)
//	80016F10: 8033F11C (OSUnlockMutex)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void mDoMemCd_Ctrl_c::format() {
	nofralloc
#include "asm/m_Do/m_Do_MemCard/format__15mDoMemCd_Ctrl_cFv.s"
}
#pragma pop


/* 80016F2C-80016FB8 008C+00 s=0 e=2 z=0  None .text      FormatSync__15mDoMemCd_Ctrl_cFv                              */
//	80016F60: 8033F254 (OSTryLockMutex)
//	80016F98: 8033F11C (OSUnlockMutex)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void mDoMemCd_Ctrl_c::FormatSync() {
	nofralloc
#include "asm/m_Do/m_Do_MemCard/FormatSync__15mDoMemCd_Ctrl_cFv.s"
}
#pragma pop


/* 80016FB8-800170B8 0100+00 s=1 e=0 z=0  None .text      attach__15mDoMemCd_Ctrl_cFv                                  */
//	80016FD8: 80356A4C (CARDProbeEx)
//	80017034: 80017148 (mount__15mDoMemCd_Ctrl_cFv)
//	80017044: 80017274 (loadfile__15mDoMemCd_Ctrl_cFv)
//	80017060: 800172D4 (checkspace__15mDoMemCd_Ctrl_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void mDoMemCd_Ctrl_c::attach() {
	nofralloc
#include "asm/m_Do/m_Do_MemCard/attach__15mDoMemCd_Ctrl_cFv.s"
}
#pragma pop


/* 800170B8-80017110 0058+00 s=0 e=1 z=0  None .text      command_attach__15mDoMemCd_Ctrl_cFv                          */
//	800170D0: 8033F254 (OSTryLockMutex)
//	800170F0: 8033F11C (OSUnlockMutex)
//	800170F8: 8033F404 (OSSignalCond)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void mDoMemCd_Ctrl_c::command_attach() {
	nofralloc
#include "asm/m_Do/m_Do_MemCard/command_attach__15mDoMemCd_Ctrl_cFv.s"
}
#pragma pop


/* 80017110-80017148 0038+00 s=1 e=0 z=0  None .text      detach__15mDoMemCd_Ctrl_cFv                                  */
//	80017128: 803573D8 (CARDUnmount)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void mDoMemCd_Ctrl_c::detach() {
	nofralloc
#include "asm/m_Do/m_Do_MemCard/detach__15mDoMemCd_Ctrl_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 803A3530-803A3568 0038+00 s=1 e=0 z=0  None .data      @3850                                                        */
SECTION_DATA static void* lit_3850[14] = {
	(void*)(((char*)mount__15mDoMemCd_Ctrl_cFv)+0xF4),
	(void*)(((char*)mount__15mDoMemCd_Ctrl_cFv)+0x114),
	(void*)(((char*)mount__15mDoMemCd_Ctrl_cFv)+0x114),
	(void*)(((char*)mount__15mDoMemCd_Ctrl_cFv)+0x114),
	(void*)(((char*)mount__15mDoMemCd_Ctrl_cFv)+0x114),
	(void*)(((char*)mount__15mDoMemCd_Ctrl_cFv)+0x114),
	(void*)(((char*)mount__15mDoMemCd_Ctrl_cFv)+0x114),
	(void*)(((char*)mount__15mDoMemCd_Ctrl_cFv)+0xC4),
	(void*)(((char*)mount__15mDoMemCd_Ctrl_cFv)+0xD4),
	(void*)(((char*)mount__15mDoMemCd_Ctrl_cFv)+0x114),
	(void*)(((char*)mount__15mDoMemCd_Ctrl_cFv)+0xE4),
	(void*)(((char*)mount__15mDoMemCd_Ctrl_cFv)+0x114),
	(void*)(((char*)mount__15mDoMemCd_Ctrl_cFv)+0x114),
	(void*)(((char*)mount__15mDoMemCd_Ctrl_cFv)+0xBC),
};

/* 803E0F40-803EAF40 A000+00 s=1 e=0 z=0  None .bss       MemCardWorkArea0                                             */
static u8 MemCardWorkArea0[40960];

/* 80017148-80017274 012C+00 s=2 e=0 z=0  None .text      mount__15mDoMemCd_Ctrl_cFv                                   */
//	80017160: 803E0F40 (MemCardWorkArea0)
//	80017164: 803E0F40 (MemCardWorkArea0)
//	8001716C: 803572F4 (CARDMount)
//	800171DC: 803568F4 (CARDCheck)
//	800171EC: 803A3530 (lit_3850)
//	800171F0: 803A3530 (lit_3850)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void mDoMemCd_Ctrl_c::mount() {
	nofralloc
#include "asm/m_Do/m_Do_MemCard/mount__15mDoMemCd_Ctrl_cFv.s"
}
#pragma pop


/* 80017274-800172D4 0060+00 s=1 e=0 z=0  None .text      loadfile__15mDoMemCd_Ctrl_cFv                                */
//	8001728C: 803743F8 (m_Do_m_Do_MemCard__stringBase0)
//	80017290: 803743F8 (m_Do_m_Do_MemCard__stringBase0)
//	80017298: 80357F98 (CARDOpen)
//	800172A8: 803580B4 (CARDClose)
//	800172B8: 80017360 (setCardState__15mDoMemCd_Ctrl_cFl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void mDoMemCd_Ctrl_c::loadfile() {
	nofralloc
#include "asm/m_Do/m_Do_MemCard/loadfile__15mDoMemCd_Ctrl_cFv.s"
}
#pragma pop


/* 800172D4-80017360 008C+00 s=1 e=0 z=0  None .text      checkspace__15mDoMemCd_Ctrl_cFv                              */
//	800172F4: 80353CD0 (CARDFreeBlocks)
//	80017304: 80017360 (setCardState__15mDoMemCd_Ctrl_cFl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void mDoMemCd_Ctrl_c::checkspace() {
	nofralloc
#include "asm/m_Do/m_Do_MemCard/checkspace__15mDoMemCd_Ctrl_cFv.s"
}
#pragma pop


/* 80017360-8001741C 00BC+00 s=5 e=0 z=0  None .text      setCardState__15mDoMemCd_Ctrl_cFl                            */
//	800173DC: 803568F4 (CARDCheck)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  s32 False
asm void mDoMemCd_Ctrl_c::setCardState(s32 param_0) {
	nofralloc
#include "asm/m_Do/m_Do_MemCard/setCardState__15mDoMemCd_Ctrl_cFl.s"
}
#pragma pop


/* ############################################################################################## */
/* 803EAF40-803ECF40 2000+00 s=2 e=27 z=0  None .bss       g_mDoMemCd_control                                           */
u8 g_mDoMemCd_control[8192];

/* 8001741C-80017470 0054+00 s=1 e=0 z=0  None .text      mDoMemCd_main__FPv                                           */
//	80017428: 80340C84 (OSGetCurrentThread)
//	80017438: 802D16B8 (__ct__9JKRThreadFP8OSThreadi)
//	80017444: 802D1758 (__dt__9JKRThreadFv)
//	80017448: 8000ECE4 (mDoExt_getAssertHeap__Fv)
//	8001744C: 802CE438 (becomeCurrentHeap__7JKRHeapFv)
//	80017450: 803EAF40 (g_mDoMemCd_control)
//	80017454: 803EAF40 (g_mDoMemCd_control)
//	80017458: 800167D0 (main__15mDoMemCd_Ctrl_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  void* False
// 	 void False
asm static void mDoMemCd_main(void* param_0) {
	nofralloc
#include "asm/m_Do/m_Do_MemCard/mDoMemCd_main__FPv.s"
}
#pragma pop


/* 80017470-80017498 0028+00 s=0 e=0 z=0  None .text      __sinit_m_Do_MemCard_cpp                                     */
//	8001747C: 803EAF40 (g_mDoMemCd_control)
//	80017480: 803EAF40 (g_mDoMemCd_control)
//	80017484: 8001672C (__ct__15mDoMemCd_Ctrl_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __sinit_m_Do_MemCard_cpp() {
	nofralloc
#include "asm/m_Do/m_Do_MemCard/__sinit_m_Do_MemCard_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
#pragma section ".ctors$15"
__declspec(section ".ctors$15") void* const _ctors_80017470 = (void*)__sinit_m_Do_MemCard_cpp;
#pragma pop


