#ifndef LOCALIDAD_H_INCLUDED
#define LOCALIDAD_H_INCLUDED

typedef struct{
    int id;
    int estado;
    char nombreLocalidad[50];
}eLocalidad;



#endif // LOCALIDAD_H_INCLUDED
void loc_mostrarUno(eLocalidad aux[]);

void loc_mostrarListado(eLocalidad aux[],int largoArray);
