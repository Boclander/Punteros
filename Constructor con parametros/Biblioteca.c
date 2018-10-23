#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Biblioteca.h"

sPersona* nuevaPersona()
{
    sPersona* miPersona;

    miPersona = (sPersona*) malloc(sizeof(sPersona));
    if(miPersona != NULL)
    {
        miPersona->id = 0;
        strcpy(miPersona->nombre, "...");
        miPersona->edad = 0;
    }

    return miPersona;
}

sPersona* nuevaPersonaParametros (int id, char* nombre, int edad)
{
    sPersona* unaPersona;
    unaPersona = nuevaPersona();
    if(unaPersona != NULL)
    {
        unaPersona->edad = edad;
        unaPersona->id = id;
        strcpy(unaPersona->nombre, nombre);
    }

    return unaPersona;
}

void mostrarPersona (sPersona* unaPersona)
{
    printf("ID: %d\n Nombre: %s\n Edad: %d\n\n", unaPersona->id, unaPersona->nombre, unaPersona->edad);

    return 0;
}

int sPersona_setId(sPersona* this, int id)
{
    int estado = 0;

    if(this != NULL)
    {
        this->id = id;
        estado = 1;
    }
    return estado;
}

int sPersona_getId()
