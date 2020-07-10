#include "PilaE.h"

int main (void){
    struct pila *cabeza=(struct pila *)malloc(sizeof(struct pila));
    cabeza->tope=-1;    

    push(&cabeza,1);
    push(&cabeza,2);
    push(&cabeza,3);
    desplegar(cabeza);
    pop(&cabeza);
    desplegar(cabeza);
}
