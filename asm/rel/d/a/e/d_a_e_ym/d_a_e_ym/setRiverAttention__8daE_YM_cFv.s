lbl_808120B0:
/* 808120B0  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 808120B4  7C 08 02 A6 */	mflr r0
/* 808120B8  90 01 00 64 */	stw r0, 0x64(r1)
/* 808120BC  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 808120C0  93 C1 00 58 */	stw r30, 0x58(r1)
/* 808120C4  7C 7E 1B 78 */	mr r30, r3
/* 808120C8  3C 60 80 81 */	lis r3, lit_3925@ha /* 0x80815994@ha */
/* 808120CC  3B E3 59 94 */	addi r31, r3, lit_3925@l /* 0x80815994@l */
/* 808120D0  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 808120D4  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 808120D8  80 63 5D AC */	lwz r3, 0x5dac(r3)
/* 808120DC  C0 03 04 D0 */	lfs f0, 0x4d0(r3)
/* 808120E0  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 808120E4  C0 03 04 D4 */	lfs f0, 0x4d4(r3)
/* 808120E8  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 808120EC  C0 03 04 D8 */	lfs f0, 0x4d8(r3)
/* 808120F0  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 808120F4  38 00 00 3C */	li r0, 0x3c
/* 808120F8  98 1E 05 46 */	stb r0, 0x546(r30)
/* 808120FC  38 00 00 00 */	li r0, 0
/* 80812100  90 1E 07 14 */	stw r0, 0x714(r30)
/* 80812104  38 7E 04 D0 */	addi r3, r30, 0x4d0
/* 80812108  80 9E 06 64 */	lwz r4, 0x664(r30)
/* 8081210C  38 84 04 D0 */	addi r4, r4, 0x4d0
/* 80812110  4B B3 52 8D */	bl PSVECSquareDistance
/* 80812114  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80812118  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8081211C  40 81 00 58 */	ble lbl_80812174
/* 80812120  FC 00 08 34 */	frsqrte f0, f1
/* 80812124  C8 9F 00 10 */	lfd f4, 0x10(r31)
/* 80812128  FC 44 00 32 */	fmul f2, f4, f0
/* 8081212C  C8 7F 00 18 */	lfd f3, 0x18(r31)
/* 80812130  FC 00 00 32 */	fmul f0, f0, f0
/* 80812134  FC 01 00 32 */	fmul f0, f1, f0
/* 80812138  FC 03 00 28 */	fsub f0, f3, f0
/* 8081213C  FC 02 00 32 */	fmul f0, f2, f0
/* 80812140  FC 44 00 32 */	fmul f2, f4, f0
/* 80812144  FC 00 00 32 */	fmul f0, f0, f0
/* 80812148  FC 01 00 32 */	fmul f0, f1, f0
/* 8081214C  FC 03 00 28 */	fsub f0, f3, f0
/* 80812150  FC 02 00 32 */	fmul f0, f2, f0
/* 80812154  FC 44 00 32 */	fmul f2, f4, f0
/* 80812158  FC 00 00 32 */	fmul f0, f0, f0
/* 8081215C  FC 01 00 32 */	fmul f0, f1, f0
/* 80812160  FC 03 00 28 */	fsub f0, f3, f0
/* 80812164  FC 02 00 32 */	fmul f0, f2, f0
/* 80812168  FC 21 00 32 */	fmul f1, f1, f0
/* 8081216C  FC 20 08 18 */	frsp f1, f1
/* 80812170  48 00 00 88 */	b lbl_808121F8
lbl_80812174:
/* 80812174  C8 1F 00 20 */	lfd f0, 0x20(r31)
/* 80812178  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8081217C  40 80 00 10 */	bge lbl_8081218C
/* 80812180  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80812184  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 80812188  48 00 00 70 */	b lbl_808121F8
lbl_8081218C:
/* 8081218C  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80812190  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80812194  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 80812198  3C 00 7F 80 */	lis r0, 0x7f80
/* 8081219C  7C 03 00 00 */	cmpw r3, r0
/* 808121A0  41 82 00 14 */	beq lbl_808121B4
/* 808121A4  40 80 00 40 */	bge lbl_808121E4
/* 808121A8  2C 03 00 00 */	cmpwi r3, 0
/* 808121AC  41 82 00 20 */	beq lbl_808121CC
/* 808121B0  48 00 00 34 */	b lbl_808121E4
lbl_808121B4:
/* 808121B4  54 80 02 7F */	clrlwi. r0, r4, 9
/* 808121B8  41 82 00 0C */	beq lbl_808121C4
/* 808121BC  38 00 00 01 */	li r0, 1
/* 808121C0  48 00 00 28 */	b lbl_808121E8
lbl_808121C4:
/* 808121C4  38 00 00 02 */	li r0, 2
/* 808121C8  48 00 00 20 */	b lbl_808121E8
lbl_808121CC:
/* 808121CC  54 80 02 7F */	clrlwi. r0, r4, 9
/* 808121D0  41 82 00 0C */	beq lbl_808121DC
/* 808121D4  38 00 00 05 */	li r0, 5
/* 808121D8  48 00 00 10 */	b lbl_808121E8
lbl_808121DC:
/* 808121DC  38 00 00 03 */	li r0, 3
/* 808121E0  48 00 00 08 */	b lbl_808121E8
lbl_808121E4:
/* 808121E4  38 00 00 04 */	li r0, 4
lbl_808121E8:
/* 808121E8  2C 00 00 01 */	cmpwi r0, 1
/* 808121EC  40 82 00 0C */	bne lbl_808121F8
/* 808121F0  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 808121F4  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
lbl_808121F8:
/* 808121F8  C0 1F 01 30 */	lfs f0, 0x130(r31)
/* 808121FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80812200  41 81 01 AC */	bgt lbl_808123AC
/* 80812204  3C 60 80 3E */	lis r3, now__14mDoMtx_stack_c@ha /* 0x803DD470@ha */
/* 80812208  38 63 D4 70 */	addi r3, r3, now__14mDoMtx_stack_c@l /* 0x803DD470@l */
/* 8081220C  A8 1E 04 E6 */	lha r0, 0x4e6(r30)
/* 80812210  7C 00 00 D0 */	neg r0, r0
/* 80812214  7C 04 07 34 */	extsh r4, r0
/* 80812218  4B 7F A1 C5 */	bl mDoMtx_YrotS__FPA4_fs
/* 8081221C  3C 60 80 3E */	lis r3, now__14mDoMtx_stack_c@ha /* 0x803DD470@ha */
/* 80812220  38 63 D4 70 */	addi r3, r3, now__14mDoMtx_stack_c@l /* 0x803DD470@l */
/* 80812224  A8 1E 04 E4 */	lha r0, 0x4e4(r30)
/* 80812228  7C 00 00 D0 */	neg r0, r0
/* 8081222C  7C 04 07 34 */	extsh r4, r0
/* 80812230  4B 7F A1 6D */	bl mDoMtx_XrotM__FPA4_fs
/* 80812234  38 61 00 1C */	addi r3, r1, 0x1c
/* 80812238  38 9E 04 D0 */	addi r4, r30, 0x4d0
/* 8081223C  80 BE 06 64 */	lwz r5, 0x664(r30)
/* 80812240  38 A5 04 D0 */	addi r5, r5, 0x4d0
/* 80812244  4B A5 48 F1 */	bl __mi__4cXyzCFRC3Vec
/* 80812248  38 61 00 1C */	addi r3, r1, 0x1c
/* 8081224C  4B 7F AB 89 */	bl transM__14mDoMtx_stack_cFRC4cXyz
/* 80812250  3C 60 80 3E */	lis r3, now__14mDoMtx_stack_c@ha /* 0x803DD470@ha */
/* 80812254  38 63 D4 70 */	addi r3, r3, now__14mDoMtx_stack_c@l /* 0x803DD470@l */
/* 80812258  C0 43 00 0C */	lfs f2, 0xc(r3)
/* 8081225C  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 80812260  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 80812264  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 80812268  C0 03 00 2C */	lfs f0, 0x2c(r3)
/* 8081226C  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 80812270  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 80812274  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80812278  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8081227C  FC 00 10 18 */	frsp f0, f2
/* 80812280  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80812284  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80812288  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8081228C  FC 00 08 18 */	frsp f0, f1
/* 80812290  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80812294  38 61 00 10 */	addi r3, r1, 0x10
/* 80812298  4B B3 4E A1 */	bl PSVECSquareMag
/* 8081229C  C0 1F 00 04 */	lfs f0, 4(r31)
/* 808122A0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 808122A4  40 81 00 58 */	ble lbl_808122FC
/* 808122A8  FC 00 08 34 */	frsqrte f0, f1
/* 808122AC  C8 9F 00 10 */	lfd f4, 0x10(r31)
/* 808122B0  FC 44 00 32 */	fmul f2, f4, f0
/* 808122B4  C8 7F 00 18 */	lfd f3, 0x18(r31)
/* 808122B8  FC 00 00 32 */	fmul f0, f0, f0
/* 808122BC  FC 01 00 32 */	fmul f0, f1, f0
/* 808122C0  FC 03 00 28 */	fsub f0, f3, f0
/* 808122C4  FC 02 00 32 */	fmul f0, f2, f0
/* 808122C8  FC 44 00 32 */	fmul f2, f4, f0
/* 808122CC  FC 00 00 32 */	fmul f0, f0, f0
/* 808122D0  FC 01 00 32 */	fmul f0, f1, f0
/* 808122D4  FC 03 00 28 */	fsub f0, f3, f0
/* 808122D8  FC 02 00 32 */	fmul f0, f2, f0
/* 808122DC  FC 44 00 32 */	fmul f2, f4, f0
/* 808122E0  FC 00 00 32 */	fmul f0, f0, f0
/* 808122E4  FC 01 00 32 */	fmul f0, f1, f0
/* 808122E8  FC 03 00 28 */	fsub f0, f3, f0
/* 808122EC  FC 02 00 32 */	fmul f0, f2, f0
/* 808122F0  FC 41 00 32 */	fmul f2, f1, f0
/* 808122F4  FC 40 10 18 */	frsp f2, f2
/* 808122F8  48 00 00 90 */	b lbl_80812388
lbl_808122FC:
/* 808122FC  C8 1F 00 20 */	lfd f0, 0x20(r31)
/* 80812300  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80812304  40 80 00 10 */	bge lbl_80812314
/* 80812308  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 8081230C  C0 43 0A E0 */	lfs f2, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 80812310  48 00 00 78 */	b lbl_80812388
lbl_80812314:
/* 80812314  D0 21 00 08 */	stfs f1, 8(r1)
/* 80812318  80 81 00 08 */	lwz r4, 8(r1)
/* 8081231C  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 80812320  3C 00 7F 80 */	lis r0, 0x7f80
/* 80812324  7C 03 00 00 */	cmpw r3, r0
/* 80812328  41 82 00 14 */	beq lbl_8081233C
/* 8081232C  40 80 00 40 */	bge lbl_8081236C
/* 80812330  2C 03 00 00 */	cmpwi r3, 0
/* 80812334  41 82 00 20 */	beq lbl_80812354
/* 80812338  48 00 00 34 */	b lbl_8081236C
lbl_8081233C:
/* 8081233C  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80812340  41 82 00 0C */	beq lbl_8081234C
/* 80812344  38 00 00 01 */	li r0, 1
/* 80812348  48 00 00 28 */	b lbl_80812370
lbl_8081234C:
/* 8081234C  38 00 00 02 */	li r0, 2
/* 80812350  48 00 00 20 */	b lbl_80812370
lbl_80812354:
/* 80812354  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80812358  41 82 00 0C */	beq lbl_80812364
/* 8081235C  38 00 00 05 */	li r0, 5
/* 80812360  48 00 00 10 */	b lbl_80812370
lbl_80812364:
/* 80812364  38 00 00 03 */	li r0, 3
/* 80812368  48 00 00 08 */	b lbl_80812370
lbl_8081236C:
/* 8081236C  38 00 00 04 */	li r0, 4
lbl_80812370:
/* 80812370  2C 00 00 01 */	cmpwi r0, 1
/* 80812374  40 82 00 10 */	bne lbl_80812384
/* 80812378  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 8081237C  C0 43 0A E0 */	lfs f2, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 80812380  48 00 00 08 */	b lbl_80812388
lbl_80812384:
/* 80812384  FC 40 08 90 */	fmr f2, f1
lbl_80812388:
/* 80812388  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 8081238C  4B A5 52 E9 */	bl cM_atan2s__Fff
/* 80812390  7C 63 07 34 */	extsh r3, r3
/* 80812394  38 63 C0 00 */	addi r3, r3, -16384
/* 80812398  4B B5 2D 39 */	bl abs
/* 8081239C  2C 03 20 00 */	cmpwi r3, 0x2000
/* 808123A0  40 80 00 0C */	bge lbl_808123AC
/* 808123A4  38 00 00 04 */	li r0, 4
/* 808123A8  90 1E 07 14 */	stw r0, 0x714(r30)
lbl_808123AC:
/* 808123AC  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 808123B0  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 808123B4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 808123B8  7C 08 03 A6 */	mtlr r0
/* 808123BC  38 21 00 60 */	addi r1, r1, 0x60
/* 808123C0  4E 80 00 20 */	blr 
