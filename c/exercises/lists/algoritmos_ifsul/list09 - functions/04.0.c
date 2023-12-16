#include <stdio.h>

/*
 Fazer uma rotina em "C" que recebe um vetor de numeros inteiros como
 parametro onde todos os valores exceto o ultimo sao positivos e devolve:

 - a media dos valores do vetor;
 - o menor valor do vetor (sem considerar o ultimo)
 - o maior valor do vetor
*/

void makeRoutine(int vet[], int length) {
  int sum = 0;
  int minor = vet[0];
  int greater = vet[0];
  float media;

  for (int i = 0; i < length - 1; i++) {
    sum += vet[i];

    if (vet[i] < minor)
      minor = vet[i];

    if (vet[i] > greater)
      greater = vet[i];
  }

  media = sum / (float)(length - 1);

  printf("\nSum = %i", sum);
  printf("\nMedia = %.2f", media);
  printf("\nMinor = %i", minor);
  printf("\nGreater = %i", greater);
}

int main() {
  int length;
  int vet[] = {1, 2, 3, 4, 5};

  length = sizeof(vet) / sizeof(int);

  makeRoutine(vet, length);

  return 0;
}