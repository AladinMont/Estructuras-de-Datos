all: clean run

HashA.o: HashA.c
	gcc -g2 HashA.c -c
main.o: main.c
	gcc -g2 main.c -c

a.out: main.o HashA.o
	gcc -g2 main.o HashA.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o HashA.o

