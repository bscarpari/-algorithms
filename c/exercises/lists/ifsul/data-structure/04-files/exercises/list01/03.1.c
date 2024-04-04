/*
Usando o arquivo de texto produzido no exercício 1, faça um programa que transforme o arquivo de
texto em um arquivo binário.
*/

#include <stdio.h>
#include <string.h>

#define MAX 255

int main() {
    FILE *arq, *bin;
	char string[MAX];

	arq = fopen("arq_01.txt", "r");
    bin = fopen("arq_01.bin", "wb");

    if (arq == NULL || bin == NULL) {
        printf("Erro ao abrir o(s) arquivo(s)\n");
        return 0;
    }
\
    // TODO: revisar a lógica para passar para binário
    while(fgets(string, sizeof(string), arq) != NULL) {
        fwrite(string, sizeof(string), 1, bin);
    }

    fclose(arq);
    fclose(bin);

    return 0;
}