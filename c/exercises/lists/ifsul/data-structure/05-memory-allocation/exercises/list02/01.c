#include <stdio.h>
#include <stdlib.h>

/*
Declare um ponteiro para um inteiro e aloque
memória para ele usando malloc()
*/

int main() {
  int *p = (int *)malloc(sizeof(int));

  *p = 10;

  printf("Valor de p: %d\n", *p);

  free(p);
  return 0;
}