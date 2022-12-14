/*Escreva um programa que recebe uma quantidade arbitrária de números
inteiros e mostra qual foi o menor número ímpar*/
#include <stdio.h>
int main(){
    int x, media; 
    int cont =-1;
    int menor = 1000000;

        while (x !=0 )
        {
        printf("Digite um positivo ou 0 para parar: ");
        scanf("%d", &x);

        if (x%2 !=0 && x < menor)
        menor = x;
        }

    printf("\nO menor numero impar eh %d", menor);

return 0;
}