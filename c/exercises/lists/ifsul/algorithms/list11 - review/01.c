#include <stdio.h>

int main() {
  int num, i = 0, max = 0, min = 0, sum = 0;

  do {
    printf("Número %i: ", i + 1);
    scanf("%i", &num);

    // Lógica de inicialização
    if (i == 0) {
      max = num;
      min = num;
    }

    if (num < min && num != 0) min = num;

    if (num > max) max = num;

    sum += num;

    i++;
  } while (num != 0);

  printf("\nMAX = %i", max);
  printf("\nMIN = %i", min);
  printf("\nSUM = %i\n\n\n", sum);

  return 0;
}