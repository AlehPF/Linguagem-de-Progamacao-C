#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    unsigned int seed;
    int i, j, n, r;
    float denominador;
    float soma = 0;
    float media = 0;
    int um = 0;
    int dois = 0;
    int tres = 0;
    int quatro = 0;
    int cinco = 0;
    int seis = 0;
    int sete = 0;
    int oito = 0;
    int nove = 0;

    printf("Geracao de numeros aleatorios de 1 ate 9:\n");
        for(i = 1; i <= 100; i++)
        {
            n = 1 + rand() % 9;
            printf("\n%d", n);
            soma+= n;

                switch(n)
                {
                    case 1:
                        um++;
                        break;
                    case 2:
                        dois++;
                        break;
                    case 3:
                        tres++;
                        break;
                    case 4:
                        quatro++;
                        break;
                    case 5:
                        cinco++;
                        break;
                    case 6:
                        seis++;
                        break;
                    case 7:
                        sete++;
                        break;
                    case 8:
                        oito++;
                        break;
                    case 9:
                        nove++;
                        break;                                
                }
        }

    denominador = r * 9; //O 9 varia conforme o numero aleatorio
    media = soma / denominador;

    printf("\n\n");
    printf("O numero  1 Apareceu %d vezes!\n", um);
    printf("O numero  2 Apareceu %d vezes!\n", dois);    
    printf("O numero  3 Apareceu %d vezes!\n", tres);
    printf("O numero  4 Apareceu %d vezes!\n", quatro);
    printf("O numero  5 Apareceu %d vezes!\n", cinco);    
    printf("O numero  6 Apareceu %d vezes!\n", seis);
    printf("O numero  7 Apareceu %d vezes!\n", sete);
    printf("O numero  8 Apareceu %d vezes!\n", oito);    
    printf("O numero  9 Apareceu %d vezes!\n", nove);
    printf("A media dos numeros foi: %.2f!\n", media);

return 0;
}