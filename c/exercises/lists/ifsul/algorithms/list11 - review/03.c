#include <stdio.h>

int verifyPar(int n) {
  if (n % 2 == 0)
    return n;
  else
    return 0;
}

int main() {
  int vet[100];

  for (int i = 0; i < 100; i++) {
    vet[i] = verifyPar(i);
  }

  for (int i = 0; i < 100; i++) {
    if (vet[i] != 0) printf("%i\n", vet[i]);
  }

  printf("\n\n\n");

  return 0;
}