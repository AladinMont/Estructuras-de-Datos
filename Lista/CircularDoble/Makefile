all: clean run

CDoble.o: Cdoble.c
	gcc Cdoble.c -c
main.o: main.c
	gcc main.c -c

a.out: main.o CDoble.o
	gcc main.o Cdoble.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o Cdoble.o


