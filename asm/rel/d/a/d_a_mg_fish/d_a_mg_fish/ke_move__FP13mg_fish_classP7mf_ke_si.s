lbl_80533484:
/* 80533484  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80533488  7C 08 02 A6 */	mflr r0
/* 8053348C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80533490  39 61 00 20 */	addi r11, r1, 0x20
/* 80533494  4B E2 ED 49 */	bl _savegpr_29
/* 80533498  7C 7D 1B 78 */	mr r29, r3
/* 8053349C  7C 9E 23 78 */	mr r30, r4
/* 805334A0  7C BF 2B 78 */	mr r31, r5
/* 805334A4  4B FF FD C5 */	bl ke_control__FP13mg_fish_classP7mf_ke_s
/* 805334A8  80 7D 07 FC */	lwz r3, 0x7fc(r29)
/* 805334AC  57 E0 28 34 */	slwi r0, r31, 5
/* 805334B0  7C A3 00 2E */	lwzx r5, r3, r0
/* 805334B4  7C 63 02 14 */	add r3, r3, r0
/* 805334B8  80 C3 00 04 */	lwz r6, 4(r3)
/* 805334BC  38 E0 00 00 */	li r7, 0
/* 805334C0  38 60 00 00 */	li r3, 0
/* 805334C4  38 00 00 05 */	li r0, 5
/* 805334C8  7C 09 03 A6 */	mtctr r0
lbl_805334CC:
/* 805334CC  7C 9E 1A 14 */	add r4, r30, r3
/* 805334D0  C0 04 00 00 */	lfs f0, 0(r4)
/* 805334D4  D0 05 00 00 */	stfs f0, 0(r5)
/* 805334D8  C0 04 00 04 */	lfs f0, 4(r4)
/* 805334DC  D0 05 00 04 */	stfs f0, 4(r5)
/* 805334E0  C0 04 00 08 */	lfs f0, 8(r4)
/* 805334E4  D0 05 00 08 */	stfs f0, 8(r5)
/* 805334E8  2C 07 00 03 */	cmpwi r7, 3
/* 805334EC  40 80 00 1C */	bge lbl_80533508
/* 805334F0  3C 80 80 53 */	lis r4, lit_5105@ha /* 0x80536208@ha */
/* 805334F4  C0 24 62 08 */	lfs f1, lit_5105@l(r4)  /* 0x80536208@l */
/* 805334F8  C0 1D 05 BC */	lfs f0, 0x5bc(r29)
/* 805334FC  EC 01 00 32 */	fmuls f0, f1, f0
/* 80533500  D0 06 00 00 */	stfs f0, 0(r6)
/* 80533504  48 00 00 10 */	b lbl_80533514
lbl_80533508:
/* 80533508  3C 80 80 53 */	lis r4, lit_3715@ha /* 0x80536180@ha */
/* 8053350C  C0 04 61 80 */	lfs f0, lit_3715@l(r4)  /* 0x80536180@l */
/* 80533510  D0 06 00 00 */	stfs f0, 0(r6)
lbl_80533514:
/* 80533514  38 E7 00 01 */	addi r7, r7, 1
/* 80533518  38 63 00 0C */	addi r3, r3, 0xc
/* 8053351C  38 A5 00 0C */	addi r5, r5, 0xc
/* 80533520  38 C6 00 04 */	addi r6, r6, 4
/* 80533524  42 00 FF A8 */	bdnz lbl_805334CC
/* 80533528  39 61 00 20 */	addi r11, r1, 0x20
/* 8053352C  4B E2 EC FD */	bl _restgpr_29
/* 80533530  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80533534  7C 08 03 A6 */	mtlr r0
/* 80533538  38 21 00 20 */	addi r1, r1, 0x20
/* 8053353C  4E 80 00 20 */	blr 
