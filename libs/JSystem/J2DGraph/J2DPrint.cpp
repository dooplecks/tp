//
// Generated By: dol2asm
// Translation Unit: J2DPrint
//

#include "JSystem/J2DGraph/J2DPrint.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JUtility/JUTFont.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "global.h"

/* ############################################################################################## */
/* 80451580-80451584 000A80 0004+00 3/3 0/0 0/0 .sbss            mStrBuff__8J2DPrint */
const u8* J2DPrint::mStrBuff;

/* 80451584-80451588 000A84 0004+00 1/1 0/0 0/0 .sbss            None */
static bool sStrBufInitialized;

/* 80451588-8045158C 000A88 0004+00 3/3 0/0 0/0 .sbss            mStrBuffSize__8J2DPrint */
size_t J2DPrint::mStrBuffSize;

/* 8045158C-80451590 000A8C 0004+00 2/2 0/0 0/0 .sbss            None */
static u8 data_8045158C[4];

/* 802F42F0-802F4394 2EEC30 00A4+00 1/1 0/0 0/0 .text            J2DPrint_print_alpha_va */
f32 J2DPrint_print_alpha_va(J2DPrint* pPrint, u8 param_1, const char* fmt, va_list args) {
    pPrint->initchar();
    s32 tmp = vsnprintf((char*)J2DPrint::mStrBuff, J2DPrint::mStrBuffSize, fmt, args);

    J2DPrint::TSize size;
    if (tmp < 0) {
        return 0.0f;
    } else if (tmp >= J2DPrint::mStrBuffSize) {
        tmp = J2DPrint::mStrBuffSize - 1;
        data_8045158C[0] = 1;
    }
    pPrint->parse(J2DPrint::mStrBuff, tmp, 0x80000000 - 1, NULL, size, param_1, true);
    return size.field_0x0;
}

/* 802F4394-802F4420 2EECD4 008C+00 0/0 6/6 0/0 .text
 * __ct__8J2DPrintFP7JUTFontffQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
 */
J2DPrint::J2DPrint(JUTFont* pFont, f32 param_1, f32 param_2, JUtility::TColor param_3,
                   JUtility::TColor param_4, JUtility::TColor param_5, JUtility::TColor param_6) {
    private_initiate(pFont, param_1, param_2, param_3, param_4, param_5, param_6, false);
}

/* 802F4420-802F4468 2EED60 0048+00 1/0 6/6 0/0 .text            __dt__8J2DPrintFv */
J2DPrint::~J2DPrint() {}

/* 802F4468-802F4658 2EEDA8 01F0+00 1/1 0/0 0/0 .text
 * private_initiate__8J2DPrintFP7JUTFontffQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorb
 */
void J2DPrint::private_initiate(JUTFont* pFont, f32 param_1, f32 param_2, JUtility::TColor param_3,
                                JUtility::TColor param_4, JUtility::TColor param_5,
                                JUtility::TColor param_6, bool param_7) {
    if (mStrBuff == NULL) {
        setBuffer(0x400);  // r4
    }
    mFont = pFont;
    field_0x48 = param_1;
    field_0x4c = 32.0f;

    if (mFont != NULL) {
        f32 temp;
        if (param_7 == false) {
            temp = param_2;
        } else {
            temp = mFont->getLeading();
        }
        field_0x4c = temp;
    }

    field_0x5a = 1;
    locate(0.0f, 0.0f);
    mCharColor = param_3;
    mGradColor = param_4;
    field_0x38 = param_5;
    field_0x3c = param_6;

    if (mFont == NULL) {
        field_0x58 = 80;
    } else {
        field_0x58 = mFont->getWidth() << 2;
    }

    if (mFont != NULL) {
        setFontSize();
        mFont->setGX(field_0x38, field_0x3c);
    }
    initchar();
}

/* 802F4658-802F46C4 2EEF98 006C+00 1/1 1/1 0/0 .text            setBuffer__8J2DPrintFUl */
u8* J2DPrint::setBuffer(size_t size) {
    u8* tmp = (u8*)mStrBuff;
    if (sStrBufInitialized) {
        delete mStrBuff;
    }

    mStrBuff = new (JKRHeap::sSystemHeap, 0) u8[size];
    mStrBuffSize = size;
    sStrBufInitialized = true;
    return tmp;
}

