lbl_80278184:
/* 80278184  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80278188  7C 08 02 A6 */	mflr r0
/* 8027818C  90 01 00 54 */	stw r0, 0x54(r1)
/* 80278190  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80278194  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80278198  7C 7E 1B 78 */	mr r30, r3
/* 8027819C  7C 9F 23 78 */	mr r31, r4
/* 802781A0  80 04 00 7C */	lwz r0, 0x7c(r4)
/* 802781A4  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 802781A8  40 82 00 F4 */	bne lbl_8027829C
/* 802781AC  38 7E 01 84 */	addi r3, r30, 0x184
/* 802781B0  38 A1 00 08 */	addi r5, r1, 8
/* 802781B4  48 0C EB B9 */	bl PSMTXMultVec
/* 802781B8  A0 1F 00 88 */	lhz r0, 0x88(r31)
/* 802781BC  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 802781C0  3C 60 80 44 */	lis r3, sincosTable___5JMath@ha /* 0x80439A20@ha */
/* 802781C4  38 63 9A 20 */	addi r3, r3, sincosTable___5JMath@l /* 0x80439A20@l */
/* 802781C8  7C 43 04 2E */	lfsx f2, r3, r0
/* 802781CC  7C 63 02 14 */	add r3, r3, r0
/* 802781D0  C0 63 00 04 */	lfs f3, 4(r3)
/* 802781D4  C0 3E 01 44 */	lfs f1, 0x144(r30)
/* 802781D8  C0 1F 00 60 */	lfs f0, 0x60(r31)
/* 802781DC  EC 81 00 32 */	fmuls f4, f1, f0
/* 802781E0  C0 3E 01 48 */	lfs f1, 0x148(r30)
/* 802781E4  C0 1F 00 64 */	lfs f0, 0x64(r31)
/* 802781E8  EC 21 00 32 */	fmuls f1, f1, f0
/* 802781EC  EC A2 01 32 */	fmuls f5, f2, f4
/* 802781F0  EC C3 00 72 */	fmuls f6, f3, f1
/* 802781F4  C0 FE 01 68 */	lfs f7, 0x168(r30)
/* 802781F8  C1 1E 01 78 */	lfs f8, 0x178(r30)
/* 802781FC  EC 03 01 32 */	fmuls f0, f3, f4
/* 80278200  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80278204  FC 00 10 50 */	fneg f0, f2
/* 80278208  EC 00 00 72 */	fmuls f0, f0, f1
/* 8027820C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80278210  C0 02 B8 C0 */	lfs f0, lit_2742(r2)
/* 80278214  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80278218  C0 01 00 08 */	lfs f0, 8(r1)
/* 8027821C  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80278220  EC 05 01 F2 */	fmuls f0, f5, f7
/* 80278224  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80278228  EC 06 01 F2 */	fmuls f0, f6, f7
/* 8027822C  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80278230  FC 00 40 50 */	fneg f0, f8
/* 80278234  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80278238  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8027823C  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80278240  EC 05 02 32 */	fmuls f0, f5, f8
/* 80278244  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80278248  EC 06 02 32 */	fmuls f0, f6, f8
/* 8027824C  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 80278250  D0 E1 00 3C */	stfs f7, 0x3c(r1)
/* 80278254  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80278258  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 8027825C  38 61 00 14 */	addi r3, r1, 0x14
/* 80278260  38 80 00 00 */	li r4, 0
/* 80278264  48 0E 7F E9 */	bl GXLoadPosMtxImm
/* 80278268  7F C3 F3 78 */	mr r3, r30
/* 8027826C  38 81 00 14 */	addi r4, r1, 0x14
/* 80278270  80 1E 02 10 */	lwz r0, 0x210(r30)
/* 80278274  54 00 10 3A */	slwi r0, r0, 2
/* 80278278  3C A0 80 3C */	lis r5, p_prj@ha /* 0x803C4320@ha */
/* 8027827C  38 A5 43 20 */	addi r5, r5, p_prj@l /* 0x803C4320@l */
/* 80278280  7D 85 00 2E */	lwzx r12, r5, r0
/* 80278284  7D 89 03 A6 */	mtctr r12
/* 80278288  4E 80 04 21 */	bctrl 
/* 8027828C  3C 60 80 3C */	lis r3, jpa_dl@ha /* 0x803C42E0@ha */
/* 80278290  38 63 42 E0 */	addi r3, r3, jpa_dl@l /* 0x803C42E0@l */
/* 80278294  38 80 00 20 */	li r4, 0x20
/* 80278298  48 0E 7C 59 */	bl GXCallDisplayList
lbl_8027829C:
/* 8027829C  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 802782A0  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 802782A4  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802782A8  7C 08 03 A6 */	mtlr r0
/* 802782AC  38 21 00 50 */	addi r1, r1, 0x50
/* 802782B0  4E 80 00 20 */	blr 
