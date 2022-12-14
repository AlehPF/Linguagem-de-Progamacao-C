#include<stdio.h>
int main()
{
    int tam = 5;
    int m[tam][tam];
    int l, c;
    int linha[tam], coluna[tam];
    int soma;

    // Colocando valores
    for (l = 0; l < tam; l++)
    {
            for (c = 0; c < tam; c++)
            {
            printf("Digite o %d%d vetor: ", l,c);
            scanf("%d", &m[l][c]);
            }
    }
            
            // Soma dos valores da linha
            for (l = 0; l < tam; l++)
            {
            soma = 0;
                    for (c = 0; c < tam; c++)
                    {
                        soma+= m[l][c];
                    }
            linha[l] = soma;
            }   

            // Soma dos valores da coluna
            for (c = 0; c < tam; c++)
            {
            soma = 0;
                    for (l = 0; l < tam; l++)
                    {
                        soma+= m[l][c];
                    }
            coluna[c] = soma;
            }  

    // Mostrando a matriz na tela
    printf("\n");
    for (l = 0; l < tam; l++)
    {
            for (c = 0; c < tam; c++)
            {
            printf("%d ", m[l][c]);
            } 
        printf("\n");
    }   

    //Mostrando a soma das linhas
    printf("\nSoma das linhas: \n");
    for (l = 0; l < tam; l++)
    {
        printf("Linha %d: %d\n", l, linha[l]);
    }

    //Mostrando a soma das colunas
    printf("\nSoma das colunas: \n");
    for (c = 0; c < tam; c++)
    {
        printf("Coluna %d: %d\n", c, coluna[c]);
    }

return 0;
}
