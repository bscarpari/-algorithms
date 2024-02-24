#include <stdio.h>
#include <string.h>

int main() {
  char input[15], i, length;

  gets(input);

  length = strlen(input);

  /*
          teste de mesa:
          i = 0 | j = 0
          i = 1 | j = 0 | j = 1
          i = 2 | j = 0 | j = 1 | j = 2
          i = 3 | j = 0 | j = 1 | j = 2 | j = 3
  */
  for (int i = 0; i < length; i++) {
    printf("i = %i ", i);
    for (int j = 0; j <= i; j++) {
      printf("%c ", input[j]);
    }
    printf("\n");
  }

  return 0;
}
