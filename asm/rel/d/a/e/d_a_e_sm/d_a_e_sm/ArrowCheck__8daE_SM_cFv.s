lbl_80792914:
/* 80792914  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80792918  7C 08 02 A6 */	mflr r0
/* 8079291C  90 01 00 64 */	stw r0, 0x64(r1)
/* 80792920  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80792924  F3 E1 00 58 */	psq_st f31, 88(r1), 0, 0 /* qr0 */
/* 80792928  39 61 00 50 */	addi r11, r1, 0x50
/* 8079292C  4B BC F8 B1 */	bl _savegpr_29
/* 80792930  7C 7D 1B 78 */	mr r29, r3
/* 80792934  3C 60 80 7A */	lis r3, lit_3920@ha /* 0x807985E0@ha */
/* 80792938  3B E3 85 E0 */	addi r31, r3, lit_3920@l /* 0x807985E0@l */
/* 8079293C  3B DD 10 D4 */	addi r30, r29, 0x10d4
/* 80792940  38 00 00 0A */	li r0, 0xa
/* 80792944  B0 1D 06 D4 */	sth r0, 0x6d4(r29)
/* 80792948  80 7D 11 3C */	lwz r3, 0x113c(r29)
/* 8079294C  80 03 00 B0 */	lwz r0, 0xb0(r3)
/* 80792950  28 00 00 02 */	cmplwi r0, 2
/* 80792954  41 82 00 0C */	beq lbl_80792960
/* 80792958  28 00 00 01 */	cmplwi r0, 1
/* 8079295C  40 82 00 1C */	bne lbl_80792978
lbl_80792960:
/* 80792960  38 00 00 06 */	li r0, 6
/* 80792964  90 03 00 B0 */	stw r0, 0xb0(r3)
/* 80792968  38 00 FF FF */	li r0, -1
/* 8079296C  B0 03 09 4E */	sth r0, 0x94e(r3)
/* 80792970  38 00 00 01 */	li r0, 1
/* 80792974  48 00 00 08 */	b lbl_8079297C
lbl_80792978:
/* 80792978  38 00 00 00 */	li r0, 0
lbl_8079297C:
/* 8079297C  2C 00 00 00 */	cmpwi r0, 0
/* 80792980  41 82 02 2C */	beq lbl_80792BAC
/* 80792984  38 80 00 01 */	li r4, 1
/* 80792988  88 1D 06 F8 */	lbz r0, 0x6f8(r29)
/* 8079298C  7C 00 07 74 */	extsb r0, r0
/* 80792990  7C 7D 02 14 */	add r3, r29, r0
/* 80792994  98 83 06 F9 */	stb r4, 0x6f9(r3)
/* 80792998  88 1D 06 F8 */	lbz r0, 0x6f8(r29)
/* 8079299C  7C 00 07 74 */	extsb r0, r0
/* 807929A0  54 00 10 3A */	slwi r0, r0, 2
/* 807929A4  7C 7D 02 14 */	add r3, r29, r0
/* 807929A8  80 63 07 18 */	lwz r3, 0x718(r3)
/* 807929AC  38 81 00 08 */	addi r4, r1, 8
/* 807929B0  4B 88 70 0D */	bl fopAcM_SearchByID__FUiPP10fopAc_ac_c
/* 807929B4  80 61 00 08 */	lwz r3, 8(r1)
/* 807929B8  28 03 00 00 */	cmplwi r3, 0
/* 807929BC  41 82 00 0C */	beq lbl_807929C8
/* 807929C0  38 00 00 01 */	li r0, 1
/* 807929C4  98 03 09 3F */	stb r0, 0x93f(r3)
lbl_807929C8:
/* 807929C8  28 1E 00 00 */	cmplwi r30, 0
/* 807929CC  41 82 01 E0 */	beq lbl_80792BAC
/* 807929D0  80 7D 11 3C */	lwz r3, 0x113c(r29)
/* 807929D4  28 03 00 00 */	cmplwi r3, 0
/* 807929D8  41 82 00 0C */	beq lbl_807929E4
/* 807929DC  80 83 00 04 */	lwz r4, 4(r3)
/* 807929E0  48 00 00 08 */	b lbl_807929E8
lbl_807929E4:
/* 807929E4  38 80 FF FF */	li r4, -1
lbl_807929E8:
/* 807929E8  88 1D 06 F8 */	lbz r0, 0x6f8(r29)
/* 807929EC  7C 00 07 74 */	extsb r0, r0
/* 807929F0  54 00 10 3A */	slwi r0, r0, 2
/* 807929F4  7C 7D 02 14 */	add r3, r29, r0
/* 807929F8  90 83 07 18 */	stw r4, 0x718(r3)
/* 807929FC  38 61 00 0C */	addi r3, r1, 0xc
/* 80792A00  38 9D 09 90 */	addi r4, r29, 0x990
/* 80792A04  7F C5 F3 78 */	mr r5, r30
/* 80792A08  4B AD 41 2D */	bl __mi__4cXyzCFRC3Vec
/* 80792A0C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80792A10  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80792A14  C0 81 00 10 */	lfs f4, 0x10(r1)
/* 80792A18  D0 81 00 1C */	stfs f4, 0x1c(r1)
/* 80792A1C  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 80792A20  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 80792A24  C0 7F 00 4C */	lfs f3, 0x4c(r31)
/* 80792A28  C0 1D 06 F0 */	lfs f0, 0x6f0(r29)
/* 80792A2C  EC 03 00 32 */	fmuls f0, f3, f0
/* 80792A30  EC 04 00 2A */	fadds f0, f4, f0
/* 80792A34  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80792A38  4B AD 4C 3D */	bl cM_atan2s__Fff
/* 80792A3C  7C 60 07 34 */	extsh r0, r3
/* 80792A40  C8 3F 00 68 */	lfd f1, 0x68(r31)
/* 80792A44  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80792A48  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80792A4C  3C 00 43 30 */	lis r0, 0x4330
/* 80792A50  90 01 00 28 */	stw r0, 0x28(r1)
/* 80792A54  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 80792A58  EF E0 08 28 */	fsubs f31, f0, f1
/* 80792A5C  C0 3F 00 2C */	lfs f1, 0x2c(r31)
/* 80792A60  4B AD 4F 2D */	bl cM_rndFX__Ff
/* 80792A64  EC 01 F8 2A */	fadds f0, f1, f31
/* 80792A68  FC 00 00 1E */	fctiwz f0, f0
/* 80792A6C  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 80792A70  80 81 00 34 */	lwz r4, 0x34(r1)
/* 80792A74  88 1D 06 F8 */	lbz r0, 0x6f8(r29)
/* 80792A78  7C 00 07 74 */	extsb r0, r0
/* 80792A7C  1C 00 00 06 */	mulli r0, r0, 6
/* 80792A80  7C 7D 02 14 */	add r3, r29, r0
/* 80792A84  B0 83 08 0A */	sth r4, 0x80a(r3)
/* 80792A88  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80792A8C  EC 20 00 32 */	fmuls f1, f0, f0
/* 80792A90  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 80792A94  EC 00 00 32 */	fmuls f0, f0, f0
/* 80792A98  EC 41 00 2A */	fadds f2, f1, f0
/* 80792A9C  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80792AA0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80792AA4  40 81 00 0C */	ble lbl_80792AB0
/* 80792AA8  FC 00 10 34 */	frsqrte f0, f2
/* 80792AAC  EC 40 00 B2 */	fmuls f2, f0, f2
lbl_80792AB0:
/* 80792AB0  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 80792AB4  4B AD 4B C1 */	bl cM_atan2s__Fff
/* 80792AB8  7C 60 07 34 */	extsh r0, r3
/* 80792ABC  7C 00 00 D0 */	neg r0, r0
/* 80792AC0  C8 3F 00 68 */	lfd f1, 0x68(r31)
/* 80792AC4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80792AC8  90 01 00 34 */	stw r0, 0x34(r1)
/* 80792ACC  3C 00 43 30 */	lis r0, 0x4330
/* 80792AD0  90 01 00 30 */	stw r0, 0x30(r1)
/* 80792AD4  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 80792AD8  EF E0 08 28 */	fsubs f31, f0, f1
/* 80792ADC  C0 3F 00 2C */	lfs f1, 0x2c(r31)
/* 80792AE0  4B AD 4E AD */	bl cM_rndFX__Ff
/* 80792AE4  EC 01 F8 2A */	fadds f0, f1, f31
/* 80792AE8  FC 00 00 1E */	fctiwz f0, f0
/* 80792AEC  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 80792AF0  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 80792AF4  88 1D 06 F8 */	lbz r0, 0x6f8(r29)
/* 80792AF8  7C 00 07 74 */	extsb r0, r0
/* 80792AFC  1C 00 00 06 */	mulli r0, r0, 6
/* 80792B00  7C 7D 02 14 */	add r3, r29, r0
/* 80792B04  B0 83 08 08 */	sth r4, 0x808(r3)
/* 80792B08  C0 1F 00 50 */	lfs f0, 0x50(r31)
/* 80792B0C  88 9D 06 F8 */	lbz r4, 0x6f8(r29)
/* 80792B10  7C 84 07 74 */	extsb r4, r4
/* 80792B14  1C 04 00 06 */	mulli r0, r4, 6
/* 80792B18  7C 7D 02 14 */	add r3, r29, r0
/* 80792B1C  A8 03 08 08 */	lha r0, 0x808(r3)
/* 80792B20  2C 00 00 00 */	cmpwi r0, 0
/* 80792B24  40 80 00 08 */	bge lbl_80792B2C
/* 80792B28  C0 1F 00 54 */	lfs f0, 0x54(r31)
lbl_80792B2C:
/* 80792B2C  C0 3D 06 F0 */	lfs f1, 0x6f0(r29)
/* 80792B30  FC 00 00 50 */	fneg f0, f0
/* 80792B34  EC 01 00 32 */	fmuls f0, f1, f0
/* 80792B38  54 80 10 3A */	slwi r0, r4, 2
/* 80792B3C  7C 7D 02 14 */	add r3, r29, r0
/* 80792B40  D0 03 07 90 */	stfs f0, 0x790(r3)
/* 80792B44  88 1D 06 F8 */	lbz r0, 0x6f8(r29)
/* 80792B48  7C 00 07 74 */	extsb r0, r0
/* 80792B4C  1C 00 00 06 */	mulli r0, r0, 6
/* 80792B50  7C BD 02 14 */	add r5, r29, r0
/* 80792B54  A8 85 08 0A */	lha r4, 0x80a(r5)
/* 80792B58  80 7D 11 3C */	lwz r3, 0x113c(r29)
/* 80792B5C  A8 03 04 E6 */	lha r0, 0x4e6(r3)
/* 80792B60  7C 04 00 50 */	subf r0, r4, r0
/* 80792B64  B0 05 08 BE */	sth r0, 0x8be(r5)
/* 80792B68  88 1D 06 F8 */	lbz r0, 0x6f8(r29)
/* 80792B6C  7C 00 07 74 */	extsb r0, r0
/* 80792B70  1C 00 00 06 */	mulli r0, r0, 6
/* 80792B74  7C BD 02 14 */	add r5, r29, r0
/* 80792B78  A8 85 08 08 */	lha r4, 0x808(r5)
/* 80792B7C  80 7D 11 3C */	lwz r3, 0x113c(r29)
/* 80792B80  A8 03 04 E4 */	lha r0, 0x4e4(r3)
/* 80792B84  7C 04 00 50 */	subf r0, r4, r0
/* 80792B88  B0 05 08 BC */	sth r0, 0x8bc(r5)
/* 80792B8C  88 7D 06 F8 */	lbz r3, 0x6f8(r29)
/* 80792B90  38 03 00 01 */	addi r0, r3, 1
/* 80792B94  98 1D 06 F8 */	stb r0, 0x6f8(r29)
/* 80792B98  88 1D 06 F8 */	lbz r0, 0x6f8(r29)
/* 80792B9C  2C 00 00 1E */	cmpwi r0, 0x1e
/* 80792BA0  40 82 00 0C */	bne lbl_80792BAC
/* 80792BA4  38 00 00 00 */	li r0, 0
/* 80792BA8  98 1D 06 F8 */	stb r0, 0x6f8(r29)
lbl_80792BAC:
/* 80792BAC  A8 1D 09 88 */	lha r0, 0x988(r29)
/* 80792BB0  2C 00 00 05 */	cmpwi r0, 5
/* 80792BB4  41 82 00 14 */	beq lbl_80792BC8
/* 80792BB8  2C 00 00 01 */	cmpwi r0, 1
/* 80792BBC  41 82 00 0C */	beq lbl_80792BC8
/* 80792BC0  38 00 00 02 */	li r0, 2
/* 80792BC4  B0 1D 09 88 */	sth r0, 0x988(r29)
lbl_80792BC8:
/* 80792BC8  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 80792BCC  4B AD 4D C1 */	bl cM_rndFX__Ff
/* 80792BD0  C0 1F 00 58 */	lfs f0, 0x58(r31)
/* 80792BD4  EC 00 08 2A */	fadds f0, f0, f1
/* 80792BD8  D0 1D 06 DC */	stfs f0, 0x6dc(r29)
/* 80792BDC  C0 3F 00 60 */	lfs f1, 0x60(r31)
/* 80792BE0  4B AD 4D AD */	bl cM_rndFX__Ff
/* 80792BE4  C0 1F 00 5C */	lfs f0, 0x5c(r31)
/* 80792BE8  EC 00 08 2A */	fadds f0, f0, f1
/* 80792BEC  D0 1D 09 78 */	stfs f0, 0x978(r29)
/* 80792BF0  38 00 00 32 */	li r0, 0x32
/* 80792BF4  B0 1D 06 C0 */	sth r0, 0x6c0(r29)
/* 80792BF8  C0 1F 00 64 */	lfs f0, 0x64(r31)
/* 80792BFC  D0 1D 09 80 */	stfs f0, 0x980(r29)
/* 80792C00  E3 E1 00 58 */	psq_l f31, 88(r1), 0, 0 /* qr0 */
/* 80792C04  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80792C08  39 61 00 50 */	addi r11, r1, 0x50
/* 80792C0C  4B BC F6 1D */	bl _restgpr_29
/* 80792C10  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80792C14  7C 08 03 A6 */	mtlr r0
/* 80792C18  38 21 00 60 */	addi r1, r1, 0x60
/* 80792C1C  4E 80 00 20 */	blr 
