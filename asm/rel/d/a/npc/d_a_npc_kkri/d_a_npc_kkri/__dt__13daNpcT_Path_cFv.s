lbl_805525E8:
/* 805525E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 805525EC  7C 08 02 A6 */	mflr r0
/* 805525F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 805525F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 805525F8  7C 7F 1B 79 */	or. r31, r3, r3
/* 805525FC  41 82 00 1C */	beq lbl_80552618
/* 80552600  3C A0 80 55 */	lis r5, __vt__13daNpcT_Path_c@ha /* 0x80553DFC@ha */
/* 80552604  38 05 3D FC */	addi r0, r5, __vt__13daNpcT_Path_c@l /* 0x80553DFC@l */
/* 80552608  90 1F 00 24 */	stw r0, 0x24(r31)
/* 8055260C  7C 80 07 35 */	extsh. r0, r4
/* 80552610  40 81 00 08 */	ble lbl_80552618
/* 80552614  4B D7 C7 29 */	bl __dl__FPv
lbl_80552618:
/* 80552618  7F E3 FB 78 */	mr r3, r31
/* 8055261C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80552620  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80552624  7C 08 03 A6 */	mtlr r0
/* 80552628  38 21 00 10 */	addi r1, r1, 0x10
/* 8055262C  4E 80 00 20 */	blr 
