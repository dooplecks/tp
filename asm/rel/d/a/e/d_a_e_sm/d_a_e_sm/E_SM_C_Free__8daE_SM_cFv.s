lbl_80795244:
/* 80795244  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80795248  7C 08 02 A6 */	mflr r0
/* 8079524C  90 01 00 54 */	stw r0, 0x54(r1)
/* 80795250  39 61 00 50 */	addi r11, r1, 0x50
/* 80795254  4B BC CF 89 */	bl _savegpr_29
/* 80795258  7C 7E 1B 78 */	mr r30, r3
/* 8079525C  3C 80 80 7A */	lis r4, lit_3920@ha /* 0x807985E0@ha */
/* 80795260  3B E4 85 E0 */	addi r31, r4, lit_3920@l /* 0x807985E0@l */
/* 80795264  A8 03 06 B2 */	lha r0, 0x6b2(r3)
/* 80795268  2C 00 00 01 */	cmpwi r0, 1
/* 8079526C  41 82 02 A8 */	beq lbl_80795514
/* 80795270  40 80 02 A8 */	bge lbl_80795518
/* 80795274  2C 00 00 00 */	cmpwi r0, 0
/* 80795278  40 80 00 08 */	bge lbl_80795280
/* 8079527C  48 00 02 9C */	b lbl_80795518
lbl_80795280:
/* 80795280  88 1E 06 8C */	lbz r0, 0x68c(r30)
/* 80795284  28 00 00 00 */	cmplwi r0, 0
/* 80795288  41 82 00 B4 */	beq lbl_8079533C
/* 8079528C  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80795290  3B A3 61 C0 */	addi r29, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80795294  80 7D 5D 3C */	lwz r3, 0x5d3c(r29)
/* 80795298  38 00 00 FF */	li r0, 0xff
/* 8079529C  90 01 00 08 */	stw r0, 8(r1)
/* 807952A0  38 80 00 00 */	li r4, 0
/* 807952A4  90 81 00 0C */	stw r4, 0xc(r1)
/* 807952A8  38 00 FF FF */	li r0, -1
/* 807952AC  90 01 00 10 */	stw r0, 0x10(r1)
/* 807952B0  90 81 00 14 */	stw r4, 0x14(r1)
/* 807952B4  90 81 00 18 */	stw r4, 0x18(r1)
/* 807952B8  90 81 00 1C */	stw r4, 0x1c(r1)
/* 807952BC  80 9E 0A 18 */	lwz r4, 0xa18(r30)
/* 807952C0  38 A0 00 00 */	li r5, 0
/* 807952C4  3C C0 00 01 */	lis r6, 0x0001 /* 0x00008784@ha */
/* 807952C8  38 C6 87 84 */	addi r6, r6, 0x8784 /* 0x00008784@l */
/* 807952CC  38 FE 04 D0 */	addi r7, r30, 0x4d0
/* 807952D0  39 1E 01 0C */	addi r8, r30, 0x10c
/* 807952D4  39 3E 04 DC */	addi r9, r30, 0x4dc
/* 807952D8  39 5E 04 EC */	addi r10, r30, 0x4ec
/* 807952DC  C0 3F 00 08 */	lfs f1, 8(r31)
/* 807952E0  4B 8B 81 ED */	bl set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf
/* 807952E4  90 7E 0A 18 */	stw r3, 0xa18(r30)
/* 807952E8  80 7D 5D 3C */	lwz r3, 0x5d3c(r29)
/* 807952EC  38 00 00 FF */	li r0, 0xff
/* 807952F0  90 01 00 08 */	stw r0, 8(r1)
/* 807952F4  38 80 00 00 */	li r4, 0
/* 807952F8  90 81 00 0C */	stw r4, 0xc(r1)
/* 807952FC  38 00 FF FF */	li r0, -1
/* 80795300  90 01 00 10 */	stw r0, 0x10(r1)
/* 80795304  90 81 00 14 */	stw r4, 0x14(r1)
/* 80795308  90 81 00 18 */	stw r4, 0x18(r1)
/* 8079530C  90 81 00 1C */	stw r4, 0x1c(r1)
/* 80795310  80 9E 0A 1C */	lwz r4, 0xa1c(r30)
/* 80795314  38 A0 00 00 */	li r5, 0
/* 80795318  3C C0 00 01 */	lis r6, 0x0001 /* 0x00008788@ha */
/* 8079531C  38 C6 87 88 */	addi r6, r6, 0x8788 /* 0x00008788@l */
/* 80795320  38 FE 04 D0 */	addi r7, r30, 0x4d0
/* 80795324  39 1E 01 0C */	addi r8, r30, 0x10c
/* 80795328  39 3E 04 DC */	addi r9, r30, 0x4dc
/* 8079532C  39 5E 04 EC */	addi r10, r30, 0x4ec
/* 80795330  C0 3F 00 08 */	lfs f1, 8(r31)
/* 80795334  4B 8B 81 99 */	bl set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf
/* 80795338  90 7E 0A 1C */	stw r3, 0xa1c(r30)
lbl_8079533C:
/* 8079533C  38 00 00 01 */	li r0, 1
/* 80795340  98 1E 09 C4 */	stb r0, 0x9c4(r30)
/* 80795344  80 7E 05 B4 */	lwz r3, 0x5b4(r30)
/* 80795348  38 63 00 0C */	addi r3, r3, 0xc
/* 8079534C  C0 3F 01 2C */	lfs f1, 0x12c(r31)
/* 80795350  4B B9 30 DD */	bl checkPass__12J3DFrameCtrlFf
/* 80795354  2C 03 00 00 */	cmpwi r3, 0
/* 80795358  41 82 00 6C */	beq lbl_807953C4
/* 8079535C  80 1E 0A 8C */	lwz r0, 0xa8c(r30)
/* 80795360  54 00 05 29 */	rlwinm. r0, r0, 0, 0x14, 0x14
/* 80795364  41 82 00 34 */	beq lbl_80795398
/* 80795368  3C 60 00 06 */	lis r3, 0x0006 /* 0x0006002E@ha */
/* 8079536C  38 03 00 2E */	addi r0, r3, 0x002E /* 0x0006002E@l */
/* 80795370  90 01 00 30 */	stw r0, 0x30(r1)
/* 80795374  38 7E 05 BC */	addi r3, r30, 0x5bc
/* 80795378  38 81 00 30 */	addi r4, r1, 0x30
/* 8079537C  38 A0 00 00 */	li r5, 0
/* 80795380  38 C0 FF FF */	li r6, -1
/* 80795384  81 9E 05 BC */	lwz r12, 0x5bc(r30)
/* 80795388  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8079538C  7D 89 03 A6 */	mtctr r12
/* 80795390  4E 80 04 21 */	bctrl 
/* 80795394  48 00 00 30 */	b lbl_807953C4
lbl_80795398:
/* 80795398  3C 60 00 06 */	lis r3, 0x0006 /* 0x0006002B@ha */
/* 8079539C  38 03 00 2B */	addi r0, r3, 0x002B /* 0x0006002B@l */
/* 807953A0  90 01 00 2C */	stw r0, 0x2c(r1)
/* 807953A4  38 7E 05 BC */	addi r3, r30, 0x5bc
/* 807953A8  38 81 00 2C */	addi r4, r1, 0x2c
/* 807953AC  38 A0 00 00 */	li r5, 0
/* 807953B0  38 C0 FF FF */	li r6, -1
/* 807953B4  81 9E 05 BC */	lwz r12, 0x5bc(r30)
/* 807953B8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 807953BC  7D 89 03 A6 */	mtctr r12
/* 807953C0  4E 80 04 21 */	bctrl 
lbl_807953C4:
/* 807953C4  80 7E 05 B4 */	lwz r3, 0x5b4(r30)
/* 807953C8  38 63 00 0C */	addi r3, r3, 0xc
/* 807953CC  C0 3F 01 30 */	lfs f1, 0x130(r31)
/* 807953D0  4B B9 30 5D */	bl checkPass__12J3DFrameCtrlFf
/* 807953D4  2C 03 00 00 */	cmpwi r3, 0
/* 807953D8  41 82 00 6C */	beq lbl_80795444
/* 807953DC  80 1E 0A 8C */	lwz r0, 0xa8c(r30)
/* 807953E0  54 00 05 29 */	rlwinm. r0, r0, 0, 0x14, 0x14
/* 807953E4  41 82 00 34 */	beq lbl_80795418
/* 807953E8  3C 60 00 07 */	lis r3, 0x0007 /* 0x000702D0@ha */
/* 807953EC  38 03 02 D0 */	addi r0, r3, 0x02D0 /* 0x000702D0@l */
/* 807953F0  90 01 00 28 */	stw r0, 0x28(r1)
/* 807953F4  38 7E 05 BC */	addi r3, r30, 0x5bc
/* 807953F8  38 81 00 28 */	addi r4, r1, 0x28
/* 807953FC  38 A0 00 00 */	li r5, 0
/* 80795400  38 C0 FF FF */	li r6, -1
/* 80795404  81 9E 05 BC */	lwz r12, 0x5bc(r30)
/* 80795408  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8079540C  7D 89 03 A6 */	mtctr r12
/* 80795410  4E 80 04 21 */	bctrl 
/* 80795414  48 00 00 30 */	b lbl_80795444
lbl_80795418:
/* 80795418  3C 60 00 07 */	lis r3, 0x0007 /* 0x000702CF@ha */
/* 8079541C  38 03 02 CF */	addi r0, r3, 0x02CF /* 0x000702CF@l */
/* 80795420  90 01 00 24 */	stw r0, 0x24(r1)
/* 80795424  38 7E 05 BC */	addi r3, r30, 0x5bc
/* 80795428  38 81 00 24 */	addi r4, r1, 0x24
/* 8079542C  38 A0 00 00 */	li r5, 0
/* 80795430  38 C0 FF FF */	li r6, -1
/* 80795434  81 9E 05 BC */	lwz r12, 0x5bc(r30)
/* 80795438  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8079543C  7D 89 03 A6 */	mtctr r12
/* 80795440  4E 80 04 21 */	bctrl 
lbl_80795444:
/* 80795444  80 7E 05 B4 */	lwz r3, 0x5b4(r30)
/* 80795448  38 63 00 0C */	addi r3, r3, 0xc
/* 8079544C  C0 3F 01 34 */	lfs f1, 0x134(r31)
/* 80795450  4B B9 2F DD */	bl checkPass__12J3DFrameCtrlFf
/* 80795454  2C 03 00 00 */	cmpwi r3, 0
/* 80795458  41 82 00 2C */	beq lbl_80795484
/* 8079545C  3C 60 00 07 */	lis r3, 0x0007 /* 0x000702D3@ha */
/* 80795460  38 03 02 D3 */	addi r0, r3, 0x02D3 /* 0x000702D3@l */
/* 80795464  90 01 00 20 */	stw r0, 0x20(r1)
/* 80795468  38 7E 05 BC */	addi r3, r30, 0x5bc
/* 8079546C  38 81 00 20 */	addi r4, r1, 0x20
/* 80795470  38 A0 FF FF */	li r5, -1
/* 80795474  81 9E 05 BC */	lwz r12, 0x5bc(r30)
/* 80795478  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8079547C  7D 89 03 A6 */	mtctr r12
/* 80795480  4E 80 04 21 */	bctrl 
lbl_80795484:
/* 80795484  80 7E 05 B4 */	lwz r3, 0x5b4(r30)
/* 80795488  38 80 00 01 */	li r4, 1
/* 8079548C  88 03 00 11 */	lbz r0, 0x11(r3)
/* 80795490  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80795494  40 82 00 18 */	bne lbl_807954AC
/* 80795498  C0 3F 00 04 */	lfs f1, 4(r31)
/* 8079549C  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 807954A0  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 807954A4  41 82 00 08 */	beq lbl_807954AC
/* 807954A8  38 80 00 00 */	li r4, 0
lbl_807954AC:
/* 807954AC  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 807954B0  41 82 00 68 */	beq lbl_80795518
/* 807954B4  3C 60 D8 FC */	lis r3, 0xD8FC /* 0xD8FBFDFF@ha */
/* 807954B8  38 03 FD FF */	addi r0, r3, 0xFDFF /* 0xD8FBFDFF@l */
/* 807954BC  90 1E 0E F0 */	stw r0, 0xef0(r30)
/* 807954C0  80 1E 0E F4 */	lwz r0, 0xef4(r30)
/* 807954C4  60 00 00 01 */	ori r0, r0, 1
/* 807954C8  90 1E 0E F4 */	stw r0, 0xef4(r30)
/* 807954CC  80 1E 0E F4 */	lwz r0, 0xef4(r30)
/* 807954D0  60 00 04 00 */	ori r0, r0, 0x400
/* 807954D4  90 1E 0E F4 */	stw r0, 0xef4(r30)
/* 807954D8  80 1E 0E F4 */	lwz r0, 0xef4(r30)
/* 807954DC  60 00 04 00 */	ori r0, r0, 0x400
/* 807954E0  90 1E 0E F4 */	stw r0, 0xef4(r30)
/* 807954E4  38 00 00 01 */	li r0, 1
/* 807954E8  B0 1E 06 B2 */	sth r0, 0x6b2(r30)
/* 807954EC  38 00 00 00 */	li r0, 0
/* 807954F0  B0 1E 06 B4 */	sth r0, 0x6b4(r30)
/* 807954F4  B0 1E 06 B6 */	sth r0, 0x6b6(r30)
/* 807954F8  3C 60 80 7A */	lis r3, data_807989E4@ha /* 0x807989E4@ha */
/* 807954FC  38 63 89 E4 */	addi r3, r3, data_807989E4@l /* 0x807989E4@l */
/* 80795500  A8 63 00 00 */	lha r3, 0(r3)
/* 80795504  3C 63 00 01 */	addis r3, r3, 1
/* 80795508  38 03 80 00 */	addi r0, r3, -32768
/* 8079550C  B0 1E 06 D8 */	sth r0, 0x6d8(r30)
/* 80795510  48 00 00 08 */	b lbl_80795518
lbl_80795514:
/* 80795514  4B FF FC D9 */	bl E_SM_C_Escape__8daE_SM_cFv
lbl_80795518:
/* 80795518  39 61 00 50 */	addi r11, r1, 0x50
/* 8079551C  4B BC CD 0D */	bl _restgpr_29
/* 80795520  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80795524  7C 08 03 A6 */	mtlr r0
/* 80795528  38 21 00 50 */	addi r1, r1, 0x50
/* 8079552C  4E 80 00 20 */	blr 
