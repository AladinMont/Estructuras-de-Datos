#ifndef __ColaL_H__
#define __ColaL_H__

#include<stdio.h>
#include<stdlib.h>
typedef struct cola{
	int dato;
	struct cola* siguiente;
} cola;


int enqueue(struct cola **cabeza, int dato);
int dequeue(struct cola **cabeza);
void desplegar(struct cola *cabeza);

#endif
