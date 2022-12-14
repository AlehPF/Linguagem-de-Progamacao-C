#include <stdio.h>

int reatangulo(int base, int altura); //Declaracao da funcao

int main(){
    int area;
    int base = 20;
    int altura = 10;

    area = reatangulo(base, altura); //Atribuindo e chamando valores a funcao

    printf("O valor da area eh: %d", area);

return 0;
}

int reatangulo(int base, int altura) //(O que a funcao recebe em sequencia)
{ 
    int area;
    area = base * altura;

return area;
}
