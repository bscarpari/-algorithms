#include <stdio.h>
#include <string.h>

#define MAX 101

int main(){

	//Declaração de uma string e de um ponteiro do arquivo
	char string[MAX];
	int tam;
	FILE *arq;

	//Abertura do arquivo somente para escrita
	arq = fopen("arquivo.bin", "wb");

	//Teste para ver se o arquivo foi aberto
	if(arq == NULL){
		printf("Erro ao abrir o arquivo\n");
		return 0;
	}

	//Leitura do teclado
	printf("Digite uma linha de até 100 caracteres para ser armazenada em um arquivo, caso queira terminar digite ...\n");
	scanf("%[^\n]", string);

	//Enquanto o usuário não digitar "..." o laço de repetição continuará escrevendo no arquivo 
	while(strcmp(string, "...")){

		//Adicionando o \n ao final da string
		tam = strlen(string);
		string[tam] = '\n';
		string[tam+1] = '\0';

		//Escrita no arquivo
		fwrite(string, sizeof(string), 1, arq);

		//Leitura do teclado
		printf("Digite uma linha de até 100 caracteres para ser armazenada em um arquivo, caso queira terminar digite ...\n");
		scanf(" %[^\n]", string);

	}

	//Fechamento do arquivo
	fclose(arq);
}