lbl_80697294:
/* 80697294  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80697298  7C 08 02 A6 */	mflr r0
/* 8069729C  90 01 00 34 */	stw r0, 0x34(r1)
/* 806972A0  39 61 00 30 */	addi r11, r1, 0x30
/* 806972A4  4B CC AF 2D */	bl _savegpr_26
/* 806972A8  7C 7A 1B 78 */	mr r26, r3
/* 806972AC  3C 60 80 69 */	lis r3, lit_1109@ha /* 0x80697E30@ha */
/* 806972B0  3B A3 7E 30 */	addi r29, r3, lit_1109@l /* 0x80697E30@l */
/* 806972B4  3C 60 80 69 */	lis r3, lit_3829@ha /* 0x80697CA0@ha */
/* 806972B8  3B C3 7C A0 */	addi r30, r3, lit_3829@l /* 0x80697CA0@l */
/* 806972BC  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 806972C0  3B E3 61 C0 */	addi r31, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 806972C4  83 9F 5D AC */	lwz r28, 0x5dac(r31)
/* 806972C8  7F 83 E3 78 */	mr r3, r28
/* 806972CC  81 9C 06 28 */	lwz r12, 0x628(r28)
/* 806972D0  81 8C 02 78 */	lwz r12, 0x278(r12)
/* 806972D4  7D 89 03 A6 */	mtctr r12
/* 806972D8  4E 80 04 21 */	bctrl 
/* 806972DC  2C 03 00 00 */	cmpwi r3, 0
/* 806972E0  40 82 00 30 */	bne lbl_80697310
/* 806972E4  80 7F 5D AC */	lwz r3, 0x5dac(r31)
/* 806972E8  A0 03 00 F8 */	lhz r0, 0xf8(r3)
/* 806972EC  28 00 00 03 */	cmplwi r0, 3
/* 806972F0  41 82 00 20 */	beq lbl_80697310
/* 806972F4  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 806972F8  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 806972FC  88 03 4F AD */	lbz r0, 0x4fad(r3)
/* 80697300  28 00 00 00 */	cmplwi r0, 0
/* 80697304  41 82 00 0C */	beq lbl_80697310
/* 80697308  38 60 00 01 */	li r3, 1
/* 8069730C  48 00 02 7C */	b lbl_80697588
lbl_80697310:
/* 80697310  A8 7A 05 80 */	lha r3, 0x580(r26)
/* 80697314  38 03 00 01 */	addi r0, r3, 1
/* 80697318  B0 1A 05 80 */	sth r0, 0x580(r26)
/* 8069731C  38 00 00 00 */	li r0, 0
/* 80697320  98 1D 00 5D */	stb r0, 0x5d(r29)
/* 80697324  3C 60 80 69 */	lis r3, s_boom_sub__FPvPv@ha /* 0x80697160@ha */
/* 80697328  38 63 71 60 */	addi r3, r3, s_boom_sub__FPvPv@l /* 0x80697160@l */
/* 8069732C  7F 44 D3 78 */	mr r4, r26
/* 80697330  4B 98 A0 09 */	bl fpcEx_Search__FPFPvPv_PvPv
/* 80697334  3C 60 80 69 */	lis r3, s_bomb_sub__FPvPv@ha /* 0x806971EC@ha */
/* 80697338  38 63 71 EC */	addi r3, r3, s_bomb_sub__FPvPv@l /* 0x806971EC@l */
/* 8069733C  7F 44 D3 78 */	mr r4, r26
/* 80697340  4B 98 9F F9 */	bl fpcEx_Search__FPFPvPv_PvPv
/* 80697344  80 7F 5D AC */	lwz r3, 0x5dac(r31)
/* 80697348  81 83 06 28 */	lwz r12, 0x628(r3)
/* 8069734C  81 8C 01 98 */	lwz r12, 0x198(r12)
/* 80697350  7D 89 03 A6 */	mtctr r12
/* 80697354  4E 80 04 21 */	bctrl 
/* 80697358  28 03 00 00 */	cmplwi r3, 0
/* 8069735C  41 82 00 4C */	beq lbl_806973A8
/* 80697360  80 7F 5D AC */	lwz r3, 0x5dac(r31)
/* 80697364  81 83 06 28 */	lwz r12, 0x628(r3)
/* 80697368  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 8069736C  7D 89 03 A6 */	mtctr r12
/* 80697370  4E 80 04 21 */	bctrl 
/* 80697374  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80697378  41 82 00 30 */	beq lbl_806973A8
/* 8069737C  38 00 00 02 */	li r0, 2
/* 80697380  98 1D 00 5D */	stb r0, 0x5d(r29)
/* 80697384  C0 1C 04 D0 */	lfs f0, 0x4d0(r28)
/* 80697388  D0 1D 00 6C */	stfs f0, 0x6c(r29)
/* 8069738C  C0 1C 04 D4 */	lfs f0, 0x4d4(r28)
/* 80697390  38 7D 00 6C */	addi r3, r29, 0x6c
/* 80697394  D0 03 00 04 */	stfs f0, 4(r3)
/* 80697398  C0 1C 04 D8 */	lfs f0, 0x4d8(r28)
/* 8069739C  D0 03 00 08 */	stfs f0, 8(r3)
/* 806973A0  C0 1E 00 D8 */	lfs f0, 0xd8(r30)
/* 806973A4  D0 1D 00 78 */	stfs f0, 0x78(r29)
lbl_806973A8:
/* 806973A8  A8 1A 05 80 */	lha r0, 0x580(r26)
/* 806973AC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 806973B0  41 82 01 8C */	beq lbl_8069753C
/* 806973B4  7F 83 E3 78 */	mr r3, r28
/* 806973B8  81 9C 06 28 */	lwz r12, 0x628(r28)
/* 806973BC  81 8C 02 00 */	lwz r12, 0x200(r12)
/* 806973C0  7D 89 03 A6 */	mtctr r12
/* 806973C4  4E 80 04 21 */	bctrl 
/* 806973C8  7C 7B 1B 79 */	or. r27, r3, r3
/* 806973CC  41 82 01 70 */	beq lbl_8069753C
/* 806973D0  38 61 00 0C */	addi r3, r1, 0xc
/* 806973D4  38 9C 04 D0 */	addi r4, r28, 0x4d0
/* 806973D8  7F 65 DB 78 */	mr r5, r27
/* 806973DC  4B BC F7 59 */	bl __mi__4cXyzCFRC3Vec
/* 806973E0  38 61 00 0C */	addi r3, r1, 0xc
/* 806973E4  4B CA FD 55 */	bl PSVECSquareMag
/* 806973E8  C0 1E 00 08 */	lfs f0, 8(r30)
/* 806973EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 806973F0  40 81 00 58 */	ble lbl_80697448
/* 806973F4  FC 00 08 34 */	frsqrte f0, f1
/* 806973F8  C8 9E 00 10 */	lfd f4, 0x10(r30)
/* 806973FC  FC 44 00 32 */	fmul f2, f4, f0
/* 80697400  C8 7E 00 18 */	lfd f3, 0x18(r30)
/* 80697404  FC 00 00 32 */	fmul f0, f0, f0
/* 80697408  FC 01 00 32 */	fmul f0, f1, f0
/* 8069740C  FC 03 00 28 */	fsub f0, f3, f0
/* 80697410  FC 02 00 32 */	fmul f0, f2, f0
/* 80697414  FC 44 00 32 */	fmul f2, f4, f0
/* 80697418  FC 00 00 32 */	fmul f0, f0, f0
/* 8069741C  FC 01 00 32 */	fmul f0, f1, f0
/* 80697420  FC 03 00 28 */	fsub f0, f3, f0
/* 80697424  FC 02 00 32 */	fmul f0, f2, f0
/* 80697428  FC 44 00 32 */	fmul f2, f4, f0
/* 8069742C  FC 00 00 32 */	fmul f0, f0, f0
/* 80697430  FC 01 00 32 */	fmul f0, f1, f0
/* 80697434  FC 03 00 28 */	fsub f0, f3, f0
/* 80697438  FC 02 00 32 */	fmul f0, f2, f0
/* 8069743C  FC 21 00 32 */	fmul f1, f1, f0
/* 80697440  FC 20 08 18 */	frsp f1, f1
/* 80697444  48 00 00 88 */	b lbl_806974CC
lbl_80697448:
/* 80697448  C8 1E 00 20 */	lfd f0, 0x20(r30)
/* 8069744C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80697450  40 80 00 10 */	bge lbl_80697460
/* 80697454  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80697458  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 8069745C  48 00 00 70 */	b lbl_806974CC
lbl_80697460:
/* 80697460  D0 21 00 08 */	stfs f1, 8(r1)
/* 80697464  80 81 00 08 */	lwz r4, 8(r1)
/* 80697468  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 8069746C  3C 00 7F 80 */	lis r0, 0x7f80
/* 80697470  7C 03 00 00 */	cmpw r3, r0
/* 80697474  41 82 00 14 */	beq lbl_80697488
/* 80697478  40 80 00 40 */	bge lbl_806974B8
/* 8069747C  2C 03 00 00 */	cmpwi r3, 0
/* 80697480  41 82 00 20 */	beq lbl_806974A0
/* 80697484  48 00 00 34 */	b lbl_806974B8
lbl_80697488:
/* 80697488  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8069748C  41 82 00 0C */	beq lbl_80697498
/* 80697490  38 00 00 01 */	li r0, 1
/* 80697494  48 00 00 28 */	b lbl_806974BC
lbl_80697498:
/* 80697498  38 00 00 02 */	li r0, 2
/* 8069749C  48 00 00 20 */	b lbl_806974BC
lbl_806974A0:
/* 806974A0  54 80 02 7F */	clrlwi. r0, r4, 9
/* 806974A4  41 82 00 0C */	beq lbl_806974B0
/* 806974A8  38 00 00 05 */	li r0, 5
/* 806974AC  48 00 00 10 */	b lbl_806974BC
lbl_806974B0:
/* 806974B0  38 00 00 03 */	li r0, 3
/* 806974B4  48 00 00 08 */	b lbl_806974BC
lbl_806974B8:
/* 806974B8  38 00 00 04 */	li r0, 4
lbl_806974BC:
/* 806974BC  2C 00 00 01 */	cmpwi r0, 1
/* 806974C0  40 82 00 0C */	bne lbl_806974CC
/* 806974C4  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 806974C8  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
lbl_806974CC:
/* 806974CC  C0 1E 00 5C */	lfs f0, 0x5c(r30)
/* 806974D0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 806974D4  40 81 00 68 */	ble lbl_8069753C
/* 806974D8  80 7F 5D AC */	lwz r3, 0x5dac(r31)
/* 806974DC  81 83 06 28 */	lwz r12, 0x628(r3)
/* 806974E0  81 8C 01 40 */	lwz r12, 0x140(r12)
/* 806974E4  7D 89 03 A6 */	mtctr r12
/* 806974E8  4E 80 04 21 */	bctrl 
/* 806974EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 806974F0  40 82 00 4C */	bne lbl_8069753C
/* 806974F4  80 7F 5D AC */	lwz r3, 0x5dac(r31)
/* 806974F8  81 83 06 28 */	lwz r12, 0x628(r3)
/* 806974FC  81 8C 01 44 */	lwz r12, 0x144(r12)
/* 80697500  7D 89 03 A6 */	mtctr r12
/* 80697504  4E 80 04 21 */	bctrl 
/* 80697508  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8069750C  40 82 00 30 */	bne lbl_8069753C
/* 80697510  38 00 00 02 */	li r0, 2
/* 80697514  98 1D 00 5D */	stb r0, 0x5d(r29)
/* 80697518  C0 1B 00 00 */	lfs f0, 0(r27)
/* 8069751C  D0 1D 00 6C */	stfs f0, 0x6c(r29)
/* 80697520  C0 1B 00 04 */	lfs f0, 4(r27)
/* 80697524  38 7D 00 6C */	addi r3, r29, 0x6c
/* 80697528  D0 03 00 04 */	stfs f0, 4(r3)
/* 8069752C  C0 1B 00 08 */	lfs f0, 8(r27)
/* 80697530  D0 03 00 08 */	stfs f0, 8(r3)
/* 80697534  C0 1E 00 DC */	lfs f0, 0xdc(r30)
/* 80697538  D0 1D 00 78 */	stfs f0, 0x78(r29)
lbl_8069753C:
/* 8069753C  80 7F 5D AC */	lwz r3, 0x5dac(r31)
/* 80697540  81 83 06 28 */	lwz r12, 0x628(r3)
/* 80697544  81 8C 01 C8 */	lwz r12, 0x1c8(r12)
/* 80697548  7D 89 03 A6 */	mtctr r12
/* 8069754C  4E 80 04 21 */	bctrl 
/* 80697550  28 03 00 00 */	cmplwi r3, 0
/* 80697554  40 82 00 14 */	bne lbl_80697568
/* 80697558  80 7F 5D AC */	lwz r3, 0x5dac(r31)
/* 8069755C  A0 03 00 F8 */	lhz r0, 0xf8(r3)
/* 80697560  28 00 00 03 */	cmplwi r0, 3
/* 80697564  40 82 00 10 */	bne lbl_80697574
lbl_80697568:
/* 80697568  38 00 00 01 */	li r0, 1
/* 8069756C  98 1D 00 7C */	stb r0, 0x7c(r29)
/* 80697570  48 00 00 0C */	b lbl_8069757C
lbl_80697574:
/* 80697574  38 00 00 00 */	li r0, 0
/* 80697578  98 1D 00 7C */	stb r0, 0x7c(r29)
lbl_8069757C:
/* 8069757C  7F 43 D3 78 */	mr r3, r26
/* 80697580  4B FF F9 05 */	bl bug_control__FP11e_bug_class
/* 80697584  38 60 00 01 */	li r3, 1
lbl_80697588:
/* 80697588  39 61 00 30 */	addi r11, r1, 0x30
/* 8069758C  4B CC AC 91 */	bl _restgpr_26
/* 80697590  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80697594  7C 08 03 A6 */	mtlr r0
/* 80697598  38 21 00 30 */	addi r1, r1, 0x30
/* 8069759C  4E 80 00 20 */	blr 
