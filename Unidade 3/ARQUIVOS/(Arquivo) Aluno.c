#include <stdio.h>

int main(){

    FILE *file;
    int id, ch, i = 1;
    float n;
    char nome[100];

    file = fopen("Aluno.txt", "w"); //Criando o arquivo

    if(file == NULL)// Caso o arquivo nao aponte a nada
    {
        printf("Arquivo nao pode ser aberto!\n");
        return 1;
    }
    
    while (i != 0) 
    {   
        printf("Digite a matricula: ");
        scanf("%d", &id);                               
        printf("Digite o nome do aluno: ");
        scanf(" %[^\t\n]s", nome);
        printf("Digite a nota do aluno: ");
        scanf("%f", &n);   

        printf("\nVoce digitou: ");
        printf("\nMatricula: %d", id);
        printf("\nNome: %s", nome);
        printf("\nNota: %.2f ", n);
      
        printf("\n\nDeseja gravar para arquivo? 1- Sim; 0- Nao: ");
        scanf("%d", &ch); 

        if (ch ==1)
        {
            fprintf(file,"%d\n", id);
            fprintf(file,"%s\n", nome);
            fprintf(file,"%.2f\n\n", n);
            
        }

        printf("\nDeseja continuar? 1- Sim; 0- Nao: ");
        scanf("%d", &i); 
        printf("\n");

    }

    fclose(file);

return 0;
}