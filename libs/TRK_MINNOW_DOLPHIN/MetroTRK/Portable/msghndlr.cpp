// 
// Generated By: dol2asm
// Translation Unit: MetroTRK/Portable/msghndlr
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msghndlr.h"

// 
// Forward References:
// 


// False False
extern "C" void TRKDoSetOption();
// False False
extern "C" void TRKDoStop();
// False False
extern "C" void TRKDoStep();
// False False
extern "C" void TRKDoContinue();
// False False
extern "C" void TRKDoWriteRegisters();
// False False
extern "C" void TRKDoReadRegisters();
// False False
extern "C" void TRKDoWriteMemory();
// False False
extern "C" void TRKDoReadMemory();
// False False
//  bool False
extern "C" bool TRKDoSupportMask();
// False False
//  bool False
extern "C" bool TRKDoVersions();
// False False
extern "C" void TRKDoOverride();
// False False
extern "C" void TRKDoReset();
// False False
extern "C" void TRKDoDisconnect();
// False False
extern "C" void TRKDoConnect();
// False False
extern "C" void SetTRKConnected();
// False False
extern "C" void GetTRKConnected();
// False False
extern "C" void OutputData();
extern "C" extern u8 const lit_322[8];
extern "C" extern u8 const lit_323[9 + 3 /* padding */];
extern "C" extern u8 const lit_402[31 + 1 /* padding */];
extern "C" extern u8 const MetroTRK_Portable_msghndlr__lit_462[40];
extern "C" extern u8 const MetroTRK_Portable_msghndlr__lit_463[54 + 2 /* padding */];
extern "C" extern u8 const MetroTRK_Portable_msghndlr__lit_464[40];
extern "C" extern u8 const MetroTRK_Portable_msghndlr__lit_465[47 + 1 /* padding */];
extern "C" extern u8 const MetroTRK_Portable_msghndlr__lit_466[47 + 1 /* padding */];
extern "C" extern u8 const MetroTRK_Portable_msghndlr__lit_498[45 + 3 /* padding */];
extern "C" extern u8 const MetroTRK_Portable_msghndlr__lit_535[44];
SECTION_BSS u8 IsTRKConnected[4 + 4 /* padding */];

// 
// External References:
// 


// False False
SECTION_INIT void memset();
// False False
SECTION_INIT void __TRK_reset();
// False False
extern "C" void TRKConstructEvent();
// False False
extern "C" void TRKPostEvent();
// False False
extern "C" void TRKMessageSend();
// False False
extern "C" void TRKAppendBuffer_ui8();
// False False
extern "C" void TRKReadBuffer();
// False False
extern "C" void TRKAppendBuffer();
// False False
extern "C" void TRKSetBufferPosition();
// False False
extern "C" void TRKResetBuffer();
// False False
extern "C" void usr_puts_serial();
// False False
extern "C" void TRKTargetAccessARAM();
// False False
extern "C" void TRKTargetStop();
// False False
extern "C" void TRKTargetStopped();
// False False
extern "C" void TRKTargetGetPC();
// False False
extern "C" void TRKTargetStepOutOfRange();
// False False
extern "C" void TRKTargetSingleStep();
// False False
extern "C" void TRKTargetAccessExtended2();
// False False
extern "C" void TRKTargetAccessExtended1();
// False False
extern "C" void TRKTargetAccessFP();
// False False
extern "C" void TRKTargetAccessDefault();
// False False
extern "C" void TRKTargetAccessMemory();
// False False
extern "C" void __TRK_copy_vectors();
// False False
extern "C" void TRKWriteUARTN();
// False False
extern "C" void TRKTargetContinue();
// False False
extern "C" void SetUseSerialIO();
// False False
extern "C" void MWTRACE();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 803A28D0-803A28F0 001F+01 s=4 e=0 z=0  None .rodata    @321                                                         */
SECTION_RODATA static u8 const lit_321[31 + 1 /* padding */] = {
	0x0A, 0x4D, 0x65, 0x74, 0x72, 0x6F, 0x54, 0x52, 0x4B, 0x20, 0x4F, 0x70, 0x74, 0x69, 0x6F, 0x6E,
	0x20, 0x3A, 0x20, 0x53, 0x65, 0x72, 0x69, 0x61, 0x6C, 0x49, 0x4F, 0x20, 0x2D, 0x20, 0x00,
	/* padding */
	0x00,
};

