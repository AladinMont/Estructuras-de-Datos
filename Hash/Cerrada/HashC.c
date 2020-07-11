#include "HashC.h"

int funcion_hash( int dato ){
	return dato*dato % 100;
}

int funcion_rehash( int dato, int intento){
	return (int) dato*(dato+intento) % 100;
}

int insertar(struct hash *tabla, int dato){
	int donde = funcion_hash( dato );
	if(tabla->cuantos  == 100) 
        return -1;
	if( tabla -> libre[ donde  ] == 1 ){
		tabla->datos[ donde ] = dato;
		tabla->cuantos++;
        tabla->libre[donde]=0;
	}else{
		for(int i =0; tabla -> libre[donde]==0; i++){
			donde = funcion_rehash(dato, i);
		}
		tabla->datos[ donde ] = dato;
		tabla->cuantos++;
        tabla->libre[donde]=0;
	}
}

int mostrar( struct hash * tabla ){
    int i=0;
	for(i=0;i<100;i++){
        printf("[%d]=%d\n",i,tabla->datos[i]);
    }
}
