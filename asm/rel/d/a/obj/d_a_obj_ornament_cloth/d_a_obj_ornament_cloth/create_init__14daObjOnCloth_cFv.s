lbl_80595038:
/* 80595038  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8059503C  7C 08 02 A6 */	mflr r0
/* 80595040  90 01 00 24 */	stw r0, 0x24(r1)
/* 80595044  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80595048  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8059504C  7C 7E 1B 78 */	mr r30, r3
/* 80595050  3C 80 80 59 */	lis r4, M_attr__14daObjOnCloth_c@ha /* 0x80595CB4@ha */
/* 80595054  3B E4 5C B4 */	addi r31, r4, M_attr__14daObjOnCloth_c@l /* 0x80595CB4@l */
/* 80595058  C0 3F 00 30 */	lfs f1, 0x30(r31)
/* 8059505C  C0 5F 00 34 */	lfs f2, 0x34(r31)
/* 80595060  FC 60 08 90 */	fmr f3, f1
/* 80595064  C0 9F 00 38 */	lfs f4, 0x38(r31)
/* 80595068  C0 BF 00 3C */	lfs f5, 0x3c(r31)
/* 8059506C  FC C0 20 90 */	fmr f6, f4
/* 80595070  4B A8 54 D9 */	bl fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff
/* 80595074  38 DE 05 A8 */	addi r6, r30, 0x5a8
/* 80595078  38 E0 00 00 */	li r7, 0
/* 8059507C  38 7F 00 00 */	addi r3, r31, 0
/* 80595080  C8 9F 00 48 */	lfd f4, 0x48(r31)
/* 80595084  3C 80 43 30 */	lis r4, 0x4330
/* 80595088  C0 63 00 04 */	lfs f3, 4(r3)
/* 8059508C  3C 60 80 44 */	lis r3, sincosTable___5JMath@ha /* 0x80439A20@ha */
/* 80595090  38 63 9A 20 */	addi r3, r3, sincosTable___5JMath@l /* 0x80439A20@l */
/* 80595094  C0 5F 00 40 */	lfs f2, 0x40(r31)
/* 80595098  C0 3F 00 44 */	lfs f1, 0x44(r31)
/* 8059509C  38 00 00 03 */	li r0, 3
/* 805950A0  7C 09 03 A6 */	mtctr r0
lbl_805950A4:
/* 805950A4  C0 1E 04 D0 */	lfs f0, 0x4d0(r30)
/* 805950A8  D0 06 00 00 */	stfs f0, 0(r6)
/* 805950AC  C0 1E 04 D4 */	lfs f0, 0x4d4(r30)
/* 805950B0  D0 06 00 04 */	stfs f0, 4(r6)
/* 805950B4  C0 1E 04 D8 */	lfs f0, 0x4d8(r30)
/* 805950B8  D0 06 00 08 */	stfs f0, 8(r6)
/* 805950BC  C0 A6 00 04 */	lfs f5, 4(r6)
/* 805950C0  38 07 00 01 */	addi r0, r7, 1
/* 805950C4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 805950C8  90 01 00 0C */	stw r0, 0xc(r1)
/* 805950CC  90 81 00 08 */	stw r4, 8(r1)
/* 805950D0  C8 01 00 08 */	lfd f0, 8(r1)
/* 805950D4  EC 00 20 28 */	fsubs f0, f0, f4
/* 805950D8  EC 00 00 F2 */	fmuls f0, f0, f3
/* 805950DC  EC 05 00 2A */	fadds f0, f5, f0
/* 805950E0  D0 06 00 04 */	stfs f0, 4(r6)
/* 805950E4  C0 06 00 00 */	lfs f0, 0(r6)
/* 805950E8  D0 06 00 0C */	stfs f0, 0xc(r6)
/* 805950EC  C0 06 00 04 */	lfs f0, 4(r6)
/* 805950F0  D0 06 00 10 */	stfs f0, 0x10(r6)
/* 805950F4  C0 06 00 08 */	lfs f0, 8(r6)
/* 805950F8  D0 06 00 14 */	stfs f0, 0x14(r6)
/* 805950FC  A8 1E 04 E6 */	lha r0, 0x4e6(r30)
/* 80595100  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 80595104  7C A3 02 14 */	add r5, r3, r0
/* 80595108  C0 A5 00 04 */	lfs f5, 4(r5)
/* 8059510C  C0 05 00 00 */	lfs f0, 0(r5)
/* 80595110  EC 02 00 32 */	fmuls f0, f2, f0
/* 80595114  D0 06 00 24 */	stfs f0, 0x24(r6)
/* 80595118  D0 26 00 28 */	stfs f1, 0x28(r6)
/* 8059511C  EC 02 01 72 */	fmuls f0, f2, f5
/* 80595120  D0 06 00 2C */	stfs f0, 0x2c(r6)
/* 80595124  38 E7 00 01 */	addi r7, r7, 1
/* 80595128  38 C6 00 38 */	addi r6, r6, 0x38
/* 8059512C  42 00 FF 78 */	bdnz lbl_805950A4
/* 80595130  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80595134  D0 1E 05 30 */	stfs f0, 0x530(r30)
/* 80595138  7F C3 F3 78 */	mr r3, r30
/* 8059513C  48 00 00 1D */	bl initBaseMtx__14daObjOnCloth_cFv
/* 80595140  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80595144  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80595148  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8059514C  7C 08 03 A6 */	mtlr r0
/* 80595150  38 21 00 20 */	addi r1, r1, 0x20
/* 80595154  4E 80 00 20 */	blr 
