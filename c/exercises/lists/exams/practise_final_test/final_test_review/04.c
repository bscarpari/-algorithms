#include <stdio.h>

int main() {
  int m[5][5];

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (i == j)
        m[i][j] = 1;
      else
        m[i][j] = 0;

      printf("%i ", m[i][j]);
    }
    printf("\n");
  }

  return 0;
}