/* 802F46C4-802F475C 2EF004 0098+00 1/1 0/0 0/0 .text            setFontSize__8J2DPrintFv */
void J2DPrint::setFontSize() {
    if (mFont) {
        mFontSizeX = mFont->getCellWidth();
        mFontSizeY = mFont->getCellHeight();
    }
}

/* 802F475C-802F4778 2EF09C 001C+00 2/2 2/2 0/0 .text            locate__8J2DPrintFff */
void J2DPrint::locate(f32 param_0, f32 param_1) {
    field_0x24 = param_0;
    field_0x28 = param_1;
    field_0x2c = param_0;
    mCursorV = param_1;
    field_0x34 = 0.0f;
}

/* 802F4778-802F4828 2EF0B8 00B0+00 0/0 2/2 0/0 .text            print__8J2DPrintFffUcPCce */
void J2DPrint::print(f32 param_0, f32 param_1, u8 param_2, char const* fmt, ...) {
    locate(param_0, param_1);

    va_list args;
    va_start(args, fmt);
    J2DPrint_print_alpha_va(this, param_2, fmt, args);
    va_end(args);
}

/* 802F4828-802F4B4C 2EF168 0324+00 0/0 4/4 0/0 .text
 * printReturn__8J2DPrintFPCcff18J2DTextBoxHBinding18J2DTextBoxVBindingffUc */
void J2DPrint::printReturn(char const* param_0, f32 param_1, f32 param_2,
                               J2DTextBoxHBinding param_3, J2DTextBoxVBinding param_4, f32 param_5,
                               f32 param_6, u8 param_7) {
    if (mFont != NULL) {
        initchar();
        field_0x24 = field_0x2c;
        field_0x28 = mCursorV;
        size_t sVar6 = strlen(param_0);
        if (sVar6 >= mStrBuffSize) {
            sVar6 = mStrBuffSize - 1;
            data_8045158C[0] = 1;
        }
        u16 local_2b0[260];
        TSize aTStack_2b8;
        f32 dVar10 = parse((const u8*)param_0, sVar6, param_1, local_2b0, aTStack_2b8,
                               param_7, false);
        f32 dVar12 = mFont->getAscent()*(mFontSizeY / mFont->getCellHeight());
        f32 dVar13 = dVar10 + dVar12;
        switch (param_4)
        {
        case VBIND_TOP:
            break;
        case VBIND_BOTTOM:
            param_6 += (s32)(param_2 - dVar13 - 0.5f);
            break;
        case VBIND_CENTER:
            param_6 += (s32)(param_2 - dVar13 - 0.5f) / 2;
        default:
            break;
        }

        for (int iVar8 = 0; local_2b0[iVar8] != 0xffff; iVar8++) {
            switch (param_3) {
            case VBIND_TOP:
                local_2b0[iVar8] = 0;
                break;
            case VBIND_BOTTOM:
                local_2b0[iVar8] = param_1 - local_2b0[iVar8];
                break;
            case VBIND_CENTER:
                f32 fVar1 = (local_2b0[iVar8]);
                fVar1 = param_1 - fVar1;
                f32 ratio = 0.5f;
                local_2b0[iVar8] = fVar1 * ratio;
                break;
            
            }
        }
        initchar();
        field_0x2c += param_5;
        mCursorV += param_6 + dVar12;
        field_0x24 = field_0x2c;
        field_0x28 = mCursorV;
        parse((const u8*)param_0, sVar6, param_1, local_2b0, aTStack_2b8, param_7, true);
    }
}

/* 802F4B4C-802F52E8 2EF48C 079C+00 2/2 0/0 0/0 .text
 * parse__8J2DPrintFPCUciiPUsRQ28J2DPrint5TSizeUcb              */
