lbl_807A3148:
/* 807A3148  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 807A314C  7C 08 02 A6 */	mflr r0
/* 807A3150  90 01 00 24 */	stw r0, 0x24(r1)
/* 807A3154  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 807A3158  93 C1 00 18 */	stw r30, 0x18(r1)
/* 807A315C  7C 7E 1B 78 */	mr r30, r3
/* 807A3160  3C 80 80 7A */	lis r4, lit_3903@ha /* 0x807A6824@ha */
/* 807A3164  3B E4 68 24 */	addi r31, r4, lit_3903@l /* 0x807A6824@l */
/* 807A3168  38 80 00 01 */	li r4, 1
/* 807A316C  98 83 0C F4 */	stb r4, 0xcf4(r3)
/* 807A3170  A8 03 06 80 */	lha r0, 0x680(r3)
/* 807A3174  2C 00 00 01 */	cmpwi r0, 1
/* 807A3178  41 82 00 5C */	beq lbl_807A31D4
/* 807A317C  40 80 00 94 */	bge lbl_807A3210
/* 807A3180  2C 00 00 00 */	cmpwi r0, 0
/* 807A3184  40 80 00 08 */	bge lbl_807A318C
/* 807A3188  48 00 00 88 */	b lbl_807A3210
lbl_807A318C:
/* 807A318C  38 80 00 11 */	li r4, 0x11
/* 807A3190  C0 3F 00 60 */	lfs f1, 0x60(r31)
/* 807A3194  38 A0 00 00 */	li r5, 0
/* 807A3198  C0 5F 00 08 */	lfs f2, 8(r31)
/* 807A319C  4B FF AC B1 */	bl anm_init__FP10e_st_classifUcf
/* 807A31A0  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070169@ha */
/* 807A31A4  38 03 01 69 */	addi r0, r3, 0x0169 /* 0x00070169@l */
/* 807A31A8  90 01 00 08 */	stw r0, 8(r1)
/* 807A31AC  38 7E 05 D0 */	addi r3, r30, 0x5d0
/* 807A31B0  38 81 00 08 */	addi r4, r1, 8
/* 807A31B4  38 A0 FF FF */	li r5, -1
/* 807A31B8  81 9E 05 D0 */	lwz r12, 0x5d0(r30)
/* 807A31BC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 807A31C0  7D 89 03 A6 */	mtctr r12
/* 807A31C4  4E 80 04 21 */	bctrl 
/* 807A31C8  38 00 00 01 */	li r0, 1
/* 807A31CC  B0 1E 06 80 */	sth r0, 0x680(r30)
/* 807A31D0  48 00 00 40 */	b lbl_807A3210
lbl_807A31D4:
/* 807A31D4  80 7E 05 CC */	lwz r3, 0x5cc(r30)
/* 807A31D8  88 03 00 11 */	lbz r0, 0x11(r3)
/* 807A31DC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 807A31E0  40 82 00 18 */	bne lbl_807A31F8
/* 807A31E4  C0 3F 00 04 */	lfs f1, 4(r31)
/* 807A31E8  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 807A31EC  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 807A31F0  41 82 00 08 */	beq lbl_807A31F8
/* 807A31F4  38 80 00 00 */	li r4, 0
lbl_807A31F8:
/* 807A31F8  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 807A31FC  41 82 00 14 */	beq lbl_807A3210
/* 807A3200  38 00 00 33 */	li r0, 0x33
/* 807A3204  B0 1E 06 7E */	sth r0, 0x67e(r30)
/* 807A3208  38 00 00 00 */	li r0, 0
/* 807A320C  B0 1E 06 80 */	sth r0, 0x680(r30)
lbl_807A3210:
/* 807A3210  38 7E 05 2C */	addi r3, r30, 0x52c
/* 807A3214  C0 3F 00 04 */	lfs f1, 4(r31)
/* 807A3218  C0 5F 00 08 */	lfs f2, 8(r31)
/* 807A321C  C0 7F 00 60 */	lfs f3, 0x60(r31)
/* 807A3220  4B AC C8 1D */	bl cLib_addCalc2__FPffff
/* 807A3224  38 60 00 01 */	li r3, 1
/* 807A3228  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 807A322C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 807A3230  80 01 00 24 */	lwz r0, 0x24(r1)
/* 807A3234  7C 08 03 A6 */	mtlr r0
/* 807A3238  38 21 00 20 */	addi r1, r1, 0x20
/* 807A323C  4E 80 00 20 */	blr 
