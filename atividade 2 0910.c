#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char sexo;
    float altura;
    float pesoN;
    float pesoI;

    printf ("Codigo dos generos: \n M - masculino \n F - feminino \n");

    printf("Informe o sexo: ");
    scanf ("%c", &sexo);

    printf ("Informe a sua altura em metros: ");
    scanf  ("%f", &altura);

    printf ("Informe o seu peso:");
    scanf ("%f", &pesoN);


    switch (sexo)
    {
    case 'M' :
     pesoI = (pesoN * altura) - 58;
     printf ("Seu peso ideal e: %.2f \n", pesoI);
        break;
    
    case 'F' :
    pesoI = (pesoN * altura) - 44.7;
    printf ("seu peso ideal e: %.2f \n ", pesoI);
    break;

    default:
    printf ("Opcao de sexo e invalida! \n");
    }
    printf ("Sexo informado: %d \n", sexo);
    printf ("Altura informada: %.2f \n", altura);
    printf ("Peso informado: .2f \n", pesoN);
    printf ("Peso ideal: %.2f \n", pesoI);
    
    return 0;
}