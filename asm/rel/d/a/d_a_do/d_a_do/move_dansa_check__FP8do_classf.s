lbl_80668B18:
/* 80668B18  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80668B1C  7C 08 02 A6 */	mflr r0
/* 80668B20  90 01 00 24 */	stw r0, 0x24(r1)
/* 80668B24  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80668B28  F3 E1 00 18 */	psq_st f31, 24(r1), 0, 0 /* qr0 */
/* 80668B2C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80668B30  7C 7F 1B 78 */	mr r31, r3
/* 80668B34  FF E0 08 90 */	fmr f31, f1
/* 80668B38  3C 80 80 67 */	lis r4, lit_4068@ha /* 0x8066EE38@ha */
/* 80668B3C  C0 24 EE 38 */	lfs f1, lit_4068@l(r4)  /* 0x8066EE38@l */
/* 80668B40  4B FF FE F1 */	bl dansa_check2__FP8do_classf
/* 80668B44  2C 03 00 00 */	cmpwi r3, 0
/* 80668B48  41 82 00 38 */	beq lbl_80668B80
/* 80668B4C  38 00 00 06 */	li r0, 6
/* 80668B50  B0 1F 05 F2 */	sth r0, 0x5f2(r31)
/* 80668B54  3C 60 80 67 */	lis r3, lit_4069@ha /* 0x8066EE3C@ha */
/* 80668B58  C0 03 EE 3C */	lfs f0, lit_4069@l(r3)  /* 0x8066EE3C@l */
/* 80668B5C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80668B60  40 81 00 10 */	ble lbl_80668B70
/* 80668B64  38 00 00 0A */	li r0, 0xa
/* 80668B68  B0 1F 05 F6 */	sth r0, 0x5f6(r31)
/* 80668B6C  48 00 00 0C */	b lbl_80668B78
lbl_80668B70:
/* 80668B70  38 00 00 00 */	li r0, 0
/* 80668B74  B0 1F 05 F6 */	sth r0, 0x5f6(r31)
lbl_80668B78:
/* 80668B78  38 60 00 01 */	li r3, 1
/* 80668B7C  48 00 00 08 */	b lbl_80668B84
lbl_80668B80:
/* 80668B80  38 60 00 00 */	li r3, 0
lbl_80668B84:
/* 80668B84  E3 E1 00 18 */	psq_l f31, 24(r1), 0, 0 /* qr0 */
/* 80668B88  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80668B8C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80668B90  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80668B94  7C 08 03 A6 */	mtlr r0
/* 80668B98  38 21 00 20 */	addi r1, r1, 0x20
/* 80668B9C  4E 80 00 20 */	blr 
