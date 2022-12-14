#include <stdio.h>

int mostrar(int v[], int n);
int inverso(int v[], int n);
int trocar(int v[], int i, int f);

int main(){
    int i, v[5];

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %d vetor: ", i);
        scanf("%d", &v[i]);
    }

    printf("\nNumeros:");
    mostrar(v, 5);
    inverso(v, 5);
    printf("\nNumeros invertidos:");
    mostrar(v, 5);

return 0;
}

int mostrar(int v[], int n){
    for (int i = 0; i < n; i++)
    {
        printf(" %d", v[i]);
    }
printf("\n");
}

int inverso(int v[], int n){
int i = 0;
int f = n-1;

    while (i < f)
    {
        trocar(v, i, f);
        i++; 
        f--;
    }
}

int trocar(int v[], int i, int f){
    int aux = v[i];
    v[i] = v[f];
    v[f] = aux;
}



