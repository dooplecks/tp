lbl_801245EC:
/* 801245EC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801245F0  7C 08 02 A6 */	mflr r0
/* 801245F4  90 01 00 44 */	stw r0, 0x44(r1)
/* 801245F8  39 61 00 40 */	addi r11, r1, 0x40
/* 801245FC  48 23 DB D9 */	bl _savegpr_27
/* 80124600  7C 7B 1B 78 */	mr r27, r3
/* 80124604  88 03 05 68 */	lbz r0, 0x568(r3)
/* 80124608  28 00 00 00 */	cmplwi r0, 0
/* 8012460C  41 82 01 14 */	beq lbl_80124720
/* 80124610  A0 1B 2F E8 */	lhz r0, 0x2fe8(r27)
/* 80124614  28 00 00 28 */	cmplwi r0, 0x28
/* 80124618  41 82 01 08 */	beq lbl_80124720
/* 8012461C  80 7B 05 70 */	lwz r3, 0x570(r27)
/* 80124620  54 60 06 73 */	rlwinm. r0, r3, 0, 0x19, 0x19
/* 80124624  41 82 00 FC */	beq lbl_80124720
/* 80124628  54 60 06 31 */	rlwinm. r0, r3, 0, 0x18, 0x18
/* 8012462C  41 82 00 F4 */	beq lbl_80124720
/* 80124630  A0 1B 2F DC */	lhz r0, 0x2fdc(r27)
/* 80124634  28 00 01 03 */	cmplwi r0, 0x103
/* 80124638  40 82 00 E8 */	bne lbl_80124720
/* 8012463C  C0 1B 05 C0 */	lfs f0, 0x5c0(r27)
/* 80124640  C0 5B 33 B4 */	lfs f2, 0x33b4(r27)
/* 80124644  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80124648  4C 40 13 82 */	cror 2, 0, 2
/* 8012464C  40 82 00 D4 */	bne lbl_80124720
/* 80124650  C0 1B 34 B4 */	lfs f0, 0x34b4(r27)
/* 80124654  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80124658  40 81 00 C8 */	ble lbl_80124720
/* 8012465C  C0 3B 05 C4 */	lfs f1, 0x5c4(r27)
/* 80124660  C0 1B 05 BC */	lfs f0, 0x5bc(r27)
/* 80124664  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80124668  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 8012466C  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 80124670  3B 80 00 00 */	li r28, 0
/* 80124674  3B E0 00 00 */	li r31, 0
/* 80124678  3B C0 00 00 */	li r30, 0
lbl_8012467C:
/* 8012467C  7F 63 DB 78 */	mr r3, r27
/* 80124680  38 9E 31 E8 */	addi r4, r30, 0x31e8
/* 80124684  7C 9B 22 14 */	add r4, r27, r4
/* 80124688  3B A2 97 04 */	la r29, cutSplashName(r2) /* 80453104-_SDA2_BASE_ */
/* 8012468C  7C BD FA 2E */	lhzx r5, r29, r31
/* 80124690  38 DB 1A F0 */	addi r6, r27, 0x1af0
/* 80124694  38 E1 00 14 */	addi r7, r1, 0x14
/* 80124698  39 00 00 00 */	li r8, 0
/* 8012469C  4B FF BF 99 */	bl setEmitterPolyColor__9daAlink_cFPUlUsR13cBgS_PolyInfoPC4cXyzPC5csXyz
/* 801246A0  28 03 00 00 */	cmplwi r3, 0
/* 801246A4  41 82 00 68 */	beq lbl_8012470C
/* 801246A8  38 00 00 05 */	li r0, 5
/* 801246AC  98 03 00 56 */	stb r0, 0x56(r3)
/* 801246B0  3C 80 80 39 */	lis r4, swordCutSplashScale@ha /* 0x80391D54@ha */
/* 801246B4  38 84 1D 54 */	addi r4, r4, swordCutSplashScale@l /* 0x80391D54@l */
/* 801246B8  E0 04 00 00 */	psq_l f0, 0(r4), 0, 0 /* qr0 */
/* 801246BC  C0 44 00 08 */	lfs f2, 8(r4)
/* 801246C0  F0 01 00 08 */	psq_st f0, 8(r1), 0, 0 /* qr0 */
/* 801246C4  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 801246C8  C0 21 00 08 */	lfs f1, 8(r1)
/* 801246CC  D0 23 00 98 */	stfs f1, 0x98(r3)
/* 801246D0  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 801246D4  D0 03 00 9C */	stfs f0, 0x9c(r3)
/* 801246D8  D0 43 00 A0 */	stfs f2, 0xa0(r3)
/* 801246DC  D0 23 00 B0 */	stfs f1, 0xb0(r3)
/* 801246E0  D0 03 00 B4 */	stfs f0, 0xb4(r3)
/* 801246E4  7C 1D FA 2E */	lhzx r0, r29, r31
/* 801246E8  28 00 01 B9 */	cmplwi r0, 0x1b9
/* 801246EC  40 82 00 10 */	bne lbl_801246FC
/* 801246F0  C0 02 93 3C */	lfs f0, lit_7808(r2)
/* 801246F4  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 801246F8  48 00 00 14 */	b lbl_8012470C
lbl_801246FC:
/* 801246FC  28 00 01 BB */	cmplwi r0, 0x1bb
/* 80124700  40 82 00 0C */	bne lbl_8012470C
/* 80124704  C0 02 93 3C */	lfs f0, lit_7808(r2)
/* 80124708  D0 03 00 3C */	stfs f0, 0x3c(r3)
lbl_8012470C:
/* 8012470C  3B 9C 00 01 */	addi r28, r28, 1
/* 80124710  2C 1C 00 04 */	cmpwi r28, 4
/* 80124714  3B FF 00 02 */	addi r31, r31, 2
/* 80124718  3B DE 00 04 */	addi r30, r30, 4
/* 8012471C  41 80 FF 60 */	blt lbl_8012467C
lbl_80124720:
/* 80124720  39 61 00 40 */	addi r11, r1, 0x40
/* 80124724  48 23 DA FD */	bl _restgpr_27
/* 80124728  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8012472C  7C 08 03 A6 */	mtlr r0
/* 80124730  38 21 00 40 */	addi r1, r1, 0x40
/* 80124734  4E 80 00 20 */	blr 