/* 8036DD14-8036DDBC 00A8+00 s=0 e=1 z=0  None .text      TRKDoSetOption                                               */
//	8036DD1C: 803A28D0 (lit_321)
//	8036DD28: 803A28D0 (lit_321)
//	8036DD44: 8036DB14 (usr_puts_serial)
//	8036DD54: 8036DB14 (usr_puts_serial)
//	8036DD60: 8036DB14 (usr_puts_serial)
//	8036DD68: 80372190 (SetUseSerialIO)
//	8036DD78: 80003458 (memset)
//	8036DD9C: 80371D68 (TRKWriteUARTN)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void TRKDoSetOption() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msghndlr/TRKDoSetOption.s"
}
#pragma pop


/* 8036DDBC-8036DE64 00A8+00 s=0 e=1 z=0  None .text      TRKDoStop                                                    */
//	8036DDCC: 8036FAE8 (TRKTargetStop)
//	8036DE28: 80003458 (memset)
//	8036DE48: 80371D68 (TRKWriteUARTN)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void TRKDoStop() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msghndlr/TRKDoStop.s"
}
#pragma pop


/* 8036DE64-8036E084 0220+00 s=0 e=1 z=0  None .text      TRKDoStep                                                    */
//	8036DE7C: 8036D61C (TRKSetBufferPosition)
//	8036DED4: 80003458 (memset)
//	8036DEF8: 80371D68 (TRKWriteUARTN)
//	8036DF04: 8036FD20 (TRKTargetGetPC)
//	8036DF24: 80003458 (memset)
//	8036DF48: 80371D68 (TRKWriteUARTN)
//	8036DF60: 80003458 (memset)
//	8036DF84: 80371D68 (TRKWriteUARTN)
//	8036DF90: 8036FB10 (TRKTargetStopped)
//	8036DFA8: 80003458 (memset)
//	8036DFCC: 80371D68 (TRKWriteUARTN)
//	8036DFE4: 80003458 (memset)
//	8036E008: 80371D68 (TRKWriteUARTN)
//	8036E050: 8036FDE8 (TRKTargetSingleStep)
//	8036E06C: 8036FD30 (TRKTargetStepOutOfRange)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void TRKDoStep() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msghndlr/TRKDoStep.s"
}
#pragma pop


/* ############################################################################################## */
/* 803A28F0-803A28F8 0008+00 s=0 e=0 z=0  None .rodata    @322                                                         */
SECTION_RODATA u8 const lit_322[8] = {
	0x45, 0x6E, 0x61, 0x62, 0x6C, 0x65, 0x0A, 0x00,
};

/* 803A28F8-803A2904 0009+03 s=0 e=0 z=0  None .rodata    @323                                                         */
SECTION_RODATA u8 const lit_323[9 + 3 /* padding */] = {
	0x44, 0x69, 0x73, 0x61, 0x62, 0x6C, 0x65, 0x0A, 0x00,
	/* padding */
	0x00, 0x00, 0x00,
};

/* 803A2904-803A2910 000C+00 s=1 e=0 z=0  None .rodata    @370                                                         */
SECTION_RODATA static u8 const lit_370[12] = {
	0x44, 0x6F, 0x43, 0x6F, 0x6E, 0x74, 0x69, 0x6E, 0x75, 0x65, 0x0A, 0x00,
};

