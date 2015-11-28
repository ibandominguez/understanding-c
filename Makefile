CC = gcc
CFLAGS = -g -Wall

all:
	gcc src/types.c -o bin/types
	gcc src/operators.c -o bin/operators
	gcc src/true-false.c -o bin/true-false

clean:
	rm -rf bin/*
