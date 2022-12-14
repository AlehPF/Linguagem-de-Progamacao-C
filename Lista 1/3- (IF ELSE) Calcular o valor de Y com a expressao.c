/*Receber o valor de x e achar o valor do y de acordo com a expressão: y={x2, se −2⩽x⩽2=4, se x <−2 ou x > 2} */

#include <stdio.h>
int main(){
  int x; 

  printf("Digite o valor de X: ");
  scanf("%d", &x);

  if (x >= -2 || x <= 2)
  {
    printf("O valor de y eh %i", x*x);
  }
  else if (x < -2 || x > 2)
  {
    printf("O valor de y eh %i", x = 4);
  }

return 0;
}