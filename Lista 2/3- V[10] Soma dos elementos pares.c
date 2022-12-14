/*criar vetor com 10 elementos do tipo int
• achar a soma dos elementos pares
• achar a soma dos elementos que se encontram nas posições com
índice par ( c[0], c[2], c[4])*/
#include <stdio.h>
int main(){
    int v[10]={2,1,4,5,6,11,7,8,9,10};
    int soma= 0;
    int somav= 0;

    for (int i = 0; i < 10; i++)
    {
    if (v[i]%2 != 1)
    soma = soma + v[i];
    
    if (i%2 != 1)
    somav = somav + v[i];
    }

    printf("A soma dos numeros pares foi %d \n", soma);
    printf("A soma dos numeros indices pares foi: %d \n", somav);
    
return 0;
}