#include "localidad.h"

void LOC_mostrarUno(eLocalidad aux)
{
    printf("\n id: %d Nombre: %s ",aux.id , aux.nombreLocalidad);
}

void LOC_mostrarListado(eLocalidad listado[],int largoArray)
{
    int i;
    for(i=0;i<largoArray;i++)
    {
        printf("%s",listado[i].nombreLocalidad);
    }
}
