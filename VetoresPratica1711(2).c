#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, numeros, numero[5], par = 0, impar = 0, positivo = 0, negativo = 0, maior = 0, menor = 9999, soma = 0, somaP = 0,
 somaI = 0;
  float media, mediaPar, mediaImpar;

  for (i = 0; i < 5; i++) {
    printf("Informe o %dº numero: \n ", i + 1);
    scanf("%d", &numero[i]);
    soma += numero[i];

    maior = maior > numero[i] ? maior : numero[i];
    menor = menor < numero[i] ? menor : numero[i];

    if (numero[i] % 2 == 0) {
      par++;
      mediaPar = soma / par;
      numero[i] < 0 ? negativo++ : (somaP == numero[i]);
      numero[i] > 0 ? positivo++ : (somaP == numero[i]);

    } else {
      impar++;
      mediaImpar = soma / impar;
      numero[i] < 0 ? negativo++ : (somaI == numero[i]);
      numero[i] > 0 ? positivo++ : (somaI == numero[i]);
    }
  }
  media = soma / 5;
  system("cls||clear");

  for (i = 4; i >= 0; i--) {
    printf("Numeros informados na ordem inversa %d: %d\n", i + 1, numero[i]);
  }
  printf("Quantidade de numeros pares: %d\n", par);
  printf("Quantidade de numeros impares: %d\n", impar);
  printf("Quantidade de numeros positivo: %d\n", positivo);
  printf("Quantidade de numeros negativo: %d\n", negativo);
  printf("Media dos numeros apresentados: %.1f\n", media);
  printf("Media dos numeros pares: %1.2f\n", mediaPar);
  printf("Media dos numeros impares: %1.2f\n", mediaImpar);
  printf("Maior numero: %d\n", maior);
  printf("Menor numero: %d\n", menor);

  return 0;
}