f32 J2DPrint::parse(u8 const* param_0, int param_1, int param_2, u16* param_3,
                         J2DPrint::TSize& param_4, u8 param_5, bool param_6) {
    if (mFont == NULL) {
        return 0.0f;
    }
    const u8* local_a4 = param_0;
    u16 r29 = 0;
    f32 f30 = field_0x2c;
    f32 f28 = mCursorV;
    f32 f31 = f30;
    f32 local_a8 = f28;
    int r27 = *(param_0++);
    f32 f29 = field_0x2c;
    f32 local_ac = field_0x2c;
    f32 local_b0 = mCursorV;
    f32 local_b4 = mCursorV;
    JUtility::TColor local_b8 = field_0x8;
    JUtility::TColor local_bc = field_0xc;
    f32 local_c0;
    local_b8.a = local_b8.a * param_5 / 0xff;
    local_bc.a = local_bc.a * param_5 / 0xff;
    mFont->setGradColor(local_b8, field_0x22 ? local_bc : local_b8);
    do {
        bool local_f0 = false;
        bool r25;
        if (mFont->isLeadByte(r27)) {
            r27 = (r27 << 8) | (*(param_0++));
            local_f0 = true;
        }

        if (r27 == 0 || ((u32)param_0 - (u32)local_a4) > param_1) {
            if (param_6 == 0 && param_3 != NULL) {
                param_3[r29] = 0.5f + f31;
            }
            r29++;
            break;
        } else {
            r25 = true;
            local_c0 = field_0x2c;
            if (r27 < 0x20) {
                if (r27 == 0x1b) {
                    u16 local_e8 = doEscapeCode(&param_0, param_5);
                    if (local_e8 == 'HM') {
                        if ((param_6 == 0) && (param_3 != NULL)) {
                            param_3[r29] = 0.5f + f31;
                        }
                        field_0x2c = f30;
                        mCursorV = f28;
                        r29++;
                        if (r29 == 0x100) {
                            break;
                        }
                        f31 = 0.0f;
                    }
                    if (local_e8) {
                        r25 = false;
                    }
                } else {
                    doCtrlCode(r27);
                    r25 = false;
                    if (r27 == 10) {
                        if ((!param_6) && (param_3 != NULL)) {
                            param_3[r29] = 0.5f + f31;
                        }
                        r29++;
                        if (r29 == 0x100) {
                            break;
                        }
                        f31 = 0.0f;
                    }
                }
            } else if (local_f0 && ((u32)param_0 - (u32)local_a4 > (u32)param_1)) {
                if ((!param_6) && (param_3 != NULL)) {
                    param_3[r29] = 0.5f + f31;
                }
                r29++;
                break;
            } else {
                if (mFont->isFixed()) {
                    field_0x34 = mFont->getFixedWidth();
                } else {
                    JUTFont::TWidth uStack_ec;
                    mFont->getWidthEntry(r27, &uStack_ec);
                    field_0x34 = uStack_ec.field_0x1;
                }

                field_0x34 *= field_0x18 / mFont->getCellWidth();
                f32 fVar6 = ((field_0x2c + field_0x34) - field_0x24);
                fVar6 = 10000.0f * fVar6;
                f32 local_c8 = s32(fVar6) / 10000.0f;
                if (local_c8 > param_2 && field_0x2c > f30) {
                    u32 local_e4;
                    if (local_f0) {
                        local_e4 = 2;
                    } else {
                        local_e4 = 1;
                    }
                    param_0 -= local_e4;
                    mCursorV += field_0x14;
                    if (!param_6 && (param_3 != NULL)) {
                        param_3[r29] = 0.5f + f31;
                    }
                    r29++;
                    if (r29 == 0x100) {
                        break;
                    }
                    field_0x2c = field_0x24;
                    f31 = 0.0f;
                    r25 = false;
                } else {
                    if (param_6) {
                        if (param_3 != NULL) {
                            mFont->drawChar_scale(field_0x2c + (f32)(s16)param_3[r29], mCursorV,
                                (s32)field_0x18, (s32)field_0x1c, r27, true);
                        } else {
                            mFont->drawChar_scale(field_0x2c, mCursorV,
                                (s32)field_0x18, (s32)field_0x1c, r27, true);
                        }
                    }
                    field_0x2c += field_0x34;
                }
            }
        }

        if (r25) {
            if (field_0x2c - f30 > f31) {
                f31 = field_0x2c - f30;
            }
            field_0x2c += field_0x10;
            field_0x34 += field_0x10;
            f32 local_cc = (field_0x1c / mFont->getHeight()) * mFont->getDescent();
            if (local_a8 < mCursorV + local_cc) {
                local_a8 = mCursorV + local_cc;
            }
            if (field_0x2c > local_ac) {
                local_ac = field_0x2c;
            }
            if (field_0x2c < f29) {
                f29 = field_0x2c;
            }
            if (local_c0 < f29) {
                f29 = local_c0;
            }
            if (mCursorV > local_b4) {
                local_b4 = mCursorV;
            }
            if (mCursorV < local_b0) {
                local_b0 = mCursorV;
            }
        }
        r27 = *(param_0++);
    } while (true);

    if (param_3 != NULL) {
        param_3[r29] = 0xffff;
    }
    param_4.field_0x0 = local_ac - f29;
    param_4.field_0x4 = local_b4 - local_b0 + mFont->getLeading();
    if (!param_6) {
        field_0x2c = f30;
        mCursorV = f28;
    }
    return local_a8 - f28;
}

