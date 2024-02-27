#include <stdio.h>

#define LENGTH 3

double greatherThan(int length) {
	double input = 0, greather = 0, lesser = 0;
		
	for(int i = 0; i < length; i++) {
		printf("Digite o valor %i: ", i + 1);
		scanf("%lf", &input);		
		
		if(i == 0) {
			greather = input;
			lesser = input;
		}
		
		if(input > greather) greather = input;
		if(input < lesser) lesser = input;		
	}
	
	return greather;
}

int main() {
  double result = greatherThan(LENGTH);
  printf("Maior: %.2lf", result);
}

