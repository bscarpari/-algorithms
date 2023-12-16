#include <stdio.h>

int main() {
  int salary, prestationValue;

  scanf("%i %i", &salary, &prestationValue);

  if(prestationValue > salary + (0.2 * salary))
    printf("\nEmprestimo nao pode ser concedido !");
  else
    printf("\nEmprestimo concedido");

  return 0;
}