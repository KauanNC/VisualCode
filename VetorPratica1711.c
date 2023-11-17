#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, numero[6], par = 0;

  for (i = 0; i < 6; i++) {
      printf("Informe o %dº numero: \n ", i + 1);
      scanf("%d", &numero[i]);

    } while (numero[i] % 2 == 1 || numero[i] <= 0){
        printf("Numero invalido!\n Informe um valor par e positivo: \n");
    scanf("%d", &numero[i]);
  }

  for (i = 5; i >= 0; i--) {
  printf ("Numeros informados inversamente: %d\n", numero[i]);
  }
  return 0;
}
