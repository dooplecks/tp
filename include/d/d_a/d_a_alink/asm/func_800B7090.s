/* 800B7090 000B3FD0  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 800B7094 000B3FD4  7C 08 02 A6 */ mflr r0
/* 800B7098 000B3FD8  90 01 00 14 */ stw r0, 0x14(r1)
/* 800B709C 000B3FDC  93 E1 00 0C */ stw r31, 0xc(r1)
/* 800B70A0 000B3FE0  7C 7F 1B 78 */ mr r31, r3
/* 800B70A4 000B3FE4  80 03 05 80 */ lwz r0, 0x580(r3)
/* 800B70A8 000B3FE8  54 00 06 31 */ rlwinm. r0, r0, 0, 0x18, 0x18
/* 800B70AC 000B3FEC  41 82 00 A4 */ beq lbl_800B7150
/* 800B70B0 000B3FF0  A0 1F 2F DC */ lhz r0, 0x2fdc(r31)
/* 800B70B4 000B3FF4  28 00 01 03 */ cmplwi r0, 0x103
/* 800B70B8 000B3FF8  40 82 00 88 */ bne lbl_800B7140
/* 800B70BC 000B3FFC  80 1F 31 A0 */ lwz r0, 0x31a0(r31)
/* 800B70C0 000B4000  54 00 03 5B */ rlwinm. r0, r0, 0, 0xd, 0xd
/* 800B70C4 000B4004  41 82 00 0C */ beq lbl_800B70D0
/* 800B70C8 000B4008  38 60 00 00 */ li r3, 0
/* 800B70CC 000B400C  48 00 00 88 */ b lbl_800B7154
lbl_800B70D0:
/* 800B70D0 000B4010  38 80 00 02 */ li r4, 2
/* 800B70D4 000B4014  C0 22 92 BC */ lfs f1, lbl_80452CBC-_SDA2_BASE_(r2)
/* 800B70D8 000B4018  4B FF 66 4D */ bl daAlink_c_NS_resetUpperAnime
/* 800B70DC 000B401C  7F E3 FB 78 */ mr r3, r31
/* 800B70E0 000B4020  81 9F 06 28 */ lwz r12, 0x628(r31)
/* 800B70E4 000B4024  81 8C 01 94 */ lwz r12, 0x194(r12)
/* 800B70E8 000B4028  7D 89 03 A6 */ mtctr r12
/* 800B70EC 000B402C  4E 80 04 21 */ bctrl
/* 800B70F0 000B4030  28 03 00 00 */ cmplwi r3, 0
/* 800B70F4 000B4034  41 82 00 10 */ beq lbl_800B7104
/* 800B70F8 000B4038  7F E3 FB 78 */ mr r3, r31
/* 800B70FC 000B403C  48 04 F5 1D */ bl daAlink_c_NS_checkBoardSwordTriggerAction
/* 800B7100 000B4040  48 00 00 54 */ b lbl_800B7154
lbl_800B7104:
/* 800B7104 000B4044  38 00 00 00 */ li r0, 0
/* 800B7108 000B4048  88 7F 2F AA */ lbz r3, 0x2faa(r31)
/* 800B710C 000B404C  28 03 00 01 */ cmplwi r3, 1
/* 800B7110 000B4050  41 82 00 0C */ beq lbl_800B711C
/* 800B7114 000B4054  28 03 00 02 */ cmplwi r3, 2
/* 800B7118 000B4058  40 82 00 08 */ bne lbl_800B7120
lbl_800B711C:
/* 800B711C 000B405C  38 00 00 01 */ li r0, 1
lbl_800B7120:
/* 800B7120 000B4060  54 00 06 3F */ clrlwi. r0, r0, 0x18
/* 800B7124 000B4064  41 82 00 10 */ beq lbl_800B7134
/* 800B7128 000B4068  7F E3 FB 78 */ mr r3, r31
/* 800B712C 000B406C  48 03 A7 69 */ bl daAlink_c_NS_procHorseCutChargeReadyInit
/* 800B7130 000B4070  48 00 00 24 */ b lbl_800B7154
lbl_800B7134:
/* 800B7134 000B4074  7F E3 FB 78 */ mr r3, r31
/* 800B7138 000B4078  48 01 DB 31 */ bl daAlink_c_NS_procCutTurnChargeInit
/* 800B713C 000B407C  48 00 00 18 */ b lbl_800B7154
lbl_800B7140:
/* 800B7140 000B4080  4B FF FD E9 */ bl daAlink_c_NS_checkItemActionInitStart
/* 800B7144 000B4084  2C 03 FF FF */ cmpwi r3, -1
/* 800B7148 000B4088  41 82 00 08 */ beq lbl_800B7150
/* 800B714C 000B408C  48 00 00 08 */ b lbl_800B7154
lbl_800B7150:
/* 800B7150 000B4090  38 60 00 00 */ li r3, 0
lbl_800B7154:
/* 800B7154 000B4094  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 800B7158 000B4098  80 01 00 14 */ lwz r0, 0x14(r1)
/* 800B715C 000B409C  7C 08 03 A6 */ mtlr r0
/* 800B7160 000B40A0  38 21 00 10 */ addi r1, r1, 0x10
/* 800B7164 000B40A4  4E 80 00 20 */ blr