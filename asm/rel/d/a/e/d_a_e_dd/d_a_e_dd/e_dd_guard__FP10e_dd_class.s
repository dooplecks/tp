lbl_806A42F0:
/* 806A42F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806A42F4  7C 08 02 A6 */	mflr r0
/* 806A42F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 806A42FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 806A4300  93 C1 00 08 */	stw r30, 8(r1)
/* 806A4304  7C 7E 1B 78 */	mr r30, r3
/* 806A4308  3C 60 80 6A */	lis r3, lit_3903@ha /* 0x806A71C4@ha */
/* 806A430C  3B E3 71 C4 */	addi r31, r3, lit_3903@l /* 0x806A71C4@l */
/* 806A4310  38 7E 05 2C */	addi r3, r30, 0x52c
/* 806A4314  C0 3F 00 08 */	lfs f1, 8(r31)
/* 806A4318  C0 5F 00 64 */	lfs f2, 0x64(r31)
/* 806A431C  4B BC B7 65 */	bl cLib_addCalc0__FPfff
/* 806A4320  38 00 00 05 */	li r0, 5
/* 806A4324  B0 1E 06 B2 */	sth r0, 0x6b2(r30)
/* 806A4328  A8 1E 06 8C */	lha r0, 0x68c(r30)
/* 806A432C  2C 00 00 01 */	cmpwi r0, 1
/* 806A4330  41 82 00 38 */	beq lbl_806A4368
/* 806A4334  40 80 00 74 */	bge lbl_806A43A8
/* 806A4338  2C 00 00 00 */	cmpwi r0, 0
/* 806A433C  40 80 00 08 */	bge lbl_806A4344
/* 806A4340  48 00 00 68 */	b lbl_806A43A8
lbl_806A4344:
/* 806A4344  7F C3 F3 78 */	mr r3, r30
/* 806A4348  38 80 00 11 */	li r4, 0x11
/* 806A434C  C0 3F 00 64 */	lfs f1, 0x64(r31)
/* 806A4350  38 A0 00 00 */	li r5, 0
/* 806A4354  C0 5F 00 08 */	lfs f2, 8(r31)
/* 806A4358  4B FF DF 75 */	bl anm_init__FP10e_dd_classifUcf
/* 806A435C  38 00 00 01 */	li r0, 1
/* 806A4360  B0 1E 06 8C */	sth r0, 0x68c(r30)
/* 806A4364  48 00 00 44 */	b lbl_806A43A8
lbl_806A4368:
/* 806A4368  80 7E 05 C0 */	lwz r3, 0x5c0(r30)
/* 806A436C  38 80 00 01 */	li r4, 1
/* 806A4370  88 03 00 11 */	lbz r0, 0x11(r3)
/* 806A4374  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 806A4378  40 82 00 18 */	bne lbl_806A4390
/* 806A437C  C0 3F 00 04 */	lfs f1, 4(r31)
/* 806A4380  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 806A4384  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 806A4388  41 82 00 08 */	beq lbl_806A4390
/* 806A438C  38 80 00 00 */	li r4, 0
lbl_806A4390:
/* 806A4390  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 806A4394  41 82 00 14 */	beq lbl_806A43A8
/* 806A4398  38 00 00 03 */	li r0, 3
/* 806A439C  B0 1E 06 8A */	sth r0, 0x68a(r30)
/* 806A43A0  38 00 00 00 */	li r0, 0
/* 806A43A4  B0 1E 06 8C */	sth r0, 0x68c(r30)
lbl_806A43A8:
/* 806A43A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 806A43AC  83 C1 00 08 */	lwz r30, 8(r1)
/* 806A43B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 806A43B4  7C 08 03 A6 */	mtlr r0
/* 806A43B8  38 21 00 10 */	addi r1, r1, 0x10
/* 806A43BC  4E 80 00 20 */	blr 
