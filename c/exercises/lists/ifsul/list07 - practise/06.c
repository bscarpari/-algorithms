#include <stdio.h>

/*
  Faça  um  programa  que  leia  a  nota  final  de 5
  alunos. 

  Escreva  no  final,  a maior e a menor nota, a média das
  notas e a quantidade de notas acima da média
*/

int main() {
  int notasMaiores = 0;
  float notas[5] = {0}, maior, menor, soma, media;

  for (int i = 0; i < 5; i++) {
    printf("Digite sua nota final (Aluno %d): ", i + 1);
    scanf("%f", &notas[i]);

    if (i == 0) {
      maior = notas[i];
      menor = notas[i];
    }

    if (notas[i] > maior) 
      maior = notas[i];

    if (notas[i] < menor) 
      menor = notas[i];

    soma += notas[i];

    if (notas[i] > 6)
      notasMaiores++;
  }

  printf("Maior nota: %.2f\n", maior);
  printf("Menor nota: %.2f\n", menor);
  printf("Media das notas: %.2f\n", soma / 5);
  printf("Quantia de notas maiores que 6: %i\n", notasMaiores);
  
  return 0;
}