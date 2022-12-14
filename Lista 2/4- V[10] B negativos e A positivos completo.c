/*Criar vetores a, b e c com 10 elementos do tipo int;
• Os valores dos elementos de a podem ser fornecidos pelo usuário ou
pre definidos.
• O vetor b deve conter os elementos positivos de a
• O vetor c deve conter os elementos negativos de a*/
#include <stdio.h>
int main(){
    int v[10] = {3,-6, 5, -2, 8, -4, 0, 3, -1, -10};
    int vb[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,};
    int vc[10] ={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,};
    int i;

    for (i = 0; i < 10; i++)
    {
    if (v[i] > 0)
    vb[i] = v[i];
    else if (v[i] < 0)
    vc[i] = v[i];
    }

    printf("Valores positivos: \n");
    for (i = 0; i < 10; i++)
    {
    printf("%d ", vb[i]);
    }

    printf("\n\nValores negativos: \n");
    for (i = 0; i < 10; i++)
    { 
    printf("%d ", vc[i]);
    }

return 0;
}
