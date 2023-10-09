#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;

    /*  primeira forma

   for ( i = 2; i <= 20 ; i+=2)
   
    {
        printf("%d \n", i);
    }
 
    segunda forma que será a mais utilizada 

    for (i=1 ; i <= 20 ; i++){
        if (i%2==0){
        printf ("%d \n", i);
    }
    }

    return 0;
}