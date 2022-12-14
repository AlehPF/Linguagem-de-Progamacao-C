#include <stdio.h>
#include <stdlib.h>

//Para procurar elementos com indices i e j, utilizamos a formula=
//Indice = i*m + j; i=numero da linha de interesse, j= numero colunas de interesse e M= quantidade de colunas da matriz
//Nao podemos acessar a matriz com m[i][j]
//Alocacao de memoria n*m*(tipo) int, double, float

int main(){
    int *mPtr;
    int l, c, i, j;

    printf("Digite o quantiade de linhas: ");
    scanf("%d", &l);
    printf("Digite o quantiade de colunas: ");
    scanf("%d", &c);
    printf("\n");

    mPtr = (int*) malloc(l*c*sizeof(int)); 

    if (mPtr == NULL)
    {
        printf("\nERRO NA ALOCACAO DE MEMORIA! \n");
    }

    else
    {
        printf("Entrada de dados: \n");
        for (i = 0; i < l; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("m[%d][%d] = ", i, j);
                scanf("%d", (mPtr + i*c + j));
            }
        }
            
        printf("\nSaida de dados: \n");
        for (i = 0; i < l; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("%5d", *(mPtr + i*c + j));
            }
        printf("\n");
        }
    }

return 0;
}