lbl_801B71C4:
/* 801B71C4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801B71C8  7C 08 02 A6 */	mflr r0
/* 801B71CC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801B71D0  39 61 00 20 */	addi r11, r1, 0x20
/* 801B71D4  48 1A B0 09 */	bl _savegpr_29
/* 801B71D8  7C 7F 1B 78 */	mr r31, r3
/* 801B71DC  3C 60 80 39 */	lis r3, lit_3778@ha /* 0x80394F78@ha */
/* 801B71E0  3B A3 4F 78 */	addi r29, r3, lit_3778@l /* 0x80394F78@l */
/* 801B71E4  48 00 02 B9 */	bl getMirrorNum__17dMenu_Collect3D_cFv
/* 801B71E8  54 7E 06 3F */	clrlwi. r30, r3, 0x18
/* 801B71EC  54 67 15 BA */	rlwinm r7, r3, 2, 0x16, 0x1d
/* 801B71F0  38 7D 03 7C */	addi r3, r29, 0x37c
/* 801B71F4  7C 03 3C 2E */	lfsx f0, r3, r7
/* 801B71F8  D0 1F 03 C4 */	stfs f0, 0x3c4(r31)
/* 801B71FC  38 7D 03 90 */	addi r3, r29, 0x390
/* 801B7200  7C 03 3C 2E */	lfsx f0, r3, r7
/* 801B7204  D0 1F 03 C8 */	stfs f0, 0x3c8(r31)
/* 801B7208  38 7D 03 A4 */	addi r3, r29, 0x3a4
/* 801B720C  7C 03 3C 2E */	lfsx f0, r3, r7
/* 801B7210  D0 1F 03 CC */	stfs f0, 0x3cc(r31)
/* 801B7214  C0 02 A5 28 */	lfs f0, lit_4481(r2)
/* 801B7218  D0 1F 03 B0 */	stfs f0, 0x3b0(r31)
/* 801B721C  D0 1F 03 B4 */	stfs f0, 0x3b4(r31)
/* 801B7220  D0 1F 03 B8 */	stfs f0, 0x3b8(r31)
/* 801B7224  38 00 00 00 */	li r0, 0
/* 801B7228  B0 1F 03 BC */	sth r0, 0x3bc(r31)
/* 801B722C  B0 1F 03 BE */	sth r0, 0x3be(r31)
/* 801B7230  B0 1F 03 C0 */	sth r0, 0x3c0(r31)
/* 801B7234  90 1F 00 18 */	stw r0, 0x18(r31)
/* 801B7238  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 801B723C  90 1F 00 20 */	stw r0, 0x20(r31)
/* 801B7240  41 82 01 DC */	beq lbl_801B741C
/* 801B7244  7F E3 FB 78 */	mr r3, r31
/* 801B7248  3C 80 80 39 */	lis r4, d_menu_d_menu_collect__stringBase0@ha /* 0x80395330@ha */
/* 801B724C  38 84 53 30 */	addi r4, r4, d_menu_d_menu_collect__stringBase0@l /* 0x80395330@l */
/* 801B7250  38 84 01 CF */	addi r4, r4, 0x1cf
/* 801B7254  3C A0 80 3C */	lis r5, bck_name_7687@ha /* 0x803BC73C@ha */
/* 801B7258  38 05 C7 3C */	addi r0, r5, bck_name_7687@l /* 0x803BC73C@l */
/* 801B725C  7C A0 3A 14 */	add r5, r0, r7
/* 801B7260  80 A5 FF FC */	lwz r5, -4(r5)
/* 801B7264  3C C0 80 3C */	lis r6, brk_name_7688@ha /* 0x803BC74C@ha */
/* 801B7268  38 06 C7 4C */	addi r0, r6, brk_name_7688@l /* 0x803BC74C@l */
/* 801B726C  7C C0 3A 14 */	add r6, r0, r7
/* 801B7270  80 C6 FF FC */	lwz r6, -4(r6)
/* 801B7274  4B FF F7 BD */	bl setJ3D__17dMenu_Collect3D_cFPCcPCcPCc
/* 801B7278  2C 1E 00 02 */	cmpwi r30, 2
/* 801B727C  41 82 00 A0 */	beq lbl_801B731C
/* 801B7280  40 80 00 10 */	bge lbl_801B7290
/* 801B7284  2C 1E 00 01 */	cmpwi r30, 1
/* 801B7288  40 80 00 14 */	bge lbl_801B729C
/* 801B728C  48 00 01 90 */	b lbl_801B741C
lbl_801B7290:
/* 801B7290  2C 1E 00 04 */	cmpwi r30, 4
/* 801B7294  40 80 01 88 */	bge lbl_801B741C
/* 801B7298  48 00 01 04 */	b lbl_801B739C
lbl_801B729C:
/* 801B729C  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 801B72A0  80 63 00 04 */	lwz r3, 4(r3)
/* 801B72A4  80 63 00 60 */	lwz r3, 0x60(r3)
/* 801B72A8  80 63 00 10 */	lwz r3, 0x10(r3)
/* 801B72AC  80 63 00 08 */	lwz r3, 8(r3)
/* 801B72B0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801B72B4  60 00 00 01 */	ori r0, r0, 1
/* 801B72B8  90 03 00 0C */	stw r0, 0xc(r3)
/* 801B72BC  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 801B72C0  80 63 00 04 */	lwz r3, 4(r3)
/* 801B72C4  80 63 00 60 */	lwz r3, 0x60(r3)
/* 801B72C8  80 63 00 14 */	lwz r3, 0x14(r3)
/* 801B72CC  80 63 00 08 */	lwz r3, 8(r3)
/* 801B72D0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801B72D4  60 00 00 01 */	ori r0, r0, 1
/* 801B72D8  90 03 00 0C */	stw r0, 0xc(r3)
/* 801B72DC  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 801B72E0  80 63 00 04 */	lwz r3, 4(r3)
/* 801B72E4  80 63 00 60 */	lwz r3, 0x60(r3)
/* 801B72E8  80 63 00 18 */	lwz r3, 0x18(r3)
/* 801B72EC  80 63 00 08 */	lwz r3, 8(r3)
/* 801B72F0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801B72F4  60 00 00 01 */	ori r0, r0, 1
/* 801B72F8  90 03 00 0C */	stw r0, 0xc(r3)
/* 801B72FC  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 801B7300  80 63 00 04 */	lwz r3, 4(r3)
/* 801B7304  80 63 00 60 */	lwz r3, 0x60(r3)
/* 801B7308  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 801B730C  80 63 00 08 */	lwz r3, 8(r3)
/* 801B7310  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801B7314  60 00 00 01 */	ori r0, r0, 1
/* 801B7318  90 03 00 0C */	stw r0, 0xc(r3)
lbl_801B731C:
/* 801B731C  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 801B7320  80 63 00 04 */	lwz r3, 4(r3)
/* 801B7324  80 63 00 60 */	lwz r3, 0x60(r3)
/* 801B7328  80 63 00 20 */	lwz r3, 0x20(r3)
/* 801B732C  80 63 00 08 */	lwz r3, 8(r3)
/* 801B7330  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801B7334  60 00 00 01 */	ori r0, r0, 1
/* 801B7338  90 03 00 0C */	stw r0, 0xc(r3)
/* 801B733C  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 801B7340  80 63 00 04 */	lwz r3, 4(r3)
/* 801B7344  80 63 00 60 */	lwz r3, 0x60(r3)
/* 801B7348  80 63 00 24 */	lwz r3, 0x24(r3)
/* 801B734C  80 63 00 08 */	lwz r3, 8(r3)
/* 801B7350  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801B7354  60 00 00 01 */	ori r0, r0, 1
/* 801B7358  90 03 00 0C */	stw r0, 0xc(r3)
/* 801B735C  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 801B7360  80 63 00 04 */	lwz r3, 4(r3)
/* 801B7364  80 63 00 60 */	lwz r3, 0x60(r3)
/* 801B7368  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801B736C  80 63 00 08 */	lwz r3, 8(r3)
/* 801B7370  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801B7374  60 00 00 01 */	ori r0, r0, 1
/* 801B7378  90 03 00 0C */	stw r0, 0xc(r3)
/* 801B737C  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 801B7380  80 63 00 04 */	lwz r3, 4(r3)
/* 801B7384  80 63 00 60 */	lwz r3, 0x60(r3)
/* 801B7388  80 63 00 2C */	lwz r3, 0x2c(r3)
/* 801B738C  80 63 00 08 */	lwz r3, 8(r3)
/* 801B7390  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801B7394  60 00 00 01 */	ori r0, r0, 1
/* 801B7398  90 03 00 0C */	stw r0, 0xc(r3)
lbl_801B739C:
/* 801B739C  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 801B73A0  80 63 00 04 */	lwz r3, 4(r3)
/* 801B73A4  80 63 00 60 */	lwz r3, 0x60(r3)
/* 801B73A8  80 63 00 30 */	lwz r3, 0x30(r3)
/* 801B73AC  80 63 00 08 */	lwz r3, 8(r3)
/* 801B73B0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801B73B4  60 00 00 01 */	ori r0, r0, 1
/* 801B73B8  90 03 00 0C */	stw r0, 0xc(r3)
/* 801B73BC  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 801B73C0  80 63 00 04 */	lwz r3, 4(r3)
/* 801B73C4  80 63 00 60 */	lwz r3, 0x60(r3)
/* 801B73C8  80 63 00 34 */	lwz r3, 0x34(r3)
/* 801B73CC  80 63 00 08 */	lwz r3, 8(r3)
/* 801B73D0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801B73D4  60 00 00 01 */	ori r0, r0, 1
/* 801B73D8  90 03 00 0C */	stw r0, 0xc(r3)
/* 801B73DC  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 801B73E0  80 63 00 04 */	lwz r3, 4(r3)
/* 801B73E4  80 63 00 60 */	lwz r3, 0x60(r3)
/* 801B73E8  80 63 00 38 */	lwz r3, 0x38(r3)
/* 801B73EC  80 63 00 08 */	lwz r3, 8(r3)
/* 801B73F0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801B73F4  60 00 00 01 */	ori r0, r0, 1
/* 801B73F8  90 03 00 0C */	stw r0, 0xc(r3)
/* 801B73FC  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 801B7400  80 63 00 04 */	lwz r3, 4(r3)
/* 801B7404  80 63 00 60 */	lwz r3, 0x60(r3)
/* 801B7408  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 801B740C  80 63 00 08 */	lwz r3, 8(r3)
/* 801B7410  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801B7414  60 00 00 01 */	ori r0, r0, 1
/* 801B7418  90 03 00 0C */	stw r0, 0xc(r3)
lbl_801B741C:
/* 801B741C  39 61 00 20 */	addi r11, r1, 0x20
/* 801B7420  48 1A AE 09 */	bl _restgpr_29
/* 801B7424  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801B7428  7C 08 03 A6 */	mtlr r0
/* 801B742C  38 21 00 20 */	addi r1, r1, 0x20
/* 801B7430  4E 80 00 20 */	blr 
