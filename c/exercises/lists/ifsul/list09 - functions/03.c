#include <stdio.h>

/* 
 Fazer uma fun��o em "C" que retorna a raz�o entre dois n�meros. 
 
 A fun��o  deve retornar pelo comando return o valor 1 se a opera��o
 foi poss�vel e o  valor 0 se a opera��o n�o foi poss�vel 
 (divis�o por zero, por exemplo). 
 
 O resultado da divis�o deve retonar por um par�metro por refer�ncia. 
*/

char division(double numA, double numB) {
	if(numA == 0 || numB == 0)
		return printf("\nDivis�o por zero n�o pode");
		
	return printf("\n%.2lf / %.2lf = %.2lf", numA, numB, numA / numB);
}

int main() {
	double numA, numB;
	
	scanf("%lf %lf", &numA, &numB);
	
	division(numA, numB);
	
	return 0;
}

