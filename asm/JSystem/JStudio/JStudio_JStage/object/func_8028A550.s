lbl_8028A550:
/* 8028A550  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028A554  7C 08 02 A6 */	mflr r0
/* 8028A558  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028A55C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028A560  2C 04 00 02 */	cmpwi r4, 2
/* 8028A564  41 82 00 08 */	beq lbl_8028A56C
/* 8028A568  48 00 00 74 */	b lbl_8028A5DC
lbl_8028A56C:
/* 8028A56C  80 05 00 00 */	lwz r0, 0(r5)
/* 8028A570  28 00 00 00 */	cmplwi r0, 0
/* 8028A574  41 82 00 38 */	beq lbl_8028A5AC
/* 8028A578  83 E3 00 04 */	lwz r31, 4(r3)
/* 8028A57C  7F E3 FB 78 */	mr r3, r31
/* 8028A580  81 9F 00 00 */	lwz r12, 0(r31)
/* 8028A584  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8028A588  7D 89 03 A6 */	mtctr r12
/* 8028A58C  4E 80 04 21 */	bctrl 
/* 8028A590  60 64 00 02 */	ori r4, r3, 2
/* 8028A594  7F E3 FB 78 */	mr r3, r31
/* 8028A598  81 9F 00 00 */	lwz r12, 0(r31)
/* 8028A59C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028A5A0  7D 89 03 A6 */	mtctr r12
/* 8028A5A4  4E 80 04 21 */	bctrl 
/* 8028A5A8  48 00 00 34 */	b lbl_8028A5DC
lbl_8028A5AC:
/* 8028A5AC  83 E3 00 04 */	lwz r31, 4(r3)
/* 8028A5B0  7F E3 FB 78 */	mr r3, r31
/* 8028A5B4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8028A5B8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8028A5BC  7D 89 03 A6 */	mtctr r12
/* 8028A5C0  4E 80 04 21 */	bctrl 
/* 8028A5C4  54 64 07 FA */	rlwinm r4, r3, 0, 0x1f, 0x1d
/* 8028A5C8  7F E3 FB 78 */	mr r3, r31
/* 8028A5CC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8028A5D0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028A5D4  7D 89 03 A6 */	mtctr r12
/* 8028A5D8  4E 80 04 21 */	bctrl 
lbl_8028A5DC:
/* 8028A5DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028A5E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028A5E4  7C 08 03 A6 */	mtlr r0
/* 8028A5E8  38 21 00 10 */	addi r1, r1, 0x10
/* 8028A5EC  4E 80 00 20 */	blr 