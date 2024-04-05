#include <stdio.h>

/*
Escreva um programa que solicita ao usuário a quantidade de alunos de uma turma e aloca um vetor de notas (números reais).

Depois de ler as notas, imprime a média aritmética.

OBS: não deve ocorrer desperdício de memória; e após ser utilizada a memória deve ser devolvida.
*/

int main() {
  int i, n;
  float *notas;
  float media = 0;

  printf("Digite a quantidade de alunos: ");
  scanf("%d", &n);

  notas = (float *)malloc(n * sizeof(float));

  for (i = 0; i < n; i++) {
    printf("Digite a nota do aluno %d: ", i + 1);
    scanf("%f", &notas[i]);
    media += notas[i];
  }

  media /= n;

  printf("Media: %.2f\n", media);

  free(notas);
  return 0;
}