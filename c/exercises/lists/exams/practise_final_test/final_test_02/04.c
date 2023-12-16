#include <stdio.h>
#include <stdlib.h>

int main() {
  int i = 1;
  int idade = 0, peso = 0, jejum = 0, sintomas = 0, doadores = 0,
      naoDoadores = 0;

  // a) Programa que pergunta para um n�mero n�o determinado de doares (1,0)
  do {
    // c) Consist�ncia na entrada de cada dado lido
    printf("\n====Doador %i====", i);

    printf("\nInforme sua idade: ");
    scanf("%i", &idade);

    if (idade < 0) {
      printf("\nIdade inv�lida");
      return 0;
    }

    printf("Qual � o seu peso? ");
    scanf("%i", &peso);

    if (peso < 0) {
      printf("\nPeso inv�lido");
      return 0;
    }

    printf("Voc� est� em jejum? [Digite 0 (FALSE) e 1 (TRUE)]: ");
    scanf("%i", &jejum);

    if (jejum < 0 && jejum > 1) {
      printf("\nJejum inv�lido");
      return 0;
    }

    printf("Voc� est� com sintomas gripais? [Digite 0 (FALSE) e 1 (TRUE)]: ");
    scanf("%i", &sintomas);

    if (sintomas < 0 && sintomas > 1) {
      printf("\nSintomas inv�lido");
      return 0;
    }

    if (idade > 18 && idade < 67 && peso > 50 && jejum == 0 && sintomas == 0) {
      printf("Doador %i, voc� PODE pode doar sangue", i);
      doadores++;
    } else {
      printf("Doador %i, voc� N�O doar sangue", i);
      naoDoadores++;
    }

    printf("\n\n");

    i++;
  } while (idade != 0);

  // b) Indique quantos usu�rios s�o doadores e quantos nao s�o (1,0)
  printf("\nH� %i doadores de sangue\nH� %i n�o doadores de sangue\n", doadores,
         naoDoadores);

  system("pause");
  return 0;
}
