lbl_80A6B554:
/* 80A6B554  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A6B558  7C 08 02 A6 */	mflr r0
/* 80A6B55C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A6B560  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80A6B564  7C 7F 1B 79 */	or. r31, r3, r3
/* 80A6B568  41 82 00 10 */	beq lbl_80A6B578
/* 80A6B56C  7C 80 07 35 */	extsh. r0, r4
/* 80A6B570  40 81 00 08 */	ble lbl_80A6B578
/* 80A6B574  4B 86 37 C9 */	bl __dl__FPv
lbl_80A6B578:
/* 80A6B578  7F E3 FB 78 */	mr r3, r31
/* 80A6B57C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80A6B580  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A6B584  7C 08 03 A6 */	mtlr r0
/* 80A6B588  38 21 00 10 */	addi r1, r1, 0x10
/* 80A6B58C  4E 80 00 20 */	blr 
