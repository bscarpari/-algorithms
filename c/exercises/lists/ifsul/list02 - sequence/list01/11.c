#include <stdio.h>

int main() {
	int sum, age_01, age_02, age_03;
	float media;
	
	printf("\nIdade da pessoa 01: ");
	scanf("%i", &age_01);
	
	printf("\nIdade da pessoa 02: ");
	scanf("%i", &age_02);
	
	printf("\nIdade da pessoa 03: ");
	scanf("%i", &age_03);
	
	sum = age_01 + age_02 + age_03;
	
	media = sum / 3;
	
	printf("\nA média é: %i + %i + %i (%i) / 3 = %f", age_01, age_02, age_03, sum, media);
	
	return 0;
}

