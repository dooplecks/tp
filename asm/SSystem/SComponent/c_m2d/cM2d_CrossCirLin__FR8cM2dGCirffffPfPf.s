lbl_80268260:
/* 80268260  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80268264  C0 03 00 00 */	lfs f0, 0(r3)
/* 80268268  EC E1 00 28 */	fsubs f7, f1, f0
/* 8026826C  C0 03 00 04 */	lfs f0, 4(r3)
/* 80268270  ED 02 00 28 */	fsubs f8, f2, f0
/* 80268274  EC C3 00 F2 */	fmuls f6, f3, f3
/* 80268278  EC 04 01 32 */	fmuls f0, f4, f4
/* 8026827C  ED 46 00 2A */	fadds f10, f6, f0
/* 80268280  C1 22 B6 F0 */	lfs f9, lit_2266(r2)
/* 80268284  EC C3 01 F2 */	fmuls f6, f3, f7
/* 80268288  EC 04 02 32 */	fmuls f0, f4, f8
/* 8026828C  EC 06 00 2A */	fadds f0, f6, f0
/* 80268290  EC 09 00 32 */	fmuls f0, f9, f0
/* 80268294  EC E7 01 F2 */	fmuls f7, f7, f7
/* 80268298  EC C8 02 32 */	fmuls f6, f8, f8
/* 8026829C  EC E7 30 2A */	fadds f7, f7, f6
/* 802682A0  C0 C3 00 08 */	lfs f6, 8(r3)
/* 802682A4  EC C6 01 B2 */	fmuls f6, f6, f6
/* 802682A8  ED 67 30 28 */	fsubs f11, f7, f6
/* 802682AC  FC C0 52 10 */	fabs f6, f10
/* 802682B0  FC C0 30 18 */	frsp f6, f6
/* 802682B4  C1 0D 8C 00 */	lfs f8, G_CM3D_F_ABS_MIN(r13)
/* 802682B8  FC 06 40 40 */	fcmpo cr0, f6, f8
/* 802682BC  40 80 00 20 */	bge lbl_802682DC
/* 802682C0  FC C0 02 10 */	fabs f6, f0
/* 802682C4  FC C0 30 18 */	frsp f6, f6
/* 802682C8  FC 06 40 40 */	fcmpo cr0, f6, f8
/* 802682CC  41 80 02 54 */	blt lbl_80268520
/* 802682D0  FC A0 58 50 */	fneg f5, f11
/* 802682D4  EC A5 00 24 */	fdivs f5, f5, f0
/* 802682D8  48 00 02 48 */	b lbl_80268520
lbl_802682DC:
/* 802682DC  EC E0 00 32 */	fmuls f7, f0, f0
/* 802682E0  C0 C2 B6 F4 */	lfs f6, lit_2267(r2)
/* 802682E4  EC C6 02 B2 */	fmuls f6, f6, f10
/* 802682E8  EC C6 02 F2 */	fmuls f6, f6, f11
/* 802682EC  EC C7 30 28 */	fsubs f6, f7, f6
/* 802682F0  FC E0 32 10 */	fabs f7, f6
/* 802682F4  FC E0 38 18 */	frsp f7, f7
/* 802682F8  FC 07 40 40 */	fcmpo cr0, f7, f8
/* 802682FC  40 80 00 14 */	bge lbl_80268310
/* 80268300  FC A0 00 50 */	fneg f5, f0
/* 80268304  EC 09 02 B2 */	fmuls f0, f9, f10
/* 80268308  EC A5 00 24 */	fdivs f5, f5, f0
/* 8026830C  48 00 02 14 */	b lbl_80268520
lbl_80268310:
/* 80268310  C0 E2 B6 F8 */	lfs f7, lit_2268(r2)
/* 80268314  FC 06 38 40 */	fcmpo cr0, f6, f7
/* 80268318  41 80 02 08 */	blt lbl_80268520
/* 8026831C  C0 E2 B6 FC */	lfs f7, lit_2269(r2)
/* 80268320  EC A9 02 B2 */	fmuls f5, f9, f10
/* 80268324  EC A7 28 24 */	fdivs f5, f7, f5
/* 80268328  40 81 00 58 */	ble lbl_80268380
/* 8026832C  FC E0 30 34 */	frsqrte f7, f6
/* 80268330  C9 42 B7 00 */	lfd f10, lit_2270(r2)
/* 80268334  FD 0A 01 F2 */	fmul f8, f10, f7
/* 80268338  C9 22 B7 08 */	lfd f9, lit_2271(r2)
/* 8026833C  FC E7 01 F2 */	fmul f7, f7, f7
/* 80268340  FC E6 01 F2 */	fmul f7, f6, f7
/* 80268344  FC E9 38 28 */	fsub f7, f9, f7
/* 80268348  FC E8 01 F2 */	fmul f7, f8, f7
/* 8026834C  FD 0A 01 F2 */	fmul f8, f10, f7
/* 80268350  FC E7 01 F2 */	fmul f7, f7, f7
/* 80268354  FC E6 01 F2 */	fmul f7, f6, f7
/* 80268358  FC E9 38 28 */	fsub f7, f9, f7
/* 8026835C  FC E8 01 F2 */	fmul f7, f8, f7
/* 80268360  FD 0A 01 F2 */	fmul f8, f10, f7
/* 80268364  FC E7 01 F2 */	fmul f7, f7, f7
/* 80268368  FC E6 01 F2 */	fmul f7, f6, f7
/* 8026836C  FC E9 38 28 */	fsub f7, f9, f7
/* 80268370  FC E8 01 F2 */	fmul f7, f8, f7
/* 80268374  FC E6 01 F2 */	fmul f7, f6, f7
/* 80268378  FC E0 38 18 */	frsp f7, f7
/* 8026837C  48 00 00 90 */	b lbl_8026840C
lbl_80268380:
/* 80268380  C8 E2 B7 10 */	lfd f7, lit_2272(r2)
/* 80268384  FC 06 38 40 */	fcmpo cr0, f6, f7
/* 80268388  40 80 00 10 */	bge lbl_80268398
/* 8026838C  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80268390  C0 E3 0A E0 */	lfs f7, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 80268394  48 00 00 78 */	b lbl_8026840C
lbl_80268398:
/* 80268398  D0 C1 00 0C */	stfs f6, 0xc(r1)
/* 8026839C  80 C1 00 0C */	lwz r6, 0xc(r1)
/* 802683A0  54 C3 00 50 */	rlwinm r3, r6, 0, 1, 8
/* 802683A4  3C 00 7F 80 */	lis r0, 0x7f80
/* 802683A8  7C 03 00 00 */	cmpw r3, r0
/* 802683AC  41 82 00 14 */	beq lbl_802683C0
/* 802683B0  40 80 00 40 */	bge lbl_802683F0
/* 802683B4  2C 03 00 00 */	cmpwi r3, 0
/* 802683B8  41 82 00 20 */	beq lbl_802683D8
/* 802683BC  48 00 00 34 */	b lbl_802683F0
lbl_802683C0:
/* 802683C0  54 C0 02 7F */	clrlwi. r0, r6, 9
/* 802683C4  41 82 00 0C */	beq lbl_802683D0
/* 802683C8  38 00 00 01 */	li r0, 1
/* 802683CC  48 00 00 28 */	b lbl_802683F4
lbl_802683D0:
/* 802683D0  38 00 00 02 */	li r0, 2
/* 802683D4  48 00 00 20 */	b lbl_802683F4
lbl_802683D8:
/* 802683D8  54 C0 02 7F */	clrlwi. r0, r6, 9
/* 802683DC  41 82 00 0C */	beq lbl_802683E8
/* 802683E0  38 00 00 05 */	li r0, 5
/* 802683E4  48 00 00 10 */	b lbl_802683F4
lbl_802683E8:
/* 802683E8  38 00 00 03 */	li r0, 3
/* 802683EC  48 00 00 08 */	b lbl_802683F4
lbl_802683F0:
/* 802683F0  38 00 00 04 */	li r0, 4
lbl_802683F4:
/* 802683F4  2C 00 00 01 */	cmpwi r0, 1
/* 802683F8  40 82 00 10 */	bne lbl_80268408
/* 802683FC  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80268400  C0 E3 0A E0 */	lfs f7, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 80268404  48 00 00 08 */	b lbl_8026840C
lbl_80268408:
/* 80268408  FC E0 30 90 */	fmr f7, f6
lbl_8026840C:
/* 8026840C  FD 40 00 50 */	fneg f10, f0
/* 80268410  EC 0A 38 2A */	fadds f0, f10, f7
/* 80268414  ED 65 00 32 */	fmuls f11, f5, f0
/* 80268418  C0 02 B6 F8 */	lfs f0, lit_2268(r2)
/* 8026841C  FC 06 00 40 */	fcmpo cr0, f6, f0
/* 80268420  40 81 00 58 */	ble lbl_80268478
/* 80268424  FC 00 30 34 */	frsqrte f0, f6
/* 80268428  C9 22 B7 00 */	lfd f9, lit_2270(r2)
/* 8026842C  FC E9 00 32 */	fmul f7, f9, f0
/* 80268430  C9 02 B7 08 */	lfd f8, lit_2271(r2)
/* 80268434  FC 00 00 32 */	fmul f0, f0, f0
/* 80268438  FC 06 00 32 */	fmul f0, f6, f0
/* 8026843C  FC 08 00 28 */	fsub f0, f8, f0
/* 80268440  FC 07 00 32 */	fmul f0, f7, f0
/* 80268444  FC E9 00 32 */	fmul f7, f9, f0
/* 80268448  FC 00 00 32 */	fmul f0, f0, f0
/* 8026844C  FC 06 00 32 */	fmul f0, f6, f0
/* 80268450  FC 08 00 28 */	fsub f0, f8, f0
/* 80268454  FC 07 00 32 */	fmul f0, f7, f0
/* 80268458  FC E9 00 32 */	fmul f7, f9, f0
/* 8026845C  FC 00 00 32 */	fmul f0, f0, f0
/* 80268460  FC 06 00 32 */	fmul f0, f6, f0
/* 80268464  FC 08 00 28 */	fsub f0, f8, f0
/* 80268468  FC 07 00 32 */	fmul f0, f7, f0
/* 8026846C  FC 06 00 32 */	fmul f0, f6, f0
/* 80268470  FC 00 00 18 */	frsp f0, f0
/* 80268474  48 00 00 90 */	b lbl_80268504
lbl_80268478:
/* 80268478  C8 02 B7 10 */	lfd f0, lit_2272(r2)
/* 8026847C  FC 06 00 40 */	fcmpo cr0, f6, f0
/* 80268480  40 80 00 10 */	bge lbl_80268490
/* 80268484  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80268488  C0 03 0A E0 */	lfs f0, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 8026848C  48 00 00 78 */	b lbl_80268504
lbl_80268490:
/* 80268490  D0 C1 00 08 */	stfs f6, 8(r1)
/* 80268494  80 C1 00 08 */	lwz r6, 8(r1)
/* 80268498  54 C3 00 50 */	rlwinm r3, r6, 0, 1, 8
/* 8026849C  3C 00 7F 80 */	lis r0, 0x7f80
/* 802684A0  7C 03 00 00 */	cmpw r3, r0
/* 802684A4  41 82 00 14 */	beq lbl_802684B8
/* 802684A8  40 80 00 40 */	bge lbl_802684E8
/* 802684AC  2C 03 00 00 */	cmpwi r3, 0
/* 802684B0  41 82 00 20 */	beq lbl_802684D0
/* 802684B4  48 00 00 34 */	b lbl_802684E8
lbl_802684B8:
/* 802684B8  54 C0 02 7F */	clrlwi. r0, r6, 9
/* 802684BC  41 82 00 0C */	beq lbl_802684C8
/* 802684C0  38 00 00 01 */	li r0, 1
/* 802684C4  48 00 00 28 */	b lbl_802684EC
lbl_802684C8:
/* 802684C8  38 00 00 02 */	li r0, 2
/* 802684CC  48 00 00 20 */	b lbl_802684EC
lbl_802684D0:
/* 802684D0  54 C0 02 7F */	clrlwi. r0, r6, 9
/* 802684D4  41 82 00 0C */	beq lbl_802684E0
/* 802684D8  38 00 00 05 */	li r0, 5
/* 802684DC  48 00 00 10 */	b lbl_802684EC
lbl_802684E0:
/* 802684E0  38 00 00 03 */	li r0, 3
/* 802684E4  48 00 00 08 */	b lbl_802684EC
lbl_802684E8:
/* 802684E8  38 00 00 04 */	li r0, 4
lbl_802684EC:
/* 802684EC  2C 00 00 01 */	cmpwi r0, 1
/* 802684F0  40 82 00 10 */	bne lbl_80268500
/* 802684F4  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 802684F8  C0 03 0A E0 */	lfs f0, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 802684FC  48 00 00 08 */	b lbl_80268504
lbl_80268500:
/* 80268500  FC 00 30 90 */	fmr f0, f6
lbl_80268504:
/* 80268504  EC 0A 00 28 */	fsubs f0, f10, f0
/* 80268508  EC 05 00 32 */	fmuls f0, f5, f0
/* 8026850C  FC 0B 00 40 */	fcmpo cr0, f11, f0
/* 80268510  40 81 00 0C */	ble lbl_8026851C
/* 80268514  FC A0 58 90 */	fmr f5, f11
/* 80268518  48 00 00 08 */	b lbl_80268520
lbl_8026851C:
/* 8026851C  FC A0 00 90 */	fmr f5, f0
lbl_80268520:
/* 80268520  FC 00 2A 10 */	fabs f0, f5
/* 80268524  FC C0 00 18 */	frsp f6, f0
/* 80268528  C0 0D 8C 00 */	lfs f0, G_CM3D_F_ABS_MIN(r13)
/* 8026852C  FC 06 00 40 */	fcmpo cr0, f6, f0
/* 80268530  40 80 00 10 */	bge lbl_80268540
/* 80268534  D0 24 00 00 */	stfs f1, 0(r4)
/* 80268538  D0 45 00 00 */	stfs f2, 0(r5)
/* 8026853C  48 00 00 1C */	b lbl_80268558
lbl_80268540:
/* 80268540  EC 05 00 F2 */	fmuls f0, f5, f3
/* 80268544  EC 01 00 2A */	fadds f0, f1, f0
/* 80268548  D0 04 00 00 */	stfs f0, 0(r4)
/* 8026854C  EC 05 01 32 */	fmuls f0, f5, f4
/* 80268550  EC 02 00 2A */	fadds f0, f2, f0
/* 80268554  D0 05 00 00 */	stfs f0, 0(r5)
lbl_80268558:
/* 80268558  38 21 00 10 */	addi r1, r1, 0x10
/* 8026855C  4E 80 00 20 */	blr 
