lbl_809B54F4:
/* 809B54F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809B54F8  7C 08 02 A6 */	mflr r0
/* 809B54FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 809B5500  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809B5504  3B E0 00 00 */	li r31, 0
/* 809B5508  80 04 00 00 */	lwz r0, 0(r4)
/* 809B550C  2C 00 00 1E */	cmpwi r0, 0x1e
/* 809B5510  41 82 00 6C */	beq lbl_809B557C
/* 809B5514  40 80 00 1C */	bge lbl_809B5530
/* 809B5518  2C 00 00 14 */	cmpwi r0, 0x14
/* 809B551C  41 82 00 44 */	beq lbl_809B5560
/* 809B5520  40 80 00 84 */	bge lbl_809B55A4
/* 809B5524  2C 00 00 0A */	cmpwi r0, 0xa
/* 809B5528  41 82 00 14 */	beq lbl_809B553C
/* 809B552C  48 00 00 78 */	b lbl_809B55A4
lbl_809B5530:
/* 809B5530  2C 00 00 32 */	cmpwi r0, 0x32
/* 809B5534  41 82 00 6C */	beq lbl_809B55A0
/* 809B5538  48 00 00 6C */	b lbl_809B55A4
lbl_809B553C:
/* 809B553C  A8 83 0F 90 */	lha r4, 0xf90(r3)
/* 809B5540  38 04 FF FF */	addi r0, r4, -1
/* 809B5544  B0 03 0F 90 */	sth r0, 0xf90(r3)
/* 809B5548  7C 00 07 35 */	extsh. r0, r0
/* 809B554C  41 81 00 58 */	bgt lbl_809B55A4
/* 809B5550  38 60 00 0B */	li r3, 0xb
/* 809B5554  4B 7F 32 91 */	bl dKy_change_colpat__FUc
/* 809B5558  3B E0 00 01 */	li r31, 1
/* 809B555C  48 00 00 48 */	b lbl_809B55A4
lbl_809B5560:
/* 809B5560  A8 83 0F 90 */	lha r4, 0xf90(r3)
/* 809B5564  38 04 FF FF */	addi r0, r4, -1
/* 809B5568  B0 03 0F 90 */	sth r0, 0xf90(r3)
/* 809B556C  7C 00 07 35 */	extsh. r0, r0
/* 809B5570  41 81 00 34 */	bgt lbl_809B55A4
/* 809B5574  3B E0 00 01 */	li r31, 1
/* 809B5578  48 00 00 2C */	b lbl_809B55A4
lbl_809B557C:
/* 809B557C  38 80 00 00 */	li r4, 0
/* 809B5580  38 A0 00 00 */	li r5, 0
/* 809B5584  38 C0 00 00 */	li r6, 0
/* 809B5588  38 E0 00 00 */	li r7, 0
/* 809B558C  4B 79 66 ED */	bl talkProc__8daNpcT_cFPiiPP10fopAc_ac_ci
/* 809B5590  2C 03 00 00 */	cmpwi r3, 0
/* 809B5594  41 82 00 10 */	beq lbl_809B55A4
/* 809B5598  3B E0 00 01 */	li r31, 1
/* 809B559C  48 00 00 08 */	b lbl_809B55A4
lbl_809B55A0:
/* 809B55A0  3B E0 00 01 */	li r31, 1
lbl_809B55A4:
/* 809B55A4  7F E3 FB 78 */	mr r3, r31
/* 809B55A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809B55AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809B55B0  7C 08 03 A6 */	mtlr r0
/* 809B55B4  38 21 00 10 */	addi r1, r1, 0x10
/* 809B55B8  4E 80 00 20 */	blr 
