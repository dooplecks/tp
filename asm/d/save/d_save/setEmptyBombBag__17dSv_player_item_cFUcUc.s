lbl_80033B08:
/* 80033B08  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80033B0C  7C 08 02 A6 */	mflr r0
/* 80033B10  90 01 00 24 */	stw r0, 0x24(r1)
/* 80033B14  39 61 00 20 */	addi r11, r1, 0x20
/* 80033B18  48 32 E6 BD */	bl _savegpr_27
/* 80033B1C  7C 9B 23 78 */	mr r27, r4
/* 80033B20  7C BE 2B 78 */	mr r30, r5
/* 80033B24  3B E0 00 00 */	li r31, 0
/* 80033B28  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80033B2C  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80033B30  3B A3 00 9C */	addi r29, r3, 0x9c
lbl_80033B34:
/* 80033B34  7F A3 EB 78 */	mr r3, r29
/* 80033B38  38 1F 00 0F */	addi r0, r31, 0xf
/* 80033B3C  54 1C 06 3E */	clrlwi r28, r0, 0x18
/* 80033B40  7F 84 E3 78 */	mr r4, r28
/* 80033B44  38 A0 00 01 */	li r5, 1
/* 80033B48  4B FF F4 E9 */	bl getItem__17dSv_player_item_cCFib
/* 80033B4C  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80033B50  28 00 00 FF */	cmplwi r0, 0xff
/* 80033B54  40 82 00 74 */	bne lbl_80033BC8
/* 80033B58  7F A3 EB 78 */	mr r3, r29
/* 80033B5C  7F 84 E3 78 */	mr r4, r28
/* 80033B60  7F 65 DB 78 */	mr r5, r27
/* 80033B64  4B FF F4 55 */	bl setItem__17dSv_player_item_cFiUc
/* 80033B68  57 60 06 3E */	clrlwi r0, r27, 0x18
/* 80033B6C  28 00 00 50 */	cmplwi r0, 0x50
/* 80033B70  41 82 00 64 */	beq lbl_80033BD4
/* 80033B74  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80033B78  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80033B7C  3B 83 00 F8 */	addi r28, r3, 0xf8
/* 80033B80  7F 83 E3 78 */	mr r3, r28
/* 80033B84  7F 64 DB 78 */	mr r4, r27
/* 80033B88  48 00 05 71 */	bl getBombNum__21dSv_player_item_max_cCFUc
/* 80033B8C  57 C4 06 3E */	clrlwi r4, r30, 0x18
/* 80033B90  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80033B94  7C 04 00 40 */	cmplw r4, r0
/* 80033B98  40 81 00 14 */	ble lbl_80033BAC
/* 80033B9C  7F 83 E3 78 */	mr r3, r28
/* 80033BA0  7F 64 DB 78 */	mr r4, r27
/* 80033BA4  48 00 05 55 */	bl getBombNum__21dSv_player_item_max_cCFUc
/* 80033BA8  7C 7E 1B 78 */	mr r30, r3
lbl_80033BAC:
/* 80033BAC  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80033BB0  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80033BB4  38 63 00 EC */	addi r3, r3, 0xec
/* 80033BB8  57 E4 06 3E */	clrlwi r4, r31, 0x18
/* 80033BBC  7F C5 F3 78 */	mr r5, r30
/* 80033BC0  48 00 03 AD */	bl setBombNum__24dSv_player_item_record_cFUcUc
/* 80033BC4  48 00 00 10 */	b lbl_80033BD4
lbl_80033BC8:
/* 80033BC8  3B FF 00 01 */	addi r31, r31, 1
/* 80033BCC  2C 1F 00 03 */	cmpwi r31, 3
/* 80033BD0  41 80 FF 64 */	blt lbl_80033B34
lbl_80033BD4:
/* 80033BD4  39 61 00 20 */	addi r11, r1, 0x20
/* 80033BD8  48 32 E6 49 */	bl _restgpr_27
/* 80033BDC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80033BE0  7C 08 03 A6 */	mtlr r0
/* 80033BE4  38 21 00 20 */	addi r1, r1, 0x20
/* 80033BE8  4E 80 00 20 */	blr 
