#ifndef Biblioteca

typedef struct
{
    int id;
    char nombre[20];
    int edad;
}sPersona;

sPersona* nuevaPersona();
sPersona* nuevaPersonaParametros (int, char[], int);
void mostrarPersona(sPersona*);
void sPersona_setId(sPersona*, int);
int sPersona_getId(sPersona*);
#endif // Biblioteca
