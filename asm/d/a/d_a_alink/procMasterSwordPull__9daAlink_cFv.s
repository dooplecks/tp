lbl_8011ED8C:
/* 8011ED8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011ED90  7C 08 02 A6 */	mflr r0
/* 8011ED94  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011ED98  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011ED9C  93 C1 00 08 */	stw r30, 8(r1)
/* 8011EDA0  7C 7E 1B 78 */	mr r30, r3
/* 8011EDA4  3B FE 1F D0 */	addi r31, r30, 0x1fd0
/* 8011EDA8  7F E3 FB 78 */	mr r3, r31
/* 8011EDAC  48 03 F7 21 */	bl checkAnmEnd__16daPy_frameCtrl_cFv
/* 8011EDB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8011EDB4  41 82 00 1C */	beq lbl_8011EDD0
/* 8011EDB8  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 8011EDBC  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 8011EDC0  38 63 4F F8 */	addi r3, r3, 0x4ff8
/* 8011EDC4  80 9E 31 84 */	lwz r4, 0x3184(r30)
/* 8011EDC8  4B F2 93 B5 */	bl cutEnd__16dEvent_manager_cFi
/* 8011EDCC  48 00 00 58 */	b lbl_8011EE24
lbl_8011EDD0:
/* 8011EDD0  C0 3F 00 10 */	lfs f1, 0x10(r31)
/* 8011EDD4  C0 02 93 80 */	lfs f0, lit_8780(r2)
/* 8011EDD8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011EDDC  4C 41 13 82 */	cror 2, 1, 2
/* 8011EDE0  40 82 00 10 */	bne lbl_8011EDF0
/* 8011EDE4  38 00 00 0A */	li r0, 0xa
/* 8011EDE8  98 1E 2F 93 */	stb r0, 0x2f93(r30)
/* 8011EDEC  48 00 00 38 */	b lbl_8011EE24
lbl_8011EDF0:
/* 8011EDF0  C0 02 93 34 */	lfs f0, lit_7710(r2)
/* 8011EDF4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011EDF8  4C 41 13 82 */	cror 2, 1, 2
/* 8011EDFC  40 82 00 10 */	bne lbl_8011EE0C
/* 8011EE00  38 00 00 00 */	li r0, 0
/* 8011EE04  B0 1E 30 10 */	sth r0, 0x3010(r30)
/* 8011EE08  48 00 00 1C */	b lbl_8011EE24
lbl_8011EE0C:
/* 8011EE0C  C0 02 92 B8 */	lfs f0, lit_6040(r2)
/* 8011EE10  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011EE14  4C 41 13 82 */	cror 2, 1, 2
/* 8011EE18  40 82 00 0C */	bne lbl_8011EE24
/* 8011EE1C  38 00 00 04 */	li r0, 4
/* 8011EE20  B0 1E 30 10 */	sth r0, 0x3010(r30)
lbl_8011EE24:
/* 8011EE24  38 60 00 01 */	li r3, 1
/* 8011EE28  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011EE2C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8011EE30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011EE34  7C 08 03 A6 */	mtlr r0
/* 8011EE38  38 21 00 10 */	addi r1, r1, 0x10
/* 8011EE3C  4E 80 00 20 */	blr 
