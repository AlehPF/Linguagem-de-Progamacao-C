/* Criar o vetor a com a quantidade de elementos determinada pelo
usuário.
• Criar o vetor b contendo os elementos pares do vetor a. 
• Criar o vetor c contendo os elementos positivos do vetor a
• Os vetores b e c devem ser criados dinamicamente.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int tam, i, *a, *b, *c;
    int par= 0;
    int positivo = 0;
    int contB = 0;
    int contC = 0;

    printf("Digite o tamanho do vetor A: ");
    scanf("%d", &tam);

    a = (int *)(malloc(tam * sizeof(int)));

    if ( a == NULL)
    {
        printf("\n ERRO NA ALOCACAO!!!!!");
    }
    printf("\n");

    for (i = 0; i < tam; i++)
    {
        printf("Digite o %d elemento: ",i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < tam; i++)
    {
        if (a[i] >= 0)
        {
            positivo++;
        }

        if (a[i]%2 == 0)
        {
            par++;
        }
    }

    b = (int*)(malloc(par * sizeof(int)));
    c = (int*)(malloc(positivo * sizeof(int)));

    for (i = 0; i < tam; i++)
    {
        if (a[i] >= 0)
        {
            c[contC] = a[i];
            contC++;  
        }
        if (a[i] % 2 == 0){
            b[contB] = a[i];
            contB++;
        }
    }

    printf("\n\nVetor B - Pares \n");
    for (i = 0; i < par; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\n\nVetor C - positivo \n");
    for (i = 0; i < positivo; i++)
    {
        printf("%d ", c[i]);
    }

return 0;
}