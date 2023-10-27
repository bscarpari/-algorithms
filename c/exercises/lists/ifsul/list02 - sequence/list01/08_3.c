#include <stdio.h>
#include <locale.h>
#include <math.h>

int calc_pow(int num, int radical_sign) {
	return pow(num, radical_sign);
}

int main() {
	setlocale(LC_ALL, "");
	
	int num, radical_sign, result;
	
	printf("\nDigite um número: ");
	scanf("%i", &num); 
	
	printf("\nDigite o número do radical (x²): ");
	scanf("%i", &radical_sign); 

	result = calc_pow(num, radical_sign);

	printf("\n%i ^ %i = %i", num, radical_sign, result);

	return 0;
}

