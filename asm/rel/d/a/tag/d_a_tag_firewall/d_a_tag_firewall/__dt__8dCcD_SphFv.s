lbl_80D592D0:
/* 80D592D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D592D4  7C 08 02 A6 */	mflr r0
/* 80D592D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D592DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80D592E0  93 C1 00 08 */	stw r30, 8(r1)
/* 80D592E4  7C 7E 1B 79 */	or. r30, r3, r3
/* 80D592E8  7C 9F 23 78 */	mr r31, r4
/* 80D592EC  41 82 00 94 */	beq lbl_80D59380
/* 80D592F0  3C 60 80 3B */	lis r3, __vt__8dCcD_Sph@ha /* 0x803ABFC0@ha */
/* 80D592F4  38 63 BF C0 */	addi r3, r3, __vt__8dCcD_Sph@l /* 0x803ABFC0@l */
/* 80D592F8  90 7E 00 3C */	stw r3, 0x3c(r30)
/* 80D592FC  38 03 00 2C */	addi r0, r3, 0x2c
/* 80D59300  90 1E 01 20 */	stw r0, 0x120(r30)
/* 80D59304  38 03 00 84 */	addi r0, r3, 0x84
/* 80D59308  90 1E 01 34 */	stw r0, 0x134(r30)
/* 80D5930C  34 1E 01 04 */	addic. r0, r30, 0x104
/* 80D59310  41 82 00 54 */	beq lbl_80D59364
/* 80D59314  3C 60 80 3C */	lis r3, __vt__12cCcD_SphAttr@ha /* 0x803C3540@ha */
/* 80D59318  38 63 35 40 */	addi r3, r3, __vt__12cCcD_SphAttr@l /* 0x803C3540@l */
/* 80D5931C  90 7E 01 20 */	stw r3, 0x120(r30)
/* 80D59320  38 03 00 58 */	addi r0, r3, 0x58
/* 80D59324  90 1E 01 34 */	stw r0, 0x134(r30)
/* 80D59328  34 1E 01 24 */	addic. r0, r30, 0x124
/* 80D5932C  41 82 00 10 */	beq lbl_80D5933C
/* 80D59330  3C 60 80 D6 */	lis r3, __vt__8cM3dGSph@ha /* 0x80D595B0@ha */
/* 80D59334  38 03 95 B0 */	addi r0, r3, __vt__8cM3dGSph@l /* 0x80D595B0@l */
/* 80D59338  90 1E 01 34 */	stw r0, 0x134(r30)
lbl_80D5933C:
/* 80D5933C  34 1E 01 04 */	addic. r0, r30, 0x104
/* 80D59340  41 82 00 24 */	beq lbl_80D59364
/* 80D59344  3C 60 80 3C */	lis r3, __vt__14cCcD_ShapeAttr@ha /* 0x803C36D0@ha */
/* 80D59348  38 03 36 D0 */	addi r0, r3, __vt__14cCcD_ShapeAttr@l /* 0x803C36D0@l */
/* 80D5934C  90 1E 01 20 */	stw r0, 0x120(r30)
/* 80D59350  34 1E 01 04 */	addic. r0, r30, 0x104
/* 80D59354  41 82 00 10 */	beq lbl_80D59364
/* 80D59358  3C 60 80 D6 */	lis r3, __vt__8cM3dGAab@ha /* 0x80D595A4@ha */
/* 80D5935C  38 03 95 A4 */	addi r0, r3, __vt__8cM3dGAab@l /* 0x80D595A4@l */
/* 80D59360  90 1E 01 1C */	stw r0, 0x11c(r30)
lbl_80D59364:
/* 80D59364  7F C3 F3 78 */	mr r3, r30
/* 80D59368  38 80 00 00 */	li r4, 0
/* 80D5936C  4B 32 AD 79 */	bl __dt__12dCcD_GObjInfFv
/* 80D59370  7F E0 07 35 */	extsh. r0, r31
/* 80D59374  40 81 00 0C */	ble lbl_80D59380
/* 80D59378  7F C3 F3 78 */	mr r3, r30
/* 80D5937C  4B 57 59 C1 */	bl __dl__FPv
lbl_80D59380:
/* 80D59380  7F C3 F3 78 */	mr r3, r30
/* 80D59384  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80D59388  83 C1 00 08 */	lwz r30, 8(r1)
/* 80D5938C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D59390  7C 08 03 A6 */	mtlr r0
/* 80D59394  38 21 00 10 */	addi r1, r1, 0x10
/* 80D59398  4E 80 00 20 */	blr 
