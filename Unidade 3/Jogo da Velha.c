#include <stdio.h>
#include <stdlib.h>

char matriz[3][3]; 
int l, c; 

void inicio(); //Funcao para atribuir ' ' "espacos" a matriz;
void mostrar(); //Funcao para imprimir a matriz na tela;
int ganhouLinha(char c); //Funcao para verificar se o usuario ganhou por alguma linha;
int ganhouColuna(char l); //Funcao para verificar se o usuario ganhou por alguma coluna;
int ganhouDiagonal(char c); //Funcao para verificar se o usuario ganhou por alguma diagonal;
int verificacao(int l, int c); //Verifica se a variavel [l][c] ainda esta disponivel na matriz;
void numeroValido(char g); //Funcao que permite o jogador atribuir variaveis a matriz;
int deuVelha(); //Verifica se houve um empate;
void jogo(); //Verifica e printa se algum jogador ganhou ou empatou;

int main(){
        
    inicio();
    jogo();

return 0;
}

void inicio()
{
    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 3; c++)
        {
            matriz[l][c] = ' '; //Atribui espacos ' ' a todas [l][c] da matriz
        }    
    }
}

void mostrar() //Printa na tela a matriz
{
    printf("\t\t\t       JOGO DA VELHA!\n\n");
    printf("\t\t\t COLUNA 0 COLUNA 1 COLUNA 2\n\n\n");

    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 3; c++)
        {
            if (c == 0)
                printf("\t\t\t\t");
                printf(" %c ", matriz[l][c]);
            if (c < 2)
                printf("|");
            if (c == 2)
                printf("\t  LINHA %d", l);
        }
        printf("\n");
        if (l < 2)
            printf("\t\t\t\t----------- \n");
    }
printf("\n");
}

int ganhouLinha(char l)
{
    int ganhou, gg = 0;

    for (int i = 0; i < 3; i++)
    {
        if (matriz[i][0] == l && matriz[i][1] == l && matriz[i][2] == l) //Verifica se o usuario ganhou por alguma linha
        {
            gg = 1;
        }
    }

    if (gg == 1 || gg > 0)
    {
        ganhou = 1; //Retorna 1 caso algum jogador ganhou, depois vai ser lida na funcao jogo
    return ganhou;
    }
    else 
    {
        ganhou = 0; //Retorna 0 caso algum jogador ganhou, depois vai ser lida na funcao jogo
    return ganhou; 
    }
}

int ganhouColuna(char c)
{
    int ganhou, gg = 0;

    for (int i = 0; i < 3; i++)
    {
        if (matriz[0][i] == c && matriz[1][i] == c && matriz[2][i] == c) //Verifica se o usuario ganhou por alguma coluna
        {
            gg = 1;
        }
    }

    if (gg == 1 || gg > 0)
    {
        ganhou = 1; //Retorna 1 caso algum jogador ganhou, vai ser lida na funcao jogo
    return ganhou; 
    }
    else 
    {
        ganhou = 0; 
    return ganhou; //Retorna 0 caso algum jogador ganhou, depois vai ser lida na funcao jogo
    }
}

int ganhouDiagonal(char c)
{
    if (matriz[0][2] == c && matriz[1][1] == c && matriz[2][0] == c || matriz[0][0] == c && matriz[1][1] == c && matriz[2][2] == c) //Verifica se o usuario ganhou por alguma diagonal
    {
        return 1; //Retorna 1 caso algum jogador ganhou, vai ser lida na funcao jogo
    }
    else
    {
        return 0; //Retorna 0 caso algum jogador ganhou, depois vai ser lida na funcao jogo
    }
}

int verificacao(int l, int c)
{ 
    if (l >= 0 && l < 3 && c >= 0 && c < 3 && matriz[l][c] == ' ') //Verifica se ainda a espacos vazios na matriz
    {
        return 1; ///Retorna 1 caso haja espacos vazios na matriz
    }
    else
    {
        return 0; //Retorna 0 caso a matriz ja esteja totalmente preenchida
    }
}

void numeroValido(char g)
{ 
    printf("\nDigite a linha de 0 a 2: "); //O jogador digita a linha desejada para fazer sua jogada
    scanf("%d", &l); 
    printf("Digite a coluna de 0 a 2: "); //O jogador digita a coluna desejada para fazer sua jogada
    scanf("%d", &c); 

    while (verificacao(l, c) == 0) //Caso o jogador digite uma coordenada invalida, o jogo pedira para ele digitar novamente
    {
        printf("\nValor digitado invalido!\n");
        printf("Digite a linha de 0 a 2: ");
        scanf("%d", &l); 
        printf("Digite a coluna de 0 a 2: ");
        scanf("%d", &c); 
    }

    matriz[l][c] = g; //Atribui a matriz o caractarer X ou 0 dependendo do jogador
    system("cls"); //Limpa a tela após a jogada
}

int deuVelha() //Verfica se houve empate entre os jogadores
{
    int cont = 0;

    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 3; c++)
        {
            if (matriz[l][c] == ' ')
            cont++;
        }
    }
return cont;
}

void jogo() //Verifica e printa na tela se algum jogador ganhou ou empatou
{
    int cont = 1;
    int vX = 0, v0 = 0;
    char jogadorX = 'X', jogador0 = '0';

    do
    {
        mostrar();
        if (cont == 1)
        {
            numeroValido(jogadorX); //Atribui o caracter X a funcao numeroValido
            cont++; //Atribui +1 a cont para poder passar para o laco else
            vX+= ganhouLinha(jogadorX); //Verifica se algum jogador ganhou por linhas
            vX+= ganhouColuna(jogadorX); //Verifica se algum jogador ganhou por colunas
            vX+= ganhouDiagonal(jogadorX); //Verifica se algum jogador ganhou por diagonais
        }
        else
        {
            numeroValido(jogador0); //Atribui o caracter 0 a funcao numeroValido
            cont = 1; //Atribui cont = 1 para a funcao rodar em looping e voltar para o jogador X, até algum jogador ganhar ou acontecer um empate
            v0+= ganhouLinha(jogador0); //Verifica se algum jogador ganhou por linhas
            v0+= ganhouColuna(jogador0); //Verifica se algum jogador ganhou por colunas
            v0+= ganhouDiagonal(jogador0); //Verifica se algum jogador ganhou por diagonais
        }
    } while (vX == 0 && v0 == 0 && deuVelha() > 0); //Caso algum jogador venca ou empate o jogo se encerra

    mostrar(); //Mostra a matriz final na tela 

    if (vX == 1)
        printf("\nO jogador X ganhou!!!\n");
    else if (v0 == 1)
        printf("\nO jogador 0 ganhou!!!\n");
    else
        printf("\nDEU VELHA!!!\n");
}