/* 8036E084-8036E134 00B0+00 s=0 e=1 z=0  None .text      TRKDoContinue                                                */
//	8036E08C: 803A2904 (lit_370)
//	8036E098: 803A2904 (lit_370)
//	8036E0A0: 80372C54 (MWTRACE)
//	8036E0A4: 8036FB10 (TRKTargetStopped)
//	8036E0BC: 80003458 (memset)
//	8036E0E0: 80371D68 (TRKWriteUARTN)
//	8036E0F8: 80003458 (memset)
//	8036E11C: 80371D68 (TRKWriteUARTN)
//	8036E120: 8037214C (TRKTargetContinue)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void TRKDoContinue() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msghndlr/TRKDoContinue.s"
}
#pragma pop


/* ############################################################################################## */
/* 803A2910-803A2930 001F+01 s=0 e=0 z=0  None .rodata    @402                                                         */
SECTION_RODATA u8 const lit_402[31 + 1 /* padding */] = {
	0x44, 0x6F, 0x46, 0x6C, 0x75, 0x73, 0x68, 0x43, 0x61, 0x63, 0x68, 0x65, 0x20, 0x75, 0x6E, 0x69,
	0x6D, 0x70, 0x6C, 0x65, 0x6D, 0x65, 0x6E, 0x74, 0x65, 0x64, 0x21, 0x21, 0x21, 0x0A, 0x00,
	/* padding */
	0x00,
};

/* 803A2930-803A2950 001F+01 s=1 e=0 z=0  None .rodata    @403                                                         */
SECTION_RODATA static u8 const lit_403[31 + 1 /* padding */] = {
	0x53, 0x65, 0x6E, 0x64, 0x41, 0x43, 0x4B, 0x20, 0x3A, 0x20, 0x43, 0x61, 0x6C, 0x6C, 0x69, 0x6E,
	0x67, 0x20, 0x4D, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x53, 0x65, 0x6E, 0x64, 0x0A, 0x00,
	/* padding */
	0x00,
};

/* 803A2950-803A2968 0017+01 s=1 e=0 z=0  None .rodata    @404                                                         */
SECTION_RODATA static u8 const lit_404[23 + 1 /* padding */] = {
	0x4D, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x53, 0x65, 0x6E, 0x64, 0x20, 0x65, 0x72, 0x72, 0x20,
	0x3A, 0x20, 0x25, 0x6C, 0x64, 0x0A, 0x00,
	/* padding */
	0x00,
};

/* 8036E134-8036E3C4 0290+00 s=0 e=1 z=0  None .text      TRKDoWriteRegisters                                          */
//	8036E164: 8036D61C (TRKSetBufferPosition)
//	8036E17C: 80003458 (memset)
//	8036E1A0: 80371D68 (TRKWriteUARTN)
//	8036E1B4: 8036D61C (TRKSetBufferPosition)
//	8036E1F4: 80370C94 (TRKTargetAccessDefault)
//	8036E214: 80370788 (TRKTargetAccessFP)
//	8036E234: 80370618 (TRKTargetAccessExtended1)
//	8036E254: 803701E0 (TRKTargetAccessExtended2)
//	8036E26C: 8036D64C (TRKResetBuffer)
//	8036E284: 80003458 (memset)
//	8036E2A8: 8036D578 (TRKAppendBuffer)
//	8036E33C: 80003458 (memset)
//	8036E35C: 80371D68 (TRKWriteUARTN)
//	8036E368: 803A2930 (lit_403)
//	8036E370: 803A2930 (lit_403)
//	8036E378: 80372C54 (MWTRACE)
//	8036E380: 8036CFD8 (TRKMessageSend)
//	8036E388: 803A2950 (lit_404)
//	8036E390: 803A2950 (lit_404)
//	8036E39C: 80372C54 (MWTRACE)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void TRKDoWriteRegisters() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msghndlr/TRKDoWriteRegisters.s"
}
#pragma pop


