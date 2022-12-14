#include <stdio.h>

int imprime(int m[][4], int n);

int main()
{   
    int m[4][4] ={{1,2,3,4},
                  {5,6,7,8},
                  {9,8,7,6}};
    imprime(m, 3); // Chamado da funcao e atribuindo 3 a N

return 0; // Nao precisa
}

int imprime(int m[][4], int n)
{
    int i, j;
    for(i = 0; i < n ; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf(" %d ", m[i][j]);
        }
    printf("\n");   
    }
}
