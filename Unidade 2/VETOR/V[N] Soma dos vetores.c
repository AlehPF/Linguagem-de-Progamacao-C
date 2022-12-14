#include <stdio.h>

int main()
{ 
    int tam = 3;
    float n[tam]; //Poderia colocar manualmente o 3
    float sum = 0;
    int i;

        for (i = 0; i < tam; i++)
        { 
        printf("Digite o elemento %i do vetor: \n", i);
        scanf("%f", &n[i]);
        }

        for (i = 0; i < tam; i++)
        {
            sum+= n[i];
        }

    printf("\nSoma dos elementos do vetor %.2f \n\n", sum);


        printf("\nElemento         Valor\n");

        for (i = 0; i < tam; i++)
        {
        printf("%i                 %.2f \n", i, n[i]);
        }

    
return 0;
}