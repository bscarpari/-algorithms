#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "");
	
	int num, radical_sign, result;
	
	printf("\nDigite um n�mero: ");
	scanf("%i", &num); 
	
	printf("\nDigite o n�mero do radical (x�): ");
	scanf("%i", &radical_sign); 

	result = pow(num, radical_sign);

	printf("\n%i ^ %i = %i", num, radical_sign, result);
	
	return 0;
}

