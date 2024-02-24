#include <stdio.h>

int main() {
	int birth_year, age;
	int year = 2023;
	
	printf("Qual o ano do seu nascimento? ");
	scanf("%i", &birth_year);
	
	age = year - birth_year;
	
	printf("Voce tem %i anos.", age);
	
	return 0;
}

