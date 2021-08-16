- [cpp](#org0f84d8c)
  - [Makefile](#orgb331271)
  - [HelloWorld](#orgb08ff50)
  - [A Tour Of C++ Version 2](#org9bf8935)
    - [[2-3 classes](TourOfCppV2/2-3-classes)](#org79931c9)
    - [[2-5-enumerations](TourOfCppV2/2-5-enumerations)](#orged337a9)
    - [[3-5-error-handling](TourOfCppV2/3-5-error-handling)](#org8b152b1)
    - [[3-6-functions](TourOfCppV2/3-6-functions)](#org565801f)



<a id="org0f84d8c"></a>

# cpp

C++ relearning initiative. Starting with Stroustrup's "A Tour Of C++ Version 2".


<a id="orgb331271"></a>

## Makefile

A generic type [makefile](Makefile). Probably going to be changed a lot

```makefile
# maintained in cpp.org
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
```


<a id="orgb08ff50"></a>

## HelloWorld

Every project starts with a [HelloWorld](HelloWorld/hello-world.cpp)


<a id="org9bf8935"></a>

## A Tour Of C++ Version 2

[A Tour Of C++ Version 2](TourOfCppV2) seems a great book. Some of the examples here as code.


<a id="org79931c9"></a>

### [2-3 classes](TourOfCppV2/2-3-classes)


<a id="orged337a9"></a>

### [2-5-enumerations](TourOfCppV2/2-5-enumerations)


<a id="org8b152b1"></a>

### [3-5-error-handling](TourOfCppV2/3-5-error-handling)


<a id="org565801f"></a>

### [3-6-functions](TourOfCppV2/3-6-functions)