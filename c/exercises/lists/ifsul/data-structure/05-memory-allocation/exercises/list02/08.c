#include <stdio.h>
#include <stdlib.h>

/*
Declare um ponteiro para uma estrutura
e aloque memória para ela usando `malloc()`
*/

struct point {
  int x, y;
};

int main() {
  struct point *p;

  p = (struct point *)malloc(sizeof(struct point));

  if (p == NULL) {
    printf("Memoria insuficiente!\n");
    return 1;
  }

  printf("Digite o valor de x: ");
  scanf("%d", &p->x);

  printf("Digite o valor de y: ");
  scanf("%d", &p->y);

  printf("x = %d, y = %d\n", p->x, p->y);
  return 0;
}