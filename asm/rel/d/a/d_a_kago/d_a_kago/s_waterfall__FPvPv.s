lbl_80853880:
/* 80853880  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80853884  7C 08 02 A6 */	mflr r0
/* 80853888  90 01 00 24 */	stw r0, 0x24(r1)
/* 8085388C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80853890  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80853894  7C 7E 1B 78 */	mr r30, r3
/* 80853898  7C 9F 23 78 */	mr r31, r4
/* 8085389C  4B 7C 54 45 */	bl fopAc_IsActor__FPv
/* 808538A0  2C 03 00 00 */	cmpwi r3, 0
/* 808538A4  41 82 00 6C */	beq lbl_80853910
/* 808538A8  A8 1E 00 08 */	lha r0, 8(r30)
/* 808538AC  2C 00 01 F8 */	cmpwi r0, 0x1f8
/* 808538B0  40 82 00 60 */	bne lbl_80853910
/* 808538B4  28 1E 00 00 */	cmplwi r30, 0
/* 808538B8  41 82 00 0C */	beq lbl_808538C4
/* 808538BC  80 7E 00 04 */	lwz r3, 4(r30)
/* 808538C0  48 00 00 08 */	b lbl_808538C8
lbl_808538C4:
/* 808538C4  38 60 FF FF */	li r3, -1
lbl_808538C8:
/* 808538C8  4B 7C E8 71 */	bl fpcM_IsCreating__FUi
/* 808538CC  2C 03 00 00 */	cmpwi r3, 0
/* 808538D0  40 82 00 40 */	bne lbl_80853910
/* 808538D4  C0 1F 04 D0 */	lfs f0, 0x4d0(r31)
/* 808538D8  D0 01 00 08 */	stfs f0, 8(r1)
/* 808538DC  C0 1F 04 D4 */	lfs f0, 0x4d4(r31)
/* 808538E0  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 808538E4  C0 1F 04 D8 */	lfs f0, 0x4d8(r31)
/* 808538E8  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 808538EC  7F C3 F3 78 */	mr r3, r30
/* 808538F0  38 81 00 08 */	addi r4, r1, 8
/* 808538F4  48 51 0E 75 */	bl checkHitWaterFall__16daTagWaterFall_cF4cXyz
/* 808538F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 808538FC  41 82 00 14 */	beq lbl_80853910
/* 80853900  38 00 00 01 */	li r0, 1
/* 80853904  98 1F 06 EA */	stb r0, 0x6ea(r31)
/* 80853908  7F C3 F3 78 */	mr r3, r30
/* 8085390C  48 00 00 08 */	b lbl_80853914
lbl_80853910:
/* 80853910  38 60 00 00 */	li r3, 0
lbl_80853914:
/* 80853914  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80853918  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8085391C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80853920  7C 08 03 A6 */	mtlr r0
/* 80853924  38 21 00 20 */	addi r1, r1, 0x20
/* 80853928  4E 80 00 20 */	blr 
