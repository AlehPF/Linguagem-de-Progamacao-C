/*Escreva um programa que solicite ao usuário três números inteiros a, b, c. O
programa deve somar todos os inteiros entre b e c que sejam divisíveis por
número a.*/

#include <stdio.h>

int main(){
    int a, b, c, maior, menor, i, divs;

        do/*Condicao para a ser maior do que 1*/
        { 
            printf("Digite o valor de A que seja maior do que 1: ");
            scanf("%d", &a);
        }
        while(a < 1);

        printf("Digite o valor de B e C respectivamente: ");
        scanf("%d""%d", &b, &c);

        if(b > c)
        {
            maior = b;
            menor = c;
        }
        else
        {
            maior = c;
            menor = b;
        }

        divs = 0;

        for(i = menor + 1; i < maior; i++)/*Verificar o divisivel entre b e c*/
            if(i % a == 0)
            divs += i;

        printf("A soma eh: %d", divs);


return 0;
}