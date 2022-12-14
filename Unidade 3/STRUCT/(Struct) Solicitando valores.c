#include <stdio.h>
#include <stdlib.h>

#define tam 3

struct tipopessoa
{
    int idade;
    float peso;
    char nome[50];
};

typedef struct tipopessoa tipopessoa; //Virar tudo um so

int main(){
    tipopessoa lista[tam];
    int i;

    //Criando e inicializando
    tipopessoa pes = {0, 0.0, "teste"};

    printf("Inicio:");
    //Solicitando os valores
    for (i = 0; i < tam; i++)
    {
        printf("\n");
        printf("Insira o nome da %d pessoa: ", i);
        scanf("%s", &lista[i].nome);  //50 vem do tamanho do vetor nome[50] e aceita espaco assim
        printf("Insira a idade da %d pessoa: ", i+1); 
        scanf("%d", &lista[i].idade);
        printf("Insira o peso da %d pessoa: ", i+1);
        scanf("%f", &lista[i].peso);  
    }

    system("cls"); //apaga tudo na tela preta

    //Mostrando na tela
    printf("\nSeus dados: \n");
    for (i = 0; i < tam; i++)
    {
        printf("----------- PESSOA %d -----------\n", i+1);
        printf("Nome: %s\n",lista[i].nome);
        printf("idade: %d\n",lista[i].idade);
        printf("Peso: %.2f\n",lista[i].peso);
    }
}