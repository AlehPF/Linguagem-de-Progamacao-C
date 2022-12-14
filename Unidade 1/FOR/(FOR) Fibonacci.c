#include <stdio.h>

int main()
{
    int f, i, n;
    int f1 = 1;
    int f2 = 1;

    printf("Digite o numero: ");
    scanf("%d", &n);
    if(n > 0 && n < 47)
    {
        for (i = 3; i <= n; i++)
        {
            f = f1 + f2;  
            f1 = f2;
            f2 = f;
        }
    printf("O numero %d em sequencia de fibonacci: %d\n", n, f);
    }

    else
    {
        printf("Digite um numero valido!!!\n");
    }

return 0;
}