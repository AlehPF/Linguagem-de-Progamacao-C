#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vPtr;
    int tamanho;
    int i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    printf("\n");

    vPtr = (int*) malloc(tamanho * sizeof(int)); //Variavel = (tipo) malloc(variavel de tamanho * sizeof(tipo da variavel))

    if (vPtr == NULL)
    {
        printf("\nERRO NA ALOCACAO DE MEMORIA! \n");
    }

    else
    {
        printf("Entrada de dados: \n");
        for (i = 0; i < tamanho; i++)
        {
            printf("v[%d] = ", i);
            scanf("%d", &vPtr[i]);
        }
            
        printf("\nSaida de dados: \n");
        for (i = 0; i < tamanho; i++)
        {
            printf("v[%d] = %d\n", i, vPtr[i]);
        }
    }

return 0;
}