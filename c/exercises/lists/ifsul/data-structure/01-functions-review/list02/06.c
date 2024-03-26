#include <stdio.h>

double pow(double x, double z) {
	double result = 1; // n¹ = ele mesmo
	
	for(int i = 0; i < z; i++)
		result *= x;
	
	return result;	
}

int main() {
  double result = pow(2, 3); // Output: 2³ = 2 * 2 * 2 = 8
  printf("%.2lf", result);
}

