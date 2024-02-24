#include <stdio.h>

/* 
 Faça uma função que realize a conversão de Polegadas (pol) para  
 Centímetros (cm), onde pol é passado como parâmetro e cm é retornado. 
 Sabe-se que 1 polegada é 2,54 centímetros.
*/

char polToCentimeters(double pol) {
	return printf("\n%.2lfcm", pol * 2.54);
}

int main() {
	double pol;
	
	scanf("%lf", &pol);
	polToCentimeters(pol);
	
	return 0;
}

