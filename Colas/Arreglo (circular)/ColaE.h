#ifndef __ColaE_H__
#define __ColaE_H__

#include<stdio.h>
#include<stdlib.h>

typedef struct cola{
	int dato[100];
	int frente;
    int atras;
}cola;


int enqueue(struct cola **cabeza, int dato);
int dequeue(struct cola **cabeza);
void desplegar(struct cola *Cabeza);

#endif
