#include <stdio.h>

void copiar(char *copiar, char *colar);

int main(){   

    char string[] = "Pao com mortadela ";
    char string1[20];

    copiar(string, string1);
    printf("%s\n", string1);

return 0;
}

void copiar(char *copiar, char *colar)
{
    while (*copiar != '\0')
    {
        *colar = *copiar;
        ++copiar;
        ++colar;
    }
    *colar = '\0';
}
