/*  Criar vetor a com 10 elementos float e vetor b com 15 elementos float.
• Ciar e fazer uso das funções a seguir:
◦ minv para achar o menor elemento em vetor com protótipo:
float minv (float v[ ], int n) ou float minv (float * v, int n)
◦ sumv para achar a soma dos elementos do vetor com protótipo: 
float sumv (float v[ ], int n) ou float sumv (float * v, int n) 
◦ meanv para achar o valor médio dos elementos do vetor com 
protótipo:
float meanv (float v[ ], int n) ou float meanv (float * v, int n)*/

#include <stdio.h>

float minv (float *v, int n);
float sumv (float *v, int n);
float meanv (float *v, int n);

int main(){
    float a[10] = {-1.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};
    float b[15] = {0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 13.0, 14.0};

    printf("O menor elemento do vetor A eh o: %.2f", minv(a, 10));
    printf("\nO menor elemento do vetor B eh o: %.2f", minv(b, 15));

    printf("\n\nA soma dos elementos do vetor A eh o: %.2f", sumv(a, 10));
    printf("\nO soma dos elementos do vetor B eh o: %.2f", sumv(b, 15));

    printf("\n\nA media dos elementos do vetor A eh o: %.2f", meanv(a, 10));
    printf("\nO media dos elementos do vetor B eh o: %.2f\n", meanv(b, 15));

return 0;
}

float minv (float *v, int n)
{
    float min = v[0];
    for (int i = 0; i < n; i++)
    {
        if (v[i] < min)
        {
            min = v[i];
        } 
    }
return min;  
}

float sumv (float *v, int n)
{
    float soma = 0;
    for (int i = 0; i < n; i++)
    {
        soma+= v[i];
    }

return soma;  
}

float meanv (float *v, int n)
{
    float soma = 0;
    float media;
    for (int i = 0; i < n; i++)
    {
        soma+= v[i];
    }
    media = soma/n;

return media;  
}
