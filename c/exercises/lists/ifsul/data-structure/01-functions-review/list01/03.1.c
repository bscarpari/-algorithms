/* 
  Implemente uma função que recebe como parâmetros dois valores inteiros, por meio de passgem
  de parâmetros, e troque o conteúdo deles.
*/

#include <stdio.h>
#include <string.h>

void switch_values(int a, int b) {	
	printf("Value A: %i\nValue B: %i", a, b);
}

int main() {
	printf("\nAntes: ");
	switch_values(1, 2);
	
	printf("\nDepois: ");
	switch_values(3, 4);
}

