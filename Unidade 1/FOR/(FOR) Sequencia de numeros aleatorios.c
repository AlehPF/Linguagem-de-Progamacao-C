#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    unsigned int seed;
    int i, j, n, r;

    printf("Geracao de numeros aleatorios de 1 ate 10");
    printf("\nDigite quantas sequencias de numeros aleatorios devem ser geradas: ");
    scanf("%d", &r);

    for (j = 1; j <= r; j++)
    {
    printf("\nSequencia %d \n", j);
    srand (time (NULL));
    
        for(i = 1; i <= 10; i++)
        {
            n = 1 + rand() % 10;
            printf("%d ", n);
        }
    printf("\n");
    sleep (1);
    }

return 0;
}