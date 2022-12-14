/*Selecionar valores repetidos de um vetor de 10 elementos sem repetições.*/
#include <stdio.h>
int main(){
    int v[10] = {7,8,1,0,8,0,7,5,6,5};
    int r[10] = {0,0,0,0,0,0,0,0,0,0};
    int i, j;

    for (i = 0; i < 10; i++ )
    {
        for (j = i + 1; j < 10; j++)
        {
            if (v[i] == v[j])
            {
                r[i] = v[i];
            }
        }
    }

    for (i = 0; i < 10; i++ )
    {
        for (j = i + 1; j < 10 ; j++)
        {
            if (r[i] == r[j])
            {
                r[j] = -1;
            }
        }

    }
        
    for (i = 0; i < 10; i++ )
    {
        if (r[i] != -1)
        {
            printf("Os valores que repetiram foi o: %d\n", r[i]);
        }
    }

return 0; 
}