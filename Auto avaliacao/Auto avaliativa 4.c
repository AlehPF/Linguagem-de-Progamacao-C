#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){

    int vA[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int i, k, *b, *c;
    int contImpar = 0, contMaior = 0;
    int contB = 0, contC = 0;

    printf("Digite um valor para K: ");
    scanf("%d", &k);
    for(i = 0; i < 15; i++)
    {
        if(vA[i]%2 == 1)
        {
            contImpar++;
        }
    }

    b = (int *)malloc(contImpar * sizeof(int)); //Declara na memoria o espaco para vetor impar

    for(i = 0; i < 15; i++) //Atribui valores ao vetor B (Impar)
    {
        if(vA[i]%2 == 1)
        {
            b[contB] = vA[i];
            contB++;
        }
    }

    for(i = 0; i < contImpar; i++)
    {
        if(b[i] > k)
        {
            contMaior++;
        }
    }

    c = (int*)malloc(contMaior * sizeof(int)); //Alocando espaco para o vetor C

    for(i = 0; i < contImpar; i++)
    {
        if(b[i] > k)
        {
            c[contC] = b[i];
            contC++;
        }
    }

    printf("\nVetor A: \n");
    for(i = 0;i < 15; i++)
    {
        printf("%d ", vA[i]);
    }

    printf("\n\nVetor B (Impares): \n");
    for(i = 0;i < contImpar; i++)
    {
        printf("%d ",b[i]);
    }

    printf("\n\nVetor C (Maiores que K): \n");
    for(i = 0; i < contMaior; i++)
    {
        printf("%d ",c[i]);
    }
    printf("\n\n");

return 0;
}