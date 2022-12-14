#include <stdio.h>

int main(){

    FILE *file;
    
    file = fopen("String.txt", "w"); //R de ready, W de write  e A para alterar //Nome do arquivo
    fprintf(file,"Pao com mortadela"
                  "\nCoxinha\n"); //file vem do ponteiro //O que vai escrito no arquivo
    fclose(file); //para fechar o arquivo corretamente

    file = fopen("String.txt", "r"); //R de ready, W de write  e a para alterar //Nome do arquivo

    if(file == NULL)// Caso o arquivo nao aponte a nada
    {
        printf("Arquivo nao pode ser aberto!\n");
        return 0;
    }

    char frase[100];
    while (fgets(frase, 100, file) != NULL) //nome do char, tamanho e o ponteiro //O gets serve para strings //O null vem de quando nao ter mais o que ler 
    {                                       //Se nao for dentro do ciclo while ele le apenas a primeira mensagem
        printf("%s", frase);    
    }

    fclose(file); //para fechar o arquivo corretamente
return 0;
}