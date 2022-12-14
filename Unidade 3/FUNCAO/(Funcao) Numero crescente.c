#include  <stdio.h>

void crescente(int vetor[], int n);

int main(){

    int vetor[10] = {0,2,1,3,5,4,7,6,9,8};
    int i;

    crescente(vetor, 10); //Pode apenas passar o nome do vetor sem o [], 10 vem do tamanho do vetor par armazenar no N

    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    
return 0;
}

void crescente(int vetor[], int n){
    int i, j, temporaria;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if(vetor[i] > vetor [j])
            {
                temporaria = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temporaria;
            }
        }    
    }
}
