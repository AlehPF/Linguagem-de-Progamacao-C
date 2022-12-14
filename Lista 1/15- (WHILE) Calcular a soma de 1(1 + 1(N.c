/*Dado um número natural n (fornecido pelo usuário), calcular a soma: 1/1+ 1/n */
#include <stdio.h>
int main(){
  float x;
  float soma = 0;
  
  printf("Digite o numero de vezes que deseja multiplicar 1/n: ");
  scanf("%f", &x);

  while (x > 0)
  {
  soma = soma + 1/x;
  x--;
  }
  
  printf("A soma ficoui em: %f", soma);

return 0;
}
