#include <stdio.h>

int main(){
 
     struct horario{ 
        int *horas;
        int *minutos;
        int *segundos;                    
    };

    struct horario hoje;

    int hora = 12;
    int minuto = 24;
    int segundo = 45;

    hoje.horas = &hora; //& serve para o endereco de memoria
    hoje.minutos = &minuto;   
    hoje.segundos = &segundo;

    printf("%d:%d:%d\n", *hoje.horas, *hoje.minutos, *hoje.segundos); 


return 0;
}