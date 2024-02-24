#include <stdio.h>

/* 
 Fazer uma função em "C" que retorna a razão entre dois números. 
 
 A função  deve retornar pelo comando return o valor 1 se a operação
 foi possível e o  valor 0 se a operação não foi possível 
 (divisão por zero, por exemplo). 
 
 O resultado da divisão deve retonar por um parâmetro por referência. 
*/

char division(double numA, double numB) {
	if(numA == 0 || numB == 0)
		return printf("\nDivisão por zero não pode");
		
	return printf("\n%.2lf / %.2lf = %.2lf", numA, numB, numA / numB);
}

int main() {
	double numA, numB;
	
	scanf("%lf %lf", &numA, &numB);
	
	division(numA, numB);
	
	return 0;
}