/* 8036E3C4-8036E6A4 02E0+00 s=0 e=1 z=0  None .text      TRKDoReadRegisters                                           */
//	8036E3CC: 803A28D0 (lit_321)
//	8036E3D8: 803A28D0 (lit_321)
//	8036E404: 80003458 (memset)
//	8036E428: 80371D68 (TRKWriteUARTN)
//	8036E448: 8036D64C (TRKResetBuffer)
//	8036E45C: 80372C54 (MWTRACE)
//	8036E46C: 8036D388 (TRKAppendBuffer_ui8)
//	8036E480: 80372C54 (MWTRACE)
//	8036E498: 80370C94 (TRKTargetAccessDefault)
//	8036E4B0: 80372C54 (MWTRACE)
//	8036E4C4: 80372C54 (MWTRACE)
//	8036E4E4: 80370788 (TRKTargetAccessFP)
//	8036E4FC: 80372C54 (MWTRACE)
//	8036E510: 80372C54 (MWTRACE)
//	8036E530: 80370618 (TRKTargetAccessExtended1)
//	8036E548: 80372C54 (MWTRACE)
//	8036E55C: 80372C54 (MWTRACE)
//	8036E57C: 803701E0 (TRKTargetAccessExtended2)
//	8036E594: 80372C54 (MWTRACE)
//	8036E5A8: 80372C54 (MWTRACE)
//	8036E628: 80003458 (memset)
//	8036E648: 80371D68 (TRKWriteUARTN)
//	8036E660: 80372C54 (MWTRACE)
//	8036E668: 8036CFD8 (TRKMessageSend)
//	8036E680: 80372C54 (MWTRACE)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void TRKDoReadRegisters() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msghndlr/TRKDoReadRegisters.s"
}
#pragma pop


/* ############################################################################################## */
/* 803D3200-803D321C 001C+00 s=1 e=0 z=0  None .data      @499                                                         */
SECTION_DATA static void* lit_499[7] = {
	(void*)(((char*)TRKDoWriteMemory)+0x194),
	(void*)(((char*)TRKDoWriteMemory)+0x1B4),
	(void*)(((char*)TRKDoWriteMemory)+0x18C),
	(void*)(((char*)TRKDoWriteMemory)+0x1B4),
	(void*)(((char*)TRKDoWriteMemory)+0x19C),
	(void*)(((char*)TRKDoWriteMemory)+0x1A4),
	(void*)(((char*)TRKDoWriteMemory)+0x1AC),
};

/* 8036E6A4-8036E8E0 023C+00 s=1 e=1 z=0  None .text      TRKDoWriteMemory                                             */
//	8036E6C4: 803A28D0 (lit_321)
//	8036E6C8: 803A28D0 (lit_321)
//	8036E6F4: 80372C54 (MWTRACE)
//	8036E70C: 80003458 (memset)
//	8036E730: 80371D68 (TRKWriteUARTN)
//	8036E748: 8036D61C (TRKSetBufferPosition)
//	8036E768: 8036D4EC (TRKReadBuffer)
//	8036E77C: 8036FA14 (TRKTargetAccessARAM)
//	8036E794: 8036D4EC (TRKReadBuffer)
//	8036E7B0: 80370DD4 (TRKTargetAccessMemory)
//	8036E7C0: 8036D64C (TRKResetBuffer)
//	8036E7D8: 80003458 (memset)
//	8036E7FC: 8036D578 (TRKAppendBuffer)
//	8036E818: 803D3200 (lit_499)
//	8036E820: 803D3200 (lit_499)
//	8036E868: 80003458 (memset)
//	8036E888: 80371D68 (TRKWriteUARTN)
//	8036E8A0: 80372C54 (MWTRACE)
//	8036E8A8: 8036CFD8 (TRKMessageSend)
//	8036E8C0: 80372C54 (MWTRACE)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void TRKDoWriteMemory() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msghndlr/TRKDoWriteMemory.s"
}
#pragma pop


/* ############################################################################################## */
/* 803D321C-803D3238 001C+00 s=1 e=0 z=0  None .data      @536                                                         */
SECTION_DATA static void* lit_536[7] = {
	(void*)(((char*)TRKDoReadMemory)+0x19C),
	(void*)(((char*)TRKDoReadMemory)+0x1BC),
	(void*)(((char*)TRKDoReadMemory)+0x194),
	(void*)(((char*)TRKDoReadMemory)+0x1BC),
	(void*)(((char*)TRKDoReadMemory)+0x1A4),
	(void*)(((char*)TRKDoReadMemory)+0x1AC),
	(void*)(((char*)TRKDoReadMemory)+0x1B4),
};

