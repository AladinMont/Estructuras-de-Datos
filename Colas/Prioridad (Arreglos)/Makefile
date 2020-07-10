all: clean run

ColaP.o: ColaP.c
	gcc -g2 ColaP.c -c
main.o: main.c
	gcc -g2 main.c -c

a.out: main.o ColaP.o
	gcc -g2 main.o ColaP.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o ColaP.o

