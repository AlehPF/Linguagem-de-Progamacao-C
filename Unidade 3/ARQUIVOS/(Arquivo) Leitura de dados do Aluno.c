#include <stdio.h>

int main(){

    FILE *file;
    int id;
    float n;
    char nome[100];

    file = fopen("Aluno.txt", "r"); 

    if(file == NULL)// Caso o arquivo nao aponte a nada
    {
        printf("Arquivo nao pode ser aberto!\n");
        return 1;
    }
    
    while (fscanf(file, "%d", &id) != EOF) 
    {   
        fscanf(file, "%d", &id);
        fgets(nome, 100, file);
        fscanf(file, "%f", &n);

        printf("Os dados sao: ");
        printf("\nMatricula: %d", id);
        printf("\nNome: %s", nome);
        printf("Nota: %.2f \n\n", n);
    }

    fclose(file);

return 0;
}