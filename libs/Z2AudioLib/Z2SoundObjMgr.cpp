//
// Generated By: dol2asm
// Translation Unit: Z2SoundObjMgr
//

#include "Z2AudioLib/Z2SoundObjMgr.h"
#include "Z2AudioLib/Z2Creature.h"
#include "Z2AudioLib/Z2SeqMgr.h"
#include "Z2AudioLib/Z2Calc.h"
#include "Z2AudioLib/Z2SceneMgr.h"
#include "dol2asm.h"

/* 802BF920-802BF980 2BA260 0060+00 0/0 1/1 0/0 .text            __ct__13Z2SoundObjMgrFv */
// order wrong because this needs to inherit from JASGlobalInstance<T>
Z2SoundObjMgr::Z2SoundObjMgr() : JASGlobalInstance<Z2SoundObjMgr>(this) {
    mGhostEnemyState = 0;
    mTwilightBattle = 0;
    setBattleInit();
    setForceBattleArea(false, 700, 1100, 1500);
}

/* 802BF980-802BF994 2BA2C0 0014+00 1/1 3/3 3/3 .text setForceBattleArea__13Z2SoundObjMgrFbUsUsUs
 */
void Z2SoundObjMgr::setForceBattleArea(bool forceBattle, u16 param_1, u16 param_2, u16 param_3) {
    mForceBattle = forceBattle;
    mEnemyArea.field_0x2 = param_1;
    mEnemyArea.field_0x4 = param_2;
    mEnemyArea.field_0x6 = param_3;
}

struct EnemyInfo {
    u8 field_0x0;
    u8 field_0x1;
    u8 field_0x2;
    u8 field_0x3;
    u8 field_0x4;
    u8 field_0x5;
    u8 field_0x6;
    u8 field_0x7;
    u32 field_0x8;
    u32 field_0xc;
};

/* 803CAD70-803CB170 027E90 0400+00 3/3 0/0 0/0 .data            mEnemyInfo */
SECTION_DATA static EnemyInfo mEnemyInfo[64] = {
    {0x44, 0x75, 0x6D, 0x6D, 0x79, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x73, 0x31, 0x00, 0x00, 0x00, 0x00, 0x010002BC, 0x04B007D0},
    {0x45, 0x5F, 0x79, 0x6B, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x79, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x79, 0x67, 0x00, 0x00, 0x00, 0x00, 0x0100012C, 0x01F402BC},
    {0x45, 0x5F, 0x79, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x79, 0x64, 0x00, 0x00, 0x00, 0x00, 0x010001F4, 0x038405DC},
    {0x45, 0x5F, 0x72, 0x64, 0x79, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x79, 0x6D, 0x62, 0x00, 0x00, 0x00, 0x0000000A, 0x0014001E},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x77, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x72, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x64, 0x6E, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x6B, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x73, 0x74, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x74, 0x6B, 0x00, 0x00, 0x00, 0x00, 0x010002BC, 0x05DC09C4},
    {0x45, 0x5F, 0x74, 0x6B, 0x32, 0x00, 0x00, 0x00, 0x010002BC, 0x05DC09C4},
    {0x45, 0x5F, 0x63, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x64, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x66, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x53, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x50, 0x4D, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x64, 0x62, 0x00, 0x00, 0x00, 0x00, 0x010001F4, 0x03840708},
    {0x45, 0x5F, 0x6B, 0x67, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x73, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x73, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x62, 0x73, 0x00, 0x00, 0x00, 0x00, 0x010000C8, 0x01900258},
    {0x45, 0x5F, 0x53, 0x4D, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x62, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x62, 0x75, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x48, 0x4D, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x67, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x68, 0x7A, 0x00, 0x00, 0x00, 0x00, 0x000001F4, 0x03200514},
    {0x45, 0x5F, 0x77, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x6F, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x66, 0x7A, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x66, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x62, 0x67, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x6D, 0x6D, 0x00, 0x00, 0x00, 0x00, 0x010001F4, 0x032005DC},
    {0x45, 0x5F, 0x6E, 0x7A, 0x00, 0x00, 0x00, 0x00, 0x010001F4, 0x02BC044C},
    {0x45, 0x5F, 0x70, 0x6F, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x72, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x73, 0x67, 0x00, 0x00, 0x00, 0x00, 0x010001F4, 0x02BC0384},
    {0x45, 0x5F, 0x68, 0x62, 0x00, 0x00, 0x00, 0x00, 0x010001F4, 0x038405DC},
    {0x45, 0x5F, 0x67, 0x62, 0x00, 0x00, 0x00, 0x00, 0x01000640, 0x0BB80FA0},
    {0x45, 0x5F, 0x6D, 0x73, 0x00, 0x00, 0x00, 0x00, 0x010001F4, 0x02BC044C},
    {0x45, 0x5F, 0x64, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x62, 0x69, 0x00, 0x00, 0x00, 0x00, 0x010001F4, 0x02BC0384},
    {0x45, 0x5F, 0x74, 0x74, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x61, 0x69, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x64, 0x6B, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x77, 0x77, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x67, 0x69, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x73, 0x6D, 0x32, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x73, 0x77, 0x00, 0x00, 0x00, 0x00, 0x01000190, 0x025805DC},
    {0x45, 0x5F, 0x72, 0x64, 0x62, 0x00, 0x00, 0x00, 0x010001F4, 0x03E805DC},
    {0x45, 0x5F, 0x6B, 0x6B, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x68, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x7A, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x67, 0x6D, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x42, 0x5F, 0x47, 0x47, 0x00, 0x00, 0x00, 0x00, 0x000003E8, 0x07D00FA0},
    {0x45, 0x5F, 0x6D, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x45, 0x5F, 0x7A, 0x6D, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
    {0x42, 0x5F, 0x74, 0x6E, 0x00, 0x00, 0x00, 0x00, 0x00000000, 0x00000000},
};

