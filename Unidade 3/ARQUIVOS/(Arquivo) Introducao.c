#include <stdio.h>

int main(){

    int x, y, z;
    FILE *file;

    file = fopen("Numero.txt", "w"); //R de ready, W de write  e A para alterar //Nome do arquivo
    
    fprintf(file,"10 20 30"); //file vem do ponteiro //O que vai escrito no arquivo
    fclose(file); //para fechar o arquivo corretamente

    file = fopen("Numero.txt", "r"); //R de ready, W de write  e a para alterar //Nome do arquivo
    if(file == NULL)// Caso o arquivo nao aponte a nada
    {
        printf("Arquivo nao pode ser aberto!\n");
        return 0;
    }
    

    fscanf(file,"%d %d %d", &x, &y, &z); //Funcao para imprimir
    printf("%d %d %d", x, y, z); 

    fclose(file); //para fechar o arquivo corretamente
return 0;
}
