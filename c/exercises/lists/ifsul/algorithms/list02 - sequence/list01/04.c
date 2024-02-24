#include <stdio.h>

int main() {	
	int n1, n2;
	int produto;
	
	printf("\nDigite o valor 01: ");
	scanf("%i", &n1);
	
	printf("\nDigite o valor 02: ");
	scanf("%i", &n2);

	produto = n1 * n2;
	
	printf("\nO resultado do produto: %i", produto);
	
	return 0;
}

