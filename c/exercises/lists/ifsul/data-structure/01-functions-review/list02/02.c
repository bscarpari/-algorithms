/* 
  Fa�a uma fun��o que recebe por par�metro o raio de um c�rculo
  e calcule e retorne o per�metro do c�rculo.
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

#define M_PI 3.14159;

float calc_circle_perimeter(float raio) {
	return (2 * M_PI) * raio; // per�metro = 2 * PI * raio 
}

int main() {
  float input;
  
  printf("\nDigite o raio: ");
  scanf("%f", &input);	
	
  float result = calc_circle_perimeter(input);
  
  printf("%.2f", result);
}

