lbl_80C48470:
/* 80C48470  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C48474  7C 08 02 A6 */	mflr r0
/* 80C48478  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C4847C  3C 80 80 C5 */	lis r4, cNullVec__6Z2Calc@ha /* 0x80C49E60@ha */
/* 80C48480  38 E4 9E 60 */	addi r7, r4, cNullVec__6Z2Calc@l /* 0x80C49E60@l */
/* 80C48484  3C 80 80 C5 */	lis r4, struct_80C4A0E8+0x2@ha /* 0x80C4A0EA@ha */
/* 80C48488  38 C4 A0 EA */	addi r6, r4, struct_80C4A0E8+0x2@l /* 0x80C4A0EA@l */
/* 80C4848C  88 06 00 00 */	lbz r0, 0(r6)
/* 80C48490  7C 00 07 75 */	extsb. r0, r0
/* 80C48494  40 82 00 70 */	bne lbl_80C48504
/* 80C48498  80 87 01 28 */	lwz r4, 0x128(r7)
/* 80C4849C  80 07 01 2C */	lwz r0, 0x12c(r7)
/* 80C484A0  90 87 01 58 */	stw r4, 0x158(r7)
/* 80C484A4  90 07 01 5C */	stw r0, 0x15c(r7)
/* 80C484A8  80 07 01 30 */	lwz r0, 0x130(r7)
/* 80C484AC  90 07 01 60 */	stw r0, 0x160(r7)
/* 80C484B0  38 A7 01 58 */	addi r5, r7, 0x158
/* 80C484B4  80 87 01 34 */	lwz r4, 0x134(r7)
/* 80C484B8  80 07 01 38 */	lwz r0, 0x138(r7)
/* 80C484BC  90 85 00 0C */	stw r4, 0xc(r5)
/* 80C484C0  90 05 00 10 */	stw r0, 0x10(r5)
/* 80C484C4  80 07 01 3C */	lwz r0, 0x13c(r7)
/* 80C484C8  90 05 00 14 */	stw r0, 0x14(r5)
/* 80C484CC  80 87 01 40 */	lwz r4, 0x140(r7)
/* 80C484D0  80 07 01 44 */	lwz r0, 0x144(r7)
/* 80C484D4  90 85 00 18 */	stw r4, 0x18(r5)
/* 80C484D8  90 05 00 1C */	stw r0, 0x1c(r5)
/* 80C484DC  80 07 01 48 */	lwz r0, 0x148(r7)
/* 80C484E0  90 05 00 20 */	stw r0, 0x20(r5)
/* 80C484E4  80 87 01 4C */	lwz r4, 0x14c(r7)
/* 80C484E8  80 07 01 50 */	lwz r0, 0x150(r7)
/* 80C484EC  90 85 00 24 */	stw r4, 0x24(r5)
/* 80C484F0  90 05 00 28 */	stw r0, 0x28(r5)
/* 80C484F4  80 07 01 54 */	lwz r0, 0x154(r7)
/* 80C484F8  90 05 00 2C */	stw r0, 0x2c(r5)
/* 80C484FC  38 00 00 01 */	li r0, 1
/* 80C48500  98 06 00 00 */	stb r0, 0(r6)
lbl_80C48504:
/* 80C48504  88 03 05 E8 */	lbz r0, 0x5e8(r3)
/* 80C48508  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80C4850C  39 87 01 58 */	addi r12, r7, 0x158
/* 80C48510  7D 8C 02 14 */	add r12, r12, r0
/* 80C48514  4B 71 9B 71 */	bl __ptmf_scall
/* 80C48518  60 00 00 00 */	nop 
/* 80C4851C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C48520  7C 08 03 A6 */	mtlr r0
/* 80C48524  38 21 00 10 */	addi r1, r1, 0x10
/* 80C48528  4E 80 00 20 */	blr 
