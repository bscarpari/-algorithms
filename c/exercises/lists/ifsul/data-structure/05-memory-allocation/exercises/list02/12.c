#include <stdio.h>
#include <stdlib.h>

/*
Declare uma variável inteira e aloque memória para um ponteiro
para ela usando realloc() para liberar a memória alocada
*/

int main() {
  int *number;

  number = (int *)malloc(sizeof(int));

  if (number == NULL) {
    printf("Memoria insuficiente!\n");
    return 1;
  }

  printf("Digite um numero: ");
  scanf("%d", number);

  printf("Numero digitado: %d\n", *number);

  number = (int *)realloc(number, 0);

  if (number == NULL) {
    printf("Memoria liberada!\n");
  }
  
  return 0;
}