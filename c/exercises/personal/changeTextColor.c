#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "");
	system("color 1F");
	
	printf("Mudei as cores com condicional");
	
	return 0;
}

