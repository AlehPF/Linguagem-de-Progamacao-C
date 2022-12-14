#include <stdio.h>

int *aleatorio();

    int main(){

    int *p;
    int i;

    p = aleatorio();
    printf("\nAcesso em main(): \n");
    for (i = 0; i < 10; i++)
    {
        printf("*(p + %d) : %d\n", i, *(p + i));
    }

return 0;
}


int *aleatorio()
{
    static int v[10];
    int i;

    printf("\nNumeros gerados dentro da funcao: \n");
    for (i = 0; i < 10; ++i)
    {
        v[i] = 1 + rand() % 20;
        printf("Aleatorio[%d] = %d\n", i, v[i]);
    }

return v;
}
