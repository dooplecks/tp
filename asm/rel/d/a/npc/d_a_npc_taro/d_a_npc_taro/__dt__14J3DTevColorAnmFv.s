lbl_805667A8:
/* 805667A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 805667AC  7C 08 02 A6 */	mflr r0
/* 805667B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 805667B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 805667B8  7C 7F 1B 79 */	or. r31, r3, r3
/* 805667BC  41 82 00 10 */	beq lbl_805667CC
/* 805667C0  7C 80 07 35 */	extsh. r0, r4
/* 805667C4  40 81 00 08 */	ble lbl_805667CC
/* 805667C8  4B D6 85 75 */	bl __dl__FPv
lbl_805667CC:
/* 805667CC  7F E3 FB 78 */	mr r3, r31
/* 805667D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 805667D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 805667D8  7C 08 03 A6 */	mtlr r0
/* 805667DC  38 21 00 10 */	addi r1, r1, 0x10
/* 805667E0  4E 80 00 20 */	blr 
