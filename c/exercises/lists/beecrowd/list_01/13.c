#include <stdio.h>
#include <math.h>

/*
  Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2)
  e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:

  Distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2))

  Exemplos de entrada:

  Entrada       Saída
  1.0 7.0       4.4721
  5.0 9.0      

 */

int main() {
    double x1, y1, x2, y2, distancia;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("%.4lf\n", distancia);

    return 0;
}