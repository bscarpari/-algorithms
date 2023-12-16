#include <stdio.h>

/*
  Ler e calcular o dobro de um número,caso ele seja positivo
  e o seu triplo seja negativo, imprima o resultado
*/

int main() {
  int num;
 
  scanf("%d", &num);

  if (num > 0 && (num * 3) < 0) {
    printf("%d | %d\n", num, -num);
  }

  return 0;
}