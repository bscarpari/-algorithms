#include <stdio.h>

int main() {
  int num;

  scanf("%i", &num);

  if(num < 20)
    printf("\nMenor que 20");
  if(num == 20)
    printf("\nIgual a 20");
  if(num > 20)
    printf("\nMaior que 20");

  return 0;
}