/* 802F52E8-802F5410 2EFC28 0128+00 2/1 0/0 0/0 .text            doCtrlCode__8J2DPrintFi */
void J2DPrint::doCtrlCode(int param_0) {
    switch (param_0) {
    case 8:
        field_0x2c -= field_0x34;
        field_0x34 = 0.0f;
        break;
    case 9:
        if (field_0x20 > 0) {
            f32 fVar1 = field_0x2c;
            field_0x2c = field_0x20 + field_0x20 * ((int)field_0x2c / field_0x20);
            field_0x34 = field_0x2c - fVar1;
        }
        break;
    case 10:
        field_0x34 = 0.0f;
        field_0x2c = field_0x24;
        mCursorV += field_0x14;
        break;
    case 0xd:
        field_0x34 = 0.0f;
        field_0x2c = field_0x24;
        break;
    case 0x1c:
        field_0x2c += 1.0f;
        break;
    case 0x1d:
        field_0x2c -= 1.0f;
        break;
    case 0x1e:
        mCursorV -= 1.0f;
        break;
    case 0x1f:
        mCursorV += + 1.0f;
    }
}

/* 802F5410-802F594C 2EFD50 053C+00 1/1 0/0 0/0 .text            doEscapeCode__8J2DPrintFPPCUcUc */
u16 J2DPrint::doEscapeCode(u8 const** param_0, u8 param_1) {
    u8 const* puVar9 = *param_0;
    u16 uVar11 = 0;
    u16 uVar3;
    for (int iVar10 = 0; iVar10 < 2; iVar10++) {
        if (mFont->isLeadByte(**param_0)) {
            uVar3 = ((**param_0) << 8) | (*param_0)[1];
            (*param_0) += 2;
        } else {
            uVar3 = **param_0;
            (*param_0)++;
        }
        if (uVar3 >= 0x80 || uVar3 < 0x20) {
            *param_0 = puVar9;
            return 0;
        }
        uVar11 = ((uVar11) << 8) | uVar3;
    }

    JUtility::TColor local_40 = field_0x8;
    JUtility::TColor local_44 = field_0xc;
    switch(uVar11) {
    case 'CU':
        mCursorV -= getNumberF32(param_0, 1.0f, 0.0f, 10);
        break;
    case 'CD':
        mCursorV += getNumberF32(param_0, 1.0f, 0.0f, 10);
        break;
    case 'CL':
        field_0x2c -= getNumberF32(param_0, 1.0f, 0.0f, 10);
        break;
    case 'CR':
        field_0x2c += getNumberF32(param_0, 1.0f, 0.0f, 10);
        break;
    case 'LU':
        mCursorV -= field_0x14;
        break;
    case 'LD':
        mCursorV += field_0x14;
        break;
    case 'ST':
        s32 val = getNumberS32(param_0, field_0x20, field_0x20, 10);
        if (val > 0) {
            field_0x20 = val;
        }
        break;
    case 'CC':
        field_0x8 = getNumberS32(param_0, *(u32*)&mCharColor, *(u32*)&field_0x8, 16);
        local_40 = field_0x8;
        local_40.a = local_40.a * param_1 / 0xff;
        local_44.a = local_44.a * param_1 / 0xff;
        JUtility::TColor* local_68;
        if (field_0x22 != 0) {
            local_68 = &local_44;
        }
        else {
            local_68 = &local_40;
        }
        mFont->setGradColor(local_40, *local_68);
        break;
    case 'GC':
        field_0xc = getNumberS32(param_0, *(u32*)&mGradColor, *(u32*)&field_0xc, 16);
        local_44 = field_0xc;
        local_40.a = local_40.a * param_1 / 0xff;
        local_44.a = local_44.a * param_1 / 0xff;
        JUtility::TColor* local_74;
        if (field_0x22 != 0) {
            local_74 = &local_44;
        }
        else {
            local_74 = &local_40;
        }
        mFont->setGradColor(local_40, *local_74);
        break;
    case 'FX':
        f32 dVar13 = getNumberF32(param_0, mFontSizeX, field_0x18, 10);
        if (dVar13 >= 0) {
            field_0x18 = dVar13;
        }
        break;
    case 'FY':
        f32 dVar14 = getNumberF32(param_0, mFontSizeY, field_0x1c, 10);
        if (dVar14 >= 0) {
            field_0x1c = dVar14;
        }
        break;
    case 'SH':
        field_0x10 = getNumberF32(param_0, field_0x48, field_0x10, 10);
        break;
    case 'SV':
        field_0x14 = getNumberF32(param_0, field_0x4c, field_0x14, 10);
        break;
    case 'GM':
        s32 isZero = getNumberS32(param_0, field_0x22 == 0, field_0x22, 10) == 0;
        field_0x22 = isZero == 0;
        local_40.a = local_40.a * param_1 / 0xff;
        local_44.a = local_44.a * param_1 / 0xff;
        JUtility::TColor* local_80;
        if (field_0x22 != 0) {
            local_80 = &local_44;
        }
        else {
            local_80 = &local_40;
        }
        mFont->setGradColor(local_40, *local_80);
        break;
    case 'HM':
        break;
    default:
        *param_0 = puVar9;
        uVar11 = 0;
        break;
    }
    return uVar11;
}

