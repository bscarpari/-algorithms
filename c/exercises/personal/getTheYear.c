#include <locale.h>
#include <stdio.h>
#include <time.h>

int main() {
	setlocale(LC_ALL, "");
	
	time_t atual;
	struct tm * localatual;
	int year;

	atual = time(NULL);
	
	localatual = localtime(&atual);
	
	year = localatual->tm_year + 1900;
	
	printf("o ano atual é: %d\n", year); 

	return 0;
}

