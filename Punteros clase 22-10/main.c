#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x [5];
    int* pInt;

    pInt = x;

    int i;
    for(i=0; i<5; i++)
    {
        printf("Ingrese un valor: ");
        scanf("%d", pInt+i);
    }

    for(i=0; i<5; i++)
    {
        printf("%d - ", x[i]);
    }

    return 0;
}
