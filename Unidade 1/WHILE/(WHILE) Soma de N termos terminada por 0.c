#include <stdio.h>

int main(){
  int s;
  float x;
  int cont = 0;
  float soma = 0;

  printf("Digite o tamanho da sequencia que deseja somar: ");
  scanf("%d", &s);

  while (cont < s)
  {
    printf("Digite um numero diferente de 0: ");
    scanf("%f", &x);

      if (x > 0)
      {
      soma = soma + x;
      cont++;
      } 
      else if (x < 0)
      {
      printf("Numero invalido");
      cont = cont + 0;
      }
  }

  printf("A soma total foi: %f", soma);

return 0;
}
