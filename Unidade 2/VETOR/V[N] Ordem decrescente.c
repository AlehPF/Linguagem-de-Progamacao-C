/*Dado um vetor de tamanho n (n < 100), escreva um programa que apresente os elementos do
vetor na ordem inversa.*/
#include <stdio.h>
int main()
{
    float v[100];
    int n, i, j;
        printf("Digite o tamanho do vetor: ");
        scanf("%d", &n);

        for(i = 0; i < n; i++)
        {
        printf("Digite o valor do vetor: ");
        scanf("%f", &v[i]);
        }

        for (j = n-1; j >= 0; j--)
        {
        printf("%.2f\n", v[j]);
        }

return 0;
}