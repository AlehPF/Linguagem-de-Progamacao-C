#include <stdio.h>
#include <stdlib.h>

struct livros
{
    int codigo;
    char titulo[50];
    char autor[50];
};

int main(){
    struct livros *aPtr;
    int tamanho;
    int i;

    printf("Digite a quantidade de livros do cadastro: ");
    scanf("%d", &tamanho);
    printf("\n");

    aPtr = (struct livros *) malloc(tamanho * sizeof(struct livros)); //Tamanho sempre * pelo sizeof

    for (i = 0; i < tamanho; i++)
    {
        printf("Entrada de dados para o livro %d\n", i+1);
        printf("Id do livro: ");
        scanf("%d", &(aPtr+i)->codigo);  //->Para passar vetores para uma estrutura
        printf("Titulo do livro: ");
        scanf(" %[^\n]%*c", &(aPtr+i)->titulo); // é utilizado essa nomenclatura quanto tem espaco na string
        printf("Autor do livro: ");
        scanf(" %[^\n]%*c", &(aPtr+i)->autor); // é utilizado essa nomenclatura quanto tem espaco na string
        printf("\n");
    }
    
    printf("\n============================================\n");
    printf("Livros cadastrados:\n");
        
    for (i = 0; i < tamanho; i++)
    {
        printf("\nLivro %d: \n", i+1);
        printf("Codigo do livro %d: %d:\n", i+1, (aPtr+i)->codigo);
        printf("Titulo do livro %d: %s:\n", i+1, (aPtr+i)->titulo);
        printf("Autor do livro %d: %s:\n", i+1, (aPtr+i)->autor);
    }

return 0;
}