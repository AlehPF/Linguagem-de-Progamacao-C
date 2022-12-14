/*Criar vetores a, b e c com 10 elementos do tipo int;
• Os valores dos elementos de a podem ser fornecidos pelo usuário ou
pre definidos.
• O vetor b deve conter os elementos positivos de a
• O vetor c deve conter os elementos negativos de a*/
#include <stdio.h>

int main(){
    int v[10]={2,-5,7,-9,0,-1,2,-3,4,-10};
    int i;

    for (i = 0; i < 10; i++)
    {
        if (v[i]>=0)
        printf("O %d eh positivo \n", v[i]);
    }
    
    for (i = 0; i < 10; i++)
    {
        if (v[i]<0)
        printf("O %d eh negativo \n", v[i]);
    }

return 0;
}