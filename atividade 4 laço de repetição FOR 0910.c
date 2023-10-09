#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int numero;

    printf ("informe o numero que deseja saber a tabuada: ");
    scanf ("%d", &numero);

    for ( i = 1; i <= 10; i++)
    {
     printf ("%d x %d = %d \n ", i, numero, i*numero);
    }
    
    getchar ();
    return 0;
}
    