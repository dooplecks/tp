lbl_80288024:
/* 80288024  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80288028  7C 08 02 A6 */	mflr r0
/* 8028802C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80288030  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80288034  93 C1 00 08 */	stw r30, 8(r1)
/* 80288038  7C 7E 1B 79 */	or. r30, r3, r3
/* 8028803C  7C 9F 23 78 */	mr r31, r4
/* 80288040  41 82 00 28 */	beq lbl_80288068
/* 80288044  3C 80 80 3C */	lis r4, __vt__Q27JStudio13TObject_light@ha /* 0x803C545C@ha */
/* 80288048  38 04 54 5C */	addi r0, r4, __vt__Q27JStudio13TObject_light@l /* 0x803C545C@l */
/* 8028804C  90 1E 00 08 */	stw r0, 8(r30)
/* 80288050  38 80 00 00 */	li r4, 0
/* 80288054  4B FF E6 5D */	bl __dt__Q27JStudio7TObjectFv
/* 80288058  7F E0 07 35 */	extsh. r0, r31
/* 8028805C  40 81 00 0C */	ble lbl_80288068
/* 80288060  7F C3 F3 78 */	mr r3, r30
/* 80288064  48 04 6C D9 */	bl __dl__FPv
lbl_80288068:
/* 80288068  7F C3 F3 78 */	mr r3, r30
/* 8028806C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80288070  83 C1 00 08 */	lwz r30, 8(r1)
/* 80288074  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80288078  7C 08 03 A6 */	mtlr r0
/* 8028807C  38 21 00 10 */	addi r1, r1, 0x10
/* 80288080  4E 80 00 20 */	blr 
