#include <stdio.h>

/* 
Faça um programa que crie um arquivo TEXTO em disco, com o nome “dados.txt”,
e escreva neste arquivo em disco uma contagem que vá de 1 até 100, com um 
número em cada linha.
*/

int main() {
    int i;
    FILE *file = fopen("dados.txt", "w");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (i = 1; i <= 100; i++) {
        fprintf(file, "%d\n", i);
    }

    fclose(file);
    return 0;
}