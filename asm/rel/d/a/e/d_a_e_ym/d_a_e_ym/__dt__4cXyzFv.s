lbl_80815900:
/* 80815900  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80815904  7C 08 02 A6 */	mflr r0
/* 80815908  90 01 00 14 */	stw r0, 0x14(r1)
/* 8081590C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80815910  7C 7F 1B 79 */	or. r31, r3, r3
/* 80815914  41 82 00 10 */	beq lbl_80815924
/* 80815918  7C 80 07 35 */	extsh. r0, r4
/* 8081591C  40 81 00 08 */	ble lbl_80815924
/* 80815920  4B AB 94 1D */	bl __dl__FPv
lbl_80815924:
/* 80815924  7F E3 FB 78 */	mr r3, r31
/* 80815928  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8081592C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80815930  7C 08 03 A6 */	mtlr r0
/* 80815934  38 21 00 10 */	addi r1, r1, 0x10
/* 80815938  4E 80 00 20 */	blr 
