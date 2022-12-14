#include <stdio.h>

int main()
{ 
    int tam = 6;
    int cand[tam];
    int i, v;
    int n= -1;

    for (i = 0; i < tam; i++)
    {
    cand[i] = 0;
    }

    for (i = 0; i < 10; i++){
    printf("\n Escolha o candidato (1,2,3,4,5): ");
    scanf("%i", &v);
    if(v >= 0 && v <=5)
     cand[v]++;
    else
     cand[0]++;
    }
    
    printf("\nCandidato      Votos\n");
    for (i = 0; i < tam; i++)
    printf("\n %i              %i\n", i, cand[i]);
    printf("\nVotos nulos: %i\n", cand[0]);

return 0;
}