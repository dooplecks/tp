lbl_8030E234:
/* 8030E234  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8030E238  7C 08 02 A6 */	mflr r0
/* 8030E23C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8030E240  39 61 00 30 */	addi r11, r1, 0x30
/* 8030E244  48 05 3F 89 */	bl _savegpr_25
/* 8030E248  7C 79 1B 78 */	mr r25, r3
/* 8030E24C  7C 9A 23 78 */	mr r26, r4
/* 8030E250  7C BB 2B 78 */	mr r27, r5
/* 8030E254  7C DC 33 78 */	mr r28, r6
/* 8030E258  7C FD 3B 78 */	mr r29, r7
/* 8030E25C  7D 1E 43 78 */	mr r30, r8
/* 8030E260  7D 3F 4B 78 */	mr r31, r9
/* 8030E264  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030E268  80 64 00 08 */	lwz r3, 8(r4)
/* 8030E26C  38 63 00 0F */	addi r3, r3, 0xf
/* 8030E270  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8030E274  7C 03 00 40 */	cmplw r3, r0
/* 8030E278  40 81 00 08 */	ble lbl_8030E280
/* 8030E27C  48 05 2E 59 */	bl GDOverflowed
lbl_8030E280:
/* 8030E280  38 00 00 61 */	li r0, 0x61
/* 8030E284  80 AD 94 00 */	lwz r5, __GDCurrentDL(r13)
/* 8030E288  80 85 00 08 */	lwz r4, 8(r5)
/* 8030E28C  38 64 00 01 */	addi r3, r4, 1
/* 8030E290  90 65 00 08 */	stw r3, 8(r5)
/* 8030E294  98 04 00 00 */	stb r0, 0(r4)
/* 8030E298  38 C0 00 FE */	li r6, 0xfe
/* 8030E29C  80 AD 94 00 */	lwz r5, __GDCurrentDL(r13)
/* 8030E2A0  80 85 00 08 */	lwz r4, 8(r5)
/* 8030E2A4  38 64 00 01 */	addi r3, r4, 1
/* 8030E2A8  90 65 00 08 */	stw r3, 8(r5)
/* 8030E2AC  98 C4 00 00 */	stb r6, 0(r4)
/* 8030E2B0  38 C0 00 03 */	li r6, 3
/* 8030E2B4  80 AD 94 00 */	lwz r5, __GDCurrentDL(r13)
/* 8030E2B8  80 85 00 08 */	lwz r4, 8(r5)
/* 8030E2BC  38 64 00 01 */	addi r3, r4, 1
/* 8030E2C0  90 65 00 08 */	stw r3, 8(r5)
/* 8030E2C4  98 C4 00 00 */	stb r6, 0(r4)
/* 8030E2C8  38 C0 00 FF */	li r6, 0xff
/* 8030E2CC  80 AD 94 00 */	lwz r5, __GDCurrentDL(r13)
/* 8030E2D0  80 85 00 08 */	lwz r4, 8(r5)
/* 8030E2D4  38 64 00 01 */	addi r3, r4, 1
/* 8030E2D8  90 65 00 08 */	stw r3, 8(r5)
/* 8030E2DC  98 C4 00 00 */	stb r6, 0(r4)
/* 8030E2E0  80 AD 94 00 */	lwz r5, __GDCurrentDL(r13)
/* 8030E2E4  80 85 00 08 */	lwz r4, 8(r5)
/* 8030E2E8  38 64 00 01 */	addi r3, r4, 1
/* 8030E2EC  90 65 00 08 */	stw r3, 8(r5)
/* 8030E2F0  98 C4 00 00 */	stb r6, 0(r4)
/* 8030E2F4  80 AD 94 00 */	lwz r5, __GDCurrentDL(r13)
/* 8030E2F8  80 85 00 08 */	lwz r4, 8(r5)
/* 8030E2FC  38 64 00 01 */	addi r3, r4, 1
/* 8030E300  90 65 00 08 */	stw r3, 8(r5)
/* 8030E304  98 04 00 00 */	stb r0, 0(r4)
/* 8030E308  57 85 89 DC */	rlwinm r5, r28, 0x11, 7, 0xe
/* 8030E30C  57 43 04 3E */	clrlwi r3, r26, 0x10
/* 8030E310  38 83 FF FF */	addi r4, r3, -1
/* 8030E314  57 63 82 1E */	rlwinm r3, r27, 0x10, 8, 0xf
/* 8030E318  7C 83 1B 78 */	or r3, r4, r3
/* 8030E31C  7C A5 1B 78 */	or r5, r5, r3
/* 8030E320  57 23 08 3C */	slwi r3, r25, 1
/* 8030E324  38 83 00 30 */	addi r4, r3, 0x30
/* 8030E328  54 84 C0 0E */	slwi r4, r4, 0x18
/* 8030E32C  7C A8 23 78 */	or r8, r5, r4
/* 8030E330  55 07 46 3E */	srwi r7, r8, 0x18
/* 8030E334  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 8030E338  80 A6 00 08 */	lwz r5, 8(r6)
/* 8030E33C  38 85 00 01 */	addi r4, r5, 1
/* 8030E340  90 86 00 08 */	stw r4, 8(r6)
/* 8030E344  98 E5 00 00 */	stb r7, 0(r5)
/* 8030E348  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 8030E34C  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 8030E350  80 A6 00 08 */	lwz r5, 8(r6)
/* 8030E354  38 85 00 01 */	addi r4, r5, 1
/* 8030E358  90 86 00 08 */	stw r4, 8(r6)
/* 8030E35C  98 E5 00 00 */	stb r7, 0(r5)
/* 8030E360  55 07 C6 3E */	rlwinm r7, r8, 0x18, 0x18, 0x1f
/* 8030E364  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 8030E368  80 A6 00 08 */	lwz r5, 8(r6)
/* 8030E36C  38 85 00 01 */	addi r4, r5, 1
/* 8030E370  90 86 00 08 */	stw r4, 8(r6)
/* 8030E374  98 E5 00 00 */	stb r7, 0(r5)
/* 8030E378  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 8030E37C  80 A6 00 08 */	lwz r5, 8(r6)
/* 8030E380  38 85 00 01 */	addi r4, r5, 1
/* 8030E384  90 86 00 08 */	stw r4, 8(r6)
/* 8030E388  99 05 00 00 */	stb r8, 0(r5)
/* 8030E38C  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 8030E390  80 A6 00 08 */	lwz r5, 8(r6)
/* 8030E394  38 85 00 01 */	addi r4, r5, 1
/* 8030E398  90 86 00 08 */	stw r4, 8(r6)
/* 8030E39C  98 05 00 00 */	stb r0, 0(r5)
/* 8030E3A0  57 E5 89 DC */	rlwinm r5, r31, 0x11, 7, 0xe
/* 8030E3A4  57 A4 04 3E */	clrlwi r4, r29, 0x10
/* 8030E3A8  38 84 FF FF */	addi r4, r4, -1
/* 8030E3AC  57 C0 82 1E */	rlwinm r0, r30, 0x10, 8, 0xf
/* 8030E3B0  7C 80 03 78 */	or r0, r4, r0
/* 8030E3B4  7C A4 03 78 */	or r4, r5, r0
/* 8030E3B8  38 03 00 31 */	addi r0, r3, 0x31
/* 8030E3BC  54 00 C0 0E */	slwi r0, r0, 0x18
/* 8030E3C0  7C 86 03 78 */	or r6, r4, r0
/* 8030E3C4  54 C5 46 3E */	srwi r5, r6, 0x18
/* 8030E3C8  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030E3CC  80 64 00 08 */	lwz r3, 8(r4)
/* 8030E3D0  38 03 00 01 */	addi r0, r3, 1
/* 8030E3D4  90 04 00 08 */	stw r0, 8(r4)
/* 8030E3D8  98 A3 00 00 */	stb r5, 0(r3)
/* 8030E3DC  54 C5 86 3E */	rlwinm r5, r6, 0x10, 0x18, 0x1f
/* 8030E3E0  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030E3E4  80 64 00 08 */	lwz r3, 8(r4)
/* 8030E3E8  38 03 00 01 */	addi r0, r3, 1
/* 8030E3EC  90 04 00 08 */	stw r0, 8(r4)
/* 8030E3F0  98 A3 00 00 */	stb r5, 0(r3)
/* 8030E3F4  54 C5 C6 3E */	rlwinm r5, r6, 0x18, 0x18, 0x1f
/* 8030E3F8  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030E3FC  80 64 00 08 */	lwz r3, 8(r4)
/* 8030E400  38 03 00 01 */	addi r0, r3, 1
/* 8030E404  90 04 00 08 */	stw r0, 8(r4)
/* 8030E408  98 A3 00 00 */	stb r5, 0(r3)
/* 8030E40C  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030E410  80 64 00 08 */	lwz r3, 8(r4)
/* 8030E414  38 03 00 01 */	addi r0, r3, 1
/* 8030E418  90 04 00 08 */	stw r0, 8(r4)
/* 8030E41C  98 C3 00 00 */	stb r6, 0(r3)
/* 8030E420  39 61 00 30 */	addi r11, r1, 0x30
/* 8030E424  48 05 3D F5 */	bl _restgpr_25
/* 8030E428  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8030E42C  7C 08 03 A6 */	mtlr r0
/* 8030E430  38 21 00 30 */	addi r1, r1, 0x30
/* 8030E434  4E 80 00 20 */	blr 