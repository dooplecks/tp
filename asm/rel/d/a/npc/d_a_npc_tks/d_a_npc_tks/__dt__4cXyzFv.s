lbl_80B1D668:
/* 80B1D668  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B1D66C  7C 08 02 A6 */	mflr r0
/* 80B1D670  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B1D674  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80B1D678  7C 7F 1B 79 */	or. r31, r3, r3
/* 80B1D67C  41 82 00 10 */	beq lbl_80B1D68C
/* 80B1D680  7C 80 07 35 */	extsh. r0, r4
/* 80B1D684  40 81 00 08 */	ble lbl_80B1D68C
/* 80B1D688  4B 7B 16 B5 */	bl __dl__FPv
lbl_80B1D68C:
/* 80B1D68C  7F E3 FB 78 */	mr r3, r31
/* 80B1D690  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80B1D694  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B1D698  7C 08 03 A6 */	mtlr r0
/* 80B1D69C  38 21 00 10 */	addi r1, r1, 0x10
/* 80B1D6A0  4E 80 00 20 */	blr 
