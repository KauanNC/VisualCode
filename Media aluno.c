#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    float nota1 = 0;
    float nota2 = 0;
    float media;

    // pedindo dados ao usuário

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    // calcaulando a media

    media = (nota1 + nota2) / 2;

    system("cls")

       printf("Primeira nota:%.2f \n", nota1);
       printf("Segunda nota: %.2f \n", nota2);
       printf("Media do aluno: %.2f \n", media);
}