/* 8036E8E0-8036EB24 0244+00 s=1 e=1 z=0  None .text      TRKDoReadMemory                                              */
//	8036E900: 803A28D0 (lit_321)
//	8036E904: 803A28D0 (lit_321)
//	8036E930: 80372C54 (MWTRACE)
//	8036E948: 80003458 (memset)
//	8036E96C: 80371D68 (TRKWriteUARTN)
//	8036E994: 8036FA14 (TRKTargetAccessARAM)
//	8036E9B8: 80370DD4 (TRKTargetAccessMemory)
//	8036E9C8: 8036D64C (TRKResetBuffer)
//	8036E9E0: 80003458 (memset)
//	8036EA08: 8036D578 (TRKAppendBuffer)
//	8036EA28: 8036D578 (TRKAppendBuffer)
//	8036EA40: 8036D578 (TRKAppendBuffer)
//	8036EA5C: 803D321C (lit_536)
//	8036EA64: 803D321C (lit_536)
//	8036EAAC: 80003458 (memset)
//	8036EACC: 80371D68 (TRKWriteUARTN)
//	8036EAE4: 80372C54 (MWTRACE)
//	8036EAEC: 8036CFD8 (TRKMessageSend)
//	8036EB04: 80372C54 (MWTRACE)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void TRKDoReadMemory() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msghndlr/TRKDoReadMemory.s"
}
#pragma pop


/* 8036EB24-8036EB2C 0008+00 s=0 e=1 z=0  None .text      TRKDoSupportMask                                             */
// False False
//  bool False
extern "C" bool TRKDoSupportMask() {
	return false;
}


/* 8036EB2C-8036EB34 0008+00 s=0 e=1 z=0  None .text      TRKDoVersions                                                */
// False False
//  bool False
extern "C" bool TRKDoVersions() {
	return false;
}


/* 8036EB34-8036EB8C 0058+00 s=0 e=1 z=0  None .text      TRKDoOverride                                                */
//	8036EB4C: 80003458 (memset)
//	8036EB70: 80371D68 (TRKWriteUARTN)
//	8036EB74: 803719F8 (__TRK_copy_vectors)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void TRKDoOverride() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msghndlr/TRKDoOverride.s"
}
#pragma pop


/* 8036EB8C-8036EBE4 0058+00 s=0 e=1 z=0  None .text      TRKDoReset                                                   */
//	8036EBA4: 80003458 (memset)
//	8036EBC8: 80371D68 (TRKWriteUARTN)
//	8036EBCC: 80005518 (__TRK_reset)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void TRKDoReset() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msghndlr/TRKDoReset.s"
}
#pragma pop


/* ############################################################################################## */
/* 8044F288-8044F290 0004+04 s=4 e=0 z=0  .bss .bss       IsTRKConnected                                               */
static u8 IsTRKConnected[4 + 4 /* padding */];

/* 8036EBE4-8036EC5C 0078+00 s=0 e=1 z=0  None .text      TRKDoDisconnect                                              */
//	8036EBEC: 8044F288 (IsTRKConnected)
//	8036EBF8: 8044F288 (IsTRKConnected)
//	8036EC0C: 80003458 (memset)
//	8036EC30: 80371D68 (TRKWriteUARTN)
//	8036EC3C: 8036CC3C (TRKConstructEvent)
//	8036EC44: 8036CC54 (TRKPostEvent)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void TRKDoDisconnect() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msghndlr/TRKDoDisconnect.s"
}
#pragma pop


/* 8036EC5C-8036ECC0 0064+00 s=0 e=1 z=0  None .text      TRKDoConnect                                                 */
//	8036EC64: 8044F288 (IsTRKConnected)
//	8036EC70: 8044F288 (IsTRKConnected)
//	8036EC84: 80003458 (memset)
//	8036ECA8: 80371D68 (TRKWriteUARTN)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void TRKDoConnect() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msghndlr/TRKDoConnect.s"
}
#pragma pop


