/*Criar o vetor a com 15 elementos do tipo int
• Criar o vetor b composto por elementos positivos do vetor a
• Vetor b deve ser criado dinamicamente.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i, *ptr, cont = 0;
    int v[15] = {1, 2, -1, -2, 3, -4, 5, -6, 6, 7, 8, -3, 0,-10, 11};

    for (i = 0; i < 15; i++)
    {
    printf("%d ", v[i]);
        if (v[i] > 0)
        {
            cont++;
        }
    }

    ptr = (int *) malloc(cont * sizeof(int));
    cont = 0;
    
     for (i = 0; i < 15; i++)
     {
        if (v[i] > 0)
        { 
            ptr[cont] = v[i];
            cont++;
        }
    }

    printf("\n");
    for (i = 0; i < cont; i++)
    {
        printf("v[%d] = %d\n", i, ptr[i]);
    }

return 0;
}