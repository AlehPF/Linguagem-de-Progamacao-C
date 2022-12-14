#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* Exemplo com funcao que recebe dois vetores e
devolve o produto escalar */

double produtoEscalar(double *v1, double *v2, int n);

int main(){
  int n, i;
  double *u, *v, prod;
  printf("Digite o tamanho dos vetores: ");
  scanf("%d", &n);
  v = malloc(n*sizeof(double));
  u = malloc(n*sizeof(double));

  printf("Digite o vetor 1: \n");
  for(i = 0; i < n; i++)
     scanf("%lf", &v[i]);
  printf("Digite o vetor 2: \n");
  for(i = 0; i < n; i++)
     scanf("%lf", &u[i]);

  for(i = 0; i < n; i++)
     printf("%f %f\n", *(u+i), v[i]);

  prod = produtoEscalar(u, v, n);

  printf("O produto escalar de u e v eh: %.2f\n", prod);

  for(i = 0; i < n; i++)
     printf("%f %f\n", *(u+i), v[i]);

  return(0);
}

double produtoEscalar(double *v1, double *v2, int n)
{
   double pi = 0;
   int i;
   for(i= 0; i < n; i++)
      pi += v1[i]*v2[i];

return pi;
}
