lbl_807206FC:
/* 807206FC  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80720700  7C 08 02 A6 */	mflr r0
/* 80720704  90 01 00 64 */	stw r0, 0x64(r1)
/* 80720708  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8072070C  F3 E1 00 58 */	psq_st f31, 88(r1), 0, 0 /* qr0 */
/* 80720710  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80720714  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80720718  7C 7E 1B 78 */	mr r30, r3
/* 8072071C  3C 80 80 72 */	lis r4, lit_3789@ha /* 0x80722C3C@ha */
/* 80720720  3B E4 2C 3C */	addi r31, r4, lit_3789@l /* 0x80722C3C@l */
/* 80720724  C3 FF 00 04 */	lfs f31, 4(r31)
/* 80720728  4B FF FE 69 */	bl way_gake_check__FP10e_mm_class
/* 8072072C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80720730  41 82 00 58 */	beq lbl_80720788
/* 80720734  7F C3 F3 78 */	mr r3, r30
/* 80720738  38 80 00 0E */	li r4, 0xe
/* 8072073C  C0 3F 00 44 */	lfs f1, 0x44(r31)
/* 80720740  38 A0 00 02 */	li r5, 2
/* 80720744  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80720748  4B FF F2 FD */	bl anm_init__FP10e_mm_classifUcf
/* 8072074C  C0 3F 00 78 */	lfs f1, 0x78(r31)
/* 80720750  4B B4 72 3D */	bl cM_rndFX__Ff
/* 80720754  C0 1F 00 74 */	lfs f0, 0x74(r31)
/* 80720758  EC 00 08 2A */	fadds f0, f0, f1
/* 8072075C  FC 00 00 1E */	fctiwz f0, f0
/* 80720760  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 80720764  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80720768  A8 1E 04 DE */	lha r0, 0x4de(r30)
/* 8072076C  7C 00 1A 14 */	add r0, r0, r3
/* 80720770  B0 1E 06 8C */	sth r0, 0x68c(r30)
/* 80720774  38 00 00 00 */	li r0, 0
/* 80720778  B0 1E 06 70 */	sth r0, 0x670(r30)
/* 8072077C  38 00 00 04 */	li r0, 4
/* 80720780  B0 1E 06 6E */	sth r0, 0x66e(r30)
/* 80720784  48 00 03 AC */	b lbl_80720B30
lbl_80720788:
/* 80720788  A8 1E 06 70 */	lha r0, 0x670(r30)
/* 8072078C  2C 00 00 01 */	cmpwi r0, 1
/* 80720790  41 82 01 8C */	beq lbl_8072091C
/* 80720794  40 80 02 E4 */	bge lbl_80720A78
/* 80720798  2C 00 00 00 */	cmpwi r0, 0
/* 8072079C  40 80 00 08 */	bge lbl_807207A4
/* 807207A0  48 00 02 D8 */	b lbl_80720A78
lbl_807207A4:
/* 807207A4  88 1E 04 99 */	lbz r0, 0x499(r30)
/* 807207A8  2C 00 00 01 */	cmpwi r0, 1
/* 807207AC  40 82 00 14 */	bne lbl_807207C0
/* 807207B0  3C 60 80 72 */	lis r3, l_HIO@ha /* 0x80722EC0@ha */
/* 807207B4  38 63 2E C0 */	addi r3, r3, l_HIO@l /* 0x80722EC0@l */
/* 807207B8  C3 E3 00 20 */	lfs f31, 0x20(r3)
/* 807207BC  48 00 00 10 */	b lbl_807207CC
lbl_807207C0:
/* 807207C0  3C 60 80 72 */	lis r3, l_HIO@ha /* 0x80722EC0@ha */
/* 807207C4  38 63 2E C0 */	addi r3, r3, l_HIO@l /* 0x80722EC0@l */
/* 807207C8  C3 E3 00 0C */	lfs f31, 0xc(r3)
lbl_807207CC:
/* 807207CC  38 7E 04 DE */	addi r3, r30, 0x4de
/* 807207D0  A8 9E 06 8C */	lha r4, 0x68c(r30)
/* 807207D4  38 A0 00 08 */	li r5, 8
/* 807207D8  38 C0 01 00 */	li r6, 0x100
/* 807207DC  4B B4 FE 2D */	bl cLib_addCalcAngleS2__FPssss
/* 807207E0  80 7E 05 B8 */	lwz r3, 0x5b8(r30)
/* 807207E4  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 807207E8  FC 00 00 1E */	fctiwz f0, f0
/* 807207EC  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 807207F0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 807207F4  2C 00 00 0F */	cmpwi r0, 0xf
/* 807207F8  41 82 00 14 */	beq lbl_8072080C
/* 807207FC  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 80720800  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80720804  2C 00 00 1C */	cmpwi r0, 0x1c
/* 80720808  40 82 00 78 */	bne lbl_80720880
lbl_8072080C:
/* 8072080C  38 A0 00 01 */	li r5, 1
/* 80720810  88 1E 06 72 */	lbz r0, 0x672(r30)
/* 80720814  7C 00 07 75 */	extsb. r0, r0
/* 80720818  40 82 00 08 */	bne lbl_80720820
/* 8072081C  38 A0 00 02 */	li r5, 2
lbl_80720820:
/* 80720820  80 1E 07 1C */	lwz r0, 0x71c(r30)
/* 80720824  54 00 05 29 */	rlwinm. r0, r0, 0, 0x14, 0x14
/* 80720828  40 82 00 30 */	bne lbl_80720858
/* 8072082C  3C 60 00 07 */	lis r3, 0x0007 /* 0x000702ED@ha */
/* 80720830  38 03 02 ED */	addi r0, r3, 0x02ED /* 0x000702ED@l */
/* 80720834  90 01 00 14 */	stw r0, 0x14(r1)
/* 80720838  38 7E 05 BC */	addi r3, r30, 0x5bc
/* 8072083C  38 81 00 14 */	addi r4, r1, 0x14
/* 80720840  38 C0 FF FF */	li r6, -1
/* 80720844  81 9E 05 BC */	lwz r12, 0x5bc(r30)
/* 80720848  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8072084C  7D 89 03 A6 */	mtctr r12
/* 80720850  4E 80 04 21 */	bctrl 
/* 80720854  48 00 00 2C */	b lbl_80720880
lbl_80720858:
/* 80720858  3C 60 00 07 */	lis r3, 0x0007 /* 0x000702EE@ha */
/* 8072085C  38 03 02 EE */	addi r0, r3, 0x02EE /* 0x000702EE@l */
/* 80720860  90 01 00 10 */	stw r0, 0x10(r1)
/* 80720864  38 7E 05 BC */	addi r3, r30, 0x5bc
/* 80720868  38 81 00 10 */	addi r4, r1, 0x10
/* 8072086C  38 C0 FF FF */	li r6, -1
/* 80720870  81 9E 05 BC */	lwz r12, 0x5bc(r30)
/* 80720874  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80720878  7D 89 03 A6 */	mtctr r12
/* 8072087C  4E 80 04 21 */	bctrl 
lbl_80720880:
/* 80720880  A8 1E 06 9C */	lha r0, 0x69c(r30)
/* 80720884  2C 00 00 00 */	cmpwi r0, 0
/* 80720888  41 82 00 28 */	beq lbl_807208B0
/* 8072088C  A8 1E 06 9E */	lha r0, 0x69e(r30)
/* 80720890  2C 00 00 00 */	cmpwi r0, 0
/* 80720894  40 82 01 E4 */	bne lbl_80720A78
/* 80720898  7F C3 F3 78 */	mr r3, r30
/* 8072089C  C0 3F 00 6C */	lfs f1, 0x6c(r31)
/* 807208A0  C0 5F 00 7C */	lfs f2, 0x7c(r31)
/* 807208A4  4B 8F C6 2D */	bl fopAcM_wayBgCheck__FPC10fopAc_ac_cff
/* 807208A8  2C 03 00 00 */	cmpwi r3, 0
/* 807208AC  41 82 01 CC */	beq lbl_80720A78
lbl_807208B0:
/* 807208B0  38 00 00 01 */	li r0, 1
/* 807208B4  B0 1E 06 70 */	sth r0, 0x670(r30)
/* 807208B8  C0 3F 00 00 */	lfs f1, 0(r31)
/* 807208BC  4B B4 70 99 */	bl cM_rndF__Ff
/* 807208C0  C0 1F 00 7C */	lfs f0, 0x7c(r31)
/* 807208C4  EC 00 08 2A */	fadds f0, f0, f1
/* 807208C8  FC 00 00 1E */	fctiwz f0, f0
/* 807208CC  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 807208D0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 807208D4  B0 1E 06 9C */	sth r0, 0x69c(r30)
/* 807208D8  7F C3 F3 78 */	mr r3, r30
/* 807208DC  38 80 00 08 */	li r4, 8
/* 807208E0  C0 3F 00 44 */	lfs f1, 0x44(r31)
/* 807208E4  38 A0 00 02 */	li r5, 2
/* 807208E8  C0 5F 00 08 */	lfs f2, 8(r31)
/* 807208EC  4B FF F1 59 */	bl anm_init__FP10e_mm_classifUcf
/* 807208F0  3C 60 00 07 */	lis r3, 0x0007 /* 0x000702E0@ha */
/* 807208F4  38 03 02 E0 */	addi r0, r3, 0x02E0 /* 0x000702E0@l */
/* 807208F8  90 01 00 0C */	stw r0, 0xc(r1)
/* 807208FC  38 7E 05 BC */	addi r3, r30, 0x5bc
/* 80720900  38 81 00 0C */	addi r4, r1, 0xc
/* 80720904  38 A0 FF FF */	li r5, -1
/* 80720908  81 9E 05 BC */	lwz r12, 0x5bc(r30)
/* 8072090C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80720910  7D 89 03 A6 */	mtctr r12
/* 80720914  4E 80 04 21 */	bctrl 
/* 80720918  48 00 01 60 */	b lbl_80720A78
lbl_8072091C:
/* 8072091C  80 7E 05 B8 */	lwz r3, 0x5b8(r30)
/* 80720920  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 80720924  FC 00 F8 90 */	fmr f0, f31
/* 80720928  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8072092C  40 82 00 2C */	bne lbl_80720958
/* 80720930  3C 60 00 07 */	lis r3, 0x0007 /* 0x000702E0@ha */
/* 80720934  38 03 02 E0 */	addi r0, r3, 0x02E0 /* 0x000702E0@l */
/* 80720938  90 01 00 08 */	stw r0, 8(r1)
/* 8072093C  38 7E 05 BC */	addi r3, r30, 0x5bc
/* 80720940  38 81 00 08 */	addi r4, r1, 8
/* 80720944  38 A0 FF FF */	li r5, -1
/* 80720948  81 9E 05 BC */	lwz r12, 0x5bc(r30)
/* 8072094C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80720950  7D 89 03 A6 */	mtctr r12
/* 80720954  4E 80 04 21 */	bctrl 
lbl_80720958:
/* 80720958  A8 1E 06 9C */	lha r0, 0x69c(r30)
/* 8072095C  2C 00 00 00 */	cmpwi r0, 0
/* 80720960  40 82 01 18 */	bne lbl_80720A78
/* 80720964  7F C3 F3 78 */	mr r3, r30
/* 80720968  C0 3F 00 6C */	lfs f1, 0x6c(r31)
/* 8072096C  C0 5F 00 7C */	lfs f2, 0x7c(r31)
/* 80720970  4B 8F C5 61 */	bl fopAcM_wayBgCheck__FPC10fopAc_ac_cff
/* 80720974  2C 03 00 00 */	cmpwi r3, 0
/* 80720978  41 82 00 2C */	beq lbl_807209A4
/* 8072097C  C0 3F 00 78 */	lfs f1, 0x78(r31)
/* 80720980  4B B4 70 0D */	bl cM_rndFX__Ff
/* 80720984  C0 1F 00 74 */	lfs f0, 0x74(r31)
/* 80720988  EC 00 08 2A */	fadds f0, f0, f1
/* 8072098C  FC 00 00 1E */	fctiwz f0, f0
/* 80720990  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 80720994  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80720998  38 00 00 50 */	li r0, 0x50
/* 8072099C  B0 1E 06 9E */	sth r0, 0x69e(r30)
/* 807209A0  48 00 00 8C */	b lbl_80720A2C
lbl_807209A4:
/* 807209A4  C0 3F 00 80 */	lfs f1, 0x80(r31)
/* 807209A8  4B B4 6F E5 */	bl cM_rndFX__Ff
/* 807209AC  C0 1E 04 A8 */	lfs f0, 0x4a8(r30)
/* 807209B0  EC 00 08 2A */	fadds f0, f0, f1
/* 807209B4  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 807209B8  C0 1E 04 AC */	lfs f0, 0x4ac(r30)
/* 807209BC  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 807209C0  C0 3F 00 80 */	lfs f1, 0x80(r31)
/* 807209C4  4B B4 6F C9 */	bl cM_rndFX__Ff
/* 807209C8  C0 1E 04 B0 */	lfs f0, 0x4b0(r30)
/* 807209CC  EC 00 08 2A */	fadds f0, f0, f1
/* 807209D0  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 807209D4  38 61 00 18 */	addi r3, r1, 0x18
/* 807209D8  38 81 00 24 */	addi r4, r1, 0x24
/* 807209DC  38 BE 04 D0 */	addi r5, r30, 0x4d0
/* 807209E0  4B B4 61 55 */	bl __mi__4cXyzCFRC3Vec
/* 807209E4  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 807209E8  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 807209EC  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 807209F0  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 807209F4  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 807209F8  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 807209FC  38 61 00 30 */	addi r3, r1, 0x30
/* 80720A00  4B B4 67 29 */	bl atan2sX_Z__4cXyzCFv
/* 80720A04  A8 1E 04 DE */	lha r0, 0x4de(r30)
/* 80720A08  7C 00 18 50 */	subf r0, r0, r3
/* 80720A0C  7C 03 07 34 */	extsh r3, r0
/* 80720A10  2C 03 30 00 */	cmpwi r3, 0x3000
/* 80720A14  40 81 00 0C */	ble lbl_80720A20
/* 80720A18  38 60 30 00 */	li r3, 0x3000
/* 80720A1C  48 00 00 10 */	b lbl_80720A2C
lbl_80720A20:
/* 80720A20  2C 03 D0 00 */	cmpwi r3, -12288
/* 80720A24  40 80 00 08 */	bge lbl_80720A2C
/* 80720A28  38 60 D0 00 */	li r3, -12288
lbl_80720A2C:
/* 80720A2C  A8 1E 04 DE */	lha r0, 0x4de(r30)
/* 80720A30  7C 00 1A 14 */	add r0, r0, r3
/* 80720A34  B0 1E 06 8C */	sth r0, 0x68c(r30)
/* 80720A38  7F C3 F3 78 */	mr r3, r30
/* 80720A3C  38 80 00 0E */	li r4, 0xe
/* 80720A40  C0 3F 00 44 */	lfs f1, 0x44(r31)
/* 80720A44  38 A0 00 02 */	li r5, 2
/* 80720A48  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80720A4C  4B FF EF F9 */	bl anm_init__FP10e_mm_classifUcf
/* 80720A50  38 00 00 00 */	li r0, 0
/* 80720A54  B0 1E 06 70 */	sth r0, 0x670(r30)
/* 80720A58  C0 3F 00 00 */	lfs f1, 0(r31)
/* 80720A5C  4B B4 6E F9 */	bl cM_rndF__Ff
/* 80720A60  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80720A64  EC 00 08 2A */	fadds f0, f0, f1
/* 80720A68  FC 00 00 1E */	fctiwz f0, f0
/* 80720A6C  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 80720A70  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80720A74  B0 1E 06 9C */	sth r0, 0x69c(r30)
lbl_80720A78:
/* 80720A78  38 7E 05 2C */	addi r3, r30, 0x52c
/* 80720A7C  FC 20 F8 90 */	fmr f1, f31
/* 80720A80  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80720A84  C0 7F 00 50 */	lfs f3, 0x50(r31)
/* 80720A88  4B B4 EF B5 */	bl cLib_addCalc2__FPffff
/* 80720A8C  88 1E 04 99 */	lbz r0, 0x499(r30)
/* 80720A90  2C 00 00 01 */	cmpwi r0, 1
/* 80720A94  40 82 00 14 */	bne lbl_80720AA8
/* 80720A98  3C 60 80 72 */	lis r3, l_HIO@ha /* 0x80722EC0@ha */
/* 80720A9C  38 63 2E C0 */	addi r3, r3, l_HIO@l /* 0x80722EC0@l */
/* 80720AA0  C0 23 00 28 */	lfs f1, 0x28(r3)
/* 80720AA4  48 00 00 10 */	b lbl_80720AB4
lbl_80720AA8:
/* 80720AA8  3C 60 80 72 */	lis r3, l_HIO@ha /* 0x80722EC0@ha */
/* 80720AAC  38 63 2E C0 */	addi r3, r3, l_HIO@l /* 0x80722EC0@l */
/* 80720AB0  C0 23 00 14 */	lfs f1, 0x14(r3)
lbl_80720AB4:
/* 80720AB4  88 1E 05 B4 */	lbz r0, 0x5b4(r30)
/* 80720AB8  28 00 00 FF */	cmplwi r0, 0xff
/* 80720ABC  41 82 00 2C */	beq lbl_80720AE8
/* 80720AC0  28 00 00 00 */	cmplwi r0, 0
/* 80720AC4  41 82 00 24 */	beq lbl_80720AE8
/* 80720AC8  C0 5F 00 44 */	lfs f2, 0x44(r31)
/* 80720ACC  C8 3F 00 88 */	lfd f1, 0x88(r31)
/* 80720AD0  90 01 00 44 */	stw r0, 0x44(r1)
/* 80720AD4  3C 00 43 30 */	lis r0, 0x4330
/* 80720AD8  90 01 00 40 */	stw r0, 0x40(r1)
/* 80720ADC  C8 01 00 40 */	lfd f0, 0x40(r1)
/* 80720AE0  EC 00 08 28 */	fsubs f0, f0, f1
/* 80720AE4  EC 22 00 32 */	fmuls f1, f2, f0
lbl_80720AE8:
/* 80720AE8  7F C3 F3 78 */	mr r3, r30
/* 80720AEC  38 80 50 00 */	li r4, 0x5000
/* 80720AF0  4B FF F0 D5 */	bl pl_check__FP10e_mm_classfs
/* 80720AF4  2C 03 00 00 */	cmpwi r3, 0
/* 80720AF8  41 82 00 38 */	beq lbl_80720B30
/* 80720AFC  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80720B00  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80720B04  80 63 5D AC */	lwz r3, 0x5dac(r3)
/* 80720B08  C0 23 04 D4 */	lfs f1, 0x4d4(r3)
/* 80720B0C  C0 1E 04 D4 */	lfs f0, 0x4d4(r30)
/* 80720B10  EC 21 00 28 */	fsubs f1, f1, f0
/* 80720B14  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80720B18  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80720B1C  40 80 00 14 */	bge lbl_80720B30
/* 80720B20  38 00 00 01 */	li r0, 1
/* 80720B24  B0 1E 06 6E */	sth r0, 0x66e(r30)
/* 80720B28  38 00 00 00 */	li r0, 0
/* 80720B2C  B0 1E 06 70 */	sth r0, 0x670(r30)
lbl_80720B30:
/* 80720B30  E3 E1 00 58 */	psq_l f31, 88(r1), 0, 0 /* qr0 */
/* 80720B34  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80720B38  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80720B3C  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80720B40  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80720B44  7C 08 03 A6 */	mtlr r0
/* 80720B48  38 21 00 60 */	addi r1, r1, 0x60
/* 80720B4C  4E 80 00 20 */	blr 
