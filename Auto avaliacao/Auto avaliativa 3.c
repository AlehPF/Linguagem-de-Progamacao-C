/*Declarar uma matriz 5x4 alocada dinamicamente e dar o valor 15 para o elemento 3x2 da matriz*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int *matV;
    int i, j, elemento;

    matV = (int *)malloc(5 * 4 *(sizeof(int)));

    for(i = 0; i < 20; i++)
    {
        matV[i] = 0;
    }

    elemento = 3 * 4 + 2;
    matV[elemento] = 15;

    for(i = 0; i < 20; i++)
    {
        printf("elemento %d da matriz = %d \n", i+1, matV[i]);
    }

return 0;
}