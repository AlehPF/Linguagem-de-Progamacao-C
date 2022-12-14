/*Escreva um programa que permita armazenar dados sobre o estoque de vinhos
de uma adega que tem seguintes funcionalidades:
• Mostrar um menu para usuário:
◦ 1 para vinho tinto
◦ 2 para vinho branco
◦ 3 para vinho rosê
• Entrada de dados indicando a quantidade e o tipo de vinho para incluir no
estoque
• Entrada de dados indicando a quantidade e o tipo de vinho para retirar do
estoque
• Demostrar a situação no estoque especificando a quantidade de cada tipo
de vinho e a porcentagem da cada tipo sobre o total geral de vinhos.
*/

#include <stdio.h>
int main(){
        int v; 
        int vt=0;
        int vb=0;
        int vr=0;

        while (v != 0 )
        {
        printf("\nEscolha o que fazer:" 
                "\n0- Encerrer o programa"
                "\n1- Adicionar Vinho Tinto"
                "\n2- Adicionar Vinho Branco"
                "\n3- Adicionar Vinho Rose"
                "\n4- Retirar o Vinho Tinto"
                "\n5- Retirar o Vinho Branco"
                "\n6- Retirar o Vinho Rose\n");
        scanf("%d", &v);

        if (v < 0 || v > 6)
        printf("\nDigite um numero valido!\n");

                switch(v)
                {
                case 1:
                vt = vt + 1;
                printf("Atualmente seu estoque de Vinho Tinto eh de %d unidades: \n", vt);
                printf("Atualmente seu estoque de Vinho Branco eh de %d unidades: \n", vb);
                printf("Atualmente seu estoque de vinho Rose eh de %d unidades: \n", vr);
                break;

                case 2:
                vb = vb + 1;
                printf("Atualmente seu estoque de Vinho Tinto eh de %d unidades: \n", vt);
                printf("Atualmente seu estoque de Vinho Branco eh de %d unidades: \n", vb);
                printf("Atualmente seu estoque de vinho Rose eh de %d unidades: \n", vr); 
                break;   

                case 3:
                vr = vr + 1;
                printf("Atualmente seu estoque de Vinho Tinto eh de %d unidades: \n", vt);
                printf("Atualmente seu estoque de Vinho Branco eh de %d unidades: \n", vb);
                printf("Atualmente seu estoque de vinho Rose eh de %d unidades: \n", vr); 
                break;

                case 4:
                vt = vt - 1;
                printf("Atualmente seu estoque de Vinho Tinto eh de %d unidades: \n", vt);
                printf("Atualmente seu estoque de Vinho Branco eh de %d unidades: \n", vb);
                printf("Atualmente seu estoque de vinho Rose eh de %d unidades: \n", vr);   
                break;

                case 5:
                vb = vb - 1;
                printf("Atualmente seu estoque de Vinho Tinto eh de %d unidades: \n", vt);
                printf("Atualmente seu estoque de Vinho Branco eh de %d unidades: \n", vb);
                printf("Atualmente seu estoque de vinho Rose eh de %d unidades: \n", vr);  
                break;

                case 6:
                vr = vr - 1;
                printf("Atualmente seu estoque de Vinho Tinto eh de %d unidades: \n", vt);
                printf("Atualmente seu estoque de Vinho Branco eh de %d unidades: \n", vb);
                printf("Atualmente seu estoque de vinho Rose eh de %d unidades: \n", vr);
                break;
                }
        }

return 0;
}