/* 8036ECC0-8036ECCC 000C+00 s=0 e=1 z=0  None .text      SetTRKConnected                                              */
//	8036ECC0: 8044F288 (IsTRKConnected)
//	8036ECC4: 8044F288 (IsTRKConnected)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void SetTRKConnected() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msghndlr/SetTRKConnected.s"
}
#pragma pop


/* 8036ECCC-8036ECDC 0010+00 s=0 e=3 z=0  None .text      GetTRKConnected                                              */
//	8036ECCC: 8044F288 (IsTRKConnected)
//	8036ECD0: 8044F288 (IsTRKConnected)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void GetTRKConnected() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msghndlr/GetTRKConnected.s"
}
#pragma pop


/* ############################################################################################## */
/* 803A2968-803A2990 0028+00 s=0 e=0 z=0  None .rodata    @462                                                         */
SECTION_RODATA u8 const MetroTRK_Portable_msghndlr__lit_462[40] = {
	0x44, 0x6F, 0x52, 0x65, 0x61, 0x64, 0x52, 0x65, 0x67, 0x69, 0x73, 0x74, 0x65, 0x72, 0x73, 0x20,
	0x3A, 0x20, 0x42, 0x75, 0x66, 0x66, 0x65, 0x72, 0x20, 0x6C, 0x65, 0x6E, 0x67, 0x74, 0x68, 0x20,
	0x30, 0x78, 0x25, 0x30, 0x38, 0x78, 0x0A, 0x00,
};

/* 803A2990-803A29C8 0036+02 s=0 e=0 z=0  None .rodata    @463                                                         */
SECTION_RODATA u8 const MetroTRK_Portable_msghndlr__lit_463[54 + 2 /* padding */] = {
	0x44, 0x6F, 0x52, 0x65, 0x61, 0x64, 0x52, 0x65, 0x67, 0x69, 0x73, 0x74, 0x65, 0x72, 0x73, 0x20,
	0x3A, 0x20, 0x45, 0x72, 0x72, 0x6F, 0x72, 0x20, 0x72, 0x65, 0x61, 0x64, 0x69, 0x6E, 0x67, 0x20,
	0x20, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6C, 0x74, 0x20, 0x72, 0x65, 0x67, 0x73, 0x20, 0x30, 0x78,
	0x25, 0x30, 0x38, 0x78, 0x0A, 0x00,
	/* padding */
	0x00, 0x00,
};

/* 803A29C8-803A29F0 0028+00 s=0 e=0 z=0  None .rodata    @464                                                         */
SECTION_RODATA u8 const MetroTRK_Portable_msghndlr__lit_464[40] = {
	0x44, 0x6F, 0x52, 0x65, 0x61, 0x64, 0x52, 0x65, 0x67, 0x69, 0x73, 0x74, 0x65, 0x72, 0x73, 0x20,
	0x3A, 0x20, 0x45, 0x72, 0x72, 0x6F, 0x72, 0x20, 0x46, 0x50, 0x20, 0x72, 0x65, 0x67, 0x73, 0x20,
	0x30, 0x78, 0x25, 0x30, 0x38, 0x78, 0x0A, 0x00,
};

/* 803A29F0-803A2A20 002F+01 s=0 e=0 z=0  None .rodata    @465                                                         */
SECTION_RODATA u8 const MetroTRK_Portable_msghndlr__lit_465[47 + 1 /* padding */] = {
	0x44, 0x6F, 0x52, 0x65, 0x61, 0x64, 0x52, 0x65, 0x67, 0x69, 0x73, 0x74, 0x65, 0x72, 0x73, 0x20,
	0x3A, 0x20, 0x45, 0x72, 0x72, 0x6F, 0x72, 0x20, 0x65, 0x78, 0x74, 0x65, 0x6E, 0x64, 0x65, 0x64,
	0x31, 0x20, 0x72, 0x65, 0x67, 0x73, 0x20, 0x30, 0x78, 0x25, 0x30, 0x38, 0x78, 0x0A, 0x00,
	/* padding */
	0x00,
};

