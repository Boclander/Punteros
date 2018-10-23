#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a;
    char b;
}sDato;

sDato* pedirDatos(sDato*);

int main()
{
    sDato* pDato;
    sDato datazo;

    pDato = &datazo;
    pDato = pedirDatos(pDato);

    printf("%d %c ;\n", pDato->a, pDato->b);
    return 0;
}

sDato* pedirDatos(sDato* pDato)
{
    printf("Ingrese un numero: ");
    scanf("%d", pDato->a);
    printf("Ingrese una letra: ");
    scanf("%c", pDato->b);
}
