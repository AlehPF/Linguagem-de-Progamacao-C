#include  <stdio.h>

int  main(){
    int x = 1;

    do
    {
      printf ( "Digite um numero ou 0 para parar: ");
      scanf ("%d" , &x);     
      printf ( "O quadrado do numero eh: %d\n" , x*x);
    }
     while (x != 0 );

return 0;
}