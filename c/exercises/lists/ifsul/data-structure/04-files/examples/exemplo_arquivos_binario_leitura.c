#include <stdio.h>

#define MAX 101

int main(){

	//Declaração de uma string e de um ponteiro do arquivo
	char string[MAX];
	FILE *arq;

	//Abertura do arquivo somente para leitura
	arq = fopen("arquivo.bin", "rb");

	//Teste para ver se o arquivo foi aberto
	if(arq == NULL){
		printf("Erro ao abrir o arquivo\n");
		return 0;
	}

	//A primeira leitura do arquivo deve ser feita fora do while
	fread(string, sizeof(string), 1, arq);

	//Enquanto não chegar no fim do arquivo, a leitura continua
	while(!feof(arq)){

		//Imprime o que foi lido do arquivo
		printf("%s", string);
		
		//Faz a leitura no arquivo
		fread(string, sizeof(string), 1, arq);

	}

	//Fechamento do arquivo
	fclose(arq);
}