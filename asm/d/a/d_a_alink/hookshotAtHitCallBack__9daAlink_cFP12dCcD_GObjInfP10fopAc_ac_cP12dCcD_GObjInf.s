lbl_801083C8:
/* 801083C8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801083CC  7C 08 02 A6 */	mflr r0
/* 801083D0  90 01 00 24 */	stw r0, 0x24(r1)
/* 801083D4  39 61 00 20 */	addi r11, r1, 0x20
/* 801083D8  48 25 9E 01 */	bl _savegpr_28
/* 801083DC  7C 7E 1B 78 */	mr r30, r3
/* 801083E0  7C 9D 23 78 */	mr r29, r4
/* 801083E4  7C BF 2B 79 */	or. r31, r5, r5
/* 801083E8  7C DC 33 78 */	mr r28, r6
/* 801083EC  41 82 01 98 */	beq lbl_80108584
/* 801083F0  7F E3 FB 78 */	mr r3, r31
/* 801083F4  4B F1 08 ED */	bl fopAc_IsActor__FPv
/* 801083F8  2C 03 00 00 */	cmpwi r3, 0
/* 801083FC  41 82 01 88 */	beq lbl_80108584
/* 80108400  80 1C 00 9C */	lwz r0, 0x9c(r28)
/* 80108404  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 80108408  40 82 01 7C */	bne lbl_80108584
/* 8010840C  3B BD 00 78 */	addi r29, r29, 0x78
/* 80108410  38 7E 37 EC */	addi r3, r30, 0x37ec
/* 80108414  7F A4 EB 78 */	mr r4, r29
/* 80108418  48 23 EF 85 */	bl PSVECSquareDistance
/* 8010841C  C0 02 92 C0 */	lfs f0, lit_6108(r2)
/* 80108420  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80108424  40 81 00 58 */	ble lbl_8010847C
/* 80108428  FC 00 08 34 */	frsqrte f0, f1
/* 8010842C  C8 82 92 E8 */	lfd f4, lit_6846(r2)
/* 80108430  FC 44 00 32 */	fmul f2, f4, f0
/* 80108434  C8 62 92 F0 */	lfd f3, lit_6847(r2)
/* 80108438  FC 00 00 32 */	fmul f0, f0, f0
/* 8010843C  FC 01 00 32 */	fmul f0, f1, f0
/* 80108440  FC 03 00 28 */	fsub f0, f3, f0
/* 80108444  FC 02 00 32 */	fmul f0, f2, f0
/* 80108448  FC 44 00 32 */	fmul f2, f4, f0
/* 8010844C  FC 00 00 32 */	fmul f0, f0, f0
/* 80108450  FC 01 00 32 */	fmul f0, f1, f0
/* 80108454  FC 03 00 28 */	fsub f0, f3, f0
/* 80108458  FC 02 00 32 */	fmul f0, f2, f0
/* 8010845C  FC 44 00 32 */	fmul f2, f4, f0
/* 80108460  FC 00 00 32 */	fmul f0, f0, f0
/* 80108464  FC 01 00 32 */	fmul f0, f1, f0
/* 80108468  FC 03 00 28 */	fsub f0, f3, f0
/* 8010846C  FC 02 00 32 */	fmul f0, f2, f0
/* 80108470  FC 21 00 32 */	fmul f1, f1, f0
/* 80108474  FC 20 08 18 */	frsp f1, f1
/* 80108478  48 00 00 88 */	b lbl_80108500
lbl_8010847C:
/* 8010847C  C8 02 92 F8 */	lfd f0, lit_6848(r2)
/* 80108480  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80108484  40 80 00 10 */	bge lbl_80108494
/* 80108488  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 8010848C  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 80108490  48 00 00 70 */	b lbl_80108500
lbl_80108494:
/* 80108494  D0 21 00 08 */	stfs f1, 8(r1)
/* 80108498  80 81 00 08 */	lwz r4, 8(r1)
/* 8010849C  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 801084A0  3C 00 7F 80 */	lis r0, 0x7f80
/* 801084A4  7C 03 00 00 */	cmpw r3, r0
/* 801084A8  41 82 00 14 */	beq lbl_801084BC
/* 801084AC  40 80 00 40 */	bge lbl_801084EC
/* 801084B0  2C 03 00 00 */	cmpwi r3, 0
/* 801084B4  41 82 00 20 */	beq lbl_801084D4
/* 801084B8  48 00 00 34 */	b lbl_801084EC
lbl_801084BC:
/* 801084BC  54 80 02 7F */	clrlwi. r0, r4, 9
/* 801084C0  41 82 00 0C */	beq lbl_801084CC
/* 801084C4  38 00 00 01 */	li r0, 1
/* 801084C8  48 00 00 28 */	b lbl_801084F0
lbl_801084CC:
/* 801084CC  38 00 00 02 */	li r0, 2
/* 801084D0  48 00 00 20 */	b lbl_801084F0
lbl_801084D4:
/* 801084D4  54 80 02 7F */	clrlwi. r0, r4, 9
/* 801084D8  41 82 00 0C */	beq lbl_801084E4
/* 801084DC  38 00 00 05 */	li r0, 5
/* 801084E0  48 00 00 10 */	b lbl_801084F0
lbl_801084E4:
/* 801084E4  38 00 00 03 */	li r0, 3
/* 801084E8  48 00 00 08 */	b lbl_801084F0
lbl_801084EC:
/* 801084EC  38 00 00 04 */	li r0, 4
lbl_801084F0:
/* 801084F0  2C 00 00 01 */	cmpwi r0, 1
/* 801084F4  40 82 00 0C */	bne lbl_80108500
/* 801084F8  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 801084FC  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
lbl_80108500:
/* 80108500  C0 1E 34 90 */	lfs f0, 0x3490(r30)
/* 80108504  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80108508  40 80 00 7C */	bge lbl_80108584
/* 8010850C  D0 3E 34 90 */	stfs f1, 0x3490(r30)
/* 80108510  7F C3 F3 78 */	mr r3, r30
/* 80108514  48 00 05 05 */	bl checkHookshotWait__9daAlink_cCFv
/* 80108518  2C 03 00 00 */	cmpwi r3, 0
/* 8010851C  41 82 00 2C */	beq lbl_80108548
/* 80108520  80 1F 04 9C */	lwz r0, 0x49c(r31)
/* 80108524  74 00 00 28 */	andis. r0, r0, 0x28
/* 80108528  41 82 00 14 */	beq lbl_8010853C
/* 8010852C  38 7E 28 4C */	addi r3, r30, 0x284c
/* 80108530  7F E4 FB 78 */	mr r4, r31
/* 80108534  48 05 67 85 */	bl setData__16daPy_actorKeep_cFP10fopAc_ac_c
/* 80108538  48 00 00 4C */	b lbl_80108584
lbl_8010853C:
/* 8010853C  C0 02 92 B8 */	lfs f0, lit_6040(r2)
/* 80108540  D0 1E 34 94 */	stfs f0, 0x3494(r30)
/* 80108544  48 00 00 40 */	b lbl_80108584
lbl_80108548:
/* 80108548  80 1C 00 9C */	lwz r0, 0x9c(r28)
/* 8010854C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80108550  40 82 00 2C */	bne lbl_8010857C
/* 80108554  38 7E 28 4C */	addi r3, r30, 0x284c
/* 80108558  7F E4 FB 78 */	mr r4, r31
/* 8010855C  48 05 67 5D */	bl setData__16daPy_actorKeep_cFP10fopAc_ac_c
/* 80108560  C0 1D 00 00 */	lfs f0, 0(r29)
/* 80108564  D0 1E 38 1C */	stfs f0, 0x381c(r30)
/* 80108568  C0 1D 00 04 */	lfs f0, 4(r29)
/* 8010856C  D0 1E 38 20 */	stfs f0, 0x3820(r30)
/* 80108570  C0 1D 00 08 */	lfs f0, 8(r29)
/* 80108574  D0 1E 38 24 */	stfs f0, 0x3824(r30)
/* 80108578  48 00 00 0C */	b lbl_80108584
lbl_8010857C:
/* 8010857C  C0 02 92 B8 */	lfs f0, lit_6040(r2)
/* 80108580  D0 1E 34 94 */	stfs f0, 0x3494(r30)
lbl_80108584:
/* 80108584  39 61 00 20 */	addi r11, r1, 0x20
/* 80108588  48 25 9C 9D */	bl _restgpr_28
/* 8010858C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80108590  7C 08 03 A6 */	mtlr r0
/* 80108594  38 21 00 20 */	addi r1, r1, 0x20
/* 80108598  4E 80 00 20 */	blr 
