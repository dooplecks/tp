lbl_801963B4:
/* 801963B4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801963B8  7C 08 02 A6 */	mflr r0
/* 801963BC  90 01 00 44 */	stw r0, 0x44(r1)
/* 801963C0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 801963C4  93 C1 00 38 */	stw r30, 0x38(r1)
/* 801963C8  7C 7E 1B 78 */	mr r30, r3
/* 801963CC  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 801963D0  38 83 61 C0 */	addi r4, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 801963D4  80 64 5D AC */	lwz r3, 0x5dac(r4)
/* 801963D8  80 03 05 70 */	lwz r0, 0x570(r3)
/* 801963DC  54 00 01 46 */	rlwinm r0, r0, 0, 5, 3
/* 801963E0  90 03 05 70 */	stw r0, 0x570(r3)
/* 801963E4  88 04 5D B0 */	lbz r0, 0x5db0(r4)
/* 801963E8  7C 00 07 74 */	extsb r0, r0
/* 801963EC  1C 00 00 38 */	mulli r0, r0, 0x38
/* 801963F0  7C 64 02 14 */	add r3, r4, r0
/* 801963F4  83 E3 5D 74 */	lwz r31, 0x5d74(r3)
/* 801963F8  C0 1E 00 98 */	lfs f0, 0x98(r30)
/* 801963FC  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80196400  C0 1E 00 9C */	lfs f0, 0x9c(r30)
/* 80196404  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80196408  C0 1E 00 A0 */	lfs f0, 0xa0(r30)
/* 8019640C  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80196410  C0 1E 00 A4 */	lfs f0, 0xa4(r30)
/* 80196414  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80196418  C0 1E 00 A8 */	lfs f0, 0xa8(r30)
/* 8019641C  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80196420  C0 1E 00 AC */	lfs f0, 0xac(r30)
/* 80196424  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80196428  38 7F 02 48 */	addi r3, r31, 0x248
/* 8019642C  38 81 00 2C */	addi r4, r1, 0x2c
/* 80196430  38 A1 00 20 */	addi r5, r1, 0x20
/* 80196434  C0 3E 00 BC */	lfs f1, 0xbc(r30)
/* 80196438  38 C0 00 00 */	li r6, 0
/* 8019643C  4B FE A6 A5 */	bl Set__9dCamera_cF4cXyz4cXyzfs
/* 80196440  38 7F 02 48 */	addi r3, r31, 0x248
/* 80196444  4B FC B0 A5 */	bl Stay__9dCamera_cFv
/* 80196448  C0 1E 00 98 */	lfs f0, 0x98(r30)
/* 8019644C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80196450  C0 1E 00 9C */	lfs f0, 0x9c(r30)
/* 80196454  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80196458  C0 1E 00 A0 */	lfs f0, 0xa0(r30)
/* 8019645C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80196460  C0 1E 00 A4 */	lfs f0, 0xa4(r30)
/* 80196464  D0 01 00 08 */	stfs f0, 8(r1)
/* 80196468  C0 1E 00 A8 */	lfs f0, 0xa8(r30)
/* 8019646C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80196470  C0 1E 00 AC */	lfs f0, 0xac(r30)
/* 80196474  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80196478  38 7F 02 48 */	addi r3, r31, 0x248
/* 8019647C  38 81 00 14 */	addi r4, r1, 0x14
/* 80196480  38 A1 00 08 */	addi r5, r1, 8
/* 80196484  C0 3E 00 BC */	lfs f1, 0xbc(r30)
/* 80196488  38 C0 00 00 */	li r6, 0
/* 8019648C  4B FE A7 15 */	bl Reset__9dCamera_cF4cXyz4cXyzfs
/* 80196490  3C 60 80 3A */	lis r3, __ptmf_null@ha /* 0x803A2180@ha */
/* 80196494  38 83 21 80 */	addi r4, r3, __ptmf_null@l /* 0x803A2180@l */
/* 80196498  80 64 00 00 */	lwz r3, 0(r4)
/* 8019649C  80 04 00 04 */	lwz r0, 4(r4)
/* 801964A0  90 7E 00 00 */	stw r3, 0(r30)
/* 801964A4  90 1E 00 04 */	stw r0, 4(r30)
/* 801964A8  80 04 00 08 */	lwz r0, 8(r4)
/* 801964AC  90 1E 00 08 */	stw r0, 8(r30)
/* 801964B0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 801964B4  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 801964B8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801964BC  7C 08 03 A6 */	mtlr r0
/* 801964C0  38 21 00 40 */	addi r1, r1, 0x40
/* 801964C4  4E 80 00 20 */	blr 
