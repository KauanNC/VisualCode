#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i ;
    int numero  ;
    int par = 0;
    int impar = 0;

 for (i = 1; i <= 5; i++)
    {
        printf("digite o %dº numero: \n", i);
        scanf ("%d", &numero);
        
numero % 2 == 0 ? par++ : impar++ ;
}

printf ("quantidade de impar: %d \n", impar);
printf ("quantidade de par: %d \n", par);
	
    getchar();
    return 0;
}
