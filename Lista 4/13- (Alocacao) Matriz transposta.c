/*Criar a matriz A com o tamanho mxn definido pelo usuário.
• Criar a matriz B, que é a matriz transposta da matriz A.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int **mat, **matB;
    int i, j, l, c;
    int k = 0;
    int s = 0;

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
            printf("Elemento [%d][%d] = \n", i, j);
            scanf("%d", &mat[i][j] );
        }
    }

    matB = (int **) malloc(c * sizeof(int *));
    
    printf("\nMatriz transposta: \n");
    for(j = 0;j < c; j++)
    {
    matB[j] = (int*)malloc(l * sizeof(int));
        for(i = 0;i < l; i++)
        {
            matB[j][i] = mat[i][j];
            printf("%d ", matB[j][i]);
        }
    printf("\n");
    }

return 0;
}