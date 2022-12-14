/*criar vetor com 10 elementos do tipo float
• calcular o valor médio dos elementos
• imprimir os elementos do vetor que estão acima da média com suas
respectivas posições.*/
#include <stdio.h>
int main(){
    int i=0;   
    float v[10]= {7,9,5,4,13,11,17,3,2,12};
    float soma=0;
    float media;

    for (i = 0; i < 10; i++)
    {
    soma += v[i];
    }

    media = soma/10;
    printf("A media dos vetores foi: %.3f \n", media);

    for (i = 0; i < 10; i++)
    {
    if (v[i] > media)
    printf("\nOs numeros acima da media foram: %.3f \n", v[i]);
    }

    for (i = 0; i < 10; i++)
    {
    if (v[i] < media)
    printf("\nOs numeros abaixo da media foram: %.3f \n", v[i]);
    }

return 0;
}