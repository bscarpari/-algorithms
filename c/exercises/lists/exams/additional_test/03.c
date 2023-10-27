#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char verificarPrimo(int num) {
	int nRest = 0;
	
	if(num % 1 != 0 && num % num != 0) {
		nRest++;
	}
	
	if(nRest == 2) {
		printf("\nO %i É primo", num);
	} else {
		printf("\nO %i NÃO é primo", num);
	}
}

int main() {
	setlocale(LC_ALL, "");
	int number = 0;
	
	printf("\nInforme um valor a ser verificado: ");
	scanf("%i", &number);

	if(number <= 0) {
		printf("\nValor não positivo");
		return 0;
	}

	verificarPrimo(number); // 1, 3, 5, 7, 11, 13 (NÚMEROS PRIMOS)
	
	system("pause");
	return 0;
}

