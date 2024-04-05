#include <stdio.h>
#include <stdlib.h>

/*
Declare um ponteiro para um array de caracteres e
aloque memória para ele usando malloc()
*/

int main() {
  char *c;
  int size;

  printf("Digite o tamanho da string: ");
  scanf("%d", &size);

  c = (char *)malloc(size * sizeof(char));

  if (c == NULL) {
    printf("Memória insuficiente!\n");
    return 1;
  }

  // Limpar o buffer do teclado
  while (getchar() != '\n');

  printf("Digite uma string: ");
  fgets(c, size, stdin);

  printf("String lida: %s\n", c);

  return 0;
}