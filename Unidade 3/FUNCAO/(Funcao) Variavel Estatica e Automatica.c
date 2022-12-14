#include <stdio.h>

int main(){

    void teste();

    teste();
    printf("\n");
    teste();
    printf("\n");
    teste();
    
return 0;
}

void teste()
{

    int variavelAutomatica = 2;
    variavelAutomatica*= 2;

    static int variavelEstatica = 2; //Variavel estatica
    variavelEstatica*= 2;

    printf("Variavel Automatica = %d\n", variavelAutomatica);
    printf("Variavel Estatica = %d\n", variavelEstatica);
}
