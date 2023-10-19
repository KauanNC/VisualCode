#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"portuguese");
    
    int i;
    int soma = 0;
    int contador = 0;
    float media;

    do
    {
        printf ("informe um numero:");
        scanf ("%d", &i);
        
        if (i > 0) {
            soma += i;
            contador ++;
        }
    } while (i > 0);
      media = soma / contador;  
    
    printf ("Média: %.1f \n", media);
    

    return 0;
}