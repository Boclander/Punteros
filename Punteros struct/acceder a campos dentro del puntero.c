#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a;
    char b;
}eDato;

int main()
{
    eDato unDato={4, 'c'};
    eDato* pDato;
    int x;

    pDato = &unDato;
    x = (*pDato).a;         //Acceder al valor a del struct desde el puntero

    printf("%d", x);

    return 0;
}


