/*Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Em seguida
o programa deve determinar o maior elemento (em valor absoluto) armazenado e indicar a posição
deste elemento.
*/

#include<stdio.h>
int main()
{
    int v[10], i;
    int maior = 1;
    int menor = 100000;
    int posma = 1;
    int posm = 1;

    for (i = 0; i < 3; i++)
    {
    printf("Digite o vetor: ");
    scanf("%d", &v[i]);

        if (v[i] > maior)
        {
        maior = v[i];
        posma = i;
        }
        if (v[i] < menor)
        {
        menor = v[i];
        posm= i;
        }
    }
    printf("\nO menor dos valores digitados foi %d e sua posicao era %d", menor, posm);
    printf("\nO maior dos valores digitados foi %d e sua posicao era %d", maior, posma);

return 0;
}
