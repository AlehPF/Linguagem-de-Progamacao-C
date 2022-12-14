#include <stdio.h>

int quadrado (n);
void imprime();

int main()
{
    int i;

    for (i = 0; i <= 10; i++)
    {
        printf("\nO numero %d ao quadrado eh: %d", i, quadrado(i));
        imprime();
    }
}

int quadrado (n)
{
    return n*n;
}

void imprime()
{
    printf("\n--------------------------------\n\n");
    return;
}