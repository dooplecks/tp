lbl_8074A14C:
/* 8074A14C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8074A150  7C 08 02 A6 */	mflr r0
/* 8074A154  90 01 00 14 */	stw r0, 0x14(r1)
/* 8074A158  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8074A15C  7C 7F 1B 78 */	mr r31, r3
/* 8074A160  3C 80 80 75 */	lis r4, lit_3910@ha /* 0x8074BF3C@ha */
/* 8074A164  38 C4 BF 3C */	addi r6, r4, lit_3910@l /* 0x8074BF3C@l */
/* 8074A168  88 03 06 11 */	lbz r0, 0x611(r3)
/* 8074A16C  2C 00 00 01 */	cmpwi r0, 1
/* 8074A170  41 82 00 40 */	beq lbl_8074A1B0
/* 8074A174  40 80 00 7C */	bge lbl_8074A1F0
/* 8074A178  2C 00 00 00 */	cmpwi r0, 0
/* 8074A17C  40 80 00 08 */	bge lbl_8074A184
/* 8074A180  48 00 00 70 */	b lbl_8074A1F0
lbl_8074A184:
/* 8074A184  C0 06 00 04 */	lfs f0, 4(r6)
/* 8074A188  D0 1F 05 2C */	stfs f0, 0x52c(r31)
/* 8074A18C  38 80 00 08 */	li r4, 8
/* 8074A190  38 A0 00 00 */	li r5, 0
/* 8074A194  C0 26 00 E4 */	lfs f1, 0xe4(r6)
/* 8074A198  C0 46 00 08 */	lfs f2, 8(r6)
/* 8074A19C  4B FF 84 D9 */	bl SetAnm__8daE_PM_cFiiff
/* 8074A1A0  88 7F 06 11 */	lbz r3, 0x611(r31)
/* 8074A1A4  38 03 00 01 */	addi r0, r3, 1
/* 8074A1A8  98 1F 06 11 */	stb r0, 0x611(r31)
/* 8074A1AC  48 00 00 44 */	b lbl_8074A1F0
lbl_8074A1B0:
/* 8074A1B0  80 7F 07 04 */	lwz r3, 0x704(r31)
/* 8074A1B4  38 80 00 01 */	li r4, 1
/* 8074A1B8  88 03 00 11 */	lbz r0, 0x11(r3)
/* 8074A1BC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8074A1C0  40 82 00 18 */	bne lbl_8074A1D8
/* 8074A1C4  C0 26 00 04 */	lfs f1, 4(r6)
/* 8074A1C8  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 8074A1CC  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8074A1D0  41 82 00 08 */	beq lbl_8074A1D8
/* 8074A1D4  38 80 00 00 */	li r4, 0
lbl_8074A1D8:
/* 8074A1D8  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8074A1DC  41 82 00 14 */	beq lbl_8074A1F0
/* 8074A1E0  38 00 00 01 */	li r0, 1
/* 8074A1E4  98 1F 06 10 */	stb r0, 0x610(r31)
/* 8074A1E8  38 00 00 00 */	li r0, 0
/* 8074A1EC  98 1F 06 11 */	stb r0, 0x611(r31)
lbl_8074A1F0:
/* 8074A1F0  3C 60 80 75 */	lis r3, data_8074C3E8@ha /* 0x8074C3E8@ha */
/* 8074A1F4  A8 03 C3 E8 */	lha r0, data_8074C3E8@l(r3)  /* 0x8074C3E8@l */
/* 8074A1F8  B0 1F 06 02 */	sth r0, 0x602(r31)
/* 8074A1FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8074A200  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8074A204  7C 08 03 A6 */	mtlr r0
/* 8074A208  38 21 00 10 */	addi r1, r1, 0x10
/* 8074A20C  4E 80 00 20 */	blr 
