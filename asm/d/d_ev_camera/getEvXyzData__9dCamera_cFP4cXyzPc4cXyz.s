lbl_8008922C:
/* 8008922C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80089230  7C 08 02 A6 */	mflr r0
/* 80089234  90 01 00 24 */	stw r0, 0x24(r1)
/* 80089238  39 61 00 20 */	addi r11, r1, 0x20
/* 8008923C  48 2D 8F 99 */	bl _savegpr_27
/* 80089240  7C 7B 1B 78 */	mr r27, r3
/* 80089244  7C 9C 23 78 */	mr r28, r4
/* 80089248  7C BD 2B 78 */	mr r29, r5
/* 8008924C  7C DE 33 78 */	mr r30, r6
/* 80089250  80 03 06 0C */	lwz r0, 0x60c(r3)
/* 80089254  54 00 00 85 */	rlwinm. r0, r0, 0, 2, 2
/* 80089258  41 82 00 58 */	beq lbl_800892B0
/* 8008925C  7F A4 EB 78 */	mr r4, r29
/* 80089260  4B FF F9 C5 */	bl searchEventArgData__9dCamera_cFPc
/* 80089264  2C 03 FF FF */	cmpwi r3, -1
/* 80089268  40 82 00 20 */	bne lbl_80089288
/* 8008926C  C0 1E 00 00 */	lfs f0, 0(r30)
/* 80089270  D0 1C 00 00 */	stfs f0, 0(r28)
/* 80089274  C0 1E 00 04 */	lfs f0, 4(r30)
/* 80089278  D0 1C 00 04 */	stfs f0, 4(r28)
/* 8008927C  C0 1E 00 08 */	lfs f0, 8(r30)
/* 80089280  D0 1C 00 08 */	stfs f0, 8(r28)
/* 80089284  48 00 00 9C */	b lbl_80089320
lbl_80089288:
/* 80089288  1C 03 00 18 */	mulli r0, r3, 0x18
/* 8008928C  7C 7B 02 14 */	add r3, r27, r0
/* 80089290  80 63 05 28 */	lwz r3, 0x528(r3)
/* 80089294  C0 03 00 00 */	lfs f0, 0(r3)
/* 80089298  D0 1C 00 00 */	stfs f0, 0(r28)
/* 8008929C  C0 03 00 04 */	lfs f0, 4(r3)
/* 800892A0  D0 1C 00 04 */	stfs f0, 4(r28)
/* 800892A4  C0 03 00 08 */	lfs f0, 8(r3)
/* 800892A8  D0 1C 00 08 */	stfs f0, 8(r28)
/* 800892AC  48 00 00 74 */	b lbl_80089320
lbl_800892B0:
/* 800892B0  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 800892B4  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 800892B8  3B E3 4F F8 */	addi r31, r3, 0x4ff8
/* 800892BC  7F E3 FB 78 */	mr r3, r31
/* 800892C0  80 9B 04 EC */	lwz r4, 0x4ec(r27)
/* 800892C4  4B FB EE 81 */	bl getMySubstanceNum__16dEvent_manager_cFiPCc
/* 800892C8  2C 03 00 00 */	cmpwi r3, 0
/* 800892CC  41 82 00 34 */	beq lbl_80089300
/* 800892D0  7F E3 FB 78 */	mr r3, r31
/* 800892D4  80 9B 04 EC */	lwz r4, 0x4ec(r27)
/* 800892D8  7F A5 EB 78 */	mr r5, r29
/* 800892DC  38 C0 00 01 */	li r6, 1
/* 800892E0  4B FB EE 0D */	bl getMySubstanceP__16dEvent_manager_cFiPCci
/* 800892E4  C0 03 00 00 */	lfs f0, 0(r3)
/* 800892E8  D0 1C 00 00 */	stfs f0, 0(r28)
/* 800892EC  C0 03 00 04 */	lfs f0, 4(r3)
/* 800892F0  D0 1C 00 04 */	stfs f0, 4(r28)
/* 800892F4  C0 03 00 08 */	lfs f0, 8(r3)
/* 800892F8  D0 1C 00 08 */	stfs f0, 8(r28)
/* 800892FC  48 00 00 24 */	b lbl_80089320
lbl_80089300:
/* 80089300  C0 1E 00 00 */	lfs f0, 0(r30)
/* 80089304  D0 1C 00 00 */	stfs f0, 0(r28)
/* 80089308  C0 1E 00 04 */	lfs f0, 4(r30)
/* 8008930C  D0 1C 00 04 */	stfs f0, 4(r28)
/* 80089310  C0 1E 00 08 */	lfs f0, 8(r30)
/* 80089314  D0 1C 00 08 */	stfs f0, 8(r28)
/* 80089318  38 60 00 00 */	li r3, 0
/* 8008931C  48 00 00 08 */	b lbl_80089324
lbl_80089320:
/* 80089320  38 60 00 01 */	li r3, 1
lbl_80089324:
/* 80089324  39 61 00 20 */	addi r11, r1, 0x20
/* 80089328  48 2D 8E F9 */	bl _restgpr_27
/* 8008932C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80089330  7C 08 03 A6 */	mtlr r0
/* 80089334  38 21 00 20 */	addi r1, r1, 0x20
/* 80089338  4E 80 00 20 */	blr 
