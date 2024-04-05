#include <stdio.h>

/*
Crie uma struct para armazenar os dados (nome, idade, posição,
numero_camisa) dos jogadores de futsal de um time.

Crie uma variável para armazenar um determinado ’jogador’.

Desenvolva um programa em que o usuário consiga entrar com as
características de um jogador, armazenando os valores diretamente
na variável ’jogador’.

Imprima na tela o valor dos atributos da variável ’jogador’ depois
de ter atribuido valores aos campos.
*/

struct Jogador {
  char nome[50];
  int idade;
  char posicao[50];
  int numero_camisa;
};

int main() {

  struct Jogador jogador;

  printf("Digite o nome do jogador: ");
  scanf("%s", jogador.nome);

  printf("Digite a idade do jogador: ");
  scanf("%d", &jogador.idade);

  printf("Digite a posição do jogador: ");
  scanf("%s", jogador.posicao);
  
  printf("Digite o número da camisa do jogador: ");
  scanf("%d", &jogador.numero_camisa);

  printf("\nNome: %s\n", jogador.nome);
  printf("Idade: %d\n", jogador.idade);
  printf("Posição: %s\n", jogador.posicao);
  printf("Número da camisa: %d\n", jogador.numero_camisa);

  return 0;
}