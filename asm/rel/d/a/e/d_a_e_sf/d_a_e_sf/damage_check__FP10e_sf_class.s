lbl_807870D0:
/* 807870D0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 807870D4  7C 08 02 A6 */	mflr r0
/* 807870D8  90 01 00 24 */	stw r0, 0x24(r1)
/* 807870DC  39 61 00 20 */	addi r11, r1, 0x20
/* 807870E0  4B BD B0 F1 */	bl _savegpr_26
/* 807870E4  7C 7E 1B 78 */	mr r30, r3
/* 807870E8  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 807870EC  3B E3 61 C0 */	addi r31, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 807870F0  83 BF 5D AC */	lwz r29, 0x5dac(r31)
/* 807870F4  38 7E 09 50 */	addi r3, r30, 0x950
/* 807870F8  4B 8F C7 39 */	bl Move__10dCcD_GSttsFv
/* 807870FC  A8 1E 06 A4 */	lha r0, 0x6a4(r30)
/* 80787100  2C 00 00 00 */	cmpwi r0, 0
/* 80787104  40 82 02 A4 */	bne lbl_807873A8
/* 80787108  3C 60 80 79 */	lis r3, l_HIO@ha /* 0x8078A07C@ha */
/* 8078710C  38 63 A0 7C */	addi r3, r3, l_HIO@l /* 0x8078A07C@l */
/* 80787110  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80787114  28 00 00 00 */	cmplwi r0, 0
/* 80787118  41 82 00 0C */	beq lbl_80787124
/* 8078711C  38 00 03 E8 */	li r0, 0x3e8
/* 80787120  B0 1E 05 62 */	sth r0, 0x562(r30)
lbl_80787124:
/* 80787124  3B 40 00 00 */	li r26, 0
/* 80787128  3B 60 00 00 */	li r27, 0
lbl_8078712C:
/* 8078712C  3B 9B 09 70 */	addi r28, r27, 0x970
/* 80787130  7F 9E E2 14 */	add r28, r30, r28
/* 80787134  7F 83 E3 78 */	mr r3, r28
/* 80787138  4B 8F D3 29 */	bl ChkTgHit__12dCcD_GObjInfFv
/* 8078713C  28 03 00 00 */	cmplwi r3, 0
/* 80787140  41 82 02 24 */	beq lbl_80787364
/* 80787144  7F 83 E3 78 */	mr r3, r28
/* 80787148  4B 8F D3 B1 */	bl GetTgHitObj__12dCcD_GObjInfFv
/* 8078714C  90 7E 0F 88 */	stw r3, 0xf88(r30)
/* 80787150  7F C3 F3 78 */	mr r3, r30
/* 80787154  38 9E 0F 88 */	addi r4, r30, 0xf88
/* 80787158  4B 90 0A AD */	bl cc_at_check__FP10fopAc_ac_cP11dCcU_AtInfo
/* 8078715C  88 1E 0F A8 */	lbz r0, 0xfa8(r30)
/* 80787160  28 00 00 10 */	cmplwi r0, 0x10
/* 80787164  40 82 00 50 */	bne lbl_807871B4
/* 80787168  80 7E 0F 88 */	lwz r3, 0xf88(r30)
/* 8078716C  80 03 00 10 */	lwz r0, 0x10(r3)
/* 80787170  54 00 03 DF */	rlwinm. r0, r0, 0, 0xf, 0xf
/* 80787174  41 82 00 24 */	beq lbl_80787198
/* 80787178  38 00 00 14 */	li r0, 0x14
/* 8078717C  B0 1E 06 8A */	sth r0, 0x68a(r30)
/* 80787180  38 00 00 00 */	li r0, 0
/* 80787184  B0 1E 05 B4 */	sth r0, 0x5b4(r30)
/* 80787188  3C 60 80 79 */	lis r3, lit_3909@ha /* 0x80789C3C@ha */
/* 8078718C  C0 03 9C 3C */	lfs f0, lit_3909@l(r3)  /* 0x80789C3C@l */
/* 80787190  D0 1E 06 C4 */	stfs f0, 0x6c4(r30)
/* 80787194  48 00 01 E0 */	b lbl_80787374
lbl_80787198:
/* 80787198  38 00 00 08 */	li r0, 8
/* 8078719C  B0 1E 06 8A */	sth r0, 0x68a(r30)
/* 807871A0  38 00 00 00 */	li r0, 0
/* 807871A4  B0 1E 05 B4 */	sth r0, 0x5b4(r30)
/* 807871A8  38 00 00 06 */	li r0, 6
/* 807871AC  B0 1E 06 A4 */	sth r0, 0x6a4(r30)
/* 807871B0  48 00 01 C4 */	b lbl_80787374
lbl_807871B4:
/* 807871B4  3B 80 00 00 */	li r28, 0
/* 807871B8  3B 60 00 00 */	li r27, 0
/* 807871BC  88 1E 06 AD */	lbz r0, 0x6ad(r30)
/* 807871C0  7C 00 07 75 */	extsb. r0, r0
/* 807871C4  41 82 00 10 */	beq lbl_807871D4
/* 807871C8  38 00 00 00 */	li r0, 0
/* 807871CC  98 1E 06 AD */	stb r0, 0x6ad(r30)
/* 807871D0  3B 60 00 01 */	li r27, 1
lbl_807871D4:
/* 807871D4  80 7E 0F 88 */	lwz r3, 0xf88(r30)
/* 807871D8  80 83 00 10 */	lwz r4, 0x10(r3)
/* 807871DC  54 85 06 B5 */	rlwinm. r5, r4, 0, 0x1a, 0x1a
/* 807871E0  40 82 00 1C */	bne lbl_807871FC
/* 807871E4  80 7F 5D AC */	lwz r3, 0x5dac(r31)
/* 807871E8  88 03 05 68 */	lbz r0, 0x568(r3)
/* 807871EC  28 00 00 05 */	cmplwi r0, 5
/* 807871F0  41 82 00 0C */	beq lbl_807871FC
/* 807871F4  54 80 02 53 */	rlwinm. r0, r4, 0, 9, 9
/* 807871F8  41 82 00 68 */	beq lbl_80787260
lbl_807871FC:
/* 807871FC  A8 1E 06 8A */	lha r0, 0x68a(r30)
/* 80787200  2C 00 00 1E */	cmpwi r0, 0x1e
/* 80787204  41 82 00 0C */	beq lbl_80787210
/* 80787208  28 05 00 00 */	cmplwi r5, 0
/* 8078720C  41 82 00 48 */	beq lbl_80787254
lbl_80787210:
/* 80787210  7F C3 F3 78 */	mr r3, r30
/* 80787214  38 9E 04 D0 */	addi r4, r30, 0x4d0
/* 80787218  38 A0 00 0F */	li r5, 0xf
/* 8078721C  38 C0 00 00 */	li r6, 0
/* 80787220  38 E0 00 29 */	li r7, 0x29
/* 80787224  4B 89 58 B5 */	bl fopAcM_createDisappear__FPC10fopAc_ac_cPC4cXyzUcUcUc
/* 80787228  7F C3 F3 78 */	mr r3, r30
/* 8078722C  4B 89 2A 51 */	bl fopAcM_delete__FP10fopAc_ac_c
/* 80787230  80 9E 05 BC */	lwz r4, 0x5bc(r30)
/* 80787234  2C 04 00 FF */	cmpwi r4, 0xff
/* 80787238  41 82 01 70 */	beq lbl_807873A8
/* 8078723C  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80787240  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80787244  88 1E 04 E2 */	lbz r0, 0x4e2(r30)
/* 80787248  7C 05 07 74 */	extsb r5, r0
/* 8078724C  4B 8A DF B5 */	bl onSwitch__10dSv_info_cFii
/* 80787250  48 00 01 58 */	b lbl_807873A8
lbl_80787254:
/* 80787254  7F C3 F3 78 */	mr r3, r30
/* 80787258  4B FF FD C1 */	bl crash_eff__FP10e_sf_class
/* 8078725C  3B 80 00 01 */	li r28, 1
lbl_80787260:
/* 80787260  80 7E 0F 88 */	lwz r3, 0xf88(r30)
/* 80787264  80 03 00 10 */	lwz r0, 0x10(r3)
/* 80787268  74 00 D8 00 */	andis. r0, r0, 0xd800
/* 8078726C  41 82 00 10 */	beq lbl_8078727C
/* 80787270  38 00 00 14 */	li r0, 0x14
/* 80787274  B0 1E 06 A4 */	sth r0, 0x6a4(r30)
/* 80787278  48 00 00 48 */	b lbl_807872C0
lbl_8078727C:
/* 8078727C  88 1D 05 68 */	lbz r0, 0x568(r29)
/* 80787280  28 00 00 0A */	cmplwi r0, 0xa
/* 80787284  40 82 00 34 */	bne lbl_807872B8
/* 80787288  7F A3 EB 78 */	mr r3, r29
/* 8078728C  81 9D 06 28 */	lwz r12, 0x628(r29)
/* 80787290  81 8C 01 3C */	lwz r12, 0x13c(r12)
/* 80787294  7D 89 03 A6 */	mtctr r12
/* 80787298  4E 80 04 21 */	bctrl 
/* 8078729C  2C 03 00 00 */	cmpwi r3, 0
/* 807872A0  41 82 00 18 */	beq lbl_807872B8
/* 807872A4  38 00 00 03 */	li r0, 3
/* 807872A8  B0 1E 06 A4 */	sth r0, 0x6a4(r30)
/* 807872AC  38 00 00 01 */	li r0, 1
/* 807872B0  98 1E 06 AD */	stb r0, 0x6ad(r30)
/* 807872B4  48 00 00 0C */	b lbl_807872C0
lbl_807872B8:
/* 807872B8  38 00 00 06 */	li r0, 6
/* 807872BC  B0 1E 06 A4 */	sth r0, 0x6a4(r30)
lbl_807872C0:
/* 807872C0  A8 1E 05 62 */	lha r0, 0x562(r30)
/* 807872C4  2C 00 00 00 */	cmpwi r0, 0
/* 807872C8  40 81 00 14 */	ble lbl_807872DC
/* 807872CC  7F 80 07 75 */	extsb. r0, r28
/* 807872D0  40 82 00 0C */	bne lbl_807872DC
/* 807872D4  7F 60 07 75 */	extsb. r0, r27
/* 807872D8  41 82 00 1C */	beq lbl_807872F4
lbl_807872DC:
/* 807872DC  38 00 00 1E */	li r0, 0x1e
/* 807872E0  B0 1E 06 8A */	sth r0, 0x68a(r30)
/* 807872E4  38 00 00 00 */	li r0, 0
/* 807872E8  B0 1E 05 B4 */	sth r0, 0x5b4(r30)
/* 807872EC  B0 1E 05 62 */	sth r0, 0x562(r30)
/* 807872F0  48 00 00 50 */	b lbl_80787340
lbl_807872F4:
/* 807872F4  38 00 00 14 */	li r0, 0x14
/* 807872F8  B0 1E 06 8A */	sth r0, 0x68a(r30)
/* 807872FC  38 00 00 00 */	li r0, 0
/* 80787300  B0 1E 05 B4 */	sth r0, 0x5b4(r30)
/* 80787304  3C 60 80 79 */	lis r3, lit_4878@ha /* 0x80789CDC@ha */
/* 80787308  C0 03 9C DC */	lfs f0, lit_4878@l(r3)  /* 0x80789CDC@l */
/* 8078730C  D0 1E 06 C4 */	stfs f0, 0x6c4(r30)
/* 80787310  A8 1E 0F 96 */	lha r0, 0xf96(r30)
/* 80787314  B0 1E 06 C8 */	sth r0, 0x6c8(r30)
/* 80787318  88 1E 05 B9 */	lbz r0, 0x5b9(r30)
/* 8078731C  28 00 00 FF */	cmplwi r0, 0xff
/* 80787320  41 82 00 20 */	beq lbl_80787340
/* 80787324  80 7F 5D AC */	lwz r3, 0x5dac(r31)
/* 80787328  88 03 05 69 */	lbz r0, 0x569(r3)
/* 8078732C  28 00 00 04 */	cmplwi r0, 4
/* 80787330  41 80 00 10 */	blt lbl_80787340
/* 80787334  38 00 00 28 */	li r0, 0x28
/* 80787338  B0 1E 06 A4 */	sth r0, 0x6a4(r30)
/* 8078733C  B0 1E 06 9E */	sth r0, 0x69e(r30)
lbl_80787340:
/* 80787340  A0 1E 0F A4 */	lhz r0, 0xfa4(r30)
/* 80787344  28 00 00 01 */	cmplwi r0, 1
/* 80787348  41 81 00 0C */	bgt lbl_80787354
/* 8078734C  38 00 00 0A */	li r0, 0xa
/* 80787350  B0 1E 06 A4 */	sth r0, 0x6a4(r30)
lbl_80787354:
/* 80787354  3C 60 80 79 */	lis r3, lit_3909@ha /* 0x80789C3C@ha */
/* 80787358  C0 03 9C 3C */	lfs f0, lit_3909@l(r3)  /* 0x80789C3C@l */
/* 8078735C  D0 1E 05 2C */	stfs f0, 0x52c(r30)
/* 80787360  48 00 00 14 */	b lbl_80787374
lbl_80787364:
/* 80787364  3B 5A 00 01 */	addi r26, r26, 1
/* 80787368  2C 1A 00 02 */	cmpwi r26, 2
/* 8078736C  3B 7B 01 38 */	addi r27, r27, 0x138
/* 80787370  40 81 FD BC */	ble lbl_8078712C
lbl_80787374:
/* 80787374  38 60 00 00 */	li r3, 0
/* 80787378  38 A0 00 00 */	li r5, 0
/* 8078737C  38 80 00 03 */	li r4, 3
/* 80787380  38 00 00 03 */	li r0, 3
/* 80787384  7C 09 03 A6 */	mtctr r0
lbl_80787388:
/* 80787388  A8 1E 05 62 */	lha r0, 0x562(r30)
/* 8078738C  2C 00 00 01 */	cmpwi r0, 1
/* 80787390  41 81 00 10 */	bgt lbl_807873A0
/* 80787394  B0 BE 05 62 */	sth r5, 0x562(r30)
/* 80787398  38 03 0A 2A */	addi r0, r3, 0xa2a
/* 8078739C  7C 9E 01 AE */	stbx r4, r30, r0
lbl_807873A0:
/* 807873A0  38 63 01 38 */	addi r3, r3, 0x138
/* 807873A4  42 00 FF E4 */	bdnz lbl_80787388
lbl_807873A8:
/* 807873A8  39 61 00 20 */	addi r11, r1, 0x20
/* 807873AC  4B BD AE 71 */	bl _restgpr_26
/* 807873B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 807873B4  7C 08 03 A6 */	mtlr r0
/* 807873B8  38 21 00 20 */	addi r1, r1, 0x20
/* 807873BC  4E 80 00 20 */	blr 
