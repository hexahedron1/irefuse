CC=g++
CFLAGS=-std=c++17 -Wall -Wextra -O3

irefuse: irefuse.cpp
	$(CC) irefuse.cpp -o irefuse $(CFLAGS)

all: irefuse
