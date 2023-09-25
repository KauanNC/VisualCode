#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade = 20;    // int = numero inteiro
    float peso = 80.2; // float = numero real
    char sexo = 'F';  //  char = apenas um caracter
    char nome [250] = "Julia"; // char nome_variavel [quantidade de caracteres]

   //printf("Idade: %d anos, meu peso: %.2f", idade, peso );

    printf("\nIdade: %d ", idade);  //%d = decimal, %i = inteiro (pode ser "d" ou "i"); // '\n' = nova linha, referente ao "escreval"
    printf("\nPeso %2f  ", peso);   // O '\n' tambem pode ser colocado no inicio, mas tem que estar obrigatoriamente dentro das aspas 
    printf("\nSexo: %c  ", sexo);
    printf("\nNome: %s  ", nome);
    
    return 0;
} 
