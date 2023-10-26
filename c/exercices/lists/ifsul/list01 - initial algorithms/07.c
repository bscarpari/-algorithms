#include <stdio.h>

int main() {
	float value = 0.90;
	float percent = 0.23;
	
	float finalValue = value + (value * percent);
	
	printf("%f", finalValue);
	
	return 0;
}

