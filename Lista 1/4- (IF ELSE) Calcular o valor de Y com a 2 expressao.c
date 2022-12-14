/*Receber o valor de x e achar o valor do y de acordo com a expressão: y={0, se x⩽0x+1, se 0< x≤1x ²+5, x>1 } */

#include <stdio.h>
int main(){
  int x; 

  printf("Digite o valor de X: ");
  scanf("%d", &x);

  if (x <= 0)
  {
    printf("O valor de y eh %i",x * 0);
  }
  else if (x < 0 || x <= 1)
  {
    printf("O valor de y eh %i",x + 1);
  }
  else if (x > 1)
  {
    printf("O valor de y eh %i", x*x + 5);
  }

return 0;
}