#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int m, i, j, maiorL ;
    int **mat, *b, *c;
    int contB = 0;
    float *aux;
    float somaL = 0, mediaL = 0;

    printf("Digite o tamanho da matriz: ");
    scanf("%d", &m);
    printf("\n");

    mat = (int **)malloc(m * sizeof(int*));

    for(i = 0; i < m; i++)
    {
    mat[i] = (int*)malloc(m * sizeof(int));
        for(j = 0; j < m; j++)
        {
            printf("Elemento [%d][%d] = \n",i , j );
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nA matriz eh: \n");
    for(i = 0; i < m; i++) // Printar a matriz
    {
        for(j = 0; j < m; j++)
        {
            printf("%d ", mat[i][j]);
        }
    printf("\n");
    }

    b = (int*) malloc(m * sizeof(int)); //Vetor diagonal

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < m;j++)
        {
            if(i == j)
            {
                b[contB] = mat[i][j];
                contB++;
            }
        }
    }

    printf("\nVetor B que contem os elementos da diagonal principal: \n");
    for(i = 0 ; i < m; i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");

    //--------------------------------

    c = (int*) malloc(m*sizeof(int));
    aux = (int*) malloc(m*sizeof(int));

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < m; j++)
        {
            somaL = somaL + mat[i][j]; 
        }
    mediaL = somaL/m;
    aux[i] = mediaL;
    mediaL = 0;
    somaL = 0;
    }

    printf("\nValor medio da linha: \n");
    for(i = 0; i < m; i++)
    {
        printf("Linha %d = %.2f\n", i, aux[i]);
        if(i == 0)
        {
            maiorL = i;
        }
        else
        {
            if(aux[i] > maiorL)
            {
                maiorL = i;
            }
        }
    }
    
    for(j = 0; j < m; j++)
    {
        c[j] = mat[maiorL-1][j];
    }
    printf("\nA maior linha eh a: %d linha\n", maiorL);

    printf("\nvetor C (linha com a maior media): \n");
    for(j = 0; j < m; j++)
    {
        printf("%d ", c[j]);
    }




return 0;
}