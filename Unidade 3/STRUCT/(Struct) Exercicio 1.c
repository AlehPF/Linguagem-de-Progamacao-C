#include <stdio.h>
#include <string.h> 
#define tam = 5

struct horario
{
    int horario;
    int minuto;
    int segundo;
};

int main(){

    void declaracao(struct horario lista[]); // O nome lista é um nome escolhido qualquer
    void imprime(struct horario lista[]); // Funcao
    struct horario listahorario[5]; //Struct virou um vetor[5]
    
    declaracao(listahorario); //chamado da funcao
    imprime(listahorario); //chamado da funcao
       
}

void declaracao(struct horario lista[]){

    for (int i = 0; i < 5; i++)
    {
        printf("Insira o %d horario (hh:mm:ss):", i+1);
        scanf("%d %d %d", &lista[i].horario, &lista[i].minuto, &lista[i].segundo); 
        printf("\n");   
    }
}

void imprime(struct horario lista[]){

    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("----------- HORARIO %d -----------\n", i+1);
        printf("%d:%d:%d", lista[i].horario, lista[i].minuto, lista[i].segundo);
        printf("\n");
    }
}