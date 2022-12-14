#include <stdio.h>

const int tam = 3;

int main(){

    int v[3] = {1,2,3};
    int *ponteiro[tam], i; //nao precisa colocar o tamanho do vetor, mas acessa apenas o v[0]

    for (i = 0; i < tam; i++)
    {
        ponteiro[i] = &v[i]; //armazenando os dados do v[tam] no ponteiro.
    }
    
    for (i = 0; i < tam; i++)
    {
        printf("O valor do ponteiro eh: v[%d]\n", *ponteiro[i]); //armazenando os dados do v[tam] no ponteiro.
    }

return 0;
}