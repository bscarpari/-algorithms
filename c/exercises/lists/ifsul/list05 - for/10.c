#include <stdio.h>

/*
  Faça um algoritmo que leia 10 números inteiros e
  identifique o maior e o menor.
*/

int main() {
  int num, min, max;

  for (int i = 0; i < 10; i++) {
    scanf("%d", &num);

    if(i == 0) {
      max = num;
      min = num;
    }

    if(num > max)
      max = num;

    if(num < min)
      min = num;
  }

  printf("\nMin = %d", min);
  printf("\nMax = %d", max);

  return 0;
}