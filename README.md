- [cpp](#org92e96eb)
  - [Makefile](#org86f964f)
  - [HelloWorld](#org7979cdf)
  - [[Snippets](Snippets/VTablesAssembler)](#orgeb6550a)
    - [[VTablesAssembler](Snippets/VTablesAssembler)](#org38d01bd)
    - [[C++ static<sub>cast</sub> vs dynamic<sub>cast</sub>](Snippets/Dynamic-vs-Static-Cast)](#org1be5cef)
  - [A Tour Of C++ Version 2](#org9c57e74)
    - [[2-3 classes](TourOfCppV2/2-3-classes)](#org0391732)
    - [[2-5-enumerations](TourOfCppV2/2-5-enumerations)](#org98d13e2)
    - [[3-5-error-handling](TourOfCppV2/3-5-error-handling)](#org9b7ac65)
    - [[3-6-functions](TourOfCppV2/3-6-functions)](#orgc220e40)



<a id="org92e96eb"></a>

# cpp

C++ relearning initiative. Starting with Stroustrup's "A Tour Of C++ Version 2".


<a id="org86f964f"></a>

## Makefile

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


<a id="org7979cdf"></a>

## HelloWorld

Every project starts with a [HelloWorld](HelloWorld/hello-world.cpp)


<a id="orgeb6550a"></a>

## [Snippets](Snippets/VTablesAssembler)

A subdirectory containing various little bits and pieces picked up from C++ tutorials.


<a id="org38d01bd"></a>

### [VTablesAssembler](Snippets/VTablesAssembler)

An [article](https://guihao-liang.github.io/2020/05/30/what-is-vtable-in-cpp) on examining vtable in assembler.


<a id="org1be5cef"></a>

### [C++ static<sub>cast</sub> vs dynamic<sub>cast</sub>](Snippets/Dynamic-vs-Static-Cast)

A [video](https://www.youtube.com/watch?v=0AuPWXuBmyo) showing the differences between C++ static<sub>cast</sub> and dynamic<sub>cast</sub>.


<a id="org9c57e74"></a>

## A Tour Of C++ Version 2

[A Tour Of C++ Version 2](TourOfCppV2) seems a great book. Some of the examples here as code.


<a id="org0391732"></a>

### [2-3 classes](TourOfCppV2/2-3-classes)


<a id="org98d13e2"></a>

### [2-5-enumerations](TourOfCppV2/2-5-enumerations)


<a id="org9b7ac65"></a>

### [3-5-error-handling](TourOfCppV2/3-5-error-handling)


<a id="orgc220e40"></a>

### [3-6-functions](TourOfCppV2/3-6-functions)