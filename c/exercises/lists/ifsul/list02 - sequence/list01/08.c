#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int number, result;
	
	printf("\nDigite um número: ");
	scanf("%i", &number); 

	result = number * number;

	printf("\n%i² = %i", number, result);

	return 0;
}

