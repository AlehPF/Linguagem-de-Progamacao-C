/*Criar vetores a, b com 5 elementos do tipo int e vetor c com 10
elementos;
• Os valores dos elementos de a e b podem ser fornecidos pelo usuário
ou pre definidos.
• O vetor c deve conter os elementos de a e b de forma intercalada.*/
#include <stdio.h>
int main(){
    int a[5];
    int b[5];
    int c[10]={0,0,0,0,0,0,0,0,0,0,0};
    int i;
    int conta = 0;
    int contb = 0;

    for (int i = 0; i < 5; i++)
    {
    printf("Digite o %d valor do vetor A: ", i);
    scanf("%d", &a[i]);
    }

    for (int i = 0; i < 5; i++)
    {
    printf("Digite o %d valor do vetor B: ", i);
    scanf("%d", &b[i]);
    }

    for(i = 0; i < 10; i++)
    {
        if(i%2 == 0)
        {
        c[i] = a[conta];
        conta+= 1;
        }
        if(i%2 == 1)
        {
        c[i] = b[contb];
        contb+= 1;
        }
    }

    printf("Vetor C \n");
    for (i = 0; i < 10; i++)
    {
    printf("%i ", c[i]);
    }

return 0;
}