lbl_809D8808:
/* 809D8808  3C 80 80 3A */	lis r4, __ptmf_null@ha /* 0x803A2180@ha */
/* 809D880C  38 A4 21 80 */	addi r5, r4, __ptmf_null@l /* 0x803A2180@l */
/* 809D8810  80 85 00 00 */	lwz r4, 0(r5)
/* 809D8814  80 05 00 04 */	lwz r0, 4(r5)
/* 809D8818  90 83 10 C0 */	stw r4, 0x10c0(r3)
/* 809D881C  90 03 10 C4 */	stw r0, 0x10c4(r3)
/* 809D8820  80 05 00 08 */	lwz r0, 8(r5)
/* 809D8824  90 03 10 C8 */	stw r0, 0x10c8(r3)
/* 809D8828  3C 80 80 9E */	lis r4, lit_4858@ha /* 0x809DA280@ha */
/* 809D882C  38 A4 A2 80 */	addi r5, r4, lit_4858@l /* 0x809DA280@l */
/* 809D8830  80 85 00 00 */	lwz r4, 0(r5)
/* 809D8834  80 05 00 04 */	lwz r0, 4(r5)
/* 809D8838  90 83 10 C0 */	stw r4, 0x10c0(r3)
/* 809D883C  90 03 10 C4 */	stw r0, 0x10c4(r3)
/* 809D8840  80 05 00 08 */	lwz r0, 8(r5)
/* 809D8844  90 03 10 C8 */	stw r0, 0x10c8(r3)
/* 809D8848  38 60 00 01 */	li r3, 1
/* 809D884C  4E 80 00 20 */	blr 
