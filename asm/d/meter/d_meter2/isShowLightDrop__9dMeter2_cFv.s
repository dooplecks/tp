lbl_802256DC:
/* 802256DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802256E0  7C 08 02 A6 */	mflr r0
/* 802256E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802256E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802256EC  93 C1 00 08 */	stw r30, 8(r1)
/* 802256F0  7C 7F 1B 78 */	mr r31, r3
/* 802256F4  3C 60 80 43 */	lis r3, g_drawHIO@ha /* 0x8042EBC8@ha */
/* 802256F8  38 63 EB C8 */	addi r3, r3, g_drawHIO@l /* 0x8042EBC8@l */
/* 802256FC  88 03 0F 24 */	lbz r0, 0xf24(r3)
/* 80225700  28 00 00 00 */	cmplwi r0, 0
/* 80225704  40 82 01 80 */	bne lbl_80225884
/* 80225708  80 1F 01 24 */	lwz r0, 0x124(r31)
/* 8022570C  54 00 04 63 */	rlwinm. r0, r0, 0, 0x11, 0x11
/* 80225710  40 82 01 6C */	bne lbl_8022587C
/* 80225714  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80225718  3B C3 61 C0 */	addi r30, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 8022571C  38 7E 01 14 */	addi r3, r30, 0x114
/* 80225720  88 9E 4E 0C */	lbz r4, 0x4e0c(r30)
/* 80225724  4B E0 EC 79 */	bl isLightDropGetFlag__16dSv_light_drop_cCFUc
/* 80225728  2C 03 00 00 */	cmpwi r3, 0
/* 8022572C  41 82 01 50 */	beq lbl_8022587C
/* 80225730  3C 60 80 43 */	lis r3, g_meter2_info@ha /* 0x80430188@ha */
/* 80225734  38 63 01 88 */	addi r3, r3, g_meter2_info@l /* 0x80430188@l */
/* 80225738  88 1E 4E 0C */	lbz r0, 0x4e0c(r30)
/* 8022573C  7C 00 07 74 */	extsb r0, r0
/* 80225740  7C 63 02 14 */	add r3, r3, r0
/* 80225744  88 03 00 E3 */	lbz r0, 0xe3(r3)
/* 80225748  28 00 00 01 */	cmplwi r0, 1
/* 8022574C  40 81 01 30 */	ble lbl_8022587C
/* 80225750  4B F8 6E 2D */	bl dKy_darkworld_check__Fv
/* 80225754  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80225758  41 82 01 24 */	beq lbl_8022587C
/* 8022575C  80 1F 01 24 */	lwz r0, 0x124(r31)
/* 80225760  54 00 06 73 */	rlwinm. r0, r0, 0, 0x19, 0x19
/* 80225764  41 82 00 30 */	beq lbl_80225794
/* 80225768  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 8022576C  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80225770  88 03 4F AD */	lbz r0, 0x4fad(r3)
/* 80225774  28 00 00 00 */	cmplwi r0, 0
/* 80225778  41 82 00 10 */	beq lbl_80225788
/* 8022577C  A0 03 4F A4 */	lhz r0, 0x4fa4(r3)
/* 80225780  54 00 05 AC */	rlwinm r0, r0, 0, 0x16, 0x16
/* 80225784  48 00 00 08 */	b lbl_8022578C
lbl_80225788:
/* 80225788  38 00 00 00 */	li r0, 0
lbl_8022578C:
/* 8022578C  54 00 04 3F */	clrlwi. r0, r0, 0x10
/* 80225790  40 82 00 EC */	bne lbl_8022587C
lbl_80225794:
/* 80225794  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80225798  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 8022579C  80 83 5D AC */	lwz r4, 0x5dac(r3)
/* 802257A0  38 00 00 00 */	li r0, 0
/* 802257A4  88 64 05 6A */	lbz r3, 0x56a(r4)
/* 802257A8  28 03 00 00 */	cmplwi r3, 0
/* 802257AC  41 82 00 10 */	beq lbl_802257BC
/* 802257B0  28 03 00 26 */	cmplwi r3, 0x26
/* 802257B4  40 80 00 08 */	bge lbl_802257BC
/* 802257B8  38 00 00 01 */	li r0, 1
lbl_802257BC:
/* 802257BC  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 802257C0  40 82 00 BC */	bne lbl_8022587C
/* 802257C4  88 04 05 6A */	lbz r0, 0x56a(r4)
/* 802257C8  28 00 00 2D */	cmplwi r0, 0x2d
/* 802257CC  40 82 00 30 */	bne lbl_802257FC
/* 802257D0  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 802257D4  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 802257D8  3B C3 0F 38 */	addi r30, r3, 0xf38
/* 802257DC  7F C3 F3 78 */	mr r3, r30
/* 802257E0  4B E0 73 DD */	bl getTimerMode__14dComIfG_play_cFv
/* 802257E4  2C 03 00 03 */	cmpwi r3, 3
/* 802257E8  41 82 00 94 */	beq lbl_8022587C
/* 802257EC  7F C3 F3 78 */	mr r3, r30
/* 802257F0  4B E0 73 CD */	bl getTimerMode__14dComIfG_play_cFv
/* 802257F4  2C 03 00 04 */	cmpwi r3, 4
/* 802257F8  41 82 00 84 */	beq lbl_8022587C
lbl_802257FC:
/* 802257FC  80 7F 01 24 */	lwz r3, 0x124(r31)
/* 80225800  54 60 00 43 */	rlwinm. r0, r3, 0, 1, 1
/* 80225804  40 82 00 78 */	bne lbl_8022587C
/* 80225808  54 60 04 E7 */	rlwinm. r0, r3, 0, 0x13, 0x13
/* 8022580C  40 82 00 70 */	bne lbl_8022587C
/* 80225810  54 60 02 D7 */	rlwinm. r0, r3, 0, 0xb, 0xb
/* 80225814  40 82 00 68 */	bne lbl_8022587C
/* 80225818  54 60 00 01 */	rlwinm. r0, r3, 0, 0, 0
/* 8022581C  40 82 00 60 */	bne lbl_8022587C
/* 80225820  54 60 05 EF */	rlwinm. r0, r3, 0, 0x17, 0x17
/* 80225824  40 82 00 58 */	bne lbl_8022587C
/* 80225828  54 60 06 31 */	rlwinm. r0, r3, 0, 0x18, 0x18
/* 8022582C  40 82 00 50 */	bne lbl_8022587C
/* 80225830  54 60 07 39 */	rlwinm. r0, r3, 0, 0x1c, 0x1c
/* 80225834  40 82 00 48 */	bne lbl_8022587C
/* 80225838  54 60 06 F7 */	rlwinm. r0, r3, 0, 0x1b, 0x1b
/* 8022583C  40 82 00 40 */	bne lbl_8022587C
/* 80225840  54 60 01 CF */	rlwinm. r0, r3, 0, 7, 7
/* 80225844  40 82 00 38 */	bne lbl_8022587C
/* 80225848  54 60 06 B5 */	rlwinm. r0, r3, 0, 0x1a, 0x1a
/* 8022584C  40 82 00 30 */	bne lbl_8022587C
/* 80225850  54 60 01 4B */	rlwinm. r0, r3, 0, 5, 5
/* 80225854  40 82 00 28 */	bne lbl_8022587C
/* 80225858  54 60 01 09 */	rlwinm. r0, r3, 0, 4, 4
/* 8022585C  40 82 00 20 */	bne lbl_8022587C
/* 80225860  54 60 00 C7 */	rlwinm. r0, r3, 0, 3, 3
/* 80225864  40 82 00 18 */	bne lbl_8022587C
/* 80225868  3C 60 80 43 */	lis r3, g_meter2_info@ha /* 0x80430188@ha */
/* 8022586C  38 63 01 88 */	addi r3, r3, g_meter2_info@l /* 0x80430188@l */
/* 80225870  A0 03 00 A2 */	lhz r0, 0xa2(r3)
/* 80225874  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 80225878  41 82 00 0C */	beq lbl_80225884
lbl_8022587C:
/* 8022587C  38 60 00 00 */	li r3, 0
/* 80225880  48 00 00 08 */	b lbl_80225888
lbl_80225884:
/* 80225884  38 60 00 01 */	li r3, 1
lbl_80225888:
/* 80225888  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8022588C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80225890  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80225894  7C 08 03 A6 */	mtlr r0
/* 80225898  38 21 00 10 */	addi r1, r1, 0x10
/* 8022589C  4E 80 00 20 */	blr 