lbl_80685948:
/* 80685948  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8068594C  7C 08 02 A6 */	mflr r0
/* 80685950  90 01 00 14 */	stw r0, 0x14(r1)
/* 80685954  7C 60 1B 78 */	mr r0, r3
/* 80685958  2C 04 00 00 */	cmpwi r4, 0
/* 8068595C  40 82 00 24 */	bne lbl_80685980
/* 80685960  3C 60 80 43 */	lis r3, j3dSys@ha /* 0x80434AC8@ha */
/* 80685964  38 63 4A C8 */	addi r3, r3, j3dSys@l /* 0x80434AC8@l */
/* 80685968  80 A3 00 38 */	lwz r5, 0x38(r3)
/* 8068596C  80 65 00 14 */	lwz r3, 0x14(r5)
/* 80685970  28 03 00 00 */	cmplwi r3, 0
/* 80685974  41 82 00 0C */	beq lbl_80685980
/* 80685978  7C 04 03 78 */	mr r4, r0
/* 8068597C  4B FF FE E1 */	bl ctrlJoint__8daE_BG_cFP8J3DJointP8J3DModel
lbl_80685980:
/* 80685980  38 60 00 01 */	li r3, 1
/* 80685984  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80685988  7C 08 03 A6 */	mtlr r0
/* 8068598C  38 21 00 10 */	addi r1, r1, 0x10
/* 80685990  4E 80 00 20 */	blr 