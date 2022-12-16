/*• Criar um vetor n com 10 elementos positivos do tipo int.
• Copiar valores repetidos desse vetor para um outro vetor, onde cada
valor só pode aparecer uma única vez.
• Usar função para verificar se um determinado valor aparece em um
vetor*/

#include <stdio.h>
#include <stdlib.h>

int vRepeticao(int *v, int tam, int n);
void fRepeticao(int *vet,int tam);


int main(){

    int v[10]= {0, -1, 3, 2, -2, 5, 4, 5, 2, -7};

    fRepeticao(v, 10);

return 0;
}

int vRepeticao(int *v, int tam, int n)
{
    int i;
    int repeticoes = 0;

    for(i = 0; i < tam; i++)
    {
        if(v[i] == n)
        {
            repeticoes++;
        }
    }

return repeticoes;
}


void fRepeticao(int *v, int tam)
{
    int i, j, k, var;
    int contRepeticao = 0;
    int cont = 0;
    int aux[tam];
    
    for(i = 0; i < tam; i++)
    {
    var = vRepeticao(v, tam, v[i]);
        if (var > 0)
        {
            contRepeticao++;
            aux[i] = v[i];
        }
        else
        {
            aux[i] = -1;
        }
    }

    for(k = 0; k < tam; k++)
    {
        printf("%d ", aux[k]);
    }
    printf("\n");

    int vA[contRepeticao];

    for(i = 0;i < tam; i++)
    {
       if( aux[i] !=-1)
       {
        for (j = i+1; j < tam; j++)
        {
            if (aux[j] == aux[i])
            {
                aux[j] = -1;
            }
         } 
       }
    }
    printf("\n");

    for(int k = 0; k < tam; k++)
    {
        if( aux[k] != -1)
        {
            vA[cont] = aux[k];
            cont++;
        }
    }

    printf("O novo vetor sem repeticoes ficou: ");
    printf("\n");
    for(i = 0; i < cont; i++)
    {
        printf("%d ", vA[i]);
    } 
printf("\n");
}