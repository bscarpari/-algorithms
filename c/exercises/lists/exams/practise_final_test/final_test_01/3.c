#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/*
   3) (2,0) - Faca um programa que leia um vetor R com 10 posicoes char,
   que contem as respostas de um prova de concurso, contendo os valores
   de A ate D correspondentes as respostas de cada questao. Ler a seguir,
   um cartao de respostas (P[10]), contendo as respostas de um aluno.
   Compare os dois vetores para verificar a quantidade de respostas iguais.
   Ao final mostrar o num de acertos do aluno.
*/

int main() {
  char R[10], P[10];
  int i, acertos = 0;

  printf("OBS. AS QUESTAO S�A DE 'A' ATE 'D' APENAS.\n");
  for (i = 0; i < 10; i++) {
    char resposta;
    printf("Insira o gabarito da questao %d: ", i);

    do {
      scanf(" %c", &resposta);
      resposta = toupper(resposta);

      if (resposta != 'A' && resposta != 'B' && resposta != 'C' &&
          resposta != 'D') {
        printf("Resposta invalida, digite novamente: ");
      }
    } while (resposta != 'A' && resposta != 'B' && resposta != 'C' &&
             resposta != 'D');

    R[i] = resposta;
  }

  for (i = 0; i < 10; i++) {
    char resposta;
    printf("Insira a resposta do aluno para a questao %d: ", i);

    do {
      scanf(" %c", &resposta);
      resposta = toupper(resposta);

      if (resposta != 'A' && resposta != 'B' && resposta != 'C' &&
          resposta != 'D') {
        printf("Resposta invalida!, digite novamente: ");
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

  printf("O aluno acertou %d questoes!", acertos);

  printf("\n\n");

  return 0;
}
