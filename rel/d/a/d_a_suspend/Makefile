#
# Generated By: dol2asm
#

M56_TARGET := $(BUILD_DIR)/rel/d/a/d_a_suspend.plf
M56_LDSCRIPT := $(BUILD_DIR)/rel/d/a/d_a_suspend.lcf
M56_MAP := $(BUILD_DIR)/rel/d/a/d_a_suspend.map

M56_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/d_a_suspend/d_a_suspend.cpp \

M56_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/d_a_suspend/d_a_suspend.o \

M56_LIBS := \

M56_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M56_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M56_LDSCRIPT) \
	-unused -map $(M56_MAP) \
	-w off \

$(M56_TARGET): $(M56_O_FILES) $(M56_LIBS)
	@echo [ 56] creating $(M56_TARGET)
	@echo $(M56_LIBS) $(M56_O_FILES) > build/M56_ofiles
	@python3 tools/lcf.py rel 56 --output $(M56_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M56_LDFLAGS) -o $(M56_TARGET) @build/M56_ofiles

$(BUILD_DIR)/rel/d/a/d_a_suspend/%.o: rel/d/a/d_a_suspend/%.cpp $(BUILD_DIR)/rel/d/a/d_a_suspend/%.d
	@echo [ 56] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M56_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).cpp
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
M56_D_FILES := $(M56_O_FILES:.o=.d)
$(M56_D_FILES):
include $(wildcard $(M56_D_FILES))
endif


