lbl_808172F8:
/* 808172F8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 808172FC  7C 08 02 A6 */	mflr r0
/* 80817300  90 01 00 24 */	stw r0, 0x24(r1)
/* 80817304  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80817308  7C 7F 1B 78 */	mr r31, r3
/* 8081730C  88 03 07 22 */	lbz r0, 0x722(r3)
/* 80817310  28 00 00 00 */	cmplwi r0, 0
/* 80817314  40 82 00 88 */	bne lbl_8081739C
/* 80817318  80 1F 06 B4 */	lwz r0, 0x6b4(r31)
/* 8081731C  2C 00 00 05 */	cmpwi r0, 5
/* 80817320  40 82 00 7C */	bne lbl_8081739C
/* 80817324  80 1F 06 B8 */	lwz r0, 0x6b8(r31)
/* 80817328  2C 00 00 03 */	cmpwi r0, 3
/* 8081732C  41 80 00 70 */	blt lbl_8081739C
/* 80817330  2C 00 00 07 */	cmpwi r0, 7
/* 80817334  41 81 00 68 */	bgt lbl_8081739C
/* 80817338  C0 5F 04 D4 */	lfs f2, 0x4d4(r31)
/* 8081733C  C0 3F 06 CC */	lfs f1, 0x6cc(r31)
/* 80817340  3C 60 80 82 */	lis r3, lit_4343@ha /* 0x80821918@ha */
/* 80817344  C0 03 19 18 */	lfs f0, lit_4343@l(r3)  /* 0x80821918@l */
/* 80817348  EC 21 00 28 */	fsubs f1, f1, f0
/* 8081734C  3C 60 80 82 */	lis r3, lit_4291@ha /* 0x80821910@ha */
/* 80817350  C0 03 19 10 */	lfs f0, lit_4291@l(r3)  /* 0x80821910@l */
/* 80817354  EC 01 00 28 */	fsubs f0, f1, f0
/* 80817358  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8081735C  40 81 00 40 */	ble lbl_8081739C
/* 80817360  3C 60 00 07 */	lis r3, 0x0007 /* 0x000702C3@ha */
/* 80817364  38 03 02 C3 */	addi r0, r3, 0x02C3 /* 0x000702C3@l */
/* 80817368  90 01 00 08 */	stw r0, 8(r1)
/* 8081736C  38 7F 05 C4 */	addi r3, r31, 0x5c4
/* 80817370  38 81 00 08 */	addi r4, r1, 8
/* 80817374  38 A0 00 00 */	li r5, 0
/* 80817378  38 C0 FF FF */	li r6, -1
/* 8081737C  81 9F 05 C4 */	lwz r12, 0x5c4(r31)
/* 80817380  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80817384  7D 89 03 A6 */	mtctr r12
/* 80817388  4E 80 04 21 */	bctrl 
/* 8081738C  38 00 00 01 */	li r0, 1
/* 80817390  98 1F 07 22 */	stb r0, 0x722(r31)
/* 80817394  38 00 00 0A */	li r0, 0xa
/* 80817398  98 1F 07 23 */	stb r0, 0x723(r31)
lbl_8081739C:
/* 8081739C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 808173A0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 808173A4  7C 08 03 A6 */	mtlr r0
/* 808173A8  38 21 00 20 */	addi r1, r1, 0x20
/* 808173AC  4E 80 00 20 */	blr 
