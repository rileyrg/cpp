# -*- mode: makefile -*-
.PHONY: test clean

CFLAGS = -std=c++17 -g -O0 -Wall -fstandalone-debug
LDFLAGS =

all: clean advanced

advanced: main.cpp
	clang++ $(CFLAGS) -o advanced  main.cpp $(LDFLAGS)

test: advanced
	./advanced

clean:
	rm -f advanced
