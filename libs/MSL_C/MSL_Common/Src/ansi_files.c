//
// Generated By: dol2asm
// Translation Unit: MSL_Common/Src/ansi_files
//

#include "MSL_C/MSL_Common/Src/ansi_files.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

unsigned int __flush_all();
void __close_all();

//
// External References:
//

void free(FILE*);
void __end_critical_region(int);
void __begin_critical_region(int);
int fflush(FILE*);
void fclose(FILE*);
int __close_console(unsigned int);
int __write_console(int, int, int*, int);
int __read_console(unsigned int, unsigned int, unsigned int*);

//
// Declarations:
//

/* ############################################################################################## */
/* 8044D778-8044D878 07A498 0100+00 1/0 0/0 0/0 .bss             stdin_buff */
static u8 stdin_buff[0x100];

/* 8044D678-8044D778 07A398 0100+00 1/0 0/0 0/0 .bss             stdout_buff */
static u8 stdout_buff[0x100];

/* 8044D578-8044D678 07A298 0100+00 1/0 0/0 0/0 .bss             stderr_buff */
static u8 stderr_buff[0x100];

/* 803D29B0-803D2AF0 -00001 0140+00 3/2 15/15 0/0 .data            __files */
SECTION_DATA extern files __files = {
    {0,
     0,
     1,
     1,
     2,
     0,
     0,
     0,
     0,
     0,
     0,
     0,
     0,
     0,
     {0, 0},
     {0, 0},
     0,
     stdin_buff,
     0x00000100,
     stdin_buff,
     0,
     0,
     0,
     0,
     NULL,
     __read_console,
     __write_console,
     __close_console,
     NULL,
     &__files.stdout},
    {1,
     0,
     2,
     1,
     2,
     0,
     0,
     0,
     0,
     0,
     0,
     0,
     0,
     0,
     {0, 0},
     {0, 0},
     0,
     stdout_buff,
     0x00000100,
     stdout_buff,
     0,
     0,
     0,
     0,
     NULL,
     __read_console,
     __write_console,
     __close_console,
     NULL,
     &__files.stderr},
    {2,
     0,
     2,
     0,
     2,
     0,
     0,
     0,
     0,
     0,
     0,
     0,
     0,
     0,
     {0, 0},
     {0, 0},
     0,
     stderr_buff,
     0x00000100,
     stderr_buff,
     0,
     0,
     0,
     0,
     NULL,
     __read_console,
     __write_console,
     __close_console,
     NULL,
     &__files.empty},
    {0,      0, 0,    0,          0,    0, 0, 0, 0, 0,    0,    0,    0,    0,    {0, 0},
     {0, 0}, 0, NULL, 0x00000000, NULL, 0, 0, 0, 0, NULL, NULL, NULL, NULL, NULL, NULL},
};

/* 8036300C-8036307C 35D94C 0070+00 0/0 2/2 0/0 .text            __flush_all */
unsigned int __flush_all(void) {
    unsigned int ret = 0;
    FILE* file = &__files.stdin;

    while (file) {
        if (file->file_mode.file_kind != 0 && fflush(file)) {
            ret = -1;
        }
        file = file->next_file;
    }

    return ret;
}

/* 8036307C-80363124 35D9BC 00A8+00 0/0 1/1 0/0 .text            __close_all */
void __close_all(void) {
    FILE* file = &__files.stdin;
    FILE* last_file;

    __begin_critical_region(2);

    while (file != NULL) {
        if (file->file_mode.file_kind != CLOSED_FILE) {
            fclose(file);
        }

        last_file = file;
        file = file->next_file;

        if (last_file->flag) {
            free(last_file);
        } else {
            last_file->file_mode.file_kind = UNAVAILABLE_FILE;
            if (file != NULL && file->flag) {
                last_file->next_file = NULL;
            }
        }
    }

    __end_critical_region(2);
}
