/* 
  Faça uma função que recebe por parâmetro o raio de um círculo
  e calcule e retorne a área do círculo.
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

#define M_PI 3.14159;

float calc_circle_area(float raio) {
	return M_PI * pow(raio, 2); 
}

int main() {
  float input;
  
  printf("\nDigite o raio: ");
  scanf("%f", &input);	
	
  float result = calc_circle_area(input);
  
  printf("%.2f", result);
}

