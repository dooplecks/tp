lbl_80159DC0:
/* 80159DC0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80159DC4  7C 08 02 A6 */	mflr r0
/* 80159DC8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80159DCC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80159DD0  7C 7F 1B 78 */	mr r31, r3
/* 80159DD4  C0 04 00 00 */	lfs f0, 0(r4)
/* 80159DD8  D0 01 00 08 */	stfs f0, 8(r1)
/* 80159DDC  C0 04 00 04 */	lfs f0, 4(r4)
/* 80159DE0  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80159DE4  C0 04 00 08 */	lfs f0, 8(r4)
/* 80159DE8  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80159DEC  38 81 00 08 */	addi r4, r1, 8
/* 80159DF0  4B FF FE 25 */	bl checkPoint__11PathTrace_cF4cXyzf
/* 80159DF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80159DF8  41 82 00 44 */	beq lbl_80159E3C
/* 80159DFC  88 1F 00 24 */	lbz r0, 0x24(r31)
/* 80159E00  7C 00 07 75 */	extsb. r0, r0
/* 80159E04  40 81 00 24 */	ble lbl_80159E28
/* 80159E08  80 9F 00 20 */	lwz r4, 0x20(r31)
/* 80159E0C  80 7F 00 08 */	lwz r3, 8(r31)
/* 80159E10  A0 63 00 00 */	lhz r3, 0(r3)
/* 80159E14  38 03 FF FF */	addi r0, r3, -1
/* 80159E18  7C 04 00 00 */	cmpw r4, r0
/* 80159E1C  41 80 00 20 */	blt lbl_80159E3C
/* 80159E20  38 60 00 01 */	li r3, 1
/* 80159E24  48 00 00 1C */	b lbl_80159E40
lbl_80159E28:
/* 80159E28  80 1F 00 20 */	lwz r0, 0x20(r31)
/* 80159E2C  2C 00 00 00 */	cmpwi r0, 0
/* 80159E30  41 81 00 0C */	bgt lbl_80159E3C
/* 80159E34  38 60 00 01 */	li r3, 1
/* 80159E38  48 00 00 08 */	b lbl_80159E40
lbl_80159E3C:
/* 80159E3C  38 60 00 00 */	li r3, 0
lbl_80159E40:
/* 80159E40  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80159E44  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80159E48  7C 08 03 A6 */	mtlr r0
/* 80159E4C  38 21 00 20 */	addi r1, r1, 0x20
/* 80159E50  4E 80 00 20 */	blr 
