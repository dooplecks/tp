lbl_80977D54:
/* 80977D54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80977D58  7C 08 02 A6 */	mflr r0
/* 80977D5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80977D60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80977D64  7C 7F 1B 79 */	or. r31, r3, r3
/* 80977D68  41 82 00 10 */	beq lbl_80977D78
/* 80977D6C  7C 80 07 35 */	extsh. r0, r4
/* 80977D70  40 81 00 08 */	ble lbl_80977D78
/* 80977D74  4B 95 6F C9 */	bl __dl__FPv
lbl_80977D78:
/* 80977D78  7F E3 FB 78 */	mr r3, r31
/* 80977D7C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80977D80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80977D84  7C 08 03 A6 */	mtlr r0
/* 80977D88  38 21 00 10 */	addi r1, r1, 0x10
/* 80977D8C  4E 80 00 20 */	blr 
