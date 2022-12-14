#include<stdio.h>
#include<stdlib.h>

void maior(int **A, int m, int n, int *k, int *lin, int *col);

int main(){

    int **A;
    int m, n;
    int k, lin, col;
    printf("Numero de linhas:\n");
    scanf("%d", &m);
    printf("Numero de colunas:\n");
    scanf("%d", &n);

    A = malloc(m*sizeof(int *));
    for(int i = 0; i < m; i++){
        A[i] = malloc(n*sizeof(int));
    }
    printf("Digite elementos da matriz\n:");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &A[i][j]);
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    maior(A, m, n, &k, &lin, &col);
    printf("Elemnto: %d Linha: %d Coluna %d\n", k, lin, col);

    for(int i = 0; i < m; i++)
        free(A[i]);
    free(A);

    return(0);
}

void maior(int **A, int m, int n, int *k, int *lin, int *col)
{
    *k = A[0][0];
    *lin = *col = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(A[i][j] > *k){
                *k = A[i][j];
                *lin = i+1;
                *col = j+1;
            }
        }
    }
}