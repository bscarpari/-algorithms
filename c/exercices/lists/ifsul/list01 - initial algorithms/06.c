#include <stdio.h>

int main() {
	int value = 350;
	float percent = 0.14;
	
	float finalValue = value + (value * percent);
	
	printf("%0.f", finalValue);
	
	return 0;
}

