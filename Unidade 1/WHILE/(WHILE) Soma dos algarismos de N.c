#include <stdio.h>

int main(){
  int n, digito; 
  int soma = 0; 
       
  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &n);
  printf("\nNumero digitado = %d", n);
 
    while (n > 0)
    {
      digito =  n % 10;
      soma = soma + digito;
      n = n / 10; 
    }
  
  printf("\nSoma dos digitos do numero dado = %d\n", soma);

return 0;
}