#include <stdio.h>

int main(){

    int x = 10;
    float y = 20.50;
    char z = 'A';

    int *px = &x;
    float *py = &y;
    char *pz = &z;

    float soma = *px + *py;

    printf("Endereco x = %d - Valor x = %d\n", px, *px); 
    printf("Endereco y = %d - Valor y = %.2f\n", py, *py); 
    printf("Endereco z = %d - Valor z = %c\n", pz, *pz); 
    printf("Soma = %.2f", soma); 
    // se tirar o * acessamos o endereco de memoria, ja com o * acessamos o valor do endereco da memoria

return 0;
}