CC = gcc
CFLAGS = -I src

dependencies:
	mkdir -p lib
	wget -O lib/assert.h https://raw.githubusercontent.com/ss-c-cpp/assert/master/src/assert.h
	wget -O lib/assert.c https://raw.githubusercontent.com/ss-c-cpp/assert/master/src/assert.c

test: test/map-test.o src/map.o lib/assert.o
	mkdir -p bin
	$(CC) -o bin/test.bin test/map-test.o lib/assert.o src/map.o
	./bin/test.bin
	rm -r ./bin/test.bin

.PHONY: test
