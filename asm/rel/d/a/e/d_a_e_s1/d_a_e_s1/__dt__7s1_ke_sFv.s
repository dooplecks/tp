lbl_807803F4:
/* 807803F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 807803F8  7C 08 02 A6 */	mflr r0
/* 807803FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80780400  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80780404  93 C1 00 08 */	stw r30, 8(r1)
/* 80780408  7C 7E 1B 79 */	or. r30, r3, r3
/* 8078040C  7C 9F 23 78 */	mr r31, r4
/* 80780410  41 82 00 44 */	beq lbl_80780454
/* 80780414  38 7E 00 C0 */	addi r3, r30, 0xc0
/* 80780418  3C 80 80 78 */	lis r4, __dt__4cXyzFv@ha /* 0x80780D74@ha */
/* 8078041C  38 84 0D 74 */	addi r4, r4, __dt__4cXyzFv@l /* 0x80780D74@l */
/* 80780420  38 A0 00 0C */	li r5, 0xc
/* 80780424  38 C0 00 10 */	li r6, 0x10
/* 80780428  4B BE 18 C1 */	bl __destroy_arr
/* 8078042C  7F C3 F3 78 */	mr r3, r30
/* 80780430  3C 80 80 78 */	lis r4, __dt__4cXyzFv@ha /* 0x80780D74@ha */
/* 80780434  38 84 0D 74 */	addi r4, r4, __dt__4cXyzFv@l /* 0x80780D74@l */
/* 80780438  38 A0 00 0C */	li r5, 0xc
/* 8078043C  38 C0 00 10 */	li r6, 0x10
/* 80780440  4B BE 18 A9 */	bl __destroy_arr
/* 80780444  7F E0 07 35 */	extsh. r0, r31
/* 80780448  40 81 00 0C */	ble lbl_80780454
/* 8078044C  7F C3 F3 78 */	mr r3, r30
/* 80780450  4B B4 E8 ED */	bl __dl__FPv
lbl_80780454:
/* 80780454  7F C3 F3 78 */	mr r3, r30
/* 80780458  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8078045C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80780460  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80780464  7C 08 03 A6 */	mtlr r0
/* 80780468  38 21 00 10 */	addi r1, r1, 0x10
/* 8078046C  4E 80 00 20 */	blr 
