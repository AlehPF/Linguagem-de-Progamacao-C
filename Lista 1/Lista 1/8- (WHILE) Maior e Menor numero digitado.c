/*Escreva um programa que recebe uma quantidade arbitrária de números
positivos e mostra qual foi:
• o maior dos números fornecidos pelo usuário
• o menor dos números fornecidos pelo usuário*/

#include <stdio.h>
int main(){
    int x, xmaior, xmenor; 

    printf("Digite um valor de x ou 0 para parar: ");
    scanf("%d",&x);
    xmaior= x;
    xmenor= x;

        while (x != 0)
        {
        printf("Digite um valor de x ou 0 para parar: ");
        scanf("%d",&x);
            if (x>xmaior){
                
            xmaior = x;
            }
            if (x<xmenor && x != 0)
            {
            xmenor = x;
            }
        }

    printf("\nO maior numero eh o %d", xmaior);
    printf("\nO menor numero eh o %d", xmenor);

return 0;
}