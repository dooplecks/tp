lbl_800284D0:
/* 800284D0  94 21 FE C0 */	stwu r1, -0x140(r1)
/* 800284D4  7C 08 02 A6 */	mflr r0
/* 800284D8  90 01 01 44 */	stw r0, 0x144(r1)
/* 800284DC  93 E1 01 3C */	stw r31, 0x13c(r1)
/* 800284E0  7C 7F 1B 78 */	mr r31, r3
/* 800284E4  80 8D 88 00 */	lwz r4, m_res__22dMap_HIO_prm_res_dst_s(r13)
/* 800284E8  A8 C4 01 AA */	lha r6, 0x1aa(r4)
/* 800284EC  3C A0 80 43 */	lis r5, g_Counter@ha /* 0x80430CD8@ha */
/* 800284F0  38 A5 0C D8 */	addi r5, r5, g_Counter@l /* 0x80430CD8@l */
/* 800284F4  80 A5 00 00 */	lwz r5, 0(r5)
/* 800284F8  7C 05 33 96 */	divwu r0, r5, r6
/* 800284FC  7C 00 31 D6 */	mullw r0, r0, r6
/* 80028500  7C 00 28 50 */	subf r0, r0, r5
/* 80028504  C8 02 82 B0 */	lfd f0, lit_3749(r2)
/* 80028508  90 01 00 0C */	stw r0, 0xc(r1)
/* 8002850C  3D 00 43 30 */	lis r8, 0x4330
/* 80028510  91 01 00 08 */	stw r8, 8(r1)
/* 80028514  C8 21 00 08 */	lfd f1, 8(r1)
/* 80028518  EC 61 00 28 */	fsubs f3, f1, f0
/* 8002851C  C8 42 82 B8 */	lfd f2, lit_3751(r2)
/* 80028520  6C C0 80 00 */	xoris r0, r6, 0x8000
/* 80028524  90 01 00 14 */	stw r0, 0x14(r1)
/* 80028528  91 01 00 10 */	stw r8, 0x10(r1)
/* 8002852C  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 80028530  EC 21 10 28 */	fsubs f1, f1, f2
/* 80028534  EC 43 08 24 */	fdivs f2, f3, f1
/* 80028538  C0 62 82 A0 */	lfs f3, lit_3745(r2)
/* 8002853C  C0 22 82 A4 */	lfs f1, lit_3746(r2)
/* 80028540  EC 41 00 B2 */	fmuls f2, f1, f2
/* 80028544  C0 22 82 A8 */	lfs f1, lit_3747(r2)
/* 80028548  EC 22 08 28 */	fsubs f1, f2, f1
/* 8002854C  FC 20 08 1E */	fctiwz f1, f1
/* 80028550  D8 21 00 18 */	stfd f1, 0x18(r1)
/* 80028554  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80028558  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 8002855C  3C A0 80 44 */	lis r5, sincosTable___5JMath@ha /* 0x80439A20@ha */
/* 80028560  38 A5 9A 20 */	addi r5, r5, sincosTable___5JMath@l /* 0x80439A20@l */
/* 80028564  7C 25 04 2E */	lfsx f1, r5, r0
/* 80028568  EC 23 00 72 */	fmuls f1, f3, f1
/* 8002856C  EC 23 08 2A */	fadds f1, f3, f1
/* 80028570  88 A4 01 98 */	lbz r5, 0x198(r4)
/* 80028574  90 A1 00 24 */	stw r5, 0x24(r1)
/* 80028578  91 01 00 20 */	stw r8, 0x20(r1)
/* 8002857C  C8 41 00 20 */	lfd f2, 0x20(r1)
/* 80028580  EC 82 00 28 */	fsubs f4, f2, f0
/* 80028584  88 04 01 9C */	lbz r0, 0x19c(r4)
/* 80028588  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8002858C  91 01 00 28 */	stw r8, 0x28(r1)
/* 80028590  C8 41 00 28 */	lfd f2, 0x28(r1)
/* 80028594  EC 62 00 28 */	fsubs f3, f2, f0
/* 80028598  90 A1 00 34 */	stw r5, 0x34(r1)
/* 8002859C  91 01 00 30 */	stw r8, 0x30(r1)
/* 800285A0  C8 41 00 30 */	lfd f2, 0x30(r1)
/* 800285A4  EC 42 00 28 */	fsubs f2, f2, f0
/* 800285A8  EC 43 10 28 */	fsubs f2, f3, f2
/* 800285AC  EC 41 00 B2 */	fmuls f2, f1, f2
/* 800285B0  EC 44 10 2A */	fadds f2, f4, f2
/* 800285B4  FC 40 10 1E */	fctiwz f2, f2
/* 800285B8  D8 41 00 38 */	stfd f2, 0x38(r1)
/* 800285BC  80 A1 00 3C */	lwz r5, 0x3c(r1)
/* 800285C0  88 C4 01 99 */	lbz r6, 0x199(r4)
/* 800285C4  90 C1 00 44 */	stw r6, 0x44(r1)
/* 800285C8  91 01 00 40 */	stw r8, 0x40(r1)
/* 800285CC  C8 41 00 40 */	lfd f2, 0x40(r1)
/* 800285D0  EC 82 00 28 */	fsubs f4, f2, f0
/* 800285D4  88 04 01 9D */	lbz r0, 0x19d(r4)
/* 800285D8  90 01 00 4C */	stw r0, 0x4c(r1)
/* 800285DC  91 01 00 48 */	stw r8, 0x48(r1)
/* 800285E0  C8 41 00 48 */	lfd f2, 0x48(r1)
/* 800285E4  EC 62 00 28 */	fsubs f3, f2, f0
/* 800285E8  90 C1 00 54 */	stw r6, 0x54(r1)
/* 800285EC  91 01 00 50 */	stw r8, 0x50(r1)
/* 800285F0  C8 41 00 50 */	lfd f2, 0x50(r1)
/* 800285F4  EC 42 00 28 */	fsubs f2, f2, f0
/* 800285F8  EC 43 10 28 */	fsubs f2, f3, f2
/* 800285FC  EC 41 00 B2 */	fmuls f2, f1, f2
/* 80028600  EC 44 10 2A */	fadds f2, f4, f2
/* 80028604  FC 40 10 1E */	fctiwz f2, f2
/* 80028608  D8 41 00 58 */	stfd f2, 0x58(r1)
/* 8002860C  80 C1 00 5C */	lwz r6, 0x5c(r1)
/* 80028610  88 E4 01 9A */	lbz r7, 0x19a(r4)
/* 80028614  90 E1 00 64 */	stw r7, 0x64(r1)
/* 80028618  91 01 00 60 */	stw r8, 0x60(r1)
/* 8002861C  C8 41 00 60 */	lfd f2, 0x60(r1)
/* 80028620  EC 82 00 28 */	fsubs f4, f2, f0
/* 80028624  88 04 01 9E */	lbz r0, 0x19e(r4)
/* 80028628  90 01 00 6C */	stw r0, 0x6c(r1)
/* 8002862C  91 01 00 68 */	stw r8, 0x68(r1)
/* 80028630  C8 41 00 68 */	lfd f2, 0x68(r1)
/* 80028634  EC 62 00 28 */	fsubs f3, f2, f0
/* 80028638  90 E1 00 74 */	stw r7, 0x74(r1)
/* 8002863C  91 01 00 70 */	stw r8, 0x70(r1)
/* 80028640  C8 41 00 70 */	lfd f2, 0x70(r1)
/* 80028644  EC 42 00 28 */	fsubs f2, f2, f0
/* 80028648  EC 43 10 28 */	fsubs f2, f3, f2
/* 8002864C  EC 41 00 B2 */	fmuls f2, f1, f2
/* 80028650  EC 44 10 2A */	fadds f2, f4, f2
/* 80028654  FC 40 10 1E */	fctiwz f2, f2
/* 80028658  D8 41 00 78 */	stfd f2, 0x78(r1)
/* 8002865C  80 E1 00 7C */	lwz r7, 0x7c(r1)
/* 80028660  89 24 01 9B */	lbz r9, 0x19b(r4)
/* 80028664  91 21 00 84 */	stw r9, 0x84(r1)
/* 80028668  91 01 00 80 */	stw r8, 0x80(r1)
/* 8002866C  C8 41 00 80 */	lfd f2, 0x80(r1)
/* 80028670  EC 82 00 28 */	fsubs f4, f2, f0
/* 80028674  88 04 01 9F */	lbz r0, 0x19f(r4)
/* 80028678  90 01 00 8C */	stw r0, 0x8c(r1)
/* 8002867C  91 01 00 88 */	stw r8, 0x88(r1)
/* 80028680  C8 41 00 88 */	lfd f2, 0x88(r1)
/* 80028684  EC 62 00 28 */	fsubs f3, f2, f0
/* 80028688  91 21 00 94 */	stw r9, 0x94(r1)
/* 8002868C  91 01 00 90 */	stw r8, 0x90(r1)
/* 80028690  C8 41 00 90 */	lfd f2, 0x90(r1)
/* 80028694  EC 02 00 28 */	fsubs f0, f2, f0
/* 80028698  EC 03 00 28 */	fsubs f0, f3, f0
/* 8002869C  EC 01 00 32 */	fmuls f0, f1, f0
/* 800286A0  EC 04 00 2A */	fadds f0, f4, f0
/* 800286A4  FC 00 00 1E */	fctiwz f0, f0
/* 800286A8  D8 01 00 98 */	stfd f0, 0x98(r1)
/* 800286AC  81 01 00 9C */	lwz r8, 0x9c(r1)
/* 800286B0  38 80 00 2D */	li r4, 0x2d
/* 800286B4  81 83 00 00 */	lwz r12, 0(r3)
/* 800286B8  81 8C 00 BC */	lwz r12, 0xbc(r12)
/* 800286BC  7D 89 03 A6 */	mtctr r12
/* 800286C0  4E 80 04 21 */	bctrl 
/* 800286C4  80 6D 88 00 */	lwz r3, m_res__22dMap_HIO_prm_res_dst_s(r13)
/* 800286C8  A8 A3 01 AC */	lha r5, 0x1ac(r3)
/* 800286CC  3C 80 80 43 */	lis r4, g_Counter@ha /* 0x80430CD8@ha */
/* 800286D0  38 84 0C D8 */	addi r4, r4, g_Counter@l /* 0x80430CD8@l */
/* 800286D4  80 84 00 00 */	lwz r4, 0(r4)
/* 800286D8  7C 04 2B 96 */	divwu r0, r4, r5
/* 800286DC  7C 00 29 D6 */	mullw r0, r0, r5
/* 800286E0  7C 00 20 50 */	subf r0, r0, r4
/* 800286E4  C8 02 82 B0 */	lfd f0, lit_3749(r2)
/* 800286E8  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 800286EC  3D 00 43 30 */	lis r8, 0x4330
/* 800286F0  91 01 00 A0 */	stw r8, 0xa0(r1)
/* 800286F4  C8 21 00 A0 */	lfd f1, 0xa0(r1)
/* 800286F8  EC 61 00 28 */	fsubs f3, f1, f0
/* 800286FC  C8 42 82 B8 */	lfd f2, lit_3751(r2)
/* 80028700  6C A0 80 00 */	xoris r0, r5, 0x8000
/* 80028704  90 01 00 AC */	stw r0, 0xac(r1)
/* 80028708  91 01 00 A8 */	stw r8, 0xa8(r1)
/* 8002870C  C8 21 00 A8 */	lfd f1, 0xa8(r1)
/* 80028710  EC 21 10 28 */	fsubs f1, f1, f2
/* 80028714  EC 43 08 24 */	fdivs f2, f3, f1
/* 80028718  C0 62 82 A0 */	lfs f3, lit_3745(r2)
/* 8002871C  C0 22 82 A4 */	lfs f1, lit_3746(r2)
/* 80028720  EC 41 00 B2 */	fmuls f2, f1, f2
/* 80028724  C0 22 82 A8 */	lfs f1, lit_3747(r2)
/* 80028728  EC 22 08 28 */	fsubs f1, f2, f1
/* 8002872C  FC 20 08 1E */	fctiwz f1, f1
/* 80028730  D8 21 00 B0 */	stfd f1, 0xb0(r1)
/* 80028734  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 80028738  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 8002873C  3C 80 80 44 */	lis r4, sincosTable___5JMath@ha /* 0x80439A20@ha */
/* 80028740  38 84 9A 20 */	addi r4, r4, sincosTable___5JMath@l /* 0x80439A20@l */
/* 80028744  7C 24 04 2E */	lfsx f1, r4, r0
/* 80028748  EC 23 00 72 */	fmuls f1, f3, f1
/* 8002874C  EC 23 08 2A */	fadds f1, f3, f1
/* 80028750  88 83 01 A0 */	lbz r4, 0x1a0(r3)
/* 80028754  90 81 00 BC */	stw r4, 0xbc(r1)
/* 80028758  91 01 00 B8 */	stw r8, 0xb8(r1)
/* 8002875C  C8 41 00 B8 */	lfd f2, 0xb8(r1)
/* 80028760  EC 82 00 28 */	fsubs f4, f2, f0
/* 80028764  88 03 01 A4 */	lbz r0, 0x1a4(r3)
/* 80028768  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 8002876C  91 01 00 C0 */	stw r8, 0xc0(r1)
/* 80028770  C8 41 00 C0 */	lfd f2, 0xc0(r1)
/* 80028774  EC 62 00 28 */	fsubs f3, f2, f0
/* 80028778  90 81 00 CC */	stw r4, 0xcc(r1)
/* 8002877C  91 01 00 C8 */	stw r8, 0xc8(r1)
/* 80028780  C8 41 00 C8 */	lfd f2, 0xc8(r1)
/* 80028784  EC 42 00 28 */	fsubs f2, f2, f0
/* 80028788  EC 43 10 28 */	fsubs f2, f3, f2
/* 8002878C  EC 41 00 B2 */	fmuls f2, f1, f2
/* 80028790  EC 44 10 2A */	fadds f2, f4, f2
/* 80028794  FC 40 10 1E */	fctiwz f2, f2
/* 80028798  D8 41 00 D0 */	stfd f2, 0xd0(r1)
/* 8002879C  80 A1 00 D4 */	lwz r5, 0xd4(r1)
/* 800287A0  88 83 01 A1 */	lbz r4, 0x1a1(r3)
/* 800287A4  90 81 00 DC */	stw r4, 0xdc(r1)
/* 800287A8  91 01 00 D8 */	stw r8, 0xd8(r1)
/* 800287AC  C8 41 00 D8 */	lfd f2, 0xd8(r1)
/* 800287B0  EC 82 00 28 */	fsubs f4, f2, f0
/* 800287B4  88 03 01 A5 */	lbz r0, 0x1a5(r3)
/* 800287B8  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 800287BC  91 01 00 E0 */	stw r8, 0xe0(r1)
/* 800287C0  C8 41 00 E0 */	lfd f2, 0xe0(r1)
/* 800287C4  EC 62 00 28 */	fsubs f3, f2, f0
/* 800287C8  90 81 00 EC */	stw r4, 0xec(r1)
/* 800287CC  91 01 00 E8 */	stw r8, 0xe8(r1)
/* 800287D0  C8 41 00 E8 */	lfd f2, 0xe8(r1)
/* 800287D4  EC 42 00 28 */	fsubs f2, f2, f0
/* 800287D8  EC 43 10 28 */	fsubs f2, f3, f2
/* 800287DC  EC 41 00 B2 */	fmuls f2, f1, f2
/* 800287E0  EC 44 10 2A */	fadds f2, f4, f2
/* 800287E4  FC 40 10 1E */	fctiwz f2, f2
/* 800287E8  D8 41 00 F0 */	stfd f2, 0xf0(r1)
/* 800287EC  80 C1 00 F4 */	lwz r6, 0xf4(r1)
/* 800287F0  88 83 01 A2 */	lbz r4, 0x1a2(r3)
/* 800287F4  90 81 00 FC */	stw r4, 0xfc(r1)
/* 800287F8  91 01 00 F8 */	stw r8, 0xf8(r1)
/* 800287FC  C8 41 00 F8 */	lfd f2, 0xf8(r1)
/* 80028800  EC 82 00 28 */	fsubs f4, f2, f0
/* 80028804  88 03 01 A6 */	lbz r0, 0x1a6(r3)
/* 80028808  90 01 01 04 */	stw r0, 0x104(r1)
/* 8002880C  91 01 01 00 */	stw r8, 0x100(r1)
/* 80028810  C8 41 01 00 */	lfd f2, 0x100(r1)
/* 80028814  EC 62 00 28 */	fsubs f3, f2, f0
/* 80028818  90 81 01 0C */	stw r4, 0x10c(r1)
/* 8002881C  91 01 01 08 */	stw r8, 0x108(r1)
/* 80028820  C8 41 01 08 */	lfd f2, 0x108(r1)
/* 80028824  EC 42 00 28 */	fsubs f2, f2, f0
/* 80028828  EC 43 10 28 */	fsubs f2, f3, f2
/* 8002882C  EC 41 00 B2 */	fmuls f2, f1, f2
/* 80028830  EC 44 10 2A */	fadds f2, f4, f2
/* 80028834  FC 40 10 1E */	fctiwz f2, f2
/* 80028838  D8 41 01 10 */	stfd f2, 0x110(r1)
/* 8002883C  80 E1 01 14 */	lwz r7, 0x114(r1)
/* 80028840  88 83 01 A3 */	lbz r4, 0x1a3(r3)
/* 80028844  90 81 01 1C */	stw r4, 0x11c(r1)
/* 80028848  91 01 01 18 */	stw r8, 0x118(r1)
/* 8002884C  C8 41 01 18 */	lfd f2, 0x118(r1)
/* 80028850  EC 82 00 28 */	fsubs f4, f2, f0
/* 80028854  88 03 01 A7 */	lbz r0, 0x1a7(r3)
/* 80028858  90 01 01 24 */	stw r0, 0x124(r1)
/* 8002885C  91 01 01 20 */	stw r8, 0x120(r1)
/* 80028860  C8 41 01 20 */	lfd f2, 0x120(r1)
/* 80028864  EC 62 00 28 */	fsubs f3, f2, f0
/* 80028868  90 81 01 2C */	stw r4, 0x12c(r1)
/* 8002886C  91 01 01 28 */	stw r8, 0x128(r1)
/* 80028870  C8 41 01 28 */	lfd f2, 0x128(r1)
/* 80028874  EC 02 00 28 */	fsubs f0, f2, f0
/* 80028878  EC 03 00 28 */	fsubs f0, f3, f0
/* 8002887C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80028880  EC 04 00 2A */	fadds f0, f4, f0
/* 80028884  FC 00 00 1E */	fctiwz f0, f0
/* 80028888  D8 01 01 30 */	stfd f0, 0x130(r1)
/* 8002888C  81 01 01 34 */	lwz r8, 0x134(r1)
/* 80028890  7F E3 FB 78 */	mr r3, r31
/* 80028894  38 80 00 2E */	li r4, 0x2e
/* 80028898  81 9F 00 00 */	lwz r12, 0(r31)
/* 8002889C  81 8C 00 BC */	lwz r12, 0xbc(r12)
/* 800288A0  7D 89 03 A6 */	mtctr r12
/* 800288A4  4E 80 04 21 */	bctrl 
/* 800288A8  7F E3 FB 78 */	mr r3, r31
/* 800288AC  48 01 75 6D */	bl draw__16renderingDAmap_cFv
/* 800288B0  83 E1 01 3C */	lwz r31, 0x13c(r1)
/* 800288B4  80 01 01 44 */	lwz r0, 0x144(r1)
/* 800288B8  7C 08 03 A6 */	mtlr r0
/* 800288BC  38 21 01 40 */	addi r1, r1, 0x140
/* 800288C0  4E 80 00 20 */	blr 
