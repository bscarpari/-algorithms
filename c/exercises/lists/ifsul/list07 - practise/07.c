#include <stdio.h>

/*
  Em uma empresa, existiam dois funcionários:
  o Mario que ganhava 1500,00 por mês, e o Rodrigo que
  ganhava 1100,00 por mês. 
  
  A empresa apresentou um   plano   para   que   o  
  Rodrigo   pudesse   ganhar   mais   que   o   Mario. 
  
  Considerando  que  a  empresa  daria  um  aumento  de 
  10%  ao  ano  para  o Mario  e  20%  para  o  Rodrigo, 
  quantos  anos  levaria  para  que  Rodrigo ultrapassasse
  o salário do Mário ?
*/

int main() {
  int anos = 0;
  float mario = 1500, rodrigo = 1100;

  do {
    mario += mario * 0.1;
    rodrigo += rodrigo * 0.2;
    anos++;
  } while (rodrigo < mario);

  printf("\nO Rodrigo ultrapassou o Mario em %d anos.\n", anos);
  
  return 0;

}