/* 80455B80-80455B84 004180 0004+00 1/1 0/0 0/0 .sdata2          sAreaDefault */
SECTION_SDATA2 static u32 sAreaDefault = 0x010002BC;

/* 80455B84-80455B88 004184 0004+00 1/1 0/0 0/0 .sdata2          None */
SECTION_SDATA2 static u32 data_80455B84 = 0x044C05DC;

/* 80455B88-80455B8C 004188 0004+00 1/1 0/0 0/0 .sdata2          sAreaFloating */
SECTION_SDATA2 static u32 sAreaFloating = 0x000002BC;

/* 80455B8C-80455B90 00418C 0004+00 1/1 0/0 0/0 .sdata2          None */
SECTION_SDATA2 static u32 data_80455B8C = 0x044C05DC;

/* 80455B90-80455B94 004190 0004+00 1/1 0/0 0/0 .sdata2          sAreaWide */
SECTION_SDATA2 static u32 sAreaWide = 0x010002BC;

/* 80455B94-80455B98 004194 0004+00 1/1 0/0 0/0 .sdata2          None */
SECTION_SDATA2 static u32 data_80455B94 = 0x05DC0CE4;

/* 80455B98-80455B9C 004198 0004+00 1/1 0/0 0/0 .sdata2          sAreaWideFloating */
SECTION_SDATA2 static u32 sAreaWideFloating = 0x000002BC;

/* 80455B9C-80455BA0 00419C 0004+00 1/1 0/0 0/0 .sdata2          None */
SECTION_SDATA2 static u32 data_80455B9C = 0x05DC0CE4;

/* 80455BA0-80455BA4 0041A0 0004+00 1/1 0/0 0/0 .sdata2          sAreaSmall */
SECTION_SDATA2 static u32 sAreaSmall = 0x0100012C;

/* 80455BA4-80455BA8 0041A4 0004+00 1/1 0/0 0/0 .sdata2          None */
SECTION_SDATA2 static u32 data_80455BA4 = 0x02BC03E8;

/* 80455BA8-80455BAC 0041A8 0004+00 1/1 0/0 0/0 .sdata2          sAreaSmallFloating */
SECTION_SDATA2 static u32 sAreaSmallFloating = 0x000001F4;

/* 80455BAC-80455BB0 0041AC 0004+00 1/1 0/0 0/0 .sdata2          None */
SECTION_SDATA2 static u32 data_80455BAC = 0x032004B0;

