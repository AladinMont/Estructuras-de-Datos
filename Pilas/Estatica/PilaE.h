#ifndef __PilaE_H__
#define __PilaE_H__

#include<stdio.h>
#include<stdlib.h>

typedef struct pila{
	int dato[100];
	int tope;
}pila;


int push(struct pila **cabeza, int dato);

void desplegar(struct pila *Cabeza);

#endif
