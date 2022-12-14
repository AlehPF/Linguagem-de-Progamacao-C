#include <stdio.h>

int somav(int v[], const int n);

int main(){   

    int v[10] = {5, 5, 5, 5, 20, 5, 15, 10, -5, 5};

    printf("A soma dos vetores eh: %d", somav(v, 10));

return 0;
}

int somav(int v[], const int n)
{

    int soma = 0;
    int *ponteiro;
    int *const vetorfinal = v + n;

    for (ponteiro = v; ponteiro < vetorfinal; ponteiro++)
    {
        soma+= *ponteiro;
    }
return soma;
}
