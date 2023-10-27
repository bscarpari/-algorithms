#include <stdio.h>

int main() {
  int num;

  scanf("%i", &num);

  if(num < 0)
    return printf("Negativo");

  if(num > 0)
    return printf("Positivo");

  return 0;
}