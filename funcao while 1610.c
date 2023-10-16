#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
/* {
    setlocale (LC_ALL, "portuguese");

    float nota;

do {
    printf ("Digite a nota do aluno: ");
    scanf ("%f", &nota);
} while (nota < 0 || nota > 10);
printf ("digite a nota do aluno: ");
scanf ("%f", &nota);


return 0;
}
    printf ("Digite a nota do aluno: ");
    scanf ("%f", &nota);

    while (nota < 0 || nota > 10) {
        printf ("digite a nota do aluno: ");
        scanf ("%f",&nota );
    }
    printf ("Nota: %.1f \n", nota);

    return 0;
}