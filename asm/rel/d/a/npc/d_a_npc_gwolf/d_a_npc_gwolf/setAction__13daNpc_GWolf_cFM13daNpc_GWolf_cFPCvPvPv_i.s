lbl_809F55FC:
/* 809F55FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809F5600  7C 08 02 A6 */	mflr r0
/* 809F5604  90 01 00 14 */	stw r0, 0x14(r1)
/* 809F5608  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809F560C  93 C1 00 08 */	stw r30, 8(r1)
/* 809F5610  7C 7E 1B 78 */	mr r30, r3
/* 809F5614  7C 9F 23 78 */	mr r31, r4
/* 809F5618  38 00 00 03 */	li r0, 3
/* 809F561C  B0 03 0E 0E */	sth r0, 0xe0e(r3)
/* 809F5620  38 7E 0D D4 */	addi r3, r30, 0xdd4
/* 809F5624  4B 96 C9 F5 */	bl __ptmf_test
/* 809F5628  2C 03 00 00 */	cmpwi r3, 0
/* 809F562C  41 82 00 18 */	beq lbl_809F5644
/* 809F5630  7F C3 F3 78 */	mr r3, r30
/* 809F5634  38 80 00 00 */	li r4, 0
/* 809F5638  39 9E 0D D4 */	addi r12, r30, 0xdd4
/* 809F563C  4B 96 CA 49 */	bl __ptmf_scall
/* 809F5640  60 00 00 00 */	nop 
lbl_809F5644:
/* 809F5644  38 00 00 00 */	li r0, 0
/* 809F5648  B0 1E 0E 0E */	sth r0, 0xe0e(r30)
/* 809F564C  80 7F 00 00 */	lwz r3, 0(r31)
/* 809F5650  80 1F 00 04 */	lwz r0, 4(r31)
/* 809F5654  90 7E 0D D4 */	stw r3, 0xdd4(r30)
/* 809F5658  90 1E 0D D8 */	stw r0, 0xdd8(r30)
/* 809F565C  80 1F 00 08 */	lwz r0, 8(r31)
/* 809F5660  90 1E 0D DC */	stw r0, 0xddc(r30)
/* 809F5664  38 7E 0D D4 */	addi r3, r30, 0xdd4
/* 809F5668  4B 96 C9 B1 */	bl __ptmf_test
/* 809F566C  2C 03 00 00 */	cmpwi r3, 0
/* 809F5670  41 82 00 18 */	beq lbl_809F5688
/* 809F5674  7F C3 F3 78 */	mr r3, r30
/* 809F5678  38 80 00 00 */	li r4, 0
/* 809F567C  39 9E 0D D4 */	addi r12, r30, 0xdd4
/* 809F5680  4B 96 CA 05 */	bl __ptmf_scall
/* 809F5684  60 00 00 00 */	nop 
lbl_809F5688:
/* 809F5688  38 60 00 01 */	li r3, 1
/* 809F568C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809F5690  83 C1 00 08 */	lwz r30, 8(r1)
/* 809F5694  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809F5698  7C 08 03 A6 */	mtlr r0
/* 809F569C  38 21 00 10 */	addi r1, r1, 0x10
/* 809F56A0  4E 80 00 20 */	blr 
