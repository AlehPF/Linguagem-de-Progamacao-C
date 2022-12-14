#include <stdio.h>

int main()
{
    int x, media;
    int soma= 0;
    int cont= 0;    

    while (x != 0)
    {
        printf("Digite o numero desejado ou 0 para parar: ");
        scanf("%d", &x);

        if (x < 0)
        soma+= x;
        cont = cont + 1;
        media = soma/cont;
    }

    printf("A media dos numero negativos foi: %d", media);

return 0;
}