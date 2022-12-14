#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;
    printf("Digite os tres numeros: ");
    scanf("%d""%d""%d", &n1, &n2, &n3);

        if ((n1 < n2) && (n1 < n3) && (n2 < n3))
        printf("A sequencia fica %d, %d, %d",n1, n2, n3);

        else if ((n1 < n2) && (n1 < 3) && (n2 > n3))
        printf("A sequencia fica %d, %d, %d",n1, n3, n2);

        else if ((n1 < n2) && (n1 > 3) && (n2 > n3))
        printf("A sequencia fica %d, %d, %d",n3, n1, n2);

        else if ((n1 > n2) && (n1 < 3) && (n2 < n3))
        printf("A sequencia fica %d, %d, %d",n2, n1, n3);

        else if ((n1 > n2) && (n1 > 3) && (n2 < n3))
        printf("A sequencia fica %d, %d, %d",n2, n3, n1);

        else if ((n1 > n2) && (n1 > 3) && (n2 > n3))
        printf("A sequencia fica %d, %d, %d",n3, n2, n1);

return 0;
}