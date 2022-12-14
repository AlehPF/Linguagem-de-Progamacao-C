#include <stdio.h>

void funcao();

int main(){
    funcao();
    funcao();
    funcao();
    funcao();
    funcao();
    printf("\n");
    funcao();
    funcao();
    funcao();
    funcao();
    funcao();

    return 0;
}

void funcao(){
    static int cont = 5;

    printf("Funcao: %i \n", cont);
    cont -= 1;

    if (cont == 0) {
        cont = 5;
    }
}