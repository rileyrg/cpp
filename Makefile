CPP_COMPILER ?= clang++
CPP_STANDARD ?= c++17
DEBUG_FLAGS ?= -g3 -O0

ENABLE_WARNINGS ?= 1
WARNINGS_AS_ERRORS ?= 0
WARNINGS ?= -Wall -Wextra -Wpedantic -Wno-unused-label

COMPILER_ARGS ?= ""
CPP_COMPILER_FLAGS ?= ""

ifneq ($(DEBUG_FLAGS), "")
CPP_COMPILER_FLAGS := $(CPP_COMPILER_FLAGS) $(DEBUG_FLAGS)
endif


ifneq ($(CPP_STANDARD), "")
CPP_COMPILER_FLAGS := $(CPP_COMPILER_FLAGS) -std=$(CPP_STANDARD)
endif

ifeq ($(ENABLE_WARNINGS), 1)
ifneq ($(WARNINGS), "")
CPP_COMPILER_FLAGS := $(CPP_COMPILER_FLAGS) $(WARNINGS)
endif
ifeq ($(WARNINGS_AS_ERRORS), 1)
CPP_COMPILER_FLAGS := $(CPP_COMPILER_FLAGS) -Werror
endif
endif

ifneq ($(COMPILER_ARGS), "")
CPP_COMPILER_FLAGS := $(CPP_COMPILER_FLAGS) $(COMPILER_ARGS)
endif

CC := $(CPP_COMPILER) $(CPP_COMPILER_FLAGS)

.PHONY:	clean

clean:
        find . -maxdepth 1 -name "*.o" -exec rm {} + && find . -maxdepth 1 -type f -executable -exec rm {} +
