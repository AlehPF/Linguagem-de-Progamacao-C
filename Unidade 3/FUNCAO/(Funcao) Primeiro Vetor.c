#include <stdio.h>

int imprime1(int v[], int n);
int imprime2(int v[5]);

int main()
{   
    int v[5] ={1,2,3,4,5};

    printf("Primeiro Vetor: ");
    imprime1(v, 5); // Chamado da funcao e atribuindo 5 a N

    printf("\nSegundo Vetor: ");
    imprime2(v); // Chamado da funcao 

return 0; // Nao precisa
}

int imprime1(int v[], int n) //Atribuir o tamanho a N
{
    int i;
    for(i = 0; i < n ; i++)
    {
    printf("%d ", v[i]);   
    }
}

int imprime2(int v[5]) // Atribui o tamanho no vetor
{
    int i;
    for(i = 0; i < 5 ; i++)
    {
    printf("%d ", v[i]);   
    }
}

