/* 
  Implemente uma função que receba três números reais, ’a’, ’b’ e ’c’,
  que são os coeficientes de uma equação do segundo grau e retorne 
  o valor do delta, que é dado por ’b² - 4ac’.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

double calc_bhaskara_delta(double a, double b, double c) {
	return pow(b, 2) - (4 * a * c); // b² - 4 * a * c
}

int main() {
	double a, b, c;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	double result = calc_bhaskara_delta(a, b, c);
	
	printf("%lf", result);
}

