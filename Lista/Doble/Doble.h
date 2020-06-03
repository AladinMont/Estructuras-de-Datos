#ifndef __Simple_H__
#define __Simple_H__

#include<stdio.h>
#include<stdlib.h>
struct Simple
{
  int *datos;
  int actual;
  int cuantos;
};

void insertar (struct Simple **, int);
void eliminar (struct Simple **, int);
void mostrar (struct Simple *);
#endif
