lbl_80613E00:
/* 80613E00  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80613E04  7C 08 02 A6 */	mflr r0
/* 80613E08  90 01 00 44 */	stw r0, 0x44(r1)
/* 80613E0C  39 61 00 40 */	addi r11, r1, 0x40
/* 80613E10  4B D4 E3 C5 */	bl _savegpr_27
/* 80613E14  7C 7D 1B 78 */	mr r29, r3
/* 80613E18  3C 80 80 62 */	lis r4, lit_3772@ha /* 0x8061AD84@ha */
/* 80613E1C  3B E4 AD 84 */	addi r31, r4, lit_3772@l /* 0x8061AD84@l */
/* 80613E20  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80613E24  3B 84 61 C0 */	addi r28, r4, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80613E28  83 7C 5D AC */	lwz r27, 0x5dac(r28)
/* 80613E2C  3B C0 00 00 */	li r30, 0
/* 80613E30  A8 03 47 54 */	lha r0, 0x4754(r3)
/* 80613E34  2C 00 00 02 */	cmpwi r0, 2
/* 80613E38  41 82 00 A8 */	beq lbl_80613EE0
/* 80613E3C  40 80 00 14 */	bge lbl_80613E50
/* 80613E40  2C 00 00 00 */	cmpwi r0, 0
/* 80613E44  41 82 00 18 */	beq lbl_80613E5C
/* 80613E48  40 80 00 3C */	bge lbl_80613E84
/* 80613E4C  48 00 03 18 */	b lbl_80614164
lbl_80613E50:
/* 80613E50  2C 00 00 04 */	cmpwi r0, 4
/* 80613E54  40 80 03 10 */	bge lbl_80614164
/* 80613E58  48 00 02 34 */	b lbl_8061408C
lbl_80613E5C:
/* 80613E5C  38 80 00 18 */	li r4, 0x18
/* 80613E60  C0 3F 00 64 */	lfs f1, 0x64(r31)
/* 80613E64  38 A0 00 00 */	li r5, 0
/* 80613E68  C0 5F 00 00 */	lfs f2, 0(r31)
/* 80613E6C  4B FF C7 51 */	bl anm_init__FP10b_ob_classifUcf
/* 80613E70  38 00 00 01 */	li r0, 1
/* 80613E74  B0 1D 47 54 */	sth r0, 0x4754(r29)
/* 80613E78  38 00 00 00 */	li r0, 0
/* 80613E7C  B0 1D 47 6A */	sth r0, 0x476a(r29)
/* 80613E80  48 00 02 E4 */	b lbl_80614164
lbl_80613E84:
/* 80613E84  80 7D 05 C0 */	lwz r3, 0x5c0(r29)
/* 80613E88  38 80 00 01 */	li r4, 1
/* 80613E8C  88 03 00 11 */	lbz r0, 0x11(r3)
/* 80613E90  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80613E94  40 82 00 18 */	bne lbl_80613EAC
/* 80613E98  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 80613E9C  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80613EA0  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80613EA4  41 82 00 08 */	beq lbl_80613EAC
/* 80613EA8  38 80 00 00 */	li r4, 0
lbl_80613EAC:
/* 80613EAC  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80613EB0  41 82 02 B4 */	beq lbl_80614164
/* 80613EB4  7F A3 EB 78 */	mr r3, r29
/* 80613EB8  38 80 00 19 */	li r4, 0x19
/* 80613EBC  C0 3F 00 08 */	lfs f1, 8(r31)
/* 80613EC0  38 A0 00 02 */	li r5, 2
/* 80613EC4  C0 5F 00 00 */	lfs f2, 0(r31)
/* 80613EC8  4B FF C6 F5 */	bl anm_init__FP10b_ob_classifUcf
/* 80613ECC  38 00 00 02 */	li r0, 2
/* 80613ED0  B0 1D 47 54 */	sth r0, 0x4754(r29)
/* 80613ED4  38 00 00 C8 */	li r0, 0xc8
/* 80613ED8  B0 1D 47 78 */	sth r0, 0x4778(r29)
/* 80613EDC  48 00 02 88 */	b lbl_80614164
lbl_80613EE0:
/* 80613EE0  A8 1D 47 6C */	lha r0, 0x476c(r29)
/* 80613EE4  B0 1D 47 66 */	sth r0, 0x4766(r29)
/* 80613EE8  38 00 00 00 */	li r0, 0
/* 80613EEC  B0 1D 47 64 */	sth r0, 0x4764(r29)
/* 80613EF0  3B C0 00 01 */	li r30, 1
/* 80613EF4  38 7D 04 D0 */	addi r3, r29, 0x4d0
/* 80613EF8  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 80613EFC  C0 5F 00 B8 */	lfs f2, 0xb8(r31)
/* 80613F00  C0 7F 00 64 */	lfs f3, 0x64(r31)
/* 80613F04  4B C5 BB 39 */	bl cLib_addCalc2__FPffff
/* 80613F08  38 7D 04 D8 */	addi r3, r29, 0x4d8
/* 80613F0C  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 80613F10  C0 5F 00 B8 */	lfs f2, 0xb8(r31)
/* 80613F14  C0 7F 00 64 */	lfs f3, 0x64(r31)
/* 80613F18  4B C5 BB 25 */	bl cLib_addCalc2__FPffff
/* 80613F1C  A8 1D 47 78 */	lha r0, 0x4778(r29)
/* 80613F20  2C 00 00 00 */	cmpwi r0, 0
/* 80613F24  40 82 00 18 */	bne lbl_80613F3C
/* 80613F28  38 00 00 64 */	li r0, 0x64
/* 80613F2C  B0 1D 47 52 */	sth r0, 0x4752(r29)
/* 80613F30  38 00 00 00 */	li r0, 0
/* 80613F34  B0 1D 47 54 */	sth r0, 0x4754(r29)
/* 80613F38  48 00 02 2C */	b lbl_80614164
lbl_80613F3C:
/* 80613F3C  38 61 00 14 */	addi r3, r1, 0x14
/* 80613F40  38 9D 05 38 */	addi r4, r29, 0x538
/* 80613F44  38 BB 04 D0 */	addi r5, r27, 0x4d0
/* 80613F48  4B C5 2B ED */	bl __mi__4cXyzCFRC3Vec
/* 80613F4C  38 61 00 14 */	addi r3, r1, 0x14
/* 80613F50  4B D3 31 E9 */	bl PSVECSquareMag
/* 80613F54  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 80613F58  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80613F5C  40 81 00 58 */	ble lbl_80613FB4
/* 80613F60  FC 00 08 34 */	frsqrte f0, f1
/* 80613F64  C8 9F 00 20 */	lfd f4, 0x20(r31)
/* 80613F68  FC 44 00 32 */	fmul f2, f4, f0
/* 80613F6C  C8 7F 00 28 */	lfd f3, 0x28(r31)
/* 80613F70  FC 00 00 32 */	fmul f0, f0, f0
/* 80613F74  FC 01 00 32 */	fmul f0, f1, f0
/* 80613F78  FC 03 00 28 */	fsub f0, f3, f0
/* 80613F7C  FC 02 00 32 */	fmul f0, f2, f0
/* 80613F80  FC 44 00 32 */	fmul f2, f4, f0
/* 80613F84  FC 00 00 32 */	fmul f0, f0, f0
/* 80613F88  FC 01 00 32 */	fmul f0, f1, f0
/* 80613F8C  FC 03 00 28 */	fsub f0, f3, f0
/* 80613F90  FC 02 00 32 */	fmul f0, f2, f0
/* 80613F94  FC 44 00 32 */	fmul f2, f4, f0
/* 80613F98  FC 00 00 32 */	fmul f0, f0, f0
/* 80613F9C  FC 01 00 32 */	fmul f0, f1, f0
/* 80613FA0  FC 03 00 28 */	fsub f0, f3, f0
/* 80613FA4  FC 02 00 32 */	fmul f0, f2, f0
/* 80613FA8  FC 21 00 32 */	fmul f1, f1, f0
/* 80613FAC  FC 20 08 18 */	frsp f1, f1
/* 80613FB0  48 00 00 88 */	b lbl_80614038
lbl_80613FB4:
/* 80613FB4  C8 1F 00 30 */	lfd f0, 0x30(r31)
/* 80613FB8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80613FBC  40 80 00 10 */	bge lbl_80613FCC
/* 80613FC0  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80613FC4  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 80613FC8  48 00 00 70 */	b lbl_80614038
lbl_80613FCC:
/* 80613FCC  D0 21 00 08 */	stfs f1, 8(r1)
/* 80613FD0  80 81 00 08 */	lwz r4, 8(r1)
/* 80613FD4  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 80613FD8  3C 00 7F 80 */	lis r0, 0x7f80
/* 80613FDC  7C 03 00 00 */	cmpw r3, r0
/* 80613FE0  41 82 00 14 */	beq lbl_80613FF4
/* 80613FE4  40 80 00 40 */	bge lbl_80614024
/* 80613FE8  2C 03 00 00 */	cmpwi r3, 0
/* 80613FEC  41 82 00 20 */	beq lbl_8061400C
/* 80613FF0  48 00 00 34 */	b lbl_80614024
lbl_80613FF4:
/* 80613FF4  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80613FF8  41 82 00 0C */	beq lbl_80614004
/* 80613FFC  38 00 00 01 */	li r0, 1
/* 80614000  48 00 00 28 */	b lbl_80614028
lbl_80614004:
/* 80614004  38 00 00 02 */	li r0, 2
/* 80614008  48 00 00 20 */	b lbl_80614028
lbl_8061400C:
/* 8061400C  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80614010  41 82 00 0C */	beq lbl_8061401C
/* 80614014  38 00 00 05 */	li r0, 5
/* 80614018  48 00 00 10 */	b lbl_80614028
lbl_8061401C:
/* 8061401C  38 00 00 03 */	li r0, 3
/* 80614020  48 00 00 08 */	b lbl_80614028
lbl_80614024:
/* 80614024  38 00 00 04 */	li r0, 4
lbl_80614028:
/* 80614028  2C 00 00 01 */	cmpwi r0, 1
/* 8061402C  40 82 00 0C */	bne lbl_80614038
/* 80614030  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80614034  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
lbl_80614038:
/* 80614038  C0 1F 00 98 */	lfs f0, 0x98(r31)
/* 8061403C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80614040  40 81 01 24 */	ble lbl_80614164
/* 80614044  A8 1D 47 78 */	lha r0, 0x4778(r29)
/* 80614048  2C 00 00 64 */	cmpwi r0, 0x64
/* 8061404C  40 80 01 18 */	bge lbl_80614164
/* 80614050  80 7C 5D AC */	lwz r3, 0x5dac(r28)
/* 80614054  80 03 05 70 */	lwz r0, 0x570(r3)
/* 80614058  54 00 01 8D */	rlwinm. r0, r0, 0, 6, 6
/* 8061405C  40 82 01 08 */	bne lbl_80614164
/* 80614060  7F A3 EB 78 */	mr r3, r29
/* 80614064  C0 3F 00 B0 */	lfs f1, 0xb0(r31)
/* 80614068  38 80 40 00 */	li r4, 0x4000
/* 8061406C  4B FF F1 3D */	bl pl_check__FP10b_ob_classfs
/* 80614070  2C 03 00 00 */	cmpwi r3, 0
/* 80614074  41 82 00 F0 */	beq lbl_80614164
/* 80614078  38 00 00 0A */	li r0, 0xa
/* 8061407C  B0 1D 5C 80 */	sth r0, 0x5c80(r29)
/* 80614080  38 00 00 03 */	li r0, 3
/* 80614084  B0 1D 47 54 */	sth r0, 0x4754(r29)
/* 80614088  48 00 00 DC */	b lbl_80614164
lbl_8061408C:
/* 8061408C  A8 1D 5C 82 */	lha r0, 0x5c82(r29)
/* 80614090  2C 00 00 1E */	cmpwi r0, 0x1e
/* 80614094  40 80 00 08 */	bge lbl_8061409C
/* 80614098  3B C0 00 01 */	li r30, 1
lbl_8061409C:
/* 8061409C  80 1D 06 2C */	lwz r0, 0x62c(r29)
/* 806140A0  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 806140A4  90 1D 06 2C */	stw r0, 0x62c(r29)
/* 806140A8  80 7D 05 C0 */	lwz r3, 0x5c0(r29)
/* 806140AC  38 80 00 01 */	li r4, 1
/* 806140B0  88 03 00 11 */	lbz r0, 0x11(r3)
/* 806140B4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 806140B8  40 82 00 18 */	bne lbl_806140D0
/* 806140BC  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 806140C0  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 806140C4  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 806140C8  41 82 00 08 */	beq lbl_806140D0
/* 806140CC  38 80 00 00 */	li r4, 0
lbl_806140D0:
/* 806140D0  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 806140D4  41 82 00 90 */	beq lbl_80614164
/* 806140D8  80 1D 47 34 */	lwz r0, 0x4734(r29)
/* 806140DC  2C 00 00 1A */	cmpwi r0, 0x1a
/* 806140E0  40 82 00 20 */	bne lbl_80614100
/* 806140E4  7F A3 EB 78 */	mr r3, r29
/* 806140E8  38 80 00 16 */	li r4, 0x16
/* 806140EC  C0 3F 00 64 */	lfs f1, 0x64(r31)
/* 806140F0  38 A0 00 00 */	li r5, 0
/* 806140F4  C0 5F 00 00 */	lfs f2, 0(r31)
/* 806140F8  4B FF C4 C5 */	bl anm_init__FP10b_ob_classifUcf
/* 806140FC  48 00 00 68 */	b lbl_80614164
lbl_80614100:
/* 80614100  2C 00 00 16 */	cmpwi r0, 0x16
/* 80614104  40 82 00 48 */	bne lbl_8061414C
/* 80614108  7F A3 EB 78 */	mr r3, r29
/* 8061410C  38 80 00 1D */	li r4, 0x1d
/* 80614110  C0 3F 00 64 */	lfs f1, 0x64(r31)
/* 80614114  38 A0 00 00 */	li r5, 0
/* 80614118  C0 5F 00 00 */	lfs f2, 0(r31)
/* 8061411C  4B FF C4 A1 */	bl anm_init__FP10b_ob_classifUcf
/* 80614120  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070352@ha */
/* 80614124  38 03 03 52 */	addi r0, r3, 0x0352 /* 0x00070352@l */
/* 80614128  90 01 00 10 */	stw r0, 0x10(r1)
/* 8061412C  38 7D 59 E0 */	addi r3, r29, 0x59e0
/* 80614130  38 81 00 10 */	addi r4, r1, 0x10
/* 80614134  38 A0 FF FF */	li r5, -1
/* 80614138  81 9D 59 E0 */	lwz r12, 0x59e0(r29)
/* 8061413C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80614140  7D 89 03 A6 */	mtctr r12
/* 80614144  4E 80 04 21 */	bctrl 
/* 80614148  48 00 00 1C */	b lbl_80614164
lbl_8061414C:
/* 8061414C  2C 00 00 1D */	cmpwi r0, 0x1d
/* 80614150  40 82 00 14 */	bne lbl_80614164
/* 80614154  38 00 00 64 */	li r0, 0x64
/* 80614158  B0 1D 47 52 */	sth r0, 0x4752(r29)
/* 8061415C  38 00 00 00 */	li r0, 0
/* 80614160  B0 1D 47 54 */	sth r0, 0x4754(r29)
lbl_80614164:
/* 80614164  2C 1E 00 00 */	cmpwi r30, 0
/* 80614168  41 82 00 44 */	beq lbl_806141AC
/* 8061416C  38 7D 47 30 */	addi r3, r29, 0x4730
/* 80614170  C0 3F 00 C0 */	lfs f1, 0xc0(r31)
/* 80614174  C0 5F 00 00 */	lfs f2, 0(r31)
/* 80614178  C0 7F 00 50 */	lfs f3, 0x50(r31)
/* 8061417C  4B C5 B8 C1 */	bl cLib_addCalc2__FPffff
/* 80614180  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070350@ha */
/* 80614184  38 03 03 50 */	addi r0, r3, 0x0350 /* 0x00070350@l */
/* 80614188  90 01 00 0C */	stw r0, 0xc(r1)
/* 8061418C  38 7D 59 E0 */	addi r3, r29, 0x59e0
/* 80614190  38 81 00 0C */	addi r4, r1, 0xc
/* 80614194  38 A0 FF FF */	li r5, -1
/* 80614198  81 9D 59 E0 */	lwz r12, 0x59e0(r29)
/* 8061419C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 806141A0  7D 89 03 A6 */	mtctr r12
/* 806141A4  4E 80 04 21 */	bctrl 
/* 806141A8  48 00 00 14 */	b lbl_806141BC
lbl_806141AC:
/* 806141AC  38 7D 47 30 */	addi r3, r29, 0x4730
/* 806141B0  C0 3F 00 00 */	lfs f1, 0(r31)
/* 806141B4  C0 5F 00 50 */	lfs f2, 0x50(r31)
/* 806141B8  4B C5 B8 C9 */	bl cLib_addCalc0__FPfff
lbl_806141BC:
/* 806141BC  38 7D 04 DE */	addi r3, r29, 0x4de
/* 806141C0  A8 9D 47 66 */	lha r4, 0x4766(r29)
/* 806141C4  38 A0 00 10 */	li r5, 0x10
/* 806141C8  A8 DD 47 6A */	lha r6, 0x476a(r29)
/* 806141CC  4B C5 C4 3D */	bl cLib_addCalcAngleS2__FPssss
/* 806141D0  38 7D 04 DC */	addi r3, r29, 0x4dc
/* 806141D4  A8 9D 47 64 */	lha r4, 0x4764(r29)
/* 806141D8  38 A0 00 10 */	li r5, 0x10
/* 806141DC  A8 DD 47 6A */	lha r6, 0x476a(r29)
/* 806141E0  4B C5 C4 29 */	bl cLib_addCalcAngleS2__FPssss
/* 806141E4  38 7D 47 6A */	addi r3, r29, 0x476a
/* 806141E8  38 80 01 80 */	li r4, 0x180
/* 806141EC  38 A0 00 01 */	li r5, 1
/* 806141F0  38 C0 00 08 */	li r6, 8
/* 806141F4  4B C5 C4 15 */	bl cLib_addCalcAngleS2__FPssss
/* 806141F8  38 7D 5D 04 */	addi r3, r29, 0x5d04
/* 806141FC  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 80614200  C0 5F 00 00 */	lfs f2, 0(r31)
/* 80614204  C0 7F 00 B8 */	lfs f3, 0xb8(r31)
/* 80614208  4B C5 B8 35 */	bl cLib_addCalc2__FPffff
/* 8061420C  38 60 00 02 */	li r3, 2
/* 80614210  39 61 00 40 */	addi r11, r1, 0x40
/* 80614214  4B D4 E0 0D */	bl _restgpr_27
/* 80614218  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8061421C  7C 08 03 A6 */	mtlr r0
/* 80614220  38 21 00 40 */	addi r1, r1, 0x40
/* 80614224  4E 80 00 20 */	blr 
