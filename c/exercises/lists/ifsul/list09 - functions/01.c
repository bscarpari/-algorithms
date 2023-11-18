#include <stdio.h>

/* 
 Fazer uma fun��o que retorna a soma, a diferen�a e o produto entre dois 
 n�meros
*/

double sum(double numA, double numB) {
	return numA + numB;
}

double diff(double numA, double numB) {
	return numA - numB;
}

double prod(double numA, double numB) {
	if(numA <= 0 || numB <= 0)
		return 0; 
		
	return numA * numB;
}

int main() {
	double numA, numB; 
	
	scanf("%lf %lf", &numA, &numB);
	
	printf("\n%.2lf + %.2lf = %.2lf", numA, numB, sum(numA, numB));
	printf("\n%.2lf - %.2lf = %.2lf", numA, numB, diff(numA, numB));
	printf("\n%.2lf * %.2lf = %.2lf", numA, numB, prod(numA, numB));
	
	return 0;
}

