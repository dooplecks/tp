lbl_80C8D5D0:
/* 80C8D5D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C8D5D4  7C 08 02 A6 */	mflr r0
/* 80C8D5D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C8D5DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80C8D5E0  93 C1 00 08 */	stw r30, 8(r1)
/* 80C8D5E4  7C 7E 1B 78 */	mr r30, r3
/* 80C8D5E8  3C 60 80 43 */	lis r3, g_env_light@ha /* 0x8042CA54@ha */
/* 80C8D5EC  38 63 CA 54 */	addi r3, r3, g_env_light@l /* 0x8042CA54@l */
/* 80C8D5F0  38 80 00 10 */	li r4, 0x10
/* 80C8D5F4  38 BE 04 D0 */	addi r5, r30, 0x4d0
/* 80C8D5F8  38 DE 01 0C */	addi r6, r30, 0x10c
/* 80C8D5FC  4B 51 61 C9 */	bl settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c
/* 80C8D600  3C 60 80 43 */	lis r3, g_env_light@ha /* 0x8042CA54@ha */
/* 80C8D604  38 63 CA 54 */	addi r3, r3, g_env_light@l /* 0x8042CA54@l */
/* 80C8D608  80 9E 05 A8 */	lwz r4, 0x5a8(r30)
/* 80C8D60C  80 84 00 04 */	lwz r4, 4(r4)
/* 80C8D610  38 BE 01 0C */	addi r5, r30, 0x10c
/* 80C8D614  4B 51 77 8D */	bl setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c
/* 80C8D618  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80C8D61C  38 83 61 C0 */	addi r4, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80C8D620  80 04 5F 70 */	lwz r0, 0x5f70(r4)
/* 80C8D624  3C 60 80 43 */	lis r3, j3dSys@ha /* 0x80434AC8@ha */
/* 80C8D628  3B E3 4A C8 */	addi r31, r3, j3dSys@l /* 0x80434AC8@l */
/* 80C8D62C  90 1F 00 48 */	stw r0, 0x48(r31)
/* 80C8D630  80 04 5F 74 */	lwz r0, 0x5f74(r4)
/* 80C8D634  90 1F 00 4C */	stw r0, 0x4c(r31)
/* 80C8D638  80 7E 05 A8 */	lwz r3, 0x5a8(r30)
/* 80C8D63C  4B 38 06 89 */	bl mDoExt_modelUpdateDL__FP8J3DModel
/* 80C8D640  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80C8D644  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80C8D648  80 03 5F 80 */	lwz r0, 0x5f80(r3)
/* 80C8D64C  90 1F 00 48 */	stw r0, 0x48(r31)
/* 80C8D650  80 03 5F 84 */	lwz r0, 0x5f84(r3)
/* 80C8D654  90 1F 00 4C */	stw r0, 0x4c(r31)
/* 80C8D658  38 60 00 01 */	li r3, 1
/* 80C8D65C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80C8D660  83 C1 00 08 */	lwz r30, 8(r1)
/* 80C8D664  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C8D668  7C 08 03 A6 */	mtlr r0
/* 80C8D66C  38 21 00 10 */	addi r1, r1, 0x10
/* 80C8D670  4E 80 00 20 */	blr 
