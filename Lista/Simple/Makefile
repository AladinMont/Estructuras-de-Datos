all: clean run

Simple.o: Simple.c
	gcc Simple.c -c
main.o: main.c
	gcc main.c -c

a.out: main.o Simple.o
	gcc main.o Simple.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o Simple.o


