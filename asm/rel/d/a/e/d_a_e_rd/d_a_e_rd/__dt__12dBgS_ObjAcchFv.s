lbl_80517EEC:
/* 80517EEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80517EF0  7C 08 02 A6 */	mflr r0
/* 80517EF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80517EF8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80517EFC  93 C1 00 08 */	stw r30, 8(r1)
/* 80517F00  7C 7E 1B 79 */	or. r30, r3, r3
/* 80517F04  7C 9F 23 78 */	mr r31, r4
/* 80517F08  41 82 00 38 */	beq lbl_80517F40
/* 80517F0C  3C 80 80 52 */	lis r4, __vt__12dBgS_ObjAcch@ha /* 0x805190D4@ha */
/* 80517F10  38 84 90 D4 */	addi r4, r4, __vt__12dBgS_ObjAcch@l /* 0x805190D4@l */
/* 80517F14  90 9E 00 10 */	stw r4, 0x10(r30)
/* 80517F18  38 04 00 0C */	addi r0, r4, 0xc
/* 80517F1C  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80517F20  38 04 00 18 */	addi r0, r4, 0x18
/* 80517F24  90 1E 00 24 */	stw r0, 0x24(r30)
/* 80517F28  38 80 00 00 */	li r4, 0
/* 80517F2C  4B B5 E0 69 */	bl __dt__9dBgS_AcchFv
/* 80517F30  7F E0 07 35 */	extsh. r0, r31
/* 80517F34  40 81 00 0C */	ble lbl_80517F40
/* 80517F38  7F C3 F3 78 */	mr r3, r30
/* 80517F3C  4B DB 6E 01 */	bl __dl__FPv
lbl_80517F40:
/* 80517F40  7F C3 F3 78 */	mr r3, r30
/* 80517F44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80517F48  83 C1 00 08 */	lwz r30, 8(r1)
/* 80517F4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80517F50  7C 08 03 A6 */	mtlr r0
/* 80517F54  38 21 00 10 */	addi r1, r1, 0x10
/* 80517F58  4E 80 00 20 */	blr 
