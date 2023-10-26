#include <stdio.h>

/*

  Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário
  de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário de cada 
  peça 2. Após, calcule e mostre o valor a ser pago.
*/

int main() {
  int codigo1, codigo2, quantidade1, quantidade2;
  double valor1, valor2, total;

  scanf("%d %d %lf", &codigo1, &quantidade1, &valor1);
  scanf("%d %d %lf", &codigo2, &quantidade2, &valor2);

  total = (quantidade1 * valor1) + (quantidade2 * valor2);

  printf("VALOR A PAGAR: R$ %.2lf\n", total);

  return 0;
}