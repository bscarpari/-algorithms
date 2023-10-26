#include <stdio.h>

int main() {
	float num, metade, terca;
	
	printf("\nDigite um número: ");
	scanf("%f", &num);
	
	metade = num / 2;
	terca = num / 3;
	
	printf("\nMetade de %i = %f", num, metade);
	printf("\nMetade de %i = %f", num, terca);

	return 0;
}

