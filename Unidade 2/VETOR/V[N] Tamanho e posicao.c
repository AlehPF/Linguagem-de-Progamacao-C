#include <stdio.h>

int main()
{ 
    int tam = 10;
    int n[tam];
    int i;

    for (i = 0; i < tam; i++) // inicializa o array
    {
    printf("Digite o elemento %i do vetor: \n", i);
    scanf("%i", &n[i]);
    }

    printf("\nElemento         valor: \n");

    for (i=0; i < tam; i++)
    {
     printf("%i                 %i \n", i, n[i]);
    }
    
return 0;
}