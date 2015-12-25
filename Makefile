CC = gcc
CFLAGS = -g -Wall -std=c99 -Wno-unused-variable -Wunused-but-set-variable
SRCS = $(wildcard src/*.c)
PROG = $(patsubst %.c, %, $(SRCS))

all: $(PROG)

%: %.c
	$(CC) $(CFLAGS) -o $(patsubst src/%, bin/%.o, $@) $<

clean:
	rm -f bin/*
