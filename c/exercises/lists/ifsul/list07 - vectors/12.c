#include <stdio.h>

/*
  Crie um algoritmo que armazena números em dois vetores de inteiros de
  cinco elementos cada.

  Mostre o resultado da soma dos dois vetores em cada posição comum
*/

#define LENGTH 5

int main() {
  int x[LENGTH] = {0}, y[LENGTH] = {0}, z[LENGTH] = {0};

  for (int i = 0; i < LENGTH; i++)
    scanf("%d", &x[i]);

  for (int i = 0; i < LENGTH; i++)
    scanf("%d", &y[i]);

  for (int i = 0; i < LENGTH; i++) {
    z[i] += x[i] * y[i];
    printf("%d ", z[i]);
  }

  return 0;
}