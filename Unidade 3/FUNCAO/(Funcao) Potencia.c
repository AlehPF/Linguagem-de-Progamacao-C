#include <stdio.h>

int pot(int num1, int num2);


int main()
{   
    int n, k, nk;

    printf("Digite o numero: ");
    scanf("%d", &n);
    printf("Digite a qual potencia ele esta elevado numero: ");
    scanf("%d", &k);

    nk = pot(n, k); //Chamado da funcao, N atribuido a num1 e K atribuido a num2 
    printf("A potencia do numero eh: %d", nk);

return 0;
}

int pot(int num1, int num2)
{
    int nk = 1;
    int cont = 1;
    while (cont <= num2)
    {
        nk = nk * num1;
        cont++;
    }

return nk;
}
