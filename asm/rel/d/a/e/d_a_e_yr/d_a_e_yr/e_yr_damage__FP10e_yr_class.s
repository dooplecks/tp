lbl_808260E8:
/* 808260E8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 808260EC  7C 08 02 A6 */	mflr r0
/* 808260F0  90 01 00 44 */	stw r0, 0x44(r1)
/* 808260F4  39 61 00 40 */	addi r11, r1, 0x40
/* 808260F8  4B B3 C0 E1 */	bl _savegpr_28
/* 808260FC  7C 7E 1B 78 */	mr r30, r3
/* 80826100  3C 60 80 83 */	lis r3, lit_3902@ha /* 0x80828850@ha */
/* 80826104  3B E3 88 50 */	addi r31, r3, lit_3902@l /* 0x80828850@l */
/* 80826108  38 00 00 00 */	li r0, 0
/* 8082610C  98 1E 0E 94 */	stb r0, 0xe94(r30)
/* 80826110  38 00 00 0A */	li r0, 0xa
/* 80826114  B0 1E 06 D0 */	sth r0, 0x6d0(r30)
/* 80826118  C0 1F 00 04 */	lfs f0, 4(r31)
/* 8082611C  D0 1E 05 2C */	stfs f0, 0x52c(r30)
/* 80826120  38 7E 04 DC */	addi r3, r30, 0x4dc
/* 80826124  38 80 00 00 */	li r4, 0
/* 80826128  38 A0 00 01 */	li r5, 1
/* 8082612C  38 C0 08 00 */	li r6, 0x800
/* 80826130  4B A4 A4 D9 */	bl cLib_addCalcAngleS2__FPssss
/* 80826134  A0 1E 05 8E */	lhz r0, 0x58e(r30)
/* 80826138  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8082613C  41 82 00 AC */	beq lbl_808261E8
/* 80826140  A0 1E 05 8E */	lhz r0, 0x58e(r30)
/* 80826144  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 80826148  B0 1E 05 8E */	sth r0, 0x58e(r30)
/* 8082614C  38 00 00 03 */	li r0, 3
/* 80826150  98 1E 06 7D */	stb r0, 0x67d(r30)
/* 80826154  38 00 00 46 */	li r0, 0x46
/* 80826158  B0 1E 06 A4 */	sth r0, 0x6a4(r30)
/* 8082615C  3C 60 00 07 */	lis r3, 0x0007 /* 0x000701B4@ha */
/* 80826160  38 03 01 B4 */	addi r0, r3, 0x01B4 /* 0x000701B4@l */
/* 80826164  90 01 00 08 */	stw r0, 8(r1)
/* 80826168  38 7E 05 C0 */	addi r3, r30, 0x5c0
/* 8082616C  38 81 00 08 */	addi r4, r1, 8
/* 80826170  38 A0 FF FF */	li r5, -1
/* 80826174  81 9E 05 C0 */	lwz r12, 0x5c0(r30)
/* 80826178  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8082617C  7D 89 03 A6 */	mtctr r12
/* 80826180  4E 80 04 21 */	bctrl 
/* 80826184  A0 7E 05 8E */	lhz r3, 0x58e(r30)
/* 80826188  38 00 FF E8 */	li r0, -24
/* 8082618C  7C 60 00 38 */	and r0, r3, r0
/* 80826190  B0 1E 05 8E */	sth r0, 0x58e(r30)
/* 80826194  C0 1F 00 88 */	lfs f0, 0x88(r31)
/* 80826198  D0 1E 0E B0 */	stfs f0, 0xeb0(r30)
/* 8082619C  38 00 00 00 */	li r0, 0
/* 808261A0  B0 1E 0E B8 */	sth r0, 0xeb8(r30)
/* 808261A4  B0 1E 0E B6 */	sth r0, 0xeb6(r30)
/* 808261A8  C0 3F 00 A8 */	lfs f1, 0xa8(r31)
/* 808261AC  4B A4 17 A9 */	bl cM_rndF__Ff
/* 808261B0  FC 00 08 1E */	fctiwz f0, f1
/* 808261B4  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 808261B8  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 808261BC  B0 1E 0E BA */	sth r0, 0xeba(r30)
/* 808261C0  C0 3F 00 A8 */	lfs f1, 0xa8(r31)
/* 808261C4  4B A4 17 91 */	bl cM_rndF__Ff
/* 808261C8  FC 00 08 1E */	fctiwz f0, f1
/* 808261CC  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 808261D0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 808261D4  B0 1E 0E BC */	sth r0, 0xebc(r30)
/* 808261D8  38 00 00 0F */	li r0, 0xf
/* 808261DC  B0 1E 0E C6 */	sth r0, 0xec6(r30)
/* 808261E0  38 00 00 00 */	li r0, 0
/* 808261E4  B0 1E 05 62 */	sth r0, 0x562(r30)
lbl_808261E8:
/* 808261E8  3B A0 00 00 */	li r29, 0
/* 808261EC  3B 80 00 01 */	li r28, 1
/* 808261F0  88 1E 06 7D */	lbz r0, 0x67d(r30)
/* 808261F4  7C 00 07 74 */	extsb r0, r0
/* 808261F8  2C 00 00 01 */	cmpwi r0, 1
/* 808261FC  41 82 00 AC */	beq lbl_808262A8
/* 80826200  40 80 01 80 */	bge lbl_80826380
/* 80826204  2C 00 00 00 */	cmpwi r0, 0
/* 80826208  40 80 00 08 */	bge lbl_80826210
/* 8082620C  48 00 01 74 */	b lbl_80826380
lbl_80826210:
/* 80826210  7F C3 F3 78 */	mr r3, r30
/* 80826214  38 80 00 06 */	li r4, 6
/* 80826218  C0 3F 00 04 */	lfs f1, 4(r31)
/* 8082621C  38 A0 00 00 */	li r5, 0
/* 80826220  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80826224  4B FF C5 6D */	bl anm_init__FP10e_yr_classifUcf
/* 80826228  38 00 00 01 */	li r0, 1
/* 8082622C  98 1E 06 7D */	stb r0, 0x67d(r30)
/* 80826230  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80826234  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80826238  C0 3F 00 A4 */	lfs f1, 0xa4(r31)
/* 8082623C  4B A4 17 19 */	bl cM_rndF__Ff
/* 80826240  C0 1F 00 80 */	lfs f0, 0x80(r31)
/* 80826244  EC 00 08 2A */	fadds f0, f0, f1
/* 80826248  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8082624C  C0 1E 06 D8 */	lfs f0, 0x6d8(r30)
/* 80826250  FC 00 00 50 */	fneg f0, f0
/* 80826254  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80826258  3C 60 80 45 */	lis r3, calc_mtx@ha /* 0x80450768@ha */
/* 8082625C  38 63 07 68 */	addi r3, r3, calc_mtx@l /* 0x80450768@l */
/* 80826260  80 63 00 00 */	lwz r3, 0(r3)
/* 80826264  A8 9E 06 D2 */	lha r4, 0x6d2(r30)
/* 80826268  4B 7E 61 75 */	bl mDoMtx_YrotS__FPA4_fs
/* 8082626C  38 61 00 0C */	addi r3, r1, 0xc
/* 80826270  38 9E 04 F8 */	addi r4, r30, 0x4f8
/* 80826274  4B A4 AC 79 */	bl MtxPosition__FP4cXyzP4cXyz
/* 80826278  38 00 1F 40 */	li r0, 0x1f40
/* 8082627C  B0 1E 0E BE */	sth r0, 0xebe(r30)
/* 80826280  C0 3F 00 A4 */	lfs f1, 0xa4(r31)
/* 80826284  4B A4 16 D1 */	bl cM_rndF__Ff
/* 80826288  C0 1F 00 80 */	lfs f0, 0x80(r31)
/* 8082628C  EC 00 08 2A */	fadds f0, f0, f1
/* 80826290  FC 00 00 1E */	fctiwz f0, f0
/* 80826294  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 80826298  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8082629C  B0 1E 06 A4 */	sth r0, 0x6a4(r30)
/* 808262A0  38 00 00 3C */	li r0, 0x3c
/* 808262A4  B0 1E 06 A6 */	sth r0, 0x6a6(r30)
lbl_808262A8:
/* 808262A8  38 7E 04 D0 */	addi r3, r30, 0x4d0
/* 808262AC  38 9E 04 F8 */	addi r4, r30, 0x4f8
/* 808262B0  7C 65 1B 78 */	mr r5, r3
/* 808262B4  4B B2 0D DD */	bl PSVECAdd
/* 808262B8  C0 3E 04 FC */	lfs f1, 0x4fc(r30)
/* 808262BC  C0 1F 01 10 */	lfs f0, 0x110(r31)
/* 808262C0  EC 01 00 2A */	fadds f0, f1, f0
/* 808262C4  D0 1E 04 FC */	stfs f0, 0x4fc(r30)
/* 808262C8  C0 3E 04 FC */	lfs f1, 0x4fc(r30)
/* 808262CC  C0 1F 00 04 */	lfs f0, 4(r31)
/* 808262D0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 808262D4  40 80 00 34 */	bge lbl_80826308
/* 808262D8  C0 1E 04 F8 */	lfs f0, 0x4f8(r30)
/* 808262DC  C0 3F 01 14 */	lfs f1, 0x114(r31)
/* 808262E0  EC 00 00 72 */	fmuls f0, f0, f1
/* 808262E4  D0 1E 04 F8 */	stfs f0, 0x4f8(r30)
/* 808262E8  C0 1E 05 00 */	lfs f0, 0x500(r30)
/* 808262EC  EC 00 00 72 */	fmuls f0, f0, f1
/* 808262F0  D0 1E 05 00 */	stfs f0, 0x500(r30)
/* 808262F4  38 7E 06 F2 */	addi r3, r30, 0x6f2
/* 808262F8  38 80 C0 00 */	li r4, -16384
/* 808262FC  38 A0 00 04 */	li r5, 4
/* 80826300  38 C0 01 80 */	li r6, 0x180
/* 80826304  4B A4 A3 05 */	bl cLib_addCalcAngleS2__FPssss
lbl_80826308:
/* 80826308  C0 1F 00 D4 */	lfs f0, 0xd4(r31)
/* 8082630C  D0 1E 0E B0 */	stfs f0, 0xeb0(r30)
/* 80826310  A8 7E 04 DE */	lha r3, 0x4de(r30)
/* 80826314  A8 1E 06 DC */	lha r0, 0x6dc(r30)
/* 80826318  7C 03 02 14 */	add r0, r3, r0
/* 8082631C  B0 1E 04 DE */	sth r0, 0x4de(r30)
/* 80826320  A8 1E 05 62 */	lha r0, 0x562(r30)
/* 80826324  2C 00 00 00 */	cmpwi r0, 0
/* 80826328  40 81 00 24 */	ble lbl_8082634C
/* 8082632C  A8 1E 06 A4 */	lha r0, 0x6a4(r30)
/* 80826330  2C 00 00 00 */	cmpwi r0, 0
/* 80826334  41 82 00 10 */	beq lbl_80826344
/* 80826338  80 1E 07 78 */	lwz r0, 0x778(r30)
/* 8082633C  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 80826340  41 82 00 40 */	beq lbl_80826380
lbl_80826344:
/* 80826344  3B A0 00 01 */	li r29, 1
/* 80826348  48 00 00 38 */	b lbl_80826380
lbl_8082634C:
/* 8082634C  3B 80 00 00 */	li r28, 0
/* 80826350  80 1E 07 78 */	lwz r0, 0x778(r30)
/* 80826354  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 80826358  40 82 00 10 */	bne lbl_80826368
/* 8082635C  A8 1E 06 A6 */	lha r0, 0x6a6(r30)
/* 80826360  2C 00 00 00 */	cmpwi r0, 0
/* 80826364  40 82 00 1C */	bne lbl_80826380
lbl_80826368:
/* 80826368  7F C3 F3 78 */	mr r3, r30
/* 8082636C  4B FF C2 55 */	bl yr_disappear__FP10e_yr_class
/* 80826370  7F C3 F3 78 */	mr r3, r30
/* 80826374  4B 7F 39 09 */	bl fopAcM_delete__FP10fopAc_ac_c
/* 80826378  38 60 00 00 */	li r3, 0
/* 8082637C  48 00 01 60 */	b lbl_808264DC
lbl_80826380:
/* 80826380  C0 3E 04 FC */	lfs f1, 0x4fc(r30)
/* 80826384  C0 1F 01 18 */	lfs f0, 0x118(r31)
/* 80826388  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8082638C  40 80 00 08 */	bge lbl_80826394
/* 80826390  D0 1E 04 FC */	stfs f0, 0x4fc(r30)
lbl_80826394:
/* 80826394  A0 1E 05 8E */	lhz r0, 0x58e(r30)
/* 80826398  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8082639C  41 82 00 1C */	beq lbl_808263B8
/* 808263A0  C0 1E 04 D0 */	lfs f0, 0x4d0(r30)
/* 808263A4  D0 1E 05 68 */	stfs f0, 0x568(r30)
/* 808263A8  C0 1E 04 D4 */	lfs f0, 0x4d4(r30)
/* 808263AC  D0 1E 05 6C */	stfs f0, 0x56c(r30)
/* 808263B0  C0 1E 04 D8 */	lfs f0, 0x4d8(r30)
/* 808263B4  D0 1E 05 70 */	stfs f0, 0x570(r30)
lbl_808263B8:
/* 808263B8  A8 7E 0E C6 */	lha r3, 0xec6(r30)
/* 808263BC  2C 03 00 00 */	cmpwi r3, 0
/* 808263C0  41 82 00 5C */	beq lbl_8082641C
/* 808263C4  38 03 FF FF */	addi r0, r3, -1
/* 808263C8  B0 1E 0E C6 */	sth r0, 0xec6(r30)
/* 808263CC  A8 9E 0E C6 */	lha r4, 0xec6(r30)
/* 808263D0  1C 04 38 00 */	mulli r0, r4, 0x3800
/* 808263D4  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 808263D8  3C 60 80 44 */	lis r3, sincosTable___5JMath@ha /* 0x80439A20@ha */
/* 808263DC  38 63 9A 20 */	addi r3, r3, sincosTable___5JMath@l /* 0x80439A20@l */
/* 808263E0  7C 63 04 2E */	lfsx f3, r3, r0
/* 808263E4  C0 5F 00 00 */	lfs f2, 0(r31)
/* 808263E8  C8 3F 00 E0 */	lfd f1, 0xe0(r31)
/* 808263EC  6C 80 80 00 */	xoris r0, r4, 0x8000
/* 808263F0  90 01 00 24 */	stw r0, 0x24(r1)
/* 808263F4  3C 00 43 30 */	lis r0, 0x4330
/* 808263F8  90 01 00 20 */	stw r0, 0x20(r1)
/* 808263FC  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 80826400  EC 00 08 28 */	fsubs f0, f0, f1
/* 80826404  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80826408  EC 02 00 32 */	fmuls f0, f2, f0
/* 8082640C  FC 00 00 1E */	fctiwz f0, f0
/* 80826410  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80826414  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80826418  B0 1E 0E C4 */	sth r0, 0xec4(r30)
lbl_8082641C:
/* 8082641C  7F A0 07 75 */	extsb. r0, r29
/* 80826420  41 82 00 B8 */	beq lbl_808264D8
/* 80826424  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80826428  D0 1E 06 D8 */	stfs f0, 0x6d8(r30)
/* 8082642C  38 60 00 00 */	li r3, 0
/* 80826430  B0 7E 0E B8 */	sth r3, 0xeb8(r30)
/* 80826434  B0 7E 0E B6 */	sth r3, 0xeb6(r30)
/* 80826438  B0 7E 0E BE */	sth r3, 0xebe(r30)
/* 8082643C  38 00 00 03 */	li r0, 3
/* 80826440  98 1E 06 69 */	stb r0, 0x669(r30)
/* 80826444  98 7E 06 7D */	stb r3, 0x67d(r30)
/* 80826448  3C 60 80 83 */	lis r3, l_e_yrHIO@ha /* 0x80828DBC@ha */
/* 8082644C  3B A3 8D BC */	addi r29, r3, l_e_yrHIO@l /* 0x80828DBC@l */
/* 80826450  A8 7D 00 1C */	lha r3, 0x1c(r29)
/* 80826454  A8 1D 00 1E */	lha r0, 0x1e(r29)
/* 80826458  7C 03 00 50 */	subf r0, r3, r0
/* 8082645C  C8 3F 00 E0 */	lfd f1, 0xe0(r31)
/* 80826460  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80826464  90 01 00 24 */	stw r0, 0x24(r1)
/* 80826468  3C 00 43 30 */	lis r0, 0x4330
/* 8082646C  90 01 00 20 */	stw r0, 0x20(r1)
/* 80826470  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 80826474  EC 20 08 28 */	fsubs f1, f0, f1
/* 80826478  4B A4 14 DD */	bl cM_rndF__Ff
/* 8082647C  A8 1D 00 1C */	lha r0, 0x1c(r29)
/* 80826480  C8 5F 00 E0 */	lfd f2, 0xe0(r31)
/* 80826484  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80826488  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8082648C  3C 00 43 30 */	lis r0, 0x4330
/* 80826490  90 01 00 18 */	stw r0, 0x18(r1)
/* 80826494  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 80826498  EC 00 10 28 */	fsubs f0, f0, f2
/* 8082649C  EC 00 08 2A */	fadds f0, f0, f1
/* 808264A0  FC 00 00 1E */	fctiwz f0, f0
/* 808264A4  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 808264A8  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 808264AC  B0 1E 06 A6 */	sth r0, 0x6a6(r30)
/* 808264B0  38 00 00 00 */	li r0, 0
/* 808264B4  98 1E 06 E9 */	stb r0, 0x6e9(r30)
/* 808264B8  38 00 00 01 */	li r0, 1
/* 808264BC  98 1E 0E C8 */	stb r0, 0xec8(r30)
/* 808264C0  38 00 D0 00 */	li r0, -12288
/* 808264C4  B0 1E 04 DC */	sth r0, 0x4dc(r30)
/* 808264C8  A0 7E 05 8E */	lhz r3, 0x58e(r30)
/* 808264CC  38 00 FF E8 */	li r0, -24
/* 808264D0  7C 60 00 38 */	and r0, r3, r0
/* 808264D4  B0 1E 05 8E */	sth r0, 0x58e(r30)
lbl_808264D8:
/* 808264D8  7F 83 E3 78 */	mr r3, r28
lbl_808264DC:
/* 808264DC  39 61 00 40 */	addi r11, r1, 0x40
/* 808264E0  4B B3 BD 45 */	bl _restgpr_28
/* 808264E4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 808264E8  7C 08 03 A6 */	mtlr r0
/* 808264EC  38 21 00 40 */	addi r1, r1, 0x40
/* 808264F0  4E 80 00 20 */	blr 
