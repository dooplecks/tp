lbl_8065945C:
/* 8065945C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80659460  7C 08 02 A6 */	mflr r0
/* 80659464  90 01 00 44 */	stw r0, 0x44(r1)
/* 80659468  39 61 00 40 */	addi r11, r1, 0x40
/* 8065946C  4B D0 8D 61 */	bl _savegpr_25
/* 80659470  7C 7C 1B 78 */	mr r28, r3
/* 80659474  3C 60 80 66 */	lis r3, cNullVec__6Z2Calc@ha /* 0x80662F58@ha */
/* 80659478  3B C3 2F 58 */	addi r30, r3, cNullVec__6Z2Calc@l /* 0x80662F58@l */
/* 8065947C  3B A0 00 00 */	li r29, 0
/* 80659480  3B 60 00 00 */	li r27, 0
/* 80659484  3B FE 00 68 */	addi r31, r30, 0x68
/* 80659488  3B 3E 00 B8 */	addi r25, r30, 0xb8
/* 8065948C  3C 60 80 66 */	lis r3, data_806634D0@ha /* 0x806634D0@ha */
/* 80659490  3B 43 34 D0 */	addi r26, r3, data_806634D0@l /* 0x806634D0@l */
lbl_80659494:
/* 80659494  7C 1F DC 2E */	lfsx f0, r31, r27
/* 80659498  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8065949C  C0 1E 00 64 */	lfs f0, 0x64(r30)
/* 806594A0  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 806594A4  57 A4 07 FF */	clrlwi. r4, r29, 0x1f
/* 806594A8  57 A0 17 7A */	rlwinm r0, r29, 2, 0x1d, 0x1d
/* 806594AC  7C 19 04 2E */	lfsx f0, r25, r0
/* 806594B0  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 806594B4  80 7A 00 00 */	lwz r3, 0(r26)
/* 806594B8  38 00 00 01 */	li r0, 1
/* 806594BC  7C 00 E8 30 */	slw r0, r0, r29
/* 806594C0  7C 60 03 78 */	or r0, r3, r0
/* 806594C4  90 1A 00 00 */	stw r0, 0(r26)
/* 806594C8  41 82 00 18 */	beq lbl_806594E0
/* 806594CC  38 00 00 00 */	li r0, 0
/* 806594D0  B0 01 00 08 */	sth r0, 8(r1)
/* 806594D4  B0 01 00 0A */	sth r0, 0xa(r1)
/* 806594D8  B0 01 00 0C */	sth r0, 0xc(r1)
/* 806594DC  48 00 00 18 */	b lbl_806594F4
lbl_806594E0:
/* 806594E0  38 60 00 00 */	li r3, 0
/* 806594E4  B0 61 00 08 */	sth r3, 8(r1)
/* 806594E8  38 00 80 00 */	li r0, -32768
/* 806594EC  B0 01 00 0A */	sth r0, 0xa(r1)
/* 806594F0  B0 61 00 0C */	sth r3, 0xc(r1)
lbl_806594F4:
/* 806594F4  38 60 01 06 */	li r3, 0x106
/* 806594F8  38 80 FF 04 */	li r4, -252
/* 806594FC  38 A1 00 10 */	addi r5, r1, 0x10
/* 80659500  88 1C 04 E2 */	lbz r0, 0x4e2(r28)
/* 80659504  7C 06 07 74 */	extsb r6, r0
/* 80659508  38 E1 00 08 */	addi r7, r1, 8
/* 8065950C  39 00 00 00 */	li r8, 0
/* 80659510  39 20 FF FF */	li r9, -1
/* 80659514  4B 9C 08 85 */	bl fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc
/* 80659518  3B BD 00 01 */	addi r29, r29, 1
/* 8065951C  2C 1D 00 14 */	cmpwi r29, 0x14
/* 80659520  3B 7B 00 04 */	addi r27, r27, 4
/* 80659524  41 80 FF 70 */	blt lbl_80659494
/* 80659528  39 61 00 40 */	addi r11, r1, 0x40
/* 8065952C  4B D0 8C ED */	bl _restgpr_25
/* 80659530  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80659534  7C 08 03 A6 */	mtlr r0
/* 80659538  38 21 00 40 */	addi r1, r1, 0x40
/* 8065953C  4E 80 00 20 */	blr 
