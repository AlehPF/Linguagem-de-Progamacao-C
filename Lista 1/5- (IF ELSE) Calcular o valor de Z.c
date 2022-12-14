/* Receber o valor de x e achar o valor de z sabendo que: y = 2x + 5z={2 y2−3 y+7 , se y<04 y ²+5 y−3 , se y≥0}*/

#include <stdio.h>
int main(){
    int x, y, z; 

    printf("Digite o valor desejado de x: ");
    scanf("%d", &x);

    y = 2*x + 5;

    if (y < 0)
    {
    z = 2*(y*y) -3*y + 7;
    printf("\nO valor de Z eh %d ", z);
    }

    else if (y >= 0)
    {
    z = 4*(y*y) + 5*y -3;
    printf("\nO valor de Z eh %d",z);
    }

return 0;
}