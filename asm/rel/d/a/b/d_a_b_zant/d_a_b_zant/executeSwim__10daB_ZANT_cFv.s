lbl_80644074:
/* 80644074  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80644078  7C 08 02 A6 */	mflr r0
/* 8064407C  90 01 00 74 */	stw r0, 0x74(r1)
/* 80644080  39 61 00 70 */	addi r11, r1, 0x70
/* 80644084  4B D1 E1 45 */	bl _savegpr_24
/* 80644088  7C 7A 1B 78 */	mr r26, r3
/* 8064408C  3C 60 80 65 */	lis r3, lit_3757@ha /* 0x8064EB1C@ha */
/* 80644090  3B C3 EB 1C */	addi r30, r3, lit_3757@l /* 0x8064EB1C@l */
/* 80644094  88 1A 07 28 */	lbz r0, 0x728(r26)
/* 80644098  54 00 10 3A */	slwi r0, r0, 2
/* 8064409C  7C 7A 02 14 */	add r3, r26, r0
/* 806440A0  80 63 07 2C */	lwz r3, 0x72c(r3)
/* 806440A4  38 81 00 18 */	addi r4, r1, 0x18
/* 806440A8  4B 9D 59 15 */	bl fopAcM_SearchByID__FUiPP10fopAc_ac_c
/* 806440AC  80 81 00 18 */	lwz r4, 0x18(r1)
/* 806440B0  28 04 00 00 */	cmplwi r4, 0
/* 806440B4  41 82 09 70 */	beq lbl_80644A24
/* 806440B8  AB 24 04 E6 */	lha r25, 0x4e6(r4)
/* 806440BC  C0 3E 00 78 */	lfs f1, 0x78(r30)
/* 806440C0  57 3D 04 38 */	rlwinm r29, r25, 0, 0x10, 0x1c
/* 806440C4  3C 60 80 44 */	lis r3, sincosTable___5JMath@ha /* 0x80439A20@ha */
/* 806440C8  3B E3 9A 20 */	addi r31, r3, sincosTable___5JMath@l /* 0x80439A20@l */
/* 806440CC  7C 1F EC 2E */	lfsx f0, r31, r29
/* 806440D0  EC 01 00 32 */	fmuls f0, f1, f0
/* 806440D4  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 806440D8  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 806440DC  3B 7F 00 04 */	addi r27, r31, 4
/* 806440E0  7C 1B EC 2E */	lfsx f0, r27, r29
/* 806440E4  EC 01 00 32 */	fmuls f0, f1, f0
/* 806440E8  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 806440EC  38 61 00 40 */	addi r3, r1, 0x40
/* 806440F0  38 84 04 D0 */	addi r4, r4, 0x4d0
/* 806440F4  7C 65 1B 78 */	mr r5, r3
/* 806440F8  4B D0 2F 99 */	bl PSVECAdd
/* 806440FC  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80644100  38 63 04 D0 */	addi r3, r3, 0x4d0
/* 80644104  38 9A 04 D0 */	addi r4, r26, 0x4d0
/* 80644108  4B C2 CA FD */	bl cLib_targetAngleY__FPC3VecPC3Vec
/* 8064410C  7C 7C 07 34 */	extsh r28, r3
/* 80644110  7C 1C C8 50 */	subf r0, r28, r25
/* 80644114  7C 18 07 34 */	extsh r24, r0
/* 80644118  80 1A 06 DC */	lwz r0, 0x6dc(r26)
/* 8064411C  28 00 00 0B */	cmplwi r0, 0xb
/* 80644120  41 81 08 64 */	bgt lbl_80644984
/* 80644124  3C 60 80 65 */	lis r3, lit_6869@ha /* 0x8064F110@ha */
/* 80644128  38 63 F1 10 */	addi r3, r3, lit_6869@l /* 0x8064F110@l */
/* 8064412C  54 00 10 3A */	slwi r0, r0, 2
/* 80644130  7C 03 00 2E */	lwzx r0, r3, r0
/* 80644134  7C 09 03 A6 */	mtctr r0
/* 80644138  4E 80 04 20 */	bctr 
lbl_8064413C:
/* 8064413C  88 1A 06 FF */	lbz r0, 0x6ff(r26)
/* 80644140  28 00 00 05 */	cmplwi r0, 5
/* 80644144  40 81 00 40 */	ble lbl_80644184
/* 80644148  B3 3A 06 B8 */	sth r25, 0x6b8(r26)
/* 8064414C  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 80644150  D0 1A 06 A0 */	stfs f0, 0x6a0(r26)
/* 80644154  C0 01 00 44 */	lfs f0, 0x44(r1)
/* 80644158  D0 1A 06 A4 */	stfs f0, 0x6a4(r26)
/* 8064415C  C0 01 00 48 */	lfs f0, 0x48(r1)
/* 80644160  D0 1A 06 A8 */	stfs f0, 0x6a8(r26)
/* 80644164  38 00 00 01 */	li r0, 1
/* 80644168  98 1A 07 05 */	stb r0, 0x705(r26)
/* 8064416C  98 1A 07 11 */	stb r0, 0x711(r26)
/* 80644170  7F 43 D3 78 */	mr r3, r26
/* 80644174  38 80 00 01 */	li r4, 1
/* 80644178  38 A0 00 00 */	li r5, 0
/* 8064417C  4B FF A5 49 */	bl setActionMode__10daB_ZANT_cFii
/* 80644180  48 00 08 A4 */	b lbl_80644A24
lbl_80644184:
/* 80644184  7F 43 D3 78 */	mr r3, r26
/* 80644188  38 80 00 16 */	li r4, 0x16
/* 8064418C  38 A0 00 00 */	li r5, 0
/* 80644190  C0 3E 00 5C */	lfs f1, 0x5c(r30)
/* 80644194  C0 5E 00 0C */	lfs f2, 0xc(r30)
/* 80644198  4B FF A4 2D */	bl setBck__10daB_ZANT_cFiUcff
/* 8064419C  38 00 00 0B */	li r0, 0xb
/* 806441A0  90 1A 06 DC */	stw r0, 0x6dc(r26)
lbl_806441A4:
/* 806441A4  C0 1A 04 D4 */	lfs f0, 0x4d4(r26)
/* 806441A8  C0 3E 01 98 */	lfs f1, 0x198(r30)
/* 806441AC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 806441B0  40 80 00 18 */	bge lbl_806441C8
/* 806441B4  38 7A 04 D4 */	addi r3, r26, 0x4d4
/* 806441B8  C0 5E 00 AC */	lfs f2, 0xac(r30)
/* 806441BC  C0 7E 00 10 */	lfs f3, 0x10(r30)
/* 806441C0  4B C2 B8 7D */	bl cLib_addCalc2__FPffff
/* 806441C4  48 00 00 20 */	b lbl_806441E4
lbl_806441C8:
/* 806441C8  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 806441CC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 806441D0  40 81 00 14 */	ble lbl_806441E4
/* 806441D4  38 7A 04 D4 */	addi r3, r26, 0x4d4
/* 806441D8  C0 5E 00 AC */	lfs f2, 0xac(r30)
/* 806441DC  C0 7E 00 10 */	lfs f3, 0x10(r30)
/* 806441E0  4B C2 B8 5D */	bl cLib_addCalc2__FPffff
lbl_806441E4:
/* 806441E4  80 7A 05 B4 */	lwz r3, 0x5b4(r26)
/* 806441E8  38 80 00 01 */	li r4, 1
/* 806441EC  88 03 00 11 */	lbz r0, 0x11(r3)
/* 806441F0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 806441F4  40 82 00 18 */	bne lbl_8064420C
/* 806441F8  C0 3E 00 28 */	lfs f1, 0x28(r30)
/* 806441FC  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80644200  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80644204  41 82 00 08 */	beq lbl_8064420C
/* 80644208  38 80 00 00 */	li r4, 0
lbl_8064420C:
/* 8064420C  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80644210  41 82 07 74 */	beq lbl_80644984
/* 80644214  38 00 00 00 */	li r0, 0
/* 80644218  90 1A 06 DC */	stw r0, 0x6dc(r26)
/* 8064421C  48 00 07 68 */	b lbl_80644984
lbl_80644220:
/* 80644220  7F 43 D3 78 */	mr r3, r26
/* 80644224  38 80 00 35 */	li r4, 0x35
/* 80644228  38 A0 00 02 */	li r5, 2
/* 8064422C  C0 3E 00 EC */	lfs f1, 0xec(r30)
/* 80644230  C0 5E 00 0C */	lfs f2, 0xc(r30)
/* 80644234  4B FF A3 91 */	bl setBck__10daB_ZANT_cFiUcff
/* 80644238  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 8064423C  80 7A 05 B4 */	lwz r3, 0x5b4(r26)
/* 80644240  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 80644244  C0 1E 00 28 */	lfs f0, 0x28(r30)
/* 80644248  D0 1A 06 CC */	stfs f0, 0x6cc(r26)
/* 8064424C  38 00 00 04 */	li r0, 4
/* 80644250  90 1A 05 5C */	stw r0, 0x55c(r26)
/* 80644254  38 00 00 01 */	li r0, 1
/* 80644258  90 1A 06 DC */	stw r0, 0x6dc(r26)
/* 8064425C  38 00 00 00 */	li r0, 0
/* 80644260  98 1A 07 02 */	stb r0, 0x702(r26)
lbl_80644264:
/* 80644264  7F 03 C3 78 */	mr r3, r24
/* 80644268  4B D2 0E 69 */	bl abs
/* 8064426C  2C 03 10 00 */	cmpwi r3, 0x1000
/* 80644270  40 80 00 70 */	bge lbl_806442E0
/* 80644274  80 1A 06 DC */	lwz r0, 0x6dc(r26)
/* 80644278  2C 00 00 01 */	cmpwi r0, 1
/* 8064427C  40 82 00 40 */	bne lbl_806442BC
/* 80644280  C0 3E 01 C0 */	lfs f1, 0x1c0(r30)
/* 80644284  7C 1B EC 2E */	lfsx f0, r27, r29
/* 80644288  EC 41 00 32 */	fmuls f2, f1, f0
/* 8064428C  7C 1F EC 2E */	lfsx f0, r31, r29
/* 80644290  EC 01 00 32 */	fmuls f0, f1, f0
/* 80644294  D0 1A 06 AC */	stfs f0, 0x6ac(r26)
/* 80644298  C0 1E 00 78 */	lfs f0, 0x78(r30)
/* 8064429C  D0 1A 06 B0 */	stfs f0, 0x6b0(r26)
/* 806442A0  D0 5A 06 B4 */	stfs f2, 0x6b4(r26)
/* 806442A4  38 7A 06 AC */	addi r3, r26, 0x6ac
/* 806442A8  80 81 00 18 */	lwz r4, 0x18(r1)
/* 806442AC  38 84 04 D0 */	addi r4, r4, 0x4d0
/* 806442B0  7C 65 1B 78 */	mr r5, r3
/* 806442B4  4B D0 2D DD */	bl PSVECAdd
/* 806442B8  48 00 00 1C */	b lbl_806442D4
lbl_806442BC:
/* 806442BC  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 806442C0  D0 1A 06 AC */	stfs f0, 0x6ac(r26)
/* 806442C4  C0 01 00 44 */	lfs f0, 0x44(r1)
/* 806442C8  D0 1A 06 B0 */	stfs f0, 0x6b0(r26)
/* 806442CC  C0 01 00 48 */	lfs f0, 0x48(r1)
/* 806442D0  D0 1A 06 B4 */	stfs f0, 0x6b4(r26)
lbl_806442D4:
/* 806442D4  38 00 00 04 */	li r0, 4
/* 806442D8  90 1A 06 DC */	stw r0, 0x6dc(r26)
/* 806442DC  48 00 00 6C */	b lbl_80644348
lbl_806442E0:
/* 806442E0  C0 3E 01 C4 */	lfs f1, 0x1c4(r30)
/* 806442E4  7F 00 07 35 */	extsh. r0, r24
/* 806442E8  38 1C 10 00 */	addi r0, r28, 0x1000
/* 806442EC  7C 00 07 34 */	extsh r0, r0
/* 806442F0  40 80 00 0C */	bge lbl_806442FC
/* 806442F4  38 1C F0 00 */	addi r0, r28, -4096
/* 806442F8  7C 00 07 34 */	extsh r0, r0
lbl_806442FC:
/* 806442FC  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 80644300  7C 1B 04 2E */	lfsx f0, r27, r0
/* 80644304  EC 41 00 32 */	fmuls f2, f1, f0
/* 80644308  C0 3E 01 C4 */	lfs f1, 0x1c4(r30)
/* 8064430C  3C 60 80 44 */	lis r3, sincosTable___5JMath@ha /* 0x80439A20@ha */
/* 80644310  38 63 9A 20 */	addi r3, r3, sincosTable___5JMath@l /* 0x80439A20@l */
/* 80644314  7C 03 04 2E */	lfsx f0, r3, r0
/* 80644318  EC 01 00 32 */	fmuls f0, f1, f0
/* 8064431C  D0 1A 06 AC */	stfs f0, 0x6ac(r26)
/* 80644320  C0 1E 01 38 */	lfs f0, 0x138(r30)
/* 80644324  D0 1A 06 B0 */	stfs f0, 0x6b0(r26)
/* 80644328  D0 5A 06 B4 */	stfs f2, 0x6b4(r26)
/* 8064432C  38 7A 06 AC */	addi r3, r26, 0x6ac
/* 80644330  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80644334  38 84 04 D0 */	addi r4, r4, 0x4d0
/* 80644338  7C 65 1B 78 */	mr r5, r3
/* 8064433C  4B D0 2D 55 */	bl PSVECAdd
/* 80644340  38 00 00 03 */	li r0, 3
/* 80644344  90 1A 06 DC */	stw r0, 0x6dc(r26)
lbl_80644348:
/* 80644348  38 00 00 3C */	li r0, 0x3c
/* 8064434C  90 1A 06 E8 */	stw r0, 0x6e8(r26)
lbl_80644350:
/* 80644350  C0 1A 04 D4 */	lfs f0, 0x4d4(r26)
/* 80644354  C0 3E 01 98 */	lfs f1, 0x198(r30)
/* 80644358  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8064435C  40 80 00 14 */	bge lbl_80644370
/* 80644360  38 7A 04 D4 */	addi r3, r26, 0x4d4
/* 80644364  C0 5E 00 AC */	lfs f2, 0xac(r30)
/* 80644368  C0 7E 00 10 */	lfs f3, 0x10(r30)
/* 8064436C  4B C2 B6 D1 */	bl cLib_addCalc2__FPffff
lbl_80644370:
/* 80644370  7F 43 D3 78 */	mr r3, r26
/* 80644374  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80644378  38 84 61 C0 */	addi r4, r4, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 8064437C  80 84 5D AC */	lwz r4, 0x5dac(r4)
/* 80644380  4B 9D 64 61 */	bl fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c
/* 80644384  38 7A 04 D0 */	addi r3, r26, 0x4d0
/* 80644388  38 9A 06 AC */	addi r4, r26, 0x6ac
/* 8064438C  4B C2 C8 E9 */	bl cLib_targetAngleX__FPC4cXyzPC4cXyz
/* 80644390  7C 63 00 D0 */	neg r3, r3
/* 80644394  38 03 40 00 */	addi r0, r3, 0x4000
/* 80644398  7C 18 07 34 */	extsh r24, r0
/* 8064439C  38 7A 04 D0 */	addi r3, r26, 0x4d0
/* 806443A0  38 9A 06 AC */	addi r4, r26, 0x6ac
/* 806443A4  4B C2 C8 61 */	bl cLib_targetAngleY__FPC3VecPC3Vec
/* 806443A8  7C 79 1B 78 */	mr r25, r3
/* 806443AC  80 7A 05 B4 */	lwz r3, 0x5b4(r26)
/* 806443B0  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 806443B4  3B 80 00 00 */	li r28, 0
/* 806443B8  C0 1E 00 9C */	lfs f0, 0x9c(r30)
/* 806443BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 806443C0  41 80 00 14 */	blt lbl_806443D4
/* 806443C4  C0 1E 01 88 */	lfs f0, 0x188(r30)
/* 806443C8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 806443CC  4C 41 13 82 */	cror 2, 1, 2
/* 806443D0  40 82 00 08 */	bne lbl_806443D8
lbl_806443D4:
/* 806443D4  3B 80 00 01 */	li r28, 1
lbl_806443D8:
/* 806443D8  C0 1E 00 9C */	lfs f0, 0x9c(r30)
/* 806443DC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 806443E0  4C 40 13 82 */	cror 2, 0, 2
/* 806443E4  40 82 00 14 */	bne lbl_806443F8
/* 806443E8  C0 1E 00 A4 */	lfs f0, 0xa4(r30)
/* 806443EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 806443F0  4C 40 13 82 */	cror 2, 0, 2
/* 806443F4  41 82 00 24 */	beq lbl_80644418
lbl_806443F8:
/* 806443F8  C0 1E 01 C8 */	lfs f0, 0x1c8(r30)
/* 806443FC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80644400  4C 40 13 82 */	cror 2, 0, 2
/* 80644404  40 82 00 18 */	bne lbl_8064441C
/* 80644408  C0 1E 01 88 */	lfs f0, 0x188(r30)
/* 8064440C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80644410  4C 40 13 82 */	cror 2, 0, 2
/* 80644414  40 82 00 08 */	bne lbl_8064441C
lbl_80644418:
/* 80644418  3B 80 00 02 */	li r28, 2
lbl_8064441C:
/* 8064441C  A8 1A 04 E6 */	lha r0, 0x4e6(r26)
/* 80644420  7C 00 C8 50 */	subf r0, r0, r25
/* 80644424  7C 03 07 34 */	extsh r3, r0
/* 80644428  4B D2 0C A9 */	bl abs
/* 8064442C  2C 03 20 00 */	cmpwi r3, 0x2000
/* 80644430  40 80 00 64 */	bge lbl_80644494
/* 80644434  2C 1C 00 01 */	cmpwi r28, 1
/* 80644438  41 82 00 34 */	beq lbl_8064446C
/* 8064443C  40 80 00 10 */	bge lbl_8064444C
/* 80644440  2C 1C 00 00 */	cmpwi r28, 0
/* 80644444  40 80 00 14 */	bge lbl_80644458
/* 80644448  48 00 00 A8 */	b lbl_806444F0
lbl_8064444C:
/* 8064444C  2C 1C 00 03 */	cmpwi r28, 3
/* 80644450  40 80 00 A0 */	bge lbl_806444F0
/* 80644454  48 00 00 2C */	b lbl_80644480
lbl_80644458:
/* 80644458  38 7A 06 CC */	addi r3, r26, 0x6cc
/* 8064445C  C0 3E 00 28 */	lfs f1, 0x28(r30)
/* 80644460  C0 5E 00 3C */	lfs f2, 0x3c(r30)
/* 80644464  4B C2 C2 DD */	bl cLib_chaseF__FPfff
/* 80644468  48 00 00 88 */	b lbl_806444F0
lbl_8064446C:
/* 8064446C  38 7A 06 CC */	addi r3, r26, 0x6cc
/* 80644470  C0 3E 00 28 */	lfs f1, 0x28(r30)
/* 80644474  C0 5E 00 30 */	lfs f2, 0x30(r30)
/* 80644478  4B C2 C2 C9 */	bl cLib_chaseF__FPfff
/* 8064447C  48 00 00 74 */	b lbl_806444F0
lbl_80644480:
/* 80644480  38 7A 06 CC */	addi r3, r26, 0x6cc
/* 80644484  C0 3E 00 14 */	lfs f1, 0x14(r30)
/* 80644488  C0 5E 00 5C */	lfs f2, 0x5c(r30)
/* 8064448C  4B C2 C2 B5 */	bl cLib_chaseF__FPfff
/* 80644490  48 00 00 60 */	b lbl_806444F0
lbl_80644494:
/* 80644494  2C 1C 00 01 */	cmpwi r28, 1
/* 80644498  41 82 00 34 */	beq lbl_806444CC
/* 8064449C  40 80 00 10 */	bge lbl_806444AC
/* 806444A0  2C 1C 00 00 */	cmpwi r28, 0
/* 806444A4  40 80 00 14 */	bge lbl_806444B8
/* 806444A8  48 00 00 48 */	b lbl_806444F0
lbl_806444AC:
/* 806444AC  2C 1C 00 03 */	cmpwi r28, 3
/* 806444B0  40 80 00 40 */	bge lbl_806444F0
/* 806444B4  48 00 00 2C */	b lbl_806444E0
lbl_806444B8:
/* 806444B8  38 7A 06 CC */	addi r3, r26, 0x6cc
/* 806444BC  C0 3E 00 28 */	lfs f1, 0x28(r30)
/* 806444C0  C0 5E 00 0C */	lfs f2, 0xc(r30)
/* 806444C4  4B C2 C2 7D */	bl cLib_chaseF__FPfff
/* 806444C8  48 00 00 28 */	b lbl_806444F0
lbl_806444CC:
/* 806444CC  38 7A 06 CC */	addi r3, r26, 0x6cc
/* 806444D0  C0 3E 00 28 */	lfs f1, 0x28(r30)
/* 806444D4  C0 5E 01 68 */	lfs f2, 0x168(r30)
/* 806444D8  4B C2 C2 69 */	bl cLib_chaseF__FPfff
/* 806444DC  48 00 00 14 */	b lbl_806444F0
lbl_806444E0:
/* 806444E0  38 7A 06 CC */	addi r3, r26, 0x6cc
/* 806444E4  C0 3E 00 EC */	lfs f1, 0xec(r30)
/* 806444E8  C0 5E 00 0C */	lfs f2, 0xc(r30)
/* 806444EC  4B C2 C2 55 */	bl cLib_chaseF__FPfff
lbl_806444F0:
/* 806444F0  2C 1C 00 02 */	cmpwi r28, 2
/* 806444F4  40 82 00 30 */	bne lbl_80644524
/* 806444F8  38 7A 04 E6 */	addi r3, r26, 0x4e6
/* 806444FC  7F 24 CB 78 */	mr r4, r25
/* 80644500  38 A0 00 10 */	li r5, 0x10
/* 80644504  38 C0 01 80 */	li r6, 0x180
/* 80644508  4B C2 C1 01 */	bl cLib_addCalcAngleS2__FPssss
/* 8064450C  38 7A 04 E4 */	addi r3, r26, 0x4e4
/* 80644510  7F 04 C3 78 */	mr r4, r24
/* 80644514  38 A0 00 10 */	li r5, 0x10
/* 80644518  38 C0 04 00 */	li r6, 0x400
/* 8064451C  4B C2 C0 ED */	bl cLib_addCalcAngleS2__FPssss
/* 80644520  48 00 00 2C */	b lbl_8064454C
lbl_80644524:
/* 80644524  38 7A 04 E6 */	addi r3, r26, 0x4e6
/* 80644528  7F 24 CB 78 */	mr r4, r25
/* 8064452C  38 A0 00 10 */	li r5, 0x10
/* 80644530  38 C0 00 80 */	li r6, 0x80
/* 80644534  4B C2 C0 D5 */	bl cLib_addCalcAngleS2__FPssss
/* 80644538  38 7A 04 E4 */	addi r3, r26, 0x4e4
/* 8064453C  7F 04 C3 78 */	mr r4, r24
/* 80644540  38 A0 00 10 */	li r5, 0x10
/* 80644544  38 C0 02 00 */	li r6, 0x200
/* 80644548  4B C2 C0 C1 */	bl cLib_addCalcAngleS2__FPssss
lbl_8064454C:
/* 8064454C  A8 1A 04 E6 */	lha r0, 0x4e6(r26)
/* 80644550  B0 1A 04 DE */	sth r0, 0x4de(r26)
/* 80644554  38 7A 04 D0 */	addi r3, r26, 0x4d0
/* 80644558  38 9A 06 AC */	addi r4, r26, 0x6ac
/* 8064455C  4B C2 C7 19 */	bl cLib_targetAngleX__FPC4cXyzPC4cXyz
/* 80644560  B0 7A 04 DC */	sth r3, 0x4dc(r26)
/* 80644564  80 1A 06 E8 */	lwz r0, 0x6e8(r26)
/* 80644568  2C 00 00 00 */	cmpwi r0, 0
/* 8064456C  41 82 00 54 */	beq lbl_806445C0
/* 80644570  A8 1A 04 DC */	lha r0, 0x4dc(r26)
/* 80644574  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 80644578  3C 60 80 44 */	lis r3, sincosTable___5JMath@ha /* 0x80439A20@ha */
/* 8064457C  38 63 9A 20 */	addi r3, r3, sincosTable___5JMath@l /* 0x80439A20@l */
/* 80644580  7C 43 04 2E */	lfsx f2, r3, r0
/* 80644584  C0 1A 06 CC */	lfs f0, 0x6cc(r26)
/* 80644588  C0 3E 00 30 */	lfs f1, 0x30(r30)
/* 8064458C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80644590  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80644594  D0 1A 04 FC */	stfs f0, 0x4fc(r26)
/* 80644598  A8 1A 04 DC */	lha r0, 0x4dc(r26)
/* 8064459C  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 806445A0  7C 5B 04 2E */	lfsx f2, r27, r0
/* 806445A4  C0 1A 06 CC */	lfs f0, 0x6cc(r26)
/* 806445A8  EC 00 00 72 */	fmuls f0, f0, f1
/* 806445AC  EC 00 00 B2 */	fmuls f0, f0, f2
/* 806445B0  FC 00 02 10 */	fabs f0, f0
/* 806445B4  FC 00 00 18 */	frsp f0, f0
/* 806445B8  D0 1A 05 2C */	stfs f0, 0x52c(r26)
/* 806445BC  48 00 00 44 */	b lbl_80644600
lbl_806445C0:
/* 806445C0  A8 1A 04 DC */	lha r0, 0x4dc(r26)
/* 806445C4  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 806445C8  3C 60 80 44 */	lis r3, sincosTable___5JMath@ha /* 0x80439A20@ha */
/* 806445CC  38 63 9A 20 */	addi r3, r3, sincosTable___5JMath@l /* 0x80439A20@l */
/* 806445D0  7C 23 04 2E */	lfsx f1, r3, r0
/* 806445D4  C0 1A 06 CC */	lfs f0, 0x6cc(r26)
/* 806445D8  EC 00 00 72 */	fmuls f0, f0, f1
/* 806445DC  D0 1A 04 FC */	stfs f0, 0x4fc(r26)
/* 806445E0  A8 1A 04 DC */	lha r0, 0x4dc(r26)
/* 806445E4  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 806445E8  7C 3B 04 2E */	lfsx f1, r27, r0
/* 806445EC  C0 1A 06 CC */	lfs f0, 0x6cc(r26)
/* 806445F0  EC 00 00 72 */	fmuls f0, f0, f1
/* 806445F4  FC 00 02 10 */	fabs f0, f0
/* 806445F8  FC 00 00 18 */	frsp f0, f0
/* 806445FC  D0 1A 05 2C */	stfs f0, 0x52c(r26)
lbl_80644600:
/* 80644600  C0 5A 04 D8 */	lfs f2, 0x4d8(r26)
/* 80644604  C0 1A 04 D0 */	lfs f0, 0x4d0(r26)
/* 80644608  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8064460C  C0 3E 00 28 */	lfs f1, 0x28(r30)
/* 80644610  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 80644614  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 80644618  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 8064461C  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80644620  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 80644624  C0 01 00 48 */	lfs f0, 0x48(r1)
/* 80644628  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8064462C  38 61 00 1C */	addi r3, r1, 0x1c
/* 80644630  38 81 00 28 */	addi r4, r1, 0x28
/* 80644634  4B D0 2D 69 */	bl PSVECSquareDistance
/* 80644638  C0 1E 00 28 */	lfs f0, 0x28(r30)
/* 8064463C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80644640  40 81 00 58 */	ble lbl_80644698
/* 80644644  FC 00 08 34 */	frsqrte f0, f1
/* 80644648  C8 9E 00 80 */	lfd f4, 0x80(r30)
/* 8064464C  FC 44 00 32 */	fmul f2, f4, f0
/* 80644650  C8 7E 00 88 */	lfd f3, 0x88(r30)
/* 80644654  FC 00 00 32 */	fmul f0, f0, f0
/* 80644658  FC 01 00 32 */	fmul f0, f1, f0
/* 8064465C  FC 03 00 28 */	fsub f0, f3, f0
/* 80644660  FC 02 00 32 */	fmul f0, f2, f0
/* 80644664  FC 44 00 32 */	fmul f2, f4, f0
/* 80644668  FC 00 00 32 */	fmul f0, f0, f0
/* 8064466C  FC 01 00 32 */	fmul f0, f1, f0
/* 80644670  FC 03 00 28 */	fsub f0, f3, f0
/* 80644674  FC 02 00 32 */	fmul f0, f2, f0
/* 80644678  FC 44 00 32 */	fmul f2, f4, f0
/* 8064467C  FC 00 00 32 */	fmul f0, f0, f0
/* 80644680  FC 01 00 32 */	fmul f0, f1, f0
/* 80644684  FC 03 00 28 */	fsub f0, f3, f0
/* 80644688  FC 02 00 32 */	fmul f0, f2, f0
/* 8064468C  FC 21 00 32 */	fmul f1, f1, f0
/* 80644690  FC 20 08 18 */	frsp f1, f1
/* 80644694  48 00 00 88 */	b lbl_8064471C
lbl_80644698:
/* 80644698  C8 1E 00 90 */	lfd f0, 0x90(r30)
/* 8064469C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 806446A0  40 80 00 10 */	bge lbl_806446B0
/* 806446A4  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 806446A8  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 806446AC  48 00 00 70 */	b lbl_8064471C
lbl_806446B0:
/* 806446B0  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 806446B4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 806446B8  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 806446BC  3C 00 7F 80 */	lis r0, 0x7f80
/* 806446C0  7C 03 00 00 */	cmpw r3, r0
/* 806446C4  41 82 00 14 */	beq lbl_806446D8
/* 806446C8  40 80 00 40 */	bge lbl_80644708
/* 806446CC  2C 03 00 00 */	cmpwi r3, 0
/* 806446D0  41 82 00 20 */	beq lbl_806446F0
/* 806446D4  48 00 00 34 */	b lbl_80644708
lbl_806446D8:
/* 806446D8  54 80 02 7F */	clrlwi. r0, r4, 9
/* 806446DC  41 82 00 0C */	beq lbl_806446E8
/* 806446E0  38 00 00 01 */	li r0, 1
/* 806446E4  48 00 00 28 */	b lbl_8064470C
lbl_806446E8:
/* 806446E8  38 00 00 02 */	li r0, 2
/* 806446EC  48 00 00 20 */	b lbl_8064470C
lbl_806446F0:
/* 806446F0  54 80 02 7F */	clrlwi. r0, r4, 9
/* 806446F4  41 82 00 0C */	beq lbl_80644700
/* 806446F8  38 00 00 05 */	li r0, 5
/* 806446FC  48 00 00 10 */	b lbl_8064470C
lbl_80644700:
/* 80644700  38 00 00 03 */	li r0, 3
/* 80644704  48 00 00 08 */	b lbl_8064470C
lbl_80644708:
/* 80644708  38 00 00 04 */	li r0, 4
lbl_8064470C:
/* 8064470C  2C 00 00 01 */	cmpwi r0, 1
/* 80644710  40 82 00 0C */	bne lbl_8064471C
/* 80644714  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80644718  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
lbl_8064471C:
/* 8064471C  C0 1E 00 34 */	lfs f0, 0x34(r30)
/* 80644720  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80644724  40 80 00 38 */	bge lbl_8064475C
/* 80644728  38 00 00 06 */	li r0, 6
/* 8064472C  90 1A 06 DC */	stw r0, 0x6dc(r26)
/* 80644730  38 00 00 00 */	li r0, 0
/* 80644734  90 1A 05 5C */	stw r0, 0x55c(r26)
/* 80644738  7F 43 D3 78 */	mr r3, r26
/* 8064473C  38 80 00 00 */	li r4, 0
/* 80644740  4B FF B8 2D */	bl setTgHitBit__10daB_ZANT_cFi
/* 80644744  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80644748  38 80 00 02 */	li r4, 2
/* 8064474C  48 00 C4 31 */	bl setMouthMode__11daB_ZANTZ_cFUc
/* 80644750  38 00 00 3C */	li r0, 0x3c
/* 80644754  90 1A 06 E8 */	stw r0, 0x6e8(r26)
/* 80644758  48 00 02 2C */	b lbl_80644984
lbl_8064475C:
/* 8064475C  38 7A 04 D0 */	addi r3, r26, 0x4d0
/* 80644760  38 9A 06 AC */	addi r4, r26, 0x6ac
/* 80644764  4B D0 2C 39 */	bl PSVECSquareDistance
/* 80644768  C0 1E 00 28 */	lfs f0, 0x28(r30)
/* 8064476C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80644770  40 81 00 58 */	ble lbl_806447C8
/* 80644774  FC 00 08 34 */	frsqrte f0, f1
/* 80644778  C8 9E 00 80 */	lfd f4, 0x80(r30)
/* 8064477C  FC 44 00 32 */	fmul f2, f4, f0
/* 80644780  C8 7E 00 88 */	lfd f3, 0x88(r30)
/* 80644784  FC 00 00 32 */	fmul f0, f0, f0
/* 80644788  FC 01 00 32 */	fmul f0, f1, f0
/* 8064478C  FC 03 00 28 */	fsub f0, f3, f0
/* 80644790  FC 02 00 32 */	fmul f0, f2, f0
/* 80644794  FC 44 00 32 */	fmul f2, f4, f0
/* 80644798  FC 00 00 32 */	fmul f0, f0, f0
/* 8064479C  FC 01 00 32 */	fmul f0, f1, f0
/* 806447A0  FC 03 00 28 */	fsub f0, f3, f0
/* 806447A4  FC 02 00 32 */	fmul f0, f2, f0
/* 806447A8  FC 44 00 32 */	fmul f2, f4, f0
/* 806447AC  FC 00 00 32 */	fmul f0, f0, f0
/* 806447B0  FC 01 00 32 */	fmul f0, f1, f0
/* 806447B4  FC 03 00 28 */	fsub f0, f3, f0
/* 806447B8  FC 02 00 32 */	fmul f0, f2, f0
/* 806447BC  FC 21 00 32 */	fmul f1, f1, f0
/* 806447C0  FC 20 08 18 */	frsp f1, f1
/* 806447C4  48 00 00 88 */	b lbl_8064484C
lbl_806447C8:
/* 806447C8  C8 1E 00 90 */	lfd f0, 0x90(r30)
/* 806447CC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 806447D0  40 80 00 10 */	bge lbl_806447E0
/* 806447D4  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 806447D8  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 806447DC  48 00 00 70 */	b lbl_8064484C
lbl_806447E0:
/* 806447E0  D0 21 00 08 */	stfs f1, 8(r1)
/* 806447E4  80 81 00 08 */	lwz r4, 8(r1)
/* 806447E8  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 806447EC  3C 00 7F 80 */	lis r0, 0x7f80
/* 806447F0  7C 03 00 00 */	cmpw r3, r0
/* 806447F4  41 82 00 14 */	beq lbl_80644808
/* 806447F8  40 80 00 40 */	bge lbl_80644838
/* 806447FC  2C 03 00 00 */	cmpwi r3, 0
/* 80644800  41 82 00 20 */	beq lbl_80644820
/* 80644804  48 00 00 34 */	b lbl_80644838
lbl_80644808:
/* 80644808  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8064480C  41 82 00 0C */	beq lbl_80644818
/* 80644810  38 00 00 01 */	li r0, 1
/* 80644814  48 00 00 28 */	b lbl_8064483C
lbl_80644818:
/* 80644818  38 00 00 02 */	li r0, 2
/* 8064481C  48 00 00 20 */	b lbl_8064483C
lbl_80644820:
/* 80644820  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80644824  41 82 00 0C */	beq lbl_80644830
/* 80644828  38 00 00 05 */	li r0, 5
/* 8064482C  48 00 00 10 */	b lbl_8064483C
lbl_80644830:
/* 80644830  38 00 00 03 */	li r0, 3
/* 80644834  48 00 00 08 */	b lbl_8064483C
lbl_80644838:
/* 80644838  38 00 00 04 */	li r0, 4
lbl_8064483C:
/* 8064483C  2C 00 00 01 */	cmpwi r0, 1
/* 80644840  40 82 00 0C */	bne lbl_8064484C
/* 80644844  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80644848  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
lbl_8064484C:
/* 8064484C  C0 1E 00 34 */	lfs f0, 0x34(r30)
/* 80644850  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80644854  40 80 01 30 */	bge lbl_80644984
/* 80644858  80 1A 06 DC */	lwz r0, 0x6dc(r26)
/* 8064485C  2C 00 00 03 */	cmpwi r0, 3
/* 80644860  40 82 00 10 */	bne lbl_80644870
/* 80644864  38 00 00 01 */	li r0, 1
/* 80644868  90 1A 06 DC */	stw r0, 0x6dc(r26)
/* 8064486C  48 00 01 18 */	b lbl_80644984
lbl_80644870:
/* 80644870  38 00 00 02 */	li r0, 2
/* 80644874  90 1A 06 DC */	stw r0, 0x6dc(r26)
/* 80644878  48 00 01 0C */	b lbl_80644984
lbl_8064487C:
/* 8064487C  38 7A 05 2C */	addi r3, r26, 0x52c
/* 80644880  C0 3E 00 28 */	lfs f1, 0x28(r30)
/* 80644884  C0 5E 00 30 */	lfs f2, 0x30(r30)
/* 80644888  4B C2 BE B9 */	bl cLib_chaseF__FPfff
/* 8064488C  38 7A 04 FC */	addi r3, r26, 0x4fc
/* 80644890  C0 3E 00 EC */	lfs f1, 0xec(r30)
/* 80644894  C0 5E 00 30 */	lfs f2, 0x30(r30)
/* 80644898  4B C2 BE A9 */	bl cLib_chaseF__FPfff
/* 8064489C  38 7A 04 E6 */	addi r3, r26, 0x4e6
/* 806448A0  7F 24 CB 78 */	mr r4, r25
/* 806448A4  38 A0 00 10 */	li r5, 0x10
/* 806448A8  38 C0 02 00 */	li r6, 0x200
/* 806448AC  4B C2 BD 5D */	bl cLib_addCalcAngleS2__FPssss
/* 806448B0  38 7A 04 E4 */	addi r3, r26, 0x4e4
/* 806448B4  38 80 00 00 */	li r4, 0
/* 806448B8  38 A0 00 10 */	li r5, 0x10
/* 806448BC  38 C0 02 00 */	li r6, 0x200
/* 806448C0  4B C2 BD 49 */	bl cLib_addCalcAngleS2__FPssss
/* 806448C4  C0 3A 05 2C */	lfs f1, 0x52c(r26)
/* 806448C8  C0 1E 00 28 */	lfs f0, 0x28(r30)
/* 806448CC  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 806448D0  40 82 00 B4 */	bne lbl_80644984
/* 806448D4  C0 3E 00 EC */	lfs f1, 0xec(r30)
/* 806448D8  C0 1A 04 FC */	lfs f0, 0x4fc(r26)
/* 806448DC  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 806448E0  40 82 00 A4 */	bne lbl_80644984
/* 806448E4  38 00 00 07 */	li r0, 7
/* 806448E8  90 1A 06 DC */	stw r0, 0x6dc(r26)
/* 806448EC  C0 1E 00 68 */	lfs f0, 0x68(r30)
/* 806448F0  D0 1A 05 30 */	stfs f0, 0x530(r26)
/* 806448F4  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 806448F8  D0 1A 05 34 */	stfs f0, 0x534(r26)
/* 806448FC  48 00 00 88 */	b lbl_80644984
lbl_80644900:
/* 80644900  38 00 00 01 */	li r0, 1
/* 80644904  98 1A 07 06 */	stb r0, 0x706(r26)
/* 80644908  C0 1E 00 38 */	lfs f0, 0x38(r30)
/* 8064490C  D0 1A 05 34 */	stfs f0, 0x534(r26)
/* 80644910  C0 3A 04 D4 */	lfs f1, 0x4d4(r26)
/* 80644914  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 80644918  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8064491C  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 80644920  C0 01 00 48 */	lfs f0, 0x48(r1)
/* 80644924  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 80644928  38 7A 04 D0 */	addi r3, r26, 0x4d0
/* 8064492C  38 81 00 34 */	addi r4, r1, 0x34
/* 80644930  C0 3E 00 5C */	lfs f1, 0x5c(r30)
/* 80644934  4B C2 C0 5D */	bl cLib_chasePosXZ__FP4cXyzRC4cXyzf
/* 80644938  80 61 00 18 */	lwz r3, 0x18(r1)
/* 8064493C  88 03 06 6C */	lbz r0, 0x66c(r3)
/* 80644940  2C 00 00 03 */	cmpwi r0, 3
/* 80644944  40 82 00 40 */	bne lbl_80644984
/* 80644948  38 00 00 01 */	li r0, 1
/* 8064494C  98 1A 07 05 */	stb r0, 0x705(r26)
/* 80644950  38 00 00 1E */	li r0, 0x1e
/* 80644954  90 1A 06 E8 */	stw r0, 0x6e8(r26)
/* 80644958  7F 43 D3 78 */	mr r3, r26
/* 8064495C  38 80 00 07 */	li r4, 7
/* 80644960  38 A0 00 1B */	li r5, 0x1b
/* 80644964  4B FF 9D 61 */	bl setActionMode__10daB_ZANT_cFii
/* 80644968  38 00 00 00 */	li r0, 0
/* 8064496C  B0 1A 04 E4 */	sth r0, 0x4e4(r26)
/* 80644970  B0 1A 04 E6 */	sth r0, 0x4e6(r26)
/* 80644974  C0 1E 00 28 */	lfs f0, 0x28(r30)
/* 80644978  D0 1A 05 30 */	stfs f0, 0x530(r26)
/* 8064497C  D0 1A 04 FC */	stfs f0, 0x4fc(r26)
/* 80644980  D0 1A 05 2C */	stfs f0, 0x52c(r26)
lbl_80644984:
/* 80644984  7F 43 D3 78 */	mr r3, r26
/* 80644988  38 80 00 35 */	li r4, 0x35
/* 8064498C  4B FF 9C DD */	bl checkBck__10daB_ZANT_cFi
/* 80644990  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80644994  41 82 00 90 */	beq lbl_80644A24
/* 80644998  80 7A 05 B4 */	lwz r3, 0x5b4(r26)
/* 8064499C  38 63 00 0C */	addi r3, r3, 0xc
/* 806449A0  C0 3E 01 CC */	lfs f1, 0x1cc(r30)
/* 806449A4  4B CE 3A 89 */	bl checkPass__12J3DFrameCtrlFf
/* 806449A8  2C 03 00 00 */	cmpwi r3, 0
/* 806449AC  41 82 00 34 */	beq lbl_806449E0
/* 806449B0  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070424@ha */
/* 806449B4  38 03 04 24 */	addi r0, r3, 0x0424 /* 0x00070424@l */
/* 806449B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 806449BC  38 7A 05 F0 */	addi r3, r26, 0x5f0
/* 806449C0  38 81 00 14 */	addi r4, r1, 0x14
/* 806449C4  38 A0 00 00 */	li r5, 0
/* 806449C8  38 C0 FF FF */	li r6, -1
/* 806449CC  81 9A 05 F0 */	lwz r12, 0x5f0(r26)
/* 806449D0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 806449D4  7D 89 03 A6 */	mtctr r12
/* 806449D8  4E 80 04 21 */	bctrl 
/* 806449DC  48 00 00 48 */	b lbl_80644A24
lbl_806449E0:
/* 806449E0  80 7A 05 B4 */	lwz r3, 0x5b4(r26)
/* 806449E4  38 63 00 0C */	addi r3, r3, 0xc
/* 806449E8  C0 3E 01 D0 */	lfs f1, 0x1d0(r30)
/* 806449EC  4B CE 3A 41 */	bl checkPass__12J3DFrameCtrlFf
/* 806449F0  2C 03 00 00 */	cmpwi r3, 0
/* 806449F4  41 82 00 30 */	beq lbl_80644A24
/* 806449F8  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070425@ha */
/* 806449FC  38 03 04 25 */	addi r0, r3, 0x0425 /* 0x00070425@l */
/* 80644A00  90 01 00 10 */	stw r0, 0x10(r1)
/* 80644A04  38 7A 05 F0 */	addi r3, r26, 0x5f0
/* 80644A08  38 81 00 10 */	addi r4, r1, 0x10
/* 80644A0C  38 A0 00 00 */	li r5, 0
/* 80644A10  38 C0 FF FF */	li r6, -1
/* 80644A14  81 9A 05 F0 */	lwz r12, 0x5f0(r26)
/* 80644A18  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80644A1C  7D 89 03 A6 */	mtctr r12
/* 80644A20  4E 80 04 21 */	bctrl 
lbl_80644A24:
/* 80644A24  39 61 00 70 */	addi r11, r1, 0x70
/* 80644A28  4B D1 D7 ED */	bl _restgpr_24
/* 80644A2C  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80644A30  7C 08 03 A6 */	mtlr r0
/* 80644A34  38 21 00 70 */	addi r1, r1, 0x70
/* 80644A38  4E 80 00 20 */	blr 
