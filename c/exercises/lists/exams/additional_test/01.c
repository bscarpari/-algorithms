#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int length = 10;
	int vetorX[length], vetorY[length], interseccao[length], i = 0;
	
	for(i = 0; i < length; i++) {
		printf("\nInsira o valor %i (VETOR X): ", i);
		scanf("%i", &vetorX[i]);
	}
	
	for(i = 0; i < length; i++) {
		printf("\nInsira o valor %i (VETOR Y): ", i);
		scanf("%i", &vetorY[i]);
	}
	
	// TAREFAS SOLICITADAS
	// a) Imprima o conteúdos do dois vetores (0,5) [V]
	printf("\n\nVETOR X:");
	for(i = 0; i < length; i++) {
		printf("%i ", vetorX[i]);
	}
	
	printf("\nVETOR Y:");
	for(i = 0; i < length; i++) {
		printf("%i ", vetorY[i]);
	}

	// b) Crie um terceiro vetor que seja a interseçção entre os 2 vetores (1,0) [V]
	for(i = 0; i < length; i++) {
		if(vetorX[i] == vetorY[i]) {
			interseccao[i] = vetorX[i];
		} else {
			interseccao[i] = 0; // OBS.: NÃO É IGUAL
		}
	}
	
	printf("\nINTERSECÇÃO:");
	// c) Mostre o vetor criado (0,5) [V]
	for(i = 0; i < length; i++) {
		printf("%i ", interseccao[i]);
	}
	
	system("pause");
	return 0;
}

