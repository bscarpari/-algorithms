#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia do usuário o tamanho de um vetor a ser lido, faça a
alocação dinâmica de memória, leia do usuário seus valores inteiros e imprima
o vetor lido.
*/

int main() {
  int i, n;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);

  int *v = (int *)malloc(n * sizeof(int));

  for (i = 0; i < n; i++) {
    printf("Digite o valor da posicao %d: ", i);
    scanf("%d", &v[i]);
  }

  printf("Vetor lido: ");
  for (i = 0; i < n; i++) {
    if (i == 0) {
        printf("[%d", v[i]);
    } else if (i == n - 1) {
        printf(", %d]", v[i]);
    } else {
        printf(", %d", v[i]);
    }
  }

  free(v);
  return 0;
}