/* 802F594C-802F59C0 2F028C 0074+00 3/3 0/0 0/0 .text            initchar__8J2DPrintFv */
void J2DPrint::initchar() {
    field_0x8 = mCharColor;
    field_0xc = mGradColor;
    field_0x10 = field_0x48;
    field_0x14 = field_0x4c;
    field_0x22 = field_0x5a;
    field_0x20 = field_0x58;
    field_0x18 = mFontSizeX;
    field_0x1c = mFontSizeY;
}

/* 802F59C0-802F5AC4 2F0300 0104+00 1/1 0/0 0/0 .text            getNumberS32__8J2DPrintFPPCUclli */
s32 J2DPrint::getNumberS32(u8 const** param_0, s32 param_1, s32 param_2, int base) {
    const u8* puVar1 = *param_0;
    s32 uVar2 = param_1;
    if (*puVar1 != '[') {
        return param_1;
    }
    (*param_0)++;
    uVar2 = 0;
    char* local_28;
    if (base == 10) {
        uVar2 = strtol((char*)*param_0, &local_28, base);
    } else if (base == 16) {
        uVar2 = strtoul((char*)*param_0, &local_28, base);
        if ((u32)local_28 - (u32)*param_0 != 8) {
            if ((u32)local_28 - (u32)*param_0 == 6) {
                uVar2 = (uVar2 << 8) | 0xff;
            } else {
                *param_0 = puVar1;
                return param_2;
            }
        }
    }
    if (local_28[0] != ']') {
        *param_0 = puVar1;
        return param_2;
    } else {
        if ((char*)*param_0 == (char*)local_28) {
            *param_0 = (const u8*)local_28 + 1;
            return param_1;
        } else {
            *param_0 = (const u8*)local_28 + 1;
        }
    }
    return uVar2;
}

/* 802F5AC4-802F5BF8 2F0404 0134+00 1/1 0/0 0/0 .text            getNumberF32__8J2DPrintFPPCUcffi */
f32 J2DPrint::getNumberF32(u8 const** param_0, f32 param_1, f32 param_2, int base) {
    const u8* puVar1 = *param_0;
    s32 uVar2 = param_1;
    if (*puVar1 != '[') {
        return param_1;
    }
    (*param_0)++;
    uVar2 = 0;
    char* local_28;
    if (base == 10) {
        uVar2 = strtol((char*)*param_0, &local_28, base);
    } else if (base == 16) {
        uVar2 = strtoul((char*)*param_0, &local_28, base);
        if ((u32)local_28 - (u32)*param_0 != 8) {
            if ((u32)local_28 - (u32)*param_0 == 6) {
                uVar2 = (uVar2 << 8) | 0xff;
            } else {
                *param_0 = puVar1;
                return param_2;
            }
        }
    }
    if (local_28[0] != ']') {
        *param_0 = puVar1;
        return param_2;
    } else {
        if ((char*)*param_0 == (char*)local_28) {
            *param_0 = (const u8*)local_28 + 1;
            return param_1;
        } else {
            *param_0 = (const u8*)local_28 + 1;
        }
    }
    return uVar2;
}
