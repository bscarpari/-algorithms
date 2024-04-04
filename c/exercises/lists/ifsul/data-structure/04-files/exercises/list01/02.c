/*
Usando o arquivo de texto produzido no exercício anterior, faça um programa que leia esse arquivo
e imprima na tela apenas as linhas pares do arquivo.
*/

#include <stdio.h>

#define MAX 255

int main() {
	FILE *arq;
	char string[MAX];
    int line_num = 1;

	arq = fopen("arq_01.txt", "r");

    if(arq == NULL) {
        printf("Erro ao abrir o arquivo\n");
		return 0;
    }

    while(fgets(string, sizeof(string), arq) != NULL) {
        if(line_num % 2 == 0) {
            printf("%s", string);
        }
	}

    return 0;
}