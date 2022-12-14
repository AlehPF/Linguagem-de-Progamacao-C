/*• criar uma matriz A (4x4)
• achar o elemento máximo dessa matriz e a sua posição*/

#include <stdio.h>

int main(){
int m[4][4] ={{1,2,3,4},{5,6,7,8},{9,8,7,6},{5,4,3,2}};
int i, j, max, l, c;

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if (i == 0 && j == 0)
            {
                max = m[i][j];
                l = i;
                c = j;
            }
            else if (m[i][j] > max)
            {
                max = m[i][j];
                l = i;
                c = j;
             }
        }
    }

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("O valor maximo da matriz eh: %d, fica na Linha %d e na Coluna %d", max, l, c);

return 0;
}