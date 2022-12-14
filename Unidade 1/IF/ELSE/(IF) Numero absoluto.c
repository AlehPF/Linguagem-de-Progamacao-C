#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, nv;
  printf("Digite um numero: ");
  scanf("%d", &n);

  if (n < 0)
  nv= (n * -1);
  printf("O numero absoluto eh: |%d|", nv);
  if (n > 0)
  printf("O numero absoluto eh: |%d|", n);
  
return 0;
}
