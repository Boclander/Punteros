#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

int main()
{
    sPersona* personita;
    sPersona* otraPersonita;

   /* personita = nuevaPersona();
    if(personita != NULL)
    {
        mostrarPersona(personita);
    }

    otraPersonita = nuevaPersonaParametros(01, "Pedro", 22);
    if(otraPersonita != NULL)
    {
        mostrarPersona(otraPersonita);
    }
*/
    int idDePersonita;

    personita = nuevaPersona();
    sPersona_setId(personita, 001);

    idDePersonita = sPersona_getId(personita);
    printf("El ID es: %d\n", idDePersonita);
    return 0;
}
