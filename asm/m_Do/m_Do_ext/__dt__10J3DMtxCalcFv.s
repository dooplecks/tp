lbl_8000D948:
/* 8000D948  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8000D94C  7C 08 02 A6 */	mflr r0
/* 8000D950  90 01 00 14 */	stw r0, 0x14(r1)
/* 8000D954  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8000D958  7C 7F 1B 79 */	or. r31, r3, r3
/* 8000D95C  41 82 00 1C */	beq lbl_8000D978
/* 8000D960  3C A0 80 3A */	lis r5, __vt__10J3DMtxCalc@ha /* 0x803A3468@ha */
/* 8000D964  38 05 34 68 */	addi r0, r5, __vt__10J3DMtxCalc@l /* 0x803A3468@l */
/* 8000D968  90 1F 00 00 */	stw r0, 0(r31)
/* 8000D96C  7C 80 07 35 */	extsh. r0, r4
/* 8000D970  40 81 00 08 */	ble lbl_8000D978
/* 8000D974  48 2C 13 C9 */	bl __dl__FPv
lbl_8000D978:
/* 8000D978  7F E3 FB 78 */	mr r3, r31
/* 8000D97C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8000D980  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8000D984  7C 08 03 A6 */	mtlr r0
/* 8000D988  38 21 00 10 */	addi r1, r1, 0x10
/* 8000D98C  4E 80 00 20 */	blr 
