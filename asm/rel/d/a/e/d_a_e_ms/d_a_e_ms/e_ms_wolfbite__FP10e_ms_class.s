lbl_80727704:
/* 80727704  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80727708  7C 08 02 A6 */	mflr r0
/* 8072770C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80727710  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80727714  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80727718  7C 7F 1B 78 */	mr r31, r3
/* 8072771C  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80727720  38 84 61 C0 */	addi r4, r4, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80727724  83 C4 5D AC */	lwz r30, 0x5dac(r4)
/* 80727728  A8 03 05 B4 */	lha r0, 0x5b4(r3)
/* 8072772C  2C 00 00 01 */	cmpwi r0, 1
/* 80727730  41 82 00 64 */	beq lbl_80727794
/* 80727734  40 80 00 E8 */	bge lbl_8072781C
/* 80727738  2C 00 00 00 */	cmpwi r0, 0
/* 8072773C  40 80 00 08 */	bge lbl_80727744
/* 80727740  48 00 00 DC */	b lbl_8072781C
lbl_80727744:
/* 80727744  38 80 00 04 */	li r4, 4
/* 80727748  3C A0 80 73 */	lis r5, lit_3801@ha /* 0x80729508@ha */
/* 8072774C  C0 25 95 08 */	lfs f1, lit_3801@l(r5)  /* 0x80729508@l */
/* 80727750  38 A0 00 00 */	li r5, 0
/* 80727754  3C C0 80 73 */	lis r6, lit_3802@ha /* 0x8072950C@ha */
/* 80727758  C0 46 95 0C */	lfs f2, lit_3802@l(r6)  /* 0x8072950C@l */
/* 8072775C  4B FF E4 79 */	bl anm_init__FP10e_ms_classifUcf
/* 80727760  38 00 00 01 */	li r0, 1
/* 80727764  B0 1F 05 B4 */	sth r0, 0x5b4(r31)
/* 80727768  3C 60 00 07 */	lis r3, 0x0007 /* 0x000701AE@ha */
/* 8072776C  38 03 01 AE */	addi r0, r3, 0x01AE /* 0x000701AE@l */
/* 80727770  90 01 00 0C */	stw r0, 0xc(r1)
/* 80727774  38 7F 05 D8 */	addi r3, r31, 0x5d8
/* 80727778  38 81 00 0C */	addi r4, r1, 0xc
/* 8072777C  38 A0 FF FF */	li r5, -1
/* 80727780  81 9F 05 D8 */	lwz r12, 0x5d8(r31)
/* 80727784  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80727788  7D 89 03 A6 */	mtctr r12
/* 8072778C  4E 80 04 21 */	bctrl 
/* 80727790  48 00 00 8C */	b lbl_8072781C
lbl_80727794:
/* 80727794  7F C3 F3 78 */	mr r3, r30
/* 80727798  7F E4 FB 78 */	mr r4, r31
/* 8072779C  81 9E 06 28 */	lwz r12, 0x628(r30)
/* 807277A0  81 8C 01 E0 */	lwz r12, 0x1e0(r12)
/* 807277A4  7D 89 03 A6 */	mtctr r12
/* 807277A8  4E 80 04 21 */	bctrl 
/* 807277AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 807277B0  40 82 00 6C */	bne lbl_8072781C
/* 807277B4  38 00 00 04 */	li r0, 4
/* 807277B8  B0 1F 06 7E */	sth r0, 0x67e(r31)
/* 807277BC  38 00 00 00 */	li r0, 0
/* 807277C0  B0 1F 05 B4 */	sth r0, 0x5b4(r31)
/* 807277C4  3C 60 00 07 */	lis r3, 0x0007 /* 0x000701A8@ha */
/* 807277C8  38 03 01 A8 */	addi r0, r3, 0x01A8 /* 0x000701A8@l */
/* 807277CC  90 01 00 08 */	stw r0, 8(r1)
/* 807277D0  38 7F 05 D8 */	addi r3, r31, 0x5d8
/* 807277D4  38 81 00 08 */	addi r4, r1, 8
/* 807277D8  38 A0 FF FF */	li r5, -1
/* 807277DC  81 9F 05 D8 */	lwz r12, 0x5d8(r31)
/* 807277E0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 807277E4  7D 89 03 A6 */	mtctr r12
/* 807277E8  4E 80 04 21 */	bctrl 
/* 807277EC  38 00 00 00 */	li r0, 0
/* 807277F0  B0 1F 05 62 */	sth r0, 0x562(r31)
/* 807277F4  80 1E 05 78 */	lwz r0, 0x578(r30)
/* 807277F8  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 807277FC  41 82 00 14 */	beq lbl_80727810
/* 80727800  A8 7E 04 E6 */	lha r3, 0x4e6(r30)
/* 80727804  38 03 C0 00 */	addi r0, r3, -16384
/* 80727808  B0 1F 04 DE */	sth r0, 0x4de(r31)
/* 8072780C  48 00 00 10 */	b lbl_8072781C
lbl_80727810:
/* 80727810  A8 7E 04 E6 */	lha r3, 0x4e6(r30)
/* 80727814  38 03 40 00 */	addi r0, r3, 0x4000
/* 80727818  B0 1F 04 DE */	sth r0, 0x4de(r31)
lbl_8072781C:
/* 8072781C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80727820  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80727824  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80727828  7C 08 03 A6 */	mtlr r0
/* 8072782C  38 21 00 20 */	addi r1, r1, 0x20
/* 80727830  4E 80 00 20 */	blr 
