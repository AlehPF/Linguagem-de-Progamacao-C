#include <stdio.h>

int main(){
  int num, a, b;

  printf("Digite o numero maior que 10: \n");
  scanf("%d", &num);
  if (num < 10)
  printf("ERRO! DIGITE UM NUMERO VALIDO!");
  if (num > 10)

  while (num > 0)
  {
    a = num % 10;
    num = num / 10; 

    if (b==a)
    {
        printf("Sim, o numero tem algarismos adjacentes!");
    }
    b = a;
  }

  return 0;
}