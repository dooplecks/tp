/* 8011D6D0 0011A610  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8011D6D4 0011A614  7C 08 02 A6 */ mflr r0
/* 8011D6D8 0011A618  90 01 00 14 */ stw r0, 0x14(r1)
/* 8011D6DC 0011A61C  93 E1 00 0C */ stw r31, 0xc(r1)
/* 8011D6E0 0011A620  7C 7F 1B 78 */ mr r31, r3
/* 8011D6E4 0011A624  38 80 01 58 */ li r4, 0x158
/* 8011D6E8 0011A628  4B FA 56 BD */ bl daAlink_c_NS_commonProcInitNotSameProc
/* 8011D6EC 0011A62C  2C 03 00 00 */ cmpwi r3, 0
/* 8011D6F0 0011A630  40 82 00 0C */ bne lbl_8011D6FC
/* 8011D6F4 0011A634  38 60 00 01 */ li r3, 1
/* 8011D6F8 0011A638  48 00 00 C8 */ b lbl_8011D7C0
lbl_8011D6FC:
/* 8011D6FC 0011A63C  80 1F 05 74 */ lwz r0, 0x574(r31)
/* 8011D700 0011A640  54 00 01 8D */ rlwinm. r0, r0, 0, 6, 6
/* 8011D704 0011A644  41 82 00 4C */ beq lbl_8011D750
/* 8011D708 0011A648  7F E3 FB 78 */ mr r3, r31
/* 8011D70C 0011A64C  38 80 00 89 */ li r4, 0x89
/* 8011D710 0011A650  48 00 BF 69 */ bl daAlink_c_NS_setSingleAnimeWolfBase
/* 8011D714 0011A654  3C 60 80 42 */ lis r3, lbl_8042561C@ha
/* 8011D718 0011A658  C4 03 56 1C */ lfsu f0, lbl_8042561C@l(r3)
/* 8011D71C 0011A65C  D0 1F 35 88 */ stfs f0, 0x3588(r31)
/* 8011D720 0011A660  C0 03 00 04 */ lfs f0, 4(r3)
/* 8011D724 0011A664  D0 1F 35 8C */ stfs f0, 0x358c(r31)
/* 8011D728 0011A668  C0 03 00 08 */ lfs f0, 8(r3)
/* 8011D72C 0011A66C  D0 1F 35 90 */ stfs f0, 0x3590(r31)
/* 8011D730 0011A670  7F E3 FB 78 */ mr r3, r31
/* 8011D734 0011A674  3C 80 00 01 */ lis r4, 0x000100BD@ha
/* 8011D738 0011A678  38 84 00 BD */ addi r4, r4, 0x000100BD@l
/* 8011D73C 0011A67C  81 9F 06 28 */ lwz r12, 0x628(r31)
/* 8011D740 0011A680  81 8C 01 14 */ lwz r12, 0x114(r12)
/* 8011D744 0011A684  7D 89 03 A6 */ mtctr r12
/* 8011D748 0011A688  4E 80 04 21 */ bctrl
/* 8011D74C 0011A68C  48 00 00 48 */ b lbl_8011D794
lbl_8011D750:
/* 8011D750 0011A690  7F E3 FB 78 */ mr r3, r31
/* 8011D754 0011A694  38 80 01 80 */ li r4, 0x180
/* 8011D758 0011A698  4B F8 F8 29 */ bl daAlink_c_NS_setSingleAnimeBase
/* 8011D75C 0011A69C  3C 60 80 42 */ lis r3, lbl_80425514@ha
/* 8011D760 0011A6A0  C4 03 55 14 */ lfsu f0, lbl_80425514@l(r3)
/* 8011D764 0011A6A4  D0 1F 35 88 */ stfs f0, 0x3588(r31)
/* 8011D768 0011A6A8  C0 03 00 04 */ lfs f0, 4(r3)
/* 8011D76C 0011A6AC  D0 1F 35 8C */ stfs f0, 0x358c(r31)
/* 8011D770 0011A6B0  C0 03 00 08 */ lfs f0, 8(r3)
/* 8011D774 0011A6B4  D0 1F 35 90 */ stfs f0, 0x3590(r31)
/* 8011D778 0011A6B8  7F E3 FB 78 */ mr r3, r31
/* 8011D77C 0011A6BC  3C 80 00 01 */ lis r4, 0x000100A1@ha
/* 8011D780 0011A6C0  38 84 00 A1 */ addi r4, r4, 0x000100A1@l
/* 8011D784 0011A6C4  81 9F 06 28 */ lwz r12, 0x628(r31)
/* 8011D788 0011A6C8  81 8C 01 14 */ lwz r12, 0x114(r12)
/* 8011D78C 0011A6CC  7D 89 03 A6 */ mtctr r12
/* 8011D790 0011A6D0  4E 80 04 21 */ bctrl
lbl_8011D794:
/* 8011D794 0011A6D4  C0 1F 35 8C */ lfs f0, 0x358c(r31)
/* 8011D798 0011A6D8  D0 1F 33 B0 */ stfs f0, 0x33b0(r31)
/* 8011D79C 0011A6DC  C0 22 92 C0 */ lfs f1, lbl_80452CC0-_SDA2_BASE_(r2)
/* 8011D7A0 0011A6E0  D0 3F 33 98 */ stfs f1, 0x3398(r31)
/* 8011D7A4 0011A6E4  7F E3 FB 78 */ mr r3, r31
/* 8011D7A8 0011A6E8  C0 5F 05 34 */ lfs f2, 0x534(r31)
/* 8011D7AC 0011A6EC  38 80 00 00 */ li r4, 0
/* 8011D7B0 0011A6F0  4B F9 DF C1 */ bl setSpecialGravity__9daAlink_cFffi
/* 8011D7B4 0011A6F4  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 8011D7B8 0011A6F8  D0 1F 04 FC */ stfs f0, 0x4fc(r31)
/* 8011D7BC 0011A6FC  38 60 00 01 */ li r3, 1
lbl_8011D7C0:
/* 8011D7C0 0011A700  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 8011D7C4 0011A704  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8011D7C8 0011A708  7C 08 03 A6 */ mtlr r0
/* 8011D7CC 0011A70C  38 21 00 10 */ addi r1, r1, 0x10
/* 8011D7D0 0011A710  4E 80 00 20 */ blr