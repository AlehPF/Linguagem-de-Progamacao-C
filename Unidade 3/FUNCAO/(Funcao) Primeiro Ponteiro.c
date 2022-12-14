#include <stdio.h>

    void testeVariavel(int x);
    void testePonteiro(int *pX);

int main(){

    int teste = 1;
    int *pTeste = &teste; //armazenamos no ponteiro o que esta em teste

    //testeVariavel(teste); //Caso tirar o // o resultado vai ser 1
    testePonteiro(pTeste); // Se colocar o * vamos informar o endereco da memoria e nao o valor

    printf("%d\n", teste); //

return 0;
}

void testeVariavel(int x)
{
    ++x;
}

void testePonteiro(int *pX)
{
    ++*pX; //Como é um ponteiro e incrementou + 1 aqui, vai ser mostrado 2 no printf
}