#include <stdio.h>

int soma(int n1, int n2);
int subtracao(int n1, int n2);
int multiplicacao(int n1, int n2);
int divisao(int n1, int n2);

int main(){
    int x, y, operacao;
    int fsoma, fsubtracao, fmultiplicacao, fdivisao, fpotencia;

    printf("1- Soma"
    "\n2- Subtracao"
    "\n3- Multiplicacao"
    "\n4- Divisao"
    "\n5- Potencia"
    "\nDigite qual operacao deseja fazer: ");
    scanf("%d",&operacao);
    if (operacao < 0 || operacao > 5)
    printf("ERRO!");
    else
    printf("\nDigite o primeiro numero: ");
    scanf("%d",&x);
    printf("\nDigite o segundo numero: ");
    scanf("%d",&y);

    switch (operacao)
    {
    case 1:
        fsoma = soma(x, y); //Chamado da funcao
        printf("\nA soma foi: %d", fsoma);
        break;

    case 2:
        fsubtracao = subtracao(x, y); //Chamado da funcao
        printf("\nA subtracao foi: %d", fsubtracao);
        break;  

     case 3:
        fmultiplicacao = multiplicacao(x, y); //Chamado da funcao
        printf("\nA multiplicacao foi: %d", fmultiplicacao);
        break;

    case 4:
        fdivisao = divisao(x, y); //Chamado da funcao
        printf("\nA divisao foi: %d", fdivisao);
        break; 

    case 5:
        fpotencia = potencia(x, y); //Chamado da funcao
        printf("\nA potencia foi: %d", fpotencia);
        break;                       
                      
    }

return 0;
}

int soma(int n1, int n2){
    int soma;
    soma = n1 + n2;
return soma;
}

int subtracao(int n1, int n2){
    int subtracao;
    subtracao = n1 - n2;
return subtracao;
}

int multiplicacao(int n1, int n2){
    int multiplicacao;
    multiplicacao = n1 * n2;
return multiplicacao;
}

int divisao(int n1, int n2){
    int divisao;
    divisao = n1 / n2;
return divisao;
}

int potencia(int n1, int n2){
    int potencia = 1;
    for (int i = 0; i < n2; i++)
    {
        potencia= potencia * n1;
    }

return potencia;
}
