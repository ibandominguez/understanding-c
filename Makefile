CC = gcc
CFLAGS = -g -Wall

all:
	mkdir -p bin
	gcc src/types.c -o bin/types
	gcc src/operators.c -o bin/operators
	gcc src/true-false.c -o bin/true-false
	gcc src/functions.c -o bin/functions
	gcc src/arrays.c -o bin/arrays

clean:
	rm -rf bin/*
