all: clean vtables

include ../Makefile

vtables:	vtables.cpp
	$(CC) $@.cpp -o $@

vtables-layout:
	clang++ -Xclang -fdump-record-layouts vtables.cpp
