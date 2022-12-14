#include<stdio.h>
int main()
{   
    int tam = 8;
    int cand[tam];
    int i, v, quant;
    float media;
    float nulo = 0;

    printf("Digite a quantidade de votos da urna: ");
    scanf("%d", &quant);

    for (i = 0; i < tam; i++)
    {
        cand[i]= 0;
    }

        for (i = 0; i < quant; i++)
        {
            printf("Digite o voto para o candidato (1, 2, 3, 4, 5, 6, 7) ou outro numero para nulo: ");
            scanf("%d", &v);
                if (v > 0 && v < 7)
                cand[v]++;
                if (v <= 0 || v > 7)
                cand[0]++;
                nulo+=1;
        }    

    for (i = 0; i < tam; i++)
    {
        printf("\nO candidato %d recebeu %d votos", i, cand[i]);
    }   

    media = (nulo/quant)*100;
    printf("\nA porcentagem de votos nulos foi de: %.2f", media);

return 0;
}