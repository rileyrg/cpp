all: vtables-layout


include ../Makefile

vtables:	vtables.cpp
	$(CC) $@.cpp -o $@

#https://guihao-liang.github.io/2020/05/30/what-is-vtable-in-cpp
vtables-layout:
	clang++ -Xclang -fdump-record-layouts vtables.cpp
