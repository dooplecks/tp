lbl_801F9F84:
/* 801F9F84  3C 60 80 3E */	lis r3, m_cpadInfo__8mDoCPd_c@ha /* 0x803DD2E8@ha */
/* 801F9F88  38 63 D2 E8 */	addi r3, r3, m_cpadInfo__8mDoCPd_c@l /* 0x803DD2E8@l */
/* 801F9F8C  80 03 00 34 */	lwz r0, 0x34(r3)
/* 801F9F90  54 03 EF FE */	rlwinm r3, r0, 0x1d, 0x1f, 0x1f
/* 801F9F94  4E 80 00 20 */	blr 
