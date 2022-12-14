#include <stdio.h>

int main()
{
  int c = 1;
  
  c=1;
  printf("Pos incremento: \n");
  printf("c= %d \n", c);  // imprime o valor de C
  printf("c++= %d \n", c++); // imprime o valor de C e incrementa depois
  printf("c= % d \n", c);  // imprime o valor de C incrementado ja

  c=1;
  printf("Pre incremento: \n");
  printf("c= %d \n", c); // imprime o valor de C
  printf("++c= %d \n", ++c); // incrementa depois e imprime o valor de C
  printf("c= % d \n", c);  // imprime o valor de C incrementado ja

  return 0;
}