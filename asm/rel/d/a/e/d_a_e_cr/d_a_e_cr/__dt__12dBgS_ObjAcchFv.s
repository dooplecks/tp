lbl_806996CC:
/* 806996CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806996D0  7C 08 02 A6 */	mflr r0
/* 806996D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 806996D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 806996DC  93 C1 00 08 */	stw r30, 8(r1)
/* 806996E0  7C 7E 1B 79 */	or. r30, r3, r3
/* 806996E4  7C 9F 23 78 */	mr r31, r4
/* 806996E8  41 82 00 38 */	beq lbl_80699720
/* 806996EC  3C 80 80 6A */	lis r4, __vt__12dBgS_ObjAcch@ha /* 0x80699E50@ha */
/* 806996F0  38 84 9E 50 */	addi r4, r4, __vt__12dBgS_ObjAcch@l /* 0x80699E50@l */
/* 806996F4  90 9E 00 10 */	stw r4, 0x10(r30)
/* 806996F8  38 04 00 0C */	addi r0, r4, 0xc
/* 806996FC  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80699700  38 04 00 18 */	addi r0, r4, 0x18
/* 80699704  90 1E 00 24 */	stw r0, 0x24(r30)
/* 80699708  38 80 00 00 */	li r4, 0
/* 8069970C  4B 9D C8 89 */	bl __dt__9dBgS_AcchFv
/* 80699710  7F E0 07 35 */	extsh. r0, r31
/* 80699714  40 81 00 0C */	ble lbl_80699720
/* 80699718  7F C3 F3 78 */	mr r3, r30
/* 8069971C  4B C3 56 21 */	bl __dl__FPv
lbl_80699720:
/* 80699720  7F C3 F3 78 */	mr r3, r30
/* 80699724  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80699728  83 C1 00 08 */	lwz r30, 8(r1)
/* 8069972C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80699730  7C 08 03 A6 */	mtlr r0
/* 80699734  38 21 00 10 */	addi r1, r1, 0x10
/* 80699738  4E 80 00 20 */	blr 