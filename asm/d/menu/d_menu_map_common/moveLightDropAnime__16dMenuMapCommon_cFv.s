lbl_801C4600:
/* 801C4600  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801C4604  38 C0 00 00 */	li r6, 0
/* 801C4608  C0 23 0C 88 */	lfs f1, 0xc88(r3)
/* 801C460C  C0 02 A6 DC */	lfs f0, lit_3882(r2)
/* 801C4610  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801C4614  40 81 00 08 */	ble lbl_801C461C
/* 801C4618  38 C0 00 01 */	li r6, 1
lbl_801C461C:
/* 801C461C  3C 80 80 43 */	lis r4, g_fmapHIO@ha /* 0x8042FC60@ha */
/* 801C4620  38 A4 FC 60 */	addi r5, r4, g_fmapHIO@l /* 0x8042FC60@l */
/* 801C4624  A8 E5 04 84 */	lha r7, 0x484(r5)
/* 801C4628  54 C0 10 3A */	slwi r0, r6, 2
/* 801C462C  7C 85 02 14 */	add r4, r5, r0
/* 801C4630  C0 84 04 74 */	lfs f4, 0x474(r4)
/* 801C4634  C0 A4 04 7C */	lfs f5, 0x47c(r4)
/* 801C4638  7C 85 32 14 */	add r4, r5, r6
/* 801C463C  88 C4 04 86 */	lbz r6, 0x486(r4)
/* 801C4640  89 04 04 88 */	lbz r8, 0x488(r4)
/* 801C4644  A8 83 0C 74 */	lha r4, 0xc74(r3)
/* 801C4648  38 04 00 01 */	addi r0, r4, 1
/* 801C464C  B0 03 0C 74 */	sth r0, 0xc74(r3)
/* 801C4650  A8 03 0C 74 */	lha r0, 0xc74(r3)
/* 801C4654  7C 00 38 00 */	cmpw r0, r7
/* 801C4658  41 80 00 0C */	blt lbl_801C4664
/* 801C465C  7C 07 00 50 */	subf r0, r7, r0
/* 801C4660  B0 03 0C 74 */	sth r0, 0xc74(r3)
lbl_801C4664:
/* 801C4664  A8 03 0C 74 */	lha r0, 0xc74(r3)
/* 801C4668  C8 62 A6 F8 */	lfd f3, lit_4119(r2)
/* 801C466C  6C 05 80 00 */	xoris r5, r0, 0x8000
/* 801C4670  90 A1 00 0C */	stw r5, 0xc(r1)
/* 801C4674  3C 80 43 30 */	lis r4, 0x4330
/* 801C4678  90 81 00 08 */	stw r4, 8(r1)
/* 801C467C  C8 01 00 08 */	lfd f0, 8(r1)
/* 801C4680  EC 40 18 28 */	fsubs f2, f0, f3
/* 801C4684  6C E0 80 00 */	xoris r0, r7, 0x8000
/* 801C4688  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C468C  90 81 00 10 */	stw r4, 0x10(r1)
/* 801C4690  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 801C4694  EC 20 18 28 */	fsubs f1, f0, f3
/* 801C4698  C0 02 A6 E8 */	lfs f0, lit_4012(r2)
/* 801C469C  EC 21 00 32 */	fmuls f1, f1, f0
/* 801C46A0  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 801C46A4  4C 40 13 82 */	cror 2, 0, 2
/* 801C46A8  40 82 00 20 */	bne lbl_801C46C8
/* 801C46AC  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 801C46B0  90 81 00 18 */	stw r4, 0x18(r1)
/* 801C46B4  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 801C46B8  EC 00 18 28 */	fsubs f0, f0, f3
/* 801C46BC  EC 01 00 28 */	fsubs f0, f1, f0
/* 801C46C0  EC 60 08 24 */	fdivs f3, f0, f1
/* 801C46C4  48 00 00 1C */	b lbl_801C46E0
lbl_801C46C8:
/* 801C46C8  90 A1 00 24 */	stw r5, 0x24(r1)
/* 801C46CC  90 81 00 20 */	stw r4, 0x20(r1)
/* 801C46D0  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 801C46D4  EC 00 18 28 */	fsubs f0, f0, f3
/* 801C46D8  EC 00 08 28 */	fsubs f0, f0, f1
/* 801C46DC  EC 60 08 24 */	fdivs f3, f0, f1
lbl_801C46E0:
/* 801C46E0  C8 22 A7 00 */	lfd f1, lit_4140(r2)
/* 801C46E4  90 C1 00 2C */	stw r6, 0x2c(r1)
/* 801C46E8  3C 80 43 30 */	lis r4, 0x4330
/* 801C46EC  90 81 00 28 */	stw r4, 0x28(r1)
/* 801C46F0  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 801C46F4  EC 40 08 28 */	fsubs f2, f0, f1
/* 801C46F8  7C 06 40 50 */	subf r0, r6, r8
/* 801C46FC  C8 22 A6 F8 */	lfd f1, lit_4119(r2)
/* 801C4700  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 801C4704  90 01 00 34 */	stw r0, 0x34(r1)
/* 801C4708  90 81 00 30 */	stw r4, 0x30(r1)
/* 801C470C  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 801C4710  EC 00 08 28 */	fsubs f0, f0, f1
/* 801C4714  EC 03 00 32 */	fmuls f0, f3, f0
/* 801C4718  EC 02 00 2A */	fadds f0, f2, f0
/* 801C471C  D0 03 0C 80 */	stfs f0, 0xc80(r3)
/* 801C4720  EC 05 20 28 */	fsubs f0, f5, f4
/* 801C4724  EC 03 00 32 */	fmuls f0, f3, f0
/* 801C4728  EC 04 00 2A */	fadds f0, f4, f0
/* 801C472C  D0 03 0C 7C */	stfs f0, 0xc7c(r3)
/* 801C4730  38 21 00 40 */	addi r1, r1, 0x40
/* 801C4734  4E 80 00 20 */	blr 
