#include <stdio.h>

int main(){
  int s;
  float x, soma;
  int cont = 0;

  printf("Digite o tamanho da sequencia que deseja somar: \n");
  scanf("%d", &s);

  while (cont < s)
  {
  printf("\nDigite um numero: \n");
  scanf("%f", &x);

    if (x < 0)
    {
    cont = cont +0;
    printf("Digite um numero positivo.\n");
    }
    if (x > 0)
    {
    printf("A numero %.3f eh positivo\n\n", x);
    cont++;
    }
  }
  
return 0;
}
