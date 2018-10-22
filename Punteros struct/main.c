#include <stdio.h>
#include <stdlib.h>
#define TAMANIOARRAY 5
typedef struct
{
    int a;
    char b;
}eDato;

int main()
{
    int* pEntero;
    int i;

    pEntero = (int*) malloc(sizeof(int)*TAMANIOARRAY); //Tamaño de array.
    if(pEntero != NULL){
        for(i=0; i<TAMANIOARRAY; i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d", pEntero+i);
        }

        for(i=0; i<TAMANIOARRAY; i++)
        {
            printf("%d - ", *(pEntero+i));
        }
        }
}
