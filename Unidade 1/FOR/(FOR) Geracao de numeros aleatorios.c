#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, n;

    printf("Geracao de numeros aleatorios de 1 ate 10 \n\n");
    printf("Sequencia: \n");    
    
    for (i = 1; i <= 10; i++)
    {
        n = 1 + rand() % 10;
        printf ("%d ", n);
    }
    
return 0;
}