lbl_809742DC:
/* 809742DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809742E0  7C 08 02 A6 */	mflr r0
/* 809742E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 809742E8  7C 60 1B 78 */	mr r0, r3
/* 809742EC  2C 04 00 00 */	cmpwi r4, 0
/* 809742F0  40 82 00 24 */	bne lbl_80974314
/* 809742F4  3C 60 80 43 */	lis r3, j3dSys@ha /* 0x80434AC8@ha */
/* 809742F8  38 63 4A C8 */	addi r3, r3, j3dSys@l /* 0x80434AC8@l */
/* 809742FC  80 A3 00 38 */	lwz r5, 0x38(r3)
/* 80974300  80 65 00 14 */	lwz r3, 0x14(r5)
/* 80974304  28 03 00 00 */	cmplwi r3, 0
/* 80974308  41 82 00 0C */	beq lbl_80974314
/* 8097430C  7C 04 03 78 */	mr r4, r0
/* 80974310  4B FF FD 81 */	bl ctrlJoint__11daNpcBouS_cFP8J3DJointP8J3DModel
lbl_80974314:
/* 80974314  38 60 00 01 */	li r3, 1
/* 80974318  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8097431C  7C 08 03 A6 */	mtlr r0
/* 80974320  38 21 00 10 */	addi r1, r1, 0x10
/* 80974324  4E 80 00 20 */	blr 
