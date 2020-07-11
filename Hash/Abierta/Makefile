all: clean run

PilaE.o: PilaE.c
	gcc -g2 PilaE.c -c
main.o: main.c
	gcc -g2 main.c -c

a.out: main.o PilaE.o
	gcc -g2 main.o PilaE.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o PilaE.o

