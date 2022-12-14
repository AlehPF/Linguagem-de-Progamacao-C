#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* Exemplo que recebe as notas de uma turma,
armazenada em um registro e calcula a media
da turma */

typedef struct 
{
  char nome[25];
  float nota;
  int matricula;
}estudante;

int main(){

  estudante turma[3];
  int i;
  float media;

  printf("Digite os dados da turma: \n");
  for(i = 0; i < 3; i++)
  {
     printf("Digite o nome do aluno: ");
     fgets(turma[i].nome, 25, stdin); // leitura da string a partir do teclado
     turma[i].nome[strlen(turma[i].nome)-1] = '\0'; // remove \n no final da string
     printf("Digite a nota: ");
     scanf("%f",&turma[i].nota);
     printf("Digite a matricula: ");
     scanf("%d", &turma[i].matricula);
     getchar(); //Le o \n digitado no teclado
   }

   printf("\n");

   for(i = 0; i < 3; i++)
   {
      printf("%s",turma[i].nome);
      printf(" %.2f", turma[i].nota);
      printf(" %d\n", turma[i].matricula);
   }

   media = 0.0;
   for(i = 0; i < 3; i++)
      media += turma[i].nota;
   media /= 3;

   printf("A media da turma eh: %.2f\n", media);

return(0);
}

