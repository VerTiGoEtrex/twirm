###############
# USER CONFIG #
###############

HAVE_DTRACE=0

MARCH=-m64
OPT=-g3
DEFS += -DNDEBUG

#######
# Nothing below this line should need to be changed (usually)
#######

ARCH = $(shell uname)

ifeq ($(HAVE_DTRACE),1)
	DEFS += -DTWIRM_PROBES_DTRACE
else
	DEFS += -DTWIRM_PROBES_NONE
endif

CC=clang
CXX=clang++
LD=$(CXX) $(OPT) $(MARCH)
INCLUDE=-I. -Icore
WARN=-Wall
CWD=$(shell pwd)
CXXFLAGS=$(OPT) $(MARCH) $(INCLUDE) $(WARN) $(DEFS)
CCFLAGS=$(CXXFLAGS)
LIBS=

LIB_CSRCS=
LIB_CXX_SRCS  = $(wildcard core/*.cpp game/*.cpp ai/*.cpp)

LIB_OBJS  = $(addprefix objs/, $(subst /,_,$(LIB_CSRCS:.c=.o)))
LIB_OBJS += $(addprefix objs/, $(subst /,_,$(LIB_CXXSRCS:.cpp=.o)))

HEADERS = $(wildcard */*.h */*.hpp)

#TODO add board-making gui tool
TOOLS=

##########
# build! #
##########

default: dirs bin/twirm $(TOOLS)

bin/%: dirs

twirm: bin/twirm

dirs:
	/bin/mkdir -p bin objs

$(LIBOBJS): $(HEADERS)

.PHONEY: dirs tools
.SECONDARY:

# LIBRARIES
objs/libtwirm.a: $(LIBOBJS)
	@echo "Building the core twirm library (libtwirm.a)"
	@ar rcs $@ $(LIBOBJS)

# OBJECTS
objs/ai_%.o: ai/%.cpp
	@echo "Building object $@"
	@$(CXX) $(CXXFLAGS) -o $@ -c $<

objs/core_%.o: core/%.cpp
	@echo "Building object $@"
	@$(CXX) $(CXXFLAGS) -o $@ -c $<

objs/game_%.o: game/%.cpp
	@echo "Building object $@"
	@$(CXX) $(CXXFLAGS) -o $@ -c $<

objs/twirm.o: main/%.cpp
	@echo "Building object $@"
	@$(CXX) $(CXXFLAGS) -o $@ -c $<

# BINARIES
# #TWIRM
bin/twirm: objs/main_twirm.o objs/libtwirm.a
	@echo "Linking $@"
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LIBS)

# #TOOLS
bin/%: objs/tools_%.o objs/libtwirm.a
	@echo "Linking $@"
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LIBS)

# Dtrace stuffs
ifeq ($(HAVE_DTRACE),1)
core/dtrace.h: core/dtrace.d
	/usr/sbin/dtrace -h -s $^ -o $@

$(LIBOBJS): core/dtrace.h
endif

clean:
	rm -f objs/* bin/*
