lbl_80088C24:
/* 80088C24  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80088C28  7C 08 02 A6 */	mflr r0
/* 80088C2C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80088C30  39 61 00 20 */	addi r11, r1, 0x20
/* 80088C34  48 2D 95 A1 */	bl _savegpr_27
/* 80088C38  7C 7B 1B 78 */	mr r27, r3
/* 80088C3C  7C 9C 23 78 */	mr r28, r4
/* 80088C40  3B A0 00 00 */	li r29, 0
/* 80088C44  3B C0 00 00 */	li r30, 0
/* 80088C48  3B E0 00 00 */	li r31, 0
lbl_80088C4C:
/* 80088C4C  7C 7B FA 14 */	add r3, r27, r31
/* 80088C50  88 03 05 14 */	lbz r0, 0x514(r3)
/* 80088C54  7C 00 07 75 */	extsb. r0, r0
/* 80088C58  41 82 00 30 */	beq lbl_80088C88
/* 80088C5C  38 63 05 14 */	addi r3, r3, 0x514
/* 80088C60  7F 84 E3 78 */	mr r4, r28
/* 80088C64  48 2D FD 31 */	bl strcmp
/* 80088C68  2C 03 00 00 */	cmpwi r3, 0
/* 80088C6C  40 82 00 0C */	bne lbl_80088C78
/* 80088C70  3B A0 00 01 */	li r29, 1
/* 80088C74  48 00 00 14 */	b lbl_80088C88
lbl_80088C78:
/* 80088C78  3B DE 00 01 */	addi r30, r30, 1
/* 80088C7C  2C 1E 00 08 */	cmpwi r30, 8
/* 80088C80  3B FF 00 18 */	addi r31, r31, 0x18
/* 80088C84  41 80 FF C8 */	blt lbl_80088C4C
lbl_80088C88:
/* 80088C88  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 80088C8C  38 60 FF FF */	li r3, -1
/* 80088C90  41 82 00 08 */	beq lbl_80088C98
/* 80088C94  7F C3 F3 78 */	mr r3, r30
lbl_80088C98:
/* 80088C98  39 61 00 20 */	addi r11, r1, 0x20
/* 80088C9C  48 2D 95 85 */	bl _restgpr_27
/* 80088CA0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80088CA4  7C 08 03 A6 */	mtlr r0
/* 80088CA8  38 21 00 20 */	addi r1, r1, 0x20
/* 80088CAC  4E 80 00 20 */	blr 