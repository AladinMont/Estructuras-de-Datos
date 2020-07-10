all: clean run

PilaD.o: PilaD.c
	gcc PilaD.c -c
main.o: main.c
	gcc main.c -c

a.out: main.o PilaD.o
	gcc main.o PilaD.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o PilaD.o

