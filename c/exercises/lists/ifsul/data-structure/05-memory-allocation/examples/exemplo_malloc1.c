#include <stdio.h>
#include <stdlib.h>

int main(){

	int *ptr;

	ptr = (int *)malloc(sizeof(int)); //Alocando um inteiro

	if(ptr == NULL)
	{
		printf ("Erro: Memoria Insuficiente\n");
		exit(1);
	}

	*ptr = 10; //Atribuindo o valor 10 para a posição alocada

	printf("\nA posição alocada é %p\n\n", ptr);

	printf("\nA posição alocada recebeu o valor de %d\n\n", *ptr); //Imprimindo o contéudo da memória

} 