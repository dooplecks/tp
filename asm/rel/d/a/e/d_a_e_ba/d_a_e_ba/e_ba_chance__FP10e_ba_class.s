lbl_806806B4:
/* 806806B4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 806806B8  7C 08 02 A6 */	mflr r0
/* 806806BC  90 01 00 24 */	stw r0, 0x24(r1)
/* 806806C0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 806806C4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 806806C8  7C 7F 1B 78 */	mr r31, r3
/* 806806CC  3C 80 80 68 */	lis r4, lit_3947@ha /* 0x806823BC@ha */
/* 806806D0  3B C4 23 BC */	addi r30, r4, lit_3947@l /* 0x806823BC@l */
/* 806806D4  A8 03 06 74 */	lha r0, 0x674(r3)
/* 806806D8  2C 00 00 01 */	cmpwi r0, 1
/* 806806DC  41 82 00 8C */	beq lbl_80680768
/* 806806E0  40 80 01 6C */	bge lbl_8068084C
/* 806806E4  2C 00 00 00 */	cmpwi r0, 0
/* 806806E8  40 80 00 08 */	bge lbl_806806F0
/* 806806EC  48 00 01 60 */	b lbl_8068084C
lbl_806806F0:
/* 806806F0  38 80 00 09 */	li r4, 9
/* 806806F4  C0 3E 00 68 */	lfs f1, 0x68(r30)
/* 806806F8  38 A0 00 02 */	li r5, 2
/* 806806FC  C0 5E 00 88 */	lfs f2, 0x88(r30)
/* 80680700  4B FF E6 91 */	bl anm_init__FP10e_ba_classifUcf
/* 80680704  38 00 00 01 */	li r0, 1
/* 80680708  B0 1F 06 74 */	sth r0, 0x674(r31)
/* 8068070C  C0 3E 00 6C */	lfs f1, 0x6c(r30)
/* 80680710  4B BE 72 45 */	bl cM_rndF__Ff
/* 80680714  C0 1E 00 00 */	lfs f0, 0(r30)
/* 80680718  EC 00 08 2A */	fadds f0, f0, f1
/* 8068071C  FC 00 00 1E */	fctiwz f0, f0
/* 80680720  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80680724  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80680728  B0 1F 06 A6 */	sth r0, 0x6a6(r31)
/* 8068072C  C0 1E 00 04 */	lfs f0, 4(r30)
/* 80680730  D0 1F 04 F8 */	stfs f0, 0x4f8(r31)
/* 80680734  D0 1F 04 FC */	stfs f0, 0x4fc(r31)
/* 80680738  D0 1F 05 00 */	stfs f0, 0x500(r31)
/* 8068073C  3C 60 00 07 */	lis r3, 0x0007 /* 0x000701C3@ha */
/* 80680740  38 03 01 C3 */	addi r0, r3, 0x01C3 /* 0x000701C3@l */
/* 80680744  90 01 00 0C */	stw r0, 0xc(r1)
/* 80680748  38 7F 05 C8 */	addi r3, r31, 0x5c8
/* 8068074C  38 81 00 0C */	addi r4, r1, 0xc
/* 80680750  38 A0 FF FF */	li r5, -1
/* 80680754  81 9F 05 C8 */	lwz r12, 0x5c8(r31)
/* 80680758  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8068075C  7D 89 03 A6 */	mtctr r12
/* 80680760  4E 80 04 21 */	bctrl 
/* 80680764  48 00 00 E8 */	b lbl_8068084C
lbl_80680768:
/* 80680768  80 1F 07 38 */	lwz r0, 0x738(r31)
/* 8068076C  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 80680770  41 82 00 B8 */	beq lbl_80680828
/* 80680774  C0 3E 00 78 */	lfs f1, 0x78(r30)
/* 80680778  4B BE 71 DD */	bl cM_rndF__Ff
/* 8068077C  C0 5E 00 78 */	lfs f2, 0x78(r30)
/* 80680780  EC 02 08 2A */	fadds f0, f2, f1
/* 80680784  D0 1F 04 FC */	stfs f0, 0x4fc(r31)
/* 80680788  FC 20 10 90 */	fmr f1, f2
/* 8068078C  4B BE 72 01 */	bl cM_rndFX__Ff
/* 80680790  D0 3F 04 F8 */	stfs f1, 0x4f8(r31)
/* 80680794  C0 3E 00 78 */	lfs f1, 0x78(r30)
/* 80680798  4B BE 71 F5 */	bl cM_rndFX__Ff
/* 8068079C  D0 3F 05 00 */	stfs f1, 0x500(r31)
/* 806807A0  C0 3E 00 08 */	lfs f1, 8(r30)
/* 806807A4  4B BE 71 B1 */	bl cM_rndF__Ff
/* 806807A8  C0 1E 00 5C */	lfs f0, 0x5c(r30)
/* 806807AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 806807B0  40 80 00 10 */	bge lbl_806807C0
/* 806807B4  38 00 00 00 */	li r0, 0
/* 806807B8  B0 1F 06 A2 */	sth r0, 0x6a2(r31)
/* 806807BC  48 00 00 0C */	b lbl_806807C8
lbl_806807C0:
/* 806807C0  38 00 80 00 */	li r0, -32768
/* 806807C4  B0 1F 06 A2 */	sth r0, 0x6a2(r31)
lbl_806807C8:
/* 806807C8  C0 3E 00 8C */	lfs f1, 0x8c(r30)
/* 806807CC  4B BE 71 89 */	bl cM_rndF__Ff
/* 806807D0  FC 00 08 1E */	fctiwz f0, f1
/* 806807D4  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 806807D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 806807DC  B0 1F 06 A0 */	sth r0, 0x6a0(r31)
/* 806807E0  38 7F 0A 7C */	addi r3, r31, 0xa7c
/* 806807E4  38 9F 0A 80 */	addi r4, r31, 0xa80
/* 806807E8  38 BF 04 D0 */	addi r5, r31, 0x4d0
/* 806807EC  38 DF 04 E4 */	addi r6, r31, 0x4e4
/* 806807F0  C0 3E 00 90 */	lfs f1, 0x90(r30)
/* 806807F4  38 FF 01 0C */	addi r7, r31, 0x10c
/* 806807F8  39 00 00 01 */	li r8, 1
/* 806807FC  4B 99 C8 25 */	bl fopAcM_effSmokeSet1__FPUlPUlPC4cXyzPC5csXyzfPC12dKy_tevstr_ci
/* 80680800  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070206@ha */
/* 80680804  38 03 02 06 */	addi r0, r3, 0x0206 /* 0x00070206@l */
/* 80680808  90 01 00 08 */	stw r0, 8(r1)
/* 8068080C  38 7F 05 C8 */	addi r3, r31, 0x5c8
/* 80680810  38 81 00 08 */	addi r4, r1, 8
/* 80680814  38 A0 FF FF */	li r5, -1
/* 80680818  81 9F 05 C8 */	lwz r12, 0x5c8(r31)
/* 8068081C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80680820  7D 89 03 A6 */	mtctr r12
/* 80680824  4E 80 04 21 */	bctrl 
lbl_80680828:
/* 80680828  A8 1F 06 A6 */	lha r0, 0x6a6(r31)
/* 8068082C  2C 00 00 00 */	cmpwi r0, 0
/* 80680830  40 82 00 1C */	bne lbl_8068084C
/* 80680834  38 60 00 00 */	li r3, 0
/* 80680838  B0 7F 04 E0 */	sth r3, 0x4e0(r31)
/* 8068083C  38 00 00 02 */	li r0, 2
/* 80680840  B0 1F 06 72 */	sth r0, 0x672(r31)
/* 80680844  B0 7F 06 74 */	sth r3, 0x674(r31)
/* 80680848  48 00 00 4C */	b lbl_80680894
lbl_8068084C:
/* 8068084C  38 7F 04 D0 */	addi r3, r31, 0x4d0
/* 80680850  38 9F 04 F8 */	addi r4, r31, 0x4f8
/* 80680854  7C 65 1B 78 */	mr r5, r3
/* 80680858  4B CC 68 39 */	bl PSVECAdd
/* 8068085C  C0 3F 04 FC */	lfs f1, 0x4fc(r31)
/* 80680860  C0 1E 00 68 */	lfs f0, 0x68(r30)
/* 80680864  EC 01 00 28 */	fsubs f0, f1, f0
/* 80680868  D0 1F 04 FC */	stfs f0, 0x4fc(r31)
/* 8068086C  38 7F 04 DE */	addi r3, r31, 0x4de
/* 80680870  A8 9F 06 A0 */	lha r4, 0x6a0(r31)
/* 80680874  38 A0 00 02 */	li r5, 2
/* 80680878  38 C0 10 00 */	li r6, 0x1000
/* 8068087C  4B BE FD 8D */	bl cLib_addCalcAngleS2__FPssss
/* 80680880  38 7F 04 E0 */	addi r3, r31, 0x4e0
/* 80680884  A8 9F 06 A2 */	lha r4, 0x6a2(r31)
/* 80680888  38 A0 00 02 */	li r5, 2
/* 8068088C  38 C0 10 00 */	li r6, 0x1000
/* 80680890  4B BE FD 79 */	bl cLib_addCalcAngleS2__FPssss
lbl_80680894:
/* 80680894  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80680898  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8068089C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 806808A0  7C 08 03 A6 */	mtlr r0
/* 806808A4  38 21 00 20 */	addi r1, r1, 0x20
/* 806808A8  4E 80 00 20 */	blr 
