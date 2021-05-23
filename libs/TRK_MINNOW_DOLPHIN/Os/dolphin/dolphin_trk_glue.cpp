//
// Generated By: dol2asm
// Translation Unit: Os/dolphin/dolphin_trk_glue
//

#include "TRK_MINNOW_DOLPHIN/Os/dolphin/dolphin_trk_glue.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" static void TRKLoadContext();
extern "C" void TRKUARTInterruptHandler();
extern "C" void InitializeProgramEndTrap();
extern "C" void TRK_board_display();
extern "C" void UnreserveEXI2Port();
extern "C" void ReserveEXI2Port();
extern "C" void TRKWriteUARTN();
extern "C" void TRKReadUARTN();
extern "C" void TRKPollUART();
extern "C" void EnableEXI2Interrupts();
extern "C" void TRKInitializeIntDrivenUART();
extern "C" void InitMetroTRKCommTable();
extern "C" static void TRKEXICallBack();
SECTION_BSS extern u8 data_8044F828[8];

//
// External References:
//

SECTION_INIT void TRK_memcpy();
extern "C" void OSReport();
extern "C" void PPCHalt();
extern "C" void DCFlushRange();
extern "C" void ICInvalidateRange();
extern "C" void OSEnableScheduler();
extern "C" void TRKInterruptHandler();
extern "C" s32 udp_cc_post_stop();
extern "C" s32 udp_cc_pre_continue();
extern "C" bool udp_cc_peek();
extern "C" bool udp_cc_write();
extern "C" bool udp_cc_read();
extern "C" s32 udp_cc_close();
extern "C" s32 udp_cc_open();
extern "C" s32 udp_cc_shutdown();
extern "C" s32 udp_cc_initialize();
extern "C" void ddh_cc_initinterrupts();
extern "C" void ddh_cc_peek();
extern "C" void ddh_cc_post_stop();
extern "C" void ddh_cc_pre_continue();
extern "C" void ddh_cc_write();
extern "C" void ddh_cc_read();
extern "C" bool ddh_cc_close();
extern "C" void ddh_cc_open();
extern "C" bool ddh_cc_shutdown();
extern "C" void ddh_cc_initialize();
extern "C" void gdev_cc_initinterrupts();
extern "C" void gdev_cc_peek();
extern "C" void gdev_cc_post_stop();
extern "C" void gdev_cc_pre_continue();
extern "C" void gdev_cc_write();
extern "C" void gdev_cc_read();
extern "C" bool gdev_cc_close();
extern "C" void gdev_cc_open();
extern "C" bool gdev_cc_shutdown();
extern "C" void gdev_cc_initialize();
extern "C" bool AMC_IsStub();
extern "C" bool Hu_IsStub();

//
// Declarations:
//

/* 80371BF4-80371C7C 36C534 0088+00 1/1 0/0 0/0 .text            TRKLoadContext */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void TRKLoadContext() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/Os/dolphin/dolphin_trk_glue/TRKLoadContext.s"
}
#pragma pop

/* 80371C7C-80371C80 36C5BC 0004+00 0/0 1/1 0/0 .text            TRKUARTInterruptHandler */
void TRKUARTInterruptHandler() {
    /* empty function */
}

/* ############################################################################################## */
/* 803A2C08-803A2C0C 02F268 0004+00 2/2 0/0 0/0 .rodata          EndofProgramInstruction$162 */
SECTION_RODATA static u8 const EndofProgramInstruction[4] = {
    0x00,
    0x45,
    0x4E,
    0x44,
};
COMPILER_STRIP_GATE(0x803A2C08, &EndofProgramInstruction);

/* 80371C80-80371CD8 36C5C0 0058+00 0/0 1/1 0/0 .text            InitializeProgramEndTrap */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void InitializeProgramEndTrap() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/Os/dolphin/dolphin_trk_glue/InitializeProgramEndTrap.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A2C0C-803A2C10 02F26C 0004+00 1/1 0/0 0/0 .rodata          @165 */
SECTION_RODATA static u32 const lit_165 = 0x25730A00;
COMPILER_STRIP_GATE(0x803A2C0C, &lit_165);

/* 80371CD8-80371D08 36C618 0030+00 0/0 1/1 0/0 .text            TRK_board_display */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRK_board_display() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/Os/dolphin/dolphin_trk_glue/TRK_board_display.s"
}
#pragma pop

