lbl_8045C25C:
/* 8045C25C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8045C260  7C 08 02 A6 */	mflr r0
/* 8045C264  90 01 00 24 */	stw r0, 0x24(r1)
/* 8045C268  39 61 00 20 */	addi r11, r1, 0x20
/* 8045C26C  4B F0 5F 71 */	bl _savegpr_29
/* 8045C270  28 04 00 00 */	cmplwi r4, 0
/* 8045C274  41 82 00 5C */	beq lbl_8045C2D0
/* 8045C278  83 E4 00 04 */	lwz r31, 4(r4)
/* 8045C27C  3B A0 00 00 */	li r29, 0
/* 8045C280  48 00 00 40 */	b lbl_8045C2C0
lbl_8045C284:
/* 8045C284  80 7F 00 60 */	lwz r3, 0x60(r31)
/* 8045C288  57 A0 13 BA */	rlwinm r0, r29, 2, 0xe, 0x1d
/* 8045C28C  7F C3 00 2E */	lwzx r30, r3, r0
/* 8045C290  7F C3 F3 78 */	mr r3, r30
/* 8045C294  81 9E 00 00 */	lwz r12, 0(r30)
/* 8045C298  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8045C29C  7D 89 03 A6 */	mtctr r12
/* 8045C2A0  4E 80 04 21 */	bctrl 
/* 8045C2A4  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8045C2A8  38 80 00 00 */	li r4, 0
/* 8045C2AC  81 83 00 00 */	lwz r12, 0(r3)
/* 8045C2B0  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 8045C2B4  7D 89 03 A6 */	mtctr r12
/* 8045C2B8  4E 80 04 21 */	bctrl 
/* 8045C2BC  3B BD 00 01 */	addi r29, r29, 1
lbl_8045C2C0:
/* 8045C2C0  57 A3 04 3E */	clrlwi r3, r29, 0x10
/* 8045C2C4  A0 1F 00 5C */	lhz r0, 0x5c(r31)
/* 8045C2C8  7C 03 00 40 */	cmplw r3, r0
/* 8045C2CC  41 80 FF B8 */	blt lbl_8045C284
lbl_8045C2D0:
/* 8045C2D0  39 61 00 20 */	addi r11, r1, 0x20
/* 8045C2D4  4B F0 5F 55 */	bl _restgpr_29
/* 8045C2D8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8045C2DC  7C 08 03 A6 */	mtlr r0
/* 8045C2E0  38 21 00 20 */	addi r1, r1, 0x20
/* 8045C2E4  4E 80 00 20 */	blr 
