- [cpp](#org9e9ce92)
  - [Tools](#org19102ad)
    - [Makefile](#org8efaeee)
  - [HelloWorld](#org22d0ed0)
  - [A Tour Of C++ Version 2](#org1ff0e5c)
    - [[2-3 classes](TourOfCppV2/2-3-classes)](#orgbe7adae)
    - [[2-5-enumerations](TourOfCppV2/2-5-enumerations)](#org20e03c9)
    - [[3-5-error-handling](TourOfCppV2/3-5-error-handling)](#orgedf3faa)
    - [[3-6-functions](TourOfCppV2/3-6-functions)](#org7907983)
    - [[5-2-copy-and-move](TourOfCppV2/5-2-copy-and-move)](#org127f948)
    - [[4-2-concrete-types](TourOfCppV2/4-2-concrete-types)](#org2f1811f)
    - [[5-3-resource-management](TourOfCppV2/5-3-resource-management)](#org6f1ba47)
  - [[Snippets](Snippets/VTablesAssembler)](#orgb4f0016)
    - [[VTablesAssembler](Snippets/VTablesAssembler)](#org5c8bad8)
    - [[C++ static<sub>cast</sub> vs dynamic<sub>cast</sub>](Snippets/Dynamic-vs-Static-Cast)](#org2daef7b)



<a id="org9e9ce92"></a>

# cpp

C++ relearning initiative. Starting with Stroustrup's "A Tour Of C++ Version 2".


<a id="org19102ad"></a>

## Tools


<a id="org8efaeee"></a>

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


<a id="org22d0ed0"></a>

## HelloWorld

Every project starts with a [HelloWorld](HelloWorld/hello-world.cpp).


<a id="org1ff0e5c"></a>

## A Tour Of C++ Version 2

[A Tour Of C++ Version 2](TourOfCppV2) seems a great book. Some of the examples here as loosely related experimental code.


<a id="orgbe7adae"></a>

### [2-3 classes](TourOfCppV2/2-3-classes)


<a id="org20e03c9"></a>

### [2-5-enumerations](TourOfCppV2/2-5-enumerations)


<a id="orgedf3faa"></a>

### [3-5-error-handling](TourOfCppV2/3-5-error-handling)


<a id="org7907983"></a>

### [3-6-functions](TourOfCppV2/3-6-functions)


<a id="org127f948"></a>

### [5-2-copy-and-move](TourOfCppV2/5-2-copy-and-move)


<a id="org2f1811f"></a>

### [4-2-concrete-types](TourOfCppV2/4-2-concrete-types)


<a id="org6f1ba47"></a>

### [5-3-resource-management](TourOfCppV2/5-3-resource-management)


<a id="orgb4f0016"></a>

## [Snippets](Snippets/VTablesAssembler)

A subdirectory containing various little bits and pieces picked up from C++ tutorials.


<a id="org5c8bad8"></a>

### [VTablesAssembler](Snippets/VTablesAssembler)

An [article](https://guihao-liang.github.io/2020/05/30/what-is-vtable-in-cpp) on examining vtable in assembler.


<a id="org2daef7b"></a>

### [C++ static<sub>cast</sub> vs dynamic<sub>cast</sub>](Snippets/Dynamic-vs-Static-Cast)

A [video](https://www.youtube.com/watch?v=0AuPWXuBmyo) showing the differences between C++ static<sub>cast</sub> and dynamic<sub>cast</sub>.