/*O programa deve calcular a matriz C, resultante do produto de duas matrizes A
(4 x 2) e B( 2 x 3 )
A matriz C ( m X q ) resultante do produto das matrizes A (m x n) e
B (n x q) pode ser calculada como:*/
#include <stdio.h>


int main(){
	float a[4][2] = {{1,2},{2,3},{3,4},{4,5}};
	float b[2][3] = {{1,2,3},{4,5,6}};
	float c[4][3];
	int i, j, k;
	float prod;

	for (i = 0; i < 4; i++) 
	{
		for(j = 0; j < 3; j++)
		{
			c[i][j] = 0;
			for(k = 0; k < 2; k++)
			{
				prod+=  a[i][k] * b[k][j];
			}
				c[i][j] = prod;
				prod = 0;
		}
	}

	for (i = 0; i < 4; i++) 
	{
		for(j = 0; j < 3; j++) 
		{
			printf("%6.f", c[i][j]);
		}
	printf("\n");
	}

return 0;
}