/*Escreva um programa para calcular a média aritmética de um conjunto de
números pares positivos fornecidos pelo usuário.
• Observe que nada impede que o usuário forneça números ímpares ou
negativos, com a ressalva de que eles não poderão ser usados no cálculo
da média aritmética.
• O programa deve realizar a contagem de tentativas de entrada de dados
inválidos.*/

#include <stdio.h>
int main(){
    int x, media; 
    int cont = -1;
    int soma = 0;

    while (x !=0 )
    {
    printf("Digite um positivo ou 0 para parar: ");
    scanf("%d", &x);

    if (x%2 != 1 && x > 0)
    soma = soma + x;
    cont++;
    
    if (x%2 != 1 && x < 0)
    cont--;
    }

    media = soma/cont;
    printf("\nA soma dos numeros eh %d", soma);
    printf("\nO media dos numeros eh %d", media);

return 0;
}