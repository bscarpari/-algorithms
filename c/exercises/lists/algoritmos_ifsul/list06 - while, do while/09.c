#include <stdbool.h>
#include <stdio.h>

/*
  Para  doar  sangue  é  necessário:

  - Ter entre  18  e  67  anos
  - Pesar  mais  de 50kg
  - Estar  em  jejum

  Faça  um  programa  que  pergunta  para  10 usuários  a
  idade,  peso  do  usuário  e  se  ele  está  em  jejum.

  Diga se o usuário pode doar sangue ou não. No final, indica
  quantos usuários são doadores e quantos não são (usando DO
  WHILE).
*/

#define max 2
#define min 0

// Verifica se o usuário pode doar sangue
bool can_donate(double age, double weight, bool fasting) {
  return (age >= 18 && age <= 67) && weight > 50 && fasting;
}

int main() {
  int i = min;

  double age, weight;
  bool fasting = false;

  int donors = 0, non_donors = 0;

  do {
    printf("\n\nUsuario %i", i + 1);
    printf("\nInforme a idade: ");
    scanf("%lf", &age);

    printf("Informe o peso: ");
    scanf("%lf", &weight);

    printf("Esta em jejum? (1 - Sim / 0 - Nao) ");
    scanf("%i", &fasting);

    if (can_donate(age, weight, fasting)) {
      printf("Voce pode doar sangue!");
      donors++;
    } else {
      printf("Voce nao pode doar sangue!");
      non_donors++;
    }

    i++;
  } while (i < max);

  printf("\n\n%i doadores", donors);
  printf("\n%i nao doadores", non_donors);
}