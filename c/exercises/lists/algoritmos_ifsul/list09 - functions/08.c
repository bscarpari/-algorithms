#include <stdio.h>

/*
  Fazer  uma  função  que  calcula  o  fatorial  de  um  número.

  O fatorial de um número é a multiplicação desse número
  por todos os seus antecessores maiores que zero.

  EX. 5! = 5*4*3*2*1
*/

double factorial(double n) {
  double result = 1;

  for (int i = n; i > 0; i--) {
    result *= i;
  }

  return result;
}

int main() {
  int n;

  scanf("%i", &n);

  printf("Output: %d", factorial(n));

  return 0;
}
