lbl_8035D304:
/* 8035D304  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8035D308  41 82 00 44 */	beq lbl_8035D34C
/* 8035D30C  80 E2 CB 80 */	lwz r7, __GXData(r2)
/* 8035D310  38 00 00 01 */	li r0, 1
/* 8035D314  38 C0 00 61 */	li r6, 0x61
/* 8035D318  81 07 01 D8 */	lwz r8, 0x1d8(r7)
/* 8035D31C  3C A0 CC 01 */	lis r5, 0xCC01 /* 0xCC008000@ha */
/* 8035D320  50 08 07 FE */	rlwimi r8, r0, 0, 0x1f, 0x1f
/* 8035D324  38 00 00 07 */	li r0, 7
/* 8035D328  98 C5 80 00 */	stb r6, 0x8000(r5)  /* 0xCC008000@l */
/* 8035D32C  50 08 0F 3C */	rlwimi r8, r0, 1, 0x1c, 0x1e
/* 8035D330  91 05 80 00 */	stw r8, -0x8000(r5)
/* 8035D334  38 00 00 00 */	li r0, 0
/* 8035D338  80 E7 01 D0 */	lwz r7, 0x1d0(r7)
/* 8035D33C  50 07 07 FE */	rlwimi r7, r0, 0, 0x1f, 0x1f
/* 8035D340  50 07 0F BC */	rlwimi r7, r0, 1, 0x1e, 0x1e
/* 8035D344  98 C5 80 00 */	stb r6, -0x8000(r5)
/* 8035D348  90 E5 80 00 */	stw r7, -0x8000(r5)
lbl_8035D34C:
/* 8035D34C  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8035D350  39 40 00 00 */	li r10, 0
/* 8035D354  40 82 00 18 */	bne lbl_8035D36C
/* 8035D358  80 A2 CB 80 */	lwz r5, __GXData(r2)
/* 8035D35C  80 05 01 DC */	lwz r0, 0x1dc(r5)
/* 8035D360  54 00 07 7E */	clrlwi r0, r0, 0x1d
/* 8035D364  28 00 00 03 */	cmplwi r0, 3
/* 8035D368  40 82 00 34 */	bne lbl_8035D39C
lbl_8035D36C:
/* 8035D36C  80 A2 CB 80 */	lwz r5, __GXData(r2)
/* 8035D370  80 C5 01 DC */	lwz r6, 0x1dc(r5)
/* 8035D374  54 C0 D7 FE */	rlwinm r0, r6, 0x1a, 0x1f, 0x1f
/* 8035D378  28 00 00 01 */	cmplwi r0, 1
/* 8035D37C  40 82 00 20 */	bne lbl_8035D39C
/* 8035D380  38 00 00 61 */	li r0, 0x61
/* 8035D384  3C A0 CC 01 */	lis r5, 0xCC01 /* 0xCC008000@ha */
/* 8035D388  98 05 80 00 */	stb r0, 0x8000(r5)  /* 0xCC008000@l */
/* 8035D38C  38 00 00 00 */	li r0, 0
/* 8035D390  50 06 36 72 */	rlwimi r6, r0, 6, 0x19, 0x19
/* 8035D394  90 C5 80 00 */	stw r6, -0x8000(r5)
/* 8035D398  39 40 00 01 */	li r10, 1
lbl_8035D39C:
/* 8035D39C  39 00 00 61 */	li r8, 0x61
/* 8035D3A0  80 C2 CB 80 */	lwz r6, __GXData(r2)
/* 8035D3A4  3C E0 CC 01 */	lis r7, 0xCC01 /* 0xCC008000@ha */
/* 8035D3A8  99 07 80 00 */	stb r8, 0x8000(r7)  /* 0xCC008000@l */
/* 8035D3AC  39 20 00 00 */	li r9, 0
/* 8035D3B0  50 69 DA FE */	rlwimi r9, r3, 0x1b, 0xb, 0x1f
/* 8035D3B4  80 A6 01 E0 */	lwz r5, 0x1e0(r6)
/* 8035D3B8  38 00 00 4B */	li r0, 0x4b
/* 8035D3BC  50 09 C0 0E */	rlwimi r9, r0, 0x18, 0, 7
/* 8035D3C0  90 A7 80 00 */	stw r5, -0x8000(r7)
/* 8035D3C4  54 84 06 3F */	clrlwi. r4, r4, 0x18
/* 8035D3C8  38 60 00 01 */	li r3, 1
/* 8035D3CC  99 07 80 00 */	stb r8, -0x8000(r7)
/* 8035D3D0  38 00 00 52 */	li r0, 0x52
/* 8035D3D4  80 A6 01 E4 */	lwz r5, 0x1e4(r6)
/* 8035D3D8  90 A7 80 00 */	stw r5, -0x8000(r7)
/* 8035D3DC  99 07 80 00 */	stb r8, -0x8000(r7)
/* 8035D3E0  80 A6 01 E8 */	lwz r5, 0x1e8(r6)
/* 8035D3E4  90 A7 80 00 */	stw r5, -0x8000(r7)
/* 8035D3E8  99 07 80 00 */	stb r8, -0x8000(r7)
/* 8035D3EC  91 27 80 00 */	stw r9, -0x8000(r7)
/* 8035D3F0  80 A6 01 EC */	lwz r5, 0x1ec(r6)
/* 8035D3F4  50 85 5D 28 */	rlwimi r5, r4, 0xb, 0x14, 0x14
/* 8035D3F8  90 A6 01 EC */	stw r5, 0x1ec(r6)
/* 8035D3FC  80 86 01 EC */	lwz r4, 0x1ec(r6)
/* 8035D400  50 64 74 62 */	rlwimi r4, r3, 0xe, 0x11, 0x11
/* 8035D404  90 86 01 EC */	stw r4, 0x1ec(r6)
/* 8035D408  80 66 01 EC */	lwz r3, 0x1ec(r6)
/* 8035D40C  50 03 C0 0E */	rlwimi r3, r0, 0x18, 0, 7
/* 8035D410  90 66 01 EC */	stw r3, 0x1ec(r6)
/* 8035D414  99 07 80 00 */	stb r8, -0x8000(r7)
/* 8035D418  80 06 01 EC */	lwz r0, 0x1ec(r6)
/* 8035D41C  90 07 80 00 */	stw r0, -0x8000(r7)
/* 8035D420  41 82 00 1C */	beq lbl_8035D43C
/* 8035D424  99 07 80 00 */	stb r8, -0x8000(r7)
/* 8035D428  80 06 01 D8 */	lwz r0, 0x1d8(r6)
/* 8035D42C  90 07 80 00 */	stw r0, -0x8000(r7)
/* 8035D430  99 07 80 00 */	stb r8, -0x8000(r7)
/* 8035D434  80 06 01 D0 */	lwz r0, 0x1d0(r6)
/* 8035D438  90 07 80 00 */	stw r0, -0x8000(r7)
lbl_8035D43C:
/* 8035D43C  55 40 06 3F */	clrlwi. r0, r10, 0x18
/* 8035D440  41 82 00 1C */	beq lbl_8035D45C
/* 8035D444  38 00 00 61 */	li r0, 0x61
/* 8035D448  80 62 CB 80 */	lwz r3, __GXData(r2)
/* 8035D44C  3C 80 CC 01 */	lis r4, 0xCC01 /* 0xCC008000@ha */
/* 8035D450  98 04 80 00 */	stb r0, 0x8000(r4)  /* 0xCC008000@l */
/* 8035D454  80 03 01 DC */	lwz r0, 0x1dc(r3)
/* 8035D458  90 04 80 00 */	stw r0, -0x8000(r4)
lbl_8035D45C:
/* 8035D45C  80 62 CB 80 */	lwz r3, __GXData(r2)
/* 8035D460  38 00 00 00 */	li r0, 0
/* 8035D464  B0 03 00 02 */	sth r0, 2(r3)
/* 8035D468  4E 80 00 20 */	blr 
