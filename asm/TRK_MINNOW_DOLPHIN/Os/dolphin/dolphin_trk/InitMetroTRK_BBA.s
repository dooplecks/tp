lbl_803715F8:
/* 803715F8  38 21 FF FC */	addi r1, r1, -4
/* 803715FC  90 61 00 00 */	stw r3, 0(r1)
/* 80371600  3C 60 80 44 */	lis r3, gTRKCPUState@h /* 0x8044F338@h */
/* 80371604  60 63 F3 38 */	ori r3, r3, gTRKCPUState@l /* 0x8044F338@l */
/* 80371608  BC 03 00 00 */	stmw r0, 0(r3)
/* 8037160C  80 81 00 00 */	lwz r4, 0(r1)
/* 80371610  38 21 00 04 */	addi r1, r1, 4
/* 80371614  90 23 00 04 */	stw r1, 4(r3)
/* 80371618  90 83 00 0C */	stw r4, 0xc(r3)
/* 8037161C  7C 88 02 A6 */	mflr r4
/* 80371620  90 83 00 84 */	stw r4, 0x84(r3)
/* 80371624  90 83 00 80 */	stw r4, 0x80(r3)
/* 80371628  7C 80 00 26 */	mfcr r4
/* 8037162C  90 83 00 88 */	stw r4, 0x88(r3)
/* 80371630  7C 80 00 A6 */	mfmsr r4
/* 80371634  60 83 80 00 */	ori r3, r4, 0x8000
/* 80371638  7C 60 01 24 */	mtmsr r3
/* 8037163C  7C 9B 03 A6 */	mtspr 0x1b, r4
/* 80371640  4B FF FB B1 */	bl TRKSaveExtended1Block
/* 80371644  3C 60 80 44 */	lis r3, gTRKCPUState@h /* 0x8044F338@h */
/* 80371648  60 63 F3 38 */	ori r3, r3, gTRKCPUState@l /* 0x8044F338@l */
/* 8037164C  B8 03 00 00 */	lmw r0, 0(r3)
/* 80371650  38 00 00 00 */	li r0, 0
/* 80371654  7C 12 FB A6 */	mtspr 0x3f2, r0
/* 80371658  7C 15 FB A6 */	mtspr 0x3f5, r0
/* 8037165C  3C 20 80 45 */	lis r1, 0x8045 /* 0x80459BC8@h */
/* 80371660  60 21 9B C8 */	ori r1, r1, 0x9BC8 /* 0x80459BC8@l */
/* 80371664  38 60 00 02 */	li r3, 2
/* 80371668  48 00 08 41 */	bl InitMetroTRKCommTable
/* 8037166C  2C 03 00 01 */	cmpwi r3, 1
/* 80371670  40 82 00 14 */	bne lbl_80371684
/* 80371674  80 83 00 84 */	lwz r4, 0x84(r3)
/* 80371678  7C 88 03 A6 */	mtlr r4
/* 8037167C  B8 03 00 00 */	lmw r0, 0(r3)
/* 80371680  4E 80 00 20 */	blr 
lbl_80371684:
/* 80371684  48 00 05 18 */	b TRK_main
/* 80371688  4E 80 00 20 */	blr 
