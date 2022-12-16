/*• Criar vetor a com 10 elementos do tipo int.
• Criar função e fazer uso da função que recebe um vetor e um valor e 
verifica quantas vezes aquele valor aparece no vetor a com protótipo:
int count (int v [ ], int n, int k) ou int count (int * v, int n, int k)*/

#include <stdio.h>
#include <stdlib.h>

int count(int *v,int tam, int n);

int main(){

    int const tam = 10;
    int const n = 2;
    int v[10]= {1, 2, 2, 2, 4, 5, 6, 2, 9, 2};
    
    printf("O numero %d se repetiu = %d vezes\n", 2, count(v, tam, n));

return 0;
}

int count(int *v, int tam, int n)
{
    int i;
    int cont = 0;

    for(i = 0; i < tam;  i++)
    {
        if(v[i] == n)
        {
            cont++;
        }
    }

return cont;
}