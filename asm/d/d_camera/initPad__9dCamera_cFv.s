lbl_80161550:
/* 80161550  80 03 06 0C */	lwz r0, 0x60c(r3)
/* 80161554  54 00 01 CF */	rlwinm. r0, r0, 0, 7, 7
/* 80161558  41 82 00 18 */	beq lbl_80161570
/* 8016155C  C0 02 9C A0 */	lfs f0, lit_5656(r2)
/* 80161560  D0 03 01 BC */	stfs f0, 0x1bc(r3)
/* 80161564  D0 03 01 C0 */	stfs f0, 0x1c0(r3)
/* 80161568  D0 03 01 C4 */	stfs f0, 0x1c4(r3)
/* 8016156C  48 00 00 44 */	b lbl_801615B0
lbl_80161570:
/* 80161570  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 80161574  54 00 30 32 */	slwi r0, r0, 6
/* 80161578  3C 80 80 3E */	lis r4, m_cpadInfo__8mDoCPd_c@ha /* 0x803DD2E8@ha */
/* 8016157C  38 A4 D2 E8 */	addi r5, r4, m_cpadInfo__8mDoCPd_c@l /* 0x803DD2E8@l */
/* 80161580  7C 05 04 2E */	lfsx f0, r5, r0
/* 80161584  D0 03 01 BC */	stfs f0, 0x1bc(r3)
/* 80161588  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 8016158C  54 00 30 32 */	slwi r0, r0, 6
/* 80161590  7C 85 02 14 */	add r4, r5, r0
/* 80161594  C0 04 00 04 */	lfs f0, 4(r4)
/* 80161598  D0 03 01 C0 */	stfs f0, 0x1c0(r3)
/* 8016159C  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 801615A0  54 00 30 32 */	slwi r0, r0, 6
/* 801615A4  7C 85 02 14 */	add r4, r5, r0
/* 801615A8  C0 04 00 08 */	lfs f0, 8(r4)
/* 801615AC  D0 03 01 C4 */	stfs f0, 0x1c4(r3)
lbl_801615B0:
/* 801615B0  C0 02 9C A0 */	lfs f0, lit_5656(r2)
/* 801615B4  D0 03 01 C8 */	stfs f0, 0x1c8(r3)
/* 801615B8  D0 03 01 CC */	stfs f0, 0x1cc(r3)
/* 801615BC  D0 03 01 D0 */	stfs f0, 0x1d0(r3)
/* 801615C0  A8 0D 8C 08 */	lha r0, _0__7cSAngle(r13)
/* 801615C4  B0 03 01 D4 */	sth r0, 0x1d4(r3)
/* 801615C8  80 03 06 0C */	lwz r0, 0x60c(r3)
/* 801615CC  54 00 02 11 */	rlwinm. r0, r0, 0, 8, 8
/* 801615D0  41 82 00 14 */	beq lbl_801615E4
/* 801615D4  D0 03 01 BC */	stfs f0, 0x1bc(r3)
/* 801615D8  D0 03 01 C0 */	stfs f0, 0x1c0(r3)
/* 801615DC  D0 03 01 C4 */	stfs f0, 0x1c4(r3)
/* 801615E0  48 00 00 48 */	b lbl_80161628
lbl_801615E4:
/* 801615E4  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 801615E8  54 00 30 32 */	slwi r0, r0, 6
/* 801615EC  3C 80 80 3E */	lis r4, m_cpadInfo__8mDoCPd_c@ha /* 0x803DD2E8@ha */
/* 801615F0  38 A4 D2 E8 */	addi r5, r4, m_cpadInfo__8mDoCPd_c@l /* 0x803DD2E8@l */
/* 801615F4  7C 85 02 14 */	add r4, r5, r0
/* 801615F8  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 801615FC  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 80161600  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 80161604  54 00 30 32 */	slwi r0, r0, 6
/* 80161608  7C 85 02 14 */	add r4, r5, r0
/* 8016160C  C0 04 00 14 */	lfs f0, 0x14(r4)
/* 80161610  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 80161614  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 80161618  54 00 30 32 */	slwi r0, r0, 6
/* 8016161C  7C 85 02 14 */	add r4, r5, r0
/* 80161620  C0 04 00 18 */	lfs f0, 0x18(r4)
/* 80161624  D0 03 01 E0 */	stfs f0, 0x1e0(r3)
lbl_80161628:
/* 80161628  C0 02 9C A0 */	lfs f0, lit_5656(r2)
/* 8016162C  D0 03 01 E4 */	stfs f0, 0x1e4(r3)
/* 80161630  D0 03 01 E8 */	stfs f0, 0x1e8(r3)
/* 80161634  D0 03 01 EC */	stfs f0, 0x1ec(r3)
/* 80161638  A8 0D 8C 08 */	lha r0, _0__7cSAngle(r13)
/* 8016163C  B0 03 01 F0 */	sth r0, 0x1f0(r3)
/* 80161640  38 80 00 00 */	li r4, 0
/* 80161644  90 83 01 FC */	stw r4, 0x1fc(r3)
/* 80161648  90 83 01 F8 */	stw r4, 0x1f8(r3)
/* 8016164C  90 83 01 F4 */	stw r4, 0x1f4(r3)
/* 80161650  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 80161654  54 06 30 32 */	slwi r6, r0, 6
/* 80161658  3C A0 80 3E */	lis r5, m_cpadInfo__8mDoCPd_c@ha /* 0x803DD2E8@ha */
/* 8016165C  38 05 D2 E8 */	addi r0, r5, m_cpadInfo__8mDoCPd_c@l /* 0x803DD2E8@l */
/* 80161660  7C A0 32 14 */	add r5, r0, r6
/* 80161664  C0 25 00 28 */	lfs f1, 0x28(r5)
/* 80161668  D0 23 02 00 */	stfs f1, 0x200(r3)
/* 8016166C  D0 03 02 04 */	stfs f0, 0x204(r3)
/* 80161670  98 83 02 08 */	stb r4, 0x208(r3)
/* 80161674  98 83 02 09 */	stb r4, 0x209(r3)
/* 80161678  98 83 02 0A */	stb r4, 0x20a(r3)
/* 8016167C  98 83 02 0B */	stb r4, 0x20b(r3)
/* 80161680  80 A3 01 7C */	lwz r5, 0x17c(r3)
/* 80161684  54 A5 30 32 */	slwi r5, r5, 6
/* 80161688  7C A0 2A 14 */	add r5, r0, r5
/* 8016168C  C0 25 00 2C */	lfs f1, 0x2c(r5)
/* 80161690  D0 23 02 0C */	stfs f1, 0x20c(r3)
/* 80161694  D0 03 02 10 */	stfs f0, 0x210(r3)
/* 80161698  98 83 02 14 */	stb r4, 0x214(r3)
/* 8016169C  98 83 02 15 */	stb r4, 0x215(r3)
/* 801616A0  98 83 02 16 */	stb r4, 0x216(r3)
/* 801616A4  98 83 02 17 */	stb r4, 0x217(r3)
/* 801616A8  80 A3 01 7C */	lwz r5, 0x17c(r3)
/* 801616AC  54 A5 30 32 */	slwi r5, r5, 6
/* 801616B0  7C A0 2A 14 */	add r5, r0, r5
/* 801616B4  80 A5 00 30 */	lwz r5, 0x30(r5)
/* 801616B8  54 A5 B7 FE */	rlwinm r5, r5, 0x16, 0x1f, 0x1f
/* 801616BC  98 A3 02 18 */	stb r5, 0x218(r3)
/* 801616C0  80 A3 01 7C */	lwz r5, 0x17c(r3)
/* 801616C4  54 A5 30 32 */	slwi r5, r5, 6
/* 801616C8  7C A0 2A 14 */	add r5, r0, r5
/* 801616CC  80 A5 00 34 */	lwz r5, 0x34(r5)
/* 801616D0  54 A5 B7 FE */	rlwinm r5, r5, 0x16, 0x1f, 0x1f
/* 801616D4  98 A3 02 19 */	stb r5, 0x219(r3)
/* 801616D8  80 A3 01 7C */	lwz r5, 0x17c(r3)
/* 801616DC  54 A5 30 32 */	slwi r5, r5, 6
/* 801616E0  7C A0 2A 14 */	add r5, r0, r5
/* 801616E4  80 A5 00 30 */	lwz r5, 0x30(r5)
/* 801616E8  54 A5 AF FE */	rlwinm r5, r5, 0x15, 0x1f, 0x1f
/* 801616EC  98 A3 02 1A */	stb r5, 0x21a(r3)
/* 801616F0  80 A3 01 7C */	lwz r5, 0x17c(r3)
/* 801616F4  54 A5 30 32 */	slwi r5, r5, 6
/* 801616F8  7C A0 2A 14 */	add r5, r0, r5
/* 801616FC  80 A5 00 34 */	lwz r5, 0x34(r5)
/* 80161700  54 A5 AF FE */	rlwinm r5, r5, 0x15, 0x1f, 0x1f
/* 80161704  98 A3 02 1B */	stb r5, 0x21b(r3)
/* 80161708  80 A3 01 7C */	lwz r5, 0x17c(r3)
/* 8016170C  54 A5 30 32 */	slwi r5, r5, 6
/* 80161710  7C A0 2A 14 */	add r5, r0, r5
/* 80161714  80 A5 00 30 */	lwz r5, 0x30(r5)
/* 80161718  54 A5 AF FE */	rlwinm r5, r5, 0x15, 0x1f, 0x1f
/* 8016171C  98 A3 02 1A */	stb r5, 0x21a(r3)
/* 80161720  80 A3 01 7C */	lwz r5, 0x17c(r3)
/* 80161724  54 A5 30 32 */	slwi r5, r5, 6
/* 80161728  7C A0 2A 14 */	add r5, r0, r5
/* 8016172C  80 A5 00 34 */	lwz r5, 0x34(r5)
/* 80161730  54 A5 AF FE */	rlwinm r5, r5, 0x15, 0x1f, 0x1f
/* 80161734  98 A3 02 1B */	stb r5, 0x21b(r3)
/* 80161738  80 A3 01 7C */	lwz r5, 0x17c(r3)
/* 8016173C  54 A5 30 32 */	slwi r5, r5, 6
/* 80161740  7C A0 2A 14 */	add r5, r0, r5
/* 80161744  80 A5 00 30 */	lwz r5, 0x30(r5)
/* 80161748  54 A6 06 F6 */	rlwinm r6, r5, 0, 0x1b, 0x1b
/* 8016174C  30 A6 FF FF */	addic r5, r6, -1
/* 80161750  7C A5 31 10 */	subfe r5, r5, r6
/* 80161754  98 A3 02 1C */	stb r5, 0x21c(r3)
/* 80161758  80 A3 01 7C */	lwz r5, 0x17c(r3)
/* 8016175C  54 A5 30 32 */	slwi r5, r5, 6
/* 80161760  7C A0 2A 14 */	add r5, r0, r5
/* 80161764  80 A5 00 34 */	lwz r5, 0x34(r5)
/* 80161768  54 A5 E7 FE */	rlwinm r5, r5, 0x1c, 0x1f, 0x1f
/* 8016176C  98 A3 02 1D */	stb r5, 0x21d(r3)
/* 80161770  98 83 02 1F */	stb r4, 0x21f(r3)
/* 80161774  80 A3 01 7C */	lwz r5, 0x17c(r3)
/* 80161778  54 A5 30 32 */	slwi r5, r5, 6
/* 8016177C  7C A0 2A 14 */	add r5, r0, r5
/* 80161780  80 A5 00 30 */	lwz r5, 0x30(r5)
/* 80161784  54 A5 BF FE */	rlwinm r5, r5, 0x17, 0x1f, 0x1f
/* 80161788  98 A3 02 20 */	stb r5, 0x220(r3)
/* 8016178C  80 A3 01 7C */	lwz r5, 0x17c(r3)
/* 80161790  54 A5 30 32 */	slwi r5, r5, 6
/* 80161794  7C A0 2A 14 */	add r5, r0, r5
/* 80161798  80 05 00 34 */	lwz r0, 0x34(r5)
/* 8016179C  54 00 BF FE */	rlwinm r0, r0, 0x17, 0x1f, 0x1f
/* 801617A0  98 03 02 21 */	stb r0, 0x221(r3)
/* 801617A4  98 83 02 23 */	stb r4, 0x223(r3)
/* 801617A8  98 83 02 24 */	stb r4, 0x224(r3)
/* 801617AC  4E 80 00 20 */	blr 
