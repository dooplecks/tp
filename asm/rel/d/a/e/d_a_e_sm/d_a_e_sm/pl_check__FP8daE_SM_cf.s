lbl_807927F8:
/* 807927F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 807927FC  7C 08 02 A6 */	mflr r0
/* 80792800  90 01 00 14 */	stw r0, 0x14(r1)
/* 80792804  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80792808  38 84 61 C0 */	addi r4, r4, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 8079280C  80 84 5D AC */	lwz r4, 0x5dac(r4)
/* 80792810  C0 23 04 D4 */	lfs f1, 0x4d4(r3)
/* 80792814  C0 04 04 D4 */	lfs f0, 0x4d4(r4)
/* 80792818  EC 01 00 28 */	fsubs f0, f1, f0
/* 8079281C  FC 00 02 10 */	fabs f0, f0
/* 80792820  FC 20 00 18 */	frsp f1, f0
/* 80792824  3C A0 80 7A */	lis r5, lit_4095@ha /* 0x80798628@ha */
/* 80792828  C0 05 86 28 */	lfs f0, lit_4095@l(r5)  /* 0x80798628@l */
/* 8079282C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80792830  40 80 00 18 */	bge lbl_80792848
/* 80792834  4B FF FE ED */	bl other_bg_check__FP8daE_SM_cP10fopAc_ac_c
/* 80792838  2C 03 00 00 */	cmpwi r3, 0
/* 8079283C  40 82 00 0C */	bne lbl_80792848
/* 80792840  38 60 00 01 */	li r3, 1
/* 80792844  48 00 00 08 */	b lbl_8079284C
lbl_80792848:
/* 80792848  38 60 00 00 */	li r3, 0
lbl_8079284C:
/* 8079284C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80792850  7C 08 03 A6 */	mtlr r0
/* 80792854  38 21 00 10 */	addi r1, r1, 0x10
/* 80792858  4E 80 00 20 */	blr 
