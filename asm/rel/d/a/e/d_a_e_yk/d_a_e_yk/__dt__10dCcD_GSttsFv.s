lbl_8080765C:
/* 8080765C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80807660  7C 08 02 A6 */	mflr r0
/* 80807664  90 01 00 14 */	stw r0, 0x14(r1)
/* 80807668  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8080766C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80807670  41 82 00 30 */	beq lbl_808076A0
/* 80807674  3C 60 80 80 */	lis r3, __vt__10dCcD_GStts@ha /* 0x80807E98@ha */
/* 80807678  38 03 7E 98 */	addi r0, r3, __vt__10dCcD_GStts@l /* 0x80807E98@l */
/* 8080767C  90 1F 00 00 */	stw r0, 0(r31)
/* 80807680  41 82 00 10 */	beq lbl_80807690
/* 80807684  3C 60 80 80 */	lis r3, __vt__10cCcD_GStts@ha /* 0x80807E8C@ha */
/* 80807688  38 03 7E 8C */	addi r0, r3, __vt__10cCcD_GStts@l /* 0x80807E8C@l */
/* 8080768C  90 1F 00 00 */	stw r0, 0(r31)
lbl_80807690:
/* 80807690  7C 80 07 35 */	extsh. r0, r4
/* 80807694  40 81 00 0C */	ble lbl_808076A0
/* 80807698  7F E3 FB 78 */	mr r3, r31
/* 8080769C  4B AC 76 A1 */	bl __dl__FPv
lbl_808076A0:
/* 808076A0  7F E3 FB 78 */	mr r3, r31
/* 808076A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 808076A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 808076AC  7C 08 03 A6 */	mtlr r0
/* 808076B0  38 21 00 10 */	addi r1, r1, 0x10
/* 808076B4  4E 80 00 20 */	blr 
