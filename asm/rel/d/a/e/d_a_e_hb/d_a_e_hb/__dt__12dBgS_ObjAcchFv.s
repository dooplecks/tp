lbl_80500264:
/* 80500264  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80500268  7C 08 02 A6 */	mflr r0
/* 8050026C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80500270  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80500274  93 C1 00 08 */	stw r30, 8(r1)
/* 80500278  7C 7E 1B 79 */	or. r30, r3, r3
/* 8050027C  7C 9F 23 78 */	mr r31, r4
/* 80500280  41 82 00 38 */	beq lbl_805002B8
/* 80500284  3C 80 80 50 */	lis r4, __vt__12dBgS_ObjAcch@ha /* 0x80500DFC@ha */
/* 80500288  38 84 0D FC */	addi r4, r4, __vt__12dBgS_ObjAcch@l /* 0x80500DFC@l */
/* 8050028C  90 9E 00 10 */	stw r4, 0x10(r30)
/* 80500290  38 04 00 0C */	addi r0, r4, 0xc
/* 80500294  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80500298  38 04 00 18 */	addi r0, r4, 0x18
/* 8050029C  90 1E 00 24 */	stw r0, 0x24(r30)
/* 805002A0  38 80 00 00 */	li r4, 0
/* 805002A4  4B B7 5C F1 */	bl __dt__9dBgS_AcchFv
/* 805002A8  7F E0 07 35 */	extsh. r0, r31
/* 805002AC  40 81 00 0C */	ble lbl_805002B8
/* 805002B0  7F C3 F3 78 */	mr r3, r30
/* 805002B4  4B DC EA 89 */	bl __dl__FPv
lbl_805002B8:
/* 805002B8  7F C3 F3 78 */	mr r3, r30
/* 805002BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 805002C0  83 C1 00 08 */	lwz r30, 8(r1)
/* 805002C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 805002C8  7C 08 03 A6 */	mtlr r0
/* 805002CC  38 21 00 10 */	addi r1, r1, 0x10
/* 805002D0  4E 80 00 20 */	blr 
