#include <stdio.h>

struct horario//Definicao global
{ 
    int horas;
    int minutos;
    int segundos;
};/*agora = {11, 48, 37}; //Poderia declarar assim, reduzindo a linha 14 a 17*/

int main(){

    struct horario /*nome da struct*/ teste/*Nome da funcao*/(struct horario/*Defincao da estrutura*/ x /*Nome qualquer*/); //Declarei a funcao
    struct horario depois;

    struct horario agora; //Declaracao
    agora.horas = 11; //Inicializacao valores
    agora.minutos = 48; //Inicializacao valores
    agora.segundos = 37; //Inicializacao valores

    depois = teste(agora); //Passando a estrutura agora para a funcao teste
    printf("\nDepois: %d:%d:%d", depois.horas, depois.minutos, depois.segundos); //Depois


return 0;
}

struct horario teste(struct horario x)
{
    printf("Agora: %d:%d:%d", x.horas, x.minutos, x.segundos); //Agora
    x.horas+=10; //Atribuindo valores ao depois
    x.minutos+=10; //Atribuindo valores ao depois
    x.segundos+=10; //Atribuindo valores ao depois

return x;
}
