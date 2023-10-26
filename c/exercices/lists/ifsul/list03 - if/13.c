#include <stdio.h>

int main() {
  int velocity;

  scanf("%i", &velocity);

  if(velocity <= 60)
    return printf("\nNao ha multa");
  if(velocity > 60 && velocity <= 80)
    return printf("\nMulta: R$180,00");
  if(velocity > 80)
    return printf("\nMulta: R$360,00");

  return 0;
}