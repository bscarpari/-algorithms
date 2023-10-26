#include <stdio.h>

/*
  Um atleta deseja se inscrever em uma escola de futebol.
  
  Faça um programa que leia a idade de um atleta e
  mostre na saída em qual categoria ele se encontra,
  junto com a idade. Use a tabela abaixo

  10-14 infantil
  15-17 juvenil
  18-25 adulto
*/

int main() {
  int age;

  printf("Digite a idade do atleta: ");
  scanf("%i", &age);

  if (age >= 10 && age <= 14)
    printf("Infantil");

  if (age >= 15 && age <= 17)
    printf("Juvenil");

  if (age >= 18 && age <= 25)
    printf("Adulto");

  return 0;
}