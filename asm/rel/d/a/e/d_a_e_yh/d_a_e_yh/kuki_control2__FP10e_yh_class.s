lbl_808008C8:
/* 808008C8  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 808008CC  7C 08 02 A6 */	mflr r0
/* 808008D0  90 01 00 94 */	stw r0, 0x94(r1)
/* 808008D4  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 808008D8  F3 E1 00 88 */	psq_st f31, 136(r1), 0, 0 /* qr0 */
/* 808008DC  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 808008E0  F3 C1 00 78 */	psq_st f30, 120(r1), 0, 0 /* qr0 */
/* 808008E4  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 808008E8  F3 A1 00 68 */	psq_st f29, 104(r1), 0, 0 /* qr0 */
/* 808008EC  DB 81 00 50 */	stfd f28, 0x50(r1)
/* 808008F0  F3 81 00 58 */	psq_st f28, 88(r1), 0, 0 /* qr0 */
/* 808008F4  39 61 00 50 */	addi r11, r1, 0x50
/* 808008F8  4B B6 18 D9 */	bl _savegpr_26
/* 808008FC  C0 03 04 D0 */	lfs f0, 0x4d0(r3)
/* 80800900  D0 03 07 24 */	stfs f0, 0x724(r3)
/* 80800904  C0 03 04 D4 */	lfs f0, 0x4d4(r3)
/* 80800908  D0 03 07 28 */	stfs f0, 0x728(r3)
/* 8080090C  C0 03 04 D8 */	lfs f0, 0x4d8(r3)
/* 80800910  D0 03 07 2C */	stfs f0, 0x72c(r3)
/* 80800914  3C 80 80 80 */	lis r4, lit_3903@ha /* 0x80804280@ha */
/* 80800918  C3 E4 42 80 */	lfs f31, lit_3903@l(r4)  /* 0x80804280@l */
/* 8080091C  D3 E1 00 20 */	stfs f31, 0x20(r1)
/* 80800920  D3 E1 00 24 */	stfs f31, 0x24(r1)
/* 80800924  C0 03 08 44 */	lfs f0, 0x844(r3)
/* 80800928  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8080092C  3B C0 00 0A */	li r30, 0xa
/* 80800930  3B 63 07 18 */	addi r27, r3, 0x718
/* 80800934  3B 43 07 6C */	addi r26, r3, 0x76c
/* 80800938  3C 60 80 45 */	lis r3, calc_mtx@ha /* 0x80450768@ha */
/* 8080093C  3B E3 07 68 */	addi r31, r3, calc_mtx@l /* 0x80450768@l */
lbl_80800940:
/* 80800940  C0 3B 00 00 */	lfs f1, 0(r27)
/* 80800944  C0 1B 00 0C */	lfs f0, 0xc(r27)
/* 80800948  EF C1 00 28 */	fsubs f30, f1, f0
/* 8080094C  C0 3B 00 04 */	lfs f1, 4(r27)
/* 80800950  C0 1B 00 10 */	lfs f0, 0x10(r27)
/* 80800954  EF A1 00 28 */	fsubs f29, f1, f0
/* 80800958  C0 3B 00 08 */	lfs f1, 8(r27)
/* 8080095C  C0 1B 00 14 */	lfs f0, 0x14(r27)
/* 80800960  EF 81 00 28 */	fsubs f28, f1, f0
/* 80800964  FC 20 F0 90 */	fmr f1, f30
/* 80800968  FC 40 E0 90 */	fmr f2, f28
/* 8080096C  4B A6 6D 09 */	bl cM_atan2s__Fff
/* 80800970  7C 7C 07 34 */	extsh r28, r3
/* 80800974  EC 3E 07 B2 */	fmuls f1, f30, f30
/* 80800978  EC 1C 07 32 */	fmuls f0, f28, f28
/* 8080097C  EC 41 00 2A */	fadds f2, f1, f0
/* 80800980  FC 02 F8 40 */	fcmpo cr0, f2, f31
/* 80800984  40 81 00 0C */	ble lbl_80800990
/* 80800988  FC 00 10 34 */	frsqrte f0, f2
/* 8080098C  EC 40 00 B2 */	fmuls f2, f0, f2
lbl_80800990:
/* 80800990  FC 20 E8 90 */	fmr f1, f29
/* 80800994  4B A6 6C E1 */	bl cM_atan2s__Fff
/* 80800998  7C 03 00 D0 */	neg r0, r3
/* 8080099C  7C 1D 07 34 */	extsh r29, r0
/* 808009A0  80 7F 00 00 */	lwz r3, 0(r31)
/* 808009A4  7F 84 E3 78 */	mr r4, r28
/* 808009A8  4B 80 BA 35 */	bl mDoMtx_YrotS__FPA4_fs
/* 808009AC  80 7F 00 00 */	lwz r3, 0(r31)
/* 808009B0  7F A4 EB 78 */	mr r4, r29
/* 808009B4  4B 80 B9 E9 */	bl mDoMtx_XrotM__FPA4_fs
/* 808009B8  38 61 00 20 */	addi r3, r1, 0x20
/* 808009BC  38 81 00 14 */	addi r4, r1, 0x14
/* 808009C0  4B A7 05 2D */	bl MtxPosition__FP4cXyzP4cXyz
/* 808009C4  38 61 00 08 */	addi r3, r1, 8
/* 808009C8  38 9B 00 0C */	addi r4, r27, 0xc
/* 808009CC  38 A1 00 14 */	addi r5, r1, 0x14
/* 808009D0  4B A6 61 15 */	bl __pl__4cXyzCFRC3Vec
/* 808009D4  C0 01 00 08 */	lfs f0, 8(r1)
/* 808009D8  D0 1B 00 00 */	stfs f0, 0(r27)
/* 808009DC  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 808009E0  D0 1B 00 04 */	stfs f0, 4(r27)
/* 808009E4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 808009E8  D0 1B 00 08 */	stfs f0, 8(r27)
/* 808009EC  B3 BA 00 00 */	sth r29, 0(r26)
/* 808009F0  B3 9A 00 02 */	sth r28, 2(r26)
/* 808009F4  37 DE FF FF */	addic. r30, r30, -1
/* 808009F8  3B 7B FF F4 */	addi r27, r27, -12
/* 808009FC  3B 5A FF FA */	addi r26, r26, -6
/* 80800A00  40 80 FF 40 */	bge lbl_80800940
/* 80800A04  E3 E1 00 88 */	psq_l f31, 136(r1), 0, 0 /* qr0 */
/* 80800A08  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 80800A0C  E3 C1 00 78 */	psq_l f30, 120(r1), 0, 0 /* qr0 */
/* 80800A10  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 80800A14  E3 A1 00 68 */	psq_l f29, 104(r1), 0, 0 /* qr0 */
/* 80800A18  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 80800A1C  E3 81 00 58 */	psq_l f28, 88(r1), 0, 0 /* qr0 */
/* 80800A20  CB 81 00 50 */	lfd f28, 0x50(r1)
/* 80800A24  39 61 00 50 */	addi r11, r1, 0x50
/* 80800A28  4B B6 17 F5 */	bl _restgpr_26
/* 80800A2C  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80800A30  7C 08 03 A6 */	mtlr r0
/* 80800A34  38 21 00 90 */	addi r1, r1, 0x90
/* 80800A38  4E 80 00 20 */	blr 
