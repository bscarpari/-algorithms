#include <stdio.h>

int main() {	
	int n1, n2;
	int soma;
	
	printf("\nDigite o valor 01: ");
	scanf("%i", &n1);
	
	printf("\nDigite o valor 02: ");
	scanf("%i", &n2);

	soma = n1 + n2;
	
	printf("\nO resultado da soma: %i", soma);
	
	return 0;
}

