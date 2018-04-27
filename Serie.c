#include <stdio.h>
#include <stdlib.h>
#include "Serie.h"

#include <string.h>

/*
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;

*/

void inicializarSeriesEstado(eSerie series[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        series[i].estado = 0;
    }
}


void inicializarSeriesHardCode(eSerie series[])
{
    int id[5] = {100,101,102,103,104};
    char nombre[][50]={"TBBT","TWD","GOT","BB","LCDP"};
    char genero[][50]={"Comedia","Terror","Suspenso","Policial","Policial"};
    int cantidad[5] = {10,9,7,5,2};

    int i;

    for(i=0; i<5; i++)
    {
        series[i].idSerie=id[i];
        series[i].cantidadTemporadas=cantidad[i];
        series[i].estado = 1;
        strcpy(series[i].nombre, nombre[i]);
        strcpy(series[i].genero, genero[i]);
    }
}


int RetornarSerie(eSerie lista[], int tamanio, int idSerie)
{
    int i;
    int retorno=-1;
    for(i=0;i<tamanio;i++)
    {
        if(lista[i].idSerie==idSerie)
        {
            retorno=i;
            break;
        }
    }
    return retorno;
}

void mostrarListaSeries(eSerie lista[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        if(lista[i].estado!=0)
        {
            printf("\n %s %s %d %d \n", lista[i].nombre, lista[i].genero, lista[i].cantidadTemporadas, lista[i].idSerie);
        }

    }

}


