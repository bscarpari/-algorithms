#include <math.h>
#include <stdio.h>

/*
  Fazer uma funcao que calcula a enesima potencia de uma variavel real x:
  f(x, n) = xn
*/

double calc_potency(double x, double n) {
  return pow(x, n);
}

int main() {
  double x, n;

  scanf("%lf %lf", &x, &n);

  printf("\n%.2lf", calc_potency(x, n));

  return 0;
}
