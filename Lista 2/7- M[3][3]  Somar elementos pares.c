/*criar e inicializar uma matriz A 3 x 3 e achar a soma dos elementos pares.*/
#include <stdio.h>

int main(){
    int m[3][3];
    int i, j, n;
    int soma = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o elemento %d%d: ",i ,j);
            scanf("%d", &n);
            m[i][j] = n;
        }
    }
    
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", m[i][j]);
        }
    printf("\n");
    }
        
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (m[i][j]%2 != 1)
            {
                soma+= m[i][j];
            }
        }
    }

    printf("\nA soma dos elementos pares foi: %d",soma);

return 0;
}