lbl_8025115C:
/* 8025115C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80251160  7C 08 02 A6 */	mflr r0
/* 80251164  90 01 00 14 */	stw r0, 0x14(r1)
/* 80251168  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025116C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80251170  41 82 00 1C */	beq lbl_8025118C
/* 80251174  3C A0 80 3C */	lis r5, __vt__14dDlst_NameIN_c@ha /* 0x803C2B38@ha */
/* 80251178  38 05 2B 38 */	addi r0, r5, __vt__14dDlst_NameIN_c@l /* 0x803C2B38@l */
/* 8025117C  90 1F 00 00 */	stw r0, 0(r31)
/* 80251180  7C 80 07 35 */	extsh. r0, r4
/* 80251184  40 81 00 08 */	ble lbl_8025118C
/* 80251188  48 07 DB B5 */	bl __dl__FPv
lbl_8025118C:
/* 8025118C  7F E3 FB 78 */	mr r3, r31
/* 80251190  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80251194  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80251198  7C 08 03 A6 */	mtlr r0
/* 8025119C  38 21 00 10 */	addi r1, r1, 0x10
/* 802511A0  4E 80 00 20 */	blr 
