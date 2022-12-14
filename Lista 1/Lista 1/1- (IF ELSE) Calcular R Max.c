 // ARQUIVO: (IF ELSE) Calcular R Max.c
   // TITLE: Calcular R Max
   // ENVIADO POR: Alisson Pereira Ferreira
   // Todo o código é meu, exceto quando creditado a outros.
   // PARA O CURSO:  Linguagem de Programação I
   // DATA DE VENCIMENTO: 14/10/2022
   //
   // PROPÓSITO:
   // Receber os valores de x, y e z do usuário.
   // Calcular o resultado r de acordo com a expressão max {x+y+z, x*y*z} + 3
   //
   // MÉTODO GERAL:
   // A lista de tarefas gerais é:
   // 1. Receber o X, Y e Z do usuário.
   // 2. Calcular o resultado R de acordo com a expressão max {x+y+z, x*y*z} + 3
   // 3. Verificar qual expressão tem o maior resultado.
   // 4. Imprima o maior resultado de R.
   //
   // FUNÇÕES:
   // Nenhuma
   //
   // ARQUIVOS INCLUÍDOS:
   // stdio.h
   //
   // ARQUIVOS DE DADOS:
   // Nenhum

#include <stdio.h>
int main(){
  int x, y, z, r1, r2; 
  
  printf("Digite o X: "); // recebe o valor de x
  scanf("%d", &x);

  printf("Digite o Y: "); // recebe o valor de y
  scanf("%d", &y);

  printf("Digite o Z: "); // recebe o valor de z
  scanf("%d", &z);

  r1 = x*y*z; // Calcula o r1
  r2 = x + y + z; // Calcula o r2

  if (r1 > r2)
  printf("O valor de R eh: %i",r1 + 3); // Imprime e adiciona 3 ao resultado de r
  else if (r2 > r1)
  printf("O valor de R eh: %i",r2 + 3); // Imprime e adiciona de 3 ao resultado de r

return 0;
}
   // Função main
   // CRÉDITO:
   // PROPÓSITO:
   // O usuário ira digitar o valor do X, Y e Z em sequência.
   // Esses valores serão armazenados em uma variavel inteira
   // chamados "x", "y" e "z".  Então será feito o calculo de r1(x*Y*z) e r2 (x+y+z),
   // após calculado r1 e r2, será testado por meio de uma estrutura IF/ELSE se r1 > r2, r2 > r1 ou r1 = r2.
   // Então será imprimido na tela o maior R e somado com 3.
   //
   //
   // PARÂMETROS:
   // ------------------------------------------------ ----------
   // x para armazenar o valor do x digitado pelo usuário.
   // y para armazenar o valor do x digitado pelo usuário.
   // z para armazenar o valor do x digitado pelo usuário.
   // 
   // VALOR DE RETORNO:
   // ------------------------------------------------ ----------
   // r1 para armazenar o valor da expressão calculada.
   // r2 para armazenar o valor da expressão calculada.
   //
   // CHAMA PARA: nenhum
   //
   // CHAMADO DE: 
   //
   // MÉTODO: O seguinte é um pseudocódigo que descreve como a função funciona.
   // 1. Solicita ao usuário os dados necessarios.
   // 2. Calcula a expressão r1 e r2.
   // 3.  Verifica se r1 é maior que r2 ou se r2 é maior que r1.
   // 4.  Imprime na tela o maior r somando com 3.
   // 5. Encerra o programa.


      // EXEMPLO DE ENTRADA E SAÍDA   
   //
   // Para cada variavel ensira um valor:
   // Digite o X:
   // Digite o y:
   // Digite o z:
   //
   // Valor de x -- 10
   // Valor de Y -- 20
   // Valor de Z -- 30
   //
   // O valor de R eh: 6003