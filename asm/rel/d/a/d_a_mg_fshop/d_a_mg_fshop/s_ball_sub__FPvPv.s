lbl_8086D500:
/* 8086D500  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8086D504  7C 08 02 A6 */	mflr r0
/* 8086D508  90 01 00 14 */	stw r0, 0x14(r1)
/* 8086D50C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8086D510  7C 7F 1B 78 */	mr r31, r3
/* 8086D514  4B 7A B7 CD */	bl fopAc_IsActor__FPv
/* 8086D518  2C 03 00 00 */	cmpwi r3, 0
/* 8086D51C  41 82 00 28 */	beq lbl_8086D544
/* 8086D520  A8 1F 00 08 */	lha r0, 8(r31)
/* 8086D524  2C 00 01 37 */	cmpwi r0, 0x137
/* 8086D528  40 82 00 1C */	bne lbl_8086D544
/* 8086D52C  80 1F 00 B0 */	lwz r0, 0xb0(r31)
/* 8086D530  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8086D534  28 00 00 23 */	cmplwi r0, 0x23
/* 8086D538  40 82 00 0C */	bne lbl_8086D544
/* 8086D53C  7F E3 FB 78 */	mr r3, r31
/* 8086D540  48 00 00 08 */	b lbl_8086D548
lbl_8086D544:
/* 8086D544  38 60 00 00 */	li r3, 0
lbl_8086D548:
/* 8086D548  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8086D54C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8086D550  7C 08 03 A6 */	mtlr r0
/* 8086D554  38 21 00 10 */	addi r1, r1, 0x10
/* 8086D558  4E 80 00 20 */	blr 