lbl_807352AC:
/* 807352AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 807352B0  7C 08 02 A6 */	mflr r0
/* 807352B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 807352B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 807352BC  93 C1 00 08 */	stw r30, 8(r1)
/* 807352C0  7C 7E 1B 79 */	or. r30, r3, r3
/* 807352C4  7C 9F 23 78 */	mr r31, r4
/* 807352C8  41 82 00 94 */	beq lbl_8073535C
/* 807352CC  3C 60 80 3B */	lis r3, __vt__8dCcD_Sph@ha /* 0x803ABFC0@ha */
/* 807352D0  38 63 BF C0 */	addi r3, r3, __vt__8dCcD_Sph@l /* 0x803ABFC0@l */
/* 807352D4  90 7E 00 3C */	stw r3, 0x3c(r30)
/* 807352D8  38 03 00 2C */	addi r0, r3, 0x2c
/* 807352DC  90 1E 01 20 */	stw r0, 0x120(r30)
/* 807352E0  38 03 00 84 */	addi r0, r3, 0x84
/* 807352E4  90 1E 01 34 */	stw r0, 0x134(r30)
/* 807352E8  34 1E 01 04 */	addic. r0, r30, 0x104
/* 807352EC  41 82 00 54 */	beq lbl_80735340
/* 807352F0  3C 60 80 3C */	lis r3, __vt__12cCcD_SphAttr@ha /* 0x803C3540@ha */
/* 807352F4  38 63 35 40 */	addi r3, r3, __vt__12cCcD_SphAttr@l /* 0x803C3540@l */
/* 807352F8  90 7E 01 20 */	stw r3, 0x120(r30)
/* 807352FC  38 03 00 58 */	addi r0, r3, 0x58
/* 80735300  90 1E 01 34 */	stw r0, 0x134(r30)
/* 80735304  34 1E 01 24 */	addic. r0, r30, 0x124
/* 80735308  41 82 00 10 */	beq lbl_80735318
/* 8073530C  3C 60 80 73 */	lis r3, __vt__8cM3dGSph@ha /* 0x80735FB0@ha */
/* 80735310  38 03 5F B0 */	addi r0, r3, __vt__8cM3dGSph@l /* 0x80735FB0@l */
/* 80735314  90 1E 01 34 */	stw r0, 0x134(r30)
lbl_80735318:
/* 80735318  34 1E 01 04 */	addic. r0, r30, 0x104
/* 8073531C  41 82 00 24 */	beq lbl_80735340
/* 80735320  3C 60 80 3C */	lis r3, __vt__14cCcD_ShapeAttr@ha /* 0x803C36D0@ha */
/* 80735324  38 03 36 D0 */	addi r0, r3, __vt__14cCcD_ShapeAttr@l /* 0x803C36D0@l */
/* 80735328  90 1E 01 20 */	stw r0, 0x120(r30)
/* 8073532C  34 1E 01 04 */	addic. r0, r30, 0x104
/* 80735330  41 82 00 10 */	beq lbl_80735340
/* 80735334  3C 60 80 73 */	lis r3, __vt__8cM3dGAab@ha /* 0x80735FA4@ha */
/* 80735338  38 03 5F A4 */	addi r0, r3, __vt__8cM3dGAab@l /* 0x80735FA4@l */
/* 8073533C  90 1E 01 1C */	stw r0, 0x11c(r30)
lbl_80735340:
/* 80735340  7F C3 F3 78 */	mr r3, r30
/* 80735344  38 80 00 00 */	li r4, 0
/* 80735348  4B 94 ED 9D */	bl __dt__12dCcD_GObjInfFv
/* 8073534C  7F E0 07 35 */	extsh. r0, r31
/* 80735350  40 81 00 0C */	ble lbl_8073535C
/* 80735354  7F C3 F3 78 */	mr r3, r30
/* 80735358  4B B9 99 E5 */	bl __dl__FPv
lbl_8073535C:
/* 8073535C  7F C3 F3 78 */	mr r3, r30
/* 80735360  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80735364  83 C1 00 08 */	lwz r30, 8(r1)
/* 80735368  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8073536C  7C 08 03 A6 */	mtlr r0
/* 80735370  38 21 00 10 */	addi r1, r1, 0x10
/* 80735374  4E 80 00 20 */	blr 
