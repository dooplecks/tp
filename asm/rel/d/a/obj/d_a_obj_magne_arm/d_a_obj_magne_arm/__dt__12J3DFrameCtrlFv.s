lbl_805901FC:
/* 805901FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80590200  7C 08 02 A6 */	mflr r0
/* 80590204  90 01 00 14 */	stw r0, 0x14(r1)
/* 80590208  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8059020C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80590210  41 82 00 1C */	beq lbl_8059022C
/* 80590214  3C A0 80 59 */	lis r5, __vt__12J3DFrameCtrl@ha /* 0x80592D30@ha */
/* 80590218  38 05 2D 30 */	addi r0, r5, __vt__12J3DFrameCtrl@l /* 0x80592D30@l */
/* 8059021C  90 1F 00 00 */	stw r0, 0(r31)
/* 80590220  7C 80 07 35 */	extsh. r0, r4
/* 80590224  40 81 00 08 */	ble lbl_8059022C
/* 80590228  4B D3 EB 15 */	bl __dl__FPv
lbl_8059022C:
/* 8059022C  7F E3 FB 78 */	mr r3, r31
/* 80590230  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80590234  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80590238  7C 08 03 A6 */	mtlr r0
/* 8059023C  38 21 00 10 */	addi r1, r1, 0x10
/* 80590240  4E 80 00 20 */	blr 
