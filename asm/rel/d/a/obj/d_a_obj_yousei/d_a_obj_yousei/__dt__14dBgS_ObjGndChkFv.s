lbl_804D0910:
/* 804D0910  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804D0914  7C 08 02 A6 */	mflr r0
/* 804D0918  90 01 00 14 */	stw r0, 0x14(r1)
/* 804D091C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804D0920  93 C1 00 08 */	stw r30, 8(r1)
/* 804D0924  7C 7E 1B 79 */	or. r30, r3, r3
/* 804D0928  7C 9F 23 78 */	mr r31, r4
/* 804D092C  41 82 00 40 */	beq lbl_804D096C
/* 804D0930  3C 80 80 4D */	lis r4, __vt__14dBgS_ObjGndChk@ha /* 0x804D17B4@ha */
/* 804D0934  38 84 17 B4 */	addi r4, r4, __vt__14dBgS_ObjGndChk@l /* 0x804D17B4@l */
/* 804D0938  90 9E 00 10 */	stw r4, 0x10(r30)
/* 804D093C  38 04 00 0C */	addi r0, r4, 0xc
/* 804D0940  90 1E 00 20 */	stw r0, 0x20(r30)
/* 804D0944  38 04 00 18 */	addi r0, r4, 0x18
/* 804D0948  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 804D094C  38 04 00 24 */	addi r0, r4, 0x24
/* 804D0950  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 804D0954  38 80 00 00 */	li r4, 0
/* 804D0958  4B BA 6C 99 */	bl __dt__11dBgS_GndChkFv
/* 804D095C  7F E0 07 35 */	extsh. r0, r31
/* 804D0960  40 81 00 0C */	ble lbl_804D096C
/* 804D0964  7F C3 F3 78 */	mr r3, r30
/* 804D0968  4B DF E3 D5 */	bl __dl__FPv
lbl_804D096C:
/* 804D096C  7F C3 F3 78 */	mr r3, r30
/* 804D0970  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804D0974  83 C1 00 08 */	lwz r30, 8(r1)
/* 804D0978  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804D097C  7C 08 03 A6 */	mtlr r0
/* 804D0980  38 21 00 10 */	addi r1, r1, 0x10
/* 804D0984  4E 80 00 20 */	blr 
