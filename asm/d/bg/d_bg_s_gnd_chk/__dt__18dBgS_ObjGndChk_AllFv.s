lbl_800778E8:
/* 800778E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800778EC  7C 08 02 A6 */	mflr r0
/* 800778F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800778F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800778F8  93 C1 00 08 */	stw r30, 8(r1)
/* 800778FC  7C 7E 1B 79 */	or. r30, r3, r3
/* 80077900  7C 9F 23 78 */	mr r31, r4
/* 80077904  41 82 00 68 */	beq lbl_8007796C
/* 80077908  3C 80 80 3B */	lis r4, __vt__18dBgS_ObjGndChk_All@ha /* 0x803AB6E8@ha */
/* 8007790C  38 84 B6 E8 */	addi r4, r4, __vt__18dBgS_ObjGndChk_All@l /* 0x803AB6E8@l */
/* 80077910  90 9E 00 10 */	stw r4, 0x10(r30)
/* 80077914  38 04 00 0C */	addi r0, r4, 0xc
/* 80077918  90 1E 00 20 */	stw r0, 0x20(r30)
/* 8007791C  38 04 00 18 */	addi r0, r4, 0x18
/* 80077920  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 80077924  38 04 00 24 */	addi r0, r4, 0x24
/* 80077928  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 8007792C  41 82 00 30 */	beq lbl_8007795C
/* 80077930  3C 80 80 3A */	lis r4, __vt__14dBgS_ObjGndChk@ha /* 0x803A382C@ha */
/* 80077934  38 84 38 2C */	addi r4, r4, __vt__14dBgS_ObjGndChk@l /* 0x803A382C@l */
/* 80077938  90 9E 00 10 */	stw r4, 0x10(r30)
/* 8007793C  38 04 00 0C */	addi r0, r4, 0xc
/* 80077940  90 1E 00 20 */	stw r0, 0x20(r30)
/* 80077944  38 04 00 18 */	addi r0, r4, 0x18
/* 80077948  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 8007794C  38 04 00 24 */	addi r0, r4, 0x24
/* 80077950  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 80077954  38 80 00 00 */	li r4, 0
/* 80077958  4B FF FC 99 */	bl __dt__11dBgS_GndChkFv
lbl_8007795C:
/* 8007795C  7F E0 07 35 */	extsh. r0, r31
/* 80077960  40 81 00 0C */	ble lbl_8007796C
/* 80077964  7F C3 F3 78 */	mr r3, r30
/* 80077968  48 25 73 D5 */	bl __dl__FPv
lbl_8007796C:
/* 8007796C  7F C3 F3 78 */	mr r3, r30
/* 80077970  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80077974  83 C1 00 08 */	lwz r30, 8(r1)
/* 80077978  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8007797C  7C 08 03 A6 */	mtlr r0
/* 80077980  38 21 00 10 */	addi r1, r1, 0x10
/* 80077984  4E 80 00 20 */	blr 
