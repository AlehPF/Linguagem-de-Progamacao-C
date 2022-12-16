/*Registro  que represente uma medida de tempo dada em dois campos horas e minutos
escreva uma funcao que devolva o tempo em minutos*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct horario{
    int horas;
    int minutos;
};

void agora(struct horario horaAtual);

int main(){

    struct horario horaAtual;

    printf("Digite as horas atuais: ");
    scanf("%d", &horaAtual.horas);
    printf("Digite os minutos atuais: ");
    scanf("%d", &horaAtual.minutos);

    agora(horaAtual);

return 0;
}

void agora(struct horario horaAtual)
{
    int total = 0;
    total = (horaAtual.horas * 60) + horaAtual.minutos;
    printf("\nA hora atual em minutos eh: %d", total);
}
