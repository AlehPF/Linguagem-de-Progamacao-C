/*• Criar vetor a com 10 elementos e vetor b com 5 elementos do tipo int.
• Criar função que recebe dois vetores (a e b) e substitui todos os 
elementos ímpares em vetor a pelo menor elemento do vetor b.
• Fazer uso da função auxiliar para achar o maior elemento de um vetor. */

#include <stdio.h>
#include <stdlib.h>

int menor(int *b, int n);
void substitui(int *a,int *b,int nA,int nB);

int main(){

    int const tamA = 10;
    int const tamB = 5;
    int i;
    int vA[10]= {-1, -2, 3, 4, 5, 6, -7, 8, -9, 10};
    int vB[5]= {0, 1, 2, 3, 4};

    substitui(vA, vB, tamA, tamB);

    for(i = 0; i < tamA; i++)
    {
        printf("%4d", vA[i]);
    }

return 0;
}


int menor(int *b, int n){

    int i;
    int menorV = b[0];

    for(i = 0; i < n; i++)
    {
        if (b[i] < menorV)
        {
            menorV = b[i];
        }
    }

return menorV;
}

void substitui(int *a,int *b,int nA,int nB)
{
    int i;
    int menorV = menor(b, nB);

    for(i = 0; i < nA; i++)
    {
        if(a[i]%2 != 0)
        {
            a[i] = menorV;
        }
    }
}
