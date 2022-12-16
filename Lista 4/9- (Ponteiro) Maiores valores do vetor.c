/*• Criar um vetor a com 10 elementos do tipo int.
• Criar um vetor b com 10 elementos do tipo int.
• Criar um vetor de ponteiros vPtr que vai conter endereços de maior
elemento entre a[i] e b[i]:
Se a[i] > b[i]
 vPtr[i] vai apontar para elemento a[i]
caso contrario
 vPtr[i] vai apontar para b[i]*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    int *vPtr[10];
    int a[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int b[10] = {0, 4, 2, 6, 8, 12, 10, 16, 14, 18};
  
    for (i = 0; i < 10; i++)
    {
        if(a[i] > b[i])
        {
            vPtr[i] = a[i]; 
        }
        else
        {
            vPtr[i] = b[i];
        }
    }
    
    for( i = 0; i < 10; i++)
    {
        printf("%d ", vPtr[i]);
    }

return 0;
}