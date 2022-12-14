#include <stdio.h>

int main(){
    char  time1[30];
    char  time2[30];
    int v1, v2, sg1, sg2, g1, g2, c1, c2;

    printf("Digite o nome do time 1: ");
    scanf("%s", &time1);

    printf("Digite o nome do time 2: ");
    scanf("%s", &time2);

    printf("Digite o numero de vitorias do %s e do %s em sequencia: ", time1, time2);
    scanf("%d" "%d", &v1, &v2);

    printf("Digite o saldo de gols do %s e do %s em sequencia: ", time1, time2);
    scanf("%d" "%d", &sg1, &sg2);

    printf("Digite o numero de gols marcado do %s e do %s em sequencia: ", time1, time2);
    scanf("%d" "%d", &g1, &g2);

    printf("Digite o numero de cartoes amarelos do %s e do %s em sequencia: ", time1, time2);
    scanf("%d" "%d", &c1, &c2);
  
    if (v1 > v2)
    printf("O time do %s foi o campeao", time1);
    else if (v2 > v1)
    printf("O time do %s foi o campeao", time2);
    else if (sg1 > sg2)
    printf("O time do %s foi o campeao", time1);
    else if (sg2 > sg1)
    printf("O time do %s foi o campeao", time2);
    else if (g1 > g2)
    printf("O time do %s foi o campeao", time1);
    else if (g2 > g1)
    printf("O time do %s foi o campeao", time2);
    else if (c1 > c2)
    printf("O time do %s foi o campeao", time1);
    else if (c2 > c1)
    printf("O time do %s foi o campeao", time2);
    else 
    printf("Houve um empate entre o time %s e o time %s", time1, time2);

return 0;
}