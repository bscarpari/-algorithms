#include <stdio.h>

int main() {
  int pos = 0;
  float values[10], value;

  for (int i = 0; i < 10; i++) {
    scanf("%f", &values[i]);
  }

  printf("\nDigite o número a ser consultado: ");
  scanf("%f", &value);

  for (int i = 0; i < 10; i++) {
    if (values[i] == value) {
      printf("\n[%i] = %.2lf\n\n", i, value);
    } else if (values[i] != value && i == 9) {
      return printf("\nO número não está no vetor\n\n");
    }
  }

  return 0;
}