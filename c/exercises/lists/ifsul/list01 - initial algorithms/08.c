#include <stdio.h>

int main() {
	int x;
	
	x = 10;
	x = x +2; // 10 + 2 = 12
	x = x / 3; // 12 / 3 = 4
	x = 6 * x + 1; // (6 * 4) + 1 = 25
	x = (x * x) * x; // (25 * 25) * 25
	printf("%i", x); // result: 15.625
	
	return 0;
}

