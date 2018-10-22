#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a;
    char b;
}eDato;

int main(){
    eDato arrayDato[2] = {{1, 'c'},{2, 'd'}};
    eDato* pArrayDato;
    int i;

    pArrayDato = arrayDato;

    for(i=0; i<2; i++)
    {
        printf("%d %c ; ", (pArrayDato+i)->a, (*(pArrayDato+i)).b);
    }                 //   *Operador flecha*  o  *todo esto*  es lo mismo

}
