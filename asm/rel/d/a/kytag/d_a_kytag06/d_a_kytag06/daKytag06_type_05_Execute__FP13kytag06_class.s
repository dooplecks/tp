lbl_808591A4:
/* 808591A4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 808591A8  7C 08 02 A6 */	mflr r0
/* 808591AC  90 01 00 24 */	stw r0, 0x24(r1)
/* 808591B0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 808591B4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 808591B8  7C 7E 1B 78 */	mr r30, r3
/* 808591BC  3C 60 80 86 */	lis r3, lit_3740@ha /* 0x80859E78@ha */
/* 808591C0  3B E3 9E 78 */	addi r31, r3, lit_3740@l /* 0x80859E78@l */
/* 808591C4  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 808591C8  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 808591CC  80 63 5D AC */	lwz r3, 0x5dac(r3)
/* 808591D0  28 03 00 00 */	cmplwi r3, 0
/* 808591D4  41 82 01 30 */	beq lbl_80859304
/* 808591D8  C0 03 04 D0 */	lfs f0, 0x4d0(r3)
/* 808591DC  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 808591E0  C0 1E 04 D4 */	lfs f0, 0x4d4(r30)
/* 808591E4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 808591E8  C0 03 04 D8 */	lfs f0, 0x4d8(r3)
/* 808591EC  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 808591F0  38 7E 04 D0 */	addi r3, r30, 0x4d0
/* 808591F4  38 81 00 0C */	addi r4, r1, 0xc
/* 808591F8  4B AE E1 A5 */	bl PSVECSquareDistance
/* 808591FC  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 80859200  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80859204  40 81 00 58 */	ble lbl_8085925C
/* 80859208  FC 00 08 34 */	frsqrte f0, f1
/* 8085920C  C8 9F 00 20 */	lfd f4, 0x20(r31)
/* 80859210  FC 44 00 32 */	fmul f2, f4, f0
/* 80859214  C8 7F 00 28 */	lfd f3, 0x28(r31)
/* 80859218  FC 00 00 32 */	fmul f0, f0, f0
/* 8085921C  FC 01 00 32 */	fmul f0, f1, f0
/* 80859220  FC 03 00 28 */	fsub f0, f3, f0
/* 80859224  FC 02 00 32 */	fmul f0, f2, f0
/* 80859228  FC 44 00 32 */	fmul f2, f4, f0
/* 8085922C  FC 00 00 32 */	fmul f0, f0, f0
/* 80859230  FC 01 00 32 */	fmul f0, f1, f0
/* 80859234  FC 03 00 28 */	fsub f0, f3, f0
/* 80859238  FC 02 00 32 */	fmul f0, f2, f0
/* 8085923C  FC 44 00 32 */	fmul f2, f4, f0
/* 80859240  FC 00 00 32 */	fmul f0, f0, f0
/* 80859244  FC 01 00 32 */	fmul f0, f1, f0
/* 80859248  FC 03 00 28 */	fsub f0, f3, f0
/* 8085924C  FC 02 00 32 */	fmul f0, f2, f0
/* 80859250  FC 21 00 32 */	fmul f1, f1, f0
/* 80859254  FC 20 08 18 */	frsp f1, f1
/* 80859258  48 00 00 88 */	b lbl_808592E0
lbl_8085925C:
/* 8085925C  C8 1F 00 30 */	lfd f0, 0x30(r31)
/* 80859260  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80859264  40 80 00 10 */	bge lbl_80859274
/* 80859268  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 8085926C  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 80859270  48 00 00 70 */	b lbl_808592E0
lbl_80859274:
/* 80859274  D0 21 00 08 */	stfs f1, 8(r1)
/* 80859278  80 81 00 08 */	lwz r4, 8(r1)
/* 8085927C  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 80859280  3C 00 7F 80 */	lis r0, 0x7f80
/* 80859284  7C 03 00 00 */	cmpw r3, r0
/* 80859288  41 82 00 14 */	beq lbl_8085929C
/* 8085928C  40 80 00 40 */	bge lbl_808592CC
/* 80859290  2C 03 00 00 */	cmpwi r3, 0
/* 80859294  41 82 00 20 */	beq lbl_808592B4
/* 80859298  48 00 00 34 */	b lbl_808592CC
lbl_8085929C:
/* 8085929C  54 80 02 7F */	clrlwi. r0, r4, 9
/* 808592A0  41 82 00 0C */	beq lbl_808592AC
/* 808592A4  38 00 00 01 */	li r0, 1
/* 808592A8  48 00 00 28 */	b lbl_808592D0
lbl_808592AC:
/* 808592AC  38 00 00 02 */	li r0, 2
/* 808592B0  48 00 00 20 */	b lbl_808592D0
lbl_808592B4:
/* 808592B4  54 80 02 7F */	clrlwi. r0, r4, 9
/* 808592B8  41 82 00 0C */	beq lbl_808592C4
/* 808592BC  38 00 00 05 */	li r0, 5
/* 808592C0  48 00 00 10 */	b lbl_808592D0
lbl_808592C4:
/* 808592C4  38 00 00 03 */	li r0, 3
/* 808592C8  48 00 00 08 */	b lbl_808592D0
lbl_808592CC:
/* 808592CC  38 00 00 04 */	li r0, 4
lbl_808592D0:
/* 808592D0  2C 00 00 01 */	cmpwi r0, 1
/* 808592D4  40 82 00 0C */	bne lbl_808592E0
/* 808592D8  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 808592DC  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
lbl_808592E0:
/* 808592E0  C0 5F 00 F8 */	lfs f2, 0xf8(r31)
/* 808592E4  C0 1E 04 EC */	lfs f0, 0x4ec(r30)
/* 808592E8  EC 02 00 32 */	fmuls f0, f2, f0
/* 808592EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 808592F0  40 80 00 14 */	bge lbl_80859304
/* 808592F4  38 00 00 01 */	li r0, 1
/* 808592F8  3C 60 80 43 */	lis r3, g_env_light@ha /* 0x8042CA54@ha */
/* 808592FC  38 63 CA 54 */	addi r3, r3, g_env_light@l /* 0x8042CA54@l */
/* 80859300  98 03 13 0B */	stb r0, 0x130b(r3)
lbl_80859304:
/* 80859304  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80859308  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8085930C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80859310  7C 08 03 A6 */	mtlr r0
/* 80859314  38 21 00 20 */	addi r1, r1, 0x20
/* 80859318  4E 80 00 20 */	blr 
