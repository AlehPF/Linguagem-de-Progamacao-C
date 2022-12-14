#include <stdio.h>
#include <stdlib.h> //Alocacao dinamica

int main(){
    int i;
    int *p;
 
                                                      //syzeof = tamanho de
    //p =(int *) malloc(sizeof(int));                 //Malloc aloca a memoria, o syze of diz o tamanho para alocar (inteiro)
    //Casting para forcar o ponteiro retornar int     //Caso fosse um vetor eu faria (tamanho do vetor * syzeof(int))
    
    p = (int *) calloc(5, sizeof(int)); //Memoria nao tem "sujeira" //tamanho(tipo)

    for (i = 0; i < 10; i++)
    {
        printf("Endereco de p%d = %p | Valor de p%d = %d", i, p+i, i, *p+i); 
        printf("\n");
    }

    free(p); //Liberar memoria, no caso o ponteiro p

return 0;
} 