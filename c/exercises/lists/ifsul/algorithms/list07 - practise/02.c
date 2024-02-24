#include <stdio.h>

/*
  Faça um algoritmo que leia as notas de 10 alunos e no final escreva a
  maior e  a  menor  nota,  assim  como  a  média  dos  alunos  com 
  nota  maior  que  6  e dos alunos menores que 6.
*/

int main() {
  float notas[10] = {0}, aux, maior, menor, somaMaior, somaMenor, media;

  for (int i = 0; i < 10; i++) {
    printf("Digite a nota do aluno %d: ", i + 1);
    scanf("%f", &notas[i]);

    // Inicializa menor e maior
    if (i == 0) {
      maior = notas[i];
      menor = notas[i];
    }

    // Maior
    if (notas[i] > maior) 
      maior = notas[i];

    // Menor
    if (notas[i] < menor) 
      menor = notas[i];

    // Soma das notas maiores que 6
    if (notas[i] > 6)
      somaMaior += notas[i];
    
    // Soma das notas menores que 6
    if (notas[i] < 6) 
      somaMenor += notas[i];
  }

  printf("Maior nota: %.2f\n", maior);
  printf("Menor nota: %.2f\n", menor);
  printf("Média dos alunos com nota maior que 6: %.2f\n", somaMaior / 10);
  printf("Média dos alunos com nota menor que 6: %.2f\n", somaMenor / 10);

  return 0;
}