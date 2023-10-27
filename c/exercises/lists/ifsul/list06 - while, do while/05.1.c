#include <stdio.h>
#include <string.h>

main() {
  char nome[25] = " ", sexo, civil;
  int idade, um = 1, cont;
  float salario;

  do {
    do {
      printf("\nNome: ");
      scanf("%s", &nome);
      fflush(stdin);

      if (strlen(nome) < 3) printf("Nome invalido!");
    } while (strlen(nome) < 3);

    do {
      printf("\nIdade:");
      scanf("%i", &idade);
      if (idade < 0 || idade > 150) printf("Idade invalido!");
    } while (idade < 0 || idade > 150);

    do {
      printf("\nSalario:");
      scanf("%f", &salario);
      fflush(stdin);
      if (salario <= 0) printf("Salario invalido!");
    } while (salario <= 0);

    do {
      printf("\nSexo:");
      scanf(" %c", &sexo);
      fflush(stdin);
      if (sexo != 'f' && sexo != 'm') printf("Sexo invalido!");
    } while (sexo != 'f' && sexo != 'm');

    while (um == 1) {
      printf("\nEstado civil:");
      scanf("%c", &civil);
      fflush(stdin);
      if (civil == 's' || civil == 'c' || civil == 'v' || civil == 'd')
        break;
      else
        printf("Estado Civil invalido!");
    }

    printf("\nNome: %s Idade: %i Salario: %.2f Sexo: %c Estado: %c", nome, idade, salario, sexo, civil);
    printf("\n Tecle 1 para continuar 2-sair)");
    scanf("%i", &cont);
  } while (cont == 1);
}