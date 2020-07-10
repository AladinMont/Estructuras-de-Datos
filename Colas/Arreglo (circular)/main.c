#include "ColaE.h"

int main (void){
    struct cola *cabeza=(struct cola *)malloc(sizeof(struct cola));
    cabeza->frente=-1;    
    cabeza->atras=-1;

    enqueue(&cabeza,1);
    enqueue(&cabeza,2);
    enqueue(&cabeza,3);
    enqueue(&cabeza,4);
    enqueue(&cabeza,5);
    enqueue(&cabeza,6);
    enqueue(&cabeza,7);
    enqueue(&cabeza,8);
    enqueue(&cabeza,9);
    enqueue(&cabeza,10);
    desplegar(cabeza);
    dequeue(&cabeza);
    desplegar(cabeza);
    dequeue(&cabeza);
    desplegar(cabeza);
}
