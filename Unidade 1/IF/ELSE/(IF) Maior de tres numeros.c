#include <stdio.h>

int main(){
  int n1, n2, n3;
  printf("Digite os tres numeros: ");
  scanf("%d""%d""%d",&n1, &n2, &n3);

  if (n1 > n2 && n1 > n3)
  printf("O maior numero eh o: %d", n1);
  if (n2 > n1 && n2 > n3)
  printf("O maior numero eh o: %d", n2);
  if (n3 > n1 && n3 > n2)
  printf("O maior numero eh o: %d", n3);

return 0;
}
