#include <stdio.h>

void copiarConteudo(FILE *file1,FILE *file2);

int main(){

    FILE *file1= fopen("String.txt", "r"); 
    if(file1 == NULL)// Caso o arquivo nao aponte a nada
    {
        printf("Arquivo nao pode ser aberto!\n");
        return 0;
    }

    FILE *file2= fopen("String2.txt", "w"); 

    copiarConteudo(file1, file2); //1 argumento eh de aonde vai copiar e o 2 eh aonde vai ser copiado

    fclose(file1); 
    fclose(file2); 

return 0;
} 

void copiarConteudo(FILE *file1,FILE *file2){

    char leitor[1000];

    while (fgets(leitor, 1000, file1) != NULL) //nome do char, tamanho e o ponteiro //O gets serve para strings //O null vem de quando nao ter mais o que ler 
    {                                       //Se nao for dentro do ciclo while ele le apenas a primeira mensagem
        fputs(leitor, file2);
    }
}
