#include <stdio.h>

/*
  No   supermercado,   as   maçãs   estão   custando   R$0,80   se   forem
  compradas  menos  do  que  uma  dúzia  e  R$0,50  se  forem  compradas mais
  de uma dúzia
*/

int main() {
  float appleUnitPrice = 0.8, discount = 0.3;
  int quantity;

  printf("\nInforme a quantidade de maçãs compradas: ");
  scanf("%d", &quantity);

  if (quantity < 12) {
    printf("\nO valor a ser pago é de R$%.2f\n", appleUnitPrice * quantity);
  } else {
    printf("\nO valor a ser pago é de R$%.2f\n", (appleUnitPrice - discount) * quantity);
  }

  return 0;
}