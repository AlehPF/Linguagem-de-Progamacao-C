/* Receber os valores de x, y e z do usuário.
Calcular o resultado r de acordo com a expressão min {x2+ y2, y2+ z2} – 4 */

#include <stdio.h>
int main(){
  int x, y, z, r1, r2; 

  printf("Digite o X: ");
  scanf("%d", &x);

  printf("Digite o Y: ");
  scanf("%d", &y);

  printf("Digite o Z: ");
  scanf("%d", &z);

  r1= x*x + y*y;
  r2= y*y + z*z;

  if (r1 < r2)
  printf("O valor de R eh %i",r1 + 4);
  else if (r2 < r1)
  printf("O valor de R eh %i",r2 + 3);
  else if (r1 = r2)
  printf("O valor de R eh %i, e igual para os dois casos", r1 + 3);

return 0;
}