#include <stdio.h>
#include <stdlib.h>

/*
Declare um ponteiro para um array de estruturas e aloque
memória para ele usando calloc()
*/

struct Car {
  char model[50];
  int year;
};

int main() {
  struct Car *cars;
  int i, n;

  printf("Digite o numero de carros: ");
  scanf("%d", &n);

  cars = (struct Car *)calloc(n, sizeof(struct Car));

  if (cars == NULL) {
    printf("Memoria insuficiente!\n");
    return 1;
  }

  for (i = 0; i < n; i++) {
    printf("Digite o modelo do carro %d: ", i + 1);
    scanf("%s", cars[i].model);

    printf("Digite o ano do carro %d: ", i + 1);
    scanf("%d", &cars[i].year);
  }

  printf("\nCarros cadastrados:\n");
  printf("-------------------\n");

  for (i = 0; i < n; i++) {
    printf("%d - Modelo: %s, Ano: %d\n", i + 1, cars[i].model, cars[i].year);
  }

  free(cars);
  return 0;
}