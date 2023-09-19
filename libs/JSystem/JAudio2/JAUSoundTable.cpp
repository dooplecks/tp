//
// Generated By: dol2asm
// Translation Unit: JAUSoundTable
//

#include "JSystem/JAudio2/JAUSoundTable.h"
#include "dolphin/types.h"

/* 802A7114-802A7160 2A1A54 004C+00 0/0 1/1 0/0 .text            init__13JAUSoundTableFPCv */
void JAUSoundTable::init(void const* param_0) {
    if (param_0 != NULL) {
        field_0x0.init(param_0);
    } else {
        field_0x0.reset();
    }
}

/* 802A7160-802A728C 2A1AA0 012C+00 0/0 10/10 0/0 .text getTypeID__13JAUSoundTableCF10JAISoundID
 */
u8 JAUSoundTable::getTypeID(JAISoundID param_0) const {
    if (param_0.isAnonymous()) {
        return 0xff;
    }
    JAUSoundTableSection* section = field_0x0.getSection(param_0.mId.mBytes.b0);
    if (section == NULL) {
        return 0xff;
    }
    JAUSoundTableGroup* group = field_0x0.getGroup(section, param_0.mId.mBytes.b1);
    if (group == NULL) {
        return 0xff;
    }
    return group->getTypeID(param_0.mId.mAdvancedId.mShortId);
}

/* 802A728C-802A73D4 2A1BCC 0148+00 0/0 7/7 0/0 .text getData__13JAUSoundTableCF10JAISoundID */
void* JAUSoundTable::getData(JAISoundID param_0) const {
    if (param_0.isAnonymous()) {
        return NULL;
    }
    JAUSoundTableSection* section = field_0x0.getSection(param_0.mId.mBytes.b0);
    if (section == NULL) {
        return NULL;
    }
    JAUSoundTableGroup* group = field_0x0.getGroup(section, param_0.mId.mBytes.b1);
    if (group == NULL) {
        return NULL;
    }
    return getItem(group, param_0.mId.mAdvancedId.mShortId);
}

/* 802A73D4-802A7420 2A1D14 004C+00 0/0 1/1 0/0 .text            init__17JAUSoundNameTableFPCv */
void JAUSoundNameTable::init(void const* param_0) {
    if (param_0 != NULL) {
        field_0x0.init(param_0);
    } else {
        field_0x0.reset();
    }
}
