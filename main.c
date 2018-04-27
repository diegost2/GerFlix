#include <stdio.h>
#include <stdlib.h>
#include "Usuario.h"
#define TAMSERIE 20
#define TAMUSUARIO 100
void mostrarUsuarioConSuSerie(eUsuario usuario[], eSerie lista[], int cantidadUsuarios, int cantidadSeries);
int main()
{


    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);

    mostrarListaSeries(listaDeSeries,TAMSERIE);
    //mostrarUsuarioConSuSerie(listaDeUsuarios,listaDeSeries,TAMUSUARIO,TAMSERIE);
    mostrarSerieConUsuario(listaDeUsuarios,listaDeSeries,TAMUSUARIO,TAMSERIE);
/*  1. Mostrar el listado de series
    2. Mostrar el listado de usuarios
    3. Mostrar el listado de Usuarios con el nombre de la serie que ve
    4. Mostrar por cada serie, el nombre de los usuarios que la ven.
*/
    return 0;
}

void mostrarSerieConUsuario(eUsuario usuario[], eSerie lista[], int cantidadUsuarios, int cantidadSeries)
{
    int i;
    int j;
    for(i=0;i<cantidadSeries;i++)
    {
        printf("\n\nPelicula: %s  Genero: %s  Temporadas: %d",lista[i].nombre,lista[i].genero,lista[i].cantidadTemporadas);
        if(usuario[i].idSerie==lista[i].idSerie)
        {
            for(j=0;j<cantidadUsuarios;j++)
            {
                if(usuario[i].idSerie==lista[j].idSerie)
                {
                    if(lista[j].estado!=1)
                    {
                        printf(" Usuario: %s ID usuario: %d \n",usuario[j].nombre,usuario[j].idUsuario);
                    }

                }
            }
        }


    }


}


void mostrarUsuarioConSuSerie(eUsuario usuario[], eSerie lista[], int cantidadUsuarios, int cantidadSeries)
{
    int i;
    int j;
    for(i=0;i<cantidadUsuarios;i++)
    {
        if(usuario[i].estado!=0)
        {
            printf("\n\n Usuario: %s  Id: %d ",usuario[i].nombre, usuario[i].idUsuario);
            for(j=0;j<cantidadSeries;j++)
            {
                if(usuario[i].idSerie==lista[j].idSerie)
                {
                    printf(" Pelicula: %s Genero: %s Temporadas: %d \n",lista[j].nombre,lista[j].genero,lista[j].cantidadTemporadas);
                    break;
                }
            }
        }
    }


}


