lbl_80193690:
/* 80193690  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80193694  7C 08 02 A6 */	mflr r0
/* 80193698  90 01 00 54 */	stw r0, 0x54(r1)
/* 8019369C  39 61 00 50 */	addi r11, r1, 0x50
/* 801936A0  48 1C EB 3D */	bl _savegpr_29
/* 801936A4  7C 7D 1B 78 */	mr r29, r3
/* 801936A8  7C 9E 23 78 */	mr r30, r4
/* 801936AC  3C 60 80 3A */	lis r3, __vt__12dDlst_base_c@ha /* 0x803A6F88@ha */
/* 801936B0  38 03 6F 88 */	addi r0, r3, __vt__12dDlst_base_c@l /* 0x803A6F88@l */
/* 801936B4  90 1D 00 00 */	stw r0, 0(r29)
/* 801936B8  3C 60 80 3C */	lis r3, __vt__11dMeterSub_c@ha /* 0x803BB6D4@ha */
/* 801936BC  38 03 B6 D4 */	addi r0, r3, __vt__11dMeterSub_c@l /* 0x803BB6D4@l */
/* 801936C0  90 1D 00 00 */	stw r0, 0(r29)
/* 801936C4  3C 60 80 3C */	lis r3, __vt__8dScope_c@ha /* 0x803BB6B4@ha */
/* 801936C8  38 03 B6 B4 */	addi r0, r3, __vt__8dScope_c@l /* 0x803BB6B4@l */
/* 801936CC  90 1D 00 00 */	stw r0, 0(r29)
/* 801936D0  38 7D 00 48 */	addi r3, r29, 0x48
/* 801936D4  3C 80 80 19 */	lis r4, __ct__Q28JUtility6TColorFv@ha /* 0x80193960@ha */
/* 801936D8  38 84 39 60 */	addi r4, r4, __ct__Q28JUtility6TColorFv@l /* 0x80193960@l */
/* 801936DC  38 A0 00 00 */	li r5, 0
/* 801936E0  38 C0 00 04 */	li r6, 4
/* 801936E4  38 E0 00 02 */	li r7, 2
/* 801936E8  48 1C E6 79 */	bl __construct_array
/* 801936EC  38 7D 00 50 */	addi r3, r29, 0x50
/* 801936F0  3C 80 80 19 */	lis r4, __ct__Q28JUtility6TColorFv@ha /* 0x80193960@ha */
/* 801936F4  38 84 39 60 */	addi r4, r4, __ct__Q28JUtility6TColorFv@l /* 0x80193960@l */
/* 801936F8  38 A0 00 00 */	li r5, 0
/* 801936FC  38 C0 00 04 */	li r6, 4
/* 80193700  38 E0 00 02 */	li r7, 2
/* 80193704  48 1C E6 5D */	bl __construct_array
/* 80193708  38 00 FF FF */	li r0, -1
/* 8019370C  90 1D 00 58 */	stw r0, 0x58(r29)
/* 80193710  90 1D 00 5C */	stw r0, 0x5c(r29)
/* 80193714  9B DD 00 8D */	stb r30, 0x8d(r29)
/* 80193718  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 8019371C  3B E3 61 C0 */	addi r31, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80193720  80 7F 5D 30 */	lwz r3, 0x5d30(r31)
/* 80193724  3C 80 54 49 */	lis r4, 0x5449 /* 0x54494D47@ha */
/* 80193728  38 84 4D 47 */	addi r4, r4, 0x4D47 /* 0x54494D47@l */
/* 8019372C  3C A0 80 39 */	lis r5, d_d_scope__stringBase0@ha /* 0x803949F0@ha */
/* 80193730  38 A5 49 F0 */	addi r5, r5, d_d_scope__stringBase0@l /* 0x803949F0@l */
/* 80193734  81 83 00 00 */	lwz r12, 0(r3)
/* 80193738  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8019373C  7D 89 03 A6 */	mtctr r12
/* 80193740  4E 80 04 21 */	bctrl 
/* 80193744  7C 7E 1B 78 */	mr r30, r3
/* 80193748  38 80 00 00 */	li r4, 0
/* 8019374C  90 9D 00 04 */	stw r4, 4(r29)
/* 80193750  90 9D 00 0C */	stw r4, 0xc(r29)
/* 80193754  90 9D 00 08 */	stw r4, 8(r29)
/* 80193758  90 9D 00 10 */	stw r4, 0x10(r29)
/* 8019375C  7C 83 23 78 */	mr r3, r4
/* 80193760  38 00 00 03 */	li r0, 3
/* 80193764  7C 09 03 A6 */	mtctr r0
lbl_80193768:
/* 80193768  38 03 00 14 */	addi r0, r3, 0x14
/* 8019376C  7C 9D 01 2E */	stwx r4, r29, r0
/* 80193770  38 63 00 04 */	addi r3, r3, 4
/* 80193774  42 00 FF F4 */	bdnz lbl_80193768
/* 80193778  38 E0 00 00 */	li r7, 0
/* 8019377C  38 60 00 00 */	li r3, 0
/* 80193780  38 C0 00 00 */	li r6, 0
lbl_80193784:
/* 80193784  38 80 00 00 */	li r4, 0
/* 80193788  38 00 00 02 */	li r0, 2
/* 8019378C  7C 09 03 A6 */	mtctr r0
lbl_80193790:
/* 80193790  7C BD 22 14 */	add r5, r29, r4
/* 80193794  38 05 00 20 */	addi r0, r5, 0x20
/* 80193798  7C C3 01 2E */	stwx r6, r3, r0
/* 8019379C  38 84 00 04 */	addi r4, r4, 4
/* 801937A0  42 00 FF F0 */	bdnz lbl_80193790
/* 801937A4  38 E7 00 01 */	addi r7, r7, 1
/* 801937A8  2C 07 00 03 */	cmpwi r7, 3
/* 801937AC  38 63 00 08 */	addi r3, r3, 8
/* 801937B0  41 80 FF D4 */	blt lbl_80193784
/* 801937B4  38 60 01 50 */	li r3, 0x150
/* 801937B8  48 13 B4 95 */	bl __nw__FUl
/* 801937BC  7C 60 1B 79 */	or. r0, r3, r3
/* 801937C0  41 82 00 10 */	beq lbl_801937D0
/* 801937C4  7F C4 F3 78 */	mr r4, r30
/* 801937C8  48 16 8F 41 */	bl __ct__10J2DPictureFPC7ResTIMG
/* 801937CC  7C 60 1B 78 */	mr r0, r3
lbl_801937D0:
/* 801937D0  90 1D 00 38 */	stw r0, 0x38(r29)
/* 801937D4  38 60 00 00 */	li r3, 0
/* 801937D8  98 61 00 18 */	stb r3, 0x18(r1)
/* 801937DC  98 61 00 19 */	stb r3, 0x19(r1)
/* 801937E0  98 61 00 1A */	stb r3, 0x1a(r1)
/* 801937E4  38 00 00 FF */	li r0, 0xff
/* 801937E8  98 01 00 1B */	stb r0, 0x1b(r1)
/* 801937EC  80 01 00 18 */	lwz r0, 0x18(r1)
/* 801937F0  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801937F4  98 61 00 20 */	stb r3, 0x20(r1)
/* 801937F8  98 61 00 21 */	stb r3, 0x21(r1)
/* 801937FC  98 61 00 22 */	stb r3, 0x22(r1)
/* 80193800  98 61 00 23 */	stb r3, 0x23(r1)
/* 80193804  80 01 00 20 */	lwz r0, 0x20(r1)
/* 80193808  90 01 00 24 */	stw r0, 0x24(r1)
/* 8019380C  80 7D 00 38 */	lwz r3, 0x38(r29)
/* 80193810  38 81 00 24 */	addi r4, r1, 0x24
/* 80193814  38 A1 00 1C */	addi r5, r1, 0x1c
/* 80193818  81 83 00 00 */	lwz r12, 0(r3)
/* 8019381C  81 8C 01 30 */	lwz r12, 0x130(r12)
/* 80193820  7D 89 03 A6 */	mtctr r12
/* 80193824  4E 80 04 21 */	bctrl 
/* 80193828  A0 1E 00 02 */	lhz r0, 2(r30)
/* 8019382C  C8 22 A0 18 */	lfd f1, lit_3759(r2)
/* 80193830  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80193834  3C 60 43 30 */	lis r3, 0x4330
/* 80193838  90 61 00 28 */	stw r3, 0x28(r1)
/* 8019383C  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 80193840  EC 00 08 28 */	fsubs f0, f0, f1
/* 80193844  D0 1D 00 78 */	stfs f0, 0x78(r29)
/* 80193848  A0 1E 00 04 */	lhz r0, 4(r30)
/* 8019384C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80193850  90 61 00 30 */	stw r3, 0x30(r1)
/* 80193854  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 80193858  EC 00 08 28 */	fsubs f0, f0, f1
/* 8019385C  D0 1D 00 7C */	stfs f0, 0x7c(r29)
/* 80193860  80 7F 5D 30 */	lwz r3, 0x5d30(r31)
/* 80193864  3C 80 54 49 */	lis r4, 0x5449 /* 0x54494D47@ha */
/* 80193868  38 84 4D 47 */	addi r4, r4, 0x4D47 /* 0x54494D47@l */
/* 8019386C  3C A0 80 39 */	lis r5, d_d_scope__stringBase0@ha /* 0x803949F0@ha */
/* 80193870  38 A5 49 F0 */	addi r5, r5, d_d_scope__stringBase0@l /* 0x803949F0@l */
/* 80193874  38 A5 00 0C */	addi r5, r5, 0xc
/* 80193878  81 83 00 00 */	lwz r12, 0(r3)
/* 8019387C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80193880  7D 89 03 A6 */	mtctr r12
/* 80193884  4E 80 04 21 */	bctrl 
/* 80193888  7C 7E 1B 78 */	mr r30, r3
/* 8019388C  38 60 01 50 */	li r3, 0x150
/* 80193890  48 13 B3 BD */	bl __nw__FUl
/* 80193894  7C 60 1B 79 */	or. r0, r3, r3
/* 80193898  41 82 00 10 */	beq lbl_801938A8
/* 8019389C  7F C4 F3 78 */	mr r4, r30
/* 801938A0  48 16 8E 69 */	bl __ct__10J2DPictureFPC7ResTIMG
/* 801938A4  7C 60 1B 78 */	mr r0, r3
lbl_801938A8:
/* 801938A8  90 1D 00 3C */	stw r0, 0x3c(r29)
/* 801938AC  38 60 00 00 */	li r3, 0
/* 801938B0  98 61 00 08 */	stb r3, 8(r1)
/* 801938B4  98 61 00 09 */	stb r3, 9(r1)
/* 801938B8  98 61 00 0A */	stb r3, 0xa(r1)
/* 801938BC  38 00 00 FF */	li r0, 0xff
/* 801938C0  98 01 00 0B */	stb r0, 0xb(r1)
/* 801938C4  80 01 00 08 */	lwz r0, 8(r1)
/* 801938C8  90 01 00 0C */	stw r0, 0xc(r1)
/* 801938CC  98 61 00 10 */	stb r3, 0x10(r1)
/* 801938D0  98 61 00 11 */	stb r3, 0x11(r1)
/* 801938D4  98 61 00 12 */	stb r3, 0x12(r1)
/* 801938D8  98 61 00 13 */	stb r3, 0x13(r1)
/* 801938DC  80 01 00 10 */	lwz r0, 0x10(r1)
/* 801938E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801938E4  80 7D 00 3C */	lwz r3, 0x3c(r29)
/* 801938E8  38 81 00 14 */	addi r4, r1, 0x14
/* 801938EC  38 A1 00 0C */	addi r5, r1, 0xc
/* 801938F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801938F4  81 8C 01 30 */	lwz r12, 0x130(r12)
/* 801938F8  7D 89 03 A6 */	mtctr r12
/* 801938FC  4E 80 04 21 */	bctrl 
/* 80193900  C0 02 A0 10 */	lfs f0, lit_3756(r2)
/* 80193904  D0 1D 00 80 */	stfs f0, 0x80(r29)
/* 80193908  C0 02 A0 14 */	lfs f0, lit_3757(r2)
/* 8019390C  D0 1D 00 84 */	stfs f0, 0x84(r29)
/* 80193910  38 00 00 00 */	li r0, 0
/* 80193914  B0 1D 00 88 */	sth r0, 0x88(r29)
/* 80193918  B0 1D 00 8A */	sth r0, 0x8a(r29)
/* 8019391C  98 1D 00 8C */	stb r0, 0x8c(r29)
/* 80193920  98 1D 00 8E */	stb r0, 0x8e(r29)
/* 80193924  7F A3 EB 78 */	mr r3, r29
/* 80193928  88 1D 00 8C */	lbz r0, 0x8c(r29)
/* 8019392C  1C A0 00 0C */	mulli r5, r0, 0xc
/* 80193930  3C 80 80 3C */	lis r4, init_process@ha /* 0x803BB648@ha */
/* 80193934  38 04 B6 48 */	addi r0, r4, init_process@l /* 0x803BB648@l */
/* 80193938  7D 80 2A 14 */	add r12, r0, r5
/* 8019393C  48 1C E7 49 */	bl __ptmf_scall
/* 80193940  60 00 00 00 */	nop 
/* 80193944  7F A3 EB 78 */	mr r3, r29
/* 80193948  39 61 00 50 */	addi r11, r1, 0x50
/* 8019394C  48 1C E8 DD */	bl _restgpr_29
/* 80193950  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80193954  7C 08 03 A6 */	mtlr r0
/* 80193958  38 21 00 50 */	addi r1, r1, 0x50
/* 8019395C  4E 80 00 20 */	blr 
