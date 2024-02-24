#include <stdio.h>

/* 
  Fazer uma função para ler e retornar o
  valor das 3 notas de um aluno.
*/

void read_notes() {
	double n1, n2, n3;
	
	scanf("%lf %lf %lf", &n1, &n2, &n3);
	printf("\n%.2lf %.2lf %.2lf", n1, n2, n3); 
}

int main() {
	read_notes();
	return 0;
}

