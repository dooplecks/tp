#
# Generated By: dol2asm
#

M345_TARGET := $(BUILD_DIR)/rel/d/a/npc/d_a_npc_passer.plf
M345_LDSCRIPT := $(BUILD_DIR)/rel/d/a/npc/d_a_npc_passer.lcf
M345_MAP := $(BUILD_DIR)/rel/d/a/npc/d_a_npc_passer.map

M345_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/npc/d_a_npc_passer/d_a_npc_passer.cpp \

M345_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/npc/d_a_npc_passer/d_a_npc_passer.o \

M345_LIBS := \

M345_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M345_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M345_LDSCRIPT) \
	-unused -map $(M345_MAP) \
	-w off \

$(M345_TARGET): $(M345_O_FILES) $(M345_LIBS)
	@echo [345] creating $(M345_TARGET)
	@echo $(M345_LIBS) $(M345_O_FILES) > build/M345_ofiles
	@python3 tools/lcf.py rel 345 --output $(M345_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M345_LDFLAGS) -o $(M345_TARGET) @build/M345_ofiles

$(BUILD_DIR)/rel/d/a/npc/d_a_npc_passer/%.o: rel/d/a/npc/d_a_npc_passer/%.cpp $(BUILD_DIR)/rel/d/a/npc/d_a_npc_passer/%.d
	@echo [345] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M345_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).cpp
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
M345_D_FILES := $(M345_O_FILES:.o=.d)
$(M345_D_FILES):
include $(wildcard $(M345_D_FILES))
endif


