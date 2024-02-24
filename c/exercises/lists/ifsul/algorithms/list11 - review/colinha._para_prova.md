# Prova - AP (6,0) - 2023.2

## Exercícios de revisão

1. Faça um programa que, solicite um conjunto de N números, determine o
   menor valor, o maior valor e a soma dos valores ao final do programa. O
   programa termina quando o número lido for zero

```c
int main() {
  int num, i = 0, max = 0, min = 0, sum = 0;

  do {
    printf("Número %i: ", i + 1);
    scanf("%i", &num);

    if (i == 0) {
      max = num;
      min = num;
    }

    if (num < min && num != 0) min = num;

    if (num > max) max = num;

    sum += num;

    i++;
  } while (num != 0);

  printf("\nMAX = %i", max);
  printf("\nMIN = %i", min);
  printf("\nSUM = %i\n\n\n", sum);

  return 0;
}
```

2. Escreve um programa que leia 10 números e armazene estes em um vetor.
   Em seguida, o usuário digita um número e seu programa em C deve acusar
   se o número digitado está no vetor ou não. Se estiver, diga a posição que
   está.

```c
int main() {
  int i, num, vet[10];

  for (i = 0; i < 10; i++) {
    printf("Número %i: ", i + 1);
    scanf("%i", &vet[i]);
  }

  printf("\nNúmero: ");
  scanf("%i", &num);

  for (i = 0; i < 10; i++) {
    if (vet[i] == num) {
      printf("\n%i está na posição %i\n\n\n", num, i);
      return 0;
    }
  }

  printf("\n%i não está no vetor\n\n\n", num);

  return 0;
}
```

3. Crie um vetor de 100 posições e gere os cem primeiros números pares
   armazenando-os neste vetor. Faça uma função para calcular os números
   pares. No final imprima o vetor.

```c
int main() {
  int i, vet[100];

  for (i = 0; i < 100; i++)
    vet[i] = i * 2;

  for (i = 0; i < 100; i++)
    printf("%i ", vet[i]);

  return 0;
}
```

4. Declare uma matriz 5 x 5. Primeiro preencha com 1 a diagonal principal e exiba. Depois faça da diagonal secundária. Escreva ao
   final cada matriz obtida.

```c
int main() {
  int i, j, mat[5][5];

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      if (i == j) {
        mat[i][j] = 1;
      } else {
        mat[i][j] = 0;
      }
    }
  }

  printf("\nDiagonal principal:\n");
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      printf("%i ", mat[i][j]);
    }
    printf("\n");
  }

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      if (i + j == 4) {
        mat[i][j] = 1;
      } else {
        mat[i][j] = 0;
      }
    }
  }

  printf("\nDiagonal secundária:\n");
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      printf("%i ", mat[i][j]);
    }
    printf("\n");
  }

  return 0;
}
```

5. Faça um programa que leia o nome em um string de 15 posições e o sexo
   (“F” para feminino e “M” para masculino. Se sexo for feminino imprime o
   nome da pessoa e a palavra “Mulher”, caso contrário imprimir o nome e  
   “Homem”. No final escreva o total de letras que tem no nome.

```c
#include <stdio.h>
#include <string.h>

int main() {
  int tam;
  char nome[15], sex;

  printf("Digite um nome:");
  gets(nome);

  printf("Digite o sexo (F/M):");
  scanf("%c", &sex);

  tam = strlen(nome);

  if (sex == 'F' || sex == 'f') printf("\n%s  - Mulher\n", nome);
  if (sex == 'M' || sex == 'm') printf("\n%s  - Homem\n", nome);

  printf("\nO total de letras do nome é: %i\n\n\n", tam);

  return 0;
}
```

## Questões da Prova Final 2023.1

3. (2,0) - Faça um programa que leia um vetor R com 10 posições char, que contém as respostas de um prova de concurso, contendo os valores de A até D correspondentes as respostas de cada questão. Ler a seguir, um cartão de respostas (P[10]), contendo as respostas de um aluno.Compare os dois vetores para verificar a quantidade de respostas iguais. Ao final mostrar o nº de acertos do aluno.

```c
int main() {
  char R[10], P[10];
  int i, acertos = 0;

  for (i = 0; i < 10; i++) {
    printf("Resposta %i: ", i + 1);
    scanf("%c", &R[i]);
  }

  for (i = 0; i < 10; i++) {
    printf("Resposta %i: ", i + 1);
    scanf("%c", &P[i]);
  }

  for (i = 0; i < 10; i++) {
    if (R[i] == P[i]) acertos++;
  }

  printf("\nAcertos: %i\n\n\n", acertos);

  return 0;
}
```

4. (1,0)- Escreva um programa em C que solicite o nome completo de um aluno. Após escreva na tela escreva o total de letras do nome e o nome invertido. A inversão deve ser feita em uma função separada, retornando o nome invertido.

Entrada: Beatriz
Saida: 7 zirtaeb

```c
#include <stdio.h>
#include <string.h>

int main() {
  char nome[50];
  int i, tam;

  printf("Nome: ");
  gets(nome);

  tam = strlen(nome);

  printf("\nO nome possui: %i letras\n", tam);

  printf("\nInvertido: ");
  for (i = tam; i >= 0; i--) {
    printf("%c", nome[i]);
  }

  return 0;
}
```

## Questões da prova 2023.2

1. Faça um programa que leia dois vetores de 10 posições e faça as seguintes
   tarefas: a) Imprima o conteúdos do dois vetores (0,5); b) Crie um terceiro
   vetor que seja a interseção entre os 2 vetores (1,0); c) Mostre o vetor criado (0,5).

