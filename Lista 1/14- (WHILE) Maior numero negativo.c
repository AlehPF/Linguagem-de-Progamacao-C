/*(Escreva um programa que recebe uma quantidade arbitrária de números reais
(float) e mostra qual foi o maior número negativo*/
#include <stdio.h>
int main(){
    float x;
    float menor = 0;

        while (x != 0)
        {
        printf("Digite o numero negativo ou 0 para parar: ");
        scanf("%f", &x);
        if (x < 0 && x < menor)
        menor = x;
        }

    printf("O menor numero foi o: %.2f ", menor);

return 0;
}