#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "localidad.h"
#define TAMANIO 3

int main()
{
    eLocalidad Localidades;
    eLocalidad listadoLocalidades;
    for(int i=0;i<TAMANIO;i++){

        listadoLocalidades[i].id=i*3;
        listadoLocalidades[i].estado=1;
        strcpy(listadoLocalidades[i].nombreLocalidad,"Maria");
    }
    LOC_mostrarListado(listadoLocalidades,TAMANIO);
    Localidades.estado=1;
    Localidades.id=555;
    strcpy(Localidades.nombreLocalidad,"Maria");
    //printf("%s",Localidades.nombreLocalidad);

    //LOC_mostrarUno(Localidades);
    return 0;
}
