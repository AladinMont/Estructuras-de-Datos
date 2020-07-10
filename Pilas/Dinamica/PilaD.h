#ifndef __PilaD_H__
#define __PilaD_H__

#include<stdio.h>
#include<stdlib.h>
typedef struct pila{
	int dato;
	struct pila* siguiente;
} pila;




int push(struct pila **cabeza, int dato);
int pop(struct pila **cabeza);
void desplegar(struct pila *cabeza);

#endif
