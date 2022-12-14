/*Escreva um algoritmo que receba um vetor de números inteiros de tamanho 10, e um número inteiro k,
fornecidos pelo usuário, e que:
(a) calcule a soma dos elementos maiores que k, e;
(b) Substitua todos os elementos pares do vetor por −1.*/
#include <stdio.h>
int main()
{
    int i;
    int tam = 10;
    int v[tam];
    int k;
    int soma = 0;

    printf("Digite o valor do K: ");
    scanf("%d", &k);

    for (i = 0; i < tam; i++)
    {
        printf("Digite o %d vetor: ", i);
        scanf("%d", &v[i]);
    }
        for (i = 0; i < tam; i++)
        {
            if (v[i] > k)
            soma+= v[i];
        }
            for (i = 0; i < tam; i++)
            {
                if (v[i]%2 != 1)
                v[i] = -1;
            } 
                for (i = 0; i < tam; i++)
                {
                printf("\nO %d vetor eh: %d", i, v[i]);
                } 
    printf("\nA soma dos vetores maior que K foi: %d", soma);

return 0;
}