lbl_80B4DB78:
/* 80B4DB78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B4DB7C  7C 08 02 A6 */	mflr r0
/* 80B4DB80  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B4DB84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80B4DB88  7C 7F 1B 79 */	or. r31, r3, r3
/* 80B4DB8C  41 82 00 10 */	beq lbl_80B4DB9C
/* 80B4DB90  7C 80 07 35 */	extsh. r0, r4
/* 80B4DB94  40 81 00 08 */	ble lbl_80B4DB9C
/* 80B4DB98  4B 78 11 A5 */	bl __dl__FPv
lbl_80B4DB9C:
/* 80B4DB9C  7F E3 FB 78 */	mr r3, r31
/* 80B4DBA0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80B4DBA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B4DBA8  7C 08 03 A6 */	mtlr r0
/* 80B4DBAC  38 21 00 10 */	addi r1, r1, 0x10
/* 80B4DBB0  4E 80 00 20 */	blr 
