/*• criar uma matriz 3 x 3 A com elementos do tipo float;
• criar uma matriz B com elementos da matriz A que estão acima da 
media (os outros elementos devem ser iguais a 0);
*/

#include <stdio.h>

int main(){
    float a[3][3] ={{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    float b[3][3];   
    float media;
    float soma = 0;
    int i, j, valor;

    printf ("Matriz A:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%.2f ", a[i][j]);
        }
    printf("\n");
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
        soma+= a[i][j];
        }
    }

    media = soma/9;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(a[i][j] > media)
            {
            b[i][j] = a[i][j];
            }
            else
            {
            b[i][j] = 0;
            }
        }
    }

    printf("\nmedia = %.2f \n\n", media);
    
    printf ("Matriz B:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%.2f ", b[i][j]);
        }
    printf("\n");
    }

return 0;
}