#include <stdio.h>
#include <stdlib.h>

int main(){

	int *ptr, tam, i;

	tam = 10;

	ptr = (int *)malloc(tam*sizeof(int)); //Alocando um vetor de 10 posições

	if(ptr == NULL)
	{
		printf("Erro: Memoria Insuficiente\n");
		exit(1);
	}

	for (i=0; i<tam ; i++){ //Preenchendo as posições do vetor alocado
		ptr[i] = i*i;
	}

	tam = 20; //Alterando o tamanho do vetor
	
	ptr = (int *)realloc(ptr, tam*sizeof(int)); //Realocando o vetor com o novo tamanho
	
	if(ptr == NULL){ 
		printf ("ERRO!\n"); 
		exit(1); 
	}

	for (i=10; i<tam ; i++){ //Preenchendo as novas posições do vetor
		ptr[i] = i;
	}

	for (i=0; i<tam ; i++){ //Imprimindo os valores armazenados no vetor
		printf("A posição %d tem o valor %d\n", i,ptr[i]);
	}

} 