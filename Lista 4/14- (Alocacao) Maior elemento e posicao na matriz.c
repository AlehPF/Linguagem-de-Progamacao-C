/* Criar a matriz A com o tamanho mxn definido pelo usuário.
• Procurar pelo maior elemento nessa matriz e mostrar a sua posição
(linha e coluna).*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int **mat;
    int i, j, l, c;;
    int maior[3];

    printf("Digite o numero de linhas: ");
    scanf("%d", &l);
    printf("Digite o numero de colunas: ");
    scanf("%d", &c);
    printf("\n");

    mat = (int **)malloc(l * sizeof(int *));

    for(i = 0; i < l; i++)
    {
    mat[i] = (int *)malloc(c * sizeof(int));
        for(j = 0; j < c; j++)
        {
            printf("Elemento [%d][%d] = ", i, j);
            scanf("%d", &mat[i][j] );
        }
    }
    
    for(i = 0;i < l; i++)
    {
        for(j = 0;j < c; j++)
        {
        //descobre o maior elemento
            if(i == 0 && j == 0)
            {
                maior[0] = mat[i][j];
                maior[1] = i;
                maior[2] = j;
            }
            else
            {
                if(mat[i][j] > maior[0])
                {
                    maior[0] = mat[i][j];
                    maior[1] = i;
                    maior[2] = j;
                }
            }
        }
    }

    printf("\nMatriz:\n");
    for(i = 0; i < l; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ",mat[i][j]);  
        }
    printf("\n");
    }

    printf("\nMaior elemento eh = %d \nFica na posicao = [%d][%d]", maior[0], maior[1], maior[2]);

return 0;
}