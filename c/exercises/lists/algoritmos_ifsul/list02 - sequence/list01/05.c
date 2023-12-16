#include <stdio.h>

int main() {	
	int n1, n2;
	
	printf("\nDigite o valor 01: ");
	scanf("%i", &n1);
	
	printf("\nDigite o valor 02: ");
	scanf("%i", &n2);
	
	printf("\n%i + %i = %i", n1, n2, n1 + n2);
	printf("\n%i * %i = %i", n1, n2, n1 * n2);
	
	return 0;
}

