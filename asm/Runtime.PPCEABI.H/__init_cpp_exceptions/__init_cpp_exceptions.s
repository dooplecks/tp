lbl_80362870:
/* 80362870  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80362874  7C 08 02 A6 */	mflr r0
/* 80362878  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036287C  80 0D 85 50 */	lwz r0, fragmentID(r13)
/* 80362880  2C 00 FF FE */	cmpwi r0, -2
/* 80362884  40 82 00 18 */	bne lbl_8036289C
/* 80362888  3C 60 80 00 */	lis r3, data_8000569C@ha /* 0x8000569C@ha */
/* 8036288C  7C 44 13 78 */	mr r4, r2
/* 80362890  38 63 56 9C */	addi r3, r3, data_8000569C@l /* 0x8000569C@l */
/* 80362894  48 00 00 4D */	bl __register_fragment
/* 80362898  90 6D 85 50 */	stw r3, fragmentID(r13)
lbl_8036289C:
/* 8036289C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803628A0  7C 08 03 A6 */	mtlr r0
/* 803628A4  38 21 00 10 */	addi r1, r1, 0x10
/* 803628A8  4E 80 00 20 */	blr 
