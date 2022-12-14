#include <stdio.h>
int main()
{ 
    int c[10];
    int i;

        for (i=0; i<10; i++) // Inicia e da o valor do vetor
        {
        c[i] =  c[i-1]+ 5;
        }

    printf("Elemento         valor\n");

        for (i=0; i<10; i++) // imprime o vetor
        {
        printf("   %i              %i \n", i, c[i]);
        }       

return 0;
}