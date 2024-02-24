/* 
  Implemente uma fun��o que receba tr�s n�meros reais, �a�, �b� e �c�,
  que s�o os coeficientes de uma equa��o do segundo grau e retorne 
  o valor do delta, que � dado por �b� - 4ac�.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

double calc_bhaskara_delta(double a, double b, double c) {
	return pow(b, 2) - (4 * a * c); // b� - 4 * a * c
}

int main() {
	double a, b, c;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	double result = calc_bhaskara_delta(a, b, c);
	
	printf("%lf", result);
}

