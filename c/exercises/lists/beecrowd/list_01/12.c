#include <stdio.h>

/*
  Calcule o consumo médio de um automóvel sendo fornecidos a distância total
  percorrida (em Km) e o total de combustível gasto (em litros).

  Apresente o valor que representa o consumo médio do automóvel com 3 casas 
  após a vírgula, seguido da mensagem "km/l".
*/

int main() {
  int totalDistance;
  double spendedFuel, averageConsumption;

  scanf("%i %lf", &totalDistance, &spendedFuel);

  averageConsumption = totalDistance / spendedFuel;

  printf("%.3lf km/l\n", averageConsumption);

  return 0;
}