/* 802BF994-802BFFEC 2BA2D4 0658+00 1/0 1/1 0/0 .text            searchEnemy__13Z2SoundObjMgrFv */
void Z2SoundObjMgr::searchEnemy() {
    mTwilightBattle = 0;
    Z2CreatureLink* link = Z2GetLink();
    if (link == 0) {
        Z2GetSeqMgr()->stopBattleBgm(1, 1);
        return;
    }

    bool bVar7 = false;
    bool local_96 = false;
    bool iVar8 = false;
    if (Z2GetSeqMgr()->getMainBgmID() == 0x1000041) {
        iVar8 = true;
    }
    u8 iVar16 = 0;
    if (Z2GetSeqMgr()->getSubBgmID() == Z2BGM_HORSE_BATTLE) {
        iVar16 = 1;
    } else if (Z2GetSeqMgr()->getSubBgmID() == Z2BGM_FACE_OFF_BATTLE2) {
        iVar16 = 2;
    }
    field_0x14 = 0;
    mEnemyNumNear = 0;
    field_0x16 = 0;
    mEnemyNumVeryFar = 0;
    field_0x1a = false;
    field_0x18 = 0;
    f32 dVar18 = Z2Calc::getParamByExp(
        Z2GetLink()->getMoveSpeed(),
        0.0f,
        100.0f,
        0.3f,
        1.0f,
        2.5f,
        Z2Calc::CURVE_SIGN_1);
    f32 dVar19 = 5000.0f;

    for (JSULink<Z2CreatureEnemy>* local_8c = getFirst(); local_8c != NULL; local_8c = local_8c->getNext()) {
        Z2CreatureEnemy* this_00 = local_8c->getObject();
        if (this_00 == NULL) {
            continue;
        }
        if (this_00->field_0xa1 < 1) {
            continue;
        }
        bool bVar6 = false;
        u8 enemyId = this_00->mEnemyID;
        switch (enemyId) {
        case 0x36:
            if (Z2GetSceneMgr()->getCurrentSceneNum() == 0x1c)
                continue;
            break;
        case 0x11:
            if (Z2GetSceneMgr()->getCurrentSceneNum() == 0x1e)
                continue;
            break;
        case 0x27:
        case 0x28:
        case 0x39:
            bVar6 = true;
            break;
        case 0x37:
            if (iVar16 == 0)
                continue;
            break;
        case 0xa:
        case 0xb:
            if (iVar16 != 0)
                continue;
        case 0xc:
        case 0x16:
        case 0x1f:
        case 0x22:
        case 0x26:
        case 0x29:
        case 0x2b:
        case 0x30:
        case 0x35:
            if (!Z2GetLink()->isRiding())
                break;
            if (Z2GetLink()->getMoveSpeed() <= 0x26)
                break;
            continue;
        }
        Vec* iVar10 = this_00->getCurrentPos();
        if (iVar10 != NULL) {
            Vec* iVar14 = Z2GetLink()->getCurrentPos();
            if (iVar14 != NULL) {
                Z2EnemyArea local_88;
                __memcpy(&local_88, &mEnemyInfo[enemyId].field_0x8, 8);
                if (mForceBattle) {
                    local_88 = mEnemyArea;
                }
                f32 fVar2 = 2.0f;
                if (local_88.field_0x0 == 1) {
                    fVar2 = 4.0f;
                }
                Vec local_80 = {0.0f, 0.0f, 0.0f};
                VECSubtract(iVar10, iVar14, &local_80);
                local_80.y *= fVar2;
                f32 dVar20 = VECMag(&local_80);
                if (dVar20 < local_88.field_0x6 * dVar18) {
                    if (bVar6) {
                        field_0x1a++;
                        
                        if (dVar20 < local_88.field_0x4 * dVar18) {
                            mGhostEnemyState |= 1;
                            if (mGhostEnemyState >= 0x10) {
                                mEnemyNumNear++;
                                if (dVar20 < local_88.field_0x2 * dVar18) {
                                    field_0x14++;
                                }
                            }
                        }
                        if (mGhostEnemyState >= 0x11) {
                            field_0x16++;
                            if (this_00->mLinkSearch) {
                                local_96 = true;
                            }
                        }
                    } else {
                        field_0x16++;
                        if (enemyId != 0 && enemyId < 9) {
                            if (mTwilightBattle == 0) {
                                mTwilightBattle = 1;
                            }
                            if (enemyId == 0x1 || enemyId == 0x5) {
                                mTwilightBattle = 2;
                            }
                            if (enemyId == 0x8) {
                                mTwilightBattle = 2;
                            } else {
                                Z2GetSeqMgr()->changeSubBgmStatus(mTwilightBattle);
                            }
                        }
                        if (enemyId != 0x2c && this_00->mLinkSearch) {
                            local_96 = true;
                        }
                        if (dVar20 < local_88.field_0x4 * dVar18)
                        {
                            mEnemyNumNear++;
                            if (dVar20 < local_88.field_0x2 * dVar18)
                            {
                                field_0x14++;
                            }
                        }
                    }
                }
                if (dVar20 < dVar19 * dVar18) {
                    mEnemyNumVeryFar++;
                }
                if (this_00->field_0xa3 != 0) {
                    bVar7 = true;
                    field_0x18++;
                }
            }
        }
    }

    if (mGhostEnemyState == 0x11) {
        if (field_0x1a >= field_0x16) {
            Z2GetSeqMgr()->setBattleGhostMute(false);
        } else {
            Z2GetSeqMgr()->setBattleGhostMute(true);
        }
    } else if (mGhostEnemyState < 0x20 && field_0x1a == 0x0) {
        setGhostEnemyState(0);
    }
    if (iVar16 == 1) {
        if (field_0x14 != 0x0) {
            Z2GetSeqMgr()->changeSubBgmStatus(1);
        } else {
            Z2GetSeqMgr()->changeSubBgmStatus(0);
        }
    } else if (iVar16 == 2) {
        if (mEnemyNumNear != 0x0) {
            Z2GetSeqMgr()->changeSubBgmStatus(1);
        } else {
            Z2GetSeqMgr()->changeSubBgmStatus(0);
        }
    } else if (iVar8) {
        if (field_0x16 != 0x0) {
            Z2GetSeqMgr()->changeBgmStatus(1);
        } else {
            Z2GetSeqMgr()->changeBgmStatus(0);
        }
    } else if (!bVar7) {
        Z2GetSeqMgr()->setBattleSearched(local_96);
        if (field_0x14 != 0x0) {
            Z2GetSeqMgr()->setBattleDistState(0);
        } else {
            if (mEnemyNumNear != 0x0) {
                Z2GetSeqMgr()->setBattleDistState(1);
            } else {
                if (field_0x16 != 0x0) {
                    Z2GetSeqMgr()->setBattleDistState(2);
                } else {
                    Z2GetSeqMgr()->setBattleDistState(3);
                }
            }
        }
    }
}