/* ############################################################################################## */
/* 803D32A8-803D32D0 0303C8 0028+00 8/8 0/0 0/0 .data            gDBCommTable */
SECTION_DATA static u8 gDBCommTable[40] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80371D08-80371D38 36C648 0030+00 0/0 1/1 0/0 .text            UnreserveEXI2Port */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void UnreserveEXI2Port() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/Os/dolphin/dolphin_trk_glue/UnreserveEXI2Port.s"
}
#pragma pop

/* 80371D38-80371D68 36C678 0030+00 0/0 1/1 0/0 .text            ReserveEXI2Port */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void ReserveEXI2Port() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/Os/dolphin/dolphin_trk_glue/ReserveEXI2Port.s"
}
#pragma pop

/* 80371D68-80371DA4 36C6A8 003C+00 0/0 13/13 0/0 .text            TRKWriteUARTN */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKWriteUARTN() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/Os/dolphin/dolphin_trk_glue/TRKWriteUARTN.s"
}
#pragma pop

/* 80371DA4-80371DE0 36C6E4 003C+00 0/0 1/1 0/0 .text            TRKReadUARTN */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKReadUARTN() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/Os/dolphin/dolphin_trk_glue/TRKReadUARTN.s"
}
#pragma pop

/* 80371DE0-80371E10 36C720 0030+00 0/0 1/1 0/0 .text            TRKPollUART */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKPollUART() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/Os/dolphin/dolphin_trk_glue/TRKPollUART.s"
}
#pragma pop

/* ############################################################################################## */
/* 8044F820-8044F824 07C540 0004+00 2/2 0/0 0/0 .bss             None */
SECTION_BSS static u8 data_8044F820[4];

/* 80371E10-80371E58 36C750 0048+00 0/0 1/1 0/0 .text            EnableEXI2Interrupts */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void EnableEXI2Interrupts() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/Os/dolphin/dolphin_trk_glue/EnableEXI2Interrupts.s"
}
#pragma pop

/* 80371E58-80371EA8 36C798 0050+00 0/0 1/1 0/0 .text            TRKInitializeIntDrivenUART */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKInitializeIntDrivenUART() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/Os/dolphin/dolphin_trk_glue/TRKInitializeIntDrivenUART.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A2C10-803A2C28 02F270 0015+03 0/1 0/0 0/0 .rodata          @215 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_215[21 + 3 /* padding */] = {
    0x44,
    0x65,
    0x76,
    0x6B,
    0x69,
    0x74,
    0x20,
    0x73,
    0x65,
    0x74,
    0x20,
    0x74,
    0x6F,
    0x20,
    0x3A,
    0x20,
    0x25,
    0x6C,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x803A2C10, &lit_215);
#pragma pop

/* 803A2C28-803A2C40 02F288 0017+01 0/1 0/0 0/0 .rodata          @216 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_216[23 + 1 /* padding */] = {
    0x4D,
    0x65,
    0x74,
    0x72,
    0x6F,
    0x54,
    0x52,
    0x4B,
    0x20,
    0x3A,
    0x20,
    0x53,
    0x65,
    0x74,
    0x20,
    0x74,
    0x6F,
    0x20,
    0x42,
    0x42,
    0x41,
    0x0A,
    0x00,
    /* padding */
    0x00,
};
COMPILER_STRIP_GATE(0x803A2C28, &lit_216);
#pragma pop

/* 803A2C40-803A2C64 02F2A0 0021+03 0/1 0/0 0/0 .rodata          @217 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_217[33 + 3 /* padding */] = {
    0x4D,
    0x65,
    0x74,
    0x72,
    0x6F,
    0x54,
    0x52,
    0x4B,
    0x20,
    0x3A,
    0x20,
    0x53,
    0x65,
    0x74,
    0x20,
    0x74,
    0x6F,
    0x20,
    0x47,
    0x44,
    0x45,
    0x56,
    0x20,
    0x68,
    0x61,
    0x72,
    0x64,
    0x77,
    0x61,
    0x72,
    0x65,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x803A2C40, &lit_217);
#pragma pop

