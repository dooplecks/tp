lbl_80810690:
/* 80810690  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80810694  7C 08 02 A6 */	mflr r0
/* 80810698  90 01 00 64 */	stw r0, 0x64(r1)
/* 8081069C  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 808106A0  93 C1 00 58 */	stw r30, 0x58(r1)
/* 808106A4  7C 7E 1B 78 */	mr r30, r3
/* 808106A8  3C 60 80 81 */	lis r3, lit_3925@ha /* 0x80815994@ha */
/* 808106AC  3B E3 59 94 */	addi r31, r3, lit_3925@l /* 0x80815994@l */
/* 808106B0  80 7E 06 AC */	lwz r3, 0x6ac(r30)
/* 808106B4  88 9E 06 B4 */	lbz r4, 0x6b4(r30)
/* 808106B8  7C 84 07 74 */	extsb r4, r4
/* 808106BC  4B 84 10 F5 */	bl dPath_GetPnt__FPC5dPathi
/* 808106C0  C0 03 00 04 */	lfs f0, 4(r3)
/* 808106C4  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 808106C8  C0 03 00 08 */	lfs f0, 8(r3)
/* 808106CC  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 808106D0  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 808106D4  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 808106D8  80 1E 06 98 */	lwz r0, 0x698(r30)
/* 808106DC  2C 00 00 02 */	cmpwi r0, 2
/* 808106E0  41 82 02 98 */	beq lbl_80810978
/* 808106E4  40 80 00 14 */	bge lbl_808106F8
/* 808106E8  2C 00 00 00 */	cmpwi r0, 0
/* 808106EC  41 82 00 1C */	beq lbl_80810708
/* 808106F0  40 80 01 D0 */	bge lbl_808108C0
/* 808106F4  48 00 06 EC */	b lbl_80810DE0
lbl_808106F8:
/* 808106F8  2C 00 00 04 */	cmpwi r0, 4
/* 808106FC  41 82 06 C0 */	beq lbl_80810DBC
/* 80810700  40 80 06 E0 */	bge lbl_80810DE0
/* 80810704  48 00 03 58 */	b lbl_80810A5C
lbl_80810708:
/* 80810708  38 7E 04 D0 */	addi r3, r30, 0x4d0
/* 8081070C  38 81 00 4C */	addi r4, r1, 0x4c
/* 80810710  4B B3 6C 8D */	bl PSVECSquareDistance
/* 80810714  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80810718  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8081071C  40 81 00 58 */	ble lbl_80810774
/* 80810720  FC 00 08 34 */	frsqrte f0, f1
/* 80810724  C8 9F 00 10 */	lfd f4, 0x10(r31)
/* 80810728  FC 44 00 32 */	fmul f2, f4, f0
/* 8081072C  C8 7F 00 18 */	lfd f3, 0x18(r31)
/* 80810730  FC 00 00 32 */	fmul f0, f0, f0
/* 80810734  FC 01 00 32 */	fmul f0, f1, f0
/* 80810738  FC 03 00 28 */	fsub f0, f3, f0
/* 8081073C  FC 02 00 32 */	fmul f0, f2, f0
/* 80810740  FC 44 00 32 */	fmul f2, f4, f0
/* 80810744  FC 00 00 32 */	fmul f0, f0, f0
/* 80810748  FC 01 00 32 */	fmul f0, f1, f0
/* 8081074C  FC 03 00 28 */	fsub f0, f3, f0
/* 80810750  FC 02 00 32 */	fmul f0, f2, f0
/* 80810754  FC 44 00 32 */	fmul f2, f4, f0
/* 80810758  FC 00 00 32 */	fmul f0, f0, f0
/* 8081075C  FC 01 00 32 */	fmul f0, f1, f0
/* 80810760  FC 03 00 28 */	fsub f0, f3, f0
/* 80810764  FC 02 00 32 */	fmul f0, f2, f0
/* 80810768  FC 21 00 32 */	fmul f1, f1, f0
/* 8081076C  FC 20 08 18 */	frsp f1, f1
/* 80810770  48 00 00 88 */	b lbl_808107F8
lbl_80810774:
/* 80810774  C8 1F 00 20 */	lfd f0, 0x20(r31)
/* 80810778  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8081077C  40 80 00 10 */	bge lbl_8081078C
/* 80810780  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80810784  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 80810788  48 00 00 70 */	b lbl_808107F8
lbl_8081078C:
/* 8081078C  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 80810790  80 81 00 10 */	lwz r4, 0x10(r1)
/* 80810794  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 80810798  3C 00 7F 80 */	lis r0, 0x7f80
/* 8081079C  7C 03 00 00 */	cmpw r3, r0
/* 808107A0  41 82 00 14 */	beq lbl_808107B4
/* 808107A4  40 80 00 40 */	bge lbl_808107E4
/* 808107A8  2C 03 00 00 */	cmpwi r3, 0
/* 808107AC  41 82 00 20 */	beq lbl_808107CC
/* 808107B0  48 00 00 34 */	b lbl_808107E4
lbl_808107B4:
/* 808107B4  54 80 02 7F */	clrlwi. r0, r4, 9
/* 808107B8  41 82 00 0C */	beq lbl_808107C4
/* 808107BC  38 00 00 01 */	li r0, 1
/* 808107C0  48 00 00 28 */	b lbl_808107E8
lbl_808107C4:
/* 808107C4  38 00 00 02 */	li r0, 2
/* 808107C8  48 00 00 20 */	b lbl_808107E8
lbl_808107CC:
/* 808107CC  54 80 02 7F */	clrlwi. r0, r4, 9
/* 808107D0  41 82 00 0C */	beq lbl_808107DC
/* 808107D4  38 00 00 05 */	li r0, 5
/* 808107D8  48 00 00 10 */	b lbl_808107E8
lbl_808107DC:
/* 808107DC  38 00 00 03 */	li r0, 3
/* 808107E0  48 00 00 08 */	b lbl_808107E8
lbl_808107E4:
/* 808107E4  38 00 00 04 */	li r0, 4
lbl_808107E8:
/* 808107E8  2C 00 00 01 */	cmpwi r0, 1
/* 808107EC  40 82 00 0C */	bne lbl_808107F8
/* 808107F0  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 808107F4  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
lbl_808107F8:
/* 808107F8  C0 1F 00 68 */	lfs f0, 0x68(r31)
/* 808107FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80810800  40 80 00 7C */	bge lbl_8081087C
/* 80810804  38 7E 04 D0 */	addi r3, r30, 0x4d0
/* 80810808  38 81 00 4C */	addi r4, r1, 0x4c
/* 8081080C  4B A6 03 F9 */	bl cLib_targetAngleY__FPC3VecPC3Vec
/* 80810810  7C 64 1B 78 */	mr r4, r3
/* 80810814  A8 7E 04 E6 */	lha r3, 0x4e6(r30)
/* 80810818  4B A6 06 0D */	bl cLib_distanceAngleS__Fss
/* 8081081C  7C 60 07 34 */	extsh r0, r3
/* 80810820  2C 00 20 00 */	cmpwi r0, 0x2000
/* 80810824  41 80 00 58 */	blt lbl_8081087C
/* 80810828  88 7E 06 B4 */	lbz r3, 0x6b4(r30)
/* 8081082C  38 03 00 01 */	addi r0, r3, 1
/* 80810830  98 1E 06 B4 */	stb r0, 0x6b4(r30)
/* 80810834  88 1E 06 B4 */	lbz r0, 0x6b4(r30)
/* 80810838  7C 04 07 74 */	extsb r4, r0
/* 8081083C  80 7E 06 AC */	lwz r3, 0x6ac(r30)
/* 80810840  A0 03 00 00 */	lhz r0, 0(r3)
/* 80810844  7C 04 00 00 */	cmpw r4, r0
/* 80810848  41 80 00 0C */	blt lbl_80810854
/* 8081084C  38 00 00 00 */	li r0, 0
/* 80810850  98 1E 06 B4 */	stb r0, 0x6b4(r30)
lbl_80810854:
/* 80810854  80 7E 06 AC */	lwz r3, 0x6ac(r30)
/* 80810858  88 9E 06 B4 */	lbz r4, 0x6b4(r30)
/* 8081085C  7C 84 07 74 */	extsb r4, r4
/* 80810860  4B 84 0F 51 */	bl dPath_GetPnt__FPC5dPathi
/* 80810864  C0 03 00 04 */	lfs f0, 4(r3)
/* 80810868  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 8081086C  C0 03 00 08 */	lfs f0, 8(r3)
/* 80810870  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 80810874  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80810878  D0 01 00 54 */	stfs f0, 0x54(r1)
lbl_8081087C:
/* 8081087C  7F C3 F3 78 */	mr r3, r30
/* 80810880  38 80 00 08 */	li r4, 8
/* 80810884  38 A0 00 02 */	li r5, 2
/* 80810888  C0 3F 00 80 */	lfs f1, 0x80(r31)
/* 8081088C  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80810890  4B FF 79 51 */	bl bckSet__8daE_YM_cFiUcff
/* 80810894  38 60 00 01 */	li r3, 1
/* 80810898  98 7E 06 A4 */	stb r3, 0x6a4(r30)
/* 8081089C  38 00 00 00 */	li r0, 0
/* 808108A0  98 1E 06 A5 */	stb r0, 0x6a5(r30)
/* 808108A4  38 00 00 07 */	li r0, 7
/* 808108A8  B0 1E 06 F0 */	sth r0, 0x6f0(r30)
/* 808108AC  90 7E 06 98 */	stw r3, 0x698(r30)
/* 808108B0  38 7E 07 20 */	addi r3, r30, 0x720
/* 808108B4  C0 3F 00 94 */	lfs f1, 0x94(r31)
/* 808108B8  C0 5F 00 B8 */	lfs f2, 0xb8(r31)
/* 808108BC  4B 86 56 9D */	bl SetWall__12dBgS_AcchCirFff
lbl_808108C0:
/* 808108C0  7F C3 F3 78 */	mr r3, r30
/* 808108C4  4B FF 7E A5 */	bl setDigEffect__8daE_YM_cFv
/* 808108C8  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070197@ha */
/* 808108CC  38 03 01 97 */	addi r0, r3, 0x0197 /* 0x00070197@l */
/* 808108D0  90 01 00 18 */	stw r0, 0x18(r1)
/* 808108D4  38 7E 05 BC */	addi r3, r30, 0x5bc
/* 808108D8  38 81 00 18 */	addi r4, r1, 0x18
/* 808108DC  38 A0 00 00 */	li r5, 0
/* 808108E0  38 C0 FF FF */	li r6, -1
/* 808108E4  81 9E 05 BC */	lwz r12, 0x5bc(r30)
/* 808108E8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 808108EC  7D 89 03 A6 */	mtctr r12
/* 808108F0  4E 80 04 21 */	bctrl 
/* 808108F4  38 7E 06 DC */	addi r3, r30, 0x6dc
/* 808108F8  88 1E 06 A5 */	lbz r0, 0x6a5(r30)
/* 808108FC  54 00 10 3A */	slwi r0, r0, 2
/* 80810900  3C 80 80 81 */	lis r4, YM_DIG_POS_Y@ha /* 0x80815BD0@ha */
/* 80810904  38 84 5B D0 */	addi r4, r4, YM_DIG_POS_Y@l /* 0x80815BD0@l */
/* 80810908  7C 24 04 2E */	lfsx f1, r4, r0
/* 8081090C  C0 5F 00 38 */	lfs f2, 0x38(r31)
/* 80810910  4B A5 FE 31 */	bl cLib_chaseF__FPfff
/* 80810914  38 7E 04 D0 */	addi r3, r30, 0x4d0
/* 80810918  38 81 00 4C */	addi r4, r1, 0x4c
/* 8081091C  4B A6 02 E9 */	bl cLib_targetAngleY__FPC3VecPC3Vec
/* 80810920  7C 64 1B 78 */	mr r4, r3
/* 80810924  38 7E 04 E6 */	addi r3, r30, 0x4e6
/* 80810928  38 A0 00 08 */	li r5, 8
/* 8081092C  38 C0 20 00 */	li r6, 0x2000
/* 80810930  38 E0 01 00 */	li r7, 0x100
/* 80810934  4B A5 FC 0D */	bl cLib_addCalcAngleS__FPsssss
/* 80810938  A8 1E 04 E6 */	lha r0, 0x4e6(r30)
/* 8081093C  B0 1E 04 DE */	sth r0, 0x4de(r30)
/* 80810940  38 7E 05 2C */	addi r3, r30, 0x52c
/* 80810944  C0 3F 00 80 */	lfs f1, 0x80(r31)
/* 80810948  C0 5F 00 08 */	lfs f2, 8(r31)
/* 8081094C  4B A5 FD F5 */	bl cLib_chaseF__FPfff
/* 80810950  A8 1E 06 F0 */	lha r0, 0x6f0(r30)
/* 80810954  2C 00 00 00 */	cmpwi r0, 0
/* 80810958  40 82 04 88 */	bne lbl_80810DE0
/* 8081095C  38 00 00 0A */	li r0, 0xa
/* 80810960  B0 1E 06 F0 */	sth r0, 0x6f0(r30)
/* 80810964  38 00 00 02 */	li r0, 2
/* 80810968  90 1E 06 98 */	stw r0, 0x698(r30)
/* 8081096C  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80810970  D0 1E 05 2C */	stfs f0, 0x52c(r30)
/* 80810974  48 00 04 6C */	b lbl_80810DE0
lbl_80810978:
/* 80810978  7F C3 F3 78 */	mr r3, r30
/* 8081097C  4B FF 7D ED */	bl setDigEffect__8daE_YM_cFv
/* 80810980  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070197@ha */
/* 80810984  38 03 01 97 */	addi r0, r3, 0x0197 /* 0x00070197@l */
/* 80810988  90 01 00 14 */	stw r0, 0x14(r1)
/* 8081098C  38 7E 05 BC */	addi r3, r30, 0x5bc
/* 80810990  38 81 00 14 */	addi r4, r1, 0x14
/* 80810994  38 A0 00 00 */	li r5, 0
/* 80810998  38 C0 FF FF */	li r6, -1
/* 8081099C  81 9E 05 BC */	lwz r12, 0x5bc(r30)
/* 808109A0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 808109A4  7D 89 03 A6 */	mtctr r12
/* 808109A8  4E 80 04 21 */	bctrl 
/* 808109AC  A8 1E 06 F0 */	lha r0, 0x6f0(r30)
/* 808109B0  2C 00 00 00 */	cmpwi r0, 0
/* 808109B4  40 82 04 2C */	bne lbl_80810DE0
/* 808109B8  88 7E 06 A5 */	lbz r3, 0x6a5(r30)
/* 808109BC  38 03 00 01 */	addi r0, r3, 1
/* 808109C0  98 1E 06 A5 */	stb r0, 0x6a5(r30)
/* 808109C4  88 1E 06 A5 */	lbz r0, 0x6a5(r30)
/* 808109C8  28 00 00 03 */	cmplwi r0, 3
/* 808109CC  41 80 00 4C */	blt lbl_80810A18
/* 808109D0  38 00 00 03 */	li r0, 3
/* 808109D4  90 1E 06 98 */	stw r0, 0x698(r30)
/* 808109D8  38 00 00 00 */	li r0, 0
/* 808109DC  98 1E 06 A5 */	stb r0, 0x6a5(r30)
/* 808109E0  38 00 01 45 */	li r0, 0x145
/* 808109E4  90 1E 09 A0 */	stw r0, 0x9a0(r30)
/* 808109E8  3C 00 00 01 */	lis r0, 1
/* 808109EC  90 1E 09 9C */	stw r0, 0x99c(r30)
/* 808109F0  80 1E 07 14 */	lwz r0, 0x714(r30)
/* 808109F4  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 808109F8  90 1E 07 14 */	stw r0, 0x714(r30)
/* 808109FC  7F C3 F3 78 */	mr r3, r30
/* 80810A00  38 80 00 10 */	li r4, 0x10
/* 80810A04  38 A0 00 02 */	li r5, 2
/* 80810A08  C0 3F 00 38 */	lfs f1, 0x38(r31)
/* 80810A0C  C0 5F 00 04 */	lfs f2, 4(r31)
/* 80810A10  4B FF 77 D1 */	bl bckSet__8daE_YM_cFiUcff
/* 80810A14  48 00 03 CC */	b lbl_80810DE0
lbl_80810A18:
/* 80810A18  28 00 00 02 */	cmplwi r0, 2
/* 80810A1C  40 82 00 2C */	bne lbl_80810A48
/* 80810A20  38 00 00 0F */	li r0, 0xf
/* 80810A24  B0 1E 06 F0 */	sth r0, 0x6f0(r30)
/* 80810A28  38 00 01 45 */	li r0, 0x145
/* 80810A2C  90 1E 09 A0 */	stw r0, 0x9a0(r30)
/* 80810A30  3C 00 00 01 */	lis r0, 1
/* 80810A34  90 1E 09 9C */	stw r0, 0x99c(r30)
/* 80810A38  80 1E 07 14 */	lwz r0, 0x714(r30)
/* 80810A3C  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 80810A40  90 1E 07 14 */	stw r0, 0x714(r30)
/* 80810A44  48 00 00 0C */	b lbl_80810A50
lbl_80810A48:
/* 80810A48  38 00 00 07 */	li r0, 7
/* 80810A4C  B0 1E 06 F0 */	sth r0, 0x6f0(r30)
lbl_80810A50:
/* 80810A50  38 00 00 01 */	li r0, 1
/* 80810A54  90 1E 06 98 */	stw r0, 0x698(r30)
/* 80810A58  48 00 03 88 */	b lbl_80810DE0
lbl_80810A5C:
/* 80810A5C  38 7E 06 DC */	addi r3, r30, 0x6dc
/* 80810A60  C0 3F 00 54 */	lfs f1, 0x54(r31)
/* 80810A64  C0 5F 00 48 */	lfs f2, 0x48(r31)
/* 80810A68  4B A5 FC D9 */	bl cLib_chaseF__FPfff
/* 80810A6C  7F C3 F3 78 */	mr r3, r30
/* 80810A70  38 80 00 01 */	li r4, 1
/* 80810A74  4B FF 93 35 */	bl setMoveSound__8daE_YM_cFi
/* 80810A78  C0 5E 04 D8 */	lfs f2, 0x4d8(r30)
/* 80810A7C  C0 1E 04 D0 */	lfs f0, 0x4d0(r30)
/* 80810A80  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80810A84  C0 3F 00 04 */	lfs f1, 4(r31)
/* 80810A88  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 80810A8C  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 80810A90  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 80810A94  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 80810A98  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 80810A9C  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 80810AA0  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 80810AA4  38 61 00 34 */	addi r3, r1, 0x34
/* 80810AA8  38 81 00 40 */	addi r4, r1, 0x40
/* 80810AAC  4B B3 68 F1 */	bl PSVECSquareDistance
/* 80810AB0  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80810AB4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80810AB8  40 81 00 58 */	ble lbl_80810B10
/* 80810ABC  FC 00 08 34 */	frsqrte f0, f1
/* 80810AC0  C8 9F 00 10 */	lfd f4, 0x10(r31)
/* 80810AC4  FC 44 00 32 */	fmul f2, f4, f0
/* 80810AC8  C8 7F 00 18 */	lfd f3, 0x18(r31)
/* 80810ACC  FC 00 00 32 */	fmul f0, f0, f0
/* 80810AD0  FC 01 00 32 */	fmul f0, f1, f0
/* 80810AD4  FC 03 00 28 */	fsub f0, f3, f0
/* 80810AD8  FC 02 00 32 */	fmul f0, f2, f0
/* 80810ADC  FC 44 00 32 */	fmul f2, f4, f0
/* 80810AE0  FC 00 00 32 */	fmul f0, f0, f0
/* 80810AE4  FC 01 00 32 */	fmul f0, f1, f0
/* 80810AE8  FC 03 00 28 */	fsub f0, f3, f0
/* 80810AEC  FC 02 00 32 */	fmul f0, f2, f0
/* 80810AF0  FC 44 00 32 */	fmul f2, f4, f0
/* 80810AF4  FC 00 00 32 */	fmul f0, f0, f0
/* 80810AF8  FC 01 00 32 */	fmul f0, f1, f0
/* 80810AFC  FC 03 00 28 */	fsub f0, f3, f0
/* 80810B00  FC 02 00 32 */	fmul f0, f2, f0
/* 80810B04  FC 21 00 32 */	fmul f1, f1, f0
/* 80810B08  FC 20 08 18 */	frsp f1, f1
/* 80810B0C  48 00 00 88 */	b lbl_80810B94
lbl_80810B10:
/* 80810B10  C8 1F 00 20 */	lfd f0, 0x20(r31)
/* 80810B14  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80810B18  40 80 00 10 */	bge lbl_80810B28
/* 80810B1C  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80810B20  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 80810B24  48 00 00 70 */	b lbl_80810B94
lbl_80810B28:
/* 80810B28  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80810B2C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80810B30  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 80810B34  3C 00 7F 80 */	lis r0, 0x7f80
/* 80810B38  7C 03 00 00 */	cmpw r3, r0
/* 80810B3C  41 82 00 14 */	beq lbl_80810B50
/* 80810B40  40 80 00 40 */	bge lbl_80810B80
/* 80810B44  2C 03 00 00 */	cmpwi r3, 0
/* 80810B48  41 82 00 20 */	beq lbl_80810B68
/* 80810B4C  48 00 00 34 */	b lbl_80810B80
lbl_80810B50:
/* 80810B50  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80810B54  41 82 00 0C */	beq lbl_80810B60
/* 80810B58  38 00 00 01 */	li r0, 1
/* 80810B5C  48 00 00 28 */	b lbl_80810B84
lbl_80810B60:
/* 80810B60  38 00 00 02 */	li r0, 2
/* 80810B64  48 00 00 20 */	b lbl_80810B84
lbl_80810B68:
/* 80810B68  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80810B6C  41 82 00 0C */	beq lbl_80810B78
/* 80810B70  38 00 00 05 */	li r0, 5
/* 80810B74  48 00 00 10 */	b lbl_80810B84
lbl_80810B78:
/* 80810B78  38 00 00 03 */	li r0, 3
/* 80810B7C  48 00 00 08 */	b lbl_80810B84
lbl_80810B80:
/* 80810B80  38 00 00 04 */	li r0, 4
lbl_80810B84:
/* 80810B84  2C 00 00 01 */	cmpwi r0, 1
/* 80810B88  40 82 00 0C */	bne lbl_80810B94
/* 80810B8C  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80810B90  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
lbl_80810B94:
/* 80810B94  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80810B98  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80810B9C  40 80 00 24 */	bge lbl_80810BC0
/* 80810BA0  38 7E 04 D0 */	addi r3, r30, 0x4d0
/* 80810BA4  38 81 00 4C */	addi r4, r1, 0x4c
/* 80810BA8  4B A6 00 5D */	bl cLib_targetAngleY__FPC3VecPC3Vec
/* 80810BAC  7C 64 1B 78 */	mr r4, r3
/* 80810BB0  38 7E 04 E6 */	addi r3, r30, 0x4e6
/* 80810BB4  38 A0 10 00 */	li r5, 0x1000
/* 80810BB8  4B A5 FF D9 */	bl cLib_chaseAngleS__FPsss
/* 80810BBC  48 00 00 28 */	b lbl_80810BE4
lbl_80810BC0:
/* 80810BC0  38 7E 04 D0 */	addi r3, r30, 0x4d0
/* 80810BC4  38 81 00 4C */	addi r4, r1, 0x4c
/* 80810BC8  4B A6 00 3D */	bl cLib_targetAngleY__FPC3VecPC3Vec
/* 80810BCC  7C 64 1B 78 */	mr r4, r3
/* 80810BD0  38 7E 04 E6 */	addi r3, r30, 0x4e6
/* 80810BD4  38 A0 00 08 */	li r5, 8
/* 80810BD8  38 C0 20 00 */	li r6, 0x2000
/* 80810BDC  38 E0 01 00 */	li r7, 0x100
/* 80810BE0  4B A5 F9 61 */	bl cLib_addCalcAngleS__FPsssss
lbl_80810BE4:
/* 80810BE4  A8 1E 04 E6 */	lha r0, 0x4e6(r30)
/* 80810BE8  B0 1E 04 DE */	sth r0, 0x4de(r30)
/* 80810BEC  38 7E 05 2C */	addi r3, r30, 0x52c
/* 80810BF0  C0 3F 00 2C */	lfs f1, 0x2c(r31)
/* 80810BF4  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80810BF8  4B A5 FB 49 */	bl cLib_chaseF__FPfff
/* 80810BFC  80 1E 07 8C */	lwz r0, 0x78c(r30)
/* 80810C00  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 80810C04  41 82 00 38 */	beq lbl_80810C3C
/* 80810C08  88 7E 06 A5 */	lbz r3, 0x6a5(r30)
/* 80810C0C  38 03 00 02 */	addi r0, r3, 2
/* 80810C10  98 1E 06 A5 */	stb r0, 0x6a5(r30)
/* 80810C14  88 1E 06 A5 */	lbz r0, 0x6a5(r30)
/* 80810C18  28 00 00 14 */	cmplwi r0, 0x14
/* 80810C1C  41 80 00 34 */	blt lbl_80810C50
/* 80810C20  7F C3 F3 78 */	mr r3, r30
/* 80810C24  48 00 37 7D */	bl checkBeforeGround__8daE_YM_cFv
/* 80810C28  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80810C2C  41 82 00 24 */	beq lbl_80810C50
/* 80810C30  38 00 00 00 */	li r0, 0
/* 80810C34  98 1E 06 A5 */	stb r0, 0x6a5(r30)
/* 80810C38  48 00 00 18 */	b lbl_80810C50
lbl_80810C3C:
/* 80810C3C  88 7E 06 A5 */	lbz r3, 0x6a5(r30)
/* 80810C40  28 03 00 00 */	cmplwi r3, 0
/* 80810C44  41 82 00 0C */	beq lbl_80810C50
/* 80810C48  38 03 FF FF */	addi r0, r3, -1
/* 80810C4C  98 1E 06 A5 */	stb r0, 0x6a5(r30)
lbl_80810C50:
/* 80810C50  C0 5E 04 D8 */	lfs f2, 0x4d8(r30)
/* 80810C54  C0 1E 04 D0 */	lfs f0, 0x4d0(r30)
/* 80810C58  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80810C5C  C0 3F 00 04 */	lfs f1, 4(r31)
/* 80810C60  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 80810C64  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 80810C68  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 80810C6C  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80810C70  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 80810C74  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 80810C78  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80810C7C  38 61 00 1C */	addi r3, r1, 0x1c
/* 80810C80  38 81 00 28 */	addi r4, r1, 0x28
/* 80810C84  4B B3 67 19 */	bl PSVECSquareDistance
/* 80810C88  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80810C8C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80810C90  40 81 00 58 */	ble lbl_80810CE8
/* 80810C94  FC 00 08 34 */	frsqrte f0, f1
/* 80810C98  C8 9F 00 10 */	lfd f4, 0x10(r31)
/* 80810C9C  FC 44 00 32 */	fmul f2, f4, f0
/* 80810CA0  C8 7F 00 18 */	lfd f3, 0x18(r31)
/* 80810CA4  FC 00 00 32 */	fmul f0, f0, f0
/* 80810CA8  FC 01 00 32 */	fmul f0, f1, f0
/* 80810CAC  FC 03 00 28 */	fsub f0, f3, f0
/* 80810CB0  FC 02 00 32 */	fmul f0, f2, f0
/* 80810CB4  FC 44 00 32 */	fmul f2, f4, f0
/* 80810CB8  FC 00 00 32 */	fmul f0, f0, f0
/* 80810CBC  FC 01 00 32 */	fmul f0, f1, f0
/* 80810CC0  FC 03 00 28 */	fsub f0, f3, f0
/* 80810CC4  FC 02 00 32 */	fmul f0, f2, f0
/* 80810CC8  FC 44 00 32 */	fmul f2, f4, f0
/* 80810CCC  FC 00 00 32 */	fmul f0, f0, f0
/* 80810CD0  FC 01 00 32 */	fmul f0, f1, f0
/* 80810CD4  FC 03 00 28 */	fsub f0, f3, f0
/* 80810CD8  FC 02 00 32 */	fmul f0, f2, f0
/* 80810CDC  FC 21 00 32 */	fmul f1, f1, f0
/* 80810CE0  FC 20 08 18 */	frsp f1, f1
/* 80810CE4  48 00 00 88 */	b lbl_80810D6C
lbl_80810CE8:
/* 80810CE8  C8 1F 00 20 */	lfd f0, 0x20(r31)
/* 80810CEC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80810CF0  40 80 00 10 */	bge lbl_80810D00
/* 80810CF4  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80810CF8  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 80810CFC  48 00 00 70 */	b lbl_80810D6C
lbl_80810D00:
/* 80810D00  D0 21 00 08 */	stfs f1, 8(r1)
/* 80810D04  80 81 00 08 */	lwz r4, 8(r1)
/* 80810D08  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 80810D0C  3C 00 7F 80 */	lis r0, 0x7f80
/* 80810D10  7C 03 00 00 */	cmpw r3, r0
/* 80810D14  41 82 00 14 */	beq lbl_80810D28
/* 80810D18  40 80 00 40 */	bge lbl_80810D58
/* 80810D1C  2C 03 00 00 */	cmpwi r3, 0
/* 80810D20  41 82 00 20 */	beq lbl_80810D40
/* 80810D24  48 00 00 34 */	b lbl_80810D58
lbl_80810D28:
/* 80810D28  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80810D2C  41 82 00 0C */	beq lbl_80810D38
/* 80810D30  38 00 00 01 */	li r0, 1
/* 80810D34  48 00 00 28 */	b lbl_80810D5C
lbl_80810D38:
/* 80810D38  38 00 00 02 */	li r0, 2
/* 80810D3C  48 00 00 20 */	b lbl_80810D5C
lbl_80810D40:
/* 80810D40  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80810D44  41 82 00 0C */	beq lbl_80810D50
/* 80810D48  38 00 00 05 */	li r0, 5
/* 80810D4C  48 00 00 10 */	b lbl_80810D5C
lbl_80810D50:
/* 80810D50  38 00 00 03 */	li r0, 3
/* 80810D54  48 00 00 08 */	b lbl_80810D5C
lbl_80810D58:
/* 80810D58  38 00 00 04 */	li r0, 4
lbl_80810D5C:
/* 80810D5C  2C 00 00 01 */	cmpwi r0, 1
/* 80810D60  40 82 00 0C */	bne lbl_80810D6C
/* 80810D64  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80810D68  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
lbl_80810D6C:
/* 80810D6C  C0 1F 00 30 */	lfs f0, 0x30(r31)
/* 80810D70  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80810D74  40 80 00 6C */	bge lbl_80810DE0
/* 80810D78  C0 3F 00 54 */	lfs f1, 0x54(r31)
/* 80810D7C  C0 1E 06 DC */	lfs f0, 0x6dc(r30)
/* 80810D80  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80810D84  40 82 00 5C */	bne lbl_80810DE0
/* 80810D88  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80810D8C  D0 1E 05 2C */	stfs f0, 0x52c(r30)
/* 80810D90  38 00 00 04 */	li r0, 4
/* 80810D94  90 1E 06 98 */	stw r0, 0x698(r30)
/* 80810D98  38 00 00 64 */	li r0, 0x64
/* 80810D9C  B0 1E 06 F0 */	sth r0, 0x6f0(r30)
/* 80810DA0  7F C3 F3 78 */	mr r3, r30
/* 80810DA4  38 80 00 0F */	li r4, 0xf
/* 80810DA8  38 A0 00 02 */	li r5, 2
/* 80810DAC  C0 3F 00 80 */	lfs f1, 0x80(r31)
/* 80810DB0  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80810DB4  4B FF 74 2D */	bl bckSet__8daE_YM_cFiUcff
/* 80810DB8  48 00 00 28 */	b lbl_80810DE0
lbl_80810DBC:
/* 80810DBC  A8 1E 06 F0 */	lha r0, 0x6f0(r30)
/* 80810DC0  2C 00 00 00 */	cmpwi r0, 0
/* 80810DC4  40 82 00 1C */	bne lbl_80810DE0
/* 80810DC8  80 1E 07 14 */	lwz r0, 0x714(r30)
/* 80810DCC  60 00 00 04 */	ori r0, r0, 4
/* 80810DD0  90 1E 07 14 */	stw r0, 0x714(r30)
/* 80810DD4  7F C3 F3 78 */	mr r3, r30
/* 80810DD8  38 80 00 0D */	li r4, 0xd
/* 80810DDC  4B FF 91 C1 */	bl setActionMode__8daE_YM_cFi
lbl_80810DE0:
/* 80810DE0  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80810DE4  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 80810DE8  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80810DEC  7C 08 03 A6 */	mtlr r0
/* 80810DF0  38 21 00 60 */	addi r1, r1, 0x60
/* 80810DF4  4E 80 00 20 */	blr 