void Z2SoundObjMgr::setGhostEnemyState(u8 p1) {
    if (p1 == 0x20) {
        if (field_0x1a >= field_0x16) {
            JASGlobalInstance<Z2SeqMgr>::getInstance()->setBattleGhostMute(true);
        }
    } else {
        if (field_0x1a == false) {
            mGhostEnemyState = 0;
            return;
        }
    }

    mGhostEnemyState = p1 + (mGhostEnemyState & 1);
}

/* 802C0074-802C0100 2BA9B4 008C+00 0/0 1/1 0/0 .text
 * getEnemyID__13Z2SoundObjMgrFPCcP26JSULink<15Z2CreatureEnemy> */
u8 Z2SoundObjMgr::getEnemyID(char const* param_0, JSULink<Z2CreatureEnemy>* param_1) {
    if (param_0 != NULL) {
        for (u8 uVar2 = 0; uVar2 < 0x40; uVar2++) {
            if (strcmp(param_0, (char*)&mEnemyInfo[(u32)uVar2].field_0x0) == 0) {
                append(param_1);
                return uVar2;
            }
        }
    }
    return Z2_ENEMY_ID_0;
}

/* 802C0100-802C0120 2BAA40 0020+00 1/1 1/1 0/0 .text            setBattleInit__13Z2SoundObjMgrFv */
void Z2SoundObjMgr::setBattleInit() {
    field_0x14 = 0;
    mEnemyNumNear = 0;
    field_0x16 = 0;
    mEnemyNumVeryFar = 0;
    field_0x18 = 0;
    field_0x1a = false;
}

/* 802C0120-802C013C 2BAA60 001C+00 0/0 1/1 0/0 .text checkBattleFinish__13Z2SoundObjMgrFv */
bool Z2SoundObjMgr::checkBattleFinish() {
    return mEnemyNumVeryFar - field_0x18 <= 0;
}

/* 802C013C-802C0190 2BAA7C 0054+00 0/0 1/1 0/0 .text            deleteEnemyAll__13Z2SoundObjMgrFv
 */
void Z2SoundObjMgr::deleteEnemyAll() {
    JSULink<Z2CreatureEnemy>* link;

    // not moving the link pointer forward looks like a bug, but deleteObject() actually unlinks the
    // enemy from its owning list
    while (link = this->getFirst(), link != NULL) {
        Z2CreatureEnemy* enemy = link->getObject();
        if (enemy == NULL) {
            // setWarningMessage_f((JUTAssertion *)0x1,(ulong)"Z2SoundObjMgr.cpp",(char
            // *)0x16f,(int)&*fill*,
            //                     "[Z2SoundObjMgr::searchEnemy] remain remove enemy\n",in_r8);
        } else {
            enemy->deleteObject();
        }
    }
}

/* 802C0190-802C01E4 2BAAD0 0054+00 0/0 2/2 0/0 .text
 * removeEnemy__13Z2SoundObjMgrFP26JSULink<15Z2CreatureEnemy>   */
bool Z2SoundObjMgr::removeEnemy(JSULink<Z2CreatureEnemy>* param_0) {
    if (param_0 == NULL) {
        return false;
    }

    Z2CreatureEnemy* enemy = param_0->getObject();
    if (enemy->field_0xa3 != 0 && field_0x18 != 0) {
        field_0x18--;
    }
    return remove(param_0);
}

/* 802C01E4-802C01EC 2BAB24 0008+00 0/0 4/4 0/0 .text            isTwilightBattle__13Z2SoundObjMgrFv
 */
u8 Z2SoundObjMgr::isTwilightBattle() {
    return mTwilightBattle;
}

/* 802C01EC-802C03C8 2BAB2C 01DC+00 0/0 1/0 0/0 .text            __sinit_Z2SoundObjMgr_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_Z2SoundObjMgr_cpp() {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundObjMgr/__sinit_Z2SoundObjMgr_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x802C01EC, __sinit_Z2SoundObjMgr_cpp);
#pragma pop
