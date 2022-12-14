#include <stdio.h>

int main(){
    int cargo;
    float salario, aumento, novo;

    printf("Digite o o seu cargo: \n"
        "1- Escritutario \n"
        "2- Secretario \n"
        "3- Caixa \n"
        "4- Gerente \n"
        "5- Diretor \n");
    scanf("%d", &cargo);

    printf("\nDigite o o seu salario: \n");
    scanf("%f", &salario);

    switch (cargo)
    {
        case 1:
        aumento = salario * 0.5;
        novo = salario + aumento;
        printf("O seu aumento foi de: %.3f\n", aumento);
        printf("O seu salario com o aumento ficou em: %.3f\n", novo);
        break;

        case 2:
        aumento = salario * 0.35;
        novo = salario + aumento;
        printf("O seu aumento foi de: %.3f\n", aumento);
        printf("O seu salario com o aumento ficou em: %.3f\n", novo);
        break;

        case 3:
        aumento = salario * 0.2;
        novo = salario + aumento;
        printf("O seu aumento foi de: %.3f\n", aumento);
        printf("O seu salario com o aumento ficou em: %.3f\n", novo);
        break;

        case 4:
        aumento = salario * 0.10;
        novo = salario + aumento;
        printf("O seu aumento foi de: %.3f\n", aumento);
        printf("O seu salario com o aumento ficou em: %.3f\n", novo);
        break;

        case 5:
        printf("Voce nao recebeu aumento, logo seu salario ficou igual: %.3f\n", salario);
        break;

        default:
        printf("DIGITE UM NUMERO CORRETO");
        break;
    }

return 0;
}