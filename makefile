all: main.c strings.o
	gcc -o strs main.c strings.o

strings.o: strings.c strings.h
	gcc -c strings.c strings.h

run:
	./strs