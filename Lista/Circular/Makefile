all: clean run

Circular.o: Circular.c
	gcc Circular.c -c
main.o: main.c
	gcc main.c -c

a.out: main.o Circular.o
	gcc main.o Circular.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o Circular.o

