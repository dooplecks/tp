lbl_802535AC:
/* 802535AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802535B0  7C 08 02 A6 */	mflr r0
/* 802535B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802535B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802535BC  7C 7F 1B 78 */	mr r31, r3
/* 802535C0  38 00 00 00 */	li r0, 0
/* 802535C4  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 802535C8  38 84 61 C0 */	addi r4, r4, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 802535CC  98 04 5D 44 */	stb r0, 0x5d44(r4)
/* 802535D0  88 03 01 1D */	lbz r0, 0x11d(r3)
/* 802535D4  7C 00 07 75 */	extsb. r0, r0
/* 802535D8  40 82 00 44 */	bne lbl_8025361C
/* 802535DC  4B DC AF 29 */	bl fopOvlpM_IsOutReq__FP18overlap_task_class
/* 802535E0  2C 03 00 00 */	cmpwi r3, 0
/* 802535E4  41 82 00 38 */	beq lbl_8025361C
/* 802535E8  4B DC AE DD */	bl fopOvlpM_SceneIsStart__Fv
/* 802535EC  3C 60 80 3C */	lis r3, lit_3871@ha /* 0x803C2D88@ha */
/* 802535F0  38 83 2D 88 */	addi r4, r3, lit_3871@l /* 0x803C2D88@l */
/* 802535F4  80 64 00 00 */	lwz r3, 0(r4)
/* 802535F8  80 04 00 04 */	lwz r0, 4(r4)
/* 802535FC  90 7F 00 CC */	stw r3, 0xcc(r31)
/* 80253600  90 1F 00 D0 */	stw r0, 0xd0(r31)
/* 80253604  80 04 00 08 */	lwz r0, 8(r4)
/* 80253608  90 1F 00 D4 */	stw r0, 0xd4(r31)
/* 8025360C  38 00 C0 00 */	li r0, -16384
/* 80253610  B0 1F 01 10 */	sth r0, 0x110(r31)
/* 80253614  38 00 00 01 */	li r0, 1
/* 80253618  98 1F 01 1D */	stb r0, 0x11d(r31)
lbl_8025361C:
/* 8025361C  88 7F 01 1D */	lbz r3, 0x11d(r31)
/* 80253620  7C 60 07 75 */	extsb. r0, r3
/* 80253624  40 80 00 4C */	bge lbl_80253670
/* 80253628  38 03 00 01 */	addi r0, r3, 1
/* 8025362C  98 1F 01 1D */	stb r0, 0x11d(r31)
/* 80253630  7C 00 07 75 */	extsb. r0, r0
/* 80253634  40 82 00 44 */	bne lbl_80253678
/* 80253638  80 6D 8C 40 */	lwz r3, sManager__10JFWDisplay(r13)
/* 8025363C  80 63 00 04 */	lwz r3, 4(r3)
/* 80253640  28 03 00 00 */	cmplwi r3, 0
/* 80253644  41 82 00 18 */	beq lbl_8025365C
/* 80253648  38 80 00 4B */	li r4, 0x4b
/* 8025364C  81 83 00 00 */	lwz r12, 0(r3)
/* 80253650  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80253654  7D 89 03 A6 */	mtctr r12
/* 80253658  4E 80 04 21 */	bctrl 
lbl_8025365C:
/* 8025365C  38 00 00 5A */	li r0, 0x5a
/* 80253660  98 1F 01 1D */	stb r0, 0x11d(r31)
/* 80253664  38 60 00 00 */	li r3, 0
/* 80253668  4B DB 3B BD */	bl mDoAud_setFadeOutStart__FUc
/* 8025366C  48 00 00 0C */	b lbl_80253678
lbl_80253670:
/* 80253670  38 7F 01 1D */	addi r3, r31, 0x11d
/* 80253674  4B FF F7 FD */	bl func_80252E70
lbl_80253678:
/* 80253678  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025367C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80253680  7C 08 03 A6 */	mtlr r0
/* 80253684  38 21 00 10 */	addi r1, r1, 0x10
/* 80253688  4E 80 00 20 */	blr 
