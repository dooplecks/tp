lbl_8046F52C:
/* 8046F52C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8046F530  7C 08 02 A6 */	mflr r0
/* 8046F534  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046F538  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8046F53C  7C 7F 1B 78 */	mr r31, r3
/* 8046F540  4B BA 97 A1 */	bl fopAc_IsActor__FPv
/* 8046F544  2C 03 00 00 */	cmpwi r3, 0
/* 8046F548  41 82 00 3C */	beq lbl_8046F584
/* 8046F54C  A8 1F 00 08 */	lha r0, 8(r31)
/* 8046F550  2C 00 01 9A */	cmpwi r0, 0x19a
/* 8046F554  40 82 00 30 */	bne lbl_8046F584
/* 8046F558  28 1F 00 00 */	cmplwi r31, 0
/* 8046F55C  41 82 00 28 */	beq lbl_8046F584
/* 8046F560  3C 60 80 48 */	lis r3, l_sw_id@ha /* 0x8047B1D8@ha */
/* 8046F564  38 63 B1 D8 */	addi r3, r3, l_sw_id@l /* 0x8047B1D8@l */
/* 8046F568  80 63 00 00 */	lwz r3, 0(r3)
/* 8046F56C  80 1F 00 B0 */	lwz r0, 0xb0(r31)
/* 8046F570  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8046F574  7C 03 00 00 */	cmpw r3, r0
/* 8046F578  40 82 00 0C */	bne lbl_8046F584
/* 8046F57C  7F E3 FB 78 */	mr r3, r31
/* 8046F580  48 00 00 08 */	b lbl_8046F588
lbl_8046F584:
/* 8046F584  38 60 00 00 */	li r3, 0
lbl_8046F588:
/* 8046F588  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8046F58C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046F590  7C 08 03 A6 */	mtlr r0
/* 8046F594  38 21 00 10 */	addi r1, r1, 0x10
/* 8046F598  4E 80 00 20 */	blr 
