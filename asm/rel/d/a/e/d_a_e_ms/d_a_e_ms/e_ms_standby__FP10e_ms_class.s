lbl_80727834:
/* 80727834  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80727838  7C 08 02 A6 */	mflr r0
/* 8072783C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80727840  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80727844  7C 7F 1B 78 */	mr r31, r3
/* 80727848  38 00 00 06 */	li r0, 6
/* 8072784C  B0 03 06 8E */	sth r0, 0x68e(r3)
/* 80727850  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80727854  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80727858  80 9F 05 B8 */	lwz r4, 0x5b8(r31)
/* 8072785C  88 1F 04 E2 */	lbz r0, 0x4e2(r31)
/* 80727860  7C 05 07 74 */	extsb r5, r0
/* 80727864  4B 90 DA FD */	bl isSwitch__10dSv_info_cCFii
/* 80727868  2C 03 00 00 */	cmpwi r3, 0
/* 8072786C  41 82 00 14 */	beq lbl_80727880
/* 80727870  38 00 00 00 */	li r0, 0
/* 80727874  98 1F 0B A5 */	stb r0, 0xba5(r31)
/* 80727878  B0 1F 06 7E */	sth r0, 0x67e(r31)
/* 8072787C  B0 1F 05 B4 */	sth r0, 0x5b4(r31)
lbl_80727880:
/* 80727880  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80727884  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80727888  7C 08 03 A6 */	mtlr r0
/* 8072788C  38 21 00 10 */	addi r1, r1, 0x10
/* 80727890  4E 80 00 20 */	blr 
