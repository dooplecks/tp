lbl_8016317C:
/* 8016317C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80163180  7C 08 02 A6 */	mflr r0
/* 80163184  90 01 00 24 */	stw r0, 0x24(r1)
/* 80163188  39 61 00 20 */	addi r11, r1, 0x20
/* 8016318C  48 1F F0 49 */	bl _savegpr_27
/* 80163190  7C 7E 1B 78 */	mr r30, r3
/* 80163194  3B 80 00 FF */	li r28, 0xff
/* 80163198  38 60 00 FF */	li r3, 0xff
/* 8016319C  90 7E 08 14 */	stw r3, 0x814(r30)
/* 801631A0  90 7E 08 18 */	stw r3, 0x818(r30)
/* 801631A4  38 00 00 00 */	li r0, 0
/* 801631A8  98 1E 08 22 */	stb r0, 0x822(r30)
/* 801631AC  90 1E 08 1C */	stw r0, 0x81c(r30)
/* 801631B0  98 7E 08 23 */	stb r3, 0x823(r30)
/* 801631B4  B0 7E 08 20 */	sth r3, 0x820(r30)
/* 801631B8  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 801631BC  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 801631C0  37 63 4E 20 */	addic. r27, r3, 0x4e20
/* 801631C4  41 82 01 64 */	beq lbl_80163328
/* 801631C8  7F 63 DB 78 */	mr r3, r27
/* 801631CC  81 9B 00 00 */	lwz r12, 0(r27)
/* 801631D0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801631D4  7D 89 03 A6 */	mtctr r12
/* 801631D8  4E 80 04 21 */	bctrl 
/* 801631DC  7C 7D 1B 78 */	mr r29, r3
/* 801631E0  7F 63 DB 78 */	mr r3, r27
/* 801631E4  81 9B 00 00 */	lwz r12, 0(r27)
/* 801631E8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801631EC  7D 89 03 A6 */	mtctr r12
/* 801631F0  4E 80 04 21 */	bctrl 
/* 801631F4  7C 7F 1B 78 */	mr r31, r3
/* 801631F8  7F 63 DB 78 */	mr r3, r27
/* 801631FC  81 9B 00 00 */	lwz r12, 0(r27)
/* 80163200  81 8C 00 BC */	lwz r12, 0xbc(r12)
/* 80163204  7D 89 03 A6 */	mtctr r12
/* 80163208  4E 80 04 21 */	bctrl 
/* 8016320C  28 03 00 00 */	cmplwi r3, 0
/* 80163210  41 82 00 08 */	beq lbl_80163218
/* 80163214  8B 83 00 08 */	lbz r28, 8(r3)
lbl_80163218:
/* 80163218  28 1D 00 00 */	cmplwi r29, 0
/* 8016321C  41 82 01 0C */	beq lbl_80163328
/* 80163220  2C 1C 00 00 */	cmpwi r28, 0
/* 80163224  41 80 01 04 */	blt lbl_80163328
/* 80163228  80 1D 00 00 */	lwz r0, 0(r29)
/* 8016322C  7C 1C 00 00 */	cmpw r28, r0
/* 80163230  40 80 00 F8 */	bge lbl_80163328
/* 80163234  93 9E 08 18 */	stw r28, 0x818(r30)
/* 80163238  80 7D 00 04 */	lwz r3, 4(r29)
/* 8016323C  1C 1C 00 18 */	mulli r0, r28, 0x18
/* 80163240  7C 83 02 14 */	add r4, r3, r0
/* 80163244  80 64 00 00 */	lwz r3, 0(r4)
/* 80163248  80 04 00 04 */	lwz r0, 4(r4)
/* 8016324C  90 7E 07 E8 */	stw r3, 0x7e8(r30)
/* 80163250  90 1E 07 EC */	stw r0, 0x7ec(r30)
/* 80163254  80 64 00 08 */	lwz r3, 8(r4)
/* 80163258  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8016325C  90 7E 07 F0 */	stw r3, 0x7f0(r30)
/* 80163260  90 1E 07 F4 */	stw r0, 0x7f4(r30)
/* 80163264  88 04 00 10 */	lbz r0, 0x10(r4)
/* 80163268  98 1E 07 F8 */	stb r0, 0x7f8(r30)
/* 8016326C  88 04 00 11 */	lbz r0, 0x11(r4)
/* 80163270  98 1E 07 F9 */	stb r0, 0x7f9(r30)
/* 80163274  88 04 00 12 */	lbz r0, 0x12(r4)
/* 80163278  98 1E 07 FA */	stb r0, 0x7fa(r30)
/* 8016327C  88 04 00 13 */	lbz r0, 0x13(r4)
/* 80163280  98 1E 07 FB */	stb r0, 0x7fb(r30)
/* 80163284  A0 04 00 14 */	lhz r0, 0x14(r4)
/* 80163288  B0 1E 07 FC */	sth r0, 0x7fc(r30)
/* 8016328C  A0 04 00 16 */	lhz r0, 0x16(r4)
/* 80163290  B0 1E 07 FE */	sth r0, 0x7fe(r30)
/* 80163294  A0 1E 07 FC */	lhz r0, 0x7fc(r30)
/* 80163298  54 00 97 BE */	rlwinm r0, r0, 0x12, 0x1e, 0x1f
/* 8016329C  98 1E 08 22 */	stb r0, 0x822(r30)
/* 801632A0  A0 7E 07 FC */	lhz r3, 0x7fc(r30)
/* 801632A4  54 60 04 A5 */	rlwinm. r0, r3, 0, 0x12, 0x12
/* 801632A8  41 82 00 10 */	beq lbl_801632B8
/* 801632AC  60 60 C0 00 */	ori r0, r3, 0xc000
/* 801632B0  B0 1E 07 FC */	sth r0, 0x7fc(r30)
/* 801632B4  48 00 00 0C */	b lbl_801632C0
lbl_801632B8:
/* 801632B8  54 60 04 BE */	clrlwi r0, r3, 0x12
/* 801632BC  B0 1E 07 FC */	sth r0, 0x7fc(r30)
lbl_801632C0:
/* 801632C0  88 9E 07 F8 */	lbz r4, 0x7f8(r30)
/* 801632C4  28 1F 00 00 */	cmplwi r31, 0
/* 801632C8  41 82 00 60 */	beq lbl_80163328
/* 801632CC  2C 04 00 00 */	cmpwi r4, 0
/* 801632D0  41 80 00 58 */	blt lbl_80163328
/* 801632D4  80 1F 00 00 */	lwz r0, 0(r31)
/* 801632D8  7C 04 00 00 */	cmpw r4, r0
/* 801632DC  40 80 00 4C */	bge lbl_80163328
/* 801632E0  90 9E 08 14 */	stw r4, 0x814(r30)
/* 801632E4  80 7F 00 04 */	lwz r3, 4(r31)
/* 801632E8  1C 04 00 14 */	mulli r0, r4, 0x14
/* 801632EC  7C 63 02 14 */	add r3, r3, r0
/* 801632F0  C0 03 00 00 */	lfs f0, 0(r3)
/* 801632F4  D0 1E 08 00 */	stfs f0, 0x800(r30)
/* 801632F8  C0 03 00 04 */	lfs f0, 4(r3)
/* 801632FC  D0 1E 08 04 */	stfs f0, 0x804(r30)
/* 80163300  C0 03 00 08 */	lfs f0, 8(r3)
/* 80163304  D0 1E 08 08 */	stfs f0, 0x808(r30)
/* 80163308  A8 03 00 0C */	lha r0, 0xc(r3)
/* 8016330C  B0 1E 08 0C */	sth r0, 0x80c(r30)
/* 80163310  A8 03 00 0E */	lha r0, 0xe(r3)
/* 80163314  B0 1E 08 0E */	sth r0, 0x80e(r30)
/* 80163318  A8 03 00 10 */	lha r0, 0x10(r3)
/* 8016331C  B0 1E 08 10 */	sth r0, 0x810(r30)
/* 80163320  A8 03 00 12 */	lha r0, 0x12(r3)
/* 80163324  B0 1E 08 12 */	sth r0, 0x812(r30)
lbl_80163328:
/* 80163328  39 61 00 20 */	addi r11, r1, 0x20
/* 8016332C  48 1F EE F5 */	bl _restgpr_27
/* 80163330  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80163334  7C 08 03 A6 */	mtlr r0
/* 80163338  38 21 00 20 */	addi r1, r1, 0x20
/* 8016333C  4E 80 00 20 */	blr 
