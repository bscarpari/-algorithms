#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int number;
	
	printf("\nDigite um n�mero: ");
	scanf("%i", &number); 

	printf("\n O sucessor �: %i", number + 1);
	printf("\n O n�mero �: %i", number);
	printf("\n O antecessor �: %i", number - 1);
	
	return 0;
}

