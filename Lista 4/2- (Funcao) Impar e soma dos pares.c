/* Criar vetor a com 10 elementos do tipo int.
• Criar e fazer uso das funções:
◦ impar que recebe vetor e retorna a quantidade dos elementos 
ímpares no vetor com protótipo:
int impar (int v [ ], int n) ou int impar (int * v, int n)
◦ sump que recebe vetor e retorna a soma dos elementos positivos no
vetor com protótipo: int sump (int v [ ], int n) ou int sump (int * v, 
int n)*/

#include <stdio.h>
#include <stdlib.h>

int impar (int *v, int n);
int sump (int *v, int n);

int main(){

    int vet[10] = {-1, 2, 3, -4, 5, 6, -7, 8, 9, 10};

    int impares;
    int positivos;

    printf("Quantidade de impares = %d", impar(vet,10));
    printf("\nSoma dos numeros positivos = %d\n",sump(vet,10));

return 0;
}

int impar (int *v, int n)
{
    int i;
    int cont = 0;

    for(i = 0; i < n; i++)
    {
        if (v[i]%2 != 0)
        {
            cont++;
        }
    }

return cont;
}

int sump (int *v, int n)
{
    int i;
    int soma =0;

    for(i = 0; i < n; i++)
    {
        soma+= v[i];
    }

return soma;
}