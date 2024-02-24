#include <stdio.h>

/*
  Faça um programa que lê 10 valores de um vetor e
  apresenta a média aritmética desses valores
*/

#define LENGTH 10

int main() {
  int x[LENGTH] = {0}, sum = 0;

  for (int i = 0; i < LENGTH; i++) {
    scanf("%d", &x[i]);
    sum += x[i];
  }

  // printf("\nSoma = %i", sum);
  printf("\nMedia aritmetica = %d\n", sum / LENGTH);
  return 0;
}