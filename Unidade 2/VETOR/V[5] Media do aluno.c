#include <stdio.h>

int main(){ 
    float nota[5] = {0, 0, 0, 0, 0};
    float total = 0;
    float media = 0;
    int i;
   
    for (i = 0; i < 5; i++)
    {
      printf("Digite a %d nota: ", i);
      scanf("%f", &nota[i]);
      total+= nota[i];
    }

    media = total/5;
    printf ("A media do aluno eh %.2f:", media);

return 0;
}