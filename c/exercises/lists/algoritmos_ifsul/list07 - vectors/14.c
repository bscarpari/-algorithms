#include <stdio.h>

/*
  Faça um programa onde o usuário digita 10 valores que
  são armazenados em um vetor.

  Encontre após o menor valor informado e o mostre, bem
  como o número de vezes que esse valor apareceu no vetor
*/

#define LENGTH 10

int main() {
  int x[LENGTH] = {0}, minor = 0, ocurrency = 0;

  for (int i = 0; i < LENGTH; i++) {
    scanf("%d", &x[i]);

    if (i == 0)
      minor = x[i];

    if (x[i] < minor)
      minor = x[i];

    if (x[i] == minor)
      ocurrency++;
  }

  printf("\nMenor valor = %d", minor);
  printf("\nOcorrencias = %d\n", ocurrency);
  return 0;
}