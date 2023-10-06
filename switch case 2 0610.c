#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

int dia;

printf ("Informe o dia desejado: ");
scanf ("%d", &dia);

switch (dia) {
case 1 :
    printf ("Domingo \n");
    printf ("Fim de semana");
    break;
case 2 :
    printf ("Segunda \n");
    printf ("Dia útil");
    break;
case 3 :
    printf ("Terça-feira \n");
    printf ("Dia útil");
    break;
case 4 :
    printf ("Quarta-feira \n");
    printf ("Dia útil");
    break;
case 5 :
    printf ("Quinta-feira\n");
    printf ("Dia útil");
    break;
case 6 :
    printf ("Sexta-feira \n");
    printf ("Dia útil");
    break;
case 7 :
    printf ("Sábado \n");
    printf ("Fim de semana");
    break;

default:
printf ("Dia informado é inválido");
    break;
}
    
    return 0;
}
