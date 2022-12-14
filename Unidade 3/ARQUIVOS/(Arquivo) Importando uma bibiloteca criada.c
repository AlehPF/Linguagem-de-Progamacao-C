#include <stdio.h>
#include "fatorial.h"

int main(){

    int i, n;
    int v[n];

    printf("Digite o valor que gostaria em fatorial: ");
    scanf("%d",&n);

   for (i = 0; i < n; i++)
   {
        v[i] = fatorial(i);
   }
   
     for (i = 0; i < n; i++)
   {
        printf("%d! = %d\n", i, v[i]);
   }

return 0;
}