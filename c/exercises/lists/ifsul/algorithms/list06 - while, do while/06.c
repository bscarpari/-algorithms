#include <stdio.h>

/*
  Supondo que a população de um país A seja  da
  ordem de 80000 habitantes com uma taxa anual de
  crescimento de 3% e que a população de B seja 200000
  habitantes com uma taxa de crescimento de 1.5%.

  Faça  um  programa  que  calcule e escreva o número de
  anos necessários para que a população do país A
  ultrapasse ou iguale a população do país B, mantidas as
  taxas de crescimento.
*/

int main() {
  int years = 0, popA = 80000, popB = 200000;
  float crescA = 0.03, crescB = 0.015;

  do {
    popA += popA * crescA;
    popB += popB * crescB;
    years++;
  } while (popA <= popB);

  printf("%i anos", years);

  return 0;
}