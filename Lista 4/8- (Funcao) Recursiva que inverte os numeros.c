/* Escreva o programa que inverta a ordem dos dígitos em um número usando
uma função recursiva.
Ex: se o número for 7631 o programa deve retornar o número 1367 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int invertido(int n);

int main(){
    int x, numero;

    printf("Digite o numero: ");
    scanf("%d", &numero);
    
    invertido(numero);

return 0;
}

int invertido(int n)
{ 
    if (n == 0)
    {
        return n;
    } 
    else 
    {
        printf("%d", n % 10);
        n = n / 10;
        return invertido(n); 
    }
}
