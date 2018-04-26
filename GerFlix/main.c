#include <stdio.h>
#include <stdlib.h>
#include "Usuario.h"
#define TAMSERIE 20
#define TAMUSUARIO 100
void MostrarDatos(eUsuario usuario[], eSerie lista[], int cantidadUsuarios);
int main()
{


    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);

    int opcion;
    char respuesta='s';
/*  1. Mostrar el listado de series
    2. Mostrar el listado de usuarios
    3. Mostrar el listado de Usuarios con el nombre de la serie que ve
    4. Mostrar por cada serie, el nombre de los usuarios que la ven.
*/  printf("1)Mostrar lista de Series.\n\n");

    printf("Ingrese opcion: ");
    scanf("%d",&opcion);
    while(respuesta)
    {
        switch(opcion)
        {
            case 1:
                {
                    //MostrarDatos(listaDeSeries, listaDeUsuarios, TAMUSUARIO);

                    break;
                }
            case 2:
                {
                    //mostrarListaUsuarios(listaDeUsuarios,TAMUSUARIO);
                    break;
                }

            default :
            {
                break;
            }

        }

    }

    return 0;
}

void MostrarDatos(eUsuario usuario[], eSerie lista[], int cantidadUsuarios)
{
    int i;
    for(i=0;i<cantidadUsuarios;i++)
    {
        printf(" Serie: %s ",usuario[i].nombre);
    }

}
