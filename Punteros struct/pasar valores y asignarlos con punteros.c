#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a;
    char b;
}eDato;

eDato* funcion(int, char);

int main()
{
    eDato* p;
    eDato* q;

    p = funcion(4, 'c');
    printf("p= %d %c\n", p->a, p->b);

    q = funcion(2, 'd');
    printf("q= %d %c\n", q->a, q->b);


    return 0;
}

eDato* funcion (int x, char y)
{
    eDato* pDato;
    eDato datito;

    pDato = &datito;

    pDato->a = x;
    pDato->b = y;

    return pDato;
}

