lbl_80C1437C:
/* 80C1437C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80C14380  A8 03 06 4E */	lha r0, 0x64e(r3)
/* 80C14384  3C 80 80 C1 */	lis r4, lit_3891@ha /* 0x80C149E8@ha */
/* 80C14388  C8 44 49 E8 */	lfd f2, lit_3891@l(r4)  /* 0x80C149E8@l */
/* 80C1438C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80C14390  90 01 00 0C */	stw r0, 0xc(r1)
/* 80C14394  3C A0 43 30 */	lis r5, 0x4330
/* 80C14398  90 A1 00 08 */	stw r5, 8(r1)
/* 80C1439C  C8 01 00 08 */	lfd f0, 8(r1)
/* 80C143A0  EC 00 10 28 */	fsubs f0, f0, f2
/* 80C143A4  D0 03 06 58 */	stfs f0, 0x658(r3)
/* 80C143A8  3C 80 80 C1 */	lis r4, lit_3712@ha /* 0x80C149E4@ha */
/* 80C143AC  C0 24 49 E4 */	lfs f1, lit_3712@l(r4)  /* 0x80C149E4@l */
/* 80C143B0  D0 23 06 54 */	stfs f1, 0x654(r3)
/* 80C143B4  38 80 00 00 */	li r4, 0
/* 80C143B8  98 83 06 4D */	stb r4, 0x64d(r3)
/* 80C143BC  A8 03 06 BE */	lha r0, 0x6be(r3)
/* 80C143C0  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80C143C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C143C8  90 A1 00 10 */	stw r5, 0x10(r1)
/* 80C143CC  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80C143D0  EC 00 10 28 */	fsubs f0, f0, f2
/* 80C143D4  D0 03 06 C8 */	stfs f0, 0x6c8(r3)
/* 80C143D8  D0 23 06 C4 */	stfs f1, 0x6c4(r3)
/* 80C143DC  98 83 06 BD */	stb r4, 0x6bd(r3)
/* 80C143E0  A8 03 05 FE */	lha r0, 0x5fe(r3)
/* 80C143E4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80C143E8  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80C143EC  90 A1 00 18 */	stw r5, 0x18(r1)
/* 80C143F0  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 80C143F4  EC 00 10 28 */	fsubs f0, f0, f2
/* 80C143F8  D0 03 06 08 */	stfs f0, 0x608(r3)
/* 80C143FC  D0 23 06 04 */	stfs f1, 0x604(r3)
/* 80C14400  98 83 05 FD */	stb r4, 0x5fd(r3)
/* 80C14404  38 00 00 03 */	li r0, 3
/* 80C14408  98 03 06 F2 */	stb r0, 0x6f2(r3)
/* 80C1440C  38 21 00 20 */	addi r1, r1, 0x20
/* 80C14410  4E 80 00 20 */	blr 
