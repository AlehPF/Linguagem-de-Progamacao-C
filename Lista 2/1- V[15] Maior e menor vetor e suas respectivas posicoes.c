/*criar um vetor com 15 elementos achar o maior e o menor elemento com suas respectivas posições.*/
#include <stdio.h>
int main(){ 
    int v[15];
    int pma;
    int pme;
    int menor = 100000;
    int maior = 0;

        for (int i = 0; i < 3; i++)
        {
        printf("Digite o %d vetor: ", i);
        scanf("%d", &v[i]);
            if (v[i] > maior)
            {
            maior = v[i];
            pma = i;
            }
            
            if (v[i] < menor)
            {
            menor = v[i];
            pme = i;
            }
        }

    printf("O maior vetor digitado foi o %d e sua posicao eh: %d: \n", maior, pma);
    printf("O menor vetor digitado foi o %d e sua posicao eh: %d: \n", menor, pme);

return 0;
} 
