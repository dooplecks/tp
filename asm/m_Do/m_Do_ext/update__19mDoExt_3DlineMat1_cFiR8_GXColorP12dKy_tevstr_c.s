lbl_80013FB0:
/* 80013FB0  94 21 FE 30 */	stwu r1, -0x1d0(r1)
/* 80013FB4  7C 08 02 A6 */	mflr r0
/* 80013FB8  90 01 01 D4 */	stw r0, 0x1d4(r1)
/* 80013FBC  DB E1 01 C0 */	stfd f31, 0x1c0(r1)
/* 80013FC0  F3 E1 01 C8 */	psq_st f31, 456(r1), 0, 0 /* qr0 */
/* 80013FC4  DB C1 01 B0 */	stfd f30, 0x1b0(r1)
/* 80013FC8  F3 C1 01 B8 */	psq_st f30, 440(r1), 0, 0 /* qr0 */
/* 80013FCC  DB A1 01 A0 */	stfd f29, 0x1a0(r1)
/* 80013FD0  F3 A1 01 A8 */	psq_st f29, 424(r1), 0, 0 /* qr0 */
/* 80013FD4  DB 81 01 90 */	stfd f28, 0x190(r1)
/* 80013FD8  F3 81 01 98 */	psq_st f28, 408(r1), 0, 0 /* qr0 */
/* 80013FDC  DB 61 01 80 */	stfd f27, 0x180(r1)
/* 80013FE0  F3 61 01 88 */	psq_st f27, 392(r1), 0, 0 /* qr0 */
/* 80013FE4  39 61 01 80 */	addi r11, r1, 0x180
/* 80013FE8  48 34 E1 BD */	bl _savegpr_15
/* 80013FEC  7C 6F 1B 78 */	mr r15, r3
/* 80013FF0  88 05 00 00 */	lbz r0, 0(r5)
/* 80013FF4  98 03 00 28 */	stb r0, 0x28(r3)
/* 80013FF8  88 05 00 01 */	lbz r0, 1(r5)
/* 80013FFC  98 03 00 29 */	stb r0, 0x29(r3)
/* 80014000  88 05 00 02 */	lbz r0, 2(r5)
/* 80014004  98 03 00 2A */	stb r0, 0x2a(r3)
/* 80014008  88 05 00 03 */	lbz r0, 3(r5)
/* 8001400C  98 03 00 2B */	stb r0, 0x2b(r3)
/* 80014010  90 C3 00 2C */	stw r6, 0x2c(r3)
/* 80014014  2C 04 00 00 */	cmpwi r4, 0
/* 80014018  40 80 00 10 */	bge lbl_80014028
/* 8001401C  A0 0F 00 32 */	lhz r0, 0x32(r15)
/* 80014020  B0 0F 00 34 */	sth r0, 0x34(r15)
/* 80014024  48 00 00 1C */	b lbl_80014040
lbl_80014028:
/* 80014028  A0 0F 00 32 */	lhz r0, 0x32(r15)
/* 8001402C  7C 04 00 00 */	cmpw r4, r0
/* 80014030  40 81 00 0C */	ble lbl_8001403C
/* 80014034  B0 0F 00 34 */	sth r0, 0x34(r15)
/* 80014038  48 00 00 08 */	b lbl_80014040
lbl_8001403C:
/* 8001403C  B0 8F 00 34 */	sth r4, 0x34(r15)
lbl_80014040:
/* 80014040  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80014044  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80014048  83 E3 61 B0 */	lwz r31, 0x61b0(r3)
/* 8001404C  83 CF 00 38 */	lwz r30, 0x38(r15)
/* 80014050  A0 0F 00 34 */	lhz r0, 0x34(r15)
/* 80014054  54 03 08 3C */	slwi r3, r0, 1
/* 80014058  1F A3 00 0C */	mulli r29, r3, 0xc
/* 8001405C  1F 83 00 03 */	mulli r28, r3, 3
/* 80014060  54 1B 20 36 */	slwi r27, r0, 4
/* 80014064  C3 62 81 1C */	lfs f27, lit_3876(r2)
/* 80014068  3A 20 00 00 */	li r17, 0
/* 8001406C  FF A0 D8 90 */	fmr f29, f27
/* 80014070  C3 C2 81 60 */	lfs f30, lit_7922(r2)
/* 80014074  C3 E2 81 30 */	lfs f31, lit_7404(r2)
/* 80014078  FF 80 D8 90 */	fmr f28, f27
/* 8001407C  48 00 06 70 */	b lbl_800146EC
lbl_80014080:
/* 80014080  83 5E 00 00 */	lwz r26, 0(r30)
/* 80014084  82 5E 00 04 */	lwz r18, 4(r30)
/* 80014088  88 0F 00 36 */	lbz r0, 0x36(r15)
/* 8001408C  54 00 10 3A */	slwi r0, r0, 2
/* 80014090  7C 7E 02 14 */	add r3, r30, r0
/* 80014094  83 03 00 08 */	lwz r24, 8(r3)
/* 80014098  82 A3 00 10 */	lwz r21, 0x10(r3)
/* 8001409C  7E B7 AB 78 */	mr r23, r21
/* 800140A0  3A D5 00 03 */	addi r22, r21, 3
/* 800140A4  82 63 00 18 */	lwz r19, 0x18(r3)
/* 800140A8  D3 73 00 04 */	stfs f27, 4(r19)
/* 800140AC  D3 73 00 0C */	stfs f27, 0xc(r19)
/* 800140B0  38 61 00 DC */	addi r3, r1, 0xdc
/* 800140B4  38 9A 00 0C */	addi r4, r26, 0xc
/* 800140B8  7F 45 D3 78 */	mr r5, r26
/* 800140BC  3A 93 00 10 */	addi r20, r19, 0x10
/* 800140C0  48 25 2A 75 */	bl __mi__4cXyzCFRC3Vec
/* 800140C4  C0 01 00 DC */	lfs f0, 0xdc(r1)
/* 800140C8  D0 01 01 00 */	stfs f0, 0x100(r1)
/* 800140CC  C0 01 00 E0 */	lfs f0, 0xe0(r1)
/* 800140D0  D0 01 01 04 */	stfs f0, 0x104(r1)
/* 800140D4  C0 01 00 E4 */	lfs f0, 0xe4(r1)
/* 800140D8  D0 01 01 08 */	stfs f0, 0x108(r1)
/* 800140DC  38 61 01 00 */	addi r3, r1, 0x100
/* 800140E0  48 33 30 59 */	bl PSVECSquareMag
/* 800140E4  FC 01 E0 40 */	fcmpo cr0, f1, f28
/* 800140E8  40 81 00 58 */	ble lbl_80014140
/* 800140EC  FC 00 08 34 */	frsqrte f0, f1
/* 800140F0  C8 82 81 48 */	lfd f4, lit_7919(r2)
/* 800140F4  FC 44 00 32 */	fmul f2, f4, f0
/* 800140F8  C8 62 81 50 */	lfd f3, lit_7920(r2)
/* 800140FC  FC 00 00 32 */	fmul f0, f0, f0
/* 80014100  FC 01 00 32 */	fmul f0, f1, f0
/* 80014104  FC 03 00 28 */	fsub f0, f3, f0
/* 80014108  FC 02 00 32 */	fmul f0, f2, f0
/* 8001410C  FC 44 00 32 */	fmul f2, f4, f0
/* 80014110  FC 00 00 32 */	fmul f0, f0, f0
/* 80014114  FC 01 00 32 */	fmul f0, f1, f0
/* 80014118  FC 03 00 28 */	fsub f0, f3, f0
/* 8001411C  FC 02 00 32 */	fmul f0, f2, f0
/* 80014120  FC 44 00 32 */	fmul f2, f4, f0
/* 80014124  FC 00 00 32 */	fmul f0, f0, f0
/* 80014128  FC 01 00 32 */	fmul f0, f1, f0
/* 8001412C  FC 03 00 28 */	fsub f0, f3, f0
/* 80014130  FC 02 00 32 */	fmul f0, f2, f0
/* 80014134  FC 21 00 32 */	fmul f1, f1, f0
/* 80014138  FC 20 08 18 */	frsp f1, f1
/* 8001413C  48 00 00 88 */	b lbl_800141C4
lbl_80014140:
/* 80014140  C8 02 81 58 */	lfd f0, lit_7921(r2)
/* 80014144  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80014148  40 80 00 10 */	bge lbl_80014158
/* 8001414C  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80014150  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 80014154  48 00 00 70 */	b lbl_800141C4
lbl_80014158:
/* 80014158  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8001415C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80014160  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 80014164  3C 00 7F 80 */	lis r0, 0x7f80
/* 80014168  7C 03 00 00 */	cmpw r3, r0
/* 8001416C  41 82 00 14 */	beq lbl_80014180
/* 80014170  40 80 00 40 */	bge lbl_800141B0
/* 80014174  2C 03 00 00 */	cmpwi r3, 0
/* 80014178  41 82 00 20 */	beq lbl_80014198
/* 8001417C  48 00 00 34 */	b lbl_800141B0
lbl_80014180:
/* 80014180  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80014184  41 82 00 0C */	beq lbl_80014190
/* 80014188  38 00 00 01 */	li r0, 1
/* 8001418C  48 00 00 28 */	b lbl_800141B4
lbl_80014190:
/* 80014190  38 00 00 02 */	li r0, 2
/* 80014194  48 00 00 20 */	b lbl_800141B4
lbl_80014198:
/* 80014198  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8001419C  41 82 00 0C */	beq lbl_800141A8
/* 800141A0  38 00 00 05 */	li r0, 5
/* 800141A4  48 00 00 10 */	b lbl_800141B4
lbl_800141A8:
/* 800141A8  38 00 00 03 */	li r0, 3
/* 800141AC  48 00 00 08 */	b lbl_800141B4
lbl_800141B0:
/* 800141B0  38 00 00 04 */	li r0, 4
lbl_800141B4:
/* 800141B4  2C 00 00 01 */	cmpwi r0, 1
/* 800141B8  40 82 00 0C */	bne lbl_800141C4
/* 800141BC  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 800141C0  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
lbl_800141C4:
/* 800141C4  EC 1E 00 72 */	fmuls f0, f30, f1
/* 800141C8  EF 7B 00 2A */	fadds f27, f27, f0
/* 800141CC  38 61 00 D0 */	addi r3, r1, 0xd0
/* 800141D0  7F 44 D3 78 */	mr r4, r26
/* 800141D4  38 BF 00 D8 */	addi r5, r31, 0xd8
/* 800141D8  48 25 29 5D */	bl __mi__4cXyzCFRC3Vec
/* 800141DC  C0 01 00 D0 */	lfs f0, 0xd0(r1)
/* 800141E0  D0 01 01 0C */	stfs f0, 0x10c(r1)
/* 800141E4  C0 01 00 D4 */	lfs f0, 0xd4(r1)
/* 800141E8  D0 01 01 10 */	stfs f0, 0x110(r1)
/* 800141EC  C0 01 00 D8 */	lfs f0, 0xd8(r1)
/* 800141F0  D0 01 01 14 */	stfs f0, 0x114(r1)
/* 800141F4  38 61 00 C4 */	addi r3, r1, 0xc4
/* 800141F8  38 81 01 00 */	addi r4, r1, 0x100
/* 800141FC  38 A1 01 0C */	addi r5, r1, 0x10c
/* 80014200  48 25 2A BD */	bl outprod__4cXyzCFRC3Vec
/* 80014204  C0 01 00 C4 */	lfs f0, 0xc4(r1)
/* 80014208  D0 01 01 00 */	stfs f0, 0x100(r1)
/* 8001420C  C0 01 00 C8 */	lfs f0, 0xc8(r1)
/* 80014210  D0 01 01 04 */	stfs f0, 0x104(r1)
/* 80014214  C0 01 00 CC */	lfs f0, 0xcc(r1)
/* 80014218  D0 01 01 08 */	stfs f0, 0x108(r1)
/* 8001421C  38 61 00 B8 */	addi r3, r1, 0xb8
/* 80014220  38 81 01 00 */	addi r4, r1, 0x100
/* 80014224  48 25 2D 25 */	bl normalizeZP__4cXyzFv
/* 80014228  C0 01 01 00 */	lfs f0, 0x100(r1)
/* 8001422C  EC 1F 00 32 */	fmuls f0, f31, f0
/* 80014230  FC 00 00 1E */	fctiwz f0, f0
/* 80014234  D8 01 01 18 */	stfd f0, 0x118(r1)
/* 80014238  80 01 01 1C */	lwz r0, 0x11c(r1)
/* 8001423C  98 15 00 00 */	stb r0, 0(r21)
/* 80014240  C0 01 01 04 */	lfs f0, 0x104(r1)
/* 80014244  EC 1F 00 32 */	fmuls f0, f31, f0
/* 80014248  FC 00 00 1E */	fctiwz f0, f0
/* 8001424C  D8 01 01 20 */	stfd f0, 0x120(r1)
/* 80014250  80 01 01 24 */	lwz r0, 0x124(r1)
/* 80014254  98 15 00 01 */	stb r0, 1(r21)
/* 80014258  C0 01 01 08 */	lfs f0, 0x108(r1)
/* 8001425C  EC 1F 00 32 */	fmuls f0, f31, f0
/* 80014260  FC 00 00 1E */	fctiwz f0, f0
/* 80014264  D8 01 01 28 */	stfd f0, 0x128(r1)
/* 80014268  80 01 01 2C */	lwz r0, 0x12c(r1)
/* 8001426C  98 15 00 02 */	stb r0, 2(r21)
/* 80014270  88 15 00 00 */	lbz r0, 0(r21)
/* 80014274  7C 00 00 D0 */	neg r0, r0
/* 80014278  98 16 00 00 */	stb r0, 0(r22)
/* 8001427C  88 15 00 01 */	lbz r0, 1(r21)
/* 80014280  7C 00 00 D0 */	neg r0, r0
/* 80014284  98 16 00 01 */	stb r0, 1(r22)
/* 80014288  88 15 00 02 */	lbz r0, 2(r21)
/* 8001428C  7C 00 00 D0 */	neg r0, r0
/* 80014290  98 16 00 02 */	stb r0, 2(r22)
/* 80014294  38 61 01 00 */	addi r3, r1, 0x100
/* 80014298  7C 64 1B 78 */	mr r4, r3
/* 8001429C  C0 32 00 00 */	lfs f1, 0(r18)
/* 800142A0  48 33 2E 39 */	bl PSVECScale
/* 800142A4  38 61 00 AC */	addi r3, r1, 0xac
/* 800142A8  7F 44 D3 78 */	mr r4, r26
/* 800142AC  38 A1 01 00 */	addi r5, r1, 0x100
/* 800142B0  48 25 28 35 */	bl __pl__4cXyzCFRC3Vec
/* 800142B4  C0 01 00 AC */	lfs f0, 0xac(r1)
/* 800142B8  D0 18 00 00 */	stfs f0, 0(r24)
/* 800142BC  C0 01 00 B0 */	lfs f0, 0xb0(r1)
/* 800142C0  D0 18 00 04 */	stfs f0, 4(r24)
/* 800142C4  C0 01 00 B4 */	lfs f0, 0xb4(r1)
/* 800142C8  D0 18 00 08 */	stfs f0, 8(r24)
/* 800142CC  38 61 00 A0 */	addi r3, r1, 0xa0
/* 800142D0  7F 44 D3 78 */	mr r4, r26
/* 800142D4  38 A1 01 00 */	addi r5, r1, 0x100
/* 800142D8  48 25 28 5D */	bl __mi__4cXyzCFRC3Vec
/* 800142DC  C0 01 00 A0 */	lfs f0, 0xa0(r1)
/* 800142E0  D0 18 00 0C */	stfs f0, 0xc(r24)
/* 800142E4  C0 01 00 A4 */	lfs f0, 0xa4(r1)
/* 800142E8  D0 18 00 10 */	stfs f0, 0x10(r24)
/* 800142EC  C0 01 00 A8 */	lfs f0, 0xa8(r1)
/* 800142F0  D0 18 00 14 */	stfs f0, 0x14(r24)
/* 800142F4  3B 5A 00 0C */	addi r26, r26, 0xc
/* 800142F8  38 61 00 94 */	addi r3, r1, 0x94
/* 800142FC  7F 44 D3 78 */	mr r4, r26
/* 80014300  38 A1 01 00 */	addi r5, r1, 0x100
/* 80014304  3B 38 00 18 */	addi r25, r24, 0x18
/* 80014308  3A 52 00 04 */	addi r18, r18, 4
/* 8001430C  48 25 27 D9 */	bl __pl__4cXyzCFRC3Vec
/* 80014310  C0 01 00 94 */	lfs f0, 0x94(r1)
/* 80014314  D0 01 00 F4 */	stfs f0, 0xf4(r1)
/* 80014318  C0 01 00 98 */	lfs f0, 0x98(r1)
/* 8001431C  D0 01 00 F8 */	stfs f0, 0xf8(r1)
/* 80014320  C0 01 00 9C */	lfs f0, 0x9c(r1)
/* 80014324  D0 01 00 FC */	stfs f0, 0xfc(r1)
/* 80014328  38 61 00 88 */	addi r3, r1, 0x88
/* 8001432C  7F 44 D3 78 */	mr r4, r26
/* 80014330  38 A1 01 00 */	addi r5, r1, 0x100
/* 80014334  48 25 28 01 */	bl __mi__4cXyzCFRC3Vec
/* 80014338  C0 01 00 88 */	lfs f0, 0x88(r1)
/* 8001433C  D0 01 00 E8 */	stfs f0, 0xe8(r1)
/* 80014340  C0 01 00 8C */	lfs f0, 0x8c(r1)
/* 80014344  D0 01 00 EC */	stfs f0, 0xec(r1)
/* 80014348  C0 01 00 90 */	lfs f0, 0x90(r1)
/* 8001434C  D0 01 00 F0 */	stfs f0, 0xf0(r1)
/* 80014350  A0 6F 00 34 */	lhz r3, 0x34(r15)
/* 80014354  3A 03 FF FE */	addi r16, r3, -2
/* 80014358  48 00 02 F8 */	b lbl_80014650
lbl_8001435C:
/* 8001435C  D3 74 00 04 */	stfs f27, 4(r20)
/* 80014360  D3 74 00 0C */	stfs f27, 0xc(r20)
/* 80014364  38 61 00 7C */	addi r3, r1, 0x7c
/* 80014368  38 9A 00 0C */	addi r4, r26, 0xc
/* 8001436C  7F 45 D3 78 */	mr r5, r26
/* 80014370  3A 94 00 10 */	addi r20, r20, 0x10
/* 80014374  48 25 27 C1 */	bl __mi__4cXyzCFRC3Vec
/* 80014378  C0 01 00 7C */	lfs f0, 0x7c(r1)
/* 8001437C  D0 01 01 00 */	stfs f0, 0x100(r1)
/* 80014380  C0 01 00 80 */	lfs f0, 0x80(r1)
/* 80014384  D0 01 01 04 */	stfs f0, 0x104(r1)
/* 80014388  C0 01 00 84 */	lfs f0, 0x84(r1)
/* 8001438C  D0 01 01 08 */	stfs f0, 0x108(r1)
/* 80014390  38 61 01 00 */	addi r3, r1, 0x100
/* 80014394  48 33 2D A5 */	bl PSVECSquareMag
/* 80014398  FC 01 E8 40 */	fcmpo cr0, f1, f29
/* 8001439C  40 81 00 58 */	ble lbl_800143F4
/* 800143A0  FC 00 08 34 */	frsqrte f0, f1
/* 800143A4  C8 82 81 48 */	lfd f4, lit_7919(r2)
/* 800143A8  FC 44 00 32 */	fmul f2, f4, f0
/* 800143AC  C8 62 81 50 */	lfd f3, lit_7920(r2)
/* 800143B0  FC 00 00 32 */	fmul f0, f0, f0
/* 800143B4  FC 01 00 32 */	fmul f0, f1, f0
/* 800143B8  FC 03 00 28 */	fsub f0, f3, f0
/* 800143BC  FC 02 00 32 */	fmul f0, f2, f0
/* 800143C0  FC 44 00 32 */	fmul f2, f4, f0
/* 800143C4  FC 00 00 32 */	fmul f0, f0, f0
/* 800143C8  FC 01 00 32 */	fmul f0, f1, f0
/* 800143CC  FC 03 00 28 */	fsub f0, f3, f0
/* 800143D0  FC 02 00 32 */	fmul f0, f2, f0
/* 800143D4  FC 44 00 32 */	fmul f2, f4, f0
/* 800143D8  FC 00 00 32 */	fmul f0, f0, f0
/* 800143DC  FC 01 00 32 */	fmul f0, f1, f0
/* 800143E0  FC 03 00 28 */	fsub f0, f3, f0
/* 800143E4  FC 02 00 32 */	fmul f0, f2, f0
/* 800143E8  FC 21 00 32 */	fmul f1, f1, f0
/* 800143EC  FC 20 08 18 */	frsp f1, f1
/* 800143F0  48 00 00 88 */	b lbl_80014478
lbl_800143F4:
/* 800143F4  C8 02 81 58 */	lfd f0, lit_7921(r2)
/* 800143F8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800143FC  40 80 00 10 */	bge lbl_8001440C
/* 80014400  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80014404  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 80014408  48 00 00 70 */	b lbl_80014478
lbl_8001440C:
/* 8001440C  D0 21 00 08 */	stfs f1, 8(r1)
/* 80014410  80 81 00 08 */	lwz r4, 8(r1)
/* 80014414  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 80014418  3C 00 7F 80 */	lis r0, 0x7f80
/* 8001441C  7C 03 00 00 */	cmpw r3, r0
/* 80014420  41 82 00 14 */	beq lbl_80014434
/* 80014424  40 80 00 40 */	bge lbl_80014464
/* 80014428  2C 03 00 00 */	cmpwi r3, 0
/* 8001442C  41 82 00 20 */	beq lbl_8001444C
/* 80014430  48 00 00 34 */	b lbl_80014464
lbl_80014434:
/* 80014434  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80014438  41 82 00 0C */	beq lbl_80014444
/* 8001443C  38 00 00 01 */	li r0, 1
/* 80014440  48 00 00 28 */	b lbl_80014468
lbl_80014444:
/* 80014444  38 00 00 02 */	li r0, 2
/* 80014448  48 00 00 20 */	b lbl_80014468
lbl_8001444C:
/* 8001444C  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80014450  41 82 00 0C */	beq lbl_8001445C
/* 80014454  38 00 00 05 */	li r0, 5
/* 80014458  48 00 00 10 */	b lbl_80014468
lbl_8001445C:
/* 8001445C  38 00 00 03 */	li r0, 3
/* 80014460  48 00 00 08 */	b lbl_80014468
lbl_80014464:
/* 80014464  38 00 00 04 */	li r0, 4
lbl_80014468:
/* 80014468  2C 00 00 01 */	cmpwi r0, 1
/* 8001446C  40 82 00 0C */	bne lbl_80014478
/* 80014470  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80014474  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
lbl_80014478:
/* 80014478  EC 1E 00 72 */	fmuls f0, f30, f1
/* 8001447C  EF 7B 00 2A */	fadds f27, f27, f0
/* 80014480  38 61 00 70 */	addi r3, r1, 0x70
/* 80014484  7F 44 D3 78 */	mr r4, r26
/* 80014488  38 BF 00 D8 */	addi r5, r31, 0xd8
/* 8001448C  48 25 26 A9 */	bl __mi__4cXyzCFRC3Vec
/* 80014490  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 80014494  D0 01 01 0C */	stfs f0, 0x10c(r1)
/* 80014498  C0 01 00 74 */	lfs f0, 0x74(r1)
/* 8001449C  D0 01 01 10 */	stfs f0, 0x110(r1)
/* 800144A0  C0 01 00 78 */	lfs f0, 0x78(r1)
/* 800144A4  D0 01 01 14 */	stfs f0, 0x114(r1)
/* 800144A8  38 61 00 64 */	addi r3, r1, 0x64
/* 800144AC  38 81 01 00 */	addi r4, r1, 0x100
/* 800144B0  38 A1 01 0C */	addi r5, r1, 0x10c
/* 800144B4  48 25 28 09 */	bl outprod__4cXyzCFRC3Vec
/* 800144B8  C0 01 00 64 */	lfs f0, 0x64(r1)
/* 800144BC  D0 01 01 00 */	stfs f0, 0x100(r1)
/* 800144C0  C0 01 00 68 */	lfs f0, 0x68(r1)
/* 800144C4  D0 01 01 04 */	stfs f0, 0x104(r1)
/* 800144C8  C0 01 00 6C */	lfs f0, 0x6c(r1)
/* 800144CC  D0 01 01 08 */	stfs f0, 0x108(r1)
/* 800144D0  38 61 00 58 */	addi r3, r1, 0x58
/* 800144D4  38 81 01 00 */	addi r4, r1, 0x100
/* 800144D8  48 25 2A 71 */	bl normalizeZP__4cXyzFv
/* 800144DC  C0 01 01 00 */	lfs f0, 0x100(r1)
/* 800144E0  EC 1F 00 32 */	fmuls f0, f31, f0
/* 800144E4  FC 00 00 1E */	fctiwz f0, f0
/* 800144E8  D8 01 01 28 */	stfd f0, 0x128(r1)
/* 800144EC  80 01 01 2C */	lwz r0, 0x12c(r1)
/* 800144F0  98 17 00 06 */	stb r0, 6(r23)
/* 800144F4  C0 01 01 04 */	lfs f0, 0x104(r1)
/* 800144F8  EC 1F 00 32 */	fmuls f0, f31, f0
/* 800144FC  FC 00 00 1E */	fctiwz f0, f0
/* 80014500  D8 01 01 20 */	stfd f0, 0x120(r1)
/* 80014504  80 01 01 24 */	lwz r0, 0x124(r1)
/* 80014508  98 17 00 07 */	stb r0, 7(r23)
/* 8001450C  C0 01 01 08 */	lfs f0, 0x108(r1)
/* 80014510  EC 1F 00 32 */	fmuls f0, f31, f0
/* 80014514  FC 00 00 1E */	fctiwz f0, f0
/* 80014518  D8 01 01 18 */	stfd f0, 0x118(r1)
/* 8001451C  80 01 01 1C */	lwz r0, 0x11c(r1)
/* 80014520  98 17 00 08 */	stb r0, 8(r23)
/* 80014524  88 17 00 06 */	lbz r0, 6(r23)
/* 80014528  7C 00 00 D0 */	neg r0, r0
/* 8001452C  98 16 00 06 */	stb r0, 6(r22)
/* 80014530  88 17 00 07 */	lbz r0, 7(r23)
/* 80014534  7C 00 00 D0 */	neg r0, r0
/* 80014538  98 16 00 07 */	stb r0, 7(r22)
/* 8001453C  88 17 00 08 */	lbz r0, 8(r23)
/* 80014540  7C 00 00 D0 */	neg r0, r0
/* 80014544  98 16 00 08 */	stb r0, 8(r22)
/* 80014548  38 61 01 00 */	addi r3, r1, 0x100
/* 8001454C  7C 64 1B 78 */	mr r4, r3
/* 80014550  C0 32 00 00 */	lfs f1, 0(r18)
/* 80014554  3A F7 00 06 */	addi r23, r23, 6
/* 80014558  3A D6 00 06 */	addi r22, r22, 6
/* 8001455C  48 33 2B 7D */	bl PSVECScale
/* 80014560  38 61 00 4C */	addi r3, r1, 0x4c
/* 80014564  7F 44 D3 78 */	mr r4, r26
/* 80014568  38 A1 01 00 */	addi r5, r1, 0x100
/* 8001456C  48 25 25 79 */	bl __pl__4cXyzCFRC3Vec
/* 80014570  38 61 00 F4 */	addi r3, r1, 0xf4
/* 80014574  38 81 00 4C */	addi r4, r1, 0x4c
/* 80014578  7C 65 1B 78 */	mr r5, r3
/* 8001457C  48 33 2B 15 */	bl PSVECAdd
/* 80014580  38 61 00 40 */	addi r3, r1, 0x40
/* 80014584  7F 44 D3 78 */	mr r4, r26
/* 80014588  38 A1 01 00 */	addi r5, r1, 0x100
/* 8001458C  48 25 25 A9 */	bl __mi__4cXyzCFRC3Vec
/* 80014590  38 61 00 E8 */	addi r3, r1, 0xe8
/* 80014594  38 81 00 40 */	addi r4, r1, 0x40
/* 80014598  7C 65 1B 78 */	mr r5, r3
/* 8001459C  48 33 2A F5 */	bl PSVECAdd
/* 800145A0  38 61 00 34 */	addi r3, r1, 0x34
/* 800145A4  38 81 00 F4 */	addi r4, r1, 0xf4
/* 800145A8  C0 22 81 2C */	lfs f1, lit_6819(r2)
/* 800145AC  48 25 25 D9 */	bl __ml__4cXyzCFf
/* 800145B0  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 800145B4  D0 19 00 00 */	stfs f0, 0(r25)
/* 800145B8  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 800145BC  D0 19 00 04 */	stfs f0, 4(r25)
/* 800145C0  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 800145C4  D0 19 00 08 */	stfs f0, 8(r25)
/* 800145C8  38 61 00 28 */	addi r3, r1, 0x28
/* 800145CC  38 81 00 E8 */	addi r4, r1, 0xe8
/* 800145D0  C0 22 81 2C */	lfs f1, lit_6819(r2)
/* 800145D4  48 25 25 B1 */	bl __ml__4cXyzCFf
/* 800145D8  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 800145DC  D0 19 00 0C */	stfs f0, 0xc(r25)
/* 800145E0  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 800145E4  D0 19 00 10 */	stfs f0, 0x10(r25)
/* 800145E8  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 800145EC  D0 19 00 14 */	stfs f0, 0x14(r25)
/* 800145F0  3B 5A 00 0C */	addi r26, r26, 0xc
/* 800145F4  38 61 00 1C */	addi r3, r1, 0x1c
/* 800145F8  7F 44 D3 78 */	mr r4, r26
/* 800145FC  38 A1 01 00 */	addi r5, r1, 0x100
/* 80014600  3B 39 00 18 */	addi r25, r25, 0x18
/* 80014604  3A 52 00 04 */	addi r18, r18, 4
/* 80014608  48 25 24 DD */	bl __pl__4cXyzCFRC3Vec
/* 8001460C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80014610  D0 01 00 F4 */	stfs f0, 0xf4(r1)
/* 80014614  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 80014618  D0 01 00 F8 */	stfs f0, 0xf8(r1)
/* 8001461C  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80014620  D0 01 00 FC */	stfs f0, 0xfc(r1)
/* 80014624  38 61 00 10 */	addi r3, r1, 0x10
/* 80014628  7F 44 D3 78 */	mr r4, r26
/* 8001462C  38 A1 01 00 */	addi r5, r1, 0x100
/* 80014630  48 25 25 05 */	bl __mi__4cXyzCFRC3Vec
/* 80014634  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80014638  D0 01 00 E8 */	stfs f0, 0xe8(r1)
/* 8001463C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80014640  D0 01 00 EC */	stfs f0, 0xec(r1)
/* 80014644  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80014648  D0 01 00 F0 */	stfs f0, 0xf0(r1)
/* 8001464C  3A 10 FF FF */	addi r16, r16, -1
lbl_80014650:
/* 80014650  2C 10 00 00 */	cmpwi r16, 0
/* 80014654  41 81 FD 08 */	bgt lbl_8001435C
/* 80014658  D3 74 00 04 */	stfs f27, 4(r20)
/* 8001465C  D3 74 00 0C */	stfs f27, 0xc(r20)
/* 80014660  88 17 00 00 */	lbz r0, 0(r23)
/* 80014664  98 16 00 03 */	stb r0, 3(r22)
/* 80014668  88 17 00 01 */	lbz r0, 1(r23)
/* 8001466C  98 16 00 04 */	stb r0, 4(r22)
/* 80014670  88 17 00 02 */	lbz r0, 2(r23)
/* 80014674  98 16 00 05 */	stb r0, 5(r22)
/* 80014678  88 17 00 03 */	lbz r0, 3(r23)
/* 8001467C  98 16 00 06 */	stb r0, 6(r22)
/* 80014680  88 17 00 04 */	lbz r0, 4(r23)
/* 80014684  98 16 00 07 */	stb r0, 7(r22)
/* 80014688  88 17 00 05 */	lbz r0, 5(r23)
/* 8001468C  98 16 00 08 */	stb r0, 8(r22)
/* 80014690  C0 01 00 F4 */	lfs f0, 0xf4(r1)
/* 80014694  D0 19 00 00 */	stfs f0, 0(r25)
/* 80014698  C0 01 00 F8 */	lfs f0, 0xf8(r1)
/* 8001469C  D0 19 00 04 */	stfs f0, 4(r25)
/* 800146A0  C0 01 00 FC */	lfs f0, 0xfc(r1)
/* 800146A4  D0 19 00 08 */	stfs f0, 8(r25)
/* 800146A8  C0 01 00 E8 */	lfs f0, 0xe8(r1)
/* 800146AC  D0 19 00 0C */	stfs f0, 0xc(r25)
/* 800146B0  C0 01 00 EC */	lfs f0, 0xec(r1)
/* 800146B4  D0 19 00 10 */	stfs f0, 0x10(r25)
/* 800146B8  C0 01 00 F0 */	lfs f0, 0xf0(r1)
/* 800146BC  D0 19 00 14 */	stfs f0, 0x14(r25)
/* 800146C0  7F 03 C3 78 */	mr r3, r24
/* 800146C4  7F A4 EB 78 */	mr r4, r29
/* 800146C8  48 32 6F 71 */	bl DCStoreRangeNoSync
/* 800146CC  7E A3 AB 78 */	mr r3, r21
/* 800146D0  7F 84 E3 78 */	mr r4, r28
/* 800146D4  48 32 6F 65 */	bl DCStoreRangeNoSync
/* 800146D8  7E 63 9B 78 */	mr r3, r19
/* 800146DC  7F 64 DB 78 */	mr r4, r27
/* 800146E0  48 32 6F 59 */	bl DCStoreRangeNoSync
/* 800146E4  3B DE 00 20 */	addi r30, r30, 0x20
/* 800146E8  3A 31 00 01 */	addi r17, r17, 1
lbl_800146EC:
/* 800146EC  A0 0F 00 30 */	lhz r0, 0x30(r15)
/* 800146F0  7C 11 00 00 */	cmpw r17, r0
/* 800146F4  41 80 F9 8C */	blt lbl_80014080
/* 800146F8  E3 E1 01 C8 */	psq_l f31, 456(r1), 0, 0 /* qr0 */
/* 800146FC  CB E1 01 C0 */	lfd f31, 0x1c0(r1)
/* 80014700  E3 C1 01 B8 */	psq_l f30, 440(r1), 0, 0 /* qr0 */
/* 80014704  CB C1 01 B0 */	lfd f30, 0x1b0(r1)
/* 80014708  E3 A1 01 A8 */	psq_l f29, 424(r1), 0, 0 /* qr0 */
/* 8001470C  CB A1 01 A0 */	lfd f29, 0x1a0(r1)
/* 80014710  E3 81 01 98 */	psq_l f28, 408(r1), 0, 0 /* qr0 */
/* 80014714  CB 81 01 90 */	lfd f28, 0x190(r1)
/* 80014718  E3 61 01 88 */	psq_l f27, 392(r1), 0, 0 /* qr0 */
/* 8001471C  CB 61 01 80 */	lfd f27, 0x180(r1)
/* 80014720  39 61 01 80 */	addi r11, r1, 0x180
/* 80014724  48 34 DA CD */	bl _restgpr_15
/* 80014728  80 01 01 D4 */	lwz r0, 0x1d4(r1)
/* 8001472C  7C 08 03 A6 */	mtlr r0
/* 80014730  38 21 01 D0 */	addi r1, r1, 0x1d0
/* 80014734  4E 80 00 20 */	blr 
