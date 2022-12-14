/*Considere n pessoas numeradas de 0 a n − 1 que participam de uma rede social. As conexões entre as
pessoas são representadas pelos elementos de uma matriz Ln×n, cujos elementos lij assumem o valor 1 se a
pessoa i conhece a pessoa j e 0 caso contrário. Assim os elementos da linha i indicam as pessoas que a pessoa
i conhece e os elementos da coluna j indicam as pessoas que conhecem a pessoa j.
(a) Dada uma pessoa (k) escreva um algoritmo que determine quantas pessoas ela conhece e quantas pessoas
conhecem ela.
(b) É possível identificar a pessoa mais conhecida? E a pessoa menos conhecida? Justifique.*/

#include<stdio.h>
int main()
{
    int m[5][5]={{0,1,1,0,0},{0,0,1,0,0},{1,0,0,1,1},{0,0,1,0,1},{1,0,1,0,0}};
    int l, c, k;
    int elaconhece = 0;
    int conhecemela = 0;
    
    // Mostrando a matriz na tela
    for (l = 0; l < 5; l++)
    {
            for (c = 0; c < 5; c++)
            {
            printf("%d ", m[l][c]);
            } 
        printf("\n");
    }   
    
    printf("Digite o numero da pessoa desejado (entre 1 e 5): ");
    scanf("%d", &k);

            // Soma dos valores da linha
            for (l = k-1; l <= k-1; l++)
            {
                    for (c = 0; c < 5; c++)
                    {
                        elaconhece+= m[l][c];
                    }
            }   

            // Soma dos valores da coluna
            for (l = 0; l < 5; l++)
            {
                    for (c = k-1; c <= k-1; c++)
                    {
                        conhecemela+= m[l][c];
                    }
            }  

    printf("Ela conhece %d pessoas.\n", elaconhece);
    printf("%d Pessoas conhecem ela.\n", conhecemela);

return 0;
}
