#include <stdio.h>
int main ()
{
    int x;
    int cont = 0;

    printf("Digite quantos numeros deseja ter: ");
    scanf("%d", &x);

    if ( x < 0)
    printf("\nDigite um numero positivo ");
    
    do
    {
    printf("%d \n", cont);
    cont = cont + 1;
    }
    while (cont <= x);
    
return 0;
}