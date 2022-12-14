#include <stdio.h>

int main(){
  float media, n1, n2, n3;
  int falta;

  printf("Digite as tres notas: ");
  scanf("%f""%f""%f", &n1, &n2, &n3);
  media = (n1+n2+n3/3 >= 6);

  printf("Digite as suas faltas: ");
  scanf("%d", &falta);

   if (falta >= 20) 
   printf ("Voce foi reprovado");
   else if (media >= 6)
   printf("Voce foi aprovado");
   else if (media >= 3)
   printf("Voce ficou de recuperacao");
   else if (media > 0)
   printf("Voce foi reprovado");
  
return 0;
}
    