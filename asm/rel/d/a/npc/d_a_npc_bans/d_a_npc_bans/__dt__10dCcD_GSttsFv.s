lbl_809674D4:
/* 809674D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809674D8  7C 08 02 A6 */	mflr r0
/* 809674DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 809674E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809674E4  7C 7F 1B 79 */	or. r31, r3, r3
/* 809674E8  41 82 00 30 */	beq lbl_80967518
/* 809674EC  3C 60 80 97 */	lis r3, __vt__10dCcD_GStts@ha /* 0x80968728@ha */
/* 809674F0  38 03 87 28 */	addi r0, r3, __vt__10dCcD_GStts@l /* 0x80968728@l */
/* 809674F4  90 1F 00 00 */	stw r0, 0(r31)
/* 809674F8  41 82 00 10 */	beq lbl_80967508
/* 809674FC  3C 60 80 97 */	lis r3, __vt__10cCcD_GStts@ha /* 0x8096871C@ha */
/* 80967500  38 03 87 1C */	addi r0, r3, __vt__10cCcD_GStts@l /* 0x8096871C@l */
/* 80967504  90 1F 00 00 */	stw r0, 0(r31)
lbl_80967508:
/* 80967508  7C 80 07 35 */	extsh. r0, r4
/* 8096750C  40 81 00 0C */	ble lbl_80967518
/* 80967510  7F E3 FB 78 */	mr r3, r31
/* 80967514  4B 96 78 29 */	bl __dl__FPv
lbl_80967518:
/* 80967518  7F E3 FB 78 */	mr r3, r31
/* 8096751C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80967520  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80967524  7C 08 03 A6 */	mtlr r0
/* 80967528  38 21 00 10 */	addi r1, r1, 0x10
/* 8096752C  4E 80 00 20 */	blr 
