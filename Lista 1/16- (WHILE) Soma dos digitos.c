/*Dado um número inteiro qualquer, escreva o programa que calcula a soma dos
dígitos de um número inteiro qualquer informado pelo usuário. */
#include <stdio.h>
int main(){
  int x, a, soma;
  
  printf("Digite o numero desejado: ");
  scanf("%d", &x);

    while (x > 0)
    {
    a = x%10;
    soma = soma + a;
    x = x/10;
    }

  printf("A soma ficou em: %d", soma);

return 0;
}
    