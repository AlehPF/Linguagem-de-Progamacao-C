/* Escreva um programa que recebe uma quantidade arbitrária de números
inteiros positivos e calcula a soma dos números pares. */
#include <stdio.h>
int main(){
    int x; 
    int soma = 0;

        while (x !=0 )
        {
        printf("Digite um valor de x ou 0 para parar: ");
        scanf("%d",&x);

        if (x%2 != 1)
        soma = soma + x;
        }

    printf("\nO soma dos numeros eh %d", soma);

return 0;
}