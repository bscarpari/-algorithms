#include <stdio.h>

int primo(int num) {
  int i, cont = 0;

  for (i = 1; i <= num; i++) {
    if (num % i == 0) cont++;
  }

  if (cont == 2) return 1;
  return 0;
}

int main() {
  int num;

  printf("Número: ");
  scanf("%i", &num);

  if (primo(num)) {
    printf("\n%i é primo\n\n\n", num);
  } else {
    printf("\n%i não é primo\n\n\n", num);
  }

  return 0;
}