all: clean run

ColaL.o: ColaL.c
	gcc ColaL.c -c
main.o: main.c
	gcc main.c -c

a.out: main.o ColaL.o
	gcc main.o ColaL.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o ColaL.o

