lbl_80A23284:
/* 80A23284  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A23288  7C 08 02 A6 */	mflr r0
/* 80A2328C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A23290  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80A23294  93 C1 00 08 */	stw r30, 8(r1)
/* 80A23298  7C 7E 1B 78 */	mr r30, r3
/* 80A2329C  7C 9F 23 78 */	mr r31, r4
/* 80A232A0  38 00 FF FF */	li r0, -1
/* 80A232A4  B0 03 14 04 */	sth r0, 0x1404(r3)
/* 80A232A8  38 7E 14 08 */	addi r3, r30, 0x1408
/* 80A232AC  4B 93 ED 6D */	bl __ptmf_test
/* 80A232B0  2C 03 00 00 */	cmpwi r3, 0
/* 80A232B4  41 82 00 18 */	beq lbl_80A232CC
/* 80A232B8  7F C3 F3 78 */	mr r3, r30
/* 80A232BC  38 80 00 00 */	li r4, 0
/* 80A232C0  39 9E 14 08 */	addi r12, r30, 0x1408
/* 80A232C4  4B 93 ED C1 */	bl __ptmf_scall
/* 80A232C8  60 00 00 00 */	nop 
lbl_80A232CC:
/* 80A232CC  38 00 00 00 */	li r0, 0
/* 80A232D0  B0 1E 14 04 */	sth r0, 0x1404(r30)
/* 80A232D4  80 7F 00 00 */	lwz r3, 0(r31)
/* 80A232D8  80 1F 00 04 */	lwz r0, 4(r31)
/* 80A232DC  90 7E 14 08 */	stw r3, 0x1408(r30)
/* 80A232E0  90 1E 14 0C */	stw r0, 0x140c(r30)
/* 80A232E4  80 1F 00 08 */	lwz r0, 8(r31)
/* 80A232E8  90 1E 14 10 */	stw r0, 0x1410(r30)
/* 80A232EC  38 7E 14 08 */	addi r3, r30, 0x1408
/* 80A232F0  4B 93 ED 29 */	bl __ptmf_test
/* 80A232F4  2C 03 00 00 */	cmpwi r3, 0
/* 80A232F8  41 82 00 18 */	beq lbl_80A23310
/* 80A232FC  7F C3 F3 78 */	mr r3, r30
/* 80A23300  38 80 00 00 */	li r4, 0
/* 80A23304  39 9E 14 08 */	addi r12, r30, 0x1408
/* 80A23308  4B 93 ED 7D */	bl __ptmf_scall
/* 80A2330C  60 00 00 00 */	nop 
lbl_80A23310:
/* 80A23310  38 60 00 01 */	li r3, 1
/* 80A23314  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80A23318  83 C1 00 08 */	lwz r30, 8(r1)
/* 80A2331C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A23320  7C 08 03 A6 */	mtlr r0
/* 80A23324  38 21 00 10 */	addi r1, r1, 0x10
/* 80A23328  4E 80 00 20 */	blr 
