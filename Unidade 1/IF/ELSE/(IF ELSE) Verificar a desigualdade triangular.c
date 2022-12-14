#include <stdio.h>

int main(){
    int l1, l2, l3;

    printf("Digite os tres lados do triangulo: ");
    scanf("%d" "%d" "%d", &l1, &l2, &l3);
    
    if (l1 + l2 > l3 || l2 + l3 > l3 || l1 + l3 > l2)
    printf("Nao eh um triangulo");
    else if (l1 + l2 > l3 || l2 + l3 > l3 || l1 + l3 > l2)
    printf("Eh um triangulo");

return 0;
}