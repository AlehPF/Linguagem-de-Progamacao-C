#include <stdio.h>
#include <time.h>

int random();
void dicas(int numero, int senha, int tentativas);

int main(){
    int continuar = 1,
        senha,
        tentativas,
        numero;

    do
    {
        printf("Sorteando numero entre 1 e 1000...\n");
        senha = random();

        printf("Comecou! Tente adivinhar o numero!\n\n");
        tentativas = 0;

        do
        {
            tentativas++;
            printf("Tentativa %d: ", tentativas);
            scanf("%d", &numero);
            dicas(numero,senha, tentativas);
        }
        while( numero != senha);

        printf("Digite 0 para sair, ou qualquer outro numero para continuar: ");
        scanf("%d", &continuar);
    }
    while(continuar);

}

int random(){
    srand( (unsigned)time(NULL) );

    return (1 + rand()%1000);
}

void dicas(int numero, int senha, int tentativas){
    if(numero > senha)
                printf("O numero sorteado e menor que %d\n\n", numero);
    else
        if(numero < senha)
            printf("O numero sorteado e maior que %d\n\n", numero);
        else
            printf("Parabens! Voce acertou o numero em %d tentativas!\n\n", tentativas);
}