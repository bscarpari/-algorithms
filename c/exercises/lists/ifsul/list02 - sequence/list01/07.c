#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int number;
	
	printf("\nDigite um número: ");
	scanf("%i", &number); 

	printf("\n O sucessor é: %i", number + 1);
	printf("\n O número é: %i", number);
	printf("\n O antecessor é: %i", number - 1);
	
	return 0;
}

