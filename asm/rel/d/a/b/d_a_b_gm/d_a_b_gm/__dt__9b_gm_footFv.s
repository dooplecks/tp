lbl_805F3AC0:
/* 805F3AC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 805F3AC4  7C 08 02 A6 */	mflr r0
/* 805F3AC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 805F3ACC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 805F3AD0  7C 7F 1B 79 */	or. r31, r3, r3
/* 805F3AD4  41 82 00 10 */	beq lbl_805F3AE4
/* 805F3AD8  7C 80 07 35 */	extsh. r0, r4
/* 805F3ADC  40 81 00 08 */	ble lbl_805F3AE4
/* 805F3AE0  4B CD B2 5D */	bl __dl__FPv
lbl_805F3AE4:
/* 805F3AE4  7F E3 FB 78 */	mr r3, r31
/* 805F3AE8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 805F3AEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 805F3AF0  7C 08 03 A6 */	mtlr r0
/* 805F3AF4  38 21 00 10 */	addi r1, r1, 0x10
/* 805F3AF8  4E 80 00 20 */	blr 
