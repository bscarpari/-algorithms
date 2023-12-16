#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

// 3) (2,0) - Fa�a um programa que leia um vetor R com 10 posi��es char,
// que cont�m as respostas de um prova de concurso, contendo os valores
// de A at� D correspondentes as respostas de cada quest�o. Ler a seguir,
// um cart�o de respostas (P[10]), contendo as respostas de um aluno.
// Compare os dois vetores para verificar a quantidade de respostas iguais.
// Ao final mostrar o n� de acertos do aluno.

int main() {
  setlocale(LC_ALL, "Portuguese");
  char R[10], P[10];
  int i, acertos = 0;

  printf("OBS. AS QUEST�O S�O DE 'A' AT� 'D' APENAS.\n");
  for (i = 0; i < 10; i++) {
    char resposta;
    printf("Insira o gabarito da quest�o %d: ", i);

    do {
      scanf(" %c", &resposta);
      resposta = toupper(resposta);

      if (resposta != 'A' && resposta != 'B' && resposta != 'C' &&
          resposta != 'D') {
        printf("Resposta inv�lida, digite novamente: ");
      }
    } while (resposta != 'A' && resposta != 'B' && resposta != 'C' &&
             resposta != 'D');

    R[i] = resposta;
  }

  for (i = 0; i < 10; i++) {
    char resposta;
    printf("Insira a resposta do aluno para a quest�o %d: ", i);

    do {
      scanf(" %c", &resposta);
      resposta = toupper(resposta);

      if (resposta != 'A' && resposta != 'B' && resposta != 'C' &&
          resposta != 'D') {
        printf("Resposta inv�lida!, digite novamente: ");
      }
    } while (resposta != 'A' && resposta != 'B' && resposta != 'C' &&
             resposta != 'D');

    P[i] = resposta;
  }

  for (i = 0; i < 10; i++) {
    if (P[i] == R[i]) {
      acertos++;
    }
  }

  printf("O aluno acertou %d quest�es!", acertos);

  printf("\n\n");

  system("pause");
  return 0;
}
