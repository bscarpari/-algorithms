#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	float sum, n1, n2, n3, result;  	
	
	printf("Nota 01: ");
	scanf("%f", &n1);
	
	printf("Nota 02: ");
	scanf("%f", &n2);
	
	printf("Nota 03: ");
	scanf("%f", &n3);
	
	sum = n1 + n2 + n3;
	
	result = sum / 3;
	
	printf("\nA média do aluno é: %2.f", result);
	
	return 0;
}

