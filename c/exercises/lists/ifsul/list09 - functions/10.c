#include <stdio.h>

/*
  Faça  um  programa  que  tem  um  método  que  recebe  como
  parâmetro  um número e mostra a tabuada deste número.
*/
void multi_table(int number) {
  for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", number, i, number * i);
  }
}

int main() {
  int n;

  scanf("%i", &n);
  multi_table(n);

  return 0;
}