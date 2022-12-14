#include <stdio.h>

int const tam = 5;

int max(int v[]);

int main(){
    int i, maior, menor;
    int v[tam];

    printf("Digite %d numeros!\n\n", tam);
    for (i = 0; i < tam; i++)
    {
        printf("Digite o %d valor: ", i);
        scanf("%d", &v[i]);
    }
    
    maior = max(v);
    menor = min(v);
    printf("\nO maior numero foi o: %d\n", maior);
    printf("O menor numero foi o: %d\n", menor);

return 0;
}

int max (int v[]){
    int res;
    int maior = v[0];
    for (int i = 0; i < tam; i++)
    {
        if (v[i] > maior)
        {
        maior = v[i];
        }
    }

return maior;
}

int min (int v[]){
    int res;
    int menor = v[0];
    for (int i = 0; i < tam; i++)
    {
        if (v[i] < menor)
        {
        menor = v[i];
        }
    }

return menor;
}

