#
# Generated By: dol2asm
#

M655_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_testcube.plf
M655_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_testcube.lcf
M655_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_testcube.map

M655_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/obj/d_a_obj_testcube/d_a_obj_testcube.cpp \

M655_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_testcube/d_a_obj_testcube.o \

M655_LIBS := \

M655_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M655_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M655_LDSCRIPT) \
	-unused -map $(M655_MAP) \
	-w off \

$(M655_TARGET): $(M655_O_FILES) $(M655_LIBS)
	@echo [655] creating $(M655_TARGET)
	@echo $(M655_LIBS) $(M655_O_FILES) > build/M655_ofiles
	@python3 tools/lcf.py rel 655 --output $(M655_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M655_LDFLAGS) -o $(M655_TARGET) @build/M655_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_testcube/%.o: rel/d/a/obj/d_a_obj_testcube/%.cpp $(BUILD_DIR)/rel/d/a/obj/d_a_obj_testcube/%.d
	@echo [655] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M655_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).cpp
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
M655_D_FILES := $(M655_O_FILES:.o=.d)
$(M655_D_FILES):
include $(wildcard $(M655_D_FILES))
endif


