#include <stdio.h>

int main(){
  int n, k;
  int cont = 0;
  int nk = 1;

  printf("Digite o valor: ");
  scanf("%d", &n);
  printf("Digite elevado a qual potencia: ");
  scanf("%d", &k);

  while (cont < k)
  {
    nk = nk * n;
    cont++;
  }
  
  printf("O valor resultante foi %i: \n", nk);

return 0;
}