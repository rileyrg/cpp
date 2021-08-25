- [cpp](#orgd56f3ec)
  - [Tools](#org80f55c2)
    - [Makefile](#org857aaf0)
  - [HelloWorld](#org784a3b6)
  - [A Tour Of C++ Version 2](#org48c452d)
    - [[2-3 classes](TourOfCppV2/2-3-classes)](#orgb4cae52)
    - [[2-5-enumerations](TourOfCppV2/2-5-enumerations)](#org03b7874)
    - [[3-5-error-handling](TourOfCppV2/3-5-error-handling)](#orgff47045)
    - [[3-6-functions](TourOfCppV2/3-6-functions)](#orgda903c6)
  - [[Snippets](Snippets/VTablesAssembler)](#org88c0b67)
    - [[VTablesAssembler](Snippets/VTablesAssembler)](#org90dbdcc)
    - [[C++ static<sub>cast</sub> vs dynamic<sub>cast</sub>](Snippets/Dynamic-vs-Static-Cast)](#org24a3b0f)



<a id="orgd56f3ec"></a>

# cpp

C++ relearning initiative. Starting with Stroustrup's "A Tour Of C++ Version 2".


<a id="org80f55c2"></a>

## Tools


<a id="org857aaf0"></a>

### Makefile

A generic type [makefile](Makefile). Probably going to be changed a lot

```makefile
# maintained in cpp.org
CPP_COMPILER ?= clang++
CPP_STANDARD ?= c++11
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


<a id="org784a3b6"></a>

## HelloWorld

Every project starts with a [HelloWorld](HelloWorld/hello-world.cpp).


<a id="org48c452d"></a>

## A Tour Of C++ Version 2

[A Tour Of C++ Version 2](TourOfCppV2) seems a great book. Some of the examples here as code.


<a id="orgb4cae52"></a>

### [2-3 classes](TourOfCppV2/2-3-classes)


<a id="org03b7874"></a>

### [2-5-enumerations](TourOfCppV2/2-5-enumerations)


<a id="orgff47045"></a>

### [3-5-error-handling](TourOfCppV2/3-5-error-handling)


<a id="orgda903c6"></a>

### [3-6-functions](TourOfCppV2/3-6-functions)


<a id="org88c0b67"></a>

## [Snippets](Snippets/VTablesAssembler)

A subdirectory containing various little bits and pieces picked up from C++ tutorials.


<a id="org90dbdcc"></a>

### [VTablesAssembler](Snippets/VTablesAssembler)

An [article](https://guihao-liang.github.io/2020/05/30/what-is-vtable-in-cpp) on examining vtable in assembler.


<a id="org24a3b0f"></a>

### [C++ static<sub>cast</sub> vs dynamic<sub>cast</sub>](Snippets/Dynamic-vs-Static-Cast)

A [video](https://www.youtube.com/watch?v=0AuPWXuBmyo) showing the differences between C++ static<sub>cast</sub> and dynamic<sub>cast</sub>.