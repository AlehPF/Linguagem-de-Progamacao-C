/*Utilizando operador ternário ("%s", CONDICAO ? (VERDADE) : (FALSO
)) escreva um programa que receba dois números
inteiros x e y e verifica se o número x é divisível pelo número y.*/

#include <stdio.h>
int main(){
    int x, y; 

    printf("Digite o valor desejado de x: ");
    scanf("%d",&x);
    printf("Digite o valor desejado de x: ");
    scanf("%d",&y);

    printf("%s", y!=0 ? "DIVISIVEL" : "INDIVISIVEL");

return 0;
}