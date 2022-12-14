#include <stdio.h>

int main()
{
    int n, i, fat = 1;

    printf("Digite o numero: ");
    scanf("%d", &n);
    if(n > 0 && n < 17)
    {
        for (i = 2; i <= n; i++)
        {
            fat = fat * i;  
        }
    printf("O numero %d em fatorial: %d\n", n, fat);
    }

    else
    {
        printf("Digite um numero valido!!!\n");
    }

return 0;
}