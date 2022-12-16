/*  • Criar a matriz A com o tamanho mxn definido pelo usuário.
• Copiar todos os elementos pares dessa matriz para um vetor b que
deve ser criado dinamicamente.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int **mat,*vPar;
    int i, j, l, c;
    int par = 0;;
    int cont = 0;

    printf("Digite o numero de linhas: ");
    scanf("%d", &l);
    printf("Digite o numero de colunas: ");
    scanf("%d", &c);
    printf("\n");

    mat = (int **)malloc(l * sizeof(int*));

    for(i = 0; i < l; i++){
    mat[i] = (int *)malloc(c * sizeof(int));
        for(j = 0; j < c; j++)
        {
            printf("Elemento [%d][%d] = ", i, j);
            scanf("%d", &mat[i][j] );
        }
    }

    for(i = 0; i < l; i++)
    {
        for(j = 0; j < c; j++)
        { 
            if(mat[i][j] % 2 == 0)
            {
                par++;
            }
        }
    }
    vPar = (int*)malloc(par * sizeof(int));

    if( vPar == NULL)
    {
        printf("ERRO DE ALOCACAO!!!");
    }

    for(i = 0; i < l; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(mat[i][j]%2 == 0)
            {
                vPar[cont] = mat[i][j];
                cont++;
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



    printf("\nValores pares:\n");
    for(i = 0; i<cont;i++){
        printf("%d ", vPar[i]);
    }
    printf("\n");

return 0;
}