lbl_80591E18:
/* 80591E18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80591E1C  7C 08 02 A6 */	mflr r0
/* 80591E20  90 01 00 14 */	stw r0, 0x14(r1)
/* 80591E24  7C 65 1B 78 */	mr r5, r3
/* 80591E28  3C 60 00 08 */	lis r3, 0x0008 /* 0x00080148@ha */
/* 80591E2C  38 03 01 48 */	addi r0, r3, 0x0148 /* 0x00080148@l */
/* 80591E30  90 01 00 08 */	stw r0, 8(r1)
/* 80591E34  3C 60 80 45 */	lis r3, mAudioMgrPtr__10Z2AudioMgr@ha /* 0x80451368@ha */
/* 80591E38  38 63 13 68 */	addi r3, r3, mAudioMgrPtr__10Z2AudioMgr@l /* 0x80451368@l */
/* 80591E3C  80 63 00 00 */	lwz r3, 0(r3)
/* 80591E40  38 81 00 08 */	addi r4, r1, 8
/* 80591E44  38 A5 0A 44 */	addi r5, r5, 0xa44
/* 80591E48  38 C0 00 00 */	li r6, 0
/* 80591E4C  38 E0 00 00 */	li r7, 0
/* 80591E50  3D 00 80 59 */	lis r8, lit_4010@ha /* 0x8059290C@ha */
/* 80591E54  C0 28 29 0C */	lfs f1, lit_4010@l(r8)  /* 0x8059290C@l */
/* 80591E58  FC 40 08 90 */	fmr f2, f1
/* 80591E5C  3D 00 80 59 */	lis r8, lit_4684@ha /* 0x8059295C@ha */
/* 80591E60  C0 68 29 5C */	lfs f3, lit_4684@l(r8)  /* 0x8059295C@l */
/* 80591E64  FC 80 18 90 */	fmr f4, f3
/* 80591E68  39 00 00 00 */	li r8, 0
/* 80591E6C  4B D1 9B 19 */	bl seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc
/* 80591E70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80591E74  7C 08 03 A6 */	mtlr r0
/* 80591E78  38 21 00 10 */	addi r1, r1, 0x10
/* 80591E7C  4E 80 00 20 */	blr 
