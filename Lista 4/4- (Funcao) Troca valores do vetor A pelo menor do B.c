/*• Criar vetor a com 10 elementos e vetor b com 5 elementos int.
• Criar função e fazer uso da função que substitui todos os elementos 
negativos do vetor a pelo valor do maior elemento do vetor b.
• Fazer uso da função auxiliar para achar o maior elemento de um vetor.*/

#include <stdio.h>
#include <stdlib.h>

int maior(int *b, int n);
void substitui(int *a,int *b,int nA,int nB);

int main(){
        
    int const tamA = 10;
    int const tamB = 5;
    int i;
    int vA[10]= {-1, -2, 3, 4, 5, 6, -7, 8, -9, 10};
    int vB[5]= {0, 1, 2, 3, 4};

    substitui(vA, vB, tamA, tamB);

    printf("Vetor alterado: ");
    for(i = 0; i < tamA; i++)
    {
        printf("%d ", vA[i]);
    }
    printf("\n");

return 0;
}


int maior(int *b, int n)
{
    int i;
    int maiorV;
    maiorV = b[0];

    for(i = 0; i < n; i++)
    {
        if (b[i] > maiorV)
        {
            maiorV = b[i];
        }
    }

return maiorV;
}

void substitui(int *vA, int *vB, int nA, int nB)
{
    int i;
    int maiorV = maior(vB, nB);
 
    for(i = 0 ; i <= nA; i++)
    {
        if(vA[i]<0)
        {
            vA[i] = maiorV;
        }
    }
}
