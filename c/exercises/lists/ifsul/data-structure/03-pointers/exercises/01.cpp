#include <locale.h>
/* 
 Crie um programa que declare duas vari�veis (inteiro e real) atribua valores para elas e crie dois
 ponteiros, cada um apontando para uma destas vari�veis. Mostre na tela: O valor e o endere�o de
 mem�ria das vari�veis, o valor do ponteiro, o endere�o do ponteiro e o valor apontado pelo
 ponteiro. Ao fim diga qual destes valores s�o iguais? Justifique?
*/
int main() {
	setlocale(LC_ALL, "Portuguese");
	int i_num = 5;
	float f_num = 10.5;
	
	int *i_ptr = &i_num;
	float *f_ptr = &f_num;
	
	/* Valor e endere�o de mem�ria das vari�veis */
	printf("\nVARI�VEIS (INTEIRO | REAL)");
	printf("\nValores das vari�veis: %d / %.2f\n", i_num, f_num);	
	printf("Endere�o na mem�ria: %p / %p\n", &i_num, &f_num);
	
	
	/* Valor, endere�o e o valor apontado pelo ponteiro*/
	printf("\n\nPONTEIRO (INTEIRO | REAL)");
	printf("\nValores dos ponteiros:  %p / %p\n", i_ptr, f_ptr);
	printf("Endere�o dos ponteiros: %p / %p\n", &i_ptr, &f_ptr);
	printf("Valor apontado pelos ponteiros: %i / %.2f\n", *i_ptr, *f_ptr);
	
	return 0;
}
