#include <stdio.h>

  /*
    Fazer  uma  rotina  em  "C"  que  recebe  um  vetor  de  números  inteiros
    como parâmetro onde todos os valores exceto o último são positivos e devolve:  -
    a  média  dos  valores  do  vetor;  -  o  menor  valor  do  vetor  (sem
    considerar  o último) - o maior valor do vetor
  */

void makeRoutine(int vet[], int size) {
  int sum = 0, min = vet[0], max = vet[0];

  for (int i = 0; i < size - 1; i++) {
    sum += vet[i];

    if (vet[i] < min) min = vet[i];
    if (vet[i] > max) max = vet[i];
  }

  printf("Média: %i\n", sum / (size - 1));
  printf("Menor: %i\n", min);
  printf("Maior: %i\n", max);
}

int main() {
  int vet[100];

  for (int i = 0; i < 100; i++) {
    vet[i] = i;
  }

  makeRoutine(vet, 100);

  return 0;
}