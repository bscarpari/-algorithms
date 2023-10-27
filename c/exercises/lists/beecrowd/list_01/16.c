#include <stdio.h>

/*
  Leia um valor inteiro, que é o tempo de duração em segundos de um determinado
  evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.
*/

int main() {
  int time, hours, minutes, seconds;

  scanf("%i", &time);

  hours = time / 3600;
  minutes = (time % 3600) / 60;
  seconds = (time % 3600) % 60;

  printf("%i:%i:%i\n", hours, minutes, seconds);

  return 0;
}