lbl_807355E8:
/* 807355E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 807355EC  7C 08 02 A6 */	mflr r0
/* 807355F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 807355F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 807355F8  7C 7F 1B 79 */	or. r31, r3, r3
/* 807355FC  41 82 00 1C */	beq lbl_80735618
/* 80735600  3C A0 80 73 */	lis r5, __vt__10cCcD_GStts@ha /* 0x80735F8C@ha */
/* 80735604  38 05 5F 8C */	addi r0, r5, __vt__10cCcD_GStts@l /* 0x80735F8C@l */
/* 80735608  90 1F 00 00 */	stw r0, 0(r31)
/* 8073560C  7C 80 07 35 */	extsh. r0, r4
/* 80735610  40 81 00 08 */	ble lbl_80735618
/* 80735614  4B B9 97 29 */	bl __dl__FPv
lbl_80735618:
/* 80735618  7F E3 FB 78 */	mr r3, r31
/* 8073561C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80735620  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80735624  7C 08 03 A6 */	mtlr r0
/* 80735628  38 21 00 10 */	addi r1, r1, 0x10
/* 8073562C  4E 80 00 20 */	blr 
