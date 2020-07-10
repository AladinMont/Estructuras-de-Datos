all: clean run

ColaE.o: ColaE.c
	gcc -g2 ColaE.c -c
main.o: main.c
	gcc -g2 main.c -c

a.out: main.o ColaE.o
	gcc -g2 main.o ColaE.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o ColaE.o

