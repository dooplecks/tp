lbl_80CDCE98:
/* 80CDCE98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80CDCE9C  7C 08 02 A6 */	mflr r0
/* 80CDCEA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80CDCEA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80CDCEA8  7C 7F 1B 78 */	mr r31, r3
/* 80CDCEAC  3C 60 80 3E */	lis r3, now__14mDoMtx_stack_c@ha /* 0x803DD470@ha */
/* 80CDCEB0  38 63 D4 70 */	addi r3, r3, now__14mDoMtx_stack_c@l /* 0x803DD470@l */
/* 80CDCEB4  C0 3F 04 D0 */	lfs f1, 0x4d0(r31)
/* 80CDCEB8  C0 5F 04 D4 */	lfs f2, 0x4d4(r31)
/* 80CDCEBC  C0 7F 04 D8 */	lfs f3, 0x4d8(r31)
/* 80CDCEC0  4B 66 9A 29 */	bl PSMTXTrans
/* 80CDCEC4  3C 60 80 3E */	lis r3, now__14mDoMtx_stack_c@ha /* 0x803DD470@ha */
/* 80CDCEC8  38 63 D4 70 */	addi r3, r3, now__14mDoMtx_stack_c@l /* 0x803DD470@l */
/* 80CDCECC  A8 9F 04 E4 */	lha r4, 0x4e4(r31)
/* 80CDCED0  A8 BF 04 E6 */	lha r5, 0x4e6(r31)
/* 80CDCED4  A8 DF 04 E8 */	lha r6, 0x4e8(r31)
/* 80CDCED8  4B 32 F3 C9 */	bl mDoMtx_ZXYrotM__FPA4_fsss
/* 80CDCEDC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80CDCEE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80CDCEE4  7C 08 03 A6 */	mtlr r0
/* 80CDCEE8  38 21 00 10 */	addi r1, r1, 0x10
/* 80CDCEEC  4E 80 00 20 */	blr 
