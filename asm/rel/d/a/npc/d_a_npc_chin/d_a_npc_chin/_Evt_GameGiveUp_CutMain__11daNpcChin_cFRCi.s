lbl_80990950:
/* 80990950  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80990954  7C 08 02 A6 */	mflr r0
/* 80990958  90 01 00 14 */	stw r0, 0x14(r1)
/* 8099095C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80990960  93 C1 00 08 */	stw r30, 8(r1)
/* 80990964  7C 7E 1B 78 */	mr r30, r3
/* 80990968  3B E0 00 00 */	li r31, 0
/* 8099096C  80 04 00 00 */	lwz r0, 0(r4)
/* 80990970  2C 00 00 14 */	cmpwi r0, 0x14
/* 80990974  41 82 00 1C */	beq lbl_80990990
/* 80990978  40 80 00 60 */	bge lbl_809909D8
/* 8099097C  2C 00 00 0A */	cmpwi r0, 0xa
/* 80990980  41 82 00 08 */	beq lbl_80990988
/* 80990984  48 00 00 54 */	b lbl_809909D8
lbl_80990988:
/* 80990988  38 60 00 01 */	li r3, 1
/* 8099098C  48 00 00 50 */	b lbl_809909DC
lbl_80990990:
/* 80990990  38 80 00 00 */	li r4, 0
/* 80990994  38 A0 00 01 */	li r5, 1
/* 80990998  38 C0 00 00 */	li r6, 0
/* 8099099C  4B 7C 33 E9 */	bl talkProc__8daNpcF_cFPiiPP10fopAc_ac_c
/* 809909A0  2C 03 00 00 */	cmpwi r3, 0
/* 809909A4  41 82 00 2C */	beq lbl_809909D0
/* 809909A8  7F C3 F3 78 */	mr r3, r30
/* 809909AC  38 80 00 0E */	li r4, 0xe
/* 809909B0  3C A0 80 99 */	lis r5, lit_4627@ha /* 0x809919A4@ha */
/* 809909B4  C0 25 19 A4 */	lfs f1, lit_4627@l(r5)  /* 0x809919A4@l */
/* 809909B8  81 9E 0B 44 */	lwz r12, 0xb44(r30)
/* 809909BC  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 809909C0  7D 89 03 A6 */	mtctr r12
/* 809909C4  4E 80 04 21 */	bctrl 
/* 809909C8  3B E0 00 01 */	li r31, 1
/* 809909CC  48 00 00 0C */	b lbl_809909D8
lbl_809909D0:
/* 809909D0  7F C3 F3 78 */	mr r3, r30
/* 809909D4  4B FF E8 35 */	bl _talk_motion__11daNpcChin_cFv
lbl_809909D8:
/* 809909D8  7F E3 FB 78 */	mr r3, r31
lbl_809909DC:
/* 809909DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809909E0  83 C1 00 08 */	lwz r30, 8(r1)
/* 809909E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809909E8  7C 08 03 A6 */	mtlr r0
/* 809909EC  38 21 00 10 */	addi r1, r1, 0x10
/* 809909F0  4E 80 00 20 */	blr 
