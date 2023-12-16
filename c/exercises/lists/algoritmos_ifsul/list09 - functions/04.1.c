#include <stdio.h>
#include <stdlib.h>

/*
 Fazer uma rotina em "C" que recebe um vetor de numeros inteiros como
 parametro onde todos os valores exceto o ultimo sao positivos e devolve:

 - a media dos valores do vetor;
 - o menor valor do vetor (sem considerar o ultimo)
 - o maior valor do vetor
*/

void makeRotine(int vet[], int length) {
  int sum = 0;
  int min = vet[0];
  int max = vet[0];

  for (int i = 0; i < length - 1; i++) {
    sum += vet[i];

    if (vet[i] < min)
      min = vet[i];

    if (vet[i] > max)
      max = vet[i];

    float avg = (float)sum / (length - 1);

    // se for o ultimo elemento do array, imprime os valores.
    if (i == length - 2) {
      printf("Average: %.2f\n", avg);
      printf("Minimum value: %d\n", min);
      printf("Maximum value: %d\n", max);
    }
  }
}

int main() {
  int length;
  printf("Enter the length of the array: ");
  scanf("%d", &length);

  /*
    Declaração de um array de inteiros com base no tamanho fornecido pelo usuário.
    Para isso, é necessário alocar memória para o array com base no tamanho fornecido.

    Para alocar memória, é necessário utilizar a função malloc() da biblioteca stdlib.h.
    Para alocar memória para um array, é necessário multiplicar o tamanho do tipo de dado
    do array pelo tamanho do array.
  */
  int* vet = (int*)malloc(length * sizeof(int));

  printf("Enter the values of the array:\n");
  for (int i = 0; i < length; i++) {
    scanf("%d", &vet[i]);
  }

  makeRotine(vet, length);  // Chama a função makeRotine passando o array e seu tamanho.

  // Libera a memória alocada para o array.
  free(vet);
  return 0;
}
