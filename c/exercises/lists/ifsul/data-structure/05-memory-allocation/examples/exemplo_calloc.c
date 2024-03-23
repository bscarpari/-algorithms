#include <stdio.h>
#include <stdlib.h>

int main(){

	int *ptr, tam, i;

	tam = 10;

	ptr = (int *)calloc(tam, sizeof(int)); //Alocando um vetor de 10 posições

	if(ptr == NULL)
	{
		printf ("Erro: Memoria Insuficiente\n");
		exit(1);
	}

	for (i=0; i<tam ; i++){ //Preenchendo as posições do vetor alocado
		ptr[i] = i*i;
	}

	for (i=0; i<tam ; i++){ //Imprimindo os valores armazenados no vetor
		printf("A posição %d tem o valor %d\n", i, ptr[i]);
	}

} 