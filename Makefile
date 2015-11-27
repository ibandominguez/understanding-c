CC = gcc
CFLAGS = -g -Wall

all:
	gcc src/types.c -o bin/types

clean:
	rm -rf bin/*
