lbl_8062D83C:
/* 8062D83C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8062D840  7C 08 02 A6 */	mflr r0
/* 8062D844  90 01 00 14 */	stw r0, 0x14(r1)
/* 8062D848  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8062D84C  93 C1 00 08 */	stw r30, 8(r1)
/* 8062D850  7C 7E 1B 79 */	or. r30, r3, r3
/* 8062D854  7C 9F 23 78 */	mr r31, r4
/* 8062D858  41 82 00 38 */	beq lbl_8062D890
/* 8062D85C  3C 80 80 63 */	lis r4, __vt__12dBgS_ObjAcch@ha /* 0x8062EF84@ha */
/* 8062D860  38 84 EF 84 */	addi r4, r4, __vt__12dBgS_ObjAcch@l /* 0x8062EF84@l */
/* 8062D864  90 9E 00 10 */	stw r4, 0x10(r30)
/* 8062D868  38 04 00 0C */	addi r0, r4, 0xc
/* 8062D86C  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8062D870  38 04 00 18 */	addi r0, r4, 0x18
/* 8062D874  90 1E 00 24 */	stw r0, 0x24(r30)
/* 8062D878  38 80 00 00 */	li r4, 0
/* 8062D87C  4B A4 87 19 */	bl __dt__9dBgS_AcchFv
/* 8062D880  7F E0 07 35 */	extsh. r0, r31
/* 8062D884  40 81 00 0C */	ble lbl_8062D890
/* 8062D888  7F C3 F3 78 */	mr r3, r30
/* 8062D88C  4B CA 14 B1 */	bl __dl__FPv
lbl_8062D890:
/* 8062D890  7F C3 F3 78 */	mr r3, r30
/* 8062D894  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8062D898  83 C1 00 08 */	lwz r30, 8(r1)
/* 8062D89C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8062D8A0  7C 08 03 A6 */	mtlr r0
/* 8062D8A4  38 21 00 10 */	addi r1, r1, 0x10
/* 8062D8A8  4E 80 00 20 */	blr 
