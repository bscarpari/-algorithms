#include <stdio.h>

/*
  Leia "n" valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.

  Entrada
  A entrada contem um array de "n" números inteiros.

  Saída
  Imprima a saída conforme foi especificado.
*/

int main() {
  int n, aux;

  printf("Digite o tamanho do array: ");
  scanf("%d", &n);

  int array[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  // bubble sort
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - (i + 1); j++) {
      // Swap
      if (array[j] > array[j + 1]) {
        aux = array[j];
        array[j] = array[j + 1];
        array[j + 1] = aux;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    printf("%d\n", array[i]);
  }

  return 0;
}