lbl_8026E570:
/* 8026E570  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8026E574  7C 08 02 A6 */	mflr r0
/* 8026E578  90 01 00 24 */	stw r0, 0x24(r1)
/* 8026E57C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8026E580  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8026E584  7C 7E 1B 78 */	mr r30, r3
/* 8026E588  7C 9F 23 78 */	mr r31, r4
/* 8026E58C  C0 03 00 00 */	lfs f0, 0(r3)
/* 8026E590  EC 20 00 32 */	fmuls f1, f0, f0
/* 8026E594  C0 03 00 08 */	lfs f0, 8(r3)
/* 8026E598  EC 00 00 32 */	fmuls f0, f0, f0
/* 8026E59C  EC 41 00 2A */	fadds f2, f1, f0
/* 8026E5A0  C0 02 B7 18 */	lfs f0, lit_2256(r2)
/* 8026E5A4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8026E5A8  40 81 00 58 */	ble lbl_8026E600
/* 8026E5AC  FC 00 10 34 */	frsqrte f0, f2
/* 8026E5B0  C8 82 B7 20 */	lfd f4, lit_2257(r2)
/* 8026E5B4  FC 24 00 32 */	fmul f1, f4, f0
/* 8026E5B8  C8 62 B7 28 */	lfd f3, lit_2258(r2)
/* 8026E5BC  FC 00 00 32 */	fmul f0, f0, f0
/* 8026E5C0  FC 02 00 32 */	fmul f0, f2, f0
/* 8026E5C4  FC 03 00 28 */	fsub f0, f3, f0
/* 8026E5C8  FC 01 00 32 */	fmul f0, f1, f0
/* 8026E5CC  FC 24 00 32 */	fmul f1, f4, f0
/* 8026E5D0  FC 00 00 32 */	fmul f0, f0, f0
/* 8026E5D4  FC 02 00 32 */	fmul f0, f2, f0
/* 8026E5D8  FC 03 00 28 */	fsub f0, f3, f0
/* 8026E5DC  FC 01 00 32 */	fmul f0, f1, f0
/* 8026E5E0  FC 24 00 32 */	fmul f1, f4, f0
/* 8026E5E4  FC 00 00 32 */	fmul f0, f0, f0
/* 8026E5E8  FC 02 00 32 */	fmul f0, f2, f0
/* 8026E5EC  FC 03 00 28 */	fsub f0, f3, f0
/* 8026E5F0  FC 01 00 32 */	fmul f0, f1, f0
/* 8026E5F4  FC 42 00 32 */	fmul f2, f2, f0
/* 8026E5F8  FC 40 10 18 */	frsp f2, f2
/* 8026E5FC  48 00 00 88 */	b lbl_8026E684
lbl_8026E600:
/* 8026E600  C8 02 B7 30 */	lfd f0, lit_2259(r2)
/* 8026E604  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8026E608  40 80 00 10 */	bge lbl_8026E618
/* 8026E60C  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 8026E610  C0 43 0A E0 */	lfs f2, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 8026E614  48 00 00 70 */	b lbl_8026E684
lbl_8026E618:
/* 8026E618  D0 41 00 08 */	stfs f2, 8(r1)
/* 8026E61C  80 81 00 08 */	lwz r4, 8(r1)
/* 8026E620  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 8026E624  3C 00 7F 80 */	lis r0, 0x7f80
/* 8026E628  7C 03 00 00 */	cmpw r3, r0
/* 8026E62C  41 82 00 14 */	beq lbl_8026E640
/* 8026E630  40 80 00 40 */	bge lbl_8026E670
/* 8026E634  2C 03 00 00 */	cmpwi r3, 0
/* 8026E638  41 82 00 20 */	beq lbl_8026E658
/* 8026E63C  48 00 00 34 */	b lbl_8026E670
lbl_8026E640:
/* 8026E640  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8026E644  41 82 00 0C */	beq lbl_8026E650
/* 8026E648  38 00 00 01 */	li r0, 1
/* 8026E64C  48 00 00 28 */	b lbl_8026E674
lbl_8026E650:
/* 8026E650  38 00 00 02 */	li r0, 2
/* 8026E654  48 00 00 20 */	b lbl_8026E674
lbl_8026E658:
/* 8026E658  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8026E65C  41 82 00 0C */	beq lbl_8026E668
/* 8026E660  38 00 00 05 */	li r0, 5
/* 8026E664  48 00 00 10 */	b lbl_8026E674
lbl_8026E668:
/* 8026E668  38 00 00 03 */	li r0, 3
/* 8026E66C  48 00 00 08 */	b lbl_8026E674
lbl_8026E670:
/* 8026E670  38 00 00 04 */	li r0, 4
lbl_8026E674:
/* 8026E674  2C 00 00 01 */	cmpwi r0, 1
/* 8026E678  40 82 00 0C */	bne lbl_8026E684
/* 8026E67C  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 8026E680  C0 43 0A E0 */	lfs f2, __float_nan@l(r3)  /* 0x80450AE0@l */
lbl_8026E684:
/* 8026E684  C0 3E 00 04 */	lfs f1, 4(r30)
/* 8026E688  4B FF 8F ED */	bl cM_atan2s__Fff
/* 8026E68C  7C 03 00 D0 */	neg r0, r3
/* 8026E690  B0 1F 00 00 */	sth r0, 0(r31)
/* 8026E694  C0 3E 00 00 */	lfs f1, 0(r30)
/* 8026E698  C0 5E 00 08 */	lfs f2, 8(r30)
/* 8026E69C  4B FF 8F D9 */	bl cM_atan2s__Fff
/* 8026E6A0  B0 7F 00 02 */	sth r3, 2(r31)
/* 8026E6A4  38 00 00 00 */	li r0, 0
/* 8026E6A8  B0 1F 00 04 */	sth r0, 4(r31)
/* 8026E6AC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8026E6B0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8026E6B4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8026E6B8  7C 08 03 A6 */	mtlr r0
/* 8026E6BC  38 21 00 20 */	addi r1, r1, 0x20
/* 8026E6C0  4E 80 00 20 */	blr 
