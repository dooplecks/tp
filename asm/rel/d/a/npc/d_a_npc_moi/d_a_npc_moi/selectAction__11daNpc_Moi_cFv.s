lbl_80A764B0:
/* 80A764B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A764B4  7C 08 02 A6 */	mflr r0
/* 80A764B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A764BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80A764C0  93 C1 00 08 */	stw r30, 8(r1)
/* 80A764C4  7C 7F 1B 78 */	mr r31, r3
/* 80A764C8  3C 60 80 A8 */	lis r3, cNullVec__6Z2Calc@ha /* 0x80A7B15C@ha */
/* 80A764CC  3B C3 B1 5C */	addi r30, r3, cNullVec__6Z2Calc@l /* 0x80A7B15C@l */
/* 80A764D0  3C 60 80 3A */	lis r3, __ptmf_null@ha /* 0x803A2180@ha */
/* 80A764D4  38 83 21 80 */	addi r4, r3, __ptmf_null@l /* 0x803A2180@l */
/* 80A764D8  80 64 00 00 */	lwz r3, 0(r4)
/* 80A764DC  80 04 00 04 */	lwz r0, 4(r4)
/* 80A764E0  90 7F 16 10 */	stw r3, 0x1610(r31)
/* 80A764E4  90 1F 16 14 */	stw r0, 0x1614(r31)
/* 80A764E8  80 04 00 08 */	lwz r0, 8(r4)
/* 80A764EC  90 1F 16 18 */	stw r0, 0x1618(r31)
/* 80A764F0  88 1F 15 C4 */	lbz r0, 0x15c4(r31)
/* 80A764F4  2C 00 00 03 */	cmpwi r0, 3
/* 80A764F8  41 82 00 68 */	beq lbl_80A76560
/* 80A764FC  40 80 00 10 */	bge lbl_80A7650C
/* 80A76500  2C 00 00 02 */	cmpwi r0, 2
/* 80A76504  40 80 00 14 */	bge lbl_80A76518
/* 80A76508  48 00 00 90 */	b lbl_80A76598
lbl_80A7650C:
/* 80A7650C  2C 00 00 05 */	cmpwi r0, 5
/* 80A76510  40 80 00 88 */	bge lbl_80A76598
/* 80A76514  48 00 00 68 */	b lbl_80A7657C
lbl_80A76518:
/* 80A76518  38 60 00 CD */	li r3, 0xcd
/* 80A7651C  4B 6D 65 91 */	bl daNpcT_chkEvtBit__FUl
/* 80A76520  2C 03 00 00 */	cmpwi r3, 0
/* 80A76524  41 82 00 20 */	beq lbl_80A76544
/* 80A76528  80 7E 0C 18 */	lwz r3, 0xc18(r30)
/* 80A7652C  80 1E 0C 1C */	lwz r0, 0xc1c(r30)
/* 80A76530  90 7F 16 10 */	stw r3, 0x1610(r31)
/* 80A76534  90 1F 16 14 */	stw r0, 0x1614(r31)
/* 80A76538  80 1E 0C 20 */	lwz r0, 0xc20(r30)
/* 80A7653C  90 1F 16 18 */	stw r0, 0x1618(r31)
/* 80A76540  48 00 00 70 */	b lbl_80A765B0
lbl_80A76544:
/* 80A76544  80 7E 0C 24 */	lwz r3, 0xc24(r30)
/* 80A76548  80 1E 0C 28 */	lwz r0, 0xc28(r30)
/* 80A7654C  90 7F 16 10 */	stw r3, 0x1610(r31)
/* 80A76550  90 1F 16 14 */	stw r0, 0x1614(r31)
/* 80A76554  80 1E 0C 2C */	lwz r0, 0xc2c(r30)
/* 80A76558  90 1F 16 18 */	stw r0, 0x1618(r31)
/* 80A7655C  48 00 00 54 */	b lbl_80A765B0
lbl_80A76560:
/* 80A76560  80 7E 0C 30 */	lwz r3, 0xc30(r30)
/* 80A76564  80 1E 0C 34 */	lwz r0, 0xc34(r30)
/* 80A76568  90 7F 16 10 */	stw r3, 0x1610(r31)
/* 80A7656C  90 1F 16 14 */	stw r0, 0x1614(r31)
/* 80A76570  80 1E 0C 38 */	lwz r0, 0xc38(r30)
/* 80A76574  90 1F 16 18 */	stw r0, 0x1618(r31)
/* 80A76578  48 00 00 38 */	b lbl_80A765B0
lbl_80A7657C:
/* 80A7657C  80 7E 0C 3C */	lwz r3, 0xc3c(r30)
/* 80A76580  80 1E 0C 40 */	lwz r0, 0xc40(r30)
/* 80A76584  90 7F 16 10 */	stw r3, 0x1610(r31)
/* 80A76588  90 1F 16 14 */	stw r0, 0x1614(r31)
/* 80A7658C  80 1E 0C 44 */	lwz r0, 0xc44(r30)
/* 80A76590  90 1F 16 18 */	stw r0, 0x1618(r31)
/* 80A76594  48 00 00 1C */	b lbl_80A765B0
lbl_80A76598:
/* 80A76598  80 7E 0C 48 */	lwz r3, 0xc48(r30)
/* 80A7659C  80 1E 0C 4C */	lwz r0, 0xc4c(r30)
/* 80A765A0  90 7F 16 10 */	stw r3, 0x1610(r31)
/* 80A765A4  90 1F 16 14 */	stw r0, 0x1614(r31)
/* 80A765A8  80 1E 0C 50 */	lwz r0, 0xc50(r30)
/* 80A765AC  90 1F 16 18 */	stw r0, 0x1618(r31)
lbl_80A765B0:
/* 80A765B0  38 60 00 01 */	li r3, 1
/* 80A765B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80A765B8  83 C1 00 08 */	lwz r30, 8(r1)
/* 80A765BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A765C0  7C 08 03 A6 */	mtlr r0
/* 80A765C4  38 21 00 10 */	addi r1, r1, 0x10
/* 80A765C8  4E 80 00 20 */	blr 
