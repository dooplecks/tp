lbl_80677050:
/* 80677050  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80677054  7C 08 02 A6 */	mflr r0
/* 80677058  90 01 00 14 */	stw r0, 0x14(r1)
/* 8067705C  3C 80 80 67 */	lis r4, cNullVec__6Z2Calc@ha /* 0x80677970@ha */
/* 80677060  38 A4 79 70 */	addi r5, r4, cNullVec__6Z2Calc@l /* 0x80677970@l */
/* 80677064  3C 80 80 67 */	lis r4, data_80677D38@ha /* 0x80677D38@ha */
/* 80677068  38 84 7D 38 */	addi r4, r4, data_80677D38@l /* 0x80677D38@l */
/* 8067706C  88 04 00 00 */	lbz r0, 0(r4)
/* 80677070  7C 00 07 75 */	extsb. r0, r0
/* 80677074  40 82 00 B8 */	bne lbl_8067712C
/* 80677078  80 C5 02 60 */	lwz r6, 0x260(r5)
/* 8067707C  80 05 02 64 */	lwz r0, 0x264(r5)
/* 80677080  90 C5 02 B4 */	stw r6, 0x2b4(r5)
/* 80677084  90 05 02 B8 */	stw r0, 0x2b8(r5)
/* 80677088  80 05 02 68 */	lwz r0, 0x268(r5)
/* 8067708C  90 05 02 BC */	stw r0, 0x2bc(r5)
/* 80677090  38 E5 02 B4 */	addi r7, r5, 0x2b4
/* 80677094  80 C5 02 6C */	lwz r6, 0x26c(r5)
/* 80677098  80 05 02 70 */	lwz r0, 0x270(r5)
/* 8067709C  90 C7 00 0C */	stw r6, 0xc(r7)
/* 806770A0  90 07 00 10 */	stw r0, 0x10(r7)
/* 806770A4  80 05 02 74 */	lwz r0, 0x274(r5)
/* 806770A8  90 07 00 14 */	stw r0, 0x14(r7)
/* 806770AC  80 C5 02 78 */	lwz r6, 0x278(r5)
/* 806770B0  80 05 02 7C */	lwz r0, 0x27c(r5)
/* 806770B4  90 C7 00 18 */	stw r6, 0x18(r7)
/* 806770B8  90 07 00 1C */	stw r0, 0x1c(r7)
/* 806770BC  80 05 02 80 */	lwz r0, 0x280(r5)
/* 806770C0  90 07 00 20 */	stw r0, 0x20(r7)
/* 806770C4  80 C5 02 84 */	lwz r6, 0x284(r5)
/* 806770C8  80 05 02 88 */	lwz r0, 0x288(r5)
/* 806770CC  90 C7 00 24 */	stw r6, 0x24(r7)
/* 806770D0  90 07 00 28 */	stw r0, 0x28(r7)
/* 806770D4  80 05 02 8C */	lwz r0, 0x28c(r5)
/* 806770D8  90 07 00 2C */	stw r0, 0x2c(r7)
/* 806770DC  80 C5 02 90 */	lwz r6, 0x290(r5)
/* 806770E0  80 05 02 94 */	lwz r0, 0x294(r5)
/* 806770E4  90 C7 00 30 */	stw r6, 0x30(r7)
/* 806770E8  90 07 00 34 */	stw r0, 0x34(r7)
/* 806770EC  80 05 02 98 */	lwz r0, 0x298(r5)
/* 806770F0  90 07 00 38 */	stw r0, 0x38(r7)
/* 806770F4  80 C5 02 9C */	lwz r6, 0x29c(r5)
/* 806770F8  80 05 02 A0 */	lwz r0, 0x2a0(r5)
/* 806770FC  90 C7 00 3C */	stw r6, 0x3c(r7)
/* 80677100  90 07 00 40 */	stw r0, 0x40(r7)
/* 80677104  80 05 02 A4 */	lwz r0, 0x2a4(r5)
/* 80677108  90 07 00 44 */	stw r0, 0x44(r7)
/* 8067710C  80 C5 02 A8 */	lwz r6, 0x2a8(r5)
/* 80677110  80 05 02 AC */	lwz r0, 0x2ac(r5)
/* 80677114  90 C7 00 48 */	stw r6, 0x48(r7)
/* 80677118  90 07 00 4C */	stw r0, 0x4c(r7)
/* 8067711C  80 05 02 B0 */	lwz r0, 0x2b0(r5)
/* 80677120  90 07 00 50 */	stw r0, 0x50(r7)
/* 80677124  38 00 00 01 */	li r0, 1
/* 80677128  98 04 00 00 */	stb r0, 0(r4)
lbl_8067712C:
/* 8067712C  88 03 05 CC */	lbz r0, 0x5cc(r3)
/* 80677130  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80677134  39 85 02 B4 */	addi r12, r5, 0x2b4
/* 80677138  7D 8C 02 14 */	add r12, r12, r0
/* 8067713C  4B CE AF 49 */	bl __ptmf_scall
/* 80677140  60 00 00 00 */	nop 
/* 80677144  38 60 00 01 */	li r3, 1
/* 80677148  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8067714C  7C 08 03 A6 */	mtlr r0
/* 80677150  38 21 00 10 */	addi r1, r1, 0x10
/* 80677154  4E 80 00 20 */	blr 
