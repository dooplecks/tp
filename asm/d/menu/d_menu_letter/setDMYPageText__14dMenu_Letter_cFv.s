lbl_801E1038:
/* 801E1038  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801E103C  7C 08 02 A6 */	mflr r0
/* 801E1040  90 01 00 34 */	stw r0, 0x34(r1)
/* 801E1044  39 61 00 30 */	addi r11, r1, 0x30
/* 801E1048  48 18 11 85 */	bl _savegpr_25
/* 801E104C  7C 7C 1B 78 */	mr r28, r3
/* 801E1050  88 03 03 72 */	lbz r0, 0x372(r3)
/* 801E1054  1C 00 00 06 */	mulli r0, r0, 6
/* 801E1058  3B 20 00 00 */	li r25, 0
/* 801E105C  3B 60 00 00 */	li r27, 0
/* 801E1060  7F DC 02 14 */	add r30, r28, r0
/* 801E1064  3C 60 80 3C */	lis r3, letter_data__12dMenu_Letter@ha /* 0x803BF81C@ha */
/* 801E1068  3B A3 F8 1C */	addi r29, r3, letter_data__12dMenu_Letter@l /* 0x803BF81C@l */
/* 801E106C  48 00 00 D4 */	b lbl_801E1140
lbl_801E1070:
/* 801E1070  38 19 03 AC */	addi r0, r25, 0x3ac
/* 801E1074  7C 7E 00 AE */	lbzx r3, r30, r0
/* 801E1078  38 03 FF FF */	addi r0, r3, -1
/* 801E107C  80 7C 03 10 */	lwz r3, 0x310(r28)
/* 801E1080  54 00 1D 78 */	rlwinm r0, r0, 3, 0x15, 0x1c
/* 801E1084  7F 5D 02 14 */	add r26, r29, r0
/* 801E1088  A0 9A 00 00 */	lhz r4, 0(r26)
/* 801E108C  7F FC DA 14 */	add r31, r28, r27
/* 801E1090  80 BF 01 84 */	lwz r5, 0x184(r31)
/* 801E1094  38 C0 00 00 */	li r6, 0
/* 801E1098  38 E0 00 00 */	li r7, 0
/* 801E109C  39 00 00 00 */	li r8, 0
/* 801E10A0  39 20 00 00 */	li r9, 0
/* 801E10A4  81 83 00 00 */	lwz r12, 0(r3)
/* 801E10A8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801E10AC  7D 89 03 A6 */	mtctr r12
/* 801E10B0  4E 80 04 21 */	bctrl 
/* 801E10B4  80 7C 03 10 */	lwz r3, 0x310(r28)
/* 801E10B8  A0 9A 00 00 */	lhz r4, 0(r26)
/* 801E10BC  80 BF 01 88 */	lwz r5, 0x188(r31)
/* 801E10C0  38 C0 00 00 */	li r6, 0
/* 801E10C4  38 E0 00 00 */	li r7, 0
/* 801E10C8  39 00 00 00 */	li r8, 0
/* 801E10CC  39 20 00 00 */	li r9, 0
/* 801E10D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801E10D4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801E10D8  7D 89 03 A6 */	mtctr r12
/* 801E10DC  4E 80 04 21 */	bctrl 
/* 801E10E0  80 7C 03 10 */	lwz r3, 0x310(r28)
/* 801E10E4  A4 9A 00 02 */	lhzu r4, 2(r26)
/* 801E10E8  80 BF 01 8C */	lwz r5, 0x18c(r31)
/* 801E10EC  38 C0 00 00 */	li r6, 0
/* 801E10F0  38 E0 00 00 */	li r7, 0
/* 801E10F4  39 00 00 00 */	li r8, 0
/* 801E10F8  39 20 00 00 */	li r9, 0
/* 801E10FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801E1100  81 8C 00 08 */	lwz r12, 8(r12)
/* 801E1104  7D 89 03 A6 */	mtctr r12
/* 801E1108  4E 80 04 21 */	bctrl 
/* 801E110C  80 7C 03 10 */	lwz r3, 0x310(r28)
/* 801E1110  A0 9A 00 00 */	lhz r4, 0(r26)
/* 801E1114  80 BF 01 90 */	lwz r5, 0x190(r31)
/* 801E1118  38 C0 00 00 */	li r6, 0
/* 801E111C  38 E0 00 00 */	li r7, 0
/* 801E1120  39 00 00 00 */	li r8, 0
/* 801E1124  39 20 00 00 */	li r9, 0
/* 801E1128  81 83 00 00 */	lwz r12, 0(r3)
/* 801E112C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801E1130  7D 89 03 A6 */	mtctr r12
/* 801E1134  4E 80 04 21 */	bctrl 
/* 801E1138  3B 39 00 01 */	addi r25, r25, 1
/* 801E113C  3B 7B 00 10 */	addi r27, r27, 0x10
lbl_801E1140:
/* 801E1140  88 1C 03 73 */	lbz r0, 0x373(r28)
/* 801E1144  7C 19 00 00 */	cmpw r25, r0
/* 801E1148  41 80 FF 28 */	blt lbl_801E1070
/* 801E114C  3B A0 00 00 */	li r29, 0
/* 801E1150  3B 60 00 00 */	li r27, 0
/* 801E1154  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 801E1158  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 801E115C  3B E3 01 1C */	addi r31, r3, 0x11c
lbl_801E1160:
/* 801E1160  88 1C 03 73 */	lbz r0, 0x373(r28)
/* 801E1164  7C 1D 00 00 */	cmpw r29, r0
/* 801E1168  40 80 00 4C */	bge lbl_801E11B4
/* 801E116C  7F E3 FB 78 */	mr r3, r31
/* 801E1170  38 1D 03 AC */	addi r0, r29, 0x3ac
/* 801E1174  7C 9E 00 AE */	lbzx r4, r30, r0
/* 801E1178  38 04 FF FF */	addi r0, r4, -1
/* 801E117C  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 801E1180  4B E5 33 1D */	bl isLetterReadFlag__17dSv_letter_info_cCFi
/* 801E1184  2C 03 00 00 */	cmpwi r3, 0
/* 801E1188  40 82 00 18 */	bne lbl_801E11A0
/* 801E118C  38 80 00 01 */	li r4, 1
/* 801E1190  38 1B 00 BC */	addi r0, r27, 0xbc
/* 801E1194  7C 7C 00 2E */	lwzx r3, r28, r0
/* 801E1198  98 83 00 B0 */	stb r4, 0xb0(r3)
/* 801E119C  48 00 00 28 */	b lbl_801E11C4
lbl_801E11A0:
/* 801E11A0  38 80 00 00 */	li r4, 0
/* 801E11A4  38 1B 00 BC */	addi r0, r27, 0xbc
/* 801E11A8  7C 7C 00 2E */	lwzx r3, r28, r0
/* 801E11AC  98 83 00 B0 */	stb r4, 0xb0(r3)
/* 801E11B0  48 00 00 14 */	b lbl_801E11C4
lbl_801E11B4:
/* 801E11B4  38 80 00 00 */	li r4, 0
/* 801E11B8  38 1B 00 BC */	addi r0, r27, 0xbc
/* 801E11BC  7C 7C 00 2E */	lwzx r3, r28, r0
/* 801E11C0  98 83 00 B0 */	stb r4, 0xb0(r3)
lbl_801E11C4:
/* 801E11C4  3B BD 00 01 */	addi r29, r29, 1
/* 801E11C8  2C 1D 00 06 */	cmpwi r29, 6
/* 801E11CC  3B 7B 00 14 */	addi r27, r27, 0x14
/* 801E11D0  41 80 FF 90 */	blt lbl_801E1160
/* 801E11D4  39 61 00 30 */	addi r11, r1, 0x30
/* 801E11D8  48 18 10 41 */	bl _restgpr_25
/* 801E11DC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801E11E0  7C 08 03 A6 */	mtlr r0
/* 801E11E4  38 21 00 30 */	addi r1, r1, 0x30
/* 801E11E8  4E 80 00 20 */	blr 
