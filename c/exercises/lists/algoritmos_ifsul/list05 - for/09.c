#include <stdio.h>

/*
  Faça um programa que calcula a tabuada
  de num número lido.
*/

void tabuada(int num, int limit) {
  if(num <= 0) return;

  for(int i = 1; i <= limit; i++)
    printf("%d x %d = %d\n", i, num, i * num);
}

int main() {
  int num;

  scanf("%d", &num);
  tabuada(num, 10);

  return 0;
}