#include <stdio.h>

int fatorial(n);

int main(){
    int n, ffatorial;

    printf("Digite o numero: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Digite um numero valido!!!\n");
    
    else
    ffatorial = fatorial (n);
    printf("O numero %d em fatorial: %d\n", n, ffatorial);

return 0;
}

int fatorial(n)
{
int fat = 1, i;

    for (i = 2; i <= n; i++)
    {
        fat = fat * i;  
    }
    
return fat;
}
