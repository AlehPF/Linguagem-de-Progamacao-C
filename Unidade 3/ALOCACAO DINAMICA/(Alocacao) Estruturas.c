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
    struct livros *bPtr;

    aPtr = (struct livros *) malloc(sizeof(struct livros));
    bPtr = (struct livros *) malloc(sizeof(struct livros));

    printf("Entrada de dados para o livro 1\n");

    printf("Id do livro: ");
    scanf("%d", &aPtr->codigo);  //->Para passar vetores para uma estrutura

    printf("Titulo do livro: ");
    scanf(" %[^\n]%*c", &aPtr->titulo); // é utilizado essa nomenclatura quanto tem espaco na string

    printf("Autor do livro: ");
    scanf(" %[^\n]%*c", &aPtr->autor); // é utilizado essa nomenclatura quanto tem espaco na string

    
    printf("\nEntrada de dados para o livro 2\n");

    printf("Id do livro: ");
    scanf("%d", &bPtr->codigo);

    printf("Titulo do livro: ");
    scanf(" %[^\n]%*c", &bPtr->titulo); // é utilizado essa nomenclatura quanto tem espaco na string

    printf("Autor do livro: ");
    scanf(" %[^\n]%*c", &bPtr->autor); // é utilizado essa nomenclatura quanto tem espaco na string
    
    
    printf("\n============================================\n");
    printf("Livros cadastrados:\n");

    printf("\nLivro 1: \n");
    printf("Codigo do livro 1: %d:\n", aPtr->codigo);
    printf("Titulo do livro 1: %s:\n", aPtr->titulo);
    printf("Autor do livro 1: %s:\n", aPtr->autor);

    printf("\nLivro 2: \n");
    printf("Codigo do livro 2: %d:\n", bPtr->codigo);
    printf("Titulo do livro 2: %s:\n", bPtr->titulo);
    printf("Autor do livro 2 %s:\n", bPtr->autor);

return 0;
}