```c
int main() {
  int i, vet1[10], vet2[10], vet3[10];

  for (i = 0; i < 10; i++) {
    printf("Vetor 1[%i]: ", i + 1);
    scanf("%i", &vet1[i]);
  }

  for (i = 0; i < 10; i++) {
    printf("Vetor 2[%i]: ", i + 1);
    scanf("%i", &vet2[i]);
  }

  for (i = 0; i < 10; i++) {
    if (vet1[i] == vet2[i]) vet3[i] = vet1[i];
  }

  printf("\nVetor 1: ");
  for (i = 0; i < 10; i++) {
    printf("%i ", vet1[i]);
  }

  printf("\nVetor 2: ");
  for (i = 0; i < 10; i++) {
    printf("%i ", vet2[i]);
  }

  printf("\nVetor 3: ");
  for (i = 0; i < 10; i++) {
    printf("%i ", vet3[i]);
  }

  return 0;
}
```

2. Faça um programa que leia uma matriz A de 5 linhas e 3 colunas e faça as
   seguintes tarefas: a) leia a matriz e a escreva (0,5); b) Escrever cada elemento repetido com uma
   mensagem dizendo o elemento que aparece X vezes em A (2,5)

```c
int main() {
  int i, j, matA[5][3], matB[5][3];

  // a) leia a matriz e a escreva (0,5);
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 3; j++) {
      printf("Matriz A[%i][%i]: ", i + 1, j + 1);
      scanf("%i", &matA[i][j]);
    }
  }

  // b) Exiba cada elemento que repete na matrizA dizendo o elemento que aparece X vezes em A (2,5)
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 3; j++) {
      int cont = 0;

      for (int k = 0; k < 5; k++) {
        for (int l = 0; l < 3; l++) {
          if (matA[i][j] == matA[k][l]) cont++;
        }
      }

      if (cont > 1) printf("\n%i aparece %i vezes\n", matA[i][j], cont);
    }
  }

  return 0;
}
```

## Questões de lógica/matemática

1. Faça um programa que leia um número inteiro N e calcule o fatorial de N.

```c
int main() {
  int num, i, fat = 1;

  printf("Número: ");
  scanf("%i", &num);

  for (i = 1; i <= num; i++) {
    fat *= i;
  }

  printf("\nFatorial de %i = %i\n\n\n", num, fat);

  return 0;
}
```

2. Faça um programa que tenha uma função que determine número primo.

```c
int primo(int num) {
  int i, cont = 0;

  for (i = 1; i <= num; i++) {
    if (num % i == 0) cont++;
  }

  if (cont == 2) return 1;
  return 0;
}

int main() {
  int num;

  printf("Número: ");
  scanf("%i", &num);

  if (primo(num)) {
    printf("\n%i é primo\n\n\n", num);
  } else {
    printf("\n%i não é primo\n\n\n", num);
  }

  return 0;
}
```

3. Faça um programa que determine se um número é par ou ímpar.

```c
int main() {
  int num;

  printf("Número: ");
  scanf("%i", &num);

  if (num % 2 == 0) {
    printf("\n%i é par\n\n\n", num);
  } else {
    printf("\n%i é ímpar\n\n\n", num);
  }

  return 0;
}
```

## Questões de array, ponteiros, matrizes, etc.

1. Faça um programa que leia um vetor de 10 posições e passe-o para uma função que deverá retornar o maior elemento do vetor.

```c
#include <stdio.h>

#define SIZE 10

int maior(int *vet) {
  int i, max = 0;

  for (i = 0; i < SIZE; i++) {
    if (vet[i] > max) max = vet[i];
  }

  return max;
}

int menor(int *vet) {
  int i, min = 0;

  for (i = 0; i < SIZE; i++) {
    if (vet[i] < min) min = vet[i];
  }

  return min;
}

int soma(int *vet) {
  int i, sum = 0;

  for (i = 0; i < SIZE; i++) {
    sum += vet[i];
  }

  return sum;
}

int main() {
  int i, vet[SIZE];

  for (i = 0; i < SIZE; i++) {
    printf("Número %i: ", i + 1);
    scanf("%i", &vet[i]);
  }

  printf("\nMaior = %i\n\n\n", maior(vet));
  printf("\nMenor = %i\n\n\n", menor(vet));
  printf("\nSoma = %i\n\n\n", soma(vet));

  return 0;
}
```

2. Faça um programa que leia uma matriz A (5,5) de números inteiros e cria 2 vetores MaiorL(5) e MenorC(5), que contenham, respectivamente, o maior elemento de cada uma das linhas e o menor elemento de cada uma das colunas. Escrever a matriz A e os vetores MaiorL e MenorC

```c
#define rows 5
#define cols 5

int main() {
  int A[rows][cols], biggersRow[rows] = {0}, smallersCol[cols] = {0};

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("A[%d][%d]: ", i, j);
      scanf("%d", &A[i][j]);
    }
  }

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (A[i][j] > biggersRow[i]) {
        biggersRow[i] = A[i][j];
      }
    }
  }

  for (int j = 0; j < cols; j++) {
    smallersCol[j] = A[0][j];

    for (int i = 1; i < rows; i++) {
      if (A[i][j] < smallersCol[j]) {
        smallersCol[j] = A[i][j];
      }
    }
  }

  // Printar os resultados

  return 0;
}
```
