include ../makefiles/Makefile.defs

ALL_LOOP_SRCS:=$(wildcard loops/*.c)

ifneq ($(LOOPS),)
SELECTED_LOOPS:=$(strip $(subst , ,$(LOOPS)))
LOOP_SRCS:=$(addprefix loops/,$(addsuffix .c,$(SELECTED_LOOPS)))
LOOP_DEFS:=$(addprefix -DENABLE_,$(SELECTED_LOOPS))
else
SELECTED_LOOPS:=$(basename $(notdir $(ALL_LOOP_SRCS)))
LOOP_SRCS:=$(ALL_LOOP_SRCS)
LOOP_DEFS:=-DENABLE_ALL_LOOPS
endif

flags += $(LOOP_DEFS)
flags += -I.

COMMON_SRCS:=tsvc_main.c loop_list.c array_defs.c common.c dummy.c
SRCS:=$(COMMON_SRCS) $(LOOP_SRCS)

VEC_OBJS:=$(SRCS:.c=_vec.o)
NOVEC_OBJS:=$(SRCS:.c=_novec.o)

BIN_DIR=../bin/$(COMPILER)

libs=-lm

all : $(BIN_DIR)/tsvc_vec $(BIN_DIR)/tsvc_novec

$(BIN_DIR)/tsvc_vec : $(VEC_OBJS)
	@mkdir -p $(BIN_DIR)
	$(CC) $^ $(libs) -o $@$(SUFFIX)

$(BIN_DIR)/tsvc_novec : $(NOVEC_OBJS)
	@mkdir -p $(BIN_DIR)
	$(CC) $^ $(libs) -o $@$(SUFFIX)

%_novec.o:%.c .FORCE
	$(CC) $(flags) $(novecflags) -c -o $@ $<

%_vec.o:%.c .FORCE
	$(CC) $(flags) $(vecflags) -c -o $@ $<

# Compiled with IEEE math flags to make initialisation/checksum calculations more reproducable
# Be wary that PGI doesn't respect IEEE properly with vectorisation
%.o:%.c .FORCE
	$(CC) $(flags) $(vecflags) $(ieee_math_flags) -c -o $@ $<

.PHONY: .FORCE clean
.FORCE:
	@true

clean :
	rm -f *.o *.s loops/*.o loops/*.s

