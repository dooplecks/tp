lbl_8094C204:
/* 8094C204  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8094C208  7C 08 02 A6 */	mflr r0
/* 8094C20C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8094C210  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8094C214  7C 7F 1B 79 */	or. r31, r3, r3
/* 8094C218  41 82 00 10 */	beq lbl_8094C228
/* 8094C21C  7C 80 07 35 */	extsh. r0, r4
/* 8094C220  40 81 00 08 */	ble lbl_8094C228
/* 8094C224  4B 98 2B 19 */	bl __dl__FPv
lbl_8094C228:
/* 8094C228  7F E3 FB 78 */	mr r3, r31
/* 8094C22C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8094C230  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8094C234  7C 08 03 A6 */	mtlr r0
/* 8094C238  38 21 00 10 */	addi r1, r1, 0x10
/* 8094C23C  4E 80 00 20 */	blr 
