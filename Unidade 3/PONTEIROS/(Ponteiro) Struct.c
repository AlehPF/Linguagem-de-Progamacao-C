#include <stdio.h>

struct horario{ 
    int horas;
    int minutos;
    int segundos;                    
};

int main(){

    struct horario agora, *depois;
    depois = &agora;
    
    depois->horas = 20;
    depois->minutos = 10;
    depois->segundos = 30;

    printf("%d:%d:%d\n", agora.horas, agora.minutos, agora.segundos); 
    
return 0;
}