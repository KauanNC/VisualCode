#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
// {
    setlocale(LC_ALL, "portuguese");

    int i;
    int j;
    
    /* tabuada de 10 ate 1

    for ( i = 10; i >= 1; i--)
    {
      printf ("%d x 1 = %d \n", i, i*1);
    }    
    getchar ();
    return 0;

tabuada de 3,5 e 7

   /* for (j = 3; j <= 7; j += 2)
    {
        for (i = 1; i <= 10; i++)
        {
            printf ("%d x %d = %d \n", j, i, i * j);
        }
        printf("\n");
    }

    getchar();
    return 0;
}