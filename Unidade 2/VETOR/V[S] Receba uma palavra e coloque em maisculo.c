/*Escreva um programa que receba uma string e apresente ela em letras maiúsculas.*/
#include <stdio.h>
#define tam 25

// transforma minusculas em maiusculas

int main()
{
    int i;
    char v[tam];
        
    printf("Digite a mensagem: ");
    scanf("%s", &v);
    for (i = 0; i < tam; i++)
    {
        if(v[i] >= 97 && v[i] <= 122)
        {
        v[i] = v[i] -32;
        }
    }
    for ( i = 0; i < tam; i ++)
    {
        printf("%c", v[i]);
    }
    
return 0;
}