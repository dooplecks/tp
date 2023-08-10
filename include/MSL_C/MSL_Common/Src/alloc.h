#ifndef MSL_COMMON_SRC_ALLOC_H
#define MSL_COMMON_SRC_ALLOC_H

#include "MSL_C/MSL_Common/Src/ansi_files.h"

#ifdef __cplusplus
extern "C" {
#endif

void free(FILE* file);
void __pool_free(int **param_1, unsigned int **param_2);

#ifdef __cplusplus
}
#endif

#endif /* MSL_COMMON_SRC_ALLOC_H */
