#ifndef __ColaP_H__
#define __ColaP_H__

#include<stdio.h>
#include<stdlib.h>

typedef struct cola{
	int* colaa;
    int cuantosa;
    int actuala;
    int* colab;
    int cuantosb;
    int actualb;
    int* colac;
    int cuantosc;
    int actualc;
}cola;


int enqueue(struct cola **cabeza, int dato, int prioridad);
int dequeue(struct cola **cabeza);
void desplegar(struct cola *Cabeza);
int *arreglo(int *arreglo,int cuantos,int actual);

#endif
