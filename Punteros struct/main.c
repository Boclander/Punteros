#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int a;
    char b;
} eDato;

int main()
{
    int* pEntero;
    int i;

    pEntero = (int*) malloc(sizeof(int)*5); //Tamaño de array.
    if(pEntero != NULL)
    {
        for(i=0; i<5; i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d", pEntero+i);
        }

        for(i=0; i<5; i++)
        {
            printf("%d - ", *(pEntero+i));
        }
    }
    system("pause");
    system("cls");
    printf("Ingrese otros 5 numeros\n\n");

    pEntero = realloc(pEntero, sizeof(int)*10);
    if(pEntero != NULL)
    {
        for(i=5; i<10; i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d", pEntero+i);
        }

        for(i=0; i<10; i++)
        {
            printf("%d - ", *(pEntero+i));
        }
    }
}
