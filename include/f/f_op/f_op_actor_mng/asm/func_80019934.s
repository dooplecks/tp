/* 80019934 00016874  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 80019938 00016878  7C 08 02 A6 */ mflr r0
/* 8001993C 0001687C  90 01 00 14 */ stw r0, 0x14(r1)
/* 80019940 00016880  93 E1 00 0C */ stw r31, 0xc(r1)
/* 80019944 00016884  93 C1 00 08 */ stw r30, 8(r1)
/* 80019948 00016888  7C 7E 1B 78 */ mr r30, r3
/* 8001994C 0001688C  2C 04 00 00 */ cmpwi r4, 0
/* 80019950 00016890  41 80 00 54 */ blt lbl_800199A4
/* 80019954 00016894  3C 60 80 3F */ lis r3, lbl_803F6094@ha
/* 80019958 00016898  38 63 60 94 */ addi r3, r3, lbl_803F6094@l
/* 8001995C 0001689C  1C 04 04 04 */ mulli r0, r4, 0x404
/* 80019960 000168A0  7C 63 02 14 */ add r3, r3, r0
/* 80019964 000168A4  80 63 03 FC */ lwz r3, 0x3fc(r3)
/* 80019968 000168A8  48 00 53 49 */ bl fopScnM_SearchByID__FUi
/* 8001996C 000168AC  7C 7F 1B 78 */ mr r31, r3
/* 80019970 000168B0  80 6D 87 C0 */ lwz r3, lbl_80450D40-_SDA_BASE_(r13)
/* 80019974 000168B4  80 9F 00 B4 */ lwz r4, 0xb4(r31)
/* 80019978 000168B8  48 00 6C D5 */ bl fpcBs_Is_JustOfType
/* 8001997C 000168BC  2C 03 00 00 */ cmpwi r3, 0
/* 80019980 000168C0  41 82 00 0C */ beq lbl_8001998C
/* 80019984 000168C4  80 9F 00 C8 */ lwz r4, 0xc8(r31)
/* 80019988 000168C8  48 00 00 08 */ b lbl_80019990
lbl_8001998C:
/* 8001998C 000168CC  38 80 FF FF */ li r4, -1
lbl_80019990:
/* 80019990 000168D0  38 7E 00 68 */ addi r3, r30, 0x68
/* 80019994 000168D4  3C A0 00 01 */ lis r5, 0x0000FFFD@ha
/* 80019998 000168D8  38 A5 FF FD */ addi r5, r5, 0x0000FFFD@l
/* 8001999C 000168DC  7C A6 2B 78 */ mr r6, r5
/* 800199A0 000168E0  48 00 99 49 */ bl fpcPi_Change
lbl_800199A4:
/* 800199A4 000168E4  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 800199A8 000168E8  83 C1 00 08 */ lwz r30, 8(r1)
/* 800199AC 000168EC  80 01 00 14 */ lwz r0, 0x14(r1)
/* 800199B0 000168F0  7C 08 03 A6 */ mtlr r0
/* 800199B4 000168F4  38 21 00 10 */ addi r1, r1, 0x10
/* 800199B8 000168F8  4E 80 00 20 */ blr
