/* Criar o vetor a com a quantidade de elementos definida pelo usuário.
• Criar o vetor b com a quantidade de elementos definida pelo usuário.
• Ciar o vetor c contendo os elementos pares do vetor a e os elementos 
pares do vetor b.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
        
    int i, *a, tamA, *b, tamB, *c;
    int par = 0;
    int cont = 0;

    printf("Digite o tamanho do vetor A: ");
    scanf("%d", &tamA);

    a = (int *)malloc(tamA * sizeof(int));

    for (i = 0; i < tamA; i++)
    {
    printf("Digite o %d elemento: ",i);
    scanf("%d", &a[i]);
        if (a[i]%2 == 0)
        {
            par++;
        }
    }

    printf("\nDigite o tamanho do vetor B: ");
    scanf("%d", &tamB);

    b = (int *) malloc(tamB * sizeof(int));

    for (i = 0; i < tamB; i++)
    {
    printf("Digite o %d elemento: ",i);
    scanf("%d", &b[i]);
        if (b[i]%2 == 0)
        {
            par++;
        }
    }

    c = (int *)malloc(par * sizeof(int));

    for(i = 0;i < tamA; i++)
    {
        if (a[i]%2 == 0)
        {
            c[cont] = a[i];
            cont++;
        }
    }

    for(i = 0;i < tamB; i++)
    {
        if (b[i]%2 == 0)
        {
            c[cont] = b[i];
            cont++;
        }
    }

    for( i= 0; i < par; i++)
    {
        printf("%d ", c[i]);
    }

return 0;
}