#include <stdio.h>

int main() {
  int num01, num02, maior;

  scanf("%i %i", &num01, &num02);

  if(num01 > num02)
    maior = num01;

  if(num02 > num01)
    maior = num02;

  printf("Maior: %i\n", maior);

  return 0;
}