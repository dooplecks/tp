#
# Generated By: dol2asm
#

M311_TARGET := $(BUILD_DIR)/rel/d/a/npc/d_a_npc_grr.plf
M311_LDSCRIPT := $(BUILD_DIR)/rel/d/a/npc/d_a_npc_grr.lcf
M311_MAP := $(BUILD_DIR)/rel/d/a/npc/d_a_npc_grr.map

M311_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/npc/d_a_npc_grr/d_a_npc_grr.cpp \

M311_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/npc/d_a_npc_grr/d_a_npc_grr.o \

M311_LIBS := \

M311_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M311_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M311_LDSCRIPT) \
	-unused -map $(M311_MAP) \
	-w off \

$(M311_TARGET): $(M311_O_FILES) $(M311_LIBS)
	@echo [311] creating $(M311_TARGET)
	@echo $(M311_LIBS) $(M311_O_FILES) > build/M311_ofiles
	@python3 tools/lcf.py rel 311 --output $(M311_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M311_LDFLAGS) -o $(M311_TARGET) @build/M311_ofiles

$(BUILD_DIR)/rel/d/a/npc/d_a_npc_grr/%.o: rel/d/a/npc/d_a_npc_grr/%.cpp $(BUILD_DIR)/rel/d/a/npc/d_a_npc_grr/%.d
	@echo [311] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M311_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).cpp
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
M311_D_FILES := $(M311_O_FILES:.o=.d)
$(M311_D_FILES):
include $(wildcard $(M311_D_FILES))
endif


