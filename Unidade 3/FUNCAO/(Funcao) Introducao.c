#include <stdio.h>

int max(int n1, int n2);

int main()
{   
    int a, b;
    int nmax;

    printf("Digite o 1 numero: ");
    scanf("%d", &a);
    printf("Digite o 2 numero: ");
    scanf("%d", &b);

    nmax = max(a, b); //Chamado da funcao

    printf("O maior numero eh: %d", nmax);

return 0;
}

int max(int n1, int n2)
{
    int res;
    if (n1 > n2)
        res = n1;
    else
        res = n2;
return res;
}
