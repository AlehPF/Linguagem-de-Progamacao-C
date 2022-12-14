/*Dados dois vetores x e y (ambos com n elementos), escreva um programa que calcule o produto
escalar.*/
#include <stdio.h>

int main()
{
  int n, i, produto;
  printf("Digite o numero de elementos dos vetores:");
  scanf("%d", &n);
  int v1[n];
  int v2[n];

    for (i = 0;i < n; i++)
    {
      printf("Digite o elemento %i do vetor X: ", i);
      scanf("%i", &v1[i]);
    }
    
      for (i = 0; i < n; i++)
      {
        printf("Digite o elemento %i do vetor Y: ", i);
        scanf("%i", &v2[i]); 
      }

        for(i = 0; i < n; i++)
        {
        produto= produto + v1[i]* v2[i];
        }
 printf("\nO produto escalar de X e Y vale: %d", produto);

return 0;
}