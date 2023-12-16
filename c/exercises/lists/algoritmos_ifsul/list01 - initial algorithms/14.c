#include <stdio.h>

/* TODO: MELHORAR e deixar dinâmico o algoritmo 
   e as contas matemáticas de comparações
*/
int main() {
	float mathX, mathY;
	
	mathX = 4/3;
	mathY = 0.2 * 12;
	
	// a)
	printf("%2.f > %2.f ", mathX, mathY);
	if(mathX > mathY) {
		printf("(V)");  
	} else {
		printf("(F)");
	}
	
	mathX = 24/2 + 2 * 3;
	mathY = 12 + 12 * 05;
	
	// b)
	printf("\n%2.f == %2.f ", mathX, mathY);
	if(mathX == mathY) {
		printf("(V)");  
	} else {
		printf("(F)");
	}
	
	mathX = 35 + 2 * 2;
	mathY = 3 * 8;
	
	float mathZ = 240/10; 
	
	// c)
	printf("\n%2.f >= 14 && %2.f == %2.f ", mathX, mathY, mathY);
	if(mathX >= 14 && mathY == mathZ) {
		printf("(V)");  
	} else {
		printf("(F)");
	}
	
	mathX = 2 * (8 * 8);
	mathY = 22 * 1;
	mathZ = 44/2;
	
	// d)
	printf("\n%2.f == 64 || %2.f > %2.f ", mathX, mathY, mathY);
	if(mathX == 64 || mathY > mathZ) {
		printf("(V)");  
	} else {
		printf("(F)");
	}
	
	return 0;
}