/* 803A2C64-803A2C88 02F2C4 0024+00 0/1 0/0 0/0 .rodata          @218 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_218[36] = {
    0x4D, 0x65, 0x74, 0x72, 0x6F, 0x54, 0x52, 0x4B, 0x20, 0x3A, 0x20, 0x53,
    0x65, 0x74, 0x20, 0x74, 0x6F, 0x20, 0x41, 0x4D, 0x43, 0x20, 0x44, 0x44,
    0x48, 0x20, 0x68, 0x61, 0x72, 0x64, 0x77, 0x61, 0x72, 0x65, 0x0A, 0x00,
};
COMPILER_STRIP_GATE(0x803A2C64, &lit_218);
#pragma pop

/* 803A2C88-803A2CB4 02F2E8 002B+01 0/1 0/0 0/0 .rodata          @219 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_219[43 + 1 /* padding */] = {
    0x4D,
    0x65,
    0x74,
    0x72,
    0x6F,
    0x54,
    0x52,
    0x4B,
    0x20,
    0x3A,
    0x20,
    0x53,
    0x65,
    0x74,
    0x20,
    0x74,
    0x6F,
    0x20,
    0x55,
    0x4E,
    0x4B,
    0x4E,
    0x4F,
    0x57,
    0x4E,
    0x20,
    0x68,
    0x61,
    0x72,
    0x64,
    0x77,
    0x61,
    0x72,
    0x65,
    0x2E,
    0x20,
    0x28,
    0x25,
    0x6C,
    0x64,
    0x29,
    0x0A,
    0x00,
    /* padding */
    0x00,
};
COMPILER_STRIP_GATE(0x803A2C88, &lit_219);
#pragma pop

/* 803A2CB4-803A2CE4 02F314 002F+01 0/1 0/0 0/0 .rodata          @220 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_220[47 + 1 /* padding */] = {
    0x4D,
    0x65,
    0x74,
    0x72,
    0x6F,
    0x54,
    0x52,
    0x4B,
    0x20,
    0x3A,
    0x20,
    0x49,
    0x6E,
    0x76,
    0x61,
    0x6C,
    0x69,
    0x64,
    0x20,
    0x68,
    0x61,
    0x72,
    0x64,
    0x77,
    0x61,
    0x72,
    0x65,
    0x20,
    0x49,
    0x44,
    0x20,
    0x70,
    0x61,
    0x73,
    0x73,
    0x65,
    0x64,
    0x20,
    0x66,
    0x72,
    0x6F,
    0x6D,
    0x20,
    0x4F,
    0x53,
    0x0A,
    0x00,
    /* padding */
    0x00,
};
COMPILER_STRIP_GATE(0x803A2CB4, &lit_220);
#pragma pop

/* 803A2CE4-803A2D10 02F344 0028+04 0/1 0/0 0/0 .rodata          @221 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_221[40 + 4 /* padding */] = {
    0x4D,
    0x65,
    0x74,
    0x72,
    0x6F,
    0x54,
    0x52,
    0x4B,
    0x20,
    0x3A,
    0x20,
    0x44,
    0x65,
    0x66,
    0x61,
    0x75,
    0x6C,
    0x74,
    0x69,
    0x6E,
    0x67,
    0x20,
    0x74,
    0x6F,
    0x20,
    0x47,
    0x44,
    0x45,
    0x56,
    0x20,
    0x48,
    0x61,
    0x72,
    0x64,
    0x77,
    0x61,
    0x72,
    0x65,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x803A2CE4, &lit_221);
#pragma pop

/* 80371EA8-80372114 36C7E8 026C+00 0/0 2/2 0/0 .text            InitMetroTRKCommTable */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void InitMetroTRKCommTable() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/Os/dolphin/dolphin_trk_glue/InitMetroTRKCommTable.s"
}
#pragma pop

/* 80372114-8037214C 36CA54 0038+00 1/1 0/0 0/0 .text            TRKEXICallBack */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void TRKEXICallBack() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/Os/dolphin/dolphin_trk_glue/TRKEXICallBack.s"
}
#pragma pop

/* ############################################################################################## */
/* 8044F824-8044F828 07C544 0004+00 0/0 0/0 0/0 .bss             _MetroTRK_Has_Framing */
#pragma push
#pragma force_active on
SECTION_BSS static u8 _MetroTRK_Has_Framing[4];
#pragma pop

/* 8044F828-8044F830 07C548 0008+00 0/0 2/2 0/0 .bss             None */
SECTION_BSS extern u8 data_8044F828[8];
SECTION_BSS u8 data_8044F828[8];