/* 803A2A20-803A2A50 002F+01 s=0 e=0 z=0  None .rodata    @466                                                         */
SECTION_RODATA u8 const MetroTRK_Portable_msghndlr__lit_466[47 + 1 /* padding */] = {
	0x44, 0x6F, 0x52, 0x65, 0x61, 0x64, 0x52, 0x65, 0x67, 0x69, 0x73, 0x74, 0x65, 0x72, 0x73, 0x20,
	0x3A, 0x20, 0x45, 0x72, 0x72, 0x6F, 0x72, 0x20, 0x65, 0x78, 0x74, 0x65, 0x6E, 0x64, 0x65, 0x64,
	0x32, 0x20, 0x72, 0x65, 0x67, 0x73, 0x20, 0x30, 0x78, 0x25, 0x30, 0x38, 0x78, 0x0A, 0x00,
	/* padding */
	0x00,
};

/* 803A2A50-803A2A80 002D+03 s=0 e=0 z=0  None .rodata    @498                                                         */
SECTION_RODATA u8 const MetroTRK_Portable_msghndlr__lit_498[45 + 3 /* padding */] = {
	0x57, 0x72, 0x69, 0x74, 0x65, 0x4D, 0x65, 0x6D, 0x6F, 0x72, 0x79, 0x20, 0x28, 0x30, 0x78, 0x25,
	0x30, 0x32, 0x78, 0x29, 0x20, 0x3A, 0x20, 0x30, 0x78, 0x25, 0x30, 0x38, 0x78, 0x20, 0x30, 0x78,
	0x25, 0x30, 0x38, 0x78, 0x20, 0x30, 0x78, 0x25, 0x30, 0x38, 0x78, 0x0A, 0x00,
	/* padding */
	0x00, 0x00, 0x00,
};

/* 803A2A80-803A2AAC 002C+00 s=0 e=0 z=0  None .rodata    @535                                                         */
SECTION_RODATA u8 const MetroTRK_Portable_msghndlr__lit_535[44] = {
	0x52, 0x65, 0x61, 0x64, 0x4D, 0x65, 0x6D, 0x6F, 0x72, 0x79, 0x20, 0x28, 0x30, 0x78, 0x25, 0x30,
	0x32, 0x78, 0x29, 0x20, 0x3A, 0x20, 0x30, 0x78, 0x25, 0x30, 0x38, 0x78, 0x20, 0x30, 0x78, 0x25,
	0x30, 0x38, 0x78, 0x20, 0x30, 0x78, 0x25, 0x30, 0x38, 0x78, 0x0A, 0x00,
};

/* 803A2AAC-803A2AB4 0006+02 s=1 e=0 z=0  None .rodata    @573                                                         */
SECTION_RODATA static u8 const lit_573[6 + 2 /* padding */] = {
	0x25, 0x30, 0x32, 0x78, 0x20, 0x00,
	/* padding */
	0x00, 0x00,
};

/* 803A2AB4-803A2AB8 0002+02 s=1 e=0 z=0  None .rodata    @574                                                         */
SECTION_RODATA static u16 const lit_574[1 + 1 /* padding */] = {
	0x0A00,
	/* padding */
	0x0000,
};

/* 8036ECDC-8036ED84 00A8+00 s=0 e=1 z=0  None .text      OutputData                                                   */
//	8036ECE4: 803A2AAC (lit_573)
//	8036ECE8: 803A2AB4 (lit_574)
//	8036ECFC: 803A2AAC (lit_573)
//	8036ED00: 803A2AB4 (lit_574)
//	8036ED1C: 80372C54 (MWTRACE)
//	8036ED48: 80372C54 (MWTRACE)
//	8036ED5C: 803A2AB4 (lit_574)
//	8036ED64: 803A2AB4 (lit_574)
//	8036ED6C: 80372C54 (MWTRACE)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void OutputData() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msghndlr/OutputData.s"
}
#pragma pop


