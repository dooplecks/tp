lbl_8027B33C:
/* 8027B33C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8027B340  80 C3 00 00 */	lwz r6, 0(r3)
/* 8027B344  80 86 00 E8 */	lwz r4, 0xe8(r6)
/* 8027B348  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 8027B34C  80 84 00 00 */	lwz r4, 0(r4)
/* 8027B350  80 04 00 08 */	lwz r0, 8(r4)
/* 8027B354  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8027B358  41 82 00 54 */	beq lbl_8027B3AC
/* 8027B35C  80 A3 00 44 */	lwz r5, 0x44(r3)
/* 8027B360  54 A4 80 1E */	slwi r4, r5, 0x10
/* 8027B364  80 03 00 40 */	lwz r0, 0x40(r3)
/* 8027B368  7C 04 03 D6 */	divw r0, r4, r0
/* 8027B36C  7C 00 07 34 */	extsh r0, r0
/* 8027B370  C8 22 B9 20 */	lfd f1, lit_2321(r2)
/* 8027B374  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8027B378  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027B37C  3C 00 43 30 */	lis r0, 0x4330
/* 8027B380  90 01 00 10 */	stw r0, 0x10(r1)
/* 8027B384  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8027B388  EC 20 08 28 */	fsubs f1, f0, f1
/* 8027B38C  C0 03 00 3C */	lfs f0, 0x3c(r3)
/* 8027B390  EC 01 00 32 */	fmuls f0, f1, f0
/* 8027B394  FC 00 00 1E */	fctiwz f0, f0
/* 8027B398  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8027B39C  80 E1 00 1C */	lwz r7, 0x1c(r1)
/* 8027B3A0  38 05 00 01 */	addi r0, r5, 1
/* 8027B3A4  90 03 00 44 */	stw r0, 0x44(r3)
/* 8027B3A8  48 00 00 58 */	b lbl_8027B400
lbl_8027B3AC:
/* 8027B3AC  80 A6 00 C4 */	lwz r5, 0xc4(r6)
/* 8027B3B0  3C 80 00 19 */	lis r4, 0x0019 /* 0x0019660D@ha */
/* 8027B3B4  38 04 66 0D */	addi r0, r4, 0x660D /* 0x0019660D@l */
/* 8027B3B8  7C 85 01 D6 */	mullw r4, r5, r0
/* 8027B3BC  3C 84 3C 6F */	addis r4, r4, 0x3c6f
/* 8027B3C0  38 04 F3 5F */	addi r0, r4, -3233
/* 8027B3C4  90 06 00 C4 */	stw r0, 0xc4(r6)
/* 8027B3C8  54 00 84 3E */	srwi r0, r0, 0x10
/* 8027B3CC  7C 00 07 34 */	extsh r0, r0
/* 8027B3D0  C0 43 00 3C */	lfs f2, 0x3c(r3)
/* 8027B3D4  C8 22 B9 20 */	lfd f1, lit_2321(r2)
/* 8027B3D8  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8027B3DC  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8027B3E0  3C 00 43 30 */	lis r0, 0x4330
/* 8027B3E4  90 01 00 18 */	stw r0, 0x18(r1)
/* 8027B3E8  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8027B3EC  EC 00 08 28 */	fsubs f0, f0, f1
/* 8027B3F0  EC 02 00 32 */	fmuls f0, f2, f0
/* 8027B3F4  FC 00 00 1E */	fctiwz f0, f0
/* 8027B3F8  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8027B3FC  80 E1 00 14 */	lwz r7, 0x14(r1)
lbl_8027B400:
/* 8027B400  80 C3 00 00 */	lwz r6, 0(r3)
/* 8027B404  80 A6 00 C4 */	lwz r5, 0xc4(r6)
/* 8027B408  3C 80 00 19 */	lis r4, 0x0019 /* 0x0019660D@ha */
/* 8027B40C  38 04 66 0D */	addi r0, r4, 0x660D /* 0x0019660D@l */
/* 8027B410  7C 85 01 D6 */	mullw r4, r5, r0
/* 8027B414  3C 84 3C 6F */	addis r4, r4, 0x3c6f
/* 8027B418  38 04 F3 5F */	addi r0, r4, -3233
/* 8027B41C  90 06 00 C4 */	stw r0, 0xc4(r6)
/* 8027B420  54 00 BA 7E */	srwi r0, r0, 9
/* 8027B424  64 00 3F 80 */	oris r0, r0, 0x3f80
/* 8027B428  90 01 00 08 */	stw r0, 8(r1)
/* 8027B42C  C0 01 00 08 */	lfs f0, 8(r1)
/* 8027B430  C0 22 B9 14 */	lfs f1, lit_2288(r2)
/* 8027B434  EC 00 08 28 */	fsubs f0, f0, f1
/* 8027B438  FC 60 00 90 */	fmr f3, f0
/* 8027B43C  80 83 00 00 */	lwz r4, 0(r3)
/* 8027B440  80 84 00 E8 */	lwz r4, 0xe8(r4)
/* 8027B444  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 8027B448  80 84 00 00 */	lwz r4, 0(r4)
/* 8027B44C  80 04 00 08 */	lwz r0, 8(r4)
/* 8027B450  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8027B454  41 82 00 0C */	beq lbl_8027B460
/* 8027B458  EC 00 00 32 */	fmuls f0, f0, f0
/* 8027B45C  EC 61 00 28 */	fsubs f3, f1, f0
lbl_8027B460:
/* 8027B460  C0 23 00 34 */	lfs f1, 0x34(r3)
/* 8027B464  C0 43 00 38 */	lfs f2, 0x38(r3)
/* 8027B468  C0 02 B9 14 */	lfs f0, lit_2288(r2)
/* 8027B46C  EC 00 10 28 */	fsubs f0, f0, f2
/* 8027B470  EC 03 00 32 */	fmuls f0, f3, f0
/* 8027B474  EC 02 00 2A */	fadds f0, f2, f0
/* 8027B478  EC 41 00 32 */	fmuls f2, f1, f0
/* 8027B47C  3C 80 80 44 */	lis r4, sincosTable___5JMath@ha /* 0x80439A20@ha */
/* 8027B480  38 A4 9A 20 */	addi r5, r4, sincosTable___5JMath@l /* 0x80439A20@l */
/* 8027B484  54 E0 04 38 */	rlwinm r0, r7, 0, 0x10, 0x1c
/* 8027B488  7C 85 02 14 */	add r4, r5, r0
/* 8027B48C  C0 04 00 04 */	lfs f0, 4(r4)
/* 8027B490  EC 22 00 32 */	fmuls f1, f2, f0
/* 8027B494  7C 05 04 2E */	lfsx f0, r5, r0
/* 8027B498  EC 02 00 32 */	fmuls f0, f2, f0
/* 8027B49C  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8027B4A0  C0 42 B9 10 */	lfs f2, lit_2287(r2)
/* 8027B4A4  D0 43 00 14 */	stfs f2, 0x14(r3)
/* 8027B4A8  D0 23 00 18 */	stfs f1, 0x18(r3)
/* 8027B4AC  E0 23 00 10 */	psq_l f1, 16(r3), 0, 0 /* qr0 */
/* 8027B4B0  E0 03 01 14 */	psq_l f0, 276(r3), 0, 0 /* qr0 */
/* 8027B4B4  10 01 00 32 */	ps_mul f0, f1, f0
/* 8027B4B8  F0 03 00 1C */	psq_st f0, 28(r3), 0, 0 /* qr0 */
/* 8027B4BC  C0 23 00 18 */	lfs f1, 0x18(r3)
/* 8027B4C0  C0 03 01 1C */	lfs f0, 0x11c(r3)
/* 8027B4C4  EC 01 00 32 */	fmuls f0, f1, f0
/* 8027B4C8  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 8027B4CC  C0 23 00 18 */	lfs f1, 0x18(r3)
/* 8027B4D0  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 8027B4D4  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 8027B4D8  D0 43 00 2C */	stfs f2, 0x2c(r3)
/* 8027B4DC  D0 23 00 30 */	stfs f1, 0x30(r3)
/* 8027B4E0  38 21 00 20 */	addi r1, r1, 0x20
/* 8027B4E4  4E 80 00 20 */	blr 
