lbl_802390B4:
/* 802390B4  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 802390B8  7C 08 02 A6 */	mflr r0
/* 802390BC  90 01 00 64 */	stw r0, 0x64(r1)
/* 802390C0  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 802390C4  F3 E1 00 58 */	psq_st f31, 88(r1), 0, 0 /* qr0 */
/* 802390C8  39 61 00 50 */	addi r11, r1, 0x50
/* 802390CC  48 12 90 ED */	bl _savegpr_20
/* 802390D0  7C 7F 1B 78 */	mr r31, r3
/* 802390D4  3C 80 80 3C */	lis r4, __vt__17dMsgScrn3Select_c@ha /* 0x803C0CE8@ha */
/* 802390D8  38 04 0C E8 */	addi r0, r4, __vt__17dMsgScrn3Select_c@l /* 0x803C0CE8@l */
/* 802390DC  90 03 00 00 */	stw r0, 0(r3)
/* 802390E0  38 00 FF FF */	li r0, -1
/* 802390E4  90 03 00 C4 */	stw r0, 0xc4(r3)
/* 802390E8  90 03 00 C8 */	stw r0, 0xc8(r3)
/* 802390EC  38 60 01 18 */	li r3, 0x118
/* 802390F0  48 09 5B 5D */	bl __nw__FUl
/* 802390F4  7C 60 1B 79 */	or. r0, r3, r3
/* 802390F8  41 82 00 0C */	beq lbl_80239104
/* 802390FC  48 0B F3 9D */	bl __ct__9J2DScreenFv
/* 80239100  7C 60 1B 78 */	mr r0, r3
lbl_80239104:
/* 80239104  90 1F 00 04 */	stw r0, 4(r31)
/* 80239108  80 7F 00 04 */	lwz r3, 4(r31)
/* 8023910C  3C 80 80 3A */	lis r4, msg_scrn_d_msg_scrn_3select__stringBase0@ha /* 0x80399840@ha */
/* 80239110  38 84 98 40 */	addi r4, r4, msg_scrn_d_msg_scrn_3select__stringBase0@l /* 0x80399840@l */
/* 80239114  3C A0 00 02 */	lis r5, 2
/* 80239118  3C C0 80 40 */	lis r6, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 8023911C  3A 86 61 C0 */	addi r20, r6, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80239120  80 D4 5C 6C */	lwz r6, 0x5c6c(r20)
/* 80239124  48 0B F5 25 */	bl setPriority__9J2DScreenFPCcUlP10JKRArchive
/* 80239128  80 7F 00 04 */	lwz r3, 4(r31)
/* 8023912C  48 01 BF BD */	bl dPaneClass_showNullPane__FP9J2DScreen
/* 80239130  38 60 00 04 */	li r3, 4
/* 80239134  64 63 00 04 */	oris r3, r3, 4
/* 80239138  7C 72 E3 A6 */	mtspr 0x392, r3
/* 8023913C  38 60 00 05 */	li r3, 5
/* 80239140  64 63 00 05 */	oris r3, r3, 5
/* 80239144  7C 73 E3 A6 */	mtspr 0x393, r3
/* 80239148  38 60 00 06 */	li r3, 6
/* 8023914C  64 63 00 06 */	oris r3, r3, 6
/* 80239150  7C 74 E3 A6 */	mtspr 0x394, r3
/* 80239154  38 60 00 07 */	li r3, 7
/* 80239158  64 63 00 07 */	oris r3, r3, 7
/* 8023915C  7C 75 E3 A6 */	mtspr 0x395, r3
/* 80239160  3C 80 80 3A */	lis r4, msg_scrn_d_msg_scrn_3select__stringBase0@ha /* 0x80399840@ha */
/* 80239164  38 84 98 40 */	addi r4, r4, msg_scrn_d_msg_scrn_3select__stringBase0@l /* 0x80399840@l */
/* 80239168  38 64 00 17 */	addi r3, r4, 0x17
/* 8023916C  80 94 5C 6C */	lwz r4, 0x5c6c(r20)
/* 80239170  48 09 B1 01 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 80239174  48 0C F8 F9 */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 80239178  90 7F 00 08 */	stw r3, 8(r31)
/* 8023917C  C0 22 B1 58 */	lfs f1, lit_3909(r2)
/* 80239180  D0 3F 00 F0 */	stfs f1, 0xf0(r31)
/* 80239184  C0 02 B1 5C */	lfs f0, lit_3910(r2)
/* 80239188  D0 1F 00 F0 */	stfs f0, 0xf0(r31)
/* 8023918C  D0 3F 00 FC */	stfs f1, 0xfc(r31)
/* 80239190  3C 80 80 3A */	lis r4, msg_scrn_d_msg_scrn_3select__stringBase0@ha /* 0x80399840@ha */
/* 80239194  38 84 98 40 */	addi r4, r4, msg_scrn_d_msg_scrn_3select__stringBase0@l /* 0x80399840@l */
/* 80239198  38 64 00 2E */	addi r3, r4, 0x2e
/* 8023919C  80 94 5C 6C */	lwz r4, 0x5c6c(r20)
/* 802391A0  48 09 B0 D1 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 802391A4  48 0C F8 C9 */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 802391A8  90 7F 00 0C */	stw r3, 0xc(r31)
/* 802391AC  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 802391B0  80 9F 00 04 */	lwz r4, 4(r31)
/* 802391B4  81 83 00 00 */	lwz r12, 0(r3)
/* 802391B8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802391BC  7D 89 03 A6 */	mtctr r12
/* 802391C0  4E 80 04 21 */	bctrl 
/* 802391C4  C0 02 B1 58 */	lfs f0, lit_3909(r2)
/* 802391C8  D0 1F 00 F4 */	stfs f0, 0xf4(r31)
/* 802391CC  3C 80 80 3A */	lis r4, msg_scrn_d_msg_scrn_3select__stringBase0@ha /* 0x80399840@ha */
/* 802391D0  38 84 98 40 */	addi r4, r4, msg_scrn_d_msg_scrn_3select__stringBase0@l /* 0x80399840@l */
/* 802391D4  38 64 00 45 */	addi r3, r4, 0x45
/* 802391D8  80 94 5C 6C */	lwz r4, 0x5c6c(r20)
/* 802391DC  48 09 B0 95 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 802391E0  48 0C F8 8D */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 802391E4  90 7F 00 10 */	stw r3, 0x10(r31)
/* 802391E8  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 802391EC  80 9F 00 04 */	lwz r4, 4(r31)
/* 802391F0  81 83 00 00 */	lwz r12, 0(r3)
/* 802391F4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802391F8  7D 89 03 A6 */	mtctr r12
/* 802391FC  4E 80 04 21 */	bctrl 
/* 80239200  C0 02 B1 58 */	lfs f0, lit_3909(r2)
/* 80239204  D0 1F 00 F8 */	stfs f0, 0xf8(r31)
/* 80239208  38 60 00 B8 */	li r3, 0xb8
/* 8023920C  48 09 5A 41 */	bl __nw__FUl
/* 80239210  7C 60 1B 79 */	or. r0, r3, r3
/* 80239214  41 82 00 18 */	beq lbl_8023922C
/* 80239218  38 80 00 00 */	li r4, 0
/* 8023921C  C0 22 B1 60 */	lfs f1, lit_3911(r2)
/* 80239220  38 A0 00 00 */	li r5, 0
/* 80239224  4B F5 AF FD */	bl __ct__16dSelect_cursor_cFUcfP10JKRArchive
/* 80239228  7C 60 1B 78 */	mr r0, r3
lbl_8023922C:
/* 8023922C  90 1F 00 14 */	stw r0, 0x14(r31)
/* 80239230  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 80239234  C0 22 B1 58 */	lfs f1, lit_3909(r2)
/* 80239238  4B F5 C0 69 */	bl setAlphaRate__16dSelect_cursor_cFf
/* 8023923C  38 60 00 6C */	li r3, 0x6c
/* 80239240  48 09 5A 0D */	bl __nw__FUl
/* 80239244  7C 60 1B 79 */	or. r0, r3, r3
/* 80239248  41 82 00 24 */	beq lbl_8023926C
/* 8023924C  80 9F 00 04 */	lwz r4, 4(r31)
/* 80239250  3C A0 62 63 */	lis r5, 0x6263 /* 0x62635F6E@ha */
/* 80239254  38 C5 5F 6E */	addi r6, r5, 0x5F6E /* 0x62635F6E@l */
/* 80239258  38 A0 00 61 */	li r5, 0x61
/* 8023925C  38 E0 00 00 */	li r7, 0
/* 80239260  39 00 00 00 */	li r8, 0
/* 80239264  48 01 A7 21 */	bl __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap
/* 80239268  7C 60 1B 78 */	mr r0, r3
lbl_8023926C:
/* 8023926C  90 1F 00 18 */	stw r0, 0x18(r31)
/* 80239270  3B 60 00 00 */	li r27, 0
/* 80239274  3B 20 00 00 */	li r25, 0
/* 80239278  3B A0 00 00 */	li r29, 0
/* 8023927C  3B 40 00 00 */	li r26, 0
/* 80239280  C3 E2 B1 58 */	lfs f31, lit_3909(r2)
/* 80239284  3C 80 80 3A */	lis r4, tag_name@ha /* 0x80399708@ha */
/* 80239288  3B 04 97 08 */	addi r24, r4, tag_name@l /* 0x80399708@l */
lbl_8023928C:
/* 8023928C  7F 9F D2 14 */	add r28, r31, r26
/* 80239290  D3 FC 00 CC */	stfs f31, 0xcc(r28)
/* 80239294  D3 FC 00 D0 */	stfs f31, 0xd0(r28)
/* 80239298  D3 FC 00 D4 */	stfs f31, 0xd4(r28)
/* 8023929C  38 60 00 6C */	li r3, 0x6c
/* 802392A0  48 09 59 AD */	bl __nw__FUl
/* 802392A4  7C 60 1B 79 */	or. r0, r3, r3
/* 802392A8  41 82 00 2C */	beq lbl_802392D4
/* 802392AC  80 9F 00 04 */	lwz r4, 4(r31)
/* 802392B0  3C A0 80 3A */	lis r5, tag_name@ha /* 0x80399708@ha */
/* 802392B4  38 05 97 08 */	addi r0, r5, tag_name@l /* 0x80399708@l */
/* 802392B8  7C C0 EA 14 */	add r6, r0, r29
/* 802392BC  80 A6 00 00 */	lwz r5, 0(r6)
/* 802392C0  80 C6 00 04 */	lwz r6, 4(r6)
/* 802392C4  38 E0 00 00 */	li r7, 0
/* 802392C8  39 00 00 00 */	li r8, 0
/* 802392CC  48 01 A6 B9 */	bl __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap
/* 802392D0  7C 60 1B 78 */	mr r0, r3
lbl_802392D4:
/* 802392D4  7F DF CA 14 */	add r30, r31, r25
/* 802392D8  90 1E 00 34 */	stw r0, 0x34(r30)
/* 802392DC  80 7E 00 34 */	lwz r3, 0x34(r30)
/* 802392E0  48 01 C3 29 */	bl hide__13CPaneMgrAlphaFv
/* 802392E4  38 60 00 6C */	li r3, 0x6c
/* 802392E8  48 09 59 65 */	bl __nw__FUl
/* 802392EC  7C 60 1B 79 */	or. r0, r3, r3
/* 802392F0  41 82 00 2C */	beq lbl_8023931C
/* 802392F4  80 9F 00 04 */	lwz r4, 4(r31)
/* 802392F8  3C A0 80 3A */	lis r5, tag_name@ha /* 0x80399708@ha */
/* 802392FC  38 05 97 08 */	addi r0, r5, tag_name@l /* 0x80399708@l */
/* 80239300  7C C0 EA 14 */	add r6, r0, r29
/* 80239304  80 A6 00 08 */	lwz r5, 8(r6)
/* 80239308  80 C6 00 0C */	lwz r6, 0xc(r6)
/* 8023930C  38 E0 00 00 */	li r7, 0
/* 80239310  39 00 00 00 */	li r8, 0
/* 80239314  48 01 A6 71 */	bl __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap
/* 80239318  7C 60 1B 78 */	mr r0, r3
lbl_8023931C:
/* 8023931C  90 1E 00 40 */	stw r0, 0x40(r30)
/* 80239320  80 9E 00 40 */	lwz r4, 0x40(r30)
/* 80239324  80 64 00 04 */	lwz r3, 4(r4)
/* 80239328  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8023932C  81 83 00 00 */	lwz r12, 0(r3)
/* 80239330  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 80239334  7D 89 03 A6 */	mtctr r12
/* 80239338  4E 80 04 21 */	bctrl 
/* 8023933C  38 60 00 6C */	li r3, 0x6c
/* 80239340  48 09 59 0D */	bl __nw__FUl
/* 80239344  7C 60 1B 79 */	or. r0, r3, r3
/* 80239348  41 82 00 2C */	beq lbl_80239374
/* 8023934C  80 9F 00 04 */	lwz r4, 4(r31)
/* 80239350  3C A0 80 3A */	lis r5, tag_name@ha /* 0x80399708@ha */
/* 80239354  38 05 97 08 */	addi r0, r5, tag_name@l /* 0x80399708@l */
/* 80239358  7C C0 EA 14 */	add r6, r0, r29
/* 8023935C  80 A6 00 10 */	lwz r5, 0x10(r6)
/* 80239360  80 C6 00 14 */	lwz r6, 0x14(r6)
/* 80239364  38 E0 00 00 */	li r7, 0
/* 80239368  39 00 00 00 */	li r8, 0
/* 8023936C  48 01 A6 19 */	bl __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap
/* 80239370  7C 60 1B 78 */	mr r0, r3
lbl_80239374:
/* 80239374  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 80239378  80 9E 00 4C */	lwz r4, 0x4c(r30)
/* 8023937C  80 64 00 04 */	lwz r3, 4(r4)
/* 80239380  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 80239384  81 83 00 00 */	lwz r12, 0(r3)
/* 80239388  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 8023938C  7D 89 03 A6 */	mtctr r12
/* 80239390  4E 80 04 21 */	bctrl 
/* 80239394  38 60 00 6C */	li r3, 0x6c
/* 80239398  48 09 58 B5 */	bl __nw__FUl
/* 8023939C  7C 60 1B 79 */	or. r0, r3, r3
/* 802393A0  41 82 00 2C */	beq lbl_802393CC
/* 802393A4  80 9F 00 04 */	lwz r4, 4(r31)
/* 802393A8  3C A0 80 3A */	lis r5, tag_name@ha /* 0x80399708@ha */
/* 802393AC  38 05 97 08 */	addi r0, r5, tag_name@l /* 0x80399708@l */
/* 802393B0  7C C0 EA 14 */	add r6, r0, r29
/* 802393B4  80 A6 00 18 */	lwz r5, 0x18(r6)
/* 802393B8  80 C6 00 1C */	lwz r6, 0x1c(r6)
/* 802393BC  38 E0 00 00 */	li r7, 0
/* 802393C0  39 00 00 00 */	li r8, 0
/* 802393C4  48 01 A5 C1 */	bl __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap
/* 802393C8  7C 60 1B 78 */	mr r0, r3
lbl_802393CC:
/* 802393CC  90 1E 00 58 */	stw r0, 0x58(r30)
/* 802393D0  80 9E 00 58 */	lwz r4, 0x58(r30)
/* 802393D4  80 64 00 04 */	lwz r3, 4(r4)
/* 802393D8  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 802393DC  81 83 00 00 */	lwz r12, 0(r3)
/* 802393E0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802393E4  7D 89 03 A6 */	mtctr r12
/* 802393E8  4E 80 04 21 */	bctrl 
/* 802393EC  3A C0 00 00 */	li r22, 0
/* 802393F0  3A A0 00 00 */	li r21, 0
/* 802393F4  3A 80 00 00 */	li r20, 0
/* 802393F8  7E F8 EA 14 */	add r23, r24, r29
lbl_802393FC:
/* 802393FC  38 60 00 6C */	li r3, 0x6c
/* 80239400  48 09 58 4D */	bl __nw__FUl
/* 80239404  7C 64 1B 79 */	or. r4, r3, r3
/* 80239408  41 82 00 28 */	beq lbl_80239430
/* 8023940C  80 9F 00 04 */	lwz r4, 4(r31)
/* 80239410  38 14 00 20 */	addi r0, r20, 0x20
/* 80239414  7C D7 02 14 */	add r6, r23, r0
/* 80239418  80 A6 00 00 */	lwz r5, 0(r6)
/* 8023941C  80 C6 00 04 */	lwz r6, 4(r6)
/* 80239420  38 E0 00 00 */	li r7, 0
/* 80239424  39 00 00 00 */	li r8, 0
/* 80239428  48 01 A5 5D */	bl __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap
/* 8023942C  7C 64 1B 78 */	mr r4, r3
lbl_80239430:
/* 80239430  38 15 00 64 */	addi r0, r21, 0x64
/* 80239434  7C 9E 01 2E */	stwx r4, r30, r0
/* 80239438  3A D6 00 01 */	addi r22, r22, 1
/* 8023943C  2C 16 00 05 */	cmpwi r22, 5
/* 80239440  3A B5 00 0C */	addi r21, r21, 0xc
/* 80239444  3A 94 00 08 */	addi r20, r20, 8
/* 80239448  41 80 FF B4 */	blt lbl_802393FC
/* 8023944C  38 60 00 6C */	li r3, 0x6c
/* 80239450  48 09 57 FD */	bl __nw__FUl
/* 80239454  7C 60 1B 79 */	or. r0, r3, r3
/* 80239458  41 82 00 20 */	beq lbl_80239478
/* 8023945C  80 9F 00 04 */	lwz r4, 4(r31)
/* 80239460  80 B7 00 48 */	lwz r5, 0x48(r23)
/* 80239464  80 D7 00 4C */	lwz r6, 0x4c(r23)
/* 80239468  38 E0 00 00 */	li r7, 0
/* 8023946C  39 00 00 00 */	li r8, 0
/* 80239470  48 01 A5 15 */	bl __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap
/* 80239474  7C 60 1B 78 */	mr r0, r3
lbl_80239478:
/* 80239478  90 1E 00 A0 */	stw r0, 0xa0(r30)
/* 8023947C  80 7E 00 A0 */	lwz r3, 0xa0(r30)
/* 80239480  48 01 C1 89 */	bl hide__13CPaneMgrAlphaFv
/* 80239484  38 60 00 6C */	li r3, 0x6c
/* 80239488  48 09 57 C5 */	bl __nw__FUl
/* 8023948C  7C 60 1B 79 */	or. r0, r3, r3
/* 80239490  41 82 00 20 */	beq lbl_802394B0
/* 80239494  80 9F 00 04 */	lwz r4, 4(r31)
/* 80239498  80 B7 00 50 */	lwz r5, 0x50(r23)
/* 8023949C  80 D7 00 54 */	lwz r6, 0x54(r23)
/* 802394A0  38 E0 00 00 */	li r7, 0
/* 802394A4  39 00 00 00 */	li r8, 0
/* 802394A8  48 01 A4 DD */	bl __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap
/* 802394AC  7C 60 1B 78 */	mr r0, r3
lbl_802394B0:
/* 802394B0  90 1E 00 AC */	stw r0, 0xac(r30)
/* 802394B4  38 60 00 6C */	li r3, 0x6c
/* 802394B8  48 09 57 95 */	bl __nw__FUl
/* 802394BC  7C 60 1B 79 */	or. r0, r3, r3
/* 802394C0  41 82 00 20 */	beq lbl_802394E0
/* 802394C4  80 9F 00 04 */	lwz r4, 4(r31)
/* 802394C8  80 B7 00 58 */	lwz r5, 0x58(r23)
/* 802394CC  80 D7 00 5C */	lwz r6, 0x5c(r23)
/* 802394D0  38 E0 00 00 */	li r7, 0
/* 802394D4  39 00 00 00 */	li r8, 0
/* 802394D8  48 01 A4 AD */	bl __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap
/* 802394DC  7C 60 1B 78 */	mr r0, r3
lbl_802394E0:
/* 802394E0  90 1E 00 B8 */	stw r0, 0xb8(r30)
/* 802394E4  80 9E 00 B8 */	lwz r4, 0xb8(r30)
/* 802394E8  38 61 00 0C */	addi r3, r1, 0xc
/* 802394EC  80 A4 00 04 */	lwz r5, 4(r4)
/* 802394F0  38 C0 00 01 */	li r6, 1
/* 802394F4  38 E0 00 00 */	li r7, 0
/* 802394F8  48 01 B9 C5 */	bl getGlobalVtxCenter__8CPaneMgrFP7J2DPanebs
/* 802394FC  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80239500  D0 1C 00 CC */	stfs f0, 0xcc(r28)
/* 80239504  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80239508  D0 1C 00 D0 */	stfs f0, 0xd0(r28)
/* 8023950C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80239510  D0 1C 00 D4 */	stfs f0, 0xd4(r28)
/* 80239514  3B 7B 00 01 */	addi r27, r27, 1
/* 80239518  2C 1B 00 03 */	cmpwi r27, 3
/* 8023951C  3B 39 00 04 */	addi r25, r25, 4
/* 80239520  3B BD 00 60 */	addi r29, r29, 0x60
/* 80239524  3B 5A 00 0C */	addi r26, r26, 0xc
/* 80239528  41 80 FD 64 */	blt lbl_8023928C
/* 8023952C  38 60 00 6C */	li r3, 0x6c
/* 80239530  48 09 57 1D */	bl __nw__FUl
/* 80239534  7C 60 1B 79 */	or. r0, r3, r3
/* 80239538  41 82 00 24 */	beq lbl_8023955C
/* 8023953C  80 9F 00 04 */	lwz r4, 4(r31)
/* 80239540  3C A0 5F 74 */	lis r5, 0x5F74 /* 0x5F745F65@ha */
/* 80239544  38 C5 5F 65 */	addi r6, r5, 0x5F65 /* 0x5F745F65@l */
/* 80239548  38 A0 00 61 */	li r5, 0x61
/* 8023954C  38 E0 00 00 */	li r7, 0
/* 80239550  39 00 00 00 */	li r8, 0
/* 80239554  48 01 A4 31 */	bl __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap
/* 80239558  7C 60 1B 78 */	mr r0, r3
lbl_8023955C:
/* 8023955C  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 80239560  38 60 00 6C */	li r3, 0x6c
/* 80239564  48 09 56 E9 */	bl __nw__FUl
/* 80239568  7C 60 1B 79 */	or. r0, r3, r3
/* 8023956C  41 82 00 24 */	beq lbl_80239590
/* 80239570  80 9F 00 04 */	lwz r4, 4(r31)
/* 80239574  3C A0 5F 74 */	lis r5, 0x5F74 /* 0x5F745F65@ha */
/* 80239578  38 C5 5F 65 */	addi r6, r5, 0x5F65 /* 0x5F745F65@l */
/* 8023957C  38 A0 00 62 */	li r5, 0x62
/* 80239580  38 E0 00 00 */	li r7, 0
/* 80239584  39 00 00 00 */	li r8, 0
/* 80239588  48 01 A3 FD */	bl __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap
/* 8023958C  7C 60 1B 78 */	mr r0, r3
lbl_80239590:
/* 80239590  90 1F 00 20 */	stw r0, 0x20(r31)
/* 80239594  38 60 00 6C */	li r3, 0x6c
/* 80239598  48 09 56 B5 */	bl __nw__FUl
/* 8023959C  7C 60 1B 79 */	or. r0, r3, r3
/* 802395A0  41 82 00 24 */	beq lbl_802395C4
/* 802395A4  80 9F 00 04 */	lwz r4, 4(r31)
/* 802395A8  3C A0 5F 74 */	lis r5, 0x5F74 /* 0x5F745F65@ha */
/* 802395AC  38 C5 5F 65 */	addi r6, r5, 0x5F65 /* 0x5F745F65@l */
/* 802395B0  38 A0 00 63 */	li r5, 0x63
/* 802395B4  38 E0 00 00 */	li r7, 0
/* 802395B8  39 00 00 00 */	li r8, 0
/* 802395BC  48 01 A3 C9 */	bl __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap
/* 802395C0  7C 60 1B 78 */	mr r0, r3
lbl_802395C4:
/* 802395C4  90 1F 00 24 */	stw r0, 0x24(r31)
/* 802395C8  3B 20 00 00 */	li r25, 0
/* 802395CC  3A C0 00 00 */	li r22, 0
/* 802395D0  3C 80 80 3A */	lis r4, msg_scrn_d_msg_scrn_3select__stringBase0@ha /* 0x80399840@ha */
/* 802395D4  3A A4 98 40 */	addi r21, r4, msg_scrn_d_msg_scrn_3select__stringBase0@l /* 0x80399840@l */
/* 802395D8  3A 80 00 00 */	li r20, 0
lbl_802395DC:
/* 802395DC  7F 1F B2 14 */	add r24, r31, r22
/* 802395E0  80 98 00 1C */	lwz r4, 0x1c(r24)
/* 802395E4  80 64 00 04 */	lwz r3, 4(r4)
/* 802395E8  38 80 00 40 */	li r4, 0x40
/* 802395EC  38 B5 00 5C */	addi r5, r21, 0x5c
/* 802395F0  4C C6 31 82 */	crclr 6
/* 802395F4  48 0C 71 59 */	bl setString__10J2DTextBoxFsPCce
/* 802395F8  80 98 00 1C */	lwz r4, 0x1c(r24)
/* 802395FC  82 E4 00 04 */	lwz r23, 4(r4)
/* 80239600  4B DD B3 F1 */	bl mDoExt_getMesgFont__Fv
/* 80239604  7C 64 1B 78 */	mr r4, r3
/* 80239608  7E E3 BB 78 */	mr r3, r23
/* 8023960C  81 97 00 00 */	lwz r12, 0(r23)
/* 80239610  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 80239614  7D 89 03 A6 */	mtctr r12
/* 80239618  4E 80 04 21 */	bctrl 
/* 8023961C  92 98 00 28 */	stw r20, 0x28(r24)
/* 80239620  3B 39 00 01 */	addi r25, r25, 1
/* 80239624  2C 19 00 03 */	cmpwi r25, 3
/* 80239628  3A D6 00 04 */	addi r22, r22, 4
/* 8023962C  41 80 FF B0 */	blt lbl_802395DC
/* 80239630  80 7F 00 04 */	lwz r3, 4(r31)
/* 80239634  3C 80 5F 74 */	lis r4, 0x5F74 /* 0x5F745F65@ha */
/* 80239638  38 C4 5F 65 */	addi r6, r4, 0x5F65 /* 0x5F745F65@l */
/* 8023963C  38 A0 00 61 */	li r5, 0x61
/* 80239640  81 83 00 00 */	lwz r12, 0(r3)
/* 80239644  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80239648  7D 89 03 A6 */	mtctr r12
/* 8023964C  4E 80 04 21 */	bctrl 
/* 80239650  38 00 00 01 */	li r0, 1
/* 80239654  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80239658  80 7F 00 04 */	lwz r3, 4(r31)
/* 8023965C  3C 80 5F 74 */	lis r4, 0x5F74 /* 0x5F745F65@ha */
/* 80239660  38 C4 5F 65 */	addi r6, r4, 0x5F65 /* 0x5F745F65@l */
/* 80239664  38 A0 00 62 */	li r5, 0x62
/* 80239668  81 83 00 00 */	lwz r12, 0(r3)
/* 8023966C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80239670  7D 89 03 A6 */	mtctr r12
/* 80239674  4E 80 04 21 */	bctrl 
/* 80239678  38 00 00 01 */	li r0, 1
/* 8023967C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80239680  80 7F 00 04 */	lwz r3, 4(r31)
/* 80239684  3C 80 5F 74 */	lis r4, 0x5F74 /* 0x5F745F65@ha */
/* 80239688  38 C4 5F 65 */	addi r6, r4, 0x5F65 /* 0x5F745F65@l */
/* 8023968C  38 A0 00 63 */	li r5, 0x63
/* 80239690  81 83 00 00 */	lwz r12, 0(r3)
/* 80239694  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80239698  7D 89 03 A6 */	mtctr r12
/* 8023969C  4E 80 04 21 */	bctrl 
/* 802396A0  38 00 00 01 */	li r0, 1
/* 802396A4  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 802396A8  80 7F 00 04 */	lwz r3, 4(r31)
/* 802396AC  3C 80 61 5F */	lis r4, 0x615F /* 0x615F7466@ha */
/* 802396B0  38 C4 74 66 */	addi r6, r4, 0x7466 /* 0x615F7466@l */
/* 802396B4  38 A0 00 00 */	li r5, 0
/* 802396B8  81 83 00 00 */	lwz r12, 0(r3)
/* 802396BC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 802396C0  7D 89 03 A6 */	mtctr r12
/* 802396C4  4E 80 04 21 */	bctrl 
/* 802396C8  38 00 00 00 */	li r0, 0
/* 802396CC  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 802396D0  80 7F 00 04 */	lwz r3, 4(r31)
/* 802396D4  3C 80 62 5F */	lis r4, 0x625F /* 0x625F7466@ha */
/* 802396D8  38 C4 74 66 */	addi r6, r4, 0x7466 /* 0x625F7466@l */
/* 802396DC  38 A0 00 00 */	li r5, 0
/* 802396E0  81 83 00 00 */	lwz r12, 0(r3)
/* 802396E4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 802396E8  7D 89 03 A6 */	mtctr r12
/* 802396EC  4E 80 04 21 */	bctrl 
/* 802396F0  38 00 00 00 */	li r0, 0
/* 802396F4  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 802396F8  80 7F 00 04 */	lwz r3, 4(r31)
/* 802396FC  3C 80 63 5F */	lis r4, 0x635F /* 0x635F7466@ha */
/* 80239700  38 C4 74 66 */	addi r6, r4, 0x7466 /* 0x635F7466@l */
/* 80239704  38 A0 00 00 */	li r5, 0
/* 80239708  81 83 00 00 */	lwz r12, 0(r3)
/* 8023970C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80239710  7D 89 03 A6 */	mtctr r12
/* 80239714  4E 80 04 21 */	bctrl 
/* 80239718  38 00 00 00 */	li r0, 0
/* 8023971C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80239720  80 7F 00 04 */	lwz r3, 4(r31)
/* 80239724  3C 80 74 66 */	lis r4, 0x7466 /* 0x74665F66@ha */
/* 80239728  38 C4 5F 66 */	addi r6, r4, 0x5F66 /* 0x74665F66@l */
/* 8023972C  38 A0 61 5F */	li r5, 0x615f
/* 80239730  81 83 00 00 */	lwz r12, 0(r3)
/* 80239734  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80239738  7D 89 03 A6 */	mtctr r12
/* 8023973C  4E 80 04 21 */	bctrl 
/* 80239740  38 00 00 00 */	li r0, 0
/* 80239744  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80239748  80 7F 00 04 */	lwz r3, 4(r31)
/* 8023974C  3C 80 74 66 */	lis r4, 0x7466 /* 0x74665F66@ha */
/* 80239750  38 C4 5F 66 */	addi r6, r4, 0x5F66 /* 0x74665F66@l */
/* 80239754  38 A0 62 5F */	li r5, 0x625f
/* 80239758  81 83 00 00 */	lwz r12, 0(r3)
/* 8023975C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80239760  7D 89 03 A6 */	mtctr r12
/* 80239764  4E 80 04 21 */	bctrl 
/* 80239768  38 00 00 00 */	li r0, 0
/* 8023976C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80239770  80 7F 00 04 */	lwz r3, 4(r31)
/* 80239774  3C 80 74 66 */	lis r4, 0x7466 /* 0x74665F66@ha */
/* 80239778  38 C4 5F 66 */	addi r6, r4, 0x5F66 /* 0x74665F66@l */
/* 8023977C  38 A0 63 5F */	li r5, 0x635f
/* 80239780  81 83 00 00 */	lwz r12, 0(r3)
/* 80239784  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80239788  7D 89 03 A6 */	mtctr r12
/* 8023978C  4E 80 04 21 */	bctrl 
/* 80239790  38 00 00 00 */	li r0, 0
/* 80239794  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80239798  80 7F 00 04 */	lwz r3, 4(r31)
/* 8023979C  3C 80 00 61 */	lis r4, 0x0061 /* 0x00615F74@ha */
/* 802397A0  38 C4 5F 74 */	addi r6, r4, 0x5F74 /* 0x00615F74@l */
/* 802397A4  38 A0 00 00 */	li r5, 0
/* 802397A8  81 83 00 00 */	lwz r12, 0(r3)
/* 802397AC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 802397B0  7D 89 03 A6 */	mtctr r12
/* 802397B4  4E 80 04 21 */	bctrl 
/* 802397B8  38 00 00 00 */	li r0, 0
/* 802397BC  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 802397C0  80 7F 00 04 */	lwz r3, 4(r31)
/* 802397C4  3C 80 00 62 */	lis r4, 0x0062 /* 0x00625F74@ha */
/* 802397C8  38 C4 5F 74 */	addi r6, r4, 0x5F74 /* 0x00625F74@l */
/* 802397CC  38 A0 00 00 */	li r5, 0
/* 802397D0  81 83 00 00 */	lwz r12, 0(r3)
/* 802397D4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 802397D8  7D 89 03 A6 */	mtctr r12
/* 802397DC  4E 80 04 21 */	bctrl 
/* 802397E0  38 00 00 00 */	li r0, 0
/* 802397E4  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 802397E8  80 7F 00 04 */	lwz r3, 4(r31)
/* 802397EC  3C 80 00 63 */	lis r4, 0x0063 /* 0x00635F74@ha */
/* 802397F0  38 C4 5F 74 */	addi r6, r4, 0x5F74 /* 0x00635F74@l */
/* 802397F4  38 A0 00 00 */	li r5, 0
/* 802397F8  81 83 00 00 */	lwz r12, 0(r3)
/* 802397FC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80239800  7D 89 03 A6 */	mtctr r12
/* 80239804  4E 80 04 21 */	bctrl 
/* 80239808  38 00 00 00 */	li r0, 0
/* 8023980C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80239810  80 9F 00 1C */	lwz r4, 0x1c(r31)
/* 80239814  80 84 00 04 */	lwz r4, 4(r4)
/* 80239818  38 61 00 08 */	addi r3, r1, 8
/* 8023981C  81 84 00 00 */	lwz r12, 0(r4)
/* 80239820  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 80239824  7D 89 03 A6 */	mtctr r12
/* 80239828  4E 80 04 21 */	bctrl 
/* 8023982C  88 01 00 08 */	lbz r0, 8(r1)
/* 80239830  98 1F 00 C4 */	stb r0, 0xc4(r31)
/* 80239834  88 01 00 09 */	lbz r0, 9(r1)
/* 80239838  98 1F 00 C5 */	stb r0, 0xc5(r31)
/* 8023983C  88 01 00 0A */	lbz r0, 0xa(r1)
/* 80239840  98 1F 00 C6 */	stb r0, 0xc6(r31)
/* 80239844  88 01 00 0B */	lbz r0, 0xb(r1)
/* 80239848  98 1F 00 C7 */	stb r0, 0xc7(r31)
/* 8023984C  C0 02 B1 58 */	lfs f0, lit_3909(r2)
/* 80239850  D0 1F 01 00 */	stfs f0, 0x100(r31)
/* 80239854  C0 02 B1 60 */	lfs f0, lit_3911(r2)
/* 80239858  D0 1F 01 04 */	stfs f0, 0x104(r31)
/* 8023985C  38 80 00 00 */	li r4, 0
/* 80239860  98 9F 01 08 */	stb r4, 0x108(r31)
/* 80239864  98 9F 01 0E */	stb r4, 0x10e(r31)
/* 80239868  98 9F 01 0F */	stb r4, 0x10f(r31)
/* 8023986C  98 9F 01 10 */	stb r4, 0x110(r31)
/* 80239870  98 9F 01 11 */	stb r4, 0x111(r31)
/* 80239874  B0 9F 01 0A */	sth r4, 0x10a(r31)
/* 80239878  B0 9F 01 0C */	sth r4, 0x10c(r31)
/* 8023987C  98 9F 01 12 */	stb r4, 0x112(r31)
/* 80239880  38 00 00 06 */	li r0, 6
/* 80239884  98 1F 01 13 */	stb r0, 0x113(r31)
/* 80239888  38 00 00 FF */	li r0, 0xff
/* 8023988C  98 1F 01 15 */	stb r0, 0x115(r31)
/* 80239890  98 1F 01 16 */	stb r0, 0x116(r31)
/* 80239894  98 9F 01 17 */	stb r4, 0x117(r31)
/* 80239898  98 1F 00 C8 */	stb r0, 0xc8(r31)
/* 8023989C  98 1F 00 C9 */	stb r0, 0xc9(r31)
/* 802398A0  98 1F 00 CA */	stb r0, 0xca(r31)
/* 802398A4  98 1F 00 CB */	stb r0, 0xcb(r31)
/* 802398A8  7F E3 FB 78 */	mr r3, r31
/* 802398AC  E3 E1 00 58 */	psq_l f31, 88(r1), 0, 0 /* qr0 */
/* 802398B0  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 802398B4  39 61 00 50 */	addi r11, r1, 0x50
/* 802398B8  48 12 89 4D */	bl _restgpr_20
/* 802398BC  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802398C0  7C 08 03 A6 */	mtlr r0
/* 802398C4  38 21 00 60 */	addi r1, r1, 0x60
/* 802398C8  4E 80 00 20 */	blr 
