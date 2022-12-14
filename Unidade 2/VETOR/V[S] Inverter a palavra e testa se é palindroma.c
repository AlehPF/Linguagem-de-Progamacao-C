#include<stdio.h>

int main() 
{
  int i;
  int valor = 0;
  char palavra[15];
  char inversa[15];

  printf("\nDigite uma palavra: ");
  scanf("%s", &palavra);

  //Copiar a palavra digitada para que seja invertida
  strcpy(inversa, palavra);

  //Inverter a palavra copiada
  strrev(inversa);

  valor = strcmp(palavra, inversa);

  if (valor == 0)
    printf("\nA palavra %s eh palindroma\n", palavra);
  else
    printf("\nA palavra %s nao eh palindroma\n", palavra);

return 0;
}