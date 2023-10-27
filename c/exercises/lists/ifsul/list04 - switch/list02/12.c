#include <stdio.h>

/*  
  ENTRADA
  a altura e o sexo de uma pessoa,
  
  construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:

  ● para homens: (72.7 * h) – 58
  ● para mulheres: (62.1 * h) – 44.7

  SAÍDA
*/

int main() {
  double altura;
  char sexo;

  printf("\nDigite sua altura (Ex.: 1.72): ");
  scanf("%lf", &altura);

  printf("\nDigite seu sexo (M / F): ");
  scanf(" %c", &sexo);

  if(sexo == 'M') 
    return printf("\n%.2lf kg", (72.7 * altura) - 58);

  if(sexo == 'F') 
    return printf("\n%.2lf kg", (62.1 * altura) - 44.7);

  return 0;
}