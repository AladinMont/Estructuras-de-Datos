#include "ColaL.h"

int main (void){
    struct cola* cabeza = (struct cola*) malloc(sizeof(struct cola));
    enqueue(&cabeza,1);
	enqueue(&cabeza,2);
	enqueue(&cabeza,3);
	enqueue(&cabeza,4);
	enqueue(&cabeza,5);
	desplegar(cabeza);
    dequeue(&cabeza);
    desplegar(cabeza);
    return 0;
}
