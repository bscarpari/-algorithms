#include <stdio.h>

int main() {
	int value = 1500;
	float percent = 0.23;
	
	float result = value + (value * percent);
	
	printf("%f", result);
	
	return 0;
}

