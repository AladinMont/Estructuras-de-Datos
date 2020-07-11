#include "HashA.h"

int main (void){
    int i=0;
    struct hash cabeza[100];
    for(i=0;i<100;i++){
        cabeza[i].datos=0;
    }
    insertar(cabeza,1);
    insertar(cabeza,1);
    insertar(cabeza,12);
    insertar(cabeza,1544);
    insertar(cabeza,34200);
    insertar(cabeza,44135);
    insertar(cabeza,12101);
    insertar(cabeza,9854);
    insertar(cabeza,44548);
    insertar(cabeza,1);
    insertar(cabeza,1998);
    insertar(cabeza,100);
    insertar(cabeza,10);
    mostrar(cabeza);
    return 0;
}
