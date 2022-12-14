/* Escreva o programa “calculadora” que recebe 2 números reais 
e dependendo da escolha do usuário realiza operações básicas (+, -, /, *) com esses números. */

#include <stdio.h>
int main(){
    int n1, n2, c, x; 

    printf("Digite o primeiro valor desejado: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor desejado: ");
    scanf("%d", &n2);
    printf("\nEscolha o que fazer:" 
            "\n1- Adicao"
            "\n2- Subtracao"
            "\n3- Divisao"
            "\n4- Multiplicacao\n");
    scanf("%d",&c);
    
        switch (c)
        {
        case 1:
        x = n1 + n2;
        printf("\nO resultado foi: %d ", x);
        break;

        case 2:
        x = n1 - n2;
        printf("\nO resultado foi: %d ", x);
        break;

        case 3:
        x = n1/n2;
        printf("\nO resultado foi: %d ", x);
        break;

        case 4:
        x = n1*n2;
        printf("\nO resultado foi: %d ", x);
        break;

        default:
        printf("Digite um numero valido!");
        }

return 0;
}