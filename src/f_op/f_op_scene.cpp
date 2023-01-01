//
// Generated By: dol2asm
// Translation Unit: f_op/f_op_scene
//

#include "f_op/f_op_scene.h"
#include "f_op/f_op_scene_tag.h"
#include "f_pc/f_pc_manager.h"
#include "dol2asm.h"
#include "dolphin/types.h"

/* 8001EB34-8001EB5C 019474 0028+00 1/0 0/0 0/0 .text            fopScn_Draw__FP11scene_class */
static void fopScn_Draw(scene_class* pScene) {
    fpcNd_DrawMethod((nodedraw_method_class*)pScene->mpMtd, pScene);
}

/* 8001EB5C-8001EB84 01949C 0028+00 1/0 0/0 0/0 .text            fopScn_Execute__FP11scene_class */
static void fopScn_Execute(scene_class* pScene) {
    fpcMtd_Execute(pScene->mpMtd, pScene);
}

/* 8001EB84-8001EBAC 0194C4 0028+00 1/0 0/0 0/0 .text            fopScn_IsDelete__FPv */
static s32 fopScn_IsDelete(void* pScene) {
    return fpcMtd_IsDelete(((scene_class*)pScene)->mpMtd, pScene);
}

/* 8001EBAC-8001EC00 0194EC 0054+00 1/0 0/0 0/0 .text            fopScn_Delete__FPv */
static s32 fopScn_Delete(void* param_1) {
    scene_class* pScene = (scene_class*)param_1;
    s32 ret = fpcMtd_Delete(pScene->mpMtd, pScene);
    if (ret == 1) {
        fopScnTg_QueueTo(&pScene->mScnTg);
    }
    return ret;
}

/* 8001EC00-8001EC74 019540 0074+00 1/0 0/0 0/0 .text            fopScn_Create__FPv */
static s32 fopScn_Create(void * pScene) {
    scene_class* scene = (scene_class*)pScene;
    if (fpcM_IsFirstCreating(pScene)) {
        scene_process_profile_definition* profile = (scene_process_profile_definition*) fpcM_GetProfile(pScene);
        scene->mpMtd = profile->mpMtd;
        fopScnTg_Init(&scene->mScnTg, pScene);
        fopScnTg_ToQueue(&scene->mScnTg);

        u32 * append = (u32*)fpcM_GetAppend(pScene);
        if (append != NULL) {
            scene->mBase.mBase.mParameters = *append;
        }
    }

    return fpcMtd_Create(scene->mpMtd, pScene);
}

/* ############################################################################################## */
/* 803A38B0-803A38C8 -00001 0014+04 0/0 9/0 0/0 .data            g_fopScn_Method */
nodedraw_method_class g_fopScn_Method = {
    (process_method_func)fopScn_Create,
    (process_method_func)fopScn_Delete,
    (process_method_func)fopScn_Execute,
    (process_method_func)fopScn_IsDelete,
    (process_method_func)fopScn_Draw,
};
