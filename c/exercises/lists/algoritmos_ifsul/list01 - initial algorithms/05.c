#include <stdio.h>

int main() {
	int value = 38;
	float percent = 0.17;
	
	float tax = value - (value * percent);
	
	printf("%f", tax);
	
	return 0;
}

