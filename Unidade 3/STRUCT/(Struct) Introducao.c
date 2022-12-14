#include <stdio.h>

int main(){
    
    struct horario //Definicao
    { 
        int horas;
        int minutos;
        int segundos;
        float teste;
        char letra;
    };

    struct horario agora; //Declaracao
    agora.horas = 11; //Inicializacao valores
    agora.minutos = 58; //Inicializacao valores
    agora.segundos = 37; //Inicializacao valores

    printf("Agora: %d:%d:%d", agora.horas, agora.minutos, agora.segundos);

    struct horario depois; //Declaracao
    depois.horas = agora.horas + 6; //Inicializacao valores
    depois.minutos = agora.horas + 15; //Inicializacao valores
    depois.segundos = agora.horas + 10; //Inicializacao valores
    depois.teste = 123/43; //teste
    depois.letra = 'A'; //teste


    printf("\n\nDepois: %d:%d:%d", depois.horas, depois.minutos, depois.segundos);
    printf("\n\nTeste: %c = %f", depois.letra, depois.teste);

return 0;
}