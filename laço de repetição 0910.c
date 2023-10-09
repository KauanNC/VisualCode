#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");
    
    int i;

// for ( i = 0; i <= 10; i++)
// {
// printf ("%d \n", i);
// }
// -> Contando de 1 em 1
//O i++ vai aumentar o valor de i, ou seja, o i++ vai servir como o cntaodor. 

   for ( i = 0; i <= 10; i=i+2) 
   {
    printf ("%d \n", i);
   }
  // -> vai contar de 2 em 2
    
 getchar (); //pausa no windows e no linux  
 return 0;
}
