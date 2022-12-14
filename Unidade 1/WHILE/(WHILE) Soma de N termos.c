#include <stdio.h>

int main(){
  int s;
  float x;
  int cont = 0;
  float soma = 0;

  printf("Digite o tamanho da sequencia que deseja somar: \n");
  scanf("%d", &s);

    while (cont < s)
    {
    printf("\nDigite um numero diferente de 0: \n");
    scanf("%f", &x);
      if (x < 0)
      {
      cont= cont + 0;
      printf("Digite um numero valido \n");
      }
      if (x > 0)
      {
      soma = soma + x;
      cont++;
      }
    }

  printf("A soma total deu: %.3f\n\n", soma);

return 0;
}
