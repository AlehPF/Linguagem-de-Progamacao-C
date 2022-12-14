#include <stdio.h>

int main(){

    FILE *file;
    
    file = fopen("String.txt", "a"); //R de ready, W de write  e A para alterar //Nome do arquivo

    if(file == NULL)// Caso o arquivo nao aponte a nada
    {
        printf("Arquivo nao pode ser aberto!\n");
        return 0;
    }

    fprintf(file, "Primeira linha\n");

    char frase[] = "Segunda linha\n";
    fputs(frase, file); //Passa um vetor de caractere

    char caractere[] = "C";
    fputc(caractere, file); //Passa um caractere
    fclose(file); 

return 0;
}