lbl_807A3450:
/* 807A3450  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 807A3454  7C 08 02 A6 */	mflr r0
/* 807A3458  90 01 00 24 */	stw r0, 0x24(r1)
/* 807A345C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 807A3460  93 C1 00 18 */	stw r30, 0x18(r1)
/* 807A3464  7C 7E 1B 78 */	mr r30, r3
/* 807A3468  3C 80 80 7A */	lis r4, lit_3903@ha /* 0x807A6824@ha */
/* 807A346C  3B E4 68 24 */	addi r31, r4, lit_3903@l /* 0x807A6824@l */
/* 807A3470  A8 03 06 80 */	lha r0, 0x680(r3)
/* 807A3474  2C 00 00 01 */	cmpwi r0, 1
/* 807A3478  41 82 00 60 */	beq lbl_807A34D8
/* 807A347C  40 80 00 A4 */	bge lbl_807A3520
/* 807A3480  2C 00 00 00 */	cmpwi r0, 0
/* 807A3484  40 80 00 08 */	bge lbl_807A348C
/* 807A3488  48 00 00 98 */	b lbl_807A3520
lbl_807A348C:
/* 807A348C  38 00 00 01 */	li r0, 1
/* 807A3490  B0 1E 06 80 */	sth r0, 0x680(r30)
/* 807A3494  38 80 00 25 */	li r4, 0x25
/* 807A3498  C0 3F 00 AC */	lfs f1, 0xac(r31)
/* 807A349C  38 A0 00 00 */	li r5, 0
/* 807A34A0  C0 5F 00 08 */	lfs f2, 8(r31)
/* 807A34A4  4B FF A9 A9 */	bl anm_init__FP10e_st_classifUcf
/* 807A34A8  3C 60 00 07 */	lis r3, 0x0007 /* 0x0007022C@ha */
/* 807A34AC  38 03 02 2C */	addi r0, r3, 0x022C /* 0x0007022C@l */
/* 807A34B0  90 01 00 08 */	stw r0, 8(r1)
/* 807A34B4  38 7E 05 D0 */	addi r3, r30, 0x5d0
/* 807A34B8  38 81 00 08 */	addi r4, r1, 8
/* 807A34BC  38 A0 00 00 */	li r5, 0
/* 807A34C0  38 C0 FF FF */	li r6, -1
/* 807A34C4  81 9E 05 D0 */	lwz r12, 0x5d0(r30)
/* 807A34C8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 807A34CC  7D 89 03 A6 */	mtctr r12
/* 807A34D0  4E 80 04 21 */	bctrl 
/* 807A34D4  48 00 00 4C */	b lbl_807A3520
lbl_807A34D8:
/* 807A34D8  80 7E 05 CC */	lwz r3, 0x5cc(r30)
/* 807A34DC  38 80 00 01 */	li r4, 1
/* 807A34E0  88 03 00 11 */	lbz r0, 0x11(r3)
/* 807A34E4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 807A34E8  40 82 00 18 */	bne lbl_807A3500
/* 807A34EC  C0 3F 00 04 */	lfs f1, 4(r31)
/* 807A34F0  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 807A34F4  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 807A34F8  41 82 00 08 */	beq lbl_807A3500
/* 807A34FC  38 80 00 00 */	li r4, 0
lbl_807A3500:
/* 807A3500  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 807A3504  41 82 00 1C */	beq lbl_807A3520
/* 807A3508  38 00 00 33 */	li r0, 0x33
/* 807A350C  B0 1E 06 7E */	sth r0, 0x67e(r30)
/* 807A3510  38 00 00 00 */	li r0, 0
/* 807A3514  B0 1E 06 80 */	sth r0, 0x680(r30)
/* 807A3518  38 00 00 02 */	li r0, 2
/* 807A351C  98 1E 05 B4 */	stb r0, 0x5b4(r30)
lbl_807A3520:
/* 807A3520  38 7E 05 2C */	addi r3, r30, 0x52c
/* 807A3524  C0 3F 00 08 */	lfs f1, 8(r31)
/* 807A3528  C0 5F 00 AC */	lfs f2, 0xac(r31)
/* 807A352C  4B AC C5 55 */	bl cLib_addCalc0__FPfff
/* 807A3530  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 807A3534  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 807A3538  80 01 00 24 */	lwz r0, 0x24(r1)
/* 807A353C  7C 08 03 A6 */	mtlr r0
/* 807A3540  38 21 00 20 */	addi r1, r1, 0x20
/* 807A3544  4E 80 00 20 */	blr 
