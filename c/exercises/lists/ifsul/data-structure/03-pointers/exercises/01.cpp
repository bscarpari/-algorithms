#include <locale.h>
/* 
 Crie um programa que declare duas variáveis (inteiro e real) atribua valores para elas e crie dois
 ponteiros, cada um apontando para uma destas variáveis. Mostre na tela: O valor e o endereço de
 memória das variáveis, o valor do ponteiro, o endereço do ponteiro e o valor apontado pelo
 ponteiro. Ao fim diga qual destes valores são iguais? Justifique?
*/
int main() {
	setlocale(LC_ALL, "Portuguese");
	int i_num = 5;
	float f_num = 10.5;
	
	int *i_ptr = &i_num;
	float *f_ptr = &f_num;
	
	/* Valor e endereço de memória das variáveis */
	printf("\nVARIÁVEIS (INTEIRO | REAL)");
	printf("\nValores das variáveis: %d / %.2f\n", i_num, f_num);	
	printf("Endereço na memória: %p / %p\n", &i_num, &f_num);
	
	
	/* Valor, endereço e o valor apontado pelo ponteiro*/
	printf("\n\nPONTEIRO (INTEIRO | REAL)");
	printf("\nValores dos ponteiros:  %p / %p\n", i_ptr, f_ptr);
	printf("Endereço dos ponteiros: %p / %p\n", &i_ptr, &f_ptr);
	printf("Valor apontado pelos ponteiros: %i / %.2f\n", *i_ptr, *f_ptr);
	
	return 0;
}
