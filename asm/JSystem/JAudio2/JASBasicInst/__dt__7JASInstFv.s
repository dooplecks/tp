lbl_8029828C:
/* 8029828C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80298290  7C 08 02 A6 */	mflr r0
/* 80298294  90 01 00 14 */	stw r0, 0x14(r1)
/* 80298298  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029829C  7C 7F 1B 79 */	or. r31, r3, r3
/* 802982A0  41 82 00 1C */	beq lbl_802982BC
/* 802982A4  3C A0 80 3C */	lis r5, __vt__7JASInst@ha /* 0x803C76FC@ha */
/* 802982A8  38 05 76 FC */	addi r0, r5, __vt__7JASInst@l /* 0x803C76FC@l */
/* 802982AC  90 1F 00 00 */	stw r0, 0(r31)
/* 802982B0  7C 80 07 35 */	extsh. r0, r4
/* 802982B4  40 81 00 08 */	ble lbl_802982BC
/* 802982B8  48 03 6A 85 */	bl __dl__FPv
lbl_802982BC:
/* 802982BC  7F E3 FB 78 */	mr r3, r31
/* 802982C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802982C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802982C8  7C 08 03 A6 */	mtlr r0
/* 802982CC  38 21 00 10 */	addi r1, r1, 0x10
/* 802982D0  4E 80 00 20 */	blr 
