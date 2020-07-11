all: clean run

HashC.o: HashC.c
	gcc -g2 HashC.c -c
main.o: main.c
	gcc -g2 main.c -c

a.out: main.o HashC.o
	gcc -g2 main.o HashC.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o HashC.o

