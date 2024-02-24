/* 
  Faça uma função que recebe por parâmetro o raio de um círculo
  e calcule e retorne o perímetro do círculo.
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

#define M_PI 3.14159;

float calc_circle_perimeter(float raio) {
	return (2 * M_PI) * raio; // perímetro = 2 * PI * raio 
}

int main() {
  float input;
  
  printf("\nDigite o raio: ");
  scanf("%f", &input);	
	
  float result = calc_circle_perimeter(input);
  
  printf("%.2f", result);
}

