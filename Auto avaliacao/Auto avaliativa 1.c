/* 
0. O que e uma funcao? Qual é o tempo de vida e a visibilidade de uma variavel que foi declarada dentro de uma funcao?
R: Uma funcao é um pedaço de codigo que foi compactado, e executa um comando especifico, pode ser chamada varias vezes.
Uma variavel que é criada dentro da funcao fica disponivel apenas dentro dela e é excluida ao final da execucao desta.

1.	Como funciona o mecanismo de funções em C e em quais situações o seu uso é indicado?
R: Visando uma melhor legibilidade dos códigos sugiram as funções, visto que, eles são comandos agrupados em um bloco, 
este bloco recebe um nome e pode ser chamado dentro da função main ou de outras funções. 
O uso das funções ajuda a diminuir o código, logo, ajudando na compreensão, ajuda no desenvolvimento, na manutenção e no reaproveitamento do código.

2.	O que é uma função recursiva?
R: A função recursiva é uma função que contém uma ou mais chamadas dela mesma dentro do próprio corpo. Com isso, dividimos problemas em subproblemas menores, este por sua vez, tem que ser do mesmo tipo, 
para o final da função obter a solução do problema. Basicamente a função recursiva sabe apenas resolver o básico, logo enquanto os dados não corresponderam ao esperado a função chamará ela mesma.

3.	Como funciona alocação dinâmica de memória e o que é uma variável do tipo ponteiro?
R: A alocação dinâmica é muito útil, pois nos permite declarar estruturas sem a necessidade de definir seu tamanho, quando a estrutura ou variável for utilizada, 
o programa reserva áreas na memória do sistema operacional, logo, a memória é alocada apenas quando o programa necessita, além de poder aumentar ou diminuir o tamanho da alocação.  
Quando o programa não utilizar ou ser encerrado, a memória é liberada.
Ponteiros, são variáveis que armazenam o endereço de memória de outras variáveis, este por sua vez, podem ser int, float, double, struct e etc. 
Ponteiros podem ser acessados em diferentes partes do sistema, pois armazenam em endereços de memória de outras variáveis.*/

