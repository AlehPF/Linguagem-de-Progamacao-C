#include <stdio.h>

int main()
{
    int x;
    int soma= 0;
    int i= 0;
    
    for (int i = 0; i < 100; i++)
    {
        if (i % 2 != 0)
        soma+= i;
    }

    printf("A soma dos numeros impares foi: %d", soma);
    
return 0;
}