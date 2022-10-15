//
// Generated By: dol2asm
// Translation Unit: dsp_task
//

#include "dolphin/dsp/dsp_task.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

void __DSP_exec_task();
void __DSP_boot_task();
void __DSP_insert_task();
void __DSP_remove_task();

//
// External References:
//

void DSPCheckMailToDSP();
void DSPCheckMailFromDSP();
void DSPReadMailFromDSP();
void DSPSendMailToDSP();
void __DSP_debug_printf();

//
// Declarations:
//

/* 803525D0-80352770 34CF10 01A0+00 0/0 1/1 0/0 .text            __DSP_exec_task */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __DSP_exec_task() {
    nofralloc
#include "asm/dolphin/dsp/dsp_task/__DSP_exec_task.s"
}
#pragma pop

/* ############################################################################################## */
/* 803D1CF8-803D1D18 02EE18 001D+03 1/1 0/0 0/0 .data            @266 */
SECTION_DATA static char lit_266[] = "DSP is booting task: 0x%08X\n";

/* 803D1D18-803D1D48 02EE38 002D+03 0/1 0/0 0/0 .data            @267 */
#pragma push
#pragma force_active on
SECTION_DATA static char lit_267[] = "__DSP_boot_task()  : IRAM MMEM ADDR: 0x%08X\n";
#pragma pop

/* 803D1D48-803D1D78 02EE68 002D+03 0/1 0/0 0/0 .data            @268 */
#pragma push
#pragma force_active on
SECTION_DATA static char lit_268[] = "__DSP_boot_task()  : IRAM DSP ADDR : 0x%08X\n";
#pragma pop

/* 803D1D78-803D1DA8 02EE98 002D+03 0/1 0/0 0/0 .data            @269 */
#pragma push
#pragma force_active on
SECTION_DATA static char lit_269[] = "__DSP_boot_task()  : IRAM LENGTH   : 0x%08X\n";
#pragma pop

/* 803D1DA8-803D1DD8 02EEC8 002D+03 0/1 0/0 0/0 .data            @270 */
#pragma push
#pragma force_active on
SECTION_DATA static char lit_270[] = "__DSP_boot_task()  : DRAM MMEM ADDR: 0x%08X\n";
#pragma pop

/* 803D1DD8-803D1E08 02EEF8 002D+03 0/1 0/0 0/0 .data            @271 */
#pragma push
#pragma force_active on
SECTION_DATA static char lit_271[] = "__DSP_boot_task()  : Start Vector  : 0x%08X\n";
#pragma pop

/* 80352770-803528FC 34D0B0 018C+00 0/0 1/1 0/0 .text            __DSP_boot_task */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __DSP_boot_task() {
    nofralloc
#include "asm/dolphin/dsp/dsp_task/__DSP_boot_task.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451914-80451918 000E14 0004+00 2/2 2/2 0/0 .sbss            __DSP_curr_task */
extern u8 __DSP_curr_task[4];
u8 __DSP_curr_task[4];

/* 80451910-80451914 000E10 0004+00 2/2 2/2 0/0 .sbss            __DSP_first_task */
extern u8 __DSP_first_task[4];
u8 __DSP_first_task[4];

/* 8045190C-80451910 000E0C 0004+00 2/2 1/1 0/0 .sbss            __DSP_last_task */
extern u8 __DSP_last_task[4];
u8 __DSP_last_task[4];

/* 80451908-8045190C 000E08 0004+00 0/0 1/1 0/0 .sbss            __DSP_tmp_task */
extern u8 __DSP_tmp_task[4];
u8 __DSP_tmp_task[4];

/* 803528FC-8035299C 34D23C 00A0+00 0/0 1/1 0/0 .text            __DSP_insert_task */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __DSP_insert_task() {
    nofralloc
#include "asm/dolphin/dsp/dsp_task/__DSP_insert_task.s"
}
#pragma pop

/* 8035299C-80352A30 34D2DC 0094+00 0/0 1/1 0/0 .text            __DSP_remove_task */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __DSP_remove_task() {
    nofralloc
#include "asm/dolphin/dsp/dsp_task/__DSP_remove_task.s"
}
#pragma pop

/* ############################################################################################## */
/* 803D1E08-803D1E38 02EF28 002B+05 0/0 0/0 0/0 .data            @294 */
#pragma push
#pragma force_active on
SECTION_DATA static char lit_294[] = "__DSP_add_task() : Added task    : 0x%08X\n";
#pragma pop
