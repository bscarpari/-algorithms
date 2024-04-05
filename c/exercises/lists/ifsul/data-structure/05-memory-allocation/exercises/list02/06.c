#include <stdio.h>
#include <stdlib.h>

/*
Declare um ponteiro para um array de inteiros e aloque memória 
para ele usando calloc().
*/

#define LENGTH 3

int main() {
  int *numbers;
  int i;

  numbers = (int *)calloc(3, sizeof(int));

  if (numbers == NULL) {
    printf("Memória insuficiente!\n");
    return 1;
  }

  for (i = 0; i < LENGTH; i++) {
    printf("Digite o %do número: ", i + 1);
    scanf("%d", &numbers[i]);
  }

  return 0;
}