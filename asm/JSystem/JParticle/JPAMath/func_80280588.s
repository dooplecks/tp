lbl_80280588:
/* 80280588  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8028058C  7C 08 02 A6 */	mflr r0
/* 80280590  90 01 00 34 */	stw r0, 0x34(r1)
/* 80280594  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80280598  F3 E1 00 28 */	psq_st f31, 40(r1), 0, 0 /* qr0 */
/* 8028059C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802805A0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802805A4  7C 7E 1B 78 */	mr r30, r3
/* 802805A8  7C 9F 23 78 */	mr r31, r4
/* 802805AC  C0 03 00 00 */	lfs f0, 0(r3)
/* 802805B0  FC 20 00 50 */	fneg f1, f0
/* 802805B4  C0 03 00 04 */	lfs f0, 4(r3)
/* 802805B8  D0 01 00 08 */	stfs f0, 8(r1)
/* 802805BC  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802805C0  C0 02 B9 BC */	lfs f0, lit_2238(r2)
/* 802805C4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802805C8  38 61 00 08 */	addi r3, r1, 8
/* 802805CC  48 0C 6B 85 */	bl PSVECMag
/* 802805D0  C0 42 B9 C0 */	lfs f2, lit_2239(r2)
/* 802805D4  3C 60 80 45 */	lis r3, __float_epsilon@ha /* 0x80450AEC@ha */
/* 802805D8  C0 03 0A EC */	lfs f0, __float_epsilon@l(r3)  /* 0x80450AEC@l */
/* 802805DC  EC 02 00 32 */	fmuls f0, f2, f0
/* 802805E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802805E4  4C 40 13 82 */	cror 2, 0, 2
/* 802805E8  40 82 00 18 */	bne lbl_80280600
/* 802805EC  C0 02 B9 BC */	lfs f0, lit_2238(r2)
/* 802805F0  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802805F4  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802805F8  D0 01 00 08 */	stfs f0, 8(r1)
/* 802805FC  48 00 00 24 */	b lbl_80280620
lbl_80280600:
/* 80280600  C0 02 B9 B8 */	lfs f0, lit_2193(r2)
/* 80280604  EF E0 08 24 */	fdivs f31, f0, f1
/* 80280608  E0 01 00 08 */	psq_l f0, 8(r1), 0, 0 /* qr0 */
/* 8028060C  E0 41 80 10 */	psq_l f2, 16(r1), 1, 0 /* qr0 */
/* 80280610  10 00 07 D8 */	ps_muls0 f0, f0, f31
/* 80280614  F0 01 00 08 */	psq_st f0, 8(r1), 0, 0 /* qr0 */
/* 80280618  10 02 07 D8 */	ps_muls0 f0, f2, f31
/* 8028061C  F0 01 80 10 */	psq_st f0, 16(r1), 1, 0 /* qr0 */
lbl_80280620:
/* 80280620  C0 01 00 08 */	lfs f0, 8(r1)
/* 80280624  EC A0 00 32 */	fmuls f5, f0, f0
/* 80280628  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 8028062C  EC C3 00 F2 */	fmuls f6, f3, f3
/* 80280630  EC E0 00 72 */	fmuls f7, f0, f1
/* 80280634  ED 03 00 72 */	fmuls f8, f3, f1
/* 80280638  C0 42 B9 B8 */	lfs f2, lit_2193(r2)
/* 8028063C  C0 9E 00 08 */	lfs f4, 8(r30)
/* 80280640  EC 22 20 28 */	fsubs f1, f2, f4
/* 80280644  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80280648  EC 61 00 32 */	fmuls f3, f1, f0
/* 8028064C  EC 02 28 28 */	fsubs f0, f2, f5
/* 80280650  EC 04 00 32 */	fmuls f0, f4, f0
/* 80280654  EC 05 00 2A */	fadds f0, f5, f0
/* 80280658  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8028065C  D0 7F 00 04 */	stfs f3, 4(r31)
/* 80280660  FC 00 40 50 */	fneg f0, f8
/* 80280664  D0 1F 00 08 */	stfs f0, 8(r31)
/* 80280668  C0 22 B9 BC */	lfs f1, lit_2238(r2)
/* 8028066C  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 80280670  D0 7F 00 10 */	stfs f3, 0x10(r31)
/* 80280674  EC 02 30 28 */	fsubs f0, f2, f6
/* 80280678  EC 04 00 32 */	fmuls f0, f4, f0
/* 8028067C  EC 06 00 2A */	fadds f0, f6, f0
/* 80280680  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 80280684  D0 FF 00 18 */	stfs f7, 0x18(r31)
/* 80280688  D0 3F 00 1C */	stfs f1, 0x1c(r31)
/* 8028068C  D1 1F 00 20 */	stfs f8, 0x20(r31)
/* 80280690  FC 00 38 50 */	fneg f0, f7
/* 80280694  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 80280698  D0 9F 00 28 */	stfs f4, 0x28(r31)
/* 8028069C  D0 3F 00 2C */	stfs f1, 0x2c(r31)
/* 802806A0  E3 E1 00 28 */	psq_l f31, 40(r1), 0, 0 /* qr0 */
/* 802806A4  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 802806A8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802806AC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802806B0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802806B4  7C 08 03 A6 */	mtlr r0
/* 802806B8  38 21 00 30 */	addi r1, r1, 0x30
/* 802806BC  4E 80 00 20 */	blr 
