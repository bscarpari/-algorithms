#include <stdio.h>
#include <math.h>

/*
  Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
    a) a área do triângulo retângulo que tem A por base e C por altura.
    b) a área do círculo de raio C. (pi = 3.14159)
    c) a área do trapézio que tem A e B por bases e C por altura.
    d) a área do quadrado que tem lado B.
    e) a área do retângulo que tem lados A e B.
*/

int main() {
  double A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO, PI = 3.14159;

  scanf("%lf %lf %lf", &A, &B, &C);

  /**
    - Triângulo (retângulo): A = (base x altura)/2 (A = b . h / 2)
    - Círculo: A = π x raio² (A = 3.14159 * r²)
    - Trapézio: A = ((Base maior + Base menor) x Altura)/2 (A = (B + b) . h / 2)
    - Quadrado: A = lado x lado, ou A = lado² (A = l²)
    - Retângulo: A = b . h 
  */
  TRIANGULO = (A * C) / 2;
  CIRCULO = PI * pow(C, 2);
  TRAPEZIO = ((A + B) * C) / 2;
  QUADRADO = pow(B, 2);
  RETANGULO = A * B;

  printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO);

  return 0;
}