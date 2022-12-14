#include <stdio.h>

float somadedigitos(float num1, float num2);
float valorabs(float x);

int main(){

    float a, b, soma;

    printf("Digite 2 numeros: \n");;
    scanf("%f %f", &a, &b);

    soma = somadedigitos(a, b);

    printf("O valor absoluto eh: %f", soma);

return 0;
}

float somadedigitos(float num1, float num2)
{
    float valorabs(float x);

    if(num1 < 0)
    {
        num1 = valorabs(num1);
    }
    if(num2 < 0)
    {
        num2 = valorabs(num2);
    }

return num1 + num2;
}

float valorabs(float x)
{
return x*-1;
}
