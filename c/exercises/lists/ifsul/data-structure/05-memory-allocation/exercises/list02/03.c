#include <stdio.h>
#include <stdlib.h>

/*
Declare um ponteiro para um float e aloque memória para ele usando 
calloc()
*/

int main() {
  float *p = (float *)calloc(1, sizeof(float));

  if (p == NULL) {
    printf("Erro na alocação de memória\n");
    return 1;
  }

  *p = 3.14;

  printf("Endereço de p: %p\n", p);
  return 0;
}