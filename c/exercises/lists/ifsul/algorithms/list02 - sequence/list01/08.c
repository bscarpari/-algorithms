#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int number, result;
	
	printf("\nDigite um n�mero: ");
	scanf("%i", &number); 

	result = number * number;

	printf("\n%i� = %i", number, result);

	return 0;
}

